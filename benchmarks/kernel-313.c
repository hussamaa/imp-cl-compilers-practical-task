// --atomics 38 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 22,71,3 -l 2,1,1
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

// Seed: 3547542419

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(int32_t, 8) g_14;
    VECTOR(int16_t, 4) g_23;
    volatile VECTOR(uint8_t, 2) g_24;
    volatile VECTOR(uint8_t, 8) g_27;
    VECTOR(uint8_t, 4) g_29;
    int32_t g_38;
    int32_t *g_37[6];
    int8_t g_61;
    uint32_t g_63;
    uint64_t g_86[1];
    uint64_t g_140;
    volatile VECTOR(int16_t, 4) g_149;
    uint16_t g_159;
    int8_t g_169[10][6];
    int64_t g_181[7][4][9];
    uint32_t g_184;
    volatile VECTOR(int32_t, 8) g_219;
    int16_t g_227[2];
    int32_t ** volatile g_229;
    volatile int8_t g_283;
    volatile VECTOR(int32_t, 4) g_316;
    int32_t ** volatile g_317[5][2][9];
    uint64_t g_344[8];
    VECTOR(int32_t, 8) g_355;
    volatile VECTOR(int32_t, 2) g_356;
    VECTOR(int32_t, 4) g_358;
    volatile VECTOR(int32_t, 8) g_359;
    volatile VECTOR(int16_t, 16) g_360;
    VECTOR(uint32_t, 8) g_364;
    volatile VECTOR(int16_t, 16) g_367;
    VECTOR(int16_t, 2) g_368;
    volatile VECTOR(uint64_t, 4) g_374;
    volatile VECTOR(uint64_t, 2) g_375;
    VECTOR(uint64_t, 2) g_377;
    uint16_t g_389[2];
    int64_t g_391[3][4][4];
    VECTOR(uint32_t, 16) g_412;
    uint64_t *g_468;
    uint64_t **g_467;
    int8_t *g_475;
    int8_t **g_474;
    int16_t g_508;
    int64_t g_511;
    int32_t ** volatile g_519[6];
    int32_t * volatile g_523;
    int32_t * volatile g_524;
    uint64_t g_540[8];
    volatile VECTOR(int16_t, 2) g_547;
    VECTOR(int64_t, 16) g_549;
    VECTOR(uint64_t, 4) g_550;
    volatile VECTOR(int8_t, 8) g_558;
    volatile VECTOR(int8_t, 8) g_559;
    VECTOR(uint8_t, 2) g_562;
    VECTOR(int16_t, 8) g_563;
    uint16_t g_564;
    uint8_t g_570;
    volatile VECTOR(int64_t, 2) g_582;
    VECTOR(uint8_t, 16) g_589;
    VECTOR(uint32_t, 4) g_598;
    VECTOR(uint16_t, 2) g_619;
    volatile uint32_t g_622[3];
    volatile uint32_t *g_621;
    volatile uint32_t ** volatile g_620;
    VECTOR(int16_t, 2) g_624;
    VECTOR(uint16_t, 16) g_638;
    VECTOR(int64_t, 4) g_645;
    VECTOR(int64_t, 2) g_647;
    volatile VECTOR(int64_t, 4) g_649;
    VECTOR(int16_t, 8) g_663;
    volatile VECTOR(int16_t, 16) g_670;
    uint32_t **g_676;
    VECTOR(int32_t, 2) g_690;
    volatile VECTOR(int32_t, 4) g_691;
    volatile VECTOR(int32_t, 8) g_693;
    VECTOR(int8_t, 16) g_709;
    int64_t g_723;
    uint32_t *g_735;
    uint8_t *g_740;
    volatile VECTOR(uint16_t, 2) g_752;
    VECTOR(int8_t, 2) g_756;
    volatile VECTOR(int32_t, 2) g_774;
    int32_t g_809;
    volatile VECTOR(uint64_t, 8) g_827;
    VECTOR(uint64_t, 16) g_829;
    uint32_t g_851;
    int64_t *g_856;
    VECTOR(uint32_t, 4) g_870;
    VECTOR(uint64_t, 16) g_914;
    VECTOR(int32_t, 8) g_926;
    volatile VECTOR(uint8_t, 16) g_943;
    VECTOR(int32_t, 4) g_950;
    uint64_t *g_968;
    uint64_t *g_986;
    uint64_t ** volatile g_985[1];
    VECTOR(uint8_t, 8) g_989;
    VECTOR(uint8_t, 4) g_990;
    VECTOR(uint8_t, 8) g_993;
    VECTOR(int8_t, 8) g_1004;
    uint64_t g_1010;
    uint64_t g_1012;
    VECTOR(uint32_t, 8) g_1024;
    VECTOR(uint32_t, 16) g_1026;
    int32_t * volatile g_1037;
    VECTOR(int16_t, 8) g_1069;
    VECTOR(uint16_t, 16) g_1076;
    VECTOR(int16_t, 16) g_1102;
    int8_t g_1108;
    uint8_t g_1110;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S0 * p_1111);
uint8_t  func_9(int64_t  p_10, struct S0 * p_1111);
int64_t  func_11(int32_t  p_12, uint16_t  p_13, struct S0 * p_1111);
uint8_t  func_35(int32_t * p_36, struct S0 * p_1111);
uint8_t  func_53(int64_t  p_54, uint64_t  p_55, int32_t * p_56, struct S0 * p_1111);
int32_t * func_57(int8_t * p_58, int32_t  p_59, struct S0 * p_1111);
uint32_t  func_67(uint32_t  p_68, uint64_t  p_69, struct S0 * p_1111);
int64_t  func_81(uint32_t * p_82, struct S0 * p_1111);
uint32_t * func_83(uint64_t  p_84, struct S0 * p_1111);
int32_t * func_141(uint32_t * p_142, uint64_t * p_143, int64_t  p_144, uint16_t  p_145, struct S0 * p_1111);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1111->g_14 p_1111->g_comm_values p_1111->g_23 p_1111->g_24 p_1111->g_27 p_1111->g_29 p_1111->g_37 p_1111->g_38 p_1111->g_63 p_1111->l_comm_values p_1111->g_61 p_1111->g_140 p_1111->g_149 p_1111->g_86 p_1111->g_159 p_1111->g_184 p_1111->g_219 p_1111->g_227 p_1111->g_181 p_1111->g_229 p_1111->g_169 p_1111->g_344 p_1111->g_355 p_1111->g_356 p_1111->g_358 p_1111->g_359 p_1111->g_360 p_1111->g_364 p_1111->g_367 p_1111->g_368 p_1111->g_374 p_1111->g_375 p_1111->g_377 p_1111->g_391 p_1111->g_412 p_1111->g_467 p_1111->g_508 p_1111->g_389 p_1111->g_475 p_1111->g_540 p_1111->g_547 p_1111->g_549 p_1111->g_550 p_1111->g_558 p_1111->g_559 p_1111->g_562 p_1111->g_563 p_1111->g_564 p_1111->g_511 p_1111->g_582 p_1111->g_589 p_1111->g_598 p_1111->g_619 p_1111->g_620 p_1111->g_624 p_1111->g_638 p_1111->g_645 p_1111->g_647 p_1111->g_649 p_1111->g_621 p_1111->g_622 p_1111->g_663 p_1111->g_670 p_1111->g_690 p_1111->g_691 p_1111->g_693 p_1111->g_709 p_1111->g_752 p_1111->g_756 p_1111->g_740 p_1111->g_570 p_1111->g_774 p_1111->g_468 p_1111->g_809 p_1111->g_827 p_1111->g_829 p_1111->g_914 p_1111->g_926 p_1111->g_943 p_1111->g_950 p_1111->g_968 p_1111->g_985 p_1111->g_989 p_1111->g_990 p_1111->g_993 p_1111->g_1004 p_1111->g_986 p_1111->g_1024 p_1111->g_1026 p_1111->g_1102 p_1111->g_1108 p_1111->g_1110
 * writes: p_1111->g_14 p_1111->g_63 p_1111->g_37 p_1111->g_86 p_1111->g_61 p_1111->g_169 p_1111->g_181 p_1111->g_140 p_1111->l_comm_values p_1111->g_227 p_1111->g_29 p_1111->g_184 p_1111->g_38 p_1111->g_344 p_1111->g_159 p_1111->g_391 p_1111->g_389 p_1111->g_467 p_1111->g_474 p_1111->g_511 p_1111->g_468 p_1111->g_540 p_1111->g_562 p_1111->g_412 p_1111->g_563 p_1111->g_676 p_1111->g_723 p_1111->g_709 p_1111->g_735 p_1111->g_570 p_1111->g_809 p_1111->g_851 p_1111->g_856 p_1111->g_968 p_1111->g_1010 p_1111->g_1012 p_1111->g_638 p_1111->g_985 p_1111->g_508 p_1111->g_1108 p_1111->g_1110
 */
int64_t  func_1(struct S0 * p_1111)
{ /* block id: 4 */
    VECTOR(int16_t, 8) l_4 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 8L), 8L), 8L, (-1L), 8L);
    int32_t *l_15[6][3][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    VECTOR(uint8_t, 2) l_20 = (VECTOR(uint8_t, 2))(0xC1L, 0x03L);
    VECTOR(uint8_t, 8) l_25 = (VECTOR(uint8_t, 8))(0xAEL, (VECTOR(uint8_t, 4))(0xAEL, (VECTOR(uint8_t, 2))(0xAEL, 0x3AL), 0x3AL), 0x3AL, 0xAEL, 0x3AL);
    VECTOR(uint8_t, 2) l_26 = (VECTOR(uint8_t, 2))(9UL, 0x73L);
    VECTOR(uint8_t, 8) l_28 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x73L), 0x73L), 0x73L, 0UL, 0x73L);
    VECTOR(uint8_t, 8) l_30 = (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 248UL), 248UL), 248UL, 3UL, 248UL);
    uint16_t l_1007 = 0x0D92L;
    int32_t l_1008 = 0x0CD7CA15L;
    uint64_t *l_1009 = &p_1111->g_1010;
    uint64_t *l_1011 = &p_1111->g_1012;
    int64_t *l_1013 = &p_1111->g_511;
    uint32_t l_1014 = 4294967293UL;
    uint16_t *l_1015 = (void*)0;
    int8_t *l_1107 = &p_1111->g_1108;
    int16_t l_1109 = 0x16F5L;
    int i, j, k;
    l_1109 = (safe_add_func_int32_t_s_s(0x4D795364L, (((*l_1107) ^= (((VECTOR(int16_t, 4))(l_4.s4714)).w >= (p_1111->g_508 = (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 8))((safe_mod_func_int8_t_s_s(((l_4.s2 | func_9(((*l_1013) = func_11(((p_1111->g_14.s6 = ((VECTOR(int32_t, 16))(p_1111->g_14.s5024323164602074)).se) | ((VECTOR(uint32_t, 4))(6UL, ((VECTOR(uint32_t, 2))(4294967286UL, 4294967289UL)), 0x4166DA9AL)).y), (p_1111->g_638.s5 = ((safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s((((p_1111->g_comm_values[p_1111->tid] ^ (((1L || ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 4))(l_20.yyxx)), ((VECTOR(uint8_t, 8))((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(1L, 1L, 0x275BL, 0x5416L)).zwxywwxxxwxzwyyw))))), ((VECTOR(int16_t, 2))(p_1111->g_23.xw)).xxxyyxxxxxxxyyxy))).s7, p_1111->g_23.z)), 1UL, (+GROUP_DIVERGE(0, 1)), ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(247UL, 0x09L)))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_1111->g_24.xxyy)))).lo))).xyyx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 2))(1UL, 0x08L)).yxyyxxxx, ((VECTOR(uint8_t, 2))(1UL, 3UL)).xxxxxyxy, ((VECTOR(uint8_t, 16))(l_25.s5630444704232204)).odd))).odd)).hi)))).xyxy))), 0x7EL)).lo))).wyzwzywxwzwwyxyy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_26.xxyyyxxx)))).s25)).xxxxyxyx)).s65)).yxyyyxyyxxxxxyyx))).s9c, ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1111->g_27.s1052)), ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(l_28.s4650763140407445)).s40ed, ((VECTOR(uint8_t, 2))(p_1111->g_29.xw)).xyyy))))).even))).lo))).yxxyyxxxxyxyxxxy)).s873a, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_30.s6556)))).yyyywyxz)).s61)), 0xF5L, 0x6AL, 255UL, (((*l_1013) = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))((-10L), (p_1111->g_23.z & (safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(func_35(p_1111->g_37[5], p_1111), (((VECTOR(int8_t, 8))(p_1111->g_1004.s10536440)).s2 && (((*l_1011) = ((*l_1009) = ((safe_lshift_func_uint16_t_u_s((l_1007 <= 18446744073709551610UL), p_1111->g_926.s1)) < l_1008))) | 0x2A09EB8392CEAD91L)))), p_1111->g_1004.s6))), ((VECTOR(int64_t, 2))(0x099262806BEEB6B6L)), 0x07FA6985ECD63CA9L, (-1L), (-2L), 2L)).s3460106430320727)).sf) || (*p_1111->g_986)), 1UL, 250UL)).odd))).y) > l_1014) , 0x80ECL)) , p_1111->g_829.s1) <= p_1111->g_619.x), p_1111->g_377.y)), p_1111->g_990.x)) ^ p_1111->g_914.sc)), p_1111)), p_1111)) , (*p_1111->g_475)), p_1111->g_619.y)), ((VECTOR(int8_t, 4))((-1L))), (*p_1111->g_475), 0x5AL, 9L)).s0, p_1111->g_comm_values[p_1111->tid]))))) , (*p_1111->g_621))));
    p_1111->g_1110 ^= ((void*)0 != l_1009);
    return p_1111->g_367.s8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1111->g_61 p_1111->g_86 p_1111->g_159 p_1111->g_140 p_1111->g_184 p_1111->g_181 p_1111->g_229 p_1111->g_219 p_1111->g_169 p_1111->g_63 p_1111->g_29 p_1111->g_368 p_1111->g_360 p_1111->g_355 p_1111->g_364 p_1111->g_740 p_1111->g_570 p_1111->g_986 p_1111->g_344 p_1111->g_1102 p_1111->g_582 p_1111->g_1026
 * writes: p_1111->g_61 p_1111->g_169 p_1111->g_181 p_1111->g_140 p_1111->g_37 p_1111->g_184 p_1111->g_63 p_1111->g_227 p_1111->g_159 p_1111->g_389 p_1111->g_1010 p_1111->g_985 p_1111->g_570
 */
uint8_t  func_9(int64_t  p_10, struct S0 * p_1111)
{ /* block id: 357 */
    uint64_t *l_1057 = &p_1111->g_86[0];
    int32_t l_1060 = 0x6F97F99DL;
    VECTOR(uint16_t, 4) l_1074 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x7516L), 0x7516L);
    VECTOR(uint16_t, 4) l_1075 = (VECTOR(uint16_t, 4))(0xD868L, (VECTOR(uint16_t, 2))(0xD868L, 0x0F7BL), 0x0F7BL);
    int32_t *l_1085 = (void*)0;
    VECTOR(int64_t, 2) l_1101 = (VECTOR(int64_t, 2))(0x21A79AF6869BB59EL, 0x12A0B22554A6CAF8L);
    uint64_t ***l_1103 = &p_1111->g_467;
    int16_t *l_1104 = (void*)0;
    int16_t *l_1105 = &p_1111->g_227[0];
    int32_t *l_1106 = &l_1060;
    int i;
    for (p_1111->g_61 = 0; (p_1111->g_61 == 0); ++p_1111->g_61)
    { /* block id: 360 */
        int16_t *l_1061[3];
        VECTOR(int16_t, 2) l_1068 = (VECTOR(int16_t, 2))(0x3A43L, 0x02F4L);
        int32_t **l_1077 = (void*)0;
        int32_t *l_1078 = (void*)0;
        int i;
        for (i = 0; i < 3; i++)
            l_1061[i] = &p_1111->g_508;
        if ((atomic_inc(&p_1111->g_atomic_input[38 * get_linear_group_id() + 10]) == 6))
        { /* block id: 362 */
            uint64_t l_1041 = 18446744073709551614UL;
            uint64_t l_1044 = 0x9A6F1FB7F4D785B7L;
            VECTOR(int64_t, 8) l_1045 = (VECTOR(int64_t, 8))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x0DA79669DF1244B9L), 0x0DA79669DF1244B9L), 0x0DA79669DF1244B9L, 7L, 0x0DA79669DF1244B9L);
            VECTOR(int64_t, 2) l_1046 = (VECTOR(int64_t, 2))(1L, 1L);
            VECTOR(int64_t, 16) l_1047 = (VECTOR(int64_t, 16))((-8L), (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 0x3144EB213AB97172L), 0x3144EB213AB97172L), 0x3144EB213AB97172L, (-8L), 0x3144EB213AB97172L, (VECTOR(int64_t, 2))((-8L), 0x3144EB213AB97172L), (VECTOR(int64_t, 2))((-8L), 0x3144EB213AB97172L), (-8L), 0x3144EB213AB97172L, (-8L), 0x3144EB213AB97172L);
            uint16_t l_1048 = 65530UL;
            VECTOR(int64_t, 2) l_1049 = (VECTOR(int64_t, 2))(0x70AD656E9449598BL, 0x23BCCED2C11066DFL);
            VECTOR(uint16_t, 4) l_1050 = (VECTOR(uint16_t, 4))(0x8C94L, (VECTOR(uint16_t, 2))(0x8C94L, 0xA7F3L), 0xA7F3L);
            VECTOR(int32_t, 8) l_1051 = (VECTOR(int32_t, 8))(0x0CCFB516L, (VECTOR(int32_t, 4))(0x0CCFB516L, (VECTOR(int32_t, 2))(0x0CCFB516L, 5L), 5L), 5L, 0x0CCFB516L, 5L);
            int32_t l_1052 = 0x6400190AL;
            uint32_t l_1053 = 0xDCFA0836L;
            VECTOR(int32_t, 4) l_1054 = (VECTOR(int32_t, 4))(0x51F7D1CBL, (VECTOR(int32_t, 2))(0x51F7D1CBL, (-1L)), (-1L));
            uint64_t l_1055[2];
            int16_t l_1056 = 0x635AL;
            int i;
            for (i = 0; i < 2; i++)
                l_1055[i] = 0UL;
            --l_1041;
            l_1056 |= (((l_1044 = 0xBAE6L) , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_1045.s02)).yyxy)).odd)).odd, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_1046.xxyxxxyx)).s2354633340102541)).s96, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_1047.s705906ce)).s17)), ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_1048, 0x682A5EB219E0592BL, 0x4B8C00DDC5D21EE7L, 0x69C7B919FF1B7CF7L)).zxwwzyxywyyywwzw)).sfd, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_1049.xy)), (-7L), 0x700B0AF6771C9030L, 0x57CE1A1F87EBB1E3L, 0x2E168A8EE70CB24EL, 0L, 0L)).s16, ((VECTOR(int64_t, 4))(0x7F2A2C448217FAFEL, 0x7E577AB414E88018L, 0x52CD4393A554E92DL, 0x0F8A615CA3FFBF42L)).hi)))))), (-3L))).y) , (l_1055[0] = ((VECTOR(int32_t, 8))((l_1053 = (l_1052 = (((VECTOR(uint16_t, 8))(l_1050.zyywwxzx)).s4 , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1051.s7750256217451740)).s17)).yxxx)).w))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1054.zy)))), ((VECTOR(int32_t, 4))(0x6D40ECE6L, 0x6A253C54L, 0x661734B5L, 0x0423F562L)), 0x2E9448B6L)).s7));
            unsigned int result = 0;
            result += l_1041;
            result += l_1044;
            result += l_1045.s7;
            result += l_1045.s6;
            result += l_1045.s5;
            result += l_1045.s4;
            result += l_1045.s3;
            result += l_1045.s2;
            result += l_1045.s1;
            result += l_1045.s0;
            result += l_1046.y;
            result += l_1046.x;
            result += l_1047.sf;
            result += l_1047.se;
            result += l_1047.sd;
            result += l_1047.sc;
            result += l_1047.sb;
            result += l_1047.sa;
            result += l_1047.s9;
            result += l_1047.s8;
            result += l_1047.s7;
            result += l_1047.s6;
            result += l_1047.s5;
            result += l_1047.s4;
            result += l_1047.s3;
            result += l_1047.s2;
            result += l_1047.s1;
            result += l_1047.s0;
            result += l_1048;
            result += l_1049.y;
            result += l_1049.x;
            result += l_1050.w;
            result += l_1050.z;
            result += l_1050.y;
            result += l_1050.x;
            result += l_1051.s7;
            result += l_1051.s6;
            result += l_1051.s5;
            result += l_1051.s4;
            result += l_1051.s3;
            result += l_1051.s2;
            result += l_1051.s1;
            result += l_1051.s0;
            result += l_1052;
            result += l_1053;
            result += l_1054.w;
            result += l_1054.z;
            result += l_1054.y;
            result += l_1054.x;
            int l_1055_i0;
            for (l_1055_i0 = 0; l_1055_i0 < 2; l_1055_i0++) {
                result += l_1055[l_1055_i0];
            }
            result += l_1056;
            atomic_add(&p_1111->g_special_values[38 * get_linear_group_id() + 10], result);
        }
        else
        { /* block id: 369 */
            (1 + 1);
        }
        l_1078 = func_141(&p_1111->g_63, l_1057, (safe_mul_func_int16_t_s_s((l_1060 = l_1060), (((safe_rshift_func_uint8_t_u_s(((((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_1068.xx)).odd, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1111->g_1069.s5644)), (l_1068.y != (safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(p_10, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_1074.wyyw)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 16))(l_1068.x, ((VECTOR(uint16_t, 8))(l_1075.xwzxyzxw)), 1UL, 0xB351L, 0xA83AL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_1111->g_1076.sb820c071194636c1)).sa0ce)).lo)), 1UL, 0UL)).odd, (uint16_t)0x8E6CL))).s4220574060013635)).s85, (uint16_t)(p_10 == p_10), (uint16_t)0xDC6BL))).xxyy)))).s6)), (*p_1111->g_986)))), p_10, (-1L), 0L)).s7)) , p_10) <= l_1068.x) > l_1074.z), p_10)) ^ 0L) | 0x62710110C05F22C6L))), l_1068.x, p_1111);
        for (p_1111->g_1010 = 1; (p_1111->g_1010 > 35); p_1111->g_1010 = safe_add_func_int64_t_s_s(p_1111->g_1010, 5))
        { /* block id: 376 */
            uint64_t **l_1081 = &p_1111->g_986;
            uint64_t ***l_1082[3][10] = {{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081}};
            int32_t *l_1083[4][7][9] = {{{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060}},{{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060}},{{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060}},{{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060},{&l_1060,(void*)0,(void*)0,(void*)0,&p_1111->g_38,(void*)0,(void*)0,(void*)0,&l_1060}}};
            int32_t **l_1084[5][3][2] = {{{&l_1083[0][5][4],&p_1111->g_37[5]},{&l_1083[0][5][4],&p_1111->g_37[5]},{&l_1083[0][5][4],&p_1111->g_37[5]}},{{&l_1083[0][5][4],&p_1111->g_37[5]},{&l_1083[0][5][4],&p_1111->g_37[5]},{&l_1083[0][5][4],&p_1111->g_37[5]}},{{&l_1083[0][5][4],&p_1111->g_37[5]},{&l_1083[0][5][4],&p_1111->g_37[5]},{&l_1083[0][5][4],&p_1111->g_37[5]}},{{&l_1083[0][5][4],&p_1111->g_37[5]},{&l_1083[0][5][4],&p_1111->g_37[5]},{&l_1083[0][5][4],&p_1111->g_37[5]}},{{&l_1083[0][5][4],&p_1111->g_37[5]},{&l_1083[0][5][4],&p_1111->g_37[5]},{&l_1083[0][5][4],&p_1111->g_37[5]}}};
            int i, j, k;
            p_1111->g_985[0] = l_1081;
            l_1085 = l_1083[0][5][4];
            l_1060 = ((*l_1078) &= ((((*p_1111->g_740) && FAKE_DIVERGE(p_1111->global_1_offset, get_global_id(1), 10)) > ((p_10 != p_1111->g_355.s0) ^ 0xC227D74D8879AE98L)) , (safe_mod_func_int8_t_s_s(p_10, ((*p_1111->g_740) = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((&p_1111->g_475 != (void*)0), 8)), 2)))))));
        }
        if (p_10)
            break;
    }
    p_1111->g_985[0] = &p_1111->g_986;
    (*l_1106) ^= (safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((*p_1111->g_740) = ((~(safe_unary_minus_func_uint16_t_u((!(1UL != ((*l_1105) = ((0x0443L < (l_1074.w , ((safe_mod_func_int64_t_s_s(((l_1085 != l_1085) <= (*p_1111->g_986)), (safe_sub_func_int64_t_s_s(1L, ((VECTOR(int64_t, 2))(l_1101.xy)).hi)))) , ((VECTOR(int16_t, 8))(p_1111->g_1102.sa8c3e9b6)).s4))) > (((l_1103 = l_1103) != (void*)0) && p_1111->g_582.x)))))))) , p_10)), 0xD5L)), p_1111->g_1026.s2));
    return (*p_1111->g_740);
}


/* ------------------------------------------ */
/* 
 * reads : p_1111->g_986 p_1111->g_344 p_1111->g_1024 p_1111->g_1026 p_1111->g_355 p_1111->g_23 p_1111->l_comm_values p_1111->g_140 p_1111->g_38 p_1111->g_61 p_1111->g_86 p_1111->g_159 p_1111->g_184 p_1111->g_181 p_1111->g_229 p_1111->g_219 p_1111->g_169 p_1111->g_29 p_1111->g_368 p_1111->g_360 p_1111->g_364 p_1111->g_412 p_1111->g_359 p_1111->g_467 p_1111->g_14
 * writes: p_1111->g_344 p_1111->g_61 p_1111->g_169 p_1111->g_181 p_1111->g_140 p_1111->g_37 p_1111->g_184 p_1111->g_227 p_1111->g_38 p_1111->g_63 p_1111->g_159 p_1111->g_389 p_1111->g_467 p_1111->g_474
 */
int64_t  func_11(int32_t  p_12, uint16_t  p_13, struct S0 * p_1111)
{ /* block id: 347 */
    int16_t l_1016 = (-5L);
    VECTOR(uint32_t, 2) l_1025 = (VECTOR(uint32_t, 2))(0xE79897E4L, 0xF1D0F06AL);
    VECTOR(uint32_t, 2) l_1027 = (VECTOR(uint32_t, 2))(0UL, 0x1DB19872L);
    int8_t *l_1028[5] = {&p_1111->g_169[8][0],&p_1111->g_169[8][0],&p_1111->g_169[8][0],&p_1111->g_169[8][0],&p_1111->g_169[8][0]};
    int8_t **l_1029 = &l_1028[0];
    int8_t *l_1030 = &p_1111->g_169[8][0];
    int32_t **l_1031 = &p_1111->g_37[3];
    uint16_t **l_1032 = (void*)0;
    uint16_t ***l_1033 = &l_1032;
    uint16_t *l_1035 = &p_1111->g_389[0];
    uint16_t **l_1034[2][6];
    uint16_t ***l_1036 = &l_1034[0][5];
    int32_t *l_1038 = &p_1111->g_38;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
            l_1034[i][j] = &l_1035;
    }
    l_1016 &= 0x5C629FB3L;
    (*l_1031) = func_83((((*p_1111->g_986) |= (&p_1111->g_468 == (void*)0)) >= (safe_rshift_func_int8_t_s_s((0x3FC9AAFFC272E651L >= (safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_uint32_t_u((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(p_1111->g_1024.s16652533)).s12, ((VECTOR(uint32_t, 2))(4294967287UL, 4UL))))).hi, ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(l_1025.yx)), ((VECTOR(uint32_t, 16))(0x7F4041FCL, ((VECTOR(uint32_t, 2))(0xA0602603L, 4294967287UL)), 7UL, 1UL, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(p_1111->g_1026.see5503461445fb87)), ((VECTOR(uint32_t, 8))(l_1027.xyyxxxyx)).s2605272166115466, ((VECTOR(uint32_t, 16))((((*l_1029) = l_1028[0]) != l_1030), 0x5138D533L, ((VECTOR(uint32_t, 8))(((p_1111->g_355.s5 , p_13) && (0x08BE1C76E5525544L >= 1L)), 0x5064E072L, ((VECTOR(uint32_t, 4))(4294967289UL)), 4UL, 1UL)), 6UL, 0UL, ((VECTOR(uint32_t, 4))(0x57D3164EL))))))).s6149, ((VECTOR(uint32_t, 4))(4294967295UL))))), ((VECTOR(uint32_t, 4))(3UL)), ((VECTOR(uint32_t, 2))(0x11F00EBDL)), 0x69964C61L)).sdc))).even)))) ^ 0x3F71L), p_13))), 0))), p_1111);
    (*l_1038) &= (((*l_1033) = l_1032) != (p_1111->g_14.s7 , ((*l_1036) = l_1034[0][5])));
    return (*l_1038);
}


/* ------------------------------------------ */
/* 
 * reads : p_1111->g_29 p_1111->g_27 p_1111->g_38 p_1111->g_63 p_1111->l_comm_values p_1111->g_61 p_1111->g_23 p_1111->g_140 p_1111->g_149 p_1111->g_86 p_1111->g_159 p_1111->g_184 p_1111->g_219 p_1111->g_227 p_1111->g_181 p_1111->g_229 p_1111->g_169 p_1111->g_344 p_1111->g_comm_values p_1111->g_355 p_1111->g_356 p_1111->g_358 p_1111->g_359 p_1111->g_360 p_1111->g_364 p_1111->g_367 p_1111->g_368 p_1111->g_374 p_1111->g_375 p_1111->g_377 p_1111->g_391 p_1111->g_412 p_1111->g_467 p_1111->g_508 p_1111->g_389 p_1111->g_475 p_1111->g_540 p_1111->g_547 p_1111->g_549 p_1111->g_550 p_1111->g_558 p_1111->g_559 p_1111->g_562 p_1111->g_563 p_1111->g_564 p_1111->g_511 p_1111->g_582 p_1111->g_589 p_1111->g_598 p_1111->g_619 p_1111->g_620 p_1111->g_624 p_1111->g_638 p_1111->g_645 p_1111->g_647 p_1111->g_649 p_1111->g_621 p_1111->g_622 p_1111->g_663 p_1111->g_670 p_1111->g_690 p_1111->g_691 p_1111->g_693 p_1111->g_709 p_1111->g_752 p_1111->g_756 p_1111->g_740 p_1111->g_570 p_1111->g_774 p_1111->g_468 p_1111->g_809 p_1111->g_827 p_1111->g_829 p_1111->g_914 p_1111->g_926 p_1111->g_943 p_1111->g_950 p_1111->g_968 p_1111->g_985 p_1111->g_989 p_1111->g_990 p_1111->g_993
 * writes: p_1111->g_63 p_1111->g_37 p_1111->g_86 p_1111->g_61 p_1111->g_169 p_1111->g_181 p_1111->g_140 p_1111->l_comm_values p_1111->g_227 p_1111->g_29 p_1111->g_184 p_1111->g_38 p_1111->g_344 p_1111->g_159 p_1111->g_391 p_1111->g_389 p_1111->g_467 p_1111->g_474 p_1111->g_511 p_1111->g_468 p_1111->g_540 p_1111->g_562 p_1111->g_412 p_1111->g_563 p_1111->g_676 p_1111->g_723 p_1111->g_709 p_1111->g_735 p_1111->g_570 p_1111->g_809 p_1111->g_851 p_1111->g_856 p_1111->g_968
 */
uint8_t  func_35(int32_t * p_36, struct S0 * p_1111)
{ /* block id: 6 */
    int8_t *l_41[3];
    int32_t l_42[2];
    int32_t l_43 = 0x164004C0L;
    int32_t *l_44 = &l_42[1];
    int32_t *l_45 = &l_43;
    int32_t *l_46[7] = {&l_42[1],&l_42[1],&l_42[1],&l_42[1],&l_42[1],&l_42[1],&l_42[1]};
    uint64_t l_47 = 0x8A645C98B20FBFF5L;
    int32_t **l_52 = &l_46[1];
    uint8_t *l_569[3];
    int8_t l_571 = 0L;
    VECTOR(int64_t, 4) l_576 = (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 0x077BC8CDAAA0695EL), 0x077BC8CDAAA0695EL);
    VECTOR(uint32_t, 2) l_597 = (VECTOR(uint32_t, 2))(9UL, 0xD1C64141L);
    VECTOR(uint32_t, 4) l_623 = (VECTOR(uint32_t, 4))(0x4EBA846BL, (VECTOR(uint32_t, 2))(0x4EBA846BL, 1UL), 1UL);
    uint32_t *l_675 = &p_1111->g_184;
    uint32_t **l_674[1][6] = {{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675}};
    uint16_t l_696 = 7UL;
    VECTOR(int8_t, 4) l_701 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x1EL), 0x1EL);
    int32_t l_721 = 0x1A9C55C5L;
    VECTOR(int16_t, 16) l_762 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 3L), 3L), 3L, 0L, 3L, (VECTOR(int16_t, 2))(0L, 3L), (VECTOR(int16_t, 2))(0L, 3L), 0L, 3L, 0L, 3L);
    uint8_t l_810 = 0x64L;
    int64_t *l_831 = &p_1111->g_391[0][1][3];
    int8_t l_929 = 0L;
    VECTOR(uint8_t, 8) l_942 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL);
    VECTOR(uint8_t, 2) l_987 = (VECTOR(uint8_t, 2))(255UL, 0UL);
    int i, j;
    for (i = 0; i < 3; i++)
        l_41[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_42[i] = 0x28D9B787L;
    for (i = 0; i < 3; i++)
        l_569[i] = &p_1111->g_570;
    l_43 = (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x3AL, 1L)), 5L, 1L)).w, (l_42[1] |= p_1111->g_29.y)));
    ++l_47;
    if ((safe_mul_func_uint16_t_u_u(((*l_44) && (((*l_45) = ((p_1111->g_27.s1 , p_1111->g_27.s1) , ((*l_44) &= ((((void*)0 == l_41[0]) <= ((&p_1111->g_38 != ((*l_52) = &p_1111->g_38)) < 0UL)) , (((func_53(p_1111->g_38, p_1111->g_27.s5, p_36, p_1111) && 0x52L) , &p_36) == (void*)0))))) , (*l_45))), l_47)))
    { /* block id: 187 */
        uint32_t l_572 = 0x90CD9E6EL;
        int32_t *l_573[10][8] = {{(void*)0,&l_42[1],(void*)0,&l_43,&p_1111->g_38,&p_1111->g_38,&l_43,(void*)0},{(void*)0,&l_42[1],(void*)0,&l_43,&p_1111->g_38,&p_1111->g_38,&l_43,(void*)0},{(void*)0,&l_42[1],(void*)0,&l_43,&p_1111->g_38,&p_1111->g_38,&l_43,(void*)0},{(void*)0,&l_42[1],(void*)0,&l_43,&p_1111->g_38,&p_1111->g_38,&l_43,(void*)0},{(void*)0,&l_42[1],(void*)0,&l_43,&p_1111->g_38,&p_1111->g_38,&l_43,(void*)0},{(void*)0,&l_42[1],(void*)0,&l_43,&p_1111->g_38,&p_1111->g_38,&l_43,(void*)0},{(void*)0,&l_42[1],(void*)0,&l_43,&p_1111->g_38,&p_1111->g_38,&l_43,(void*)0},{(void*)0,&l_42[1],(void*)0,&l_43,&p_1111->g_38,&p_1111->g_38,&l_43,(void*)0},{(void*)0,&l_42[1],(void*)0,&l_43,&p_1111->g_38,&p_1111->g_38,&l_43,(void*)0},{(void*)0,&l_42[1],(void*)0,&l_43,&p_1111->g_38,&p_1111->g_38,&l_43,(void*)0}};
        int64_t *l_577 = &p_1111->g_391[1][2][3];
        VECTOR(int64_t, 4) l_644 = (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 1L), 1L);
        VECTOR(int64_t, 8) l_650 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x7A13E05CA94E5C2CL), 0x7A13E05CA94E5C2CL), 0x7A13E05CA94E5C2CL, 0L, 0x7A13E05CA94E5C2CL);
        uint64_t **l_669 = &p_1111->g_468;
        int16_t *l_673 = (void*)0;
        int i, j;
        (*l_52) = ((*p_36) , ((l_572 ^= ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((1L < l_571) < 0xEEL), 7L, 0x2140L, (-3L))).xyywzzyz)).s4) , l_573[8][5]));
        if ((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 16))(l_576.yyzyyxxxzywwwwwy)).s2, ((*l_577) = (-1L)))))
        { /* block id: 191 */
            (*p_36) = (safe_sub_func_uint64_t_u_u(((-5L) <= p_1111->g_375.x), p_1111->g_368.x));
        }
        else
        { /* block id: 193 */
            uint32_t l_590[3];
            uint32_t *l_599 = (void*)0;
            int16_t *l_600 = (void*)0;
            int16_t *l_601 = &p_1111->g_227[1];
            int16_t *l_602[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_603 = 0x6D915477L;
            uint64_t *l_605[10][1][1] = {{{&p_1111->g_140}},{{&p_1111->g_140}},{{&p_1111->g_140}},{{&p_1111->g_140}},{{&p_1111->g_140}},{{&p_1111->g_140}},{{&p_1111->g_140}},{{&p_1111->g_140}},{{&p_1111->g_140}},{{&p_1111->g_140}}};
            uint64_t **l_604 = &l_605[1][0][0];
            uint64_t **l_606 = (void*)0;
            uint64_t *l_608 = &l_47;
            uint64_t **l_607 = &l_608;
            uint64_t *l_610 = &l_47;
            uint64_t **l_609 = &l_610;
            VECTOR(uint16_t, 8) l_639 = (VECTOR(uint16_t, 8))(0x7F08L, (VECTOR(uint16_t, 4))(0x7F08L, (VECTOR(uint16_t, 2))(0x7F08L, 0x1B5DL), 0x1B5DL), 0x1B5DL, 0x7F08L, 0x1B5DL);
            uint64_t **l_668[1][2][1];
            int8_t *l_682 = (void*)0;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_590[i] = 1UL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_668[i][j][k] = (void*)0;
                }
            }
            l_603 = ((safe_mod_func_int32_t_s_s((((VECTOR(int64_t, 16))(p_1111->g_582.xyyxxxxxxxyyxxxy)).sc & (safe_rshift_func_int16_t_s_u(8L, (safe_lshift_func_uint8_t_u_s((((((safe_lshift_func_uint8_t_u_s(((p_1111->g_562.x = ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_1111->g_29.z, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 8))(p_1111->g_589.sae5ff69a)), ((VECTOR(uint8_t, 4))(FAKE_DIVERGE(p_1111->group_1_offset, get_group_id(1), 10), ((VECTOR(uint8_t, 2))(255UL, 2UL)), 254UL)).wyzxyxyy))).s4115105213334014)).s36)))), 0UL)).hi)).odd) | l_590[2]), 5)) , l_590[1]) || l_590[2]) || (l_590[1] == (safe_sub_func_int16_t_s_s((p_1111->g_563.s6 = ((*l_601) = (safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(0x07EAL, (((p_1111->g_412.sc = ((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 2))(l_597.yx)).xyyyxyxyxyxyyxxx))), ((VECTOR(uint32_t, 8))(p_1111->g_598.zwwyywzz)).s6355223343371010))).sc) , &p_1111->g_63) != p_36))), 3)))), 0x5C19L)))) ^ p_1111->g_344[5]), 6))))), 0x14CAC820L)) > p_1111->g_598.z);
            (*p_36) &= ((*l_45) , (&p_1111->g_475 != ((*l_44) , &p_1111->g_475)));
            if ((((*l_607) = ((*l_604) = (void*)0)) == ((*l_609) = l_577)))
            { /* block id: 203 */
                uint32_t **l_611 = &l_599;
                (*l_45) = (FAKE_DIVERGE(p_1111->local_0_offset, get_local_id(0), 10) != (((*l_611) = (void*)0) == (void*)0));
                (*l_52) = (void*)0;
                return p_1111->g_149.y;
            }
            else
            { /* block id: 208 */
                uint32_t l_616 = 0xCC9E5467L;
                uint16_t *l_617 = &p_1111->g_159;
                int32_t l_618 = 0x6F671D88L;
                uint32_t **l_633 = &l_599;
                int64_t *l_646 = &p_1111->g_181[4][2][5];
                VECTOR(int64_t, 4) l_648 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-6L)), (-6L));
                VECTOR(uint8_t, 2) l_651 = (VECTOR(uint8_t, 2))(0UL, 0UL);
                int64_t *l_654 = &p_1111->g_511;
                int64_t *l_655 = (void*)0;
                int64_t *l_656 = (void*)0;
                int64_t *l_657 = (void*)0;
                int64_t *l_658[9][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int32_t l_659 = (-1L);
                uint64_t **l_666 = (void*)0;
                uint64_t ***l_667[4][3][7] = {{{(void*)0,&p_1111->g_467,(void*)0,&p_1111->g_467,(void*)0,(void*)0,&p_1111->g_467},{(void*)0,&p_1111->g_467,(void*)0,&p_1111->g_467,(void*)0,(void*)0,&p_1111->g_467},{(void*)0,&p_1111->g_467,(void*)0,&p_1111->g_467,(void*)0,(void*)0,&p_1111->g_467}},{{(void*)0,&p_1111->g_467,(void*)0,&p_1111->g_467,(void*)0,(void*)0,&p_1111->g_467},{(void*)0,&p_1111->g_467,(void*)0,&p_1111->g_467,(void*)0,(void*)0,&p_1111->g_467},{(void*)0,&p_1111->g_467,(void*)0,&p_1111->g_467,(void*)0,(void*)0,&p_1111->g_467}},{{(void*)0,&p_1111->g_467,(void*)0,&p_1111->g_467,(void*)0,(void*)0,&p_1111->g_467},{(void*)0,&p_1111->g_467,(void*)0,&p_1111->g_467,(void*)0,(void*)0,&p_1111->g_467},{(void*)0,&p_1111->g_467,(void*)0,&p_1111->g_467,(void*)0,(void*)0,&p_1111->g_467}},{{(void*)0,&p_1111->g_467,(void*)0,&p_1111->g_467,(void*)0,(void*)0,&p_1111->g_467},{(void*)0,&p_1111->g_467,(void*)0,&p_1111->g_467,(void*)0,(void*)0,&p_1111->g_467},{(void*)0,&p_1111->g_467,(void*)0,&p_1111->g_467,(void*)0,(void*)0,&p_1111->g_467}}};
                int i, j, k;
                (*l_45) ^= ((*l_44) &= (((GROUP_DIVERGE(2, 1) || ((l_618 &= (safe_add_func_int32_t_s_s(l_590[2], ((safe_sub_func_int8_t_s_s(0x25L, l_616)) >= ((*l_617) = 0xCE0DL))))) >= ((VECTOR(uint16_t, 2))(p_1111->g_619.yy)).odd)) || ((p_1111->g_620 != &p_1111->g_621) != 0x52B1AC1686A7144BL)) != (((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_623.yx)))).odd , (((VECTOR(int16_t, 4))(p_1111->g_624.yxyx)).w | ((VECTOR(uint16_t, 2))(1UL, 5UL)).even)) , (FAKE_DIVERGE(p_1111->local_2_offset, get_local_id(2), 10) > l_590[2])) & ((**l_609) = (((&p_1111->g_184 == &p_1111->g_184) == l_590[2]) >= 255UL)))));
                (*l_45) |= (safe_add_func_int8_t_s_s(((*p_1111->g_475) &= ((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_1111->local_1_offset, get_local_id(1), 10), (l_618 = (safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((l_633 == l_633) , (safe_mod_func_int64_t_s_s(0x7D5068B18E0588D8L, (l_659 ^= ((*l_654) &= (safe_mod_func_uint64_t_u_u(0UL, ((((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 4))(p_1111->g_638.s7ecc)).even, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_639.s6211670153643063)).s28)).yxxx)), (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))((safe_div_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_644.zx)).yxxyyxyx)).s71)).xyxx, ((VECTOR(int64_t, 16))(1L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(p_1111->g_645.wz)), (int64_t)(l_639.s7 != 18446744073709551613UL)))).xyyx)).z, ((*l_646) |= (p_1111->g_184 , ((*l_577) = l_618))), ((VECTOR(int64_t, 2))(p_1111->g_647.xy)), 0x7CD983DC6F87582FL, ((VECTOR(int64_t, 8))(l_648.wxzzzzxw)), 0x43C82AD452A74BDCL, 0x29AFFA08A673B439L)).s06a6, ((VECTOR(int64_t, 16))(p_1111->g_649.zwzywzyzzzwxywzx)).s8410))).wzxwzzyy, ((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 2))(l_650.s37)).xxxx, (int64_t)(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_651.xyyxxyyyyxyyxyxx)).sb0)).yxxx, ((VECTOR(uint8_t, 16))((((--p_1111->g_29.z) & (-10L)) , 0x9DL), FAKE_DIVERGE(p_1111->local_1_offset, get_local_id(1), 10), ((VECTOR(uint8_t, 8))(7UL)), l_603, p_1111->g_368.y, ((VECTOR(uint8_t, 2))(253UL)), 0x42L, 1UL)).sa8e3))).z <= FAKE_DIVERGE(p_1111->local_0_offset, get_local_id(0), 10))))).xzywzywywxzyzxzx)).even)), ((VECTOR(int64_t, 8))(4L)))))))).s77)).lo, p_1111->g_140)), p_1111->g_540[2])), l_616, 0UL, l_590[2], (**p_1111->g_620), (*p_1111->g_621), 4294967295UL, 1UL)))).s4 != (*p_36)), ((VECTOR(uint16_t, 2))(0x060DL)), 0x1692L)).lo, ((VECTOR(uint16_t, 4))(0xBE68L))))).hi, ((VECTOR(uint16_t, 2))(4UL))))).odd , 0x76B61D72L) && l_590[2])))))))), l_590[2])), 0x79L))))) >= p_1111->g_624.y)), 0x40L));
                if (((safe_unary_minus_func_uint16_t_u((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(p_1111->g_663.s43)).xxxxxyxxyxxyyyyy, ((VECTOR(int16_t, 4))(0x2F53L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(1L, 0x37D4L)).xyxy)).odd, ((VECTOR(int16_t, 8))(0x1F46L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))((safe_mul_func_uint16_t_u_u((((l_668[0][1][0] = l_666) != l_669) && ((void*)0 == p_36)), (p_1111->g_638.s9 == p_1111->g_374.y))), 0x2AEAL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x2254L, 0x5FF3L)), (-9L), 0L)), ((VECTOR(int16_t, 2))(p_1111->g_670.s1f)), (safe_mod_func_int32_t_s_s(((*l_44) = (((void*)0 == l_673) , ((*p_36) = (*p_36)))), (**p_1111->g_620))), 0x329EL, 1L, ((VECTOR(int16_t, 4))(0x250CL)), 0x3D02L)).sdaa3)).xyyyxwzw, ((VECTOR(int16_t, 8))(0x6D2CL))))).lo)), 0x46B7L, (-8L), 0x7D06L)).s63))))), (-6L))).wxyzyzxxzxwxxwxx, ((VECTOR(int16_t, 16))((-2L)))))).s8a, (int16_t)p_1111->g_562.x, (int16_t)p_1111->g_367.s2))).lo, p_1111->g_549.s8)))) | 0xCC52L))
                { /* block id: 225 */
                    uint32_t **l_677[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_677[i] = &l_675;
                    l_603 |= (+((p_1111->g_676 = l_674[0][1]) != (FAKE_DIVERGE(p_1111->local_1_offset, get_local_id(1), 10) , l_677[0])));
                }
                else
                { /* block id: 228 */
                    int8_t *l_678[1][10];
                    int32_t l_681[3][4][1] = {{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}}};
                    int32_t l_685[3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_678[i][j] = &p_1111->g_169[2][1];
                    }
                    for (i = 0; i < 3; i++)
                        l_685[i] = 0x0FB6E095L;
                    (*l_52) = func_57(l_678[0][0], ((**p_1111->g_620) && (safe_mul_func_uint8_t_u_u(((((VECTOR(int64_t, 16))(((((l_681[0][2][0] |= (**p_1111->g_620)) >= ((p_1111->g_647.y , (((void*)0 != l_682) <= ((((&p_1111->g_37[5] == (void*)0) <= ((safe_mod_func_uint64_t_u_u((*l_45), GROUP_DIVERGE(0, 1))) < 0x2DL)) < 8UL) <= p_1111->g_comm_values[p_1111->tid]))) , l_685[0])) == l_603) , p_1111->g_377.y), ((VECTOR(int64_t, 8))(0x5B20A242F059D83EL)), 0x3DB3DADB9EDA622CL, 0x5A3FFDBB8EA2ADDBL, 1L, ((VECTOR(int64_t, 2))(0x7A9F59079434B339L)), 7L, 9L)).s0 ^ l_685[0]) || p_1111->g_367.s1), GROUP_DIVERGE(0, 1)))), p_1111);
                }
                (*l_44) = ((p_1111->g_598.x , &l_668[0][1][0]) != &l_666);
            }
        }
    }
    else
    { /* block id: 235 */
        int32_t l_688 = 0x386B1E34L;
        VECTOR(int8_t, 4) l_710 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L);
        VECTOR(int64_t, 8) l_717 = (VECTOR(int64_t, 8))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x41681C8B72E01065L), 0x41681C8B72E01065L), 0x41681C8B72E01065L, 3L, 0x41681C8B72E01065L);
        VECTOR(int32_t, 2) l_718 = (VECTOR(int32_t, 2))(9L, 0x53F8F067L);
        uint32_t *l_747 = &p_1111->g_63;
        uint32_t *l_748 = &p_1111->g_63;
        int32_t l_749 = 3L;
        uint32_t l_755 = 5UL;
        VECTOR(int16_t, 16) l_759 = (VECTOR(int16_t, 16))(0x2F63L, (VECTOR(int16_t, 4))(0x2F63L, (VECTOR(int16_t, 2))(0x2F63L, 0x056FL), 0x056FL), 0x056FL, 0x2F63L, 0x056FL, (VECTOR(int16_t, 2))(0x2F63L, 0x056FL), (VECTOR(int16_t, 2))(0x2F63L, 0x056FL), 0x2F63L, 0x056FL, 0x2F63L, 0x056FL);
        int8_t *l_781 = (void*)0;
        int8_t *l_783[3][1][1];
        int8_t ***l_794 = &p_1111->g_474;
        VECTOR(int8_t, 4) l_832 = (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x51L), 0x51L);
        int64_t *l_855 = &p_1111->g_723;
        uint32_t **l_869 = (void*)0;
        uint16_t l_874 = 0xAB94L;
        int16_t *l_901 = (void*)0;
        VECTOR(uint64_t, 8) l_915 = (VECTOR(uint64_t, 8))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 0x62E1115F840EAC3CL), 0x62E1115F840EAC3CL), 0x62E1115F840EAC3CL, 3UL, 0x62E1115F840EAC3CL);
        VECTOR(int16_t, 16) l_922 = (VECTOR(int16_t, 16))(0x6339L, (VECTOR(int16_t, 4))(0x6339L, (VECTOR(int16_t, 2))(0x6339L, 0x28D8L), 0x28D8L), 0x28D8L, 0x6339L, 0x28D8L, (VECTOR(int16_t, 2))(0x6339L, 0x28D8L), (VECTOR(int16_t, 2))(0x6339L, 0x28D8L), 0x6339L, 0x28D8L, 0x6339L, 0x28D8L);
        int32_t l_928 = 2L;
        int32_t l_931 = 0x30C8F18AL;
        int32_t l_933[2][1];
        uint64_t l_934 = 18446744073709551615UL;
        VECTOR(uint8_t, 2) l_944 = (VECTOR(uint8_t, 2))(0xC3L, 247UL);
        int32_t l_967 = 3L;
        VECTOR(uint8_t, 2) l_994 = (VECTOR(uint8_t, 2))(252UL, 4UL);
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_783[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_933[i][j] = 0L;
        }
        if ((safe_rshift_func_uint8_t_u_s((l_688 &= p_1111->g_23.z), 4)))
        { /* block id: 237 */
            VECTOR(int32_t, 4) l_689 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-1L)), (-1L));
            VECTOR(int32_t, 4) l_692 = (VECTOR(int32_t, 4))(0x6146FCC9L, (VECTOR(int32_t, 2))(0x6146FCC9L, (-1L)), (-1L));
            VECTOR(uint8_t, 8) l_708 = (VECTOR(uint8_t, 8))(0x73L, (VECTOR(uint8_t, 4))(0x73L, (VECTOR(uint8_t, 2))(0x73L, 0x77L), 0x77L), 0x77L, 0x73L, 0x77L);
            int64_t *l_722 = &p_1111->g_723;
            int i;
            (*p_36) = ((VECTOR(int32_t, 16))((-1L), 0x326F860DL, (-1L), 6L, (-4L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_689.zwzyyzzzwxwxyyzy)))).saa0c)), (((*p_36) & ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_1111->g_690.yxyxyyyxxxxxyxxx)))).s7 , (l_689.y & l_688)) || (*l_45))) , 0x6D478DC1L), 0x0E23BD2EL, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(6L, 0x232C5F1DL)).xyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x1AC1C8F0L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(p_1111->g_691.zy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(l_692.xx)), ((VECTOR(int32_t, 2))(p_1111->g_693.s23))))), (safe_add_func_int8_t_s_s(1L, (l_689.z <= (0xABEE90FFL ^ 0x886629F7L)))), (*p_36), 0x4C60ACBFL, l_696, ((VECTOR(int32_t, 4))(6L)), 1L, (*p_36), (-10L), ((VECTOR(int32_t, 2))(0L)), 0x07A64DCFL)).s24ae)).even))))), 0L)).yzyyzwyx)).odd, ((VECTOR(int32_t, 4))(0x5DFC25ACL))))).yywxxyzyyyzyyyxw, ((VECTOR(int32_t, 16))((-1L)))))).sb, 0L, (**l_52), 0x74172DF6L, 0x4CD7A9C0L)).s7;
            (*p_36) = (((safe_mod_func_uint32_t_u_u((!0xEA3B52E6L), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((!(safe_lshift_func_int8_t_s_s(((*p_1111->g_475) = ((VECTOR(int8_t, 8))(l_701.wzxwxxxz)).s3), ((p_1111->g_709.s2 = ((safe_add_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0xF7L, 0x0EL, 255UL, 0x94L)))).hi, ((VECTOR(uint8_t, 2))(l_708.s32))))).yyyxxxxx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 2))(p_1111->g_709.s09)).xyyxyyxxxxxxxyyy, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(l_710.ywzwzzzwzyxxzxxy))))).sed2f, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((~1L), ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(l_717.s0413)).z, ((**l_52) | (((((*l_722) = (((VECTOR(int32_t, 4))(l_718.xxyy)).z , (!(safe_lshift_func_uint16_t_u_s(l_721, 11))))) , 65531UL) ^ (safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((l_689.x != (l_718.y , p_1111->g_693.s5)), (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((p_1111->g_391[1][2][0] < l_717.s3) >= 0x7A94L) || 0UL), l_717.s4)), (-1L))))) >= p_1111->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1111->tid, 2))]) == l_717.s4), (*l_45))), p_1111->g_645.w))) ^ p_1111->g_511)))) & l_692.w))), l_710.z)) , p_1111->g_29.w) >= (*l_45)) , (*l_44)), (**l_52), 0L, (-8L))).yxwzzywy)).odd))).wxzyyxywzxzzyyyy))))).odd))).s2161304414137461)).s9, l_689.z)), 9)) > (**l_52)), (-9L))) > l_692.y)) || 0L)))) < 1L), ((VECTOR(uint32_t, 2))(0x4836C03BL)), 0UL)).xywwyzwz)).s70)).even)) || l_710.y) <= l_708.s2);
            return p_1111->g_693.s3;
        }
        else
        { /* block id: 244 */
            uint32_t **l_734[9][2];
            int32_t l_738 = 0x1DB5939CL;
            uint8_t *l_739 = (void*)0;
            uint8_t **l_741 = &l_569[2];
            int64_t *l_743 = (void*)0;
            int64_t **l_742 = &l_743;
            uint16_t *l_744 = &p_1111->g_389[0];
            VECTOR(uint64_t, 2) l_754 = (VECTOR(uint64_t, 2))(0xCDF0253422956EFFL, 1UL);
            VECTOR(uint32_t, 8) l_763 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL);
            int64_t *l_764 = (void*)0;
            int64_t *l_765 = (void*)0;
            int64_t *l_766[2];
            int32_t l_767 = 0x2B54DB40L;
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 2; j++)
                    l_734[i][j] = (void*)0;
            }
            for (i = 0; i < 2; i++)
                l_766[i] = &p_1111->g_181[4][2][5];
            (*l_45) = (((VECTOR(int16_t, 2))(1L, 0x6A5AL)).hi || ((p_1111->g_735 = &p_1111->g_63) == (l_748 = l_747)));
            l_749 |= ((**l_52) &= 0x6C665764L);
            (*p_36) = l_738;
            (**l_52) = ((safe_sub_func_int32_t_s_s(((l_738 != l_718.x) & FAKE_DIVERGE(p_1111->local_2_offset, get_local_id(2), 10)), (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1111->g_752.yyyx)), (safe_unary_minus_func_uint16_t_u((((*p_1111->g_475) = (*p_1111->g_475)) && 0x2FL))), 1UL, 65535UL, 65526UL)).s1 , (*p_1111->g_475)), ((((VECTOR(uint64_t, 16))(l_754.yyxxyyxyxyxxyyxy)).s5 != (l_755 < ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1111->g_756.yyyxyxyxxxyyxyxx)))).sa)) == ((safe_div_func_int64_t_s_s((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_759.s0fda)).odd)).odd < ((*l_45) | (l_767 ^= (safe_mod_func_uint32_t_u_u(((((VECTOR(int16_t, 16))(l_762.s32b652739279cad2)).s0 | FAKE_DIVERGE(p_1111->local_1_offset, get_local_id(1), 10)) & FAKE_DIVERGE(p_1111->group_0_offset, get_group_id(0), 10)), ((VECTOR(uint32_t, 16))(l_763.s6304051173346430)).se))))), (0x3207EC12A4CF43C5L ^ FAKE_DIVERGE(p_1111->global_2_offset, get_global_id(2), 10)))) ^ (safe_mod_func_uint8_t_u_u((((safe_add_func_int64_t_s_s(l_759.s0, p_1111->g_540[0])) ^ p_1111->g_582.x) ^ (*p_36)), 0xFFL)))), (**l_52), (*p_1111->g_475), l_738, 0x07L, ((VECTOR(int8_t, 8))(0x13L)), 5L, 0x26L)).sc570, ((VECTOR(int8_t, 4))(0x2BL)), ((VECTOR(int8_t, 4))(1L))))).xyzxyzwyywzzyxxz)).sc && (-8L)))) <= (*l_44));
        }
        l_749 = (safe_lshift_func_uint8_t_u_u((FAKE_DIVERGE(p_1111->local_0_offset, get_local_id(0), 10) , (*p_1111->g_740)), 7));
        if (((0x536ED139L || ((VECTOR(int32_t, 8))(p_1111->g_774.yxyyyxyx)).s4) || ((void*)0 == (*p_1111->g_467))))
        { /* block id: 260 */
            int8_t **l_782 = &l_781;
            int8_t **l_784 = &l_41[1];
            int8_t ***l_787 = &l_782;
            uint16_t *l_792 = &p_1111->g_159;
            int32_t l_793 = 0x1A96259BL;
            int16_t l_795 = (-1L);
            VECTOR(int8_t, 2) l_806 = (VECTOR(int8_t, 2))(0x01L, (-1L));
            VECTOR(uint64_t, 8) l_830 = (VECTOR(uint64_t, 8))(0xCD8D8AFEB0073531L, (VECTOR(uint64_t, 4))(0xCD8D8AFEB0073531L, (VECTOR(uint64_t, 2))(0xCD8D8AFEB0073531L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xCD8D8AFEB0073531L, 18446744073709551615UL);
            int64_t *l_852 = &p_1111->g_723;
            int32_t l_857 = (-1L);
            int32_t l_862 = 0x7B6A47D0L;
            VECTOR(uint32_t, 8) l_871 = (VECTOR(uint32_t, 8))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0x4DB9388FL), 0x4DB9388FL), 0x4DB9388FL, 2UL, 0x4DB9388FL);
            VECTOR(uint32_t, 16) l_876 = (VECTOR(uint32_t, 16))(0x0637E09EL, (VECTOR(uint32_t, 4))(0x0637E09EL, (VECTOR(uint32_t, 2))(0x0637E09EL, 0x659A3502L), 0x659A3502L), 0x659A3502L, 0x0637E09EL, 0x659A3502L, (VECTOR(uint32_t, 2))(0x0637E09EL, 0x659A3502L), (VECTOR(uint32_t, 2))(0x0637E09EL, 0x659A3502L), 0x0637E09EL, 0x659A3502L, 0x0637E09EL, 0x659A3502L);
            int32_t l_903 = (-1L);
            VECTOR(int16_t, 2) l_923 = (VECTOR(int16_t, 2))(0x7B3BL, 0x44B4L);
            int32_t l_930 = 4L;
            int32_t l_932 = (-1L);
            int i;
            if ((safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((~(~(((safe_mul_func_int16_t_s_s(p_1111->g_774.x, (((*l_782) = l_781) == ((*l_784) = (l_783[0][0][0] = &p_1111->g_61))))) <= ((safe_rshift_func_uint16_t_u_s((l_787 == ((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((void*)0 == l_792), (l_749 = l_793))), FAKE_DIVERGE(p_1111->group_2_offset, get_group_id(2), 10))) , l_794)), ((((*p_1111->g_740) = (((*l_675) = 0x6DF53757L) > l_717.s0)) || (*p_1111->g_475)) == 7L))) == p_1111->g_562.y)) && l_795))), 0x6F900904E771126FL)), l_793)))
            { /* block id: 267 */
                uint16_t *l_802 = &p_1111->g_564;
                int32_t l_811 = 0x0C03E554L;
                VECTOR(uint64_t, 8) l_828 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
                int16_t *l_839 = (void*)0;
                int16_t *l_840 = (void*)0;
                int16_t *l_841 = (void*)0;
                int16_t *l_842[7];
                uint32_t *l_850 = &p_1111->g_851;
                int64_t **l_853 = (void*)0;
                int64_t **l_854[3];
                int i, j;
                for (i = 0; i < 7; i++)
                    l_842[i] = &p_1111->g_227[0];
                for (i = 0; i < 3; i++)
                    l_854[i] = (void*)0;
                for (p_1111->g_61 = (-29); (p_1111->g_61 != 25); p_1111->g_61 = safe_add_func_int64_t_s_s(p_1111->g_61, 3))
                { /* block id: 270 */
                    uint16_t **l_803 = &l_792;
                    uint64_t **l_807 = (void*)0;
                    int32_t *l_808 = &p_1111->g_809;
                    int32_t l_812 = 8L;
                    int64_t *l_814 = &p_1111->g_181[5][0][1];
                    int64_t **l_813 = &l_814;
                    if ((((l_811 = ((safe_rshift_func_int8_t_s_u((((*l_808) |= ((safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_1111->global_0_offset, get_global_id(0), 10), ((((*l_803) = l_802) != &p_1111->g_389[1]) , (l_717.s2 || p_1111->g_181[4][2][5])))) , (((+(p_1111->g_638.sf != (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(l_806.xxxyyxyyxyyyxyyy)).odd, (int8_t)0L, (int8_t)(((*p_1111->g_735) , 0x1307DFC3F76346B1L) > ((void*)0 == l_807))))).s3554725402436242)).s22, ((VECTOR(int8_t, 2))(0x21L))))).odd, l_710.x)))) , 7L) == 0x07L))) , l_810), 0)) , (*p_1111->g_475))) ^ 0x36L) && l_812))
                    { /* block id: 274 */
                        (*l_45) ^= (*p_36);
                        (*l_52) = p_36;
                    }
                    else
                    { /* block id: 277 */
                        return l_812;
                    }
                    (*l_44) |= (*p_36);
                    (*p_36) = (&p_1111->g_181[4][2][5] != ((*l_813) = &p_1111->g_391[1][1][0]));
                }
                (*p_36) = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(0xB3L, 0)), (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 8))(p_1111->g_827.s56017614)), ((VECTOR(uint64_t, 4))(l_828.s0625)).wyywxwww, ((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 2))(0x01894A3524FF6D52L, 0x1D7BA461373CAC2DL)).xyxxxyyy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 2))(p_1111->g_829.s33)).yxxxyyxxyxxxxyyx))).s40, ((VECTOR(uint64_t, 8))(l_830.s37245321)).s04))), 0xC9D80994074C1D97L, 0xD94A5D201EA252D1L)).xxwxyxxx)))))))).s7 , &p_1111->g_181[6][1][3]) != l_831) >= p_1111->g_86[0]), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_832.zxzwzzzxzzyxzwxz)).s7a)).odd)), (safe_rshift_func_int8_t_s_s(l_811, 1)))) || ((safe_rshift_func_int16_t_s_u(p_1111->g_563.s2, 13)) < ((VECTOR(uint32_t, 4))(l_832.x, 0UL, 0x695A588CL, 4294967293UL)).z)), (l_749 ^= (l_793 >= (l_806.y != l_795))))), 7))));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1111->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u(((l_759.s9 <= (safe_mul_func_int16_t_s_s(0x6213L, (p_1111->g_181[4][1][0] < ((safe_sub_func_uint32_t_u_u(((((&p_1111->g_391[0][1][3] != &p_1111->g_511) || ((*l_44) = 1L)) <= ((((*l_850) = 4294967295UL) , (l_855 = l_852)) == (p_1111->g_856 = l_831))) == l_857), (*p_36))) || p_1111->g_377.x))))) != l_832.z))) | 0x7C900A10L), 10))][(safe_mod_func_uint32_t_u_u(p_1111->tid, 2))]));
            }
            else
            { /* block id: 293 */
                uint64_t l_863 = 0x73249F1CF9F1C6DAL;
                uint64_t *l_873 = &l_863;
                uint64_t **l_872 = &l_873;
                uint32_t **l_875[7][6][6] = {{{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675}},{{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675}},{{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675}},{{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675}},{{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675}},{{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675}},{{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675,&l_675,&l_675}}};
                int8_t **l_890 = (void*)0;
                uint8_t *l_913 = &p_1111->g_570;
                int i, j, k;
                for (l_688 = (-30); (l_688 > (-15)); l_688 = safe_add_func_int32_t_s_s(l_688, 1))
                { /* block id: 296 */
                    int8_t l_860 = 0x12L;
                    int32_t l_861 = (-6L);
                    uint64_t *l_868 = &p_1111->g_540[4];
                    int64_t **l_877 = (void*)0;
                    uint64_t ***l_891 = (void*)0;
                    uint64_t ***l_892 = &l_872;
                    int16_t l_902 = 0x149EL;
                    l_863++;
                    p_36 = ((*l_52) = &l_857);
                    (*l_45) ^= (l_876.s1 &= (((safe_add_func_uint16_t_u_u(((p_1111->g_219.s4 > ((*l_868) = p_1111->g_227[0])) || GROUP_DIVERGE(0, 1)), (((((l_861 || (p_1111->g_570 >= ((void*)0 == l_869))) && ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x372991BCL, (((((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(p_1111->g_870.wzwzyzyz)).s22, ((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_871.s3471)), ((0x84DF519BL | (((l_872 != (((l_806.y , 0x77B6L) && p_1111->g_169[4][3]) , (void*)0)) == 1L) , (*p_36))) != l_874), 0x63161C6FL, 0x7E3FB5FAL, 0UL)).odd))).lo))).odd , l_875[1][4][2]) != (void*)0) <= FAKE_DIVERGE(p_1111->group_1_offset, get_group_id(1), 10)), ((VECTOR(int32_t, 2))(0x1FA54599L)), (-1L), 0x2E565537L, (-8L), (-1L))).hi)).yywxwzzz, ((VECTOR(int32_t, 8))(0x6A2A781BL))))).s0) || 0x4230B9469339CE47L) , (*p_36)) | GROUP_DIVERGE(1, 1)))) <= l_863) && 0x34L));
                    l_903 |= (l_793 ^= (l_877 != ((safe_sub_func_uint8_t_u_u((~(safe_div_func_uint16_t_u_u(((*l_792) = p_1111->g_562.y), (safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_1111->global_1_offset, get_global_id(1), 10), (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((((((*l_787) = l_890) != (void*)0) < l_863) & (((*l_892) = (void*)0) == ((*p_1111->g_475) , (((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((((VECTOR(int64_t, 4))(1L, ((((safe_div_func_uint16_t_u_u(((**l_52) & (l_862 <= 0x727700D5L)), l_861)) <= (-1L)) != p_1111->g_181[4][2][5]) ^ l_717.s2), 0L, 0x2D8B5BEEDBF6FFE3L)).y , l_901) != &p_1111->g_508) < FAKE_DIVERGE(p_1111->group_2_offset, get_group_id(2), 10)), l_861)), 0x09L)), 14)) < l_902) , (void*)0)))), (*p_1111->g_475))) , 9UL), 3)) ^ l_806.x), l_717.s2))))))), 0x56L)) , (void*)0)));
                }
                if ((atomic_inc(&p_1111->g_atomic_input[38 * get_linear_group_id() + 1]) == 8))
                { /* block id: 310 */
                    int8_t l_904 = 8L;
                    uint32_t l_905 = 0xAD9030E4L;
                    l_905 = l_904;
                    for (l_904 = 28; (l_904 != 19); l_904 = safe_sub_func_uint64_t_u_u(l_904, 4))
                    { /* block id: 314 */
                        uint32_t l_908 = 0xE78DE9C1L;
                        VECTOR(int16_t, 8) l_909 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x7212L), 0x7212L), 0x7212L, (-1L), 0x7212L);
                        uint32_t l_910 = 0x7700DC23L;
                        int i;
                        l_910 |= (l_909.s3 |= (l_908 = (-5L)));
                    }
                    unsigned int result = 0;
                    result += l_904;
                    result += l_905;
                    atomic_add(&p_1111->g_special_values[38 * get_linear_group_id() + 1], result);
                }
                else
                { /* block id: 319 */
                    (1 + 1);
                }
                (*l_45) &= (safe_add_func_int64_t_s_s((&l_863 != (void*)0), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(1UL, ((void*)0 == l_913), ((VECTOR(uint64_t, 8))(p_1111->g_914.s1f2b1342)), ((VECTOR(uint64_t, 2))(l_915.s10)), ((VECTOR(uint64_t, 4))(0UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 4))((-5L), 8L, (-5L), 1L)).yyywxxxw))).odd)), (uint64_t)(((safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_1111->global_0_offset, get_global_id(0), 10), (safe_rshift_func_int8_t_s_u(l_862, 2)))) < ((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_922.s12339c08)))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_923.yyyyxyxx)).s5540421421163464)).odd))).s2, 14)) | (safe_rshift_func_int16_t_s_s(((p_1111->g_645.x <= FAKE_DIVERGE(p_1111->global_0_offset, get_global_id(0), 10)) >= ((VECTOR(int32_t, 8))(p_1111->g_926.s04763314)).s0), 7)))) , ((*p_1111->g_740) > (l_749 = (((VECTOR(uint32_t, 2))(2UL, 0xD4AA6E89L)).lo == (safe_unary_minus_func_uint8_t_u(l_863)))))), (uint64_t)0xDF44783B11C4500CL))).lo)), 8UL)))).even)).hi)).yxxwzxxz)), ((VECTOR(uint64_t, 8))(0x6FF8734C1A55F50EL)))).s3));
            }
            l_934--;
        }
        else
        { /* block id: 326 */
            VECTOR(uint8_t, 2) l_945 = (VECTOR(uint8_t, 2))(248UL, 0xF0L);
            uint64_t *l_984 = (void*)0;
            uint64_t **l_983 = &l_984;
            VECTOR(int8_t, 8) l_988 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x23L), 0x23L), 0x23L, (-1L), 0x23L);
            int64_t **l_995 = &p_1111->g_856;
            int i;
            for (l_931 = 2; (l_931 > 25); l_931++)
            { /* block id: 329 */
                int32_t l_941 = 0x04354C38L;
                uint64_t **l_969 = &p_1111->g_968;
                uint64_t *l_971 = (void*)0;
                uint64_t **l_970 = &l_971;
                int32_t l_972 = (-9L);
                (*p_36) = (safe_lshift_func_uint8_t_u_u((p_1111->g_169[8][3] ^ l_941), ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(l_942.s3747)).yyywxywwzyywyywy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(0x60L, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(p_1111->g_943.sae8a27e4)).s41, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(l_944.xyxyyyxxyxxxxxxy)).sca, ((VECTOR(uint8_t, 2))(0x75L, 0x81L)))))))), ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(l_945.yyyx)).hi, (uint8_t)((safe_lshift_func_uint8_t_u_u((!GROUP_DIVERGE(1, 1)), 3)) || (((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 4))(p_1111->g_950.yyxz)).w, ((*l_44) = ((safe_sub_func_uint32_t_u_u((((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0xAE54L, 1UL, 65535UL, 0xE079L)), GROUP_DIVERGE(0, 1), 0x5C1AL, 1UL, 0xF41FL)).s0 >= ((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 2))(251UL, 0xC4L)), ((VECTOR(uint8_t, 2))(0UL, 0x06L))))), 1UL, 0xBCL)).w, (safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((l_945.y <= (safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(p_1111->g_149.w, 13)), ((l_928 &= (*p_1111->g_475)) < (l_922.s0 , ((l_967 &= (*p_36)) == (l_972 |= (((((*p_1111->g_467) = (*p_1111->g_467)) == ((*l_970) = ((*l_969) = p_1111->g_968))) | GROUP_DIVERGE(2, 1)) != l_922.s4))))))) >= 1L), l_945.x)), l_933[0][0]))) > l_945.y), 0xDC10DE673A189C47L)), 65534UL)))) <= l_874)) , 0x4BFBL) ^ GROUP_DIVERGE(1, 1)), (*p_36))) == 9L)))) <= (*p_1111->g_475)) >= 0L))))), 8UL, ((VECTOR(uint8_t, 2))(0xD9L)), 0x0CL)).s2416763574621346)).se, 252UL, 0x93L)).yzxywxwzzxwwxwxx))))).s98)), ((VECTOR(uint8_t, 2))(0x6EL)), ((VECTOR(uint8_t, 2))(0UL))))).lo));
            }
            (**l_52) = ((safe_lshift_func_int16_t_s_u((p_1111->g_140 >= ((safe_rshift_func_int8_t_s_u((((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((*p_1111->g_740), (safe_div_func_uint8_t_u_u(l_934, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))((l_983 != ((*p_1111->g_475) , p_1111->g_985[0])), ((VECTOR(uint8_t, 2))(l_987.xy)), ((VECTOR(uint8_t, 2))(9UL, 0x67L)), 0x7CL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 16))(l_988.s2037605566255067)).lo))).s0650774020245617, ((VECTOR(uint8_t, 16))(p_1111->g_989.s3062441327233365))))).sc3b2)), ((VECTOR(uint8_t, 4))(p_1111->g_990.yxxz)), 0xE0L, 0x33L)))).sa326)).z)))), (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_1111->g_993.s0131051243323505)).s9a83)).hi, (uint8_t)(!FAKE_DIVERGE(p_1111->global_2_offset, get_global_id(2), 10))))), 255UL, 0UL)).xwyxyzzx)).hi, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_994.xyxy)).wxxzyxyz)).odd, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(1UL, (*p_1111->g_740), 7UL, ((l_995 == ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((!((void*)0 != &p_1111->g_169[8][0])), (*p_36))) && 0UL), 6)), l_688)), 2)) , &p_1111->g_856)) < (*p_1111->g_740)), ((VECTOR(uint8_t, 4))(0x73L)), 1UL, 249UL, (*p_1111->g_740), 1UL, 255UL, ((VECTOR(uint8_t, 2))(5UL)), 6UL)).s2af7))))).w, (*p_1111->g_740))))) & l_988.s4) ^ 252UL), 2)) , p_1111->g_647.y)), (*l_45))) | p_1111->g_86[0]);
        }
    }
    return (*p_1111->g_740);
}


/* ------------------------------------------ */
/* 
 * reads : p_1111->g_63 p_1111->l_comm_values p_1111->g_29 p_1111->g_61 p_1111->g_23 p_1111->g_140 p_1111->g_38 p_1111->g_149 p_1111->g_86 p_1111->g_159 p_1111->g_184 p_1111->g_219 p_1111->g_227 p_1111->g_181 p_1111->g_229 p_1111->g_169 p_1111->g_344 p_1111->g_comm_values p_1111->g_355 p_1111->g_356 p_1111->g_358 p_1111->g_359 p_1111->g_360 p_1111->g_364 p_1111->g_367 p_1111->g_368 p_1111->g_374 p_1111->g_375 p_1111->g_377 p_1111->g_391 p_1111->g_412 p_1111->g_467 p_1111->g_508 p_1111->g_389 p_1111->g_475 p_1111->g_540 p_1111->g_547 p_1111->g_549 p_1111->g_550 p_1111->g_558 p_1111->g_559 p_1111->g_562 p_1111->g_563 p_1111->g_564 p_1111->g_511
 * writes: p_1111->g_63 p_1111->g_37 p_1111->g_86 p_1111->g_61 p_1111->g_169 p_1111->g_181 p_1111->g_140 p_1111->l_comm_values p_1111->g_227 p_1111->g_29 p_1111->g_184 p_1111->g_38 p_1111->g_344 p_1111->g_159 p_1111->g_391 p_1111->g_389 p_1111->g_467 p_1111->g_474 p_1111->g_511 p_1111->g_468 p_1111->g_540
 */
uint8_t  func_53(int64_t  p_54, uint64_t  p_55, int32_t * p_56, struct S0 * p_1111)
{ /* block id: 11 */
    int8_t *l_60[9];
    uint32_t *l_62 = &p_1111->g_63;
    int32_t l_64 = (-4L);
    int32_t *l_515 = &p_1111->g_38;
    int16_t l_525 = 0x2BD6L;
    uint64_t *l_532[6] = {&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0]};
    int32_t *l_537 = (void*)0;
    int32_t *l_538 = (void*)0;
    int32_t *l_539[2];
    VECTOR(int16_t, 4) l_545 = (VECTOR(int16_t, 4))(0x54A0L, (VECTOR(int16_t, 2))(0x54A0L, 0x2120L), 0x2120L);
    VECTOR(int16_t, 4) l_546 = (VECTOR(int16_t, 4))(0x21C5L, (VECTOR(int16_t, 2))(0x21C5L, 1L), 1L);
    VECTOR(int64_t, 16) l_548 = (VECTOR(int64_t, 16))(0x265DD5734A07681CL, (VECTOR(int64_t, 4))(0x265DD5734A07681CL, (VECTOR(int64_t, 2))(0x265DD5734A07681CL, 3L), 3L), 3L, 0x265DD5734A07681CL, 3L, (VECTOR(int64_t, 2))(0x265DD5734A07681CL, 3L), (VECTOR(int64_t, 2))(0x265DD5734A07681CL, 3L), 0x265DD5734A07681CL, 3L, 0x265DD5734A07681CL, 3L);
    uint64_t **l_553 = (void*)0;
    uint64_t **l_554 = (void*)0;
    uint64_t *l_556 = &p_1111->g_540[4];
    uint64_t **l_555 = &l_556;
    uint64_t *l_557 = &p_1111->g_344[5];
    VECTOR(uint8_t, 8) l_560 = (VECTOR(uint8_t, 8))(0xABL, (VECTOR(uint8_t, 4))(0xABL, (VECTOR(uint8_t, 2))(0xABL, 1UL), 1UL), 1UL, 0xABL, 1UL);
    VECTOR(uint8_t, 16) l_561 = (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x7BL), 0x7BL), 0x7BL, 2UL, 0x7BL, (VECTOR(uint8_t, 2))(2UL, 0x7BL), (VECTOR(uint8_t, 2))(2UL, 0x7BL), 2UL, 0x7BL, 2UL, 0x7BL);
    uint8_t *l_565 = (void*)0;
    uint8_t *l_566 = (void*)0;
    uint8_t *l_567 = (void*)0;
    uint8_t *l_568[4][3][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_60[i] = &p_1111->g_61;
    for (i = 0; i < 2; i++)
        l_539[i] = (void*)0;
    l_515 = func_57(l_60[7], (((*l_62) ^= p_54) , l_64), p_1111);
    for (p_1111->g_159 = 0; (p_1111->g_159 >= 34); p_1111->g_159++)
    { /* block id: 166 */
        int32_t **l_518 = (void*)0;
        int32_t **l_520 = &p_1111->g_37[3];
        (*l_520) = p_56;
        if ((atomic_inc(&p_1111->g_atomic_input[38 * get_linear_group_id() + 31]) == 3))
        { /* block id: 169 */
            uint8_t l_521 = 0x13L;
            uint8_t l_522 = 0xB7L;
            l_522 &= l_521;
            unsigned int result = 0;
            result += l_521;
            result += l_522;
            atomic_add(&p_1111->g_special_values[38 * get_linear_group_id() + 31], result);
        }
        else
        { /* block id: 171 */
            (1 + 1);
        }
        l_525 = ((*p_56) = (-1L));
    }
    p_1111->g_540[4] &= (safe_mul_func_int16_t_s_s((l_525 , (p_1111->g_389[1] , p_1111->g_375.x)), (p_1111->g_364.s5 , (((safe_mul_func_int16_t_s_s(((~0UL) < (safe_add_func_uint32_t_u_u(1UL, ((((*p_1111->g_467) = l_532[2]) == l_532[2]) <= ((safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((l_64 &= ((*p_1111->g_475) <= p_55)) > 0x77L), p_1111->g_389[0])), 10)) >= p_1111->g_391[0][1][3]))))), p_54)) != p_55) || (*p_56)))));
    (*p_56) = (((safe_mod_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((*p_1111->g_475) | GROUP_DIVERGE(1, 1)), (((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_545.wwzwyzzzzyyzyzwz)).s3d)).xyyy, ((VECTOR(int16_t, 4))(l_546.yyyz)), ((VECTOR(int16_t, 16))(p_1111->g_547.yyyyyyxyyxxyxxxx)).s18c3))).x ^ ((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(l_548.scc28)), ((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 16))(p_1111->g_549.seec85431ce8f69aa)).even, ((VECTOR(int64_t, 8))(1L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, (-5L))), 0x000531C2450877BBL, 0x45FE88FA23D55EA3L)), 0x008F3867E53E4B76L, 0x14ABD72C15DBA196L, 0x60CC218993D28DFFL))))).even))))).ywwxzzzx)))))).s2 <= ((VECTOR(uint64_t, 2))(p_1111->g_550.xw)).odd) | (safe_sub_func_int64_t_s_s(0x07561DEDBEDCD334L, ((VECTOR(uint64_t, 4))(0xB6CFC03B36DDB34CL, ((*l_557) = (~(&p_1111->g_140 != ((*l_555) = l_532[2])))), 0x83E9D9024AF81FE6L, 0x81C5E404CC479C6EL)).y)))))) , (p_1111->g_29.w |= (((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_1111->g_558.s2477642721443374)).s8d)))), ((VECTOR(int8_t, 16))(p_1111->g_559.s5322005165457252)).sdc))), (-1L))), ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 2))(l_560.s23)).xxyyyxxy, ((VECTOR(uint8_t, 16))(l_561.s22eb426ce64d0fdf)).lo))).s52)).yxxxxxxx, ((VECTOR(uint8_t, 8))(p_1111->g_562.yyyyxxyx))))).odd, (uint8_t)p_54)))))).y ^ ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(p_1111->g_563.s20)).xyxy))), p_1111->g_564, 0x5753L, 0x73DEL, (-1L))).even)).zzzywxww, ((VECTOR(int16_t, 8))(2L))))).s3))), (*p_1111->g_475))) != p_1111->g_511) != p_1111->g_23.y);
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_1111->l_comm_values p_1111->g_29 p_1111->g_61 p_1111->g_23 p_1111->g_140 p_1111->g_38 p_1111->g_149 p_1111->g_86 p_1111->g_159 p_1111->g_184 p_1111->g_219 p_1111->g_227 p_1111->g_181 p_1111->g_229 p_1111->g_169 p_1111->g_344 p_1111->g_comm_values p_1111->g_355 p_1111->g_356 p_1111->g_358 p_1111->g_359 p_1111->g_360 p_1111->g_364 p_1111->g_367 p_1111->g_368 p_1111->g_374 p_1111->g_375 p_1111->g_377 p_1111->g_63 p_1111->g_391 p_1111->g_412 p_1111->g_467 p_1111->g_508
 * writes: p_1111->g_37 p_1111->g_86 p_1111->g_61 p_1111->g_169 p_1111->g_181 p_1111->g_140 p_1111->l_comm_values p_1111->g_227 p_1111->g_29 p_1111->g_184 p_1111->g_38 p_1111->g_344 p_1111->g_63 p_1111->g_159 p_1111->g_391 p_1111->g_389 p_1111->g_467 p_1111->g_474 p_1111->g_511
 */
int32_t * func_57(int8_t * p_58, int32_t  p_59, struct S0 * p_1111)
{ /* block id: 13 */
    int32_t *l_76 = &p_1111->g_38;
    VECTOR(uint16_t, 16) l_77 = (VECTOR(uint16_t, 16))(0x0554L, (VECTOR(uint16_t, 4))(0x0554L, (VECTOR(uint16_t, 2))(0x0554L, 65533UL), 65533UL), 65533UL, 0x0554L, 65533UL, (VECTOR(uint16_t, 2))(0x0554L, 65533UL), (VECTOR(uint16_t, 2))(0x0554L, 65533UL), 0x0554L, 65533UL, 0x0554L, 65533UL);
    VECTOR(uint16_t, 4) l_78 = (VECTOR(uint16_t, 4))(0x38C5L, (VECTOR(uint16_t, 2))(0x38C5L, 0x3A3FL), 0x3A3FL);
    uint64_t *l_85[8][4][6] = {{{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]}},{{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]}},{{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]}},{{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]}},{{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]}},{{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]}},{{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]}},{{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]},{&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],&p_1111->g_86[0],(void*)0,&p_1111->g_86[0]}}};
    VECTOR(uint32_t, 4) l_509 = (VECTOR(uint32_t, 4))(0x2555F780L, (VECTOR(uint32_t, 2))(0x2555F780L, 0x32EA03B9L), 0x32EA03B9L);
    int64_t *l_510 = &p_1111->g_511;
    uint16_t *l_512 = &p_1111->g_389[0];
    int32_t **l_513 = &l_76;
    int32_t *l_514[2][7][9] = {{{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0},{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0},{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0},{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0},{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0},{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0},{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0}},{{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0},{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0},{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0},{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0},{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0},{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0},{&p_1111->g_38,(void*)0,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0,&p_1111->g_38,&p_1111->g_38,(void*)0}}};
    int i, j, k;
    for (p_59 = (-8); (p_59 != 25); p_59++)
    { /* block id: 16 */
        int64_t l_70 = (-1L);
        int32_t **l_71 = (void*)0;
        int32_t **l_72 = &p_1111->g_37[5];
        int32_t *l_73[5] = {&p_1111->g_38,&p_1111->g_38,&p_1111->g_38,&p_1111->g_38,&p_1111->g_38};
        int i;
        l_73[2] = (func_67(l_70, p_1111->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1111->tid, 2))], p_1111) , ((*l_72) = (void*)0));
    }
    (*l_76) = (safe_mul_func_int8_t_s_s((l_76 == (((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(65526UL, 5UL, 0x2B33L, 0xFE08L)).yyxywyxwwwxwxzxz, ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(l_77.sac)).yyyy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_59, 0xE051L, ((VECTOR(uint16_t, 2))(l_78.ww)), ((VECTOR(uint16_t, 4))(65531UL, 65528UL, 0x6590L, 0x50DFL)))).even)), 6UL, ((VECTOR(uint16_t, 4))(((*l_512) = ((VECTOR(uint16_t, 16))((((safe_div_func_int64_t_s_s(func_81(func_83((p_1111->g_86[0] = p_1111->g_29.z), p_1111), p_1111), (safe_mul_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((p_1111->g_508 < ((*l_510) = ((((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(l_509.xxzzyxxxzzwwzzxx)).saafc, ((VECTOR(uint32_t, 2))(0x1FB42876L, 0x81CB374DL)).yxyy, ((VECTOR(uint32_t, 16))((&l_85[4][3][0] == &l_85[1][2][1]), 0x179EB6C5L, p_1111->g_364.s4, ((VECTOR(uint32_t, 4))(1UL)), ((VECTOR(uint32_t, 4))(0xF4207A53L)), p_1111->g_comm_values[p_1111->tid], 1UL, 9UL, 0x5D5F23CCL, 5UL)).sd006))), GROUP_DIVERGE(0, 1), ((VECTOR(uint32_t, 2))(8UL)), 0UL)).s3 ^ p_59) , 0x61L) != l_77.s4) > p_59))), FAKE_DIVERGE(p_1111->group_0_offset, get_group_id(0), 10))) == l_509.z), p_59)))) >= p_1111->g_364.s3) >= p_1111->g_377.y), ((VECTOR(uint16_t, 8))(0x15E8L)), ((VECTOR(uint16_t, 2))(0x70D9L)), 65535UL, ((VECTOR(uint16_t, 2))(65535UL)), 0xF42AL, 5UL)).s4), 0x0D18L, 65526UL, 0x2F03L)), ((VECTOR(uint16_t, 4))(0x5F4CL)), p_1111->g_140, 65528UL, 0x676CL)).s5aa3))).xzzxxyxxyyyzzywy))).s0 , (void*)0)), p_59));
    (*l_513) = (void*)0;
    return l_514[1][4][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1111->l_comm_values
 * writes:
 */
uint32_t  func_67(uint32_t  p_68, uint64_t  p_69, struct S0 * p_1111)
{ /* block id: 17 */
    return p_1111->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1111->tid, 2))];
}


/* ------------------------------------------ */
/* 
 * reads : p_1111->g_181
 * writes:
 */
int64_t  func_81(uint32_t * p_82, struct S0 * p_1111)
{ /* block id: 155 */
    int32_t *l_476 = (void*)0;
    int32_t l_477 = 9L;
    int32_t *l_478 = &l_477;
    int32_t *l_479 = (void*)0;
    int32_t *l_480 = (void*)0;
    int32_t *l_481 = (void*)0;
    int32_t *l_482 = &l_477;
    int32_t *l_483 = &l_477;
    int32_t *l_484 = &l_477;
    int32_t l_485 = (-1L);
    VECTOR(int32_t, 2) l_486 = (VECTOR(int32_t, 2))(0x7BFCA321L, 0x0C34CBE7L);
    int32_t *l_487 = (void*)0;
    int32_t *l_488 = &p_1111->g_38;
    int32_t *l_489 = (void*)0;
    int32_t *l_490 = &l_477;
    int32_t *l_491 = (void*)0;
    int32_t *l_492 = &l_477;
    int32_t *l_493 = (void*)0;
    int32_t *l_494 = &l_477;
    int32_t *l_495 = &p_1111->g_38;
    int32_t *l_496[4] = {&p_1111->g_38,&p_1111->g_38,&p_1111->g_38,&p_1111->g_38};
    int16_t l_497 = 0x125FL;
    int32_t l_498 = 0x594B0BFDL;
    int8_t l_499[8] = {0x64L,0x64L,0x64L,0x64L,0x64L,0x64L,0x64L,0x64L};
    int32_t l_500[7][7][5] = {{{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L}},{{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L}},{{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L}},{{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L}},{{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L}},{{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L}},{{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L},{(-1L),0x20002FD6L,0x30ECB4B8L,0L,0x20002FD6L}}};
    uint8_t l_501 = 1UL;
    int i, j, k;
    ++l_501;
    return p_1111->g_181[4][0][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_1111->g_61 p_1111->g_23 p_1111->l_comm_values p_1111->g_140 p_1111->g_38 p_1111->g_149 p_1111->g_86 p_1111->g_159 p_1111->g_184 p_1111->g_219 p_1111->g_227 p_1111->g_181 p_1111->g_229 p_1111->g_29 p_1111->g_169 p_1111->g_344 p_1111->g_comm_values p_1111->g_355 p_1111->g_356 p_1111->g_358 p_1111->g_359 p_1111->g_360 p_1111->g_364 p_1111->g_367 p_1111->g_368 p_1111->g_374 p_1111->g_375 p_1111->g_377 p_1111->g_63 p_1111->g_391 p_1111->g_412 p_1111->g_467
 * writes: p_1111->g_61 p_1111->g_169 p_1111->g_181 p_1111->g_140 p_1111->l_comm_values p_1111->g_227 p_1111->g_37 p_1111->g_29 p_1111->g_184 p_1111->g_38 p_1111->g_344 p_1111->g_63 p_1111->g_159 p_1111->g_391 p_1111->g_389 p_1111->g_467 p_1111->g_474
 */
uint32_t * func_83(uint64_t  p_84, struct S0 * p_1111)
{ /* block id: 23 */
    int16_t l_91 = 1L;
    int32_t l_104 = 0x4A199CCFL;
    uint8_t l_105 = 1UL;
    int32_t l_124[7] = {0x07F47BCEL,0x07F47BCEL,0x07F47BCEL,0x07F47BCEL,0x07F47BCEL,0x07F47BCEL,0x07F47BCEL};
    int16_t l_126 = 0x50DAL;
    int16_t l_128 = 0x3E3AL;
    int64_t l_129 = (-1L);
    uint64_t *l_456[6] = {&p_1111->g_344[6],(void*)0,&p_1111->g_344[6],&p_1111->g_344[6],(void*)0,&p_1111->g_344[6]};
    uint32_t *l_463 = &p_1111->g_184;
    uint64_t **l_470 = &p_1111->g_468;
    int8_t *l_472 = &p_1111->g_61;
    int8_t **l_471 = &l_472;
    int8_t ***l_473[6][5][6] = {{{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471}},{{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471}},{{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471}},{{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471}},{{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471}},{{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471},{&l_471,&l_471,&l_471,&l_471,(void*)0,&l_471}}};
    int i, j, k;
    for (p_1111->g_61 = 0; (p_1111->g_61 >= (-5)); p_1111->g_61 = safe_sub_func_uint16_t_u_u(p_1111->g_61, 1))
    { /* block id: 26 */
        int64_t l_103 = (-8L);
        int32_t l_120 = (-1L);
        int32_t l_121 = 0x3779D110L;
        int32_t l_122[1];
        int32_t l_125 = 0x158D605DL;
        uint8_t l_130 = 0xE9L;
        int16_t l_133 = 0x39FBL;
        int32_t l_134 = 0L;
        VECTOR(uint8_t, 4) l_146 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x50L), 0x50L);
        uint64_t ***l_469[1][4];
        int i, j;
        for (i = 0; i < 1; i++)
            l_122[i] = 0x5AF4E678L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_469[i][j] = &p_1111->g_467;
        }
        for (p_84 = 0; (p_84 != 39); ++p_84)
        { /* block id: 29 */
            int32_t *l_92 = &p_1111->g_38;
            int32_t *l_93 = (void*)0;
            int32_t *l_94 = &p_1111->g_38;
            int32_t *l_95 = (void*)0;
            int32_t *l_96 = &p_1111->g_38;
            int32_t *l_97 = &p_1111->g_38;
            int32_t *l_98 = (void*)0;
            int32_t *l_99 = &p_1111->g_38;
            int32_t *l_100 = &p_1111->g_38;
            int32_t *l_101 = &p_1111->g_38;
            int32_t *l_102[9][2] = {{&p_1111->g_38,&p_1111->g_38},{&p_1111->g_38,&p_1111->g_38},{&p_1111->g_38,&p_1111->g_38},{&p_1111->g_38,&p_1111->g_38},{&p_1111->g_38,&p_1111->g_38},{&p_1111->g_38,&p_1111->g_38},{&p_1111->g_38,&p_1111->g_38},{&p_1111->g_38,&p_1111->g_38},{&p_1111->g_38,&p_1111->g_38}};
            int i, j;
            if (p_84)
                break;
            l_91 &= p_84;
            l_105--;
        }
        for (p_84 = (-26); (p_84 <= 27); ++p_84)
        { /* block id: 36 */
            int16_t l_110[1];
            int32_t *l_111 = &l_104;
            int32_t *l_112 = &p_1111->g_38;
            int32_t *l_113 = &l_104;
            int32_t *l_114 = (void*)0;
            int32_t *l_115 = (void*)0;
            int32_t *l_116 = &p_1111->g_38;
            int32_t *l_117 = &l_104;
            int32_t *l_118 = &p_1111->g_38;
            int32_t *l_119[4];
            int16_t l_123 = 7L;
            int8_t l_127 = (-1L);
            VECTOR(uint32_t, 8) l_135 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x845E62C8L), 0x845E62C8L), 0x845E62C8L, 0UL, 0x845E62C8L);
            int i;
            for (i = 0; i < 1; i++)
                l_110[i] = 0x4BD6L;
            for (i = 0; i < 4; i++)
                l_119[i] = &p_1111->g_38;
            ++l_130;
            l_135.s6++;
            if (func_67(p_84, ((p_84 , (safe_sub_func_uint64_t_u_u(p_1111->g_23.x, (0x531C8147L || 7UL)))) , p_84), p_1111))
            { /* block id: 39 */
                VECTOR(int16_t, 16) l_150 = (VECTOR(int16_t, 16))(0x11E1L, (VECTOR(int16_t, 4))(0x11E1L, (VECTOR(int16_t, 2))(0x11E1L, 0x18AEL), 0x18AEL), 0x18AEL, 0x11E1L, 0x18AEL, (VECTOR(int16_t, 2))(0x11E1L, 0x18AEL), (VECTOR(int16_t, 2))(0x11E1L, 0x18AEL), 0x11E1L, 0x18AEL, 0x11E1L, 0x18AEL);
                uint16_t *l_155 = (void*)0;
                int64_t *l_156 = (void*)0;
                int64_t *l_157 = &l_129;
                int32_t *l_446[3][4][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                int32_t **l_447 = &p_1111->g_37[5];
                int8_t *l_464 = &l_127;
                int i, j, k;
                if (p_1111->g_140)
                    break;
                (*l_447) = (l_446[0][0][0] = func_141(l_118, &p_84, (*l_112), (((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(l_146.wxyy)).odd, ((VECTOR(uint8_t, 2))(0xCDL, 249UL))))).hi & (((*l_157) = (safe_div_func_uint16_t_u_u(p_1111->g_61, ((l_122[0] >= ((*l_112) ^ l_126)) , (l_121 = ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_1111->g_149.xwxwwwwz)).s13)).yyxy)).hi)), (-2L), 1L)), ((VECTOR(int16_t, 2))((-4L), 1L)).xyyy))).even, ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(p_84, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 8))(l_150.se0746b5d)).s5563662613237322))).s59)).xxyxxyyx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))((+(safe_mul_func_uint8_t_u_u((((*l_111) = ((safe_lshift_func_int8_t_s_u((*l_113), 3)) , l_150.s8)) == (-1L)), p_84))), ((VECTOR(uint16_t, 2))(0x92ACL)), 65531UL)), 0xB9FAL, l_124[2], ((VECTOR(uint16_t, 2))(0x8679L)), 9UL, 65527UL, 65529UL, ((VECTOR(uint16_t, 2))(0x0AA8L)), 0x99EFL, 0xE4E2L, 1UL)).even))), ((VECTOR(uint16_t, 8))(0x630FL)), ((VECTOR(uint16_t, 8))(65535UL))))))))).s12)), 0xB340L, 0xF71AL)), ((VECTOR(uint16_t, 4))(0x7B32L))))), ((VECTOR(uint16_t, 4))(65532UL)))), ((VECTOR(uint16_t, 2))(1UL)), 65526UL, ((VECTOR(uint16_t, 4))(0UL)))).hi))).s3111677337054102)).odd, ((VECTOR(uint16_t, 8))(0x7D07L))))).s44))).yxxy)).y))))) || 0x4929B6874257E867L)), p_1111));
                l_124[2] = ((safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((((l_157 != ((*l_112) , l_456[5])) < (-1L)) & ((((&p_1111->g_63 == &p_1111->g_63) || (safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((((((((void*)0 == l_463) == ((*l_464) = ((l_124[4] ^ l_121) , 0x13L))) && p_1111->g_364.s4) , p_1111->g_412.s9) , p_84) > l_146.z) >= p_84), FAKE_DIVERGE(p_1111->group_1_offset, get_group_id(1), 10))), p_84)), p_1111->g_359.s5))) || p_84) >= p_84)), 3)) && p_84) > 65534UL), 6)), p_84)), (*l_117))) > (*l_118));
            }
            else
            { /* block id: 141 */
                (*l_111) = p_84;
                for (l_103 = (-29); (l_103 >= 18); l_103++)
                { /* block id: 145 */
                    l_120 = p_84;
                }
            }
        }
        l_470 = (p_1111->g_467 = p_1111->g_467);
    }
    p_1111->g_474 = l_471;
    return l_463;
}


/* ------------------------------------------ */
/* 
 * reads : p_1111->g_86 p_1111->g_159 p_1111->g_140 p_1111->g_184 p_1111->g_219 p_1111->g_23 p_1111->g_38 p_1111->g_227 p_1111->g_149 p_1111->g_181 p_1111->g_229 p_1111->g_29 p_1111->g_169 p_1111->g_344 p_1111->g_comm_values p_1111->g_355 p_1111->g_356 p_1111->g_358 p_1111->g_359 p_1111->g_360 p_1111->g_364 p_1111->g_367 p_1111->g_368 p_1111->g_374 p_1111->g_375 p_1111->g_377 p_1111->g_63 p_1111->g_391 p_1111->g_412
 * writes: p_1111->g_169 p_1111->g_181 p_1111->g_140 p_1111->l_comm_values p_1111->g_227 p_1111->g_37 p_1111->g_29 p_1111->g_184 p_1111->g_38 p_1111->g_344 p_1111->g_63 p_1111->g_159 p_1111->g_391 p_1111->g_389
 */
int32_t * func_141(uint32_t * p_142, uint64_t * p_143, int64_t  p_144, uint16_t  p_145, struct S0 * p_1111)
{ /* block id: 44 */
    uint16_t *l_158 = &p_1111->g_159;
    uint32_t l_164[1][1];
    int8_t *l_167 = (void*)0;
    int8_t *l_168 = &p_1111->g_169[8][0];
    int64_t *l_176 = (void*)0;
    int64_t *l_177 = (void*)0;
    int32_t l_178 = 1L;
    int64_t *l_179 = (void*)0;
    int64_t *l_180 = (void*)0;
    uint32_t l_182 = 0xF6DF4725L;
    uint32_t *l_183[7][10][3];
    int32_t l_185 = 6L;
    uint64_t *l_186 = &p_1111->g_140;
    int32_t **l_187 = (void*)0;
    int32_t l_191 = (-10L);
    int32_t l_192 = 0x5E3BE108L;
    int32_t l_193 = 0x5A53D072L;
    int32_t l_194 = 0x1BA7199DL;
    int32_t l_195 = 0L;
    int32_t l_196 = (-9L);
    int32_t l_197[9][1][8] = {{{0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L}},{{0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L}},{{0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L}},{{0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L}},{{0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L}},{{0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L}},{{0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L}},{{0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L}},{{0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L,0x4A7FE7C1L}}};
    uint64_t l_198 = 0x2012BC01D2B0A3EEL;
    VECTOR(int16_t, 8) l_205 = (VECTOR(int16_t, 8))(0x1583L, (VECTOR(int16_t, 4))(0x1583L, (VECTOR(int16_t, 2))(0x1583L, 0x3414L), 0x3414L), 0x3414L, 0x1583L, 0x3414L);
    VECTOR(int16_t, 8) l_363 = (VECTOR(int16_t, 8))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x485FL), 0x485FL), 0x485FL, (-9L), 0x485FL);
    VECTOR(int16_t, 4) l_365 = (VECTOR(int16_t, 4))(0x16A9L, (VECTOR(int16_t, 2))(0x16A9L, 0x2608L), 0x2608L);
    VECTOR(int16_t, 8) l_366 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0L), 0L), 0L, 9L, 0L);
    VECTOR(int16_t, 8) l_369 = (VECTOR(int16_t, 8))(0x13C9L, (VECTOR(int16_t, 4))(0x13C9L, (VECTOR(int16_t, 2))(0x13C9L, 0x4D84L), 0x4D84L), 0x4D84L, 0x13C9L, 0x4D84L);
    VECTOR(uint16_t, 8) l_410 = (VECTOR(uint16_t, 8))(4UL, (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0xE1D7L), 0xE1D7L), 0xE1D7L, 4UL, 0xE1D7L);
    VECTOR(int32_t, 8) l_413 = (VECTOR(int32_t, 8))(0x61207AB8L, (VECTOR(int32_t, 4))(0x61207AB8L, (VECTOR(int32_t, 2))(0x61207AB8L, 1L), 1L), 1L, 0x61207AB8L, 1L);
    VECTOR(int32_t, 16) l_414 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
    int64_t l_415[6][7] = {{0x4A7BE95214B7C654L,0x3691BA73FDD01520L,0x0C3FE490596F0A60L,(-1L),0x0C3FE490596F0A60L,0x3691BA73FDD01520L,0x4A7BE95214B7C654L},{0x4A7BE95214B7C654L,0x3691BA73FDD01520L,0x0C3FE490596F0A60L,(-1L),0x0C3FE490596F0A60L,0x3691BA73FDD01520L,0x4A7BE95214B7C654L},{0x4A7BE95214B7C654L,0x3691BA73FDD01520L,0x0C3FE490596F0A60L,(-1L),0x0C3FE490596F0A60L,0x3691BA73FDD01520L,0x4A7BE95214B7C654L},{0x4A7BE95214B7C654L,0x3691BA73FDD01520L,0x0C3FE490596F0A60L,(-1L),0x0C3FE490596F0A60L,0x3691BA73FDD01520L,0x4A7BE95214B7C654L},{0x4A7BE95214B7C654L,0x3691BA73FDD01520L,0x0C3FE490596F0A60L,(-1L),0x0C3FE490596F0A60L,0x3691BA73FDD01520L,0x4A7BE95214B7C654L},{0x4A7BE95214B7C654L,0x3691BA73FDD01520L,0x0C3FE490596F0A60L,(-1L),0x0C3FE490596F0A60L,0x3691BA73FDD01520L,0x4A7BE95214B7C654L}};
    VECTOR(int16_t, 16) l_420 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x24FFL), 0x24FFL), 0x24FFL, 0L, 0x24FFL, (VECTOR(int16_t, 2))(0L, 0x24FFL), (VECTOR(int16_t, 2))(0L, 0x24FFL), 0L, 0x24FFL, 0L, 0x24FFL);
    int32_t *l_444[2];
    uint16_t l_445 = 0x9AA0L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_164[i][j] = 4294967292UL;
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
                l_183[i][j][k] = &p_1111->g_184;
        }
    }
    for (i = 0; i < 2; i++)
        l_444[i] = &l_197[4][0][5];
    if (((((((void*)0 != l_158) , (((((safe_div_func_int64_t_s_s((l_164[0][0] >= (&p_1111->g_63 == (((p_1111->g_86[0] <= ((*l_186) &= ((((l_185 = (safe_mul_func_uint8_t_u_u((l_164[0][0] ^ (((l_182 = (p_1111->g_181[4][2][5] = (l_178 ^= (((*l_168) = (0x403FL >= l_164[0][0])) || ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((l_164[0][0] , p_144) == 0x11L), p_144)) >= 0x9FD0DBB50440AC5AL), 254UL)), 1L)) | 0x75L))))) == p_1111->g_86[0]) == 0x37C4L)), p_1111->g_159))) < 0x0054F948L) <= 0x3CDB2C22L) > p_144))) == p_1111->g_184) , &p_1111->g_63))), p_1111->g_86[0])) , l_187) == (void*)0) ^ (-1L)) , p_1111->g_86[0])) && 0x2BL) & p_144) , l_185))
    { /* block id: 51 */
        int32_t *l_188 = &l_178;
        int32_t *l_189[6][3] = {{(void*)0,&l_185,(void*)0},{(void*)0,&l_185,(void*)0},{(void*)0,&l_185,(void*)0},{(void*)0,&l_185,(void*)0},{(void*)0,&l_185,(void*)0},{(void*)0,&l_185,(void*)0}};
        int64_t l_190 = 0x4490D768F204AD23L;
        VECTOR(uint32_t, 8) l_210 = (VECTOR(uint32_t, 8))(0x80C1A3A9L, (VECTOR(uint32_t, 4))(0x80C1A3A9L, (VECTOR(uint32_t, 2))(0x80C1A3A9L, 0x80B7CCECL), 0x80B7CCECL), 0x80B7CCECL, 0x80C1A3A9L, 0x80B7CCECL);
        VECTOR(uint32_t, 16) l_211 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL, (VECTOR(uint32_t, 2))(0UL, 7UL), (VECTOR(uint32_t, 2))(0UL, 7UL), 0UL, 7UL, 0UL, 7UL);
        uint64_t *l_216 = &p_1111->g_86[0];
        int16_t *l_226 = &p_1111->g_227[0];
        uint8_t l_228 = 1UL;
        int32_t l_284 = (-5L);
        uint32_t l_285 = 4294967292UL;
        VECTOR(int32_t, 2) l_315 = (VECTOR(int32_t, 2))(0x7998D613L, (-1L));
        int32_t l_353 = (-1L);
        VECTOR(int32_t, 2) l_354 = (VECTOR(int32_t, 2))(0x21177661L, 0x7FCC8C6FL);
        VECTOR(int32_t, 16) l_357 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x27174152L), 0x27174152L), 0x27174152L, 0L, 0x27174152L, (VECTOR(int32_t, 2))(0L, 0x27174152L), (VECTOR(int32_t, 2))(0L, 0x27174152L), 0L, 0x27174152L, 0L, 0x27174152L);
        VECTOR(int16_t, 2) l_361 = (VECTOR(int16_t, 2))(0x1A16L, 0x25DBL);
        VECTOR(int16_t, 4) l_362 = (VECTOR(int16_t, 4))(0x18D8L, (VECTOR(int16_t, 2))(0x18D8L, 1L), 1L);
        VECTOR(uint64_t, 8) l_376 = (VECTOR(uint64_t, 8))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 0UL), 0UL), 0UL, 2UL, 0UL);
        int i, j;
        ++l_198;
        (*p_1111->g_229) = ((safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(l_205.s16477146)).s6, 0)) | ((safe_sub_func_uint16_t_u_u((&p_1111->g_159 == (((((safe_add_func_uint32_t_u_u(((((VECTOR(uint32_t, 8))(0UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_210.s62536312)).odd)), ((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 4))(l_211.sfcf0)).zwwzzzyzyywwxzyz, ((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0L)))).xyxyxxxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((((((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x32DBL, 0x7062L)), 2L, ((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_145, (((void*)0 == l_216) , 1UL))), 1)) != GROUP_DIVERGE(0, 1)), (+(((0x76E0149BL == (safe_lshift_func_int16_t_s_s(((((*l_188) = (~((VECTOR(int32_t, 16))(p_1111->g_219.s7715076260555471)).s2)) | (l_196 = (safe_unary_minus_func_int8_t_s(p_1111->g_23.x)))) <= ((*l_226) |= (((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((p_1111->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1111->tid, 2))] = p_1111->g_86[0]) < (safe_unary_minus_func_uint32_t_u(((0x4BE2783DC1A67240L >= 0UL) , p_145)))), (-3L))), p_144)) < p_1111->g_38) == 0x0715L))), 8))) > GROUP_DIVERGE(0, 1)) <= 0L)), 4L, 0x6545L, (-1L))).hi)).zwwyyxzzwywzxzzy, (int16_t)p_145))).s6 ^ p_145) , p_1111->g_149.z) , p_144), 0x7C80BBA4L, 1L, p_145, (-1L), 5L, (-10L), 0L)).s41)).yyyxyyxx))))).s7436150675661006))).s2b)), ((VECTOR(uint32_t, 2))(0x6E1FD061L)), ((VECTOR(uint32_t, 2))(0xD048766FL))))).yyyxxyyxxxxyxyxy, ((VECTOR(uint32_t, 16))(0x609F07F1L))))).s98, ((VECTOR(uint32_t, 2))(4294967295UL))))), 8UL, 4294967295UL)).wyzwywxz, ((VECTOR(uint32_t, 8))(0x593A24E9L)), ((VECTOR(uint32_t, 8))(0x1B32F1FAL))))).s7414143042732636, ((VECTOR(uint32_t, 16))(0xB2B34BF2L)), ((VECTOR(uint32_t, 16))(0UL))))).sf, 0x59B3B481L, 0xF5E94432L)).s3 < 0x76D12FDDL) , p_144), (-9L))) , p_1111->g_181[6][2][8]) > p_144) > 0xF09818F5C7EDD45CL) , l_226)), p_1111->g_159)) > 1UL)), l_228)) , p_142);
        if ((safe_rshift_func_int16_t_s_u((((((safe_div_func_uint64_t_u_u(p_144, (+GROUP_DIVERGE(1, 1)))) & (-9L)) != (((p_1111->g_219.s3 , ((*l_188) || (safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))((safe_lshift_func_int16_t_s_s(p_1111->g_23.y, ((*l_226) = (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(((p_1111->g_140 = (+((p_1111->g_29.y != 6L) , (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_145, (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))((safe_rshift_func_uint16_t_u_s((((void*)0 == &p_1111->g_181[2][2][8]) ^ p_145), 5)), 4294967291UL, 4294967295UL, 0x75EBE814L)).y, p_145)))), p_1111->g_140))))) | p_145), p_144)) >= p_1111->g_159), 0x21L)), 7UL)) > 7UL) < p_1111->g_169[8][0])))), p_145, 0x2CCEL, 0x6549L)), ((VECTOR(int16_t, 4))(0x260BL)), ((VECTOR(int16_t, 4))(8L))))).hi)).hi, p_1111->g_184)), l_182)))) != p_1111->g_86[0]) , p_1111->g_181[5][0][2])) ^ l_191) && (*l_188)), p_1111->g_169[7][1])))
        { /* block id: 60 */
            uint8_t *l_258[1];
            int i;
            for (i = 0; i < 1; i++)
                l_258[i] = &l_228;
            (*l_188) = (safe_add_func_uint32_t_u_u(((((GROUP_DIVERGE(2, 1) & p_144) < ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))(0x274FL, 0L)).xyxyxyyyxyyyyxyx, (int16_t)((safe_lshift_func_int8_t_s_s((((VECTOR(uint8_t, 2))(0UL, 0xACL)).lo > ((p_145 | (p_144 & (((&p_1111->g_63 == (((((--p_1111->g_29.z) || p_145) , 1UL) < (safe_sub_func_int64_t_s_s((((VECTOR(int16_t, 2))(1L, 3L)).odd && ((p_1111->g_149.x != 0x60L) & 0xC664L)), p_1111->g_86[0]))) , l_183[5][6][2])) < p_144) < p_1111->g_184))) , p_145)), 1)) <= p_144)))).even, (int16_t)p_1111->g_159))).s5) == 0x0FL) || 1L), p_145));
        }
        else
        { /* block id: 63 */
            int8_t l_270[4][10] = {{0x53L,(-5L),0x41L,(-1L),0x41L,(-5L),0x53L,0x49L,0x21L,0x21L},{0x53L,(-5L),0x41L,(-1L),0x41L,(-5L),0x53L,0x49L,0x21L,0x21L},{0x53L,(-5L),0x41L,(-1L),0x41L,(-5L),0x53L,0x49L,0x21L,0x21L},{0x53L,(-5L),0x41L,(-1L),0x41L,(-5L),0x53L,0x49L,0x21L,0x21L}};
            int32_t l_271 = 6L;
            int32_t l_272 = 0x6E63EB49L;
            int32_t l_273 = 0x6825EC0CL;
            int32_t l_274 = 0x699EB9A3L;
            int32_t l_275 = (-1L);
            int32_t l_276 = 4L;
            int32_t l_277 = 0x6EC679FAL;
            int32_t l_278 = 0x46932E00L;
            int32_t l_279 = (-4L);
            int32_t l_280 = 0x51C0299DL;
            int32_t l_281 = 1L;
            int32_t l_282[1];
            VECTOR(int32_t, 16) l_314 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7217BD38L), 0x7217BD38L), 0x7217BD38L, 1L, 0x7217BD38L, (VECTOR(int32_t, 2))(1L, 0x7217BD38L), (VECTOR(int32_t, 2))(1L, 0x7217BD38L), 1L, 0x7217BD38L, 1L, 0x7217BD38L);
            int i, j;
            for (i = 0; i < 1; i++)
                l_282[i] = 0x469CE4A3L;
            if ((atomic_inc(&p_1111->g_atomic_input[38 * get_linear_group_id() + 9]) == 4))
            { /* block id: 65 */
                int32_t l_264 = 1L;
                int32_t *l_263 = &l_264;
                int32_t *l_265 = (void*)0;
                int32_t *l_266[2];
                uint16_t l_267[7];
                int i;
                for (i = 0; i < 2; i++)
                    l_266[i] = &l_264;
                for (i = 0; i < 7; i++)
                    l_267[i] = 65535UL;
                l_266[0] = (l_265 = l_263);
                l_267[2]++;
                unsigned int result = 0;
                result += l_264;
                int l_267_i0;
                for (l_267_i0 = 0; l_267_i0 < 7; l_267_i0++) {
                    result += l_267[l_267_i0];
                }
                atomic_add(&p_1111->g_special_values[38 * get_linear_group_id() + 9], result);
            }
            else
            { /* block id: 69 */
                (1 + 1);
            }
            l_285++;
            for (p_1111->g_184 = 0; (p_1111->g_184 > 7); p_1111->g_184 = safe_add_func_uint32_t_u_u(p_1111->g_184, 1))
            { /* block id: 75 */
                int32_t **l_318 = &l_188;
                VECTOR(uint32_t, 2) l_327 = (VECTOR(uint32_t, 2))(0x5FCF2151L, 0UL);
                uint8_t *l_334 = (void*)0;
                uint8_t *l_335 = &l_228;
                int i;
                if ((atomic_inc(&p_1111->g_atomic_input[38 * get_linear_group_id() + 30]) == 3))
                { /* block id: 77 */
                    int32_t l_290 = 0L;
                    VECTOR(uint32_t, 8) l_303 = (VECTOR(uint32_t, 8))(0x88D78523L, (VECTOR(uint32_t, 4))(0x88D78523L, (VECTOR(uint32_t, 2))(0x88D78523L, 4294967295UL), 4294967295UL), 4294967295UL, 0x88D78523L, 4294967295UL);
                    int i;
                    if (l_290)
                    { /* block id: 78 */
                        uint32_t l_291 = 0x6AD7C262L;
                        int32_t l_292 = 0L;
                        int32_t l_294 = 0L;
                        int32_t *l_293 = &l_294;
                        int32_t *l_295[9] = {&l_294,&l_294,&l_294,&l_294,&l_294,&l_294,&l_294,&l_294,&l_294};
                        int i;
                        l_292 &= l_291;
                        l_295[3] = (l_293 = (void*)0);
                    }
                    else
                    { /* block id: 82 */
                        int32_t l_296 = 1L;
                        uint8_t l_297 = 0UL;
                        int32_t l_299[2][3] = {{0x08695BF9L,0x08695BF9L,0x08695BF9L},{0x08695BF9L,0x08695BF9L,0x08695BF9L}};
                        int32_t *l_298[1];
                        int32_t *l_300 = (void*)0;
                        int32_t *l_301 = &l_299[0][1];
                        int64_t l_302 = 0L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_298[i] = &l_299[0][1];
                        l_296 = 8L;
                        l_301 = ((l_297 = (-3L)) , (l_300 = l_298[0]));
                        l_302 ^= 0x00035217L;
                    }
                    l_303.s6 = 0x2920541EL;
                    for (l_303.s7 = 0; (l_303.s7 != 29); l_303.s7 = safe_add_func_int16_t_s_s(l_303.s7, 1))
                    { /* block id: 92 */
                        uint8_t l_306 = 0xB6L;
                        uint32_t l_307 = 1UL;
                        int8_t l_308 = 0L;
                        int32_t *l_309 = (void*)0;
                        int32_t l_311 = 3L;
                        int32_t *l_310 = &l_311;
                        int32_t *l_312 = (void*)0;
                        int32_t *l_313 = &l_311;
                        l_307 = l_306;
                        l_313 = (l_312 = (l_310 = (l_308 , (l_309 = (void*)0))));
                    }
                    unsigned int result = 0;
                    result += l_290;
                    result += l_303.s7;
                    result += l_303.s6;
                    result += l_303.s5;
                    result += l_303.s4;
                    result += l_303.s3;
                    result += l_303.s2;
                    result += l_303.s1;
                    result += l_303.s0;
                    atomic_add(&p_1111->g_special_values[38 * get_linear_group_id() + 30], result);
                }
                else
                { /* block id: 99 */
                    (1 + 1);
                }
                (*l_188) = ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_314.sb4c4550f4afa2bad)).s8131, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_145, ((VECTOR(int32_t, 2))(0x07C5DC76L, 0x201AB5E6L)), 9L)).yzxyxwzzwyyxzyyz)).sa919, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_315.yyyxxxyy)).hi)), ((VECTOR(int32_t, 8))(p_1111->g_316.zyzwwxwz)).hi)))))).z;
                (*l_318) = p_142;
                l_192 &= ((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((!((((*l_226) = (safe_sub_func_uint8_t_u_u((+(p_1111->g_184 < ((18446744073709551607UL || 7UL) & ((safe_rshift_func_uint8_t_u_u((((VECTOR(uint32_t, 4))(l_327.yxyx)).w | ((safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), ((safe_mul_func_uint16_t_u_u((((*l_186) = (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(0UL, (((((*l_335)--) && (((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(p_1111->g_23.y, p_145, (safe_sub_func_int64_t_s_s((((((safe_lshift_func_int16_t_s_s(((p_1111->g_344[5]--) & 0UL), l_278)) < FAKE_DIVERGE(p_1111->group_0_offset, get_group_id(0), 10)) || p_1111->g_159) != (safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0UL, 7UL)), 65527UL, 0x781BL)))).y, 13)) | ((safe_sub_func_int32_t_s_s(p_144, GROUP_DIVERGE(0, 1))) , (-1L))), 2))) <= p_1111->g_comm_values[p_1111->tid]), p_145)), 0xCED3L, 8UL, 65527UL, 0x272EL, 65535UL)))).odd)).ywzwxyyx)).s5, p_144)) & p_144) , l_353)) , 65529UL) > p_1111->g_38), 255UL, GROUP_DIVERGE(1, 1), ((VECTOR(uint8_t, 2))(0x42L)), 1UL, 0xF4L, ((VECTOR(uint8_t, 4))(0x79L)), ((VECTOR(uint8_t, 4))(3UL)))).s8, 1))) >= 0x5EFA8F5E13A9F871L), p_145)) == (**l_318)))) , p_1111->g_86[0])), 5)) , p_1111->g_29.y)))), p_144))) | p_144) , p_145)) , &p_145) != (void*)0), 0L)), 0L)) ^ p_1111->g_181[5][2][7]);
            }
            (*l_188) ^= l_282[0];
        }
        l_178 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_354.yyyx)).wxzwzwzzzzxzxxwx)).s15, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1111->g_355.s66)))), ((VECTOR(int32_t, 2))(p_1111->g_356.yx))))), 0x1BA68172L, 0x6CA17E30L)).hi))).xxyyxyyx, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0x00481B76L)), 0x435D64ABL, 0x2CC792EDL)), ((VECTOR(int32_t, 8))(l_357.s4a877443)).s2, 1L, (-1L), 4L)), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(p_144, 0x0F95A1CCL, 0x587A9F98L, 0x05B9C96CL)), ((VECTOR(int32_t, 4))(p_1111->g_358.wxxy))))).ywzyxxyw, ((VECTOR(int32_t, 8))(0x69602824L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_1111->g_359.s2301301316754072)).s54)), (l_192 |= (((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(1L, (-1L))).xxxx)).zwzwzwxxwxzwzzwz, (int16_t)((*l_226) = 1L)))).sd0, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_1111->g_360.s4b34)))))).hi))).yyxx, ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 4))(l_361.xxxy)).xwxzzyyy, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(0x19A4L, 0x4DBBL)), ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(l_362.yxyz)).xzwwxywz, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_363.s15)), (-1L), 0x0B1AL)).zxwwyxwx))).s27))).xyxxxyxxxxyyyyyy, ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))((-3L), 0x2799L, 0x3215L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-9L), 0x506EL)).yxyx)).zxwzxyxx)))), p_1111->g_149.w, 0x3023L, (((*p_142) = p_1111->g_355.s3) , (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_1111->g_364.s42)))))).lo != 0L)), 0x3A32L, 8L)), ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_365.yx)))).xxyyyxxyxyyyxxxx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_366.s75722422)).s15)).xyyyyxyxxxyyxyyx, ((VECTOR(int16_t, 4))(p_1111->g_367.sc15f)).zyxyywyyzzxwzyzx)))))), ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(p_1111->g_368.yxyyxyxy)).s71, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(l_369.s51541313)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(1L, p_1111->g_38, (-7L), (safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(0x5B08624FEB7E0530L, (((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 2))(p_1111->g_374.yx)).yyyyxyyyxxxyxyyy, ((VECTOR(uint64_t, 4))(p_1111->g_375.yxxy)).zyyyywzwzwxyzxxz, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_376.s6323653025231720))))))).s3e, ((VECTOR(uint64_t, 2))(p_1111->g_377.xx))))).hi , (p_143 != p_143)))), p_145)), 0x7D10L, 0x1EE1L, 3L, 1L)))), ((VECTOR(int16_t, 8))((-2L)))))).lo, ((VECTOR(int16_t, 4))(0x7632L))))).hi, ((VECTOR(int16_t, 2))(0x7941L))))).xyyxyxyyyxxxxxyy))).s8, (-6L), 0x066EL, ((VECTOR(int16_t, 4))(0x6E03L)), 0x350FL)).s62, ((VECTOR(int16_t, 2))(9L))))).xyxxyxxx))).even))).zyywzwzy, (int16_t)0x40C8L))).s5 , p_145)), 0x255B519FL, ((VECTOR(int32_t, 2))((-5L))), 4L))))), ((VECTOR(int32_t, 8))(0x5FCF4703L))))).odd)).z;
    }
    else
    { /* block id: 116 */
        uint64_t l_383 = 18446744073709551615UL;
        int32_t l_393 = 0x3B37E032L;
        VECTOR(uint16_t, 2) l_411 = (VECTOR(uint16_t, 2))(0x537BL, 8UL);
        int32_t *l_416 = (void*)0;
        int32_t *l_417 = &l_194;
        VECTOR(uint16_t, 8) l_426 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
        uint32_t *l_439 = (void*)0;
        uint16_t *l_442[9][3] = {{(void*)0,&p_1111->g_389[1],(void*)0},{(void*)0,&p_1111->g_389[1],(void*)0},{(void*)0,&p_1111->g_389[1],(void*)0},{(void*)0,&p_1111->g_389[1],(void*)0},{(void*)0,&p_1111->g_389[1],(void*)0},{(void*)0,&p_1111->g_389[1],(void*)0},{(void*)0,&p_1111->g_389[1],(void*)0},{(void*)0,&p_1111->g_389[1],(void*)0},{(void*)0,&p_1111->g_389[1],(void*)0}};
        int16_t l_443 = 3L;
        int i, j;
        for (p_1111->g_63 = (-28); (p_1111->g_63 > 38); ++p_1111->g_63)
        { /* block id: 119 */
            int32_t **l_380 = &p_1111->g_37[5];
            uint16_t *l_388[3][8][10] = {{{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]}},{{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]}},{{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]},{&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[1],&p_1111->g_389[0],(void*)0,&p_1111->g_389[0],&p_1111->g_389[0],&p_1111->g_389[1],&p_1111->g_389[0],&p_1111->g_389[1]}}};
            int16_t l_390[9][9][1] = {{{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L}},{{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L}},{{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L}},{{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L}},{{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L}},{{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L}},{{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L}},{{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L}},{{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L},{0x5090L}}};
            VECTOR(int64_t, 16) l_392 = (VECTOR(int64_t, 16))(0x7D48F336543E7391L, (VECTOR(int64_t, 4))(0x7D48F336543E7391L, (VECTOR(int64_t, 2))(0x7D48F336543E7391L, 1L), 1L), 1L, 0x7D48F336543E7391L, 1L, (VECTOR(int64_t, 2))(0x7D48F336543E7391L, 1L), (VECTOR(int64_t, 2))(0x7D48F336543E7391L, 1L), 0x7D48F336543E7391L, 1L, 0x7D48F336543E7391L, 1L);
            int i, j, k;
            if (p_144)
                break;
            (*l_380) = (void*)0;
            l_393 = (safe_lshift_func_uint16_t_u_u(0xBA7AL, (((1UL <= ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(p_144, l_383, 7UL, 0xF0DD006A70CB60EAL)).xzwwywyz, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 16))(0x23FA2FD428859F04L, 18446744073709551615UL, (safe_lshift_func_int8_t_s_s((p_1111->g_391[0][1][3] |= ((*l_168) = (l_383 <= (l_390[1][6][0] = (~((*l_158)++)))))), 6)), ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))((l_183[4][7][1] == &p_1111->g_63), 18446744073709551613UL, 0xD0EE5BC97349348BL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 8))(0x20AE274D00CB7786L, (((VECTOR(int64_t, 8))(l_392.sde7084e5)).s0 , p_145), p_1111->g_227[0], ((VECTOR(uint64_t, 4))(0x6E509290C9B68BDCL)), 0xF984939442455F83L)).lo, ((VECTOR(uint64_t, 4))(0x264C8002232851F6L))))))), 0x547A188CD0D69C19L, ((VECTOR(uint64_t, 4))(0xF95E420019B2300FL)), 0UL, 0xFBC069E1769B2201L, 0UL, 0x01D68A4CE1E49EE1L)).sbb)).yxyxxxxxxyyxxxxy))).odd)).odd)))).wwyxxxwx)).s0 >= p_1111->g_364.s3) < p_145), p_1111->g_86[0], p_145, 0xD473D9D4ECAEE394L, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(0x7796D47989F6A5B6L)), 0UL, ((VECTOR(uint64_t, 4))(18446744073709551615UL)), 0xC58A53EE683BE080L)).se3))).xxxx))).zzwyywwz))))).s4) <= p_1111->g_368.y) != 5L)));
        }
        (*l_417) = (safe_unary_minus_func_uint32_t_u(((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((p_1111->g_360.s3 && ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((*l_158)--), ((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 4))(l_410.s7225)).xywxyxyx, ((VECTOR(uint16_t, 8))(0x519BL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(0xCDF2L, 65532UL, ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_411.yy)), ((VECTOR(uint16_t, 4))(0xF142L, 7UL, 0UL, 1UL)), 65535UL, 0xC709L)).s71, (uint16_t)(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(4294967295UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0UL, 3UL)))).yyyx)), ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_1111->g_412.sa226)).even)), ((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(l_413.s2677)).yzwxwwxw, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_145, ((VECTOR(int32_t, 4))(l_414.sb1f6)), 0x69317C82L, 0L, (((&p_1111->g_63 == l_183[2][0][0]) , p_145) , p_144), 0x3E2B0144L, 0x03D1B021L, ((-1L) < (+(-2L))), ((VECTOR(int32_t, 2))(0x6A2D686EL)), 1L, 0x63689A82L, 0L)).s98ba)).wzzzwzwx, ((VECTOR(int32_t, 8))(0L))))).s63)).yyyy, ((VECTOR(int32_t, 4))(0x56A263E3L)), ((VECTOR(int32_t, 4))((-1L)))))), ((VECTOR(int32_t, 4))(0x042754C2L)))))))).odd, ((VECTOR(uint32_t, 2))(4294967288UL))))), 4294967293UL)).s1042524023233572)).sc && l_393)))), p_1111->g_86[0], 65529UL, 65534UL, 65535UL)).s1631570731316262)), ((VECTOR(uint16_t, 16))(0x6D3BL))))).s2fcc)), p_1111->g_360.sa, 0xC9BBL, 0x8B4EL)), ((VECTOR(uint16_t, 8))(0x6670L))))).odd)).ywzyxywwxxwyzyzy, ((VECTOR(uint16_t, 16))(6UL)), ((VECTOR(uint16_t, 16))(1UL))))).s0)), (-6L))), ((VECTOR(int8_t, 4))(9L)), ((VECTOR(int8_t, 2))(0L)), 0x41L, l_415[4][0], (-1L), p_1111->g_391[0][1][3], p_1111->g_375.x, p_144, 0x17L, 0L, 0x12L)).s9d)).lo) >= 0x44F9D7B825304957L), 0x44EDL)), 18446744073709551615UL)), p_145)))), l_411.y)) > p_144)));
        (*l_417) = (((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_420.saf)), 1L, 0x01B2L)))).z, (safe_mod_func_int32_t_s_s((((safe_div_func_int32_t_s_s(0x7C86F2BCL, p_145)) , ((safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_426.s07)).yxxxxxyxxxyyyxxy)).se)) >= (safe_sub_func_int8_t_s_s((((*l_417) || (p_1111->g_355.s0 >= (l_443 = (p_145 & (safe_lshift_func_uint16_t_u_u(((*l_158)--), (p_1111->g_389[0] = (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((l_417 != l_439) & ((VECTOR(uint16_t, 2))(0x638BL, 65535UL)).even), (safe_lshift_func_uint8_t_u_u((p_1111->g_364.s6 , (*l_417)), 3)))), p_1111->g_184)), 250UL))))))))) < (-1L)), 0UL)))) , 2L), 1L)))) && p_1111->g_368.y) <= l_365.x);
    }
    l_445 = (-7L);
    return p_142;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S0 c_1112;
    struct S0* p_1111 = &c_1112;
    struct S0 c_1113 = {
        (VECTOR(int32_t, 8))(0x23CC92EAL, (VECTOR(int32_t, 4))(0x23CC92EAL, (VECTOR(int32_t, 2))(0x23CC92EAL, (-9L)), (-9L)), (-9L), 0x23CC92EAL, (-9L)), // p_1111->g_14
        (VECTOR(int16_t, 4))(0x4E94L, (VECTOR(int16_t, 2))(0x4E94L, 0L), 0L), // p_1111->g_23
        (VECTOR(uint8_t, 2))(0UL, 0x32L), // p_1111->g_24
        (VECTOR(uint8_t, 8))(0x7FL, (VECTOR(uint8_t, 4))(0x7FL, (VECTOR(uint8_t, 2))(0x7FL, 0xBFL), 0xBFL), 0xBFL, 0x7FL, 0xBFL), // p_1111->g_27
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), // p_1111->g_29
        0L, // p_1111->g_38
        {&p_1111->g_38,&p_1111->g_38,&p_1111->g_38,&p_1111->g_38,&p_1111->g_38,&p_1111->g_38}, // p_1111->g_37
        7L, // p_1111->g_61
        0x28BE0213L, // p_1111->g_63
        {18446744073709551607UL}, // p_1111->g_86
        0x184F7E791C839252L, // p_1111->g_140
        (VECTOR(int16_t, 4))(0x501DL, (VECTOR(int16_t, 2))(0x501DL, 0x0D49L), 0x0D49L), // p_1111->g_149
        1UL, // p_1111->g_159
        {{0x1AL,(-7L),(-7L),0x1AL,0x4EL,0x60L},{0x1AL,(-7L),(-7L),0x1AL,0x4EL,0x60L},{0x1AL,(-7L),(-7L),0x1AL,0x4EL,0x60L},{0x1AL,(-7L),(-7L),0x1AL,0x4EL,0x60L},{0x1AL,(-7L),(-7L),0x1AL,0x4EL,0x60L},{0x1AL,(-7L),(-7L),0x1AL,0x4EL,0x60L},{0x1AL,(-7L),(-7L),0x1AL,0x4EL,0x60L},{0x1AL,(-7L),(-7L),0x1AL,0x4EL,0x60L},{0x1AL,(-7L),(-7L),0x1AL,0x4EL,0x60L},{0x1AL,(-7L),(-7L),0x1AL,0x4EL,0x60L}}, // p_1111->g_169
        {{{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L}},{{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L}},{{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L}},{{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L}},{{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L}},{{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L}},{{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L},{(-8L),(-7L),(-8L),0L,1L,1L,0x187AD1FB9948723BL,4L,0x78F5D8F846B0A714L}}}, // p_1111->g_181
        4294967295UL, // p_1111->g_184
        (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x4B9D5FF2L), 0x4B9D5FF2L), 0x4B9D5FF2L, 7L, 0x4B9D5FF2L), // p_1111->g_219
        {0x2FC2L,0x2FC2L}, // p_1111->g_227
        &p_1111->g_37[1], // p_1111->g_229
        (-1L), // p_1111->g_283
        (VECTOR(int32_t, 4))(0x3606592DL, (VECTOR(int32_t, 2))(0x3606592DL, (-1L)), (-1L)), // p_1111->g_316
        {{{(void*)0,(void*)0,&p_1111->g_37[1],&p_1111->g_37[5],(void*)0,&p_1111->g_37[5],&p_1111->g_37[1],(void*)0,(void*)0},{(void*)0,(void*)0,&p_1111->g_37[1],&p_1111->g_37[5],(void*)0,&p_1111->g_37[5],&p_1111->g_37[1],(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1111->g_37[1],&p_1111->g_37[5],(void*)0,&p_1111->g_37[5],&p_1111->g_37[1],(void*)0,(void*)0},{(void*)0,(void*)0,&p_1111->g_37[1],&p_1111->g_37[5],(void*)0,&p_1111->g_37[5],&p_1111->g_37[1],(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1111->g_37[1],&p_1111->g_37[5],(void*)0,&p_1111->g_37[5],&p_1111->g_37[1],(void*)0,(void*)0},{(void*)0,(void*)0,&p_1111->g_37[1],&p_1111->g_37[5],(void*)0,&p_1111->g_37[5],&p_1111->g_37[1],(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1111->g_37[1],&p_1111->g_37[5],(void*)0,&p_1111->g_37[5],&p_1111->g_37[1],(void*)0,(void*)0},{(void*)0,(void*)0,&p_1111->g_37[1],&p_1111->g_37[5],(void*)0,&p_1111->g_37[5],&p_1111->g_37[1],(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1111->g_37[1],&p_1111->g_37[5],(void*)0,&p_1111->g_37[5],&p_1111->g_37[1],(void*)0,(void*)0},{(void*)0,(void*)0,&p_1111->g_37[1],&p_1111->g_37[5],(void*)0,&p_1111->g_37[5],&p_1111->g_37[1],(void*)0,(void*)0}}}, // p_1111->g_317
        {0x570D369F1113FCB4L,0x570D369F1113FCB4L,0x570D369F1113FCB4L,0x570D369F1113FCB4L,0x570D369F1113FCB4L,0x570D369F1113FCB4L,0x570D369F1113FCB4L,0x570D369F1113FCB4L}, // p_1111->g_344
        (VECTOR(int32_t, 8))(0x38F8FFCAL, (VECTOR(int32_t, 4))(0x38F8FFCAL, (VECTOR(int32_t, 2))(0x38F8FFCAL, 0x43C4C8C3L), 0x43C4C8C3L), 0x43C4C8C3L, 0x38F8FFCAL, 0x43C4C8C3L), // p_1111->g_355
        (VECTOR(int32_t, 2))((-1L), 1L), // p_1111->g_356
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 9L), 9L), // p_1111->g_358
        (VECTOR(int32_t, 8))(0x2CD1B99FL, (VECTOR(int32_t, 4))(0x2CD1B99FL, (VECTOR(int32_t, 2))(0x2CD1B99FL, 0x0CBBE0C8L), 0x0CBBE0C8L), 0x0CBBE0C8L, 0x2CD1B99FL, 0x0CBBE0C8L), // p_1111->g_359
        (VECTOR(int16_t, 16))(0x3784L, (VECTOR(int16_t, 4))(0x3784L, (VECTOR(int16_t, 2))(0x3784L, 1L), 1L), 1L, 0x3784L, 1L, (VECTOR(int16_t, 2))(0x3784L, 1L), (VECTOR(int16_t, 2))(0x3784L, 1L), 0x3784L, 1L, 0x3784L, 1L), // p_1111->g_360
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xA61C9530L), 0xA61C9530L), 0xA61C9530L, 1UL, 0xA61C9530L), // p_1111->g_364
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-7L)), (-7L)), (-7L), (-1L), (-7L), (VECTOR(int16_t, 2))((-1L), (-7L)), (VECTOR(int16_t, 2))((-1L), (-7L)), (-1L), (-7L), (-1L), (-7L)), // p_1111->g_367
        (VECTOR(int16_t, 2))(0x4EDDL, (-8L)), // p_1111->g_368
        (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xB2BBBD665CFECC03L), 0xB2BBBD665CFECC03L), // p_1111->g_374
        (VECTOR(uint64_t, 2))(0x74A2F1734ADEF5A0L, 0x111C7AEF114670DDL), // p_1111->g_375
        (VECTOR(uint64_t, 2))(0xE9E7F51BD183C116L, 18446744073709551615UL), // p_1111->g_377
        {0x8975L,0x8975L}, // p_1111->g_389
        {{{3L,0x49FF7A1FA21A43E8L,0x7F21C8E33227E0ECL,0x49FF7A1FA21A43E8L},{3L,0x49FF7A1FA21A43E8L,0x7F21C8E33227E0ECL,0x49FF7A1FA21A43E8L},{3L,0x49FF7A1FA21A43E8L,0x7F21C8E33227E0ECL,0x49FF7A1FA21A43E8L},{3L,0x49FF7A1FA21A43E8L,0x7F21C8E33227E0ECL,0x49FF7A1FA21A43E8L}},{{3L,0x49FF7A1FA21A43E8L,0x7F21C8E33227E0ECL,0x49FF7A1FA21A43E8L},{3L,0x49FF7A1FA21A43E8L,0x7F21C8E33227E0ECL,0x49FF7A1FA21A43E8L},{3L,0x49FF7A1FA21A43E8L,0x7F21C8E33227E0ECL,0x49FF7A1FA21A43E8L},{3L,0x49FF7A1FA21A43E8L,0x7F21C8E33227E0ECL,0x49FF7A1FA21A43E8L}},{{3L,0x49FF7A1FA21A43E8L,0x7F21C8E33227E0ECL,0x49FF7A1FA21A43E8L},{3L,0x49FF7A1FA21A43E8L,0x7F21C8E33227E0ECL,0x49FF7A1FA21A43E8L},{3L,0x49FF7A1FA21A43E8L,0x7F21C8E33227E0ECL,0x49FF7A1FA21A43E8L},{3L,0x49FF7A1FA21A43E8L,0x7F21C8E33227E0ECL,0x49FF7A1FA21A43E8L}}}, // p_1111->g_391
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x1934E874L), 0x1934E874L), 0x1934E874L, 0UL, 0x1934E874L, (VECTOR(uint32_t, 2))(0UL, 0x1934E874L), (VECTOR(uint32_t, 2))(0UL, 0x1934E874L), 0UL, 0x1934E874L, 0UL, 0x1934E874L), // p_1111->g_412
        (void*)0, // p_1111->g_468
        &p_1111->g_468, // p_1111->g_467
        &p_1111->g_61, // p_1111->g_475
        &p_1111->g_475, // p_1111->g_474
        0x791BL, // p_1111->g_508
        0x73CF25EF3CEE797FL, // p_1111->g_511
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1111->g_519
        (void*)0, // p_1111->g_523
        (void*)0, // p_1111->g_524
        {0x160DE02310EFFA08L,0x160DE02310EFFA08L,0x160DE02310EFFA08L,0x160DE02310EFFA08L,0x160DE02310EFFA08L,0x160DE02310EFFA08L,0x160DE02310EFFA08L,0x160DE02310EFFA08L}, // p_1111->g_540
        (VECTOR(int16_t, 2))(0L, (-1L)), // p_1111->g_547
        (VECTOR(int64_t, 16))(0x06880E73C20270FBL, (VECTOR(int64_t, 4))(0x06880E73C20270FBL, (VECTOR(int64_t, 2))(0x06880E73C20270FBL, 0x12F4442FBC34E607L), 0x12F4442FBC34E607L), 0x12F4442FBC34E607L, 0x06880E73C20270FBL, 0x12F4442FBC34E607L, (VECTOR(int64_t, 2))(0x06880E73C20270FBL, 0x12F4442FBC34E607L), (VECTOR(int64_t, 2))(0x06880E73C20270FBL, 0x12F4442FBC34E607L), 0x06880E73C20270FBL, 0x12F4442FBC34E607L, 0x06880E73C20270FBL, 0x12F4442FBC34E607L), // p_1111->g_549
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551606UL), 18446744073709551606UL), // p_1111->g_550
        (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 4L), 4L), 4L, (-3L), 4L), // p_1111->g_558
        (VECTOR(int8_t, 8))(0x29L, (VECTOR(int8_t, 4))(0x29L, (VECTOR(int8_t, 2))(0x29L, 0L), 0L), 0L, 0x29L, 0L), // p_1111->g_559
        (VECTOR(uint8_t, 2))(0xE1L, 0UL), // p_1111->g_562
        (VECTOR(int16_t, 8))(0x493AL, (VECTOR(int16_t, 4))(0x493AL, (VECTOR(int16_t, 2))(0x493AL, 4L), 4L), 4L, 0x493AL, 4L), // p_1111->g_563
        0x29CEL, // p_1111->g_564
        254UL, // p_1111->g_570
        (VECTOR(int64_t, 2))(0x4BAA25B7874ED970L, (-1L)), // p_1111->g_582
        (VECTOR(uint8_t, 16))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0xA4L), 0xA4L), 0xA4L, 253UL, 0xA4L, (VECTOR(uint8_t, 2))(253UL, 0xA4L), (VECTOR(uint8_t, 2))(253UL, 0xA4L), 253UL, 0xA4L, 253UL, 0xA4L), // p_1111->g_589
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x4DB26E98L), 0x4DB26E98L), // p_1111->g_598
        (VECTOR(uint16_t, 2))(1UL, 0UL), // p_1111->g_619
        {4294967294UL,4294967294UL,4294967294UL}, // p_1111->g_622
        &p_1111->g_622[2], // p_1111->g_621
        &p_1111->g_621, // p_1111->g_620
        (VECTOR(int16_t, 2))((-1L), 1L), // p_1111->g_624
        (VECTOR(uint16_t, 16))(4UL, (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0UL), 0UL), 0UL, 4UL, 0UL, (VECTOR(uint16_t, 2))(4UL, 0UL), (VECTOR(uint16_t, 2))(4UL, 0UL), 4UL, 0UL, 4UL, 0UL), // p_1111->g_638
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), // p_1111->g_645
        (VECTOR(int64_t, 2))(0x57BAAE8640101037L, 0x7B2EB434634BCF66L), // p_1111->g_647
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), // p_1111->g_649
        (VECTOR(int16_t, 8))(0x5945L, (VECTOR(int16_t, 4))(0x5945L, (VECTOR(int16_t, 2))(0x5945L, 0L), 0L), 0L, 0x5945L, 0L), // p_1111->g_663
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int16_t, 2))(0L, 1L), (VECTOR(int16_t, 2))(0L, 1L), 0L, 1L, 0L, 1L), // p_1111->g_670
        (void*)0, // p_1111->g_676
        (VECTOR(int32_t, 2))(0x5C47C3E4L, 7L), // p_1111->g_690
        (VECTOR(int32_t, 4))(0x3EE5CB7EL, (VECTOR(int32_t, 2))(0x3EE5CB7EL, 0L), 0L), // p_1111->g_691
        (VECTOR(int32_t, 8))(0x6AE8193EL, (VECTOR(int32_t, 4))(0x6AE8193EL, (VECTOR(int32_t, 2))(0x6AE8193EL, 0x656C7AD1L), 0x656C7AD1L), 0x656C7AD1L, 0x6AE8193EL, 0x656C7AD1L), // p_1111->g_693
        (VECTOR(int8_t, 16))(0x49L, (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, 2L), 2L), 2L, 0x49L, 2L, (VECTOR(int8_t, 2))(0x49L, 2L), (VECTOR(int8_t, 2))(0x49L, 2L), 0x49L, 2L, 0x49L, 2L), // p_1111->g_709
        1L, // p_1111->g_723
        &p_1111->g_63, // p_1111->g_735
        &p_1111->g_570, // p_1111->g_740
        (VECTOR(uint16_t, 2))(0x9B55L, 0UL), // p_1111->g_752
        (VECTOR(int8_t, 2))(0x0FL, 9L), // p_1111->g_756
        (VECTOR(int32_t, 2))(0x3387776AL, 0x3AB421EAL), // p_1111->g_774
        (-8L), // p_1111->g_809
        (VECTOR(uint64_t, 8))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xC120117D6E7C18F3L), 0xC120117D6E7C18F3L), 0xC120117D6E7C18F3L, 18446744073709551609UL, 0xC120117D6E7C18F3L), // p_1111->g_827
        (VECTOR(uint64_t, 16))(0xA57FD9005C439F2BL, (VECTOR(uint64_t, 4))(0xA57FD9005C439F2BL, (VECTOR(uint64_t, 2))(0xA57FD9005C439F2BL, 0UL), 0UL), 0UL, 0xA57FD9005C439F2BL, 0UL, (VECTOR(uint64_t, 2))(0xA57FD9005C439F2BL, 0UL), (VECTOR(uint64_t, 2))(0xA57FD9005C439F2BL, 0UL), 0xA57FD9005C439F2BL, 0UL, 0xA57FD9005C439F2BL, 0UL), // p_1111->g_829
        4294967294UL, // p_1111->g_851
        (void*)0, // p_1111->g_856
        (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 4294967291UL), 4294967291UL), // p_1111->g_870
        (VECTOR(uint64_t, 16))(0x2DAEDAAFE23CBD94L, (VECTOR(uint64_t, 4))(0x2DAEDAAFE23CBD94L, (VECTOR(uint64_t, 2))(0x2DAEDAAFE23CBD94L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x2DAEDAAFE23CBD94L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x2DAEDAAFE23CBD94L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x2DAEDAAFE23CBD94L, 18446744073709551615UL), 0x2DAEDAAFE23CBD94L, 18446744073709551615UL, 0x2DAEDAAFE23CBD94L, 18446744073709551615UL), // p_1111->g_914
        (VECTOR(int32_t, 8))(0x73C01E3DL, (VECTOR(int32_t, 4))(0x73C01E3DL, (VECTOR(int32_t, 2))(0x73C01E3DL, 6L), 6L), 6L, 0x73C01E3DL, 6L), // p_1111->g_926
        (VECTOR(uint8_t, 16))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 0x3BL), 0x3BL), 0x3BL, 252UL, 0x3BL, (VECTOR(uint8_t, 2))(252UL, 0x3BL), (VECTOR(uint8_t, 2))(252UL, 0x3BL), 252UL, 0x3BL, 252UL, 0x3BL), // p_1111->g_943
        (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-1L)), (-1L)), // p_1111->g_950
        &p_1111->g_86[0], // p_1111->g_968
        &p_1111->g_344[3], // p_1111->g_986
        {&p_1111->g_986}, // p_1111->g_985
        (VECTOR(uint8_t, 8))(0x46L, (VECTOR(uint8_t, 4))(0x46L, (VECTOR(uint8_t, 2))(0x46L, 0x38L), 0x38L), 0x38L, 0x46L, 0x38L), // p_1111->g_989
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xD7L), 0xD7L), // p_1111->g_990
        (VECTOR(uint8_t, 8))(0x59L, (VECTOR(uint8_t, 4))(0x59L, (VECTOR(uint8_t, 2))(0x59L, 254UL), 254UL), 254UL, 0x59L, 254UL), // p_1111->g_993
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x18L), 0x18L), 0x18L, (-1L), 0x18L), // p_1111->g_1004
        0xB76D0EA1EE245033L, // p_1111->g_1010
        0UL, // p_1111->g_1012
        (VECTOR(uint32_t, 8))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0xDB8C7563L), 0xDB8C7563L), 0xDB8C7563L, 4294967289UL, 0xDB8C7563L), // p_1111->g_1024
        (VECTOR(uint32_t, 16))(0xC10B46C4L, (VECTOR(uint32_t, 4))(0xC10B46C4L, (VECTOR(uint32_t, 2))(0xC10B46C4L, 0UL), 0UL), 0UL, 0xC10B46C4L, 0UL, (VECTOR(uint32_t, 2))(0xC10B46C4L, 0UL), (VECTOR(uint32_t, 2))(0xC10B46C4L, 0UL), 0xC10B46C4L, 0UL, 0xC10B46C4L, 0UL), // p_1111->g_1026
        (void*)0, // p_1111->g_1037
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L)), // p_1111->g_1069
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x84EAL), 0x84EAL), 0x84EAL, 65535UL, 0x84EAL, (VECTOR(uint16_t, 2))(65535UL, 0x84EAL), (VECTOR(uint16_t, 2))(65535UL, 0x84EAL), 65535UL, 0x84EAL, 65535UL, 0x84EAL), // p_1111->g_1076
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2FE9L), 0x2FE9L), 0x2FE9L, (-1L), 0x2FE9L, (VECTOR(int16_t, 2))((-1L), 0x2FE9L), (VECTOR(int16_t, 2))((-1L), 0x2FE9L), (-1L), 0x2FE9L, (-1L), 0x2FE9L), // p_1111->g_1102
        (-5L), // p_1111->g_1108
        252UL, // p_1111->g_1110
        0, // p_1111->v_collective
        sequence_input[get_global_id(0)], // p_1111->global_0_offset
        sequence_input[get_global_id(1)], // p_1111->global_1_offset
        sequence_input[get_global_id(2)], // p_1111->global_2_offset
        sequence_input[get_local_id(0)], // p_1111->local_0_offset
        sequence_input[get_local_id(1)], // p_1111->local_1_offset
        sequence_input[get_local_id(2)], // p_1111->local_2_offset
        sequence_input[get_group_id(0)], // p_1111->group_0_offset
        sequence_input[get_group_id(1)], // p_1111->group_1_offset
        sequence_input[get_group_id(2)], // p_1111->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_1111->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1112 = c_1113;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1111);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1111->g_14.s0, "p_1111->g_14.s0", print_hash_value);
    transparent_crc(p_1111->g_14.s1, "p_1111->g_14.s1", print_hash_value);
    transparent_crc(p_1111->g_14.s2, "p_1111->g_14.s2", print_hash_value);
    transparent_crc(p_1111->g_14.s3, "p_1111->g_14.s3", print_hash_value);
    transparent_crc(p_1111->g_14.s4, "p_1111->g_14.s4", print_hash_value);
    transparent_crc(p_1111->g_14.s5, "p_1111->g_14.s5", print_hash_value);
    transparent_crc(p_1111->g_14.s6, "p_1111->g_14.s6", print_hash_value);
    transparent_crc(p_1111->g_14.s7, "p_1111->g_14.s7", print_hash_value);
    transparent_crc(p_1111->g_23.x, "p_1111->g_23.x", print_hash_value);
    transparent_crc(p_1111->g_23.y, "p_1111->g_23.y", print_hash_value);
    transparent_crc(p_1111->g_23.z, "p_1111->g_23.z", print_hash_value);
    transparent_crc(p_1111->g_23.w, "p_1111->g_23.w", print_hash_value);
    transparent_crc(p_1111->g_24.x, "p_1111->g_24.x", print_hash_value);
    transparent_crc(p_1111->g_24.y, "p_1111->g_24.y", print_hash_value);
    transparent_crc(p_1111->g_27.s0, "p_1111->g_27.s0", print_hash_value);
    transparent_crc(p_1111->g_27.s1, "p_1111->g_27.s1", print_hash_value);
    transparent_crc(p_1111->g_27.s2, "p_1111->g_27.s2", print_hash_value);
    transparent_crc(p_1111->g_27.s3, "p_1111->g_27.s3", print_hash_value);
    transparent_crc(p_1111->g_27.s4, "p_1111->g_27.s4", print_hash_value);
    transparent_crc(p_1111->g_27.s5, "p_1111->g_27.s5", print_hash_value);
    transparent_crc(p_1111->g_27.s6, "p_1111->g_27.s6", print_hash_value);
    transparent_crc(p_1111->g_27.s7, "p_1111->g_27.s7", print_hash_value);
    transparent_crc(p_1111->g_29.x, "p_1111->g_29.x", print_hash_value);
    transparent_crc(p_1111->g_29.y, "p_1111->g_29.y", print_hash_value);
    transparent_crc(p_1111->g_29.z, "p_1111->g_29.z", print_hash_value);
    transparent_crc(p_1111->g_29.w, "p_1111->g_29.w", print_hash_value);
    transparent_crc(p_1111->g_38, "p_1111->g_38", print_hash_value);
    transparent_crc(p_1111->g_61, "p_1111->g_61", print_hash_value);
    transparent_crc(p_1111->g_63, "p_1111->g_63", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1111->g_86[i], "p_1111->g_86[i]", print_hash_value);

    }
    transparent_crc(p_1111->g_140, "p_1111->g_140", print_hash_value);
    transparent_crc(p_1111->g_149.x, "p_1111->g_149.x", print_hash_value);
    transparent_crc(p_1111->g_149.y, "p_1111->g_149.y", print_hash_value);
    transparent_crc(p_1111->g_149.z, "p_1111->g_149.z", print_hash_value);
    transparent_crc(p_1111->g_149.w, "p_1111->g_149.w", print_hash_value);
    transparent_crc(p_1111->g_159, "p_1111->g_159", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1111->g_169[i][j], "p_1111->g_169[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1111->g_181[i][j][k], "p_1111->g_181[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1111->g_184, "p_1111->g_184", print_hash_value);
    transparent_crc(p_1111->g_219.s0, "p_1111->g_219.s0", print_hash_value);
    transparent_crc(p_1111->g_219.s1, "p_1111->g_219.s1", print_hash_value);
    transparent_crc(p_1111->g_219.s2, "p_1111->g_219.s2", print_hash_value);
    transparent_crc(p_1111->g_219.s3, "p_1111->g_219.s3", print_hash_value);
    transparent_crc(p_1111->g_219.s4, "p_1111->g_219.s4", print_hash_value);
    transparent_crc(p_1111->g_219.s5, "p_1111->g_219.s5", print_hash_value);
    transparent_crc(p_1111->g_219.s6, "p_1111->g_219.s6", print_hash_value);
    transparent_crc(p_1111->g_219.s7, "p_1111->g_219.s7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1111->g_227[i], "p_1111->g_227[i]", print_hash_value);

    }
    transparent_crc(p_1111->g_283, "p_1111->g_283", print_hash_value);
    transparent_crc(p_1111->g_316.x, "p_1111->g_316.x", print_hash_value);
    transparent_crc(p_1111->g_316.y, "p_1111->g_316.y", print_hash_value);
    transparent_crc(p_1111->g_316.z, "p_1111->g_316.z", print_hash_value);
    transparent_crc(p_1111->g_316.w, "p_1111->g_316.w", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1111->g_344[i], "p_1111->g_344[i]", print_hash_value);

    }
    transparent_crc(p_1111->g_355.s0, "p_1111->g_355.s0", print_hash_value);
    transparent_crc(p_1111->g_355.s1, "p_1111->g_355.s1", print_hash_value);
    transparent_crc(p_1111->g_355.s2, "p_1111->g_355.s2", print_hash_value);
    transparent_crc(p_1111->g_355.s3, "p_1111->g_355.s3", print_hash_value);
    transparent_crc(p_1111->g_355.s4, "p_1111->g_355.s4", print_hash_value);
    transparent_crc(p_1111->g_355.s5, "p_1111->g_355.s5", print_hash_value);
    transparent_crc(p_1111->g_355.s6, "p_1111->g_355.s6", print_hash_value);
    transparent_crc(p_1111->g_355.s7, "p_1111->g_355.s7", print_hash_value);
    transparent_crc(p_1111->g_356.x, "p_1111->g_356.x", print_hash_value);
    transparent_crc(p_1111->g_356.y, "p_1111->g_356.y", print_hash_value);
    transparent_crc(p_1111->g_358.x, "p_1111->g_358.x", print_hash_value);
    transparent_crc(p_1111->g_358.y, "p_1111->g_358.y", print_hash_value);
    transparent_crc(p_1111->g_358.z, "p_1111->g_358.z", print_hash_value);
    transparent_crc(p_1111->g_358.w, "p_1111->g_358.w", print_hash_value);
    transparent_crc(p_1111->g_359.s0, "p_1111->g_359.s0", print_hash_value);
    transparent_crc(p_1111->g_359.s1, "p_1111->g_359.s1", print_hash_value);
    transparent_crc(p_1111->g_359.s2, "p_1111->g_359.s2", print_hash_value);
    transparent_crc(p_1111->g_359.s3, "p_1111->g_359.s3", print_hash_value);
    transparent_crc(p_1111->g_359.s4, "p_1111->g_359.s4", print_hash_value);
    transparent_crc(p_1111->g_359.s5, "p_1111->g_359.s5", print_hash_value);
    transparent_crc(p_1111->g_359.s6, "p_1111->g_359.s6", print_hash_value);
    transparent_crc(p_1111->g_359.s7, "p_1111->g_359.s7", print_hash_value);
    transparent_crc(p_1111->g_360.s0, "p_1111->g_360.s0", print_hash_value);
    transparent_crc(p_1111->g_360.s1, "p_1111->g_360.s1", print_hash_value);
    transparent_crc(p_1111->g_360.s2, "p_1111->g_360.s2", print_hash_value);
    transparent_crc(p_1111->g_360.s3, "p_1111->g_360.s3", print_hash_value);
    transparent_crc(p_1111->g_360.s4, "p_1111->g_360.s4", print_hash_value);
    transparent_crc(p_1111->g_360.s5, "p_1111->g_360.s5", print_hash_value);
    transparent_crc(p_1111->g_360.s6, "p_1111->g_360.s6", print_hash_value);
    transparent_crc(p_1111->g_360.s7, "p_1111->g_360.s7", print_hash_value);
    transparent_crc(p_1111->g_360.s8, "p_1111->g_360.s8", print_hash_value);
    transparent_crc(p_1111->g_360.s9, "p_1111->g_360.s9", print_hash_value);
    transparent_crc(p_1111->g_360.sa, "p_1111->g_360.sa", print_hash_value);
    transparent_crc(p_1111->g_360.sb, "p_1111->g_360.sb", print_hash_value);
    transparent_crc(p_1111->g_360.sc, "p_1111->g_360.sc", print_hash_value);
    transparent_crc(p_1111->g_360.sd, "p_1111->g_360.sd", print_hash_value);
    transparent_crc(p_1111->g_360.se, "p_1111->g_360.se", print_hash_value);
    transparent_crc(p_1111->g_360.sf, "p_1111->g_360.sf", print_hash_value);
    transparent_crc(p_1111->g_364.s0, "p_1111->g_364.s0", print_hash_value);
    transparent_crc(p_1111->g_364.s1, "p_1111->g_364.s1", print_hash_value);
    transparent_crc(p_1111->g_364.s2, "p_1111->g_364.s2", print_hash_value);
    transparent_crc(p_1111->g_364.s3, "p_1111->g_364.s3", print_hash_value);
    transparent_crc(p_1111->g_364.s4, "p_1111->g_364.s4", print_hash_value);
    transparent_crc(p_1111->g_364.s5, "p_1111->g_364.s5", print_hash_value);
    transparent_crc(p_1111->g_364.s6, "p_1111->g_364.s6", print_hash_value);
    transparent_crc(p_1111->g_364.s7, "p_1111->g_364.s7", print_hash_value);
    transparent_crc(p_1111->g_367.s0, "p_1111->g_367.s0", print_hash_value);
    transparent_crc(p_1111->g_367.s1, "p_1111->g_367.s1", print_hash_value);
    transparent_crc(p_1111->g_367.s2, "p_1111->g_367.s2", print_hash_value);
    transparent_crc(p_1111->g_367.s3, "p_1111->g_367.s3", print_hash_value);
    transparent_crc(p_1111->g_367.s4, "p_1111->g_367.s4", print_hash_value);
    transparent_crc(p_1111->g_367.s5, "p_1111->g_367.s5", print_hash_value);
    transparent_crc(p_1111->g_367.s6, "p_1111->g_367.s6", print_hash_value);
    transparent_crc(p_1111->g_367.s7, "p_1111->g_367.s7", print_hash_value);
    transparent_crc(p_1111->g_367.s8, "p_1111->g_367.s8", print_hash_value);
    transparent_crc(p_1111->g_367.s9, "p_1111->g_367.s9", print_hash_value);
    transparent_crc(p_1111->g_367.sa, "p_1111->g_367.sa", print_hash_value);
    transparent_crc(p_1111->g_367.sb, "p_1111->g_367.sb", print_hash_value);
    transparent_crc(p_1111->g_367.sc, "p_1111->g_367.sc", print_hash_value);
    transparent_crc(p_1111->g_367.sd, "p_1111->g_367.sd", print_hash_value);
    transparent_crc(p_1111->g_367.se, "p_1111->g_367.se", print_hash_value);
    transparent_crc(p_1111->g_367.sf, "p_1111->g_367.sf", print_hash_value);
    transparent_crc(p_1111->g_368.x, "p_1111->g_368.x", print_hash_value);
    transparent_crc(p_1111->g_368.y, "p_1111->g_368.y", print_hash_value);
    transparent_crc(p_1111->g_374.x, "p_1111->g_374.x", print_hash_value);
    transparent_crc(p_1111->g_374.y, "p_1111->g_374.y", print_hash_value);
    transparent_crc(p_1111->g_374.z, "p_1111->g_374.z", print_hash_value);
    transparent_crc(p_1111->g_374.w, "p_1111->g_374.w", print_hash_value);
    transparent_crc(p_1111->g_375.x, "p_1111->g_375.x", print_hash_value);
    transparent_crc(p_1111->g_375.y, "p_1111->g_375.y", print_hash_value);
    transparent_crc(p_1111->g_377.x, "p_1111->g_377.x", print_hash_value);
    transparent_crc(p_1111->g_377.y, "p_1111->g_377.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1111->g_389[i], "p_1111->g_389[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1111->g_391[i][j][k], "p_1111->g_391[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1111->g_412.s0, "p_1111->g_412.s0", print_hash_value);
    transparent_crc(p_1111->g_412.s1, "p_1111->g_412.s1", print_hash_value);
    transparent_crc(p_1111->g_412.s2, "p_1111->g_412.s2", print_hash_value);
    transparent_crc(p_1111->g_412.s3, "p_1111->g_412.s3", print_hash_value);
    transparent_crc(p_1111->g_412.s4, "p_1111->g_412.s4", print_hash_value);
    transparent_crc(p_1111->g_412.s5, "p_1111->g_412.s5", print_hash_value);
    transparent_crc(p_1111->g_412.s6, "p_1111->g_412.s6", print_hash_value);
    transparent_crc(p_1111->g_412.s7, "p_1111->g_412.s7", print_hash_value);
    transparent_crc(p_1111->g_412.s8, "p_1111->g_412.s8", print_hash_value);
    transparent_crc(p_1111->g_412.s9, "p_1111->g_412.s9", print_hash_value);
    transparent_crc(p_1111->g_412.sa, "p_1111->g_412.sa", print_hash_value);
    transparent_crc(p_1111->g_412.sb, "p_1111->g_412.sb", print_hash_value);
    transparent_crc(p_1111->g_412.sc, "p_1111->g_412.sc", print_hash_value);
    transparent_crc(p_1111->g_412.sd, "p_1111->g_412.sd", print_hash_value);
    transparent_crc(p_1111->g_412.se, "p_1111->g_412.se", print_hash_value);
    transparent_crc(p_1111->g_412.sf, "p_1111->g_412.sf", print_hash_value);
    transparent_crc(p_1111->g_508, "p_1111->g_508", print_hash_value);
    transparent_crc(p_1111->g_511, "p_1111->g_511", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1111->g_540[i], "p_1111->g_540[i]", print_hash_value);

    }
    transparent_crc(p_1111->g_547.x, "p_1111->g_547.x", print_hash_value);
    transparent_crc(p_1111->g_547.y, "p_1111->g_547.y", print_hash_value);
    transparent_crc(p_1111->g_549.s0, "p_1111->g_549.s0", print_hash_value);
    transparent_crc(p_1111->g_549.s1, "p_1111->g_549.s1", print_hash_value);
    transparent_crc(p_1111->g_549.s2, "p_1111->g_549.s2", print_hash_value);
    transparent_crc(p_1111->g_549.s3, "p_1111->g_549.s3", print_hash_value);
    transparent_crc(p_1111->g_549.s4, "p_1111->g_549.s4", print_hash_value);
    transparent_crc(p_1111->g_549.s5, "p_1111->g_549.s5", print_hash_value);
    transparent_crc(p_1111->g_549.s6, "p_1111->g_549.s6", print_hash_value);
    transparent_crc(p_1111->g_549.s7, "p_1111->g_549.s7", print_hash_value);
    transparent_crc(p_1111->g_549.s8, "p_1111->g_549.s8", print_hash_value);
    transparent_crc(p_1111->g_549.s9, "p_1111->g_549.s9", print_hash_value);
    transparent_crc(p_1111->g_549.sa, "p_1111->g_549.sa", print_hash_value);
    transparent_crc(p_1111->g_549.sb, "p_1111->g_549.sb", print_hash_value);
    transparent_crc(p_1111->g_549.sc, "p_1111->g_549.sc", print_hash_value);
    transparent_crc(p_1111->g_549.sd, "p_1111->g_549.sd", print_hash_value);
    transparent_crc(p_1111->g_549.se, "p_1111->g_549.se", print_hash_value);
    transparent_crc(p_1111->g_549.sf, "p_1111->g_549.sf", print_hash_value);
    transparent_crc(p_1111->g_550.x, "p_1111->g_550.x", print_hash_value);
    transparent_crc(p_1111->g_550.y, "p_1111->g_550.y", print_hash_value);
    transparent_crc(p_1111->g_550.z, "p_1111->g_550.z", print_hash_value);
    transparent_crc(p_1111->g_550.w, "p_1111->g_550.w", print_hash_value);
    transparent_crc(p_1111->g_558.s0, "p_1111->g_558.s0", print_hash_value);
    transparent_crc(p_1111->g_558.s1, "p_1111->g_558.s1", print_hash_value);
    transparent_crc(p_1111->g_558.s2, "p_1111->g_558.s2", print_hash_value);
    transparent_crc(p_1111->g_558.s3, "p_1111->g_558.s3", print_hash_value);
    transparent_crc(p_1111->g_558.s4, "p_1111->g_558.s4", print_hash_value);
    transparent_crc(p_1111->g_558.s5, "p_1111->g_558.s5", print_hash_value);
    transparent_crc(p_1111->g_558.s6, "p_1111->g_558.s6", print_hash_value);
    transparent_crc(p_1111->g_558.s7, "p_1111->g_558.s7", print_hash_value);
    transparent_crc(p_1111->g_559.s0, "p_1111->g_559.s0", print_hash_value);
    transparent_crc(p_1111->g_559.s1, "p_1111->g_559.s1", print_hash_value);
    transparent_crc(p_1111->g_559.s2, "p_1111->g_559.s2", print_hash_value);
    transparent_crc(p_1111->g_559.s3, "p_1111->g_559.s3", print_hash_value);
    transparent_crc(p_1111->g_559.s4, "p_1111->g_559.s4", print_hash_value);
    transparent_crc(p_1111->g_559.s5, "p_1111->g_559.s5", print_hash_value);
    transparent_crc(p_1111->g_559.s6, "p_1111->g_559.s6", print_hash_value);
    transparent_crc(p_1111->g_559.s7, "p_1111->g_559.s7", print_hash_value);
    transparent_crc(p_1111->g_562.x, "p_1111->g_562.x", print_hash_value);
    transparent_crc(p_1111->g_562.y, "p_1111->g_562.y", print_hash_value);
    transparent_crc(p_1111->g_563.s0, "p_1111->g_563.s0", print_hash_value);
    transparent_crc(p_1111->g_563.s1, "p_1111->g_563.s1", print_hash_value);
    transparent_crc(p_1111->g_563.s2, "p_1111->g_563.s2", print_hash_value);
    transparent_crc(p_1111->g_563.s3, "p_1111->g_563.s3", print_hash_value);
    transparent_crc(p_1111->g_563.s4, "p_1111->g_563.s4", print_hash_value);
    transparent_crc(p_1111->g_563.s5, "p_1111->g_563.s5", print_hash_value);
    transparent_crc(p_1111->g_563.s6, "p_1111->g_563.s6", print_hash_value);
    transparent_crc(p_1111->g_563.s7, "p_1111->g_563.s7", print_hash_value);
    transparent_crc(p_1111->g_564, "p_1111->g_564", print_hash_value);
    transparent_crc(p_1111->g_570, "p_1111->g_570", print_hash_value);
    transparent_crc(p_1111->g_582.x, "p_1111->g_582.x", print_hash_value);
    transparent_crc(p_1111->g_582.y, "p_1111->g_582.y", print_hash_value);
    transparent_crc(p_1111->g_589.s0, "p_1111->g_589.s0", print_hash_value);
    transparent_crc(p_1111->g_589.s1, "p_1111->g_589.s1", print_hash_value);
    transparent_crc(p_1111->g_589.s2, "p_1111->g_589.s2", print_hash_value);
    transparent_crc(p_1111->g_589.s3, "p_1111->g_589.s3", print_hash_value);
    transparent_crc(p_1111->g_589.s4, "p_1111->g_589.s4", print_hash_value);
    transparent_crc(p_1111->g_589.s5, "p_1111->g_589.s5", print_hash_value);
    transparent_crc(p_1111->g_589.s6, "p_1111->g_589.s6", print_hash_value);
    transparent_crc(p_1111->g_589.s7, "p_1111->g_589.s7", print_hash_value);
    transparent_crc(p_1111->g_589.s8, "p_1111->g_589.s8", print_hash_value);
    transparent_crc(p_1111->g_589.s9, "p_1111->g_589.s9", print_hash_value);
    transparent_crc(p_1111->g_589.sa, "p_1111->g_589.sa", print_hash_value);
    transparent_crc(p_1111->g_589.sb, "p_1111->g_589.sb", print_hash_value);
    transparent_crc(p_1111->g_589.sc, "p_1111->g_589.sc", print_hash_value);
    transparent_crc(p_1111->g_589.sd, "p_1111->g_589.sd", print_hash_value);
    transparent_crc(p_1111->g_589.se, "p_1111->g_589.se", print_hash_value);
    transparent_crc(p_1111->g_589.sf, "p_1111->g_589.sf", print_hash_value);
    transparent_crc(p_1111->g_598.x, "p_1111->g_598.x", print_hash_value);
    transparent_crc(p_1111->g_598.y, "p_1111->g_598.y", print_hash_value);
    transparent_crc(p_1111->g_598.z, "p_1111->g_598.z", print_hash_value);
    transparent_crc(p_1111->g_598.w, "p_1111->g_598.w", print_hash_value);
    transparent_crc(p_1111->g_619.x, "p_1111->g_619.x", print_hash_value);
    transparent_crc(p_1111->g_619.y, "p_1111->g_619.y", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1111->g_622[i], "p_1111->g_622[i]", print_hash_value);

    }
    transparent_crc(p_1111->g_624.x, "p_1111->g_624.x", print_hash_value);
    transparent_crc(p_1111->g_624.y, "p_1111->g_624.y", print_hash_value);
    transparent_crc(p_1111->g_638.s0, "p_1111->g_638.s0", print_hash_value);
    transparent_crc(p_1111->g_638.s1, "p_1111->g_638.s1", print_hash_value);
    transparent_crc(p_1111->g_638.s2, "p_1111->g_638.s2", print_hash_value);
    transparent_crc(p_1111->g_638.s3, "p_1111->g_638.s3", print_hash_value);
    transparent_crc(p_1111->g_638.s4, "p_1111->g_638.s4", print_hash_value);
    transparent_crc(p_1111->g_638.s5, "p_1111->g_638.s5", print_hash_value);
    transparent_crc(p_1111->g_638.s6, "p_1111->g_638.s6", print_hash_value);
    transparent_crc(p_1111->g_638.s7, "p_1111->g_638.s7", print_hash_value);
    transparent_crc(p_1111->g_638.s8, "p_1111->g_638.s8", print_hash_value);
    transparent_crc(p_1111->g_638.s9, "p_1111->g_638.s9", print_hash_value);
    transparent_crc(p_1111->g_638.sa, "p_1111->g_638.sa", print_hash_value);
    transparent_crc(p_1111->g_638.sb, "p_1111->g_638.sb", print_hash_value);
    transparent_crc(p_1111->g_638.sc, "p_1111->g_638.sc", print_hash_value);
    transparent_crc(p_1111->g_638.sd, "p_1111->g_638.sd", print_hash_value);
    transparent_crc(p_1111->g_638.se, "p_1111->g_638.se", print_hash_value);
    transparent_crc(p_1111->g_638.sf, "p_1111->g_638.sf", print_hash_value);
    transparent_crc(p_1111->g_645.x, "p_1111->g_645.x", print_hash_value);
    transparent_crc(p_1111->g_645.y, "p_1111->g_645.y", print_hash_value);
    transparent_crc(p_1111->g_645.z, "p_1111->g_645.z", print_hash_value);
    transparent_crc(p_1111->g_645.w, "p_1111->g_645.w", print_hash_value);
    transparent_crc(p_1111->g_647.x, "p_1111->g_647.x", print_hash_value);
    transparent_crc(p_1111->g_647.y, "p_1111->g_647.y", print_hash_value);
    transparent_crc(p_1111->g_649.x, "p_1111->g_649.x", print_hash_value);
    transparent_crc(p_1111->g_649.y, "p_1111->g_649.y", print_hash_value);
    transparent_crc(p_1111->g_649.z, "p_1111->g_649.z", print_hash_value);
    transparent_crc(p_1111->g_649.w, "p_1111->g_649.w", print_hash_value);
    transparent_crc(p_1111->g_663.s0, "p_1111->g_663.s0", print_hash_value);
    transparent_crc(p_1111->g_663.s1, "p_1111->g_663.s1", print_hash_value);
    transparent_crc(p_1111->g_663.s2, "p_1111->g_663.s2", print_hash_value);
    transparent_crc(p_1111->g_663.s3, "p_1111->g_663.s3", print_hash_value);
    transparent_crc(p_1111->g_663.s4, "p_1111->g_663.s4", print_hash_value);
    transparent_crc(p_1111->g_663.s5, "p_1111->g_663.s5", print_hash_value);
    transparent_crc(p_1111->g_663.s6, "p_1111->g_663.s6", print_hash_value);
    transparent_crc(p_1111->g_663.s7, "p_1111->g_663.s7", print_hash_value);
    transparent_crc(p_1111->g_670.s0, "p_1111->g_670.s0", print_hash_value);
    transparent_crc(p_1111->g_670.s1, "p_1111->g_670.s1", print_hash_value);
    transparent_crc(p_1111->g_670.s2, "p_1111->g_670.s2", print_hash_value);
    transparent_crc(p_1111->g_670.s3, "p_1111->g_670.s3", print_hash_value);
    transparent_crc(p_1111->g_670.s4, "p_1111->g_670.s4", print_hash_value);
    transparent_crc(p_1111->g_670.s5, "p_1111->g_670.s5", print_hash_value);
    transparent_crc(p_1111->g_670.s6, "p_1111->g_670.s6", print_hash_value);
    transparent_crc(p_1111->g_670.s7, "p_1111->g_670.s7", print_hash_value);
    transparent_crc(p_1111->g_670.s8, "p_1111->g_670.s8", print_hash_value);
    transparent_crc(p_1111->g_670.s9, "p_1111->g_670.s9", print_hash_value);
    transparent_crc(p_1111->g_670.sa, "p_1111->g_670.sa", print_hash_value);
    transparent_crc(p_1111->g_670.sb, "p_1111->g_670.sb", print_hash_value);
    transparent_crc(p_1111->g_670.sc, "p_1111->g_670.sc", print_hash_value);
    transparent_crc(p_1111->g_670.sd, "p_1111->g_670.sd", print_hash_value);
    transparent_crc(p_1111->g_670.se, "p_1111->g_670.se", print_hash_value);
    transparent_crc(p_1111->g_670.sf, "p_1111->g_670.sf", print_hash_value);
    transparent_crc(p_1111->g_690.x, "p_1111->g_690.x", print_hash_value);
    transparent_crc(p_1111->g_690.y, "p_1111->g_690.y", print_hash_value);
    transparent_crc(p_1111->g_691.x, "p_1111->g_691.x", print_hash_value);
    transparent_crc(p_1111->g_691.y, "p_1111->g_691.y", print_hash_value);
    transparent_crc(p_1111->g_691.z, "p_1111->g_691.z", print_hash_value);
    transparent_crc(p_1111->g_691.w, "p_1111->g_691.w", print_hash_value);
    transparent_crc(p_1111->g_693.s0, "p_1111->g_693.s0", print_hash_value);
    transparent_crc(p_1111->g_693.s1, "p_1111->g_693.s1", print_hash_value);
    transparent_crc(p_1111->g_693.s2, "p_1111->g_693.s2", print_hash_value);
    transparent_crc(p_1111->g_693.s3, "p_1111->g_693.s3", print_hash_value);
    transparent_crc(p_1111->g_693.s4, "p_1111->g_693.s4", print_hash_value);
    transparent_crc(p_1111->g_693.s5, "p_1111->g_693.s5", print_hash_value);
    transparent_crc(p_1111->g_693.s6, "p_1111->g_693.s6", print_hash_value);
    transparent_crc(p_1111->g_693.s7, "p_1111->g_693.s7", print_hash_value);
    transparent_crc(p_1111->g_709.s0, "p_1111->g_709.s0", print_hash_value);
    transparent_crc(p_1111->g_709.s1, "p_1111->g_709.s1", print_hash_value);
    transparent_crc(p_1111->g_709.s2, "p_1111->g_709.s2", print_hash_value);
    transparent_crc(p_1111->g_709.s3, "p_1111->g_709.s3", print_hash_value);
    transparent_crc(p_1111->g_709.s4, "p_1111->g_709.s4", print_hash_value);
    transparent_crc(p_1111->g_709.s5, "p_1111->g_709.s5", print_hash_value);
    transparent_crc(p_1111->g_709.s6, "p_1111->g_709.s6", print_hash_value);
    transparent_crc(p_1111->g_709.s7, "p_1111->g_709.s7", print_hash_value);
    transparent_crc(p_1111->g_709.s8, "p_1111->g_709.s8", print_hash_value);
    transparent_crc(p_1111->g_709.s9, "p_1111->g_709.s9", print_hash_value);
    transparent_crc(p_1111->g_709.sa, "p_1111->g_709.sa", print_hash_value);
    transparent_crc(p_1111->g_709.sb, "p_1111->g_709.sb", print_hash_value);
    transparent_crc(p_1111->g_709.sc, "p_1111->g_709.sc", print_hash_value);
    transparent_crc(p_1111->g_709.sd, "p_1111->g_709.sd", print_hash_value);
    transparent_crc(p_1111->g_709.se, "p_1111->g_709.se", print_hash_value);
    transparent_crc(p_1111->g_709.sf, "p_1111->g_709.sf", print_hash_value);
    transparent_crc(p_1111->g_723, "p_1111->g_723", print_hash_value);
    transparent_crc(p_1111->g_752.x, "p_1111->g_752.x", print_hash_value);
    transparent_crc(p_1111->g_752.y, "p_1111->g_752.y", print_hash_value);
    transparent_crc(p_1111->g_756.x, "p_1111->g_756.x", print_hash_value);
    transparent_crc(p_1111->g_756.y, "p_1111->g_756.y", print_hash_value);
    transparent_crc(p_1111->g_774.x, "p_1111->g_774.x", print_hash_value);
    transparent_crc(p_1111->g_774.y, "p_1111->g_774.y", print_hash_value);
    transparent_crc(p_1111->g_809, "p_1111->g_809", print_hash_value);
    transparent_crc(p_1111->g_827.s0, "p_1111->g_827.s0", print_hash_value);
    transparent_crc(p_1111->g_827.s1, "p_1111->g_827.s1", print_hash_value);
    transparent_crc(p_1111->g_827.s2, "p_1111->g_827.s2", print_hash_value);
    transparent_crc(p_1111->g_827.s3, "p_1111->g_827.s3", print_hash_value);
    transparent_crc(p_1111->g_827.s4, "p_1111->g_827.s4", print_hash_value);
    transparent_crc(p_1111->g_827.s5, "p_1111->g_827.s5", print_hash_value);
    transparent_crc(p_1111->g_827.s6, "p_1111->g_827.s6", print_hash_value);
    transparent_crc(p_1111->g_827.s7, "p_1111->g_827.s7", print_hash_value);
    transparent_crc(p_1111->g_829.s0, "p_1111->g_829.s0", print_hash_value);
    transparent_crc(p_1111->g_829.s1, "p_1111->g_829.s1", print_hash_value);
    transparent_crc(p_1111->g_829.s2, "p_1111->g_829.s2", print_hash_value);
    transparent_crc(p_1111->g_829.s3, "p_1111->g_829.s3", print_hash_value);
    transparent_crc(p_1111->g_829.s4, "p_1111->g_829.s4", print_hash_value);
    transparent_crc(p_1111->g_829.s5, "p_1111->g_829.s5", print_hash_value);
    transparent_crc(p_1111->g_829.s6, "p_1111->g_829.s6", print_hash_value);
    transparent_crc(p_1111->g_829.s7, "p_1111->g_829.s7", print_hash_value);
    transparent_crc(p_1111->g_829.s8, "p_1111->g_829.s8", print_hash_value);
    transparent_crc(p_1111->g_829.s9, "p_1111->g_829.s9", print_hash_value);
    transparent_crc(p_1111->g_829.sa, "p_1111->g_829.sa", print_hash_value);
    transparent_crc(p_1111->g_829.sb, "p_1111->g_829.sb", print_hash_value);
    transparent_crc(p_1111->g_829.sc, "p_1111->g_829.sc", print_hash_value);
    transparent_crc(p_1111->g_829.sd, "p_1111->g_829.sd", print_hash_value);
    transparent_crc(p_1111->g_829.se, "p_1111->g_829.se", print_hash_value);
    transparent_crc(p_1111->g_829.sf, "p_1111->g_829.sf", print_hash_value);
    transparent_crc(p_1111->g_851, "p_1111->g_851", print_hash_value);
    transparent_crc(p_1111->g_870.x, "p_1111->g_870.x", print_hash_value);
    transparent_crc(p_1111->g_870.y, "p_1111->g_870.y", print_hash_value);
    transparent_crc(p_1111->g_870.z, "p_1111->g_870.z", print_hash_value);
    transparent_crc(p_1111->g_870.w, "p_1111->g_870.w", print_hash_value);
    transparent_crc(p_1111->g_914.s0, "p_1111->g_914.s0", print_hash_value);
    transparent_crc(p_1111->g_914.s1, "p_1111->g_914.s1", print_hash_value);
    transparent_crc(p_1111->g_914.s2, "p_1111->g_914.s2", print_hash_value);
    transparent_crc(p_1111->g_914.s3, "p_1111->g_914.s3", print_hash_value);
    transparent_crc(p_1111->g_914.s4, "p_1111->g_914.s4", print_hash_value);
    transparent_crc(p_1111->g_914.s5, "p_1111->g_914.s5", print_hash_value);
    transparent_crc(p_1111->g_914.s6, "p_1111->g_914.s6", print_hash_value);
    transparent_crc(p_1111->g_914.s7, "p_1111->g_914.s7", print_hash_value);
    transparent_crc(p_1111->g_914.s8, "p_1111->g_914.s8", print_hash_value);
    transparent_crc(p_1111->g_914.s9, "p_1111->g_914.s9", print_hash_value);
    transparent_crc(p_1111->g_914.sa, "p_1111->g_914.sa", print_hash_value);
    transparent_crc(p_1111->g_914.sb, "p_1111->g_914.sb", print_hash_value);
    transparent_crc(p_1111->g_914.sc, "p_1111->g_914.sc", print_hash_value);
    transparent_crc(p_1111->g_914.sd, "p_1111->g_914.sd", print_hash_value);
    transparent_crc(p_1111->g_914.se, "p_1111->g_914.se", print_hash_value);
    transparent_crc(p_1111->g_914.sf, "p_1111->g_914.sf", print_hash_value);
    transparent_crc(p_1111->g_926.s0, "p_1111->g_926.s0", print_hash_value);
    transparent_crc(p_1111->g_926.s1, "p_1111->g_926.s1", print_hash_value);
    transparent_crc(p_1111->g_926.s2, "p_1111->g_926.s2", print_hash_value);
    transparent_crc(p_1111->g_926.s3, "p_1111->g_926.s3", print_hash_value);
    transparent_crc(p_1111->g_926.s4, "p_1111->g_926.s4", print_hash_value);
    transparent_crc(p_1111->g_926.s5, "p_1111->g_926.s5", print_hash_value);
    transparent_crc(p_1111->g_926.s6, "p_1111->g_926.s6", print_hash_value);
    transparent_crc(p_1111->g_926.s7, "p_1111->g_926.s7", print_hash_value);
    transparent_crc(p_1111->g_943.s0, "p_1111->g_943.s0", print_hash_value);
    transparent_crc(p_1111->g_943.s1, "p_1111->g_943.s1", print_hash_value);
    transparent_crc(p_1111->g_943.s2, "p_1111->g_943.s2", print_hash_value);
    transparent_crc(p_1111->g_943.s3, "p_1111->g_943.s3", print_hash_value);
    transparent_crc(p_1111->g_943.s4, "p_1111->g_943.s4", print_hash_value);
    transparent_crc(p_1111->g_943.s5, "p_1111->g_943.s5", print_hash_value);
    transparent_crc(p_1111->g_943.s6, "p_1111->g_943.s6", print_hash_value);
    transparent_crc(p_1111->g_943.s7, "p_1111->g_943.s7", print_hash_value);
    transparent_crc(p_1111->g_943.s8, "p_1111->g_943.s8", print_hash_value);
    transparent_crc(p_1111->g_943.s9, "p_1111->g_943.s9", print_hash_value);
    transparent_crc(p_1111->g_943.sa, "p_1111->g_943.sa", print_hash_value);
    transparent_crc(p_1111->g_943.sb, "p_1111->g_943.sb", print_hash_value);
    transparent_crc(p_1111->g_943.sc, "p_1111->g_943.sc", print_hash_value);
    transparent_crc(p_1111->g_943.sd, "p_1111->g_943.sd", print_hash_value);
    transparent_crc(p_1111->g_943.se, "p_1111->g_943.se", print_hash_value);
    transparent_crc(p_1111->g_943.sf, "p_1111->g_943.sf", print_hash_value);
    transparent_crc(p_1111->g_950.x, "p_1111->g_950.x", print_hash_value);
    transparent_crc(p_1111->g_950.y, "p_1111->g_950.y", print_hash_value);
    transparent_crc(p_1111->g_950.z, "p_1111->g_950.z", print_hash_value);
    transparent_crc(p_1111->g_950.w, "p_1111->g_950.w", print_hash_value);
    transparent_crc(p_1111->g_989.s0, "p_1111->g_989.s0", print_hash_value);
    transparent_crc(p_1111->g_989.s1, "p_1111->g_989.s1", print_hash_value);
    transparent_crc(p_1111->g_989.s2, "p_1111->g_989.s2", print_hash_value);
    transparent_crc(p_1111->g_989.s3, "p_1111->g_989.s3", print_hash_value);
    transparent_crc(p_1111->g_989.s4, "p_1111->g_989.s4", print_hash_value);
    transparent_crc(p_1111->g_989.s5, "p_1111->g_989.s5", print_hash_value);
    transparent_crc(p_1111->g_989.s6, "p_1111->g_989.s6", print_hash_value);
    transparent_crc(p_1111->g_989.s7, "p_1111->g_989.s7", print_hash_value);
    transparent_crc(p_1111->g_990.x, "p_1111->g_990.x", print_hash_value);
    transparent_crc(p_1111->g_990.y, "p_1111->g_990.y", print_hash_value);
    transparent_crc(p_1111->g_990.z, "p_1111->g_990.z", print_hash_value);
    transparent_crc(p_1111->g_990.w, "p_1111->g_990.w", print_hash_value);
    transparent_crc(p_1111->g_993.s0, "p_1111->g_993.s0", print_hash_value);
    transparent_crc(p_1111->g_993.s1, "p_1111->g_993.s1", print_hash_value);
    transparent_crc(p_1111->g_993.s2, "p_1111->g_993.s2", print_hash_value);
    transparent_crc(p_1111->g_993.s3, "p_1111->g_993.s3", print_hash_value);
    transparent_crc(p_1111->g_993.s4, "p_1111->g_993.s4", print_hash_value);
    transparent_crc(p_1111->g_993.s5, "p_1111->g_993.s5", print_hash_value);
    transparent_crc(p_1111->g_993.s6, "p_1111->g_993.s6", print_hash_value);
    transparent_crc(p_1111->g_993.s7, "p_1111->g_993.s7", print_hash_value);
    transparent_crc(p_1111->g_1004.s0, "p_1111->g_1004.s0", print_hash_value);
    transparent_crc(p_1111->g_1004.s1, "p_1111->g_1004.s1", print_hash_value);
    transparent_crc(p_1111->g_1004.s2, "p_1111->g_1004.s2", print_hash_value);
    transparent_crc(p_1111->g_1004.s3, "p_1111->g_1004.s3", print_hash_value);
    transparent_crc(p_1111->g_1004.s4, "p_1111->g_1004.s4", print_hash_value);
    transparent_crc(p_1111->g_1004.s5, "p_1111->g_1004.s5", print_hash_value);
    transparent_crc(p_1111->g_1004.s6, "p_1111->g_1004.s6", print_hash_value);
    transparent_crc(p_1111->g_1004.s7, "p_1111->g_1004.s7", print_hash_value);
    transparent_crc(p_1111->g_1010, "p_1111->g_1010", print_hash_value);
    transparent_crc(p_1111->g_1012, "p_1111->g_1012", print_hash_value);
    transparent_crc(p_1111->g_1024.s0, "p_1111->g_1024.s0", print_hash_value);
    transparent_crc(p_1111->g_1024.s1, "p_1111->g_1024.s1", print_hash_value);
    transparent_crc(p_1111->g_1024.s2, "p_1111->g_1024.s2", print_hash_value);
    transparent_crc(p_1111->g_1024.s3, "p_1111->g_1024.s3", print_hash_value);
    transparent_crc(p_1111->g_1024.s4, "p_1111->g_1024.s4", print_hash_value);
    transparent_crc(p_1111->g_1024.s5, "p_1111->g_1024.s5", print_hash_value);
    transparent_crc(p_1111->g_1024.s6, "p_1111->g_1024.s6", print_hash_value);
    transparent_crc(p_1111->g_1024.s7, "p_1111->g_1024.s7", print_hash_value);
    transparent_crc(p_1111->g_1026.s0, "p_1111->g_1026.s0", print_hash_value);
    transparent_crc(p_1111->g_1026.s1, "p_1111->g_1026.s1", print_hash_value);
    transparent_crc(p_1111->g_1026.s2, "p_1111->g_1026.s2", print_hash_value);
    transparent_crc(p_1111->g_1026.s3, "p_1111->g_1026.s3", print_hash_value);
    transparent_crc(p_1111->g_1026.s4, "p_1111->g_1026.s4", print_hash_value);
    transparent_crc(p_1111->g_1026.s5, "p_1111->g_1026.s5", print_hash_value);
    transparent_crc(p_1111->g_1026.s6, "p_1111->g_1026.s6", print_hash_value);
    transparent_crc(p_1111->g_1026.s7, "p_1111->g_1026.s7", print_hash_value);
    transparent_crc(p_1111->g_1026.s8, "p_1111->g_1026.s8", print_hash_value);
    transparent_crc(p_1111->g_1026.s9, "p_1111->g_1026.s9", print_hash_value);
    transparent_crc(p_1111->g_1026.sa, "p_1111->g_1026.sa", print_hash_value);
    transparent_crc(p_1111->g_1026.sb, "p_1111->g_1026.sb", print_hash_value);
    transparent_crc(p_1111->g_1026.sc, "p_1111->g_1026.sc", print_hash_value);
    transparent_crc(p_1111->g_1026.sd, "p_1111->g_1026.sd", print_hash_value);
    transparent_crc(p_1111->g_1026.se, "p_1111->g_1026.se", print_hash_value);
    transparent_crc(p_1111->g_1026.sf, "p_1111->g_1026.sf", print_hash_value);
    transparent_crc(p_1111->g_1069.s0, "p_1111->g_1069.s0", print_hash_value);
    transparent_crc(p_1111->g_1069.s1, "p_1111->g_1069.s1", print_hash_value);
    transparent_crc(p_1111->g_1069.s2, "p_1111->g_1069.s2", print_hash_value);
    transparent_crc(p_1111->g_1069.s3, "p_1111->g_1069.s3", print_hash_value);
    transparent_crc(p_1111->g_1069.s4, "p_1111->g_1069.s4", print_hash_value);
    transparent_crc(p_1111->g_1069.s5, "p_1111->g_1069.s5", print_hash_value);
    transparent_crc(p_1111->g_1069.s6, "p_1111->g_1069.s6", print_hash_value);
    transparent_crc(p_1111->g_1069.s7, "p_1111->g_1069.s7", print_hash_value);
    transparent_crc(p_1111->g_1076.s0, "p_1111->g_1076.s0", print_hash_value);
    transparent_crc(p_1111->g_1076.s1, "p_1111->g_1076.s1", print_hash_value);
    transparent_crc(p_1111->g_1076.s2, "p_1111->g_1076.s2", print_hash_value);
    transparent_crc(p_1111->g_1076.s3, "p_1111->g_1076.s3", print_hash_value);
    transparent_crc(p_1111->g_1076.s4, "p_1111->g_1076.s4", print_hash_value);
    transparent_crc(p_1111->g_1076.s5, "p_1111->g_1076.s5", print_hash_value);
    transparent_crc(p_1111->g_1076.s6, "p_1111->g_1076.s6", print_hash_value);
    transparent_crc(p_1111->g_1076.s7, "p_1111->g_1076.s7", print_hash_value);
    transparent_crc(p_1111->g_1076.s8, "p_1111->g_1076.s8", print_hash_value);
    transparent_crc(p_1111->g_1076.s9, "p_1111->g_1076.s9", print_hash_value);
    transparent_crc(p_1111->g_1076.sa, "p_1111->g_1076.sa", print_hash_value);
    transparent_crc(p_1111->g_1076.sb, "p_1111->g_1076.sb", print_hash_value);
    transparent_crc(p_1111->g_1076.sc, "p_1111->g_1076.sc", print_hash_value);
    transparent_crc(p_1111->g_1076.sd, "p_1111->g_1076.sd", print_hash_value);
    transparent_crc(p_1111->g_1076.se, "p_1111->g_1076.se", print_hash_value);
    transparent_crc(p_1111->g_1076.sf, "p_1111->g_1076.sf", print_hash_value);
    transparent_crc(p_1111->g_1102.s0, "p_1111->g_1102.s0", print_hash_value);
    transparent_crc(p_1111->g_1102.s1, "p_1111->g_1102.s1", print_hash_value);
    transparent_crc(p_1111->g_1102.s2, "p_1111->g_1102.s2", print_hash_value);
    transparent_crc(p_1111->g_1102.s3, "p_1111->g_1102.s3", print_hash_value);
    transparent_crc(p_1111->g_1102.s4, "p_1111->g_1102.s4", print_hash_value);
    transparent_crc(p_1111->g_1102.s5, "p_1111->g_1102.s5", print_hash_value);
    transparent_crc(p_1111->g_1102.s6, "p_1111->g_1102.s6", print_hash_value);
    transparent_crc(p_1111->g_1102.s7, "p_1111->g_1102.s7", print_hash_value);
    transparent_crc(p_1111->g_1102.s8, "p_1111->g_1102.s8", print_hash_value);
    transparent_crc(p_1111->g_1102.s9, "p_1111->g_1102.s9", print_hash_value);
    transparent_crc(p_1111->g_1102.sa, "p_1111->g_1102.sa", print_hash_value);
    transparent_crc(p_1111->g_1102.sb, "p_1111->g_1102.sb", print_hash_value);
    transparent_crc(p_1111->g_1102.sc, "p_1111->g_1102.sc", print_hash_value);
    transparent_crc(p_1111->g_1102.sd, "p_1111->g_1102.sd", print_hash_value);
    transparent_crc(p_1111->g_1102.se, "p_1111->g_1102.se", print_hash_value);
    transparent_crc(p_1111->g_1102.sf, "p_1111->g_1102.sf", print_hash_value);
    transparent_crc(p_1111->g_1108, "p_1111->g_1108", print_hash_value);
    transparent_crc(p_1111->g_1110, "p_1111->g_1110", print_hash_value);
    transparent_crc(p_1111->v_collective, "p_1111->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 38; i++)
            transparent_crc(p_1111->g_special_values[i + 38 * get_linear_group_id()], "p_1111->g_special_values[i + 38 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_1111->l_comm_values[get_linear_local_id()], "p_1111->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1111->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_1111->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
