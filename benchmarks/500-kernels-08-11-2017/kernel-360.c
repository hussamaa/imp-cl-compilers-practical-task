// --atomics 5 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 69,59,1 -l 23,1,1
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

__constant uint32_t permutations[10][23] = {
{15,6,10,1,3,19,13,18,9,22,7,14,11,16,20,12,8,21,5,0,4,2,17}, // permutation 0
{8,0,3,4,5,19,17,12,9,22,1,6,11,2,20,16,14,7,15,21,18,13,10}, // permutation 1
{14,5,7,21,20,18,12,10,16,15,0,9,6,1,8,19,3,4,11,22,17,13,2}, // permutation 2
{13,3,5,21,19,7,1,20,14,15,11,12,22,2,6,10,16,8,4,18,17,0,9}, // permutation 3
{21,9,2,3,16,11,8,6,18,0,5,1,17,14,10,19,22,13,4,20,15,12,7}, // permutation 4
{15,2,14,12,20,8,10,22,3,4,17,16,1,19,21,5,6,18,7,13,11,9,0}, // permutation 5
{15,14,5,7,16,12,19,8,3,9,17,11,20,13,2,22,18,0,4,1,21,10,6}, // permutation 6
{3,22,9,20,6,11,2,17,19,8,14,1,10,0,7,15,16,12,13,5,4,21,18}, // permutation 7
{10,2,5,7,19,17,11,9,3,16,8,12,13,22,21,0,1,14,20,15,4,6,18}, // permutation 8
{8,20,16,18,6,12,19,13,2,11,3,22,9,7,17,15,5,14,1,10,0,4,21} // permutation 9
};

// Seed: 1989722876

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile VECTOR(int16_t, 4) g_20;
    uint16_t g_22;
    int32_t g_31;
    uint8_t g_84[7];
    int16_t g_96;
    uint64_t g_99;
    uint32_t g_121[9];
    uint32_t g_123;
    VECTOR(uint16_t, 2) g_126;
    int16_t g_142;
    int32_t g_147;
    VECTOR(int32_t, 2) g_152;
    uint16_t g_169;
    VECTOR(int8_t, 16) g_183;
    VECTOR(uint64_t, 8) g_184;
    volatile int64_t g_219;
    volatile int64_t *g_218;
    VECTOR(int8_t, 16) g_234;
    VECTOR(int32_t, 8) g_238;
    int32_t *g_237;
    int64_t g_252;
    uint8_t *g_262;
    VECTOR(uint32_t, 8) g_283;
    int32_t g_302;
    VECTOR(uint32_t, 16) g_329;
    VECTOR(int64_t, 8) g_331;
    uint8_t g_338[9][5][5];
    VECTOR(uint8_t, 4) g_341;
    volatile int32_t g_359;
    volatile int32_t *g_358;
    int32_t g_386;
    int32_t *g_385;
    VECTOR(int32_t, 16) g_389;
    VECTOR(uint16_t, 2) g_398;
    VECTOR(int16_t, 2) g_404;
    VECTOR(int32_t, 4) g_421;
    uint16_t *g_428;
    uint16_t **g_427;
    int32_t ** volatile g_478;
    VECTOR(int64_t, 16) g_500;
    volatile VECTOR(int32_t, 4) g_513;
    int64_t g_516[7];
    int64_t *g_521[9];
    int64_t **g_520[6][10];
    int64_t *** volatile g_519;
    int8_t g_569;
    uint32_t g_571;
    volatile VECTOR(int32_t, 2) g_632;
    VECTOR(uint16_t, 16) g_645;
    VECTOR(int8_t, 8) g_681;
    volatile VECTOR(int16_t, 16) g_690;
    volatile VECTOR(int16_t, 2) g_691;
    volatile VECTOR(int16_t, 2) g_692;
    int64_t g_745;
    VECTOR(int16_t, 8) g_761;
    VECTOR(int16_t, 16) g_763;
    VECTOR(int16_t, 4) g_765;
    VECTOR(int16_t, 4) g_766;
    VECTOR(int8_t, 2) g_781;
    VECTOR(int8_t, 2) g_782;
    volatile uint16_t g_793;
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
int16_t  func_1(struct S0 * p_825);
int32_t  func_2(uint64_t  p_3, struct S0 * p_825);
uint64_t  func_4(uint32_t  p_5, int32_t  p_6, uint64_t  p_7, int32_t  p_8, struct S0 * p_825);
uint16_t  func_15(int8_t  p_16, int32_t  p_17, struct S0 * p_825);
uint16_t  func_38(uint32_t  p_39, uint64_t  p_40, int32_t * p_41, int32_t  p_42, int8_t  p_43, struct S0 * p_825);
int16_t  func_51(uint64_t  p_52, int32_t * p_53, uint16_t * p_54, int32_t * p_55, struct S0 * p_825);
uint16_t * func_56(uint16_t * p_57, int32_t * p_58, uint8_t  p_59, uint16_t * p_60, uint64_t  p_61, struct S0 * p_825);
uint16_t * func_62(uint32_t  p_63, uint32_t  p_64, int32_t * p_65, uint16_t * p_66, struct S0 * p_825);
uint32_t  func_67(int8_t  p_68, int64_t  p_69, uint32_t  p_70, struct S0 * p_825);
int64_t  func_71(uint16_t * p_72, int32_t * p_73, int16_t  p_74, uint64_t  p_75, int32_t  p_76, struct S0 * p_825);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_825->l_comm_values p_825->g_20 p_825->g_22 p_825->g_218 p_825->g_219 p_825->g_761 p_825->g_763 p_825->g_765 p_825->g_766 p_825->g_781 p_825->g_782 p_825->g_262 p_825->g_84 p_825->g_358 p_825->g_745 p_825->g_341 p_825->g_398 p_825->g_302 p_825->g_359 p_825->g_793 p_825->g_31 p_825->g_147 p_825->g_386 p_825->g_385 p_825->g_427 p_825->g_428 p_825->g_283 p_825->g_123 p_825->g_142 p_825->g_421 p_825->g_329
 * writes: p_825->g_22 p_825->g_645 p_825->g_359 p_825->g_793 p_825->g_386 p_825->g_238 p_825->g_96
 */
int16_t  func_1(struct S0 * p_825)
{ /* block id: 4 */
    uint16_t *l_21 = &p_825->g_22;
    int32_t l_785[1][5][8] = {{{0x1140554BL,0x64729F3DL,2L,0x1B345832L,2L,0x64729F3DL,0x1140554BL,0x54CEB82BL},{0x1140554BL,0x64729F3DL,2L,0x1B345832L,2L,0x64729F3DL,0x1140554BL,0x54CEB82BL},{0x1140554BL,0x64729F3DL,2L,0x1B345832L,2L,0x64729F3DL,0x1140554BL,0x54CEB82BL},{0x1140554BL,0x64729F3DL,2L,0x1B345832L,2L,0x64729F3DL,0x1140554BL,0x54CEB82BL},{0x1140554BL,0x64729F3DL,2L,0x1B345832L,2L,0x64729F3DL,0x1140554BL,0x54CEB82BL}}};
    int32_t *l_797 = &l_785[0][3][3];
    int32_t *l_798[2];
    int8_t l_799 = (-1L);
    int16_t l_800 = 0x2F0CL;
    int64_t l_801 = 0x1477D1FCA50F98EBL;
    uint16_t l_802 = 0x0F78L;
    int32_t **l_819 = &l_798[1];
    int32_t ***l_818 = &l_819;
    int32_t ***l_820 = (void*)0;
    uint32_t l_824 = 1UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_798[i] = (void*)0;
    l_785[0][3][3] = func_2(func_4((safe_mul_func_int8_t_s_s(((safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(func_15((255UL ^ p_825->l_comm_values[(safe_mod_func_uint32_t_u_u(p_825->tid, 23))]), (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(p_825->g_20.zw)).odd, ((*l_21)--))), p_825), p_825->g_782.y)), p_825->g_745)) , (~(0L < (((0x44L >= ((((void*)0 == &p_825->g_427) == 1L) ^ l_785[0][3][3])) & 0UL) && 0L)))), l_785[0][3][3])), p_825->g_341.z, p_825->g_398.y, p_825->g_302, p_825), p_825);
    ++l_802;
    l_797 = &l_785[0][3][3];
    for (p_825->g_386 = 0; (p_825->g_386 >= (-23)); p_825->g_386 = safe_sub_func_int64_t_s_s(p_825->g_386, 1))
    { /* block id: 341 */
        VECTOR(uint8_t, 8) l_809 = (VECTOR(uint8_t, 8))(0xB5L, (VECTOR(uint8_t, 4))(0xB5L, (VECTOR(uint8_t, 2))(0xB5L, 5UL), 5UL), 5UL, 0xB5L, 5UL);
        uint16_t *l_821 = (void*)0;
        int32_t l_822 = 0x3A77008BL;
        uint8_t l_823 = 0xEBL;
        int i;
        (*l_797) = ((((safe_add_func_int16_t_s_s(((*p_825->g_358) <= (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(1UL, 251UL)), 0x1CL, 9UL)).ywxwzyzxxyzxxwyz, ((VECTOR(uint8_t, 8))(l_809.s44057521)).s6130712113475561))).s6d56, (uint8_t)(l_822 |= (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((*p_825->g_385) , func_56(func_56((*p_825->g_427), &p_825->g_302, ((safe_mod_func_int64_t_s_s(p_825->g_763.s9, 7UL)) < (((*l_797) &= l_809.s7) , ((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0x3EFDL, 5UL)).xxxxyxxyxxxyxxxy)).sca, ((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 8))((l_818 == l_820), 0L, ((VECTOR(int16_t, 2))(0x54EEL)), 0x69C8L, 0x4A53L, 0x52B0L, 0L)), ((VECTOR(int16_t, 8))(0x42FFL))))).s1656070350044554, ((VECTOR(uint16_t, 16))(0UL)), ((VECTOR(uint16_t, 16))(65535UL))))).sb0)))))).even)), l_821, p_825->g_283.s2, p_825), &p_825->g_147, (*p_825->g_262), (*p_825->g_427), p_825->g_142, p_825)) == &l_800) , 0x84L), 0x18L)), GROUP_DIVERGE(1, 1))), 1UL))), (uint8_t)(*p_825->g_262)))), ((VECTOR(uint8_t, 4))(4UL))))), (*l_797), l_823, ((VECTOR(uint16_t, 4))(0x6B18L)), 0x929CL, p_825->g_421.z, l_824, l_809.s4, 65530UL, 0x9BF2L)).s6 & 7L)), l_809.s4)) ^ GROUP_DIVERGE(0, 1)) || l_809.s0) < 1L);
    }
    return p_825->g_329.sa;
}


/* ------------------------------------------ */
/* 
 * reads : p_825->g_147 p_825->g_358 p_825->g_359
 * writes: p_825->g_359
 */
int32_t  func_2(uint64_t  p_3, struct S0 * p_825)
{ /* block id: 332 */
    int32_t *l_796 = &p_825->g_147;
    l_796 = l_796;
    (*p_825->g_358) |= (*l_796);
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_825->g_358 p_825->g_359 p_825->g_793 p_825->g_31
 * writes: p_825->g_359 p_825->g_793
 */
uint64_t  func_4(uint32_t  p_5, int32_t  p_6, uint64_t  p_7, int32_t  p_8, struct S0 * p_825)
{ /* block id: 328 */
    int32_t l_786[1];
    int32_t *l_787 = &p_825->g_31;
    int32_t *l_788 = &p_825->g_31;
    int32_t *l_789[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t l_790[9] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
    int32_t l_791 = 0x4BB34A54L;
    int32_t l_792[4];
    int i;
    for (i = 0; i < 1; i++)
        l_786[i] = 0x75932B4EL;
    for (i = 0; i < 4; i++)
        l_792[i] = 0x5BDA7474L;
    (*p_825->g_358) |= 0x7988F62DL;
    p_825->g_793--;
    return (*l_787);
}


/* ------------------------------------------ */
/* 
 * reads : p_825->g_218 p_825->g_219 p_825->g_761 p_825->g_763 p_825->g_765 p_825->g_766 p_825->g_781 p_825->g_782 p_825->g_262 p_825->g_84 p_825->g_358
 * writes: p_825->g_645 p_825->g_359
 */
uint16_t  func_15(int8_t  p_16, int32_t  p_17, struct S0 * p_825)
{ /* block id: 6 */
    int8_t l_28 = 0x6EL;
    VECTOR(int16_t, 8) l_36 = (VECTOR(int16_t, 8))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x11D7L), 0x11D7L), 0x11D7L, (-9L), 0x11D7L);
    int32_t l_630 = 0x368C438EL;
    VECTOR(int64_t, 4) l_635 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x2C672FDFCC5255AEL), 0x2C672FDFCC5255AEL);
    int64_t ***l_651 = (void*)0;
    VECTOR(int16_t, 4) l_652 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L));
    int64_t **l_662 = (void*)0;
    uint16_t ***l_663 = &p_825->g_427;
    VECTOR(int16_t, 16) l_689 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3087L), 0x3087L), 0x3087L, 1L, 0x3087L, (VECTOR(int16_t, 2))(1L, 0x3087L), (VECTOR(int16_t, 2))(1L, 0x3087L), 1L, 0x3087L, 1L, 0x3087L);
    int32_t l_701 = (-1L);
    int32_t l_703 = (-5L);
    int32_t l_704 = 0x5B36FB8EL;
    int32_t l_705 = 0x1FCBDBA5L;
    int32_t l_706 = 0L;
    int32_t l_707 = 0x4A3A1AC9L;
    int32_t l_708 = (-1L);
    int32_t l_710 = 0x0DEED34EL;
    int32_t l_711[5][5] = {{(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L)}};
    int64_t *l_722 = (void*)0;
    int64_t **l_721[3][10] = {{&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722}};
    VECTOR(uint16_t, 16) l_756 = (VECTOR(uint16_t, 16))(0x59ACL, (VECTOR(uint16_t, 4))(0x59ACL, (VECTOR(uint16_t, 2))(0x59ACL, 0UL), 0UL), 0UL, 0x59ACL, 0UL, (VECTOR(uint16_t, 2))(0x59ACL, 0UL), (VECTOR(uint16_t, 2))(0x59ACL, 0UL), 0x59ACL, 0UL, 0x59ACL, 0UL);
    VECTOR(int16_t, 2) l_762 = (VECTOR(int16_t, 2))(0L, (-1L));
    VECTOR(int16_t, 2) l_764 = (VECTOR(int16_t, 2))(8L, 0x3AE3L);
    VECTOR(int16_t, 8) l_767 = (VECTOR(int16_t, 8))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x63C3L), 0x63C3L), 0x63C3L, (-3L), 0x63C3L);
    VECTOR(int8_t, 16) l_768 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 6L), 6L), 6L, 0L, 6L, (VECTOR(int8_t, 2))(0L, 6L), (VECTOR(int8_t, 2))(0L, 6L), 0L, 6L, 0L, 6L);
    VECTOR(int8_t, 8) l_769 = (VECTOR(int8_t, 8))(0x6DL, (VECTOR(int8_t, 4))(0x6DL, (VECTOR(int8_t, 2))(0x6DL, 0x21L), 0x21L), 0x21L, 0x6DL, 0x21L);
    int8_t *l_776 = (void*)0;
    int8_t *l_777 = (void*)0;
    int8_t *l_778[1][2];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_778[i][j] = (void*)0;
    }
    for (p_16 = 0; (p_16 <= (-4)); --p_16)
    { /* block id: 9 */
        uint16_t *l_303 = (void*)0;
        int32_t l_362 = (-8L);
        VECTOR(int64_t, 16) l_649 = (VECTOR(int64_t, 16))(0x328D1FAE48190A35L, (VECTOR(int64_t, 4))(0x328D1FAE48190A35L, (VECTOR(int64_t, 2))(0x328D1FAE48190A35L, 0L), 0L), 0L, 0x328D1FAE48190A35L, 0L, (VECTOR(int64_t, 2))(0x328D1FAE48190A35L, 0L), (VECTOR(int64_t, 2))(0x328D1FAE48190A35L, 0L), 0x328D1FAE48190A35L, 0L, 0x328D1FAE48190A35L, 0L);
        VECTOR(uint64_t, 16) l_650 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 3UL), 3UL), 3UL, 0UL, 3UL, (VECTOR(uint64_t, 2))(0UL, 3UL), (VECTOR(uint64_t, 2))(0UL, 3UL), 0UL, 3UL, 0UL, 3UL);
        int64_t **l_656 = &p_825->g_521[3];
        int16_t l_664[7];
        VECTOR(uint16_t, 8) l_688 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xE9E7L), 0xE9E7L), 0xE9E7L, 65535UL, 0xE9E7L);
        VECTOR(int16_t, 2) l_694 = (VECTOR(int16_t, 2))(1L, (-1L));
        int32_t l_709 = 0x4515B0ECL;
        int32_t l_712 = 5L;
        int32_t l_713 = 0x7F8717CAL;
        int i;
        for (i = 0; i < 7; i++)
            l_664[i] = 1L;
        (1 + 1);
    }
    l_630 = (safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((p_825->g_645.s4 = p_16) || ((void*)0 != &p_825->g_569)), (safe_div_func_uint32_t_u_u(((l_711[4][1] = ((VECTOR(uint16_t, 16))(l_756.sc01424582fd22ef2)).s9) < l_630), l_635.z)))), ((safe_unary_minus_func_int8_t_s(p_17)) || (safe_add_func_uint64_t_u_u((p_16 , 0xC8C5F04698DF89C2L), (*p_825->g_218))))));
    (*p_825->g_358) = ((safe_unary_minus_func_int16_t_s(((((p_16 != (*p_825->g_218)) , p_16) == (l_710 = p_16)) , ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_825->g_761.s5473)))).hi, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_762.xxyyyyxyxxyyxyxx)).s4c)))), ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_825->g_763.s9f11de65)))).s27, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(1L, 8L)), 0L, 0x4E59L)).hi, ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_764.yxxxyyyyxxyxyxxy)))).hi)).s1721615004200650, ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_825->g_765.zxwz)))).wyyyzyxz, ((VECTOR(int16_t, 2))(p_825->g_766.zw)).xxxyyyyx))).s2307327122262522))).sddde, ((VECTOR(int16_t, 16))(l_767.s1272565333603467)).sc2d1, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x3DL, 0x14L, 0x04L, 0x48L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x3EL, 9L, 0x41L, 0L, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(l_768.saf2365135bd21632)).sef, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_769.s70)).yyxyxxxyxxxxxyxy)).s83, ((VECTOR(int8_t, 2))(0L, 0x1BL))))), 0x1FL, 0L, (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((p_16 = l_769.s2) != (-1L)) , (FAKE_DIVERGE(p_825->local_1_offset, get_local_id(1), 10) <= p_825->g_765.y)) ^ (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 8))(p_825->g_781.xxyyxxxy)).s04, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(p_825->g_782.xxxx)).hi, (int8_t)0x04L))), ((VECTOR(int8_t, 2))(2L)), ((VECTOR(int8_t, 2))(0L)))))))).even, (-1L)))), (*p_825->g_262))), 0x13L)), 5)), ((VECTOR(int8_t, 2))((-7L))), 0x2CL, ((VECTOR(int8_t, 2))(0x55L)), 0x57L, (-1L))).s3e)), 0L, 0x7CL)).s5716035143757601)).odd, ((VECTOR(uint8_t, 8))(1UL))))).s30, ((VECTOR(int16_t, 2))(0x299BL))))).xxxx))).lo, ((VECTOR(int16_t, 2))((-1L)))))).xyxyyxxy)), ((VECTOR(int16_t, 8))(0L)), ((VECTOR(int16_t, 8))(1L))))).even)), ((VECTOR(int16_t, 4))((-1L)))))).odd)))))), (-3L), 0x33F8L)), (int16_t)6L))).odd, ((VECTOR(int16_t, 2))((-1L)))))).xyyx)).hi, ((VECTOR(int16_t, 2))(0x7BEDL))))).yyxyyyxyxyxyxyxy, ((VECTOR(int16_t, 16))(8L)), ((VECTOR(int16_t, 16))(0x33F1L))))).s6))) != l_704);
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_825->g_252 p_825->g_358 p_825->g_359 p_825->g_123 p_825->g_500 p_825->g_152 p_825->g_302 p_825->g_513 p_825->g_389 p_825->g_385 p_825->g_31 p_825->g_386 p_825->g_516 p_825->g_183 p_825->g_519 p_825->g_218 p_825->g_219 p_825->g_571 p_825->g_404 p_825->g_99 p_825->g_569 p_825->g_169 p_825->g_22 p_825->g_238
 * writes: p_825->g_252 p_825->g_302 p_825->g_338 p_825->g_84 p_825->g_31 p_825->g_386 p_825->g_520 p_825->g_237 p_825->g_571 p_825->g_99 p_825->g_569 p_825->g_169 p_825->g_22 p_825->g_121 p_825->g_126 p_825->g_359
 */
uint16_t  func_38(uint32_t  p_39, uint64_t  p_40, int32_t * p_41, int32_t  p_42, int8_t  p_43, struct S0 * p_825)
{ /* block id: 202 */
    uint16_t **l_501 = &p_825->g_428;
    int32_t l_504[10][2][7] = {{{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L},{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L}},{{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L},{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L}},{{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L},{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L}},{{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L},{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L}},{{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L},{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L}},{{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L},{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L}},{{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L},{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L}},{{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L},{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L}},{{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L},{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L}},{{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L},{0x486022B3L,6L,0x591F68D9L,9L,0x591F68D9L,6L,0x486022B3L}}};
    uint8_t *l_506 = &p_825->g_338[2][1][0];
    uint16_t l_509 = 1UL;
    uint8_t *l_510 = &p_825->g_84[6];
    int64_t *l_518[8];
    int64_t **l_517 = &l_518[4];
    int32_t **l_539 = &p_825->g_237;
    int32_t ***l_538 = &l_539;
    int16_t l_547 = 0x47F2L;
    int32_t *l_565 = &p_825->g_31;
    VECTOR(int8_t, 8) l_582 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x1BL), 0x1BL), 0x1BL, 0L, 0x1BL);
    VECTOR(int8_t, 8) l_583 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x36L), 0x36L), 0x36L, (-5L), 0x36L);
    VECTOR(int8_t, 16) l_585 = (VECTOR(int8_t, 16))(0x4BL, (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, 0x05L), 0x05L), 0x05L, 0x4BL, 0x05L, (VECTOR(int8_t, 2))(0x4BL, 0x05L), (VECTOR(int8_t, 2))(0x4BL, 0x05L), 0x4BL, 0x05L, 0x4BL, 0x05L);
    int32_t l_592 = 1L;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_518[i] = &p_825->g_252;
    for (p_825->g_252 = 0; (p_825->g_252 > (-16)); --p_825->g_252)
    { /* block id: 205 */
        uint64_t *l_494 = &p_825->g_99;
        VECTOR(int32_t, 4) l_505 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
        int i;
        (*p_41) = (((safe_mul_func_uint8_t_u_u(((((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))((-5L), (l_494 == &p_825->g_99), 0L, (-9L))).yxxyzxzx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((*p_825->g_358), 0x5748DB43L, ((p_42 | ((p_825->g_123 | (safe_rshift_func_int8_t_s_u((((safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 4))(p_825->g_500.s6eac)).w)) , l_501) == &p_825->g_428), 5))) <= 2UL)) == ((safe_lshift_func_uint16_t_u_u((l_504[8][0][3] ^ p_39), p_40)) | 0x39086085L)), 0x6353B60FL, ((VECTOR(int32_t, 2))((-1L))), 0x5C0A3C16L, 0L, ((VECTOR(int32_t, 8))(0L)))).lo))))), ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 8))(0x6F46830EL))))).s6 & (-1L)) ^ p_825->g_152.y), p_43)) == l_505.w) < GROUP_DIVERGE(2, 1));
    }
    if (((((+(l_504[8][1][2] = ((*l_506) = l_504[8][0][3]))) > ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))((safe_mod_func_int32_t_s_s(((*p_825->g_385) ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((p_39 == ((((*l_510) = l_509) , l_506) == l_506)) | (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(65535UL, 0UL)))).xxxyxyxx)).s7, 8UL))), (*p_41), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(p_825->g_513.xzyz)).even, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0x3651L, l_509, ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 2))(0x1A5EL, 0x7783L)).xyyxyxxyyyxxxyxx, ((VECTOR(int16_t, 16))((-8L), (-1L), ((safe_mul_func_int8_t_s_s(p_825->g_389.s5, p_43)) ^ 0x0CL), ((VECTOR(int16_t, 2))(0x5348L)), ((VECTOR(int16_t, 8))(6L)), ((VECTOR(int16_t, 2))(0x22DFL)), (-1L)))))).s9232, ((VECTOR(int16_t, 4))(0x6515L)), ((VECTOR(int16_t, 4))(0L))))), 0x47E8L, (-7L))).s36)).xyyy, ((VECTOR(int16_t, 4))(0x48D8L))))), ((VECTOR(uint16_t, 4))(0xA033L))))), ((VECTOR(int32_t, 4))(0x59A9D982L)), ((VECTOR(int32_t, 4))(2L))))).lo))), ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 2))(0x11EF6329L)), 0x271E0F28L, 0L, 1L, 0x19419C56L, 0x61464F7EL, 0x717195A0L)).odd)).odd, ((VECTOR(int32_t, 4))(1L))))), 0x19953FFBL, 0x6455CEDBL, 1L, ((VECTOR(int32_t, 2))(0L)), 0x5A64AC66L, l_509, 0L, ((VECTOR(int32_t, 4))(0L)))))).sf2)), 5L, 0x1C9E2AB2L)).zxyzyzyx)).s53)).odd), p_825->g_516[3])), ((VECTOR(int8_t, 2))(0x6DL)), (-1L))), ((VECTOR(int8_t, 4))(6L))))).zzzyxyww, ((VECTOR(int8_t, 8))(0x4AL))))).s2421605415052546)).s6) && 0x60FB54DAC622D866L) > p_825->g_183.s3))
    { /* block id: 212 */
        VECTOR(uint8_t, 4) l_532 = (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x5CL), 0x5CL);
        uint16_t ***l_580 = (void*)0;
        int32_t l_593 = (-1L);
        int i;
        (*p_825->g_519) = (l_504[8][0][3] , l_517);
        if ((atomic_inc(&p_825->l_atomic_input[3]) == 5))
        { /* block id: 215 */
            uint32_t l_522 = 1UL;
            int32_t l_523 = 0x7A60ED02L;
            int8_t l_524[10][7][1] = {{{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL}},{{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL}},{{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL}},{{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL}},{{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL}},{{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL}},{{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL}},{{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL}},{{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL}},{{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL},{0x7DL}}};
            int16_t l_525 = 0x09E3L;
            int i, j, k;
            l_523 = l_522;
            l_525 = l_524[6][6][0];
            unsigned int result = 0;
            result += l_522;
            result += l_523;
            int l_524_i0, l_524_i1, l_524_i2;
            for (l_524_i0 = 0; l_524_i0 < 10; l_524_i0++) {
                for (l_524_i1 = 0; l_524_i1 < 7; l_524_i1++) {
                    for (l_524_i2 = 0; l_524_i2 < 1; l_524_i2++) {
                        result += l_524[l_524_i0][l_524_i1][l_524_i2];
                    }
                }
            }
            result += l_525;
            atomic_add(&p_825->l_special_values[3], result);
        }
        else
        { /* block id: 218 */
            (1 + 1);
        }
        for (p_825->g_302 = 0; (p_825->g_302 > 13); ++p_825->g_302)
        { /* block id: 223 */
            uint64_t *l_533 = &p_825->g_99;
            uint32_t l_546 = 0x1F102CE7L;
            VECTOR(int16_t, 16) l_564 = (VECTOR(int16_t, 16))(0x386AL, (VECTOR(int16_t, 4))(0x386AL, (VECTOR(int16_t, 2))(0x386AL, 1L), 1L), 1L, 0x386AL, 1L, (VECTOR(int16_t, 2))(0x386AL, 1L), (VECTOR(int16_t, 2))(0x386AL, 1L), 0x386AL, 1L, 0x386AL, 1L);
            int64_t ***l_566 = (void*)0;
            uint32_t *l_570 = &p_825->g_571;
            VECTOR(int8_t, 16) l_581 = (VECTOR(int8_t, 16))(0x61L, (VECTOR(int8_t, 4))(0x61L, (VECTOR(int8_t, 2))(0x61L, 0x45L), 0x45L), 0x45L, 0x61L, 0x45L, (VECTOR(int8_t, 2))(0x61L, 0x45L), (VECTOR(int8_t, 2))(0x61L, 0x45L), 0x61L, 0x45L, 0x61L, 0x45L);
            VECTOR(int8_t, 2) l_584 = (VECTOR(int8_t, 2))(0x46L, 2L);
            int32_t *l_594 = &l_504[3][1][4];
            int i;
            (*p_825->g_385) = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_532.yywxxzywzyyxxzzz)).se, (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((--(*l_533)) != FAKE_DIVERGE(p_825->global_1_offset, get_global_id(1), 10)), p_39, 4L, 0x09D7250043F1CDBCL)).yzzzxwxw)).s2 > (safe_lshift_func_uint16_t_u_s(l_532.w, ((*p_41) , (l_538 != (((l_532.w , (safe_rshift_func_uint8_t_u_u(0xF5L, GROUP_DIVERGE(2, 1)))) != (((((safe_add_func_int8_t_s_s(0x4EL, (safe_sub_func_int32_t_s_s((l_546 = ((*p_825->g_218) == l_532.y)), p_825->g_389.sa)))) , (*p_41)) , p_43) != l_547) > p_43)) , (void*)0)))))))), 1));
            for (p_825->g_386 = 0; (p_825->g_386 < (-24)); p_825->g_386 = safe_sub_func_uint16_t_u_u(p_825->g_386, 7))
            { /* block id: 229 */
                if (l_546)
                    break;
                for (p_42 = 0; (p_42 >= (-10)); p_42 = safe_sub_func_int32_t_s_s(p_42, 6))
                { /* block id: 233 */
                    if ((*p_41))
                        break;
                }
            }
            for (l_509 = 22; (l_509 <= 40); l_509 = safe_add_func_int64_t_s_s(l_509, 3))
            { /* block id: 239 */
                (*l_539) = ((p_39 , ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))((-2L), 1L)).xxxy, ((VECTOR(int32_t, 4))((safe_div_func_uint16_t_u_u(((p_39 , ((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((1L <= l_532.w), (~(*p_41)))), p_39)) & (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_564.sf695bf62)).even)).odd)))).hi, l_546)), 251UL)))) >= (-6L)), 0x472EL)), 0x1845B8D6L, 0x32E5081BL, 0x5CA7A6CAL)), ((VECTOR(int32_t, 4))(0x06CA4E44L))))).z) , l_565);
                if ((*p_825->g_385))
                    break;
            }
            (*l_594) ^= ((VECTOR(int32_t, 16))((&l_517 == l_566), ((((safe_mul_func_int8_t_s_s((~p_43), ((((*l_570)++) , (l_593 = ((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_564.s6, ((((*p_825->g_385) = ((((safe_mul_func_int16_t_s_s((p_39 ^ ((+((l_580 = l_580) == &p_825->g_427)) , (((((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0L, (-4L), 0x6EL, 0x73L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_581.se9)).xxxy)), ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_582.s20)), 0x10L, (-1L))).wxzzwzwx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))((-8L), 0x73L)).yxyxxyxx, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(l_583.s42566535)).s66, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_584.xyyxxyxyyxyxyyxx)).hi)).s22, ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(l_585.s030b)).xwzxyzyz, ((VECTOR(int8_t, 16))((safe_sub_func_int64_t_s_s(((p_825->g_404.y <= (++(*l_533))) | ((safe_mod_func_int64_t_s_s((*p_825->g_218), p_825->g_389.sa)) & p_825->g_569)), (-1L))), 0x32L, 1L, 0L, ((VECTOR(int8_t, 2))(0x05L)), 0x1BL, ((VECTOR(int8_t, 2))(0x74L)), ((VECTOR(int8_t, 2))(0L)), (-6L), (-8L), p_825->g_516[3], 0x34L, 5L)).even, ((VECTOR(int8_t, 8))(0x02L))))).s0407471574666016, ((VECTOR(int8_t, 16))(0x33L)), ((VECTOR(int8_t, 16))(0x2DL))))), ((VECTOR(int8_t, 16))((-7L)))))).s54))).xxxxyxxx))).odd)).wyyywwxy))))).sc | l_584.y) , GROUP_DIVERGE(2, 1)) || l_564.sb) < p_42) , l_532.w))), l_564.sa)) | l_592) <= FAKE_DIVERGE(p_825->global_1_offset, get_global_id(1), 10)) > 0x6BC655D077A532CCL)) ^ p_42) || p_40))), p_43)) >= p_40))) && l_584.y))) ^ 0L) != FAKE_DIVERGE(p_825->group_2_offset, get_group_id(2), 10)) , 0L), ((VECTOR(int32_t, 2))(0x630D37B5L)), 0x0BE7CF87L, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 2))(1L)), (-1L), (*p_825->g_358), l_564.s9, 0L, (-1L))).s4;
        }
    }
    else
    { /* block id: 250 */
        VECTOR(uint32_t, 8) l_601 = (VECTOR(uint32_t, 8))(0xAA265930L, (VECTOR(uint32_t, 4))(0xAA265930L, (VECTOR(uint32_t, 2))(0xAA265930L, 4UL), 4UL), 4UL, 0xAA265930L, 4UL);
        VECTOR(int32_t, 16) l_621 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x2D97B924L), 0x2D97B924L), 0x2D97B924L, (-2L), 0x2D97B924L, (VECTOR(int32_t, 2))((-2L), 0x2D97B924L), (VECTOR(int32_t, 2))((-2L), 0x2D97B924L), (-2L), 0x2D97B924L, (-2L), 0x2D97B924L);
        uint32_t l_624 = 6UL;
        int i;
        for (p_825->g_252 = 0; (p_825->g_252 == (-28)); --p_825->g_252)
        { /* block id: 253 */
            int32_t *l_597 = (void*)0;
            int32_t *l_598 = &p_825->g_147;
            int32_t *l_599 = &l_592;
            int32_t *l_600[6][9][4] = {{{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]}},{{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]}},{{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]}},{{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]}},{{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]}},{{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]},{&p_825->g_147,&p_825->g_147,&p_825->g_302,&l_504[5][0][5]}}};
            int8_t *l_606 = (void*)0;
            int8_t *l_607 = (void*)0;
            int8_t *l_608 = &p_825->g_569;
            uint16_t *l_609 = (void*)0;
            uint16_t *l_610 = &p_825->g_169;
            uint16_t *l_613 = &p_825->g_22;
            VECTOR(int16_t, 8) l_618 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x05A7L), 0x05A7L), 0x05A7L, (-2L), 0x05A7L);
            uint8_t l_625 = 0UL;
            uint16_t *l_626 = (void*)0;
            uint16_t *l_627[7];
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_627[i] = &l_509;
            l_601.s0++;
            (*p_41) = (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(1L, 0x35CCL)), 0L, 0x6581L)).z || ((((*l_610) &= ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(6UL, (((safe_rshift_func_int8_t_s_s(0L, ((*l_608) = 0x2CL))) , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x4078L, 0x721EL)).xyyx)).w) > (*l_565)), 65531UL, 65527UL)).hi)).lo) >= (p_825->g_126.y = (((safe_add_func_int64_t_s_s((((++(*l_613)) && FAKE_DIVERGE(p_825->group_1_offset, get_group_id(1), 10)) != (safe_div_func_int16_t_s_s((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(l_618.s1302)).lo, (int16_t)(safe_rshift_func_uint8_t_u_u((5UL ^ (((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(0x5DE82DCBL, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_621.s92a27e0f0c8b8570)).s2d, ((VECTOR(int32_t, 8))(0x34C92B26L, (((safe_mul_func_uint16_t_u_u((l_601.s7 == p_39), p_39)) == ((p_825->g_121[4] = (l_621.s1 || 255UL)) || l_624)) && p_825->g_238.s7), 0x58127AF1L, (*p_825->g_385), l_625, 0x2CAC6BBCL, (-10L), 0x235525D1L)).s05))).xyxy)))), ((VECTOR(int32_t, 4))(5L))))), (*p_825->g_358), ((VECTOR(int32_t, 4))(0x1BF86969L)), 0x4942A9D6L, (-1L), ((VECTOR(int32_t, 2))(0L)), 1L, 0x0AA70C21L)).even, ((VECTOR(int32_t, 8))(1L))))).s1 <= 0xE3CAE8A7L)), 4))))), 0x7AE3L, 0L)))).xwxwwyzw)).s6 , l_601.s0), 5L))), p_39)) , 0x04E3DC51645CD2F7L) != l_601.s7))) , p_43));
            for (p_39 = 0; (p_39 > 17); ++p_39)
            { /* block id: 263 */
                (*p_825->g_358) &= l_621.sd;
            }
        }
    }
    return (*l_565);
}


/* ------------------------------------------ */
/* 
 * reads : p_825->g_389 p_825->g_184 p_825->g_234 p_825->g_147 p_825->g_398 p_825->g_404 p_825->g_169 p_825->g_331 p_825->g_31 p_825->g_386 p_825->g_421 p_825->g_84 p_825->g_252 p_825->g_427 p_825->g_329 p_825->g_218 p_825->g_219 p_825->g_121 p_825->g_283 p_825->g_99 p_825->g_152
 * writes: p_825->g_184 p_825->g_169 p_825->g_96 p_825->g_31 p_825->g_386 p_825->g_84 p_825->g_121 p_825->g_262 p_825->g_331 p_825->g_385 p_825->g_99 p_825->g_341
 */
int16_t  func_51(uint64_t  p_52, int32_t * p_53, uint16_t * p_54, int32_t * p_55, struct S0 * p_825)
{ /* block id: 162 */
    uint32_t l_387 = 0xB5BE354DL;
    VECTOR(int32_t, 4) l_388 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x11D493B6L), 0x11D493B6L);
    VECTOR(int32_t, 8) l_390 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x504F892FL), 0x504F892FL), 0x504F892FL, (-1L), 0x504F892FL);
    uint64_t *l_393[3][9] = {{&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99},{&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99},{&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99,&p_825->g_99}};
    VECTOR(uint16_t, 16) l_399 = (VECTOR(uint16_t, 16))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 65526UL), 65526UL), 65526UL, 65534UL, 65526UL, (VECTOR(uint16_t, 2))(65534UL, 65526UL), (VECTOR(uint16_t, 2))(65534UL, 65526UL), 65534UL, 65526UL, 65534UL, 65526UL);
    int16_t *l_402 = &p_825->g_142;
    int16_t **l_401 = &l_402;
    int16_t ***l_400[2][6][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    VECTOR(uint16_t, 2) l_403 = (VECTOR(uint16_t, 2))(0xFB30L, 0x0ECFL);
    uint8_t **l_406 = &p_825->g_262;
    uint8_t ***l_405 = &l_406;
    VECTOR(int64_t, 4) l_417 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 2L), 2L);
    int32_t *l_477 = (void*)0;
    int32_t *l_480 = (void*)0;
    int32_t *l_481 = (void*)0;
    int32_t *l_482 = &p_825->g_386;
    int32_t *l_483 = &p_825->g_31;
    int32_t *l_484 = (void*)0;
    int32_t *l_485 = (void*)0;
    int32_t *l_486[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_487 = 1UL;
    int i, j, k;
    if (((VECTOR(int32_t, 16))((l_387 , (l_388.y = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_388.wy)).xyxxyyxx)))).s4)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(p_825->g_389.s0083e1ddf37d5b8d)), ((VECTOR(int32_t, 2))(l_390.s03)).yyyxxxyyxxyxxxxy))).lo, (int32_t)(safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((l_388.x = ((p_825->g_184.s3++) == ((VECTOR(uint64_t, 4))(0UL, p_825->g_234.s3, 1UL, 0x3CF06E90CA4A02CCL)).z)) || (safe_lshift_func_int8_t_s_u(p_825->g_147, 5))), l_387, 0xC043AE6AL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 4))(p_825->g_398.yxyy)).zzyxzwwxywzyzyww, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0xE6C1L, 0UL, 0x32ECL, 2UL)), 5UL, ((VECTOR(uint16_t, 4))(0UL, ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_399.sf61b)).zxzywxzyyzxwxxzy)).sda, ((VECTOR(uint16_t, 4))((2UL > ((void*)0 == l_400[0][0][0])), ((VECTOR(uint16_t, 2))(l_403.yx)), 4UL)).even))), 0xEC73L)), ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0x6B82L, 0x00B5L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(p_825->g_404.yyxyxxxy)).lo, (int16_t)(((*l_405) = &p_825->g_262) != (void*)0), (int16_t)l_399.s5))))), 0x3644L, 0x24D6L)), 0x7308L, 0L, (-1L), p_52, p_52, 0x6A35L, 0x7043L, 4L)).s8f, ((VECTOR(int16_t, 2))(0x0139L))))), ((VECTOR(int16_t, 2))((-1L)))))).xyxy, ((VECTOR(uint16_t, 4))(8UL))))), 0x55F6L, 0UL, 0x3D1BL))))).lo)), p_825->g_234.sb, 0x429A58EBL, 0x491BDF67L, 0UL, 0UL)).se, 0x9E5850E0L)), (int32_t)(-7L)))))))), ((VECTOR(int32_t, 2))(6L)), l_390.s1, 1L, 1L, 0x02C6AA22L, 0x43773C3BL)).s7)
    { /* block id: 167 */
        uint8_t **l_415 = (void*)0;
        uint8_t *l_424 = &p_825->g_84[6];
        int8_t *l_431 = (void*)0;
        int8_t *l_432 = (void*)0;
        int32_t l_433[7][10][3] = {{{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L}},{{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L}},{{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L}},{{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L}},{{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L}},{{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L}},{{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L},{0x4DDD39F4L,0x0FA47EDBL,0x6C7DE986L}}};
        uint32_t *l_434 = &p_825->g_121[7];
        int i, j, k;
        for (p_825->g_169 = (-2); (p_825->g_169 == 45); p_825->g_169 = safe_add_func_int16_t_s_s(p_825->g_169, 5))
        { /* block id: 170 */
            uint32_t l_416 = 0x68D786CBL;
            uint8_t l_418 = 0xADL;
            (*p_53) = (safe_rshift_func_int16_t_s_s((p_825->g_96 = ((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((void*)0 != &p_52), (((void*)0 == l_415) == ((((~(0x75255A258CD01513L & ((l_416 >= (((VECTOR(int8_t, 2))(0x16L, 0x66L)).odd != (~(((VECTOR(int64_t, 16))(l_417.wyxyzzwyyyxzyyyx)).s5 > 0x28965A8C639169E0L)))) , p_825->g_331.s2))) && (l_418 != 0x3FC06C6AL)) || 1L) & 0x47087E233825F889L)))), p_52)) > l_416)), 1));
        }
        (*p_55) ^= (*p_53);
        (*p_53) |= (((*l_434) ^= (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 16))(p_825->g_421.yxxzxzyzwyzzxwyx)).sf, (safe_lshift_func_uint8_t_u_s(((*l_424) &= 0xB0L), (l_399.s6 , (safe_div_func_int16_t_s_s(p_52, ((p_825->g_252 ^ (p_825->g_427 == &p_54)) ^ ((safe_lshift_func_uint8_t_u_s(255UL, (l_433[3][0][2] = (0x220A6EDDL >= (p_825->g_329.s5 == (*p_825->g_218)))))) || l_433[3][7][2])))))))))) <= 0x075C3B7BL);
    }
    else
    { /* block id: 179 */
        uint16_t l_439 = 2UL;
        uint8_t *l_440[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int64_t *l_443 = (void*)0;
        int64_t *l_444 = (void*)0;
        int64_t *l_445 = (void*)0;
        int64_t *l_446 = (void*)0;
        int64_t *l_447 = (void*)0;
        int64_t *l_448 = (void*)0;
        int64_t *l_449 = (void*)0;
        int64_t *l_450 = (void*)0;
        int64_t *l_451 = (void*)0;
        int64_t *l_452 = (void*)0;
        int64_t *l_453 = (void*)0;
        int64_t *l_454[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t **l_455 = &p_825->g_385;
        int i;
        (*p_53) = (~((safe_add_func_int64_t_s_s((*p_825->g_218), l_439)) <= ((p_825->g_283.s1 == (((void*)0 != l_440[1]) | ((safe_add_func_uint32_t_u_u(((0xE2A51895F3ACCAC0L > p_52) & (((((p_825->g_331.s3 = ((&l_440[1] != ((((**l_405) = l_440[1]) != l_440[1]) , &l_440[3])) , p_825->g_329.s1)) || GROUP_DIVERGE(2, 1)) != p_825->g_234.sd) & l_439) > p_52)), (-1L))) , 0x250CA5D7600B4D39L))) <= 0UL)));
        (*l_455) = p_53;
        for (p_825->g_169 = 19; (p_825->g_169 > 56); p_825->g_169 = safe_add_func_int64_t_s_s(p_825->g_169, 2))
        { /* block id: 186 */
            return p_52;
        }
    }
    for (p_825->g_99 = 0; (p_825->g_99 < 52); ++p_825->g_99)
    { /* block id: 192 */
        uint32_t l_466 = 0x4940AA01L;
        uint16_t *l_475 = &p_825->g_169;
        int32_t *l_476[6][5] = {{(void*)0,&p_825->g_31,&p_825->g_31,(void*)0,(void*)0},{(void*)0,&p_825->g_31,&p_825->g_31,(void*)0,(void*)0},{(void*)0,&p_825->g_31,&p_825->g_31,(void*)0,(void*)0},{(void*)0,&p_825->g_31,&p_825->g_31,(void*)0,(void*)0},{(void*)0,&p_825->g_31,&p_825->g_31,(void*)0,(void*)0},{(void*)0,&p_825->g_31,&p_825->g_31,(void*)0,(void*)0}};
        int32_t **l_479 = &l_476[0][4];
        int i, j;
        (*p_53) = (((safe_mod_func_uint16_t_u_u(((*l_475) = (((safe_lshift_func_int16_t_s_s(((*p_53) < ((safe_add_func_int8_t_s_s(p_52, p_825->g_152.x)) == l_390.s3)), (l_466 > 1L))) & (((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((1UL == GROUP_DIVERGE(2, 1)) & ((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(0x42L, (p_825->g_341.x = 0UL))), p_52)) != 0xC2L)), l_466)), p_52)) <= p_825->g_283.s7) <= l_390.s2)) > p_52)), l_399.s7)) , l_399.s5) > p_52);
        l_477 = l_476[0][4];
        (*l_479) = l_476[0][3];
        return l_403.y;
    }
    --l_487;
    return p_825->g_169;
}


/* ------------------------------------------ */
/* 
 * reads : p_825->g_123 p_825->g_96
 * writes: p_825->g_238 p_825->g_96
 */
uint16_t * func_56(uint16_t * p_57, int32_t * p_58, uint8_t  p_59, uint16_t * p_60, uint64_t  p_61, struct S0 * p_825)
{ /* block id: 146 */
    int32_t *l_363 = (void*)0;
    int32_t *l_364 = (void*)0;
    int32_t *l_365[4][10] = {{(void*)0,(void*)0,&p_825->g_147,&p_825->g_302,&p_825->g_31,&p_825->g_302,&p_825->g_147,(void*)0,(void*)0,&p_825->g_147},{(void*)0,(void*)0,&p_825->g_147,&p_825->g_302,&p_825->g_31,&p_825->g_302,&p_825->g_147,(void*)0,(void*)0,&p_825->g_147},{(void*)0,(void*)0,&p_825->g_147,&p_825->g_302,&p_825->g_31,&p_825->g_302,&p_825->g_147,(void*)0,(void*)0,&p_825->g_147},{(void*)0,(void*)0,&p_825->g_147,&p_825->g_302,&p_825->g_31,&p_825->g_302,&p_825->g_147,(void*)0,(void*)0,&p_825->g_147}};
    VECTOR(int32_t, 4) l_366 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x59E41F57L), 0x59E41F57L);
    uint32_t l_367 = 4294967293UL;
    uint16_t *l_373[7][3][9] = {{{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169}},{{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169}},{{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169}},{{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169}},{{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169}},{{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169}},{{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169},{(void*)0,&p_825->g_169,&p_825->g_169,(void*)0,(void*)0,&p_825->g_22,(void*)0,&p_825->g_169,&p_825->g_169}}};
    uint16_t **l_372 = &l_373[6][2][2];
    uint8_t l_376 = 1UL;
    int i, j, k;
    l_367++;
    p_825->g_238.s1 = ((safe_mul_func_int8_t_s_s(0x29L, ((void*)0 != &p_825->g_99))) , ((((l_372 = &p_57) != (p_59 , (void*)0)) , (((safe_sub_func_uint32_t_u_u(((void*)0 == p_57), GROUP_DIVERGE(0, 1))) , ((0x2ABE026262A0CC36L != p_825->g_123) , (void*)0)) == &p_825->g_96)) , l_376));
    for (p_825->g_96 = 18; (p_825->g_96 >= 18); p_825->g_96 = safe_add_func_int64_t_s_s(p_825->g_96, 4))
    { /* block id: 152 */
        if ((atomic_inc(&p_825->g_atomic_input[5 * get_linear_group_id() + 4]) == 4))
        { /* block id: 154 */
            uint16_t l_379 = 0x322FL;
            uint16_t l_380 = 8UL;
            int64_t l_383 = 0L;
            int64_t *l_382[4];
            int64_t **l_381 = &l_382[2];
            int64_t **l_384 = (void*)0;
            int i;
            for (i = 0; i < 4; i++)
                l_382[i] = &l_383;
            l_380 = l_379;
            l_384 = l_381;
            unsigned int result = 0;
            result += l_379;
            result += l_380;
            result += l_383;
            atomic_add(&p_825->g_special_values[5 * get_linear_group_id() + 4], result);
        }
        else
        { /* block id: 157 */
            (1 + 1);
        }
    }
    return p_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_825->g_329 p_825->g_331 p_825->g_338 p_825->g_341 p_825->g_302 p_825->g_121 p_825->g_169 p_825->g_31 p_825->g_358
 * writes: p_825->g_84 p_825->g_338 p_825->g_302 p_825->g_31 p_825->g_358
 */
uint16_t * func_62(uint32_t  p_63, uint32_t  p_64, int32_t * p_65, uint16_t * p_66, struct S0 * p_825)
{ /* block id: 125 */
    int16_t *l_305 = &p_825->g_142;
    int16_t **l_304[9][10] = {{&l_305,&l_305,(void*)0,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305,&l_305},{&l_305,&l_305,(void*)0,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305,&l_305},{&l_305,&l_305,(void*)0,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305,&l_305},{&l_305,&l_305,(void*)0,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305,&l_305},{&l_305,&l_305,(void*)0,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305,&l_305},{&l_305,&l_305,(void*)0,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305,&l_305},{&l_305,&l_305,(void*)0,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305,&l_305},{&l_305,&l_305,(void*)0,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305,&l_305},{&l_305,&l_305,(void*)0,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305,&l_305}};
    int16_t ***l_306 = (void*)0;
    uint64_t l_309 = 0x79139829F15E4691L;
    uint8_t *l_324 = &p_825->g_84[1];
    VECTOR(int32_t, 2) l_330 = (VECTOR(int32_t, 2))(0L, 0L);
    VECTOR(int64_t, 8) l_332 = (VECTOR(int64_t, 8))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, (-1L)), (-1L)), (-1L), 4L, (-1L));
    VECTOR(int64_t, 16) l_333 = (VECTOR(int64_t, 16))(0x0F44A99A04B6D0C1L, (VECTOR(int64_t, 4))(0x0F44A99A04B6D0C1L, (VECTOR(int64_t, 2))(0x0F44A99A04B6D0C1L, 0L), 0L), 0L, 0x0F44A99A04B6D0C1L, 0L, (VECTOR(int64_t, 2))(0x0F44A99A04B6D0C1L, 0L), (VECTOR(int64_t, 2))(0x0F44A99A04B6D0C1L, 0L), 0x0F44A99A04B6D0C1L, 0L, 0x0F44A99A04B6D0C1L, 0L);
    VECTOR(int64_t, 8) l_334 = (VECTOR(int64_t, 8))(0x2AAE211044F18799L, (VECTOR(int64_t, 4))(0x2AAE211044F18799L, (VECTOR(int64_t, 2))(0x2AAE211044F18799L, 0x034A0C32B63D2C2AL), 0x034A0C32B63D2C2AL), 0x034A0C32B63D2C2AL, 0x2AAE211044F18799L, 0x034A0C32B63D2C2AL);
    uint8_t *l_337 = &p_825->g_338[0][2][0];
    VECTOR(uint8_t, 2) l_342 = (VECTOR(uint8_t, 2))(0UL, 0x23L);
    volatile int32_t **l_360 = &p_825->g_358;
    uint16_t *l_361 = (void*)0;
    int i, j;
    l_304[2][2] = l_304[1][1];
    (*p_65) = (safe_lshift_func_uint8_t_u_s((l_309 || (safe_div_func_uint32_t_u_u(0x47EE41A9L, (safe_add_func_uint32_t_u_u((!FAKE_DIVERGE(p_825->global_2_offset, get_global_id(2), 10)), ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(1UL, (p_63 <= (((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*l_324) = 0x8CL), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(8L, 1L)), 0x79L, 0x3BL)))).w, (safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((~((VECTOR(uint32_t, 4))(p_825->g_329.sf05e)).z), ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(l_330.yxxyyxyxxyyyxyyx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x1095A344L, (-8L))), (-7L), 0x4355310FL)).xzxxywzzxyzxyzwy))).s7)) ^ (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 4))(p_825->g_331.s2606)).ywwwyzwy, ((VECTOR(int64_t, 16))(l_332.s1310561462233512)).hi, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 2))(l_333.sc0)), ((VECTOR(int64_t, 16))(l_334.s7074205760737021)).sb6))))).yxxyyyyx))).s2347755522277742)))).s3 <= p_63)), ((((safe_mod_func_uint8_t_u_u(((((*l_337)--) | ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(9UL, ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(p_825->g_341.yxyzzwzy)).s25, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_342.yyxxxxyyyyyxxxxy)).odd)).s4702637211023137)).s90))), ((safe_mul_func_uint16_t_u_u((((((((void*)0 == l_305) > (safe_lshift_func_uint16_t_u_s(FAKE_DIVERGE(p_825->local_2_offset, get_local_id(2), 10), 15))) && (~((l_330.y != (*p_65)) && p_64))) && (-2L)) , l_334.s2) != p_64), p_825->g_121[7])) , 255UL), ((VECTOR(uint8_t, 8))(1UL)), 1UL, 253UL, 0xBAL, 0x27L)).se1b0)).z) && 0xB7FDE957BF9E5652L), p_825->g_169)) != p_64) | GROUP_DIVERGE(1, 1)) | 1UL))), ((VECTOR(int8_t, 4))(0x52L)), 0L, 0x5FL)))).s4)), 3)) ^ 0x301AL) == 0x45C48BDE9DC1AA43L)))), p_825->g_329.s9)) , 0x0770E1C9L)))))), p_64));
    for (p_825->g_31 = 0; (p_825->g_31 != (-19)); p_825->g_31 = safe_sub_func_int64_t_s_s(p_825->g_31, 2))
    { /* block id: 132 */
        uint16_t *l_356[3];
        uint16_t **l_355 = &l_356[1];
        uint16_t ***l_357 = &l_355;
        int i;
        for (i = 0; i < 3; i++)
            l_356[i] = (void*)0;
        if ((atomic_inc(&p_825->g_atomic_input[5 * get_linear_group_id() + 1]) == 4))
        { /* block id: 134 */
            uint32_t l_349 = 0x54621A29L;
            uint64_t l_350 = 0x69372414C672D693L;
            uint64_t l_351 = 18446744073709551613UL;
            int8_t l_352 = 0L;
            uint32_t l_353[4] = {0xD24010D5L,0xD24010D5L,0xD24010D5L,0xD24010D5L};
            uint32_t l_354 = 0UL;
            int i;
            l_349 = ((VECTOR(int32_t, 2))(1L, 0x076A514FL)).even;
            l_351 &= l_350;
            l_352 |= 0x3AE327D8L;
            l_354 = l_353[0];
            unsigned int result = 0;
            result += l_349;
            result += l_350;
            result += l_351;
            result += l_352;
            int l_353_i0;
            for (l_353_i0 = 0; l_353_i0 < 4; l_353_i0++) {
                result += l_353[l_353_i0];
            }
            result += l_354;
            atomic_add(&p_825->g_special_values[5 * get_linear_group_id() + 1], result);
        }
        else
        { /* block id: 139 */
            (1 + 1);
        }
        (*l_357) = (p_64 , l_355);
    }
    (*l_360) = p_825->g_358;
    return l_361;
}


/* ------------------------------------------ */
/* 
 * reads : p_825->g_22 p_825->g_147 p_825->g_123 p_825->g_99 p_825->g_126 p_825->g_142 p_825->g_237 p_825->l_comm_values p_825->g_283
 * writes: p_825->g_252 p_825->g_147 p_825->g_169 p_825->g_237 p_825->g_262 p_825->g_31 p_825->g_238
 */
uint32_t  func_67(int8_t  p_68, int64_t  p_69, uint32_t  p_70, struct S0 * p_825)
{ /* block id: 80 */
    int32_t *l_240 = (void*)0;
    int32_t ***l_245 = (void*)0;
    int32_t **l_247 = &p_825->g_237;
    int32_t ***l_246 = &l_247;
    int16_t *l_248 = (void*)0;
    uint64_t l_253 = 0x80F983F5F7E292FDL;
    VECTOR(uint8_t, 8) l_270 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xF5L), 0xF5L), 0xF5L, 0UL, 0xF5L);
    VECTOR(uint32_t, 16) l_282 = (VECTOR(uint32_t, 16))(0xD5735480L, (VECTOR(uint32_t, 4))(0xD5735480L, (VECTOR(uint32_t, 2))(0xD5735480L, 0x48D6DF37L), 0x48D6DF37L), 0x48D6DF37L, 0xD5735480L, 0x48D6DF37L, (VECTOR(uint32_t, 2))(0xD5735480L, 0x48D6DF37L), (VECTOR(uint32_t, 2))(0xD5735480L, 0x48D6DF37L), 0xD5735480L, 0x48D6DF37L, 0xD5735480L, 0x48D6DF37L);
    int32_t l_293 = 0x0C37341CL;
    int32_t l_294 = 0x2ED1A2A8L;
    int32_t l_295 = 5L;
    int32_t l_296 = 0x29326F60L;
    int32_t l_297[2][9] = {{1L,(-7L),1L,1L,(-7L),1L,1L,(-7L),1L},{1L,(-7L),1L,1L,(-7L),1L,1L,(-7L),1L}};
    uint16_t l_298 = 0xD66DL;
    int i, j;
    l_240 = l_240;
    if ((p_825->g_22 != ((safe_add_func_int64_t_s_s(p_825->g_147, (p_825->g_123 || (safe_mul_func_int8_t_s_s(((((*l_246) = &l_240) != (void*)0) > ((void*)0 == l_248)), p_825->g_99))))) | p_825->g_126.x)))
    { /* block id: 83 */
        int64_t *l_251 = &p_825->g_252;
        l_253 &= (((*l_251) = (safe_sub_func_uint16_t_u_u((p_69 && 0x0195L), 0xEDE8L))) , p_68);
    }
    else
    { /* block id: 86 */
        int32_t **l_264 = &l_240;
        VECTOR(uint8_t, 8) l_269 = (VECTOR(uint8_t, 8))(0x3FL, (VECTOR(uint8_t, 4))(0x3FL, (VECTOR(uint8_t, 2))(0x3FL, 255UL), 255UL), 255UL, 0x3FL, 255UL);
        int32_t l_291 = (-10L);
        int32_t *l_292[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (l_253 = 0; (l_253 > 43); l_253 = safe_add_func_int8_t_s_s(l_253, 3))
        { /* block id: 89 */
            uint8_t *l_260 = (void*)0;
            uint8_t **l_261[3];
            int32_t **l_263 = &p_825->g_237;
            int i;
            for (i = 0; i < 3; i++)
                l_261[i] = (void*)0;
            for (p_825->g_147 = (-29); (p_825->g_147 <= (-9)); p_825->g_147 = safe_add_func_uint16_t_u_u(p_825->g_147, 3))
            { /* block id: 92 */
                if (p_825->g_142)
                    break;
                for (p_825->g_169 = 0; (p_825->g_169 == 53); p_825->g_169 = safe_add_func_int32_t_s_s(p_825->g_169, 2))
                { /* block id: 96 */
                    return p_825->g_123;
                }
                (**l_246) = (FAKE_DIVERGE(p_825->group_1_offset, get_group_id(1), 10) , (*l_247));
            }
            atomic_and(&p_825->g_atomic_reduction[get_linear_group_id()], ((&p_825->g_84[1] == (p_825->g_262 = l_260)) , ((l_263 = l_263) == l_264)));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_825->v_collective += p_825->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            (*l_247) = &p_825->g_147;
            for (p_825->g_169 = 0; (p_825->g_169 != 25); p_825->g_169 = safe_add_func_int32_t_s_s(p_825->g_169, 5))
            { /* block id: 107 */
                uint32_t l_271 = 0xE6E3D103L;
                int32_t l_287 = 1L;
                int32_t *l_289 = (void*)0;
                int32_t *l_290 = &p_825->g_31;
                for (p_825->g_31 = (-18); (p_825->g_31 >= 22); p_825->g_31 = safe_add_func_int32_t_s_s(p_825->g_31, 4))
                { /* block id: 110 */
                    uint8_t l_286 = 2UL;
                    int32_t *l_288 = (void*)0;
                    p_825->g_238.s3 = ((((GROUP_DIVERGE(1, 1) > ((((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 16))(1UL, ((VECTOR(uint8_t, 4))(249UL, ((VECTOR(uint8_t, 2))(l_269.s77)), 0xCEL)), (GROUP_DIVERGE(1, 1) | (((VECTOR(uint8_t, 4))(l_270.s5561)).w >= p_68)), 0xF2L, p_70, 0x9CL, 0x44L, (l_271 = p_69), ((VECTOR(uint8_t, 4))((&p_69 != (void*)0), 0x4AL, 1UL, 0x8EL)), 1UL)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 2))(0x63L, 247UL)).xxyy, (uint8_t)(safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((-7L), 4)), ((VECTOR(int16_t, 2))(0x3629L, 1L)).hi)), (uint8_t)(safe_lshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s(p_68, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))((safe_mod_func_uint64_t_u_u((p_70 , ((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 16))(l_282.scdab2235f0c6e62e)).sbd1b, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(2UL, 0xA2BB022EL)).xxxyyxyxyyxxxxyy, ((VECTOR(uint32_t, 8))(p_825->g_283.s23433267)).s7126256225246227, ((VECTOR(uint32_t, 16))((safe_lshift_func_int16_t_s_s(p_69, p_70)), 0xD086D457L, p_68, 0UL, ((VECTOR(uint32_t, 4))(3UL)), ((VECTOR(uint32_t, 8))(0x2D9593F4L))))))).even)).odd))).lo)).xxyx, ((VECTOR(uint32_t, 4))(0x434CF9F9L))))).z), p_70)), 0x099E89F55EE99465L, (-1L), 0x13D7F1B8E7C1B229L, 0x07282EA697F749FDL, l_286, 0x2E6DF44F759F0075L, 1L)).even)).x)), 6))))), (uint8_t)GROUP_DIVERGE(1, 1)))).zwzxxyyzzwxyzxzx)).s73)).xxxxxyxxyyyyyyyy))), ((VECTOR(uint8_t, 16))(0xD9L))))).s6 >= 0L) >= p_825->l_comm_values[(safe_mod_func_uint32_t_u_u(p_825->tid, 23))])) & p_68) == l_287) , 0x5112F0B6L);
                }
                if (l_287)
                    break;
                (*l_290) = p_69;
                return p_69;
            }
        }
        (**l_246) = (*l_264);
        l_291 |= ((VECTOR(int32_t, 2))(0L, 0x26DE51F0L)).hi;
        l_298++;
    }
    return p_825->g_283.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_825->g_84 p_825->g_31 p_825->l_comm_values p_825->g_126 p_825->g_22 p_825->g_147 p_825->g_142 p_825->g_152 p_825->g_96 p_825->g_123 p_825->g_218 p_825->g_183
 * writes: p_825->g_84 p_825->g_31 p_825->g_96 p_825->g_99 p_825->g_121 p_825->g_123 p_825->g_147 p_825->g_152 p_825->g_237
 */
int64_t  func_71(uint16_t * p_72, int32_t * p_73, int16_t  p_74, uint64_t  p_75, int32_t  p_76, struct S0 * p_825)
{ /* block id: 13 */
    int32_t l_82 = (-1L);
    int32_t l_83 = 9L;
    int32_t l_139 = 0x7E1F98D3L;
    int32_t l_167 = 7L;
    VECTOR(uint8_t, 16) l_172 = (VECTOR(uint8_t, 16))(0x9AL, (VECTOR(uint8_t, 4))(0x9AL, (VECTOR(uint8_t, 2))(0x9AL, 0xA4L), 0xA4L), 0xA4L, 0x9AL, 0xA4L, (VECTOR(uint8_t, 2))(0x9AL, 0xA4L), (VECTOR(uint8_t, 2))(0x9AL, 0xA4L), 0x9AL, 0xA4L, 0x9AL, 0xA4L);
    int32_t *l_200 = &l_167;
    VECTOR(uint32_t, 4) l_211 = (VECTOR(uint32_t, 4))(0x6483FAFDL, (VECTOR(uint32_t, 2))(0x6483FAFDL, 0x730205D3L), 0x730205D3L);
    VECTOR(int32_t, 8) l_212 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
    VECTOR(uint16_t, 8) l_213 = (VECTOR(uint16_t, 8))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 1UL), 1UL), 1UL, 65533UL, 1UL);
    int i;
    for (p_74 = (-23); (p_74 <= 16); p_74 = safe_add_func_int8_t_s_s(p_74, 2))
    { /* block id: 16 */
        int32_t *l_81[9][8] = {{&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,(void*)0},{&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,(void*)0},{&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,(void*)0},{&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,(void*)0},{&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,(void*)0},{&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,(void*)0},{&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,(void*)0},{&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,(void*)0},{&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,&p_825->g_31,(void*)0}};
        int32_t **l_80 = &l_81[1][6];
        int i, j;
        (*l_80) = &p_825->g_31;
        --p_825->g_84[1];
        if ((*p_73))
            break;
    }
    for (p_825->g_31 = 0; (p_825->g_31 > 3); ++p_825->g_31)
    { /* block id: 23 */
        int16_t l_102[5];
        int32_t l_144 = 0x041BEEAFL;
        uint64_t *l_156 = (void*)0;
        VECTOR(uint16_t, 8) l_208 = (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0x933DL), 0x933DL), 0x933DL, 65528UL, 0x933DL);
        VECTOR(uint16_t, 8) l_214 = (VECTOR(uint16_t, 8))(0x4611L, (VECTOR(uint16_t, 4))(0x4611L, (VECTOR(uint16_t, 2))(0x4611L, 65535UL), 65535UL), 65535UL, 0x4611L, 65535UL);
        VECTOR(uint32_t, 16) l_215 = (VECTOR(uint32_t, 16))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 1UL), 1UL), 1UL, 4294967289UL, 1UL, (VECTOR(uint32_t, 2))(4294967289UL, 1UL), (VECTOR(uint32_t, 2))(4294967289UL, 1UL), 4294967289UL, 1UL, 4294967289UL, 1UL);
        VECTOR(int8_t, 8) l_233 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 3L), 3L), 3L, 1L, 3L);
        int32_t **l_239[8];
        int i;
        for (i = 0; i < 5; i++)
            l_102[i] = 0L;
        for (i = 0; i < 8; i++)
            l_239[i] = &p_825->g_237;
        for (l_83 = 0; (l_83 != 21); l_83 = safe_add_func_uint64_t_u_u(l_83, 4))
        { /* block id: 26 */
            int16_t l_140 = 0x5A0DL;
            int32_t *l_150 = (void*)0;
            VECTOR(int64_t, 8) l_174 = (VECTOR(int64_t, 8))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x45578D77B4968E5EL), 0x45578D77B4968E5EL), 0x45578D77B4968E5EL, 3L, 0x45578D77B4968E5EL);
            VECTOR(uint16_t, 16) l_189 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xFFB8L), 0xFFB8L), 0xFFB8L, 65535UL, 0xFFB8L, (VECTOR(uint16_t, 2))(65535UL, 0xFFB8L), (VECTOR(uint16_t, 2))(65535UL, 0xFFB8L), 65535UL, 0xFFB8L, 65535UL, 0xFFB8L);
            int32_t **l_199 = &l_150;
            VECTOR(uint64_t, 4) l_207 = (VECTOR(uint64_t, 4))(0x8484EA1F2CDD5523L, (VECTOR(uint64_t, 2))(0x8484EA1F2CDD5523L, 5UL), 5UL);
            VECTOR(uint64_t, 8) l_225 = (VECTOR(uint64_t, 8))(0xEAEF1AE5059A09FAL, (VECTOR(uint64_t, 4))(0xEAEF1AE5059A09FAL, (VECTOR(uint64_t, 2))(0xEAEF1AE5059A09FAL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xEAEF1AE5059A09FAL, 18446744073709551615UL);
            int32_t l_235 = 0x2B9EF218L;
            int i;
            for (l_82 = 0; (l_82 >= (-26)); l_82 = safe_sub_func_uint8_t_u_u(l_82, 8))
            { /* block id: 29 */
                int16_t *l_95 = &p_825->g_96;
                uint64_t *l_98 = &p_825->g_99;
                int32_t l_119[1][3][7] = {{{0x00793961L,0L,0x00793961L,0x00793961L,0L,0x00793961L,0x00793961L},{0x00793961L,0L,0x00793961L,0x00793961L,0L,0x00793961L,0x00793961L},{0x00793961L,0L,0x00793961L,0x00793961L,0L,0x00793961L,0x00793961L}}};
                uint32_t *l_120 = &p_825->g_121[7];
                uint32_t *l_122 = &p_825->g_123;
                int64_t *l_131 = (void*)0;
                int64_t *l_132 = (void*)0;
                int64_t *l_133 = (void*)0;
                int64_t *l_134 = (void*)0;
                int64_t *l_135 = (void*)0;
                int64_t *l_136 = (void*)0;
                int64_t *l_137 = (void*)0;
                int64_t *l_138 = (void*)0;
                int16_t *l_141[8][2][3] = {{{&l_102[3],&l_102[3],&l_102[2]},{&l_102[3],&l_102[3],&l_102[2]}},{{&l_102[3],&l_102[3],&l_102[2]},{&l_102[3],&l_102[3],&l_102[2]}},{{&l_102[3],&l_102[3],&l_102[2]},{&l_102[3],&l_102[3],&l_102[2]}},{{&l_102[3],&l_102[3],&l_102[2]},{&l_102[3],&l_102[3],&l_102[2]}},{{&l_102[3],&l_102[3],&l_102[2]},{&l_102[3],&l_102[3],&l_102[2]}},{{&l_102[3],&l_102[3],&l_102[2]},{&l_102[3],&l_102[3],&l_102[2]}},{{&l_102[3],&l_102[3],&l_102[2]},{&l_102[3],&l_102[3],&l_102[2]}},{{&l_102[3],&l_102[3],&l_102[2]},{&l_102[3],&l_102[3],&l_102[2]}}};
                int32_t l_143 = 0x67325C60L;
                int32_t *l_145 = &l_119[0][2][5];
                int32_t *l_146 = &p_825->g_147;
                VECTOR(int16_t, 2) l_160 = (VECTOR(int16_t, 2))(7L, 9L);
                uint8_t *l_192 = &p_825->g_84[0];
                int i, j, k;
                (*l_146) |= ((*l_145) = (safe_mod_func_int16_t_s_s(((*l_95) = 0x000CL), (safe_unary_minus_func_int16_t_s(((((*l_98) = p_74) | (safe_rshift_func_uint8_t_u_s((p_825->l_comm_values[(safe_mod_func_uint32_t_u_u(p_825->tid, 23))] , l_102[2]), 2))) && (l_144 = (((safe_mul_func_int16_t_s_s((l_143 ^= ((!((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(p_825->l_comm_values[(safe_mod_func_uint32_t_u_u(p_825->tid, 23))], (safe_mod_func_int64_t_s_s((l_139 = ((safe_div_func_uint16_t_u_u(((~(safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s((((((*l_122) = ((*l_120) = l_119[0][2][5])) < ((*p_73) = (safe_add_func_uint8_t_u_u(((0x02BB9F80L != (p_825->l_comm_values[(safe_mod_func_uint32_t_u_u(p_825->tid, 23))] || (((((VECTOR(uint16_t, 4))(p_825->g_126.yyxx)).w > (safe_rshift_func_int16_t_s_s((((((safe_add_func_uint32_t_u_u((p_825->g_126.y || (*p_73)), (*p_73))) ^ p_74) | p_825->g_126.x) ^ p_825->g_126.y) || p_825->l_comm_values[(safe_mod_func_uint32_t_u_u(p_825->tid, 23))]), p_75))) < (-1L)) < p_825->g_84[1]))) && 65530UL), p_825->g_84[6])))) & 4294967295UL) >= p_74), p_825->l_comm_values[(safe_mod_func_uint32_t_u_u(p_825->tid, 23))])), 1UL))) <= l_102[2]), 0x79D4L)) <= p_74)), 0x468BD1E8AE57A5C4L)))) | p_825->g_31), l_140)) | p_825->g_84[3])) | p_825->g_22)), l_82)) != 0UL) ^ p_825->g_31))))))));
                for (l_144 = 0; (l_144 < 22); ++l_144)
                { /* block id: 42 */
                    int32_t **l_151 = &l_146;
                    int64_t *l_159[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    (*l_151) = l_150;
                }
                atomic_max(&p_825->g_atomic_reduction[get_linear_group_id()], ((safe_rshift_func_uint16_t_u_u((l_156 == (void*)0), p_825->g_142)) <= ((((*l_192) = (l_144 ^ p_825->g_152.x)) > ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((1UL ^ ((safe_mul_func_uint16_t_u_u(l_102[2], (-6L))) , ((((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(0x12EEL, 0x9404L)), p_825->g_31)) , 0UL) || 65535UL) == FAKE_DIVERGE(p_825->global_2_offset, get_global_id(2), 10)))), ((VECTOR(int8_t, 4))(0x75L)), (-4L), 1L, 0x66L)).s0255055571254516)).s0) | p_76)) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_825->v_collective += p_825->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            (*l_199) = &p_825->g_147;
            (*l_199) = l_200;
            for (p_825->g_147 = (-1); (p_825->g_147 <= (-12)); p_825->g_147 = safe_sub_func_int64_t_s_s(p_825->g_147, 2))
            { /* block id: 67 */
                int16_t *l_216 = &p_825->g_142;
                uint32_t l_217 = 0xE538C652L;
                int32_t **l_220 = &l_200;
                VECTOR(uint64_t, 8) l_226 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x3FCE317D50ABDCF2L), 0x3FCE317D50ABDCF2L), 0x3FCE317D50ABDCF2L, 1UL, 0x3FCE317D50ABDCF2L);
                int32_t *l_236[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_236[i][j] = (void*)0;
                }
                p_825->g_152.y ^= ((((4294967295UL != FAKE_DIVERGE(p_825->local_0_offset, get_local_id(0), 10)) , (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(p_825->g_96, (p_825->g_147 != (+(((p_825->g_123 >= ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 8))(l_207.yyyzwzyy)).s70, ((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(0xCA95D42B4722CCF1L, (((l_102[4] <= ((*l_200) = ((VECTOR(uint16_t, 8))(l_208.s57120471)).s3)) != (safe_rshift_func_int16_t_s_u(((*l_216) ^= (((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_211.ywxzyyxx)))))).odd)))).yxzyyyzx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(0x7C050FD7L, ((*p_73) != ((VECTOR(int32_t, 2))(l_212.s03)).even), 0xB25C6D07L, 1UL, 9UL, 0x6723FDEEL, 1UL, 0x9599C243L, 0xE10FD7A9L, ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))(0x2C683EECL, 0UL, 0x3FAAA289L, 5UL)).wwwwwyyxzwwxwxyw, ((VECTOR(uint32_t, 2))(0xE93BA542L, 4294967291UL)).xxxxyyxyxxxyxxxy, ((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_213.s62)))).yyxxyyxyyxxxyyxx, ((VECTOR(uint16_t, 4))(l_214.s4054)).yyyzxwwxzzzzxwwx))).even)).s7433026330232374, ((VECTOR(uint32_t, 2))(l_215.s72)).xyyxyxyxyyyxyxxy, ((VECTOR(uint32_t, 4))(1UL, 0xDB776382L, 0xFE82150CL, 0UL)).yzxwyzzyxyyzzzyw)))))).sf9, ((VECTOR(uint32_t, 2))(0x1AFEE84AL, 0xFCE4FDF0L))))), ((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(0xFEC47B7AL, 0x68258FFCL, 0xB63EB4B7L, 0xAED3EF12L))))), 0x46E1C941L)))).even))).s6 , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, 0x70DCL)).xyxy)).w)), 8))) ^ p_74), ((VECTOR(uint64_t, 8))(0x56C85954F1852EFBL)), GROUP_DIVERGE(0, 1), ((VECTOR(uint64_t, 2))(0xFBF7B5BDB795EC82L)), 7UL, 0x9CB1593AEE7E9482L, 18446744073709551615UL)))).s2c, ((VECTOR(uint64_t, 2))(18446744073709551614UL))))).xxyyyyxy, ((VECTOR(uint64_t, 8))(0UL)), ((VECTOR(uint64_t, 8))(0xDAF6D627CF3F8CE4L))))), ((VECTOR(uint64_t, 4))(0UL)), p_825->g_121[7], 0x0F3FEDEC0B913E92L, 1UL, 0x84B4F7ADDD033310L)).s3e)).xxxxyxxxyyyyyyyx, ((VECTOR(uint64_t, 16))(0x8037F3D1E7D8B5B9L))))).sd1, ((VECTOR(uint64_t, 2))(0xABB20226B50FFF6AL))))).yxxxyyyxxyyyxxxx)).saf, ((VECTOR(uint64_t, 2))(1UL))))).yyxxxxxx)), ((VECTOR(uint64_t, 8))(18446744073709551615UL))))).s4) , &p_825->g_99) != (void*)0))))), l_217))) , p_825->g_218) == p_825->g_218);
                (*l_220) = ((*l_199) = p_73);
                p_825->g_237 = ((((safe_lshift_func_uint8_t_u_s((*l_200), 7)) <= ((((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 2))(l_225.s70)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_226.s5207101617634653)).s52))))).xyyyyxyxxyyyxyxy)).sb, (p_825->g_96 && p_74))) != 0xB0BBL) , (safe_lshift_func_uint16_t_u_s((**l_220), p_825->g_123))) , (safe_mod_func_uint16_t_u_u(((**l_220) | (((p_825->g_152.y = (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(l_233.s35)).xyyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(p_825->g_234.s83fd7632)).s52, ((VECTOR(int8_t, 4))((-1L), 0x08L, 0x1AL, 0x5DL)).odd))))).yyxy))).w, l_235))) && p_825->g_152.x) < 0UL)), 0x1A1CL)))) == p_825->g_31) , (*l_199));
            }
        }
        l_200 = &l_83;
    }
    return p_825->g_183.s5;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[5];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 5; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[5];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 5; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[23];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 23; i++)
            l_comm_values[i] = 1;
    struct S0 c_826;
    struct S0* p_825 = &c_826;
    struct S0 c_827 = {
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x64FDL), 0x64FDL), // p_825->g_20
        1UL, // p_825->g_22
        0x1E71B35DL, // p_825->g_31
        {1UL,1UL,1UL,1UL,1UL,1UL,1UL}, // p_825->g_84
        0x0C99L, // p_825->g_96
        0xA53CC61BBCB567DFL, // p_825->g_99
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_825->g_121
        0x97682755L, // p_825->g_123
        (VECTOR(uint16_t, 2))(0x6C27L, 0xFE95L), // p_825->g_126
        0x56D7L, // p_825->g_142
        6L, // p_825->g_147
        (VECTOR(int32_t, 2))(0x1FC1C174L, 0x0F6EBCB2L), // p_825->g_152
        0xE5D9L, // p_825->g_169
        (VECTOR(int8_t, 16))(0x4AL, (VECTOR(int8_t, 4))(0x4AL, (VECTOR(int8_t, 2))(0x4AL, 1L), 1L), 1L, 0x4AL, 1L, (VECTOR(int8_t, 2))(0x4AL, 1L), (VECTOR(int8_t, 2))(0x4AL, 1L), 0x4AL, 1L, 0x4AL, 1L), // p_825->g_183
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL), // p_825->g_184
        0x4E4C8BB38C0F79CBL, // p_825->g_219
        &p_825->g_219, // p_825->g_218
        (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x57L), 0x57L), 0x57L, (-5L), 0x57L, (VECTOR(int8_t, 2))((-5L), 0x57L), (VECTOR(int8_t, 2))((-5L), 0x57L), (-5L), 0x57L, (-5L), 0x57L), // p_825->g_234
        (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x1BDAA67BL), 0x1BDAA67BL), 0x1BDAA67BL, 2L, 0x1BDAA67BL), // p_825->g_238
        (void*)0, // p_825->g_237
        0x15447FFEF4691A34L, // p_825->g_252
        &p_825->g_84[1], // p_825->g_262
        (VECTOR(uint32_t, 8))(0x209B306FL, (VECTOR(uint32_t, 4))(0x209B306FL, (VECTOR(uint32_t, 2))(0x209B306FL, 4294967286UL), 4294967286UL), 4294967286UL, 0x209B306FL, 4294967286UL), // p_825->g_283
        8L, // p_825->g_302
        (VECTOR(uint32_t, 16))(0x877B575EL, (VECTOR(uint32_t, 4))(0x877B575EL, (VECTOR(uint32_t, 2))(0x877B575EL, 0x12CE1CFEL), 0x12CE1CFEL), 0x12CE1CFEL, 0x877B575EL, 0x12CE1CFEL, (VECTOR(uint32_t, 2))(0x877B575EL, 0x12CE1CFEL), (VECTOR(uint32_t, 2))(0x877B575EL, 0x12CE1CFEL), 0x877B575EL, 0x12CE1CFEL, 0x877B575EL, 0x12CE1CFEL), // p_825->g_329
        (VECTOR(int64_t, 8))(0x4C876800FB456D4CL, (VECTOR(int64_t, 4))(0x4C876800FB456D4CL, (VECTOR(int64_t, 2))(0x4C876800FB456D4CL, (-5L)), (-5L)), (-5L), 0x4C876800FB456D4CL, (-5L)), // p_825->g_331
        {{{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL}},{{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL}},{{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL}},{{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL}},{{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL}},{{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL}},{{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL}},{{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL}},{{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL},{255UL,8UL,0xD1L,0xC7L,8UL}}}, // p_825->g_338
        (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 253UL), 253UL), // p_825->g_341
        0x4CF5C3F5L, // p_825->g_359
        &p_825->g_359, // p_825->g_358
        0x7BF150C9L, // p_825->g_386
        &p_825->g_386, // p_825->g_385
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x20847B17L), 0x20847B17L), 0x20847B17L, (-1L), 0x20847B17L, (VECTOR(int32_t, 2))((-1L), 0x20847B17L), (VECTOR(int32_t, 2))((-1L), 0x20847B17L), (-1L), 0x20847B17L, (-1L), 0x20847B17L), // p_825->g_389
        (VECTOR(uint16_t, 2))(0x18B6L, 0x3CD0L), // p_825->g_398
        (VECTOR(int16_t, 2))(0x0D47L, 1L), // p_825->g_404
        (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x1CBB1E00L), 0x1CBB1E00L), // p_825->g_421
        (void*)0, // p_825->g_428
        &p_825->g_428, // p_825->g_427
        (void*)0, // p_825->g_478
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int64_t, 2))((-1L), 0L), (VECTOR(int64_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L), // p_825->g_500
        (VECTOR(int32_t, 4))(0x7A5AEE22L, (VECTOR(int32_t, 2))(0x7A5AEE22L, 0x624517B8L), 0x624517B8L), // p_825->g_513
        {0x735D371033F38517L,(-9L),0x735D371033F38517L,0x735D371033F38517L,(-9L),0x735D371033F38517L,0x735D371033F38517L}, // p_825->g_516
        {&p_825->g_252,&p_825->g_252,&p_825->g_252,&p_825->g_252,&p_825->g_252,&p_825->g_252,&p_825->g_252,&p_825->g_252,&p_825->g_252}, // p_825->g_521
        {{&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3]},{&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3]},{&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3]},{&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3]},{&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3]},{&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3],&p_825->g_521[3]}}, // p_825->g_520
        &p_825->g_520[0][8], // p_825->g_519
        1L, // p_825->g_569
        8UL, // p_825->g_571
        (VECTOR(int32_t, 2))(0x48227527L, 0L), // p_825->g_632
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x46DBL), 0x46DBL), 0x46DBL, 1UL, 0x46DBL, (VECTOR(uint16_t, 2))(1UL, 0x46DBL), (VECTOR(uint16_t, 2))(1UL, 0x46DBL), 1UL, 0x46DBL, 1UL, 0x46DBL), // p_825->g_645
        (VECTOR(int8_t, 8))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), (-5L)), (-5L)), (-5L), (-2L), (-5L)), // p_825->g_681
        (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, (-4L)), (-4L)), (-4L), 5L, (-4L), (VECTOR(int16_t, 2))(5L, (-4L)), (VECTOR(int16_t, 2))(5L, (-4L)), 5L, (-4L), 5L, (-4L)), // p_825->g_690
        (VECTOR(int16_t, 2))(0x76A0L, (-1L)), // p_825->g_691
        (VECTOR(int16_t, 2))(0L, (-1L)), // p_825->g_692
        0x62268C340FE10A4EL, // p_825->g_745
        (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x1499L), 0x1499L), 0x1499L, 7L, 0x1499L), // p_825->g_761
        (VECTOR(int16_t, 16))(0x15EBL, (VECTOR(int16_t, 4))(0x15EBL, (VECTOR(int16_t, 2))(0x15EBL, 0x67F7L), 0x67F7L), 0x67F7L, 0x15EBL, 0x67F7L, (VECTOR(int16_t, 2))(0x15EBL, 0x67F7L), (VECTOR(int16_t, 2))(0x15EBL, 0x67F7L), 0x15EBL, 0x67F7L, 0x15EBL, 0x67F7L), // p_825->g_763
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-5L)), (-5L)), // p_825->g_765
        (VECTOR(int16_t, 4))(0x1F90L, (VECTOR(int16_t, 2))(0x1F90L, (-8L)), (-8L)), // p_825->g_766
        (VECTOR(int8_t, 2))(0x14L, (-8L)), // p_825->g_781
        (VECTOR(int8_t, 2))(9L, 0x49L), // p_825->g_782
        0x9356L, // p_825->g_793
        0, // p_825->v_collective
        sequence_input[get_global_id(0)], // p_825->global_0_offset
        sequence_input[get_global_id(1)], // p_825->global_1_offset
        sequence_input[get_global_id(2)], // p_825->global_2_offset
        sequence_input[get_local_id(0)], // p_825->local_0_offset
        sequence_input[get_local_id(1)], // p_825->local_1_offset
        sequence_input[get_local_id(2)], // p_825->local_2_offset
        sequence_input[get_group_id(0)], // p_825->group_0_offset
        sequence_input[get_group_id(1)], // p_825->group_1_offset
        sequence_input[get_group_id(2)], // p_825->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[0][get_linear_local_id()])), // p_825->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_826 = c_827;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_825);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_825->g_20.x, "p_825->g_20.x", print_hash_value);
    transparent_crc(p_825->g_20.y, "p_825->g_20.y", print_hash_value);
    transparent_crc(p_825->g_20.z, "p_825->g_20.z", print_hash_value);
    transparent_crc(p_825->g_20.w, "p_825->g_20.w", print_hash_value);
    transparent_crc(p_825->g_22, "p_825->g_22", print_hash_value);
    transparent_crc(p_825->g_31, "p_825->g_31", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_825->g_84[i], "p_825->g_84[i]", print_hash_value);

    }
    transparent_crc(p_825->g_96, "p_825->g_96", print_hash_value);
    transparent_crc(p_825->g_99, "p_825->g_99", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_825->g_121[i], "p_825->g_121[i]", print_hash_value);

    }
    transparent_crc(p_825->g_123, "p_825->g_123", print_hash_value);
    transparent_crc(p_825->g_126.x, "p_825->g_126.x", print_hash_value);
    transparent_crc(p_825->g_126.y, "p_825->g_126.y", print_hash_value);
    transparent_crc(p_825->g_142, "p_825->g_142", print_hash_value);
    transparent_crc(p_825->g_147, "p_825->g_147", print_hash_value);
    transparent_crc(p_825->g_152.x, "p_825->g_152.x", print_hash_value);
    transparent_crc(p_825->g_152.y, "p_825->g_152.y", print_hash_value);
    transparent_crc(p_825->g_169, "p_825->g_169", print_hash_value);
    transparent_crc(p_825->g_183.s0, "p_825->g_183.s0", print_hash_value);
    transparent_crc(p_825->g_183.s1, "p_825->g_183.s1", print_hash_value);
    transparent_crc(p_825->g_183.s2, "p_825->g_183.s2", print_hash_value);
    transparent_crc(p_825->g_183.s3, "p_825->g_183.s3", print_hash_value);
    transparent_crc(p_825->g_183.s4, "p_825->g_183.s4", print_hash_value);
    transparent_crc(p_825->g_183.s5, "p_825->g_183.s5", print_hash_value);
    transparent_crc(p_825->g_183.s6, "p_825->g_183.s6", print_hash_value);
    transparent_crc(p_825->g_183.s7, "p_825->g_183.s7", print_hash_value);
    transparent_crc(p_825->g_183.s8, "p_825->g_183.s8", print_hash_value);
    transparent_crc(p_825->g_183.s9, "p_825->g_183.s9", print_hash_value);
    transparent_crc(p_825->g_183.sa, "p_825->g_183.sa", print_hash_value);
    transparent_crc(p_825->g_183.sb, "p_825->g_183.sb", print_hash_value);
    transparent_crc(p_825->g_183.sc, "p_825->g_183.sc", print_hash_value);
    transparent_crc(p_825->g_183.sd, "p_825->g_183.sd", print_hash_value);
    transparent_crc(p_825->g_183.se, "p_825->g_183.se", print_hash_value);
    transparent_crc(p_825->g_183.sf, "p_825->g_183.sf", print_hash_value);
    transparent_crc(p_825->g_184.s0, "p_825->g_184.s0", print_hash_value);
    transparent_crc(p_825->g_184.s1, "p_825->g_184.s1", print_hash_value);
    transparent_crc(p_825->g_184.s2, "p_825->g_184.s2", print_hash_value);
    transparent_crc(p_825->g_184.s3, "p_825->g_184.s3", print_hash_value);
    transparent_crc(p_825->g_184.s4, "p_825->g_184.s4", print_hash_value);
    transparent_crc(p_825->g_184.s5, "p_825->g_184.s5", print_hash_value);
    transparent_crc(p_825->g_184.s6, "p_825->g_184.s6", print_hash_value);
    transparent_crc(p_825->g_184.s7, "p_825->g_184.s7", print_hash_value);
    transparent_crc(p_825->g_219, "p_825->g_219", print_hash_value);
    transparent_crc(p_825->g_234.s0, "p_825->g_234.s0", print_hash_value);
    transparent_crc(p_825->g_234.s1, "p_825->g_234.s1", print_hash_value);
    transparent_crc(p_825->g_234.s2, "p_825->g_234.s2", print_hash_value);
    transparent_crc(p_825->g_234.s3, "p_825->g_234.s3", print_hash_value);
    transparent_crc(p_825->g_234.s4, "p_825->g_234.s4", print_hash_value);
    transparent_crc(p_825->g_234.s5, "p_825->g_234.s5", print_hash_value);
    transparent_crc(p_825->g_234.s6, "p_825->g_234.s6", print_hash_value);
    transparent_crc(p_825->g_234.s7, "p_825->g_234.s7", print_hash_value);
    transparent_crc(p_825->g_234.s8, "p_825->g_234.s8", print_hash_value);
    transparent_crc(p_825->g_234.s9, "p_825->g_234.s9", print_hash_value);
    transparent_crc(p_825->g_234.sa, "p_825->g_234.sa", print_hash_value);
    transparent_crc(p_825->g_234.sb, "p_825->g_234.sb", print_hash_value);
    transparent_crc(p_825->g_234.sc, "p_825->g_234.sc", print_hash_value);
    transparent_crc(p_825->g_234.sd, "p_825->g_234.sd", print_hash_value);
    transparent_crc(p_825->g_234.se, "p_825->g_234.se", print_hash_value);
    transparent_crc(p_825->g_234.sf, "p_825->g_234.sf", print_hash_value);
    transparent_crc(p_825->g_238.s0, "p_825->g_238.s0", print_hash_value);
    transparent_crc(p_825->g_238.s1, "p_825->g_238.s1", print_hash_value);
    transparent_crc(p_825->g_238.s2, "p_825->g_238.s2", print_hash_value);
    transparent_crc(p_825->g_238.s3, "p_825->g_238.s3", print_hash_value);
    transparent_crc(p_825->g_238.s4, "p_825->g_238.s4", print_hash_value);
    transparent_crc(p_825->g_238.s5, "p_825->g_238.s5", print_hash_value);
    transparent_crc(p_825->g_238.s6, "p_825->g_238.s6", print_hash_value);
    transparent_crc(p_825->g_238.s7, "p_825->g_238.s7", print_hash_value);
    transparent_crc(p_825->g_252, "p_825->g_252", print_hash_value);
    transparent_crc(p_825->g_283.s0, "p_825->g_283.s0", print_hash_value);
    transparent_crc(p_825->g_283.s1, "p_825->g_283.s1", print_hash_value);
    transparent_crc(p_825->g_283.s2, "p_825->g_283.s2", print_hash_value);
    transparent_crc(p_825->g_283.s3, "p_825->g_283.s3", print_hash_value);
    transparent_crc(p_825->g_283.s4, "p_825->g_283.s4", print_hash_value);
    transparent_crc(p_825->g_283.s5, "p_825->g_283.s5", print_hash_value);
    transparent_crc(p_825->g_283.s6, "p_825->g_283.s6", print_hash_value);
    transparent_crc(p_825->g_283.s7, "p_825->g_283.s7", print_hash_value);
    transparent_crc(p_825->g_302, "p_825->g_302", print_hash_value);
    transparent_crc(p_825->g_329.s0, "p_825->g_329.s0", print_hash_value);
    transparent_crc(p_825->g_329.s1, "p_825->g_329.s1", print_hash_value);
    transparent_crc(p_825->g_329.s2, "p_825->g_329.s2", print_hash_value);
    transparent_crc(p_825->g_329.s3, "p_825->g_329.s3", print_hash_value);
    transparent_crc(p_825->g_329.s4, "p_825->g_329.s4", print_hash_value);
    transparent_crc(p_825->g_329.s5, "p_825->g_329.s5", print_hash_value);
    transparent_crc(p_825->g_329.s6, "p_825->g_329.s6", print_hash_value);
    transparent_crc(p_825->g_329.s7, "p_825->g_329.s7", print_hash_value);
    transparent_crc(p_825->g_329.s8, "p_825->g_329.s8", print_hash_value);
    transparent_crc(p_825->g_329.s9, "p_825->g_329.s9", print_hash_value);
    transparent_crc(p_825->g_329.sa, "p_825->g_329.sa", print_hash_value);
    transparent_crc(p_825->g_329.sb, "p_825->g_329.sb", print_hash_value);
    transparent_crc(p_825->g_329.sc, "p_825->g_329.sc", print_hash_value);
    transparent_crc(p_825->g_329.sd, "p_825->g_329.sd", print_hash_value);
    transparent_crc(p_825->g_329.se, "p_825->g_329.se", print_hash_value);
    transparent_crc(p_825->g_329.sf, "p_825->g_329.sf", print_hash_value);
    transparent_crc(p_825->g_331.s0, "p_825->g_331.s0", print_hash_value);
    transparent_crc(p_825->g_331.s1, "p_825->g_331.s1", print_hash_value);
    transparent_crc(p_825->g_331.s2, "p_825->g_331.s2", print_hash_value);
    transparent_crc(p_825->g_331.s3, "p_825->g_331.s3", print_hash_value);
    transparent_crc(p_825->g_331.s4, "p_825->g_331.s4", print_hash_value);
    transparent_crc(p_825->g_331.s5, "p_825->g_331.s5", print_hash_value);
    transparent_crc(p_825->g_331.s6, "p_825->g_331.s6", print_hash_value);
    transparent_crc(p_825->g_331.s7, "p_825->g_331.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_825->g_338[i][j][k], "p_825->g_338[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_825->g_341.x, "p_825->g_341.x", print_hash_value);
    transparent_crc(p_825->g_341.y, "p_825->g_341.y", print_hash_value);
    transparent_crc(p_825->g_341.z, "p_825->g_341.z", print_hash_value);
    transparent_crc(p_825->g_341.w, "p_825->g_341.w", print_hash_value);
    transparent_crc(p_825->g_359, "p_825->g_359", print_hash_value);
    transparent_crc(p_825->g_386, "p_825->g_386", print_hash_value);
    transparent_crc(p_825->g_389.s0, "p_825->g_389.s0", print_hash_value);
    transparent_crc(p_825->g_389.s1, "p_825->g_389.s1", print_hash_value);
    transparent_crc(p_825->g_389.s2, "p_825->g_389.s2", print_hash_value);
    transparent_crc(p_825->g_389.s3, "p_825->g_389.s3", print_hash_value);
    transparent_crc(p_825->g_389.s4, "p_825->g_389.s4", print_hash_value);
    transparent_crc(p_825->g_389.s5, "p_825->g_389.s5", print_hash_value);
    transparent_crc(p_825->g_389.s6, "p_825->g_389.s6", print_hash_value);
    transparent_crc(p_825->g_389.s7, "p_825->g_389.s7", print_hash_value);
    transparent_crc(p_825->g_389.s8, "p_825->g_389.s8", print_hash_value);
    transparent_crc(p_825->g_389.s9, "p_825->g_389.s9", print_hash_value);
    transparent_crc(p_825->g_389.sa, "p_825->g_389.sa", print_hash_value);
    transparent_crc(p_825->g_389.sb, "p_825->g_389.sb", print_hash_value);
    transparent_crc(p_825->g_389.sc, "p_825->g_389.sc", print_hash_value);
    transparent_crc(p_825->g_389.sd, "p_825->g_389.sd", print_hash_value);
    transparent_crc(p_825->g_389.se, "p_825->g_389.se", print_hash_value);
    transparent_crc(p_825->g_389.sf, "p_825->g_389.sf", print_hash_value);
    transparent_crc(p_825->g_398.x, "p_825->g_398.x", print_hash_value);
    transparent_crc(p_825->g_398.y, "p_825->g_398.y", print_hash_value);
    transparent_crc(p_825->g_404.x, "p_825->g_404.x", print_hash_value);
    transparent_crc(p_825->g_404.y, "p_825->g_404.y", print_hash_value);
    transparent_crc(p_825->g_421.x, "p_825->g_421.x", print_hash_value);
    transparent_crc(p_825->g_421.y, "p_825->g_421.y", print_hash_value);
    transparent_crc(p_825->g_421.z, "p_825->g_421.z", print_hash_value);
    transparent_crc(p_825->g_421.w, "p_825->g_421.w", print_hash_value);
    transparent_crc(p_825->g_500.s0, "p_825->g_500.s0", print_hash_value);
    transparent_crc(p_825->g_500.s1, "p_825->g_500.s1", print_hash_value);
    transparent_crc(p_825->g_500.s2, "p_825->g_500.s2", print_hash_value);
    transparent_crc(p_825->g_500.s3, "p_825->g_500.s3", print_hash_value);
    transparent_crc(p_825->g_500.s4, "p_825->g_500.s4", print_hash_value);
    transparent_crc(p_825->g_500.s5, "p_825->g_500.s5", print_hash_value);
    transparent_crc(p_825->g_500.s6, "p_825->g_500.s6", print_hash_value);
    transparent_crc(p_825->g_500.s7, "p_825->g_500.s7", print_hash_value);
    transparent_crc(p_825->g_500.s8, "p_825->g_500.s8", print_hash_value);
    transparent_crc(p_825->g_500.s9, "p_825->g_500.s9", print_hash_value);
    transparent_crc(p_825->g_500.sa, "p_825->g_500.sa", print_hash_value);
    transparent_crc(p_825->g_500.sb, "p_825->g_500.sb", print_hash_value);
    transparent_crc(p_825->g_500.sc, "p_825->g_500.sc", print_hash_value);
    transparent_crc(p_825->g_500.sd, "p_825->g_500.sd", print_hash_value);
    transparent_crc(p_825->g_500.se, "p_825->g_500.se", print_hash_value);
    transparent_crc(p_825->g_500.sf, "p_825->g_500.sf", print_hash_value);
    transparent_crc(p_825->g_513.x, "p_825->g_513.x", print_hash_value);
    transparent_crc(p_825->g_513.y, "p_825->g_513.y", print_hash_value);
    transparent_crc(p_825->g_513.z, "p_825->g_513.z", print_hash_value);
    transparent_crc(p_825->g_513.w, "p_825->g_513.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_825->g_516[i], "p_825->g_516[i]", print_hash_value);

    }
    transparent_crc(p_825->g_569, "p_825->g_569", print_hash_value);
    transparent_crc(p_825->g_571, "p_825->g_571", print_hash_value);
    transparent_crc(p_825->g_632.x, "p_825->g_632.x", print_hash_value);
    transparent_crc(p_825->g_632.y, "p_825->g_632.y", print_hash_value);
    transparent_crc(p_825->g_645.s0, "p_825->g_645.s0", print_hash_value);
    transparent_crc(p_825->g_645.s1, "p_825->g_645.s1", print_hash_value);
    transparent_crc(p_825->g_645.s2, "p_825->g_645.s2", print_hash_value);
    transparent_crc(p_825->g_645.s3, "p_825->g_645.s3", print_hash_value);
    transparent_crc(p_825->g_645.s4, "p_825->g_645.s4", print_hash_value);
    transparent_crc(p_825->g_645.s5, "p_825->g_645.s5", print_hash_value);
    transparent_crc(p_825->g_645.s6, "p_825->g_645.s6", print_hash_value);
    transparent_crc(p_825->g_645.s7, "p_825->g_645.s7", print_hash_value);
    transparent_crc(p_825->g_645.s8, "p_825->g_645.s8", print_hash_value);
    transparent_crc(p_825->g_645.s9, "p_825->g_645.s9", print_hash_value);
    transparent_crc(p_825->g_645.sa, "p_825->g_645.sa", print_hash_value);
    transparent_crc(p_825->g_645.sb, "p_825->g_645.sb", print_hash_value);
    transparent_crc(p_825->g_645.sc, "p_825->g_645.sc", print_hash_value);
    transparent_crc(p_825->g_645.sd, "p_825->g_645.sd", print_hash_value);
    transparent_crc(p_825->g_645.se, "p_825->g_645.se", print_hash_value);
    transparent_crc(p_825->g_645.sf, "p_825->g_645.sf", print_hash_value);
    transparent_crc(p_825->g_681.s0, "p_825->g_681.s0", print_hash_value);
    transparent_crc(p_825->g_681.s1, "p_825->g_681.s1", print_hash_value);
    transparent_crc(p_825->g_681.s2, "p_825->g_681.s2", print_hash_value);
    transparent_crc(p_825->g_681.s3, "p_825->g_681.s3", print_hash_value);
    transparent_crc(p_825->g_681.s4, "p_825->g_681.s4", print_hash_value);
    transparent_crc(p_825->g_681.s5, "p_825->g_681.s5", print_hash_value);
    transparent_crc(p_825->g_681.s6, "p_825->g_681.s6", print_hash_value);
    transparent_crc(p_825->g_681.s7, "p_825->g_681.s7", print_hash_value);
    transparent_crc(p_825->g_690.s0, "p_825->g_690.s0", print_hash_value);
    transparent_crc(p_825->g_690.s1, "p_825->g_690.s1", print_hash_value);
    transparent_crc(p_825->g_690.s2, "p_825->g_690.s2", print_hash_value);
    transparent_crc(p_825->g_690.s3, "p_825->g_690.s3", print_hash_value);
    transparent_crc(p_825->g_690.s4, "p_825->g_690.s4", print_hash_value);
    transparent_crc(p_825->g_690.s5, "p_825->g_690.s5", print_hash_value);
    transparent_crc(p_825->g_690.s6, "p_825->g_690.s6", print_hash_value);
    transparent_crc(p_825->g_690.s7, "p_825->g_690.s7", print_hash_value);
    transparent_crc(p_825->g_690.s8, "p_825->g_690.s8", print_hash_value);
    transparent_crc(p_825->g_690.s9, "p_825->g_690.s9", print_hash_value);
    transparent_crc(p_825->g_690.sa, "p_825->g_690.sa", print_hash_value);
    transparent_crc(p_825->g_690.sb, "p_825->g_690.sb", print_hash_value);
    transparent_crc(p_825->g_690.sc, "p_825->g_690.sc", print_hash_value);
    transparent_crc(p_825->g_690.sd, "p_825->g_690.sd", print_hash_value);
    transparent_crc(p_825->g_690.se, "p_825->g_690.se", print_hash_value);
    transparent_crc(p_825->g_690.sf, "p_825->g_690.sf", print_hash_value);
    transparent_crc(p_825->g_691.x, "p_825->g_691.x", print_hash_value);
    transparent_crc(p_825->g_691.y, "p_825->g_691.y", print_hash_value);
    transparent_crc(p_825->g_692.x, "p_825->g_692.x", print_hash_value);
    transparent_crc(p_825->g_692.y, "p_825->g_692.y", print_hash_value);
    transparent_crc(p_825->g_745, "p_825->g_745", print_hash_value);
    transparent_crc(p_825->g_761.s0, "p_825->g_761.s0", print_hash_value);
    transparent_crc(p_825->g_761.s1, "p_825->g_761.s1", print_hash_value);
    transparent_crc(p_825->g_761.s2, "p_825->g_761.s2", print_hash_value);
    transparent_crc(p_825->g_761.s3, "p_825->g_761.s3", print_hash_value);
    transparent_crc(p_825->g_761.s4, "p_825->g_761.s4", print_hash_value);
    transparent_crc(p_825->g_761.s5, "p_825->g_761.s5", print_hash_value);
    transparent_crc(p_825->g_761.s6, "p_825->g_761.s6", print_hash_value);
    transparent_crc(p_825->g_761.s7, "p_825->g_761.s7", print_hash_value);
    transparent_crc(p_825->g_763.s0, "p_825->g_763.s0", print_hash_value);
    transparent_crc(p_825->g_763.s1, "p_825->g_763.s1", print_hash_value);
    transparent_crc(p_825->g_763.s2, "p_825->g_763.s2", print_hash_value);
    transparent_crc(p_825->g_763.s3, "p_825->g_763.s3", print_hash_value);
    transparent_crc(p_825->g_763.s4, "p_825->g_763.s4", print_hash_value);
    transparent_crc(p_825->g_763.s5, "p_825->g_763.s5", print_hash_value);
    transparent_crc(p_825->g_763.s6, "p_825->g_763.s6", print_hash_value);
    transparent_crc(p_825->g_763.s7, "p_825->g_763.s7", print_hash_value);
    transparent_crc(p_825->g_763.s8, "p_825->g_763.s8", print_hash_value);
    transparent_crc(p_825->g_763.s9, "p_825->g_763.s9", print_hash_value);
    transparent_crc(p_825->g_763.sa, "p_825->g_763.sa", print_hash_value);
    transparent_crc(p_825->g_763.sb, "p_825->g_763.sb", print_hash_value);
    transparent_crc(p_825->g_763.sc, "p_825->g_763.sc", print_hash_value);
    transparent_crc(p_825->g_763.sd, "p_825->g_763.sd", print_hash_value);
    transparent_crc(p_825->g_763.se, "p_825->g_763.se", print_hash_value);
    transparent_crc(p_825->g_763.sf, "p_825->g_763.sf", print_hash_value);
    transparent_crc(p_825->g_765.x, "p_825->g_765.x", print_hash_value);
    transparent_crc(p_825->g_765.y, "p_825->g_765.y", print_hash_value);
    transparent_crc(p_825->g_765.z, "p_825->g_765.z", print_hash_value);
    transparent_crc(p_825->g_765.w, "p_825->g_765.w", print_hash_value);
    transparent_crc(p_825->g_766.x, "p_825->g_766.x", print_hash_value);
    transparent_crc(p_825->g_766.y, "p_825->g_766.y", print_hash_value);
    transparent_crc(p_825->g_766.z, "p_825->g_766.z", print_hash_value);
    transparent_crc(p_825->g_766.w, "p_825->g_766.w", print_hash_value);
    transparent_crc(p_825->g_781.x, "p_825->g_781.x", print_hash_value);
    transparent_crc(p_825->g_781.y, "p_825->g_781.y", print_hash_value);
    transparent_crc(p_825->g_782.x, "p_825->g_782.x", print_hash_value);
    transparent_crc(p_825->g_782.y, "p_825->g_782.y", print_hash_value);
    transparent_crc(p_825->g_793, "p_825->g_793", print_hash_value);
    transparent_crc(p_825->v_collective, "p_825->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 5; i++)
            transparent_crc(p_825->g_special_values[i + 5 * get_linear_group_id()], "p_825->g_special_values[i + 5 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 5; i++)
            transparent_crc(p_825->l_special_values[i], "p_825->l_special_values[i]", print_hash_value);
    transparent_crc(p_825->l_comm_values[get_linear_local_id()], "p_825->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_825->g_comm_values[get_linear_group_id() * 23 + get_linear_local_id()], "p_825->g_comm_values[get_linear_group_id() * 23 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
