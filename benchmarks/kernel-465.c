// --atomics 8 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 50,24,2 -l 2,6,2
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

__constant uint32_t permutations[10][24] = {
{18,4,3,15,21,12,0,23,1,9,5,7,16,8,10,14,13,19,2,6,11,22,20,17}, // permutation 0
{16,22,9,14,5,18,12,20,11,1,4,13,15,6,17,2,7,23,21,19,8,3,10,0}, // permutation 1
{6,5,3,10,17,9,7,2,23,4,1,12,11,15,16,19,22,13,14,21,20,18,8,0}, // permutation 2
{6,13,22,8,1,5,19,16,0,20,14,10,17,3,4,15,18,12,9,2,11,23,21,7}, // permutation 3
{5,15,22,13,7,21,4,1,19,20,18,23,16,6,14,2,11,8,17,0,9,3,10,12}, // permutation 4
{2,9,22,21,3,17,1,11,8,12,14,5,16,7,0,23,18,10,20,15,13,6,4,19}, // permutation 5
{1,23,9,18,21,4,15,2,20,6,14,0,22,19,10,7,13,17,5,8,11,12,3,16}, // permutation 6
{13,4,9,14,5,3,15,8,20,23,6,7,2,22,10,21,19,18,11,17,16,12,1,0}, // permutation 7
{2,13,3,12,15,5,1,14,18,23,19,11,16,21,4,10,20,8,6,9,17,7,22,0}, // permutation 8
{17,16,9,12,0,23,13,8,18,22,21,3,19,10,14,2,4,15,11,7,6,1,20,5} // permutation 9
};

// Seed: 1524535254

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   int8_t  f1;
   int32_t  f2;
   uint32_t  f3;
   volatile int16_t  f4;
   volatile uint64_t  f5;
   volatile uint16_t  f6;
   volatile int8_t  f7;
};

union U1 {
   struct S0  f0;
   volatile struct S0  f1;
   volatile uint32_t  f2;
};

struct S2 {
    volatile VECTOR(int32_t, 16) g_2;
    uint8_t g_24;
    VECTOR(uint8_t, 16) g_27;
    uint32_t g_29;
    uint32_t *g_62;
    int32_t g_64;
    int64_t *g_78;
    int32_t g_80[10];
    VECTOR(uint32_t, 2) g_90;
    uint8_t *g_102;
    volatile int32_t * volatile *g_109[1];
    VECTOR(int64_t, 2) g_123;
    int32_t g_130;
    uint16_t g_152;
    uint64_t g_231;
    int64_t g_232;
    int8_t g_239;
    int32_t **g_247;
    union U1 g_249;
    VECTOR(int8_t, 2) g_257;
    int32_t g_291;
    VECTOR(int8_t, 8) g_299;
    VECTOR(int8_t, 4) g_300;
    VECTOR(int16_t, 4) g_315;
    VECTOR(int64_t, 4) g_390;
    uint64_t * volatile g_420;
    uint64_t * volatile *g_419;
    VECTOR(uint16_t, 16) g_423;
    uint16_t g_439;
    int8_t g_440;
    struct S0 g_447;
    int64_t g_475;
    int32_t *g_478;
    VECTOR(uint16_t, 4) g_499;
    VECTOR(uint16_t, 16) g_500;
    VECTOR(uint64_t, 4) g_501;
    uint64_t g_531;
    uint8_t g_536;
    uint64_t g_546;
    uint64_t *g_573;
    uint64_t **g_572;
    uint64_t ***g_571;
    union U1 g_588[5];
    union U1 g_590;
    union U1 g_591;
    union U1 g_592;
    union U1 g_593;
    union U1 g_594;
    union U1 g_595;
    union U1 g_596[7];
    union U1 g_597;
    union U1 g_598[9][2];
    union U1 g_599[5];
    union U1 g_600;
    union U1 g_601;
    union U1 g_602;
    union U1 g_603;
    union U1 g_604;
    struct S0 g_639[8][4];
    VECTOR(int32_t, 4) g_670;
    VECTOR(int64_t, 16) g_676;
    VECTOR(uint16_t, 8) g_743;
    int32_t *g_765;
    int32_t **g_764;
    VECTOR(int32_t, 16) g_791;
    VECTOR(int32_t, 4) g_792;
    volatile struct S0 g_798;
    volatile struct S0 *g_797;
    uint32_t g_808;
    VECTOR(int32_t, 16) g_813;
    uint32_t g_826;
    int16_t **g_827;
    VECTOR(int32_t, 4) g_845;
    VECTOR(int16_t, 4) g_848;
    VECTOR(int16_t, 16) g_853;
    int32_t *g_870;
    int32_t **g_869;
    VECTOR(int32_t, 8) g_921;
    struct S0 g_948[3][3];
    struct S0 g_950[6];
    volatile union U1 *g_953[4];
    volatile union U1 * volatile *g_952[1];
    union U1 g_956;
    int32_t g_1016[10][3];
    uint16_t g_1095;
    union U1 g_1129;
    union U1 *g_1128;
    VECTOR(int32_t, 16) g_1136;
    VECTOR(int8_t, 4) g_1161;
    VECTOR(int8_t, 8) g_1163;
    struct S0 g_1170;
    struct S0 g_1171;
    struct S0 g_1172;
    struct S0 *g_1169[4][2];
    struct S0 g_1174;
    struct S0 g_1175;
    struct S0 g_1176;
    struct S0 g_1177;
    struct S0 g_1178;
    struct S0 g_1179;
    struct S0 g_1180;
    struct S0 g_1181[3];
    struct S0 g_1182[3];
    struct S0 g_1183;
    struct S0 g_1184[6][6];
    struct S0 g_1185;
    struct S0 g_1186;
    struct S0 g_1188;
    VECTOR(int16_t, 2) g_1205;
    int32_t g_1234;
    VECTOR(int16_t, 4) g_1261;
    VECTOR(uint16_t, 16) g_1262;
    VECTOR(int32_t, 16) g_1273;
    int32_t ***g_1292;
    int32_t ****g_1303;
    volatile int32_t g_1308;
    volatile int32_t * volatile g_1307;
    volatile int32_t * volatile * volatile g_1306;
    volatile int32_t g_1311;
    volatile int32_t * volatile g_1310;
    volatile int32_t *g_1312;
    volatile int32_t * volatile * volatile g_1309[2][9];
    volatile int32_t * volatile *g_1313[6][3][2];
    volatile int32_t * volatile * volatile *g_1305[10];
    volatile int32_t * volatile * volatile **g_1304;
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
int32_t  func_1(struct S2 * p_1323);
uint64_t  func_8(uint32_t  p_9, uint32_t  p_10, uint32_t  p_11, uint64_t  p_12, struct S2 * p_1323);
uint32_t  func_13(int32_t  p_14, struct S2 * p_1323);
int64_t  func_17(int64_t  p_18, int64_t  p_19, uint64_t  p_20, struct S2 * p_1323);
int32_t  func_36(uint32_t  p_37, int64_t * p_38, uint32_t  p_39, int8_t  p_40, int64_t  p_41, struct S2 * p_1323);
uint8_t  func_42(uint32_t * p_43, struct S2 * p_1323);
uint32_t * func_44(uint32_t  p_45, int32_t  p_46, uint64_t  p_47, struct S2 * p_1323);
uint64_t  func_49(uint16_t  p_50, int32_t  p_51, int16_t  p_52, int64_t * p_53, struct S2 * p_1323);
uint64_t  func_54(uint8_t  p_55, int32_t  p_56, uint32_t  p_57, uint32_t * p_58, uint8_t  p_59, struct S2 * p_1323);
int8_t  func_67(int32_t  p_68, int32_t  p_69, int32_t * p_70, struct S2 * p_1323);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1323->g_2 p_1323->g_27 p_1323->l_comm_values p_1323->g_comm_values p_1323->g_62 p_1323->g_64 p_1323->g_78 p_1323->g_80 p_1323->g_90 p_1323->g_29 p_1323->g_109 p_1323->g_123 p_1323->g_24 p_1323->g_152 p_1323->g_130 p_1323->g_257 p_1323->g_249.f0.f3 p_1323->g_315 p_1323->g_299 p_1323->g_390 p_1323->g_249.f0.f1 p_1323->g_232 p_1323->g_249.f0.f2 p_1323->g_419 p_1323->g_423 p_1323->g_440 p_1323->g_249.f0.f0 p_1323->g_300 p_1323->g_231 p_1323->g_447.f2 p_1323->g_291 p_1323->g_536 p_1323->g_546 p_1323->g_478 p_1323->g_573 p_1323->g_499 p_1323->g_598.f0.f0 p_1323->g_603.f0.f1 p_1323->g_439 p_1323->g_591.f0.f2 p_1323->g_572 p_1323->g_590.f0.f1 p_1323->g_670 p_1323->g_676 p_1323->g_743 p_1323->g_604.f0.f0 p_1323->g_639.f2 p_1323->g_764 p_1323->g_791 p_1323->g_792 p_1323->g_765 p_1323->g_592.f0.f2 p_1323->g_797 p_1323->g_808 p_1323->g_813 p_1323->g_447.f0 p_1323->g_588.f0.f2 p_1323->g_827 p_1323->g_845 p_1323->g_848 p_1323->g_853 p_1323->g_826 p_1323->g_601.f0.f0 p_1323->g_588.f0.f3 p_1323->g_952 p_1323->g_598.f0.f2 p_1323->g_599.f0.f1 p_1323->g_596.f0.f2 p_1323->g_604.f0.f1 p_1323->g_950.f0 p_1323->g_591.f0.f1 p_1323->g_948.f2 p_1323->g_948.f1 p_1323->g_950.f2 p_1323->g_1016 p_1323->g_950.f3 p_1323->g_948.f0 p_1323->g_1095 p_1323->g_593.f0.f1 p_1323->g_595.f0.f0 p_1323->g_590.f0.f2 p_1323->g_1128 p_1323->g_595.f0.f1 p_1323->g_1169 p_1323->g_1181.f0 p_1323->g_1175.f0 p_1323->g_239 p_1323->g_595.f0.f3 p_1323->g_1234 p_1323->g_447.f1 p_1323->g_1174.f3 p_1323->g_1176.f3 p_1323->g_1179.f0 p_1323->g_1185.f0 p_1323->g_1261 p_1323->g_1262 p_1323->g_591.f0.f3 p_1323->g_1273 p_1323->g_601.f0.f3 p_1323->g_594.f0.f0 p_1323->g_1175.f2 p_1323->g_1129.f0.f0 p_1323->g_598.f0.f1 p_1323->g_1304 p_1323->g_1205
 * writes: p_1323->g_24 p_1323->g_29 p_1323->l_comm_values p_1323->g_64 p_1323->g_80 p_1323->g_102 p_1323->g_130 p_1323->g_62 p_1323->g_152 p_1323->g_247 p_1323->g_231 p_1323->g_239 p_1323->g_291 p_1323->g_249.f0.f1 p_1323->g_232 p_1323->g_439 p_1323->g_440 p_1323->g_249.f0.f0 p_1323->g_315 p_1323->g_475 p_1323->g_447.f1 p_1323->g_478 p_1323->g_249.f0.f2 p_1323->g_447.f2 p_1323->g_536 p_1323->g_571 p_1323->g_592.f0.f1 p_1323->g_591.f0.f2 p_1323->g_123 p_1323->g_797 p_1323->g_743 p_1323->g_808 p_1323->g_826 p_1323->g_596.f0.f2 p_1323->g_869 p_1323->g_599.f0.f1 p_1323->g_604.f0.f1 p_1323->g_845 p_1323->g_670 p_1323->g_597.f0.f1 p_1323->g_1095 p_1323->g_827 p_1323->g_595.f0.f0 p_1323->g_1128 p_1323->g_813 p_1323->g_604.f0.f0 p_1323->g_1183.f3 p_1323->g_1180.f1 p_1323->g_765 p_1323->g_27 p_1323->g_1174.f3 p_1323->g_1185.f0 p_1323->g_1177.f1 p_1323->g_594.f0.f0 p_1323->g_1292 p_1323->g_1129.f0.f0 p_1323->g_598.f0.f1 p_1323->g_1303 p_1323->g_1205
 */
int32_t  func_1(struct S2 * p_1323)
{ /* block id: 4 */
    VECTOR(int32_t, 8) l_3 = (VECTOR(int32_t, 8))(0x3D4E7030L, (VECTOR(int32_t, 4))(0x3D4E7030L, (VECTOR(int32_t, 2))(0x3D4E7030L, 6L), 6L), 6L, 0x3D4E7030L, 6L);
    VECTOR(int32_t, 4) l_4 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x22DB785BL), 0x22DB785BL);
    int64_t l_5 = 9L;
    uint8_t *l_23 = &p_1323->g_24;
    VECTOR(uint8_t, 2) l_25 = (VECTOR(uint8_t, 2))(1UL, 0xAFL);
    VECTOR(uint8_t, 16) l_26 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x47L), 0x47L), 0x47L, 1UL, 0x47L, (VECTOR(uint8_t, 2))(1UL, 0x47L), (VECTOR(uint8_t, 2))(1UL, 0x47L), 1UL, 0x47L, 1UL, 0x47L);
    uint32_t *l_28 = &p_1323->g_29;
    int64_t *l_30 = (void*)0;
    int64_t *l_31 = (void*)0;
    int64_t *l_32 = (void*)0;
    int64_t *l_33 = (void*)0;
    int64_t *l_34 = (void*)0;
    int64_t *l_35 = (void*)0;
    int16_t *l_1316 = (void*)0;
    int16_t *l_1317 = (void*)0;
    int16_t l_1318 = 0x028CL;
    int32_t *l_1319 = (void*)0;
    int32_t *l_1320 = (void*)0;
    int32_t l_1321 = 1L;
    int8_t l_1322 = 0x55L;
    int i;
    l_1321 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(6L, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(p_1323->g_2.s9892)).zzxwyzww, ((VECTOR(int32_t, 16))(l_3.s5303303773672571)).even))).s71)), ((VECTOR(int32_t, 2))(1L, 1L)), ((VECTOR(int32_t, 4))(l_4.zxwx)).hi))).yxxxyxxx, (int32_t)(l_5 < (+((p_1323->g_1205.y ^= (safe_lshift_func_uint8_t_u_u(((func_8(p_1323->g_2.sa, func_13((safe_mod_func_int64_t_s_s(((func_17(l_3.s6, (p_1323->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1323->tid, 24))] = (((*l_28) = (safe_lshift_func_int16_t_s_s((((*l_23) = (l_3.s6 <= 1UL)) | ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(l_25.xx)).xxxyyxxyyyxyyxxx, ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_26.sf9f4)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 2))(0xFCL, 0UL)).yyyyxxxxxxxyxyxy, ((VECTOR(uint8_t, 2))(0UL, 0x20L)).xxyyxxyyxxxyyxxy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))((l_23 != l_23), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_1323->g_27.s49124c6e)).s12)), ((VECTOR(uint8_t, 4))((p_1323->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1323->tid, 24))] ^ (((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 16))(0x5841L, ((l_25.x || l_25.x) , p_1323->g_27.s1), 0L, 1L, 0x36C8L, ((VECTOR(int16_t, 4))(0L)), 0L, ((VECTOR(int16_t, 4))((-7L))), 0L, 0L)).lo))).lo, (uint16_t)p_1323->g_27.sc))).z ^ l_25.y)), ((VECTOR(uint8_t, 2))(0x57L)), 0xB1L)), 0x3AL)).s11, ((VECTOR(uint8_t, 2))(0UL))))), ((VECTOR(uint8_t, 2))(9UL)), ((VECTOR(uint8_t, 2))(0x9CL))))), (uint8_t)1UL))).xxyxyyyx)), 0x00L, p_1323->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1323->tid, 24))], 1UL, ((VECTOR(uint8_t, 2))(0x6FL)), 0x15L, 0UL, 250UL))))).sd23e)), p_1323->g_comm_values[p_1323->tid], l_5, ((VECTOR(uint8_t, 4))(0xFFL)), 255UL, 0UL)).hi, ((VECTOR(uint8_t, 8))(6UL))))).s4351556060511264))))).s1), l_3.s5))) != l_26.s6)), l_3.s1, p_1323) || l_25.y) & p_1323->g_593.f0.f1), l_5)), p_1323), l_4.y, l_3.s3, p_1323) > l_4.y) | l_3.s5), 7))) , l_1318))), (int32_t)0x7AFA365AL))), ((VECTOR(int32_t, 8))(0x21949553L))))), l_4.w, (-1L), ((VECTOR(int32_t, 4))(0x3F36E025L)), 0x6CB4A385L)))).s8c39)).lo, ((VECTOR(int32_t, 2))(0x62066A95L)), ((VECTOR(int32_t, 2))(1L))))).yyyx)).wwwxxzyw, ((VECTOR(int32_t, 8))(0L))))).hi)).x;
    return l_1322;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_8(uint32_t  p_9, uint32_t  p_10, uint32_t  p_11, uint64_t  p_12, struct S2 * p_1323)
{ /* block id: 544 */
    int8_t l_1315 = 0x56L;
    return l_1315;
}


/* ------------------------------------------ */
/* 
 * reads : p_1323->g_249.f0.f1 p_1323->g_478 p_1323->g_80 p_1323->g_827 p_1323->g_595.f0.f0 p_1323->g_590.f0.f2 p_1323->g_1128 p_1323->g_27 p_1323->g_595.f0.f1 p_1323->g_813 p_1323->g_676 p_1323->g_1169 p_1323->g_1181.f0 p_1323->g_130 p_1323->g_29 p_1323->g_249.f0.f3 p_1323->g_64 p_1323->g_765 p_1323->g_596.f0.f2 p_1323->g_1175.f0 p_1323->g_239 p_1323->g_249.f0.f0 p_1323->g_595.f0.f3 p_1323->g_1234 p_1323->g_315 p_1323->g_447.f1 p_1323->g_1174.f3 p_1323->g_1176.f3 p_1323->g_1179.f0 p_1323->g_1185.f0 p_1323->g_1261 p_1323->g_1262 p_1323->g_591.f0.f3 p_1323->g_1273 p_1323->g_601.f0.f3 p_1323->g_594.f0.f0 p_1323->g_1175.f2 p_1323->g_573 p_1323->g_1129.f0.f0 p_1323->g_598.f0.f1 p_1323->g_1304 p_1323->g_591.f0.f2
 * writes: p_1323->g_249.f0.f1 p_1323->g_80 p_1323->g_827 p_1323->g_595.f0.f0 p_1323->g_1128 p_1323->g_813 p_1323->g_604.f0.f0 p_1323->g_592.f0.f1 p_1323->g_536 p_1323->g_249.f0.f2 p_1323->g_231 p_1323->g_64 p_1323->g_478 p_1323->g_29 p_1323->g_1183.f3 p_1323->g_1180.f1 p_1323->g_765 p_1323->g_27 p_1323->g_1174.f3 p_1323->g_1185.f0 p_1323->g_1177.f1 p_1323->g_594.f0.f0 p_1323->g_1292 p_1323->g_249.f0.f0 p_1323->g_1129.f0.f0 p_1323->g_598.f0.f1 p_1323->g_1303
 */
uint32_t  func_13(int32_t  p_14, struct S2 * p_1323)
{ /* block id: 447 */
    VECTOR(int32_t, 4) l_1100 = (VECTOR(int32_t, 4))(0x19A2FFB1L, (VECTOR(int32_t, 2))(0x19A2FFB1L, 0L), 0L);
    VECTOR(int64_t, 16) l_1101 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int64_t, 2))(0L, 1L), (VECTOR(int64_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
    uint32_t *l_1105[7] = {&p_1323->g_29,&p_1323->g_29,&p_1323->g_29,&p_1323->g_29,&p_1323->g_29,&p_1323->g_29,&p_1323->g_29};
    int32_t **l_1117 = &p_1323->g_765;
    VECTOR(uint16_t, 2) l_1131 = (VECTOR(uint16_t, 2))(0xB166L, 0x7E20L);
    int32_t *l_1147[3][2][3] = {{{(void*)0,&p_1323->g_80[5],&p_1323->g_80[5]},{(void*)0,&p_1323->g_80[5],&p_1323->g_80[5]}},{{(void*)0,&p_1323->g_80[5],&p_1323->g_80[5]},{(void*)0,&p_1323->g_80[5],&p_1323->g_80[5]}},{{(void*)0,&p_1323->g_80[5],&p_1323->g_80[5]},{(void*)0,&p_1323->g_80[5],&p_1323->g_80[5]}}};
    uint64_t *l_1157 = &p_1323->g_1129.f0.f0;
    VECTOR(int8_t, 4) l_1203 = (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x70L), 0x70L);
    VECTOR(uint8_t, 16) l_1204 = (VECTOR(uint8_t, 16))(0x47L, (VECTOR(uint8_t, 4))(0x47L, (VECTOR(uint8_t, 2))(0x47L, 0x06L), 0x06L), 0x06L, 0x47L, 0x06L, (VECTOR(uint8_t, 2))(0x47L, 0x06L), (VECTOR(uint8_t, 2))(0x47L, 0x06L), 0x47L, 0x06L, 0x47L, 0x06L);
    uint32_t l_1207 = 0xE7B051DBL;
    uint64_t **l_1272 = (void*)0;
    int32_t ***l_1291 = &l_1117;
    int32_t ****l_1290[2];
    int32_t ***l_1293 = &p_1323->g_764;
    uint32_t l_1294 = 1UL;
    int8_t *l_1301[9][9] = {{&p_1323->g_602.f0.f1,&p_1323->g_1188.f1,(void*)0,&p_1323->g_948[1][0].f1,(void*)0,&p_1323->g_602.f0.f1,&p_1323->g_948[1][0].f1,&p_1323->g_1170.f1,&p_1323->g_948[1][0].f1},{&p_1323->g_602.f0.f1,&p_1323->g_1188.f1,(void*)0,&p_1323->g_948[1][0].f1,(void*)0,&p_1323->g_602.f0.f1,&p_1323->g_948[1][0].f1,&p_1323->g_1170.f1,&p_1323->g_948[1][0].f1},{&p_1323->g_602.f0.f1,&p_1323->g_1188.f1,(void*)0,&p_1323->g_948[1][0].f1,(void*)0,&p_1323->g_602.f0.f1,&p_1323->g_948[1][0].f1,&p_1323->g_1170.f1,&p_1323->g_948[1][0].f1},{&p_1323->g_602.f0.f1,&p_1323->g_1188.f1,(void*)0,&p_1323->g_948[1][0].f1,(void*)0,&p_1323->g_602.f0.f1,&p_1323->g_948[1][0].f1,&p_1323->g_1170.f1,&p_1323->g_948[1][0].f1},{&p_1323->g_602.f0.f1,&p_1323->g_1188.f1,(void*)0,&p_1323->g_948[1][0].f1,(void*)0,&p_1323->g_602.f0.f1,&p_1323->g_948[1][0].f1,&p_1323->g_1170.f1,&p_1323->g_948[1][0].f1},{&p_1323->g_602.f0.f1,&p_1323->g_1188.f1,(void*)0,&p_1323->g_948[1][0].f1,(void*)0,&p_1323->g_602.f0.f1,&p_1323->g_948[1][0].f1,&p_1323->g_1170.f1,&p_1323->g_948[1][0].f1},{&p_1323->g_602.f0.f1,&p_1323->g_1188.f1,(void*)0,&p_1323->g_948[1][0].f1,(void*)0,&p_1323->g_602.f0.f1,&p_1323->g_948[1][0].f1,&p_1323->g_1170.f1,&p_1323->g_948[1][0].f1},{&p_1323->g_602.f0.f1,&p_1323->g_1188.f1,(void*)0,&p_1323->g_948[1][0].f1,(void*)0,&p_1323->g_602.f0.f1,&p_1323->g_948[1][0].f1,&p_1323->g_1170.f1,&p_1323->g_948[1][0].f1},{&p_1323->g_602.f0.f1,&p_1323->g_1188.f1,(void*)0,&p_1323->g_948[1][0].f1,(void*)0,&p_1323->g_602.f0.f1,&p_1323->g_948[1][0].f1,&p_1323->g_1170.f1,&p_1323->g_948[1][0].f1}};
    int32_t *****l_1302[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_1314 = 0xCDD3E87FL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1290[i] = &l_1291;
    for (p_1323->g_249.f0.f1 = 0; (p_1323->g_249.f0.f1 >= (-14)); p_1323->g_249.f0.f1--)
    { /* block id: 450 */
        uint64_t *l_1102 = &p_1323->g_950[2].f0;
        uint32_t *l_1103 = (void*)0;
        uint32_t **l_1104[6][6] = {{&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62},{&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62},{&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62},{&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62},{&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62},{&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62,&p_1323->g_62}};
        int32_t l_1108 = (-1L);
        int16_t ***l_1113 = (void*)0;
        int16_t ***l_1114 = &p_1323->g_827;
        int i, j;
        (*p_1323->g_478) |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1100.wzwy)).xxwwxwzw)).s0541567370375164)).sf055)).xzyzzyzz)).s6;
        (*p_1323->g_478) = ((0x93AFL | (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_1101.s5bc2)).yxzwxzwwxwxxyzyy)).s3 , (((void*)0 == l_1102) == (l_1103 != (l_1105[6] = &p_1323->g_29))))) , ((safe_add_func_uint64_t_u_u(18446744073709551608UL, ((0x35L != l_1108) <= (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((*l_1114) = p_1323->g_827) == (void*)0), (*p_1323->g_478))), p_14))))) == p_14));
    }
    for (p_1323->g_595.f0.f0 = 14; (p_1323->g_595.f0.f0 > 32); ++p_1323->g_595.f0.f0)
    { /* block id: 458 */
        int32_t ***l_1118 = &l_1117;
        int32_t l_1121 = 0x3CFBD387L;
        uint32_t **l_1124 = &p_1323->g_62;
        uint32_t ***l_1125 = &l_1124;
        union U1 **l_1130 = &p_1323->g_1128;
        int32_t l_1189 = 0x09403966L;
        uint16_t *l_1224 = (void*)0;
        (*p_1323->g_478) = (((((&p_1323->g_24 != (((-5L) & (&p_1323->g_765 == ((*l_1118) = l_1117))) , &p_1323->g_24)) , ((VECTOR(uint16_t, 16))(8UL, ((VECTOR(uint16_t, 2))(1UL, 1UL)), 65535UL, 1UL, ((safe_lshift_func_int8_t_s_s((l_1121 >= 4294967294UL), 5)) < l_1121), GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 4))(0UL)), 0x696AL, ((VECTOR(uint16_t, 4))(4UL)))).s4) | 0x564AL) , &p_1323->g_80[4]) != &p_1323->g_80[0]);
        p_1323->g_813.sd ^= ((((*p_1323->g_478) >= (safe_div_func_int16_t_s_s(((p_1323->g_590.f0.f2 != ((((*l_1125) = l_1124) != &l_1105[2]) || 0x5822L)) && (safe_sub_func_uint8_t_u_u((((*l_1130) = p_1323->g_1128) == (void*)0), (l_1100.w = ((((VECTOR(uint16_t, 16))(l_1131.yyyxyyxxyyyyyxyy)).s2 & (safe_rshift_func_uint8_t_u_u(0x68L, 2))) < ((VECTOR(uint64_t, 8))(9UL, 18446744073709551609UL, (l_1121 , p_14), 0x1E8FF81FFB29520DL, 0x1BB076FA9812FFCEL, ((VECTOR(uint64_t, 2))(0UL)), 0x5C94709AE4EF70C2L)).s1))))), p_1323->g_27.s6))) != p_1323->g_595.f0.f1) >= 1UL);
        for (p_1323->g_604.f0.f0 = 13; (p_1323->g_604.f0.f0 != 6); --p_1323->g_604.f0.f0)
        { /* block id: 467 */
            uint32_t l_1144 = 0x1698E5C9L;
            int32_t l_1168 = (-1L);
            int32_t l_1220 = 1L;
            int32_t *l_1235 = &p_1323->g_950[2].f2;
            if (((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(p_1323->g_1136.s0c)), (-4L))).w)
            { /* block id: 468 */
                int32_t *l_1137 = (void*)0;
                int32_t *l_1138 = (void*)0;
                int32_t *l_1139 = (void*)0;
                int32_t *l_1140 = &p_1323->g_80[2];
                int32_t *l_1141 = (void*)0;
                int32_t *l_1142 = (void*)0;
                int32_t *l_1143 = (void*)0;
                int32_t **l_1148 = &l_1147[2][1][2];
                ++l_1144;
                (*l_1148) = l_1147[0][0][2];
            }
            else
            { /* block id: 471 */
                int8_t *l_1158 = (void*)0;
                int8_t *l_1159 = &p_1323->g_592.f0.f1;
                uint8_t *l_1160 = &p_1323->g_536;
                VECTOR(int8_t, 8) l_1162 = (VECTOR(int8_t, 8))(0x03L, (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, 0x07L), 0x07L), 0x07L, 0x03L, 0x07L);
                struct S0 *l_1173[10][2][2] = {{{(void*)0,&p_1323->g_1174},{(void*)0,&p_1323->g_1174}},{{(void*)0,&p_1323->g_1174},{(void*)0,&p_1323->g_1174}},{{(void*)0,&p_1323->g_1174},{(void*)0,&p_1323->g_1174}},{{(void*)0,&p_1323->g_1174},{(void*)0,&p_1323->g_1174}},{{(void*)0,&p_1323->g_1174},{(void*)0,&p_1323->g_1174}},{{(void*)0,&p_1323->g_1174},{(void*)0,&p_1323->g_1174}},{{(void*)0,&p_1323->g_1174},{(void*)0,&p_1323->g_1174}},{{(void*)0,&p_1323->g_1174},{(void*)0,&p_1323->g_1174}},{{(void*)0,&p_1323->g_1174},{(void*)0,&p_1323->g_1174}},{{(void*)0,&p_1323->g_1174},{(void*)0,&p_1323->g_1174}}};
                struct S0 *l_1187 = &p_1323->g_1188;
                int i, j, k;
                l_1189 ^= ((*p_1323->g_478) = (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_1323->g_676.s1, (((safe_rshift_func_uint8_t_u_s((((*l_1160) = (~(safe_add_func_uint8_t_u_u(254UL, ((*l_1159) = (l_1157 == l_1157)))))) && ((((((((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(p_1323->g_1161.wzyx)).lo, ((VECTOR(int8_t, 2))(l_1162.s52)), ((VECTOR(int8_t, 16))(p_1323->g_1163.s4675627355762516)).sf2))).hi <= (((((p_14 >= (l_1144 < (safe_rshift_func_uint16_t_u_s(((l_1168 ^= p_14) > ((l_1187 = (l_1173[7][0][0] = p_1323->g_1169[2][0])) != (void*)0)), p_14)))) && 0UL) > p_14) != p_1323->g_1181[1].f0) != l_1121)) && FAKE_DIVERGE(p_1323->group_1_offset, get_group_id(1), 10)) && l_1121) | p_14) >= p_1323->g_130) == 0x455DL)), p_14)) || 4L) <= GROUP_DIVERGE(0, 1)))), l_1162.s7)));
            }
            for (p_1323->g_249.f0.f2 = (-22); (p_1323->g_249.f0.f2 <= (-9)); p_1323->g_249.f0.f2++)
            { /* block id: 482 */
                VECTOR(int32_t, 16) l_1192 = (VECTOR(int32_t, 16))(0x7B01F44AL, (VECTOR(int32_t, 4))(0x7B01F44AL, (VECTOR(int32_t, 2))(0x7B01F44AL, 0x0C7BADEFL), 0x0C7BADEFL), 0x0C7BADEFL, 0x7B01F44AL, 0x0C7BADEFL, (VECTOR(int32_t, 2))(0x7B01F44AL, 0x0C7BADEFL), (VECTOR(int32_t, 2))(0x7B01F44AL, 0x0C7BADEFL), 0x7B01F44AL, 0x0C7BADEFL, 0x7B01F44AL, 0x0C7BADEFL);
                VECTOR(uint8_t, 2) l_1193 = (VECTOR(uint8_t, 2))(0x7AL, 0xB3L);
                int32_t **l_1194 = &p_1323->g_478;
                int16_t *l_1206[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                (*l_1194) = func_44(((p_14 < ((VECTOR(int32_t, 4))(l_1192.s6216)).z) != ((VECTOR(uint8_t, 16))(l_1193.yyyxxxyxxxyyxxyy)).s7), p_14, p_14, p_1323);
                (*l_1194) = func_44((p_14 > p_14), (*p_1323->g_765), (safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((((l_1144 , l_1189) & (((safe_mul_func_int16_t_s_s(l_1168, ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(l_1203.wyzzyzxxzzwxyxzw)).hi, ((VECTOR(uint8_t, 2))(l_1204.s3f)).xyyyyxyy))).s3)) >= 0UL) & p_1323->g_1175.f0)) > (p_1323->g_29 = (((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((-5L), (l_1207 ^= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(p_1323->g_1205.xxyxxyyyxxyyxxyy)).odd)).lo)).z), (-1L), (-1L))).zwxyzyywyxxzwwwx)).s5 <= (safe_sub_func_int64_t_s_s(p_14, 18446744073709551607UL))) && 0x6AD51156L) < p_1323->g_239))), 0xB254L)) & (*p_1323->g_478)), p_1323->g_249.f0.f0)), p_1323);
            }
            for (p_1323->g_1183.f3 = 0; (p_1323->g_1183.f3 <= 34); p_1323->g_1183.f3++)
            { /* block id: 490 */
                uint32_t l_1221 = 0x6FFFF552L;
                int32_t l_1229 = 0L;
                VECTOR(int8_t, 16) l_1233 = (VECTOR(int8_t, 16))(0x0FL, (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, 0x62L), 0x62L), 0x62L, 0x0FL, 0x62L, (VECTOR(int8_t, 2))(0x0FL, 0x62L), (VECTOR(int8_t, 2))(0x0FL, 0x62L), 0x0FL, 0x62L, 0x0FL, 0x62L);
                uint64_t *l_1243 = &p_1323->g_531;
                int8_t *l_1270 = &p_1323->g_1177.f1;
                uint64_t **l_1271 = &l_1157;
                int32_t **l_1274 = &p_1323->g_870;
                int i;
                if (p_14)
                    break;
                for (p_1323->g_1180.f1 = 23; (p_1323->g_1180.f1 != (-21)); p_1323->g_1180.f1 = safe_sub_func_int16_t_s_s(p_1323->g_1180.f1, 6))
                { /* block id: 494 */
                    uint8_t *l_1218 = &p_1323->g_536;
                    uint16_t *l_1219[9][9] = {{(void*)0,(void*)0,(void*)0,&p_1323->g_1095,&p_1323->g_439,&p_1323->g_1095,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1323->g_1095,&p_1323->g_439,&p_1323->g_1095,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1323->g_1095,&p_1323->g_439,&p_1323->g_1095,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1323->g_1095,&p_1323->g_439,&p_1323->g_1095,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1323->g_1095,&p_1323->g_439,&p_1323->g_1095,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1323->g_1095,&p_1323->g_439,&p_1323->g_1095,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1323->g_1095,&p_1323->g_439,&p_1323->g_1095,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1323->g_1095,&p_1323->g_439,&p_1323->g_1095,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1323->g_1095,&p_1323->g_439,&p_1323->g_1095,(void*)0,(void*)0,(void*)0}};
                    uint8_t *l_1236[8][4];
                    uint64_t **l_1244 = &l_1243;
                    uint32_t l_1256 = 0x9B39436DL;
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1236[i][j] = &p_1323->g_24;
                    }
                    p_14 = ((((*p_1323->g_478) = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(p_14, ((*l_1218) = GROUP_DIVERGE(2, 1)))) < ((+(l_1221--)) > (((l_1224 == &p_1323->g_439) == ((FAKE_DIVERGE(p_1323->group_1_offset, get_group_id(1), 10) < ((*p_1323->g_478) && (p_1323->g_595.f0.f3 && (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((+l_1229), (safe_rshift_func_uint8_t_u_u(((p_1323->g_27.sf = (((*l_1117) = func_44(l_1144, (safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(l_1233.se512c523)).s7041301755303644))).sa7)).odd)), p_1323->g_1234, p_1323)) != l_1235)) < 254UL), p_14)))), p_1323->g_315.x))))) != p_1323->g_596[2].f0.f2)) || p_1323->g_447.f1))), p_14))) || 6L) != l_1229);
                    for (p_1323->g_1174.f3 = 20; (p_1323->g_1174.f3 <= 15); p_1323->g_1174.f3 = safe_sub_func_int64_t_s_s(p_1323->g_1174.f3, 9))
                    { /* block id: 503 */
                        return p_1323->g_1176.f3;
                    }
                    (*p_1323->g_478) ^= (safe_mul_func_uint16_t_u_u(65532UL, (l_1233.s6 == ((0x6C2B625FF3DE191BL && (safe_mul_func_uint8_t_u_u(((*l_1218) = ((((*l_1244) = l_1243) == &p_1323->g_531) && (safe_unary_minus_func_int8_t_s((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((l_1229 |= ((&l_1236[4][1] == &l_1218) != (((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(l_1256, (safe_rshift_func_int16_t_s_u((p_14 != 9L), l_1220)))) && 0x3F3E40CCL) != 1UL), 0xB70ED649L)), p_14)) != 255UL) , 8L))), l_1256)), p_14)))))), p_1323->g_1179.f0))) > p_14))));
                    for (p_1323->g_1185.f0 = 0; (p_1323->g_1185.f0 > 42); p_1323->g_1185.f0 = safe_add_func_uint16_t_u_u(p_1323->g_1185.f0, 5))
                    { /* block id: 512 */
                        VECTOR(uint16_t, 8) l_1263 = (VECTOR(uint16_t, 8))(0xD4D4L, (VECTOR(uint16_t, 4))(0xD4D4L, (VECTOR(uint16_t, 2))(0xD4D4L, 6UL), 6UL), 6UL, 0xD4D4L, 6UL);
                        int i;
                        (*p_1323->g_478) &= ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(p_1323->g_1261.wy)).xyyxyxyxxxxyyyyy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_1323->g_1262.s115357e727275cde)).s45)).xyxyyyyy, ((VECTOR(uint16_t, 16))(GROUP_DIVERGE(2, 1), p_1323->g_591.f0.f3, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_1263.s1053)))), (GROUP_DIVERGE(0, 1) < GROUP_DIVERGE(0, 1)), (safe_lshift_func_int8_t_s_s(((*l_1270) = (l_1256 <= ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_1270 != (void*)0), (((0x5C7411ADB380DCCAL >= ((l_1271 != l_1272) > ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_1323->g_1273.sb414284c2c3151f4)).odd)).s3)) , l_1274) != (void*)0))), l_1263.s2)) ^ p_14))), 6)), p_1323->g_601.f0.f3, 0x2644L, 0xD842L, ((VECTOR(uint16_t, 4))(1UL)), 7UL)).lo))).s66)).yxyyxxxxyxxxxxxx))).s6;
                        (*p_1323->g_478) = (*p_1323->g_478);
                    }
                }
                if (p_14)
                    break;
                for (p_1323->g_594.f0.f0 = 0; (p_1323->g_594.f0.f0 > 22); p_1323->g_594.f0.f0++)
                { /* block id: 521 */
                    if ((atomic_inc(&p_1323->g_atomic_input[8 * get_linear_group_id() + 6]) == 5))
                    { /* block id: 523 */
                        int16_t l_1277[6][7][6] = {{{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL}},{{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL}},{{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL}},{{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL}},{{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL}},{{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL},{0x140EL,1L,0x4ECFL,(-4L),1L,0x140EL}}};
                        int32_t l_1279 = 0x6BC18CB8L;
                        int32_t *l_1278 = &l_1279;
                        int32_t *l_1280 = &l_1279;
                        VECTOR(uint16_t, 8) l_1281 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL);
                        int8_t l_1282 = 0L;
                        uint32_t l_1283 = 5UL;
                        int i, j, k;
                        l_1277[2][4][3] = 0x7728EE98L;
                        l_1280 = l_1278;
                        l_1283 &= (l_1282 &= ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))((-5L), 0x2857L)).yyxyyyyyxxxxxxyy, ((VECTOR(uint16_t, 4))(l_1281.s3637)).xwxyyzxywwwxzwyz))).even))).s7);
                        unsigned int result = 0;
                        int l_1277_i0, l_1277_i1, l_1277_i2;
                        for (l_1277_i0 = 0; l_1277_i0 < 6; l_1277_i0++) {
                            for (l_1277_i1 = 0; l_1277_i1 < 7; l_1277_i1++) {
                                for (l_1277_i2 = 0; l_1277_i2 < 6; l_1277_i2++) {
                                    result += l_1277[l_1277_i0][l_1277_i1][l_1277_i2];
                                }
                            }
                        }
                        result += l_1279;
                        result += l_1281.s7;
                        result += l_1281.s6;
                        result += l_1281.s5;
                        result += l_1281.s4;
                        result += l_1281.s3;
                        result += l_1281.s2;
                        result += l_1281.s1;
                        result += l_1281.s0;
                        result += l_1282;
                        result += l_1283;
                        atomic_add(&p_1323->g_special_values[8 * get_linear_group_id() + 6], result);
                    }
                    else
                    { /* block id: 528 */
                        (1 + 1);
                    }
                }
            }
        }
        l_1147[0][1][1] = &p_1323->g_80[5];
    }
    (*p_1323->g_478) ^= (safe_div_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(p_14, ((p_1323->g_1292 = ((((VECTOR(int64_t, 2))(1L, 0x37895383ECA82AE9L)).odd , p_1323->g_1175.f2) , &l_1117)) == l_1293))) | (l_1294 >= (safe_sub_func_uint64_t_u_u(((p_14 >= (safe_lshift_func_int16_t_s_s(((((p_1323->g_598[8][0].f0.f1 &= (((*p_1323->g_573) = 1UL) >= (((*l_1157)++) , 0x290D5A2027ECC312L))) || ((p_1323->g_1303 = &l_1291) == p_1323->g_1304)) , p_14) >= GROUP_DIVERGE(2, 1)), p_14))) != p_14), 0x1EDBFF536A183B66L)))) , p_14), p_14)), l_1314));
    (*p_1323->g_478) = (*p_1323->g_478);
    return p_1323->g_591.f0.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1323->g_comm_values p_1323->g_62 p_1323->g_64 p_1323->g_78 p_1323->g_80 p_1323->g_90 p_1323->g_29 p_1323->g_27 p_1323->g_109 p_1323->g_123 p_1323->g_24 p_1323->l_comm_values p_1323->g_152 p_1323->g_130 p_1323->g_257 p_1323->g_249.f0.f3 p_1323->g_315 p_1323->g_299 p_1323->g_390 p_1323->g_249.f0.f1 p_1323->g_232 p_1323->g_249.f0.f2 p_1323->g_419 p_1323->g_423 p_1323->g_440 p_1323->g_249.f0.f0 p_1323->g_300 p_1323->g_231 p_1323->g_447.f2 p_1323->g_291 p_1323->g_536 p_1323->g_546 p_1323->g_478 p_1323->g_573 p_1323->g_499 p_1323->g_598.f0.f0 p_1323->g_603.f0.f1 p_1323->g_439 p_1323->g_591.f0.f2 p_1323->g_572 p_1323->g_590.f0.f1 p_1323->g_670 p_1323->g_676 p_1323->g_743 p_1323->g_604.f0.f0 p_1323->g_639.f2 p_1323->g_764 p_1323->g_791 p_1323->g_792 p_1323->g_765 p_1323->g_592.f0.f2 p_1323->g_797 p_1323->g_808 p_1323->g_813 p_1323->g_447.f0 p_1323->g_588.f0.f2 p_1323->g_827 p_1323->g_845 p_1323->g_848 p_1323->g_853 p_1323->g_826 p_1323->g_601.f0.f0 p_1323->g_588.f0.f3 p_1323->g_952 p_1323->g_598.f0.f2 p_1323->g_599.f0.f1 p_1323->g_596.f0.f2 p_1323->g_604.f0.f1 p_1323->g_950.f0 p_1323->g_591.f0.f1 p_1323->g_948.f2 p_1323->g_948.f1 p_1323->g_950.f2 p_1323->g_1016 p_1323->g_950.f3 p_1323->g_948.f0 p_1323->g_1095
 * writes: p_1323->g_64 p_1323->g_80 p_1323->g_102 p_1323->g_24 p_1323->g_130 p_1323->g_62 p_1323->g_152 p_1323->g_29 p_1323->g_247 p_1323->g_231 p_1323->g_239 p_1323->g_291 p_1323->g_249.f0.f1 p_1323->g_232 p_1323->g_439 p_1323->g_440 p_1323->g_249.f0.f0 p_1323->g_315 p_1323->g_475 p_1323->g_447.f1 p_1323->g_478 p_1323->g_249.f0.f2 p_1323->g_447.f2 p_1323->g_536 p_1323->g_571 p_1323->g_592.f0.f1 p_1323->g_591.f0.f2 p_1323->g_123 p_1323->g_797 p_1323->g_743 p_1323->g_808 p_1323->g_826 p_1323->g_596.f0.f2 p_1323->g_869 p_1323->g_599.f0.f1 p_1323->g_604.f0.f1 p_1323->g_845 p_1323->g_670 p_1323->g_597.f0.f1 p_1323->g_1095
 */
int64_t  func_17(int64_t  p_18, int64_t  p_19, uint64_t  p_20, struct S2 * p_1323)
{ /* block id: 8 */
    uint16_t l_48 = 65528UL;
    uint32_t *l_60 = &p_1323->g_29;
    uint32_t *l_61 = &p_1323->g_29;
    int64_t *l_155[9][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_576 = 0L;
    VECTOR(int8_t, 4) l_656 = (VECTOR(int8_t, 4))(0x52L, (VECTOR(int8_t, 2))(0x52L, 9L), 9L);
    VECTOR(int32_t, 8) l_668 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x70BAED8EL), 0x70BAED8EL), 0x70BAED8EL, 1L, 0x70BAED8EL);
    VECTOR(int64_t, 2) l_677 = (VECTOR(int64_t, 2))(0L, 5L);
    VECTOR(uint16_t, 16) l_795 = (VECTOR(uint16_t, 16))(0xF378L, (VECTOR(uint16_t, 4))(0xF378L, (VECTOR(uint16_t, 2))(0xF378L, 65535UL), 65535UL), 65535UL, 0xF378L, 65535UL, (VECTOR(uint16_t, 2))(0xF378L, 65535UL), (VECTOR(uint16_t, 2))(0xF378L, 65535UL), 0xF378L, 65535UL, 0xF378L, 65535UL);
    VECTOR(int32_t, 2) l_849 = (VECTOR(int32_t, 2))((-1L), 0x01453389L);
    int16_t *l_850 = (void*)0;
    int32_t **l_867 = (void*)0;
    int32_t **l_871 = &p_1323->g_870;
    uint32_t l_916 = 0x754DE869L;
    VECTOR(uint64_t, 2) l_944 = (VECTOR(uint64_t, 2))(0UL, 0x2BBAEE827906D48FL);
    struct S0 *l_947 = &p_1323->g_948[1][0];
    int32_t l_972 = 0x290938D5L;
    VECTOR(uint32_t, 8) l_1004 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x16887A96L), 0x16887A96L), 0x16887A96L, 1UL, 0x16887A96L);
    VECTOR(int16_t, 2) l_1069 = (VECTOR(int16_t, 2))((-1L), 0L);
    int32_t ****l_1078 = (void*)0;
    int32_t ***l_1080[7];
    int32_t ****l_1079 = &l_1080[5];
    int32_t ***l_1086 = &l_867;
    int32_t ****l_1085 = &l_1086;
    int32_t **l_1087 = (void*)0;
    int32_t *l_1089 = &p_1323->g_599[1].f0.f2;
    int32_t **l_1088 = &l_1089;
    int i, j;
    for (i = 0; i < 7; i++)
        l_1080[i] = &p_1323->g_869;
    if (func_36((~(func_42(func_44(l_48, p_18, (func_49((func_54((l_48 , ((l_60 = &p_1323->g_29) != l_61)), p_1323->g_comm_values[p_1323->tid], ((void*)0 == l_61), p_1323->g_62, l_48, p_1323) < p_20), l_48, p_1323->g_comm_values[p_1323->tid], l_155[5][0], p_1323) , p_20), p_1323), p_1323) , 0x380F93FEL)), l_155[0][3], p_1323->g_299.s3, p_20, p_19, p_1323))
    { /* block id: 240 */
        uint64_t *l_549 = &p_1323->g_531;
        uint64_t *l_569 = (void*)0;
        uint64_t **l_568[9] = {&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569};
        uint64_t ***l_567 = &l_568[6];
        int32_t l_574 = 6L;
        uint64_t l_577 = 0UL;
        union U1 *l_589[7][8] = {{&p_1323->g_598[8][0],&p_1323->g_597,&p_1323->g_602,&p_1323->g_601,&p_1323->g_594,&p_1323->g_594,&p_1323->g_601,&p_1323->g_602},{&p_1323->g_598[8][0],&p_1323->g_597,&p_1323->g_602,&p_1323->g_601,&p_1323->g_594,&p_1323->g_594,&p_1323->g_601,&p_1323->g_602},{&p_1323->g_598[8][0],&p_1323->g_597,&p_1323->g_602,&p_1323->g_601,&p_1323->g_594,&p_1323->g_594,&p_1323->g_601,&p_1323->g_602},{&p_1323->g_598[8][0],&p_1323->g_597,&p_1323->g_602,&p_1323->g_601,&p_1323->g_594,&p_1323->g_594,&p_1323->g_601,&p_1323->g_602},{&p_1323->g_598[8][0],&p_1323->g_597,&p_1323->g_602,&p_1323->g_601,&p_1323->g_594,&p_1323->g_594,&p_1323->g_601,&p_1323->g_602},{&p_1323->g_598[8][0],&p_1323->g_597,&p_1323->g_602,&p_1323->g_601,&p_1323->g_594,&p_1323->g_594,&p_1323->g_601,&p_1323->g_602},{&p_1323->g_598[8][0],&p_1323->g_597,&p_1323->g_602,&p_1323->g_601,&p_1323->g_594,&p_1323->g_594,&p_1323->g_601,&p_1323->g_602}};
        int16_t *l_652 = (void*)0;
        int16_t **l_651 = &l_652;
        VECTOR(int8_t, 2) l_657 = (VECTOR(int8_t, 2))(0L, 0x7CL);
        uint64_t *l_663 = &p_1323->g_531;
        VECTOR(int16_t, 8) l_667 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5426L), 0x5426L), 0x5426L, 1L, 0x5426L);
        VECTOR(int64_t, 16) l_675 = (VECTOR(int64_t, 16))(0x55CFF8109E38D9E5L, (VECTOR(int64_t, 4))(0x55CFF8109E38D9E5L, (VECTOR(int64_t, 2))(0x55CFF8109E38D9E5L, 0x2F5E72ACA0EC2AE6L), 0x2F5E72ACA0EC2AE6L), 0x2F5E72ACA0EC2AE6L, 0x55CFF8109E38D9E5L, 0x2F5E72ACA0EC2AE6L, (VECTOR(int64_t, 2))(0x55CFF8109E38D9E5L, 0x2F5E72ACA0EC2AE6L), (VECTOR(int64_t, 2))(0x55CFF8109E38D9E5L, 0x2F5E72ACA0EC2AE6L), 0x55CFF8109E38D9E5L, 0x2F5E72ACA0EC2AE6L, 0x55CFF8109E38D9E5L, 0x2F5E72ACA0EC2AE6L);
        VECTOR(uint8_t, 2) l_742 = (VECTOR(uint8_t, 2))(251UL, 0xD9L);
        VECTOR(int32_t, 16) l_744 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
        int32_t *l_747 = &l_576;
        uint8_t l_748 = 0xEBL;
        int32_t **l_766 = &p_1323->g_765;
        VECTOR(uint16_t, 4) l_788 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL);
        int32_t *l_824[10][5] = {{(void*)0,&p_1323->g_291,(void*)0,&p_1323->g_291,(void*)0},{(void*)0,&p_1323->g_291,(void*)0,&p_1323->g_291,(void*)0},{(void*)0,&p_1323->g_291,(void*)0,&p_1323->g_291,(void*)0},{(void*)0,&p_1323->g_291,(void*)0,&p_1323->g_291,(void*)0},{(void*)0,&p_1323->g_291,(void*)0,&p_1323->g_291,(void*)0},{(void*)0,&p_1323->g_291,(void*)0,&p_1323->g_291,(void*)0},{(void*)0,&p_1323->g_291,(void*)0,&p_1323->g_291,(void*)0},{(void*)0,&p_1323->g_291,(void*)0,&p_1323->g_291,(void*)0},{(void*)0,&p_1323->g_291,(void*)0,&p_1323->g_291,(void*)0},{(void*)0,&p_1323->g_291,(void*)0,&p_1323->g_291,(void*)0}};
        int32_t **l_823[6] = {&l_824[7][2],(void*)0,&l_824[7][2],&l_824[7][2],(void*)0,&l_824[7][2]};
        uint8_t *l_851 = &l_748;
        int32_t **l_852 = &p_1323->g_478;
        uint8_t *l_856 = &p_1323->g_24;
        int32_t ***l_868[8] = {&l_823[2],&l_823[2],&l_823[2],&l_823[2],&l_823[2],&l_823[2],&l_823[2],&l_823[2]};
        int i, j;
        if (l_48)
        { /* block id: 241 */
            VECTOR(uint8_t, 8) l_560 = (VECTOR(uint8_t, 8))(0x14L, (VECTOR(uint8_t, 4))(0x14L, (VECTOR(uint8_t, 2))(0x14L, 0UL), 0UL), 0UL, 0x14L, 0UL);
            uint64_t ****l_570[2][1][4];
            uint16_t *l_575 = &p_1323->g_439;
            VECTOR(uint64_t, 2) l_584 = (VECTOR(uint64_t, 2))(18446744073709551610UL, 0UL);
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_570[i][j][k] = &l_567;
                }
            }
            (*p_1323->g_478) = p_1323->g_546;
            for (p_1323->g_130 = 0; (p_1323->g_130 <= (-21)); p_1323->g_130--)
            { /* block id: 245 */
                (*p_1323->g_478) = ((void*)0 != l_549);
            }
            if ((safe_mod_func_uint16_t_u_u((((((((p_19 == (safe_add_func_uint32_t_u_u(p_20, ((safe_lshift_func_uint16_t_u_u((!(safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((~(l_48 < p_19)), ((VECTOR(uint8_t, 16))(l_560.s1550107636672670)).s1)), ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))((!(safe_mod_func_uint16_t_u_u((((l_576 ^= (safe_mod_func_uint64_t_u_u((((((p_1323->g_123.y < (((safe_mul_func_uint16_t_u_u(((*l_575) = ((p_1323->g_571 = l_567) != ((~l_574) , &p_1323->g_419))), l_574)) , 0xF6L) >= l_560.s0)) , p_20) <= 0x64A5829AL) | 0x6451BEE7ABFA8DBBL) != p_20), (*p_1323->g_573)))) | l_48) , 0x43FFL), p_1323->g_29))), 255UL, 255UL, l_577, l_560.s5, 248UL, 0x3CL, 8UL)).hi, (uint8_t)l_577))).w))), l_48)) <= p_1323->g_315.y)))) != l_560.s2) , (*p_1323->g_478)) , p_1323->g_499.w) <= 0x6FL) > 0x7B4E1422L) >= 18446744073709551606UL), l_560.s1)))
            { /* block id: 251 */
                return p_20;
            }
            else
            { /* block id: 253 */
                union U1 *l_587 = &p_1323->g_588[0];
                VECTOR(uint8_t, 2) l_607 = (VECTOR(uint8_t, 2))(1UL, 0xF2L);
                int32_t l_630 = 0x519C199EL;
                struct S0 *l_638 = &p_1323->g_639[2][2];
                int16_t ***l_653 = (void*)0;
                int16_t **l_655 = &l_652;
                int16_t ***l_654 = &l_655;
                uint64_t **l_660 = &l_549;
                uint64_t *l_662 = &p_1323->g_531;
                uint64_t **l_661[10][8] = {{&l_662,&l_662,&l_662,&l_662,(void*)0,&l_662,&l_662,&l_662},{&l_662,&l_662,&l_662,&l_662,(void*)0,&l_662,&l_662,&l_662},{&l_662,&l_662,&l_662,&l_662,(void*)0,&l_662,&l_662,&l_662},{&l_662,&l_662,&l_662,&l_662,(void*)0,&l_662,&l_662,&l_662},{&l_662,&l_662,&l_662,&l_662,(void*)0,&l_662,&l_662,&l_662},{&l_662,&l_662,&l_662,&l_662,(void*)0,&l_662,&l_662,&l_662},{&l_662,&l_662,&l_662,&l_662,(void*)0,&l_662,&l_662,&l_662},{&l_662,&l_662,&l_662,&l_662,(void*)0,&l_662,&l_662,&l_662},{&l_662,&l_662,&l_662,&l_662,(void*)0,&l_662,&l_662,&l_662},{&l_662,&l_662,&l_662,&l_662,(void*)0,&l_662,&l_662,&l_662}};
                VECTOR(uint64_t, 4) l_666 = (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0xC1E1200B8E684188L), 0xC1E1200B8E684188L);
                VECTOR(int32_t, 8) l_669 = (VECTOR(int32_t, 8))(0x7F7739D8L, (VECTOR(int32_t, 4))(0x7F7739D8L, (VECTOR(int32_t, 2))(0x7F7739D8L, (-8L)), (-8L)), (-8L), 0x7F7739D8L, (-8L));
                int i, j;
                for (p_1323->g_232 = 0; (p_1323->g_232 < (-23)); p_1323->g_232 = safe_sub_func_int64_t_s_s(p_1323->g_232, 8))
                { /* block id: 256 */
                    int32_t l_620 = 0x50401E73L;
                    int8_t *l_621 = &p_1323->g_592.f0.f1;
                    int16_t *l_622 = (void*)0;
                    int16_t *l_623 = (void*)0;
                    int16_t *l_624 = (void*)0;
                    int16_t *l_625 = (void*)0;
                    int16_t *l_626 = (void*)0;
                    int16_t *l_627 = (void*)0;
                    int16_t *l_628 = (void*)0;
                    int16_t *l_629[10][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    int64_t *l_631 = (void*)0;
                    int32_t *l_632[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_632[i] = (void*)0;
                    atomic_and(&p_1323->g_atomic_reduction[get_linear_group_id()], (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((~((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0L, 0x7B81F6705BC0DA3BL)))).hi) > ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(18446744073709551615UL, 0UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_584.yyyy)))), ((p_19 || (*p_1323->g_478)) , (safe_sub_func_int32_t_s_s(((((((*l_575) &= (((((*p_1323->g_478) | (p_1323->g_64 = (((((l_587 != l_589[0][7]) > (((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_607.xyyxyxyxxyxyxyyx)).s6, (((safe_rshift_func_int8_t_s_s(((void*)0 != &p_1323->g_152), 1)) & ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1323->group_2_offset, get_group_id(2), 10), 4)) || ((((l_630 = (safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s(((*l_621) = ((safe_mod_func_uint8_t_u_u(((*p_1323->g_478) , 0x01L), l_620)) <= 0L)), p_19)), 0x50C32397E8E3D09EL))) == p_20) || p_1323->g_598[8][0].f0.f0) >= l_620)), 2)) , p_1323->g_603.f0.f1)) > 0x5AL))) , 0x61B78E7FL) || FAKE_DIVERGE(p_1323->local_0_offset, get_local_id(0), 10))) , l_48) , l_631) != &p_1323->g_232))) <= 0xA6B32AF807F48CACL) <= (*p_1323->g_573)) , l_577)) & 1UL) == l_576) | l_607.x) , p_20), p_19))), ((VECTOR(uint64_t, 8))(0x6D767EEACAC5E826L)), 0xEF1438E62F257DFAL)))).s2), l_48)), p_1323->g_390.x)));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1323->v_collective += p_1323->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    for (p_1323->g_591.f0.f2 = (-8); (p_1323->g_591.f0.f2 >= (-7)); p_1323->g_591.f0.f2++)
                    { /* block id: 264 */
                        int16_t l_637[4];
                        struct S0 **l_640 = &l_638;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_637[i] = (-1L);
                        (*p_1323->g_478) = (safe_div_func_int64_t_s_s(l_637[1], p_19));
                        if ((*p_1323->g_478))
                            continue;
                        (*l_640) = l_638;
                    }
                }
                (*p_1323->g_478) = ((++(**p_1323->g_572)) , (safe_sub_func_int8_t_s_s((((++(*l_61)) > (((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((l_651 != ((*l_654) = (void*)0)) ^ (~(0x5AL <= ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_656.ywywwyzwzywywzwx)).odd)).s5411142354161400, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_657.xy)), ((((+(((safe_mul_func_int16_t_s_s((((*l_660) = &p_1323->g_531) == (l_663 = &p_1323->g_531)), (safe_div_func_int16_t_s_s((p_20 > ((VECTOR(uint64_t, 4))(l_666.yxyy)).y), ((VECTOR(int16_t, 4))(l_667.s7350)).w)))) , p_19) , p_1323->g_590.f0.f1)) && ((((VECTOR(int16_t, 2))((-10L), 5L)).even , &p_1323->g_531) == (void*)0)) & l_560.s4) == l_584.y), ((VECTOR(int8_t, 2))(0x4BL)), ((VECTOR(int8_t, 2))(0x61L)), (-1L))).s0470374526515420))).s455f)).wyyyxwzxwzwyywxw)).odd, ((VECTOR(int8_t, 8))(1L)), ((VECTOR(int8_t, 8))(0x07L))))).s4306223067574700))).s1))), l_667.s1)), l_560.s4)) == p_20) <= (*p_1323->g_478))) | l_666.w), (-1L))));
                (*p_1323->g_478) = (((-1L) >= ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(0L, 0x2336D394L)).xxyyyxxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_668.s65)).yxyy)).wyzyxxww, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(l_669.s76)).yxxxxyxx, ((VECTOR(int32_t, 2))(p_1323->g_670.yx)).xyyyxyyy)))))).s4) & (safe_add_func_int64_t_s_s((((FAKE_DIVERGE(p_1323->group_1_offset, get_group_id(1), 10) >= l_576) > 3UL) && ((+p_18) == ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))((p_1323->g_232 = (p_19 = (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(1UL, 0xF6L, 0x42L, 0x0EL)))), l_675.sc, 1UL, 8UL, 0xC6L)).s60)))).yyyy)).w, 0xD9L)))), 0x5E47ACCCC8E2E2CCL, ((VECTOR(int64_t, 4))(p_1323->g_676.sb562)), 0x662910DFCA4F165AL, 0x6330BBB8DB766ECEL)).s0000560113114560)).sc)), ((VECTOR(int64_t, 4))(l_677.yxxx)).w)));
            }
            if ((atomic_inc(&p_1323->g_atomic_input[8 * get_linear_group_id() + 4]) == 2))
            { /* block id: 281 */
                int32_t l_678 = 0x770CC978L;
                for (l_678 = 0; (l_678 <= (-8)); l_678 = safe_sub_func_uint16_t_u_u(l_678, 7))
                { /* block id: 284 */
                    int16_t l_681 = 2L;
                    int8_t l_695 = 0x51L;
                    uint32_t l_696[4] = {0UL,0UL,0UL,0UL};
                    VECTOR(int32_t, 16) l_697 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x718BF984L), 0x718BF984L), 0x718BF984L, 1L, 0x718BF984L, (VECTOR(int32_t, 2))(1L, 0x718BF984L), (VECTOR(int32_t, 2))(1L, 0x718BF984L), 1L, 0x718BF984L, 1L, 0x718BF984L);
                    VECTOR(int32_t, 2) l_698 = (VECTOR(int32_t, 2))(0x1F9528C8L, 0x5E79ED78L);
                    VECTOR(int32_t, 4) l_699 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0L), 0L);
                    int32_t l_700 = 0x4C4AD47BL;
                    int64_t l_701 = 9L;
                    VECTOR(int32_t, 4) l_702 = (VECTOR(int32_t, 4))(0x200CA513L, (VECTOR(int32_t, 2))(0x200CA513L, (-1L)), (-1L));
                    int8_t l_703[2][6][6] = {{{1L,1L,0x1AL,1L,0x17L,1L},{1L,1L,0x1AL,1L,0x17L,1L},{1L,1L,0x1AL,1L,0x17L,1L},{1L,1L,0x1AL,1L,0x17L,1L},{1L,1L,0x1AL,1L,0x17L,1L},{1L,1L,0x1AL,1L,0x17L,1L}},{{1L,1L,0x1AL,1L,0x17L,1L},{1L,1L,0x1AL,1L,0x17L,1L},{1L,1L,0x1AL,1L,0x17L,1L},{1L,1L,0x1AL,1L,0x17L,1L},{1L,1L,0x1AL,1L,0x17L,1L},{1L,1L,0x1AL,1L,0x17L,1L}}};
                    int16_t l_704[10][6] = {{(-1L),3L,7L,0L,0x5766L,0x3CE3L},{(-1L),3L,7L,0L,0x5766L,0x3CE3L},{(-1L),3L,7L,0L,0x5766L,0x3CE3L},{(-1L),3L,7L,0L,0x5766L,0x3CE3L},{(-1L),3L,7L,0L,0x5766L,0x3CE3L},{(-1L),3L,7L,0L,0x5766L,0x3CE3L},{(-1L),3L,7L,0L,0x5766L,0x3CE3L},{(-1L),3L,7L,0L,0x5766L,0x3CE3L},{(-1L),3L,7L,0L,0x5766L,0x3CE3L},{(-1L),3L,7L,0L,0x5766L,0x3CE3L}};
                    VECTOR(int32_t, 2) l_705 = (VECTOR(int32_t, 2))(0L, 0x5306CB20L);
                    VECTOR(int32_t, 8) l_706 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
                    VECTOR(int8_t, 2) l_707 = (VECTOR(int8_t, 2))(0x45L, 7L);
                    VECTOR(uint8_t, 16) l_708 = (VECTOR(uint8_t, 16))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0xC5L), 0xC5L), 0xC5L, 250UL, 0xC5L, (VECTOR(uint8_t, 2))(250UL, 0xC5L), (VECTOR(uint8_t, 2))(250UL, 0xC5L), 250UL, 0xC5L, 250UL, 0xC5L);
                    VECTOR(int16_t, 16) l_709 = (VECTOR(int16_t, 16))(0x690DL, (VECTOR(int16_t, 4))(0x690DL, (VECTOR(int16_t, 2))(0x690DL, (-1L)), (-1L)), (-1L), 0x690DL, (-1L), (VECTOR(int16_t, 2))(0x690DL, (-1L)), (VECTOR(int16_t, 2))(0x690DL, (-1L)), 0x690DL, (-1L), 0x690DL, (-1L));
                    VECTOR(int16_t, 8) l_710 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 3L), 3L), 3L, 1L, 3L);
                    VECTOR(uint16_t, 16) l_711 = (VECTOR(uint16_t, 16))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0x94D6L), 0x94D6L), 0x94D6L, 3UL, 0x94D6L, (VECTOR(uint16_t, 2))(3UL, 0x94D6L), (VECTOR(uint16_t, 2))(3UL, 0x94D6L), 3UL, 0x94D6L, 3UL, 0x94D6L);
                    VECTOR(int32_t, 4) l_712 = (VECTOR(int32_t, 4))(0x2D6764A9L, (VECTOR(int32_t, 2))(0x2D6764A9L, 0x0F8EC734L), 0x0F8EC734L);
                    uint64_t l_713 = 0x00A5FDA47190A809L;
                    VECTOR(int32_t, 2) l_714 = (VECTOR(int32_t, 2))((-4L), 0x4949261DL);
                    VECTOR(int32_t, 8) l_715 = (VECTOR(int32_t, 8))(0x55D5EAB6L, (VECTOR(int32_t, 4))(0x55D5EAB6L, (VECTOR(int32_t, 2))(0x55D5EAB6L, 0x6B636128L), 0x6B636128L), 0x6B636128L, 0x55D5EAB6L, 0x6B636128L);
                    VECTOR(int32_t, 16) l_716 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x4F024B4BL), 0x4F024B4BL), 0x4F024B4BL, 4L, 0x4F024B4BL, (VECTOR(int32_t, 2))(4L, 0x4F024B4BL), (VECTOR(int32_t, 2))(4L, 0x4F024B4BL), 4L, 0x4F024B4BL, 4L, 0x4F024B4BL);
                    VECTOR(int32_t, 2) l_717 = (VECTOR(int32_t, 2))(0x637D365CL, 0x08743796L);
                    VECTOR(int32_t, 4) l_718 = (VECTOR(int32_t, 4))(0x631397C8L, (VECTOR(int32_t, 2))(0x631397C8L, (-5L)), (-5L));
                    uint8_t l_719[1][5];
                    uint64_t l_720 = 7UL;
                    VECTOR(int32_t, 2) l_721 = (VECTOR(int32_t, 2))((-1L), 0x0B76FAF5L);
                    VECTOR(int32_t, 8) l_722 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x21AD925BL), 0x21AD925BL), 0x21AD925BL, 2L, 0x21AD925BL);
                    uint64_t l_723 = 0x566BCB73F87AB7B5L;
                    int32_t l_724 = 0L;
                    VECTOR(int32_t, 8) l_725 = (VECTOR(int32_t, 8))(0x3E6C5240L, (VECTOR(int32_t, 4))(0x3E6C5240L, (VECTOR(int32_t, 2))(0x3E6C5240L, (-1L)), (-1L)), (-1L), 0x3E6C5240L, (-1L));
                    VECTOR(int32_t, 2) l_726 = (VECTOR(int32_t, 2))(0x547EEE66L, 0x389613A6L);
                    int32_t l_727[3];
                    VECTOR(int32_t, 8) l_728 = (VECTOR(int32_t, 8))(0x504FDF84L, (VECTOR(int32_t, 4))(0x504FDF84L, (VECTOR(int32_t, 2))(0x504FDF84L, (-3L)), (-3L)), (-3L), 0x504FDF84L, (-3L));
                    int32_t l_729 = 0x1DCFBD45L;
                    uint8_t l_730[7][2][10] = {{{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL},{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL}},{{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL},{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL}},{{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL},{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL}},{{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL},{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL}},{{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL},{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL}},{{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL},{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL}},{{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL},{0x9FL,0x51L,255UL,0UL,0x51L,0UL,255UL,0x51L,0x9FL,0x9FL}}};
                    int32_t l_731 = 0x7E2C9FA5L;
                    uint16_t l_732 = 65529UL;
                    int8_t l_733 = 1L;
                    uint64_t l_734 = 1UL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_719[i][j] = 0xAEL;
                    }
                    for (i = 0; i < 3; i++)
                        l_727[i] = 0x4AEDE021L;
                    if (((l_681 |= (-3L)) , 0x3E5C7954L))
                    { /* block id: 286 */
                        int32_t *l_682 = (void*)0;
                        int32_t *l_683[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_683[i] = (void*)0;
                        l_683[1] = l_682;
                    }
                    else
                    { /* block id: 288 */
                        int32_t l_684 = 1L;
                        int32_t l_685 = (-1L);
                        int8_t l_686 = (-6L);
                        int32_t l_687 = 0x0257A144L;
                        int32_t l_688 = 0x2346B4E5L;
                        uint64_t l_689 = 18446744073709551615UL;
                        uint32_t l_692 = 0x5D5984DAL;
                        --l_689;
                        l_692--;
                    }
                    l_696[3] ^= (l_695 , ((VECTOR(int32_t, 2))(0x05BD0341L, 9L)).hi);
                    l_734 |= ((((((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x6297089AL, 9L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_697.s1b)).yyyy, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_698.yx)), (-1L), 0x2F268152L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_699.wzyz)), 8L, (l_700 , l_701), 0x45A6DC8AL, 0L)).s6506134101362740, ((VECTOR(int32_t, 4))((l_703[1][1][2] &= (l_697.s3 &= ((VECTOR(int32_t, 4))(l_702.xzwy)).w)), l_704[5][1], 0x3E5516C6L, 0x0FAB552BL)).yyxzwwyzxzxxzwwx, ((VECTOR(int32_t, 2))((-2L), 0x2BA09427L)).xxxyxxxyxyxxyxyx))).sb1)), 0x35E3123FL, 0x2184E85AL)).s30)), 1L, 0x02E6F36DL)).yzyyyzwwywxwzwzw, ((VECTOR(int32_t, 2))(l_705.xy)).yxxyxxxyyxyyxyxy))).scbeb, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_706.s12)).xyyyyyyx)).s4157307465460137)).s74b3))))).even)), 0x5C519293L, 0x7CFC26BBL, 0x616E3FCEL, (-6L))).s15)))), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(l_707.yyyxxyyx)).even, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_708.s7a5b)).wwxwzyyz)).odd))).ywzxywzw, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(0x6B1CL, 0L)), ((VECTOR(int16_t, 4))(l_709.scd57)).even))), (-2L), (-1L), (-6L), 0x7159L, (-5L), 0x4F7BL)).s57, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_710.s53)).yyyy)).even))).yxyyyyxy, ((VECTOR(int16_t, 8))(0x1924L, 0L, 1L, 0x72FAL, (-1L), 0x3200L, 0x5B03L, 7L))))).s54, ((VECTOR(uint16_t, 16))(l_711.s172537d8a6c33a80)).s16)))))).odd, ((VECTOR(int32_t, 2))(l_712.zy)), (-1L))).zyyzywyw))).s4 , (l_713 , ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(l_714.xyyy)).zzzxxxyy, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(2L, 1L)).yxyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_715.s64477357)).s7115130203126061)).se8b9))).zwxxzyzz))).s37, (int32_t)((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_716.s21cde4106a139e82)).even)))).s02, ((VECTOR(int32_t, 4))(l_717.yxxx)).even))).lo))), (-6L), 3L)), ((VECTOR(int32_t, 2))(l_718.xy)), 0x7BE03FEBL, (-4L))).s4007015733125342)).s0, (l_720 = (l_718.y |= l_719[0][1])), 0x4FDB5843L, 8L))))), ((VECTOR(int32_t, 16))((l_723 = ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(l_721.xyxxxyyx)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_722.s7712546200430153)).sd4c1))))).x), (l_724 , ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(0x5C65FE13L, 0x654BA72BL, (-7L), ((VECTOR(int32_t, 8))(l_725.s76064361)), 0x04D09773L, 0x0B248EB3L, 0x0E5B6A8EL, 0x46BAA5FBL, 0L)).sc52c, ((VECTOR(int32_t, 2))(l_726.yy)).yxxx))), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(1L, 7L, l_727[1], l_728.s0, ((VECTOR(int32_t, 8))(0x564273D4L)), 9L, l_729, 0x6FDEB87DL, 0x5EAD606BL)).s4b, ((VECTOR(int32_t, 2))((-9L)))))).yyyxyxxy, ((VECTOR(int32_t, 8))(0x10346FADL))))).s20)), ((VECTOR(int32_t, 2))(0x5B0697C6L)), ((VECTOR(int32_t, 2))(0x45834861L))))), 0x400F9586L, ((VECTOR(int32_t, 2))(2L)), 0L, (-10L), 0x41AE4008L)).odd, (int32_t)0x3270C9F9L))), ((VECTOR(int32_t, 4))((-1L)))))).yzyyxzzwzxzxywwy, ((VECTOR(int32_t, 16))(0x445A1712L))))).s4), ((VECTOR(int32_t, 4))((-1L))), 0x70C0BE16L, 0x0E6759A6L, ((VECTOR(int32_t, 4))(0L)), 0x055BB105L, l_730[4][0][2], 0x4667EFD5L, 0x2210AFD5L)).s1a1c))).odd)).xxxyxxyx)).s6342711704652176)).s0)) , l_731) , l_732) , l_733);
                }
                unsigned int result = 0;
                result += l_678;
                atomic_add(&p_1323->g_special_values[8 * get_linear_group_id() + 4], result);
            }
            else
            { /* block id: 300 */
                (1 + 1);
            }
        }
        else
        { /* block id: 303 */
            int8_t l_745 = 0x5BL;
            int32_t **l_746[4][8] = {{(void*)0,(void*)0,&p_1323->g_478,&p_1323->g_478,&p_1323->g_478,&p_1323->g_478,&p_1323->g_478,(void*)0},{(void*)0,(void*)0,&p_1323->g_478,&p_1323->g_478,&p_1323->g_478,&p_1323->g_478,&p_1323->g_478,(void*)0},{(void*)0,(void*)0,&p_1323->g_478,&p_1323->g_478,&p_1323->g_478,&p_1323->g_478,&p_1323->g_478,(void*)0},{(void*)0,(void*)0,&p_1323->g_478,&p_1323->g_478,&p_1323->g_478,&p_1323->g_478,&p_1323->g_478,(void*)0}};
            int i, j;
            l_747 = func_44((safe_add_func_int32_t_s_s(((void*)0 == &p_1323->g_440), (safe_div_func_int16_t_s_s((0xF92B4BE29CB62C6EL < ((+(((1UL >= (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int64_t_s((0x1846L != (p_18 >= (((((VECTOR(uint8_t, 2))(l_742.yx)).odd || l_667.s3) <= ((VECTOR(uint16_t, 2))(p_1323->g_743.s45)).hi) || (((*p_1323->g_478) != ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(l_744.s90)).yyxxxyyy, ((VECTOR(int32_t, 4))((*p_1323->g_478), ((VECTOR(int32_t, 2))(0x4B4FAA80L)), (-1L))).yzywyzyw, ((VECTOR(int32_t, 8))(0x29C1BD47L))))).s4) < p_19)))))), p_1323->g_604.f0.f0))) >= FAKE_DIVERGE(p_1323->group_2_offset, get_group_id(2), 10)) , (*p_1323->g_478))) && l_48)), p_18)))), l_745, p_1323->g_639[2][2].f2, p_1323);
            l_748++;
            if ((atomic_inc(&p_1323->l_atomic_input[7]) == 2))
            { /* block id: 307 */
                int32_t l_751[4] = {0x195673A0L,0x195673A0L,0x195673A0L,0x195673A0L};
                int i;
                for (l_751[0] = 0; (l_751[0] <= 19); l_751[0] = safe_add_func_uint8_t_u_u(l_751[0], 4))
                { /* block id: 310 */
                    VECTOR(uint16_t, 16) l_754 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x7BFDL), 0x7BFDL), 0x7BFDL, 65535UL, 0x7BFDL, (VECTOR(uint16_t, 2))(65535UL, 0x7BFDL), (VECTOR(uint16_t, 2))(65535UL, 0x7BFDL), 65535UL, 0x7BFDL, 65535UL, 0x7BFDL);
                    VECTOR(uint16_t, 8) l_755 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xE4A8L), 0xE4A8L), 0xE4A8L, 0UL, 0xE4A8L);
                    VECTOR(int32_t, 8) l_756 = (VECTOR(int32_t, 8))(0x321FF925L, (VECTOR(int32_t, 4))(0x321FF925L, (VECTOR(int32_t, 2))(0x321FF925L, 1L), 1L), 1L, 0x321FF925L, 1L);
                    uint32_t l_757 = 0xA6327228L;
                    uint64_t l_758[4][3] = {{0xEE7C8750CD5C1501L,0xEE7C8750CD5C1501L,0xEE7C8750CD5C1501L},{0xEE7C8750CD5C1501L,0xEE7C8750CD5C1501L,0xEE7C8750CD5C1501L},{0xEE7C8750CD5C1501L,0xEE7C8750CD5C1501L,0xEE7C8750CD5C1501L},{0xEE7C8750CD5C1501L,0xEE7C8750CD5C1501L,0xEE7C8750CD5C1501L}};
                    int i, j;
                    l_758[1][2] |= (l_757 = (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x0671L, (-1L))).yxxx)).xzyyxyzx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 2))(l_754.sd7)).yxxxxxxy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(0x3356L, ((VECTOR(uint16_t, 2))(l_755.s57)), 8UL)))).wxxyyxwy))).s07)).yxyyyxxx))).s65)).hi , ((VECTOR(int32_t, 2))(l_756.s27)).even));
                    for (l_758[1][2] = (-17); (l_758[1][2] <= 14); l_758[1][2] = safe_add_func_uint16_t_u_u(l_758[1][2], 1))
                    { /* block id: 315 */
                        uint64_t l_761 = 0xD92682151AABC609L;
                        l_756.s4 &= l_761;
                    }
                }
                unsigned int result = 0;
                int l_751_i0;
                for (l_751_i0 = 0; l_751_i0 < 4; l_751_i0++) {
                    result += l_751[l_751_i0];
                }
                atomic_add(&p_1323->l_special_values[7], result);
            }
            else
            { /* block id: 319 */
                (1 + 1);
            }
        }
        for (p_1323->g_152 = 0; (p_1323->g_152 <= 23); p_1323->g_152++)
        { /* block id: 325 */
            uint32_t l_771 = 0UL;
            uint8_t *l_772[8] = {&p_1323->g_536,&p_1323->g_536,&p_1323->g_536,&p_1323->g_536,&p_1323->g_536,&p_1323->g_536,&p_1323->g_536,&p_1323->g_536};
            int32_t l_773 = (-1L);
            uint32_t l_784 = 0x46B35A02L;
            int32_t *l_832 = &p_1323->g_64;
            int32_t *l_833 = (void*)0;
            int32_t *l_834 = &l_773;
            int32_t *l_835 = &l_576;
            int32_t *l_836 = &l_574;
            int32_t *l_837 = &p_1323->g_80[0];
            int32_t *l_838 = &l_576;
            int32_t *l_839 = (void*)0;
            int32_t *l_840 = (void*)0;
            int32_t *l_841[6] = {&p_1323->g_64,(void*)0,&p_1323->g_64,&p_1323->g_64,(void*)0,&p_1323->g_64};
            uint16_t l_842[3][4] = {{0xB353L,1UL,0xB353L,0xB353L},{0xB353L,1UL,0xB353L,0xB353L},{0xB353L,1UL,0xB353L,0xB353L}};
            int i, j;
            if ((((p_1323->g_764 != l_766) , (!(p_1323->g_123.y = 8L))) , (p_18 | (safe_div_func_int8_t_s_s(((void*)0 == &p_20), (p_20 , (l_773 = (safe_lshift_func_uint16_t_u_s(((l_771 && p_20) & GROUP_DIVERGE(2, 1)), 6)))))))))
            { /* block id: 328 */
                int32_t *l_785 = &p_1323->g_604.f0.f2;
                uint32_t l_796 = 0UL;
                volatile struct S0 **l_799[1];
                uint16_t *l_802[3][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_807 = 0x57D47944L;
                int32_t *l_815 = (void*)0;
                int32_t **l_814 = &l_815;
                int32_t ***l_816 = &l_814;
                uint32_t *l_825 = &p_1323->g_826;
                int16_t **l_828 = &l_652;
                int32_t *l_829 = &l_773;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_799[i] = &p_1323->g_797;
                (*l_747) = (~(safe_mul_func_uint16_t_u_u(((+((safe_lshift_func_uint8_t_u_u(l_771, (l_677.y | p_19))) ^ ((**p_1323->g_572) = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_1323->g_300.z, 3)), (*l_747)))))) < (safe_div_func_uint8_t_u_u(l_784, (((*l_60) = GROUP_DIVERGE(2, 1)) | ((l_785 == (((safe_lshift_func_int16_t_s_s((((VECTOR(uint16_t, 16))(l_788.xwxwwwzzzyyyxwzw)).s5 <= (safe_mod_func_int16_t_s_s((((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_1323->g_791.sac37f736)).s6447243243033575)).even, ((VECTOR(int32_t, 16))(p_1323->g_792.zxxywyyxyzzxxzwz)).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(8L, 0x595B3777L)))), p_20, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((((((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(0UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(l_795.s41197255afb7796d)).s5e, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(0x71L, (((65535UL || p_1323->g_291) == (*p_1323->g_478)) < 0x63A42C34L), 1L, 0L)).lo))).yyxy, ((VECTOR(int8_t, 4))(0L))))), ((VECTOR(uint8_t, 4))(255UL))))).x, ((VECTOR(uint16_t, 2))(7UL)), ((VECTOR(uint16_t, 2))(0xAD06L)), 65532UL, ((VECTOR(uint16_t, 4))(0x1D9EL)), ((VECTOR(uint16_t, 2))(0x7172L)), l_668.s0, ((VECTOR(uint16_t, 2))(0xAFDAL)), 0UL)).s1e45)).hi, ((VECTOR(uint16_t, 2))(0xE349L)))))))), ((VECTOR(uint16_t, 2))(0x54E0L))))).xyxy)), 0x4CA9L, 1UL, 1UL)).s7, 2)) , FAKE_DIVERGE(p_1323->group_0_offset, get_group_id(0), 10)) != 0x36B4L) | (*p_1323->g_478)) != l_784), 0L, ((VECTOR(int32_t, 8))(0x0B83F56CL)), 0x1D1154FEL, ((VECTOR(int32_t, 4))((-10L))), 3L)).odd)).s62, ((VECTOR(int32_t, 2))(0x4B53D292L))))), 0x273E71D8L, 0x636FD3ADL, (-6L)))))), ((VECTOR(int32_t, 8))(0x2DAB92D4L))))).s31, ((VECTOR(int32_t, 2))(0x28603730L))))), 2L, 6L)))).y < l_796) | l_773) , l_576), 2L))), 0)) || l_771) , (*l_766))) == p_1323->g_592.f0.f2))))), 65535UL)));
                p_1323->g_797 = p_1323->g_797;
                (*l_747) |= (~(safe_lshift_func_uint16_t_u_u((p_1323->g_743.s1 = FAKE_DIVERGE(p_1323->local_1_offset, get_local_id(1), 10)), 9)));
                l_829 = func_44(((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((--p_1323->g_808), ((+(safe_add_func_int64_t_s_s(((((VECTOR(uint32_t, 8))(p_18, ((p_19 && ((VECTOR(int32_t, 2))(p_1323->g_813.s7c)).hi) , ((*l_825) = (((*l_816) = l_814) != ((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(p_19, (safe_mod_func_int64_t_s_s((-4L), p_20)))) != (0x16L != (p_1323->g_447.f0 ^ p_20))), p_19)) , l_823[2])))), p_1323->g_588[0].f0.f2, p_19, 0x690E4982L, ((VECTOR(uint32_t, 2))(0x44E844E9L)), 0x4A229080L)).s7 , p_1323->g_827) != l_828), (*p_1323->g_573)))) < p_18))) != p_1323->g_300.w) , p_18), FAKE_DIVERGE(p_1323->global_1_offset, get_global_id(1), 10))) >= p_18), (*l_747), p_1323->g_249.f0.f3, p_1323);
            }
            else
            { /* block id: 339 */
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1323->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 24)), permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((*l_747), l_784)), 10))][(safe_mod_func_uint32_t_u_u(p_1323->tid, 24))]));
            }
            l_842[0][3]--;
            l_668.s6 = ((VECTOR(int32_t, 2))(p_1323->g_845.xw)).even;
        }
        (*l_852) = func_44(((*l_60) = (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_1323->g_848.zwzxxwzyyzwxyxzw)))).s0, 9))), ((*p_1323->g_765) = (((((VECTOR(int32_t, 2))(0x6DD3BCD9L, 0x657A8286L)).odd | ((VECTOR(int32_t, 16))(l_849.yyxxxxxyyxxxyyxy)).sd) && p_20) && ((l_850 = l_850) != (*l_651)))), (((*l_851) = (+(p_1323->g_24 |= (*l_747)))) == l_677.y), p_1323);
        l_849.x = (0x5D69L <= (((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(p_1323->g_853.sfbd6e580)).lo, (int16_t)(safe_add_func_uint8_t_u_u(((*l_856) = ((*l_851) |= p_19)), ((((safe_add_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(0x1171829EL, GROUP_DIVERGE(0, 1))) || ((safe_lshift_func_uint8_t_u_s((((l_766 != l_766) > ((safe_add_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u(((((l_61 = &p_1323->g_29) != (((((18446744073709551615UL ^ (((l_867 = (p_1323->g_869 = l_867)) == (l_871 = l_871)) | 0x31DDL)) == GROUP_DIVERGE(0, 1)) >= l_656.w) , 0x8A533B02L) , &p_1323->g_29)) < p_19) , (**l_852)), (**l_852))) , l_677.y), 1L)) && p_20)) , l_656.w), 4)) | 0xF20A51C4L)), 1L)) , (-7L)) ^ 0x6AD6L) , 0x7EL)))))).z != 0x4C7DL));
    }
    else
    { /* block id: 360 */
        uint32_t l_880 = 0x51D9FD89L;
        union U1 *l_955 = &p_1323->g_956;
        union U1 **l_954 = &l_955;
        int32_t l_967 = 0x771D5B83L;
        int32_t l_968 = 0x4939515DL;
        int32_t l_969 = (-1L);
        int32_t l_970 = 1L;
        int32_t l_971[2];
        int16_t *l_1043 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_971[i] = 0x56A04E1FL;
        for (p_19 = (-20); (p_19 >= (-8)); ++p_19)
        { /* block id: 363 */
            VECTOR(uint8_t, 16) l_882 = (VECTOR(uint8_t, 16))(0x73L, (VECTOR(uint8_t, 4))(0x73L, (VECTOR(uint8_t, 2))(0x73L, 251UL), 251UL), 251UL, 0x73L, 251UL, (VECTOR(uint8_t, 2))(0x73L, 251UL), (VECTOR(uint8_t, 2))(0x73L, 251UL), 0x73L, 251UL, 0x73L, 251UL);
            int32_t l_893[9][1][7] = {{{0x34C31865L,1L,0x34C31865L,0x34C31865L,1L,0x34C31865L,0x34C31865L}},{{0x34C31865L,1L,0x34C31865L,0x34C31865L,1L,0x34C31865L,0x34C31865L}},{{0x34C31865L,1L,0x34C31865L,0x34C31865L,1L,0x34C31865L,0x34C31865L}},{{0x34C31865L,1L,0x34C31865L,0x34C31865L,1L,0x34C31865L,0x34C31865L}},{{0x34C31865L,1L,0x34C31865L,0x34C31865L,1L,0x34C31865L,0x34C31865L}},{{0x34C31865L,1L,0x34C31865L,0x34C31865L,1L,0x34C31865L,0x34C31865L}},{{0x34C31865L,1L,0x34C31865L,0x34C31865L,1L,0x34C31865L,0x34C31865L}},{{0x34C31865L,1L,0x34C31865L,0x34C31865L,1L,0x34C31865L,0x34C31865L}},{{0x34C31865L,1L,0x34C31865L,0x34C31865L,1L,0x34C31865L,0x34C31865L}}};
            int64_t **l_920 = (void*)0;
            struct S0 *l_949 = &p_1323->g_950[2];
            int32_t l_973 = 0L;
            uint32_t l_974 = 0xA35F47DFL;
            uint32_t l_977 = 0x577FDA48L;
            VECTOR(int64_t, 16) l_1009 = (VECTOR(int64_t, 16))(0x265B2035B32F5FCCL, (VECTOR(int64_t, 4))(0x265B2035B32F5FCCL, (VECTOR(int64_t, 2))(0x265B2035B32F5FCCL, 0x0FDCCE9792225E33L), 0x0FDCCE9792225E33L), 0x0FDCCE9792225E33L, 0x265B2035B32F5FCCL, 0x0FDCCE9792225E33L, (VECTOR(int64_t, 2))(0x265B2035B32F5FCCL, 0x0FDCCE9792225E33L), (VECTOR(int64_t, 2))(0x265B2035B32F5FCCL, 0x0FDCCE9792225E33L), 0x265B2035B32F5FCCL, 0x0FDCCE9792225E33L, 0x265B2035B32F5FCCL, 0x0FDCCE9792225E33L);
            int16_t l_1045 = (-2L);
            int i, j, k;
            for (p_1323->g_826 = 0; (p_1323->g_826 <= 44); ++p_1323->g_826)
            { /* block id: 366 */
                uint8_t l_881 = 0x88L;
                VECTOR(int32_t, 4) l_883 = (VECTOR(int32_t, 4))(0x69657105L, (VECTOR(int32_t, 2))(0x69657105L, 1L), 1L);
                int32_t **l_884 = &p_1323->g_478;
                int32_t *l_919 = &p_1323->g_130;
                int32_t *l_927 = &l_576;
                int32_t **l_926 = &l_927;
                int i;
                (*p_1323->g_478) = (safe_div_func_int64_t_s_s((safe_div_func_int64_t_s_s(0x2147DB843E4606A5L, l_880)), (l_881 | ((VECTOR(uint8_t, 8))(l_882.s52e93768)).s6)));
                (*l_884) = func_44(((*l_60) ^= (p_20 | l_882.s9)), ((**p_1323->g_764) = ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_883.wyww)).yyyzxxzzwwzzywzx)).s41de))).x), p_1323->g_299.s6, p_1323);
                for (l_48 = 0; (l_48 == 3); l_48 = safe_add_func_uint32_t_u_u(l_48, 1))
                { /* block id: 373 */
                    uint16_t *l_891 = &p_1323->g_152;
                    int8_t *l_892[7] = {&p_1323->g_591.f0.f1,&p_1323->g_599[1].f0.f1,&p_1323->g_591.f0.f1,&p_1323->g_591.f0.f1,&p_1323->g_599[1].f0.f1,&p_1323->g_591.f0.f1,&p_1323->g_591.f0.f1};
                    VECTOR(uint32_t, 2) l_898 = (VECTOR(uint32_t, 2))(0x8555E171L, 1UL);
                    int32_t *l_905 = &l_893[8][0][3];
                    int32_t *l_906 = (void*)0;
                    int32_t *l_907 = (void*)0;
                    int32_t *l_908 = &p_1323->g_64;
                    int32_t *l_909 = (void*)0;
                    int32_t *l_910 = &l_576;
                    int32_t *l_911 = &p_1323->g_80[7];
                    int32_t *l_912 = (void*)0;
                    int32_t *l_913 = (void*)0;
                    int32_t *l_914 = &p_1323->g_80[0];
                    int32_t *l_915[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_915[i] = (void*)0;
                    p_1323->g_478 = func_44(p_1323->g_601.f0.f0, (safe_sub_func_int16_t_s_s(1L, ((l_893[5][0][2] ^= (safe_mod_func_uint16_t_u_u(((*l_891) ^= (0UL > (p_20 > ((*p_1323->g_478) & 0UL)))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xF780L, 6UL)), 0UL, 1UL)).z))) ^ 0x02L))), (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_898.xx)), 0x462F2BAEL, (safe_div_func_int8_t_s_s(1L, (safe_add_func_int8_t_s_s(p_19, p_1323->g_27.s8)))), ((VECTOR(uint32_t, 2))(4294967288UL)), 4294967295UL, p_1323->g_249.f0.f0, 0xFD594A2DL, 4294967295UL, FAKE_DIVERGE(p_1323->local_2_offset, get_local_id(2), 10), ((VECTOR(uint32_t, 2))(0x548362E2L)), ((VECTOR(uint32_t, 2))(0xD13B7E21L)), 0x86F7DAB7L)).s7b)).even , (**l_884)), 65530UL)), p_1323->g_588[0].f0.f3)), p_1323);
                    (**l_884) = (safe_sub_func_uint16_t_u_u(FAKE_DIVERGE(p_1323->group_0_offset, get_group_id(0), 10), 1L));
                    ++l_916;
                }
                (*l_926) = ((*l_884) = func_44(p_1323->g_90.y, (l_919 == (void*)0), (((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((l_920 = &l_155[8][4]) != &l_155[5][0]), (*p_1323->g_478), 0x64ADA42BL, 0x597514ACL)).yxxwwwwwzzzxxyyz, ((VECTOR(int32_t, 2))(p_1323->g_921.s13)).yyxxyyyyxyyyxxxy, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x409DE493L, (-1L))).yyyyxxxxyyxxxxyy)))).s89)).yxxxxyyyxxxxxyyy)).sec, (int32_t)(safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL)).hi, (safe_lshift_func_int16_t_s_u(0x62D3L, 2))))))).xyxxyxyxyyyyxyyy))).lo))), (int32_t)(p_18 != p_20)))).odd, ((VECTOR(int32_t, 4))(0x1A4AE6ACL))))).x , 1UL), p_1323));
            }
            if ((p_18 <= ((*l_61) = l_882.sc)))
            { /* block id: 385 */
                uint32_t l_951 = 5UL;
                int8_t *l_957 = &p_1323->g_599[1].f0.f1;
                if (((((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((0x5A588236L > ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))((((*l_957) |= (p_19 == (safe_mod_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((((((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_944.xx)))), ((VECTOR(uint64_t, 16))((safe_sub_func_int8_t_s_s((((((((-9L) <= p_1323->g_390.w) | (((((((((l_947 = l_947) == l_949) , (p_18 != l_951)) || p_20) <= p_1323->g_604.f0.f0) <= 18446744073709551615UL) , 65531UL) <= (-7L)) == l_882.s9)) , p_19) && p_20) ^ l_893[0][0][6]) , l_951), 0UL)), ((VECTOR(uint64_t, 4))(0xB6A6A6FAB20C5DC8L)), ((VECTOR(uint64_t, 4))(0xDA270ED660E3FD0AL)), ((VECTOR(uint64_t, 4))(0xC36C424B7D28D509L)), 0x2CCF884AF2F63C37L, 1UL, 0x3E1B4549C9DC62B5L)).sf3))).odd , p_1323->g_952[0]) == l_954) , l_880) >= GROUP_DIVERGE(0, 1)), l_880)) <= p_1323->g_598[8][0].f0.f2), p_1323->g_848.x)), 0x65E1L)) <= l_951) < p_1323->g_447.f0), GROUP_DIVERGE(0, 1))))) , 0x200E52FDBF58FA35L), ((VECTOR(int64_t, 4))(2L)), 0x7DB65A099AA222ADL, ((VECTOR(int64_t, 2))(0x5BD031514E428537L)), ((VECTOR(int64_t, 2))((-4L))), p_20, ((VECTOR(int64_t, 4))(0L)), 0x655E6C93A03DBBF0L)))), ((VECTOR(int64_t, 16))(9L))))).s3, 1UL)) , 0UL)), 0x4CCBFB65056233DEL)) , l_893[5][0][2]), 13)) > 0x72L) , (*p_1323->g_765)) , p_20))
                { /* block id: 388 */
                    for (p_1323->g_604.f0.f1 = (-27); (p_1323->g_604.f0.f1 < (-10)); p_1323->g_604.f0.f1 = safe_add_func_int16_t_s_s(p_1323->g_604.f0.f1, 9))
                    { /* block id: 391 */
                        (*p_1323->g_478) ^= p_18;
                        (*p_1323->g_478) |= p_19;
                    }
                }
                else
                { /* block id: 395 */
                    if (l_951)
                        break;
                    p_1323->g_845.x |= (*p_1323->g_478);
                }
            }
            else
            { /* block id: 399 */
                int32_t *l_960 = (void*)0;
                int32_t *l_961 = (void*)0;
                int32_t *l_962 = (void*)0;
                int32_t *l_963 = (void*)0;
                int32_t *l_964 = &p_1323->g_64;
                int32_t *l_965 = &p_1323->g_80[0];
                int32_t *l_966[8][6] = {{&l_893[3][0][0],(void*)0,(void*)0,&l_576,(void*)0,(void*)0},{&l_893[3][0][0],(void*)0,(void*)0,&l_576,(void*)0,(void*)0},{&l_893[3][0][0],(void*)0,(void*)0,&l_576,(void*)0,(void*)0},{&l_893[3][0][0],(void*)0,(void*)0,&l_576,(void*)0,(void*)0},{&l_893[3][0][0],(void*)0,(void*)0,&l_576,(void*)0,(void*)0},{&l_893[3][0][0],(void*)0,(void*)0,&l_576,(void*)0,(void*)0},{&l_893[3][0][0],(void*)0,(void*)0,&l_576,(void*)0,(void*)0},{&l_893[3][0][0],(void*)0,(void*)0,&l_576,(void*)0,(void*)0}};
                int i, j;
                l_974++;
                p_1323->g_670.z = ((*l_965) = l_977);
                if ((*p_1323->g_478))
                    break;
            }
            for (p_1323->g_808 = (-9); (p_1323->g_808 >= 1); p_1323->g_808 = safe_add_func_uint16_t_u_u(p_1323->g_808, 1))
            { /* block id: 407 */
                int8_t l_1014 = 0x17L;
                VECTOR(int16_t, 4) l_1022 = (VECTOR(int16_t, 4))(0x2F0EL, (VECTOR(int16_t, 2))(0x2F0EL, 5L), 5L);
                int32_t l_1050 = 0x4237DECFL;
                uint8_t l_1052 = 0xC5L;
                int i;
                for (p_1323->g_440 = (-18); (p_1323->g_440 <= 7); p_1323->g_440 = safe_add_func_int16_t_s_s(p_1323->g_440, 7))
                { /* block id: 410 */
                    uint8_t l_984 = 2UL;
                    VECTOR(uint64_t, 16) l_1025 = (VECTOR(uint64_t, 16))(0xBD3009FE6A601643L, (VECTOR(uint64_t, 4))(0xBD3009FE6A601643L, (VECTOR(uint64_t, 2))(0xBD3009FE6A601643L, 7UL), 7UL), 7UL, 0xBD3009FE6A601643L, 7UL, (VECTOR(uint64_t, 2))(0xBD3009FE6A601643L, 7UL), (VECTOR(uint64_t, 2))(0xBD3009FE6A601643L, 7UL), 0xBD3009FE6A601643L, 7UL, 0xBD3009FE6A601643L, 7UL);
                    VECTOR(int8_t, 2) l_1038 = (VECTOR(int8_t, 2))(1L, (-1L));
                    int i;
                    if ((l_971[1] = (p_1323->g_950[2].f0 < (safe_lshift_func_uint16_t_u_s(l_984, 5)))))
                    { /* block id: 412 */
                        uint8_t *l_1001[1];
                        uint64_t l_1015 = 0xECB3A1BEFE054B4EL;
                        int8_t *l_1017 = &p_1323->g_597.f0.f1;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1001[i] = &p_1323->g_536;
                        (*p_1323->g_478) = (((((((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u(((((safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s((p_1323->g_950[2].f0 & 0xFDECL), 0xFB5E3452B9F19C4CL)), (*p_1323->g_573))) < (safe_mul_func_uint8_t_u_u((p_1323->g_249.f0.f3 && (safe_lshift_func_int16_t_s_s((((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 4))((p_1323->g_499.z == (p_18 | (p_1323->g_24 = (safe_mul_func_int16_t_s_s((p_18 != p_18), 65535UL))))), 1L, 8L, 0x2252L)).zxxzwzzwxxyxzxzy, ((VECTOR(int16_t, 16))(0x15EBL)), ((VECTOR(int16_t, 16))(0x08C0L))))).s3 < l_48), 2))), p_20))) , (void*)0) != &p_1323->g_826), p_20)) == 0xD4440524C9AB386AL), 4)), p_18)) || (*p_1323->g_573)) & p_20) == p_1323->g_591.f0.f1) || 4294967295UL) ^ p_19) , 0x36CC6620L);
                        (*p_1323->g_478) |= ((--p_20) , (((VECTOR(uint32_t, 16))(l_1004.s7272751227656066)).s3 , (safe_div_func_int64_t_s_s(((((GROUP_DIVERGE(2, 1) == p_18) , ((~0x6A54E0F948F77F33L) >= (GROUP_DIVERGE(0, 1) || ((*l_1017) = (((safe_sub_func_int8_t_s_s(((&p_1323->g_826 == (void*)0) < ((VECTOR(int64_t, 8))(p_1323->g_948[1][0].f2, 0x05A26A79EABD0A54L, 6L, ((VECTOR(int64_t, 2))(l_1009.s6a)).hi, 0x3B640781B558AD2FL, (l_849.x = ((((!0x4B7B6873L) < (p_1323->g_948[1][0].f1 >= p_19)) & ((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((&l_949 != (void*)0), l_1014)), p_1323->g_950[2].f2)) | l_1015)) , l_968)), 0x17720636EB837A13L, 0x1550FCE2F5D821F9L)).s4), p_20)) | (*p_1323->g_573)) && p_1323->g_1016[3][2]))))) ^ 6UL) == 0x087F64C5L), l_677.y))));
                        if ((*p_1323->g_478))
                            continue;
                    }
                    else
                    { /* block id: 420 */
                        uint16_t l_1044 = 0UL;
                        int32_t **l_1046 = &p_1323->g_478;
                        int32_t *l_1047 = &l_973;
                        int32_t *l_1048 = &p_1323->g_64;
                        int32_t *l_1049 = &l_893[1][0][5];
                        int32_t *l_1051[1][1][2];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_1051[i][j][k] = &l_893[4][0][4];
                            }
                        }
                        (*l_1046) = func_44((p_19 != (+(safe_mul_func_uint8_t_u_u(p_18, ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_1022.yzww)).y, ((safe_mod_func_int64_t_s_s((((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_1025.sf3948cf263f87694)))).s3 | (((safe_rshift_func_int8_t_s_s((((!0xCC10FF9BL) > (safe_sub_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s((l_970 = (p_20 & ((VECTOR(uint64_t, 2))(0UL, 0xBCAA4B441ADA1C36L)).odd)), (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((p_19 ^ ((((safe_div_func_int32_t_s_s(((*p_1323->g_478) = (((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_1038.xxxx)).even)), ((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x14L, 254UL)))).yxyxyxxxyyyyxyxy, ((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 8))(p_18, (((*p_1323->g_478) > (safe_rshift_func_int8_t_s_s((65527UL != (l_850 != l_1043)), p_18))) , l_1044), 8UL, ((VECTOR(uint8_t, 2))(0x10L)), 8UL, 0x76L, 7UL)), ((VECTOR(uint8_t, 8))(0x41L))))).s3664374714072353))), ((VECTOR(uint8_t, 16))(0xB1L))))).sd3))).xyxxyxyyxxyyxyyx)).se52f)))), ((VECTOR(int16_t, 4))((-8L)))))).w < 0UL)), l_668.s1)) == p_1323->g_808) | l_1004.s4) | l_1022.w)), l_971[1])), 2UL)))) != 1L) >= 65534UL), 5UL))) && GROUP_DIVERGE(1, 1)), 4)) >= p_20) && p_1323->g_950[2].f3)) <= (-1L)) , l_970), l_1045)) && p_19))) || l_1004.s2))))), l_795.s5, p_1323->g_315.y, p_1323);
                        l_1052--;
                        (*p_1323->g_478) = (safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), ((((safe_sub_func_uint16_t_u_u(l_1038.y, p_18)) == l_1038.y) || 18446744073709551613UL) == ((safe_add_func_uint32_t_u_u(((((void*)0 == &p_1323->g_475) , (0x3FL == (safe_lshift_func_uint16_t_u_u(l_984, 15)))) & (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((p_1323->g_499.z == p_20), 2)), 0)), l_972))), p_1323->g_588[0].f0.f3)) ^ p_19))));
                    }
                }
            }
        }
        l_668.s6 ^= ((*p_1323->g_478) = 9L);
        (*p_1323->g_478) ^= l_1004.s1;
    }
    (*p_1323->g_478) = p_20;
    l_668.s2 = ((*p_1323->g_478) != (((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_1069.xy)).yxyx)).z & ((l_849.y ^= 8L) > ((*p_1323->g_764) != ((*l_1088) = ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))((l_795.s9 > (((*l_1079) = &p_1323->g_869) != ((*l_1085) = (((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((p_1323->g_948[1][0].f0 , p_20), (((l_795.se & ((p_18 ^= p_19) == l_668.s6)) == l_656.x) && l_677.y))), 0x97L)) & l_656.y) , (void*)0)))), (-1L), ((VECTOR(int8_t, 4))(0x08L)), 0x2FL, 0x27L)).s30, ((VECTOR(int8_t, 2))(0x34L))))).yxyy)).zzyxzywzxxwwzzzz)).s2a))).yyxxxxxyxxyyyxxx)).sc, 0)), p_19)), p_1323->g_598[8][0].f0.f2)) , (void*)0))))) == (*p_1323->g_573)) <= 255UL));
    for (p_19 = (-11); (p_19 == 3); p_19 = safe_add_func_uint64_t_u_u(p_19, 8))
    { /* block id: 443 */
        int32_t *l_1092 = (void*)0;
        int32_t *l_1093 = (void*)0;
        int32_t *l_1094[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int i, j;
        ++p_1323->g_1095;
    }
    return l_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_1323->g_64 p_1323->g_390 p_1323->g_249.f0.f1 p_1323->g_232 p_1323->g_152 p_1323->g_29 p_1323->g_249.f0.f2 p_1323->g_419 p_1323->g_423 p_1323->g_comm_values p_1323->g_440 p_1323->g_249.f0.f0 p_1323->g_249.f0.f3 p_1323->g_300 p_1323->g_231 p_1323->g_257 p_1323->g_315 p_1323->g_130 p_1323->g_80 p_1323->g_24 p_1323->g_123 p_1323->g_447.f2 p_1323->g_291 p_1323->g_536
 * writes: p_1323->g_64 p_1323->g_249.f0.f1 p_1323->g_80 p_1323->g_232 p_1323->g_152 p_1323->g_102 p_1323->g_29 p_1323->g_439 p_1323->g_440 p_1323->g_249.f0.f0 p_1323->g_315 p_1323->g_475 p_1323->g_24 p_1323->g_447.f1 p_1323->g_231 p_1323->g_478 p_1323->g_249.f0.f2 p_1323->g_447.f2 p_1323->g_536
 */
int32_t  func_36(uint32_t  p_37, int64_t * p_38, uint32_t  p_39, int8_t  p_40, int64_t  p_41, struct S2 * p_1323)
{ /* block id: 154 */
    VECTOR(int64_t, 4) l_377 = (VECTOR(int64_t, 4))(0x4D7036725D78AAD2L, (VECTOR(int64_t, 2))(0x4D7036725D78AAD2L, 0x0B4F459D92BC3175L), 0x0B4F459D92BC3175L);
    int32_t l_382 = (-2L);
    int32_t l_398[2][3] = {{0x462308A6L,0x462308A6L,0x462308A6L},{0x462308A6L,0x462308A6L,0x462308A6L}};
    int32_t l_401 = 0x48B39C47L;
    uint8_t *l_407 = (void*)0;
    int16_t *l_471 = (void*)0;
    int64_t l_477[1];
    int32_t l_487 = 0x3EE866C1L;
    uint32_t l_506 = 0xFF5A298DL;
    VECTOR(uint16_t, 16) l_523 = (VECTOR(uint16_t, 16))(0xF2FEL, (VECTOR(uint16_t, 4))(0xF2FEL, (VECTOR(uint16_t, 2))(0xF2FEL, 0UL), 0UL), 0UL, 0xF2FEL, 0UL, (VECTOR(uint16_t, 2))(0xF2FEL, 0UL), (VECTOR(uint16_t, 2))(0xF2FEL, 0UL), 0xF2FEL, 0UL, 0xF2FEL, 0UL);
    int32_t l_534 = 0x7B9204A3L;
    int32_t l_542 = 0x17460DC3L;
    uint32_t l_543 = 0xBB5E487DL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_477[i] = (-1L);
    if ((p_1323->g_64 |= p_37))
    { /* block id: 156 */
        int16_t l_374 = (-1L);
        int32_t *l_380 = &p_1323->g_291;
        uint16_t *l_381[2][7][4] = {{{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152},{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152},{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152},{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152},{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152},{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152},{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152}},{{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152},{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152},{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152},{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152},{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152},{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152},{&p_1323->g_152,&p_1323->g_152,&p_1323->g_152,&p_1323->g_152}}};
        VECTOR(uint8_t, 8) l_387 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x6DL), 0x6DL), 0x6DL, 1UL, 0x6DL);
        VECTOR(int64_t, 2) l_391 = (VECTOR(int64_t, 2))(0x2B88C7505A46B1A8L, (-8L));
        int8_t *l_392 = (void*)0;
        int8_t *l_393 = &p_1323->g_249.f0.f1;
        int8_t *l_394 = (void*)0;
        int8_t *l_395 = (void*)0;
        int8_t *l_396 = (void*)0;
        int8_t *l_397[1][2][2];
        int32_t *l_399[4];
        uint32_t l_400 = 0x11AC8016L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_397[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 4; i++)
            l_399[i] = &p_1323->g_64;
        l_401 = (l_400 &= (l_374 >= (l_398[1][1] = ((*l_393) |= ((((safe_add_func_uint8_t_u_u(((l_377.x || (0L != ((p_41 , (((safe_mul_func_uint8_t_u_u(l_374, ((((((l_382 = (l_380 != (void*)0)) || ((p_40 ^ (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_387.s6014)))).w, (safe_lshift_func_uint8_t_u_u(((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 8))(p_1323->g_390.yzzxyxxx)).s73, ((VECTOR(int64_t, 8))(l_391.yyyyyyxx)).s36))).xyyxyyxyyyxxyyyx)).s3 , (&p_1323->g_231 == p_38)) || 1L), 5)))), 11))) || l_374)) != l_391.y) > p_40) , (void*)0) == (void*)0))) | p_37) == 1L)) , l_377.x))) < l_377.x), p_37)) != FAKE_DIVERGE(p_1323->global_1_offset, get_global_id(1), 10)) && 0xEDL) <= 0x10L)))));
    }
    else
    { /* block id: 162 */
        int32_t *l_402 = &p_1323->g_80[0];
        (*l_402) = p_41;
    }
    for (p_1323->g_232 = 0; (p_1323->g_232 == (-23)); p_1323->g_232 = safe_sub_func_uint8_t_u_u(p_1323->g_232, 7))
    { /* block id: 167 */
        VECTOR(uint32_t, 8) l_430 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL), 4294967295UL, 1UL, 4294967295UL);
        int8_t *l_448 = &p_1323->g_447.f1;
        int32_t *l_453 = (void*)0;
        VECTOR(int16_t, 16) l_462 = (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), (-1L)), (-1L)), (-1L), (-8L), (-1L), (VECTOR(int16_t, 2))((-8L), (-1L)), (VECTOR(int16_t, 2))((-8L), (-1L)), (-8L), (-1L), (-8L), (-1L));
        int16_t *l_472 = (void*)0;
        int32_t l_486[8] = {0x1F57B001L,0x1F57B001L,0x1F57B001L,0x1F57B001L,0x1F57B001L,0x1F57B001L,0x1F57B001L,0x1F57B001L};
        uint32_t l_488 = 0xD01DB40FL;
        int32_t *l_539 = &l_401;
        int32_t *l_540 = &l_401;
        int32_t *l_541[9] = {&l_401,&p_1323->g_80[0],&l_401,&l_401,&p_1323->g_80[0],&l_401,&l_401,&p_1323->g_80[0],&l_401};
        int i;
        for (p_1323->g_152 = 0; (p_1323->g_152 <= 27); p_1323->g_152 = safe_add_func_int32_t_s_s(p_1323->g_152, 6))
        { /* block id: 170 */
            uint8_t **l_408 = &p_1323->g_102;
            uint8_t *l_409 = (void*)0;
            uint32_t *l_410 = &p_1323->g_29;
            uint16_t l_441 = 0xF3C2L;
            struct S0 *l_446 = &p_1323->g_447;
            VECTOR(int16_t, 2) l_461 = (VECTOR(int16_t, 2))(0x525FL, 0x713BL);
            VECTOR(int16_t, 16) l_463 = (VECTOR(int16_t, 16))(0x2BD5L, (VECTOR(int16_t, 4))(0x2BD5L, (VECTOR(int16_t, 2))(0x2BD5L, 1L), 1L), 1L, 0x2BD5L, 1L, (VECTOR(int16_t, 2))(0x2BD5L, 1L), (VECTOR(int16_t, 2))(0x2BD5L, 1L), 0x2BD5L, 1L, 0x2BD5L, 1L);
            int32_t *l_464 = (void*)0;
            int32_t *l_465 = &l_382;
            int16_t *l_473 = (void*)0;
            int64_t *l_474[3];
            uint8_t *l_476 = &p_1323->g_24;
            int i;
            for (i = 0; i < 3; i++)
                l_474[i] = &p_1323->g_475;
            if ((((p_1323->g_29 , (((l_409 = ((*l_408) = l_407)) != (((*l_410)--) , &p_1323->g_24)) != 65535UL)) && p_1323->g_249.f0.f2) , p_40))
            { /* block id: 174 */
                uint64_t *l_417 = &p_1323->g_249.f0.f0;
                uint64_t **l_416 = &l_417;
                uint16_t *l_450 = &l_441;
                int32_t l_451 = 1L;
                if ((safe_div_func_uint16_t_u_u(l_398[0][0], GROUP_DIVERGE(0, 1))))
                { /* block id: 175 */
                    int32_t *l_415 = &l_398[1][1];
                    uint64_t ***l_418 = &l_416;
                    uint16_t *l_437 = (void*)0;
                    uint16_t *l_438 = &p_1323->g_439;
                    int16_t *l_449[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_449[i] = (void*)0;
                    (*l_415) &= (+p_1323->g_249.f0.f1);
                    (*l_415) = ((((*l_418) = l_416) == p_1323->g_419) <= (safe_add_func_uint8_t_u_u((((((VECTOR(uint16_t, 16))(p_1323->g_423.sc4c8d017b6232c14)).s9 < (p_37 & (safe_div_func_int64_t_s_s((-1L), (safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(l_430.s5335)).w, (safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_40, 65535UL)), p_1323->g_comm_values[p_1323->tid])))), (safe_add_func_int16_t_s_s(((p_1323->g_440 |= ((*l_438) = (p_40 | ((((18446744073709551613UL && p_37) != p_39) || p_41) && 8L)))) > p_39), 0UL)))))))) | p_1323->g_249.f0.f1) & l_441), GROUP_DIVERGE(2, 1))));
                    l_451 ^= (((l_441 && 0x1397F182655AF020L) , ((FAKE_DIVERGE(p_1323->group_2_offset, get_group_id(2), 10) <= (safe_add_func_int16_t_s_s(7L, (p_1323->g_315.w = ((l_382 = 0xFAL) >= (p_39 | (safe_lshift_func_uint8_t_u_u((+((void*)0 != l_446)), (((**l_416) ^= ((void*)0 != l_448)) >= p_1323->g_423.sf))))))))) , (void*)0)) != l_450);
                }
                else
                { /* block id: 185 */
                    if ((atomic_inc(&p_1323->l_atomic_input[2]) == 2))
                    { /* block id: 187 */
                        uint32_t l_452[8][10][3] = {{{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL}},{{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL}},{{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL}},{{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL}},{{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL}},{{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL}},{{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL}},{{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL},{0x1AA4A55BL,4294967295UL,0x562B0E5FL}}};
                        int i, j, k;
                        l_452[6][1][2] &= (-10L);
                        unsigned int result = 0;
                        int l_452_i0, l_452_i1, l_452_i2;
                        for (l_452_i0 = 0; l_452_i0 < 8; l_452_i0++) {
                            for (l_452_i1 = 0; l_452_i1 < 10; l_452_i1++) {
                                for (l_452_i2 = 0; l_452_i2 < 3; l_452_i2++) {
                                    result += l_452[l_452_i0][l_452_i1][l_452_i2];
                                }
                            }
                        }
                        atomic_add(&p_1323->l_special_values[2], result);
                    }
                    else
                    { /* block id: 189 */
                        (1 + 1);
                    }
                }
            }
            else
            { /* block id: 193 */
                int32_t **l_454 = &l_453;
                (*l_454) = l_453;
            }
            for (p_1323->g_440 = (-26); (p_1323->g_440 == (-27)); --p_1323->g_440)
            { /* block id: 198 */
                if (p_1323->g_249.f0.f3)
                    break;
            }
            (*l_465) ^= (((&p_1323->g_130 != (void*)0) | (safe_div_func_uint32_t_u_u((GROUP_DIVERGE(0, 1) , (safe_sub_func_int32_t_s_s((p_1323->g_300.x || ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(l_461.yyxyxyyx)), ((VECTOR(int16_t, 8))(0L, p_1323->g_231, (-9L), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(l_462.s244d53a7)).s02, (int16_t)p_1323->g_257.y))), 0x7B27L, 0x7A22L, (-5L)))))).hi)).z), (p_1323->g_231 , 0x6B273040L)))), (((((VECTOR(int16_t, 8))(l_463.s1d20c5e9)).s3 >= (0x23C1L & 0x54E0L)) | GROUP_DIVERGE(0, 1)) && l_401)))) < p_1323->g_231);
            p_1323->g_478 = func_44(p_40, ((((*l_448) = (((((*l_476) = (((safe_lshift_func_int8_t_s_s((+((*l_465) < (((((l_465 != ((p_41 ^= (p_1323->g_475 = (safe_div_func_uint32_t_u_u((p_1323->g_315.x > (safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(0x64L, (l_471 == l_472), (-3L), ((void*)0 != l_473), (~((((*l_465) < 1L) > l_398[1][2]) > p_39)), 0x62L, ((VECTOR(int8_t, 2))(0x2DL)), (-4L), (-6L), ((VECTOR(int8_t, 2))(0x7AL)), ((VECTOR(int8_t, 2))(0x40L)), (-10L), 0x77L)).lo, ((VECTOR(uint8_t, 8))(251UL))))))).s7640737076501575))).s4))), 0x506483E3L)))) , (void*)0)) , p_41) < p_37) & p_1323->g_440) <= (*l_465)))), 0)) == 0x50L) | (*l_465))) , (-1L)) && 0x80E52C92BF3D018BL) && 0x01L)) == l_477[0]) >= p_1323->g_130), (*l_465), p_1323);
        }
        for (p_1323->g_24 = 0; (p_1323->g_24 >= 21); ++p_1323->g_24)
        { /* block id: 210 */
            int32_t *l_481 = (void*)0;
            int32_t *l_482 = &l_401;
            int32_t *l_483 = (void*)0;
            int32_t *l_484 = &p_1323->g_80[0];
            int32_t *l_485[2];
            int16_t *l_492 = (void*)0;
            uint64_t *l_530 = &p_1323->g_531;
            int16_t l_535 = (-1L);
            int i;
            for (i = 0; i < 2; i++)
                l_485[i] = (void*)0;
            l_488++;
            if (p_39)
            { /* block id: 212 */
                uint32_t l_491 = 4294967295UL;
                int16_t **l_493 = &l_472;
                int16_t *l_494 = (void*)0;
                int32_t *l_495 = (void*)0;
                int32_t *l_496 = &p_1323->g_249.f0.f2;
                int32_t l_504 = 6L;
                uint64_t *l_505 = (void*)0;
                l_453 = func_44((l_491 = FAKE_DIVERGE(p_1323->global_1_offset, get_global_id(1), 10)), ((*l_496) = (((*l_493) = l_492) != l_494)), (l_506 = (((p_41 == (p_39 == p_37)) ^ ((!((((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 16))(p_1323->g_499.yzxywyyxzxywyyyx)).lo, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1323->g_500.sfc0e)).ywwywzww)).s54)).xxxxxxyx, ((VECTOR(uint16_t, 4))(((-1L) || ((0x20BDL && (((l_382 , ((((((*l_448) |= (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(p_1323->g_501.zz)), (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x66F25AA9BEFB8429L, (-1L))).xyxyxxxxxxyxyxyx)).sf , ((safe_rshift_func_int8_t_s_u(l_477[0], p_41)) , 0xE00063A5CB010506L)), 0x6873A0449377ED88L, ((VECTOR(uint64_t, 8))(0xEB8E9C7C7BED70ADL)), ((VECTOR(uint64_t, 2))(0x539918ED021D886BL)), 0UL, 18446744073709551608UL)).sc3)).lo ^ 0x7F38987C07A33784L)) != p_1323->g_90.y) , l_504) ^ l_504) < GROUP_DIVERGE(1, 1))) < p_40) , 0x67FEL)) || p_1323->g_500.s5)), 0xF99CL, 65535UL, 7UL)).wxyxzwxz))).s3 || p_1323->g_123.x) != l_504)) != 0x2225L)) && p_1323->g_80[8])), p_1323);
            }
            else
            { /* block id: 219 */
                for (l_506 = (-27); (l_506 >= 34); l_506++)
                { /* block id: 222 */
                    if (p_41)
                        break;
                }
            }
            for (p_1323->g_447.f2 = 13; (p_1323->g_447.f2 > 3); p_1323->g_447.f2--)
            { /* block id: 228 */
                int64_t **l_511 = &p_1323->g_78;
                uint16_t *l_512 = &p_1323->g_152;
                int32_t *l_525 = &p_1323->g_249.f0.f2;
                int32_t **l_524 = &l_525;
                int32_t **l_532 = &l_482;
                int32_t *l_533 = &l_486[3];
                l_511 = &p_1323->g_78;
                l_533 = ((*l_532) = func_44(p_41, p_39, ((((*l_512)++) >= (safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((0x3083931E081DDCB1L || (*l_484)), (((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 2))(1UL, 0x33EEL)).xyyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_523.s15)), 5UL, 65535UL))))).xyxxzyyy)).s2 < (((((*l_524) = l_485[1]) != ((FAKE_DIVERGE(p_1323->group_2_offset, get_group_id(2), 10) >= 0xACL) , l_453)) && 0x3CA18768L) & ((safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((void*)0 == l_530), p_41)) & FAKE_DIVERGE(p_1323->global_1_offset, get_global_id(1), 10)), p_1323->g_291)) , p_1323->g_390.w))), FAKE_DIVERGE(p_1323->global_2_offset, get_global_id(2), 10))), 1)) || 0xC2A8B668376484A8L) || FAKE_DIVERGE(p_1323->global_0_offset, get_global_id(0), 10)))) , 0x7FF2L), 15))) > l_377.y), p_1323));
            }
            --p_1323->g_536;
        }
        l_543--;
    }
    return p_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_1323->g_80 p_1323->g_29 p_1323->g_257 p_1323->g_315 p_1323->l_comm_values
 * writes: p_1323->g_80 p_1323->g_29 p_1323->g_239 p_1323->g_291 p_1323->g_130
 */
uint8_t  func_42(uint32_t * p_43, struct S2 * p_1323)
{ /* block id: 94 */
    int32_t *l_279 = (void*)0;
    int32_t *l_280 = &p_1323->g_80[0];
    int32_t l_284 = 0x72593E8AL;
    int32_t l_285 = 0x7CE4B269L;
    int32_t l_286 = 0L;
    int32_t l_287 = 0x15F45498L;
    int32_t l_288 = (-2L);
    int32_t l_289 = 0x5CC4CEC0L;
    int32_t l_290[9][7];
    uint64_t l_292 = 0xE4C6C3B8124FF22BL;
    uint64_t *l_303 = &l_292;
    VECTOR(int8_t, 8) l_304 = (VECTOR(int8_t, 8))(0x28L, (VECTOR(int8_t, 4))(0x28L, (VECTOR(int8_t, 2))(0x28L, 0L), 0L), 0L, 0x28L, 0L);
    VECTOR(uint16_t, 4) l_313 = (VECTOR(uint16_t, 4))(0xC2AAL, (VECTOR(uint16_t, 2))(0xC2AAL, 1UL), 1UL);
    VECTOR(int16_t, 8) l_316 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x76BBL), 0x76BBL), 0x76BBL, (-1L), 0x76BBL);
    int32_t *l_325 = &l_287;
    int32_t *l_326 = (void*)0;
    int32_t *l_327 = &p_1323->g_64;
    int32_t *l_328 = &l_290[1][0];
    int32_t *l_329 = (void*)0;
    int32_t *l_330 = &p_1323->g_80[0];
    int32_t *l_331[4][3] = {{&l_285,&l_285,&l_285},{&l_285,&l_285,&l_285},{&l_285,&l_285,&l_285},{&l_285,&l_285,&l_285}};
    uint32_t l_332[5] = {0UL,0UL,0UL,0UL,0UL};
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
            l_290[i][j] = 0L;
    }
    (*l_280) |= 1L;
    for (p_1323->g_29 = 12; (p_1323->g_29 >= 56); p_1323->g_29++)
    { /* block id: 98 */
        int32_t *l_283[6][5] = {{&p_1323->g_64,&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_64},{&p_1323->g_64,&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_64},{&p_1323->g_64,&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_64},{&p_1323->g_64,&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_64},{&p_1323->g_64,&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_64},{&p_1323->g_64,&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_64}};
        int8_t l_319[2][5][4] = {{{1L,1L,(-5L),0L},{1L,1L,(-5L),0L},{1L,1L,(-5L),0L},{1L,1L,(-5L),0L},{1L,1L,(-5L),0L}},{{1L,1L,(-5L),0L},{1L,1L,(-5L),0L},{1L,1L,(-5L),0L},{1L,1L,(-5L),0L},{1L,1L,(-5L),0L}}};
        uint32_t l_320[5][4] = {{9UL,9UL,4294967295UL,1UL},{9UL,9UL,4294967295UL,1UL},{9UL,9UL,4294967295UL,1UL},{9UL,9UL,4294967295UL,1UL},{9UL,9UL,4294967295UL,1UL}};
        int64_t *l_324 = (void*)0;
        int i, j, k;
        ++l_292;
        if (p_1323->g_257.y)
            break;
        for (p_1323->g_239 = (-23); (p_1323->g_239 == 8); ++p_1323->g_239)
        { /* block id: 103 */
            uint64_t *l_301 = &l_292;
            uint64_t **l_302 = &l_301;
            VECTOR(uint16_t, 16) l_314 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 3UL), 3UL), 3UL, 0UL, 3UL, (VECTOR(uint16_t, 2))(0UL, 3UL), (VECTOR(uint16_t, 2))(0UL, 3UL), 0UL, 3UL, 0UL, 3UL);
            int32_t l_321 = 0x4E93F683L;
            int32_t *l_322 = &p_1323->g_291;
            int32_t *l_323 = &p_1323->g_130;
            int i;
            l_321 |= (safe_lshift_func_int8_t_s_u(((((VECTOR(int8_t, 8))(1L, ((VECTOR(int8_t, 2))(0x00L, (-1L))), ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(p_1323->g_299.s0261674157135702)).s4c, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(1L, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-8L), 0x2CL)), 0x12L, 0x3AL)))).lo, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(0x70L, 0x70L, ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_1323->g_300.yy)))), ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))((p_1323->g_239 != (p_1323->g_300.w >= (((*l_302) = l_301) == (l_303 = &p_1323->g_231)))), 0x6CL, 1L, 0x0EL)).hi, ((VECTOR(int8_t, 2))(l_304.s66))))).yxxxyxyxyyxyxyyx)).s5822)).zyzwxxyyywywxxwx))).scb))).xyxxxxxx, (int8_t)(safe_mul_func_uint16_t_u_u(p_1323->g_249.f0.f0, ((safe_mod_func_int32_t_s_s((safe_div_func_int64_t_s_s((!((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 8))(l_313.ywwzywyx)), ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(0xDAC4L, ((VECTOR(uint16_t, 2))(l_314.sc9)), 0x31ADL)).wywwwxzwxxywxwzw, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x3A64L, 0x5245L)).yxyxxyyy)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_1323->g_315.wy)).yyyxyyxxxxxyxyxx)))).lo, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_316.s1351)))))).even, (int16_t)p_1323->g_123.x))))), (0x03L & (~(GROUP_DIVERGE(1, 1) && (safe_add_func_int16_t_s_s(((void*)0 == l_283[4][1]), FAKE_DIVERGE(p_1323->local_2_offset, get_local_id(2), 10)))))), 0x5424L, (-7L), 5L, 0x2BDCL, 0L))))).s4132444714027523))).s56)).yyyxxxxyxxxyxxxy))).hi, ((VECTOR(uint16_t, 8))(0x569FL)), ((VECTOR(uint16_t, 8))(65526UL)))))))).s1, 0x0D3BL)) | l_314.s4)), l_319[1][4][1])), (*l_280))) && l_320[0][2]))), (int8_t)0x15L))).s2, 0x01L, 0L, ((VECTOR(int8_t, 2))((-5L))), 0x55L)).hi, ((VECTOR(int8_t, 4))((-2L)))))).odd))), ((VECTOR(int8_t, 4))((-1L))), (-2L))), 0x0AL, 0L, 1L, p_1323->g_249.f0.f3, 0x69L, ((VECTOR(int8_t, 2))(0x38L)), 0x0FL)).s78))), 0x10L, 0x7EL, 9L)).s4 <= 0xCAL) ^ 0x8279D544L), p_1323->g_315.z));
            (*l_280) = (((*l_323) = ((*l_322) = (*l_280))) , (l_324 == &p_1323->g_232));
        }
    }
    --l_332[3];
    for (l_289 = 0; (l_289 < 8); l_289++)
    { /* block id: 115 */
        if ((atomic_inc(&p_1323->l_atomic_input[1]) == 5))
        { /* block id: 117 */
            int32_t l_337 = 0L;
            VECTOR(uint32_t, 8) l_355 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xD1A6FD22L), 0xD1A6FD22L), 0xD1A6FD22L, 4294967295UL, 0xD1A6FD22L);
            VECTOR(int32_t, 2) l_356 = (VECTOR(int32_t, 2))(1L, 1L);
            VECTOR(uint32_t, 8) l_357 = (VECTOR(uint32_t, 8))(0x875336A7L, (VECTOR(uint32_t, 4))(0x875336A7L, (VECTOR(uint32_t, 2))(0x875336A7L, 4294967291UL), 4294967291UL), 4294967291UL, 0x875336A7L, 4294967291UL);
            VECTOR(int8_t, 2) l_358 = (VECTOR(int8_t, 2))(0L, 0x40L);
            int32_t l_359 = 1L;
            int8_t l_360[5] = {0x45L,0x45L,0x45L,0x45L,0x45L};
            int8_t l_361 = 0x23L;
            int i;
            for (l_337 = 0; (l_337 < 5); l_337++)
            { /* block id: 120 */
                struct S0 l_341 = {0x9D9A9554127F8BD2L,0x30L,0x00A990E0L,2UL,0L,0x28D0443A78B33DAAL,0x07D5L,-10L};/* VOLATILE GLOBAL l_341 */
                struct S0 l_342 = {18446744073709551611UL,1L,0x6A85871FL,0x35749F27L,0x7B01L,18446744073709551615UL,0xD768L,0L};/* VOLATILE GLOBAL l_342 */
                struct S0 *l_340[2][1][3] = {{{&l_341,&l_341,&l_341}},{{&l_341,&l_341,&l_341}}};
                struct S0 l_344 = {0x7CAC785509C73145L,0x28L,0x3E53C107L,0xF342E47CL,-3L,6UL,1UL,1L};/* VOLATILE GLOBAL l_344 */
                struct S0 *l_343 = &l_344;
                int32_t *l_354 = (void*)0;
                int i, j, k;
                l_343 = l_340[1][0][2];
                for (l_344.f0 = (-20); (l_344.f0 > 39); l_344.f0 = safe_add_func_uint64_t_u_u(l_344.f0, 1))
                { /* block id: 124 */
                    int32_t *l_347 = (void*)0;
                    int32_t l_349[10][8] = {{(-1L),0x71DB105FL,0x3D7ECBDBL,0x71DB105FL,(-1L),(-1L),0x71DB105FL,0x3D7ECBDBL},{(-1L),0x71DB105FL,0x3D7ECBDBL,0x71DB105FL,(-1L),(-1L),0x71DB105FL,0x3D7ECBDBL},{(-1L),0x71DB105FL,0x3D7ECBDBL,0x71DB105FL,(-1L),(-1L),0x71DB105FL,0x3D7ECBDBL},{(-1L),0x71DB105FL,0x3D7ECBDBL,0x71DB105FL,(-1L),(-1L),0x71DB105FL,0x3D7ECBDBL},{(-1L),0x71DB105FL,0x3D7ECBDBL,0x71DB105FL,(-1L),(-1L),0x71DB105FL,0x3D7ECBDBL},{(-1L),0x71DB105FL,0x3D7ECBDBL,0x71DB105FL,(-1L),(-1L),0x71DB105FL,0x3D7ECBDBL},{(-1L),0x71DB105FL,0x3D7ECBDBL,0x71DB105FL,(-1L),(-1L),0x71DB105FL,0x3D7ECBDBL},{(-1L),0x71DB105FL,0x3D7ECBDBL,0x71DB105FL,(-1L),(-1L),0x71DB105FL,0x3D7ECBDBL},{(-1L),0x71DB105FL,0x3D7ECBDBL,0x71DB105FL,(-1L),(-1L),0x71DB105FL,0x3D7ECBDBL},{(-1L),0x71DB105FL,0x3D7ECBDBL,0x71DB105FL,(-1L),(-1L),0x71DB105FL,0x3D7ECBDBL}};
                    int32_t *l_348 = &l_349[8][3];
                    int i, j;
                    l_348 = l_347;
                    for (l_349[8][3] = (-10); (l_349[8][3] > (-8)); l_349[8][3] = safe_add_func_int8_t_s_s(l_349[8][3], 6))
                    { /* block id: 128 */
                        int32_t l_352[3];
                        int32_t l_353[4][8][2] = {{{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L}},{{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L}},{{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L}},{{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L},{0x403485B1L,1L}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_352[i] = 0L;
                        l_353[2][5][1] |= l_352[1];
                    }
                }
                l_354 = (void*)0;
            }
            l_337 ^= (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 8))(2UL, ((VECTOR(uint32_t, 4))(l_355.s4073)), ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_356.xxyx)).xywxyyzw)).hi)))))), ((VECTOR(uint32_t, 2))(l_357.s42)).yxyy))).x, 7UL, 0x6EDEC5EBL)).s5236711702676754, (uint32_t)FAKE_DIVERGE(p_1323->local_1_offset, get_local_id(1), 10), (uint32_t)(((VECTOR(int8_t, 16))(l_358.yyxyxyyyyxxxyyyy)).s7 , 4294967293UL)))).even)).s5 , (l_359 , l_360[3]));
            if (l_361)
            { /* block id: 135 */
                int64_t l_362[2][5][10] = {{{(-1L),1L,9L,0x70A93C67A398E4B6L,0x6323452D26409F8CL,0x6F0F367BC02121A2L,0x3EC28690C78C4545L,(-3L),1L,0x6268097A9AF58B07L},{(-1L),1L,9L,0x70A93C67A398E4B6L,0x6323452D26409F8CL,0x6F0F367BC02121A2L,0x3EC28690C78C4545L,(-3L),1L,0x6268097A9AF58B07L},{(-1L),1L,9L,0x70A93C67A398E4B6L,0x6323452D26409F8CL,0x6F0F367BC02121A2L,0x3EC28690C78C4545L,(-3L),1L,0x6268097A9AF58B07L},{(-1L),1L,9L,0x70A93C67A398E4B6L,0x6323452D26409F8CL,0x6F0F367BC02121A2L,0x3EC28690C78C4545L,(-3L),1L,0x6268097A9AF58B07L},{(-1L),1L,9L,0x70A93C67A398E4B6L,0x6323452D26409F8CL,0x6F0F367BC02121A2L,0x3EC28690C78C4545L,(-3L),1L,0x6268097A9AF58B07L}},{{(-1L),1L,9L,0x70A93C67A398E4B6L,0x6323452D26409F8CL,0x6F0F367BC02121A2L,0x3EC28690C78C4545L,(-3L),1L,0x6268097A9AF58B07L},{(-1L),1L,9L,0x70A93C67A398E4B6L,0x6323452D26409F8CL,0x6F0F367BC02121A2L,0x3EC28690C78C4545L,(-3L),1L,0x6268097A9AF58B07L},{(-1L),1L,9L,0x70A93C67A398E4B6L,0x6323452D26409F8CL,0x6F0F367BC02121A2L,0x3EC28690C78C4545L,(-3L),1L,0x6268097A9AF58B07L},{(-1L),1L,9L,0x70A93C67A398E4B6L,0x6323452D26409F8CL,0x6F0F367BC02121A2L,0x3EC28690C78C4545L,(-3L),1L,0x6268097A9AF58B07L},{(-1L),1L,9L,0x70A93C67A398E4B6L,0x6323452D26409F8CL,0x6F0F367BC02121A2L,0x3EC28690C78C4545L,(-3L),1L,0x6268097A9AF58B07L}}};
                uint32_t l_363 = 0xCF42C213L;
                VECTOR(int32_t, 16) l_364 = (VECTOR(int32_t, 16))(0x77B8501DL, (VECTOR(int32_t, 4))(0x77B8501DL, (VECTOR(int32_t, 2))(0x77B8501DL, 0x23F37C98L), 0x23F37C98L), 0x23F37C98L, 0x77B8501DL, 0x23F37C98L, (VECTOR(int32_t, 2))(0x77B8501DL, 0x23F37C98L), (VECTOR(int32_t, 2))(0x77B8501DL, 0x23F37C98L), 0x77B8501DL, 0x23F37C98L, 0x77B8501DL, 0x23F37C98L);
                int8_t l_365[4][1][3] = {{{0x7EL,0x7EL,0x7EL}},{{0x7EL,0x7EL,0x7EL}},{{0x7EL,0x7EL,0x7EL}},{{0x7EL,0x7EL,0x7EL}}};
                int i, j, k;
                l_365[1][0][2] = (l_337 = (l_362[1][3][9] , ((VECTOR(int32_t, 8))(l_363, (-2L), ((VECTOR(int32_t, 4))(l_364.sa9fd)), 0x097BD759L, 0L)).s1));
            }
            else
            { /* block id: 138 */
                VECTOR(int32_t, 4) l_366 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x39A1B0D1L), 0x39A1B0D1L);
                VECTOR(int16_t, 4) l_367 = (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x7A46L), 0x7A46L);
                int32_t *l_368 = (void*)0;
                uint16_t l_369 = 7UL;
                int i;
                l_337 ^= ((VECTOR(int32_t, 2))(l_366.xw)).hi;
                l_366.x &= l_367.w;
                l_368 = l_368;
                l_337 |= l_369;
            }
            for (l_337 = 0; (l_337 == 14); l_337 = safe_add_func_int64_t_s_s(l_337, 4))
            { /* block id: 146 */
                uint64_t l_372 = 0x72570F44697506E1L;
                int8_t l_373 = 0x45L;
                l_373 = l_372;
            }
            unsigned int result = 0;
            result += l_337;
            result += l_355.s7;
            result += l_355.s6;
            result += l_355.s5;
            result += l_355.s4;
            result += l_355.s3;
            result += l_355.s2;
            result += l_355.s1;
            result += l_355.s0;
            result += l_356.y;
            result += l_356.x;
            result += l_357.s7;
            result += l_357.s6;
            result += l_357.s5;
            result += l_357.s4;
            result += l_357.s3;
            result += l_357.s2;
            result += l_357.s1;
            result += l_357.s0;
            result += l_358.y;
            result += l_358.x;
            result += l_359;
            int l_360_i0;
            for (l_360_i0 = 0; l_360_i0 < 5; l_360_i0++) {
                result += l_360[l_360_i0];
            }
            result += l_361;
            atomic_add(&p_1323->l_special_values[1], result);
        }
        else
        { /* block id: 149 */
            (1 + 1);
        }
    }
    return p_1323->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1323->tid, 24))];
}


/* ------------------------------------------ */
/* 
 * reads : p_1323->g_29 p_1323->g_257 p_1323->g_80 p_1323->g_249.f0.f3 p_1323->l_comm_values p_1323->g_64
 * writes: p_1323->g_80 p_1323->g_231 p_1323->g_64
 */
uint32_t * func_44(uint32_t  p_45, int32_t  p_46, uint64_t  p_47, struct S2 * p_1323)
{ /* block id: 87 */
    uint64_t l_256 = 1UL;
    VECTOR(int64_t, 16) l_258 = (VECTOR(int64_t, 16))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 0x157DA97F9D90B897L), 0x157DA97F9D90B897L), 0x157DA97F9D90B897L, (-3L), 0x157DA97F9D90B897L, (VECTOR(int64_t, 2))((-3L), 0x157DA97F9D90B897L), (VECTOR(int64_t, 2))((-3L), 0x157DA97F9D90B897L), (-3L), 0x157DA97F9D90B897L, (-3L), 0x157DA97F9D90B897L);
    int32_t *l_261 = &p_1323->g_80[1];
    union U1 **l_271 = (void*)0;
    VECTOR(int64_t, 8) l_272 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L);
    uint64_t *l_273 = (void*)0;
    uint64_t *l_274 = &l_256;
    VECTOR(int16_t, 4) l_275 = (VECTOR(int16_t, 4))(0x7760L, (VECTOR(int16_t, 2))(0x7760L, 1L), 1L);
    uint16_t l_276 = 0xDBA3L;
    int32_t ***l_277 = &p_1323->g_247;
    int32_t *l_278 = &p_1323->g_64;
    int i;
    (*l_261) &= ((p_1323->g_29 , (+(((safe_unary_minus_func_uint64_t_u((safe_mul_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_1323->local_1_offset, get_local_id(1), 10), l_256)), p_46)))) >= (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(0x28728338B1BC0AB8L, ((VECTOR(int64_t, 2))(0x0E5DD26EA70BEF7CL, 0x39CEF0DF067F0462L)), (-3L))).xwzxyxwwyxyxzxwy)).s4 <= (((((VECTOR(int8_t, 4))(p_1323->g_257.yxxy)).x < p_45) != 0x9774D5AFL) != p_45))) | ((VECTOR(int64_t, 16))(l_258.s1933dca61d593650)).sc))) , (safe_div_func_int16_t_s_s(l_256, p_47)));
    (*l_278) &= (p_1323->g_249.f0.f3 != (safe_unary_minus_func_uint64_t_u((safe_div_func_int64_t_s_s((((p_1323->g_231 = ((((safe_div_func_uint8_t_u_u((((((safe_lshift_func_uint8_t_u_s(((p_46 > 0xD0B8DA7C8E9F6F8EL) | ((*l_274) = ((*l_261) ^= (safe_add_func_int64_t_s_s((((void*)0 != l_271) , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_272.s67)).yyxyyxyxyyxxyyyx)).s83e0)).w), (p_45 != (-1L))))))), (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_275.yzwzxwxz)).odd)), ((VECTOR(int16_t, 2))(1L, 0x0739L)), 1L)).even)), p_1323->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1323->tid, 24))], 1L, (-1L), (-6L))).s1 != 2L))) < GROUP_DIVERGE(0, 1)) , FAKE_DIVERGE(p_1323->global_0_offset, get_global_id(0), 10)) , 0x101DCE6AL) , 253UL), l_276)) , (void*)0) == l_277) == 0x2AB02E7575718292L)) | 0xBA940064E38AA7DBL) <= l_272.s2), p_45)))));
    return l_261;
}


/* ------------------------------------------ */
/* 
 * reads : p_1323->g_29 p_1323->g_comm_values p_1323->g_80 p_1323->g_123 p_1323->g_130
 * writes: p_1323->g_29 p_1323->g_247
 */
uint64_t  func_49(uint16_t  p_50, int32_t  p_51, int16_t  p_52, int64_t * p_53, struct S2 * p_1323)
{ /* block id: 29 */
    VECTOR(uint16_t, 8) l_158 = (VECTOR(uint16_t, 8))(0x62BBL, (VECTOR(uint16_t, 4))(0x62BBL, (VECTOR(uint16_t, 2))(0x62BBL, 0x91ADL), 0x91ADL), 0x91ADL, 0x62BBL, 0x91ADL);
    int32_t **l_218 = (void*)0;
    int64_t l_229 = 0x3895C612B3A83FA9L;
    int32_t l_235 = 0x1B64BEFDL;
    int32_t l_240 = (-8L);
    int32_t *l_245 = &p_1323->g_130;
    int32_t **l_244 = &l_245;
    int i;
    for (p_1323->g_29 = 27; (p_1323->g_29 == 17); p_1323->g_29--)
    { /* block id: 32 */
        int32_t *l_159[2];
        int32_t *l_160 = &p_1323->g_80[0];
        uint8_t *l_165 = &p_1323->g_24;
        uint8_t **l_166 = &l_165;
        VECTOR(int64_t, 2) l_233 = (VECTOR(int64_t, 2))(0x5AFDE053CD6AE3D4L, 0x08088E2FD6FEC258L);
        uint64_t l_241 = 0x51C4F3B56E7CEAEEL;
        union U1 *l_248 = &p_1323->g_249;
        union U1 **l_250 = &l_248;
        int i;
        for (i = 0; i < 2; i++)
            l_159[i] = (void*)0;
        l_160 = ((p_51 <= ((VECTOR(uint16_t, 4))(l_158.s2623)).y) , l_159[1]);
        if ((+(safe_mul_func_uint8_t_u_u(p_1323->g_comm_values[p_1323->tid], ((((FAKE_DIVERGE(p_1323->global_1_offset, get_global_id(1), 10) < (safe_sub_func_uint32_t_u_u(((p_1323->g_80[0] , (p_1323->g_123.y , (void*)0)) == ((*l_166) = l_165)), p_51))) != 1UL) <= (p_1323->g_130 != l_158.s7)) & p_50)))))
        { /* block id: 35 */
            int32_t **l_167 = &l_159[1];
            int i, j;
            (*l_167) = &p_51;
            for (p_50 = (-25); (p_50 <= 38); ++p_50)
            { /* block id: 39 */
                VECTOR(uint16_t, 2) l_172 = (VECTOR(uint16_t, 2))(2UL, 5UL);
                int32_t l_179[5][7][7] = {{{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)}},{{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)}},{{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)}},{{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)}},{{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)},{0L,0x59E1138FL,0x404B1CACL,(-1L),0x7CAFF29AL,0x3941AA10L,(-1L)}}};
                int32_t l_186[9] = {0x4B5A7BDDL,(-3L),0x4B5A7BDDL,0x4B5A7BDDL,(-3L),0x4B5A7BDDL,0x4B5A7BDDL,(-3L),0x4B5A7BDDL};
                uint64_t *l_230 = &p_1323->g_231;
                int64_t *l_234[9][9][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                int8_t *l_238[5][7][7] = {{{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239}},{{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239}},{{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239}},{{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239}},{{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239},{&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239,&p_1323->g_239}}};
                int i, j, k;
                l_186[3] &= (((p_1323->g_80[8] , (safe_mul_func_int16_t_s_s(((!((void*)0 != l_159[1])) <= ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_172.yyxyxxyxyyyyxyyy)))).odd)), (uint16_t)(!((safe_mod_func_uint64_t_u_u((FAKE_DIVERGE(p_1323->group_1_offset, get_group_id(1), 10) && (safe_mod_func_int32_t_s_s(((((p_51 = (((p_1323->g_64 ^ ((0x064FF1D3L >= p_50) > (l_179[0][5][0] = p_50))) >= p_52) ^ ((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(p_51, p_50)) & 0x8CL), 0UL)), l_158.s4)) , 0x7FL))) > 0x6BE0F0FCL) , 0x14L) & p_1323->g_80[2]), 0x1D84C9E7L))), l_158.s0)) >= p_1323->g_comm_values[p_1323->tid]))))), ((VECTOR(uint16_t, 8))(9UL))))), ((VECTOR(uint16_t, 8))(0UL)))).sf), p_1323->g_80[0]))) & p_52) || 1L);
                if ((atomic_inc(&p_1323->g_atomic_input[8 * get_linear_group_id() + 0]) == 2))
                { /* block id: 44 */
                    int32_t l_187[5] = {1L,1L,1L,1L,1L};
                    uint32_t l_193 = 0xB7316A21L;
                    int32_t *l_214 = &l_187[2];
                    int32_t *l_215 = &l_187[2];
                    int i;
                    for (l_187[2] = 0; (l_187[2] != (-18)); l_187[2]--)
                    { /* block id: 47 */
                        VECTOR(int32_t, 16) l_190 = (VECTOR(int32_t, 16))(0x73DCE3E1L, (VECTOR(int32_t, 4))(0x73DCE3E1L, (VECTOR(int32_t, 2))(0x73DCE3E1L, 0x06D71C5EL), 0x06D71C5EL), 0x06D71C5EL, 0x73DCE3E1L, 0x06D71C5EL, (VECTOR(int32_t, 2))(0x73DCE3E1L, 0x06D71C5EL), (VECTOR(int32_t, 2))(0x73DCE3E1L, 0x06D71C5EL), 0x73DCE3E1L, 0x06D71C5EL, 0x73DCE3E1L, 0x06D71C5EL);
                        VECTOR(uint8_t, 4) l_191 = (VECTOR(uint8_t, 4))(0xA0L, (VECTOR(uint8_t, 2))(0xA0L, 0xC2L), 0xC2L);
                        uint16_t l_192 = 1UL;
                        int i;
                        l_192 = (l_191.z = ((VECTOR(int32_t, 16))(l_190.s754a42a48a9b1481)).sd);
                    }
                    ++l_193;
                    for (l_187[2] = (-23); (l_187[2] >= (-3)); l_187[2]++)
                    { /* block id: 54 */
                        int16_t l_198 = 0x2FD4L;
                        int64_t l_199[2];
                        int16_t l_200 = 5L;
                        uint8_t l_201 = 248UL;
                        int32_t l_204[3][9] = {{0x6C39933CL,(-1L),(-10L),1L,(-1L),1L,(-10L),(-1L),0x6C39933CL},{0x6C39933CL,(-1L),(-10L),1L,(-1L),1L,(-10L),(-1L),0x6C39933CL},{0x6C39933CL,(-1L),(-10L),1L,(-1L),1L,(-10L),(-1L),0x6C39933CL}};
                        int64_t l_205 = 0L;
                        uint32_t l_206 = 0xD5E8061CL;
                        int32_t l_207 = 0x5E6D4011L;
                        int8_t l_208 = 0x5CL;
                        uint32_t l_209 = 0xB3185A65L;
                        int32_t l_210[6];
                        int32_t l_212 = (-1L);
                        int32_t *l_211[4];
                        int32_t *l_213 = &l_212;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_199[i] = 5L;
                        for (i = 0; i < 6; i++)
                            l_210[i] = (-1L);
                        for (i = 0; i < 4; i++)
                            l_211[i] = &l_212;
                        l_201--;
                        l_207 &= (l_206 = (l_205 = (l_204[0][4] = 0x18303D30L)));
                        l_209 = l_208;
                        l_213 = (l_210[0] , l_211[3]);
                    }
                    l_215 = l_214;
                    unsigned int result = 0;
                    int l_187_i0;
                    for (l_187_i0 = 0; l_187_i0 < 5; l_187_i0++) {
                        result += l_187[l_187_i0];
                    }
                    result += l_193;
                    atomic_add(&p_1323->g_special_values[8 * get_linear_group_id() + 0], result);
                }
                else
                { /* block id: 64 */
                    (1 + 1);
                }
                l_186[8] |= ((VECTOR(int32_t, 8))(0x25B8E2C0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((p_51 = ((l_240 &= (safe_mul_func_uint8_t_u_u(((l_218 != l_167) & (safe_mod_func_uint16_t_u_u(p_51, (safe_rshift_func_uint8_t_u_s(p_1323->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1323->tid, 24))], 7))))), ((((safe_add_func_uint16_t_u_u(l_158.s1, p_50)) != p_51) | (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((p_1323->g_232 |= ((*l_230) = l_229)) || (l_235 = ((VECTOR(int64_t, 16))(l_233.xyxxyyxxyyxxxxyy)).sa)), (safe_lshift_func_int16_t_s_s(1L, p_1323->g_90.y)))), p_51))) != p_50)))) <= p_1323->g_152)), ((VECTOR(int32_t, 2))(0x3B1C78F1L)), 0x6BF4DEF9L)))), p_51, 0x142E4CE6L, 0x6E7AD38DL)).s5;
            }
            if (p_51)
                continue;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1323->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 24)), permutations[(safe_mod_func_uint32_t_u_u(p_50, 10))][(safe_mod_func_uint32_t_u_u(p_1323->tid, 24))]));
        }
        else
        { /* block id: 78 */
            int32_t ***l_246[2][5][3] = {{{(void*)0,&l_244,(void*)0},{(void*)0,&l_244,(void*)0},{(void*)0,&l_244,(void*)0},{(void*)0,&l_244,(void*)0},{(void*)0,&l_244,(void*)0}},{{(void*)0,&l_244,(void*)0},{(void*)0,&l_244,(void*)0},{(void*)0,&l_244,(void*)0},{(void*)0,&l_244,(void*)0},{(void*)0,&l_244,(void*)0}}};
            int i, j, k;
            --l_241;
            if (p_1323->g_comm_values[p_1323->tid])
                break;
            p_1323->g_247 = l_244;
        }
        (*l_250) = l_248;
        if (p_50)
            break;
    }
    return l_229;
}


/* ------------------------------------------ */
/* 
 * reads : p_1323->g_64 p_1323->g_comm_values p_1323->g_78 p_1323->g_80 p_1323->g_90 p_1323->g_62 p_1323->g_29 p_1323->g_27 p_1323->g_109 p_1323->g_123 p_1323->g_24 p_1323->l_comm_values p_1323->g_152
 * writes: p_1323->g_64 p_1323->g_80 p_1323->g_102 p_1323->g_24 p_1323->g_130 p_1323->g_62 p_1323->g_152
 */
uint64_t  func_54(uint8_t  p_55, int32_t  p_56, uint32_t  p_57, uint32_t * p_58, uint8_t  p_59, struct S2 * p_1323)
{ /* block id: 10 */
    int32_t *l_63 = &p_1323->g_64;
    VECTOR(int16_t, 16) l_75 = (VECTOR(int16_t, 16))(0x768CL, (VECTOR(int16_t, 4))(0x768CL, (VECTOR(int16_t, 2))(0x768CL, 1L), 1L), 1L, 0x768CL, 1L, (VECTOR(int16_t, 2))(0x768CL, 1L), (VECTOR(int16_t, 2))(0x768CL, 1L), 0x768CL, 1L, 0x768CL, 1L);
    int32_t *l_79[9] = {&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0],&p_1323->g_80[0]};
    int32_t **l_81 = &l_79[7];
    uint64_t l_151 = 2UL;
    int i;
    (*l_63) ^= 1L;
    l_151 = (((safe_mod_func_int8_t_s_s(func_67((p_1323->g_80[1] ^= (((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(0x622DL, 7L)).yyxyyxxyyyyyyxyy, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-1L), 0x4D3BL)).xyyxyxyyyyxyxxxx)).s93, ((VECTOR(int16_t, 4))(l_75.s5644)).odd))).xyyxyyxxxyxxxxxx))).sae, (int16_t)(*l_63)))).even, (safe_mul_func_int8_t_s_s(p_59, p_1323->g_comm_values[p_1323->tid])))) & (*l_63)) | ((p_1323->g_78 == p_1323->g_78) < (*l_63)))), (*l_63), ((*l_81) = (void*)0), p_1323), p_55)) || 2UL) || p_1323->g_123.x);
    p_1323->g_152++;
    return p_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_1323->g_90 p_1323->g_62 p_1323->g_29 p_1323->g_27 p_1323->g_109 p_1323->g_comm_values p_1323->g_80 p_1323->g_64 p_1323->g_123 p_1323->g_24 p_1323->l_comm_values
 * writes: p_1323->g_102 p_1323->g_24 p_1323->g_64 p_1323->g_130 p_1323->g_80 p_1323->g_62
 */
int8_t  func_67(int32_t  p_68, int32_t  p_69, int32_t * p_70, struct S2 * p_1323)
{ /* block id: 14 */
    VECTOR(uint32_t, 2) l_89 = (VECTOR(uint32_t, 2))(4294967295UL, 0x8B0A9754L);
    VECTOR(uint8_t, 16) l_95 = (VECTOR(uint8_t, 16))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0xFEL), 0xFEL), 0xFEL, 3UL, 0xFEL, (VECTOR(uint8_t, 2))(3UL, 0xFEL), (VECTOR(uint8_t, 2))(3UL, 0xFEL), 3UL, 0xFEL, 3UL, 0xFEL);
    uint8_t *l_101 = &p_1323->g_24;
    uint8_t **l_100[4] = {&l_101,&l_101,&l_101,&l_101};
    uint64_t l_110 = 18446744073709551615UL;
    uint32_t l_111 = 8UL;
    int64_t *l_112 = (void*)0;
    int32_t l_113[4][9][3] = {{{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)}},{{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)}},{{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)}},{{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)},{0x0E8D41E4L,(-1L),(-1L)}}};
    int32_t *l_114 = (void*)0;
    int32_t *l_115 = &p_1323->g_64;
    VECTOR(uint64_t, 2) l_122 = (VECTOR(uint64_t, 2))(18446744073709551610UL, 0x6797DE492F91EA85L);
    VECTOR(int64_t, 16) l_124 = (VECTOR(int64_t, 16))(0x63A23D7F4DA6B924L, (VECTOR(int64_t, 4))(0x63A23D7F4DA6B924L, (VECTOR(int64_t, 2))(0x63A23D7F4DA6B924L, 0L), 0L), 0L, 0x63A23D7F4DA6B924L, 0L, (VECTOR(int64_t, 2))(0x63A23D7F4DA6B924L, 0L), (VECTOR(int64_t, 2))(0x63A23D7F4DA6B924L, 0L), 0x63A23D7F4DA6B924L, 0L, 0x63A23D7F4DA6B924L, 0L);
    int32_t *l_129 = &p_1323->g_130;
    VECTOR(int8_t, 4) l_133 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x04L), 0x04L);
    VECTOR(int8_t, 4) l_138 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x25L), 0x25L);
    VECTOR(uint16_t, 2) l_145 = (VECTOR(uint16_t, 2))(0x7D6CL, 0x15E0L);
    VECTOR(uint8_t, 16) l_146 = (VECTOR(uint8_t, 16))(0x0CL, (VECTOR(uint8_t, 4))(0x0CL, (VECTOR(uint8_t, 2))(0x0CL, 0x54L), 0x54L), 0x54L, 0x0CL, 0x54L, (VECTOR(uint8_t, 2))(0x0CL, 0x54L), (VECTOR(uint8_t, 2))(0x0CL, 0x54L), 0x0CL, 0x54L, 0x0CL, 0x54L);
    VECTOR(uint8_t, 16) l_147 = (VECTOR(uint8_t, 16))(0x83L, (VECTOR(uint8_t, 4))(0x83L, (VECTOR(uint8_t, 2))(0x83L, 0UL), 0UL), 0UL, 0x83L, 0UL, (VECTOR(uint8_t, 2))(0x83L, 0UL), (VECTOR(uint8_t, 2))(0x83L, 0UL), 0x83L, 0UL, 0x83L, 0UL);
    int16_t l_150 = 6L;
    int i, j, k;
    (*l_115) ^= ((safe_unary_minus_func_int16_t_s(((l_113[1][6][1] = ((safe_add_func_int32_t_s_s((((safe_sub_func_int16_t_s_s(((!((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_89.xxyy)), ((VECTOR(uint32_t, 4))(p_1323->g_90.xyyx)))).s2) && ((((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(l_95.s2e88)).z, 6)) ^ ((l_89.x <= (!p_68)) | (safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((((*l_101) = (&p_1323->g_24 == (p_1323->g_102 = (void*)0))) , ((0x901EL > ((*p_1323->g_62) > ((((((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(p_1323->g_27.s0, (!(((void*)0 == p_1323->g_109[0]) > 0xCCL)))), l_110)) == 0x45EC307DL), 5)) , p_1323->g_comm_values[p_1323->tid]) >= 0x7A26L) == l_110) <= l_111) >= 1L))) && l_95.sa)), 0x59B8L)) != p_1323->g_80[0]), 0xB3L)))), p_69)) , l_112) == (void*)0) > l_89.x)), p_1323->g_90.x)) , p_68) != 0x55DBL), 0xB3B0CBD6L)) & GROUP_DIVERGE(2, 1))) , p_1323->g_90.y))) == GROUP_DIVERGE(0, 1));
    atomic_and(&p_1323->l_atomic_reduction[0], (p_1323->g_80[0] = (safe_mul_func_int8_t_s_s(((((18446744073709551615UL || ((safe_mod_func_int8_t_s_s(((safe_div_func_int16_t_s_s((*l_115), (*l_115))) ^ p_69), ((VECTOR(uint8_t, 2))(1UL, 249UL)).lo)) ^ p_1323->g_27.sc)) ^ ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_122.xxxxyxyy)).s72)).odd) , ((p_68 ^ (((*l_129) = ((((((VECTOR(int64_t, 8))(p_1323->g_123.yxxxxyyx)).s1 != ((VECTOR(int64_t, 4))(l_124.s0d3a)).x) ^ (((p_68 ^ ((safe_lshift_func_int16_t_s_u((!(safe_mul_func_uint8_t_u_u(p_69, (-1L)))), p_1323->g_24)) < FAKE_DIVERGE(p_1323->group_1_offset, get_group_id(1), 10))) || 0x2EL) , 0x9C9A99D279C3978FL)) == 0x102AA92FL) >= p_1323->g_comm_values[p_1323->tid])) , 0x32L)) || p_69)) <= 6L), p_69))) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1323->v_collective += p_1323->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1323->g_64 = (p_1323->g_80[5] = (FAKE_DIVERGE(p_1323->local_2_offset, get_local_id(2), 10) != ((safe_div_func_int8_t_s_s((((0x03L ^ ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_133.zy)))).yyyyxxyy)).s1) == (p_1323->g_comm_values[p_1323->tid] , ((0x90D9D044L ^ ((p_1323->g_62 = (void*)0) == (void*)0)) > 0x4AL))) <= (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_1323->g_comm_values[p_1323->tid], 11)), ((((VECTOR(int8_t, 8))(l_138.xyzzzzxw)).s2 | (safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))((safe_sub_func_uint16_t_u_u(((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(l_145.xyxyyyxy)).s27, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(l_146.sce)).yxxyyxxy, ((VECTOR(uint8_t, 2))(l_147.sf3)).xxyyxxxy))).s00, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(6UL, 0x55B0L, ((*l_115) < (((p_68 > (-1L)) >= (-8L)) != p_1323->g_90.x)), ((VECTOR(uint16_t, 2))(65535UL)), 1UL, 0x10AEL, 0xE790L)).hi)).lo)))))), 9UL, 0x0560L)).z == FAKE_DIVERGE(p_1323->local_0_offset, get_local_id(0), 10)) , 0UL), p_1323->g_comm_values[p_1323->tid])), l_150, 0L, 0x47L)).z, p_1323->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1323->tid, 24))])), FAKE_DIVERGE(p_1323->global_0_offset, get_global_id(0), 10)))) < (*l_115))))), p_68)) , 0x3EL)));
    return (*l_115);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[8];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 8; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[8];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 8; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[24];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 24; i++)
            l_comm_values[i] = 1;
    struct S2 c_1324;
    struct S2* p_1323 = &c_1324;
    struct S2 c_1325 = {
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2D83D783L), 0x2D83D783L), 0x2D83D783L, (-1L), 0x2D83D783L, (VECTOR(int32_t, 2))((-1L), 0x2D83D783L), (VECTOR(int32_t, 2))((-1L), 0x2D83D783L), (-1L), 0x2D83D783L, (-1L), 0x2D83D783L), // p_1323->g_2
        252UL, // p_1323->g_24
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_1323->g_27
        4294967286UL, // p_1323->g_29
        &p_1323->g_29, // p_1323->g_62
        0x48249D4AL, // p_1323->g_64
        (void*)0, // p_1323->g_78
        {0x6FB991B7L,0x6FB991B7L,0x6FB991B7L,0x6FB991B7L,0x6FB991B7L,0x6FB991B7L,0x6FB991B7L,0x6FB991B7L,0x6FB991B7L,0x6FB991B7L}, // p_1323->g_80
        (VECTOR(uint32_t, 2))(0x9DBBC948L, 0xBCDCAF52L), // p_1323->g_90
        (void*)0, // p_1323->g_102
        {(void*)0}, // p_1323->g_109
        (VECTOR(int64_t, 2))(0x40E7FB8437FCE878L, 0x701CCAA109753663L), // p_1323->g_123
        5L, // p_1323->g_130
        65527UL, // p_1323->g_152
        0UL, // p_1323->g_231
        1L, // p_1323->g_232
        0L, // p_1323->g_239
        (void*)0, // p_1323->g_247
        {{0xDFA7850B57B05768L,1L,0L,4294967295UL,-9L,0UL,0x99CCL,1L}}, // p_1323->g_249
        (VECTOR(int8_t, 2))(0L, (-5L)), // p_1323->g_257
        1L, // p_1323->g_291
        (VECTOR(int8_t, 8))(0x7DL, (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, (-8L)), (-8L)), (-8L), 0x7DL, (-8L)), // p_1323->g_299
        (VECTOR(int8_t, 4))(0x3BL, (VECTOR(int8_t, 2))(0x3BL, 9L), 9L), // p_1323->g_300
        (VECTOR(int16_t, 4))(0x7B43L, (VECTOR(int16_t, 2))(0x7B43L, 1L), 1L), // p_1323->g_315
        (VECTOR(int64_t, 4))(0x43160C5FCF6F0B6AL, (VECTOR(int64_t, 2))(0x43160C5FCF6F0B6AL, 0x720BD1C213781D60L), 0x720BD1C213781D60L), // p_1323->g_390
        (void*)0, // p_1323->g_420
        &p_1323->g_420, // p_1323->g_419
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), (VECTOR(uint16_t, 2))(65535UL, 0UL), 65535UL, 0UL, 65535UL, 0UL), // p_1323->g_423
        0x031FL, // p_1323->g_439
        0x2FL, // p_1323->g_440
        {0x71D121B44F803288L,0L,4L,0xCA22E521L,-1L,0x9A55D3F1F181244CL,0x177CL,0x0CL}, // p_1323->g_447
        0x213274A95140E1DAL, // p_1323->g_475
        &p_1323->g_80[0], // p_1323->g_478
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xB191L), 0xB191L), // p_1323->g_499
        (VECTOR(uint16_t, 16))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0x83F6L), 0x83F6L), 0x83F6L, 65533UL, 0x83F6L, (VECTOR(uint16_t, 2))(65533UL, 0x83F6L), (VECTOR(uint16_t, 2))(65533UL, 0x83F6L), 65533UL, 0x83F6L, 65533UL, 0x83F6L), // p_1323->g_500
        (VECTOR(uint64_t, 4))(0xA72167E23FB8B585L, (VECTOR(uint64_t, 2))(0xA72167E23FB8B585L, 1UL), 1UL), // p_1323->g_501
        0UL, // p_1323->g_531
        0x3BL, // p_1323->g_536
        0UL, // p_1323->g_546
        &p_1323->g_249.f0.f0, // p_1323->g_573
        &p_1323->g_573, // p_1323->g_572
        &p_1323->g_572, // p_1323->g_571
        {{{1UL,-7L,0x606DAA37L,0xC1F7C34DL,0x37F9L,0xFC896EDE310352F9L,0x2A27L,0x63L}},{{1UL,-7L,0x606DAA37L,0xC1F7C34DL,0x37F9L,0xFC896EDE310352F9L,0x2A27L,0x63L}},{{1UL,-7L,0x606DAA37L,0xC1F7C34DL,0x37F9L,0xFC896EDE310352F9L,0x2A27L,0x63L}},{{1UL,-7L,0x606DAA37L,0xC1F7C34DL,0x37F9L,0xFC896EDE310352F9L,0x2A27L,0x63L}},{{1UL,-7L,0x606DAA37L,0xC1F7C34DL,0x37F9L,0xFC896EDE310352F9L,0x2A27L,0x63L}}}, // p_1323->g_588
        {{1UL,-7L,0x5C280F9AL,7UL,-10L,0UL,0x54D9L,0x17L}}, // p_1323->g_590
        {{18446744073709551615UL,1L,0x0FB3B2EBL,0x54051E63L,0x5CD5L,1UL,0UL,0x40L}}, // p_1323->g_591
        {{0x30165F82F534FECAL,0x3FL,1L,2UL,5L,0UL,0UL,7L}}, // p_1323->g_592
        {{1UL,0x04L,0x66287DF6L,0x6F89D690L,0x3469L,0xBDF245A0E3BA1ACFL,0UL,0x70L}}, // p_1323->g_593
        {{5UL,0x4DL,0L,0x647348D8L,1L,0xE80E6079331025DDL,0x8EFEL,0x4EL}}, // p_1323->g_594
        {{0x938CE6E160CABFEEL,0x21L,0x11756BB6L,0xDB0AE668L,-1L,6UL,1UL,8L}}, // p_1323->g_595
        {{{0x427075E9B096546AL,0x79L,-2L,4294967292UL,0x435BL,0x7099AEB5ED568BFEL,0xE9FDL,0x42L}},{{0x4F73337C3B516B34L,1L,0x28F03936L,1UL,0L,18446744073709551615UL,0x683DL,0x22L}},{{0x427075E9B096546AL,0x79L,-2L,4294967292UL,0x435BL,0x7099AEB5ED568BFEL,0xE9FDL,0x42L}},{{0x427075E9B096546AL,0x79L,-2L,4294967292UL,0x435BL,0x7099AEB5ED568BFEL,0xE9FDL,0x42L}},{{0x4F73337C3B516B34L,1L,0x28F03936L,1UL,0L,18446744073709551615UL,0x683DL,0x22L}},{{0x427075E9B096546AL,0x79L,-2L,4294967292UL,0x435BL,0x7099AEB5ED568BFEL,0xE9FDL,0x42L}},{{0x427075E9B096546AL,0x79L,-2L,4294967292UL,0x435BL,0x7099AEB5ED568BFEL,0xE9FDL,0x42L}}}, // p_1323->g_596
        {{8UL,0x75L,1L,0x8B5D7EE9L,0x7613L,0x2209786FA99E68BBL,0x8203L,-1L}}, // p_1323->g_597
        {{{{0UL,1L,0x0F7EFC95L,0UL,-10L,0x17BA162973BFE408L,0UL,-1L}},{{0x67DA17DBEBB899E1L,0x3CL,0x46F06593L,0x2EC8105CL,0x0290L,0xF32E80DA4FB0F5D1L,1UL,0L}}},{{{0UL,1L,0x0F7EFC95L,0UL,-10L,0x17BA162973BFE408L,0UL,-1L}},{{0x67DA17DBEBB899E1L,0x3CL,0x46F06593L,0x2EC8105CL,0x0290L,0xF32E80DA4FB0F5D1L,1UL,0L}}},{{{0UL,1L,0x0F7EFC95L,0UL,-10L,0x17BA162973BFE408L,0UL,-1L}},{{0x67DA17DBEBB899E1L,0x3CL,0x46F06593L,0x2EC8105CL,0x0290L,0xF32E80DA4FB0F5D1L,1UL,0L}}},{{{0UL,1L,0x0F7EFC95L,0UL,-10L,0x17BA162973BFE408L,0UL,-1L}},{{0x67DA17DBEBB899E1L,0x3CL,0x46F06593L,0x2EC8105CL,0x0290L,0xF32E80DA4FB0F5D1L,1UL,0L}}},{{{0UL,1L,0x0F7EFC95L,0UL,-10L,0x17BA162973BFE408L,0UL,-1L}},{{0x67DA17DBEBB899E1L,0x3CL,0x46F06593L,0x2EC8105CL,0x0290L,0xF32E80DA4FB0F5D1L,1UL,0L}}},{{{0UL,1L,0x0F7EFC95L,0UL,-10L,0x17BA162973BFE408L,0UL,-1L}},{{0x67DA17DBEBB899E1L,0x3CL,0x46F06593L,0x2EC8105CL,0x0290L,0xF32E80DA4FB0F5D1L,1UL,0L}}},{{{0UL,1L,0x0F7EFC95L,0UL,-10L,0x17BA162973BFE408L,0UL,-1L}},{{0x67DA17DBEBB899E1L,0x3CL,0x46F06593L,0x2EC8105CL,0x0290L,0xF32E80DA4FB0F5D1L,1UL,0L}}},{{{0UL,1L,0x0F7EFC95L,0UL,-10L,0x17BA162973BFE408L,0UL,-1L}},{{0x67DA17DBEBB899E1L,0x3CL,0x46F06593L,0x2EC8105CL,0x0290L,0xF32E80DA4FB0F5D1L,1UL,0L}}},{{{0UL,1L,0x0F7EFC95L,0UL,-10L,0x17BA162973BFE408L,0UL,-1L}},{{0x67DA17DBEBB899E1L,0x3CL,0x46F06593L,0x2EC8105CL,0x0290L,0xF32E80DA4FB0F5D1L,1UL,0L}}}}, // p_1323->g_598
        {{{0xF02BB12C127D6AFEL,-8L,0x42655C96L,0x7D6AE6FCL,0x7667L,0x0E471654CB62CB00L,65535UL,9L}},{{0xF02BB12C127D6AFEL,-8L,0x42655C96L,0x7D6AE6FCL,0x7667L,0x0E471654CB62CB00L,65535UL,9L}},{{0xF02BB12C127D6AFEL,-8L,0x42655C96L,0x7D6AE6FCL,0x7667L,0x0E471654CB62CB00L,65535UL,9L}},{{0xF02BB12C127D6AFEL,-8L,0x42655C96L,0x7D6AE6FCL,0x7667L,0x0E471654CB62CB00L,65535UL,9L}},{{0xF02BB12C127D6AFEL,-8L,0x42655C96L,0x7D6AE6FCL,0x7667L,0x0E471654CB62CB00L,65535UL,9L}}}, // p_1323->g_599
        {{18446744073709551606UL,0x1FL,0x407BA28CL,3UL,7L,0x78F51B13BB0D2FDBL,0xA46FL,0x2BL}}, // p_1323->g_600
        {{18446744073709551615UL,0x42L,0x3C88122DL,0xB48F4FDBL,-1L,4UL,0UL,-1L}}, // p_1323->g_601
        {{1UL,0x31L,0L,0xB67A2F5BL,0x3AEEL,1UL,65526UL,-7L}}, // p_1323->g_602
        {{0x6F8C414734BF0F28L,0x42L,0x778BAA90L,1UL,5L,3UL,65535UL,1L}}, // p_1323->g_603
        {{0x52CF375277694C7BL,0L,0x6358F914L,0xF105CA04L,4L,0xD22D2B0CE53283FAL,1UL,0x7FL}}, // p_1323->g_604
        {{{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL}},{{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL}},{{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL}},{{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL}},{{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL}},{{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL}},{{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL}},{{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0x4E40C35E44AF56C8L,-9L,-1L,6UL,-10L,0xE608CE9DF0FCB6ECL,1UL,-7L},{0xA9F9D44D7EB7D0E1L,1L,0x12AE8C6DL,0x5792A3F9L,0x6B19L,18446744073709551615UL,0x4B20L,0x1BL}}}, // p_1323->g_639
        (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, (-1L)), (-1L)), // p_1323->g_670
        (VECTOR(int64_t, 16))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, (-7L)), (-7L)), (-7L), 7L, (-7L), (VECTOR(int64_t, 2))(7L, (-7L)), (VECTOR(int64_t, 2))(7L, (-7L)), 7L, (-7L), 7L, (-7L)), // p_1323->g_676
        (VECTOR(uint16_t, 8))(0x906BL, (VECTOR(uint16_t, 4))(0x906BL, (VECTOR(uint16_t, 2))(0x906BL, 0xDF31L), 0xDF31L), 0xDF31L, 0x906BL, 0xDF31L), // p_1323->g_743
        &p_1323->g_596[2].f0.f2, // p_1323->g_765
        &p_1323->g_765, // p_1323->g_764
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L), // p_1323->g_791
        (VECTOR(int32_t, 4))(0x5B13D356L, (VECTOR(int32_t, 2))(0x5B13D356L, 0x20710B4AL), 0x20710B4AL), // p_1323->g_792
        {0xD9DC91E53153D05DL,0x44L,0x62F4C9E5L,1UL,0x72BBL,18446744073709551609UL,0x2A4BL,0x26L}, // p_1323->g_798
        &p_1323->g_798, // p_1323->g_797
        0x18F6B13BL, // p_1323->g_808
        (VECTOR(int32_t, 16))(0x01A050B0L, (VECTOR(int32_t, 4))(0x01A050B0L, (VECTOR(int32_t, 2))(0x01A050B0L, (-1L)), (-1L)), (-1L), 0x01A050B0L, (-1L), (VECTOR(int32_t, 2))(0x01A050B0L, (-1L)), (VECTOR(int32_t, 2))(0x01A050B0L, (-1L)), 0x01A050B0L, (-1L), 0x01A050B0L, (-1L)), // p_1323->g_813
        0x08466115L, // p_1323->g_826
        (void*)0, // p_1323->g_827
        (VECTOR(int32_t, 4))(0x57D2B85FL, (VECTOR(int32_t, 2))(0x57D2B85FL, 0x00E143BCL), 0x00E143BCL), // p_1323->g_845
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), // p_1323->g_848
        (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L), (VECTOR(int16_t, 2))((-3L), (-1L)), (VECTOR(int16_t, 2))((-3L), (-1L)), (-3L), (-1L), (-3L), (-1L)), // p_1323->g_853
        &p_1323->g_291, // p_1323->g_870
        &p_1323->g_870, // p_1323->g_869
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2DCA3FDEL), 0x2DCA3FDEL), 0x2DCA3FDEL, 0L, 0x2DCA3FDEL), // p_1323->g_921
        {{{4UL,6L,1L,0xF72AEC02L,0x37EAL,0xCA9C60FB57030C73L,0xB346L,-4L},{4UL,6L,1L,0xF72AEC02L,0x37EAL,0xCA9C60FB57030C73L,0xB346L,-4L},{4UL,6L,1L,0xF72AEC02L,0x37EAL,0xCA9C60FB57030C73L,0xB346L,-4L}},{{4UL,6L,1L,0xF72AEC02L,0x37EAL,0xCA9C60FB57030C73L,0xB346L,-4L},{4UL,6L,1L,0xF72AEC02L,0x37EAL,0xCA9C60FB57030C73L,0xB346L,-4L},{4UL,6L,1L,0xF72AEC02L,0x37EAL,0xCA9C60FB57030C73L,0xB346L,-4L}},{{4UL,6L,1L,0xF72AEC02L,0x37EAL,0xCA9C60FB57030C73L,0xB346L,-4L},{4UL,6L,1L,0xF72AEC02L,0x37EAL,0xCA9C60FB57030C73L,0xB346L,-4L},{4UL,6L,1L,0xF72AEC02L,0x37EAL,0xCA9C60FB57030C73L,0xB346L,-4L}}}, // p_1323->g_948
        {{0xA46108C54BC78CBCL,-1L,-1L,0xBF185361L,0x2CCEL,0x8EF772C9F2B132C5L,0x99C7L,0x41L},{0xA46108C54BC78CBCL,-1L,-1L,0xBF185361L,0x2CCEL,0x8EF772C9F2B132C5L,0x99C7L,0x41L},{0xA46108C54BC78CBCL,-1L,-1L,0xBF185361L,0x2CCEL,0x8EF772C9F2B132C5L,0x99C7L,0x41L},{0xA46108C54BC78CBCL,-1L,-1L,0xBF185361L,0x2CCEL,0x8EF772C9F2B132C5L,0x99C7L,0x41L},{0xA46108C54BC78CBCL,-1L,-1L,0xBF185361L,0x2CCEL,0x8EF772C9F2B132C5L,0x99C7L,0x41L},{0xA46108C54BC78CBCL,-1L,-1L,0xBF185361L,0x2CCEL,0x8EF772C9F2B132C5L,0x99C7L,0x41L}}, // p_1323->g_950
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1323->g_953
        {&p_1323->g_953[2]}, // p_1323->g_952
        {{0x6DDF02857A656F75L,0x2CL,-9L,0x7F34DF94L,0x434BL,0UL,0x2463L,0x05L}}, // p_1323->g_956
        {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}}, // p_1323->g_1016
        65535UL, // p_1323->g_1095
        {{0xBF187DC4FF78883FL,-1L,0L,0x00645D98L,4L,3UL,0UL,-1L}}, // p_1323->g_1129
        &p_1323->g_1129, // p_1323->g_1128
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x756E4ECEL), 0x756E4ECEL), 0x756E4ECEL, (-1L), 0x756E4ECEL, (VECTOR(int32_t, 2))((-1L), 0x756E4ECEL), (VECTOR(int32_t, 2))((-1L), 0x756E4ECEL), (-1L), 0x756E4ECEL, (-1L), 0x756E4ECEL), // p_1323->g_1136
        (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, (-1L)), (-1L)), // p_1323->g_1161
        (VECTOR(int8_t, 8))(0x47L, (VECTOR(int8_t, 4))(0x47L, (VECTOR(int8_t, 2))(0x47L, 0L), 0L), 0L, 0x47L, 0L), // p_1323->g_1163
        {6UL,-10L,0x468AF969L,0xDA21E438L,0x4155L,1UL,0x3783L,5L}, // p_1323->g_1170
        {0UL,0x19L,0x393ECC9BL,0x41452015L,-1L,3UL,0UL,7L}, // p_1323->g_1171
        {0UL,0x6AL,-5L,5UL,0x41E1L,1UL,0xCE96L,-2L}, // p_1323->g_1172
        {{&p_1323->g_1171,&p_1323->g_1172},{&p_1323->g_1171,&p_1323->g_1172},{&p_1323->g_1171,&p_1323->g_1172},{&p_1323->g_1171,&p_1323->g_1172}}, // p_1323->g_1169
        {0xC8538AA85C8CAD26L,0L,0x394CF378L,0xD51C529AL,3L,7UL,0UL,9L}, // p_1323->g_1174
        {1UL,0x58L,4L,4294967295UL,-3L,18446744073709551607UL,65535UL,1L}, // p_1323->g_1175
        {18446744073709551615UL,0x36L,2L,4294967295UL,-8L,0x2E6AB8D0EDAB903EL,65535UL,0x4CL}, // p_1323->g_1176
        {0x61E17E34887A1AA4L,-8L,0x5846751BL,0x52119932L,3L,1UL,6UL,1L}, // p_1323->g_1177
        {0xA82C80786831A8C0L,0x60L,0x050448A0L,0x574A4DBBL,0x2273L,18446744073709551607UL,3UL,2L}, // p_1323->g_1178
        {0xBF5D4ADCBAB73A6EL,-7L,0x7B5528C5L,1UL,0x7C45L,0x09356585AAD43089L,5UL,0x3EL}, // p_1323->g_1179
        {18446744073709551611UL,0L,-1L,0x4972AB5BL,0x3030L,0xB9A0629A4E3C8308L,0x615DL,-3L}, // p_1323->g_1180
        {{0x66F0B45C30A03FB1L,-9L,0x59C8E543L,0UL,-1L,0xB6A9678E7A657220L,0x5B9EL,0x58L},{0x66F0B45C30A03FB1L,-9L,0x59C8E543L,0UL,-1L,0xB6A9678E7A657220L,0x5B9EL,0x58L},{0x66F0B45C30A03FB1L,-9L,0x59C8E543L,0UL,-1L,0xB6A9678E7A657220L,0x5B9EL,0x58L}}, // p_1323->g_1181
        {{18446744073709551615UL,1L,0x461B7CD2L,4294967294UL,1L,1UL,0x2B7CL,0x20L},{18446744073709551615UL,1L,0x461B7CD2L,4294967294UL,1L,1UL,0x2B7CL,0x20L},{18446744073709551615UL,1L,0x461B7CD2L,4294967294UL,1L,1UL,0x2B7CL,0x20L}}, // p_1323->g_1182
        {0x4564E2AB4E5806BAL,-1L,-9L,0x8D990ECBL,-6L,18446744073709551612UL,0UL,0x69L}, // p_1323->g_1183
        {{{18446744073709551615UL,0x0FL,0x70C0D19FL,0UL,0x4204L,0xE95E9349FBB09F99L,65528UL,0x36L},{18446744073709551615UL,0x0FL,0x70C0D19FL,0UL,0x4204L,0xE95E9349FBB09F99L,65528UL,0x36L},{0xAFFE965EFC351E85L,-7L,4L,9UL,0x53FDL,4UL,0x3829L,1L},{0x15AD9348F6ED65A4L,3L,0x4E622CCEL,0x209091A2L,-10L,0xA64F1B6CA527737DL,65526UL,-1L},{18446744073709551609UL,-1L,0x667E26D3L,0x16EB71B7L,0x7AEBL,4UL,65529UL,0x37L},{0x15AD9348F6ED65A4L,3L,0x4E622CCEL,0x209091A2L,-10L,0xA64F1B6CA527737DL,65526UL,-1L}},{{18446744073709551615UL,0x0FL,0x70C0D19FL,0UL,0x4204L,0xE95E9349FBB09F99L,65528UL,0x36L},{18446744073709551615UL,0x0FL,0x70C0D19FL,0UL,0x4204L,0xE95E9349FBB09F99L,65528UL,0x36L},{0xAFFE965EFC351E85L,-7L,4L,9UL,0x53FDL,4UL,0x3829L,1L},{0x15AD9348F6ED65A4L,3L,0x4E622CCEL,0x209091A2L,-10L,0xA64F1B6CA527737DL,65526UL,-1L},{18446744073709551609UL,-1L,0x667E26D3L,0x16EB71B7L,0x7AEBL,4UL,65529UL,0x37L},{0x15AD9348F6ED65A4L,3L,0x4E622CCEL,0x209091A2L,-10L,0xA64F1B6CA527737DL,65526UL,-1L}},{{18446744073709551615UL,0x0FL,0x70C0D19FL,0UL,0x4204L,0xE95E9349FBB09F99L,65528UL,0x36L},{18446744073709551615UL,0x0FL,0x70C0D19FL,0UL,0x4204L,0xE95E9349FBB09F99L,65528UL,0x36L},{0xAFFE965EFC351E85L,-7L,4L,9UL,0x53FDL,4UL,0x3829L,1L},{0x15AD9348F6ED65A4L,3L,0x4E622CCEL,0x209091A2L,-10L,0xA64F1B6CA527737DL,65526UL,-1L},{18446744073709551609UL,-1L,0x667E26D3L,0x16EB71B7L,0x7AEBL,4UL,65529UL,0x37L},{0x15AD9348F6ED65A4L,3L,0x4E622CCEL,0x209091A2L,-10L,0xA64F1B6CA527737DL,65526UL,-1L}},{{18446744073709551615UL,0x0FL,0x70C0D19FL,0UL,0x4204L,0xE95E9349FBB09F99L,65528UL,0x36L},{18446744073709551615UL,0x0FL,0x70C0D19FL,0UL,0x4204L,0xE95E9349FBB09F99L,65528UL,0x36L},{0xAFFE965EFC351E85L,-7L,4L,9UL,0x53FDL,4UL,0x3829L,1L},{0x15AD9348F6ED65A4L,3L,0x4E622CCEL,0x209091A2L,-10L,0xA64F1B6CA527737DL,65526UL,-1L},{18446744073709551609UL,-1L,0x667E26D3L,0x16EB71B7L,0x7AEBL,4UL,65529UL,0x37L},{0x15AD9348F6ED65A4L,3L,0x4E622CCEL,0x209091A2L,-10L,0xA64F1B6CA527737DL,65526UL,-1L}},{{18446744073709551615UL,0x0FL,0x70C0D19FL,0UL,0x4204L,0xE95E9349FBB09F99L,65528UL,0x36L},{18446744073709551615UL,0x0FL,0x70C0D19FL,0UL,0x4204L,0xE95E9349FBB09F99L,65528UL,0x36L},{0xAFFE965EFC351E85L,-7L,4L,9UL,0x53FDL,4UL,0x3829L,1L},{0x15AD9348F6ED65A4L,3L,0x4E622CCEL,0x209091A2L,-10L,0xA64F1B6CA527737DL,65526UL,-1L},{18446744073709551609UL,-1L,0x667E26D3L,0x16EB71B7L,0x7AEBL,4UL,65529UL,0x37L},{0x15AD9348F6ED65A4L,3L,0x4E622CCEL,0x209091A2L,-10L,0xA64F1B6CA527737DL,65526UL,-1L}},{{18446744073709551615UL,0x0FL,0x70C0D19FL,0UL,0x4204L,0xE95E9349FBB09F99L,65528UL,0x36L},{18446744073709551615UL,0x0FL,0x70C0D19FL,0UL,0x4204L,0xE95E9349FBB09F99L,65528UL,0x36L},{0xAFFE965EFC351E85L,-7L,4L,9UL,0x53FDL,4UL,0x3829L,1L},{0x15AD9348F6ED65A4L,3L,0x4E622CCEL,0x209091A2L,-10L,0xA64F1B6CA527737DL,65526UL,-1L},{18446744073709551609UL,-1L,0x667E26D3L,0x16EB71B7L,0x7AEBL,4UL,65529UL,0x37L},{0x15AD9348F6ED65A4L,3L,0x4E622CCEL,0x209091A2L,-10L,0xA64F1B6CA527737DL,65526UL,-1L}}}, // p_1323->g_1184
        {0x06C7BD647B3F9055L,-1L,0L,5UL,1L,18446744073709551607UL,65535UL,0x7DL}, // p_1323->g_1185
        {18446744073709551615UL,1L,2L,0xD2034FDBL,1L,8UL,1UL,6L}, // p_1323->g_1186
        {0x66D126AFC31D2AEEL,2L,0x23985D95L,0x460CE47BL,0x33EBL,18446744073709551615UL,0x063FL,0x22L}, // p_1323->g_1188
        (VECTOR(int16_t, 2))(0L, 0L), // p_1323->g_1205
        0x4278937DL, // p_1323->g_1234
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 3L), 3L), // p_1323->g_1261
        (VECTOR(uint16_t, 16))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0xF805L), 0xF805L), 0xF805L, 65531UL, 0xF805L, (VECTOR(uint16_t, 2))(65531UL, 0xF805L), (VECTOR(uint16_t, 2))(65531UL, 0xF805L), 65531UL, 0xF805L, 65531UL, 0xF805L), // p_1323->g_1262
        (VECTOR(int32_t, 16))(0x5D343CC4L, (VECTOR(int32_t, 4))(0x5D343CC4L, (VECTOR(int32_t, 2))(0x5D343CC4L, (-1L)), (-1L)), (-1L), 0x5D343CC4L, (-1L), (VECTOR(int32_t, 2))(0x5D343CC4L, (-1L)), (VECTOR(int32_t, 2))(0x5D343CC4L, (-1L)), 0x5D343CC4L, (-1L), 0x5D343CC4L, (-1L)), // p_1323->g_1273
        &p_1323->g_764, // p_1323->g_1292
        (void*)0, // p_1323->g_1303
        (-1L), // p_1323->g_1308
        &p_1323->g_1308, // p_1323->g_1307
        &p_1323->g_1307, // p_1323->g_1306
        (-4L), // p_1323->g_1311
        &p_1323->g_1311, // p_1323->g_1310
        (void*)0, // p_1323->g_1312
        {{&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312},{&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312,&p_1323->g_1312}}, // p_1323->g_1309
        {{{&p_1323->g_1312,(void*)0},{&p_1323->g_1312,(void*)0},{&p_1323->g_1312,(void*)0}},{{&p_1323->g_1312,(void*)0},{&p_1323->g_1312,(void*)0},{&p_1323->g_1312,(void*)0}},{{&p_1323->g_1312,(void*)0},{&p_1323->g_1312,(void*)0},{&p_1323->g_1312,(void*)0}},{{&p_1323->g_1312,(void*)0},{&p_1323->g_1312,(void*)0},{&p_1323->g_1312,(void*)0}},{{&p_1323->g_1312,(void*)0},{&p_1323->g_1312,(void*)0},{&p_1323->g_1312,(void*)0}},{{&p_1323->g_1312,(void*)0},{&p_1323->g_1312,(void*)0},{&p_1323->g_1312,(void*)0}}}, // p_1323->g_1313
        {&p_1323->g_1313[0][2][1],&p_1323->g_1313[0][2][1],&p_1323->g_1313[0][2][1],&p_1323->g_1313[0][2][1],&p_1323->g_1313[0][2][1],&p_1323->g_1313[0][2][1],&p_1323->g_1313[0][2][1],&p_1323->g_1313[0][2][1],&p_1323->g_1313[0][2][1],&p_1323->g_1313[0][2][1]}, // p_1323->g_1305
        &p_1323->g_1305[9], // p_1323->g_1304
        0, // p_1323->v_collective
        sequence_input[get_global_id(0)], // p_1323->global_0_offset
        sequence_input[get_global_id(1)], // p_1323->global_1_offset
        sequence_input[get_global_id(2)], // p_1323->global_2_offset
        sequence_input[get_local_id(0)], // p_1323->local_0_offset
        sequence_input[get_local_id(1)], // p_1323->local_1_offset
        sequence_input[get_local_id(2)], // p_1323->local_2_offset
        sequence_input[get_group_id(0)], // p_1323->group_0_offset
        sequence_input[get_group_id(1)], // p_1323->group_1_offset
        sequence_input[get_group_id(2)], // p_1323->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 24)), permutations[0][get_linear_local_id()])), // p_1323->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1324 = c_1325;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1323);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1323->g_2.s0, "p_1323->g_2.s0", print_hash_value);
    transparent_crc(p_1323->g_2.s1, "p_1323->g_2.s1", print_hash_value);
    transparent_crc(p_1323->g_2.s2, "p_1323->g_2.s2", print_hash_value);
    transparent_crc(p_1323->g_2.s3, "p_1323->g_2.s3", print_hash_value);
    transparent_crc(p_1323->g_2.s4, "p_1323->g_2.s4", print_hash_value);
    transparent_crc(p_1323->g_2.s5, "p_1323->g_2.s5", print_hash_value);
    transparent_crc(p_1323->g_2.s6, "p_1323->g_2.s6", print_hash_value);
    transparent_crc(p_1323->g_2.s7, "p_1323->g_2.s7", print_hash_value);
    transparent_crc(p_1323->g_2.s8, "p_1323->g_2.s8", print_hash_value);
    transparent_crc(p_1323->g_2.s9, "p_1323->g_2.s9", print_hash_value);
    transparent_crc(p_1323->g_2.sa, "p_1323->g_2.sa", print_hash_value);
    transparent_crc(p_1323->g_2.sb, "p_1323->g_2.sb", print_hash_value);
    transparent_crc(p_1323->g_2.sc, "p_1323->g_2.sc", print_hash_value);
    transparent_crc(p_1323->g_2.sd, "p_1323->g_2.sd", print_hash_value);
    transparent_crc(p_1323->g_2.se, "p_1323->g_2.se", print_hash_value);
    transparent_crc(p_1323->g_2.sf, "p_1323->g_2.sf", print_hash_value);
    transparent_crc(p_1323->g_24, "p_1323->g_24", print_hash_value);
    transparent_crc(p_1323->g_27.s0, "p_1323->g_27.s0", print_hash_value);
    transparent_crc(p_1323->g_27.s1, "p_1323->g_27.s1", print_hash_value);
    transparent_crc(p_1323->g_27.s2, "p_1323->g_27.s2", print_hash_value);
    transparent_crc(p_1323->g_27.s3, "p_1323->g_27.s3", print_hash_value);
    transparent_crc(p_1323->g_27.s4, "p_1323->g_27.s4", print_hash_value);
    transparent_crc(p_1323->g_27.s5, "p_1323->g_27.s5", print_hash_value);
    transparent_crc(p_1323->g_27.s6, "p_1323->g_27.s6", print_hash_value);
    transparent_crc(p_1323->g_27.s7, "p_1323->g_27.s7", print_hash_value);
    transparent_crc(p_1323->g_27.s8, "p_1323->g_27.s8", print_hash_value);
    transparent_crc(p_1323->g_27.s9, "p_1323->g_27.s9", print_hash_value);
    transparent_crc(p_1323->g_27.sa, "p_1323->g_27.sa", print_hash_value);
    transparent_crc(p_1323->g_27.sb, "p_1323->g_27.sb", print_hash_value);
    transparent_crc(p_1323->g_27.sc, "p_1323->g_27.sc", print_hash_value);
    transparent_crc(p_1323->g_27.sd, "p_1323->g_27.sd", print_hash_value);
    transparent_crc(p_1323->g_27.se, "p_1323->g_27.se", print_hash_value);
    transparent_crc(p_1323->g_27.sf, "p_1323->g_27.sf", print_hash_value);
    transparent_crc(p_1323->g_29, "p_1323->g_29", print_hash_value);
    transparent_crc(p_1323->g_64, "p_1323->g_64", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1323->g_80[i], "p_1323->g_80[i]", print_hash_value);

    }
    transparent_crc(p_1323->g_90.x, "p_1323->g_90.x", print_hash_value);
    transparent_crc(p_1323->g_90.y, "p_1323->g_90.y", print_hash_value);
    transparent_crc(p_1323->g_123.x, "p_1323->g_123.x", print_hash_value);
    transparent_crc(p_1323->g_123.y, "p_1323->g_123.y", print_hash_value);
    transparent_crc(p_1323->g_130, "p_1323->g_130", print_hash_value);
    transparent_crc(p_1323->g_152, "p_1323->g_152", print_hash_value);
    transparent_crc(p_1323->g_231, "p_1323->g_231", print_hash_value);
    transparent_crc(p_1323->g_232, "p_1323->g_232", print_hash_value);
    transparent_crc(p_1323->g_239, "p_1323->g_239", print_hash_value);
    transparent_crc(p_1323->g_249.f0.f0, "p_1323->g_249.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_249.f0.f1, "p_1323->g_249.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_249.f0.f2, "p_1323->g_249.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_249.f0.f3, "p_1323->g_249.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_249.f0.f4, "p_1323->g_249.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_249.f0.f5, "p_1323->g_249.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_249.f0.f6, "p_1323->g_249.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_249.f0.f7, "p_1323->g_249.f0.f7", print_hash_value);
    transparent_crc(p_1323->g_257.x, "p_1323->g_257.x", print_hash_value);
    transparent_crc(p_1323->g_257.y, "p_1323->g_257.y", print_hash_value);
    transparent_crc(p_1323->g_291, "p_1323->g_291", print_hash_value);
    transparent_crc(p_1323->g_299.s0, "p_1323->g_299.s0", print_hash_value);
    transparent_crc(p_1323->g_299.s1, "p_1323->g_299.s1", print_hash_value);
    transparent_crc(p_1323->g_299.s2, "p_1323->g_299.s2", print_hash_value);
    transparent_crc(p_1323->g_299.s3, "p_1323->g_299.s3", print_hash_value);
    transparent_crc(p_1323->g_299.s4, "p_1323->g_299.s4", print_hash_value);
    transparent_crc(p_1323->g_299.s5, "p_1323->g_299.s5", print_hash_value);
    transparent_crc(p_1323->g_299.s6, "p_1323->g_299.s6", print_hash_value);
    transparent_crc(p_1323->g_299.s7, "p_1323->g_299.s7", print_hash_value);
    transparent_crc(p_1323->g_300.x, "p_1323->g_300.x", print_hash_value);
    transparent_crc(p_1323->g_300.y, "p_1323->g_300.y", print_hash_value);
    transparent_crc(p_1323->g_300.z, "p_1323->g_300.z", print_hash_value);
    transparent_crc(p_1323->g_300.w, "p_1323->g_300.w", print_hash_value);
    transparent_crc(p_1323->g_315.x, "p_1323->g_315.x", print_hash_value);
    transparent_crc(p_1323->g_315.y, "p_1323->g_315.y", print_hash_value);
    transparent_crc(p_1323->g_315.z, "p_1323->g_315.z", print_hash_value);
    transparent_crc(p_1323->g_315.w, "p_1323->g_315.w", print_hash_value);
    transparent_crc(p_1323->g_390.x, "p_1323->g_390.x", print_hash_value);
    transparent_crc(p_1323->g_390.y, "p_1323->g_390.y", print_hash_value);
    transparent_crc(p_1323->g_390.z, "p_1323->g_390.z", print_hash_value);
    transparent_crc(p_1323->g_390.w, "p_1323->g_390.w", print_hash_value);
    transparent_crc(p_1323->g_423.s0, "p_1323->g_423.s0", print_hash_value);
    transparent_crc(p_1323->g_423.s1, "p_1323->g_423.s1", print_hash_value);
    transparent_crc(p_1323->g_423.s2, "p_1323->g_423.s2", print_hash_value);
    transparent_crc(p_1323->g_423.s3, "p_1323->g_423.s3", print_hash_value);
    transparent_crc(p_1323->g_423.s4, "p_1323->g_423.s4", print_hash_value);
    transparent_crc(p_1323->g_423.s5, "p_1323->g_423.s5", print_hash_value);
    transparent_crc(p_1323->g_423.s6, "p_1323->g_423.s6", print_hash_value);
    transparent_crc(p_1323->g_423.s7, "p_1323->g_423.s7", print_hash_value);
    transparent_crc(p_1323->g_423.s8, "p_1323->g_423.s8", print_hash_value);
    transparent_crc(p_1323->g_423.s9, "p_1323->g_423.s9", print_hash_value);
    transparent_crc(p_1323->g_423.sa, "p_1323->g_423.sa", print_hash_value);
    transparent_crc(p_1323->g_423.sb, "p_1323->g_423.sb", print_hash_value);
    transparent_crc(p_1323->g_423.sc, "p_1323->g_423.sc", print_hash_value);
    transparent_crc(p_1323->g_423.sd, "p_1323->g_423.sd", print_hash_value);
    transparent_crc(p_1323->g_423.se, "p_1323->g_423.se", print_hash_value);
    transparent_crc(p_1323->g_423.sf, "p_1323->g_423.sf", print_hash_value);
    transparent_crc(p_1323->g_439, "p_1323->g_439", print_hash_value);
    transparent_crc(p_1323->g_440, "p_1323->g_440", print_hash_value);
    transparent_crc(p_1323->g_447.f0, "p_1323->g_447.f0", print_hash_value);
    transparent_crc(p_1323->g_447.f1, "p_1323->g_447.f1", print_hash_value);
    transparent_crc(p_1323->g_447.f2, "p_1323->g_447.f2", print_hash_value);
    transparent_crc(p_1323->g_447.f3, "p_1323->g_447.f3", print_hash_value);
    transparent_crc(p_1323->g_447.f4, "p_1323->g_447.f4", print_hash_value);
    transparent_crc(p_1323->g_447.f5, "p_1323->g_447.f5", print_hash_value);
    transparent_crc(p_1323->g_447.f6, "p_1323->g_447.f6", print_hash_value);
    transparent_crc(p_1323->g_447.f7, "p_1323->g_447.f7", print_hash_value);
    transparent_crc(p_1323->g_475, "p_1323->g_475", print_hash_value);
    transparent_crc(p_1323->g_499.x, "p_1323->g_499.x", print_hash_value);
    transparent_crc(p_1323->g_499.y, "p_1323->g_499.y", print_hash_value);
    transparent_crc(p_1323->g_499.z, "p_1323->g_499.z", print_hash_value);
    transparent_crc(p_1323->g_499.w, "p_1323->g_499.w", print_hash_value);
    transparent_crc(p_1323->g_500.s0, "p_1323->g_500.s0", print_hash_value);
    transparent_crc(p_1323->g_500.s1, "p_1323->g_500.s1", print_hash_value);
    transparent_crc(p_1323->g_500.s2, "p_1323->g_500.s2", print_hash_value);
    transparent_crc(p_1323->g_500.s3, "p_1323->g_500.s3", print_hash_value);
    transparent_crc(p_1323->g_500.s4, "p_1323->g_500.s4", print_hash_value);
    transparent_crc(p_1323->g_500.s5, "p_1323->g_500.s5", print_hash_value);
    transparent_crc(p_1323->g_500.s6, "p_1323->g_500.s6", print_hash_value);
    transparent_crc(p_1323->g_500.s7, "p_1323->g_500.s7", print_hash_value);
    transparent_crc(p_1323->g_500.s8, "p_1323->g_500.s8", print_hash_value);
    transparent_crc(p_1323->g_500.s9, "p_1323->g_500.s9", print_hash_value);
    transparent_crc(p_1323->g_500.sa, "p_1323->g_500.sa", print_hash_value);
    transparent_crc(p_1323->g_500.sb, "p_1323->g_500.sb", print_hash_value);
    transparent_crc(p_1323->g_500.sc, "p_1323->g_500.sc", print_hash_value);
    transparent_crc(p_1323->g_500.sd, "p_1323->g_500.sd", print_hash_value);
    transparent_crc(p_1323->g_500.se, "p_1323->g_500.se", print_hash_value);
    transparent_crc(p_1323->g_500.sf, "p_1323->g_500.sf", print_hash_value);
    transparent_crc(p_1323->g_501.x, "p_1323->g_501.x", print_hash_value);
    transparent_crc(p_1323->g_501.y, "p_1323->g_501.y", print_hash_value);
    transparent_crc(p_1323->g_501.z, "p_1323->g_501.z", print_hash_value);
    transparent_crc(p_1323->g_501.w, "p_1323->g_501.w", print_hash_value);
    transparent_crc(p_1323->g_531, "p_1323->g_531", print_hash_value);
    transparent_crc(p_1323->g_536, "p_1323->g_536", print_hash_value);
    transparent_crc(p_1323->g_546, "p_1323->g_546", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1323->g_588[i].f0.f0, "p_1323->g_588[i].f0.f0", print_hash_value);
        transparent_crc(p_1323->g_588[i].f0.f1, "p_1323->g_588[i].f0.f1", print_hash_value);
        transparent_crc(p_1323->g_588[i].f0.f2, "p_1323->g_588[i].f0.f2", print_hash_value);
        transparent_crc(p_1323->g_588[i].f0.f3, "p_1323->g_588[i].f0.f3", print_hash_value);
        transparent_crc(p_1323->g_588[i].f0.f4, "p_1323->g_588[i].f0.f4", print_hash_value);
        transparent_crc(p_1323->g_588[i].f0.f5, "p_1323->g_588[i].f0.f5", print_hash_value);
        transparent_crc(p_1323->g_588[i].f0.f6, "p_1323->g_588[i].f0.f6", print_hash_value);
        transparent_crc(p_1323->g_588[i].f0.f7, "p_1323->g_588[i].f0.f7", print_hash_value);

    }
    transparent_crc(p_1323->g_590.f0.f0, "p_1323->g_590.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_590.f0.f1, "p_1323->g_590.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_590.f0.f2, "p_1323->g_590.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_590.f0.f3, "p_1323->g_590.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_590.f0.f4, "p_1323->g_590.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_590.f0.f5, "p_1323->g_590.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_590.f0.f6, "p_1323->g_590.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_590.f0.f7, "p_1323->g_590.f0.f7", print_hash_value);
    transparent_crc(p_1323->g_591.f0.f0, "p_1323->g_591.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_591.f0.f1, "p_1323->g_591.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_591.f0.f2, "p_1323->g_591.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_591.f0.f3, "p_1323->g_591.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_591.f0.f4, "p_1323->g_591.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_591.f0.f5, "p_1323->g_591.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_591.f0.f6, "p_1323->g_591.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_591.f0.f7, "p_1323->g_591.f0.f7", print_hash_value);
    transparent_crc(p_1323->g_592.f0.f0, "p_1323->g_592.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_592.f0.f1, "p_1323->g_592.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_592.f0.f2, "p_1323->g_592.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_592.f0.f3, "p_1323->g_592.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_592.f0.f4, "p_1323->g_592.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_592.f0.f5, "p_1323->g_592.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_592.f0.f6, "p_1323->g_592.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_592.f0.f7, "p_1323->g_592.f0.f7", print_hash_value);
    transparent_crc(p_1323->g_593.f0.f0, "p_1323->g_593.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_593.f0.f1, "p_1323->g_593.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_593.f0.f2, "p_1323->g_593.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_593.f0.f3, "p_1323->g_593.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_593.f0.f4, "p_1323->g_593.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_593.f0.f5, "p_1323->g_593.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_593.f0.f6, "p_1323->g_593.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_593.f0.f7, "p_1323->g_593.f0.f7", print_hash_value);
    transparent_crc(p_1323->g_594.f0.f0, "p_1323->g_594.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_594.f0.f1, "p_1323->g_594.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_594.f0.f2, "p_1323->g_594.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_594.f0.f3, "p_1323->g_594.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_594.f0.f4, "p_1323->g_594.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_594.f0.f5, "p_1323->g_594.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_594.f0.f6, "p_1323->g_594.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_594.f0.f7, "p_1323->g_594.f0.f7", print_hash_value);
    transparent_crc(p_1323->g_595.f0.f0, "p_1323->g_595.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_595.f0.f1, "p_1323->g_595.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_595.f0.f2, "p_1323->g_595.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_595.f0.f3, "p_1323->g_595.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_595.f0.f4, "p_1323->g_595.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_595.f0.f5, "p_1323->g_595.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_595.f0.f6, "p_1323->g_595.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_595.f0.f7, "p_1323->g_595.f0.f7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1323->g_596[i].f0.f0, "p_1323->g_596[i].f0.f0", print_hash_value);
        transparent_crc(p_1323->g_596[i].f0.f1, "p_1323->g_596[i].f0.f1", print_hash_value);
        transparent_crc(p_1323->g_596[i].f0.f2, "p_1323->g_596[i].f0.f2", print_hash_value);
        transparent_crc(p_1323->g_596[i].f0.f3, "p_1323->g_596[i].f0.f3", print_hash_value);
        transparent_crc(p_1323->g_596[i].f0.f4, "p_1323->g_596[i].f0.f4", print_hash_value);
        transparent_crc(p_1323->g_596[i].f0.f5, "p_1323->g_596[i].f0.f5", print_hash_value);
        transparent_crc(p_1323->g_596[i].f0.f6, "p_1323->g_596[i].f0.f6", print_hash_value);
        transparent_crc(p_1323->g_596[i].f0.f7, "p_1323->g_596[i].f0.f7", print_hash_value);

    }
    transparent_crc(p_1323->g_597.f0.f0, "p_1323->g_597.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_597.f0.f1, "p_1323->g_597.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_597.f0.f2, "p_1323->g_597.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_597.f0.f3, "p_1323->g_597.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_597.f0.f4, "p_1323->g_597.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_597.f0.f5, "p_1323->g_597.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_597.f0.f6, "p_1323->g_597.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_597.f0.f7, "p_1323->g_597.f0.f7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1323->g_598[i][j].f0.f0, "p_1323->g_598[i][j].f0.f0", print_hash_value);
            transparent_crc(p_1323->g_598[i][j].f0.f1, "p_1323->g_598[i][j].f0.f1", print_hash_value);
            transparent_crc(p_1323->g_598[i][j].f0.f2, "p_1323->g_598[i][j].f0.f2", print_hash_value);
            transparent_crc(p_1323->g_598[i][j].f0.f3, "p_1323->g_598[i][j].f0.f3", print_hash_value);
            transparent_crc(p_1323->g_598[i][j].f0.f4, "p_1323->g_598[i][j].f0.f4", print_hash_value);
            transparent_crc(p_1323->g_598[i][j].f0.f5, "p_1323->g_598[i][j].f0.f5", print_hash_value);
            transparent_crc(p_1323->g_598[i][j].f0.f6, "p_1323->g_598[i][j].f0.f6", print_hash_value);
            transparent_crc(p_1323->g_598[i][j].f0.f7, "p_1323->g_598[i][j].f0.f7", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1323->g_599[i].f0.f0, "p_1323->g_599[i].f0.f0", print_hash_value);
        transparent_crc(p_1323->g_599[i].f0.f1, "p_1323->g_599[i].f0.f1", print_hash_value);
        transparent_crc(p_1323->g_599[i].f0.f2, "p_1323->g_599[i].f0.f2", print_hash_value);
        transparent_crc(p_1323->g_599[i].f0.f3, "p_1323->g_599[i].f0.f3", print_hash_value);
        transparent_crc(p_1323->g_599[i].f0.f4, "p_1323->g_599[i].f0.f4", print_hash_value);
        transparent_crc(p_1323->g_599[i].f0.f5, "p_1323->g_599[i].f0.f5", print_hash_value);
        transparent_crc(p_1323->g_599[i].f0.f6, "p_1323->g_599[i].f0.f6", print_hash_value);
        transparent_crc(p_1323->g_599[i].f0.f7, "p_1323->g_599[i].f0.f7", print_hash_value);

    }
    transparent_crc(p_1323->g_600.f0.f0, "p_1323->g_600.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_600.f0.f1, "p_1323->g_600.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_600.f0.f2, "p_1323->g_600.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_600.f0.f3, "p_1323->g_600.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_600.f0.f4, "p_1323->g_600.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_600.f0.f5, "p_1323->g_600.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_600.f0.f6, "p_1323->g_600.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_600.f0.f7, "p_1323->g_600.f0.f7", print_hash_value);
    transparent_crc(p_1323->g_601.f0.f0, "p_1323->g_601.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_601.f0.f1, "p_1323->g_601.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_601.f0.f2, "p_1323->g_601.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_601.f0.f3, "p_1323->g_601.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_601.f0.f4, "p_1323->g_601.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_601.f0.f5, "p_1323->g_601.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_601.f0.f6, "p_1323->g_601.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_601.f0.f7, "p_1323->g_601.f0.f7", print_hash_value);
    transparent_crc(p_1323->g_602.f0.f0, "p_1323->g_602.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_602.f0.f1, "p_1323->g_602.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_602.f0.f2, "p_1323->g_602.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_602.f0.f3, "p_1323->g_602.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_602.f0.f4, "p_1323->g_602.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_602.f0.f5, "p_1323->g_602.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_602.f0.f6, "p_1323->g_602.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_602.f0.f7, "p_1323->g_602.f0.f7", print_hash_value);
    transparent_crc(p_1323->g_603.f0.f0, "p_1323->g_603.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_603.f0.f1, "p_1323->g_603.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_603.f0.f2, "p_1323->g_603.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_603.f0.f3, "p_1323->g_603.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_603.f0.f4, "p_1323->g_603.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_603.f0.f5, "p_1323->g_603.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_603.f0.f6, "p_1323->g_603.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_603.f0.f7, "p_1323->g_603.f0.f7", print_hash_value);
    transparent_crc(p_1323->g_604.f0.f0, "p_1323->g_604.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_604.f0.f1, "p_1323->g_604.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_604.f0.f2, "p_1323->g_604.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_604.f0.f3, "p_1323->g_604.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_604.f0.f4, "p_1323->g_604.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_604.f0.f5, "p_1323->g_604.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_604.f0.f6, "p_1323->g_604.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_604.f0.f7, "p_1323->g_604.f0.f7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1323->g_639[i][j].f0, "p_1323->g_639[i][j].f0", print_hash_value);
            transparent_crc(p_1323->g_639[i][j].f1, "p_1323->g_639[i][j].f1", print_hash_value);
            transparent_crc(p_1323->g_639[i][j].f2, "p_1323->g_639[i][j].f2", print_hash_value);
            transparent_crc(p_1323->g_639[i][j].f3, "p_1323->g_639[i][j].f3", print_hash_value);
            transparent_crc(p_1323->g_639[i][j].f4, "p_1323->g_639[i][j].f4", print_hash_value);
            transparent_crc(p_1323->g_639[i][j].f5, "p_1323->g_639[i][j].f5", print_hash_value);
            transparent_crc(p_1323->g_639[i][j].f6, "p_1323->g_639[i][j].f6", print_hash_value);
            transparent_crc(p_1323->g_639[i][j].f7, "p_1323->g_639[i][j].f7", print_hash_value);

        }
    }
    transparent_crc(p_1323->g_670.x, "p_1323->g_670.x", print_hash_value);
    transparent_crc(p_1323->g_670.y, "p_1323->g_670.y", print_hash_value);
    transparent_crc(p_1323->g_670.z, "p_1323->g_670.z", print_hash_value);
    transparent_crc(p_1323->g_670.w, "p_1323->g_670.w", print_hash_value);
    transparent_crc(p_1323->g_676.s0, "p_1323->g_676.s0", print_hash_value);
    transparent_crc(p_1323->g_676.s1, "p_1323->g_676.s1", print_hash_value);
    transparent_crc(p_1323->g_676.s2, "p_1323->g_676.s2", print_hash_value);
    transparent_crc(p_1323->g_676.s3, "p_1323->g_676.s3", print_hash_value);
    transparent_crc(p_1323->g_676.s4, "p_1323->g_676.s4", print_hash_value);
    transparent_crc(p_1323->g_676.s5, "p_1323->g_676.s5", print_hash_value);
    transparent_crc(p_1323->g_676.s6, "p_1323->g_676.s6", print_hash_value);
    transparent_crc(p_1323->g_676.s7, "p_1323->g_676.s7", print_hash_value);
    transparent_crc(p_1323->g_676.s8, "p_1323->g_676.s8", print_hash_value);
    transparent_crc(p_1323->g_676.s9, "p_1323->g_676.s9", print_hash_value);
    transparent_crc(p_1323->g_676.sa, "p_1323->g_676.sa", print_hash_value);
    transparent_crc(p_1323->g_676.sb, "p_1323->g_676.sb", print_hash_value);
    transparent_crc(p_1323->g_676.sc, "p_1323->g_676.sc", print_hash_value);
    transparent_crc(p_1323->g_676.sd, "p_1323->g_676.sd", print_hash_value);
    transparent_crc(p_1323->g_676.se, "p_1323->g_676.se", print_hash_value);
    transparent_crc(p_1323->g_676.sf, "p_1323->g_676.sf", print_hash_value);
    transparent_crc(p_1323->g_743.s0, "p_1323->g_743.s0", print_hash_value);
    transparent_crc(p_1323->g_743.s1, "p_1323->g_743.s1", print_hash_value);
    transparent_crc(p_1323->g_743.s2, "p_1323->g_743.s2", print_hash_value);
    transparent_crc(p_1323->g_743.s3, "p_1323->g_743.s3", print_hash_value);
    transparent_crc(p_1323->g_743.s4, "p_1323->g_743.s4", print_hash_value);
    transparent_crc(p_1323->g_743.s5, "p_1323->g_743.s5", print_hash_value);
    transparent_crc(p_1323->g_743.s6, "p_1323->g_743.s6", print_hash_value);
    transparent_crc(p_1323->g_743.s7, "p_1323->g_743.s7", print_hash_value);
    transparent_crc(p_1323->g_791.s0, "p_1323->g_791.s0", print_hash_value);
    transparent_crc(p_1323->g_791.s1, "p_1323->g_791.s1", print_hash_value);
    transparent_crc(p_1323->g_791.s2, "p_1323->g_791.s2", print_hash_value);
    transparent_crc(p_1323->g_791.s3, "p_1323->g_791.s3", print_hash_value);
    transparent_crc(p_1323->g_791.s4, "p_1323->g_791.s4", print_hash_value);
    transparent_crc(p_1323->g_791.s5, "p_1323->g_791.s5", print_hash_value);
    transparent_crc(p_1323->g_791.s6, "p_1323->g_791.s6", print_hash_value);
    transparent_crc(p_1323->g_791.s7, "p_1323->g_791.s7", print_hash_value);
    transparent_crc(p_1323->g_791.s8, "p_1323->g_791.s8", print_hash_value);
    transparent_crc(p_1323->g_791.s9, "p_1323->g_791.s9", print_hash_value);
    transparent_crc(p_1323->g_791.sa, "p_1323->g_791.sa", print_hash_value);
    transparent_crc(p_1323->g_791.sb, "p_1323->g_791.sb", print_hash_value);
    transparent_crc(p_1323->g_791.sc, "p_1323->g_791.sc", print_hash_value);
    transparent_crc(p_1323->g_791.sd, "p_1323->g_791.sd", print_hash_value);
    transparent_crc(p_1323->g_791.se, "p_1323->g_791.se", print_hash_value);
    transparent_crc(p_1323->g_791.sf, "p_1323->g_791.sf", print_hash_value);
    transparent_crc(p_1323->g_792.x, "p_1323->g_792.x", print_hash_value);
    transparent_crc(p_1323->g_792.y, "p_1323->g_792.y", print_hash_value);
    transparent_crc(p_1323->g_792.z, "p_1323->g_792.z", print_hash_value);
    transparent_crc(p_1323->g_792.w, "p_1323->g_792.w", print_hash_value);
    transparent_crc(p_1323->g_798.f0, "p_1323->g_798.f0", print_hash_value);
    transparent_crc(p_1323->g_798.f1, "p_1323->g_798.f1", print_hash_value);
    transparent_crc(p_1323->g_798.f2, "p_1323->g_798.f2", print_hash_value);
    transparent_crc(p_1323->g_798.f3, "p_1323->g_798.f3", print_hash_value);
    transparent_crc(p_1323->g_798.f4, "p_1323->g_798.f4", print_hash_value);
    transparent_crc(p_1323->g_798.f5, "p_1323->g_798.f5", print_hash_value);
    transparent_crc(p_1323->g_798.f6, "p_1323->g_798.f6", print_hash_value);
    transparent_crc(p_1323->g_798.f7, "p_1323->g_798.f7", print_hash_value);
    transparent_crc(p_1323->g_808, "p_1323->g_808", print_hash_value);
    transparent_crc(p_1323->g_813.s0, "p_1323->g_813.s0", print_hash_value);
    transparent_crc(p_1323->g_813.s1, "p_1323->g_813.s1", print_hash_value);
    transparent_crc(p_1323->g_813.s2, "p_1323->g_813.s2", print_hash_value);
    transparent_crc(p_1323->g_813.s3, "p_1323->g_813.s3", print_hash_value);
    transparent_crc(p_1323->g_813.s4, "p_1323->g_813.s4", print_hash_value);
    transparent_crc(p_1323->g_813.s5, "p_1323->g_813.s5", print_hash_value);
    transparent_crc(p_1323->g_813.s6, "p_1323->g_813.s6", print_hash_value);
    transparent_crc(p_1323->g_813.s7, "p_1323->g_813.s7", print_hash_value);
    transparent_crc(p_1323->g_813.s8, "p_1323->g_813.s8", print_hash_value);
    transparent_crc(p_1323->g_813.s9, "p_1323->g_813.s9", print_hash_value);
    transparent_crc(p_1323->g_813.sa, "p_1323->g_813.sa", print_hash_value);
    transparent_crc(p_1323->g_813.sb, "p_1323->g_813.sb", print_hash_value);
    transparent_crc(p_1323->g_813.sc, "p_1323->g_813.sc", print_hash_value);
    transparent_crc(p_1323->g_813.sd, "p_1323->g_813.sd", print_hash_value);
    transparent_crc(p_1323->g_813.se, "p_1323->g_813.se", print_hash_value);
    transparent_crc(p_1323->g_813.sf, "p_1323->g_813.sf", print_hash_value);
    transparent_crc(p_1323->g_826, "p_1323->g_826", print_hash_value);
    transparent_crc(p_1323->g_845.x, "p_1323->g_845.x", print_hash_value);
    transparent_crc(p_1323->g_845.y, "p_1323->g_845.y", print_hash_value);
    transparent_crc(p_1323->g_845.z, "p_1323->g_845.z", print_hash_value);
    transparent_crc(p_1323->g_845.w, "p_1323->g_845.w", print_hash_value);
    transparent_crc(p_1323->g_848.x, "p_1323->g_848.x", print_hash_value);
    transparent_crc(p_1323->g_848.y, "p_1323->g_848.y", print_hash_value);
    transparent_crc(p_1323->g_848.z, "p_1323->g_848.z", print_hash_value);
    transparent_crc(p_1323->g_848.w, "p_1323->g_848.w", print_hash_value);
    transparent_crc(p_1323->g_853.s0, "p_1323->g_853.s0", print_hash_value);
    transparent_crc(p_1323->g_853.s1, "p_1323->g_853.s1", print_hash_value);
    transparent_crc(p_1323->g_853.s2, "p_1323->g_853.s2", print_hash_value);
    transparent_crc(p_1323->g_853.s3, "p_1323->g_853.s3", print_hash_value);
    transparent_crc(p_1323->g_853.s4, "p_1323->g_853.s4", print_hash_value);
    transparent_crc(p_1323->g_853.s5, "p_1323->g_853.s5", print_hash_value);
    transparent_crc(p_1323->g_853.s6, "p_1323->g_853.s6", print_hash_value);
    transparent_crc(p_1323->g_853.s7, "p_1323->g_853.s7", print_hash_value);
    transparent_crc(p_1323->g_853.s8, "p_1323->g_853.s8", print_hash_value);
    transparent_crc(p_1323->g_853.s9, "p_1323->g_853.s9", print_hash_value);
    transparent_crc(p_1323->g_853.sa, "p_1323->g_853.sa", print_hash_value);
    transparent_crc(p_1323->g_853.sb, "p_1323->g_853.sb", print_hash_value);
    transparent_crc(p_1323->g_853.sc, "p_1323->g_853.sc", print_hash_value);
    transparent_crc(p_1323->g_853.sd, "p_1323->g_853.sd", print_hash_value);
    transparent_crc(p_1323->g_853.se, "p_1323->g_853.se", print_hash_value);
    transparent_crc(p_1323->g_853.sf, "p_1323->g_853.sf", print_hash_value);
    transparent_crc(p_1323->g_921.s0, "p_1323->g_921.s0", print_hash_value);
    transparent_crc(p_1323->g_921.s1, "p_1323->g_921.s1", print_hash_value);
    transparent_crc(p_1323->g_921.s2, "p_1323->g_921.s2", print_hash_value);
    transparent_crc(p_1323->g_921.s3, "p_1323->g_921.s3", print_hash_value);
    transparent_crc(p_1323->g_921.s4, "p_1323->g_921.s4", print_hash_value);
    transparent_crc(p_1323->g_921.s5, "p_1323->g_921.s5", print_hash_value);
    transparent_crc(p_1323->g_921.s6, "p_1323->g_921.s6", print_hash_value);
    transparent_crc(p_1323->g_921.s7, "p_1323->g_921.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1323->g_948[i][j].f0, "p_1323->g_948[i][j].f0", print_hash_value);
            transparent_crc(p_1323->g_948[i][j].f1, "p_1323->g_948[i][j].f1", print_hash_value);
            transparent_crc(p_1323->g_948[i][j].f2, "p_1323->g_948[i][j].f2", print_hash_value);
            transparent_crc(p_1323->g_948[i][j].f3, "p_1323->g_948[i][j].f3", print_hash_value);
            transparent_crc(p_1323->g_948[i][j].f4, "p_1323->g_948[i][j].f4", print_hash_value);
            transparent_crc(p_1323->g_948[i][j].f5, "p_1323->g_948[i][j].f5", print_hash_value);
            transparent_crc(p_1323->g_948[i][j].f6, "p_1323->g_948[i][j].f6", print_hash_value);
            transparent_crc(p_1323->g_948[i][j].f7, "p_1323->g_948[i][j].f7", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1323->g_950[i].f0, "p_1323->g_950[i].f0", print_hash_value);
        transparent_crc(p_1323->g_950[i].f1, "p_1323->g_950[i].f1", print_hash_value);
        transparent_crc(p_1323->g_950[i].f2, "p_1323->g_950[i].f2", print_hash_value);
        transparent_crc(p_1323->g_950[i].f3, "p_1323->g_950[i].f3", print_hash_value);
        transparent_crc(p_1323->g_950[i].f4, "p_1323->g_950[i].f4", print_hash_value);
        transparent_crc(p_1323->g_950[i].f5, "p_1323->g_950[i].f5", print_hash_value);
        transparent_crc(p_1323->g_950[i].f6, "p_1323->g_950[i].f6", print_hash_value);
        transparent_crc(p_1323->g_950[i].f7, "p_1323->g_950[i].f7", print_hash_value);

    }
    transparent_crc(p_1323->g_956.f0.f0, "p_1323->g_956.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_956.f0.f1, "p_1323->g_956.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_956.f0.f2, "p_1323->g_956.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_956.f0.f3, "p_1323->g_956.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_956.f0.f4, "p_1323->g_956.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_956.f0.f5, "p_1323->g_956.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_956.f0.f6, "p_1323->g_956.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_956.f0.f7, "p_1323->g_956.f0.f7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1323->g_1016[i][j], "p_1323->g_1016[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1323->g_1095, "p_1323->g_1095", print_hash_value);
    transparent_crc(p_1323->g_1129.f0.f0, "p_1323->g_1129.f0.f0", print_hash_value);
    transparent_crc(p_1323->g_1129.f0.f1, "p_1323->g_1129.f0.f1", print_hash_value);
    transparent_crc(p_1323->g_1129.f0.f2, "p_1323->g_1129.f0.f2", print_hash_value);
    transparent_crc(p_1323->g_1129.f0.f3, "p_1323->g_1129.f0.f3", print_hash_value);
    transparent_crc(p_1323->g_1129.f0.f4, "p_1323->g_1129.f0.f4", print_hash_value);
    transparent_crc(p_1323->g_1129.f0.f5, "p_1323->g_1129.f0.f5", print_hash_value);
    transparent_crc(p_1323->g_1129.f0.f6, "p_1323->g_1129.f0.f6", print_hash_value);
    transparent_crc(p_1323->g_1129.f0.f7, "p_1323->g_1129.f0.f7", print_hash_value);
    transparent_crc(p_1323->g_1136.s0, "p_1323->g_1136.s0", print_hash_value);
    transparent_crc(p_1323->g_1136.s1, "p_1323->g_1136.s1", print_hash_value);
    transparent_crc(p_1323->g_1136.s2, "p_1323->g_1136.s2", print_hash_value);
    transparent_crc(p_1323->g_1136.s3, "p_1323->g_1136.s3", print_hash_value);
    transparent_crc(p_1323->g_1136.s4, "p_1323->g_1136.s4", print_hash_value);
    transparent_crc(p_1323->g_1136.s5, "p_1323->g_1136.s5", print_hash_value);
    transparent_crc(p_1323->g_1136.s6, "p_1323->g_1136.s6", print_hash_value);
    transparent_crc(p_1323->g_1136.s7, "p_1323->g_1136.s7", print_hash_value);
    transparent_crc(p_1323->g_1136.s8, "p_1323->g_1136.s8", print_hash_value);
    transparent_crc(p_1323->g_1136.s9, "p_1323->g_1136.s9", print_hash_value);
    transparent_crc(p_1323->g_1136.sa, "p_1323->g_1136.sa", print_hash_value);
    transparent_crc(p_1323->g_1136.sb, "p_1323->g_1136.sb", print_hash_value);
    transparent_crc(p_1323->g_1136.sc, "p_1323->g_1136.sc", print_hash_value);
    transparent_crc(p_1323->g_1136.sd, "p_1323->g_1136.sd", print_hash_value);
    transparent_crc(p_1323->g_1136.se, "p_1323->g_1136.se", print_hash_value);
    transparent_crc(p_1323->g_1136.sf, "p_1323->g_1136.sf", print_hash_value);
    transparent_crc(p_1323->g_1161.x, "p_1323->g_1161.x", print_hash_value);
    transparent_crc(p_1323->g_1161.y, "p_1323->g_1161.y", print_hash_value);
    transparent_crc(p_1323->g_1161.z, "p_1323->g_1161.z", print_hash_value);
    transparent_crc(p_1323->g_1161.w, "p_1323->g_1161.w", print_hash_value);
    transparent_crc(p_1323->g_1163.s0, "p_1323->g_1163.s0", print_hash_value);
    transparent_crc(p_1323->g_1163.s1, "p_1323->g_1163.s1", print_hash_value);
    transparent_crc(p_1323->g_1163.s2, "p_1323->g_1163.s2", print_hash_value);
    transparent_crc(p_1323->g_1163.s3, "p_1323->g_1163.s3", print_hash_value);
    transparent_crc(p_1323->g_1163.s4, "p_1323->g_1163.s4", print_hash_value);
    transparent_crc(p_1323->g_1163.s5, "p_1323->g_1163.s5", print_hash_value);
    transparent_crc(p_1323->g_1163.s6, "p_1323->g_1163.s6", print_hash_value);
    transparent_crc(p_1323->g_1163.s7, "p_1323->g_1163.s7", print_hash_value);
    transparent_crc(p_1323->g_1170.f0, "p_1323->g_1170.f0", print_hash_value);
    transparent_crc(p_1323->g_1170.f1, "p_1323->g_1170.f1", print_hash_value);
    transparent_crc(p_1323->g_1170.f2, "p_1323->g_1170.f2", print_hash_value);
    transparent_crc(p_1323->g_1170.f3, "p_1323->g_1170.f3", print_hash_value);
    transparent_crc(p_1323->g_1170.f4, "p_1323->g_1170.f4", print_hash_value);
    transparent_crc(p_1323->g_1170.f5, "p_1323->g_1170.f5", print_hash_value);
    transparent_crc(p_1323->g_1170.f6, "p_1323->g_1170.f6", print_hash_value);
    transparent_crc(p_1323->g_1170.f7, "p_1323->g_1170.f7", print_hash_value);
    transparent_crc(p_1323->g_1171.f0, "p_1323->g_1171.f0", print_hash_value);
    transparent_crc(p_1323->g_1171.f1, "p_1323->g_1171.f1", print_hash_value);
    transparent_crc(p_1323->g_1171.f2, "p_1323->g_1171.f2", print_hash_value);
    transparent_crc(p_1323->g_1171.f3, "p_1323->g_1171.f3", print_hash_value);
    transparent_crc(p_1323->g_1171.f4, "p_1323->g_1171.f4", print_hash_value);
    transparent_crc(p_1323->g_1171.f5, "p_1323->g_1171.f5", print_hash_value);
    transparent_crc(p_1323->g_1171.f6, "p_1323->g_1171.f6", print_hash_value);
    transparent_crc(p_1323->g_1171.f7, "p_1323->g_1171.f7", print_hash_value);
    transparent_crc(p_1323->g_1172.f0, "p_1323->g_1172.f0", print_hash_value);
    transparent_crc(p_1323->g_1172.f1, "p_1323->g_1172.f1", print_hash_value);
    transparent_crc(p_1323->g_1172.f2, "p_1323->g_1172.f2", print_hash_value);
    transparent_crc(p_1323->g_1172.f3, "p_1323->g_1172.f3", print_hash_value);
    transparent_crc(p_1323->g_1172.f4, "p_1323->g_1172.f4", print_hash_value);
    transparent_crc(p_1323->g_1172.f5, "p_1323->g_1172.f5", print_hash_value);
    transparent_crc(p_1323->g_1172.f6, "p_1323->g_1172.f6", print_hash_value);
    transparent_crc(p_1323->g_1172.f7, "p_1323->g_1172.f7", print_hash_value);
    transparent_crc(p_1323->g_1174.f0, "p_1323->g_1174.f0", print_hash_value);
    transparent_crc(p_1323->g_1174.f1, "p_1323->g_1174.f1", print_hash_value);
    transparent_crc(p_1323->g_1174.f2, "p_1323->g_1174.f2", print_hash_value);
    transparent_crc(p_1323->g_1174.f3, "p_1323->g_1174.f3", print_hash_value);
    transparent_crc(p_1323->g_1174.f4, "p_1323->g_1174.f4", print_hash_value);
    transparent_crc(p_1323->g_1174.f5, "p_1323->g_1174.f5", print_hash_value);
    transparent_crc(p_1323->g_1174.f6, "p_1323->g_1174.f6", print_hash_value);
    transparent_crc(p_1323->g_1174.f7, "p_1323->g_1174.f7", print_hash_value);
    transparent_crc(p_1323->g_1175.f0, "p_1323->g_1175.f0", print_hash_value);
    transparent_crc(p_1323->g_1175.f1, "p_1323->g_1175.f1", print_hash_value);
    transparent_crc(p_1323->g_1175.f2, "p_1323->g_1175.f2", print_hash_value);
    transparent_crc(p_1323->g_1175.f3, "p_1323->g_1175.f3", print_hash_value);
    transparent_crc(p_1323->g_1175.f4, "p_1323->g_1175.f4", print_hash_value);
    transparent_crc(p_1323->g_1175.f5, "p_1323->g_1175.f5", print_hash_value);
    transparent_crc(p_1323->g_1175.f6, "p_1323->g_1175.f6", print_hash_value);
    transparent_crc(p_1323->g_1175.f7, "p_1323->g_1175.f7", print_hash_value);
    transparent_crc(p_1323->g_1176.f0, "p_1323->g_1176.f0", print_hash_value);
    transparent_crc(p_1323->g_1176.f1, "p_1323->g_1176.f1", print_hash_value);
    transparent_crc(p_1323->g_1176.f2, "p_1323->g_1176.f2", print_hash_value);
    transparent_crc(p_1323->g_1176.f3, "p_1323->g_1176.f3", print_hash_value);
    transparent_crc(p_1323->g_1176.f4, "p_1323->g_1176.f4", print_hash_value);
    transparent_crc(p_1323->g_1176.f5, "p_1323->g_1176.f5", print_hash_value);
    transparent_crc(p_1323->g_1176.f6, "p_1323->g_1176.f6", print_hash_value);
    transparent_crc(p_1323->g_1176.f7, "p_1323->g_1176.f7", print_hash_value);
    transparent_crc(p_1323->g_1177.f0, "p_1323->g_1177.f0", print_hash_value);
    transparent_crc(p_1323->g_1177.f1, "p_1323->g_1177.f1", print_hash_value);
    transparent_crc(p_1323->g_1177.f2, "p_1323->g_1177.f2", print_hash_value);
    transparent_crc(p_1323->g_1177.f3, "p_1323->g_1177.f3", print_hash_value);
    transparent_crc(p_1323->g_1177.f4, "p_1323->g_1177.f4", print_hash_value);
    transparent_crc(p_1323->g_1177.f5, "p_1323->g_1177.f5", print_hash_value);
    transparent_crc(p_1323->g_1177.f6, "p_1323->g_1177.f6", print_hash_value);
    transparent_crc(p_1323->g_1177.f7, "p_1323->g_1177.f7", print_hash_value);
    transparent_crc(p_1323->g_1178.f0, "p_1323->g_1178.f0", print_hash_value);
    transparent_crc(p_1323->g_1178.f1, "p_1323->g_1178.f1", print_hash_value);
    transparent_crc(p_1323->g_1178.f2, "p_1323->g_1178.f2", print_hash_value);
    transparent_crc(p_1323->g_1178.f3, "p_1323->g_1178.f3", print_hash_value);
    transparent_crc(p_1323->g_1178.f4, "p_1323->g_1178.f4", print_hash_value);
    transparent_crc(p_1323->g_1178.f5, "p_1323->g_1178.f5", print_hash_value);
    transparent_crc(p_1323->g_1178.f6, "p_1323->g_1178.f6", print_hash_value);
    transparent_crc(p_1323->g_1178.f7, "p_1323->g_1178.f7", print_hash_value);
    transparent_crc(p_1323->g_1179.f0, "p_1323->g_1179.f0", print_hash_value);
    transparent_crc(p_1323->g_1179.f1, "p_1323->g_1179.f1", print_hash_value);
    transparent_crc(p_1323->g_1179.f2, "p_1323->g_1179.f2", print_hash_value);
    transparent_crc(p_1323->g_1179.f3, "p_1323->g_1179.f3", print_hash_value);
    transparent_crc(p_1323->g_1179.f4, "p_1323->g_1179.f4", print_hash_value);
    transparent_crc(p_1323->g_1179.f5, "p_1323->g_1179.f5", print_hash_value);
    transparent_crc(p_1323->g_1179.f6, "p_1323->g_1179.f6", print_hash_value);
    transparent_crc(p_1323->g_1179.f7, "p_1323->g_1179.f7", print_hash_value);
    transparent_crc(p_1323->g_1180.f0, "p_1323->g_1180.f0", print_hash_value);
    transparent_crc(p_1323->g_1180.f1, "p_1323->g_1180.f1", print_hash_value);
    transparent_crc(p_1323->g_1180.f2, "p_1323->g_1180.f2", print_hash_value);
    transparent_crc(p_1323->g_1180.f3, "p_1323->g_1180.f3", print_hash_value);
    transparent_crc(p_1323->g_1180.f4, "p_1323->g_1180.f4", print_hash_value);
    transparent_crc(p_1323->g_1180.f5, "p_1323->g_1180.f5", print_hash_value);
    transparent_crc(p_1323->g_1180.f6, "p_1323->g_1180.f6", print_hash_value);
    transparent_crc(p_1323->g_1180.f7, "p_1323->g_1180.f7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1323->g_1181[i].f0, "p_1323->g_1181[i].f0", print_hash_value);
        transparent_crc(p_1323->g_1181[i].f1, "p_1323->g_1181[i].f1", print_hash_value);
        transparent_crc(p_1323->g_1181[i].f2, "p_1323->g_1181[i].f2", print_hash_value);
        transparent_crc(p_1323->g_1181[i].f3, "p_1323->g_1181[i].f3", print_hash_value);
        transparent_crc(p_1323->g_1181[i].f4, "p_1323->g_1181[i].f4", print_hash_value);
        transparent_crc(p_1323->g_1181[i].f5, "p_1323->g_1181[i].f5", print_hash_value);
        transparent_crc(p_1323->g_1181[i].f6, "p_1323->g_1181[i].f6", print_hash_value);
        transparent_crc(p_1323->g_1181[i].f7, "p_1323->g_1181[i].f7", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1323->g_1182[i].f0, "p_1323->g_1182[i].f0", print_hash_value);
        transparent_crc(p_1323->g_1182[i].f1, "p_1323->g_1182[i].f1", print_hash_value);
        transparent_crc(p_1323->g_1182[i].f2, "p_1323->g_1182[i].f2", print_hash_value);
        transparent_crc(p_1323->g_1182[i].f3, "p_1323->g_1182[i].f3", print_hash_value);
        transparent_crc(p_1323->g_1182[i].f4, "p_1323->g_1182[i].f4", print_hash_value);
        transparent_crc(p_1323->g_1182[i].f5, "p_1323->g_1182[i].f5", print_hash_value);
        transparent_crc(p_1323->g_1182[i].f6, "p_1323->g_1182[i].f6", print_hash_value);
        transparent_crc(p_1323->g_1182[i].f7, "p_1323->g_1182[i].f7", print_hash_value);

    }
    transparent_crc(p_1323->g_1183.f0, "p_1323->g_1183.f0", print_hash_value);
    transparent_crc(p_1323->g_1183.f1, "p_1323->g_1183.f1", print_hash_value);
    transparent_crc(p_1323->g_1183.f2, "p_1323->g_1183.f2", print_hash_value);
    transparent_crc(p_1323->g_1183.f3, "p_1323->g_1183.f3", print_hash_value);
    transparent_crc(p_1323->g_1183.f4, "p_1323->g_1183.f4", print_hash_value);
    transparent_crc(p_1323->g_1183.f5, "p_1323->g_1183.f5", print_hash_value);
    transparent_crc(p_1323->g_1183.f6, "p_1323->g_1183.f6", print_hash_value);
    transparent_crc(p_1323->g_1183.f7, "p_1323->g_1183.f7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1323->g_1184[i][j].f0, "p_1323->g_1184[i][j].f0", print_hash_value);
            transparent_crc(p_1323->g_1184[i][j].f1, "p_1323->g_1184[i][j].f1", print_hash_value);
            transparent_crc(p_1323->g_1184[i][j].f2, "p_1323->g_1184[i][j].f2", print_hash_value);
            transparent_crc(p_1323->g_1184[i][j].f3, "p_1323->g_1184[i][j].f3", print_hash_value);
            transparent_crc(p_1323->g_1184[i][j].f4, "p_1323->g_1184[i][j].f4", print_hash_value);
            transparent_crc(p_1323->g_1184[i][j].f5, "p_1323->g_1184[i][j].f5", print_hash_value);
            transparent_crc(p_1323->g_1184[i][j].f6, "p_1323->g_1184[i][j].f6", print_hash_value);
            transparent_crc(p_1323->g_1184[i][j].f7, "p_1323->g_1184[i][j].f7", print_hash_value);

        }
    }
    transparent_crc(p_1323->g_1185.f0, "p_1323->g_1185.f0", print_hash_value);
    transparent_crc(p_1323->g_1185.f1, "p_1323->g_1185.f1", print_hash_value);
    transparent_crc(p_1323->g_1185.f2, "p_1323->g_1185.f2", print_hash_value);
    transparent_crc(p_1323->g_1185.f3, "p_1323->g_1185.f3", print_hash_value);
    transparent_crc(p_1323->g_1185.f4, "p_1323->g_1185.f4", print_hash_value);
    transparent_crc(p_1323->g_1185.f5, "p_1323->g_1185.f5", print_hash_value);
    transparent_crc(p_1323->g_1185.f6, "p_1323->g_1185.f6", print_hash_value);
    transparent_crc(p_1323->g_1185.f7, "p_1323->g_1185.f7", print_hash_value);
    transparent_crc(p_1323->g_1186.f0, "p_1323->g_1186.f0", print_hash_value);
    transparent_crc(p_1323->g_1186.f1, "p_1323->g_1186.f1", print_hash_value);
    transparent_crc(p_1323->g_1186.f2, "p_1323->g_1186.f2", print_hash_value);
    transparent_crc(p_1323->g_1186.f3, "p_1323->g_1186.f3", print_hash_value);
    transparent_crc(p_1323->g_1186.f4, "p_1323->g_1186.f4", print_hash_value);
    transparent_crc(p_1323->g_1186.f5, "p_1323->g_1186.f5", print_hash_value);
    transparent_crc(p_1323->g_1186.f6, "p_1323->g_1186.f6", print_hash_value);
    transparent_crc(p_1323->g_1186.f7, "p_1323->g_1186.f7", print_hash_value);
    transparent_crc(p_1323->g_1188.f0, "p_1323->g_1188.f0", print_hash_value);
    transparent_crc(p_1323->g_1188.f1, "p_1323->g_1188.f1", print_hash_value);
    transparent_crc(p_1323->g_1188.f2, "p_1323->g_1188.f2", print_hash_value);
    transparent_crc(p_1323->g_1188.f3, "p_1323->g_1188.f3", print_hash_value);
    transparent_crc(p_1323->g_1188.f4, "p_1323->g_1188.f4", print_hash_value);
    transparent_crc(p_1323->g_1188.f5, "p_1323->g_1188.f5", print_hash_value);
    transparent_crc(p_1323->g_1188.f6, "p_1323->g_1188.f6", print_hash_value);
    transparent_crc(p_1323->g_1188.f7, "p_1323->g_1188.f7", print_hash_value);
    transparent_crc(p_1323->g_1205.x, "p_1323->g_1205.x", print_hash_value);
    transparent_crc(p_1323->g_1205.y, "p_1323->g_1205.y", print_hash_value);
    transparent_crc(p_1323->g_1234, "p_1323->g_1234", print_hash_value);
    transparent_crc(p_1323->g_1261.x, "p_1323->g_1261.x", print_hash_value);
    transparent_crc(p_1323->g_1261.y, "p_1323->g_1261.y", print_hash_value);
    transparent_crc(p_1323->g_1261.z, "p_1323->g_1261.z", print_hash_value);
    transparent_crc(p_1323->g_1261.w, "p_1323->g_1261.w", print_hash_value);
    transparent_crc(p_1323->g_1262.s0, "p_1323->g_1262.s0", print_hash_value);
    transparent_crc(p_1323->g_1262.s1, "p_1323->g_1262.s1", print_hash_value);
    transparent_crc(p_1323->g_1262.s2, "p_1323->g_1262.s2", print_hash_value);
    transparent_crc(p_1323->g_1262.s3, "p_1323->g_1262.s3", print_hash_value);
    transparent_crc(p_1323->g_1262.s4, "p_1323->g_1262.s4", print_hash_value);
    transparent_crc(p_1323->g_1262.s5, "p_1323->g_1262.s5", print_hash_value);
    transparent_crc(p_1323->g_1262.s6, "p_1323->g_1262.s6", print_hash_value);
    transparent_crc(p_1323->g_1262.s7, "p_1323->g_1262.s7", print_hash_value);
    transparent_crc(p_1323->g_1262.s8, "p_1323->g_1262.s8", print_hash_value);
    transparent_crc(p_1323->g_1262.s9, "p_1323->g_1262.s9", print_hash_value);
    transparent_crc(p_1323->g_1262.sa, "p_1323->g_1262.sa", print_hash_value);
    transparent_crc(p_1323->g_1262.sb, "p_1323->g_1262.sb", print_hash_value);
    transparent_crc(p_1323->g_1262.sc, "p_1323->g_1262.sc", print_hash_value);
    transparent_crc(p_1323->g_1262.sd, "p_1323->g_1262.sd", print_hash_value);
    transparent_crc(p_1323->g_1262.se, "p_1323->g_1262.se", print_hash_value);
    transparent_crc(p_1323->g_1262.sf, "p_1323->g_1262.sf", print_hash_value);
    transparent_crc(p_1323->g_1273.s0, "p_1323->g_1273.s0", print_hash_value);
    transparent_crc(p_1323->g_1273.s1, "p_1323->g_1273.s1", print_hash_value);
    transparent_crc(p_1323->g_1273.s2, "p_1323->g_1273.s2", print_hash_value);
    transparent_crc(p_1323->g_1273.s3, "p_1323->g_1273.s3", print_hash_value);
    transparent_crc(p_1323->g_1273.s4, "p_1323->g_1273.s4", print_hash_value);
    transparent_crc(p_1323->g_1273.s5, "p_1323->g_1273.s5", print_hash_value);
    transparent_crc(p_1323->g_1273.s6, "p_1323->g_1273.s6", print_hash_value);
    transparent_crc(p_1323->g_1273.s7, "p_1323->g_1273.s7", print_hash_value);
    transparent_crc(p_1323->g_1273.s8, "p_1323->g_1273.s8", print_hash_value);
    transparent_crc(p_1323->g_1273.s9, "p_1323->g_1273.s9", print_hash_value);
    transparent_crc(p_1323->g_1273.sa, "p_1323->g_1273.sa", print_hash_value);
    transparent_crc(p_1323->g_1273.sb, "p_1323->g_1273.sb", print_hash_value);
    transparent_crc(p_1323->g_1273.sc, "p_1323->g_1273.sc", print_hash_value);
    transparent_crc(p_1323->g_1273.sd, "p_1323->g_1273.sd", print_hash_value);
    transparent_crc(p_1323->g_1273.se, "p_1323->g_1273.se", print_hash_value);
    transparent_crc(p_1323->g_1273.sf, "p_1323->g_1273.sf", print_hash_value);
    transparent_crc(p_1323->g_1308, "p_1323->g_1308", print_hash_value);
    transparent_crc(p_1323->g_1311, "p_1323->g_1311", print_hash_value);
    transparent_crc(p_1323->v_collective, "p_1323->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 8; i++)
            transparent_crc(p_1323->g_special_values[i + 8 * get_linear_group_id()], "p_1323->g_special_values[i + 8 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 8; i++)
            transparent_crc(p_1323->l_special_values[i], "p_1323->l_special_values[i]", print_hash_value);
    transparent_crc(p_1323->l_comm_values[get_linear_local_id()], "p_1323->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1323->g_comm_values[get_linear_group_id() * 24 + get_linear_local_id()], "p_1323->g_comm_values[get_linear_group_id() * 24 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
