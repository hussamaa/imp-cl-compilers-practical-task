// --atomics 92 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 55,53,1 -l 55,1,1
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

__constant uint32_t permutations[10][55] = {
{15,54,10,23,22,51,24,50,33,28,35,7,41,25,19,5,27,6,49,20,40,48,0,17,32,52,44,38,13,18,45,47,11,2,8,30,29,9,36,16,37,26,42,43,21,31,39,34,14,1,3,12,53,46,4}, // permutation 0
{37,32,35,40,49,27,43,12,31,9,28,26,10,23,18,5,8,54,13,19,34,21,44,29,15,33,3,50,4,17,16,38,11,2,53,22,1,14,6,36,7,20,25,52,47,51,24,30,45,0,39,41,42,46,48}, // permutation 1
{44,25,29,30,2,22,11,45,47,26,36,28,50,32,21,37,34,38,46,0,40,33,35,52,42,53,7,20,5,43,39,4,15,51,41,9,18,31,49,27,48,1,14,8,54,16,24,23,12,3,10,13,6,19,17}, // permutation 2
{3,37,22,50,45,5,23,13,0,33,28,20,16,44,47,30,15,2,53,1,11,12,14,31,8,21,41,40,29,34,17,26,27,49,54,10,25,9,24,6,7,18,48,42,52,32,35,43,4,38,19,36,46,39,51}, // permutation 3
{1,33,12,47,13,24,0,4,53,36,44,7,38,42,27,11,21,41,25,30,54,48,16,14,45,39,35,40,17,49,10,9,18,34,32,23,28,52,43,51,46,6,15,3,20,5,29,2,50,31,19,37,8,22,26}, // permutation 4
{26,35,48,47,54,53,40,7,8,1,11,3,46,50,36,24,6,14,25,21,10,17,38,32,20,45,22,43,44,39,29,2,9,34,31,5,16,42,27,23,4,12,52,18,49,15,41,19,51,13,28,0,30,33,37}, // permutation 5
{21,46,38,28,23,26,44,27,7,43,51,5,12,11,36,45,49,24,1,42,18,14,13,4,30,17,10,35,47,3,39,41,54,6,52,15,9,34,31,25,33,0,53,16,50,2,37,32,20,29,8,48,40,22,19}, // permutation 6
{43,25,14,30,35,3,36,24,5,54,50,32,53,48,39,1,16,21,41,51,9,28,7,33,44,47,15,52,31,38,6,22,4,23,29,19,11,12,18,8,42,17,37,26,46,49,10,2,13,27,20,45,40,0,34}, // permutation 7
{21,25,7,32,3,33,22,39,28,15,0,18,23,42,49,30,26,54,48,31,45,16,27,20,11,19,14,52,13,35,43,17,6,40,34,44,47,24,5,51,37,53,38,12,41,1,29,4,9,36,10,50,46,8,2}, // permutation 8
{1,46,27,41,23,20,5,45,53,3,19,22,54,12,40,4,8,25,42,32,36,28,2,47,34,21,17,14,29,11,26,43,13,7,39,9,30,51,35,33,38,0,44,18,15,31,49,16,48,6,24,52,50,10,37} // permutation 9
};

// Seed: 1988156416

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
};

union U1 {
   int8_t  f0;
   uint32_t  f1;
};

union U2 {
   int8_t  f0;
   int32_t  f1;
};

struct S3 {
    VECTOR(uint8_t, 4) g_24;
    volatile VECTOR(uint8_t, 2) g_26;
    VECTOR(uint8_t, 2) g_49;
    union U1 g_64;
    int32_t g_70;
    volatile int32_t g_76;
    volatile int32_t *g_75;
    volatile VECTOR(uint16_t, 4) g_109;
    uint16_t g_111[2];
    uint16_t g_114;
    VECTOR(uint16_t, 2) g_115;
    uint16_t g_120;
    int32_t g_122;
    VECTOR(uint16_t, 16) g_133;
    VECTOR(uint16_t, 16) g_135;
    int16_t g_137;
    int64_t g_139;
    VECTOR(int16_t, 8) g_144;
    VECTOR(uint8_t, 16) g_145;
    uint64_t g_146;
    int32_t *g_150;
    int32_t ** volatile g_149;
    int32_t g_164;
    int64_t g_165;
    int32_t g_168;
    volatile int16_t g_169;
    volatile int8_t g_170;
    volatile uint16_t g_174;
    int8_t g_201;
    volatile int32_t g_202[5];
    int16_t g_203[10];
    volatile uint32_t g_204;
    struct S0 g_243;
    int32_t ** volatile g_259;
    int32_t ** volatile g_260;
    union U2 g_552;
    union U2 *g_551[8][10][3];
    volatile int16_t g_569[3][9];
    int32_t g_572;
    int32_t g_573;
    uint8_t g_574;
    union U2 *g_600;
    int16_t g_615;
    int32_t g_616;
    int8_t g_617;
    volatile uint32_t g_618;
    uint32_t g_638;
    volatile VECTOR(int32_t, 4) g_668;
    volatile VECTOR(int16_t, 16) g_683;
    VECTOR(uint8_t, 4) g_689;
    uint16_t g_694[6];
    int16_t g_695;
    struct S0 * volatile g_699;
    struct S0 g_700[8];
    int32_t ** volatile g_702;
    int32_t ** volatile g_704;
    uint32_t g_706;
    volatile uint64_t g_720;
    uint64_t g_735[10][3][6];
    uint8_t g_904;
    VECTOR(int8_t, 16) g_907;
    VECTOR(int64_t, 2) g_918;
    volatile VECTOR(int64_t, 8) g_919;
    volatile VECTOR(int64_t, 16) g_920;
    union U1 *g_933;
    union U1 ** volatile g_932;
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
int32_t  func_1(struct S3 * p_936);
int32_t  func_2(uint64_t  p_3, uint64_t  p_4, uint8_t  p_5, struct S3 * p_936);
int64_t  func_11(int32_t  p_12, uint64_t  p_13, uint32_t  p_14, uint8_t  p_15, struct S3 * p_936);
int64_t  func_18(uint64_t  p_19, int64_t  p_20, uint32_t  p_21, struct S3 * p_936);
struct S0  func_27(int8_t  p_28, struct S0  p_29, struct S3 * p_936);
int64_t  func_31(union U2  p_32, struct S3 * p_936);
struct S0  func_34(uint32_t  p_35, struct S3 * p_936);
uint32_t  func_36(uint64_t  p_37, uint8_t  p_38, struct S3 * p_936);
uint64_t  func_54(int64_t  p_55, int8_t  p_56, uint32_t  p_57, uint32_t  p_58, int16_t  p_59, struct S3 * p_936);
uint32_t  func_60(union U1  p_61, uint32_t  p_62, int64_t  p_63, struct S3 * p_936);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_936->g_comm_values p_936->g_24 p_936->g_26 p_936->l_comm_values p_936->g_49 p_936->g_64 p_936->g_70 p_936->g_75 p_936->g_76 p_936->g_109 p_936->g_64.f0 p_936->g_115 p_936->g_120 p_936->g_122 p_936->g_133 p_936->g_135 p_936->g_139 p_936->g_144 p_936->g_137 p_936->g_145 p_936->g_146 p_936->g_111 p_936->g_149 p_936->g_150 p_936->g_174 p_936->g_168 p_936->g_204 p_936->g_202 p_936->g_243 p_936->g_164 p_936->g_259 p_936->g_551 p_936->g_165 p_936->g_574 p_936->g_114 p_936->g_618 p_936->g_573 p_936->g_201 p_936->g_203 p_936->g_64.f1 p_936->g_668 p_936->g_638 p_936->g_683 p_936->g_689 p_936->g_694 p_936->g_695 p_936->g_615 p_936->g_699 p_936->g_700 p_936->g_702 p_936->g_704 p_936->g_706 p_936->g_720 p_936->g_552.f0 p_936->g_616 p_936->g_617 p_936->g_904 p_936->g_907 p_936->g_918 p_936->g_919 p_936->g_920 p_936->g_932
 * writes: p_936->g_70 p_936->g_76 p_936->g_111 p_936->g_114 p_936->g_120 p_936->g_122 p_936->g_137 p_936->g_139 p_936->g_146 p_936->g_150 p_936->g_174 p_936->g_168 p_936->g_204 p_936->g_64 p_936->l_comm_values p_936->g_144 p_936->g_165 p_936->g_574 p_936->g_551 p_936->g_600 p_936->g_618 p_936->g_243 p_936->g_201 p_936->g_49 p_936->g_638 p_936->g_145 p_936->g_573 p_936->g_706 p_936->g_720 p_936->g_735 p_936->g_904 p_936->g_164 p_936->g_933
 */
int32_t  func_1(struct S3 * p_936)
{ /* block id: 4 */
    int8_t l_6[8][2][4] = {{{0L,0x03L,0x03L,0L},{0L,0x03L,0x03L,0L}},{{0L,0x03L,0x03L,0L},{0L,0x03L,0x03L,0L}},{{0L,0x03L,0x03L,0L},{0L,0x03L,0x03L,0L}},{{0L,0x03L,0x03L,0L},{0L,0x03L,0x03L,0L}},{{0L,0x03L,0x03L,0L},{0L,0x03L,0x03L,0L}},{{0L,0x03L,0x03L,0L},{0L,0x03L,0x03L,0L}},{{0L,0x03L,0x03L,0L},{0L,0x03L,0x03L,0L}},{{0L,0x03L,0x03L,0L},{0L,0x03L,0x03L,0L}}};
    VECTOR(int32_t, 8) l_25 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3DDB2097L), 0x3DDB2097L), 0x3DDB2097L, 1L, 0x3DDB2097L);
    VECTOR(int64_t, 8) l_30 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x2FECEB2CFB11589AL), 0x2FECEB2CFB11589AL), 0x2FECEB2CFB11589AL, 0L, 0x2FECEB2CFB11589AL);
    union U2 l_33 = {0x11L};
    uint32_t *l_705 = (void*)0;
    int32_t l_750[10] = {(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L)};
    uint16_t l_751 = 0xCB34L;
    int32_t *l_903[4][6][4] = {{{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616}},{{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616}},{{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616}},{{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616},{&p_936->g_616,&p_936->g_616,&p_936->g_616,&p_936->g_616}}};
    uint64_t l_905 = 18446744073709551615UL;
    VECTOR(int8_t, 2) l_906 = (VECTOR(int8_t, 2))(0x41L, 0x01L);
    int i, j, k;
    p_936->g_904 &= (func_2((+((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(3UL, 0UL, 0xDBDA7FE64FD9E2A8L, 0xA18E418A52733582L)), ((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(int64_t, 2))(0x58E17C10977A1245L, (-2L))).xxxyxyxxxyxxyyyx, ((VECTOR(int64_t, 16))(l_6[4][0][2], 0L, 0x2894FF5452FA814BL, (p_936->g_comm_values[p_936->tid] , (safe_lshift_func_int8_t_s_s(l_6[3][1][3], 1))), 0x0C3F30B91EE4CFF1L, (((safe_mod_func_uint64_t_u_u(p_936->g_comm_values[p_936->tid], func_11((safe_mod_func_uint16_t_u_u(0x8BBEL, (func_18((safe_mul_func_int16_t_s_s(l_6[4][0][2], (l_6[4][0][2] | ((VECTOR(uint8_t, 16))(p_936->g_24.yzxzyxxzxyzwzxyz)).s9))), p_936->g_24.x, (p_936->g_706 ^= ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 8))(l_25.s66573401)).s5443712172051515))).sed76, ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))(0x7EL, ((VECTOR(int8_t, 2))(0x4EL, 0x56L)), 0x59L)), ((VECTOR(uint8_t, 16))(p_936->g_26.xxxxxxyyyyxxyyxx)).s5f6b))).hi, ((VECTOR(uint16_t, 8))((func_27((((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 16))(l_30.s4502303545435575)).hi, (int64_t)func_31(l_33, p_936)))).s7 , l_6[6][0][3]), p_936->g_700[6], p_936) , GROUP_DIVERGE(1, 1)), 0xD736L, 5UL, 0UL, ((VECTOR(uint16_t, 2))(0UL)), 0x5AB9L, 8UL)).s27))).xxxyyxyy, ((VECTOR(int32_t, 8))(0L))))).s50)), 4294967295UL, 0x2410E979L)).zzxzzywxwzzxzwyx)).sd501, ((VECTOR(uint32_t, 4))(0x60F38D85L)), ((VECTOR(uint32_t, 4))(9UL)))))))), l_6[4][0][2], 1UL, 4294967295UL, 0UL)))).s7403120201463701)).s6), p_936) ^ p_936->g_552.f0))), l_30.s7, p_936->g_115.x, l_25.s4, p_936))) != p_936->g_133.s9) && l_750[8]), (-1L), ((VECTOR(int64_t, 8))(1L)), 0x6CFEA63A99F45A91L))))).s2b9f))).w), p_936->g_133.s7, l_751, p_936) > l_750[8]);
    if (l_905)
    { /* block id: 450 */
        int16_t *l_908 = &p_936->g_695;
        union U2 l_923 = {0x50L};
        int8_t *l_926 = &p_936->g_64.f0;
        int32_t **l_927 = &l_903[3][1][3];
        struct S0 *l_928 = &p_936->g_243;
        (*l_927) = (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(l_906.xx)).xyyyxxxyxyxxyxyx, ((VECTOR(int8_t, 4))(p_936->g_907.scf74)).yyyyxwzwzwzyxwwx))).s5f90, (int8_t)((+((*l_926) = ((l_908 != (void*)0) , (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0x77112866L, (0x12L && (((p_936->g_706 ^= (safe_unary_minus_func_uint64_t_u((safe_div_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (((((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))(p_936->g_918.xx)).xxyx, ((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 8))(p_936->g_919.s15243306)).s06))).xyxyxyyyxyxxyxyy)).odd, ((VECTOR(int64_t, 16))(p_936->g_920.s3ce7f25231103dfd)).hi))).even))).xwywyxyx, ((VECTOR(int64_t, 8))(0x4C68007804FB3911L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((safe_div_func_uint16_t_u_u((l_923 , p_936->g_202[4]), (safe_lshift_func_int16_t_s_u(((GROUP_DIVERGE(1, 1) , ((p_936->g_120 , (p_936->g_comm_values[p_936->tid] , &l_923)) == (void*)0)) <= p_936->g_638), FAKE_DIVERGE(p_936->local_2_offset, get_local_id(2), 10))))) , p_936->g_111[1]), p_936->g_668.y, 0x27283C4B06E5D670L, 0x60326ABDEF6FC6B2L, 0x2FB5F544C537195DL, ((VECTOR(int64_t, 2))(0x065DF0627C2CA838L)), 3L)).s56)), 5L, 0x15261B4B2AC4962EL, 0x38E028C00CF20FB2L, 0x6477DED4A3A22D6AL, 0x0AA4A9AE159FBB45L)), ((VECTOR(int64_t, 8))((-1L)))))).s6457143043547731, ((VECTOR(int64_t, 16))(0x73BAD78D2213FFCDL))))).sf || p_936->g_552.f0) | 65535UL) || 0x02D0B7A1CD14C274L))), 0x04FD006DL))))) , (void*)0) == &p_936->g_111[0])))), 1UL))))) | p_936->g_615)))).even)).lo , (*p_936->g_704));
        (*l_928) = (*p_936->g_699);
        (*l_927) = (*l_927);
        for (p_936->g_164 = 23; (p_936->g_164 < (-6)); p_936->g_164--)
        { /* block id: 458 */
            union U1 *l_931 = &p_936->g_64;
            int32_t l_934 = 1L;
            (*p_936->g_932) = l_931;
            (*p_936->g_75) |= l_934;
        }
    }
    else
    { /* block id: 462 */
        VECTOR(int32_t, 8) l_935 = (VECTOR(int32_t, 8))(0x655D3C79L, (VECTOR(int32_t, 4))(0x655D3C79L, (VECTOR(int32_t, 2))(0x655D3C79L, 0x478A8C1CL), 0x478A8C1CL), 0x478A8C1CL, 0x655D3C79L, 0x478A8C1CL);
        int i;
        (*p_936->g_75) &= ((VECTOR(int32_t, 8))(l_935.s14640361)).s4;
    }
    return (*p_936->g_75);
}


/* ------------------------------------------ */
/* 
 * reads : p_936->g_573 p_936->g_75 p_936->g_76
 * writes: p_936->g_573 p_936->g_76
 */
int32_t  func_2(uint64_t  p_3, uint64_t  p_4, uint8_t  p_5, struct S3 * p_936)
{ /* block id: 339 */
    struct S0 l_896 = {0x857B3201L};
    int8_t *l_897 = &p_936->g_64.f0;
    union U2 l_898 = {-1L};
    int8_t **l_899 = (void*)0;
    int8_t *l_902[10] = {&p_936->g_617,&p_936->g_201,(void*)0,&p_936->g_201,&p_936->g_617,&p_936->g_617,&p_936->g_201,(void*)0,&p_936->g_201,&p_936->g_617};
    int8_t **l_901 = &l_902[7];
    int8_t ***l_900 = &l_901;
    int i;
    for (p_936->g_573 = 5; (p_936->g_573 != 10); p_936->g_573 = safe_add_func_int32_t_s_s(p_936->g_573, 3))
    { /* block id: 342 */
        uint8_t l_754 = 0x71L;
        (*p_936->g_75) |= l_754;
        for (p_4 = 0; (p_4 != 59); p_4 = safe_add_func_uint32_t_u_u(p_4, 8))
        { /* block id: 346 */
            if ((atomic_inc(&p_936->l_atomic_input[88]) == 0))
            { /* block id: 348 */
                VECTOR(int32_t, 16) l_757 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-1L)), (-1L)), (-1L), 5L, (-1L), (VECTOR(int32_t, 2))(5L, (-1L)), (VECTOR(int32_t, 2))(5L, (-1L)), 5L, (-1L), 5L, (-1L));
                int32_t l_758 = (-8L);
                int32_t l_779 = 0x72ABDEBCL;
                int32_t l_780[10];
                uint64_t l_781 = 4UL;
                struct S0 l_782 = {0xA33A8DE7L};
                VECTOR(uint8_t, 16) l_783 = (VECTOR(uint8_t, 16))(0xADL, (VECTOR(uint8_t, 4))(0xADL, (VECTOR(uint8_t, 2))(0xADL, 0xD4L), 0xD4L), 0xD4L, 0xADL, 0xD4L, (VECTOR(uint8_t, 2))(0xADL, 0xD4L), (VECTOR(uint8_t, 2))(0xADL, 0xD4L), 0xADL, 0xD4L, 0xADL, 0xD4L);
                int8_t l_784 = (-1L);
                VECTOR(uint8_t, 16) l_785 = (VECTOR(uint8_t, 16))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 255UL), 255UL), 255UL, 249UL, 255UL, (VECTOR(uint8_t, 2))(249UL, 255UL), (VECTOR(uint8_t, 2))(249UL, 255UL), 249UL, 255UL, 249UL, 255UL);
                uint16_t l_786 = 0x0314L;
                VECTOR(uint16_t, 2) l_787 = (VECTOR(uint16_t, 2))(0x09B0L, 0x051EL);
                uint16_t l_788 = 0xD56EL;
                VECTOR(uint8_t, 8) l_791 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x26L), 0x26L), 0x26L, 1UL, 0x26L);
                VECTOR(uint8_t, 4) l_792 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL);
                int16_t l_793[4];
                int64_t l_794 = 0x57BECB628AF255C8L;
                int64_t l_795 = 4L;
                VECTOR(uint8_t, 8) l_796 = (VECTOR(uint8_t, 8))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0x42L), 0x42L), 0x42L, 4UL, 0x42L);
                uint64_t l_797 = 0xA75C0EF71196C244L;
                uint64_t l_798 = 0UL;
                struct S0 l_799[1] = {{0x750F791BL}};
                struct S0 l_800[6][6] = {{{1UL},{4UL},{4UL},{1UL},{1UL},{4UL}},{{1UL},{4UL},{4UL},{1UL},{1UL},{4UL}},{{1UL},{4UL},{4UL},{1UL},{1UL},{4UL}},{{1UL},{4UL},{4UL},{1UL},{1UL},{4UL}},{{1UL},{4UL},{4UL},{1UL},{1UL},{4UL}},{{1UL},{4UL},{4UL},{1UL},{1UL},{4UL}}};
                struct S0 l_801 = {0xB07B935FL};
                struct S0 l_802[5] = {{4294967291UL},{4294967291UL},{4294967291UL},{4294967291UL},{4294967291UL}};
                int i, j;
                for (i = 0; i < 10; i++)
                    l_780[i] = 0L;
                for (i = 0; i < 4; i++)
                    l_793[i] = 0x12FCL;
                if ((l_758 = ((VECTOR(int32_t, 8))(l_757.sf2c20e37)).s4))
                { /* block id: 350 */
                    VECTOR(int32_t, 4) l_759 = (VECTOR(int32_t, 4))(0x2C72E281L, (VECTOR(int32_t, 2))(0x2C72E281L, 0x41BBEFDAL), 0x41BBEFDAL);
                    int32_t *l_760 = (void*)0;
                    uint32_t l_761[10] = {0UL,1UL,0xB5CE08E3L,1UL,0UL,0UL,1UL,0xB5CE08E3L,1UL,0UL};
                    int i;
                    l_758 = (l_757.s0 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_759.xyyz)).even)).odd);
                    l_760 = (void*)0;
                    ++l_761[9];
                }
                else
                { /* block id: 355 */
                    int32_t *l_764 = (void*)0;
                    int32_t *l_765 = (void*)0;
                    int16_t l_766 = 0x789CL;
                    VECTOR(uint32_t, 2) l_767 = (VECTOR(uint32_t, 2))(0UL, 1UL);
                    uint16_t l_768[7] = {65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL};
                    int32_t l_774 = 0x2D4D3418L;
                    int32_t l_775 = 2L;
                    uint64_t l_776 = 0x64A705A077F46250L;
                    int i;
                    l_758 |= 2L;
                    l_765 = l_764;
                    if ((((VECTOR(uint32_t, 8))(1UL, l_766, 0x70D78C75L, 2UL, 1UL, ((VECTOR(uint32_t, 4))(l_767.xxyx)).y, 1UL, 0UL)).s2 , l_768[3]))
                    { /* block id: 358 */
                        uint8_t l_769 = 0x10L;
                        ++l_769;
                    }
                    else
                    { /* block id: 360 */
                        int32_t l_773 = 0L;
                        int32_t *l_772 = &l_773;
                        l_764 = l_772;
                        l_764 = (void*)0;
                    }
                    --l_776;
                }
                l_780[1] = l_779;
                l_802[0] = (l_781 , (l_782 , (l_801 = (l_800[1][0] = ((l_798 = ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 4))(l_783.s537d))))).lo, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(0x43L, 2UL, l_784, ((VECTOR(uint8_t, 2))(l_785.s1b)), 0xA6L, 0xA2L, l_786, l_787.x, 255UL, 0x59L, (l_788++), 0UL, 0x78L, 0UL, 0x18L)).even)), ((VECTOR(uint8_t, 16))(l_791.s4036447276646661)).odd))).s5241314674434143)).s55, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_792.yzwyxxxz)).even)))).lo))), 249UL, 0x36L)))).hi, ((VECTOR(uint8_t, 4))(1UL, ((VECTOR(uint8_t, 2))(254UL, 1UL)), 0x6DL)).odd))), (l_794 = l_793[1]), 7UL, l_795, 0x7EL, 0x83L, 0xF5L)).s10, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_796.s57426540)), l_797, ((VECTOR(uint8_t, 4))(0x82L)), 0x71L, 0x64L, 0xDDL)).s64))).odd) , l_799[0])))));
                for (l_787.x = 1; (l_787.x == 32); l_787.x = safe_add_func_uint8_t_u_u(l_787.x, 1))
                { /* block id: 375 */
                    int32_t l_805 = 0L;
                    for (l_805 = 15; (l_805 > (-25)); l_805 = safe_sub_func_uint32_t_u_u(l_805, 3))
                    { /* block id: 378 */
                        VECTOR(int32_t, 16) l_808 = (VECTOR(int32_t, 16))(0x751D9133L, (VECTOR(int32_t, 4))(0x751D9133L, (VECTOR(int32_t, 2))(0x751D9133L, 0x1D3E6349L), 0x1D3E6349L), 0x1D3E6349L, 0x751D9133L, 0x1D3E6349L, (VECTOR(int32_t, 2))(0x751D9133L, 0x1D3E6349L), (VECTOR(int32_t, 2))(0x751D9133L, 0x1D3E6349L), 0x751D9133L, 0x1D3E6349L, 0x751D9133L, 0x1D3E6349L);
                        uint32_t l_809 = 0x9AF5A6C6L;
                        int64_t l_810 = (-10L);
                        uint32_t l_811 = 8UL;
                        uint32_t l_812 = 0UL;
                        int32_t l_813 = (-1L);
                        int32_t l_814 = 8L;
                        int i;
                        l_809 = ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(l_808.s7a488c8e)).s33, ((VECTOR(int32_t, 2))(0x7261A81BL, 0x672319BCL)), ((VECTOR(int32_t, 2))(1L, 0L))))).even;
                        l_814 ^= (l_813 = (l_812 = ((l_810 , (l_811 |= (l_757.s9 = (l_758 = 0x3AB20007L)))) , (-1L))));
                    }
                }
                unsigned int result = 0;
                result += l_757.sf;
                result += l_757.se;
                result += l_757.sd;
                result += l_757.sc;
                result += l_757.sb;
                result += l_757.sa;
                result += l_757.s9;
                result += l_757.s8;
                result += l_757.s7;
                result += l_757.s6;
                result += l_757.s5;
                result += l_757.s4;
                result += l_757.s3;
                result += l_757.s2;
                result += l_757.s1;
                result += l_757.s0;
                result += l_758;
                result += l_779;
                int l_780_i0;
                for (l_780_i0 = 0; l_780_i0 < 10; l_780_i0++) {
                    result += l_780[l_780_i0];
                }
                result += l_781;
                result += l_782.f0;
                result += l_783.sf;
                result += l_783.se;
                result += l_783.sd;
                result += l_783.sc;
                result += l_783.sb;
                result += l_783.sa;
                result += l_783.s9;
                result += l_783.s8;
                result += l_783.s7;
                result += l_783.s6;
                result += l_783.s5;
                result += l_783.s4;
                result += l_783.s3;
                result += l_783.s2;
                result += l_783.s1;
                result += l_783.s0;
                result += l_784;
                result += l_785.sf;
                result += l_785.se;
                result += l_785.sd;
                result += l_785.sc;
                result += l_785.sb;
                result += l_785.sa;
                result += l_785.s9;
                result += l_785.s8;
                result += l_785.s7;
                result += l_785.s6;
                result += l_785.s5;
                result += l_785.s4;
                result += l_785.s3;
                result += l_785.s2;
                result += l_785.s1;
                result += l_785.s0;
                result += l_786;
                result += l_787.y;
                result += l_787.x;
                result += l_788;
                result += l_791.s7;
                result += l_791.s6;
                result += l_791.s5;
                result += l_791.s4;
                result += l_791.s3;
                result += l_791.s2;
                result += l_791.s1;
                result += l_791.s0;
                result += l_792.w;
                result += l_792.z;
                result += l_792.y;
                result += l_792.x;
                int l_793_i0;
                for (l_793_i0 = 0; l_793_i0 < 4; l_793_i0++) {
                    result += l_793[l_793_i0];
                }
                result += l_794;
                result += l_795;
                result += l_796.s7;
                result += l_796.s6;
                result += l_796.s5;
                result += l_796.s4;
                result += l_796.s3;
                result += l_796.s2;
                result += l_796.s1;
                result += l_796.s0;
                result += l_797;
                result += l_798;
                int l_799_i0;
                for (l_799_i0 = 0; l_799_i0 < 1; l_799_i0++) {
                    result += l_799[l_799_i0].f0;
                }
                int l_800_i0, l_800_i1;
                for (l_800_i0 = 0; l_800_i0 < 6; l_800_i0++) {
                    for (l_800_i1 = 0; l_800_i1 < 6; l_800_i1++) {
                        result += l_800[l_800_i0][l_800_i1].f0;
                    }
                }
                result += l_801.f0;
                int l_802_i0;
                for (l_802_i0 = 0; l_802_i0 < 5; l_802_i0++) {
                    result += l_802[l_802_i0].f0;
                }
                atomic_add(&p_936->l_special_values[88], result);
            }
            else
            { /* block id: 388 */
                (1 + 1);
            }
        }
    }
    if ((atomic_inc(&p_936->l_atomic_input[53]) == 6))
    { /* block id: 394 */
        int32_t l_815 = 0x00CFAE94L;
        for (l_815 = (-19); (l_815 > 27); l_815++)
        { /* block id: 397 */
            int32_t l_818 = 0L;
            uint32_t l_891 = 4294967287UL;
            for (l_818 = 0; (l_818 >= (-17)); l_818--)
            { /* block id: 400 */
                VECTOR(int32_t, 16) l_821 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x622D5A3DL), 0x622D5A3DL), 0x622D5A3DL, (-9L), 0x622D5A3DL, (VECTOR(int32_t, 2))((-9L), 0x622D5A3DL), (VECTOR(int32_t, 2))((-9L), 0x622D5A3DL), (-9L), 0x622D5A3DL, (-9L), 0x622D5A3DL);
                int32_t l_822 = 4L;
                int16_t l_823 = 0x0654L;
                uint32_t l_886 = 4294967294UL;
                int32_t l_887 = 0x7C921B81L;
                int i;
                l_822 &= ((VECTOR(int32_t, 16))(l_821.s24368fc1bed998ee)).s4;
                if (l_823)
                { /* block id: 402 */
                    int8_t l_824 = 0x1FL;
                    uint64_t l_825 = 7UL;
                    uint64_t l_826[7][9][4] = {{{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL}},{{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL}},{{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL}},{{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL}},{{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL}},{{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL}},{{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL},{18446744073709551606UL,1UL,0xAC3B0E2E9BDA65A4L,0UL}}};
                    uint32_t l_827[6][2];
                    struct S0 l_828 = {4294967295UL};
                    struct S0 l_829 = {0xD80222E1L};
                    uint16_t l_830[2][5];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_827[i][j] = 0x84F0F4A9L;
                    }
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_830[i][j] = 65535UL;
                    }
                    l_829 = ((l_827[0][1] = ((l_825 = l_824) , l_826[5][6][0])) , l_828);
                    --l_830[0][2];
                }
                else
                { /* block id: 407 */
                    VECTOR(int32_t, 2) l_833 = (VECTOR(int32_t, 2))((-3L), 0x6EF2C209L);
                    uint64_t l_834 = 5UL;
                    int32_t l_835 = 1L;
                    uint32_t l_836 = 5UL;
                    VECTOR(int32_t, 16) l_837 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-1L)), (-1L)), (-1L), 8L, (-1L), (VECTOR(int32_t, 2))(8L, (-1L)), (VECTOR(int32_t, 2))(8L, (-1L)), 8L, (-1L), 8L, (-1L));
                    VECTOR(int32_t, 2) l_838 = (VECTOR(int32_t, 2))(0x35184CA0L, 4L);
                    VECTOR(int32_t, 16) l_839 = (VECTOR(int32_t, 16))(0x27C55B63L, (VECTOR(int32_t, 4))(0x27C55B63L, (VECTOR(int32_t, 2))(0x27C55B63L, (-1L)), (-1L)), (-1L), 0x27C55B63L, (-1L), (VECTOR(int32_t, 2))(0x27C55B63L, (-1L)), (VECTOR(int32_t, 2))(0x27C55B63L, (-1L)), 0x27C55B63L, (-1L), 0x27C55B63L, (-1L));
                    VECTOR(int32_t, 8) l_840 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 3L), 3L), 3L, 1L, 3L);
                    VECTOR(int32_t, 4) l_841 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x174758D1L), 0x174758D1L);
                    int8_t l_842[7] = {0x7EL,0x64L,0x7EL,0x7EL,0x64L,0x7EL,0x7EL};
                    int64_t l_843 = (-1L);
                    uint16_t l_844 = 1UL;
                    VECTOR(int32_t, 2) l_845 = (VECTOR(int32_t, 2))(0x7E4119F9L, 0L);
                    VECTOR(int32_t, 4) l_846 = (VECTOR(int32_t, 4))(0x40E3A53BL, (VECTOR(int32_t, 2))(0x40E3A53BL, 0x1C522CADL), 0x1C522CADL);
                    VECTOR(int32_t, 8) l_847 = (VECTOR(int32_t, 8))(0x0A9AC4F4L, (VECTOR(int32_t, 4))(0x0A9AC4F4L, (VECTOR(int32_t, 2))(0x0A9AC4F4L, 0x2C64602FL), 0x2C64602FL), 0x2C64602FL, 0x0A9AC4F4L, 0x2C64602FL);
                    uint64_t l_848 = 18446744073709551610UL;
                    int i;
                    if (((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(2L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x0B5722FDL, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(l_833.yy)).xxxx, (int32_t)0x2DD95B28L, (int32_t)((l_834 , l_835) , l_836)))), 0x56DE33A2L, 0x6E77F1D5L, 0x6331CF10L)).even)), (-1L), ((VECTOR(int32_t, 2))(l_837.sae)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(l_838.xx)).yyyxxyyy, ((VECTOR(int32_t, 16))(l_839.s15c2e0b1b248f9c3)).even))).s7541750503652712)).sdf)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_840.s34460725)).s50)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_841.zw)), 1L, 0x202CD5ECL)), 4L)).even)).s5, (((l_822 = l_842[1]) , FAKE_DIVERGE(p_936->group_0_offset, get_group_id(0), 10)) , (l_839.sc = (l_821.sd = l_843))), l_844, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_845.yx)).xyxyyyxx)))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(l_846.yzywyzyz)).s3705000050744421, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_847.s52)), l_848, ((VECTOR(int32_t, 8))(1L)), (-1L), 0x0FE7C19EL, ((VECTOR(int32_t, 2))(0x00E427DEL)), 0L)).s55))).yxxyyyyx, ((VECTOR(int32_t, 8))(0x3B571E9FL))))).s0376440753167553))).s4b2d, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0x37DA896FL))))))).zxwwxzzywwzwwywy, ((VECTOR(int32_t, 16))(5L)), ((VECTOR(int32_t, 16))(0x50FD118EL))))).s34)), 0x56367C90L, 0L)), ((VECTOR(int32_t, 16))(0x7782D304L)), ((VECTOR(int32_t, 16))(8L))))).s1)
                    { /* block id: 411 */
                        int32_t l_849 = 0x1700D5A1L;
                        uint64_t l_850 = 0x5924EE33B6610869L;
                        uint16_t l_851 = 0UL;
                        int32_t *l_852 = &l_849;
                        int32_t *l_853 = &l_849;
                        l_839.s2 ^= l_849;
                        l_839.s3 |= l_850;
                        l_833.y = l_851;
                        l_853 = l_852;
                    }
                    else
                    { /* block id: 416 */
                        union U2 l_854 = {-7L};
                        union U2 l_855 = {0x49L};
                        union U2 l_856[4][7] = {{{-8L},{0x1BL},{0x06L},{0x1BL},{0x1BL},{0x1BL},{0x06L}},{{-8L},{0x1BL},{0x06L},{0x1BL},{0x1BL},{0x1BL},{0x06L}},{{-8L},{0x1BL},{0x06L},{0x1BL},{0x1BL},{0x1BL},{0x06L}},{{-8L},{0x1BL},{0x06L},{0x1BL},{0x1BL},{0x1BL},{0x06L}}};
                        uint32_t l_857 = 4294967295UL;
                        int32_t l_859 = 0x7C663B57L;
                        int32_t *l_858 = &l_859;
                        int32_t *l_860 = &l_855.f1;
                        uint64_t l_861 = 1UL;
                        uint32_t l_864 = 0x241AD582L;
                        int64_t l_867 = 0x74E2223FA5BC6A27L;
                        VECTOR(int32_t, 8) l_868 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L);
                        uint8_t l_869[5][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
                        uint32_t l_870 = 0xF41797BEL;
                        uint32_t l_871 = 4294967295UL;
                        uint8_t l_872 = 0x95L;
                        union U1 l_873 = {0x37L};
                        union U2 l_874 = {6L};
                        union U2 l_875 = {0x48L};
                        VECTOR(int32_t, 2) l_876 = (VECTOR(int32_t, 2))((-1L), 0x3ACBAD79L);
                        VECTOR(int32_t, 16) l_877 = (VECTOR(int32_t, 16))(0x687FEF19L, (VECTOR(int32_t, 4))(0x687FEF19L, (VECTOR(int32_t, 2))(0x687FEF19L, 1L), 1L), 1L, 0x687FEF19L, 1L, (VECTOR(int32_t, 2))(0x687FEF19L, 1L), (VECTOR(int32_t, 2))(0x687FEF19L, 1L), 0x687FEF19L, 1L, 0x687FEF19L, 1L);
                        struct S0 l_878[2][3] = {{{0xE2A57A86L},{4294967295UL},{0xE2A57A86L}},{{0xE2A57A86L},{4294967295UL},{0xE2A57A86L}}};
                        uint64_t l_879 = 18446744073709551609UL;
                        uint16_t l_880 = 9UL;
                        VECTOR(uint32_t, 16) l_881 = (VECTOR(uint32_t, 16))(0xB1924E77L, (VECTOR(uint32_t, 4))(0xB1924E77L, (VECTOR(uint32_t, 2))(0xB1924E77L, 0xE2802F7DL), 0xE2802F7DL), 0xE2802F7DL, 0xB1924E77L, 0xE2802F7DL, (VECTOR(uint32_t, 2))(0xB1924E77L, 0xE2802F7DL), (VECTOR(uint32_t, 2))(0xB1924E77L, 0xE2802F7DL), 0xB1924E77L, 0xE2802F7DL, 0xB1924E77L, 0xE2802F7DL);
                        uint32_t l_882 = 9UL;
                        int64_t l_883 = 1L;
                        uint16_t l_884[9] = {0xA785L,0xA785L,0xA785L,0xA785L,0xA785L,0xA785L,0xA785L,0xA785L,0xA785L};
                        VECTOR(int64_t, 8) l_885 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                        int i, j;
                        l_858 = ((l_856[1][0] = (l_855 = (l_854 = l_854))) , (l_857 , (l_860 = l_858)));
                        ++l_861;
                        --l_864;
                        l_833.y &= (l_885.s0 = (l_867 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_868.s4775)).zxwzyyxxyyzyywxx)).hi)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))((-1L), l_869[2][0], (-1L), 1L)).zxywyywzwxxyzxzw, ((VECTOR(int32_t, 2))(0x36507F5BL, 2L)).yxyxyxyyyyyyxxxx))))))).s9126, ((VECTOR(int32_t, 2))((-1L), 0x55065B65L)).yyyx))).yxxxzwww)).s12, (int32_t)((VECTOR(int32_t, 4))(0L, (l_870 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_871, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(6L, 0x0BDBFB7AL, (-1L), 0x44E5A5ABL, (-1L), 0x16B19A27L, (l_847.s2 = ((l_875 = (((VECTOR(int32_t, 2))(8L, 8L)).hi , ((l_873 = (((VECTOR(uint32_t, 4))(l_872, ((VECTOR(uint32_t, 2))(4294967290UL, 0UL)), 0xE770971BL)).w , l_873)) , l_874))) , ((VECTOR(int32_t, 4))(l_876.yyyy)).z)), (GROUP_DIVERGE(2, 1) , ((VECTOR(int32_t, 4))(l_877.sdb22)).w), 0x19F512D0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((l_878[0][0] , ((l_880 = l_879) , l_881.s1)) , 0x24849F7DL), 1L, 0L, (-1L), (-1L), ((VECTOR(int32_t, 8))(3L)), l_882, (-10L), 0L)).s6d)), ((VECTOR(int32_t, 2))(0x1B8E5278L)), 1L, 0x2E5EB19BL, 0x131D1763L)).hi)).hi, (int32_t)l_883))).xzxzzxxzwwwxzzww)).s7, l_884[2], 0x6481B5FAL, ((VECTOR(int32_t, 8))(0x51C283E8L)), (-4L), ((VECTOR(int32_t, 2))(0x2F8782CDL)), (-1L))).s07)).even), 0x553F3F45L, 3L)).y))).xxyxxyxy, ((VECTOR(int32_t, 8))(0L))))).lo)))), 1L, 6L, ((VECTOR(int32_t, 4))(0x2ACF9A15L)), ((VECTOR(int32_t, 2))(0x65481812L)), ((VECTOR(int32_t, 2))(0x4FE6BB9FL)), 0x2730D39EL, 0x5FA5BCD2L)).s9));
                    }
                }
                l_887 = (l_886 = 0x48FB0327L);
                for (l_821.sc = 0; (l_821.sc < 27); l_821.sc++)
                { /* block id: 436 */
                    uint32_t l_890 = 0x7AC1AC90L;
                    l_890 ^= 1L;
                }
            }
            l_891 = 0x44992FE1L;
        }
        unsigned int result = 0;
        result += l_815;
        atomic_add(&p_936->l_special_values[53], result);
    }
    else
    { /* block id: 442 */
        (1 + 1);
    }
    (*p_936->g_75) = (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((p_3 , (l_897 = (l_896 , (void*)0))) == &p_936->g_170), 1)), ((l_898 , l_896.f0) && (l_899 != ((*l_900) = l_899)))));
    return l_896.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_936->g_146 p_936->g_616 p_936->g_617 p_936->g_75 p_936->g_259 p_936->g_150
 * writes: p_936->g_146 p_936->g_735 p_936->g_49 p_936->g_76
 */
int64_t  func_11(int32_t  p_12, uint64_t  p_13, uint32_t  p_14, uint8_t  p_15, struct S3 * p_936)
{ /* block id: 331 */
    VECTOR(int32_t, 2) l_723 = (VECTOR(int32_t, 2))(0x4096232BL, 0x71F413EEL);
    VECTOR(int64_t, 4) l_724 = (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 4L), 4L);
    VECTOR(uint16_t, 8) l_727 = (VECTOR(uint16_t, 8))(0xA47CL, (VECTOR(uint16_t, 4))(0xA47CL, (VECTOR(uint16_t, 2))(0xA47CL, 0x9244L), 0x9244L), 0x9244L, 0xA47CL, 0x9244L);
    int32_t *l_728 = &p_936->g_616;
    int32_t **l_729 = &l_728;
    int32_t *l_730 = (void*)0;
    uint64_t *l_731 = (void*)0;
    uint64_t *l_734 = &p_936->g_735[8][0][0];
    union U1 l_748 = {0x5BL};
    VECTOR(uint32_t, 4) l_749 = (VECTOR(uint32_t, 4))(0xEEC94D8FL, (VECTOR(uint32_t, 2))(0xEEC94D8FL, 4294967295UL), 4294967295UL);
    int i;
    (*p_936->g_75) = (((FAKE_DIVERGE(p_936->global_0_offset, get_global_id(0), 10) != ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 8))(l_723.xyyyyyxy)).s61, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x9D6F5C45L, 0x664FA93FL)).yyxy)).xxwzxywwxwwywzxy)).odd)).s37))))), ((VECTOR(int64_t, 2))(l_724.yz)), (((safe_lshift_func_int8_t_s_u((((VECTOR(uint16_t, 2))(l_727.s72)).lo ^ 0x044FL), ((((*l_729) = l_728) == l_730) == (p_936->g_146--)))) & (p_13 && ((*l_734) = 18446744073709551609UL))) ^ (safe_rshift_func_uint8_t_u_s((p_936->g_49.y = (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((FAKE_DIVERGE(p_936->local_2_offset, get_local_id(2), 10) != (~((safe_rshift_func_int8_t_s_u((p_14 , (safe_mul_func_int8_t_s_s(p_13, ((0x3B94B83F22E42207L || (l_748 , p_12)) || 0L)))), 2)) & p_14))), 0x50L)) && 0x4047C4F7F8DDD6E3L), GROUP_DIVERGE(2, 1))), (-1L)))), 5))), (*l_728), 0x1694B197C5FB57F8L, 0L)))).lo, (int64_t)(-1L), (int64_t)p_936->g_617))))).z) | l_749.x) , 0x409DB65BL);
    (*l_729) = (*p_936->g_259);
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_936->g_720
 * writes: p_936->g_720
 */
int64_t  func_18(uint64_t  p_19, int64_t  p_20, uint32_t  p_21, struct S3 * p_936)
{ /* block id: 328 */
    int32_t *l_707 = &p_936->g_573;
    int32_t *l_708 = &p_936->g_552.f1;
    int32_t l_709 = 0x37CF9292L;
    int32_t *l_710 = &p_936->g_70;
    int32_t *l_711 = (void*)0;
    int32_t l_712 = 0x2F29EFDFL;
    int32_t *l_713 = (void*)0;
    int32_t *l_714 = &p_936->g_552.f1;
    int32_t l_715 = 0x2D0F8359L;
    int32_t *l_716 = &p_936->g_616;
    int32_t *l_717 = &p_936->g_573;
    int32_t *l_718 = &p_936->g_616;
    int32_t *l_719[4][9][4] = {{{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0}},{{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0}},{{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0}},{{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0},{&p_936->g_616,&p_936->g_616,&p_936->g_70,(void*)0}}};
    int i, j, k;
    p_936->g_720++;
    return p_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_936->g_702 p_936->g_75 p_936->g_76 p_936->g_704 p_936->g_699 p_936->g_243
 * writes: p_936->g_150 p_936->g_76
 */
struct S0  func_27(int8_t  p_28, struct S0  p_29, struct S3 * p_936)
{ /* block id: 322 */
    int32_t *l_701 = (void*)0;
    int16_t l_703 = 0x20A8L;
    (*p_936->g_702) = l_701;
    (*p_936->g_75) |= l_703;
    (*p_936->g_704) = l_701;
    return (*p_936->g_699);
}


/* ------------------------------------------ */
/* 
 * reads : p_936->l_comm_values p_936->g_49 p_936->g_comm_values p_936->g_64 p_936->g_70 p_936->g_75 p_936->g_24 p_936->g_76 p_936->g_109 p_936->g_64.f0 p_936->g_115 p_936->g_120 p_936->g_122 p_936->g_133 p_936->g_135 p_936->g_139 p_936->g_144 p_936->g_137 p_936->g_145 p_936->g_146 p_936->g_111 p_936->g_149 p_936->g_150 p_936->g_174 p_936->g_168 p_936->g_204 p_936->g_202 p_936->g_243 p_936->g_164 p_936->g_259 p_936->g_551 p_936->g_165 p_936->g_574 p_936->g_114 p_936->g_618 p_936->g_573 p_936->g_201 p_936->g_203 p_936->g_64.f1 p_936->g_668 p_936->g_638 p_936->g_683 p_936->g_689 p_936->g_694 p_936->g_695 p_936->g_615 p_936->g_699
 * writes: p_936->g_70 p_936->g_76 p_936->g_111 p_936->g_114 p_936->g_120 p_936->g_122 p_936->g_137 p_936->g_139 p_936->g_146 p_936->g_150 p_936->g_174 p_936->g_168 p_936->g_204 p_936->g_64 p_936->l_comm_values p_936->g_144 p_936->g_165 p_936->g_574 p_936->g_551 p_936->g_600 p_936->g_618 p_936->g_243 p_936->g_201 p_936->g_49 p_936->g_638 p_936->g_145 p_936->g_573
 */
int64_t  func_31(union U2  p_32, struct S3 * p_936)
{ /* block id: 5 */
    uint64_t l_39 = 0UL;
    int32_t **l_547 = &p_936->g_150;
    union U2 l_548 = {0x62L};
    int32_t *l_549 = &p_936->g_70;
    VECTOR(uint8_t, 8) l_550 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 3UL), 3UL), 3UL, 1UL, 3UL);
    struct S0 l_698[2] = {{4294967288UL},{4294967288UL}};
    int i;
    (*p_936->g_699) = (l_698[0] = func_34(((func_36(p_936->l_comm_values[(safe_mod_func_uint32_t_u_u(p_936->tid, 55))], l_39, p_936) , ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(0x38L, 0x8AL, ((l_547 = l_547) == (((l_548 , l_549) != l_549) , &p_936->g_150)), ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(0UL, 0UL)).xxyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(l_550.s10)).yxyy, ((VECTOR(uint8_t, 16))(GROUP_DIVERGE(2, 1), (p_936->g_551[3][1][1] == (void*)0), 0x76L, ((VECTOR(uint8_t, 8))(255UL)), (*l_549), 250UL, 0xF7L, 1UL, 250UL)).sc685, ((VECTOR(uint8_t, 4))(0xCBL))))).ywxzyzzyzyxyywwx)).sfc4d, ((VECTOR(uint8_t, 4))(0x32L))))), ((VECTOR(uint8_t, 4))(254UL)), ((VECTOR(uint8_t, 4))(0x82L))))), 0UL)).s70)).even) && p_936->g_165), p_936));
    return (*l_549);
}


/* ------------------------------------------ */
/* 
 * reads : p_936->g_139 p_936->g_574 p_936->g_114 p_936->g_165 p_936->g_243 p_936->g_75 p_936->g_76 p_936->g_168 p_936->g_133 p_936->g_618 p_936->g_573 p_936->g_201 p_936->g_203 p_936->g_64.f1 p_936->g_668 p_936->g_49 p_936->g_638 p_936->g_683 p_936->g_689 p_936->g_694 p_936->g_109 p_936->g_695 p_936->l_comm_values p_936->g_615 p_936->g_24
 * writes: p_936->g_139 p_936->g_574 p_936->g_114 p_936->g_165 p_936->g_551 p_936->g_600 p_936->g_76 p_936->g_618 p_936->g_243 p_936->g_201 p_936->g_64.f1 p_936->g_49 p_936->g_638 p_936->g_145 p_936->g_573
 */
struct S0  func_34(uint32_t  p_35, struct S3 * p_936)
{ /* block id: 260 */
    int32_t l_556[10][2] = {{0x29E994D2L,0x43969868L},{0x29E994D2L,0x43969868L},{0x29E994D2L,0x43969868L},{0x29E994D2L,0x43969868L},{0x29E994D2L,0x43969868L},{0x29E994D2L,0x43969868L},{0x29E994D2L,0x43969868L},{0x29E994D2L,0x43969868L},{0x29E994D2L,0x43969868L},{0x29E994D2L,0x43969868L}};
    int32_t l_557 = 0x04AE5E33L;
    int32_t l_558 = (-1L);
    int32_t l_559 = (-9L);
    int32_t l_560 = 0x23CE0703L;
    int32_t l_561 = 0x6F09ECA8L;
    int32_t l_562 = (-1L);
    int32_t l_563 = 3L;
    int32_t l_564 = 0L;
    int32_t l_565 = (-1L);
    int32_t l_566 = 0x59837510L;
    int32_t l_567 = 0L;
    int32_t l_568 = 2L;
    int32_t l_570 = 0x5FD459E5L;
    int32_t l_571[9] = {0x4565F4F1L,(-4L),0x4565F4F1L,0x4565F4F1L,(-4L),0x4565F4F1L,0x4565F4F1L,(-4L),0x4565F4F1L};
    union U2 *l_603 = &p_936->g_552;
    int32_t *l_610 = &p_936->g_573;
    int32_t *l_611 = &l_571[4];
    int32_t *l_612 = &l_559;
    int32_t *l_613[7][3] = {{(void*)0,&l_567,&l_567},{(void*)0,&l_567,&l_567},{(void*)0,&l_567,&l_567},{(void*)0,&l_567,&l_567},{(void*)0,&l_567,&l_567},{(void*)0,&l_567,&l_567},{(void*)0,&l_567,&l_567}};
    int32_t l_614 = 0x47A3F15BL;
    struct S0 l_621 = {1UL};
    struct S0 *l_622[1];
    struct S0 l_623[2] = {{4294967294UL},{4294967294UL}};
    struct S0 *l_651[2][2][10] = {{{&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243},{&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243}},{{&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243},{&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243,&p_936->g_243}}};
    uint32_t l_659 = 2UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_622[i] = (void*)0;
    for (p_936->g_139 = 0; (p_936->g_139 == 1); p_936->g_139 = safe_add_func_int16_t_s_s(p_936->g_139, 1))
    { /* block id: 263 */
        int32_t *l_555[7] = {&p_936->g_70,(void*)0,&p_936->g_70,&p_936->g_70,(void*)0,&p_936->g_70,&p_936->g_70};
        struct S0 l_609 = {0x10D599FBL};
        int i;
        p_936->g_574++;
        for (p_936->g_114 = (-30); (p_936->g_114 < 44); p_936->g_114++)
        { /* block id: 267 */
            VECTOR(int32_t, 4) l_581 = (VECTOR(int32_t, 4))(0x5DB8C903L, (VECTOR(int32_t, 2))(0x5DB8C903L, 0x32260CB5L), 0x32260CB5L);
            uint32_t l_586 = 0x0BA958DEL;
            int8_t *l_587 = &p_936->g_64.f0;
            int i;
            for (p_936->g_165 = (-23); (p_936->g_165 > (-26)); --p_936->g_165)
            { /* block id: 270 */
                uint8_t *l_590 = (void*)0;
                uint8_t *l_591 = (void*)0;
                uint8_t *l_592 = (void*)0;
                uint8_t *l_593[5];
                union U2 *l_598 = &p_936->g_552;
                union U2 **l_599 = &p_936->g_551[3][1][1];
                union U2 *l_602 = &p_936->g_552;
                union U2 **l_601[7][8] = {{&l_602,&l_602,(void*)0,&l_602,&l_602,&l_602,&l_602,(void*)0},{&l_602,&l_602,(void*)0,&l_602,&l_602,&l_602,&l_602,(void*)0},{&l_602,&l_602,(void*)0,&l_602,&l_602,&l_602,&l_602,(void*)0},{&l_602,&l_602,(void*)0,&l_602,&l_602,&l_602,&l_602,(void*)0},{&l_602,&l_602,(void*)0,&l_602,&l_602,&l_602,&l_602,(void*)0},{&l_602,&l_602,(void*)0,&l_602,&l_602,&l_602,&l_602,(void*)0},{&l_602,&l_602,(void*)0,&l_602,&l_602,&l_602,&l_602,(void*)0}};
                int64_t *l_604 = (void*)0;
                int64_t *l_605 = (void*)0;
                int64_t *l_606 = (void*)0;
                int64_t *l_607 = (void*)0;
                int64_t *l_608 = (void*)0;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_593[i] = (void*)0;
                l_562 = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_581.xzyx)), (safe_mod_func_uint8_t_u_u((l_581.y <= ((GROUP_DIVERGE(0, 1) , (safe_lshift_func_int8_t_s_u(l_581.x, p_35))) | p_936->g_145.s0)), p_936->g_115.x)), l_586, 0x604CCD91L, 0x502C7FD8L)).hi)).w < l_581.z);
                (*p_936->g_75) = (p_936->g_243 , ((l_587 != &p_936->g_201) ^ (l_565 = ((p_936->g_574 ^= (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x75L, 0x6AL)).yyxyyxxxxyyyyxxx)).s3, FAKE_DIVERGE(p_936->group_1_offset, get_group_id(1), 10)))) , (((safe_sub_func_uint32_t_u_u(p_35, (*p_936->g_75))) == (l_581.z |= (p_936->g_168 != ((((safe_lshift_func_int16_t_s_s(((((p_936->g_600 = ((*l_599) = l_598)) == (l_603 = (void*)0)) > p_35) | p_35), p_936->g_133.sa)) != GROUP_DIVERGE(1, 1)) >= l_570) <= l_562)))) , p_35)))));
            }
            return l_609;
        }
    }
    --p_936->g_618;
    l_623[0] = (p_936->g_243 = l_621);
    if ((safe_rshift_func_uint8_t_u_s((*l_610), (safe_div_func_uint32_t_u_u(FAKE_DIVERGE(p_936->global_2_offset, get_global_id(2), 10), p_35)))))
    { /* block id: 286 */
        int32_t l_653 = 1L;
        int32_t l_657 = 0x29E26811L;
        int32_t l_658 = (-1L);
        VECTOR(int32_t, 16) l_664 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
        int16_t *l_665 = (void*)0;
        int i;
        for (p_936->g_201 = (-30); (p_936->g_201 < 3); p_936->g_201++)
        { /* block id: 289 */
            int32_t l_636 = 0x099F896DL;
            uint32_t *l_637 = &p_936->g_638;
            struct S0 **l_652 = &l_622[0];
            int64_t *l_654[10][9] = {{&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139},{&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139},{&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139},{&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139},{&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139},{&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139},{&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139},{&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139},{&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139},{&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139,&p_936->g_139,(void*)0,&p_936->g_139}};
            int32_t l_655 = 1L;
            int32_t l_656 = 4L;
            int i, j;
            if ((*l_612))
                break;
            (*p_936->g_75) = p_35;
            (*l_612) ^= (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(l_636, ((VECTOR(uint16_t, 16))(65528UL, ((VECTOR(uint16_t, 2))(65532UL, 6UL)), ((VECTOR(uint16_t, 16))((p_936->g_49.y >= ((l_655 = (p_936->g_165 = ((((FAKE_DIVERGE(p_936->local_0_offset, get_local_id(0), 10) <= (p_35 & (++(*l_637)))) < ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_936->g_133.s5, 0x1BL, (((((!(((safe_mod_func_uint8_t_u_u(((*l_610) > p_936->g_76), ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(0x40F1828AA16818E1L, 0xD10590DD73075147L)).odd, (safe_rshift_func_uint16_t_u_u((&p_936->g_243 == ((*l_652) = l_651[1][1][4])), 0)))) & p_936->g_203[2]) && l_636), GROUP_DIVERGE(1, 1))), FAKE_DIVERGE(p_936->local_2_offset, get_local_id(2), 10))) , l_636))) < l_636) & p_936->g_203[2])) , l_653) , 0xC623BF3FL) , 0x3EF8DCEEL) && 0x5CA739C8L), p_936->g_569[0][8], p_936->g_26.y, 0x2AL, 0x4AL, 0L)))).s1337744614774720, (int8_t)(*l_611)))).s5) & p_936->g_49.y) <= 1L))) , l_656)), 0xD84CL, ((VECTOR(uint16_t, 8))(0x3CE7L)), ((VECTOR(uint16_t, 4))(0UL)), 0xAAA7L, 0xD286L)).s2, 0xFB05L, ((VECTOR(uint16_t, 2))(0xBF76L)), 0x1ED7L, p_936->g_109.w, 0x2CE4L, ((VECTOR(uint16_t, 4))(0x9364L)), 0xE461L, 0x99C5L)).s8)) == (-8L)), l_636)), p_936->g_203[9]));
        }
        --l_659;
        for (p_936->g_64.f1 = 18; (p_936->g_64.f1 <= 6); p_936->g_64.f1 = safe_sub_func_uint16_t_u_u(p_936->g_64.f1, 9))
        { /* block id: 301 */
            int16_t *l_666[8][5][2] = {{{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615}},{{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615}},{{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615}},{{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615}},{{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615}},{{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615}},{{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615}},{{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615},{&p_936->g_203[6],&p_936->g_615}}};
            int16_t **l_667 = &l_666[3][3][0];
            uint32_t *l_675 = &p_936->g_638;
            uint32_t l_678 = 4294967290UL;
            uint8_t *l_679 = (void*)0;
            int i, j, k;
            (*l_611) ^= ((*l_610) = ((l_653 <= (p_35 > (p_936->g_145.sc = ((+p_35) && (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_664.sa00e82af)).s40)).yxyyxxxxxxyxyyyx, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(0x65DA2715L, 0x71FC6A84L, 0x3549D640L, 0x4A198946L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((l_665 != ((*l_667) = l_666[3][3][0])), (-1L), ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(p_936->g_668.xy)).yyxyxyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((safe_mod_func_uint8_t_u_u((p_936->g_49.x++), (safe_add_func_uint32_t_u_u(((*l_675)--), (0xE30A775DL != (((void*)0 == &l_658) & l_678)))))), ((VECTOR(int32_t, 2))(2L)), 0x37466989L)).odd)).yyxx, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(7L))))).even, ((VECTOR(int32_t, 2))(0x707FE5C9L))))).xxyy, ((VECTOR(int32_t, 4))(0x7903DE8AL))))).wxwywwwy, ((VECTOR(int32_t, 8))(8L))))).even, ((VECTOR(int32_t, 4))(0x062BB935L)), ((VECTOR(int32_t, 4))(0x208D5533L))))), ((VECTOR(int32_t, 2))(0x469C2560L)), 0x38B65753L, 0L)).s13, (int32_t)l_658))).yyxyyxyy)), 0L, l_678, 0L, ((VECTOR(int32_t, 4))(1L)), 9L)).even))), 1L, 0x64089043L, ((VECTOR(int32_t, 2))((-1L))), 0x446D0852L, 0x23966A41L)).even)).s44, ((VECTOR(int32_t, 2))((-10L))), ((VECTOR(int32_t, 2))(1L))))).xyxyxyyy)).hi, ((VECTOR(int32_t, 4))(0x6E4EDCA0L))))).zzyyyzyyzxwyyyzz))).even)).s2 , (-10L)))))) , (*l_610)));
        }
    }
    else
    { /* block id: 309 */
        VECTOR(int32_t, 8) l_696 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L), 0L, 3L, 0L);
        int32_t l_697 = 0L;
        int i;
        for (l_659 = 0; (l_659 >= 46); ++l_659)
        { /* block id: 312 */
            int64_t l_682 = 7L;
            if (l_682)
                break;
        }
        (*l_611) = (+(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(1L, p_35, 0x0426L, 0x0C1BL, 0x6EF5L, 1L, 5L, 0x1701L)).hi)), ((VECTOR(int16_t, 8))(p_936->g_683.sa492b7bb)).odd))).y || (safe_sub_func_uint16_t_u_u(0x665EL, (((*l_611) == (((safe_div_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s(((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(p_936->g_689.zzyxyyxzwwwyxxxw)))).s5a0a)).y || (!((l_697 = (safe_div_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_s(p_35, p_936->g_694[4])) , p_936->g_109.y) & (p_936->g_695 < p_936->l_comm_values[(safe_mod_func_uint32_t_u_u(p_936->tid, 55))])) , l_696.s7), 1UL))) ^ p_35))) <= p_936->g_638))), p_936->g_615)) || FAKE_DIVERGE(p_936->group_0_offset, get_group_id(0), 10)) >= p_35)) | p_936->g_24.z)))));
    }
    return p_936->g_243;
}


/* ------------------------------------------ */
/* 
 * reads : p_936->g_49 p_936->g_comm_values p_936->g_64 p_936->g_70 p_936->g_75 p_936->g_24 p_936->g_76 p_936->g_109 p_936->g_64.f0 p_936->g_115 p_936->g_120 p_936->l_comm_values p_936->g_122 p_936->g_133 p_936->g_135 p_936->g_139 p_936->g_144 p_936->g_137 p_936->g_145 p_936->g_146 p_936->g_111 p_936->g_149 p_936->g_150 p_936->g_174 p_936->g_168 p_936->g_204 p_936->g_202 p_936->g_243 p_936->g_164 p_936->g_259
 * writes: p_936->g_70 p_936->g_76 p_936->g_111 p_936->g_114 p_936->g_120 p_936->g_122 p_936->g_137 p_936->g_139 p_936->g_146 p_936->g_150 p_936->g_174 p_936->g_168 p_936->g_204 p_936->g_64 p_936->l_comm_values p_936->g_144 p_936->g_165
 */
uint32_t  func_36(uint64_t  p_37, uint8_t  p_38, struct S3 * p_936)
{ /* block id: 6 */
    uint8_t l_65 = 0xD3L;
    int64_t l_147 = 0x7EA209B0CDC420A7L;
    int32_t l_161 = 0x0104EED9L;
    int32_t l_162[5] = {0x3AE77DE1L,0x3AE77DE1L,0x3AE77DE1L,0x3AE77DE1L,0x3AE77DE1L};
    int i;
    if ((atomic_inc(&p_936->g_atomic_input[92 * get_linear_group_id() + 60]) == 6))
    { /* block id: 8 */
        int8_t l_40 = 0x32L;
        int32_t l_41 = 0L;
        int8_t l_42 = 0x1CL;
        struct S0 l_43 = {0UL};
        struct S0 l_44[2][9] = {{{0x4CEC8E44L},{4294967287UL},{4294967287UL},{0x4CEC8E44L},{0x4CEC8E44L},{4294967287UL},{4294967287UL},{0x4CEC8E44L},{0x4CEC8E44L}},{{0x4CEC8E44L},{4294967287UL},{4294967287UL},{0x4CEC8E44L},{0x4CEC8E44L},{4294967287UL},{4294967287UL},{0x4CEC8E44L},{0x4CEC8E44L}}};
        struct S0 l_45 = {0xE3780627L};
        struct S0 l_46 = {0xC01CF56EL};
        int i, j;
        l_41 ^= l_40;
        l_46 = (l_45 = (l_44[0][4] = (l_42 , l_43)));
        unsigned int result = 0;
        result += l_40;
        result += l_41;
        result += l_42;
        result += l_43.f0;
        int l_44_i0, l_44_i1;
        for (l_44_i0 = 0; l_44_i0 < 2; l_44_i0++) {
            for (l_44_i1 = 0; l_44_i1 < 9; l_44_i1++) {
                result += l_44[l_44_i0][l_44_i1].f0;
            }
        }
        result += l_45.f0;
        result += l_46.f0;
        atomic_add(&p_936->g_special_values[92 * get_linear_group_id() + 60], result);
    }
    else
    { /* block id: 13 */
        (1 + 1);
    }
    if (((safe_add_func_uint32_t_u_u(((255UL ^ ((((VECTOR(uint8_t, 2))(p_936->g_49.xx)).even >= (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(0UL, ((p_936->g_comm_values[p_936->tid] ^ 0x1E3BL) && (func_54(p_38, ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(func_60(p_936->g_64, l_65, ((((l_65 , (0x4B182417L | l_65)) == 0x1AFBAE3B8AEA2001L) && (-3L)) <= p_37), p_936), GROUP_DIVERGE(2, 1), 0x9839B2FDL, 0xBA09B981L)), 0UL, p_37, 9UL, 6UL)).hi)).y && 0x2119B852L) , p_936->g_24.w), p_936->g_24.y, l_65, p_936->g_49.x, p_936) , p_936->g_111[0])))), l_65))) > p_936->g_115.y)) < p_936->g_115.y), 0x1E0CC641L)) && l_147))
    { /* block id: 34 */
        int32_t *l_148 = &p_936->g_70;
        int32_t **l_151 = &l_148;
        int32_t l_159 = 0x5E865313L;
        int32_t l_163 = 0x6573C08DL;
        int32_t l_166 = 0x7B4B0E1CL;
        int32_t l_171 = 0x68CAA09BL;
        int32_t l_173 = 1L;
        (*p_936->g_149) = l_148;
        (*l_151) = (*p_936->g_149);
        for (p_38 = 0; (p_38 > 33); p_38 = safe_add_func_uint64_t_u_u(p_38, 8))
        { /* block id: 39 */
            int8_t l_160[8] = {0x41L,0x41L,0x41L,0x41L,0x41L,0x41L,0x41L,0x41L};
            int32_t l_167 = 0x02CFFAFFL;
            int32_t l_172 = (-3L);
            int32_t *l_199 = &l_167;
            int32_t *l_200[5];
            int i;
            for (i = 0; i < 5; i++)
                l_200[i] = &l_171;
            for (p_936->g_137 = 0; (p_936->g_137 > 22); p_936->g_137 = safe_add_func_uint32_t_u_u(p_936->g_137, 5))
            { /* block id: 42 */
                int32_t l_156 = 0x67769F70L;
                int32_t *l_157 = (void*)0;
                int32_t *l_158[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_158[i] = &p_936->g_70;
                if (l_156)
                    break;
                p_936->g_174++;
                if (p_37)
                    break;
                for (p_936->g_168 = 12; (p_936->g_168 > (-9)); p_936->g_168 = safe_sub_func_uint64_t_u_u(p_936->g_168, 9))
                { /* block id: 48 */
                    if ((atomic_inc(&p_936->g_atomic_input[92 * get_linear_group_id() + 67]) == 4))
                    { /* block id: 50 */
                        VECTOR(int32_t, 16) l_179 = (VECTOR(int32_t, 16))(0x1B4F9A3EL, (VECTOR(int32_t, 4))(0x1B4F9A3EL, (VECTOR(int32_t, 2))(0x1B4F9A3EL, 0x7D913FAEL), 0x7D913FAEL), 0x7D913FAEL, 0x1B4F9A3EL, 0x7D913FAEL, (VECTOR(int32_t, 2))(0x1B4F9A3EL, 0x7D913FAEL), (VECTOR(int32_t, 2))(0x1B4F9A3EL, 0x7D913FAEL), 0x1B4F9A3EL, 0x7D913FAEL, 0x1B4F9A3EL, 0x7D913FAEL);
                        struct S0 l_180[1] = {{0x613D90FEL}};
                        int32_t l_181 = 0x4C6768EAL;
                        uint16_t l_182 = 0UL;
                        uint32_t l_183[1][2];
                        uint32_t l_184 = 4UL;
                        int8_t l_185 = 0x4DL;
                        uint16_t l_186 = 0x39E2L;
                        uint8_t l_187 = 0x21L;
                        uint64_t l_188 = 0xE760C5D1EC6DD82FL;
                        VECTOR(int32_t, 16) l_189 = (VECTOR(int32_t, 16))(0x2DB80F26L, (VECTOR(int32_t, 4))(0x2DB80F26L, (VECTOR(int32_t, 2))(0x2DB80F26L, 0x1603B0C7L), 0x1603B0C7L), 0x1603B0C7L, 0x2DB80F26L, 0x1603B0C7L, (VECTOR(int32_t, 2))(0x2DB80F26L, 0x1603B0C7L), (VECTOR(int32_t, 2))(0x2DB80F26L, 0x1603B0C7L), 0x2DB80F26L, 0x1603B0C7L, 0x2DB80F26L, 0x1603B0C7L);
                        VECTOR(int32_t, 8) l_190 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L));
                        VECTOR(int32_t, 8) l_191 = (VECTOR(int32_t, 8))(0x378BC908L, (VECTOR(int32_t, 4))(0x378BC908L, (VECTOR(int32_t, 2))(0x378BC908L, (-1L)), (-1L)), (-1L), 0x378BC908L, (-1L));
                        VECTOR(int32_t, 4) l_192 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x50565945L), 0x50565945L);
                        int32_t l_193 = 0x327C09D1L;
                        uint8_t l_194 = 0x5FL;
                        VECTOR(int32_t, 16) l_195 = (VECTOR(int32_t, 16))(0x24BE1746L, (VECTOR(int32_t, 4))(0x24BE1746L, (VECTOR(int32_t, 2))(0x24BE1746L, 0L), 0L), 0L, 0x24BE1746L, 0L, (VECTOR(int32_t, 2))(0x24BE1746L, 0L), (VECTOR(int32_t, 2))(0x24BE1746L, 0L), 0x24BE1746L, 0L, 0x24BE1746L, 0L);
                        uint32_t l_196 = 0x3343AA51L;
                        int8_t l_197 = 0x7AL;
                        int32_t l_198 = (-8L);
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_183[i][j] = 0xC33F7625L;
                        }
                        l_182 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x0CB1CE7FL, 0x457EFDBFL, 2L, 0L, ((VECTOR(int32_t, 2))(l_179.s4b)), 0L, 0x14CE61BCL)).s41)).yyyx)), (l_179.sc = 0x17AD9788L), (l_181 = (l_180[0] , 0x01B1BC71L)), 0x417789D2L, 0x7FDF52C7L)).s3;
                        l_198 = ((VECTOR(int32_t, 8))((l_184 &= l_183[0][0]), (-1L), 0x072175B4L, l_185, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(0x46DFB0B2L, 0x21D51EC3L, ((VECTOR(int32_t, 2))(0x02580673L, 0x7C59C4CCL)), 0x70311DD1L, l_186, (-1L), (l_188 = l_187), 8L, 0x0104350CL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(l_189.sbe)).xyxyyyxx, ((VECTOR(int32_t, 4))(l_190.s2165)).yzxxyyzx))).odd)), 8L, 9L)).sa6, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))((-2L), (-5L), 0x633B61AEL, 4L, 0x37D19052L, ((VECTOR(int32_t, 2))(0x24B7AEA8L, 6L)), 0x34CFEFF8L)).s40, ((VECTOR(int32_t, 16))(l_191.s4160617122775736)).sd9)))))).xxxy)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_192.xxwyxywxwxzxxwzw)).odd)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x61B89C92L, ((VECTOR(int32_t, 2))(1L, (-4L))), 0x6266AF2FL, l_193, (-1L), ((VECTOR(int32_t, 4))(l_194, ((VECTOR(int32_t, 2))(l_195.sfb)), 0x00103624L)), ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(0x47ABF410L)), (-5L), 1L, (-4L), 0x0936126EL, (-6L))).s6005330307255722, ((VECTOR(int32_t, 16))((-1L))), ((VECTOR(int32_t, 16))((-6L)))))).se, 0x02656994L, ((VECTOR(int32_t, 4))(0x25D5B2D0L)))).s8, l_196, l_197, ((VECTOR(int32_t, 8))(0x0C96EE17L)), ((VECTOR(int32_t, 2))(0x5F90CA24L)), (-1L), (-8L), 0L)).lo, ((VECTOR(int32_t, 8))(0x6EFEA89CL))))).lo)).lo, ((VECTOR(int32_t, 2))(0x3B6CD964L))))), (-1L), 1L)))).s6;
                        unsigned int result = 0;
                        result += l_179.sf;
                        result += l_179.se;
                        result += l_179.sd;
                        result += l_179.sc;
                        result += l_179.sb;
                        result += l_179.sa;
                        result += l_179.s9;
                        result += l_179.s8;
                        result += l_179.s7;
                        result += l_179.s6;
                        result += l_179.s5;
                        result += l_179.s4;
                        result += l_179.s3;
                        result += l_179.s2;
                        result += l_179.s1;
                        result += l_179.s0;
                        int l_180_i0;
                        for (l_180_i0 = 0; l_180_i0 < 1; l_180_i0++) {
                            result += l_180[l_180_i0].f0;
                        }
                        result += l_181;
                        result += l_182;
                        int l_183_i0, l_183_i1;
                        for (l_183_i0 = 0; l_183_i0 < 1; l_183_i0++) {
                            for (l_183_i1 = 0; l_183_i1 < 2; l_183_i1++) {
                                result += l_183[l_183_i0][l_183_i1];
                            }
                        }
                        result += l_184;
                        result += l_185;
                        result += l_186;
                        result += l_187;
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
                        result += l_190.s7;
                        result += l_190.s6;
                        result += l_190.s5;
                        result += l_190.s4;
                        result += l_190.s3;
                        result += l_190.s2;
                        result += l_190.s1;
                        result += l_190.s0;
                        result += l_191.s7;
                        result += l_191.s6;
                        result += l_191.s5;
                        result += l_191.s4;
                        result += l_191.s3;
                        result += l_191.s2;
                        result += l_191.s1;
                        result += l_191.s0;
                        result += l_192.w;
                        result += l_192.z;
                        result += l_192.y;
                        result += l_192.x;
                        result += l_193;
                        result += l_194;
                        result += l_195.sf;
                        result += l_195.se;
                        result += l_195.sd;
                        result += l_195.sc;
                        result += l_195.sb;
                        result += l_195.sa;
                        result += l_195.s9;
                        result += l_195.s8;
                        result += l_195.s7;
                        result += l_195.s6;
                        result += l_195.s5;
                        result += l_195.s4;
                        result += l_195.s3;
                        result += l_195.s2;
                        result += l_195.s1;
                        result += l_195.s0;
                        result += l_196;
                        result += l_197;
                        result += l_198;
                        atomic_add(&p_936->g_special_values[92 * get_linear_group_id() + 67], result);
                    }
                    else
                    { /* block id: 57 */
                        (1 + 1);
                    }
                    return p_936->g_49.y;
                }
            }
            p_936->g_204--;
            return p_936->g_204;
        }
    }
    else
    { /* block id: 66 */
        union U1 *l_207[10][10] = {{&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64},{&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64},{&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64},{&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64},{&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64},{&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64},{&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64},{&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64},{&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64},{&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64,&p_936->g_64}};
        int32_t l_216 = (-1L);
        uint16_t l_217[1][3];
        int64_t *l_218[7][9] = {{&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&l_147,&l_147},{&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&l_147,&l_147},{&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&l_147,&l_147},{&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&l_147,&l_147},{&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&l_147,&l_147},{&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&l_147,&l_147},{&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&p_936->g_165,&p_936->g_165,&p_936->g_139,&l_147,&l_147}};
        int32_t *l_232 = (void*)0;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_217[i][j] = 5UL;
        }
        if ((((p_936->g_64 = p_936->g_64) , (*p_936->g_75)) , ((!((p_936->g_202[4] , ((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_216, p_37)), (0x55L >= l_217[0][1]))), (p_936->l_comm_values[(safe_mod_func_uint32_t_u_u(p_936->tid, 55))] = 5L))) != l_217[0][1]), 5)) >= 254UL)) > p_38)) , l_217[0][1])))
        { /* block id: 69 */
            struct S0 l_227 = {4294967295UL};
            int8_t *l_228 = &p_936->g_64.f0;
            int16_t *l_229[8][9] = {{&p_936->g_203[2],&p_936->g_203[2],&p_936->g_203[9],&p_936->g_137,(void*)0,&p_936->g_137,&p_936->g_203[9],&p_936->g_203[2],&p_936->g_203[2]},{&p_936->g_203[2],&p_936->g_203[2],&p_936->g_203[9],&p_936->g_137,(void*)0,&p_936->g_137,&p_936->g_203[9],&p_936->g_203[2],&p_936->g_203[2]},{&p_936->g_203[2],&p_936->g_203[2],&p_936->g_203[9],&p_936->g_137,(void*)0,&p_936->g_137,&p_936->g_203[9],&p_936->g_203[2],&p_936->g_203[2]},{&p_936->g_203[2],&p_936->g_203[2],&p_936->g_203[9],&p_936->g_137,(void*)0,&p_936->g_137,&p_936->g_203[9],&p_936->g_203[2],&p_936->g_203[2]},{&p_936->g_203[2],&p_936->g_203[2],&p_936->g_203[9],&p_936->g_137,(void*)0,&p_936->g_137,&p_936->g_203[9],&p_936->g_203[2],&p_936->g_203[2]},{&p_936->g_203[2],&p_936->g_203[2],&p_936->g_203[9],&p_936->g_137,(void*)0,&p_936->g_137,&p_936->g_203[9],&p_936->g_203[2],&p_936->g_203[2]},{&p_936->g_203[2],&p_936->g_203[2],&p_936->g_203[9],&p_936->g_137,(void*)0,&p_936->g_137,&p_936->g_203[9],&p_936->g_203[2],&p_936->g_203[2]},{&p_936->g_203[2],&p_936->g_203[2],&p_936->g_203[9],&p_936->g_137,(void*)0,&p_936->g_137,&p_936->g_203[9],&p_936->g_203[2],&p_936->g_203[2]}};
            int32_t l_230 = 9L;
            int32_t **l_231 = &p_936->g_150;
            int i, j;
            l_230 |= (safe_lshift_func_uint16_t_u_s(((p_936->g_144.s3 = (((p_38 >= (safe_add_func_uint64_t_u_u(p_38, p_936->g_comm_values[p_936->tid]))) , (safe_add_func_uint32_t_u_u(((void*)0 == l_207[7][6]), (p_936->g_168 < ((*l_228) = (safe_rshift_func_uint16_t_u_s((l_227 , p_38), 14))))))) <= (p_936->g_24.w ^ l_217[0][2]))) != p_38), 4));
            l_232 = ((*l_231) = &l_230);
        }
        else
        { /* block id: 75 */
            int64_t l_233 = 0x5B629B37185AD0F7L;
            int32_t *l_234 = &l_162[2];
            int32_t *l_235[5][10][5] = {{{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216}},{{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216}},{{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216}},{{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216}},{{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216},{&l_162[2],&l_161,&l_162[2],&l_161,&l_216}}};
            uint32_t l_236[10] = {2UL,0UL,2UL,2UL,0UL,2UL,2UL,0UL,2UL,2UL};
            int8_t *l_252 = &p_936->g_64.f0;
            int i, j, k;
            ++l_236[7];
            (*p_936->g_75) = (safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(((+p_936->g_115.y) ^ l_65), ((*p_936->g_149) == (p_936->g_243 , &p_936->g_70)))) | (l_162[2] = (((safe_add_func_uint8_t_u_u(0x7EL, ((*l_252) = (safe_mul_func_int8_t_s_s((((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 16))((+(safe_mul_func_uint16_t_u_u((&l_162[0] == (void*)0), (safe_add_func_int16_t_s_s(((p_38 | 0x7F55E27A0AEBC039L) >= 0x66236941L), 1L))))), ((VECTOR(uint32_t, 2))(0x49B17201L)), ((VECTOR(uint32_t, 2))(0xD1871B91L)), ((VECTOR(uint32_t, 4))(0x0A70D411L)), 1UL, 0xA6B8BF16L, 0x3AC702A8L, ((VECTOR(uint32_t, 2))(0xFF7031D5L)), 0UL, 0x94F5809BL)), (uint32_t)4294967295UL, (uint32_t)FAKE_DIVERGE(p_936->group_1_offset, get_group_id(1), 10)))).hi)), ((VECTOR(uint32_t, 8))(4294967288UL)), ((VECTOR(uint32_t, 8))(0x3B3FE907L))))).s1 && 4294967294UL), l_147))))) >= p_38) , 0x07L))), p_37));
            if ((((0x6B0BL ^ (p_936->g_76 , (*l_234))) , (p_38 <= (249UL && ((VECTOR(uint8_t, 16))(l_217[0][1], ((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((p_936->g_133.s4 , (p_936->g_165 = (1L & p_936->g_144.s0))) == p_936->g_24.x), p_936->g_164)), p_37)), l_162[2])) != 0x0CF0C47CL), p_38, ((VECTOR(uint8_t, 4))(0UL)), ((VECTOR(uint8_t, 4))(2UL)), ((VECTOR(uint8_t, 4))(255UL)), 6UL)).sb))) , 1L))
            { /* block id: 81 */
                int32_t **l_261[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_261[i] = &l_234;
                (*p_936->g_259) = (*p_936->g_149);
                (*p_936->g_149) = (*p_936->g_259);
            }
            else
            { /* block id: 84 */
                if ((atomic_inc(&p_936->g_atomic_input[92 * get_linear_group_id() + 43]) == 8))
                { /* block id: 86 */
                    uint64_t l_262[2][6];
                    int32_t l_263 = (-10L);
                    union U2 l_264 = {0x31L};
                    struct S0 l_265[4] = {{0x9614BA55L},{0x9614BA55L},{0x9614BA55L},{0x9614BA55L}};
                    struct S0 l_266 = {0UL};
                    int64_t l_267 = (-10L);
                    uint8_t l_268 = 250UL;
                    int32_t l_297 = 1L;
                    int32_t *l_298 = (void*)0;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_262[i][j] = 18446744073709551615UL;
                    }
                    l_263 = l_262[0][3];
                    if (((l_266 = (l_265[1] = (l_264 , l_265[1]))) , (l_268 = l_267)))
                    { /* block id: 91 */
                        int32_t l_270 = 0x7E0126B1L;
                        int32_t *l_269 = &l_270;
                        struct S0 l_271 = {4294967295UL};
                        struct S0 l_272 = {0x2C29D257L};
                        uint32_t l_273[1][10] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
                        uint32_t l_274 = 4294967295UL;
                        int16_t l_275 = (-1L);
                        union U2 l_276 = {0x70L};
                        int8_t l_277[6] = {0x65L,0x6BL,0x65L,0x65L,0x6BL,0x65L};
                        VECTOR(int32_t, 4) l_278 = (VECTOR(int32_t, 4))(0x7FD64A67L, (VECTOR(int32_t, 2))(0x7FD64A67L, 0x0FD64B41L), 0x0FD64B41L);
                        VECTOR(int16_t, 2) l_279 = (VECTOR(int16_t, 2))(0x1B1AL, (-7L));
                        VECTOR(int16_t, 16) l_280 = (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), (-1L)), (-1L)), (-1L), (-6L), (-1L), (VECTOR(int16_t, 2))((-6L), (-1L)), (VECTOR(int16_t, 2))((-6L), (-1L)), (-6L), (-1L), (-6L), (-1L));
                        int64_t l_281 = (-1L);
                        VECTOR(int16_t, 2) l_282 = (VECTOR(int16_t, 2))(0x17F8L, 0x1F13L);
                        VECTOR(int16_t, 16) l_283 = (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 1L), 1L), 1L, 4L, 1L, (VECTOR(int16_t, 2))(4L, 1L), (VECTOR(int16_t, 2))(4L, 1L), 4L, 1L, 4L, 1L);
                        VECTOR(uint16_t, 8) l_284 = (VECTOR(uint16_t, 8))(0x52FFL, (VECTOR(uint16_t, 4))(0x52FFL, (VECTOR(uint16_t, 2))(0x52FFL, 0x7812L), 0x7812L), 0x7812L, 0x52FFL, 0x7812L);
                        uint32_t l_285 = 1UL;
                        uint32_t l_286 = 0x8C4592B0L;
                        int32_t l_287 = 0L;
                        int32_t l_288[5][8] = {{1L,1L,(-1L),(-1L),0L,(-1L),(-1L),1L},{1L,1L,(-1L),(-1L),0L,(-1L),(-1L),1L},{1L,1L,(-1L),(-1L),0L,(-1L),(-1L),1L},{1L,1L,(-1L),(-1L),0L,(-1L),(-1L),1L},{1L,1L,(-1L),(-1L),0L,(-1L),(-1L),1L}};
                        int32_t l_289[7][3] = {{0x56FE85BEL,(-1L),0x51051B63L},{0x56FE85BEL,(-1L),0x51051B63L},{0x56FE85BEL,(-1L),0x51051B63L},{0x56FE85BEL,(-1L),0x51051B63L},{0x56FE85BEL,(-1L),0x51051B63L},{0x56FE85BEL,(-1L),0x51051B63L},{0x56FE85BEL,(-1L),0x51051B63L}};
                        uint32_t l_290 = 0xD04F5E98L;
                        int32_t l_291[9][9] = {{0x472926F0L,(-1L),(-7L),(-7L),(-1L),0x472926F0L,0x1B47BCCFL,(-1L),0x5DDD1249L},{0x472926F0L,(-1L),(-7L),(-7L),(-1L),0x472926F0L,0x1B47BCCFL,(-1L),0x5DDD1249L},{0x472926F0L,(-1L),(-7L),(-7L),(-1L),0x472926F0L,0x1B47BCCFL,(-1L),0x5DDD1249L},{0x472926F0L,(-1L),(-7L),(-7L),(-1L),0x472926F0L,0x1B47BCCFL,(-1L),0x5DDD1249L},{0x472926F0L,(-1L),(-7L),(-7L),(-1L),0x472926F0L,0x1B47BCCFL,(-1L),0x5DDD1249L},{0x472926F0L,(-1L),(-7L),(-7L),(-1L),0x472926F0L,0x1B47BCCFL,(-1L),0x5DDD1249L},{0x472926F0L,(-1L),(-7L),(-7L),(-1L),0x472926F0L,0x1B47BCCFL,(-1L),0x5DDD1249L},{0x472926F0L,(-1L),(-7L),(-7L),(-1L),0x472926F0L,0x1B47BCCFL,(-1L),0x5DDD1249L},{0x472926F0L,(-1L),(-7L),(-7L),(-1L),0x472926F0L,0x1B47BCCFL,(-1L),0x5DDD1249L}};
                        int8_t l_292 = 8L;
                        uint32_t l_293[6][5] = {{1UL,1UL,0xC625ECAEL,0x629A8D41L,4294967294UL},{1UL,1UL,0xC625ECAEL,0x629A8D41L,4294967294UL},{1UL,1UL,0xC625ECAEL,0x629A8D41L,4294967294UL},{1UL,1UL,0xC625ECAEL,0x629A8D41L,4294967294UL},{1UL,1UL,0xC625ECAEL,0x629A8D41L,4294967294UL},{1UL,1UL,0xC625ECAEL,0x629A8D41L,4294967294UL}};
                        int i, j;
                        l_269 = (void*)0;
                        l_272 = l_271;
                        l_293[0][1] |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(0x31A032CAL, l_273[0][9], (((l_264.f1 = (l_274 , l_275)) , (l_264 = l_276)) , l_277[1]), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x49363B6EL, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(l_278.zy)), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))((-1L), (-7L))))))))), 7L)).wzwzzzzz)).lo)))).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x0285390BL, 1L)), 0x3CD14600L, 1L)).even, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))((-9L), 0x6629D0FCL)), (int32_t)0x6B7D6F02L)))))), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(1L, ((VECTOR(int16_t, 2))(1L, 0L)), 0x73D9L)), ((VECTOR(int16_t, 4))(l_279.xxxx)))).s70, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 4))(0x1EBAL, (l_281 |= ((VECTOR(int16_t, 16))(l_280.s4d46530d64130411)).sf), (-1L), 0x025EL)), ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_282.yx)).xxxyxxyyyxyxxyyx)).s5931)).wxzxyzxx)).s5267026606000615)).hi)).hi, ((VECTOR(int16_t, 2))(l_283.see)).xyxy)))))).zxzzxxzy, ((VECTOR(uint16_t, 16))(0x2287L, ((VECTOR(uint16_t, 4))(l_284.s4225)), 0xC689L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_285, ((VECTOR(uint16_t, 4))(1UL)), l_286, 65533UL, 0x5C0EL)), 1UL, l_287, 1UL, l_288[1][4], 65533UL, l_289[4][0], 0x551BL, 1UL)).hi)).hi)), 0x3F0EL, l_290, ((VECTOR(uint16_t, 2))(65535UL)), 5UL, 0xE480L)).lo, ((VECTOR(uint16_t, 8))(0x889CL))))), 1UL, 0xA2AAL, l_291[0][4], l_292, ((VECTOR(uint16_t, 2))(6UL)), 0x29DEL, 0UL)).se4))), (-2L))), ((VECTOR(int32_t, 8))((-10L)))))).s31)).yyyxyyyxyyxyyxxy)).s0;
                    }
                    else
                    { /* block id: 98 */
                        uint16_t l_294[2];
                        int32_t l_295 = 9L;
                        int32_t *l_296 = (void*)0;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_294[i] = 1UL;
                        l_295 &= l_294[0];
                        l_296 = l_296;
                    }
                    l_298 = (l_297 , l_298);
                    unsigned int result = 0;
                    int l_262_i0, l_262_i1;
                    for (l_262_i0 = 0; l_262_i0 < 2; l_262_i0++) {
                        for (l_262_i1 = 0; l_262_i1 < 6; l_262_i1++) {
                            result += l_262[l_262_i0][l_262_i1];
                        }
                    }
                    result += l_263;
                    result += l_264.f0;
                    result += l_264.f1;
                    int l_265_i0;
                    for (l_265_i0 = 0; l_265_i0 < 4; l_265_i0++) {
                        result += l_265[l_265_i0].f0;
                    }
                    result += l_266.f0;
                    result += l_267;
                    result += l_268;
                    result += l_297;
                    atomic_add(&p_936->g_special_values[92 * get_linear_group_id() + 43], result);
                }
                else
                { /* block id: 103 */
                    (1 + 1);
                }
            }
        }
        if ((atomic_inc(&p_936->l_atomic_input[4]) == 7))
        { /* block id: 109 */
            int32_t l_299 = (-1L);
            int32_t *l_332 = &l_299;
            int32_t *l_333 = &l_299;
            for (l_299 = (-13); (l_299 <= 12); l_299 = safe_add_func_uint8_t_u_u(l_299, 3))
            { /* block id: 112 */
                int32_t l_303 = (-1L);
                int32_t *l_302 = &l_303;
                int32_t *l_304 = (void*)0;
                int32_t *l_305 = &l_303;
                int32_t *l_306 = &l_303;
                int32_t *l_307 = &l_303;
                l_302 = (l_305 = (l_304 = l_302));
                l_307 = l_306;
                for (l_303 = 0; (l_303 <= 20); l_303++)
                { /* block id: 119 */
                    uint8_t l_310 = 255UL;
                    VECTOR(int32_t, 8) l_318 = (VECTOR(int32_t, 8))(0x33ACD351L, (VECTOR(int32_t, 4))(0x33ACD351L, (VECTOR(int32_t, 2))(0x33ACD351L, 0x4A80B5DEL), 0x4A80B5DEL), 0x4A80B5DEL, 0x33ACD351L, 0x4A80B5DEL);
                    int i;
                    ++l_310;
                    for (l_310 = 0; (l_310 < 15); ++l_310)
                    { /* block id: 123 */
                        int32_t l_316 = 2L;
                        int32_t *l_315 = &l_316;
                        int32_t *l_317[7] = {&l_316,(void*)0,&l_316,&l_316,(void*)0,&l_316,&l_316};
                        int i;
                        l_302 = l_315;
                        l_317[2] = l_317[1];
                        (*l_302) |= 0x20AD9135L;
                    }
                    if (l_318.s6)
                    { /* block id: 128 */
                        union U1 l_320 = {0x1DL};
                        union U1 *l_319 = &l_320;
                        union U1 *l_321 = &l_320;
                        union U1 *l_322[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        union U1 *l_323 = &l_320;
                        union U1 *l_324 = &l_320;
                        uint32_t l_325 = 0x970F5AB0L;
                        uint64_t l_326 = 9UL;
                        int i;
                        l_324 = (l_323 = (l_322[4] = (l_321 = l_319)));
                        l_326 = l_325;
                    }
                    else
                    { /* block id: 134 */
                        int32_t l_327 = 1L;
                        int8_t l_328[3];
                        uint16_t l_329 = 0xE17FL;
                        int64_t l_330 = 9L;
                        uint32_t l_331 = 0UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_328[i] = 0x21L;
                        l_327 &= (-1L);
                        l_330 = (l_329 = l_328[0]);
                        l_331 = (-7L);
                    }
                }
            }
            l_333 = l_332;
            unsigned int result = 0;
            result += l_299;
            atomic_add(&p_936->l_special_values[4], result);
        }
        else
        { /* block id: 143 */
            (1 + 1);
        }
    }
    if ((atomic_inc(&p_936->l_atomic_input[47]) == 8))
    { /* block id: 148 */
        union U1 l_334[1][3] = {{{0x70L},{0x70L},{0x70L}}};
        uint8_t l_335 = 0x13L;
        VECTOR(uint8_t, 4) l_336 = (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0xBCL), 0xBCL);
        int i, j;
        l_336.w = (l_334[0][0] , (l_335 = 5L));
        for (l_336.w = 19; (l_336.w >= 42); l_336.w = safe_add_func_int64_t_s_s(l_336.w, 1))
        { /* block id: 153 */
            int8_t l_339 = 0x2BL;
            VECTOR(int16_t, 2) l_501 = (VECTOR(int16_t, 2))(0x50A6L, 0x0276L);
            uint32_t l_502 = 0xE82A16E1L;
            uint32_t l_503 = 0x9FACD502L;
            uint16_t l_504 = 0x81D0L;
            uint32_t l_505 = 0x1851A363L;
            uint32_t l_506 = 0UL;
            int32_t l_508 = 0x1EC56952L;
            int32_t *l_507 = &l_508;
            int32_t *l_509 = &l_508;
            VECTOR(int32_t, 8) l_510 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-3L)), (-3L)), (-3L), 8L, (-3L));
            VECTOR(int16_t, 4) l_511 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x321FL), 0x321FL);
            uint8_t l_512 = 247UL;
            struct S0 l_514 = {0x5AE8B41FL};
            struct S0 *l_513[6][7][3] = {{{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514}},{{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514}},{{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514}},{{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514}},{{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514}},{{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514},{(void*)0,(void*)0,&l_514}}};
            struct S0 *l_515 = &l_514;
            int i, j, k;
            if (l_339)
            { /* block id: 154 */
                int16_t l_340 = 1L;
                uint32_t l_341[2];
                VECTOR(int32_t, 4) l_344 = (VECTOR(int32_t, 4))(0x21FDA284L, (VECTOR(int32_t, 2))(0x21FDA284L, 1L), 1L);
                int i;
                for (i = 0; i < 2; i++)
                    l_341[i] = 4294967290UL;
                l_341[0]--;
                if (((VECTOR(int32_t, 4))(l_344.wxyx)).x)
                { /* block id: 156 */
                    uint16_t l_345 = 0x90BDL;
                    int64_t l_346 = 0x4891353104D5C85CL;
                    int16_t l_347 = 0x20C6L;
                    VECTOR(uint8_t, 4) l_348 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 4UL), 4UL);
                    union U1 l_351 = {0x36L};
                    int32_t l_353[1];
                    int32_t *l_352[8];
                    int32_t *l_354 = &l_353[0];
                    int32_t *l_355 = &l_353[0];
                    int32_t *l_356 = &l_353[0];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_353[i] = (-1L);
                    for (i = 0; i < 8; i++)
                        l_352[i] = &l_353[0];
                    l_344.w &= 0x1B261DA1L;
                    l_356 = (l_355 = ((l_345 = 1UL) , ((l_348.z++) , (l_354 = ((l_334[0][2] = l_351) , l_352[2])))));
                }
                else
                { /* block id: 164 */
                    union U1 l_357 = {0x22L};
                    union U1 l_358 = {8L};
                    int8_t l_359 = 9L;
                    l_344.x ^= ((l_358 = (l_334[0][1] = l_357)) , l_359);
                }
            }
            else
            { /* block id: 169 */
                VECTOR(int16_t, 4) l_360 = (VECTOR(int16_t, 4))(0x7FF9L, (VECTOR(int16_t, 2))(0x7FF9L, 3L), 3L);
                VECTOR(uint32_t, 8) l_361 = (VECTOR(uint32_t, 8))(0xF681D166L, (VECTOR(uint32_t, 4))(0xF681D166L, (VECTOR(uint32_t, 2))(0xF681D166L, 4294967288UL), 4294967288UL), 4294967288UL, 0xF681D166L, 4294967288UL);
                VECTOR(int32_t, 8) l_362 = (VECTOR(int32_t, 8))(0x508090F0L, (VECTOR(int32_t, 4))(0x508090F0L, (VECTOR(int32_t, 2))(0x508090F0L, 4L), 4L), 4L, 0x508090F0L, 4L);
                int32_t l_363 = 0x4BFC9696L;
                VECTOR(int32_t, 4) l_364 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1A76D4F9L), 0x1A76D4F9L);
                VECTOR(int32_t, 8) l_365 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x6E610CE6L), 0x6E610CE6L), 0x6E610CE6L, 7L, 0x6E610CE6L);
                uint32_t l_366 = 4294967287UL;
                uint64_t l_367[9][1][10] = {{{18446744073709551615UL,4UL,0x65759DA75A76652DL,0x94507BB3D1182DDDL,4UL,4UL,0x94507BB3D1182DDDL,0x65759DA75A76652DL,4UL,18446744073709551615UL}},{{18446744073709551615UL,4UL,0x65759DA75A76652DL,0x94507BB3D1182DDDL,4UL,4UL,0x94507BB3D1182DDDL,0x65759DA75A76652DL,4UL,18446744073709551615UL}},{{18446744073709551615UL,4UL,0x65759DA75A76652DL,0x94507BB3D1182DDDL,4UL,4UL,0x94507BB3D1182DDDL,0x65759DA75A76652DL,4UL,18446744073709551615UL}},{{18446744073709551615UL,4UL,0x65759DA75A76652DL,0x94507BB3D1182DDDL,4UL,4UL,0x94507BB3D1182DDDL,0x65759DA75A76652DL,4UL,18446744073709551615UL}},{{18446744073709551615UL,4UL,0x65759DA75A76652DL,0x94507BB3D1182DDDL,4UL,4UL,0x94507BB3D1182DDDL,0x65759DA75A76652DL,4UL,18446744073709551615UL}},{{18446744073709551615UL,4UL,0x65759DA75A76652DL,0x94507BB3D1182DDDL,4UL,4UL,0x94507BB3D1182DDDL,0x65759DA75A76652DL,4UL,18446744073709551615UL}},{{18446744073709551615UL,4UL,0x65759DA75A76652DL,0x94507BB3D1182DDDL,4UL,4UL,0x94507BB3D1182DDDL,0x65759DA75A76652DL,4UL,18446744073709551615UL}},{{18446744073709551615UL,4UL,0x65759DA75A76652DL,0x94507BB3D1182DDDL,4UL,4UL,0x94507BB3D1182DDDL,0x65759DA75A76652DL,4UL,18446744073709551615UL}},{{18446744073709551615UL,4UL,0x65759DA75A76652DL,0x94507BB3D1182DDDL,4UL,4UL,0x94507BB3D1182DDDL,0x65759DA75A76652DL,4UL,18446744073709551615UL}}};
                uint32_t l_491 = 0x01728E7CL;
                int32_t *l_493[8][3] = {{(void*)0,&l_363,(void*)0},{(void*)0,&l_363,(void*)0},{(void*)0,&l_363,(void*)0},{(void*)0,&l_363,(void*)0},{(void*)0,&l_363,(void*)0},{(void*)0,&l_363,(void*)0},{(void*)0,&l_363,(void*)0},{(void*)0,&l_363,(void*)0}};
                int32_t **l_492[6][9] = {{&l_493[6][1],&l_493[4][2],&l_493[5][1],&l_493[5][1],&l_493[5][1],&l_493[4][2],&l_493[6][1],(void*)0,&l_493[5][1]},{&l_493[6][1],&l_493[4][2],&l_493[5][1],&l_493[5][1],&l_493[5][1],&l_493[4][2],&l_493[6][1],(void*)0,&l_493[5][1]},{&l_493[6][1],&l_493[4][2],&l_493[5][1],&l_493[5][1],&l_493[5][1],&l_493[4][2],&l_493[6][1],(void*)0,&l_493[5][1]},{&l_493[6][1],&l_493[4][2],&l_493[5][1],&l_493[5][1],&l_493[5][1],&l_493[4][2],&l_493[6][1],(void*)0,&l_493[5][1]},{&l_493[6][1],&l_493[4][2],&l_493[5][1],&l_493[5][1],&l_493[5][1],&l_493[4][2],&l_493[6][1],(void*)0,&l_493[5][1]},{&l_493[6][1],&l_493[4][2],&l_493[5][1],&l_493[5][1],&l_493[5][1],&l_493[4][2],&l_493[6][1],(void*)0,&l_493[5][1]}};
                int32_t *l_494 = (void*)0;
                int32_t *l_495 = (void*)0;
                int64_t l_496[9] = {0x0960AD2882CCD5EAL,0x0960AD2882CCD5EAL,0x0960AD2882CCD5EAL,0x0960AD2882CCD5EAL,0x0960AD2882CCD5EAL,0x0960AD2882CCD5EAL,0x0960AD2882CCD5EAL,0x0960AD2882CCD5EAL,0x0960AD2882CCD5EAL};
                int8_t l_497 = 0x12L;
                uint32_t l_498 = 9UL;
                int i, j, k;
                if (((((VECTOR(int16_t, 16))(l_360.wyxxyzwyxxwwxxwz)).s3 , ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 2))(l_361.s71)), ((VECTOR(uint32_t, 2))(4294967286UL, 0UL))))).xxxyxyyy)).s5) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(1L, 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_362.s7177674566420641)).hi)).s51)), l_363, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(l_364.zyzwwywxywxxyzxw)).hi, ((VECTOR(int32_t, 4))(l_365.s6466)).xxwzzzxy))), (l_366 , l_367[6][0][2]), (-10L), 0x061B768BL)).odd)).s2))
                { /* block id: 170 */
                    int32_t l_368 = 0x1D959476L;
                    int64_t l_382 = 8L;
                    for (l_368 = 0; (l_368 != 28); l_368 = safe_add_func_uint8_t_u_u(l_368, 2))
                    { /* block id: 173 */
                        int32_t l_372 = (-6L);
                        int32_t *l_371 = &l_372;
                        int32_t *l_373 = &l_372;
                        uint32_t l_374[8][5] = {{4294967292UL,4294967292UL,0UL,1UL,6UL},{4294967292UL,4294967292UL,0UL,1UL,6UL},{4294967292UL,4294967292UL,0UL,1UL,6UL},{4294967292UL,4294967292UL,0UL,1UL,6UL},{4294967292UL,4294967292UL,0UL,1UL,6UL},{4294967292UL,4294967292UL,0UL,1UL,6UL},{4294967292UL,4294967292UL,0UL,1UL,6UL},{4294967292UL,4294967292UL,0UL,1UL,6UL}};
                        VECTOR(int64_t, 2) l_375 = (VECTOR(int64_t, 2))((-1L), 0L);
                        VECTOR(int64_t, 2) l_376 = (VECTOR(int64_t, 2))(0x12CCF0B8B5409C42L, 8L);
                        struct S0 l_377 = {5UL};
                        struct S0 l_378 = {0x5144D632L};
                        struct S0 l_379 = {0UL};
                        struct S0 l_380 = {0xCA63DC5FL};
                        struct S0 l_381[5][8][1] = {{{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}}},{{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}}},{{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}}},{{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}}},{{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}}}};
                        int i, j, k;
                        l_373 = l_371;
                        l_364.z |= l_374[0][4];
                        l_381[4][7][0] = (l_380 = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 8))(l_375.yyyyxxyx)).hi, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_376.yyyx)).xwxzywxw)).odd))))))).w , (l_379 = (l_378 = l_377))));
                    }
                    l_364.x |= l_382;
                    for (l_382 = 22; (l_382 > 23); l_382++)
                    { /* block id: 184 */
                        uint32_t l_385[4] = {1UL,1UL,1UL,1UL};
                        uint8_t l_386 = 0x3AL;
                        uint16_t l_387 = 4UL;
                        uint32_t l_388[2][10] = {{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL}};
                        VECTOR(int32_t, 4) l_389 = (VECTOR(int32_t, 4))(0x3CAAE953L, (VECTOR(int32_t, 2))(0x3CAAE953L, (-4L)), (-4L));
                        VECTOR(int32_t, 16) l_390 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x612BC1A5L), 0x612BC1A5L), 0x612BC1A5L, (-7L), 0x612BC1A5L, (VECTOR(int32_t, 2))((-7L), 0x612BC1A5L), (VECTOR(int32_t, 2))((-7L), 0x612BC1A5L), (-7L), 0x612BC1A5L, (-7L), 0x612BC1A5L);
                        VECTOR(int32_t, 4) l_391 = (VECTOR(int32_t, 4))(0x7817E4CFL, (VECTOR(int32_t, 2))(0x7817E4CFL, (-8L)), (-8L));
                        VECTOR(int32_t, 4) l_392 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x7249E897L), 0x7249E897L);
                        uint8_t l_393 = 0xE2L;
                        uint32_t l_394 = 4294967295UL;
                        int32_t l_395 = 0L;
                        uint64_t l_396 = 0x595F55AF59706343L;
                        VECTOR(int32_t, 16) l_397 = (VECTOR(int32_t, 16))(0x3151245EL, (VECTOR(int32_t, 4))(0x3151245EL, (VECTOR(int32_t, 2))(0x3151245EL, 0x69200326L), 0x69200326L), 0x69200326L, 0x3151245EL, 0x69200326L, (VECTOR(int32_t, 2))(0x3151245EL, 0x69200326L), (VECTOR(int32_t, 2))(0x3151245EL, 0x69200326L), 0x3151245EL, 0x69200326L, 0x3151245EL, 0x69200326L);
                        int8_t l_398 = 5L;
                        int32_t l_399 = 0L;
                        int32_t l_400[7][5] = {{0L,1L,0x1D2D8EECL,1L,0L},{0L,1L,0x1D2D8EECL,1L,0L},{0L,1L,0x1D2D8EECL,1L,0L},{0L,1L,0x1D2D8EECL,1L,0L},{0L,1L,0x1D2D8EECL,1L,0L},{0L,1L,0x1D2D8EECL,1L,0L},{0L,1L,0x1D2D8EECL,1L,0L}};
                        uint32_t l_401 = 0xB71DC753L;
                        uint8_t l_402 = 0x9EL;
                        VECTOR(int16_t, 2) l_403 = (VECTOR(int16_t, 2))((-1L), 0x2380L);
                        uint32_t l_404 = 4294967295UL;
                        int i, j;
                        l_400[2][3] &= (l_362.s1 |= ((l_386 |= l_385[0]) , ((l_388[0][0] ^= l_387) , ((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(7L, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_389.yxwwwyyywwyzwzwy)))).lo, ((VECTOR(int32_t, 8))(l_390.sb93ee899))))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_391.wxxxxzzw)))).s1, 0x62D3FBA2L, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(0L, 1L)), ((VECTOR(int32_t, 8))((l_392.w , l_393), l_394, l_395, l_396, ((VECTOR(int32_t, 2))(l_397.sce)), 0x46E4AA0FL, (-2L))).s47))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_398, l_399, 0x1C93L, 0x36C5L)), 3L, ((VECTOR(int16_t, 4))(0x3915L)), ((VECTOR(int16_t, 2))(1L)), 0L, ((VECTOR(int16_t, 4))((-1L))))), ((VECTOR(uint16_t, 16))(3UL))))).s48e6)), ((VECTOR(int32_t, 2))(0x3DF97D46L)), 0x297BFD73L, 0x224AB212L)).s36)), 0x3D8E4BD2L)).s43, ((VECTOR(int32_t, 2))((-1L)))))), 1L, 0x4B852216L, 1L, 0x7A2E92F0L, (-4L))).s7)));
                        l_402 |= l_401;
                        l_404--;
                    }
                }
                else
                { /* block id: 192 */
                    union U1 *l_407 = (void*)0;
                    int16_t l_408 = 0x2E5AL;
                    int32_t l_409 = 0x530F2C12L;
                    int64_t l_410 = 2L;
                    int8_t l_411 = (-5L);
                    uint16_t l_412 = 65535UL;
                    VECTOR(int64_t, 2) l_415 = (VECTOR(int64_t, 2))((-1L), 0x01AC097D1D2AA15BL);
                    VECTOR(int64_t, 4) l_416 = (VECTOR(int64_t, 4))(0x142CE0C44CD46D91L, (VECTOR(int64_t, 2))(0x142CE0C44CD46D91L, 0x559CDA6642A46128L), 0x559CDA6642A46128L);
                    VECTOR(int64_t, 16) l_417 = (VECTOR(int64_t, 16))(0x5F0B7DA97F44B5EAL, (VECTOR(int64_t, 4))(0x5F0B7DA97F44B5EAL, (VECTOR(int64_t, 2))(0x5F0B7DA97F44B5EAL, 1L), 1L), 1L, 0x5F0B7DA97F44B5EAL, 1L, (VECTOR(int64_t, 2))(0x5F0B7DA97F44B5EAL, 1L), (VECTOR(int64_t, 2))(0x5F0B7DA97F44B5EAL, 1L), 0x5F0B7DA97F44B5EAL, 1L, 0x5F0B7DA97F44B5EAL, 1L);
                    uint32_t l_418 = 1UL;
                    int32_t l_419 = 1L;
                    union U2 l_420 = {0x37L};
                    VECTOR(int32_t, 4) l_421 = (VECTOR(int32_t, 4))(0x56005943L, (VECTOR(int32_t, 2))(0x56005943L, 0L), 0L);
                    VECTOR(uint16_t, 8) l_422 = (VECTOR(uint16_t, 8))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0x3C96L), 0x3C96L), 0x3C96L, 65533UL, 0x3C96L);
                    VECTOR(int32_t, 2) l_423 = (VECTOR(int32_t, 2))(0x0C538D2CL, 0x21002B68L);
                    struct S0 l_424 = {0x6CB3D20DL};
                    int8_t l_425 = (-4L);
                    VECTOR(int32_t, 16) l_426 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                    VECTOR(uint16_t, 4) l_427 = (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0x3572L), 0x3572L);
                    VECTOR(int16_t, 16) l_428 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 9L), 9L), 9L, (-4L), 9L, (VECTOR(int16_t, 2))((-4L), 9L), (VECTOR(int16_t, 2))((-4L), 9L), (-4L), 9L, (-4L), 9L);
                    struct S0 l_429 = {0x1E0D7F7AL};
                    int32_t l_430 = 0x4E9069BFL;
                    int8_t l_431 = 0x5AL;
                    VECTOR(uint16_t, 16) l_432 = (VECTOR(uint16_t, 16))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 7UL), 7UL), 7UL, 65534UL, 7UL, (VECTOR(uint16_t, 2))(65534UL, 7UL), (VECTOR(uint16_t, 2))(65534UL, 7UL), 65534UL, 7UL, 65534UL, 7UL);
                    uint16_t l_433 = 0UL;
                    int i;
                    l_407 = (void*)0;
                    l_412--;
                    if ((((l_418 = ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_415.xyyx)), ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(l_416.zwyywzxzyxxwyyzy)).sa1, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 2))(0x47D1C427DAAF38A7L, 3L)).yyyyyxxyyxxyyxyx, ((VECTOR(int64_t, 16))(l_417.sbc8e85cc07b99855))))).se0))))), 1L, 0x213771A649FF2264L)).s5) , ((l_419 = 1L) , l_420)) , ((VECTOR(int32_t, 8))(0x0E5E52DEL, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_421.zzwxwyxxyyxzxxww)).sc72f)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(4L, 9L)).xyyxyxxyxyxxxxyy, ((VECTOR(int32_t, 16))(l_422.s3, ((VECTOR(int32_t, 8))(1L, (l_362.s4 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_423.yxxyxxyx)).even)))).y), ((VECTOR(int32_t, 4))((l_362.s3 = (l_424 , (l_425 , 0L))), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_426.s92)))), ((VECTOR(int32_t, 8))(0x1841DA2FL, (l_431 ^= ((((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x20ECL, 0x9FDFL)), FAKE_DIVERGE(p_936->local_1_offset, get_local_id(1), 10), ((VECTOR(uint16_t, 16))(l_427.zyxxzzwwzyxwywyw)).s6, 0x8559L, 0xEB2EL, 0UL, 65535UL)).s0014005704424007, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 2))(0x56A3L, 0x2342L)).xyyyyyyxxyxyxxyx, ((VECTOR(int16_t, 4))(l_428.sf20a)).xwzwxxzywxxyzyzx)))))).s6 , l_429) , l_430)), (-7L), ((VECTOR(int32_t, 2))((-7L))), 0x521C5DCDL, 0x7A84A016L, (-10L))).s44))), (-8L))), 0x4B80001AL, 0x60ADA160L)), ((VECTOR(int32_t, 2))(0x6E1541A4L)), l_432.s6, 0x741C0306L, l_433, 0x25414759L, 0x77216BDAL))))).lo)).odd))), 0x2B729CE9L, 0x5385C01EL, 0x476F2015L)).s7))
                    { /* block id: 200 */
                        int8_t l_434 = 0x7FL;
                        uint8_t l_435 = 252UL;
                        l_435--;
                    }
                    else
                    { /* block id: 202 */
                        uint16_t l_438 = 0x4C7AL;
                        int32_t l_439 = (-1L);
                        int32_t l_440 = 0x69703A01L;
                        int8_t l_441 = 0x2DL;
                        int32_t *l_442[8][10] = {{(void*)0,&l_440,&l_439,&l_439,&l_440,&l_440,&l_440,&l_440,&l_440,&l_440},{(void*)0,&l_440,&l_439,&l_439,&l_440,&l_440,&l_440,&l_440,&l_440,&l_440},{(void*)0,&l_440,&l_439,&l_439,&l_440,&l_440,&l_440,&l_440,&l_440,&l_440},{(void*)0,&l_440,&l_439,&l_439,&l_440,&l_440,&l_440,&l_440,&l_440,&l_440},{(void*)0,&l_440,&l_439,&l_439,&l_440,&l_440,&l_440,&l_440,&l_440,&l_440},{(void*)0,&l_440,&l_439,&l_439,&l_440,&l_440,&l_440,&l_440,&l_440,&l_440},{(void*)0,&l_440,&l_439,&l_439,&l_440,&l_440,&l_440,&l_440,&l_440,&l_440},{(void*)0,&l_440,&l_439,&l_439,&l_440,&l_440,&l_440,&l_440,&l_440,&l_440}};
                        VECTOR(int32_t, 2) l_443 = (VECTOR(int32_t, 2))((-5L), 0x30CC2470L);
                        VECTOR(int32_t, 4) l_444 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
                        VECTOR(int32_t, 2) l_445 = (VECTOR(int32_t, 2))(0x52D262ADL, (-4L));
                        VECTOR(int32_t, 4) l_446 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x70B7E14AL), 0x70B7E14AL);
                        VECTOR(int32_t, 2) l_447 = (VECTOR(int32_t, 2))(7L, 0x05C4527BL);
                        struct S0 l_448 = {4294967286UL};
                        union U2 l_449 = {0x7DL};
                        union U2 l_450 = {1L};
                        VECTOR(uint64_t, 4) l_451 = (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 8UL), 8UL);
                        int16_t l_452 = (-9L);
                        uint64_t l_453[5][7] = {{1UL,1UL,0x3FC633036B0DB3F9L,0UL,18446744073709551615UL,0UL,0x3FC633036B0DB3F9L},{1UL,1UL,0x3FC633036B0DB3F9L,0UL,18446744073709551615UL,0UL,0x3FC633036B0DB3F9L},{1UL,1UL,0x3FC633036B0DB3F9L,0UL,18446744073709551615UL,0UL,0x3FC633036B0DB3F9L},{1UL,1UL,0x3FC633036B0DB3F9L,0UL,18446744073709551615UL,0UL,0x3FC633036B0DB3F9L},{1UL,1UL,0x3FC633036B0DB3F9L,0UL,18446744073709551615UL,0UL,0x3FC633036B0DB3F9L}};
                        VECTOR(uint16_t, 2) l_454 = (VECTOR(uint16_t, 2))(65535UL, 0xDBDDL);
                        VECTOR(uint16_t, 2) l_455 = (VECTOR(uint16_t, 2))(0xC896L, 1UL);
                        VECTOR(uint16_t, 16) l_456 = (VECTOR(uint16_t, 16))(0x7AE4L, (VECTOR(uint16_t, 4))(0x7AE4L, (VECTOR(uint16_t, 2))(0x7AE4L, 0x902AL), 0x902AL), 0x902AL, 0x7AE4L, 0x902AL, (VECTOR(uint16_t, 2))(0x7AE4L, 0x902AL), (VECTOR(uint16_t, 2))(0x7AE4L, 0x902AL), 0x7AE4L, 0x902AL, 0x7AE4L, 0x902AL);
                        union U2 l_457 = {0x16L};
                        VECTOR(int32_t, 16) l_458 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 5L), 5L), 5L, 2L, 5L, (VECTOR(int32_t, 2))(2L, 5L), (VECTOR(int32_t, 2))(2L, 5L), 2L, 5L, 2L, 5L);
                        VECTOR(int32_t, 4) l_459 = (VECTOR(int32_t, 4))(0x05219737L, (VECTOR(int32_t, 2))(0x05219737L, 0x5447EE93L), 0x5447EE93L);
                        VECTOR(int32_t, 2) l_460 = (VECTOR(int32_t, 2))((-9L), 0x4AD40FDCL);
                        VECTOR(int32_t, 16) l_461 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x601DEE14L), 0x601DEE14L), 0x601DEE14L, 1L, 0x601DEE14L, (VECTOR(int32_t, 2))(1L, 0x601DEE14L), (VECTOR(int32_t, 2))(1L, 0x601DEE14L), 1L, 0x601DEE14L, 1L, 0x601DEE14L);
                        VECTOR(int32_t, 4) l_462 = (VECTOR(int32_t, 4))(0x4D8C874EL, (VECTOR(int32_t, 2))(0x4D8C874EL, 0x640E0A47L), 0x640E0A47L);
                        int32_t l_463 = 1L;
                        VECTOR(int32_t, 2) l_464 = (VECTOR(int32_t, 2))((-1L), (-8L));
                        VECTOR(int32_t, 2) l_465 = (VECTOR(int32_t, 2))(0x015616ADL, (-1L));
                        VECTOR(int32_t, 16) l_466 = (VECTOR(int32_t, 16))(0x7E3A443FL, (VECTOR(int32_t, 4))(0x7E3A443FL, (VECTOR(int32_t, 2))(0x7E3A443FL, 0x68C20FEFL), 0x68C20FEFL), 0x68C20FEFL, 0x7E3A443FL, 0x68C20FEFL, (VECTOR(int32_t, 2))(0x7E3A443FL, 0x68C20FEFL), (VECTOR(int32_t, 2))(0x7E3A443FL, 0x68C20FEFL), 0x7E3A443FL, 0x68C20FEFL, 0x7E3A443FL, 0x68C20FEFL);
                        VECTOR(int32_t, 2) l_467 = (VECTOR(int32_t, 2))(0x0E0FAAD6L, (-1L));
                        VECTOR(int16_t, 2) l_468 = (VECTOR(int16_t, 2))(0x25C0L, 1L);
                        VECTOR(uint16_t, 2) l_469 = (VECTOR(uint16_t, 2))(0x2770L, 0x45CBL);
                        VECTOR(uint16_t, 2) l_470 = (VECTOR(uint16_t, 2))(0x3610L, 0x8120L);
                        VECTOR(uint16_t, 8) l_471 = (VECTOR(uint16_t, 8))(0x4C42L, (VECTOR(uint16_t, 4))(0x4C42L, (VECTOR(uint16_t, 2))(0x4C42L, 0xFA85L), 0xFA85L), 0xFA85L, 0x4C42L, 0xFA85L);
                        VECTOR(uint16_t, 16) l_472 = (VECTOR(uint16_t, 16))(0xFFFFL, (VECTOR(uint16_t, 4))(0xFFFFL, (VECTOR(uint16_t, 2))(0xFFFFL, 0x4BE8L), 0x4BE8L), 0x4BE8L, 0xFFFFL, 0x4BE8L, (VECTOR(uint16_t, 2))(0xFFFFL, 0x4BE8L), (VECTOR(uint16_t, 2))(0xFFFFL, 0x4BE8L), 0xFFFFL, 0x4BE8L, 0xFFFFL, 0x4BE8L);
                        int16_t l_473 = 1L;
                        uint32_t l_474 = 0x36402D9BL;
                        VECTOR(uint8_t, 16) l_475 = (VECTOR(uint8_t, 16))(0x10L, (VECTOR(uint8_t, 4))(0x10L, (VECTOR(uint8_t, 2))(0x10L, 0x94L), 0x94L), 0x94L, 0x10L, 0x94L, (VECTOR(uint8_t, 2))(0x10L, 0x94L), (VECTOR(uint8_t, 2))(0x10L, 0x94L), 0x10L, 0x94L, 0x10L, 0x94L);
                        VECTOR(uint8_t, 4) l_476 = (VECTOR(uint8_t, 4))(0x29L, (VECTOR(uint8_t, 2))(0x29L, 0x7EL), 0x7EL);
                        VECTOR(uint16_t, 2) l_479 = (VECTOR(uint16_t, 2))(0xE2F5L, 65529UL);
                        uint32_t l_480 = 4294967294UL;
                        uint64_t l_481 = 18446744073709551614UL;
                        int32_t l_482 = 3L;
                        int32_t l_483 = 1L;
                        int8_t l_484[4] = {8L,8L,8L,8L};
                        int64_t l_485 = 0x43CC60C17DE78668L;
                        union U1 l_486 = {4L};
                        union U1 l_487 = {-1L};
                        union U1 l_488 = {0x5FL};
                        uint16_t l_489 = 0x02A8L;
                        int16_t l_490[2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_490[i] = 0x15C7L;
                        l_421.x &= 0x07649451L;
                        l_441 ^= (l_363 ^= (l_426.s8 = ((l_438 |= GROUP_DIVERGE(1, 1)) , (l_440 = l_439))));
                        l_442[6][6] = l_442[6][6];
                        l_363 = (l_364.z = (l_421.w = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_443.xyxx)).zwzyxwxy)), ((VECTOR(int32_t, 8))(l_444.xxxwwzww)), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-5L), 0x76D208DFL)).xxxyxxyy)).even, ((VECTOR(int32_t, 8))(l_445.yxxyyxyx)).even))).xzzyywyw))).s53)), (-10L), 1L)).ywwyxxwx, ((VECTOR(int32_t, 16))(l_446.xyyxxwzxywxxywww)).lo))).s07, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_447.yyxxyyxxxyxxyyxy)).s37))))), (int32_t)(l_365.s5 |= (((l_448 , (l_450 = l_449)) , (((VECTOR(uint64_t, 2))(l_451.yw)).odd , (l_488 = (l_334[0][1] = ((l_415.y = (l_452 , (l_417.s8 &= l_453[0][4]))) , ((((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(l_454.yyyy)).yxwwzywwxwzxzywz, ((VECTOR(uint16_t, 8))(0x788BL, 0x6022L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_455.xyyx)), ((VECTOR(uint16_t, 4))(l_456.sdefd)))).odd)), 1UL, 0x0765L)).s2502242046215546))).s7 , ((l_420 = l_457) , (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_458.s8f2b)).zywwzxzzywxzwzwy)).sff, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(l_459.yx)).xyxxyxyx, ((VECTOR(int32_t, 4))(l_460.yyxy)).zwzzxxzw))).hi)).hi)), ((VECTOR(int32_t, 2))(0x3DD4F4CFL, (-8L))))))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-1L))).yyxy)), 0x3D77567BL, 1L, 2L, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_461.se41046cc)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_462.xzyzxzzyyzyxywzx)).hi, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(0x467BD1B3L, (l_464.y = l_463), 0x5EDACC3BL, 0x1A9A9770L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_465.yx)), (-1L), 7L))))).wxwxxzyw))).s65, ((VECTOR(int32_t, 16))(l_466.s92fc9011604b60db)).s3b))))), (-10L), 0x1FAC4F53L)), ((VECTOR(int32_t, 4))(l_467.yyyx))))).yzxwzxxywyzzzzxx)).s2, (-7L), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_468.xxxxxyyx)).s2161336005701164)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x5B7EL, 0x3F2BL)).yxyx)).zxzxyywwxzzwxzzw))).sba75, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_469.xyxx)).xxxzzxxywzzyxzyx)).lo)).hi)).odd)).hi, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 2))(l_470.xy)).xxxyxxxxxxyyyxxy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(65527UL, ((VECTOR(uint16_t, 4))(l_471.s5347)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 8))(l_472.s962453d6)).s24, ((VECTOR(uint16_t, 16))(65535UL, l_473, l_474, 0x28FAL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(l_475.s16)).xyyyyyyy, ((VECTOR(uint8_t, 16))(l_476.zzxxzxzyzwyyyxzx)).odd))))).odd, ((VECTOR(uint16_t, 8))((l_433 = (l_422.s5++)), ((VECTOR(uint16_t, 4))(l_479.yxyy)), l_480, 0x0D94L, 0UL)).even))), 0x944EL, GROUP_DIVERGE(0, 1), 0x941CL, 6UL)), 1UL, 0xA05FL, 0x2375L, 0x998DL)).s77))).xxyxxxxxyyyyyyyy)).odd)).s6, 0x9015L, 0x88A2L, FAKE_DIVERGE(p_936->local_0_offset, get_local_id(0), 10), l_481, 65535UL, 0x8EDDL, 2UL)), 0UL, 0xF10BL, 65526UL)).s3d)).xyyxyxyyyxxxxxyy, ((VECTOR(uint16_t, 16))(0x330CL))))).s3fc3)), l_482, l_483, l_484[2], 0UL, 65530UL, ((VECTOR(uint16_t, 4))(4UL)), 0x6559L, 0x92A4L)).s0285))), 1L)).hi, ((VECTOR(int32_t, 8))(5L))))).s21, ((VECTOR(int32_t, 2))(5L))))).even, (-2L), l_485, 0x78B90A3CL, (-9L), (-1L), 3L, 0x1E1880AAL)).s3 , l_486))) , l_487)))))) , l_489))))), l_490[1], ((VECTOR(int32_t, 2))(0x745F2841L)), (-1L), 6L, 5L)).s1));
                    }
                }
                l_492[0][5] = (l_491 , l_492[4][4]);
                l_495 = l_494;
                l_498--;
            }
            l_506 = (l_505 = (l_504 = ((l_502 = ((VECTOR(int16_t, 2))(l_501.xx)).lo) , l_503)));
            l_509 = l_507;
            l_515 = ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((((VECTOR(int32_t, 8))(l_510.s43451437)).s3 , 0x560AL), ((VECTOR(int16_t, 4))(l_511.wywx)), 1L, 0x28D6L, 1L)).s2270562172564145)).sc , l_512) , l_513[4][6][0]);
        }
        for (l_336.z = (-8); (l_336.z < 43); l_336.z = safe_add_func_uint32_t_u_u(l_336.z, 6))
        { /* block id: 238 */
            int32_t l_518 = 0x4AE0C866L;
            int64_t l_530 = (-4L);
            int64_t *l_529[6][6] = {{&l_530,&l_530,&l_530,&l_530,&l_530,&l_530},{&l_530,&l_530,&l_530,&l_530,&l_530,&l_530},{&l_530,&l_530,&l_530,&l_530,&l_530,&l_530},{&l_530,&l_530,&l_530,&l_530,&l_530,&l_530},{&l_530,&l_530,&l_530,&l_530,&l_530,&l_530},{&l_530,&l_530,&l_530,&l_530,&l_530,&l_530}};
            int64_t **l_528[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_528[i] = &l_529[3][4];
            for (l_518 = 0; (l_518 != 13); l_518 = safe_add_func_int8_t_s_s(l_518, 6))
            { /* block id: 241 */
                int32_t l_521 = (-1L);
                uint8_t l_522 = 0x02L;
                uint32_t l_525 = 0x6B0E7D64L;
                l_522++;
                l_525++;
            }
            l_528[1] = (void*)0;
        }
        for (l_334[0][0].f0 = 7; (l_334[0][0].f0 > 7); l_334[0][0].f0 = safe_add_func_uint32_t_u_u(l_334[0][0].f0, 7))
        { /* block id: 249 */
            int32_t l_533 = 2L;
            int8_t l_534 = 2L;
            int64_t l_535 = 0x184138294204A808L;
            uint64_t l_536 = 1UL;
            union U2 l_540[2] = {{1L},{1L}};
            union U2 *l_539 = &l_540[1];
            union U2 *l_541 = &l_540[1];
            int8_t **l_542 = (void*)0;
            int8_t *l_544 = &l_534;
            int8_t **l_543 = &l_544;
            uint32_t l_545[6][10] = {{8UL,0UL,1UL,5UL,0xE7AA6440L,0x36B844DCL,4294967287UL,1UL,1UL,2UL},{8UL,0UL,1UL,5UL,0xE7AA6440L,0x36B844DCL,4294967287UL,1UL,1UL,2UL},{8UL,0UL,1UL,5UL,0xE7AA6440L,0x36B844DCL,4294967287UL,1UL,1UL,2UL},{8UL,0UL,1UL,5UL,0xE7AA6440L,0x36B844DCL,4294967287UL,1UL,1UL,2UL},{8UL,0UL,1UL,5UL,0xE7AA6440L,0x36B844DCL,4294967287UL,1UL,1UL,2UL},{8UL,0UL,1UL,5UL,0xE7AA6440L,0x36B844DCL,4294967287UL,1UL,1UL,2UL}};
            uint32_t l_546 = 9UL;
            int i, j;
            l_536++;
            l_541 = l_539;
            l_543 = l_542;
            l_546 &= l_545[0][8];
        }
        unsigned int result = 0;
        int l_334_i0, l_334_i1;
        for (l_334_i0 = 0; l_334_i0 < 1; l_334_i0++) {
            for (l_334_i1 = 0; l_334_i1 < 3; l_334_i1++) {
                result += l_334[l_334_i0][l_334_i1].f0;
                result += l_334[l_334_i0][l_334_i1].f1;
            }
        }
        result += l_335;
        result += l_336.w;
        result += l_336.z;
        result += l_336.y;
        result += l_336.x;
        atomic_add(&p_936->l_special_values[47], result);
    }
    else
    { /* block id: 255 */
        (1 + 1);
    }
    return p_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_936->g_70 p_936->g_109 p_936->g_64.f0 p_936->g_115 p_936->g_120 p_936->l_comm_values p_936->g_122 p_936->g_133 p_936->g_135 p_936->g_24 p_936->g_49 p_936->g_139 p_936->g_144 p_936->g_137 p_936->g_145 p_936->g_146
 * writes: p_936->g_111 p_936->g_114 p_936->g_120 p_936->g_122 p_936->g_137 p_936->g_70 p_936->g_139 p_936->g_146
 */
uint64_t  func_54(int64_t  p_55, int8_t  p_56, uint32_t  p_57, uint32_t  p_58, int16_t  p_59, struct S3 * p_936)
{ /* block id: 22 */
    int32_t *l_88 = (void*)0;
    int32_t **l_89 = &l_88;
    struct S0 l_96 = {3UL};
    uint16_t *l_110 = &p_936->g_111[0];
    uint16_t *l_112 = (void*)0;
    uint16_t *l_113 = &p_936->g_114;
    VECTOR(uint16_t, 2) l_116 = (VECTOR(uint16_t, 2))(65532UL, 1UL);
    VECTOR(uint16_t, 4) l_119 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xBDBDL), 0xBDBDL);
    int64_t *l_121 = (void*)0;
    VECTOR(int8_t, 16) l_127 = (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), (-1L)), (-1L)), (-1L), (-4L), (-1L), (VECTOR(int8_t, 2))((-4L), (-1L)), (VECTOR(int8_t, 2))((-4L), (-1L)), (-4L), (-1L), (-4L), (-1L));
    VECTOR(uint16_t, 8) l_132 = (VECTOR(uint16_t, 8))(0xBB2EL, (VECTOR(uint16_t, 4))(0xBB2EL, (VECTOR(uint16_t, 2))(0xBB2EL, 0xB33AL), 0xB33AL), 0xB33AL, 0xBB2EL, 0xB33AL);
    VECTOR(uint16_t, 4) l_134 = (VECTOR(uint16_t, 4))(0xB466L, (VECTOR(uint16_t, 2))(0xB466L, 0xF50BL), 0xF50BL);
    int16_t *l_136 = &p_936->g_137;
    int32_t *l_138[6][8] = {{&p_936->g_70,&p_936->g_70,&p_936->g_70,(void*)0,&p_936->g_70,(void*)0,&p_936->g_70,&p_936->g_70},{&p_936->g_70,&p_936->g_70,&p_936->g_70,(void*)0,&p_936->g_70,(void*)0,&p_936->g_70,&p_936->g_70},{&p_936->g_70,&p_936->g_70,&p_936->g_70,(void*)0,&p_936->g_70,(void*)0,&p_936->g_70,&p_936->g_70},{&p_936->g_70,&p_936->g_70,&p_936->g_70,(void*)0,&p_936->g_70,(void*)0,&p_936->g_70,&p_936->g_70},{&p_936->g_70,&p_936->g_70,&p_936->g_70,(void*)0,&p_936->g_70,(void*)0,&p_936->g_70,&p_936->g_70},{&p_936->g_70,&p_936->g_70,&p_936->g_70,(void*)0,&p_936->g_70,(void*)0,&p_936->g_70,&p_936->g_70}};
    int i, j;
    (*l_89) = l_88;
    p_936->g_139 &= (p_936->g_70 = ((p_57 && p_59) >= (safe_sub_func_int8_t_s_s((!(safe_div_func_int8_t_s_s((safe_sub_func_int64_t_s_s(0x11F6BCDC6F3D1338L, (l_96 , ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_936->g_70, (safe_rshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_936->g_109.zzzxywxw)).s3, ((*l_113) = ((*l_110) = p_936->g_64.f0)))) < ((((((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 2))(p_936->g_115.yy)).yyyy, ((VECTOR(uint16_t, 2))(l_116.yx)).yyyy))).even))).lo || GROUP_DIVERGE(0, 1)) , (p_936->g_120 |= (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_119.ywxzzyzw)).s1, (!((VECTOR(uint16_t, 2))(9UL, 1UL)).lo))))) == p_56) == ((p_936->g_122 |= p_936->l_comm_values[(safe_mod_func_uint32_t_u_u(p_936->tid, 55))]) ^ (safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_127.s331a2d78)).s67)), (-5L), 3L)).x && (safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(0, 1), (~((*l_136) = (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(l_132.s36175416)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_936->g_133.sf6)), 0xEBDDL, 0xF533L)).xzzzzxyw, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_134.zx)).yyxx)).ywywzxwxyyxyxzwx, ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(p_936->g_135.s84e0ff389711ee92)))), ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(0xD0EBL, 0x9BDDL)).xyxy, ((VECTOR(uint16_t, 16))(p_936->g_24.z, ((VECTOR(uint16_t, 2))(65535UL)), 8UL, 7UL, p_936->g_133.sc, 65535UL, 4UL, p_936->g_70, 0x2A20L, 0x37EAL, 0x52ECL, 0x57C6L, ((VECTOR(uint16_t, 2))(65527UL)), 65535UL)).s8ea3))).wywwxzzxzwyyxxxy, ((VECTOR(uint16_t, 16))(0xFB87L))))).sd1, ((VECTOR(uint16_t, 2))(0x39FDL)), ((VECTOR(uint16_t, 2))(0x8AA2L))))).xyyyyxxxxyyyxyyy))).even))).odd, ((VECTOR(uint16_t, 4))(65531UL))))).even)).even, 7))))))) && p_936->g_49.x), GROUP_DIVERGE(2, 1))), p_59))))), p_936->g_133.sc)), p_936->g_135.sa)) == p_936->g_135.s7), 5)))), p_936->g_49.y)) , GROUP_DIVERGE(2, 1))))), FAKE_DIVERGE(p_936->group_0_offset, get_group_id(0), 10)))), p_936->g_115.x))));
    p_936->g_146 ^= ((((safe_lshift_func_uint16_t_u_s(p_56, 12)) , (safe_sub_func_int8_t_s_s(((((*l_136) ^= ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_936->g_144.s0465253736342244)).s7ebb)).even)))).odd) != ((p_55 ^ FAKE_DIVERGE(p_936->group_2_offset, get_group_id(2), 10)) , p_936->g_70)) , p_55), ((VECTOR(uint8_t, 4))(p_936->g_145.s15a1)).y))) & p_936->g_109.w) , (-9L));
    return p_55;
}


/* ------------------------------------------ */
/* 
 * reads : p_936->g_70 p_936->g_75 p_936->g_24 p_936->g_76 p_936->g_49 p_936->g_comm_values
 * writes: p_936->g_70 p_936->g_76
 */
uint32_t  func_60(union U1  p_61, uint32_t  p_62, int64_t  p_63, struct S3 * p_936)
{ /* block id: 16 */
    VECTOR(int32_t, 4) l_68 = (VECTOR(int32_t, 4))(0x74A76864L, (VECTOR(int32_t, 2))(0x74A76864L, 0x018BFD1EL), 0x018BFD1EL);
    int32_t *l_69 = &p_936->g_70;
    int i;
    (*p_936->g_75) &= (safe_add_func_int8_t_s_s((p_61.f0 > ((*l_69) ^= ((VECTOR(int32_t, 4))(l_68.xyyy)).w)), (safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s(0x1FFB2EF76CAF4455L, ((p_936->g_75 != &p_936->g_76) || (0x9CB9L & p_936->g_24.w)))), (FAKE_DIVERGE(p_936->global_1_offset, get_global_id(1), 10) <= p_63)))));
    (*p_936->g_75) |= (((*l_69) , ((*l_69) |= 0x236B79BAL)) == (safe_div_func_uint64_t_u_u(((safe_unary_minus_func_int32_t_s(((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(0x4C626C48L, (l_69 != l_69))), p_936->g_49.x)) <= l_68.z))) >= ((safe_div_func_uint64_t_u_u(p_62, 0xE2C69141744B85C5L)) > 18446744073709551615UL)), p_936->g_comm_values[p_936->tid])));
    return p_936->g_49.y;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_comm_values[i] = 1;
    struct S3 c_937;
    struct S3* p_936 = &c_937;
    struct S3 c_938 = {
        (VECTOR(uint8_t, 4))(0xBFL, (VECTOR(uint8_t, 2))(0xBFL, 250UL), 250UL), // p_936->g_24
        (VECTOR(uint8_t, 2))(4UL, 0x8CL), // p_936->g_26
        (VECTOR(uint8_t, 2))(0xFBL, 248UL), // p_936->g_49
        {0x09L}, // p_936->g_64
        0x5F43E010L, // p_936->g_70
        0x030DEE2CL, // p_936->g_76
        &p_936->g_76, // p_936->g_75
        (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0xB316L), 0xB316L), // p_936->g_109
        {0xB163L,0xB163L}, // p_936->g_111
        2UL, // p_936->g_114
        (VECTOR(uint16_t, 2))(65535UL, 0UL), // p_936->g_115
        65532UL, // p_936->g_120
        (-1L), // p_936->g_122
        (VECTOR(uint16_t, 16))(0x32B9L, (VECTOR(uint16_t, 4))(0x32B9L, (VECTOR(uint16_t, 2))(0x32B9L, 0xB662L), 0xB662L), 0xB662L, 0x32B9L, 0xB662L, (VECTOR(uint16_t, 2))(0x32B9L, 0xB662L), (VECTOR(uint16_t, 2))(0x32B9L, 0xB662L), 0x32B9L, 0xB662L, 0x32B9L, 0xB662L), // p_936->g_133
        (VECTOR(uint16_t, 16))(0xCE8EL, (VECTOR(uint16_t, 4))(0xCE8EL, (VECTOR(uint16_t, 2))(0xCE8EL, 0x946CL), 0x946CL), 0x946CL, 0xCE8EL, 0x946CL, (VECTOR(uint16_t, 2))(0xCE8EL, 0x946CL), (VECTOR(uint16_t, 2))(0xCE8EL, 0x946CL), 0xCE8EL, 0x946CL, 0xCE8EL, 0x946CL), // p_936->g_135
        0x1D42L, // p_936->g_137
        (-10L), // p_936->g_139
        (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x460DL), 0x460DL), 0x460DL, 6L, 0x460DL), // p_936->g_144
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xD9L), 0xD9L), 0xD9L, 0UL, 0xD9L, (VECTOR(uint8_t, 2))(0UL, 0xD9L), (VECTOR(uint8_t, 2))(0UL, 0xD9L), 0UL, 0xD9L, 0UL, 0xD9L), // p_936->g_145
        0xC5D00D0454759984L, // p_936->g_146
        (void*)0, // p_936->g_150
        &p_936->g_150, // p_936->g_149
        0x38755624L, // p_936->g_164
        (-8L), // p_936->g_165
        0x493250C1L, // p_936->g_168
        0x4F70L, // p_936->g_169
        0x09L, // p_936->g_170
        0xAD9CL, // p_936->g_174
        1L, // p_936->g_201
        {0x25EB5E7AL,0x25EB5E7AL,0x25EB5E7AL,0x25EB5E7AL,0x25EB5E7AL}, // p_936->g_202
        {1L,2L,2L,2L,1L,1L,2L,2L,2L,1L}, // p_936->g_203
        4294967295UL, // p_936->g_204
        {0x252909BAL}, // p_936->g_243
        &p_936->g_150, // p_936->g_259
        (void*)0, // p_936->g_260
        {9L}, // p_936->g_552
        {{{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552}},{{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552}},{{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552}},{{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552}},{{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552}},{{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552}},{{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552}},{{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552},{&p_936->g_552,&p_936->g_552,&p_936->g_552}}}, // p_936->g_551
        {{(-8L),6L,0x00ADL,6L,(-8L),(-8L),6L,0x00ADL,6L},{(-8L),6L,0x00ADL,6L,(-8L),(-8L),6L,0x00ADL,6L},{(-8L),6L,0x00ADL,6L,(-8L),(-8L),6L,0x00ADL,6L}}, // p_936->g_569
        0x652C0245L, // p_936->g_572
        0L, // p_936->g_573
        0xC7L, // p_936->g_574
        &p_936->g_552, // p_936->g_600
        0x2D66L, // p_936->g_615
        0L, // p_936->g_616
        0x22L, // p_936->g_617
        4294967287UL, // p_936->g_618
        0x90008BBBL, // p_936->g_638
        (VECTOR(int32_t, 4))(0x4B17146FL, (VECTOR(int32_t, 2))(0x4B17146FL, (-8L)), (-8L)), // p_936->g_668
        (VECTOR(int16_t, 16))(0x0BCBL, (VECTOR(int16_t, 4))(0x0BCBL, (VECTOR(int16_t, 2))(0x0BCBL, 0x3B05L), 0x3B05L), 0x3B05L, 0x0BCBL, 0x3B05L, (VECTOR(int16_t, 2))(0x0BCBL, 0x3B05L), (VECTOR(int16_t, 2))(0x0BCBL, 0x3B05L), 0x0BCBL, 0x3B05L, 0x0BCBL, 0x3B05L), // p_936->g_683
        (VECTOR(uint8_t, 4))(0x1BL, (VECTOR(uint8_t, 2))(0x1BL, 0xFCL), 0xFCL), // p_936->g_689
        {0x344CL,0x344CL,0x344CL,0x344CL,0x344CL,0x344CL}, // p_936->g_694
        (-1L), // p_936->g_695
        &p_936->g_243, // p_936->g_699
        {{0x07F94F29L},{0x07F94F29L},{0x07F94F29L},{0x07F94F29L},{0x07F94F29L},{0x07F94F29L},{0x07F94F29L},{0x07F94F29L}}, // p_936->g_700
        &p_936->g_150, // p_936->g_702
        &p_936->g_150, // p_936->g_704
        0xD7DD89D2L, // p_936->g_706
        18446744073709551606UL, // p_936->g_720
        {{{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL}},{{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL}},{{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL}},{{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL}},{{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL}},{{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL}},{{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL}},{{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL}},{{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL}},{{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL},{0x33F4F90114786907L,0x14FCE8B134A9EF14L,0x1C34EDDF18D5163FL,0xF5407ABB0528C7D8L,1UL,18446744073709551615UL}}}, // p_936->g_735
        3UL, // p_936->g_904
        (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x65L), 0x65L), 0x65L, (-3L), 0x65L, (VECTOR(int8_t, 2))((-3L), 0x65L), (VECTOR(int8_t, 2))((-3L), 0x65L), (-3L), 0x65L, (-3L), 0x65L), // p_936->g_907
        (VECTOR(int64_t, 2))(9L, 0x494BB51A6A4BA678L), // p_936->g_918
        (VECTOR(int64_t, 8))((-7L), (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L)), // p_936->g_919
        (VECTOR(int64_t, 16))(0x2D61E5C144B0180EL, (VECTOR(int64_t, 4))(0x2D61E5C144B0180EL, (VECTOR(int64_t, 2))(0x2D61E5C144B0180EL, 5L), 5L), 5L, 0x2D61E5C144B0180EL, 5L, (VECTOR(int64_t, 2))(0x2D61E5C144B0180EL, 5L), (VECTOR(int64_t, 2))(0x2D61E5C144B0180EL, 5L), 0x2D61E5C144B0180EL, 5L, 0x2D61E5C144B0180EL, 5L), // p_936->g_920
        &p_936->g_64, // p_936->g_933
        &p_936->g_933, // p_936->g_932
        0, // p_936->v_collective
        sequence_input[get_global_id(0)], // p_936->global_0_offset
        sequence_input[get_global_id(1)], // p_936->global_1_offset
        sequence_input[get_global_id(2)], // p_936->global_2_offset
        sequence_input[get_local_id(0)], // p_936->local_0_offset
        sequence_input[get_local_id(1)], // p_936->local_1_offset
        sequence_input[get_local_id(2)], // p_936->local_2_offset
        sequence_input[get_group_id(0)], // p_936->group_0_offset
        sequence_input[get_group_id(1)], // p_936->group_1_offset
        sequence_input[get_group_id(2)], // p_936->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[0][get_linear_local_id()])), // p_936->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_937 = c_938;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_936);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_936->g_24.x, "p_936->g_24.x", print_hash_value);
    transparent_crc(p_936->g_24.y, "p_936->g_24.y", print_hash_value);
    transparent_crc(p_936->g_24.z, "p_936->g_24.z", print_hash_value);
    transparent_crc(p_936->g_24.w, "p_936->g_24.w", print_hash_value);
    transparent_crc(p_936->g_26.x, "p_936->g_26.x", print_hash_value);
    transparent_crc(p_936->g_26.y, "p_936->g_26.y", print_hash_value);
    transparent_crc(p_936->g_49.x, "p_936->g_49.x", print_hash_value);
    transparent_crc(p_936->g_49.y, "p_936->g_49.y", print_hash_value);
    transparent_crc(p_936->g_64.f0, "p_936->g_64.f0", print_hash_value);
    transparent_crc(p_936->g_70, "p_936->g_70", print_hash_value);
    transparent_crc(p_936->g_76, "p_936->g_76", print_hash_value);
    transparent_crc(p_936->g_109.x, "p_936->g_109.x", print_hash_value);
    transparent_crc(p_936->g_109.y, "p_936->g_109.y", print_hash_value);
    transparent_crc(p_936->g_109.z, "p_936->g_109.z", print_hash_value);
    transparent_crc(p_936->g_109.w, "p_936->g_109.w", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_936->g_111[i], "p_936->g_111[i]", print_hash_value);

    }
    transparent_crc(p_936->g_114, "p_936->g_114", print_hash_value);
    transparent_crc(p_936->g_115.x, "p_936->g_115.x", print_hash_value);
    transparent_crc(p_936->g_115.y, "p_936->g_115.y", print_hash_value);
    transparent_crc(p_936->g_120, "p_936->g_120", print_hash_value);
    transparent_crc(p_936->g_122, "p_936->g_122", print_hash_value);
    transparent_crc(p_936->g_133.s0, "p_936->g_133.s0", print_hash_value);
    transparent_crc(p_936->g_133.s1, "p_936->g_133.s1", print_hash_value);
    transparent_crc(p_936->g_133.s2, "p_936->g_133.s2", print_hash_value);
    transparent_crc(p_936->g_133.s3, "p_936->g_133.s3", print_hash_value);
    transparent_crc(p_936->g_133.s4, "p_936->g_133.s4", print_hash_value);
    transparent_crc(p_936->g_133.s5, "p_936->g_133.s5", print_hash_value);
    transparent_crc(p_936->g_133.s6, "p_936->g_133.s6", print_hash_value);
    transparent_crc(p_936->g_133.s7, "p_936->g_133.s7", print_hash_value);
    transparent_crc(p_936->g_133.s8, "p_936->g_133.s8", print_hash_value);
    transparent_crc(p_936->g_133.s9, "p_936->g_133.s9", print_hash_value);
    transparent_crc(p_936->g_133.sa, "p_936->g_133.sa", print_hash_value);
    transparent_crc(p_936->g_133.sb, "p_936->g_133.sb", print_hash_value);
    transparent_crc(p_936->g_133.sc, "p_936->g_133.sc", print_hash_value);
    transparent_crc(p_936->g_133.sd, "p_936->g_133.sd", print_hash_value);
    transparent_crc(p_936->g_133.se, "p_936->g_133.se", print_hash_value);
    transparent_crc(p_936->g_133.sf, "p_936->g_133.sf", print_hash_value);
    transparent_crc(p_936->g_135.s0, "p_936->g_135.s0", print_hash_value);
    transparent_crc(p_936->g_135.s1, "p_936->g_135.s1", print_hash_value);
    transparent_crc(p_936->g_135.s2, "p_936->g_135.s2", print_hash_value);
    transparent_crc(p_936->g_135.s3, "p_936->g_135.s3", print_hash_value);
    transparent_crc(p_936->g_135.s4, "p_936->g_135.s4", print_hash_value);
    transparent_crc(p_936->g_135.s5, "p_936->g_135.s5", print_hash_value);
    transparent_crc(p_936->g_135.s6, "p_936->g_135.s6", print_hash_value);
    transparent_crc(p_936->g_135.s7, "p_936->g_135.s7", print_hash_value);
    transparent_crc(p_936->g_135.s8, "p_936->g_135.s8", print_hash_value);
    transparent_crc(p_936->g_135.s9, "p_936->g_135.s9", print_hash_value);
    transparent_crc(p_936->g_135.sa, "p_936->g_135.sa", print_hash_value);
    transparent_crc(p_936->g_135.sb, "p_936->g_135.sb", print_hash_value);
    transparent_crc(p_936->g_135.sc, "p_936->g_135.sc", print_hash_value);
    transparent_crc(p_936->g_135.sd, "p_936->g_135.sd", print_hash_value);
    transparent_crc(p_936->g_135.se, "p_936->g_135.se", print_hash_value);
    transparent_crc(p_936->g_135.sf, "p_936->g_135.sf", print_hash_value);
    transparent_crc(p_936->g_137, "p_936->g_137", print_hash_value);
    transparent_crc(p_936->g_139, "p_936->g_139", print_hash_value);
    transparent_crc(p_936->g_144.s0, "p_936->g_144.s0", print_hash_value);
    transparent_crc(p_936->g_144.s1, "p_936->g_144.s1", print_hash_value);
    transparent_crc(p_936->g_144.s2, "p_936->g_144.s2", print_hash_value);
    transparent_crc(p_936->g_144.s3, "p_936->g_144.s3", print_hash_value);
    transparent_crc(p_936->g_144.s4, "p_936->g_144.s4", print_hash_value);
    transparent_crc(p_936->g_144.s5, "p_936->g_144.s5", print_hash_value);
    transparent_crc(p_936->g_144.s6, "p_936->g_144.s6", print_hash_value);
    transparent_crc(p_936->g_144.s7, "p_936->g_144.s7", print_hash_value);
    transparent_crc(p_936->g_145.s0, "p_936->g_145.s0", print_hash_value);
    transparent_crc(p_936->g_145.s1, "p_936->g_145.s1", print_hash_value);
    transparent_crc(p_936->g_145.s2, "p_936->g_145.s2", print_hash_value);
    transparent_crc(p_936->g_145.s3, "p_936->g_145.s3", print_hash_value);
    transparent_crc(p_936->g_145.s4, "p_936->g_145.s4", print_hash_value);
    transparent_crc(p_936->g_145.s5, "p_936->g_145.s5", print_hash_value);
    transparent_crc(p_936->g_145.s6, "p_936->g_145.s6", print_hash_value);
    transparent_crc(p_936->g_145.s7, "p_936->g_145.s7", print_hash_value);
    transparent_crc(p_936->g_145.s8, "p_936->g_145.s8", print_hash_value);
    transparent_crc(p_936->g_145.s9, "p_936->g_145.s9", print_hash_value);
    transparent_crc(p_936->g_145.sa, "p_936->g_145.sa", print_hash_value);
    transparent_crc(p_936->g_145.sb, "p_936->g_145.sb", print_hash_value);
    transparent_crc(p_936->g_145.sc, "p_936->g_145.sc", print_hash_value);
    transparent_crc(p_936->g_145.sd, "p_936->g_145.sd", print_hash_value);
    transparent_crc(p_936->g_145.se, "p_936->g_145.se", print_hash_value);
    transparent_crc(p_936->g_145.sf, "p_936->g_145.sf", print_hash_value);
    transparent_crc(p_936->g_146, "p_936->g_146", print_hash_value);
    transparent_crc(p_936->g_164, "p_936->g_164", print_hash_value);
    transparent_crc(p_936->g_165, "p_936->g_165", print_hash_value);
    transparent_crc(p_936->g_168, "p_936->g_168", print_hash_value);
    transparent_crc(p_936->g_169, "p_936->g_169", print_hash_value);
    transparent_crc(p_936->g_170, "p_936->g_170", print_hash_value);
    transparent_crc(p_936->g_174, "p_936->g_174", print_hash_value);
    transparent_crc(p_936->g_201, "p_936->g_201", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_936->g_202[i], "p_936->g_202[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_936->g_203[i], "p_936->g_203[i]", print_hash_value);

    }
    transparent_crc(p_936->g_204, "p_936->g_204", print_hash_value);
    transparent_crc(p_936->g_243.f0, "p_936->g_243.f0", print_hash_value);
    transparent_crc(p_936->g_552.f0, "p_936->g_552.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_936->g_569[i][j], "p_936->g_569[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_936->g_572, "p_936->g_572", print_hash_value);
    transparent_crc(p_936->g_573, "p_936->g_573", print_hash_value);
    transparent_crc(p_936->g_574, "p_936->g_574", print_hash_value);
    transparent_crc(p_936->g_615, "p_936->g_615", print_hash_value);
    transparent_crc(p_936->g_616, "p_936->g_616", print_hash_value);
    transparent_crc(p_936->g_617, "p_936->g_617", print_hash_value);
    transparent_crc(p_936->g_618, "p_936->g_618", print_hash_value);
    transparent_crc(p_936->g_638, "p_936->g_638", print_hash_value);
    transparent_crc(p_936->g_668.x, "p_936->g_668.x", print_hash_value);
    transparent_crc(p_936->g_668.y, "p_936->g_668.y", print_hash_value);
    transparent_crc(p_936->g_668.z, "p_936->g_668.z", print_hash_value);
    transparent_crc(p_936->g_668.w, "p_936->g_668.w", print_hash_value);
    transparent_crc(p_936->g_683.s0, "p_936->g_683.s0", print_hash_value);
    transparent_crc(p_936->g_683.s1, "p_936->g_683.s1", print_hash_value);
    transparent_crc(p_936->g_683.s2, "p_936->g_683.s2", print_hash_value);
    transparent_crc(p_936->g_683.s3, "p_936->g_683.s3", print_hash_value);
    transparent_crc(p_936->g_683.s4, "p_936->g_683.s4", print_hash_value);
    transparent_crc(p_936->g_683.s5, "p_936->g_683.s5", print_hash_value);
    transparent_crc(p_936->g_683.s6, "p_936->g_683.s6", print_hash_value);
    transparent_crc(p_936->g_683.s7, "p_936->g_683.s7", print_hash_value);
    transparent_crc(p_936->g_683.s8, "p_936->g_683.s8", print_hash_value);
    transparent_crc(p_936->g_683.s9, "p_936->g_683.s9", print_hash_value);
    transparent_crc(p_936->g_683.sa, "p_936->g_683.sa", print_hash_value);
    transparent_crc(p_936->g_683.sb, "p_936->g_683.sb", print_hash_value);
    transparent_crc(p_936->g_683.sc, "p_936->g_683.sc", print_hash_value);
    transparent_crc(p_936->g_683.sd, "p_936->g_683.sd", print_hash_value);
    transparent_crc(p_936->g_683.se, "p_936->g_683.se", print_hash_value);
    transparent_crc(p_936->g_683.sf, "p_936->g_683.sf", print_hash_value);
    transparent_crc(p_936->g_689.x, "p_936->g_689.x", print_hash_value);
    transparent_crc(p_936->g_689.y, "p_936->g_689.y", print_hash_value);
    transparent_crc(p_936->g_689.z, "p_936->g_689.z", print_hash_value);
    transparent_crc(p_936->g_689.w, "p_936->g_689.w", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_936->g_694[i], "p_936->g_694[i]", print_hash_value);

    }
    transparent_crc(p_936->g_695, "p_936->g_695", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_936->g_700[i].f0, "p_936->g_700[i].f0", print_hash_value);

    }
    transparent_crc(p_936->g_706, "p_936->g_706", print_hash_value);
    transparent_crc(p_936->g_720, "p_936->g_720", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_936->g_735[i][j][k], "p_936->g_735[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_936->g_904, "p_936->g_904", print_hash_value);
    transparent_crc(p_936->g_907.s0, "p_936->g_907.s0", print_hash_value);
    transparent_crc(p_936->g_907.s1, "p_936->g_907.s1", print_hash_value);
    transparent_crc(p_936->g_907.s2, "p_936->g_907.s2", print_hash_value);
    transparent_crc(p_936->g_907.s3, "p_936->g_907.s3", print_hash_value);
    transparent_crc(p_936->g_907.s4, "p_936->g_907.s4", print_hash_value);
    transparent_crc(p_936->g_907.s5, "p_936->g_907.s5", print_hash_value);
    transparent_crc(p_936->g_907.s6, "p_936->g_907.s6", print_hash_value);
    transparent_crc(p_936->g_907.s7, "p_936->g_907.s7", print_hash_value);
    transparent_crc(p_936->g_907.s8, "p_936->g_907.s8", print_hash_value);
    transparent_crc(p_936->g_907.s9, "p_936->g_907.s9", print_hash_value);
    transparent_crc(p_936->g_907.sa, "p_936->g_907.sa", print_hash_value);
    transparent_crc(p_936->g_907.sb, "p_936->g_907.sb", print_hash_value);
    transparent_crc(p_936->g_907.sc, "p_936->g_907.sc", print_hash_value);
    transparent_crc(p_936->g_907.sd, "p_936->g_907.sd", print_hash_value);
    transparent_crc(p_936->g_907.se, "p_936->g_907.se", print_hash_value);
    transparent_crc(p_936->g_907.sf, "p_936->g_907.sf", print_hash_value);
    transparent_crc(p_936->g_918.x, "p_936->g_918.x", print_hash_value);
    transparent_crc(p_936->g_918.y, "p_936->g_918.y", print_hash_value);
    transparent_crc(p_936->g_919.s0, "p_936->g_919.s0", print_hash_value);
    transparent_crc(p_936->g_919.s1, "p_936->g_919.s1", print_hash_value);
    transparent_crc(p_936->g_919.s2, "p_936->g_919.s2", print_hash_value);
    transparent_crc(p_936->g_919.s3, "p_936->g_919.s3", print_hash_value);
    transparent_crc(p_936->g_919.s4, "p_936->g_919.s4", print_hash_value);
    transparent_crc(p_936->g_919.s5, "p_936->g_919.s5", print_hash_value);
    transparent_crc(p_936->g_919.s6, "p_936->g_919.s6", print_hash_value);
    transparent_crc(p_936->g_919.s7, "p_936->g_919.s7", print_hash_value);
    transparent_crc(p_936->g_920.s0, "p_936->g_920.s0", print_hash_value);
    transparent_crc(p_936->g_920.s1, "p_936->g_920.s1", print_hash_value);
    transparent_crc(p_936->g_920.s2, "p_936->g_920.s2", print_hash_value);
    transparent_crc(p_936->g_920.s3, "p_936->g_920.s3", print_hash_value);
    transparent_crc(p_936->g_920.s4, "p_936->g_920.s4", print_hash_value);
    transparent_crc(p_936->g_920.s5, "p_936->g_920.s5", print_hash_value);
    transparent_crc(p_936->g_920.s6, "p_936->g_920.s6", print_hash_value);
    transparent_crc(p_936->g_920.s7, "p_936->g_920.s7", print_hash_value);
    transparent_crc(p_936->g_920.s8, "p_936->g_920.s8", print_hash_value);
    transparent_crc(p_936->g_920.s9, "p_936->g_920.s9", print_hash_value);
    transparent_crc(p_936->g_920.sa, "p_936->g_920.sa", print_hash_value);
    transparent_crc(p_936->g_920.sb, "p_936->g_920.sb", print_hash_value);
    transparent_crc(p_936->g_920.sc, "p_936->g_920.sc", print_hash_value);
    transparent_crc(p_936->g_920.sd, "p_936->g_920.sd", print_hash_value);
    transparent_crc(p_936->g_920.se, "p_936->g_920.se", print_hash_value);
    transparent_crc(p_936->g_920.sf, "p_936->g_920.sf", print_hash_value);
    transparent_crc(p_936->v_collective, "p_936->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 92; i++)
            transparent_crc(p_936->g_special_values[i + 92 * get_linear_group_id()], "p_936->g_special_values[i + 92 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 92; i++)
            transparent_crc(p_936->l_special_values[i], "p_936->l_special_values[i]", print_hash_value);
    transparent_crc(p_936->l_comm_values[get_linear_local_id()], "p_936->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_936->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()], "p_936->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
