// --atomics 15 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 4,57,33 -l 2,3,3
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

__constant uint32_t permutations[10][18] = {
{1,6,16,14,0,11,9,5,4,13,17,7,15,2,8,3,12,10}, // permutation 0
{3,15,13,16,9,5,2,8,11,17,12,10,14,0,1,6,4,7}, // permutation 1
{1,17,2,7,0,5,6,4,13,3,15,11,8,12,10,9,14,16}, // permutation 2
{1,6,11,16,8,5,17,9,15,7,0,14,10,4,13,3,12,2}, // permutation 3
{13,17,5,12,7,15,14,3,6,2,1,8,4,16,0,11,10,9}, // permutation 4
{4,14,7,17,12,5,11,9,13,16,0,15,8,1,6,10,3,2}, // permutation 5
{17,9,11,3,12,5,13,2,15,16,0,4,10,8,7,1,14,6}, // permutation 6
{3,12,14,13,4,2,5,0,15,8,7,17,16,11,6,10,9,1}, // permutation 7
{5,13,6,16,14,8,0,1,9,7,3,10,15,12,17,11,4,2}, // permutation 8
{17,2,15,10,12,8,14,11,9,4,3,1,13,16,6,5,0,7} // permutation 9
};

// Seed: 1135482647

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    uint8_t g_16;
    int16_t g_36;
    uint8_t g_50;
    uint8_t *g_49[8];
    VECTOR(int8_t, 4) g_65;
    uint64_t g_67;
    int32_t g_68[1][5][1];
    int16_t g_106[9];
    int16_t *g_105[4];
    VECTOR(int16_t, 16) g_123;
    volatile VECTOR(int64_t, 4) g_124;
    VECTOR(int64_t, 2) g_125;
    VECTOR(int16_t, 2) g_135;
    uint16_t g_137;
    int32_t g_144;
    VECTOR(int32_t, 4) g_147;
    int32_t *g_153;
    int32_t ** volatile g_152;
    uint64_t g_186;
    uint64_t *g_187;
    uint64_t *g_188[9][2][1];
    volatile VECTOR(int8_t, 16) g_193;
    VECTOR(int8_t, 16) g_194;
    VECTOR(int32_t, 2) g_197;
    volatile VECTOR(int64_t, 8) g_201;
    uint32_t g_203;
    volatile VECTOR(int32_t, 2) g_212;
    volatile VECTOR(uint64_t, 4) g_213;
    VECTOR(uint64_t, 2) g_216;
    VECTOR(uint64_t, 4) g_222;
    VECTOR(uint8_t, 16) g_242;
    volatile VECTOR(int32_t, 4) g_253;
    volatile VECTOR(int32_t, 2) g_281;
    VECTOR(uint8_t, 4) g_287;
    VECTOR(uint8_t, 8) g_317;
    int8_t g_354;
    VECTOR(int16_t, 8) g_359;
    volatile VECTOR(int32_t, 8) g_364;
    volatile VECTOR(uint8_t, 2) g_375;
    int64_t g_378;
    volatile VECTOR(int16_t, 16) g_395;
    int32_t ** volatile g_397[4][6][5];
    int32_t **g_404;
    int32_t *** volatile g_417[3][9];
    int32_t ** volatile g_432;
    volatile VECTOR(int8_t, 16) g_454;
    volatile VECTOR(int16_t, 2) g_463;
    int32_t * volatile g_486;
    int32_t * volatile g_487;
    VECTOR(uint16_t, 16) g_507;
    VECTOR(uint16_t, 2) g_508;
    int32_t g_521;
    int32_t g_542;
    int32_t * volatile g_550;
    int32_t * volatile g_551;
    int32_t * volatile g_552;
    int32_t * volatile g_553;
    int32_t * volatile g_554;
    int32_t * volatile g_557;
    int32_t * volatile g_558[7][4][9];
    volatile VECTOR(uint16_t, 8) g_561;
    volatile VECTOR(uint8_t, 2) g_577;
    VECTOR(int32_t, 8) g_584;
    VECTOR(int32_t, 16) g_609;
    uint32_t g_841;
    int32_t *g_859;
    VECTOR(uint8_t, 16) g_920;
    VECTOR(int8_t, 2) g_934;
    VECTOR(int32_t, 4) g_948;
    int32_t * volatile g_949;
    VECTOR(uint64_t, 2) g_953;
    VECTOR(int8_t, 8) g_955;
    VECTOR(uint8_t, 16) g_962;
    volatile VECTOR(uint8_t, 16) g_963;
    VECTOR(uint8_t, 8) g_966;
    int32_t ** volatile g_968;
    uint64_t g_977;
    int32_t ** volatile g_981;
    VECTOR(int32_t, 8) g_982;
    VECTOR(int64_t, 4) g_999;
    volatile VECTOR(int64_t, 16) g_1004;
    int32_t ** volatile g_1016;
    int32_t * volatile g_1033;
    int32_t ** volatile g_1036;
    int32_t *g_1038[5];
    int32_t ** volatile g_1037;
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
uint64_t  func_1(struct S0 * p_1040);
int32_t  func_2(uint32_t  p_3, uint64_t  p_4, uint32_t  p_5, struct S0 * p_1040);
uint32_t  func_7(uint32_t  p_8, uint32_t  p_9, int32_t  p_10, uint8_t  p_11, uint32_t  p_12, struct S0 * p_1040);
int64_t  func_21(uint32_t  p_22, uint16_t  p_23, uint8_t * p_24, struct S0 * p_1040);
uint16_t  func_25(int32_t  p_26, struct S0 * p_1040);
int16_t  func_33(int16_t  p_34, struct S0 * p_1040);
uint16_t  func_38(uint32_t  p_39, struct S0 * p_1040);
uint32_t  func_40(uint64_t  p_41, uint32_t  p_42, uint8_t * p_43, struct S0 * p_1040);
int32_t  func_44(uint8_t * p_45, uint64_t  p_46, int16_t * p_47, int32_t  p_48, struct S0 * p_1040);
int32_t  func_51(uint16_t  p_52, int16_t * p_53, uint64_t  p_54, uint8_t * p_55, uint32_t  p_56, struct S0 * p_1040);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1040->g_16 p_1040->l_comm_values p_1040->g_comm_values p_1040->g_49 p_1040->g_50 p_1040->g_65 p_1040->g_67 p_1040->g_68 p_1040->g_36 p_1040->g_147 p_1040->g_144 p_1040->g_106 p_1040->g_152 p_1040->g_124 p_1040->g_203 p_1040->g_242 p_1040->g_123 p_1040->g_153 p_1040->g_317 p_1040->g_194 p_1040->g_354 p_1040->g_287 p_1040->g_359 p_1040->g_364 p_1040->g_375 p_1040->g_222 p_1040->g_395 p_1040->g_212 p_1040->g_197 p_1040->g_404 p_1040->g_378 p_1040->g_137 p_1040->g_432 p_1040->g_454 p_1040->g_463 p_1040->g_201 p_1040->g_213 p_1040->g_507 p_1040->g_508 p_1040->g_125 p_1040->g_216 p_1040->g_609 p_1040->g_186 p_1040->g_542 p_1040->g_841 p_1040->g_584 p_1040->g_920 p_1040->g_934 p_1040->g_193 p_1040->g_948 p_1040->g_953 p_1040->g_955 p_1040->g_187 p_1040->g_962 p_1040->g_963 p_1040->g_966 p_1040->g_968 p_1040->g_977 p_1040->g_981 p_1040->g_982 p_1040->g_999 p_1040->g_1004 p_1040->g_1016 p_1040->g_1037
 * writes: p_1040->g_16 p_1040->g_36 p_1040->g_49 p_1040->g_67 p_1040->g_68 p_1040->g_144 p_1040->g_153 p_1040->g_125 p_1040->g_203 p_1040->g_105 p_1040->g_106 p_1040->g_354 p_1040->g_378 p_1040->g_137 p_1040->g_404 p_1040->g_50 p_1040->g_222 p_1040->g_521 p_1040->g_542 p_1040->g_186 p_1040->g_841 p_1040->g_859 p_1040->g_216 p_1040->g_977 p_1040->g_1038
 */
uint64_t  func_1(struct S0 * p_1040)
{ /* block id: 4 */
    uint8_t l_6[5][9][5] = {{{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL}},{{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL}},{{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL}},{{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL}},{{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL},{0xA3L,2UL,0xCEL,0xDCL,1UL}}};
    uint8_t *l_15[1];
    int16_t *l_35 = &p_1040->g_36;
    int32_t l_1027 = (-3L);
    int32_t *l_1034 = &p_1040->g_144;
    int32_t **l_1035 = &p_1040->g_153;
    int8_t l_1039 = 7L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_15[i] = &p_1040->g_16;
    l_1027 = func_2(((l_6[2][8][4] != (func_7((((((safe_mod_func_uint32_t_u_u(((p_1040->g_16--) ^ (l_6[2][8][4] != (safe_add_func_int64_t_s_s(func_21((((p_1040->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1040->tid, 18))] == l_6[2][8][4]) & (func_25((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_1040->g_comm_values[p_1040->tid], (((safe_div_func_uint32_t_u_u(((func_33(((*l_35) = 0L), p_1040) , func_38(func_40((((l_6[2][8][4] , (func_44(p_1040->g_49[5], p_1040->g_50, &p_1040->g_36, p_1040->g_comm_values[p_1040->tid], p_1040) > (-1L))) , p_1040->g_36) | 0xDF9F9BE492C62368L), l_6[0][1][2], &p_1040->g_50, p_1040), p_1040)) & 1UL), p_1040->g_197.y)) == p_1040->g_197.y) ^ 0L))), l_6[2][8][4])), p_1040) > p_1040->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1040->tid, 18))])) && l_6[0][5][2]), p_1040->g_317.s1, &l_6[2][8][4], p_1040), p_1040->g_508.y)))), 1UL)) , p_1040->g_364.s0) >= p_1040->g_65.x) && p_1040->g_197.x) , l_6[1][8][0]), p_1040->g_508.x, l_6[2][8][4], l_6[2][8][4], p_1040->g_216.y, p_1040) == 0x0CFA137CL)) & p_1040->g_948.z), l_6[3][7][1], l_6[3][5][1], p_1040);
    if ((atomic_inc(&p_1040->g_atomic_input[15 * get_linear_group_id() + 11]) == 2))
    { /* block id: 506 */
        int32_t l_1028 = 0x22E3AEC0L;
        for (l_1028 = 0; (l_1028 == 19); ++l_1028)
        { /* block id: 509 */
            int32_t l_1031 = (-7L);
            int32_t *l_1032 = (void*)0;
            l_1031 |= (-1L);
            l_1032 = (void*)0;
        }
        unsigned int result = 0;
        result += l_1028;
        atomic_add(&p_1040->g_special_values[15 * get_linear_group_id() + 11], result);
    }
    else
    { /* block id: 513 */
        (1 + 1);
    }
    (*l_1034) |= l_6[2][8][4];
    (*p_1040->g_1037) = ((*l_1035) = &l_1027);
    return l_1039;
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_953 p_1040->g_955 p_1040->g_187 p_1040->g_186 p_1040->g_508 p_1040->g_454 p_1040->g_962 p_1040->g_963 p_1040->g_966 p_1040->g_317 p_1040->g_968 p_1040->g_16 p_1040->g_977 p_1040->g_981 p_1040->g_982 p_1040->g_153 p_1040->g_287 p_1040->g_197 p_1040->g_65 p_1040->g_999 p_1040->g_147 p_1040->g_1004 p_1040->g_144 p_1040->g_1016
 * writes: p_1040->g_153 p_1040->g_186 p_1040->g_16 p_1040->g_977 p_1040->g_144 p_1040->g_125
 */
int32_t  func_2(uint32_t  p_3, uint64_t  p_4, uint32_t  p_5, struct S0 * p_1040)
{ /* block id: 473 */
    VECTOR(int32_t, 8) l_954 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-4L)), (-4L)), (-4L), 0L, (-4L));
    VECTOR(int8_t, 4) l_956 = (VECTOR(int8_t, 4))(0x57L, (VECTOR(int8_t, 2))(0x57L, 0x00L), 0x00L);
    VECTOR(int8_t, 4) l_957 = (VECTOR(int8_t, 4))(0x44L, (VECTOR(int8_t, 2))(0x44L, 0x23L), 0x23L);
    VECTOR(int8_t, 16) l_958 = (VECTOR(int8_t, 16))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), (-9L)), (-9L)), (-9L), (-8L), (-9L), (VECTOR(int8_t, 2))((-8L), (-9L)), (VECTOR(int8_t, 2))((-8L), (-9L)), (-8L), (-9L), (-8L), (-9L));
    VECTOR(int8_t, 2) l_959 = (VECTOR(int8_t, 2))(0L, 1L);
    int32_t l_992[6][7] = {{1L,9L,1L,(-5L),9L,(-5L),1L},{1L,9L,1L,(-5L),9L,(-5L),1L},{1L,9L,1L,(-5L),9L,(-5L),1L},{1L,9L,1L,(-5L),9L,(-5L),1L},{1L,9L,1L,(-5L),9L,(-5L),1L},{1L,9L,1L,(-5L),9L,(-5L),1L}};
    int64_t l_1011 = (-3L);
    uint64_t l_1024 = 1UL;
    int i, j;
    if (((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(p_1040->g_953.xxxxyyxyxyxxyyxx)).lo)).s5, l_954.s1)) == ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 2))(p_1040->g_955.s65)).xyxxyxyy, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(l_956.yzyy)).odd, ((VECTOR(int8_t, 16))(l_957.xxwwywyzyzzwzzwx)).sc2, ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(l_958.s40)).yyyyxxxxxyxxxyxx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0L, 0x6DL)).yyyyxxxx)).s1310311234304735, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))((-1L), ((VECTOR(int8_t, 4))(l_959.xxxx)), (((*p_1040->g_187) , p_1040->g_508.y) != (p_1040->g_454.sd && ((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(0x73L, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_1040->g_962.s19cfb92f8533a220)).s67c3)), ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xB4L, 0x45L)).yyxyxxxy)))).even, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 8))(p_1040->g_963.s27907971)).s2155151273753206, ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))((~((VECTOR(uint8_t, 2))(6UL, 1UL)).even), ((VECTOR(uint8_t, 2))(0x4BL, 0UL)), 255UL)).xwzwwyxx)).s40, ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(((safe_mod_func_uint16_t_u_u(0UL, l_957.x)) , (0x2BL >= 0x7BL)), ((VECTOR(uint8_t, 4))(p_1040->g_966.s0133)), (l_959.x , p_5), ((VECTOR(uint8_t, 4))(0x3AL)), 0x69L, l_957.y, 0x4BL, 0xDAL, 9UL, 0x86L)), ((VECTOR(uint8_t, 16))(0x3EL))))).sbb))).xyyyxyyyyxyxyxxy))))).sdbd6, ((VECTOR(uint8_t, 4))(0UL))))).odd, ((VECTOR(uint8_t, 2))(1UL))))), 0x57L, 0xD2L)).s1, 0xEDL, 7UL)).z, p_1040->g_317.s7)) < GROUP_DIVERGE(1, 1)))), 0x45L, 0x76L)).s14, ((VECTOR(int8_t, 2))(0x6AL))))))).xxyx, ((VECTOR(int8_t, 4))(0x64L))))).xxwxwzwyyzzzywzw, ((VECTOR(int8_t, 16))(0x4CL)))))))))).odd, ((VECTOR(int8_t, 8))(0x75L)), ((VECTOR(int8_t, 8))((-6L)))))), ((VECTOR(int8_t, 8))((-5L)))))).s05)).xxyyyxyyxxyyyxyx, ((VECTOR(int8_t, 16))((-1L)))))), ((VECTOR(int8_t, 16))(0x24L)), ((VECTOR(int8_t, 16))(0x60L))))).s95))).xyyyxxxy, ((VECTOR(int8_t, 8))(0x0EL))))).s22, ((VECTOR(int8_t, 2))(0x78L))))).yyxy)).y))
    { /* block id: 474 */
        int32_t *l_967 = (void*)0;
        int32_t *l_980 = &p_1040->g_144;
        int32_t l_995 = 0x131BE0F4L;
        int32_t l_1008 = (-2L);
        int32_t l_1009 = (-2L);
        int32_t l_1010[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int i;
        (*p_1040->g_968) = (l_967 = l_967);
        for (p_1040->g_186 = (-10); (p_1040->g_186 != 39); p_1040->g_186 = safe_add_func_uint64_t_u_u(p_1040->g_186, 1))
        { /* block id: 479 */
            uint64_t l_986 = 0x4E19877CAC3795CEL;
            int32_t *l_1005 = &p_1040->g_144;
            int32_t *l_1006 = &l_995;
            int32_t *l_1007[7];
            uint16_t l_1012 = 65526UL;
            int i;
            for (i = 0; i < 7; i++)
                l_1007[i] = &p_1040->g_144;
            for (p_1040->g_16 = 4; (p_1040->g_16 <= 44); p_1040->g_16 = safe_add_func_int32_t_s_s(p_1040->g_16, 8))
            { /* block id: 482 */
                int32_t *l_973 = (void*)0;
                int32_t *l_974 = &p_1040->g_144;
                int32_t *l_975 = &p_1040->g_144;
                int32_t *l_976 = &p_1040->g_144;
                int64_t *l_985[2];
                int8_t *l_991[2][9][6] = {{{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1040->g_354,&p_1040->g_354,(void*)0,(void*)0,(void*)0}}};
                int32_t *l_993 = (void*)0;
                int32_t *l_994[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                VECTOR(int8_t, 8) l_998 = (VECTOR(int8_t, 8))(0x32L, (VECTOR(int8_t, 4))(0x32L, (VECTOR(int8_t, 2))(0x32L, (-3L)), (-3L)), (-3L), 0x32L, (-3L));
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_985[i] = (void*)0;
                --p_1040->g_977;
                (*p_1040->g_981) = l_980;
                l_995 |= ((p_5 <= ((*p_1040->g_153) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_1040->g_982.s0155431447634103)).sca)).odd)) || (safe_mul_func_uint16_t_u_u((((p_1040->g_125.y = p_1040->g_287.z) ^ l_986) < (p_4 != p_5)), (safe_sub_func_int16_t_s_s((p_1040->g_508.y < FAKE_DIVERGE(p_1040->group_2_offset, get_group_id(2), 10)), ((l_956.x < 1L) == ((safe_mod_func_int8_t_s_s((l_992[4][0] &= ((p_1040->g_197.x ^ p_5) , p_1040->g_65.w)), 1UL)) & FAKE_DIVERGE(p_1040->global_1_offset, get_global_id(1), 10))))))));
                (*p_1040->g_153) ^= (safe_add_func_int8_t_s_s(0x62L, ((((VECTOR(int8_t, 4))(l_998.s5255)).y | (((VECTOR(int64_t, 8))(p_1040->g_999.yyyxxxzx)).s4 & 0x74DE918F67CA4B6EL)) > (safe_sub_func_uint64_t_u_u(p_1040->g_147.y, (safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_1040->local_2_offset, get_local_id(2), 10), ((VECTOR(int64_t, 2))(p_1040->g_1004.s5d)).hi)))))));
            }
            l_1012--;
            return l_957.y;
        }
    }
    else
    { /* block id: 494 */
        int32_t *l_1015 = (void*)0;
        (*p_1040->g_1016) = l_1015;
        if (p_3)
        { /* block id: 496 */
            int32_t *l_1017 = (void*)0;
            l_1017 = l_1015;
        }
        else
        { /* block id: 498 */
            int32_t *l_1018 = (void*)0;
            int32_t *l_1019 = (void*)0;
            int32_t *l_1020 = (void*)0;
            int32_t *l_1021 = (void*)0;
            int32_t *l_1022 = &l_992[3][6];
            int32_t *l_1023 = (void*)0;
            l_1024--;
        }
        l_992[4][0] = (-5L);
    }
    return l_957.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_463 p_1040->g_508 p_1040->g_106 p_1040->g_65 p_1040->g_144 p_1040->g_609 p_1040->g_186 p_1040->g_203 p_1040->g_542 p_1040->g_507 p_1040->g_841 p_1040->g_67 p_1040->g_584 p_1040->g_153 p_1040->g_375 p_1040->g_920 p_1040->g_359 p_1040->g_197 p_1040->g_317 p_1040->g_16 p_1040->g_216 p_1040->g_934 p_1040->g_193 p_1040->g_948
 * writes: p_1040->g_354 p_1040->g_542 p_1040->g_106 p_1040->g_144 p_1040->g_186 p_1040->g_203 p_1040->g_841 p_1040->g_49 p_1040->g_859 p_1040->g_222 p_1040->g_216
 */
uint32_t  func_7(uint32_t  p_8, uint32_t  p_9, int32_t  p_10, uint8_t  p_11, uint32_t  p_12, struct S0 * p_1040)
{ /* block id: 222 */
    int8_t *l_526 = (void*)0;
    int8_t *l_527 = &p_1040->g_354;
    int32_t l_530[8][9][1] = {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}};
    uint32_t *l_537 = (void*)0;
    int32_t l_538 = (-1L);
    int32_t *l_539 = (void*)0;
    int32_t *l_540 = (void*)0;
    int32_t *l_541 = &p_1040->g_542;
    int8_t l_543 = 0x01L;
    int16_t *l_544 = &p_1040->g_106[0];
    uint64_t *l_545 = (void*)0;
    int32_t l_546 = 0x50EBF830L;
    int32_t l_547 = (-3L);
    int32_t l_548[10][9][1] = {{{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L}},{{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L}},{{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L}},{{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L}},{{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L}},{{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L}},{{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L}},{{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L}},{{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L}},{{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L},{0x1F708D66L}}};
    int32_t *l_549 = &p_1040->g_144;
    int32_t *l_555 = (void*)0;
    int32_t *l_556 = (void*)0;
    uint8_t **l_571[7] = {&p_1040->g_49[5],&p_1040->g_49[5],&p_1040->g_49[5],&p_1040->g_49[5],&p_1040->g_49[5],&p_1040->g_49[5],&p_1040->g_49[5]};
    int32_t l_610 = (-1L);
    VECTOR(int32_t, 2) l_864 = (VECTOR(int32_t, 2))((-8L), 0x4BE0B17FL);
    VECTOR(uint8_t, 16) l_911 = (VECTOR(uint8_t, 16))(0x6EL, (VECTOR(uint8_t, 4))(0x6EL, (VECTOR(uint8_t, 2))(0x6EL, 1UL), 1UL), 1UL, 0x6EL, 1UL, (VECTOR(uint8_t, 2))(0x6EL, 1UL), (VECTOR(uint8_t, 2))(0x6EL, 1UL), 0x6EL, 1UL, 0x6EL, 1UL);
    uint64_t *l_917 = (void*)0;
    VECTOR(int8_t, 8) l_935 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x60L), 0x60L), 0x60L, 7L, 0x60L);
    int i, j, k;
    l_530[6][2][0] = ((*l_549) = ((safe_sub_func_uint64_t_u_u(0x62E6124CD8415DA1L, ((safe_sub_func_uint64_t_u_u(1UL, (((*l_527) = ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(8L, 0x74L)).yxxyxyyx)).s3) && (l_548[7][4][0] &= (safe_lshift_func_uint16_t_u_u((l_530[7][8][0] == (l_546 = (((p_1040->g_463.y & 0x2FAC48821260DF5FL) , l_526) == ((safe_div_func_uint8_t_u_u(((((*l_527) = (p_1040->g_508.x , ((((l_530[7][8][0] , (safe_lshift_func_int16_t_s_u(((*l_544) &= (safe_add_func_uint8_t_u_u((((((((*l_541) = ((l_538 = FAKE_DIVERGE(p_1040->local_2_offset, get_local_id(2), 10)) , l_530[7][8][0])) , 0UL) & l_543) , p_11) || 1L) , l_530[7][8][0]), p_12))), 15))) && 0L) ^ p_8) & 1L))) | 1L) != 4UL), l_530[5][4][0])) , &l_543)))), l_547)))))) <= 0UL))) <= p_1040->g_65.x));
    for (l_538 = (-9); (l_538 == 23); l_538 = safe_add_func_uint16_t_u_u(l_538, 8))
    { /* block id: 234 */
        uint16_t l_568 = 65535UL;
        uint64_t *l_600 = (void*)0;
        int32_t l_604 = 0L;
        int32_t l_605[5][8][5] = {{{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)}},{{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)}},{{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)}},{{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)}},{{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)},{9L,(-5L),0x1BB5F90BL,0x1BB5F90BL,(-5L)}}};
        int i, j, k;
        if (((*l_549) = (((*l_549) <= ((VECTOR(uint16_t, 16))(p_1040->g_561.s6056335572276656)).s6) == 4294967293UL)))
        { /* block id: 236 */
            int32_t *l_562 = (void*)0;
            int32_t *l_563 = (void*)0;
            int32_t *l_564 = &l_548[1][3][0];
            int32_t *l_565 = &l_546;
            int32_t *l_566 = (void*)0;
            int32_t *l_567[1][2][10] = {{{&l_548[0][1][0],&l_548[3][8][0],&l_548[5][5][0],&l_548[3][8][0],&l_548[0][1][0],&l_548[0][1][0],&l_548[3][8][0],&l_548[5][5][0],&l_548[3][8][0],&l_548[0][1][0]},{&l_548[0][1][0],&l_548[3][8][0],&l_548[5][5][0],&l_548[3][8][0],&l_548[0][1][0],&l_548[0][1][0],&l_548[3][8][0],&l_548[5][5][0],&l_548[3][8][0],&l_548[0][1][0]}}};
            int i, j, k;
            (*l_549) = p_10;
            --l_568;
            l_571[3] = (void*)0;
            l_567[0][0][1] = l_562;
        }
        else
        { /* block id: 241 */
            int16_t l_585 = 0x67BFL;
            int32_t l_594 = 0L;
            uint32_t *l_597[4];
            int i;
            for (i = 0; i < 4; i++)
                l_597[i] = &p_1040->g_203;
            (*l_549) = (~(safe_unary_minus_func_int8_t_s((safe_mod_func_int64_t_s_s(((((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 2))(p_1040->g_577.yx)), ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(7UL, 5UL)), 1UL, 1UL)).odd, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(0UL, 1UL, 1UL, 1UL)).lo, (uint8_t)(safe_rshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s((l_585 = ((VECTOR(int32_t, 4))(p_1040->g_584.s6632)).w), (p_1040->g_203 = (safe_sub_func_int32_t_s_s(((p_9 < p_11) && ((safe_sub_func_int8_t_s_s(0x43L, (p_1040->g_359.s3 >= ((safe_mul_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(l_594, l_568)) != (safe_sub_func_uint64_t_u_u(p_10, (((VECTOR(uint8_t, 2))(0x1EL, 5UL)).odd && (FAKE_DIVERGE(p_1040->local_2_offset, get_local_id(2), 10) && (l_545 != &p_1040->g_378)))))) | 0x83FEL), l_594)) ^ GROUP_DIVERGE(2, 1))))) >= l_594)), 0xF4B0DE1AL))))), p_1040->g_507.s4)) && 0L), p_10))))))))), ((VECTOR(uint8_t, 2))(1UL)))))))).xyyxyxyxyyyxyyxx, ((VECTOR(uint8_t, 16))(0UL))))).s0, 0x47L)) >= l_594) <= l_594) | p_9), l_594)))));
        }
        l_556 = &l_546;
        if ((p_8 ^ (safe_add_func_int32_t_s_s(p_8, (l_600 == l_600)))))
        { /* block id: 247 */
            int32_t l_601 = 0x3B218BB1L;
            int32_t *l_602 = &l_548[7][4][0];
            int32_t *l_603[6];
            uint32_t l_606[7][3][1] = {{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_603[i] = &l_530[7][8][0];
            l_606[3][1][0]--;
            (*l_549) = (((VECTOR(int32_t, 8))(p_1040->g_609.s7b20ca7f)).s3 < (*l_549));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1040->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 18)), permutations[(safe_mod_func_uint32_t_u_u(4294967287UL, 10))][(safe_mod_func_uint32_t_u_u(p_1040->tid, 18))]));
        }
        else
        { /* block id: 253 */
            return p_10;
        }
    }
    if (l_610)
    { /* block id: 257 */
        int32_t **l_838 = &l_556;
        int32_t **l_839 = &l_556;
        int32_t l_842 = 0x5E554F48L;
        uint8_t *l_843[10][4] = {{(void*)0,&p_1040->g_50,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,&p_1040->g_50,(void*)0}};
        int16_t **l_852 = &p_1040->g_105[1];
        int32_t *l_857 = &p_1040->g_542;
        int i, j;
        if ((atomic_inc(&p_1040->l_atomic_input[14]) == 3))
        { /* block id: 259 */
            int16_t l_611 = 0x5AEDL;
            uint8_t l_612 = 0xC1L;
            VECTOR(int32_t, 16) l_613 = (VECTOR(int32_t, 16))(0x31B9D666L, (VECTOR(int32_t, 4))(0x31B9D666L, (VECTOR(int32_t, 2))(0x31B9D666L, 0x0DB4F03CL), 0x0DB4F03CL), 0x0DB4F03CL, 0x31B9D666L, 0x0DB4F03CL, (VECTOR(int32_t, 2))(0x31B9D666L, 0x0DB4F03CL), (VECTOR(int32_t, 2))(0x31B9D666L, 0x0DB4F03CL), 0x31B9D666L, 0x0DB4F03CL, 0x31B9D666L, 0x0DB4F03CL);
            int32_t l_614 = 0x09B1B9D9L;
            VECTOR(int32_t, 16) l_615 = (VECTOR(int32_t, 16))(0x3C12F5A0L, (VECTOR(int32_t, 4))(0x3C12F5A0L, (VECTOR(int32_t, 2))(0x3C12F5A0L, 8L), 8L), 8L, 0x3C12F5A0L, 8L, (VECTOR(int32_t, 2))(0x3C12F5A0L, 8L), (VECTOR(int32_t, 2))(0x3C12F5A0L, 8L), 0x3C12F5A0L, 8L, 0x3C12F5A0L, 8L);
            int32_t l_616 = (-10L);
            VECTOR(int32_t, 16) l_617 = (VECTOR(int32_t, 16))(0x2702F9E4L, (VECTOR(int32_t, 4))(0x2702F9E4L, (VECTOR(int32_t, 2))(0x2702F9E4L, 0x056B1597L), 0x056B1597L), 0x056B1597L, 0x2702F9E4L, 0x056B1597L, (VECTOR(int32_t, 2))(0x2702F9E4L, 0x056B1597L), (VECTOR(int32_t, 2))(0x2702F9E4L, 0x056B1597L), 0x2702F9E4L, 0x056B1597L, 0x2702F9E4L, 0x056B1597L);
            VECTOR(int32_t, 8) l_618 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x790AD0A9L), 0x790AD0A9L), 0x790AD0A9L, 0L, 0x790AD0A9L);
            VECTOR(int32_t, 16) l_619 = (VECTOR(int32_t, 16))(0x494E1E35L, (VECTOR(int32_t, 4))(0x494E1E35L, (VECTOR(int32_t, 2))(0x494E1E35L, (-3L)), (-3L)), (-3L), 0x494E1E35L, (-3L), (VECTOR(int32_t, 2))(0x494E1E35L, (-3L)), (VECTOR(int32_t, 2))(0x494E1E35L, (-3L)), 0x494E1E35L, (-3L), 0x494E1E35L, (-3L));
            VECTOR(int32_t, 4) l_620 = (VECTOR(int32_t, 4))(0x3B61F4B4L, (VECTOR(int32_t, 2))(0x3B61F4B4L, 7L), 7L);
            VECTOR(int32_t, 8) l_621 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x33496F9BL), 0x33496F9BL), 0x33496F9BL, 7L, 0x33496F9BL);
            uint32_t l_622 = 5UL;
            int32_t l_623 = 0x3ED48CA5L;
            uint32_t l_624 = 0UL;
            VECTOR(int32_t, 4) l_625 = (VECTOR(int32_t, 4))(0x0C9236DDL, (VECTOR(int32_t, 2))(0x0C9236DDL, 1L), 1L);
            uint16_t l_626 = 0x16EDL;
            int64_t l_627 = 0x4EE106A29A8FD873L;
            uint16_t l_628[4][4] = {{0UL,65535UL,65535UL,0UL},{0UL,65535UL,65535UL,0UL},{0UL,65535UL,65535UL,0UL},{0UL,65535UL,65535UL,0UL}};
            int32_t l_631 = 0L;
            int64_t l_632 = 0x3274E4D2EF43A240L;
            int32_t l_633 = 1L;
            int32_t l_634 = 0L;
            int16_t l_635 = 1L;
            int32_t l_636 = (-1L);
            int32_t l_637 = 0x1089561CL;
            uint32_t l_638 = 0xE801B119L;
            int32_t l_641[10][10] = {{(-10L),(-1L),(-1L),(-10L),1L,0x79D838FDL,0x79D838FDL,1L,(-10L),(-1L)},{(-10L),(-1L),(-1L),(-10L),1L,0x79D838FDL,0x79D838FDL,1L,(-10L),(-1L)},{(-10L),(-1L),(-1L),(-10L),1L,0x79D838FDL,0x79D838FDL,1L,(-10L),(-1L)},{(-10L),(-1L),(-1L),(-10L),1L,0x79D838FDL,0x79D838FDL,1L,(-10L),(-1L)},{(-10L),(-1L),(-1L),(-10L),1L,0x79D838FDL,0x79D838FDL,1L,(-10L),(-1L)},{(-10L),(-1L),(-1L),(-10L),1L,0x79D838FDL,0x79D838FDL,1L,(-10L),(-1L)},{(-10L),(-1L),(-1L),(-10L),1L,0x79D838FDL,0x79D838FDL,1L,(-10L),(-1L)},{(-10L),(-1L),(-1L),(-10L),1L,0x79D838FDL,0x79D838FDL,1L,(-10L),(-1L)},{(-10L),(-1L),(-1L),(-10L),1L,0x79D838FDL,0x79D838FDL,1L,(-10L),(-1L)},{(-10L),(-1L),(-1L),(-10L),1L,0x79D838FDL,0x79D838FDL,1L,(-10L),(-1L)}};
            int16_t l_642 = (-1L);
            VECTOR(uint16_t, 16) l_643 = (VECTOR(uint16_t, 16))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0xAFBAL), 0xAFBAL), 0xAFBAL, 65534UL, 0xAFBAL, (VECTOR(uint16_t, 2))(65534UL, 0xAFBAL), (VECTOR(uint16_t, 2))(65534UL, 0xAFBAL), 65534UL, 0xAFBAL, 65534UL, 0xAFBAL);
            uint8_t l_644 = 255UL;
            uint32_t l_645 = 0x6796673CL;
            uint16_t l_646 = 65535UL;
            int i, j;
            l_612 = l_611;
            l_626 = ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(8L, (-7L))), 6L, 0L)), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_613.sbb)).xyxy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))((l_614 = 0x5EC28F76L), (-4L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_615.sdc)))))), (-2L), l_616, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(l_617.sbab919c7)), ((VECTOR(int32_t, 4))(l_618.s4142)).xyxxyxxz))), 7L, 0x1D17AE07L)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(l_619.s2973)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_620.wzwxywxx)).s7011442737062773)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_621.s1235)), ((VECTOR(int32_t, 2))(0x5239B189L, (-7L))), 0x6C9B9335L, (-1L))).s5607433352466523))).s0c))))).yxxx)).hi, (int32_t)(l_624 = (l_623 = l_622))))).yxxxxxyyxxxxxxyx))).s67)).xxyy, ((VECTOR(int32_t, 4))(l_625.zwwy)))))))).y;
            l_628[0][2]--;
            if ((l_646 = (l_645 = (l_644 = (l_643.s5 = (l_631 , (l_642 &= ((l_638--) , l_641[9][1]))))))))
            { /* block id: 272 */
                int32_t l_647 = (-1L);
                int8_t l_648 = 0x04L;
                uint32_t l_649 = 0x142F8A2DL;
                uint8_t l_652 = 0xA1L;
                int16_t l_653 = 3L;
                l_649++;
                if (((l_652 ^= FAKE_DIVERGE(p_1040->global_0_offset, get_global_id(0), 10)) , l_653))
                { /* block id: 275 */
                    uint32_t l_654 = 4294967295UL;
                    uint32_t l_665 = 1UL;
                    if (l_654)
                    { /* block id: 276 */
                        uint8_t l_655 = 0x6CL;
                        int32_t l_658 = 0x2D95C8C3L;
                        ++l_655;
                        l_641[0][5] ^= l_658;
                    }
                    else
                    { /* block id: 279 */
                        uint64_t l_659[2][5] = {{18446744073709551608UL,0xACCBD1195A47A98BL,18446744073709551608UL,18446744073709551608UL,0xACCBD1195A47A98BL},{18446744073709551608UL,0xACCBD1195A47A98BL,18446744073709551608UL,18446744073709551608UL,0xACCBD1195A47A98BL}};
                        int32_t l_663 = 0x0319F31CL;
                        int32_t *l_662 = &l_663;
                        int32_t *l_664 = (void*)0;
                        int i, j;
                        l_659[1][1]--;
                        l_664 = l_662;
                    }
                    l_620.y ^= l_665;
                    for (l_654 = 0; (l_654 >= 52); l_654 = safe_add_func_int16_t_s_s(l_654, 3))
                    { /* block id: 286 */
                        int32_t *l_668 = (void*)0;
                        int32_t l_670 = (-5L);
                        int32_t *l_669 = &l_670;
                        uint32_t l_671 = 4294967295UL;
                        l_669 = l_668;
                        l_625.w = (l_620.z |= 1L);
                        l_613.sf = l_671;
                    }
                }
                else
                { /* block id: 292 */
                    int32_t l_672[4][7] = {{(-8L),1L,0x79A18431L,0x77D10368L,1L,0x77D10368L,0x79A18431L},{(-8L),1L,0x79A18431L,0x77D10368L,1L,0x77D10368L,0x79A18431L},{(-8L),1L,0x79A18431L,0x77D10368L,1L,0x77D10368L,0x79A18431L},{(-8L),1L,0x79A18431L,0x77D10368L,1L,0x77D10368L,0x79A18431L}};
                    int32_t *l_682 = &l_672[1][3];
                    int32_t *l_683 = (void*)0;
                    int i, j;
                    for (l_672[1][3] = 0; (l_672[1][3] > (-26)); l_672[1][3] = safe_sub_func_int8_t_s_s(l_672[1][3], 8))
                    { /* block id: 295 */
                        int16_t l_675 = 0L;
                        uint64_t l_676 = 1UL;
                        l_676 = l_675;
                    }
                    for (l_672[1][6] = (-16); (l_672[1][6] < 7); ++l_672[1][6])
                    { /* block id: 300 */
                        VECTOR(int32_t, 8) l_679 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 4L), 4L), 4L, 1L, 4L);
                        uint64_t l_680 = 1UL;
                        uint64_t l_681 = 18446744073709551613UL;
                        int i;
                        l_625.y |= (l_613.sa &= (l_679.s3 , l_680));
                        l_615.sf = l_681;
                        l_617.s7 = (-1L);
                    }
                    l_683 = l_682;
                }
                for (l_649 = (-21); (l_649 >= 55); l_649++)
                { /* block id: 310 */
                    int32_t l_686 = (-1L);
                    for (l_686 = (-7); (l_686 < 29); l_686 = safe_add_func_int16_t_s_s(l_686, 1))
                    { /* block id: 313 */
                        int32_t l_689 = 0x26A607EBL;
                        int64_t l_690 = (-8L);
                        uint64_t l_691 = 0xD3791ED3FCDD6FB6L;
                        VECTOR(int32_t, 8) l_694 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x4FDA0D04L), 0x4FDA0D04L), 0x4FDA0D04L, 4L, 0x4FDA0D04L);
                        VECTOR(int32_t, 8) l_695 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x3E8C1B01L), 0x3E8C1B01L), 0x3E8C1B01L, (-3L), 0x3E8C1B01L);
                        VECTOR(int32_t, 8) l_696 = (VECTOR(int32_t, 8))(0x7876A2D6L, (VECTOR(int32_t, 4))(0x7876A2D6L, (VECTOR(int32_t, 2))(0x7876A2D6L, 0L), 0L), 0L, 0x7876A2D6L, 0L);
                        VECTOR(int32_t, 4) l_697 = (VECTOR(int32_t, 4))(0x1CAA8413L, (VECTOR(int32_t, 2))(0x1CAA8413L, 4L), 4L);
                        VECTOR(int32_t, 8) l_698 = (VECTOR(int32_t, 8))(0x5CE2ECF8L, (VECTOR(int32_t, 4))(0x5CE2ECF8L, (VECTOR(int32_t, 2))(0x5CE2ECF8L, 7L), 7L), 7L, 0x5CE2ECF8L, 7L);
                        uint32_t l_699[7];
                        VECTOR(int16_t, 2) l_700 = (VECTOR(int16_t, 2))(0x5B8CL, 0x3703L);
                        int i;
                        for (i = 0; i < 7; i++)
                            l_699[i] = 0x3AC645C4L;
                        ++l_691;
                        l_615.sc = 1L;
                        l_625.w |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_694.s40)), 0x67AF3842L, 0x382FF5A2L)), 0L, 0x05D4CFC2L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(l_695.s6614)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_696.s71)).xyxyxyyy)).s27))).xxyy)).odd)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))((-10L), 1L)).yyxxyxxx, ((VECTOR(int32_t, 4))(l_697.ywwz)).xzxzwzzy))))).hi, ((VECTOR(int32_t, 4))(l_698.s6042)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))((l_611 |= l_699[4]), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_700.xy)))).xyyx)), 0x4367L, 1L, 0x709BL)), ((VECTOR(uint16_t, 2))(0xB867L, 65535UL)).yyyyxyyx))).s45)), 0x48BA6524L, 0L)).odd)).xxxy))))).yzzxyyzw)))).sc;
                    }
                    l_615.sf = 0x173A631CL;
                }
                l_619.s6 = 0x5D576ECAL;
            }
            else
            { /* block id: 322 */
                int32_t l_702 = (-1L);
                int32_t *l_701 = &l_702;
                int32_t *l_703 = &l_702;
                int32_t *l_704 = (void*)0;
                VECTOR(int32_t, 2) l_705 = (VECTOR(int32_t, 2))(0x40782039L, 0x2A64E025L);
                int i;
                l_703 = l_701;
                l_704 = (void*)0;
                if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_705.yy)), 1L, 0x5364E7AAL)).y)
                { /* block id: 325 */
                    uint16_t l_706 = 0UL;
                    if ((l_706 , 1L))
                    { /* block id: 326 */
                        int32_t l_707[3][6] = {{0x543387B8L,0x543387B8L,0L,1L,0x046A39F8L,1L},{0x543387B8L,0x543387B8L,0L,1L,0x046A39F8L,1L},{0x543387B8L,0x543387B8L,0L,1L,0x046A39F8L,1L}};
                        int64_t l_708 = 6L;
                        uint8_t l_709 = 253UL;
                        int16_t l_710 = 0x1511L;
                        VECTOR(int32_t, 4) l_711 = (VECTOR(int32_t, 4))(0x03F32C64L, (VECTOR(int32_t, 2))(0x03F32C64L, (-1L)), (-1L));
                        VECTOR(int32_t, 16) l_712 = (VECTOR(int32_t, 16))(0x13430529L, (VECTOR(int32_t, 4))(0x13430529L, (VECTOR(int32_t, 2))(0x13430529L, 0x535E9B8CL), 0x535E9B8CL), 0x535E9B8CL, 0x13430529L, 0x535E9B8CL, (VECTOR(int32_t, 2))(0x13430529L, 0x535E9B8CL), (VECTOR(int32_t, 2))(0x13430529L, 0x535E9B8CL), 0x13430529L, 0x535E9B8CL, 0x13430529L, 0x535E9B8CL);
                        uint32_t l_713 = 0xDD16A755L;
                        VECTOR(int16_t, 8) l_714 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 6L), 6L), 6L, (-2L), 6L);
                        VECTOR(int16_t, 4) l_715 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7383L), 0x7383L);
                        VECTOR(int16_t, 4) l_716 = (VECTOR(int16_t, 4))(0x7C80L, (VECTOR(int16_t, 2))(0x7C80L, 1L), 1L);
                        VECTOR(int16_t, 2) l_717 = (VECTOR(int16_t, 2))((-1L), (-6L));
                        VECTOR(int16_t, 4) l_718 = (VECTOR(int16_t, 4))(0x1D19L, (VECTOR(int16_t, 2))(0x1D19L, 0x0F60L), 0x0F60L);
                        VECTOR(uint16_t, 4) l_719 = (VECTOR(uint16_t, 4))(0xBBE1L, (VECTOR(uint16_t, 2))(0xBBE1L, 0x8D23L), 0x8D23L);
                        VECTOR(uint16_t, 4) l_720 = (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0x0BCEL), 0x0BCEL);
                        VECTOR(uint16_t, 4) l_721 = (VECTOR(uint16_t, 4))(0xD6F4L, (VECTOR(uint16_t, 2))(0xD6F4L, 0UL), 0UL);
                        VECTOR(uint16_t, 2) l_722 = (VECTOR(uint16_t, 2))(65533UL, 0x89C8L);
                        uint64_t l_723 = 0xA56C5D56BC953707L;
                        uint16_t l_726 = 0xE027L;
                        VECTOR(uint16_t, 4) l_727 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65531UL), 65531UL);
                        VECTOR(uint16_t, 8) l_728 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL);
                        VECTOR(int64_t, 4) l_729 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L));
                        uint32_t l_730 = 0UL;
                        VECTOR(uint16_t, 16) l_731 = (VECTOR(uint16_t, 16))(0xA9ACL, (VECTOR(uint16_t, 4))(0xA9ACL, (VECTOR(uint16_t, 2))(0xA9ACL, 0x09CEL), 0x09CEL), 0x09CEL, 0xA9ACL, 0x09CEL, (VECTOR(uint16_t, 2))(0xA9ACL, 0x09CEL), (VECTOR(uint16_t, 2))(0xA9ACL, 0x09CEL), 0xA9ACL, 0x09CEL, 0xA9ACL, 0x09CEL);
                        int32_t l_732 = 0L;
                        uint32_t l_733 = 0x474EE163L;
                        int8_t l_734 = 0x35L;
                        int i, j;
                        l_707[1][1] = l_707[2][1];
                        l_625.w = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(9L, 0x55EF13CCL, l_708, (((l_709 , 4294967295UL) , l_710) , ((VECTOR(int32_t, 16))((-3L), 1L, ((*l_703) = ((VECTOR(int32_t, 4))(l_711.xxxy)).z), 0x62EE661BL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_712.sa6b8a682aad1304c)).s7b)), (l_713 , (((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(l_714.s54)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(2L, 0x30DCL, 1L, 2L)).yyxxyyzx)).s42))), ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(0x4860L, (-8L))).yyyy, ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_715.zy)))).xyyyyyxxyxyxyyxy, ((VECTOR(int16_t, 4))(l_716.ywzw)).zwyzwyxxyxxxzzwz, ((VECTOR(int16_t, 16))(l_717.yxxyyxyyyyyxxyyy))))).s8bf2))).odd))).xxxxyyxy, ((VECTOR(int16_t, 4))(l_718.wxyz)).zyyyxzyy))).s5261703243144173, (int16_t)((VECTOR(int16_t, 2))(0x75F9L, 0x25E1L)).even, (int16_t)(-2L)))).s0b, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(65535UL, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 2))(65534UL, 4UL)).yxyyxyxy, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(l_719.wy)).yxxyxxxx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_720.zxwyzwww)).s6402445432570261)).odd))).s0642565500744505, ((VECTOR(uint16_t, 8))(l_721.wzyzxwyz)).s6045034164255633))).s5d, ((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_722.yx)).yyyxyyyyxyyyxxxy)).even, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))((l_646 = l_723), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0xA538L, 0xCBD0L)))).yxyyyxyy)).s5, ((VECTOR(uint16_t, 16))((l_628[0][2]--), ((VECTOR(uint16_t, 2))(8UL, 65530UL)), l_726, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_727.wwxzzwwyyzxxxwyx)).s6256)), GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 4))(l_728.s1322)), (((l_730 = ((VECTOR(int64_t, 2))(l_729.yy)).hi) , 0x53433975L) , 9UL), 0UL, 0x817FL)).s6, l_731.s0, ((VECTOR(uint16_t, 8))(0x3D4AL)), 65530UL, 0x529DL, 65535UL, 0xBEB2L))))))).s06)).yxyyxxxy))).s22))).yxxyyxyx))), ((VECTOR(uint16_t, 2))(0x3394L)), ((VECTOR(uint16_t, 2))(0UL)), 1UL, 4UL, 0x8661L)).sa2))))), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x276DD6C0L))))).odd , l_732)), 0x68FF6BAFL, 2L, 1L, (-7L), ((VECTOR(int32_t, 2))(0L)), l_733, (-1L), 0x3277D324L)).se), ((VECTOR(int32_t, 4))(0x47730A48L)), 0L, 0L, 0L, ((VECTOR(int32_t, 2))(0L)), 6L, 0x39CBEB8EL, 5L)).sab80, (int32_t)9L, (int32_t)l_734))))).xxwxzzyy)).s6353267300020704)))).sb;
                    }
                    else
                    { /* block id: 333 */
                        uint8_t l_735 = 2UL;
                        int8_t l_736 = 0x21L;
                        uint32_t l_737 = 0x2E5099DBL;
                        int32_t l_738 = 0x6E729399L;
                        uint32_t l_739[1][6][6];
                        int32_t *l_740 = &l_738;
                        int8_t l_741 = 0x53L;
                        int32_t l_742 = 0x07E9E884L;
                        int8_t l_743[1];
                        int32_t l_744 = 0x0B138CDCL;
                        int8_t l_745 = 0x4EL;
                        uint16_t l_746 = 0x90CEL;
                        int32_t l_747 = 0x10DE35FBL;
                        uint16_t l_748 = 0xB81AL;
                        uint8_t l_749 = 0x5FL;
                        int8_t l_750[2][2] = {{0x7BL,0x7BL},{0x7BL,0x7BL}};
                        int64_t l_751 = 0x6D8A8D678C39AFDEL;
                        int32_t l_752 = 6L;
                        int32_t l_753 = 0x75CF7156L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                            {
                                for (k = 0; k < 6; k++)
                                    l_739[i][j][k] = 4294967290UL;
                            }
                        }
                        for (i = 0; i < 1; i++)
                            l_743[i] = 0x0FL;
                        l_703 = (l_735 , (l_701 = ((l_736 , l_737) , (l_738 , (void*)0))));
                        l_641[7][7] &= (l_702 = l_739[0][4][2]);
                        l_703 = l_740;
                        l_704 = (l_703 = (l_741 , (l_701 = (((GROUP_DIVERGE(2, 1) , 0xDD82FFE2L) , l_742) , ((l_753 = (l_752 = (l_751 |= (l_750[1][1] = (l_749 = (((l_745 ^= (l_744 &= l_743[0])) , l_746) , (l_748 = l_747))))))) , (void*)0)))));
                    }
                    for (l_706 = 0; (l_706 == 10); l_706 = safe_add_func_uint64_t_u_u(l_706, 1))
                    { /* block id: 353 */
                        int32_t l_757[7][4] = {{0x63F21045L,0x63F21045L,0x273E5B25L,0L},{0x63F21045L,0x63F21045L,0x273E5B25L,0L},{0x63F21045L,0x63F21045L,0x273E5B25L,0L},{0x63F21045L,0x63F21045L,0x273E5B25L,0L},{0x63F21045L,0x63F21045L,0x273E5B25L,0L},{0x63F21045L,0x63F21045L,0x273E5B25L,0L},{0x63F21045L,0x63F21045L,0x273E5B25L,0L}};
                        int32_t *l_756 = &l_757[1][3];
                        VECTOR(int32_t, 8) l_758 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x40D70BB5L), 0x40D70BB5L), 0x40D70BB5L, 1L, 0x40D70BB5L);
                        int32_t l_759 = 0L;
                        uint16_t l_760[7][10] = {{0x15EBL,0x15EBL,0UL,0x0347L,1UL,0x2815L,0UL,0xB3FEL,0UL,0x2815L},{0x15EBL,0x15EBL,0UL,0x0347L,1UL,0x2815L,0UL,0xB3FEL,0UL,0x2815L},{0x15EBL,0x15EBL,0UL,0x0347L,1UL,0x2815L,0UL,0xB3FEL,0UL,0x2815L},{0x15EBL,0x15EBL,0UL,0x0347L,1UL,0x2815L,0UL,0xB3FEL,0UL,0x2815L},{0x15EBL,0x15EBL,0UL,0x0347L,1UL,0x2815L,0UL,0xB3FEL,0UL,0x2815L},{0x15EBL,0x15EBL,0UL,0x0347L,1UL,0x2815L,0UL,0xB3FEL,0UL,0x2815L},{0x15EBL,0x15EBL,0UL,0x0347L,1UL,0x2815L,0UL,0xB3FEL,0UL,0x2815L}};
                        uint32_t l_761 = 0UL;
                        int i, j;
                        l_701 = l_756;
                        (*l_701) = ((VECTOR(int32_t, 2))(l_758.s74)).odd;
                        l_761 = (l_760[4][5] |= ((*l_701) &= l_759));
                    }
                }
                else
                { /* block id: 360 */
                    uint8_t l_762[7][6][1] = {{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}};
                    int i, j, k;
                    (*l_703) = (l_762[4][1][0] = (-8L));
                }
                for (l_705.x = 13; (l_705.x <= 17); l_705.x = safe_add_func_int16_t_s_s(l_705.x, 9))
                { /* block id: 366 */
                    int32_t l_765 = 0L;
                    int64_t l_807[10][1] = {{0x5F31420CCE372CDBL},{0x5F31420CCE372CDBL},{0x5F31420CCE372CDBL},{0x5F31420CCE372CDBL},{0x5F31420CCE372CDBL},{0x5F31420CCE372CDBL},{0x5F31420CCE372CDBL},{0x5F31420CCE372CDBL},{0x5F31420CCE372CDBL},{0x5F31420CCE372CDBL}};
                    int32_t l_808 = 0L;
                    VECTOR(uint16_t, 8) l_814 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x3FF4L), 0x3FF4L), 0x3FF4L, 0UL, 0x3FF4L);
                    int32_t *l_815[7][2] = {{&l_808,&l_808},{&l_808,&l_808},{&l_808,&l_808},{&l_808,&l_808},{&l_808,&l_808},{&l_808,&l_808},{&l_808,&l_808}};
                    int i, j;
                    if ((l_618.s0 = l_765))
                    { /* block id: 368 */
                        int32_t l_767 = 3L;
                        int32_t *l_766 = &l_767;
                        VECTOR(uint8_t, 4) l_768 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x1BL), 0x1BL);
                        uint8_t l_769 = 0UL;
                        VECTOR(uint16_t, 16) l_770 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x5810L), 0x5810L), 0x5810L, 65535UL, 0x5810L, (VECTOR(uint16_t, 2))(65535UL, 0x5810L), (VECTOR(uint16_t, 2))(65535UL, 0x5810L), 65535UL, 0x5810L, 65535UL, 0x5810L);
                        VECTOR(uint16_t, 8) l_771 = (VECTOR(uint16_t, 8))(0xA2D7L, (VECTOR(uint16_t, 4))(0xA2D7L, (VECTOR(uint16_t, 2))(0xA2D7L, 65535UL), 65535UL), 65535UL, 0xA2D7L, 65535UL);
                        VECTOR(uint16_t, 4) l_772 = (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x153AL), 0x153AL);
                        int64_t l_773 = 0x3A8532D4A08D9964L;
                        VECTOR(uint16_t, 8) l_774 = (VECTOR(uint16_t, 8))(0x2EFCL, (VECTOR(uint16_t, 4))(0x2EFCL, (VECTOR(uint16_t, 2))(0x2EFCL, 0x0FFDL), 0x0FFDL), 0x0FFDL, 0x2EFCL, 0x0FFDL);
                        uint64_t l_775 = 0UL;
                        int8_t l_776 = 1L;
                        int32_t *l_777 = &l_767;
                        int32_t l_778 = 0L;
                        uint8_t l_779 = 0UL;
                        int i;
                        l_701 = l_766;
                        l_701 = (l_768.z , (l_769 , (((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_770.s74ec1eba)))), ((VECTOR(uint16_t, 8))(l_771.s63463713)))).sb3, ((VECTOR(uint16_t, 4))(0xE751L, 0UL, 0xB046L, 0UL)).hi, ((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_772.xxyw)), (l_770.s4 = (((l_643.s3 = (l_628[0][2] &= l_773)) , 0x62D85773336980DEL) , (l_626 |= ((VECTOR(uint16_t, 4))(l_774.s1505)).x))), FAKE_DIVERGE(p_1040->group_0_offset, get_group_id(0), 10), 0x2B13L, 0x1A9CL)).s2606663076017030)).s09)))))).odd , ((l_776 ^= l_775) , l_777))));
                        l_779++;
                    }
                    else
                    { /* block id: 377 */
                        uint64_t l_782 = 0xB6909DA229CF56C3L;
                        uint64_t l_783[5];
                        uint8_t l_784 = 0xF4L;
                        int64_t l_787 = 0x6B3571E145E2FA28L;
                        VECTOR(int32_t, 16) l_788 = (VECTOR(int32_t, 16))(0x6559A130L, (VECTOR(int32_t, 4))(0x6559A130L, (VECTOR(int32_t, 2))(0x6559A130L, 0x2B2D8DDFL), 0x2B2D8DDFL), 0x2B2D8DDFL, 0x6559A130L, 0x2B2D8DDFL, (VECTOR(int32_t, 2))(0x6559A130L, 0x2B2D8DDFL), (VECTOR(int32_t, 2))(0x6559A130L, 0x2B2D8DDFL), 0x6559A130L, 0x2B2D8DDFL, 0x6559A130L, 0x2B2D8DDFL);
                        VECTOR(int32_t, 16) l_789 = (VECTOR(int32_t, 16))(0x6938055AL, (VECTOR(int32_t, 4))(0x6938055AL, (VECTOR(int32_t, 2))(0x6938055AL, 1L), 1L), 1L, 0x6938055AL, 1L, (VECTOR(int32_t, 2))(0x6938055AL, 1L), (VECTOR(int32_t, 2))(0x6938055AL, 1L), 0x6938055AL, 1L, 0x6938055AL, 1L);
                        int32_t l_790[7];
                        uint32_t l_791[4] = {0x1E24E65AL,0x1E24E65AL,0x1E24E65AL,0x1E24E65AL};
                        uint8_t l_792 = 0UL;
                        uint8_t l_793 = 0x8CL;
                        uint64_t l_794 = 0xA3304470B1E820C5L;
                        VECTOR(uint8_t, 16) l_795 = (VECTOR(uint8_t, 16))(0x82L, (VECTOR(uint8_t, 4))(0x82L, (VECTOR(uint8_t, 2))(0x82L, 248UL), 248UL), 248UL, 0x82L, 248UL, (VECTOR(uint8_t, 2))(0x82L, 248UL), (VECTOR(uint8_t, 2))(0x82L, 248UL), 0x82L, 248UL, 0x82L, 248UL);
                        VECTOR(int32_t, 4) l_796 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
                        uint64_t l_797 = 2UL;
                        VECTOR(int32_t, 4) l_798 = (VECTOR(int32_t, 4))(0x50E73808L, (VECTOR(int32_t, 2))(0x50E73808L, 4L), 4L);
                        VECTOR(int32_t, 4) l_799 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
                        VECTOR(int32_t, 16) l_800 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                        uint32_t l_801 = 0x26B2D0E9L;
                        VECTOR(uint8_t, 16) l_802 = (VECTOR(uint8_t, 16))(0x7BL, (VECTOR(uint8_t, 4))(0x7BL, (VECTOR(uint8_t, 2))(0x7BL, 0x38L), 0x38L), 0x38L, 0x7BL, 0x38L, (VECTOR(uint8_t, 2))(0x7BL, 0x38L), (VECTOR(uint8_t, 2))(0x7BL, 0x38L), 0x7BL, 0x38L, 0x7BL, 0x38L);
                        uint8_t l_803 = 1UL;
                        uint16_t l_804 = 1UL;
                        int32_t l_805 = (-3L);
                        int32_t *l_806 = &l_790[0];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_783[i] = 0UL;
                        for (i = 0; i < 7; i++)
                            l_790[i] = (-6L);
                        l_783[2] = l_782;
                        l_784--;
                        l_625.z = (l_787 , ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(0x469FA704L, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(l_788.s2e279b00)).s77, ((VECTOR(int32_t, 4))(l_789.s7e35)).even))), 4L, (l_790[3] = ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(0x70643935L, (l_790[3] , (l_792 = l_791[0])), 0L, 0x2610295EL)), (int32_t)l_793))).w), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_794, l_795.sd, ((VECTOR(int32_t, 4))(l_796.wzyx)), l_797, 0x6F506220L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_798.xxyy)))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(l_799.wxww)).odd, ((VECTOR(int32_t, 8))(l_800.s5230ad07)).s22))), (-3L), 0x5C4028E2L)))).sb2)).yxyyxxyyxxyxyxxy)).sed61)))).xxxwzxyz))).s7325760121724152, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(0x1EE56ACCL, 0x7449ED7EL)).xxxyxyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 2L)), 0x46F547B7L, 0x089CF10BL, l_801, l_802.s4, 0x4B582FE4L, 9L)), ((VECTOR(int32_t, 8))(0x4ED92868L))))).s51, ((VECTOR(int32_t, 2))(0L))))))), 0x24DFC162L, ((VECTOR(int32_t, 8))(0L)), 1L, ((VECTOR(int32_t, 4))(1L)))).s37a2)).wywyxwyzwxzyzyzz))), ((VECTOR(int32_t, 16))((-1L)))))).s9d)))).xxxy, ((VECTOR(int32_t, 4))(0x5699A1A3L))))).lo)), 0x107FDCACL)).s17, ((VECTOR(int32_t, 2))(0x21C24CDAL))))), l_803, l_804, ((VECTOR(int32_t, 4))(0x469A935FL)), ((VECTOR(int32_t, 2))(0x3F666F69L)), 0x57C9C1FFL, l_805, (-1L), 0x58DABE49L, 1L)).sa);
                        l_701 = l_806;
                    }
                    if ((l_808 |= l_807[9][0]))
                    { /* block id: 386 */
                        uint32_t l_809 = 6UL;
                        int16_t l_810 = 5L;
                        l_810 = l_809;
                    }
                    else
                    { /* block id: 388 */
                        uint8_t l_811 = 0x34L;
                        ++l_811;
                    }
                    l_703 = (((VECTOR(uint16_t, 2))(l_814.s30)).hi , l_815[5][1]);
                }
            }
            unsigned int result = 0;
            result += l_611;
            result += l_612;
            result += l_613.sf;
            result += l_613.se;
            result += l_613.sd;
            result += l_613.sc;
            result += l_613.sb;
            result += l_613.sa;
            result += l_613.s9;
            result += l_613.s8;
            result += l_613.s7;
            result += l_613.s6;
            result += l_613.s5;
            result += l_613.s4;
            result += l_613.s3;
            result += l_613.s2;
            result += l_613.s1;
            result += l_613.s0;
            result += l_614;
            result += l_615.sf;
            result += l_615.se;
            result += l_615.sd;
            result += l_615.sc;
            result += l_615.sb;
            result += l_615.sa;
            result += l_615.s9;
            result += l_615.s8;
            result += l_615.s7;
            result += l_615.s6;
            result += l_615.s5;
            result += l_615.s4;
            result += l_615.s3;
            result += l_615.s2;
            result += l_615.s1;
            result += l_615.s0;
            result += l_616;
            result += l_617.sf;
            result += l_617.se;
            result += l_617.sd;
            result += l_617.sc;
            result += l_617.sb;
            result += l_617.sa;
            result += l_617.s9;
            result += l_617.s8;
            result += l_617.s7;
            result += l_617.s6;
            result += l_617.s5;
            result += l_617.s4;
            result += l_617.s3;
            result += l_617.s2;
            result += l_617.s1;
            result += l_617.s0;
            result += l_618.s7;
            result += l_618.s6;
            result += l_618.s5;
            result += l_618.s4;
            result += l_618.s3;
            result += l_618.s2;
            result += l_618.s1;
            result += l_618.s0;
            result += l_619.sf;
            result += l_619.se;
            result += l_619.sd;
            result += l_619.sc;
            result += l_619.sb;
            result += l_619.sa;
            result += l_619.s9;
            result += l_619.s8;
            result += l_619.s7;
            result += l_619.s6;
            result += l_619.s5;
            result += l_619.s4;
            result += l_619.s3;
            result += l_619.s2;
            result += l_619.s1;
            result += l_619.s0;
            result += l_620.w;
            result += l_620.z;
            result += l_620.y;
            result += l_620.x;
            result += l_621.s7;
            result += l_621.s6;
            result += l_621.s5;
            result += l_621.s4;
            result += l_621.s3;
            result += l_621.s2;
            result += l_621.s1;
            result += l_621.s0;
            result += l_622;
            result += l_623;
            result += l_624;
            result += l_625.w;
            result += l_625.z;
            result += l_625.y;
            result += l_625.x;
            result += l_626;
            result += l_627;
            int l_628_i0, l_628_i1;
            for (l_628_i0 = 0; l_628_i0 < 4; l_628_i0++) {
                for (l_628_i1 = 0; l_628_i1 < 4; l_628_i1++) {
                    result += l_628[l_628_i0][l_628_i1];
                }
            }
            result += l_631;
            result += l_632;
            result += l_633;
            result += l_634;
            result += l_635;
            result += l_636;
            result += l_637;
            result += l_638;
            int l_641_i0, l_641_i1;
            for (l_641_i0 = 0; l_641_i0 < 10; l_641_i0++) {
                for (l_641_i1 = 0; l_641_i1 < 10; l_641_i1++) {
                    result += l_641[l_641_i0][l_641_i1];
                }
            }
            result += l_642;
            result += l_643.sf;
            result += l_643.se;
            result += l_643.sd;
            result += l_643.sc;
            result += l_643.sb;
            result += l_643.sa;
            result += l_643.s9;
            result += l_643.s8;
            result += l_643.s7;
            result += l_643.s6;
            result += l_643.s5;
            result += l_643.s4;
            result += l_643.s3;
            result += l_643.s2;
            result += l_643.s1;
            result += l_643.s0;
            result += l_644;
            result += l_645;
            result += l_646;
            atomic_add(&p_1040->l_special_values[14], result);
        }
        else
        { /* block id: 394 */
            (1 + 1);
        }
        for (p_1040->g_186 = 0; (p_1040->g_186 > 57); p_1040->g_186++)
        { /* block id: 399 */
            uint32_t *l_828 = &p_1040->g_203;
            int32_t ***l_837[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t *l_840 = &p_1040->g_841;
            int32_t **l_858[8][10] = {{&l_541,&l_539,&l_539,&l_857,&l_541,(void*)0,&l_539,(void*)0,&l_539,(void*)0},{&l_541,&l_539,&l_539,&l_857,&l_541,(void*)0,&l_539,(void*)0,&l_539,(void*)0},{&l_541,&l_539,&l_539,&l_857,&l_541,(void*)0,&l_539,(void*)0,&l_539,(void*)0},{&l_541,&l_539,&l_539,&l_857,&l_541,(void*)0,&l_539,(void*)0,&l_539,(void*)0},{&l_541,&l_539,&l_539,&l_857,&l_541,(void*)0,&l_539,(void*)0,&l_539,(void*)0},{&l_541,&l_539,&l_539,&l_857,&l_541,(void*)0,&l_539,(void*)0,&l_539,(void*)0},{&l_541,&l_539,&l_539,&l_857,&l_541,(void*)0,&l_539,(void*)0,&l_539,(void*)0},{&l_541,&l_539,&l_539,&l_857,&l_541,(void*)0,&l_539,(void*)0,&l_539,(void*)0}};
            VECTOR(int32_t, 16) l_862 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 6L), 6L), 6L, 5L, 6L, (VECTOR(int32_t, 2))(5L, 6L), (VECTOR(int32_t, 2))(5L, 6L), 5L, 6L, 5L, 6L);
            uint32_t **l_863[9] = {&l_537,&l_537,&l_537,&l_537,&l_537,&l_537,&l_537,&l_537,&l_537};
            int i, j;
            (*l_549) = (safe_sub_func_int64_t_s_s((((safe_sub_func_int32_t_s_s(((((GROUP_DIVERGE(1, 1) == 0x6C8BE5DFB22D503BL) | (&p_1040->g_50 != (l_843[6][3] = (p_1040->g_49[5] = (p_9 , ((safe_add_func_int32_t_s_s((&p_1040->g_203 == &p_1040->g_203), (!(safe_lshift_func_uint8_t_u_u((1UL > (l_842 = ((((safe_div_func_int32_t_s_s(((++(*l_828)) ^ (FAKE_DIVERGE(p_1040->local_0_offset, get_local_id(0), 10) || p_1040->g_542)), ((*l_840) |= (safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(((l_838 = &l_549) == ((((l_539 == (void*)0) || p_1040->g_507.s5) != p_12) , l_839)), p_12)), 6L)), 0x56A256AAL))))) > p_12) & 0x27C5L) != p_1040->g_67))), p_10))))) , &p_11)))))) >= 9UL) <= p_10), 2L)) == 0x306B303FB35ACAE9L) , p_1040->g_584.s6), p_11));
            l_842 &= (((safe_sub_func_int64_t_s_s(((safe_sub_func_int32_t_s_s(((*l_549) , p_8), (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((l_852 != ((l_541 != (l_537 = ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((l_540 = l_857) != (p_1040->g_859 = l_857)), ((safe_add_func_int16_t_s_s(p_11, ((((VECTOR(int32_t, 16))(l_862.s6a1f36ddddaf0cee)).s8 && ((l_544 != l_544) | p_9)) , p_9))) || (-5L)))), p_9)) , p_1040->g_153))) , l_852)), 4294967290UL)), 3)))) || p_9), 0xECB7F864C1177B66L)) > p_9) & 65528UL);
        }
        return p_11;
    }
    else
    { /* block id: 413 */
        VECTOR(int32_t, 16) l_867 = (VECTOR(int32_t, 16))(0x62273CAFL, (VECTOR(int32_t, 4))(0x62273CAFL, (VECTOR(int32_t, 2))(0x62273CAFL, (-1L)), (-1L)), (-1L), 0x62273CAFL, (-1L), (VECTOR(int32_t, 2))(0x62273CAFL, (-1L)), (VECTOR(int32_t, 2))(0x62273CAFL, (-1L)), 0x62273CAFL, (-1L), 0x62273CAFL, (-1L));
        uint32_t *l_910 = &p_1040->g_841;
        uint64_t *l_916[2][9][3] = {{{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186}},{{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186},{&p_1040->g_186,&p_1040->g_186,&p_1040->g_186}}};
        int64_t l_921[2][8] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
        VECTOR(int8_t, 2) l_936 = (VECTOR(int8_t, 2))(5L, 0x4DL);
        int64_t *l_938 = &p_1040->g_378;
        int i, j, k;
        (*l_549) = p_8;
        (*l_549) &= ((VECTOR(int32_t, 8))(l_864.xyxyxyxy)).s1;
        for (l_538 = 0; (l_538 > 0); ++l_538)
        { /* block id: 418 */
            (*l_549) ^= 0x529EF823L;
            atomic_min(&p_1040->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_867.s67937ab7d05f44be)).s90)).lo);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1040->v_collective += p_1040->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if ((atomic_inc(&p_1040->l_atomic_input[4]) == 6))
            { /* block id: 422 */
                int32_t l_868 = 0x23FD73D8L;
                int32_t l_906 = 3L;
                uint16_t l_907 = 65528UL;
                for (l_868 = (-23); (l_868 >= 8); l_868 = safe_add_func_uint32_t_u_u(l_868, 8))
                { /* block id: 425 */
                    int32_t *l_871 = (void*)0;
                    int32_t l_873 = (-1L);
                    int32_t *l_872 = &l_873;
                    int64_t l_874 = 0x4D50E8DAEEAAA649L;
                    int8_t l_875 = 0x19L;
                    uint32_t l_904 = 4294967295UL;
                    int64_t l_905 = 1L;
                    l_872 = l_871;
                    if ((l_875 = ((l_874 , 1L) , 1L)))
                    { /* block id: 428 */
                        int32_t *l_876 = (void*)0;
                        int32_t l_878[4] = {0L,0L,0L,0L};
                        int32_t *l_877 = &l_878[3];
                        uint32_t l_879[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                        int32_t l_880 = 0x3E3421C0L;
                        uint32_t l_881 = 0x9FE517F9L;
                        int16_t l_884[3][1][8];
                        int32_t l_885 = 0L;
                        int32_t l_886 = (-9L);
                        int32_t l_887 = 0x7105C66FL;
                        int32_t l_888 = 1L;
                        int16_t l_889 = (-1L);
                        VECTOR(uint64_t, 8) l_890 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 8; k++)
                                    l_884[i][j][k] = 0x7BBEL;
                            }
                        }
                        l_872 = (l_877 = l_876);
                        l_873 = l_879[4];
                        ++l_881;
                        ++l_890.s4;
                    }
                    else
                    { /* block id: 434 */
                        int32_t l_893 = 1L;
                        uint32_t l_894 = 0xE0AA1AE7L;
                        uint8_t l_895 = 1UL;
                        VECTOR(int8_t, 16) l_898 = (VECTOR(int8_t, 16))(0x6FL, (VECTOR(int8_t, 4))(0x6FL, (VECTOR(int8_t, 2))(0x6FL, 1L), 1L), 1L, 0x6FL, 1L, (VECTOR(int8_t, 2))(0x6FL, 1L), (VECTOR(int8_t, 2))(0x6FL, 1L), 0x6FL, 1L, 0x6FL, 1L);
                        uint32_t **l_899 = (void*)0;
                        uint32_t l_902 = 0x049A5A6EL;
                        uint32_t *l_901 = &l_902;
                        uint32_t **l_900 = &l_901;
                        uint32_t **l_903[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_903[i] = &l_901;
                        l_873 ^= (l_894 = l_893);
                        --l_895;
                        l_903[2] = (l_900 = (((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(l_898.s53bf43cb)), ((VECTOR(int8_t, 2))(1L, 0x1CL)).yxxyyyxx))).s7 , l_899));
                    }
                    l_872 = (void*)0;
                    l_905 ^= l_904;
                }
                l_907 = l_906;
                unsigned int result = 0;
                result += l_868;
                result += l_906;
                result += l_907;
                atomic_add(&p_1040->l_special_values[4], result);
            }
            else
            { /* block id: 445 */
                (1 + 1);
            }
        }
        if ((((((safe_lshift_func_int8_t_s_u(((((*l_910) = p_1040->g_609.sa) , ((VECTOR(uint8_t, 16))(l_911.sa6d950ca83748fdf)).s9) >= ((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((l_917 = l_916[0][8][2]) == &p_1040->g_186), (p_1040->g_375.x ^ (safe_div_func_int8_t_s_s((~p_8), FAKE_DIVERGE(p_1040->group_2_offset, get_group_id(2), 10)))))) == (p_1040->g_144 != (0xE8L > ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1040->g_920.s46871827)).s2377360756710336)))).s5))), (*l_549))) | ((VECTOR(int32_t, 8))((((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 16))(0x678BL, 0L, 0x0C74L, 0L, p_10, p_11, ((VECTOR(int16_t, 4))(0L)), l_867.sb, ((VECTOR(int16_t, 2))(0x466BL)), 0x4CD0L, (-2L), (-1L))).s6457, (int16_t)p_8, (int16_t)l_921[1][1]))).even, ((VECTOR(uint16_t, 2))(0x2632L))))).xyyy, ((VECTOR(int32_t, 4))(1L))))).w , p_8), 0x2BA6D0D3L, l_867.sc, 0x02473D4FL, 0x0B79F9CAL, 0x1DC11254L, 0x1083B459L, 0x56327FA7L)).s7), ((VECTOR(uint8_t, 2))(0xBEL)), 0x47L, ((VECTOR(uint8_t, 4))(252UL)))))), ((VECTOR(uint8_t, 8))(0xFFL)), ((VECTOR(uint8_t, 8))(255UL))))).s06)).hi , (void*)0) == l_910)), GROUP_DIVERGE(0, 1))) | p_1040->g_359.s3) < p_1040->g_197.y) ^ p_1040->g_317.s4) | p_1040->g_16))
        { /* block id: 451 */
            return p_8;
        }
        else
        { /* block id: 453 */
            VECTOR(int16_t, 4) l_932 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L));
            uint64_t *l_933 = (void*)0;
            int16_t **l_937 = &p_1040->g_105[1];
            int8_t *l_939 = (void*)0;
            int8_t *l_940 = (void*)0;
            int8_t *l_941 = (void*)0;
            int8_t *l_942 = (void*)0;
            int8_t *l_943 = &l_543;
            int64_t l_944 = 0x176EDE24CA941BB0L;
            int32_t l_945 = 0L;
            int i;
            l_867.sd &= (safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(0x25A5EAD862DDCF68L, (safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((p_1040->g_222.y = 18446744073709551608UL) || ((l_945 = (l_944 = ((*l_549) |= (p_11 = ((safe_rshift_func_int16_t_s_u(((((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((-9L), ((VECTOR(int16_t, 8))(0x1CCBL, p_11, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(l_932.wyxyyyzyywzyyxyz)).s2d, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((-4L), (-3L), ((((((p_1040->g_216.y ^= GROUP_DIVERGE(2, 1)) != (((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_1040->g_934.yxxxyxxyxyxxxxyy)).s51d5)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(l_935.s60071062)).s47, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_936.yx)).xyyyxyxy)).s74, ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((((l_937 == (void*)0) , l_545) != (l_938 = &p_1040->g_378)), ((*l_943) = ((*l_527) = (0L < p_12))), 4L, 1L)).odd)))).xxyyxxyxxyyyyyyx, ((VECTOR(int8_t, 16))(0x0BL)), ((VECTOR(int8_t, 16))((-1L)))))).s21))).yyyx, ((VECTOR(int8_t, 4))(4L))))).zyxwzwyz)).lo)), ((VECTOR(int8_t, 4))(0x5EL)), ((VECTOR(int8_t, 4))(0x4BL))))).wxxyyzzz, ((VECTOR(int8_t, 8))(0L)), ((VECTOR(int8_t, 8))(0x45L))))).s1616504530174703)).scd2a)), ((VECTOR(int8_t, 4))(7L))))).y || p_11)) , p_10) <= l_936.y) , 1UL) & p_12), 0L, (-5L), 0x6B15L, (-1L), 0x3A6EL)).s73)), ((VECTOR(int16_t, 2))(0x4727L))))), ((VECTOR(int16_t, 2))(0L))))), 0x6841L, 0L, 2L, 0x7DD4L)), 0x2413L, p_12, 1L, 0L, ((VECTOR(int16_t, 2))(0x34EDL)), 0x4811L)))).s4310, ((VECTOR(int16_t, 4))(1L))))).x , l_921[1][2]) != 0x95L), p_1040->g_193.sd)) | p_1040->g_507.s3))))) , 0x9BE8C3EFCAE03891L)), 0x91AEAD45L)), p_8)))), p_12));
            for (p_1040->g_186 = (-4); (p_1040->g_186 <= 39); p_1040->g_186 = safe_add_func_int64_t_s_s(p_1040->g_186, 1))
            { /* block id: 466 */
                int32_t *l_950[3][9] = {{&l_945,&l_546,&l_548[7][4][0],(void*)0,&l_546,(void*)0,&l_548[7][4][0],&l_546,&l_945},{&l_945,&l_546,&l_548[7][4][0],(void*)0,&l_546,(void*)0,&l_548[7][4][0],&l_546,&l_945},{&l_945,&l_546,&l_548[7][4][0],(void*)0,&l_546,(void*)0,&l_548[7][4][0],&l_546,&l_945}};
                int i, j;
                l_867.s0 = ((*l_549) |= ((VECTOR(int32_t, 2))(p_1040->g_948.wx)).odd);
            }
            return l_932.x;
        }
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_378 p_1040->g_203 p_1040->g_507 p_1040->g_508 p_1040->l_comm_values p_1040->g_201 p_1040->g_125 p_1040->g_137 p_1040->g_375 p_1040->g_144
 * writes: p_1040->g_203 p_1040->g_106 p_1040->g_137 p_1040->g_521 p_1040->g_144
 */
int64_t  func_21(uint32_t  p_22, uint16_t  p_23, uint8_t * p_24, struct S0 * p_1040)
{ /* block id: 211 */
    uint8_t *l_484 = &p_1040->g_50;
    int32_t *l_485 = (void*)0;
    int32_t l_488 = 4L;
    VECTOR(uint32_t, 8) l_495 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xCB3C6EFAL), 0xCB3C6EFAL), 0xCB3C6EFAL, 0UL, 0xCB3C6EFAL);
    VECTOR(uint32_t, 2) l_496 = (VECTOR(uint32_t, 2))(0UL, 0UL);
    uint32_t *l_497 = &p_1040->g_203;
    VECTOR(uint64_t, 16) l_500 = (VECTOR(uint64_t, 16))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 0UL), 0UL), 0UL, 5UL, 0UL, (VECTOR(uint64_t, 2))(5UL, 0UL), (VECTOR(uint64_t, 2))(5UL, 0UL), 5UL, 0UL, 5UL, 0UL);
    int8_t l_511 = (-3L);
    uint64_t *l_512 = (void*)0;
    int32_t *l_513[2];
    int8_t l_514 = 0x4AL;
    int16_t *l_515 = &p_1040->g_106[0];
    uint8_t **l_517 = &p_1040->g_49[5];
    uint8_t ***l_516 = &l_517;
    uint8_t ***l_518 = (void*)0;
    uint8_t **l_520 = &p_1040->g_49[3];
    uint8_t ***l_519 = &l_520;
    int i;
    for (i = 0; i < 2; i++)
        l_513[i] = &l_488;
    l_488 &= (((void*)0 != l_484) == 0x34326B58L);
    p_1040->g_144 ^= (p_1040->g_521 = (0x42A33DC5A29C6A40L || (((p_1040->g_378 < (((p_1040->g_137 ^= ((safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((p_23 < (~(~0x3C4377A597DFE9DFL))), (((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 2))(l_495.s47)).yxxxxyyx, ((VECTOR(uint32_t, 8))(l_496.yyyxxyxy))))).s3, (++(*l_497)))) != ((VECTOR(uint64_t, 2))(l_500.se5)).odd) <= (((((((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(p_23, (&p_1040->g_49[2] != ((*l_519) = ((*l_516) = (((((*l_515) = (((l_514 ^= (l_496.x == (((0L >= (((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(p_1040->g_507.sd0)).xxxyyyxx, ((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 16))(p_1040->g_508.yxyyyyxxxyyyxyxy)), ((VECTOR(uint16_t, 4))(1UL, 65535UL, 0UL, 65534UL)).xywzyxwxyyxzwyzw)))))).even))).s7 >= (((safe_rshift_func_uint16_t_u_u(p_23, 6)) > l_511) || 0x735BL))) , l_512) == (void*)0))) & p_1040->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1040->tid, 18))]) <= p_1040->g_201.s6)) , 65533UL) == p_23) , (void*)0)))))), p_1040->g_125.y)), p_1040->g_125.x)) , 0x44782882B71728D8L) , p_22) == 0L) == p_23) , 0x3170CC8DL) , 0x41L)))) & p_22), 0x4E46L)) || (-6L))) & 7UL) , p_1040->g_375.y)) > p_23) <= p_22)));
    return p_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_378 p_1040->g_137 p_1040->g_432 p_1040->g_50 p_1040->g_454 p_1040->g_463 p_1040->g_194 p_1040->g_201 p_1040->g_213 p_1040->g_68 p_1040->g_359
 * writes: p_1040->g_378 p_1040->g_137 p_1040->g_153 p_1040->g_50 p_1040->g_222 p_1040->g_36
 */
uint16_t  func_25(int32_t  p_26, struct S0 * p_1040)
{ /* block id: 189 */
    int32_t l_446[10][5][5] = {{{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)}},{{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)}},{{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)}},{{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)}},{{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)}},{{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)}},{{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)}},{{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)}},{{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)}},{{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)},{5L,0x101D6EFBL,0x42B68AB6L,5L,(-1L)}}};
    uint8_t *l_447[2][8][5] = {{{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0}},{{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0},{(void*)0,&p_1040->g_50,(void*)0,&p_1040->g_50,(void*)0}}};
    int16_t **l_448 = &p_1040->g_105[1];
    VECTOR(int32_t, 8) l_449 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 1L), 1L), 1L, 9L, 1L);
    VECTOR(int16_t, 16) l_451 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, (-1L)), (-1L)), (-1L), 5L, (-1L), (VECTOR(int16_t, 2))(5L, (-1L)), (VECTOR(int16_t, 2))(5L, (-1L)), 5L, (-1L), 5L, (-1L));
    int32_t ***l_471 = (void*)0;
    uint64_t *l_483 = (void*)0;
    int i, j, k;
    for (p_1040->g_378 = (-11); (p_1040->g_378 >= (-13)); --p_1040->g_378)
    { /* block id: 192 */
        int32_t *l_430[7][10][3] = {{{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144}},{{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144}},{{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144}},{{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144}},{{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144}},{{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144}},{{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144},{(void*)0,(void*)0,&p_1040->g_144}}};
        uint32_t l_439 = 7UL;
        int32_t l_445 = 4L;
        VECTOR(uint16_t, 8) l_450 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 3UL), 3UL), 3UL, 1UL, 3UL);
        VECTOR(int8_t, 2) l_455 = (VECTOR(int8_t, 2))((-1L), 0x3AL);
        VECTOR(int16_t, 16) l_462 = (VECTOR(int16_t, 16))(0x70C5L, (VECTOR(int16_t, 4))(0x70C5L, (VECTOR(int16_t, 2))(0x70C5L, 0x0E43L), 0x0E43L), 0x0E43L, 0x70C5L, 0x0E43L, (VECTOR(int16_t, 2))(0x70C5L, 0x0E43L), (VECTOR(int16_t, 2))(0x70C5L, 0x0E43L), 0x70C5L, 0x0E43L, 0x70C5L, 0x0E43L);
        VECTOR(int16_t, 2) l_464 = (VECTOR(int16_t, 2))(0L, 0x5170L);
        uint64_t *l_476 = (void*)0;
        uint64_t *l_477 = (void*)0;
        uint64_t *l_478 = (void*)0;
        int32_t ***l_479 = (void*)0;
        int16_t *l_480 = &p_1040->g_36;
        int i, j, k;
        for (p_1040->g_137 = 0; (p_1040->g_137 <= 37); p_1040->g_137 = safe_add_func_int16_t_s_s(p_1040->g_137, 8))
        { /* block id: 195 */
            int32_t **l_431 = (void*)0;
            int32_t l_436 = 0x23C6BE61L;
            uint32_t *l_444[6] = {&p_1040->g_203,&p_1040->g_203,&p_1040->g_203,&p_1040->g_203,&p_1040->g_203,&p_1040->g_203};
            int i;
            (*p_1040->g_432) = l_430[5][7][1];
            for (p_1040->g_50 = 0; (p_1040->g_50 > 8); p_1040->g_50++)
            { /* block id: 199 */
                int16_t l_435 = 8L;
                l_436 = l_435;
            }
            l_446[8][4][4] = (safe_sub_func_int32_t_s_s(l_439, (l_445 = (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(65526UL, 11)) >= 4UL), 6)))));
        }
        l_449.s4 = ((l_447[0][7][4] != ((l_448 != (((VECTOR(int32_t, 16))(l_449.s0775220461051027)).sd , ((((VECTOR(uint16_t, 8))(l_450.s55700761)).s0 == ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(l_451.s67b1)).zxxywyyzxwxywxzz, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 2))(0x6812L, 0x7605L)).xyyyyyxyxyxyxxxx, (int16_t)((*l_480) = ((((safe_add_func_uint8_t_u_u((((p_1040->g_222.w = (((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(p_1040->g_454.sff)), ((VECTOR(int8_t, 16))(0L, ((VECTOR(int8_t, 8))(l_455.xxyyyyxx)), 1L, ((((safe_mod_func_uint64_t_u_u((l_449.s1 , (GROUP_DIVERGE(2, 1) , ((((safe_div_func_int16_t_s_s((p_26 , (safe_mul_func_uint16_t_u_u((((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_462.s4e)).yxxyyyyyyxxxyxxy)).s87df, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(p_1040->g_463.yyxxxyyxxyxyyyxy)).even, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(0x73DEL, 0x3015L)).xyxx, ((VECTOR(int16_t, 8))(0L, ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(l_464.yxyy)), (int16_t)(safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(FAKE_DIVERGE(p_1040->global_2_offset, get_global_id(2), 10), 11)), (p_26 , (~(0x6380B185L | (l_471 == &p_1040->g_404)))))), (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((p_26 ^ 0L), l_449.s1)), 0x6CL))))))), ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))((-8L)))))), ((VECTOR(int16_t, 2))(0x2F3CL)), 3L)).odd))).zxxzyzzx))).hi)))), ((VECTOR(int16_t, 4))(0x385EL)))))))).x , p_1040->g_194.s1), 0x5485L))), 0x9462L)) & p_26) != l_451.s0) < p_26))), 0x88AB0C61D83F1305L)) , &p_1040->g_378) == &p_1040->g_378) || p_1040->g_201.s4), p_1040->g_213.w, ((VECTOR(int8_t, 4))((-5L))))).s49))).even ^ 0x0DL)) ^ l_449.s5) != FAKE_DIVERGE(p_1040->group_2_offset, get_group_id(2), 10)), FAKE_DIVERGE(p_1040->global_1_offset, get_global_id(1), 10))) == 0x75B404B29D52DABCL) , l_471) == l_479)), (int16_t)0x3FB0L))).s0c, ((VECTOR(int16_t, 2))(1L))))).xxxxxxxyxxxyxyxx))), ((VECTOR(int16_t, 16))(0x550EL))))))).even)).s5) , &p_1040->g_105[1]))) , (void*)0)) > 1L);
        l_449.s0 = ((safe_rshift_func_uint16_t_u_u(p_1040->g_68[0][2][0], ((void*)0 != l_483))) | (p_26 ^ (l_480 == l_480)));
    }
    return p_1040->g_359.s2;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_33(int16_t  p_34, struct S0 * p_1040)
{ /* block id: 7 */
    int16_t l_37 = (-2L);
    return l_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_203
 * writes: p_1040->g_203
 */
uint16_t  func_38(uint32_t  p_39, struct S0 * p_1040)
{ /* block id: 181 */
    uint32_t l_422 = 0xD831B3B5L;
    int32_t l_425 = 0x47F823EAL;
    for (p_1040->g_203 = (-16); (p_1040->g_203 == 31); p_1040->g_203 = safe_add_func_int64_t_s_s(p_1040->g_203, 9))
    { /* block id: 184 */
        int32_t *l_421[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_421[i][j] = &p_1040->g_144;
        }
        l_422++;
        l_425 ^= 0x049F8B04L;
    }
    return l_425;
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_36 p_1040->g_147 p_1040->g_144 p_1040->g_106 p_1040->g_152 p_1040->g_67 p_1040->g_124 p_1040->g_50 p_1040->g_203 p_1040->g_242 p_1040->g_123 p_1040->g_153 p_1040->g_317 p_1040->g_194 p_1040->g_354 p_1040->g_287 p_1040->g_359 p_1040->g_364 p_1040->g_375 p_1040->g_222 p_1040->g_395 p_1040->g_212 p_1040->g_197 p_1040->g_404
 * writes: p_1040->g_36 p_1040->g_144 p_1040->g_153 p_1040->g_67 p_1040->g_125 p_1040->g_203 p_1040->g_105 p_1040->g_106 p_1040->g_354 p_1040->g_378 p_1040->g_137 p_1040->g_404
 */
uint32_t  func_40(uint64_t  p_41, uint32_t  p_42, uint8_t * p_43, struct S0 * p_1040)
{ /* block id: 22 */
    VECTOR(int8_t, 4) l_112 = (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0x45L), 0x45L);
    VECTOR(int64_t, 2) l_126 = (VECTOR(int64_t, 2))((-4L), 0x05B2AB3A25EAEA33L);
    int32_t l_139 = (-9L);
    int16_t *l_167 = &p_1040->g_106[1];
    VECTOR(uint16_t, 16) l_200 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xE5ADL), 0xE5ADL), 0xE5ADL, 0UL, 0xE5ADL, (VECTOR(uint16_t, 2))(0UL, 0xE5ADL), (VECTOR(uint16_t, 2))(0UL, 0xE5ADL), 0UL, 0xE5ADL, 0UL, 0xE5ADL);
    VECTOR(int32_t, 2) l_211 = (VECTOR(int32_t, 2))(0x1D70AD31L, 0x4559418FL);
    VECTOR(uint64_t, 2) l_215 = (VECTOR(uint64_t, 2))(5UL, 0x60C695775BB545E7L);
    VECTOR(int64_t, 16) l_288 = (VECTOR(int64_t, 16))(0x22E6EB306EFA4B4EL, (VECTOR(int64_t, 4))(0x22E6EB306EFA4B4EL, (VECTOR(int64_t, 2))(0x22E6EB306EFA4B4EL, (-1L)), (-1L)), (-1L), 0x22E6EB306EFA4B4EL, (-1L), (VECTOR(int64_t, 2))(0x22E6EB306EFA4B4EL, (-1L)), (VECTOR(int64_t, 2))(0x22E6EB306EFA4B4EL, (-1L)), 0x22E6EB306EFA4B4EL, (-1L), 0x22E6EB306EFA4B4EL, (-1L));
    uint32_t l_290 = 5UL;
    int64_t l_321 = 0x7529766AB07F6DA7L;
    uint32_t l_331 = 2UL;
    VECTOR(int16_t, 4) l_358 = (VECTOR(int16_t, 4))(0x3DCBL, (VECTOR(int16_t, 2))(0x3DCBL, 0x0C6EL), 0x0C6EL);
    VECTOR(int32_t, 8) l_365 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 8L), 8L), 8L, 0L, 8L);
    uint64_t **l_400 = &p_1040->g_188[4][0][0];
    int32_t **l_405 = &p_1040->g_153;
    int i;
    for (p_1040->g_36 = (-8); (p_1040->g_36 > 6); p_1040->g_36 = safe_add_func_uint8_t_u_u(p_1040->g_36, 7))
    { /* block id: 25 */
        int8_t l_109 = (-1L);
        uint8_t **l_140 = &p_1040->g_49[5];
        int32_t **l_145 = (void*)0;
        int32_t *l_146 = &p_1040->g_144;
        for (p_42 = 0; (p_42 > 22); p_42 = safe_add_func_uint8_t_u_u(p_42, 1))
        { /* block id: 28 */
            VECTOR(int16_t, 16) l_121 = (VECTOR(int16_t, 16))(0x5014L, (VECTOR(int16_t, 4))(0x5014L, (VECTOR(int16_t, 2))(0x5014L, 0x15CBL), 0x15CBL), 0x15CBL, 0x5014L, 0x15CBL, (VECTOR(int16_t, 2))(0x5014L, 0x15CBL), (VECTOR(int16_t, 2))(0x5014L, 0x15CBL), 0x5014L, 0x15CBL, 0x5014L, 0x15CBL);
            int8_t l_122 = 0x3AL;
            uint16_t *l_136[5][2][8] = {{{&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137},{&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137}},{{&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137},{&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137}},{{&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137},{&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137}},{{&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137},{&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137}},{{&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137},{&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137,&p_1040->g_137}}};
            uint64_t *l_138 = (void*)0;
            uint16_t l_141 = 0x8DE2L;
            int16_t *l_142 = &p_1040->g_106[0];
            int32_t *l_143 = &p_1040->g_144;
            int i, j, k;
            (*l_143) = (((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))((safe_mul_func_int16_t_s_s(((p_1040->g_105[1] = (void*)0) == (void*)0), ((*l_142) = ((--(*p_43)) && (((l_109 > (((((l_139 = ((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_112.yzzwzyxyzxwwywxx)).se, (safe_sub_func_int64_t_s_s(p_41, ((safe_div_func_uint32_t_u_u((((((--p_1040->g_67) != (safe_mul_func_uint16_t_u_u((0x8925L != ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(l_121.s465d)), (int16_t)l_122))).hi)).xyxyyyyyyyyyyxyx)).s0a9d, ((VECTOR(int16_t, 2))((-1L), 0x7B1BL)).xyxy))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_1040->g_123.s32a9bcad)).lo))))).x), (p_1040->g_137 = (!(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_1040->g_124.yxwwxwyy)).odd)).odd, ((VECTOR(int64_t, 8))(p_1040->g_125.xyyxxyyx)).s42, ((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 2))((-2L), 5L)).xyyyxyxxyyxyxxxy))).sf0))), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_126.yxyx)), (-5L), 8L, 0x7EBDF65D561E864FL, 0x42C81858A7F69D75L)), (safe_lshift_func_uint8_t_u_s(l_109, 2)), 0x7822096152EF7354L, 0x51A19A74B1038030L, (safe_div_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((p_42 && ((((safe_div_func_int64_t_s_s((((VECTOR(int16_t, 2))(p_1040->g_135.yy)).even >= ((p_42 | (-1L)) , (-1L))), l_109)) > (-1L)) != l_121.sa) , 0x2038L)), 4UL)), 0x867CL)), ((VECTOR(int64_t, 4))(0x4F394D215D55B779L)))).lo)), ((VECTOR(int64_t, 8))(9L))))).s40)), ((VECTOR(int64_t, 2))(0x2F20CC15F2E48B94L))))).lo >= p_1040->g_125.x)))))) , p_41) ^ p_1040->g_106[0]) < p_1040->g_106[0]), p_42)) <= 0x1B29L))))) | GROUP_DIVERGE(1, 1))) , l_140) == &p_1040->g_49[7]) >= l_112.w) == (*p_43))) != p_41) == l_141))))), l_126.y, FAKE_DIVERGE(p_1040->local_1_offset, get_local_id(1), 10), l_109, l_109, 0x19L, ((VECTOR(uint8_t, 8))(249UL)), 0x96L, 0x0DL)).s3504)).hi, ((VECTOR(uint8_t, 2))(248UL)), ((VECTOR(uint8_t, 2))(0x0DL))))).lo >= 0L);
        }
        l_146 = &p_1040->g_144;
        (*l_146) |= ((VECTOR(int32_t, 2))(p_1040->g_147.wy)).hi;
    }
    if ((l_139 &= p_1040->g_106[6]))
    { /* block id: 41 */
        int16_t l_175 = 0x52A6L;
        int32_t l_178 = 0x31A696AEL;
        VECTOR(uint16_t, 4) l_180 = (VECTOR(uint16_t, 4))(0xB1E9L, (VECTOR(uint16_t, 2))(0xB1E9L, 0x07A3L), 0x07A3L);
        VECTOR(uint16_t, 2) l_181 = (VECTOR(uint16_t, 2))(65535UL, 1UL);
        uint32_t l_208 = 4294967290UL;
        VECTOR(int64_t, 16) l_221 = (VECTOR(int64_t, 16))(0x66389586FDC5E22EL, (VECTOR(int64_t, 4))(0x66389586FDC5E22EL, (VECTOR(int64_t, 2))(0x66389586FDC5E22EL, 0x7E1D119A207B85D1L), 0x7E1D119A207B85D1L), 0x7E1D119A207B85D1L, 0x66389586FDC5E22EL, 0x7E1D119A207B85D1L, (VECTOR(int64_t, 2))(0x66389586FDC5E22EL, 0x7E1D119A207B85D1L), (VECTOR(int64_t, 2))(0x66389586FDC5E22EL, 0x7E1D119A207B85D1L), 0x66389586FDC5E22EL, 0x7E1D119A207B85D1L, 0x66389586FDC5E22EL, 0x7E1D119A207B85D1L);
        uint8_t l_274 = 0xD2L;
        int32_t l_292 = 0x72199AC4L;
        int8_t *l_297 = (void*)0;
        int32_t l_325 = 0x27952285L;
        int32_t l_327 = 3L;
        int32_t l_328 = 1L;
        int32_t l_329[5][2] = {{4L,0x339E2D13L},{4L,0x339E2D13L},{4L,0x339E2D13L},{4L,0x339E2D13L},{4L,0x339E2D13L}};
        int32_t l_330 = 0x1B707B2CL;
        VECTOR(int16_t, 8) l_360 = (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x64EAL), 0x64EAL), 0x64EAL, 5L, 0x64EAL);
        VECTOR(int32_t, 16) l_368 = (VECTOR(int32_t, 16))(0x5C5F4166L, (VECTOR(int32_t, 4))(0x5C5F4166L, (VECTOR(int32_t, 2))(0x5C5F4166L, 0x4133D840L), 0x4133D840L), 0x4133D840L, 0x5C5F4166L, 0x4133D840L, (VECTOR(int32_t, 2))(0x5C5F4166L, 0x4133D840L), (VECTOR(int32_t, 2))(0x5C5F4166L, 0x4133D840L), 0x5C5F4166L, 0x4133D840L, 0x5C5F4166L, 0x4133D840L);
        int32_t ***l_401 = (void*)0;
        int32_t **l_403 = &p_1040->g_153;
        int32_t ***l_402[5][3][4] = {{{(void*)0,(void*)0,&l_403,(void*)0},{(void*)0,(void*)0,&l_403,(void*)0},{(void*)0,(void*)0,&l_403,(void*)0}},{{(void*)0,(void*)0,&l_403,(void*)0},{(void*)0,(void*)0,&l_403,(void*)0},{(void*)0,(void*)0,&l_403,(void*)0}},{{(void*)0,(void*)0,&l_403,(void*)0},{(void*)0,(void*)0,&l_403,(void*)0},{(void*)0,(void*)0,&l_403,(void*)0}},{{(void*)0,(void*)0,&l_403,(void*)0},{(void*)0,(void*)0,&l_403,(void*)0},{(void*)0,(void*)0,&l_403,(void*)0}},{{(void*)0,(void*)0,&l_403,(void*)0},{(void*)0,(void*)0,&l_403,(void*)0},{(void*)0,(void*)0,&l_403,(void*)0}}};
        int i, j, k;
        for (p_1040->g_36 = 13; (p_1040->g_36 > (-18)); p_1040->g_36--)
        { /* block id: 44 */
            int32_t *l_150[4];
            int32_t **l_151 = &l_150[2];
            uint64_t *l_243 = &p_1040->g_186;
            int i;
            for (i = 0; i < 4; i++)
                l_150[i] = (void*)0;
            (*p_1040->g_152) = ((*l_151) = l_150[2]);
            for (p_1040->g_67 = 0; (p_1040->g_67 >= 46); p_1040->g_67++)
            { /* block id: 49 */
                int64_t *l_158 = (void*)0;
                uint16_t l_159 = 9UL;
                int16_t *l_166[1];
                int32_t l_172 = 0x0CA69266L;
                int8_t *l_173 = (void*)0;
                int64_t *l_174[6][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                uint16_t *l_176[2];
                int32_t l_177 = 1L;
                uint32_t l_179 = 4294967295UL;
                uint64_t *l_185[10][3];
                uint64_t **l_184[9][6] = {{&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[9][2],&l_185[7][1]},{&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[9][2],&l_185[7][1]},{&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[9][2],&l_185[7][1]},{&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[9][2],&l_185[7][1]},{&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[9][2],&l_185[7][1]},{&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[9][2],&l_185[7][1]},{&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[9][2],&l_185[7][1]},{&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[9][2],&l_185[7][1]},{&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[8][0],&l_185[9][2],&l_185[7][1]}};
                uint32_t *l_202 = &p_1040->g_203;
                int8_t *l_204 = (void*)0;
                int8_t *l_205 = (void*)0;
                int8_t *l_206 = (void*)0;
                int8_t *l_207[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                VECTOR(uint64_t, 2) l_234 = (VECTOR(uint64_t, 2))(0x67CD7A234F56A359L, 0UL);
                int8_t *l_252 = (void*)0;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_166[i] = (void*)0;
                for (i = 0; i < 2; i++)
                    l_176[i] = &p_1040->g_137;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_185[i][j] = &p_1040->g_186;
                }
                atomic_xor(&p_1040->l_atomic_reduction[0], ((safe_mod_func_int64_t_s_s((p_1040->g_125.x = (l_159 = 2L)), (1UL | (l_178 = (safe_rshift_func_uint16_t_u_u((l_112.w > p_42), (((VECTOR(uint16_t, 2))(65527UL, 0xA11EL)).lo ^ (l_177 |= (safe_sub_func_uint64_t_u_u(((l_175 ^= (safe_rshift_func_int8_t_s_u(((l_167 = l_166[0]) == (void*)0), ((VECTOR(uint8_t, 16))(((((((safe_rshift_func_uint8_t_u_u((l_172 <= (p_43 == l_173)), 6)) && p_42) & FAKE_DIVERGE(p_1040->local_2_offset, get_local_id(2), 10)) >= 0x037081A2L) <= GROUP_DIVERGE(0, 1)) || p_1040->g_124.w), l_172, ((VECTOR(uint8_t, 4))(246UL)), 1UL, 0xE6L, ((VECTOR(uint8_t, 2))(0xC5L)), (*p_43), ((VECTOR(uint8_t, 2))(0x7CL)), ((VECTOR(uint8_t, 2))(252UL)), 0UL)).se))) || p_41), p_41)))))))))) , l_179));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1040->v_collective += p_1040->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (p_42)
                    continue;
            }
            return p_1040->g_147.w;
        }
        for (p_1040->g_203 = 0; (p_1040->g_203 > 54); p_1040->g_203 = safe_add_func_int64_t_s_s(p_1040->g_203, 8))
        { /* block id: 111 */
            int8_t *l_266 = (void*)0;
            int8_t *l_267 = (void*)0;
            int8_t *l_268 = (void*)0;
            int8_t *l_269 = (void*)0;
            int8_t *l_270 = (void*)0;
            int8_t *l_271[1][8][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_272 = (-3L);
            VECTOR(int8_t, 2) l_273 = (VECTOR(int8_t, 2))(0x66L, 0x4CL);
            int16_t **l_289 = &p_1040->g_105[1];
            int64_t *l_291[5][5][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_307 = (-2L);
            int32_t l_326[2][7];
            VECTOR(int16_t, 16) l_376 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L, (VECTOR(int16_t, 2))((-1L), 4L), (VECTOR(int16_t, 2))((-1L), 4L), (-1L), 4L, (-1L), 4L);
            VECTOR(int32_t, 16) l_381 = (VECTOR(int32_t, 16))(0x6CB77272L, (VECTOR(int32_t, 4))(0x6CB77272L, (VECTOR(int32_t, 2))(0x6CB77272L, 0x62CB3FE9L), 0x62CB3FE9L), 0x62CB3FE9L, 0x6CB77272L, 0x62CB3FE9L, (VECTOR(int32_t, 2))(0x6CB77272L, 0x62CB3FE9L), (VECTOR(int32_t, 2))(0x6CB77272L, 0x62CB3FE9L), 0x6CB77272L, 0x62CB3FE9L, 0x6CB77272L, 0x62CB3FE9L);
            int32_t **l_399 = &p_1040->g_153;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                    l_326[i][j] = (-5L);
            }
            for (p_42 = 0; (p_42 < 21); p_42 = safe_add_func_int16_t_s_s(p_42, 8))
            { /* block id: 114 */
                atomic_max(&p_1040->g_atomic_reduction[get_linear_group_id()], p_42);
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1040->v_collective += p_1040->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (p_42)
                    break;
                return p_42;
            }
            if (((*p_1040->g_153) = ((((VECTOR(uint16_t, 2))(0UL, 0xBA76L)).even , ((((l_292 = (safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(p_41, (safe_sub_func_int8_t_s_s((~((VECTOR(int8_t, 4))((l_272 = ((void*)0 != &p_1040->g_153)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((l_178 |= ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_273.yyyxyyyyxxxxxxyx)))).sc), 8L, 0x39L, 0x17L)).even)), (int8_t)l_274))))), 0x63L)).w), (((safe_lshift_func_uint16_t_u_u(((2UL == (~((safe_lshift_func_uint16_t_u_s(((((249UL < (safe_lshift_func_uint8_t_u_u((*p_43), 5))) < (FAKE_DIVERGE(p_1040->global_1_offset, get_global_id(1), 10) , (((VECTOR(int32_t, 2))(p_1040->g_281.yx)).hi & (safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u((l_208 < (safe_unary_minus_func_uint8_t_u(((VECTOR(uint8_t, 8))(p_1040->g_287.wxxyyxxw)).s0))), (((((VECTOR(int64_t, 8))(l_288.s6b5751dc)).s0 < ((((*l_289) = &p_1040->g_36) != (void*)0) ^ p_1040->g_36)) , 0x1FL) != FAKE_DIVERGE(p_1040->group_0_offset, get_group_id(0), 10)))) == l_208), FAKE_DIVERGE(p_1040->group_0_offset, get_group_id(0), 10)))))) , 0x6A40C5FB2365D8C4L) && l_290), 13)) > 0UL))) ^ l_112.w), l_208)) < 252UL) || 4294967289UL))))) , (*p_43)), p_1040->g_242.se)), p_1040->g_123.s5))) != p_1040->g_123.sb) | (*p_43)) >= (-9L))) , (*p_1040->g_153))))
            { /* block id: 124 */
                uint64_t l_308 = 1UL;
                VECTOR(uint8_t, 16) l_318 = (VECTOR(uint8_t, 16))(0xC7L, (VECTOR(uint8_t, 4))(0xC7L, (VECTOR(uint8_t, 2))(0xC7L, 0x97L), 0x97L), 0x97L, 0xC7L, 0x97L, (VECTOR(uint8_t, 2))(0xC7L, 0x97L), (VECTOR(uint8_t, 2))(0xC7L, 0x97L), 0xC7L, 0x97L, 0xC7L, 0x97L);
                int i;
                l_307 &= ((safe_div_func_int32_t_s_s((**p_1040->g_152), p_42)) < (safe_mul_func_uint16_t_u_u((p_42 < (((p_43 != l_297) >= ((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(((void*)0 == &p_1040->g_105[1]))), l_274)) , (safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s(p_42, 0x64C8L)), p_1040->g_106[5])), p_42)))) > l_211.y)), l_272)));
                l_308++;
                (*p_1040->g_153) = ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(0x67356082L, 0x68EC31DBL)).xyyyxyyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(0x0D1E6000L, (-1L))), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0L, 0x243AA538L)).yxxyxyyyyxxyxxyy)).s67d0, (int32_t)((&p_1040->g_188[1][1][0] == &p_1040->g_188[1][0][0]) , ((safe_sub_func_int64_t_s_s((p_1040->g_124.y || (((safe_mod_func_int32_t_s_s(5L, ((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(p_1040->g_317.s31103623)).s27, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xF8L, 0xD7L)), ((VECTOR(uint8_t, 2))(l_318.s63)), ((p_42 <= (~0x02DEFD0DL)) , ((**p_1040->g_152) , ((VECTOR(uint8_t, 8))(0x66L, ((safe_rshift_func_uint16_t_u_s((l_272 == 0xFDL), 5)) | 0x7813L), ((VECTOR(uint8_t, 2))(252UL)), 255UL, l_321, 0UL, 0x04L)).s2)), 1UL, 0x08L, 0UL)).lo)).odd))).yxyxxyxxyyyyxyxy, ((VECTOR(uint8_t, 16))(0x3EL))))).even)), ((VECTOR(uint16_t, 8))(7UL))))).s4, p_42)) , (*p_1040->g_153)))) || 9UL) == p_41)), 1UL)) >= 0UL)), (int32_t)0x0F025AB2L))).even))), 0x06EB8B46L, 0x7B6CD0E4L)).zyyxzxyw, ((VECTOR(int32_t, 8))(0x7529D328L))))).lo)).yzzyzwwz, ((VECTOR(int32_t, 8))(0x374393EFL))))).s7;
            }
            else
            { /* block id: 128 */
                int32_t l_322 = 0x2561FEC4L;
                int32_t *l_323 = (void*)0;
                int32_t *l_324[8][1] = {{&l_178},{&l_178},{&l_178},{&l_178},{&l_178},{&l_178},{&l_178},{&l_178}};
                uint64_t *l_342 = (void*)0;
                uint64_t *l_343 = &p_1040->g_67;
                uint8_t *l_350 = (void*)0;
                uint8_t *l_351 = (void*)0;
                uint8_t *l_352 = &l_274;
                uint32_t l_353 = 4294967295UL;
                VECTOR(int8_t, 2) l_374 = (VECTOR(int8_t, 2))(0x59L, 8L);
                int32_t **l_398 = &p_1040->g_153;
                int i, j;
                ++l_331;
                if (((p_1040->g_124.w <= (-1L)) > (((~(((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((p_1040->g_125.x = p_41) || ((p_42 != l_112.x) || GROUP_DIVERGE(1, 1))), (p_1040->g_354 |= (((l_292 = (((--(*l_343)) <= ((*p_43) != (((*l_352) |= (safe_sub_func_int32_t_s_s((((safe_add_func_int16_t_s_s(((*l_167) = p_42), p_41)) , p_1040->g_194.sa) > l_215.x), l_330))) , l_353))) ^ p_41)) || 18446744073709551613UL) <= 0x2B263BB481C8215DL)))) & 7L), p_42)) , p_1040->g_287.y), 6L)) , p_41) >= p_1040->g_242.s8)) , (-4L)) || l_326[1][0])))
                { /* block id: 136 */
                    VECTOR(int32_t, 4) l_357 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x225BBED9L), 0x225BBED9L);
                    VECTOR(int32_t, 8) l_367 = (VECTOR(int32_t, 8))(0x17144CEFL, (VECTOR(int32_t, 4))(0x17144CEFL, (VECTOR(int32_t, 2))(0x17144CEFL, (-8L)), (-8L)), (-8L), 0x17144CEFL, (-8L));
                    int i;
                    for (l_307 = 20; (l_307 < (-15)); --l_307)
                    { /* block id: 139 */
                        VECTOR(int16_t, 8) l_361 = (VECTOR(int16_t, 8))(0x5DC5L, (VECTOR(int16_t, 4))(0x5DC5L, (VECTOR(int16_t, 2))(0x5DC5L, 0x2D30L), 0x2D30L), 0x2D30L, 0x5DC5L, 0x2D30L);
                        VECTOR(int32_t, 16) l_366 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x76B20CCCL), 0x76B20CCCL), 0x76B20CCCL, 0L, 0x76B20CCCL, (VECTOR(int32_t, 2))(0L, 0x76B20CCCL), (VECTOR(int32_t, 2))(0L, 0x76B20CCCL), 0L, 0x76B20CCCL, 0L, 0x76B20CCCL);
                        VECTOR(int8_t, 16) l_373 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L, (VECTOR(int8_t, 2))((-1L), 2L), (VECTOR(int8_t, 2))((-1L), 2L), (-1L), 2L, (-1L), 2L);
                        int64_t *l_377 = &p_1040->g_378;
                        int i;
                        (**p_1040->g_152) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(l_357.xx)).xyxxyxxx, ((VECTOR(int32_t, 2))((-1L), 1L)).xyxxxyxx))), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 8))(l_358.zzzyywxy)).s22))), 0x3106L, 0x341EL, 8L, ((VECTOR(int16_t, 2))(p_1040->g_359.s66)), 0x79DEL)).lo, ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_360.s0707)))).yzxyzzyxwyxxzxwz, ((VECTOR(int16_t, 8))(0x5B2FL, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 2))(l_361.s74)), (int16_t)(p_1040->g_147.x == (*p_43)), (int16_t)(&l_139 != (void*)0)))), (safe_div_func_int32_t_s_s((((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 8))(p_1040->g_364.s22246321)).s2252035021440550, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_365.s01661445)).s0337573112073632)), ((VECTOR(int32_t, 16))(l_366.se2b55bb157fa3288)), ((VECTOR(int32_t, 4))(l_367.s5044)).xxzyxxywxyzxwzxx))).s3a, ((VECTOR(int32_t, 8))(l_368.sc3bf35b8)).s76, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 0x7A3F8022L))))))).yyxyxyxxyxxyyyyx))))).s7 , (safe_add_func_uint32_t_u_u((l_361.s6 , (18446744073709551614UL != (((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))(l_373.s601e299a)), ((VECTOR(int8_t, 16))(l_374.yxyyxxyyxxxyyyyy)).lo))), (int8_t)(l_365.s1 && (255UL & ((VECTOR(uint8_t, 8))(p_1040->g_375.yxxxxxyy)).s2))))).even))).z, (((p_1040->g_137 = (((*l_377) = (((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_376.sc0)), 0x34C9L, 0x188AL)).w != 1L) , p_1040->g_203) , p_1040->g_222.y)) , p_42)) | 1UL) <= l_215.x))) , l_361.s7) >= p_1040->g_36))), 1L))), (*p_1040->g_153))), p_41, 0x3447L, (-8L), 0x74FCL, 0L)).s4, 0x74B1L, ((VECTOR(int16_t, 2))(0x2127L)), ((VECTOR(int16_t, 2))(4L)), 1L)).s1437006013146147, ((VECTOR(int16_t, 16))(0x3277L))))).s2f5d))), ((VECTOR(int16_t, 4))(0x60D1L)))).hi, ((VECTOR(uint16_t, 4))(0x4B5BL))))))).z, 0x24381BC7L, (-8L), 0L)), ((VECTOR(int32_t, 4))(0x50783930L)), ((VECTOR(int32_t, 4))((-1L)))))), ((VECTOR(int32_t, 4))(0x548294FBL)))))).sc3f3)), p_42, 0x1570E07CL, 0x6EF8BE90L, 0x7BCB76E4L)).s0;
                    }
                    for (l_292 = 0; (l_292 > 2); l_292 = safe_add_func_int16_t_s_s(l_292, 6))
                    { /* block id: 146 */
                        int32_t l_382 = 1L;
                        int i, j;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1040->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 18)), permutations[(safe_mod_func_uint32_t_u_u(4294967295UL, 10))][(safe_mod_func_uint32_t_u_u(p_1040->tid, 18))]));
                        (*p_1040->g_153) = (l_382 = ((VECTOR(int32_t, 2))(l_381.s49)).lo);
                        (*p_1040->g_153) = (safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((p_41 ^ p_41), 0x2B8CL)), 5)), (p_1040->g_125.x = (l_382 = (safe_rshift_func_uint16_t_u_u(0x768CL, 13))))));
                        if ((*p_1040->g_153))
                            continue;
                    }
                }
                else
                { /* block id: 157 */
                    for (l_331 = 0; (l_331 > 17); l_331++)
                    { /* block id: 160 */
                        uint8_t l_396 = 255UL;
                        (*p_1040->g_153) = (l_396 = (safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), ((VECTOR(int16_t, 8))(p_1040->g_395.s166269c2)).s0)));
                        return p_1040->g_212.y;
                    }
                    if (l_200.s7)
                        break;
                }
                (*p_1040->g_153) ^= (l_376.s5 < 0x290B173ECBC252F9L);
                (*l_398) = (*p_1040->g_152);
            }
            (*l_399) = (*p_1040->g_152);
        }
        (**l_403) |= ((l_400 != &p_1040->g_188[7][0][0]) , ((p_1040->g_404 = (p_1040->g_197.y , &p_1040->g_153)) == l_405));
        (*p_1040->g_404) = (*p_1040->g_404);
    }
    else
    { /* block id: 175 */
        int64_t l_406 = 0x0B44E548A583ADDDL;
        int32_t *l_407 = (void*)0;
        int32_t *l_408 = (void*)0;
        int32_t *l_409 = &p_1040->g_144;
        int32_t *l_410 = &l_139;
        int32_t *l_411[2];
        int32_t l_412 = 0x754A2FB8L;
        int16_t l_413[5];
        uint8_t l_414 = 0xC5L;
        int32_t ***l_418 = &p_1040->g_404;
        int i;
        for (i = 0; i < 2; i++)
            l_411[i] = (void*)0;
        for (i = 0; i < 5; i++)
            l_413[i] = 0x712BL;
        l_414--;
        (*l_405) = (*l_405);
        (*l_418) = l_405;
    }
    return p_1040->g_124.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_50 p_1040->g_65 p_1040->g_67 p_1040->g_68 p_1040->g_36 p_1040->g_comm_values p_1040->g_49
 * writes: p_1040->g_49 p_1040->g_67 p_1040->g_68
 */
int32_t  func_44(uint8_t * p_45, uint64_t  p_46, int16_t * p_47, int32_t  p_48, struct S0 * p_1040)
{ /* block id: 9 */
    int32_t l_61 = (-5L);
    uint8_t **l_64 = &p_1040->g_49[5];
    uint64_t *l_66 = &p_1040->g_67;
    int8_t *l_69 = (void*)0;
    int8_t *l_70 = (void*)0;
    int8_t *l_71 = (void*)0;
    int32_t l_72[3];
    int32_t *l_97 = &l_61;
    int32_t l_98 = 0x0EE2FB04L;
    int i;
    for (i = 0; i < 3; i++)
        l_72[i] = 0x2E6E92ECL;
    (*l_97) = func_51(p_1040->g_50, (((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))((((safe_div_func_int8_t_s_s(((l_61 < 255UL) | ((((safe_lshift_func_uint16_t_u_u(0x320AL, (p_46 >= (((*l_64) = &p_1040->g_50) != &p_1040->g_50)))) == (l_72[2] = ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(p_1040->g_65.xywyxxwzwxxyzwyy)).sa6, ((VECTOR(int8_t, 8))((((*l_66) &= p_48) >= ((p_1040->g_68[0][2][0] = l_61) , p_1040->g_65.z)), ((VECTOR(int8_t, 2))(0x1BL)), 0x23L, p_48, l_61, (-1L), (-1L))).s52, ((VECTOR(int8_t, 2))(0x24L))))).odd)) || p_1040->g_68[0][2][0]) < 0x0DL)), l_61)) != p_1040->g_65.x) && GROUP_DIVERGE(0, 1)), 0x5F77832D1299D621L, 0x0CACF6402D6FA87DL, 0x7B053AAA0C7D0B67L)).xxxzwwyy)).s2, 1L)) < p_1040->g_36) , (void*)0), p_1040->g_comm_values[p_1040->tid], l_70, p_1040->g_36, p_1040);
    return l_98;
}


/* ------------------------------------------ */
/* 
 * reads : p_1040->g_49 p_1040->g_67
 * writes:
 */
int32_t  func_51(uint16_t  p_52, int16_t * p_53, uint64_t  p_54, uint8_t * p_55, uint32_t  p_56, struct S0 * p_1040)
{ /* block id: 14 */
    int16_t *l_93 = &p_1040->g_36;
    int32_t l_94 = 6L;
    int32_t l_95 = 9L;
    int32_t l_96 = 0x623B9C03L;
    l_96 |= ((safe_rshift_func_uint8_t_u_s(5UL, 0)) < ((l_94 = (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(((((l_95 ^= (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x0A13L, 0x52FCL)).odd, (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(248UL, (safe_mul_func_uint16_t_u_u((((0x8949F0E3L | (-3L)) , p_1040->g_49[5]) != p_55), (0L & (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((p_53 = &p_1040->g_36) != l_93), 6UL)), l_94))))))), l_94)), 1UL)))), 0x1B20L))) != 0xA4L) | FAKE_DIVERGE(p_1040->local_2_offset, get_local_id(2), 10)) || p_1040->g_67), ((VECTOR(int16_t, 4))((-1L))), 0x1D39L, 0x2C72L, 0L)).s0, 0x3AF2L))) & p_54));
    return p_56;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[18];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 18; i++)
            l_comm_values[i] = 1;
    struct S0 c_1041;
    struct S0* p_1040 = &c_1041;
    struct S0 c_1042 = {
        255UL, // p_1040->g_16
        0x58F8L, // p_1040->g_36
        0x8DL, // p_1040->g_50
        {&p_1040->g_50,&p_1040->g_50,&p_1040->g_50,&p_1040->g_50,&p_1040->g_50,&p_1040->g_50,&p_1040->g_50,&p_1040->g_50}, // p_1040->g_49
        (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), (-4L)), (-4L)), // p_1040->g_65
        0x2C43DA4AA2EEDF21L, // p_1040->g_67
        {{{(-5L)},{(-5L)},{(-5L)},{(-5L)},{(-5L)}}}, // p_1040->g_68
        {0x6DC0L,0x6DC0L,0x6DC0L,0x6DC0L,0x6DC0L,0x6DC0L,0x6DC0L,0x6DC0L,0x6DC0L}, // p_1040->g_106
        {&p_1040->g_106[0],&p_1040->g_106[0],&p_1040->g_106[0],&p_1040->g_106[0]}, // p_1040->g_105
        (VECTOR(int16_t, 16))(0x13B7L, (VECTOR(int16_t, 4))(0x13B7L, (VECTOR(int16_t, 2))(0x13B7L, 8L), 8L), 8L, 0x13B7L, 8L, (VECTOR(int16_t, 2))(0x13B7L, 8L), (VECTOR(int16_t, 2))(0x13B7L, 8L), 0x13B7L, 8L, 0x13B7L, 8L), // p_1040->g_123
        (VECTOR(int64_t, 4))(0x04727EF2E4F19BD6L, (VECTOR(int64_t, 2))(0x04727EF2E4F19BD6L, 0x28F2DD187DA11339L), 0x28F2DD187DA11339L), // p_1040->g_124
        (VECTOR(int64_t, 2))((-10L), (-7L)), // p_1040->g_125
        (VECTOR(int16_t, 2))(1L, (-5L)), // p_1040->g_135
        1UL, // p_1040->g_137
        (-1L), // p_1040->g_144
        (VECTOR(int32_t, 4))(0x786C406DL, (VECTOR(int32_t, 2))(0x786C406DL, 0x353BB8E8L), 0x353BB8E8L), // p_1040->g_147
        &p_1040->g_144, // p_1040->g_153
        &p_1040->g_153, // p_1040->g_152
        0xF50514DB471E7E6FL, // p_1040->g_186
        &p_1040->g_186, // p_1040->g_187
        {{{&p_1040->g_186},{&p_1040->g_186}},{{&p_1040->g_186},{&p_1040->g_186}},{{&p_1040->g_186},{&p_1040->g_186}},{{&p_1040->g_186},{&p_1040->g_186}},{{&p_1040->g_186},{&p_1040->g_186}},{{&p_1040->g_186},{&p_1040->g_186}},{{&p_1040->g_186},{&p_1040->g_186}},{{&p_1040->g_186},{&p_1040->g_186}},{{&p_1040->g_186},{&p_1040->g_186}}}, // p_1040->g_188
        (VECTOR(int8_t, 16))(0x36L, (VECTOR(int8_t, 4))(0x36L, (VECTOR(int8_t, 2))(0x36L, 0L), 0L), 0L, 0x36L, 0L, (VECTOR(int8_t, 2))(0x36L, 0L), (VECTOR(int8_t, 2))(0x36L, 0L), 0x36L, 0L, 0x36L, 0L), // p_1040->g_193
        (VECTOR(int8_t, 16))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x10L), 0x10L), 0x10L, 4L, 0x10L, (VECTOR(int8_t, 2))(4L, 0x10L), (VECTOR(int8_t, 2))(4L, 0x10L), 4L, 0x10L, 4L, 0x10L), // p_1040->g_194
        (VECTOR(int32_t, 2))((-5L), 0x34DEDF0DL), // p_1040->g_197
        (VECTOR(int64_t, 8))(0x69A5DB99627D35BEL, (VECTOR(int64_t, 4))(0x69A5DB99627D35BEL, (VECTOR(int64_t, 2))(0x69A5DB99627D35BEL, (-1L)), (-1L)), (-1L), 0x69A5DB99627D35BEL, (-1L)), // p_1040->g_201
        1UL, // p_1040->g_203
        (VECTOR(int32_t, 2))(5L, 0x41E5BB9CL), // p_1040->g_212
        (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0x8F856281AE0F83A2L), 0x8F856281AE0F83A2L), // p_1040->g_213
        (VECTOR(uint64_t, 2))(0x49C42C81B91DD583L, 0x3B709F690D1609D9L), // p_1040->g_216
        (VECTOR(uint64_t, 4))(0x851B5097C5824AA6L, (VECTOR(uint64_t, 2))(0x851B5097C5824AA6L, 1UL), 1UL), // p_1040->g_222
        (VECTOR(uint8_t, 16))(0x4DL, (VECTOR(uint8_t, 4))(0x4DL, (VECTOR(uint8_t, 2))(0x4DL, 1UL), 1UL), 1UL, 0x4DL, 1UL, (VECTOR(uint8_t, 2))(0x4DL, 1UL), (VECTOR(uint8_t, 2))(0x4DL, 1UL), 0x4DL, 1UL, 0x4DL, 1UL), // p_1040->g_242
        (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-8L)), (-8L)), // p_1040->g_253
        (VECTOR(int32_t, 2))(0x0918D328L, 0x0C4415F1L), // p_1040->g_281
        (VECTOR(uint8_t, 4))(0xA3L, (VECTOR(uint8_t, 2))(0xA3L, 0x6AL), 0x6AL), // p_1040->g_287
        (VECTOR(uint8_t, 8))(0x93L, (VECTOR(uint8_t, 4))(0x93L, (VECTOR(uint8_t, 2))(0x93L, 255UL), 255UL), 255UL, 0x93L, 255UL), // p_1040->g_317
        0x33L, // p_1040->g_354
        (VECTOR(int16_t, 8))(0x584BL, (VECTOR(int16_t, 4))(0x584BL, (VECTOR(int16_t, 2))(0x584BL, 0L), 0L), 0L, 0x584BL, 0L), // p_1040->g_359
        (VECTOR(int32_t, 8))(0x07082ADCL, (VECTOR(int32_t, 4))(0x07082ADCL, (VECTOR(int32_t, 2))(0x07082ADCL, (-6L)), (-6L)), (-6L), 0x07082ADCL, (-6L)), // p_1040->g_364
        (VECTOR(uint8_t, 2))(247UL, 0x71L), // p_1040->g_375
        0x4EB55DCB3628DB01L, // p_1040->g_378
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0645L), 0x0645L), 0x0645L, (-1L), 0x0645L, (VECTOR(int16_t, 2))((-1L), 0x0645L), (VECTOR(int16_t, 2))((-1L), 0x0645L), (-1L), 0x0645L, (-1L), 0x0645L), // p_1040->g_395
        {{{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153}},{{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153}},{{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153}},{{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153},{&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153,&p_1040->g_153}}}, // p_1040->g_397
        (void*)0, // p_1040->g_404
        {{&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404},{&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404},{&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404,&p_1040->g_404}}, // p_1040->g_417
        &p_1040->g_153, // p_1040->g_432
        (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L, (VECTOR(int8_t, 2))((-5L), 0L), (VECTOR(int8_t, 2))((-5L), 0L), (-5L), 0L, (-5L), 0L), // p_1040->g_454
        (VECTOR(int16_t, 2))(6L, 0x757BL), // p_1040->g_463
        (void*)0, // p_1040->g_486
        (void*)0, // p_1040->g_487
        (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 1UL), 1UL), 1UL, 8UL, 1UL, (VECTOR(uint16_t, 2))(8UL, 1UL), (VECTOR(uint16_t, 2))(8UL, 1UL), 8UL, 1UL, 8UL, 1UL), // p_1040->g_507
        (VECTOR(uint16_t, 2))(0xDE63L, 65532UL), // p_1040->g_508
        (-10L), // p_1040->g_521
        0x6DB87142L, // p_1040->g_542
        (void*)0, // p_1040->g_550
        (void*)0, // p_1040->g_551
        (void*)0, // p_1040->g_552
        (void*)0, // p_1040->g_553
        (void*)0, // p_1040->g_554
        (void*)0, // p_1040->g_557
        {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_1040->g_558
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xA989L), 0xA989L), 0xA989L, 65535UL, 0xA989L), // p_1040->g_561
        (VECTOR(uint8_t, 2))(0x63L, 0xD1L), // p_1040->g_577
        (VECTOR(int32_t, 8))(0x334050C5L, (VECTOR(int32_t, 4))(0x334050C5L, (VECTOR(int32_t, 2))(0x334050C5L, 1L), 1L), 1L, 0x334050C5L, 1L), // p_1040->g_584
        (VECTOR(int32_t, 16))(0x1768A446L, (VECTOR(int32_t, 4))(0x1768A446L, (VECTOR(int32_t, 2))(0x1768A446L, 0x5217C5BEL), 0x5217C5BEL), 0x5217C5BEL, 0x1768A446L, 0x5217C5BEL, (VECTOR(int32_t, 2))(0x1768A446L, 0x5217C5BEL), (VECTOR(int32_t, 2))(0x1768A446L, 0x5217C5BEL), 0x1768A446L, 0x5217C5BEL, 0x1768A446L, 0x5217C5BEL), // p_1040->g_609
        0xC78D0F68L, // p_1040->g_841
        (void*)0, // p_1040->g_859
        (VECTOR(uint8_t, 16))(0x14L, (VECTOR(uint8_t, 4))(0x14L, (VECTOR(uint8_t, 2))(0x14L, 248UL), 248UL), 248UL, 0x14L, 248UL, (VECTOR(uint8_t, 2))(0x14L, 248UL), (VECTOR(uint8_t, 2))(0x14L, 248UL), 0x14L, 248UL, 0x14L, 248UL), // p_1040->g_920
        (VECTOR(int8_t, 2))(1L, 0x21L), // p_1040->g_934
        (VECTOR(int32_t, 4))(0x504BA68EL, (VECTOR(int32_t, 2))(0x504BA68EL, 1L), 1L), // p_1040->g_948
        (void*)0, // p_1040->g_949
        (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), // p_1040->g_953
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x1BL), 0x1BL), 0x1BL, 0L, 0x1BL), // p_1040->g_955
        (VECTOR(uint8_t, 16))(0x1AL, (VECTOR(uint8_t, 4))(0x1AL, (VECTOR(uint8_t, 2))(0x1AL, 255UL), 255UL), 255UL, 0x1AL, 255UL, (VECTOR(uint8_t, 2))(0x1AL, 255UL), (VECTOR(uint8_t, 2))(0x1AL, 255UL), 0x1AL, 255UL, 0x1AL, 255UL), // p_1040->g_962
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x5AL), 0x5AL), 0x5AL, 255UL, 0x5AL, (VECTOR(uint8_t, 2))(255UL, 0x5AL), (VECTOR(uint8_t, 2))(255UL, 0x5AL), 255UL, 0x5AL, 255UL, 0x5AL), // p_1040->g_963
        (VECTOR(uint8_t, 8))(0xA8L, (VECTOR(uint8_t, 4))(0xA8L, (VECTOR(uint8_t, 2))(0xA8L, 253UL), 253UL), 253UL, 0xA8L, 253UL), // p_1040->g_966
        &p_1040->g_153, // p_1040->g_968
        0UL, // p_1040->g_977
        &p_1040->g_153, // p_1040->g_981
        (VECTOR(int32_t, 8))(0x784A3E1EL, (VECTOR(int32_t, 4))(0x784A3E1EL, (VECTOR(int32_t, 2))(0x784A3E1EL, 7L), 7L), 7L, 0x784A3E1EL, 7L), // p_1040->g_982
        (VECTOR(int64_t, 4))(0x79AC1365C4FAE72FL, (VECTOR(int64_t, 2))(0x79AC1365C4FAE72FL, 0x00EDC086AA425846L), 0x00EDC086AA425846L), // p_1040->g_999
        (VECTOR(int64_t, 16))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x2C97495C8B57C0CAL), 0x2C97495C8B57C0CAL), 0x2C97495C8B57C0CAL, (-10L), 0x2C97495C8B57C0CAL, (VECTOR(int64_t, 2))((-10L), 0x2C97495C8B57C0CAL), (VECTOR(int64_t, 2))((-10L), 0x2C97495C8B57C0CAL), (-10L), 0x2C97495C8B57C0CAL, (-10L), 0x2C97495C8B57C0CAL), // p_1040->g_1004
        &p_1040->g_153, // p_1040->g_1016
        (void*)0, // p_1040->g_1033
        (void*)0, // p_1040->g_1036
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1040->g_1038
        &p_1040->g_1038[0], // p_1040->g_1037
        0, // p_1040->v_collective
        sequence_input[get_global_id(0)], // p_1040->global_0_offset
        sequence_input[get_global_id(1)], // p_1040->global_1_offset
        sequence_input[get_global_id(2)], // p_1040->global_2_offset
        sequence_input[get_local_id(0)], // p_1040->local_0_offset
        sequence_input[get_local_id(1)], // p_1040->local_1_offset
        sequence_input[get_local_id(2)], // p_1040->local_2_offset
        sequence_input[get_group_id(0)], // p_1040->group_0_offset
        sequence_input[get_group_id(1)], // p_1040->group_1_offset
        sequence_input[get_group_id(2)], // p_1040->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 18)), permutations[0][get_linear_local_id()])), // p_1040->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1041 = c_1042;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1040);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1040->g_16, "p_1040->g_16", print_hash_value);
    transparent_crc(p_1040->g_36, "p_1040->g_36", print_hash_value);
    transparent_crc(p_1040->g_50, "p_1040->g_50", print_hash_value);
    transparent_crc(p_1040->g_65.x, "p_1040->g_65.x", print_hash_value);
    transparent_crc(p_1040->g_65.y, "p_1040->g_65.y", print_hash_value);
    transparent_crc(p_1040->g_65.z, "p_1040->g_65.z", print_hash_value);
    transparent_crc(p_1040->g_65.w, "p_1040->g_65.w", print_hash_value);
    transparent_crc(p_1040->g_67, "p_1040->g_67", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1040->g_68[i][j][k], "p_1040->g_68[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1040->g_106[i], "p_1040->g_106[i]", print_hash_value);

    }
    transparent_crc(p_1040->g_123.s0, "p_1040->g_123.s0", print_hash_value);
    transparent_crc(p_1040->g_123.s1, "p_1040->g_123.s1", print_hash_value);
    transparent_crc(p_1040->g_123.s2, "p_1040->g_123.s2", print_hash_value);
    transparent_crc(p_1040->g_123.s3, "p_1040->g_123.s3", print_hash_value);
    transparent_crc(p_1040->g_123.s4, "p_1040->g_123.s4", print_hash_value);
    transparent_crc(p_1040->g_123.s5, "p_1040->g_123.s5", print_hash_value);
    transparent_crc(p_1040->g_123.s6, "p_1040->g_123.s6", print_hash_value);
    transparent_crc(p_1040->g_123.s7, "p_1040->g_123.s7", print_hash_value);
    transparent_crc(p_1040->g_123.s8, "p_1040->g_123.s8", print_hash_value);
    transparent_crc(p_1040->g_123.s9, "p_1040->g_123.s9", print_hash_value);
    transparent_crc(p_1040->g_123.sa, "p_1040->g_123.sa", print_hash_value);
    transparent_crc(p_1040->g_123.sb, "p_1040->g_123.sb", print_hash_value);
    transparent_crc(p_1040->g_123.sc, "p_1040->g_123.sc", print_hash_value);
    transparent_crc(p_1040->g_123.sd, "p_1040->g_123.sd", print_hash_value);
    transparent_crc(p_1040->g_123.se, "p_1040->g_123.se", print_hash_value);
    transparent_crc(p_1040->g_123.sf, "p_1040->g_123.sf", print_hash_value);
    transparent_crc(p_1040->g_124.x, "p_1040->g_124.x", print_hash_value);
    transparent_crc(p_1040->g_124.y, "p_1040->g_124.y", print_hash_value);
    transparent_crc(p_1040->g_124.z, "p_1040->g_124.z", print_hash_value);
    transparent_crc(p_1040->g_124.w, "p_1040->g_124.w", print_hash_value);
    transparent_crc(p_1040->g_125.x, "p_1040->g_125.x", print_hash_value);
    transparent_crc(p_1040->g_125.y, "p_1040->g_125.y", print_hash_value);
    transparent_crc(p_1040->g_135.x, "p_1040->g_135.x", print_hash_value);
    transparent_crc(p_1040->g_135.y, "p_1040->g_135.y", print_hash_value);
    transparent_crc(p_1040->g_137, "p_1040->g_137", print_hash_value);
    transparent_crc(p_1040->g_144, "p_1040->g_144", print_hash_value);
    transparent_crc(p_1040->g_147.x, "p_1040->g_147.x", print_hash_value);
    transparent_crc(p_1040->g_147.y, "p_1040->g_147.y", print_hash_value);
    transparent_crc(p_1040->g_147.z, "p_1040->g_147.z", print_hash_value);
    transparent_crc(p_1040->g_147.w, "p_1040->g_147.w", print_hash_value);
    transparent_crc(p_1040->g_186, "p_1040->g_186", print_hash_value);
    transparent_crc(p_1040->g_193.s0, "p_1040->g_193.s0", print_hash_value);
    transparent_crc(p_1040->g_193.s1, "p_1040->g_193.s1", print_hash_value);
    transparent_crc(p_1040->g_193.s2, "p_1040->g_193.s2", print_hash_value);
    transparent_crc(p_1040->g_193.s3, "p_1040->g_193.s3", print_hash_value);
    transparent_crc(p_1040->g_193.s4, "p_1040->g_193.s4", print_hash_value);
    transparent_crc(p_1040->g_193.s5, "p_1040->g_193.s5", print_hash_value);
    transparent_crc(p_1040->g_193.s6, "p_1040->g_193.s6", print_hash_value);
    transparent_crc(p_1040->g_193.s7, "p_1040->g_193.s7", print_hash_value);
    transparent_crc(p_1040->g_193.s8, "p_1040->g_193.s8", print_hash_value);
    transparent_crc(p_1040->g_193.s9, "p_1040->g_193.s9", print_hash_value);
    transparent_crc(p_1040->g_193.sa, "p_1040->g_193.sa", print_hash_value);
    transparent_crc(p_1040->g_193.sb, "p_1040->g_193.sb", print_hash_value);
    transparent_crc(p_1040->g_193.sc, "p_1040->g_193.sc", print_hash_value);
    transparent_crc(p_1040->g_193.sd, "p_1040->g_193.sd", print_hash_value);
    transparent_crc(p_1040->g_193.se, "p_1040->g_193.se", print_hash_value);
    transparent_crc(p_1040->g_193.sf, "p_1040->g_193.sf", print_hash_value);
    transparent_crc(p_1040->g_194.s0, "p_1040->g_194.s0", print_hash_value);
    transparent_crc(p_1040->g_194.s1, "p_1040->g_194.s1", print_hash_value);
    transparent_crc(p_1040->g_194.s2, "p_1040->g_194.s2", print_hash_value);
    transparent_crc(p_1040->g_194.s3, "p_1040->g_194.s3", print_hash_value);
    transparent_crc(p_1040->g_194.s4, "p_1040->g_194.s4", print_hash_value);
    transparent_crc(p_1040->g_194.s5, "p_1040->g_194.s5", print_hash_value);
    transparent_crc(p_1040->g_194.s6, "p_1040->g_194.s6", print_hash_value);
    transparent_crc(p_1040->g_194.s7, "p_1040->g_194.s7", print_hash_value);
    transparent_crc(p_1040->g_194.s8, "p_1040->g_194.s8", print_hash_value);
    transparent_crc(p_1040->g_194.s9, "p_1040->g_194.s9", print_hash_value);
    transparent_crc(p_1040->g_194.sa, "p_1040->g_194.sa", print_hash_value);
    transparent_crc(p_1040->g_194.sb, "p_1040->g_194.sb", print_hash_value);
    transparent_crc(p_1040->g_194.sc, "p_1040->g_194.sc", print_hash_value);
    transparent_crc(p_1040->g_194.sd, "p_1040->g_194.sd", print_hash_value);
    transparent_crc(p_1040->g_194.se, "p_1040->g_194.se", print_hash_value);
    transparent_crc(p_1040->g_194.sf, "p_1040->g_194.sf", print_hash_value);
    transparent_crc(p_1040->g_197.x, "p_1040->g_197.x", print_hash_value);
    transparent_crc(p_1040->g_197.y, "p_1040->g_197.y", print_hash_value);
    transparent_crc(p_1040->g_201.s0, "p_1040->g_201.s0", print_hash_value);
    transparent_crc(p_1040->g_201.s1, "p_1040->g_201.s1", print_hash_value);
    transparent_crc(p_1040->g_201.s2, "p_1040->g_201.s2", print_hash_value);
    transparent_crc(p_1040->g_201.s3, "p_1040->g_201.s3", print_hash_value);
    transparent_crc(p_1040->g_201.s4, "p_1040->g_201.s4", print_hash_value);
    transparent_crc(p_1040->g_201.s5, "p_1040->g_201.s5", print_hash_value);
    transparent_crc(p_1040->g_201.s6, "p_1040->g_201.s6", print_hash_value);
    transparent_crc(p_1040->g_201.s7, "p_1040->g_201.s7", print_hash_value);
    transparent_crc(p_1040->g_203, "p_1040->g_203", print_hash_value);
    transparent_crc(p_1040->g_212.x, "p_1040->g_212.x", print_hash_value);
    transparent_crc(p_1040->g_212.y, "p_1040->g_212.y", print_hash_value);
    transparent_crc(p_1040->g_213.x, "p_1040->g_213.x", print_hash_value);
    transparent_crc(p_1040->g_213.y, "p_1040->g_213.y", print_hash_value);
    transparent_crc(p_1040->g_213.z, "p_1040->g_213.z", print_hash_value);
    transparent_crc(p_1040->g_213.w, "p_1040->g_213.w", print_hash_value);
    transparent_crc(p_1040->g_216.x, "p_1040->g_216.x", print_hash_value);
    transparent_crc(p_1040->g_216.y, "p_1040->g_216.y", print_hash_value);
    transparent_crc(p_1040->g_222.x, "p_1040->g_222.x", print_hash_value);
    transparent_crc(p_1040->g_222.y, "p_1040->g_222.y", print_hash_value);
    transparent_crc(p_1040->g_222.z, "p_1040->g_222.z", print_hash_value);
    transparent_crc(p_1040->g_222.w, "p_1040->g_222.w", print_hash_value);
    transparent_crc(p_1040->g_242.s0, "p_1040->g_242.s0", print_hash_value);
    transparent_crc(p_1040->g_242.s1, "p_1040->g_242.s1", print_hash_value);
    transparent_crc(p_1040->g_242.s2, "p_1040->g_242.s2", print_hash_value);
    transparent_crc(p_1040->g_242.s3, "p_1040->g_242.s3", print_hash_value);
    transparent_crc(p_1040->g_242.s4, "p_1040->g_242.s4", print_hash_value);
    transparent_crc(p_1040->g_242.s5, "p_1040->g_242.s5", print_hash_value);
    transparent_crc(p_1040->g_242.s6, "p_1040->g_242.s6", print_hash_value);
    transparent_crc(p_1040->g_242.s7, "p_1040->g_242.s7", print_hash_value);
    transparent_crc(p_1040->g_242.s8, "p_1040->g_242.s8", print_hash_value);
    transparent_crc(p_1040->g_242.s9, "p_1040->g_242.s9", print_hash_value);
    transparent_crc(p_1040->g_242.sa, "p_1040->g_242.sa", print_hash_value);
    transparent_crc(p_1040->g_242.sb, "p_1040->g_242.sb", print_hash_value);
    transparent_crc(p_1040->g_242.sc, "p_1040->g_242.sc", print_hash_value);
    transparent_crc(p_1040->g_242.sd, "p_1040->g_242.sd", print_hash_value);
    transparent_crc(p_1040->g_242.se, "p_1040->g_242.se", print_hash_value);
    transparent_crc(p_1040->g_242.sf, "p_1040->g_242.sf", print_hash_value);
    transparent_crc(p_1040->g_253.x, "p_1040->g_253.x", print_hash_value);
    transparent_crc(p_1040->g_253.y, "p_1040->g_253.y", print_hash_value);
    transparent_crc(p_1040->g_253.z, "p_1040->g_253.z", print_hash_value);
    transparent_crc(p_1040->g_253.w, "p_1040->g_253.w", print_hash_value);
    transparent_crc(p_1040->g_281.x, "p_1040->g_281.x", print_hash_value);
    transparent_crc(p_1040->g_281.y, "p_1040->g_281.y", print_hash_value);
    transparent_crc(p_1040->g_287.x, "p_1040->g_287.x", print_hash_value);
    transparent_crc(p_1040->g_287.y, "p_1040->g_287.y", print_hash_value);
    transparent_crc(p_1040->g_287.z, "p_1040->g_287.z", print_hash_value);
    transparent_crc(p_1040->g_287.w, "p_1040->g_287.w", print_hash_value);
    transparent_crc(p_1040->g_317.s0, "p_1040->g_317.s0", print_hash_value);
    transparent_crc(p_1040->g_317.s1, "p_1040->g_317.s1", print_hash_value);
    transparent_crc(p_1040->g_317.s2, "p_1040->g_317.s2", print_hash_value);
    transparent_crc(p_1040->g_317.s3, "p_1040->g_317.s3", print_hash_value);
    transparent_crc(p_1040->g_317.s4, "p_1040->g_317.s4", print_hash_value);
    transparent_crc(p_1040->g_317.s5, "p_1040->g_317.s5", print_hash_value);
    transparent_crc(p_1040->g_317.s6, "p_1040->g_317.s6", print_hash_value);
    transparent_crc(p_1040->g_317.s7, "p_1040->g_317.s7", print_hash_value);
    transparent_crc(p_1040->g_354, "p_1040->g_354", print_hash_value);
    transparent_crc(p_1040->g_359.s0, "p_1040->g_359.s0", print_hash_value);
    transparent_crc(p_1040->g_359.s1, "p_1040->g_359.s1", print_hash_value);
    transparent_crc(p_1040->g_359.s2, "p_1040->g_359.s2", print_hash_value);
    transparent_crc(p_1040->g_359.s3, "p_1040->g_359.s3", print_hash_value);
    transparent_crc(p_1040->g_359.s4, "p_1040->g_359.s4", print_hash_value);
    transparent_crc(p_1040->g_359.s5, "p_1040->g_359.s5", print_hash_value);
    transparent_crc(p_1040->g_359.s6, "p_1040->g_359.s6", print_hash_value);
    transparent_crc(p_1040->g_359.s7, "p_1040->g_359.s7", print_hash_value);
    transparent_crc(p_1040->g_364.s0, "p_1040->g_364.s0", print_hash_value);
    transparent_crc(p_1040->g_364.s1, "p_1040->g_364.s1", print_hash_value);
    transparent_crc(p_1040->g_364.s2, "p_1040->g_364.s2", print_hash_value);
    transparent_crc(p_1040->g_364.s3, "p_1040->g_364.s3", print_hash_value);
    transparent_crc(p_1040->g_364.s4, "p_1040->g_364.s4", print_hash_value);
    transparent_crc(p_1040->g_364.s5, "p_1040->g_364.s5", print_hash_value);
    transparent_crc(p_1040->g_364.s6, "p_1040->g_364.s6", print_hash_value);
    transparent_crc(p_1040->g_364.s7, "p_1040->g_364.s7", print_hash_value);
    transparent_crc(p_1040->g_375.x, "p_1040->g_375.x", print_hash_value);
    transparent_crc(p_1040->g_375.y, "p_1040->g_375.y", print_hash_value);
    transparent_crc(p_1040->g_378, "p_1040->g_378", print_hash_value);
    transparent_crc(p_1040->g_395.s0, "p_1040->g_395.s0", print_hash_value);
    transparent_crc(p_1040->g_395.s1, "p_1040->g_395.s1", print_hash_value);
    transparent_crc(p_1040->g_395.s2, "p_1040->g_395.s2", print_hash_value);
    transparent_crc(p_1040->g_395.s3, "p_1040->g_395.s3", print_hash_value);
    transparent_crc(p_1040->g_395.s4, "p_1040->g_395.s4", print_hash_value);
    transparent_crc(p_1040->g_395.s5, "p_1040->g_395.s5", print_hash_value);
    transparent_crc(p_1040->g_395.s6, "p_1040->g_395.s6", print_hash_value);
    transparent_crc(p_1040->g_395.s7, "p_1040->g_395.s7", print_hash_value);
    transparent_crc(p_1040->g_395.s8, "p_1040->g_395.s8", print_hash_value);
    transparent_crc(p_1040->g_395.s9, "p_1040->g_395.s9", print_hash_value);
    transparent_crc(p_1040->g_395.sa, "p_1040->g_395.sa", print_hash_value);
    transparent_crc(p_1040->g_395.sb, "p_1040->g_395.sb", print_hash_value);
    transparent_crc(p_1040->g_395.sc, "p_1040->g_395.sc", print_hash_value);
    transparent_crc(p_1040->g_395.sd, "p_1040->g_395.sd", print_hash_value);
    transparent_crc(p_1040->g_395.se, "p_1040->g_395.se", print_hash_value);
    transparent_crc(p_1040->g_395.sf, "p_1040->g_395.sf", print_hash_value);
    transparent_crc(p_1040->g_454.s0, "p_1040->g_454.s0", print_hash_value);
    transparent_crc(p_1040->g_454.s1, "p_1040->g_454.s1", print_hash_value);
    transparent_crc(p_1040->g_454.s2, "p_1040->g_454.s2", print_hash_value);
    transparent_crc(p_1040->g_454.s3, "p_1040->g_454.s3", print_hash_value);
    transparent_crc(p_1040->g_454.s4, "p_1040->g_454.s4", print_hash_value);
    transparent_crc(p_1040->g_454.s5, "p_1040->g_454.s5", print_hash_value);
    transparent_crc(p_1040->g_454.s6, "p_1040->g_454.s6", print_hash_value);
    transparent_crc(p_1040->g_454.s7, "p_1040->g_454.s7", print_hash_value);
    transparent_crc(p_1040->g_454.s8, "p_1040->g_454.s8", print_hash_value);
    transparent_crc(p_1040->g_454.s9, "p_1040->g_454.s9", print_hash_value);
    transparent_crc(p_1040->g_454.sa, "p_1040->g_454.sa", print_hash_value);
    transparent_crc(p_1040->g_454.sb, "p_1040->g_454.sb", print_hash_value);
    transparent_crc(p_1040->g_454.sc, "p_1040->g_454.sc", print_hash_value);
    transparent_crc(p_1040->g_454.sd, "p_1040->g_454.sd", print_hash_value);
    transparent_crc(p_1040->g_454.se, "p_1040->g_454.se", print_hash_value);
    transparent_crc(p_1040->g_454.sf, "p_1040->g_454.sf", print_hash_value);
    transparent_crc(p_1040->g_463.x, "p_1040->g_463.x", print_hash_value);
    transparent_crc(p_1040->g_463.y, "p_1040->g_463.y", print_hash_value);
    transparent_crc(p_1040->g_507.s0, "p_1040->g_507.s0", print_hash_value);
    transparent_crc(p_1040->g_507.s1, "p_1040->g_507.s1", print_hash_value);
    transparent_crc(p_1040->g_507.s2, "p_1040->g_507.s2", print_hash_value);
    transparent_crc(p_1040->g_507.s3, "p_1040->g_507.s3", print_hash_value);
    transparent_crc(p_1040->g_507.s4, "p_1040->g_507.s4", print_hash_value);
    transparent_crc(p_1040->g_507.s5, "p_1040->g_507.s5", print_hash_value);
    transparent_crc(p_1040->g_507.s6, "p_1040->g_507.s6", print_hash_value);
    transparent_crc(p_1040->g_507.s7, "p_1040->g_507.s7", print_hash_value);
    transparent_crc(p_1040->g_507.s8, "p_1040->g_507.s8", print_hash_value);
    transparent_crc(p_1040->g_507.s9, "p_1040->g_507.s9", print_hash_value);
    transparent_crc(p_1040->g_507.sa, "p_1040->g_507.sa", print_hash_value);
    transparent_crc(p_1040->g_507.sb, "p_1040->g_507.sb", print_hash_value);
    transparent_crc(p_1040->g_507.sc, "p_1040->g_507.sc", print_hash_value);
    transparent_crc(p_1040->g_507.sd, "p_1040->g_507.sd", print_hash_value);
    transparent_crc(p_1040->g_507.se, "p_1040->g_507.se", print_hash_value);
    transparent_crc(p_1040->g_507.sf, "p_1040->g_507.sf", print_hash_value);
    transparent_crc(p_1040->g_508.x, "p_1040->g_508.x", print_hash_value);
    transparent_crc(p_1040->g_508.y, "p_1040->g_508.y", print_hash_value);
    transparent_crc(p_1040->g_521, "p_1040->g_521", print_hash_value);
    transparent_crc(p_1040->g_542, "p_1040->g_542", print_hash_value);
    transparent_crc(p_1040->g_561.s0, "p_1040->g_561.s0", print_hash_value);
    transparent_crc(p_1040->g_561.s1, "p_1040->g_561.s1", print_hash_value);
    transparent_crc(p_1040->g_561.s2, "p_1040->g_561.s2", print_hash_value);
    transparent_crc(p_1040->g_561.s3, "p_1040->g_561.s3", print_hash_value);
    transparent_crc(p_1040->g_561.s4, "p_1040->g_561.s4", print_hash_value);
    transparent_crc(p_1040->g_561.s5, "p_1040->g_561.s5", print_hash_value);
    transparent_crc(p_1040->g_561.s6, "p_1040->g_561.s6", print_hash_value);
    transparent_crc(p_1040->g_561.s7, "p_1040->g_561.s7", print_hash_value);
    transparent_crc(p_1040->g_577.x, "p_1040->g_577.x", print_hash_value);
    transparent_crc(p_1040->g_577.y, "p_1040->g_577.y", print_hash_value);
    transparent_crc(p_1040->g_584.s0, "p_1040->g_584.s0", print_hash_value);
    transparent_crc(p_1040->g_584.s1, "p_1040->g_584.s1", print_hash_value);
    transparent_crc(p_1040->g_584.s2, "p_1040->g_584.s2", print_hash_value);
    transparent_crc(p_1040->g_584.s3, "p_1040->g_584.s3", print_hash_value);
    transparent_crc(p_1040->g_584.s4, "p_1040->g_584.s4", print_hash_value);
    transparent_crc(p_1040->g_584.s5, "p_1040->g_584.s5", print_hash_value);
    transparent_crc(p_1040->g_584.s6, "p_1040->g_584.s6", print_hash_value);
    transparent_crc(p_1040->g_584.s7, "p_1040->g_584.s7", print_hash_value);
    transparent_crc(p_1040->g_609.s0, "p_1040->g_609.s0", print_hash_value);
    transparent_crc(p_1040->g_609.s1, "p_1040->g_609.s1", print_hash_value);
    transparent_crc(p_1040->g_609.s2, "p_1040->g_609.s2", print_hash_value);
    transparent_crc(p_1040->g_609.s3, "p_1040->g_609.s3", print_hash_value);
    transparent_crc(p_1040->g_609.s4, "p_1040->g_609.s4", print_hash_value);
    transparent_crc(p_1040->g_609.s5, "p_1040->g_609.s5", print_hash_value);
    transparent_crc(p_1040->g_609.s6, "p_1040->g_609.s6", print_hash_value);
    transparent_crc(p_1040->g_609.s7, "p_1040->g_609.s7", print_hash_value);
    transparent_crc(p_1040->g_609.s8, "p_1040->g_609.s8", print_hash_value);
    transparent_crc(p_1040->g_609.s9, "p_1040->g_609.s9", print_hash_value);
    transparent_crc(p_1040->g_609.sa, "p_1040->g_609.sa", print_hash_value);
    transparent_crc(p_1040->g_609.sb, "p_1040->g_609.sb", print_hash_value);
    transparent_crc(p_1040->g_609.sc, "p_1040->g_609.sc", print_hash_value);
    transparent_crc(p_1040->g_609.sd, "p_1040->g_609.sd", print_hash_value);
    transparent_crc(p_1040->g_609.se, "p_1040->g_609.se", print_hash_value);
    transparent_crc(p_1040->g_609.sf, "p_1040->g_609.sf", print_hash_value);
    transparent_crc(p_1040->g_841, "p_1040->g_841", print_hash_value);
    transparent_crc(p_1040->g_920.s0, "p_1040->g_920.s0", print_hash_value);
    transparent_crc(p_1040->g_920.s1, "p_1040->g_920.s1", print_hash_value);
    transparent_crc(p_1040->g_920.s2, "p_1040->g_920.s2", print_hash_value);
    transparent_crc(p_1040->g_920.s3, "p_1040->g_920.s3", print_hash_value);
    transparent_crc(p_1040->g_920.s4, "p_1040->g_920.s4", print_hash_value);
    transparent_crc(p_1040->g_920.s5, "p_1040->g_920.s5", print_hash_value);
    transparent_crc(p_1040->g_920.s6, "p_1040->g_920.s6", print_hash_value);
    transparent_crc(p_1040->g_920.s7, "p_1040->g_920.s7", print_hash_value);
    transparent_crc(p_1040->g_920.s8, "p_1040->g_920.s8", print_hash_value);
    transparent_crc(p_1040->g_920.s9, "p_1040->g_920.s9", print_hash_value);
    transparent_crc(p_1040->g_920.sa, "p_1040->g_920.sa", print_hash_value);
    transparent_crc(p_1040->g_920.sb, "p_1040->g_920.sb", print_hash_value);
    transparent_crc(p_1040->g_920.sc, "p_1040->g_920.sc", print_hash_value);
    transparent_crc(p_1040->g_920.sd, "p_1040->g_920.sd", print_hash_value);
    transparent_crc(p_1040->g_920.se, "p_1040->g_920.se", print_hash_value);
    transparent_crc(p_1040->g_920.sf, "p_1040->g_920.sf", print_hash_value);
    transparent_crc(p_1040->g_934.x, "p_1040->g_934.x", print_hash_value);
    transparent_crc(p_1040->g_934.y, "p_1040->g_934.y", print_hash_value);
    transparent_crc(p_1040->g_948.x, "p_1040->g_948.x", print_hash_value);
    transparent_crc(p_1040->g_948.y, "p_1040->g_948.y", print_hash_value);
    transparent_crc(p_1040->g_948.z, "p_1040->g_948.z", print_hash_value);
    transparent_crc(p_1040->g_948.w, "p_1040->g_948.w", print_hash_value);
    transparent_crc(p_1040->g_953.x, "p_1040->g_953.x", print_hash_value);
    transparent_crc(p_1040->g_953.y, "p_1040->g_953.y", print_hash_value);
    transparent_crc(p_1040->g_955.s0, "p_1040->g_955.s0", print_hash_value);
    transparent_crc(p_1040->g_955.s1, "p_1040->g_955.s1", print_hash_value);
    transparent_crc(p_1040->g_955.s2, "p_1040->g_955.s2", print_hash_value);
    transparent_crc(p_1040->g_955.s3, "p_1040->g_955.s3", print_hash_value);
    transparent_crc(p_1040->g_955.s4, "p_1040->g_955.s4", print_hash_value);
    transparent_crc(p_1040->g_955.s5, "p_1040->g_955.s5", print_hash_value);
    transparent_crc(p_1040->g_955.s6, "p_1040->g_955.s6", print_hash_value);
    transparent_crc(p_1040->g_955.s7, "p_1040->g_955.s7", print_hash_value);
    transparent_crc(p_1040->g_962.s0, "p_1040->g_962.s0", print_hash_value);
    transparent_crc(p_1040->g_962.s1, "p_1040->g_962.s1", print_hash_value);
    transparent_crc(p_1040->g_962.s2, "p_1040->g_962.s2", print_hash_value);
    transparent_crc(p_1040->g_962.s3, "p_1040->g_962.s3", print_hash_value);
    transparent_crc(p_1040->g_962.s4, "p_1040->g_962.s4", print_hash_value);
    transparent_crc(p_1040->g_962.s5, "p_1040->g_962.s5", print_hash_value);
    transparent_crc(p_1040->g_962.s6, "p_1040->g_962.s6", print_hash_value);
    transparent_crc(p_1040->g_962.s7, "p_1040->g_962.s7", print_hash_value);
    transparent_crc(p_1040->g_962.s8, "p_1040->g_962.s8", print_hash_value);
    transparent_crc(p_1040->g_962.s9, "p_1040->g_962.s9", print_hash_value);
    transparent_crc(p_1040->g_962.sa, "p_1040->g_962.sa", print_hash_value);
    transparent_crc(p_1040->g_962.sb, "p_1040->g_962.sb", print_hash_value);
    transparent_crc(p_1040->g_962.sc, "p_1040->g_962.sc", print_hash_value);
    transparent_crc(p_1040->g_962.sd, "p_1040->g_962.sd", print_hash_value);
    transparent_crc(p_1040->g_962.se, "p_1040->g_962.se", print_hash_value);
    transparent_crc(p_1040->g_962.sf, "p_1040->g_962.sf", print_hash_value);
    transparent_crc(p_1040->g_963.s0, "p_1040->g_963.s0", print_hash_value);
    transparent_crc(p_1040->g_963.s1, "p_1040->g_963.s1", print_hash_value);
    transparent_crc(p_1040->g_963.s2, "p_1040->g_963.s2", print_hash_value);
    transparent_crc(p_1040->g_963.s3, "p_1040->g_963.s3", print_hash_value);
    transparent_crc(p_1040->g_963.s4, "p_1040->g_963.s4", print_hash_value);
    transparent_crc(p_1040->g_963.s5, "p_1040->g_963.s5", print_hash_value);
    transparent_crc(p_1040->g_963.s6, "p_1040->g_963.s6", print_hash_value);
    transparent_crc(p_1040->g_963.s7, "p_1040->g_963.s7", print_hash_value);
    transparent_crc(p_1040->g_963.s8, "p_1040->g_963.s8", print_hash_value);
    transparent_crc(p_1040->g_963.s9, "p_1040->g_963.s9", print_hash_value);
    transparent_crc(p_1040->g_963.sa, "p_1040->g_963.sa", print_hash_value);
    transparent_crc(p_1040->g_963.sb, "p_1040->g_963.sb", print_hash_value);
    transparent_crc(p_1040->g_963.sc, "p_1040->g_963.sc", print_hash_value);
    transparent_crc(p_1040->g_963.sd, "p_1040->g_963.sd", print_hash_value);
    transparent_crc(p_1040->g_963.se, "p_1040->g_963.se", print_hash_value);
    transparent_crc(p_1040->g_963.sf, "p_1040->g_963.sf", print_hash_value);
    transparent_crc(p_1040->g_966.s0, "p_1040->g_966.s0", print_hash_value);
    transparent_crc(p_1040->g_966.s1, "p_1040->g_966.s1", print_hash_value);
    transparent_crc(p_1040->g_966.s2, "p_1040->g_966.s2", print_hash_value);
    transparent_crc(p_1040->g_966.s3, "p_1040->g_966.s3", print_hash_value);
    transparent_crc(p_1040->g_966.s4, "p_1040->g_966.s4", print_hash_value);
    transparent_crc(p_1040->g_966.s5, "p_1040->g_966.s5", print_hash_value);
    transparent_crc(p_1040->g_966.s6, "p_1040->g_966.s6", print_hash_value);
    transparent_crc(p_1040->g_966.s7, "p_1040->g_966.s7", print_hash_value);
    transparent_crc(p_1040->g_977, "p_1040->g_977", print_hash_value);
    transparent_crc(p_1040->g_982.s0, "p_1040->g_982.s0", print_hash_value);
    transparent_crc(p_1040->g_982.s1, "p_1040->g_982.s1", print_hash_value);
    transparent_crc(p_1040->g_982.s2, "p_1040->g_982.s2", print_hash_value);
    transparent_crc(p_1040->g_982.s3, "p_1040->g_982.s3", print_hash_value);
    transparent_crc(p_1040->g_982.s4, "p_1040->g_982.s4", print_hash_value);
    transparent_crc(p_1040->g_982.s5, "p_1040->g_982.s5", print_hash_value);
    transparent_crc(p_1040->g_982.s6, "p_1040->g_982.s6", print_hash_value);
    transparent_crc(p_1040->g_982.s7, "p_1040->g_982.s7", print_hash_value);
    transparent_crc(p_1040->g_999.x, "p_1040->g_999.x", print_hash_value);
    transparent_crc(p_1040->g_999.y, "p_1040->g_999.y", print_hash_value);
    transparent_crc(p_1040->g_999.z, "p_1040->g_999.z", print_hash_value);
    transparent_crc(p_1040->g_999.w, "p_1040->g_999.w", print_hash_value);
    transparent_crc(p_1040->g_1004.s0, "p_1040->g_1004.s0", print_hash_value);
    transparent_crc(p_1040->g_1004.s1, "p_1040->g_1004.s1", print_hash_value);
    transparent_crc(p_1040->g_1004.s2, "p_1040->g_1004.s2", print_hash_value);
    transparent_crc(p_1040->g_1004.s3, "p_1040->g_1004.s3", print_hash_value);
    transparent_crc(p_1040->g_1004.s4, "p_1040->g_1004.s4", print_hash_value);
    transparent_crc(p_1040->g_1004.s5, "p_1040->g_1004.s5", print_hash_value);
    transparent_crc(p_1040->g_1004.s6, "p_1040->g_1004.s6", print_hash_value);
    transparent_crc(p_1040->g_1004.s7, "p_1040->g_1004.s7", print_hash_value);
    transparent_crc(p_1040->g_1004.s8, "p_1040->g_1004.s8", print_hash_value);
    transparent_crc(p_1040->g_1004.s9, "p_1040->g_1004.s9", print_hash_value);
    transparent_crc(p_1040->g_1004.sa, "p_1040->g_1004.sa", print_hash_value);
    transparent_crc(p_1040->g_1004.sb, "p_1040->g_1004.sb", print_hash_value);
    transparent_crc(p_1040->g_1004.sc, "p_1040->g_1004.sc", print_hash_value);
    transparent_crc(p_1040->g_1004.sd, "p_1040->g_1004.sd", print_hash_value);
    transparent_crc(p_1040->g_1004.se, "p_1040->g_1004.se", print_hash_value);
    transparent_crc(p_1040->g_1004.sf, "p_1040->g_1004.sf", print_hash_value);
    transparent_crc(p_1040->v_collective, "p_1040->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 15; i++)
            transparent_crc(p_1040->g_special_values[i + 15 * get_linear_group_id()], "p_1040->g_special_values[i + 15 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 15; i++)
            transparent_crc(p_1040->l_special_values[i], "p_1040->l_special_values[i]", print_hash_value);
    transparent_crc(p_1040->l_comm_values[get_linear_local_id()], "p_1040->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1040->g_comm_values[get_linear_group_id() * 18 + get_linear_local_id()], "p_1040->g_comm_values[get_linear_group_id() * 18 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
