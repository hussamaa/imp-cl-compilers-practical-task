// --atomics 6 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 58,32,3 -l 1,32,3
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

__constant uint32_t permutations[10][96] = {
{10,56,44,14,77,53,37,25,76,68,46,80,88,13,24,33,28,60,23,64,79,49,62,94,86,8,16,15,34,61,35,22,82,4,31,45,71,17,55,83,70,39,93,1,41,30,19,72,9,48,87,66,58,84,40,73,21,7,42,36,18,43,11,65,29,75,3,6,50,92,78,63,57,47,0,12,95,26,69,91,67,54,32,90,59,38,81,5,89,2,27,20,52,51,85,74}, // permutation 0
{65,40,9,71,11,12,13,19,14,69,36,41,2,63,83,75,59,46,56,21,43,85,82,91,20,58,26,30,79,60,42,72,70,44,4,47,18,73,38,64,10,31,87,3,23,8,74,67,27,77,15,86,22,0,52,78,54,1,61,35,88,7,92,39,32,57,51,25,90,49,55,95,28,66,34,50,17,68,53,76,84,62,48,33,80,81,89,37,5,6,45,93,24,94,29,16}, // permutation 1
{51,18,22,86,6,57,5,3,48,95,28,79,59,82,0,56,34,42,12,65,88,93,64,92,9,46,23,16,41,10,54,17,71,70,58,47,43,72,30,63,37,27,20,50,61,84,7,53,19,76,62,15,45,73,66,29,25,14,39,69,38,87,83,8,2,13,75,31,35,4,94,90,67,74,32,36,40,24,1,11,81,60,49,52,33,78,26,89,55,80,68,44,91,21,77,85}, // permutation 2
{9,27,77,57,10,71,91,0,63,60,42,88,79,62,67,41,16,70,32,24,28,86,55,83,93,90,3,75,94,4,84,31,78,44,45,65,52,48,92,29,46,73,12,87,74,6,18,20,34,64,81,15,47,25,19,21,14,7,72,2,39,80,35,82,89,17,11,61,50,85,43,8,58,69,38,30,40,49,56,53,95,23,66,68,22,36,54,1,59,33,37,13,26,51,5,76}, // permutation 3
{26,55,11,63,91,15,87,35,52,9,71,73,13,4,39,54,85,3,40,30,58,38,68,6,75,42,16,62,51,89,37,88,94,34,7,46,76,70,90,14,49,45,28,24,2,36,41,83,44,27,23,29,12,0,81,64,48,79,8,33,95,69,66,21,93,10,50,59,18,92,43,5,60,84,53,65,72,19,20,80,57,1,25,61,82,77,86,31,17,47,56,67,78,74,22,32}, // permutation 4
{66,0,79,80,30,23,11,18,7,52,94,90,82,68,24,19,53,84,4,73,88,85,20,43,1,41,25,32,86,92,8,16,95,60,34,31,13,78,71,35,58,81,67,46,61,49,44,47,37,48,15,76,77,2,9,59,42,38,70,28,56,3,26,74,89,69,72,83,65,57,51,27,14,10,12,21,54,55,87,50,6,17,39,22,75,40,5,45,63,33,93,36,91,29,62,64}, // permutation 5
{1,72,87,34,16,47,68,41,61,42,49,45,63,12,52,51,6,57,8,64,84,32,81,60,3,82,10,83,29,50,80,90,74,36,26,94,76,28,19,4,48,2,95,69,65,70,55,22,58,20,59,25,9,43,23,93,71,46,17,92,30,27,7,54,85,38,18,35,86,33,37,75,67,62,91,13,73,44,14,66,39,15,0,31,88,5,11,24,53,89,40,78,77,79,21,56}, // permutation 6
{30,79,18,19,57,73,29,68,49,44,15,90,23,47,85,11,92,45,60,78,1,27,75,24,52,46,10,41,28,58,53,38,83,4,76,16,55,12,56,64,22,42,26,48,80,84,35,88,2,51,21,34,71,69,62,81,14,25,3,33,65,82,0,6,61,7,66,39,37,31,87,91,8,54,89,86,32,36,13,63,9,77,43,74,95,20,59,70,40,93,17,5,72,67,94,50}, // permutation 7
{80,16,19,60,37,15,32,88,0,45,63,7,43,44,89,91,85,90,51,24,52,77,30,11,79,42,9,74,69,54,86,68,18,36,82,58,78,49,20,6,93,59,87,95,83,1,38,94,39,12,61,65,71,67,13,70,17,28,62,10,75,2,50,3,34,46,5,4,21,47,29,64,33,73,57,22,14,53,23,66,26,56,25,72,55,76,81,92,27,48,41,35,40,31,8,84}, // permutation 8
{88,67,21,9,41,60,71,1,81,79,28,57,72,47,4,55,51,30,27,14,37,32,95,19,52,38,87,7,92,77,94,50,15,42,39,44,16,40,49,54,36,62,78,69,73,48,76,10,43,11,86,0,80,46,83,53,90,82,17,59,68,31,22,5,66,25,65,58,93,35,89,63,2,45,6,74,61,20,12,8,33,85,3,29,56,84,70,75,26,13,91,64,23,18,24,34} // permutation 9
};

// Seed: 1964794790

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_17[4];
    VECTOR(int16_t, 16) g_23;
    VECTOR(int16_t, 8) g_25;
    volatile VECTOR(uint8_t, 16) g_26;
    volatile VECTOR(uint8_t, 2) g_27;
    uint16_t g_29;
    VECTOR(uint16_t, 16) g_36;
    VECTOR(uint8_t, 2) g_37;
    VECTOR(int32_t, 2) g_55;
    VECTOR(int32_t, 2) g_74;
    volatile VECTOR(int32_t, 16) g_75;
    uint16_t g_87;
    int32_t *g_101;
    int32_t **g_100;
    uint64_t g_105;
    VECTOR(int8_t, 2) g_112;
    VECTOR(int8_t, 2) g_131;
    uint64_t *g_146;
    VECTOR(int64_t, 16) g_169;
    VECTOR(uint64_t, 2) g_203;
    int32_t *g_231;
    int32_t * volatile g_235;
    VECTOR(uint8_t, 2) g_242;
    int32_t ** volatile g_251;
    VECTOR(int16_t, 2) g_254;
    uint32_t g_260;
    int64_t g_268;
    volatile uint32_t g_274;
    uint64_t g_307;
    VECTOR(int64_t, 8) g_411;
    volatile VECTOR(int16_t, 8) g_419;
    uint32_t g_472;
    int8_t *g_504;
    int8_t **g_503;
    VECTOR(uint64_t, 16) g_535;
    uint32_t g_548;
    volatile VECTOR(int32_t, 2) g_563;
    int32_t g_578;
    int32_t g_600[6][4];
    volatile uint32_t g_615[4];
    int32_t *** volatile g_619;
    int32_t *** volatile *g_618;
    VECTOR(int8_t, 4) g_631;
    VECTOR(uint64_t, 16) g_644;
    volatile VECTOR(uint64_t, 2) g_647;
    VECTOR(uint16_t, 2) g_668;
    VECTOR(uint16_t, 2) g_671;
    volatile VECTOR(int32_t, 4) g_687;
    VECTOR(int32_t, 4) g_730;
    VECTOR(int32_t, 16) g_751;
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
uint64_t  func_1(struct S0 * p_803);
int32_t * func_2(uint64_t  p_3, uint32_t  p_4, int32_t * p_5, uint32_t  p_6, struct S0 * p_803);
int16_t  func_9(int32_t * p_10, uint64_t  p_11, struct S0 * p_803);
int32_t * func_12(int32_t * p_13, uint64_t  p_14, int32_t  p_15, struct S0 * p_803);
uint8_t  func_18(int32_t  p_19, int8_t  p_20, struct S0 * p_803);
uint16_t  func_40(int64_t  p_41, struct S0 * p_803);
int32_t * func_64(int32_t  p_65, uint16_t  p_66, int32_t  p_67, int64_t  p_68, int32_t * p_69, struct S0 * p_803);
int32_t  func_76(int64_t  p_77, uint32_t  p_78, int32_t  p_79, uint16_t  p_80, uint64_t  p_81, struct S0 * p_803);
int32_t ** func_88(int64_t  p_89, uint16_t  p_90, struct S0 * p_803);
int32_t  func_106(uint16_t * p_107, int32_t *** p_108, uint32_t  p_109, int32_t * p_110, struct S0 * p_803);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_803->g_23 p_803->g_25 p_803->g_26 p_803->g_27 p_803->g_29 p_803->g_36 p_803->g_37 p_803->g_17 p_803->g_74 p_803->g_75 p_803->g_87 p_803->g_100 p_803->g_105 p_803->g_comm_values p_803->g_112 p_803->g_101 p_803->g_131 p_803->g_169 p_803->g_203 p_803->g_231 p_803->g_55 p_803->g_242 p_803->g_254 p_803->g_260 p_803->g_268 p_803->g_274 p_803->g_307 p_803->l_comm_values p_803->g_411 p_803->g_419 p_803->g_472 p_803->g_535 p_803->g_618 p_803->g_644 p_803->g_647 p_803->g_600 p_803->g_730 p_803->g_668 p_803->g_615 p_803->g_548 p_803->g_578
 * writes: p_803->g_29 p_803->g_87 p_803->g_100 p_803->g_105 p_803->g_17 p_803->g_101 p_803->g_146 p_803->g_25 p_803->g_260 p_803->g_268 p_803->g_74 p_803->g_274 p_803->g_36 p_803->g_23 p_803->g_472 p_803->g_203 p_803->g_503 p_803->g_254 p_803->g_242 p_803->g_548 p_803->g_231 p_803->g_578
 */
uint64_t  func_1(struct S0 * p_803)
{ /* block id: 4 */
    int32_t *l_16[8] = {&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0]};
    VECTOR(int32_t, 8) l_21 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x21F05067L), 0x21F05067L), 0x21F05067L, (-10L), 0x21F05067L);
    VECTOR(int16_t, 2) l_22 = (VECTOR(int16_t, 2))((-8L), 1L);
    VECTOR(int16_t, 8) l_24 = (VECTOR(int16_t, 8))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x3AE5L), 0x3AE5L), 0x3AE5L, (-8L), 0x3AE5L);
    uint16_t *l_28[9] = {&p_803->g_29,&p_803->g_29,&p_803->g_29,&p_803->g_29,&p_803->g_29,&p_803->g_29,&p_803->g_29,&p_803->g_29,&p_803->g_29};
    int32_t **l_32 = (void*)0;
    int32_t *l_34 = &p_803->g_17[1];
    int32_t **l_33 = &l_34;
    VECTOR(uint16_t, 2) l_35 = (VECTOR(uint16_t, 2))(0x9963L, 65530UL);
    uint32_t *l_259 = &p_803->g_260;
    VECTOR(int16_t, 16) l_263 = (VECTOR(int16_t, 16))(0x35B2L, (VECTOR(int16_t, 4))(0x35B2L, (VECTOR(int16_t, 2))(0x35B2L, 7L), 7L), 7L, 0x35B2L, 7L, (VECTOR(int16_t, 2))(0x35B2L, 7L), (VECTOR(int16_t, 2))(0x35B2L, 7L), 0x35B2L, 7L, 0x35B2L, 7L);
    uint32_t l_269 = 1UL;
    int16_t l_309 = 0x2202L;
    int i;
    (*l_33) = func_2((safe_rshift_func_int16_t_s_s(func_9(((*l_33) = func_12(l_16[4], ((((((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 16))((-1L), (-2L), 0x275A592C6EED1E12L, (func_18((p_803->g_74.y = ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_21.s0604554673562033)).sc1)).yxyxxxyx, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(0x172DL, ((VECTOR(int16_t, 4))(l_22.yyxx)), ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(p_803->g_23.sb467bb1a)).odd, ((VECTOR(int16_t, 2))(l_24.s55)).xxyx))).even))), 3L)).s56, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(p_803->g_25.s4326)), ((VECTOR(int16_t, 4))(9L, 0L, 0x4E62L, (-6L)))))).hi))).xyxxyyxyyxxxyyxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 8))(5UL, 65535UL, ((VECTOR(uint16_t, 2))(0UL, 0UL)), 0xE630L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_803->g_26.see51)))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_803->g_27.yyyxxxxx)).s13)).xxyy))))).hi, ((VECTOR(uint16_t, 8))(GROUP_DIVERGE(2, 1), ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x8586L, 1UL)).xxxx)).even, ((VECTOR(uint16_t, 16))(0x5772L, (p_803->g_29--), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(0x63D2L, 0x2F3CL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((l_16[2] == ((*l_33) = &p_803->g_17[0])) ^ (-8L)), FAKE_DIVERGE(p_803->local_0_offset, get_local_id(0), 10), 65535UL, 6UL)).zyywwyww)).odd)), ((VECTOR(uint16_t, 4))(l_35.yxxy)), 0xCF42L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 8))(p_803->g_36.sf141c5ab)).odd))))).zxxwwxzyzywyxzzx, ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(0xFC7BL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_803->g_37.xx)).xyxxyxyyxyyyxxyx)).s2 == (((safe_lshift_func_uint16_t_u_u(func_40((*l_34), p_803), 2)) , ((VECTOR(int16_t, 16))(p_803->g_254.yyyxyxxxxxyyyxyx)).sc) , ((VECTOR(int8_t, 2))(2L, 0L)).odd)), ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 16))(0x4998L, ((VECTOR(uint16_t, 2))(65535UL, 4UL)), (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((++(*l_259)) , ((VECTOR(int16_t, 8))(l_263.s71a9cfeb)).s0), 14)), (safe_sub_func_uint32_t_u_u((p_803->g_268 |= (safe_rshift_func_uint16_t_u_s(p_803->g_37.x, 13))), p_803->g_254.x)))), 65527UL, ((VECTOR(uint16_t, 8))(0x0109L)), 2UL, 0xD10DL, 0x896BL)).s2f, (uint16_t)0xA4EFL))), 65532UL, 65534UL, ((VECTOR(uint16_t, 4))(0UL)), 1UL, ((VECTOR(uint16_t, 2))(0xFEE9L)), ((VECTOR(uint16_t, 4))(65526UL)))).hi)).s37)).xyyxxyyx, ((VECTOR(uint16_t, 8))(0x2227L)), ((VECTOR(uint16_t, 8))(0xB925L))))).s46)), p_803->g_36.s7, 0x92A0L, p_803->g_131.x, 65535UL, 65535UL, 0x2190L, 0UL, ((VECTOR(uint16_t, 4))(0xB2E5L)), 0x7E56L, 0x4B66L)).odd, ((VECTOR(uint16_t, 8))(65535UL))))).even, ((VECTOR(uint16_t, 4))(7UL))))).odd, ((VECTOR(uint16_t, 2))(65527UL))))).yyyxyxyxyyxyxyxx))).odd, ((VECTOR(uint16_t, 8))(65530UL))))).lo)).yzxxywxwzwxwzzyz)).sfa)).xyyy, ((VECTOR(uint16_t, 4))(65535UL))))), (uint16_t)65535UL))))), 6UL)).even))).s73)), ((VECTOR(uint16_t, 4))(65530UL)), p_803->g_254.x, 65535UL, 0x71FBL, ((VECTOR(uint16_t, 2))(65535UL)), 65535UL, 0xDB92L, 1UL)).sab))).lo, ((VECTOR(uint16_t, 2))(0x7F90L)), ((VECTOR(uint16_t, 2))(0UL)), 0x7A5EL, 1UL)).s01, ((VECTOR(uint16_t, 2))(0xABD2L))))))), 65535UL)).s35, ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 2))(0xDE37L))))).yxyxyxyx)).odd, ((VECTOR(uint16_t, 4))(0x2231L))))).zzwzyzwx)).s2664350420573053))).s2ac3, ((VECTOR(int32_t, 4))(2L))))).wyzyxzwy))).s51, ((VECTOR(int32_t, 2))(1L))))), ((VECTOR(int32_t, 2))(0x1CAE8350L))))).lo), l_269, p_803) ^ p_803->g_203.x), p_803->g_242.x, 0x7A15A0F6E1B43BD7L, ((VECTOR(int64_t, 8))(0L)), 0x1D7BDC688BD7B905L, (-9L))), ((VECTOR(int64_t, 16))(0x27CF7B8F6EEE67F5L))))).s0 ^ p_803->g_242.x) ^ p_803->g_203.y) | p_803->g_203.y) , (*l_34)), l_309, p_803)), p_803->l_comm_values[(safe_mod_func_uint32_t_u_u(p_803->tid, 96))], p_803), 15)), p_803->g_411.s3, p_803->g_231, p_803->g_112.y, p_803);
    return p_803->g_37.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_29 p_803->g_17 p_803->l_comm_values p_803->g_23 p_803->g_101 p_803->g_36 p_803->g_242 p_803->g_535 p_803->g_comm_values p_803->g_25 p_803->g_618 p_803->g_231 p_803->g_644 p_803->g_647 p_803->g_27 p_803->g_74 p_803->g_600 p_803->g_87 p_803->g_730 p_803->g_668 p_803->g_411 p_803->g_615 p_803->g_307 p_803->g_472 p_803->g_548 p_803->g_578
 * writes: p_803->g_29 p_803->g_503 p_803->g_23 p_803->g_254 p_803->g_17 p_803->g_36 p_803->g_242 p_803->g_548 p_803->g_231 p_803->g_268 p_803->g_74 p_803->g_578
 */
int32_t * func_2(uint64_t  p_3, uint32_t  p_4, int32_t * p_5, uint32_t  p_6, struct S0 * p_803)
{ /* block id: 215 */
    uint8_t l_514[9][2][3] = {{{0x9CL,0x89L,1UL},{0x9CL,0x89L,1UL}},{{0x9CL,0x89L,1UL},{0x9CL,0x89L,1UL}},{{0x9CL,0x89L,1UL},{0x9CL,0x89L,1UL}},{{0x9CL,0x89L,1UL},{0x9CL,0x89L,1UL}},{{0x9CL,0x89L,1UL},{0x9CL,0x89L,1UL}},{{0x9CL,0x89L,1UL},{0x9CL,0x89L,1UL}},{{0x9CL,0x89L,1UL},{0x9CL,0x89L,1UL}},{{0x9CL,0x89L,1UL},{0x9CL,0x89L,1UL}},{{0x9CL,0x89L,1UL},{0x9CL,0x89L,1UL}}};
    int32_t l_523 = (-1L);
    VECTOR(uint8_t, 16) l_570 = (VECTOR(uint8_t, 16))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 0x3FL), 0x3FL), 0x3FL, 251UL, 0x3FL, (VECTOR(uint8_t, 2))(251UL, 0x3FL), (VECTOR(uint8_t, 2))(251UL, 0x3FL), 251UL, 0x3FL, 251UL, 0x3FL);
    int32_t l_573 = 0x6D2453C8L;
    int32_t **l_601[6];
    int32_t **l_602 = &p_803->g_231;
    VECTOR(int32_t, 2) l_604 = (VECTOR(int32_t, 2))(0x1127AFF4L, (-4L));
    uint64_t *l_655 = &p_803->g_307;
    uint8_t l_656 = 246UL;
    VECTOR(uint16_t, 2) l_663 = (VECTOR(uint16_t, 2))(65529UL, 0xC0A5L);
    VECTOR(uint16_t, 8) l_664 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65526UL), 65526UL), 65526UL, 0UL, 65526UL);
    VECTOR(uint16_t, 16) l_666 = (VECTOR(uint16_t, 16))(0x513EL, (VECTOR(uint16_t, 4))(0x513EL, (VECTOR(uint16_t, 2))(0x513EL, 0xC272L), 0xC272L), 0xC272L, 0x513EL, 0xC272L, (VECTOR(uint16_t, 2))(0x513EL, 0xC272L), (VECTOR(uint16_t, 2))(0x513EL, 0xC272L), 0x513EL, 0xC272L, 0x513EL, 0xC272L);
    VECTOR(uint16_t, 2) l_672 = (VECTOR(uint16_t, 2))(0UL, 0UL);
    VECTOR(int64_t, 16) l_744 = (VECTOR(int64_t, 16))((-7L), (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 5L), 5L), 5L, (-7L), 5L, (VECTOR(int64_t, 2))((-7L), 5L), (VECTOR(int64_t, 2))((-7L), 5L), (-7L), 5L, (-7L), 5L);
    int32_t l_776 = 0L;
    VECTOR(uint8_t, 2) l_783 = (VECTOR(uint8_t, 2))(0x16L, 1UL);
    uint32_t l_784 = 0x3D4E4CADL;
    int8_t l_785 = 1L;
    uint8_t l_786 = 1UL;
    int64_t l_796 = 6L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_601[i] = &p_803->g_101;
    for (p_803->g_29 = 0; (p_803->g_29 > 10); ++p_803->g_29)
    { /* block id: 218 */
        uint8_t l_492 = 1UL;
        uint64_t **l_495 = (void*)0;
        int64_t *l_499 = &p_803->g_268;
        int8_t *l_501 = (void*)0;
        int8_t **l_500 = &l_501;
        int32_t l_543 = 1L;
        int32_t l_598 = (-1L);
        VECTOR(int32_t, 16) l_606 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0L), 0L), 0L, 5L, 0L, (VECTOR(int32_t, 2))(5L, 0L), (VECTOR(int32_t, 2))(5L, 0L), 5L, 0L, 5L, 0L);
        VECTOR(uint64_t, 4) l_642 = (VECTOR(uint64_t, 4))(0xC3C3A9456C98E29BL, (VECTOR(uint64_t, 2))(0xC3C3A9456C98E29BL, 18446744073709551608UL), 18446744073709551608UL);
        VECTOR(uint64_t, 2) l_643 = (VECTOR(uint64_t, 2))(0UL, 0UL);
        uint64_t **l_652 = (void*)0;
        uint64_t *l_654 = &p_803->g_307;
        uint64_t **l_653[7][8][4] = {{{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654}},{{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654}},{{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654}},{{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654}},{{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654}},{{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654}},{{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654},{&l_654,&l_654,&l_654,&l_654}}};
        VECTOR(uint16_t, 2) l_661 = (VECTOR(uint16_t, 2))(8UL, 0x7714L);
        VECTOR(uint16_t, 2) l_665 = (VECTOR(uint16_t, 2))(0xC831L, 0xE1C6L);
        VECTOR(uint16_t, 16) l_667 = (VECTOR(uint16_t, 16))(0x2E57L, (VECTOR(uint16_t, 4))(0x2E57L, (VECTOR(uint16_t, 2))(0x2E57L, 0x4DC5L), 0x4DC5L), 0x4DC5L, 0x2E57L, 0x4DC5L, (VECTOR(uint16_t, 2))(0x2E57L, 0x4DC5L), (VECTOR(uint16_t, 2))(0x2E57L, 0x4DC5L), 0x2E57L, 0x4DC5L, 0x2E57L, 0x4DC5L);
        VECTOR(uint64_t, 2) l_675 = (VECTOR(uint64_t, 2))(18446744073709551609UL, 0UL);
        int64_t l_679 = 0L;
        VECTOR(int8_t, 16) l_691 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int8_t, 2))(1L, 0L), (VECTOR(int8_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
        VECTOR(int8_t, 8) l_692 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 9L), 9L), 9L, 0L, 9L);
        VECTOR(int8_t, 2) l_698 = (VECTOR(int8_t, 2))(0x65L, 0x4CL);
        VECTOR(int8_t, 4) l_700 = (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 0x67L), 0x67L);
        uint64_t l_728 = 18446744073709551612UL;
        int32_t l_741 = 0x52A35711L;
        int16_t l_745 = (-6L);
        int64_t l_750[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_750[i] = 0x457B8309BFAF45BFL;
        if (p_3)
        { /* block id: 219 */
            l_492++;
        }
        else
        { /* block id: 221 */
            uint64_t **l_496 = &p_803->g_146;
            int8_t ***l_502[8] = {&l_500,(void*)0,&l_500,&l_500,(void*)0,&l_500,&l_500,(void*)0};
            int32_t *l_512 = (void*)0;
            VECTOR(int8_t, 8) l_571 = (VECTOR(int8_t, 8))(0x04L, (VECTOR(int8_t, 4))(0x04L, (VECTOR(int8_t, 2))(0x04L, 0x3DL), 0x3DL), 0x3DL, 0x04L, 0x3DL);
            VECTOR(int32_t, 16) l_587 = (VECTOR(int32_t, 16))(0x6D072919L, (VECTOR(int32_t, 4))(0x6D072919L, (VECTOR(int32_t, 2))(0x6D072919L, 6L), 6L), 6L, 0x6D072919L, 6L, (VECTOR(int32_t, 2))(0x6D072919L, 6L), (VECTOR(int32_t, 2))(0x6D072919L, 6L), 0x6D072919L, 6L, 0x6D072919L, 6L);
            int32_t l_634 = 0x0C7F3DF1L;
            int i;
            if (((l_495 != l_496) , ((0L || (&p_803->g_268 == l_499)) , ((p_803->g_503 = l_500) != (void*)0))))
            { /* block id: 223 */
                int16_t l_505 = 4L;
                int32_t *l_513 = (void*)0;
                int16_t l_521 = (-1L);
                int16_t *l_522[2][10][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                l_523 |= ((l_505 |= p_803->g_17[3]) , ((*p_803->g_101) = (safe_sub_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((l_512 != (((p_4 ^ p_803->l_comm_values[(safe_mod_func_uint32_t_u_u(p_803->tid, 96))]) & l_505) , l_513)), l_514[8][1][2])) == ((p_803->g_254.y = (p_803->g_23.sf ^= ((safe_div_func_uint64_t_u_u(p_4, (safe_lshift_func_uint8_t_u_u((((((safe_mul_func_uint16_t_u_u(((((p_6 , p_4) <= l_521) , 1UL) || FAKE_DIVERGE(p_803->global_1_offset, get_global_id(1), 10)), 0xA3CDL)) < p_3) , (void*)0) == &p_803->g_260) > p_3), 1)))) & 18446744073709551615UL))) , p_6)), 0L)) != GROUP_DIVERGE(0, 1)) != p_4), p_4))));
                for (p_4 = 29; (p_4 >= 12); p_4 = safe_sub_func_uint32_t_u_u(p_4, 1))
                { /* block id: 231 */
                    uint8_t *l_534 = &l_514[8][1][2];
                    uint16_t *l_542[5] = {&p_803->g_87,&p_803->g_87,&p_803->g_87,&p_803->g_87,&p_803->g_87};
                    int8_t ***l_546 = &p_803->g_503;
                    uint32_t *l_547 = &p_803->g_548;
                    int32_t l_572 = 0x300D1765L;
                    int32_t *l_577 = &p_803->g_578;
                    uint64_t l_588 = 1UL;
                    int32_t ***l_617 = &l_601[0];
                    int32_t ****l_616[3][10][3] = {{{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617}},{{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617}},{{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617}}};
                    int i, j, k;
                    (*p_803->g_101) = ((((safe_mod_func_int64_t_s_s(0x6F1B21F814FE72BFL, GROUP_DIVERGE(0, 1))) , (safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint8_t_u_u(((*l_534) = 255UL), 5)) != ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_803->g_535.s40)), 0x89B0D9149116C997L, 0x205213CFD30ECDCDL)).z) != ((-1L) < (((safe_add_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s(((GROUP_DIVERGE(0, 1) & (safe_mul_func_int16_t_s_s(0L, ((p_803->g_36.s8++) , (l_546 == &p_803->g_503))))) ^ (p_803->g_242.x &= (l_523 , p_6))), 1)) == ((*l_547) = FAKE_DIVERGE(p_803->global_0_offset, get_global_id(0), 10))), (((safe_sub_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((~(safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint32_t_u_u(0UL, (*p_803->g_101))) != p_3), 1)), 4)) < (*p_803->g_101)), 10)) != 1L), 6L))), p_4)) , 0xED1CL) == l_492), 0x642423EFL)) != (-3L)) ^ p_803->g_535.se))) , 65535UL) >= p_803->g_comm_values[p_803->tid]))), p_6))) , p_803->g_25.s4) && FAKE_DIVERGE(p_803->local_2_offset, get_local_id(2), 10));
                    if (((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(p_803->g_563.xy)).yyxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x1DB9E760L, (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((((VECTOR(uint8_t, 2))(l_570.s58)).lo || ((VECTOR(int8_t, 4))(l_571.s7122)).w) < ((--p_803->g_87) >= ((((*l_577) &= (safe_unary_minus_func_int8_t_s(p_3))) , 0x3FD2L) < (safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u(p_803->g_29, (l_543 ^ (safe_div_func_int16_t_s_s((((p_803->g_535.s4 = (((p_3 == ((safe_add_func_int16_t_s_s(l_570.s9, (((((0x4D99E46FL <= ((VECTOR(int32_t, 8))(l_587.s7f6ce22d)).s2) , p_5) != &l_572) & 0x5AF61F53L) , 0x1914L))) >= p_3)) , p_803->g_112.y) & p_803->g_268)) | p_3) , l_571.s0), l_492))))), p_3))))), p_6)), p_3)), p_4, ((VECTOR(int32_t, 4))(0x0DBC9466L)), ((VECTOR(int32_t, 8))(1L)), (-1L))).hi)).lo))).x)
                    { /* block id: 240 */
                        int32_t *l_589 = &l_543;
                        int32_t ***l_596[2][4];
                        uint64_t *l_597[6];
                        int32_t *l_599[8][4][6] = {{{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]}},{{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]}},{{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]}},{{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]}},{{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]}},{{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]}},{{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]}},{{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]},{&p_803->g_600[0][2],&p_803->g_600[2][2],&p_803->g_600[2][2],&p_803->g_600[2][0],&p_803->g_600[2][0],&p_803->g_600[2][0]}}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_596[i][j] = &p_803->g_100;
                        }
                        for (i = 0; i < 6; i++)
                            l_597[i] = (void*)0;
                        l_573 = ((l_601[5] = (((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 16))(9UL, l_587.s0, 6UL, ((*p_803->g_101) < (((*l_547) = ((((*l_589) = 0x2BDC300CL) <= p_4) != (l_570.s4 < (&p_803->g_578 == (((p_803->g_600[2][0] |= (safe_sub_func_uint64_t_u_u((l_598 = (((-9L) != (((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((*l_534) = (((void*)0 != l_596[1][0]) <= p_6)) ^ p_4), 12)), 0x3C20BA3AL)) & p_3) <= 0x1762AD98660DEF76L)) , GROUP_DIVERGE(0, 1))), p_4))) , p_803->g_112.x) , (void*)0))))) ^ p_4)), p_4, l_598, 0x4D684A8D8A4D7ADCL, 0xBB044F896AAA6870L, 0xF8441F0EE5C9C1E2L, 0x1A0C11976090E2AAL, p_3, 0xD4F1DC839511BDC9L, ((VECTOR(uint64_t, 4))(18446744073709551610UL)))).odd, ((VECTOR(uint64_t, 8))(18446744073709551613UL))))).s2 , (void*)0)) == l_602);
                    }
                    else
                    { /* block id: 248 */
                        uint8_t l_603 = 255UL;
                        VECTOR(int32_t, 8) l_605 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x25954BBFL), 0x25954BBFL), 0x25954BBFL, (-1L), 0x25954BBFL);
                        int i;
                        (*p_803->g_101) = l_603;
                        (*p_803->g_101) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(l_604.xxyy)).zxzwwwxwzxzwxwxx, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x1BAD4549L, 7L, 1L, (-1L))).xxwwxwxy)).s60, ((VECTOR(int32_t, 2))(1L, (-4L))), ((VECTOR(int32_t, 2))(l_605.s10))))).yyyxxyyy, ((VECTOR(int32_t, 16))(l_606.s8237c971da0404a5)).even, ((VECTOR(int32_t, 16))(((((safe_lshift_func_int8_t_s_u(l_572, (safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((!(p_6 , p_803->g_419.s7)) , (safe_mod_func_uint64_t_u_u((p_6 , (((void*)0 == l_496) , p_803->g_615[2])), ((((*l_602) = &l_572) == &l_598) , p_803->g_578)))), p_4)), p_6)))) != 0x175BBC58L) & 8L) , (*p_803->g_101)), (*p_803->g_101), 0x6A97881DL, 0x6BAEEB4FL, (-4L), 0L, (*p_803->g_101), ((VECTOR(int32_t, 8))((-10L))), 0x7956375CL)).odd))).s5364536556021724))).s36)))).even;
                    }
                    (*p_803->g_101) = (l_616[1][3][0] != p_803->g_618);
                }
            }
            else
            { /* block id: 255 */
                uint16_t *l_628 = (void*)0;
                (*l_602) = &l_543;
                p_5 = (void*)0;
                (*p_803->g_101) = ((**l_602) ^= (l_587.s0 >= l_606.s1));
            }
            p_803->g_74.x |= (safe_add_func_uint16_t_u_u((((!(safe_mod_func_uint64_t_u_u(5UL, (0UL ^ (((*l_499) = (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(l_642.zxzywxxz)), ((VECTOR(uint64_t, 16))(l_643.yyyxyxxxyxxyxxyx)).even))).s56, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_803->g_644.s2c)).yxxxxyxy)).s57))), 18446744073709551608UL, 18446744073709551612UL, 0x2CD662D25F0EC261L, (((safe_div_func_int8_t_s_s((p_3 || ((p_3 | l_606.s8) ^ 7L)), (((VECTOR(uint64_t, 8))(p_803->g_647.yyyxxyxx)).s4 , p_803->g_27.x))) || (((FAKE_DIVERGE(p_803->local_0_offset, get_local_id(0), 10) , 0UL) , (0x57DB124DL && FAKE_DIVERGE(p_803->group_0_offset, get_group_id(0), 10))) && 4UL)) | p_803->g_17[1]), 0x1FFBD792C1003AC0L, ((VECTOR(uint64_t, 4))(0x6E06D3E206454E32L)), p_6, l_571.s7, p_3, 18446744073709551615UL, 0x8269EA02C1AE507AL)).sc <= FAKE_DIVERGE(p_803->group_1_offset, get_group_id(1), 10))) | p_4))))) != 0x77FE9426L) ^ p_6), 65534UL));
        }
        l_606.s0 = ((safe_lshift_func_uint16_t_u_u((((VECTOR(int8_t, 2))((-1L), 0L)).lo < 0x0BL), 14)) & (safe_add_func_uint64_t_u_u(((l_655 = &p_803->g_307) != (void*)0), l_656)));
        if ((p_803->g_600[2][0] | (-1L)))
        { /* block id: 269 */
            VECTOR(uint16_t, 8) l_662 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x39A6L), 0x39A6L), 0x39A6L, 0UL, 0x39A6L);
            uint32_t *l_676 = &p_803->g_548;
            int8_t ***l_680 = &l_500;
            int32_t l_681[7][5][7] = {{{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL}},{{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL}},{{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL}},{{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL}},{{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL}},{{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL}},{{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL},{3L,0x45D49D89L,0x692D5DFFL,0x19EFFFAAL,(-1L),1L,0x692D5DFFL}}};
            uint16_t l_684[1][1][7] = {{{1UL,1UL,1UL,1UL,1UL,1UL,1UL}}};
            VECTOR(int8_t, 8) l_696 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 6L), 6L), 6L, 1L, 6L);
            VECTOR(int8_t, 16) l_699 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int8_t, 2))(0L, 1L), (VECTOR(int8_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
            int32_t *l_727[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t *l_748 = (void*)0;
            int64_t *l_749 = (void*)0;
            int i, j, k;
            (*p_803->g_101) &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((l_681[4][0][4] = ((safe_sub_func_uint64_t_u_u(p_803->g_169.s5, (&p_803->g_260 == &p_803->g_615[2]))) != ((VECTOR(uint16_t, 16))((!GROUP_DIVERGE(0, 1)), (safe_mul_func_uint16_t_u_u(0x94E8L, (-6L))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_661.xyyx)).lo)).xyyxyxxyyxxyxxxy)), ((VECTOR(uint16_t, 16))(l_662.s2563532573211216))))).s93)), ((VECTOR(uint16_t, 8))(0x075FL, ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(l_663.xyyxyyyxyxyxxyxy)).sea, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_664.s2533)).yxxyywyy)).s37))))).yyyx, ((VECTOR(uint16_t, 2))(0x6584L, 0x54B7L)).yyxx, ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 4))(l_665.xyxx)).zzzwzwzw, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x74A8L, 65531UL)).xxyxxxxx)).s47, ((VECTOR(uint16_t, 4))(l_666.s33a0)).even, ((VECTOR(uint16_t, 8))(l_667.sa8c22d54)).s56))).xxyyxxxx))), ((VECTOR(uint16_t, 2))(p_803->g_668.yx)).xyxyyyxy))).even))), 0x711DL, 3UL, 1UL)), (FAKE_DIVERGE(p_803->group_0_offset, get_group_id(0), 10) != ((((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 8))(0x20EAL, ((VECTOR(uint16_t, 2))(0x6A95L, 0xBCAAL)), 1UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_803->g_671.xx)).xxyy)))).hi, ((VECTOR(uint16_t, 8))(0x90E4L, (((VECTOR(uint16_t, 8))(l_672.yyyxxyxx)).s4 >= (safe_mod_func_uint16_t_u_u(((((VECTOR(uint64_t, 2))(l_675.yx)).lo >= (((*l_676) ^= l_606.s6) >= (p_6 = (((l_662.s1 <= (safe_div_func_uint8_t_u_u(((~1L) || l_642.y), 0x01L))) , &l_501) != (void*)0)))) != 0x4DL), l_667.s4))), p_3, l_679, 0UL, ((VECTOR(uint16_t, 2))(4UL)), 65528UL)).even))).z, p_803->g_668.y)) , l_680) == &p_803->g_503) == l_662.s7)), ((VECTOR(uint16_t, 2))(0xAF00L)), 0x0398L)).sf)), (-10L), p_3, 0x18739C4EL, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0L)), l_681[5][0][1], 4L, 0x36FAD1FDL, 0x55B336D5L)))).se;
            (*l_602) = p_5;
            for (p_6 = (-14); (p_6 > 21); p_6++)
            { /* block id: 277 */
                VECTOR(int32_t, 2) l_688 = (VECTOR(int32_t, 2))(0x0C421964L, 0L);
                VECTOR(int8_t, 8) l_693 = (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, (-10L)), (-10L)), (-10L), 6L, (-10L));
                VECTOR(int8_t, 4) l_694 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L);
                VECTOR(int8_t, 16) l_695 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x25L), 0x25L), 0x25L, 1L, 0x25L, (VECTOR(int8_t, 2))(1L, 0x25L), (VECTOR(int8_t, 2))(1L, 0x25L), 1L, 0x25L, 1L, 0x25L);
                VECTOR(int8_t, 16) l_697 = (VECTOR(int8_t, 16))(0x5EL, (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, 0x06L), 0x06L), 0x06L, 0x5EL, 0x06L, (VECTOR(int8_t, 2))(0x5EL, 0x06L), (VECTOR(int8_t, 2))(0x5EL, 0x06L), 0x5EL, 0x06L, 0x5EL, 0x06L);
                VECTOR(int8_t, 16) l_701 = (VECTOR(int8_t, 16))(0x14L, (VECTOR(int8_t, 4))(0x14L, (VECTOR(int8_t, 2))(0x14L, 0x11L), 0x11L), 0x11L, 0x14L, 0x11L, (VECTOR(int8_t, 2))(0x14L, 0x11L), (VECTOR(int8_t, 2))(0x14L, 0x11L), 0x14L, 0x11L, 0x14L, 0x11L);
                VECTOR(uint32_t, 8) l_726 = (VECTOR(uint32_t, 8))(0x1FD25ECBL, (VECTOR(uint32_t, 4))(0x1FD25ECBL, (VECTOR(uint32_t, 2))(0x1FD25ECBL, 2UL), 2UL), 2UL, 0x1FD25ECBL, 2UL);
                uint64_t l_729 = 0x376A618001655B34L;
                int i;
                ++l_684[0][0][5];
                if (l_679)
                    continue;
                l_598 = ((VECTOR(int32_t, 16))(0x48C7F912L, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(p_803->g_687.zxwwyyyw)).s50, ((VECTOR(int32_t, 2))(0x772752CCL, 8L))))), 0x106BC1ADL, ((VECTOR(int32_t, 4))(l_688.yyyx)), ((((safe_add_func_uint16_t_u_u(p_4, ((!l_688.y) & p_803->g_419.s1))) != 0x99DCL) , ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(0x43L, ((VECTOR(int8_t, 8))(l_691.s50c9ebe7)), 0x25L, ((VECTOR(int8_t, 4))(l_692.s1220)), 0x3FL, 0x22L)).s0c, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(0x04L, 0x19L)), ((VECTOR(int8_t, 8))(l_693.s50745777)).s25))), ((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))(l_694.wzyy)).wwxyyyzwwwywzzwy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(l_695.s154196db)).s15, ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_696.s20)).yxyy)).zxwzzzxwzzzyxzwx, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(l_697.s06)).yxxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_698.yyyxyyxx)).even)).xyyzwwwz)).s0735041100436203)).s481f))).wywwyywywzzxyxzw))).s77))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_699.sceb8)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_700.wx)), 0x23L, (-1L))))), 0x59L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_701.s0fdc3775e49b4578)).lo)).hi)), (-7L)))))))))).sca, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x14L, 0x30L)), 0x34L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0x59L, (-10L), 0x3DL, 0x1DL)))), (safe_rshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((((p_803->g_169.s5 = (safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(l_694.z, (safe_rshift_func_uint16_t_u_u((((0L >= (safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((l_688.y ^= (safe_add_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u((GROUP_DIVERGE(1, 1) & (safe_mul_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u(((l_693.s2 == ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_726.s27)), 0x21DF9156L, ((*l_676) = ((p_5 = p_5) != l_727[2])), ((VECTOR(uint32_t, 4))(0x031194E1L)))), ((VECTOR(uint32_t, 8))(0x6C10AF88L)), ((VECTOR(uint32_t, 8))(4294967288UL))))).s0) >= GROUP_DIVERGE(2, 1)), l_695.s1)) , 0L) && 0x5F702F34L) || 0x17L), FAKE_DIVERGE(p_803->global_1_offset, get_global_id(1), 10)))), 0x133B1074058127F0L)) >= l_598), 3UL))) <= 0x29L), (-1L))), 1L))) != 0xF874L) & l_726.s0), FAKE_DIVERGE(p_803->group_1_offset, get_group_id(1), 10))))), FAKE_DIVERGE(p_803->local_0_offset, get_local_id(0), 10))) , p_6), p_803->g_647.y))) & 0xAD9E2DA53C864E98L) | (*p_803->g_101)) , p_803->g_644.sa), 5UL)) , 0x6B38L), p_803->g_131.y)), 0x45L, (-6L), ((VECTOR(int8_t, 4))(0x6DL)), 0x23L, 0L)).s60))).xxyxyyxxyyyyyyxx, ((VECTOR(int8_t, 16))(1L))))).sa2))), (int8_t)p_3))).even) && l_728), 0x23E69AABL, l_729, l_675.y, (-1L), 0x668A89CDL, (-1L), (-8L))).s6;
                l_598 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(p_803->g_730.xx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(4L, l_688.y, ((VECTOR(int32_t, 2))(0x2D2FD129L, 0x1E45AB25L)), ((safe_sub_func_uint8_t_u_u((p_4 , (l_606.s1 , p_803->g_131.x)), (safe_rshift_func_uint16_t_u_u(p_4, l_695.se)))) ^ ((void*)0 != &p_803->g_17[0])), (-9L), 0x09FE7C4DL, 0x0479CBC8L)).lo)).even))))))), 0x49477933L, (-9L))).w;
            }
            l_606.sd ^= (((safe_rshift_func_uint8_t_u_u(0x59L, 2)) , p_4) < ((l_750[0] = ((((((safe_div_func_int64_t_s_s(p_803->g_87, 0x846C31B58BEA2F59L)) != ((p_803->g_730.y > l_741) && ((safe_div_func_int64_t_s_s(((*l_499) = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_744.s26)), 0x49F83EFBD7B7B08EL, 0x0411DCE4CECFC6EFL)).yxwxyxzyyzzzwxzz)).s1), l_745)) ^ 0L))) < (safe_div_func_int32_t_s_s((p_6 , 0L), p_803->g_668.x))) , 0x7AE24EAFL) && (*p_803->g_101)) ^ p_3)) && p_803->g_411.s5));
        }
        else
        { /* block id: 290 */
            VECTOR(int32_t, 8) l_752 = (VECTOR(int32_t, 8))(0x572DBCFDL, (VECTOR(int32_t, 4))(0x572DBCFDL, (VECTOR(int32_t, 2))(0x572DBCFDL, 0x3FF4A0E2L), 0x3FF4A0E2L), 0x3FF4A0E2L, 0x572DBCFDL, 0x3FF4A0E2L);
            int i;
            l_741 ^= ((VECTOR(int32_t, 8))(p_803->g_751.s0766aa1e)).s2;
            (*p_803->g_101) |= ((VECTOR(int32_t, 4))(l_752.s6635)).w;
        }
    }
    (*p_803->g_101) = (safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((0x77CDDA61L ^ (safe_mod_func_uint64_t_u_u((((safe_unary_minus_func_uint32_t_u((safe_mod_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((p_803->g_615[2] , ((p_803->g_615[0] ^ p_6) & (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_776, (safe_sub_func_uint64_t_u_u((((*p_803->g_101) & (safe_sub_func_uint64_t_u_u(((!(safe_mul_func_int8_t_s_s((0x943CB1A3L != ((((VECTOR(uint8_t, 16))(p_803->g_307, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 2))(l_783.xx)).yyyyxyxxxxxxxyxx, ((VECTOR(uint8_t, 4))(2UL, p_803->g_472, 0x24L, 255UL)).xxyzwyxyxzyzxxyw, ((VECTOR(uint8_t, 16))(253UL))))).odd)).odd)), ((VECTOR(uint8_t, 8))(2UL)), 255UL, 0x03L, 0x33L)).sf | p_3) || p_4)), p_3))) , 0xFBAB4D9300A30200L), p_3))) | p_4), l_784)))), 0)), p_6)))), FAKE_DIVERGE(p_803->global_1_offset, get_global_id(1), 10))), l_785)) == FAKE_DIVERGE(p_803->global_2_offset, get_global_id(2), 10)), p_4)))) || l_786) < p_3), p_6))), GROUP_DIVERGE(0, 1))), p_803->g_600[2][0])) , p_803->g_535.s0), p_803->g_242.x)), p_6));
    for (p_803->g_548 = 0; (p_803->g_548 > 1); p_803->g_548++)
    { /* block id: 298 */
        int8_t l_789 = 1L;
        int32_t l_790 = 0L;
        int32_t l_791 = 6L;
        int32_t l_792 = 0L;
        int32_t l_793[4][9] = {{(-5L),(-3L),(-5L),(-5L),(-3L),(-5L),(-5L),(-3L),(-5L)},{(-5L),(-3L),(-5L),(-5L),(-3L),(-5L),(-5L),(-3L),(-5L)},{(-5L),(-3L),(-5L),(-5L),(-3L),(-5L),(-5L),(-3L),(-5L)},{(-5L),(-3L),(-5L),(-5L),(-3L),(-5L),(-5L),(-3L),(-5L)}};
        int64_t l_794[3][2] = {{0x3FAF6F12B438AF22L,4L},{0x3FAF6F12B438AF22L,4L},{0x3FAF6F12B438AF22L,4L}};
        int32_t l_795 = 0x09A05035L;
        uint32_t l_797 = 1UL;
        int i, j;
        l_797--;
        for (p_803->g_578 = 0; (p_803->g_578 > 7); ++p_803->g_578)
        { /* block id: 302 */
            int32_t *l_802 = (void*)0;
            return l_802;
        }
        p_5 = p_5;
    }
    (*p_803->g_101) ^= (~(((+0xFE7BE663L) , &l_601[5]) != &l_602));
    return p_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_101 p_803->g_411 p_803->g_419 p_803->g_268 p_803->g_17 p_803->g_23 p_803->g_55 p_803->g_105 p_803->g_203 p_803->g_27 p_803->g_74 p_803->g_242 p_803->g_472
 * writes: p_803->g_17 p_803->g_23 p_803->g_268 p_803->g_105 p_803->g_29 p_803->g_472 p_803->g_203
 */
int16_t  func_9(int32_t * p_10, uint64_t  p_11, struct S0 * p_803)
{ /* block id: 178 */
    int32_t *l_402 = (void*)0;
    int32_t **l_403 = &l_402;
    int32_t l_404 = 0x6965A703L;
    int16_t *l_405 = (void*)0;
    int16_t *l_406 = (void*)0;
    int16_t *l_407 = (void*)0;
    int16_t *l_408 = (void*)0;
    int16_t *l_409 = (void*)0;
    int16_t *l_410[10];
    int64_t *l_412[6][6][7] = {{{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0}},{{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0}},{{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0}},{{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0}},{{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0}},{{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0},{&p_803->g_268,&p_803->g_268,(void*)0,(void*)0,&p_803->g_268,(void*)0,(void*)0}}};
    VECTOR(uint64_t, 4) l_413 = (VECTOR(uint64_t, 4))(0x3F1C57D0E61F59C4L, (VECTOR(uint64_t, 2))(0x3F1C57D0E61F59C4L, 18446744073709551612UL), 18446744073709551612UL);
    VECTOR(uint64_t, 4) l_414 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xC8DC1989CA9C895EL), 0xC8DC1989CA9C895EL);
    VECTOR(int16_t, 2) l_420 = (VECTOR(int16_t, 2))(1L, 1L);
    VECTOR(int16_t, 16) l_421 = (VECTOR(int16_t, 16))(0x7320L, (VECTOR(int16_t, 4))(0x7320L, (VECTOR(int16_t, 2))(0x7320L, (-4L)), (-4L)), (-4L), 0x7320L, (-4L), (VECTOR(int16_t, 2))(0x7320L, (-4L)), (VECTOR(int16_t, 2))(0x7320L, (-4L)), 0x7320L, (-4L), 0x7320L, (-4L));
    int32_t ***l_423[4][7] = {{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100,&l_403,&l_403,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100,&l_403,&l_403,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100,&l_403,&l_403,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100,&l_403,&l_403,&p_803->g_100}};
    int32_t ****l_422 = &l_423[1][0];
    int32_t ***l_430[10][4] = {{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100,&p_803->g_100}};
    uint64_t l_489 = 0x0BAFC2234E18AE90L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_410[i] = (void*)0;
    (*l_403) = l_402;
    l_404 = (p_11 < (((p_11 , (p_803->g_23.sf = (((*p_803->g_101) = l_404) , p_11))) , (p_803->g_268 = ((VECTOR(int64_t, 8))(p_803->g_411.s27477351)).s5)) != ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_413.yx)))).xxxyyyyyyyyxyyxy, ((VECTOR(uint64_t, 2))(l_414.xx)).xyxxxyyyyyxxxxyx))).s0, p_11, 0UL, 0xD9F35E9DBA5BA72AL)).w));
    (*p_803->g_101) = ((l_412[1][5][5] != l_412[1][5][5]) == (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(p_11, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(0x6A69L, (-1L))), ((VECTOR(int16_t, 8))(1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(0L, 0x62EDL)), (int16_t)0x2876L))), (-2L), 6L)).odd)), 1L, ((VECTOR(int16_t, 2))(p_803->g_419.s73)), 0L, 0x3F31L)).s53, ((VECTOR(int16_t, 2))(l_420.xx))))).xyyx, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x159CL, p_803->g_268, 0x0A5FL, 9L)).even)).yyyyxxyxxxxyxxyx, ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_421.sc9)), 0x5CC0L, 1L)).zzxxxxwywxyywwyz, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((((&p_803->g_100 == ((*l_422) = &l_403)) > (*p_803->g_101)) < (p_803->g_23.s7 >= (-1L))), ((VECTOR(int16_t, 4))(0x42C2L)), (-1L), 0x38BEL, 0x5298L)).s16)).xyxxyxxyxxxyyxxx, ((VECTOR(int16_t, 16))((-7L))))))))), ((VECTOR(int16_t, 16))((-1L))), ((VECTOR(int16_t, 16))(1L))))).s6936)).even, ((VECTOR(int16_t, 2))(0x060CL))))).xyxy, ((VECTOR(int16_t, 4))((-4L)))))))), (-5L), 0x37C7L, ((VECTOR(int16_t, 8))(0x73EFL)), 1L, 0x7BCDL)).sb)), p_803->g_55.y)));
    for (p_803->g_105 = (-16); (p_803->g_105 == 32); p_803->g_105 = safe_add_func_int8_t_s_s(p_803->g_105, 8))
    { /* block id: 188 */
        int32_t ***l_427 = &p_803->g_100;
        int32_t ****l_426 = &l_427;
        int32_t ***l_429 = &l_403;
        int32_t ****l_428 = &l_429;
        int32_t l_467 = 0x0B879313L;
        int32_t *l_473 = &p_803->g_17[1];
        (*p_803->g_101) ^= (((*l_426) = ((*l_422) = &p_803->g_100)) == (l_430[8][1] = ((*l_428) = &p_803->g_100)));
        for (p_803->g_29 = 0; (p_803->g_29 < 3); p_803->g_29 = safe_add_func_uint32_t_u_u(p_803->g_29, 2))
        { /* block id: 196 */
            int64_t **l_466 = &l_412[1][5][5];
            int32_t l_470 = 0L;
            int32_t l_471 = 9L;
            uint64_t *l_478 = (void*)0;
            uint64_t *l_479 = (void*)0;
            uint64_t *l_480 = (void*)0;
            uint64_t *l_481 = (void*)0;
            uint64_t *l_482 = (void*)0;
            uint64_t *l_483 = (void*)0;
            uint64_t *l_484 = (void*)0;
            uint64_t *l_485 = (void*)0;
            uint64_t *l_486 = (void*)0;
            uint64_t *l_487 = (void*)0;
            uint64_t *l_488[4];
            int i;
            for (i = 0; i < 4; i++)
                l_488[i] = (void*)0;
            for (p_11 = 0; (p_11 <= 20); p_11 = safe_add_func_uint16_t_u_u(p_11, 8))
            { /* block id: 199 */
                uint16_t l_441 = 0xA595L;
                int64_t *l_461 = (void*)0;
                int64_t **l_460 = &l_461;
                uint64_t *l_468 = (void*)0;
                int32_t l_469 = 4L;
                p_803->g_472 |= (safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((((((*p_803->g_101) != ((((safe_rshift_func_int8_t_s_s((((++l_441) || (safe_div_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u(((!((l_470 = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((p_11 , (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((l_412[1][5][5] != ((*l_460) = &p_803->g_268)) < (&p_803->g_105 == ((((l_469 = (p_11 > ((((VECTOR(int32_t, 2))(0x45E3C168L, 0x649A9CDDL)).lo || ((safe_add_func_int8_t_s_s(5L, (safe_rshift_func_uint16_t_u_u(((l_466 = l_466) == l_460), p_11)))) | p_803->g_55.x)) <= l_467))) | p_803->g_203.x) , 0x2B32L) , (void*)0))), FAKE_DIVERGE(p_803->local_1_offset, get_local_id(1), 10))) ^ p_11), 0x3E56L)) || 0x1CA4L), 1L)), 0UL))) | 0UL), 0x46L)), l_470))) < l_471)) >= l_441), p_803->g_27.y)) < p_803->g_55.x) < p_11) , p_803->g_74.y), (-4L)))) | p_803->g_242.x), 6)) > p_803->g_23.sc) || p_11) >= p_803->g_17[0])) || FAKE_DIVERGE(p_803->group_2_offset, get_group_id(2), 10)) <= 0x3DE0978CL) , l_441), 5)) & l_471), p_11));
            }
            (*l_403) = func_12(l_473, (((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((p_803->g_203.y ^= p_11) && p_803->g_27.y), 1)), 0x43E903D5L)) < p_11) == p_11), l_471, p_803);
        }
        l_489 = (*p_803->g_101);
        if ((*p_803->g_101))
            continue;
    }
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_17 p_803->g_101
 * writes: p_803->g_17
 */
int32_t * func_12(int32_t * p_13, uint64_t  p_14, int32_t  p_15, struct S0 * p_803)
{ /* block id: 109 */
    uint16_t l_310 = 0x8667L;
    int32_t **l_313 = (void*)0;
    int32_t *l_314 = (void*)0;
    l_314 = &p_15;
    if ((*p_13))
    { /* block id: 112 */
        int32_t *l_317 = (void*)0;
        for (p_14 = (-18); (p_14 >= 17); ++p_14)
        { /* block id: 115 */
            return l_317;
        }
        if ((atomic_inc(&p_803->g_atomic_input[6 * get_linear_group_id() + 3]) == 8))
        { /* block id: 119 */
            uint8_t l_318 = 0xA4L;
            int32_t l_319 = (-1L);
            if ((l_319 = ((((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(0x6912FAA3543DFEBFL, 0x2F33D47361511F58L)).yyyxxyyxyxxyxyxx, ((VECTOR(int64_t, 4))(0x7CC84B07DBA68786L, 0x1C8656DC5C98F52BL, 0x430C52162B4E7914L, (-1L))).wywyzxxzwyyzzxzy))).saaec, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-1L), 0L)).xyyyyxyyyyxxxyyy)))).s5c7a))).w , l_318) , 3L)))
            { /* block id: 121 */
                int32_t l_320 = 1L;
                uint32_t l_339 = 4294967293UL;
                for (l_320 = 0; (l_320 > (-19)); l_320 = safe_sub_func_int8_t_s_s(l_320, 1))
                { /* block id: 124 */
                    int32_t l_323 = (-1L);
                    for (l_323 = 0; (l_323 <= 16); l_323 = safe_add_func_int16_t_s_s(l_323, 7))
                    { /* block id: 127 */
                        int32_t l_328 = 0x7E74861FL;
                        int32_t *l_327 = &l_328;
                        int32_t **l_326[4][8][1] = {{{&l_327},{&l_327},{&l_327},{&l_327},{&l_327},{&l_327},{&l_327},{&l_327}},{{&l_327},{&l_327},{&l_327},{&l_327},{&l_327},{&l_327},{&l_327},{&l_327}},{{&l_327},{&l_327},{&l_327},{&l_327},{&l_327},{&l_327},{&l_327},{&l_327}},{{&l_327},{&l_327},{&l_327},{&l_327},{&l_327},{&l_327},{&l_327},{&l_327}}};
                        int32_t **l_329 = &l_327;
                        int32_t **l_330 = &l_327;
                        uint64_t l_331 = 1UL;
                        uint32_t l_332[1];
                        uint16_t l_333[7][7][5] = {{{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L}},{{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L}},{{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L}},{{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L}},{{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L}},{{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L}},{{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L},{0UL,0x3591L,0UL,0x303DL,0x40F6L}}};
                        int64_t l_334 = 0x522136730CA1EF99L;
                        VECTOR(int8_t, 2) l_335 = (VECTOR(int8_t, 2))(1L, 0L);
                        uint16_t l_336 = 0UL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_332[i] = 0x835EF8C3L;
                        l_330 = (l_329 = l_326[1][2][0]);
                        l_332[0] = l_331;
                        l_334 ^= l_333[3][4][3];
                        --l_336;
                    }
                }
                ++l_339;
                for (l_320 = (-19); (l_320 != 24); l_320 = safe_add_func_int16_t_s_s(l_320, 7))
                { /* block id: 138 */
                    uint32_t l_344 = 0UL;
                    int16_t l_385 = (-3L);
                    uint16_t l_386 = 0xEAF8L;
                    if (l_344)
                    { /* block id: 139 */
                        uint16_t l_345 = 3UL;
                        VECTOR(int32_t, 8) l_348 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 2L), 2L), 2L, (-7L), 2L);
                        VECTOR(int32_t, 4) l_349 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x65D1936DL), 0x65D1936DL);
                        VECTOR(int32_t, 8) l_350 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x46242EF7L), 0x46242EF7L), 0x46242EF7L, 0L, 0x46242EF7L);
                        VECTOR(int32_t, 16) l_351 = (VECTOR(int32_t, 16))(0x7094AB82L, (VECTOR(int32_t, 4))(0x7094AB82L, (VECTOR(int32_t, 2))(0x7094AB82L, (-1L)), (-1L)), (-1L), 0x7094AB82L, (-1L), (VECTOR(int32_t, 2))(0x7094AB82L, (-1L)), (VECTOR(int32_t, 2))(0x7094AB82L, (-1L)), 0x7094AB82L, (-1L), 0x7094AB82L, (-1L));
                        uint32_t l_352 = 0xCC0577D2L;
                        int16_t l_353 = 0x054BL;
                        uint32_t l_354[7];
                        VECTOR(int32_t, 8) l_355 = (VECTOR(int32_t, 8))(0x02343557L, (VECTOR(int32_t, 4))(0x02343557L, (VECTOR(int32_t, 2))(0x02343557L, (-1L)), (-1L)), (-1L), 0x02343557L, (-1L));
                        VECTOR(int32_t, 8) l_356 = (VECTOR(int32_t, 8))(0x27231E8CL, (VECTOR(int32_t, 4))(0x27231E8CL, (VECTOR(int32_t, 2))(0x27231E8CL, 1L), 1L), 1L, 0x27231E8CL, 1L);
                        VECTOR(int32_t, 4) l_357 = (VECTOR(int32_t, 4))(0x1321D268L, (VECTOR(int32_t, 2))(0x1321D268L, 0x3B481A26L), 0x3B481A26L);
                        VECTOR(int32_t, 4) l_358 = (VECTOR(int32_t, 4))(0x77029DE1L, (VECTOR(int32_t, 2))(0x77029DE1L, 0x74FB0984L), 0x74FB0984L);
                        VECTOR(int32_t, 4) l_359 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x54E20B2CL), 0x54E20B2CL);
                        VECTOR(int32_t, 4) l_360 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L);
                        VECTOR(int32_t, 4) l_361 = (VECTOR(int32_t, 4))(0x606DA537L, (VECTOR(int32_t, 2))(0x606DA537L, (-1L)), (-1L));
                        uint16_t l_362 = 0x4133L;
                        VECTOR(int32_t, 4) l_363 = (VECTOR(int32_t, 4))(0x525B76F8L, (VECTOR(int32_t, 2))(0x525B76F8L, (-8L)), (-8L));
                        uint8_t l_364 = 0x20L;
                        VECTOR(int32_t, 2) l_365 = (VECTOR(int32_t, 2))(6L, (-4L));
                        VECTOR(int32_t, 8) l_366 = (VECTOR(int32_t, 8))(0x639F61C8L, (VECTOR(int32_t, 4))(0x639F61C8L, (VECTOR(int32_t, 2))(0x639F61C8L, 1L), 1L), 1L, 0x639F61C8L, 1L);
                        VECTOR(int32_t, 16) l_367 = (VECTOR(int32_t, 16))(0x6B9AF378L, (VECTOR(int32_t, 4))(0x6B9AF378L, (VECTOR(int32_t, 2))(0x6B9AF378L, 7L), 7L), 7L, 0x6B9AF378L, 7L, (VECTOR(int32_t, 2))(0x6B9AF378L, 7L), (VECTOR(int32_t, 2))(0x6B9AF378L, 7L), 0x6B9AF378L, 7L, 0x6B9AF378L, 7L);
                        uint16_t l_368 = 65535UL;
                        uint32_t l_369 = 4294967293UL;
                        int8_t l_370 = 0x46L;
                        VECTOR(int32_t, 2) l_371 = (VECTOR(int32_t, 2))(2L, 0x40B4C452L);
                        VECTOR(int32_t, 8) l_372 = (VECTOR(int32_t, 8))(0x6CF5147CL, (VECTOR(int32_t, 4))(0x6CF5147CL, (VECTOR(int32_t, 2))(0x6CF5147CL, 0x7E22DEDAL), 0x7E22DEDAL), 0x7E22DEDAL, 0x6CF5147CL, 0x7E22DEDAL);
                        VECTOR(int32_t, 16) l_373 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 5L), 5L), 5L, 0L, 5L, (VECTOR(int32_t, 2))(0L, 5L), (VECTOR(int32_t, 2))(0L, 5L), 0L, 5L, 0L, 5L);
                        VECTOR(int32_t, 16) l_374 = (VECTOR(int32_t, 16))(0x0B1FB491L, (VECTOR(int32_t, 4))(0x0B1FB491L, (VECTOR(int32_t, 2))(0x0B1FB491L, 8L), 8L), 8L, 0x0B1FB491L, 8L, (VECTOR(int32_t, 2))(0x0B1FB491L, 8L), (VECTOR(int32_t, 2))(0x0B1FB491L, 8L), 0x0B1FB491L, 8L, 0x0B1FB491L, 8L);
                        VECTOR(int32_t, 4) l_375 = (VECTOR(int32_t, 4))(0x0B59B02DL, (VECTOR(int32_t, 2))(0x0B59B02DL, (-9L)), (-9L));
                        int32_t l_376 = 0x075DBCEBL;
                        int32_t l_377 = 0x0EF091C5L;
                        int32_t l_378 = 0x2421495CL;
                        int64_t l_379 = 0x1EA9913E85E88238L;
                        uint32_t l_380[10][3] = {{0xEAFF5488L,0xEAFF5488L,0xEAFF5488L},{0xEAFF5488L,0xEAFF5488L,0xEAFF5488L},{0xEAFF5488L,0xEAFF5488L,0xEAFF5488L},{0xEAFF5488L,0xEAFF5488L,0xEAFF5488L},{0xEAFF5488L,0xEAFF5488L,0xEAFF5488L},{0xEAFF5488L,0xEAFF5488L,0xEAFF5488L},{0xEAFF5488L,0xEAFF5488L,0xEAFF5488L},{0xEAFF5488L,0xEAFF5488L,0xEAFF5488L},{0xEAFF5488L,0xEAFF5488L,0xEAFF5488L},{0xEAFF5488L,0xEAFF5488L,0xEAFF5488L}};
                        int i, j;
                        for (i = 0; i < 7; i++)
                            l_354[i] = 0x3BC30058L;
                        ++l_345;
                        l_376 &= ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(l_348.s25527531)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(0x3562F77BL, (-3L), 0L, 0x70C9A7B1L)).odd, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_349.yyxx)).ywwyzzywzzzwzywx)).sef9f, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_350.s6244234455567114)), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(l_351.s4c)).xxyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x2ADE27DFL, (l_354[0] &= (l_353 = l_352)), 0x42F542A8L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(l_355.s62032734)), ((VECTOR(int32_t, 2))(1L, (-1L))).xyyxxyxx))).lo)).yxxyyyyz)), 0x32375E6FL, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_356.s6535332460173533)).s80)), 1L, 3L)).odd, ((VECTOR(int32_t, 4))(l_357.wxxx)).odd))), 3L, 0x638E3FEAL)).sa, ((VECTOR(int32_t, 2))(0x1CC4B922L, 0x1CACBBA9L)), 9L, (l_362 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_358.zyyy)).odd)).yyyy, ((VECTOR(int32_t, 16))(l_359.yyzwwyzzzzyzywyz)).se3c0, ((VECTOR(int32_t, 8))(6L, ((VECTOR(int32_t, 2))(l_360.wz)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_361.yy)))), (-1L), 0x09BB94EFL)), 0x592F7C8DL, 0x52A8BF4EL)).even))).lo)).lo), (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_363.xyyzxwzyxxxzwzxy)).s33ed)).z , l_364), 0x42043F29L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_365.yyyxyyyyxyxyyyyy)).hi)), 0x091F822BL)).s90b3))).wxwzzxyzzwwxzxzz, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 1L)).yxyxxxyy)).s4403755245035361)).lo)).s5020203153166720))).s3a25, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_366.s22641234)).s35)).xxyx))).lo))), ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_367.s91092053a33f5c9d)).s6b03, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_368, (l_348.s4 ^= (l_369 = 0x571CB6C7L)), l_370, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x5E1B9E44L, 1L, (-1L), 0x7996C3D4L)).lo)).yyxx)), (-1L))).s7070630765470576)), ((VECTOR(int32_t, 2))(l_371.xx)).xxyyyxxxxxxxyxyx))))))).s9fd7, ((VECTOR(int32_t, 4))(l_372.s7433)), ((VECTOR(int32_t, 2))(l_373.sab)).xyxx))).xxywzwzzxyzywwzz)).sf517, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_374.s69a90f6a65a4f05f)).sf5)).yxxyyxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x548EF476L, 0x3046DA32L)).yyyyyyxx)).s1765057665611715)).even))).even))).odd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-1L), 1L))))))).xxyx)).zwyzyzwx, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(l_375.xxzyywxzywyzwwwx)).s41, (int32_t)(-3L)))).yxxyyxyx))).s3;
                        l_380[9][2]++;
                    }
                    else
                    { /* block id: 148 */
                        uint8_t l_383 = 0xE6L;
                        int32_t *l_384 = (void*)0;
                        l_384 = (l_383 , (void*)0);
                    }
                    l_385 ^= 0x13FDBABFL;
                    if (l_386)
                    { /* block id: 152 */
                        uint32_t l_387 = 4294967294UL;
                        uint8_t l_388 = 0UL;
                        int16_t l_389 = 0x0C63L;
                        uint16_t l_390 = 0xDF36L;
                        uint32_t l_391 = 4294967295UL;
                        l_389 = (l_388 ^= l_387);
                        l_391 = (l_390 , 0x69C80EF2L);
                    }
                    else
                    { /* block id: 156 */
                        uint8_t l_392[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                        uint64_t l_393[6] = {0xEABBD1C5D2A0BDB8L,0xEABBD1C5D2A0BDB8L,0xEABBD1C5D2A0BDB8L,0xEABBD1C5D2A0BDB8L,0xEABBD1C5D2A0BDB8L,0xEABBD1C5D2A0BDB8L};
                        int i;
                        l_393[1] ^= l_392[6];
                    }
                }
            }
            else
            { /* block id: 160 */
                int32_t l_394 = 0x2596AE4DL;
                int32_t l_400 = 0x03078762L;
                uint64_t l_401 = 0x8577A0B939D8174FL;
                for (l_394 = (-25); (l_394 < (-3)); l_394++)
                { /* block id: 163 */
                    int32_t *l_397 = (void*)0;
                    int32_t l_399 = (-7L);
                    int32_t *l_398[6][9][4] = {{{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0}},{{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0}},{{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0}},{{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0}},{{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0}},{{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0},{(void*)0,(void*)0,&l_399,(void*)0}}};
                    int i, j, k;
                    l_398[2][0][0] = l_397;
                }
                l_400 = ((VECTOR(int32_t, 2))(0x174938A6L, 0x7646D563L)).hi;
                l_401 ^= (-1L);
            }
            unsigned int result = 0;
            result += l_318;
            result += l_319;
            atomic_add(&p_803->g_special_values[6 * get_linear_group_id() + 3], result);
        }
        else
        { /* block id: 169 */
            (1 + 1);
        }
        return &p_803->g_17[0];
    }
    else
    { /* block id: 173 */
        (*p_803->g_101) = (*l_314);
    }
    return &p_803->g_17[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_274 p_803->g_100 p_803->g_105 p_803->g_87 p_803->g_36 p_803->g_101 p_803->g_37 p_803->g_307 p_803->l_comm_values p_803->g_169 p_803->g_25
 * writes: p_803->g_274 p_803->g_101 p_803->g_105 p_803->g_36 p_803->g_100 p_803->g_17
 */
uint8_t  func_18(int32_t  p_19, int8_t  p_20, struct S0 * p_803)
{ /* block id: 96 */
    int32_t *l_270 = (void*)0;
    int32_t *l_271 = &p_803->g_17[0];
    int32_t *l_272 = &p_803->g_17[3];
    int32_t *l_273[10][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t l_284 = 18446744073709551614UL;
    uint32_t l_287[8] = {9UL,9UL,9UL,9UL,9UL,9UL,9UL,9UL};
    uint16_t *l_302 = (void*)0;
    int32_t ***l_305[9][3] = {{&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100},{&p_803->g_100,&p_803->g_100,&p_803->g_100}};
    uint64_t *l_306 = &p_803->g_307;
    uint32_t l_308[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    int i, j;
    --p_803->g_274;
    (*p_803->g_100) = l_271;
    for (p_803->g_105 = 0; (p_803->g_105 <= 12); p_803->g_105 = safe_add_func_int8_t_s_s(p_803->g_105, 1))
    { /* block id: 101 */
        int32_t l_279[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int32_t l_280 = 1L;
        int32_t l_281 = (-7L);
        int32_t l_282 = 5L;
        int32_t l_283[7][4] = {{(-1L),8L,0x005325BDL,(-1L)},{(-1L),8L,0x005325BDL,(-1L)},{(-1L),8L,0x005325BDL,(-1L)},{(-1L),8L,0x005325BDL,(-1L)},{(-1L),8L,0x005325BDL,(-1L)},{(-1L),8L,0x005325BDL,(-1L)},{(-1L),8L,0x005325BDL,(-1L)}};
        int i, j;
        ++l_284;
    }
    p_19 = ((p_803->g_87 >= (l_287[5] > GROUP_DIVERGE(2, 1))) & ((safe_lshift_func_uint16_t_u_s((GROUP_DIVERGE(2, 1) , (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(4UL, 65532UL)), (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((-7L), (safe_lshift_func_uint8_t_u_u(((((~(((*p_803->g_101) = (safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((p_803->g_36.s1 |= 65527UL), (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))((safe_rshift_func_int16_t_s_s((&l_272 == (p_803->g_100 = (void*)0)), p_19)), (l_306 == l_306), 0L, (-1L), ((VECTOR(int16_t, 2))(0x700FL)), 0x4FE4L, (-1L), ((VECTOR(int16_t, 2))(0x72FAL)), 0x2350L, ((VECTOR(int16_t, 2))(0x34A9L)), ((VECTOR(int16_t, 2))(1L)), 7L)).hi, ((VECTOR(int16_t, 8))(0x3583L))))).s6423601035333501, ((VECTOR(int16_t, 16))(1L))))), (int16_t)l_308[3], (int16_t)0x5229L))))).s7 < p_20))), 3L))) && 0UL)) , p_803->g_37.x) , p_20) && p_803->g_307), FAKE_DIVERGE(p_803->global_0_offset, get_global_id(0), 10))))), p_19)), p_803->l_comm_values[(safe_mod_func_uint32_t_u_u(p_803->tid, 96))], ((VECTOR(uint16_t, 4))(0UL)))))).hi, ((VECTOR(uint16_t, 4))(65532UL)), ((VECTOR(uint16_t, 4))(0x57C5L))))).xwyyyxwzxxzzyxxw)).s9, p_20))), p_803->g_169.s2)) >= p_19));
    return p_803->g_25.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_74 p_803->g_75 p_803->g_36 p_803->g_87 p_803->g_17 p_803->g_100 p_803->g_105 p_803->g_comm_values p_803->g_112 p_803->g_37 p_803->g_101 p_803->g_131 p_803->g_29 p_803->g_169 p_803->g_23 p_803->g_25 p_803->g_203 p_803->g_231 p_803->g_55 p_803->g_242
 * writes: p_803->g_29 p_803->g_87 p_803->g_100 p_803->g_105 p_803->g_17 p_803->g_101 p_803->g_146 p_803->g_25
 */
uint16_t  func_40(int64_t  p_41, struct S0 * p_803)
{ /* block id: 7 */
    int16_t l_48 = (-1L);
    int32_t l_49 = 0x4E3C6AA5L;
    int32_t l_50 = 9L;
    int32_t l_51 = (-10L);
    int32_t l_52 = 0x11FCF288L;
    int32_t l_53 = 0x07DECC76L;
    int32_t l_54[1][2][9] = {{{0x476A8768L,0x476A8768L,0x476A8768L,0x476A8768L,0x476A8768L,0x476A8768L,0x476A8768L,0x476A8768L,0x476A8768L},{0x476A8768L,0x476A8768L,0x476A8768L,0x476A8768L,0x476A8768L,0x476A8768L,0x476A8768L,0x476A8768L,0x476A8768L}}};
    int8_t l_56 = 0x0FL;
    uint32_t l_58[1];
    int32_t *l_253[10] = {&l_54[0][0][5],&l_54[0][0][5],&l_54[0][0][5],&l_54[0][0][5],&l_54[0][0][5],&l_54[0][0][5],&l_54[0][0][5],&l_54[0][0][5],&l_54[0][0][5],&l_54[0][0][5]};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_58[i] = 2UL;
    for (p_41 = 0; (p_41 == 8); ++p_41)
    { /* block id: 10 */
        int32_t *l_44 = &p_803->g_17[0];
        int32_t *l_45 = &p_803->g_17[0];
        int32_t *l_46 = &p_803->g_17[0];
        int32_t *l_47[5][6] = {{&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0]},{&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0]},{&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0]},{&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0]},{&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0],&p_803->g_17[0]}};
        VECTOR(int64_t, 16) l_57 = (VECTOR(int64_t, 16))(0x1EE17268510E35A5L, (VECTOR(int64_t, 4))(0x1EE17268510E35A5L, (VECTOR(int64_t, 2))(0x1EE17268510E35A5L, 0x6D343B42109203CFL), 0x6D343B42109203CFL), 0x6D343B42109203CFL, 0x1EE17268510E35A5L, 0x6D343B42109203CFL, (VECTOR(int64_t, 2))(0x1EE17268510E35A5L, 0x6D343B42109203CFL), (VECTOR(int64_t, 2))(0x1EE17268510E35A5L, 0x6D343B42109203CFL), 0x1EE17268510E35A5L, 0x6D343B42109203CFL, 0x1EE17268510E35A5L, 0x6D343B42109203CFL);
        VECTOR(uint8_t, 8) l_84 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 250UL), 250UL), 250UL, 0UL, 250UL);
        int i, j;
        l_58[0]++;
        for (l_52 = 24; (l_52 == 28); l_52 = safe_add_func_int16_t_s_s(l_52, 1))
        { /* block id: 14 */
            int8_t l_63 = 0x05L;
            VECTOR(int32_t, 2) l_72 = (VECTOR(int32_t, 2))(2L, 0x4D80B7E5L);
            VECTOR(int32_t, 4) l_73 = (VECTOR(int32_t, 4))(0x0BB7073EL, (VECTOR(int32_t, 2))(0x0BB7073EL, 3L), 3L);
            uint16_t *l_85 = &p_803->g_29;
            uint16_t *l_86 = &p_803->g_87;
            int32_t ***l_102 = (void*)0;
            int32_t ***l_103 = &p_803->g_100;
            uint64_t *l_104 = &p_803->g_105;
            uint64_t *l_230 = (void*)0;
            int32_t **l_252[8] = {&l_44,&l_44,&l_44,&l_44,&l_44,&l_44,&l_44,&l_44};
            int i;
            l_63 = 7L;
            l_253[0] = func_64(((l_49 = (GROUP_DIVERGE(2, 1) != (safe_sub_func_int32_t_s_s((!((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(l_72.xy)), ((VECTOR(int32_t, 16))(l_73.ywyzzzzyzwyyxyxw)).scc))).yxxy, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_803->g_74.xy)).xyxyxyxy)).s75)).yxxyxyyxxxyyyyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(p_803->g_75.sbd)), 0L)).even)).xxxyxyxyyyyxxyyx))).s7357))).y), func_76(p_41, p_803->g_36.s7, p_41, (l_51 |= ((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x6AL, 247UL)), 0x6AL, 1UL, 0xE2L, 0x4EL, 0x8CL, 0x90L)))).s7365265573310714, ((VECTOR(uint8_t, 2))(0UL, 1UL)).yxxyyyxxxyyyxxxy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_84.s2711)).lo)).xxyyyxxxyxxyyxxy))).s0, 3)) || ((*l_104) ^= ((((*l_86) &= ((*l_85) = (0xFCBF960FL == l_73.y))) > 0xEB3FL) | (&l_47[4][0] != ((*l_103) = func_88(p_803->g_17[2], p_803->g_36.s8, p_803))))))), p_803->g_17[0], p_803))))) , p_41), p_803->g_169.s8, p_41, p_803->g_74.x, p_803->g_231, p_803);
            return p_803->g_17[0];
        }
        (*l_46) &= (0x0A264728L & p_41);
    }
    return p_41;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_55 p_803->g_100 p_803->g_101 p_803->g_242
 * writes: p_803->g_101
 */
int32_t * func_64(int32_t  p_65, uint16_t  p_66, int32_t  p_67, int64_t  p_68, int32_t * p_69, struct S0 * p_803)
{ /* block id: 76 */
    int32_t l_234 = (-1L);
    int32_t *l_236[5][1][3] = {{{&p_803->g_17[0],(void*)0,&p_803->g_17[0]}},{{&p_803->g_17[0],(void*)0,&p_803->g_17[0]}},{{&p_803->g_17[0],(void*)0,&p_803->g_17[0]}},{{&p_803->g_17[0],(void*)0,&p_803->g_17[0]}},{{&p_803->g_17[0],(void*)0,&p_803->g_17[0]}}};
    int64_t l_237 = 9L;
    int8_t l_245 = 0x08L;
    uint8_t l_248 = 255UL;
    int i, j, k;
    l_237 = ((~2L) <= ((safe_lshift_func_int16_t_s_u(0x6826L, 1)) ^ l_234));
    p_67 = p_803->g_55.y;
    for (l_237 = 0; (l_237 < (-21)); l_237 = safe_sub_func_uint32_t_u_u(l_237, 6))
    { /* block id: 81 */
        uint32_t l_243 = 0UL;
        VECTOR(int32_t, 2) l_244 = (VECTOR(int32_t, 2))(0x103A0F93L, (-1L));
        int8_t l_246 = 9L;
        int16_t l_247 = (-4L);
        int i;
        (*p_803->g_100) = (*p_803->g_100);
        l_243 = (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_803->g_242.yxxxxyyx)).s72)).hi, GROUP_DIVERGE(1, 1)));
        l_248++;
    }
    return (*p_803->g_100);
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_comm_values p_803->g_87 p_803->g_112 p_803->g_74 p_803->g_37 p_803->g_100 p_803->g_101 p_803->g_17 p_803->g_131 p_803->g_29 p_803->g_169 p_803->g_36 p_803->g_23 p_803->g_25 p_803->g_203 p_803->g_105
 * writes: p_803->g_87 p_803->g_17 p_803->g_101 p_803->g_146 p_803->g_25
 */
int32_t  func_76(int64_t  p_77, uint32_t  p_78, int32_t  p_79, uint16_t  p_80, uint64_t  p_81, struct S0 * p_803)
{ /* block id: 30 */
    uint16_t *l_111 = &p_803->g_87;
    int32_t l_113 = 0x45068F4AL;
    uint64_t *l_114[5][2] = {{(void*)0,&p_803->g_105},{(void*)0,&p_803->g_105},{(void*)0,&p_803->g_105},{(void*)0,&p_803->g_105},{(void*)0,&p_803->g_105}};
    uint64_t **l_147 = &l_114[2][0];
    int32_t l_152 = (-4L);
    VECTOR(int32_t, 8) l_153 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-3L)), (-3L)), (-3L), 8L, (-3L));
    int8_t *l_174 = (void*)0;
    int64_t l_196 = 0x1B62F114BED56425L;
    uint8_t l_198 = 0xA7L;
    VECTOR(int32_t, 16) l_201 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3283B7F0L), 0x3283B7F0L), 0x3283B7F0L, 0L, 0x3283B7F0L, (VECTOR(int32_t, 2))(0L, 0x3283B7F0L), (VECTOR(int32_t, 2))(0L, 0x3283B7F0L), 0L, 0x3283B7F0L, 0L, 0x3283B7F0L);
    VECTOR(uint64_t, 4) l_204 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x60365EFACF74116EL), 0x60365EFACF74116EL);
    int32_t ***l_227 = &p_803->g_100;
    int i, j;
    (*p_803->g_101) = func_106(&p_803->g_87, &p_803->g_100, (p_803->g_comm_values[p_803->tid] | ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((5L == ((*l_111) &= p_79)), (-1L), 0x39L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_803->g_112.xyxxyxxx)).s22)).xxyxxyyy)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x7FL, 0x51L)), 0x67L, (-1L))), (-1L))).lo)).s42, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))((p_803->g_74.x && (((p_803->g_37.x < ((l_113 >= ((void*)0 != l_114[2][0])) , 7L)) == (**p_803->g_100)) || p_79)), (-1L), (-10L), 0x45L)).lo, ((VECTOR(int8_t, 2))(3L))))), 0x64L, ((VECTOR(int8_t, 2))((-10L))), l_113, 0x5EL, 0x0BL)).s11))), 0x78L, l_113, l_113, 0x42L, 0x21L, (-1L), l_113, ((VECTOR(int8_t, 2))(0x12L)), ((VECTOR(int8_t, 2))(2L)), ((VECTOR(int8_t, 2))(0L)), 0L)).sc), (*p_803->g_100), p_803);
    (*p_803->g_100) = (*p_803->g_100);
    if ((&p_803->g_105 != ((*l_147) = (p_803->g_146 = (void*)0))))
    { /* block id: 50 */
        int32_t *l_148 = &p_803->g_17[3];
        int32_t *l_149 = (void*)0;
        int32_t l_150 = 1L;
        int32_t *l_151[10];
        uint32_t l_154 = 1UL;
        VECTOR(uint64_t, 8) l_180 = (VECTOR(uint64_t, 8))(0x23C0CD5B3BB3F4C9L, (VECTOR(uint64_t, 4))(0x23C0CD5B3BB3F4C9L, (VECTOR(uint64_t, 2))(0x23C0CD5B3BB3F4C9L, 0UL), 0UL), 0UL, 0x23C0CD5B3BB3F4C9L, 0UL);
        int16_t l_197[10][1];
        int i, j;
        for (i = 0; i < 10; i++)
            l_151[i] = (void*)0;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 1; j++)
                l_197[i][j] = 1L;
        }
        l_154--;
        if ((*l_148))
        { /* block id: 52 */
            int64_t *l_175[8];
            uint32_t l_176 = 0x9580029AL;
            int32_t l_177 = 0x21DF521FL;
            int16_t *l_181 = (void*)0;
            int16_t *l_182 = (void*)0;
            int16_t *l_183 = (void*)0;
            int16_t *l_184 = (void*)0;
            int16_t *l_185 = (void*)0;
            int16_t *l_186 = (void*)0;
            int16_t *l_187 = (void*)0;
            int16_t *l_188 = (void*)0;
            int16_t *l_189[3][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int8_t ***l_192 = (void*)0;
            int8_t **l_194 = &l_174;
            int8_t ***l_193 = &l_194;
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_175[i] = (void*)0;
            l_177 = ((safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((p_803->g_29 | (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((0UL >= ((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 8))(0x2520D24FD064CE64L, ((safe_add_func_int8_t_s_s((((VECTOR(uint8_t, 4))(255UL, ((VECTOR(uint8_t, 2))(0xD7L, 0x9EL)), 0x1EL)).x | ((*l_148) < (safe_rshift_func_int8_t_s_s((!(0x1D079F7F76048124L >= (l_176 &= ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_803->g_169.s92)), 1L, 0x71B14C737DDA91CAL)).zxxzzzyzzwzywxyy, ((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))((p_803->g_17[3] || (safe_lshift_func_uint8_t_u_u((p_80 && (safe_lshift_func_uint8_t_u_u((l_174 == (((l_153.s3 , ((p_81 , 0L) ^ p_78)) <= p_78) , l_174)), 4))), 1))), p_803->g_36.s4, ((VECTOR(int64_t, 8))(0x69E41796EB3636E8L)), 1L, 0x17A2408B198C8AB4L, 1L, 0x278C172E0DF99E02L, 0x0572F0D83DF38DFEL, (-1L))).s6902)).xzyzyyyy, ((VECTOR(int64_t, 8))((-1L)))))).s4441213313460326))).s65, ((VECTOR(int64_t, 2))(0x2F6B08F53773B47BL))))).yxxy)).wwywxxyy)).s11)), 8L, 1L)), ((VECTOR(int64_t, 4))(3L))))).z))), 0)))), FAKE_DIVERGE(p_803->group_0_offset, get_group_id(0), 10))) & 0x0BB0L), ((VECTOR(int64_t, 4))(0x482309ADF986D55AL)), 0x2F8367F430B14678L, 0x0EF78CEAEB1FCBECL)), ((VECTOR(int64_t, 8))(0x4F390D4E87DCAFD5L))))).s4), p_803->g_17[0])), (*p_803->g_101)))), 0x415EC74CAC6F13C1L)), 1UL)) > p_80);
            (*p_803->g_100) = (*p_803->g_100);
            (*l_148) = (!((safe_rshift_func_int16_t_s_s((p_803->g_25.s5 &= (((p_81 |= (p_803->g_23.sa <= ((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 8))(l_180.s62350335)).s03, ((VECTOR(uint64_t, 2))(0UL, 0x9FADFD0A03F03C69L))))).hi)) == 0x602D299493731E50L) <= p_803->g_37.x)), 13)) ^ (safe_lshift_func_int16_t_s_u(p_77, 8))));
            (*l_193) = (void*)0;
        }
        else
        { /* block id: 60 */
            int32_t l_195 = 0x655B8611L;
            return l_195;
        }
        --l_198;
        (*p_803->g_100) = (void*)0;
    }
    else
    { /* block id: 65 */
        uint32_t l_207 = 0x2B7DB1FAL;
        uint16_t *l_224 = (void*)0;
        uint16_t *l_225 = (void*)0;
        int32_t ***l_226 = &p_803->g_100;
        uint32_t *l_228 = &l_207;
        int32_t *l_229 = &l_113;
        (***l_226) = ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_201.sce)).yyxyyyxx)).s64)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-1L), (-1L), 0x5F0AB91EL, (safe_unary_minus_func_int32_t_s((((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 2))(p_803->g_203.xy)).xyyx, ((VECTOR(uint64_t, 16))(1UL, ((VECTOR(uint64_t, 2))(2UL, 0x08AB20EA23E7EDB1L)), ((VECTOR(uint64_t, 8))(l_204.xywzzwyx)), (((p_803->g_74.x , ((safe_sub_func_uint32_t_u_u(l_207, 2L)) != ((safe_sub_func_uint64_t_u_u(18446744073709551615UL, (safe_rshift_func_int8_t_s_u(p_803->g_29, (((((!(safe_mod_func_int32_t_s_s(((((((VECTOR(uint32_t, 4))(0xCD92F0E6L, 4294967295UL, 0xAD832098L, 4294967286UL)).z | ((&p_803->g_101 == (void*)0) == (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((p_80 = ((*l_111) = l_207)), 4)) >= (l_196 ^ p_803->g_105)), (-9L))), p_77)) , p_803->g_131.y), 5)), l_207)))) , (-10L)) , (void*)0) != l_226), 4294967290UL))) > p_77) , l_111) == &p_803->g_29) && (***l_226)))))) && p_79))) , &p_81) != &p_81), ((VECTOR(uint64_t, 4))(0x24CCC43AD8D63799L)))).s410e, ((VECTOR(uint64_t, 4))(0x92531F7F4E34CD74L))))))).wzwxwwwywzxwzwxz, ((VECTOR(uint64_t, 16))(5UL))))).s2 == p_77))), (**p_803->g_100), (**p_803->g_100), 0x173CB9FEL, 1L, 0x6E4A3E96L, ((VECTOR(int32_t, 4))(1L)), 0x24CE5BE3L, 0x3313D937L, (-8L))).hi)).s5460720146030335)), ((VECTOR(int32_t, 16))(0x786A5F42L))))).sb4)).xxxyyxyxxxyxxyxx)).lo)).s41))), ((VECTOR(int32_t, 2))(0x32767ECFL))))).yxyyyyyyyxxxyyxy, ((VECTOR(int32_t, 16))(1L)), ((VECTOR(int32_t, 16))(0x6623546DL))))).sa;
        (*l_229) |= (0UL < ((((l_224 != l_225) <= (-5L)) , (((((***l_226) = (l_227 != (void*)0)) > p_78) | (((*l_228) = p_77) & p_803->g_87)) != 65535UL)) , 1UL));
        return (***l_227);
    }
    return l_201.s2;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_17 p_803->g_100
 * writes:
 */
int32_t ** func_88(int64_t  p_89, uint16_t  p_90, struct S0 * p_803)
{ /* block id: 18 */
    int32_t *l_91[4][10][6] = {{{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0}},{{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0}},{{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0}},{{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0},{(void*)0,&p_803->g_17[3],(void*)0,(void*)0,&p_803->g_17[3],(void*)0}}};
    int8_t l_92 = 0x0AL;
    int8_t l_93 = 0L;
    uint8_t l_94 = 0x7AL;
    int32_t **l_97 = &l_91[3][5][1];
    int i, j, k;
    l_94--;
    (*l_97) = l_91[3][8][1];
    for (p_89 = 27; (p_89 > (-6)); p_89 = safe_sub_func_uint64_t_u_u(p_89, 2))
    { /* block id: 23 */
        if (p_803->g_17[3])
            break;
    }
    return p_803->g_100;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_100 p_803->g_101 p_803->g_17 p_803->g_87 p_803->g_131
 * writes: p_803->g_87 p_803->g_17
 */
int32_t  func_106(uint16_t * p_107, int32_t *** p_108, uint32_t  p_109, int32_t * p_110, struct S0 * p_803)
{ /* block id: 32 */
    VECTOR(int64_t, 2) l_115 = (VECTOR(int64_t, 2))(0x53E8E71EE0A1EFB2L, 0L);
    VECTOR(uint8_t, 8) l_119 = (VECTOR(uint8_t, 8))(0x58L, (VECTOR(uint8_t, 4))(0x58L, (VECTOR(uint8_t, 2))(0x58L, 0x65L), 0x65L), 0x65L, 0x58L, 0x65L);
    int i, j;
    l_115.x |= (**p_803->g_100);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_803->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 96)), permutations[(safe_mod_func_uint32_t_u_u(p_109, 10))][(safe_mod_func_uint32_t_u_u(p_803->tid, 96))]));
    for (p_803->g_87 = 0; (p_803->g_87 >= 17); ++p_803->g_87)
    { /* block id: 39 */
        VECTOR(uint32_t, 4) l_118 = (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 8UL), 8UL);
        int64_t *l_124 = (void*)0;
        int64_t *l_125 = (void*)0;
        int64_t *l_126 = (void*)0;
        int32_t l_127 = (-1L);
        VECTOR(int64_t, 8) l_130 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
        int8_t *l_132 = (void*)0;
        int8_t *l_133 = (void*)0;
        int8_t *l_134 = (void*)0;
        int8_t *l_135 = (void*)0;
        int32_t l_136 = 0x7B546B69L;
        int32_t l_145 = (-5L);
        int i;
        (**p_803->g_100) = (((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(l_118.zxyxxzyxyxyxywxw)).s16))).even || (((((VECTOR(uint8_t, 4))(0x1DL, ((VECTOR(uint8_t, 2))(l_119.s66)), 0x65L)).z < ((void*)0 == &p_803->g_29)) & (safe_sub_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s((((l_127 |= ((VECTOR(int64_t, 2))(0x3E1014FFC0F78E1BL, 8L)).hi) && 0L) != (safe_sub_func_uint8_t_u_u(p_109, ((((VECTOR(int64_t, 2))(l_130.s12)).odd <= p_803->g_87) < ((l_136 = ((VECTOR(int8_t, 4))(p_803->g_131.yxxx)).y) >= ((-1L) | p_109)))))), (l_145 = (safe_mod_func_uint32_t_u_u((65530UL < (((~((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(0x03L, l_130.s6)) == 0x5DL), (*p_110))) && 0x35B80E2FCE430C6EL), 4)) , (*p_803->g_101))) >= (***p_108)) == (*p_107))), p_109))))) > 0x3750L), 0x8995CB69L))) , l_119.s3));
    }
    return l_115.x;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[96];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 96; i++)
            l_comm_values[i] = 1;
    struct S0 c_804;
    struct S0* p_803 = &c_804;
    struct S0 c_805 = {
        {0x26957688L,0x26957688L,0x26957688L,0x26957688L}, // p_803->g_17
        (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x4489L), 0x4489L), 0x4489L, (-3L), 0x4489L, (VECTOR(int16_t, 2))((-3L), 0x4489L), (VECTOR(int16_t, 2))((-3L), 0x4489L), (-3L), 0x4489L, (-3L), 0x4489L), // p_803->g_23
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x45C3L), 0x45C3L), 0x45C3L, 1L, 0x45C3L), // p_803->g_25
        (VECTOR(uint8_t, 16))(0x2DL, (VECTOR(uint8_t, 4))(0x2DL, (VECTOR(uint8_t, 2))(0x2DL, 252UL), 252UL), 252UL, 0x2DL, 252UL, (VECTOR(uint8_t, 2))(0x2DL, 252UL), (VECTOR(uint8_t, 2))(0x2DL, 252UL), 0x2DL, 252UL, 0x2DL, 252UL), // p_803->g_26
        (VECTOR(uint8_t, 2))(0UL, 0x30L), // p_803->g_27
        0xD891L, // p_803->g_29
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), (VECTOR(uint16_t, 2))(65535UL, 1UL), 65535UL, 1UL, 65535UL, 1UL), // p_803->g_36
        (VECTOR(uint8_t, 2))(0x06L, 255UL), // p_803->g_37
        (VECTOR(int32_t, 2))(0x6C064F7AL, 0x195449CDL), // p_803->g_55
        (VECTOR(int32_t, 2))(1L, 1L), // p_803->g_74
        (VECTOR(int32_t, 16))(0x0B514E01L, (VECTOR(int32_t, 4))(0x0B514E01L, (VECTOR(int32_t, 2))(0x0B514E01L, 0x39BCB20AL), 0x39BCB20AL), 0x39BCB20AL, 0x0B514E01L, 0x39BCB20AL, (VECTOR(int32_t, 2))(0x0B514E01L, 0x39BCB20AL), (VECTOR(int32_t, 2))(0x0B514E01L, 0x39BCB20AL), 0x0B514E01L, 0x39BCB20AL, 0x0B514E01L, 0x39BCB20AL), // p_803->g_75
        0UL, // p_803->g_87
        &p_803->g_17[3], // p_803->g_101
        &p_803->g_101, // p_803->g_100
        8UL, // p_803->g_105
        (VECTOR(int8_t, 2))(0x18L, 0x42L), // p_803->g_112
        (VECTOR(int8_t, 2))(3L, 0x7DL), // p_803->g_131
        &p_803->g_105, // p_803->g_146
        (VECTOR(int64_t, 16))(0x4E5AA3E19F0D3394L, (VECTOR(int64_t, 4))(0x4E5AA3E19F0D3394L, (VECTOR(int64_t, 2))(0x4E5AA3E19F0D3394L, 1L), 1L), 1L, 0x4E5AA3E19F0D3394L, 1L, (VECTOR(int64_t, 2))(0x4E5AA3E19F0D3394L, 1L), (VECTOR(int64_t, 2))(0x4E5AA3E19F0D3394L, 1L), 0x4E5AA3E19F0D3394L, 1L, 0x4E5AA3E19F0D3394L, 1L), // p_803->g_169
        (VECTOR(uint64_t, 2))(0x82E0FF311FE31A3DL, 9UL), // p_803->g_203
        (void*)0, // p_803->g_231
        (void*)0, // p_803->g_235
        (VECTOR(uint8_t, 2))(0x80L, 0x8CL), // p_803->g_242
        (void*)0, // p_803->g_251
        (VECTOR(int16_t, 2))(1L, 0x44B7L), // p_803->g_254
        0x0201681FL, // p_803->g_260
        0L, // p_803->g_268
        8UL, // p_803->g_274
        3UL, // p_803->g_307
        (VECTOR(int64_t, 8))(0x72FA86B30C439706L, (VECTOR(int64_t, 4))(0x72FA86B30C439706L, (VECTOR(int64_t, 2))(0x72FA86B30C439706L, 0x2A590A0FFB2CA2F5L), 0x2A590A0FFB2CA2F5L), 0x2A590A0FFB2CA2F5L, 0x72FA86B30C439706L, 0x2A590A0FFB2CA2F5L), // p_803->g_411
        (VECTOR(int16_t, 8))(0x2F4EL, (VECTOR(int16_t, 4))(0x2F4EL, (VECTOR(int16_t, 2))(0x2F4EL, (-1L)), (-1L)), (-1L), 0x2F4EL, (-1L)), // p_803->g_419
        0xFC8B1BB8L, // p_803->g_472
        (void*)0, // p_803->g_504
        &p_803->g_504, // p_803->g_503
        (VECTOR(uint64_t, 16))(0x2C51B0E1DC83E77CL, (VECTOR(uint64_t, 4))(0x2C51B0E1DC83E77CL, (VECTOR(uint64_t, 2))(0x2C51B0E1DC83E77CL, 2UL), 2UL), 2UL, 0x2C51B0E1DC83E77CL, 2UL, (VECTOR(uint64_t, 2))(0x2C51B0E1DC83E77CL, 2UL), (VECTOR(uint64_t, 2))(0x2C51B0E1DC83E77CL, 2UL), 0x2C51B0E1DC83E77CL, 2UL, 0x2C51B0E1DC83E77CL, 2UL), // p_803->g_535
        0xBE3C3EBDL, // p_803->g_548
        (VECTOR(int32_t, 2))(0x0C1E0A69L, 0L), // p_803->g_563
        0x2204A890L, // p_803->g_578
        {{0x7D7E44E1L,0x20546AA1L,(-10L),0L},{0x7D7E44E1L,0x20546AA1L,(-10L),0L},{0x7D7E44E1L,0x20546AA1L,(-10L),0L},{0x7D7E44E1L,0x20546AA1L,(-10L),0L},{0x7D7E44E1L,0x20546AA1L,(-10L),0L},{0x7D7E44E1L,0x20546AA1L,(-10L),0L}}, // p_803->g_600
        {0x50CA7B57L,0x50CA7B57L,0x50CA7B57L,0x50CA7B57L}, // p_803->g_615
        &p_803->g_100, // p_803->g_619
        &p_803->g_619, // p_803->g_618
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x28L), 0x28L), // p_803->g_631
        (VECTOR(uint64_t, 16))(0x1F40DFF101307368L, (VECTOR(uint64_t, 4))(0x1F40DFF101307368L, (VECTOR(uint64_t, 2))(0x1F40DFF101307368L, 5UL), 5UL), 5UL, 0x1F40DFF101307368L, 5UL, (VECTOR(uint64_t, 2))(0x1F40DFF101307368L, 5UL), (VECTOR(uint64_t, 2))(0x1F40DFF101307368L, 5UL), 0x1F40DFF101307368L, 5UL, 0x1F40DFF101307368L, 5UL), // p_803->g_644
        (VECTOR(uint64_t, 2))(0x251AD37F1A546288L, 7UL), // p_803->g_647
        (VECTOR(uint16_t, 2))(1UL, 65534UL), // p_803->g_668
        (VECTOR(uint16_t, 2))(65529UL, 0UL), // p_803->g_671
        (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x1696AF9FL), 0x1696AF9FL), // p_803->g_687
        (VECTOR(int32_t, 4))(0x17CEE071L, (VECTOR(int32_t, 2))(0x17CEE071L, 0x75EACF24L), 0x75EACF24L), // p_803->g_730
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 8L), 8L), 8L, 1L, 8L, (VECTOR(int32_t, 2))(1L, 8L), (VECTOR(int32_t, 2))(1L, 8L), 1L, 8L, 1L, 8L), // p_803->g_751
        0, // p_803->v_collective
        sequence_input[get_global_id(0)], // p_803->global_0_offset
        sequence_input[get_global_id(1)], // p_803->global_1_offset
        sequence_input[get_global_id(2)], // p_803->global_2_offset
        sequence_input[get_local_id(0)], // p_803->local_0_offset
        sequence_input[get_local_id(1)], // p_803->local_1_offset
        sequence_input[get_local_id(2)], // p_803->local_2_offset
        sequence_input[get_group_id(0)], // p_803->group_0_offset
        sequence_input[get_group_id(1)], // p_803->group_1_offset
        sequence_input[get_group_id(2)], // p_803->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 96)), permutations[0][get_linear_local_id()])), // p_803->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_804 = c_805;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_803);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_803->g_17[i], "p_803->g_17[i]", print_hash_value);

    }
    transparent_crc(p_803->g_23.s0, "p_803->g_23.s0", print_hash_value);
    transparent_crc(p_803->g_23.s1, "p_803->g_23.s1", print_hash_value);
    transparent_crc(p_803->g_23.s2, "p_803->g_23.s2", print_hash_value);
    transparent_crc(p_803->g_23.s3, "p_803->g_23.s3", print_hash_value);
    transparent_crc(p_803->g_23.s4, "p_803->g_23.s4", print_hash_value);
    transparent_crc(p_803->g_23.s5, "p_803->g_23.s5", print_hash_value);
    transparent_crc(p_803->g_23.s6, "p_803->g_23.s6", print_hash_value);
    transparent_crc(p_803->g_23.s7, "p_803->g_23.s7", print_hash_value);
    transparent_crc(p_803->g_23.s8, "p_803->g_23.s8", print_hash_value);
    transparent_crc(p_803->g_23.s9, "p_803->g_23.s9", print_hash_value);
    transparent_crc(p_803->g_23.sa, "p_803->g_23.sa", print_hash_value);
    transparent_crc(p_803->g_23.sb, "p_803->g_23.sb", print_hash_value);
    transparent_crc(p_803->g_23.sc, "p_803->g_23.sc", print_hash_value);
    transparent_crc(p_803->g_23.sd, "p_803->g_23.sd", print_hash_value);
    transparent_crc(p_803->g_23.se, "p_803->g_23.se", print_hash_value);
    transparent_crc(p_803->g_23.sf, "p_803->g_23.sf", print_hash_value);
    transparent_crc(p_803->g_25.s0, "p_803->g_25.s0", print_hash_value);
    transparent_crc(p_803->g_25.s1, "p_803->g_25.s1", print_hash_value);
    transparent_crc(p_803->g_25.s2, "p_803->g_25.s2", print_hash_value);
    transparent_crc(p_803->g_25.s3, "p_803->g_25.s3", print_hash_value);
    transparent_crc(p_803->g_25.s4, "p_803->g_25.s4", print_hash_value);
    transparent_crc(p_803->g_25.s5, "p_803->g_25.s5", print_hash_value);
    transparent_crc(p_803->g_25.s6, "p_803->g_25.s6", print_hash_value);
    transparent_crc(p_803->g_25.s7, "p_803->g_25.s7", print_hash_value);
    transparent_crc(p_803->g_26.s0, "p_803->g_26.s0", print_hash_value);
    transparent_crc(p_803->g_26.s1, "p_803->g_26.s1", print_hash_value);
    transparent_crc(p_803->g_26.s2, "p_803->g_26.s2", print_hash_value);
    transparent_crc(p_803->g_26.s3, "p_803->g_26.s3", print_hash_value);
    transparent_crc(p_803->g_26.s4, "p_803->g_26.s4", print_hash_value);
    transparent_crc(p_803->g_26.s5, "p_803->g_26.s5", print_hash_value);
    transparent_crc(p_803->g_26.s6, "p_803->g_26.s6", print_hash_value);
    transparent_crc(p_803->g_26.s7, "p_803->g_26.s7", print_hash_value);
    transparent_crc(p_803->g_26.s8, "p_803->g_26.s8", print_hash_value);
    transparent_crc(p_803->g_26.s9, "p_803->g_26.s9", print_hash_value);
    transparent_crc(p_803->g_26.sa, "p_803->g_26.sa", print_hash_value);
    transparent_crc(p_803->g_26.sb, "p_803->g_26.sb", print_hash_value);
    transparent_crc(p_803->g_26.sc, "p_803->g_26.sc", print_hash_value);
    transparent_crc(p_803->g_26.sd, "p_803->g_26.sd", print_hash_value);
    transparent_crc(p_803->g_26.se, "p_803->g_26.se", print_hash_value);
    transparent_crc(p_803->g_26.sf, "p_803->g_26.sf", print_hash_value);
    transparent_crc(p_803->g_27.x, "p_803->g_27.x", print_hash_value);
    transparent_crc(p_803->g_27.y, "p_803->g_27.y", print_hash_value);
    transparent_crc(p_803->g_29, "p_803->g_29", print_hash_value);
    transparent_crc(p_803->g_36.s0, "p_803->g_36.s0", print_hash_value);
    transparent_crc(p_803->g_36.s1, "p_803->g_36.s1", print_hash_value);
    transparent_crc(p_803->g_36.s2, "p_803->g_36.s2", print_hash_value);
    transparent_crc(p_803->g_36.s3, "p_803->g_36.s3", print_hash_value);
    transparent_crc(p_803->g_36.s4, "p_803->g_36.s4", print_hash_value);
    transparent_crc(p_803->g_36.s5, "p_803->g_36.s5", print_hash_value);
    transparent_crc(p_803->g_36.s6, "p_803->g_36.s6", print_hash_value);
    transparent_crc(p_803->g_36.s7, "p_803->g_36.s7", print_hash_value);
    transparent_crc(p_803->g_36.s8, "p_803->g_36.s8", print_hash_value);
    transparent_crc(p_803->g_36.s9, "p_803->g_36.s9", print_hash_value);
    transparent_crc(p_803->g_36.sa, "p_803->g_36.sa", print_hash_value);
    transparent_crc(p_803->g_36.sb, "p_803->g_36.sb", print_hash_value);
    transparent_crc(p_803->g_36.sc, "p_803->g_36.sc", print_hash_value);
    transparent_crc(p_803->g_36.sd, "p_803->g_36.sd", print_hash_value);
    transparent_crc(p_803->g_36.se, "p_803->g_36.se", print_hash_value);
    transparent_crc(p_803->g_36.sf, "p_803->g_36.sf", print_hash_value);
    transparent_crc(p_803->g_37.x, "p_803->g_37.x", print_hash_value);
    transparent_crc(p_803->g_37.y, "p_803->g_37.y", print_hash_value);
    transparent_crc(p_803->g_55.x, "p_803->g_55.x", print_hash_value);
    transparent_crc(p_803->g_55.y, "p_803->g_55.y", print_hash_value);
    transparent_crc(p_803->g_74.x, "p_803->g_74.x", print_hash_value);
    transparent_crc(p_803->g_74.y, "p_803->g_74.y", print_hash_value);
    transparent_crc(p_803->g_75.s0, "p_803->g_75.s0", print_hash_value);
    transparent_crc(p_803->g_75.s1, "p_803->g_75.s1", print_hash_value);
    transparent_crc(p_803->g_75.s2, "p_803->g_75.s2", print_hash_value);
    transparent_crc(p_803->g_75.s3, "p_803->g_75.s3", print_hash_value);
    transparent_crc(p_803->g_75.s4, "p_803->g_75.s4", print_hash_value);
    transparent_crc(p_803->g_75.s5, "p_803->g_75.s5", print_hash_value);
    transparent_crc(p_803->g_75.s6, "p_803->g_75.s6", print_hash_value);
    transparent_crc(p_803->g_75.s7, "p_803->g_75.s7", print_hash_value);
    transparent_crc(p_803->g_75.s8, "p_803->g_75.s8", print_hash_value);
    transparent_crc(p_803->g_75.s9, "p_803->g_75.s9", print_hash_value);
    transparent_crc(p_803->g_75.sa, "p_803->g_75.sa", print_hash_value);
    transparent_crc(p_803->g_75.sb, "p_803->g_75.sb", print_hash_value);
    transparent_crc(p_803->g_75.sc, "p_803->g_75.sc", print_hash_value);
    transparent_crc(p_803->g_75.sd, "p_803->g_75.sd", print_hash_value);
    transparent_crc(p_803->g_75.se, "p_803->g_75.se", print_hash_value);
    transparent_crc(p_803->g_75.sf, "p_803->g_75.sf", print_hash_value);
    transparent_crc(p_803->g_87, "p_803->g_87", print_hash_value);
    transparent_crc(p_803->g_105, "p_803->g_105", print_hash_value);
    transparent_crc(p_803->g_112.x, "p_803->g_112.x", print_hash_value);
    transparent_crc(p_803->g_112.y, "p_803->g_112.y", print_hash_value);
    transparent_crc(p_803->g_131.x, "p_803->g_131.x", print_hash_value);
    transparent_crc(p_803->g_131.y, "p_803->g_131.y", print_hash_value);
    transparent_crc(p_803->g_169.s0, "p_803->g_169.s0", print_hash_value);
    transparent_crc(p_803->g_169.s1, "p_803->g_169.s1", print_hash_value);
    transparent_crc(p_803->g_169.s2, "p_803->g_169.s2", print_hash_value);
    transparent_crc(p_803->g_169.s3, "p_803->g_169.s3", print_hash_value);
    transparent_crc(p_803->g_169.s4, "p_803->g_169.s4", print_hash_value);
    transparent_crc(p_803->g_169.s5, "p_803->g_169.s5", print_hash_value);
    transparent_crc(p_803->g_169.s6, "p_803->g_169.s6", print_hash_value);
    transparent_crc(p_803->g_169.s7, "p_803->g_169.s7", print_hash_value);
    transparent_crc(p_803->g_169.s8, "p_803->g_169.s8", print_hash_value);
    transparent_crc(p_803->g_169.s9, "p_803->g_169.s9", print_hash_value);
    transparent_crc(p_803->g_169.sa, "p_803->g_169.sa", print_hash_value);
    transparent_crc(p_803->g_169.sb, "p_803->g_169.sb", print_hash_value);
    transparent_crc(p_803->g_169.sc, "p_803->g_169.sc", print_hash_value);
    transparent_crc(p_803->g_169.sd, "p_803->g_169.sd", print_hash_value);
    transparent_crc(p_803->g_169.se, "p_803->g_169.se", print_hash_value);
    transparent_crc(p_803->g_169.sf, "p_803->g_169.sf", print_hash_value);
    transparent_crc(p_803->g_203.x, "p_803->g_203.x", print_hash_value);
    transparent_crc(p_803->g_203.y, "p_803->g_203.y", print_hash_value);
    transparent_crc(p_803->g_242.x, "p_803->g_242.x", print_hash_value);
    transparent_crc(p_803->g_242.y, "p_803->g_242.y", print_hash_value);
    transparent_crc(p_803->g_254.x, "p_803->g_254.x", print_hash_value);
    transparent_crc(p_803->g_254.y, "p_803->g_254.y", print_hash_value);
    transparent_crc(p_803->g_260, "p_803->g_260", print_hash_value);
    transparent_crc(p_803->g_268, "p_803->g_268", print_hash_value);
    transparent_crc(p_803->g_274, "p_803->g_274", print_hash_value);
    transparent_crc(p_803->g_307, "p_803->g_307", print_hash_value);
    transparent_crc(p_803->g_411.s0, "p_803->g_411.s0", print_hash_value);
    transparent_crc(p_803->g_411.s1, "p_803->g_411.s1", print_hash_value);
    transparent_crc(p_803->g_411.s2, "p_803->g_411.s2", print_hash_value);
    transparent_crc(p_803->g_411.s3, "p_803->g_411.s3", print_hash_value);
    transparent_crc(p_803->g_411.s4, "p_803->g_411.s4", print_hash_value);
    transparent_crc(p_803->g_411.s5, "p_803->g_411.s5", print_hash_value);
    transparent_crc(p_803->g_411.s6, "p_803->g_411.s6", print_hash_value);
    transparent_crc(p_803->g_411.s7, "p_803->g_411.s7", print_hash_value);
    transparent_crc(p_803->g_419.s0, "p_803->g_419.s0", print_hash_value);
    transparent_crc(p_803->g_419.s1, "p_803->g_419.s1", print_hash_value);
    transparent_crc(p_803->g_419.s2, "p_803->g_419.s2", print_hash_value);
    transparent_crc(p_803->g_419.s3, "p_803->g_419.s3", print_hash_value);
    transparent_crc(p_803->g_419.s4, "p_803->g_419.s4", print_hash_value);
    transparent_crc(p_803->g_419.s5, "p_803->g_419.s5", print_hash_value);
    transparent_crc(p_803->g_419.s6, "p_803->g_419.s6", print_hash_value);
    transparent_crc(p_803->g_419.s7, "p_803->g_419.s7", print_hash_value);
    transparent_crc(p_803->g_472, "p_803->g_472", print_hash_value);
    transparent_crc(p_803->g_535.s0, "p_803->g_535.s0", print_hash_value);
    transparent_crc(p_803->g_535.s1, "p_803->g_535.s1", print_hash_value);
    transparent_crc(p_803->g_535.s2, "p_803->g_535.s2", print_hash_value);
    transparent_crc(p_803->g_535.s3, "p_803->g_535.s3", print_hash_value);
    transparent_crc(p_803->g_535.s4, "p_803->g_535.s4", print_hash_value);
    transparent_crc(p_803->g_535.s5, "p_803->g_535.s5", print_hash_value);
    transparent_crc(p_803->g_535.s6, "p_803->g_535.s6", print_hash_value);
    transparent_crc(p_803->g_535.s7, "p_803->g_535.s7", print_hash_value);
    transparent_crc(p_803->g_535.s8, "p_803->g_535.s8", print_hash_value);
    transparent_crc(p_803->g_535.s9, "p_803->g_535.s9", print_hash_value);
    transparent_crc(p_803->g_535.sa, "p_803->g_535.sa", print_hash_value);
    transparent_crc(p_803->g_535.sb, "p_803->g_535.sb", print_hash_value);
    transparent_crc(p_803->g_535.sc, "p_803->g_535.sc", print_hash_value);
    transparent_crc(p_803->g_535.sd, "p_803->g_535.sd", print_hash_value);
    transparent_crc(p_803->g_535.se, "p_803->g_535.se", print_hash_value);
    transparent_crc(p_803->g_535.sf, "p_803->g_535.sf", print_hash_value);
    transparent_crc(p_803->g_548, "p_803->g_548", print_hash_value);
    transparent_crc(p_803->g_563.x, "p_803->g_563.x", print_hash_value);
    transparent_crc(p_803->g_563.y, "p_803->g_563.y", print_hash_value);
    transparent_crc(p_803->g_578, "p_803->g_578", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_803->g_600[i][j], "p_803->g_600[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_803->g_615[i], "p_803->g_615[i]", print_hash_value);

    }
    transparent_crc(p_803->g_631.x, "p_803->g_631.x", print_hash_value);
    transparent_crc(p_803->g_631.y, "p_803->g_631.y", print_hash_value);
    transparent_crc(p_803->g_631.z, "p_803->g_631.z", print_hash_value);
    transparent_crc(p_803->g_631.w, "p_803->g_631.w", print_hash_value);
    transparent_crc(p_803->g_644.s0, "p_803->g_644.s0", print_hash_value);
    transparent_crc(p_803->g_644.s1, "p_803->g_644.s1", print_hash_value);
    transparent_crc(p_803->g_644.s2, "p_803->g_644.s2", print_hash_value);
    transparent_crc(p_803->g_644.s3, "p_803->g_644.s3", print_hash_value);
    transparent_crc(p_803->g_644.s4, "p_803->g_644.s4", print_hash_value);
    transparent_crc(p_803->g_644.s5, "p_803->g_644.s5", print_hash_value);
    transparent_crc(p_803->g_644.s6, "p_803->g_644.s6", print_hash_value);
    transparent_crc(p_803->g_644.s7, "p_803->g_644.s7", print_hash_value);
    transparent_crc(p_803->g_644.s8, "p_803->g_644.s8", print_hash_value);
    transparent_crc(p_803->g_644.s9, "p_803->g_644.s9", print_hash_value);
    transparent_crc(p_803->g_644.sa, "p_803->g_644.sa", print_hash_value);
    transparent_crc(p_803->g_644.sb, "p_803->g_644.sb", print_hash_value);
    transparent_crc(p_803->g_644.sc, "p_803->g_644.sc", print_hash_value);
    transparent_crc(p_803->g_644.sd, "p_803->g_644.sd", print_hash_value);
    transparent_crc(p_803->g_644.se, "p_803->g_644.se", print_hash_value);
    transparent_crc(p_803->g_644.sf, "p_803->g_644.sf", print_hash_value);
    transparent_crc(p_803->g_647.x, "p_803->g_647.x", print_hash_value);
    transparent_crc(p_803->g_647.y, "p_803->g_647.y", print_hash_value);
    transparent_crc(p_803->g_668.x, "p_803->g_668.x", print_hash_value);
    transparent_crc(p_803->g_668.y, "p_803->g_668.y", print_hash_value);
    transparent_crc(p_803->g_671.x, "p_803->g_671.x", print_hash_value);
    transparent_crc(p_803->g_671.y, "p_803->g_671.y", print_hash_value);
    transparent_crc(p_803->g_687.x, "p_803->g_687.x", print_hash_value);
    transparent_crc(p_803->g_687.y, "p_803->g_687.y", print_hash_value);
    transparent_crc(p_803->g_687.z, "p_803->g_687.z", print_hash_value);
    transparent_crc(p_803->g_687.w, "p_803->g_687.w", print_hash_value);
    transparent_crc(p_803->g_730.x, "p_803->g_730.x", print_hash_value);
    transparent_crc(p_803->g_730.y, "p_803->g_730.y", print_hash_value);
    transparent_crc(p_803->g_730.z, "p_803->g_730.z", print_hash_value);
    transparent_crc(p_803->g_730.w, "p_803->g_730.w", print_hash_value);
    transparent_crc(p_803->g_751.s0, "p_803->g_751.s0", print_hash_value);
    transparent_crc(p_803->g_751.s1, "p_803->g_751.s1", print_hash_value);
    transparent_crc(p_803->g_751.s2, "p_803->g_751.s2", print_hash_value);
    transparent_crc(p_803->g_751.s3, "p_803->g_751.s3", print_hash_value);
    transparent_crc(p_803->g_751.s4, "p_803->g_751.s4", print_hash_value);
    transparent_crc(p_803->g_751.s5, "p_803->g_751.s5", print_hash_value);
    transparent_crc(p_803->g_751.s6, "p_803->g_751.s6", print_hash_value);
    transparent_crc(p_803->g_751.s7, "p_803->g_751.s7", print_hash_value);
    transparent_crc(p_803->g_751.s8, "p_803->g_751.s8", print_hash_value);
    transparent_crc(p_803->g_751.s9, "p_803->g_751.s9", print_hash_value);
    transparent_crc(p_803->g_751.sa, "p_803->g_751.sa", print_hash_value);
    transparent_crc(p_803->g_751.sb, "p_803->g_751.sb", print_hash_value);
    transparent_crc(p_803->g_751.sc, "p_803->g_751.sc", print_hash_value);
    transparent_crc(p_803->g_751.sd, "p_803->g_751.sd", print_hash_value);
    transparent_crc(p_803->g_751.se, "p_803->g_751.se", print_hash_value);
    transparent_crc(p_803->g_751.sf, "p_803->g_751.sf", print_hash_value);
    transparent_crc(p_803->v_collective, "p_803->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 6; i++)
            transparent_crc(p_803->g_special_values[i + 6 * get_linear_group_id()], "p_803->g_special_values[i + 6 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_803->l_comm_values[get_linear_local_id()], "p_803->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_803->g_comm_values[get_linear_group_id() * 96 + get_linear_local_id()], "p_803->g_comm_values[get_linear_group_id() * 96 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
