// --atomics 84 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 41,43,3 -l 41,1,1
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

__constant uint32_t permutations[10][41] = {
{4,24,39,40,30,0,3,18,27,1,26,7,28,8,11,33,31,37,5,14,16,32,38,19,2,15,6,35,36,22,25,21,10,34,9,17,29,13,20,12,23}, // permutation 0
{10,37,23,11,16,29,32,38,26,6,27,39,28,4,19,0,36,22,24,18,9,35,1,30,8,15,3,17,21,7,13,2,5,34,12,33,40,25,14,31,20}, // permutation 1
{17,26,32,21,7,33,23,30,8,2,35,27,25,14,31,15,28,29,5,22,20,12,3,37,24,39,40,0,36,9,19,6,4,11,16,38,18,10,13,1,34}, // permutation 2
{2,37,1,16,30,35,23,24,3,39,18,32,5,7,11,4,17,33,34,25,15,12,21,29,36,13,8,31,19,0,20,38,10,40,28,26,22,27,9,14,6}, // permutation 3
{32,27,0,28,31,2,5,6,21,13,9,11,34,10,16,7,30,18,24,17,22,35,14,33,40,12,1,29,8,23,19,26,38,36,25,20,15,3,4,37,39}, // permutation 4
{14,15,23,11,28,29,39,24,7,8,5,3,13,18,36,10,9,34,22,21,27,1,31,0,35,12,38,16,4,26,32,40,19,33,30,2,17,37,25,20,6}, // permutation 5
{30,22,13,27,4,20,14,25,40,8,9,16,21,10,3,0,34,38,39,31,2,23,24,33,15,26,29,1,12,36,19,35,32,18,11,28,5,7,6,17,37}, // permutation 6
{12,9,5,13,38,11,34,37,33,23,2,15,1,31,25,26,20,7,30,8,22,3,32,17,6,27,29,0,28,36,40,24,10,35,4,19,14,16,39,21,18}, // permutation 7
{10,32,12,9,4,39,15,22,34,21,2,36,18,1,8,38,29,11,3,7,24,33,31,19,13,30,35,6,0,25,37,27,14,20,40,28,5,16,26,17,23}, // permutation 8
{38,22,5,32,3,1,17,19,21,35,4,33,0,20,39,24,25,11,8,6,34,9,14,26,30,18,13,7,29,10,12,23,40,15,27,2,36,16,37,28,31} // permutation 9
};

// Seed: 134659580

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(uint8_t, 4) g_6;
    VECTOR(uint64_t, 8) g_14;
    int32_t g_19;
    VECTOR(int64_t, 8) g_39;
    VECTOR(int64_t, 4) g_42;
    VECTOR(int64_t, 8) g_43;
    VECTOR(int64_t, 4) g_44;
    volatile VECTOR(int64_t, 8) g_45;
    VECTOR(int64_t, 16) g_46;
    int32_t g_79[2];
    volatile int32_t g_87;
    volatile int32_t g_88;
    volatile int32_t g_89[8][4][3];
    volatile int32_t g_90;
    volatile int32_t g_91;
    volatile VECTOR(int32_t, 2) g_92;
    volatile int32_t g_93;
    volatile int32_t g_94;
    volatile int32_t g_95;
    int32_t g_96;
    int32_t g_99;
    volatile int32_t ** volatile g_103;
    volatile int32_t ** volatile g_104;
    volatile int32_t *g_106;
    volatile int32_t ** volatile g_105;
    uint32_t g_116;
    volatile VECTOR(uint32_t, 2) g_121;
    int16_t g_140;
    int16_t g_148;
    uint16_t g_151[9];
    int32_t *g_156;
    int32_t ** volatile g_155;
    VECTOR(int64_t, 8) g_200;
    VECTOR(int8_t, 8) g_224;
    volatile VECTOR(int8_t, 4) g_228;
    uint8_t *g_250;
    volatile uint8_t g_253;
    volatile uint8_t *g_252;
    int32_t g_255;
    volatile int64_t *g_259;
    volatile VECTOR(int32_t, 8) g_271;
    int32_t ** volatile g_286;
    VECTOR(int32_t, 8) g_289;
    int32_t *g_404;
    int32_t **g_403;
    int16_t *g_410;
    uint32_t g_429;
    int32_t ** volatile g_434;
    VECTOR(int16_t, 16) g_441;
    VECTOR(int16_t, 16) g_444;
    VECTOR(int64_t, 4) g_445;
    volatile VECTOR(int32_t, 16) g_468;
    VECTOR(int32_t, 8) g_471;
    uint8_t g_481;
    int32_t ** volatile g_483[5];
    uint64_t *g_486;
    uint16_t g_510;
    uint16_t g_511;
    volatile VECTOR(uint8_t, 4) g_512;
    uint64_t g_542;
    int32_t **g_548;
    int32_t *** volatile g_547;
    int32_t g_554;
    int32_t g_555;
    int32_t g_556;
    uint32_t g_557[1];
    VECTOR(uint64_t, 16) g_581;
    uint64_t g_598;
    VECTOR(uint8_t, 2) g_639;
    volatile VECTOR(uint32_t, 16) g_665;
    volatile int32_t ** volatile g_688;
    volatile VECTOR(int16_t, 8) g_759;
    VECTOR(int16_t, 2) g_771;
    volatile VECTOR(int8_t, 4) g_772;
    int32_t ** volatile g_865;
    int16_t ***g_916;
    int16_t **g_918[5][7];
    int16_t ***g_917;
    volatile int32_t ** volatile g_952[6];
    int32_t ** volatile g_968[6][7];
    int32_t ** volatile g_969;
    VECTOR(int64_t, 2) g_982;
    VECTOR(uint64_t, 16) g_991;
    uint64_t **g_1013;
    volatile VECTOR(int64_t, 4) g_1027;
    volatile VECTOR(int8_t, 16) g_1060;
    VECTOR(int8_t, 8) g_1064;
    int8_t g_1068;
    VECTOR(int32_t, 4) g_1079;
    VECTOR(uint16_t, 16) g_1093;
    VECTOR(uint32_t, 16) g_1097;
    uint16_t * volatile g_1112;
    uint16_t * volatile * volatile g_1111;
    int16_t g_1124;
    VECTOR(uint32_t, 2) g_1154;
    VECTOR(int8_t, 16) g_1161;
    VECTOR(int8_t, 2) g_1162;
    VECTOR(int8_t, 16) g_1163;
    volatile VECTOR(int16_t, 16) g_1206;
    volatile VECTOR(uint64_t, 2) g_1213;
    volatile VECTOR(uint8_t, 16) g_1224;
    int16_t g_1230;
    uint16_t g_1259;
    volatile VECTOR(int32_t, 2) g_1290;
    volatile uint8_t * volatile *g_1320;
    volatile uint8_t * volatile **g_1319;
    int32_t ***g_1337;
    VECTOR(int32_t, 8) g_1340;
    VECTOR(int32_t, 16) g_1341;
    volatile uint16_t g_1347;
    volatile uint16_t *g_1346[9];
    volatile uint16_t **g_1345;
    VECTOR(int64_t, 2) g_1354;
    volatile VECTOR(uint32_t, 2) g_1365;
    volatile VECTOR(int8_t, 4) g_1396;
    VECTOR(int64_t, 4) g_1419;
    volatile VECTOR(int32_t, 8) g_1422;
    volatile VECTOR(int64_t, 4) g_1423;
    volatile VECTOR(int8_t, 16) g_1446;
    VECTOR(int8_t, 4) g_1457;
    volatile VECTOR(int8_t, 16) g_1458;
    VECTOR(uint32_t, 8) g_1705;
    VECTOR(uint8_t, 8) g_1714;
    int16_t ****g_1723;
    VECTOR(uint16_t, 8) g_1729;
    VECTOR(int8_t, 2) g_1804;
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
uint32_t  func_1(struct S0 * p_1814);
int32_t  func_2(int32_t  p_3, struct S0 * p_1814);
int16_t  func_23(int32_t * p_24, int32_t * p_25, int32_t * p_26, uint64_t  p_27, struct S0 * p_1814);
int32_t * func_28(int32_t * p_29, struct S0 * p_1814);
int32_t * func_30(int32_t * p_31, struct S0 * p_1814);
int32_t * func_32(uint32_t  p_33, int64_t  p_34, int32_t * p_35, int32_t * p_36, struct S0 * p_1814);
int8_t  func_56(int32_t  p_57, int32_t * p_58, uint64_t  p_59, uint32_t  p_60, uint32_t  p_61, struct S0 * p_1814);
int32_t * func_62(uint16_t  p_63, uint32_t  p_64, int32_t * p_65, struct S0 * p_1814);
int32_t * func_68(int32_t * p_69, int32_t * p_70, int32_t * p_71, uint32_t  p_72, uint32_t  p_73, struct S0 * p_1814);
uint32_t  func_75(int32_t * p_76, struct S0 * p_1814);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1814->g_comm_values p_1814->g_6 p_1814->g_14 p_1814->g_39 p_1814->g_42 p_1814->g_43 p_1814->g_44 p_1814->g_45 p_1814->g_46 p_1814->g_19 p_1814->g_79 p_1814->g_105 p_1814->g_106 p_1814->g_89 p_1814->g_93 p_1814->g_151 p_1814->g_155 p_1814->g_140 p_1814->g_116 p_1814->g_200 p_1814->g_148 p_1814->g_224 p_1814->g_228 p_1814->g_250 p_1814->g_252 p_1814->g_99 p_1814->g_253 p_1814->g_259 p_1814->g_271 p_1814->g_255 p_1814->g_403 p_1814->g_434 p_1814->g_441 p_1814->g_444 p_1814->g_445 p_1814->g_468 p_1814->g_471 p_1814->g_410 p_1814->l_comm_values p_1814->g_121 p_1814->g_486 p_1814->g_512 p_1814->g_404 p_1814->g_510 p_1814->g_96 p_1814->g_547 p_1814->g_289 p_1814->g_557 p_1814->g_581 p_1814->g_598 p_1814->g_639 p_1814->g_429 p_1814->g_665 p_1814->g_548 p_1814->g_688 p_1814->g_91 p_1814->g_481 p_1814->g_759 p_1814->g_772 p_1814->g_554 p_1814->g_542 p_1814->g_555 p_1814->g_865 p_1814->g_556 p_1814->g_156 p_1814->g_969 p_1814->g_1027 p_1814->g_511 p_1814->g_771 p_1814->g_1068 p_1814->g_1093 p_1814->g_1097 p_1814->g_1111 p_1814->g_1154 p_1814->g_1161 p_1814->g_1162 p_1814->g_1163 p_1814->g_1112 p_1814->g_1206 p_1814->g_1213 p_1814->g_1224 p_1814->g_1230 p_1814->g_1064 p_1814->g_1319 p_1814->g_1320 p_1814->g_991 p_1814->g_1345 p_1814->g_1259 p_1814->g_1079 p_1814->g_1290 p_1814->g_917 p_1814->g_918 p_1814->g_1341 p_1814->g_1396 p_1814->g_1419 p_1814->g_1422 p_1814->g_1423 p_1814->g_88 p_1814->g_1446 p_1814->g_1457 p_1814->g_1458 p_1814->g_1124 p_1814->g_1705 p_1814->g_1714 p_1814->g_1340 p_1814->g_1729 p_1814->g_90 p_1814->g_1346 p_1814->g_1804
 * writes: p_1814->g_19 p_1814->g_79 p_1814->g_96 p_1814->g_99 p_1814->g_106 p_1814->g_89 p_1814->g_116 p_1814->g_140 p_1814->g_151 p_1814->g_156 p_1814->g_39 p_1814->g_250 p_1814->g_255 p_1814->g_410 p_1814->g_429 p_1814->g_148 p_1814->g_224 p_1814->g_46 p_1814->g_481 p_1814->g_486 p_1814->g_510 p_1814->g_511 p_1814->g_42 p_1814->g_542 p_1814->g_548 p_1814->g_557 p_1814->g_598 p_1814->g_771 p_1814->g_554 p_1814->g_555 p_1814->g_43 p_1814->g_1068 p_1814->g_982 p_1814->g_445 p_1814->g_44 p_1814->g_556 p_1814->g_1259 p_1814->g_1337 p_1814->g_1124 p_1814->g_1230 p_1814->g_1723 p_1814->g_200
 */
uint32_t  func_1(struct S0 * p_1814)
{ /* block id: 4 */
    uint16_t l_9 = 0UL;
    int32_t l_17 = 0L;
    int32_t *l_18 = &p_1814->g_19;
    VECTOR(int64_t, 2) l_40 = (VECTOR(int64_t, 2))((-10L), 0x37518DB06862EAE2L);
    VECTOR(int64_t, 4) l_41 = (VECTOR(int64_t, 4))(0x10CE61FA7BB34E4AL, (VECTOR(int64_t, 2))(0x10CE61FA7BB34E4AL, 0x68AF80453D47EBDCL), 0x68AF80453D47EBDCL);
    uint32_t l_47 = 0x95BD6605L;
    uint16_t l_1559 = 0x2836L;
    int32_t l_1560 = 0x3707B50AL;
    VECTOR(uint32_t, 4) l_1706 = (VECTOR(uint32_t, 4))(0x714288C4L, (VECTOR(uint32_t, 2))(0x714288C4L, 0xF1605E41L), 0xF1605E41L);
    uint8_t ***l_1709 = (void*)0;
    int16_t ****l_1722 = &p_1814->g_916;
    int64_t l_1732[3][3] = {{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}};
    uint16_t *l_1733 = &p_1814->g_1259;
    VECTOR(uint64_t, 8) l_1785 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x5ABA38A74B453691L), 0x5ABA38A74B453691L), 0x5ABA38A74B453691L, 18446744073709551615UL, 0x5ABA38A74B453691L);
    uint64_t l_1790 = 0x08824666C31E8772L;
    VECTOR(int8_t, 8) l_1802 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
    VECTOR(int8_t, 16) l_1803 = (VECTOR(int8_t, 16))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x41L), 0x41L), 0x41L, 6L, 0x41L, (VECTOR(int8_t, 2))(6L, 0x41L), (VECTOR(int8_t, 2))(6L, 0x41L), 6L, 0x41L, 6L, 0x41L);
    VECTOR(int8_t, 8) l_1805 = (VECTOR(int8_t, 8))(0x19L, (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, (-2L)), (-2L)), (-2L), 0x19L, (-2L));
    int32_t l_1812 = (-3L);
    uint8_t l_1813 = 255UL;
    int i, j;
    if (func_2(((l_1560 |= (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(1UL, 0x8F3C34EEL)).xxxy))))))).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))((((safe_sub_func_uint8_t_u_u(p_1814->g_comm_values[p_1814->tid], ((VECTOR(uint8_t, 16))(p_1814->g_6.zxyzzzyzwzywzxwy)).sa)) , (l_9 = (safe_lshift_func_int16_t_s_u((+(-1L)), 10)))) == (safe_add_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((p_1814->g_982.x = ((((VECTOR(uint64_t, 4))(0xBF90350D8AF8716BL, ((VECTOR(uint64_t, 2))(p_1814->g_14.s06)), 1UL)).w ^ ((safe_mod_func_uint32_t_u_u(((((*l_18) = l_17) , (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint64_t_u((func_23(func_28(func_30(func_32((l_17 = (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 8))(0x2450C1979116971DL, ((VECTOR(int64_t, 4))(p_1814->g_39.s7054)), 9L, (-1L), 0x5594484F75DF1563L)).even, ((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 2))(0L, 0x7544BD1A6F32215FL)).xyyxxyyy, (int64_t)(-5L)))).s4745553766307426, ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(l_40.xx)).xxyyyyxxyyxxyyxy, ((VECTOR(int64_t, 8))((-1L), ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(l_41.wzxy)).even, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_1814->g_42.wxyw)).wwyxxzzx)).hi)).lo))), 0x4D97F668CDE333B8L, ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(p_1814->g_43.s42)), l_17, ((p_1814->g_6.z < p_1814->g_43.s0) != l_41.x), ((VECTOR(int64_t, 2))(p_1814->g_44.xx)), 0x3C254F4D21FD0095L, (-1L))))).lo, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(p_1814->g_45.s24)))).xxxx))))).s2242015403720004, ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 4))(p_1814->g_46.s2e7a)).even, ((VECTOR(int64_t, 16))(0x3CB567DFB9DB650FL, l_47, 0x293E9FC65F31FD02L, ((VECTOR(int64_t, 4))(0L)), ((VECTOR(int64_t, 4))(0x5160806AF73E8932L)), l_40.x, ((VECTOR(int64_t, 2))(0x6D3A9A78915CED7CL)), (-7L), 2L)).scf))), ((VECTOR(int64_t, 2))(0x766F2FC99F15FC87L))))).xxyxyyxyyyxyyyxx, ((VECTOR(int64_t, 16))(2L))))).s9412, ((VECTOR(int64_t, 4))(0x791E2C0253A1071FL))))).xxwwwzwyyyzzxxxx))), ((VECTOR(int64_t, 16))(0L)), ((VECTOR(int64_t, 16))(0x4ECB9A7B846FCCBBL))))).s28b9, ((VECTOR(int64_t, 4))((-8L))), ((VECTOR(int64_t, 4))(0x685807939616D9CDL))))).ywyzxyxyzzzyzxyx))).se4aa))).z, (-6L)))), l_41.w, &p_1814->g_19, &p_1814->g_19, p_1814), p_1814), p_1814), (*p_1814->g_403), l_18, p_1814->g_1064.s1, p_1814) ^ 0x7CB2L))), 8))) , 4294967295UL), FAKE_DIVERGE(p_1814->global_2_offset, get_global_id(2), 10))) >= p_1814->g_1097.s5)) & 0UL)), l_41.y)) & l_1559), GROUP_DIVERGE(2, 1)))), ((VECTOR(uint32_t, 8))(0x8CF95C0AL)), l_9, ((VECTOR(uint32_t, 2))(3UL)), ((VECTOR(uint32_t, 2))(0x0C6B67BAL)), 0x58EA4A5FL, 9UL)))).s13))))).lo , p_1814->g_121.y)) ^ l_1559), p_1814))
    { /* block id: 806 */
        VECTOR(int32_t, 2) l_1698 = (VECTOR(int32_t, 2))(1L, 0L);
        uint8_t **l_1711 = &p_1814->g_250;
        uint8_t ***l_1710 = &l_1711;
        int8_t l_1724 = (-1L);
        uint16_t *l_1725 = &l_1559;
        int64_t *l_1726[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1726[i] = (void*)0;
        for (p_1814->g_116 = 22; (p_1814->g_116 != 58); p_1814->g_116 = safe_add_func_int16_t_s_s(p_1814->g_116, 1))
        { /* block id: 809 */
            int32_t *l_1697 = &l_1560;
            uint32_t l_1699 = 0xB923AAC0L;
            int16_t **l_1700 = (void*)0;
            l_1697 = &l_1560;
            (*p_1814->g_106) &= ((((*l_1697) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1698.yyyyyxxy)).lo)).y) , (l_17 = ((*l_1697) = (l_1698.y > 0x41BCB275L)))) , ((l_1699 , l_1700) == (void*)0));
            (*p_1814->g_106) = (((1UL & (*l_1697)) == 0x9812A5FA47E8A5DFL) != 0x601B58944F88E8CFL);
        }
        l_1560 = ((safe_lshift_func_int16_t_s_s((l_17 = 0x2150L), (safe_mul_func_int8_t_s_s((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 4))(p_1814->g_1705.s0064)).wwzyzwzy, ((VECTOR(uint32_t, 16))(l_1706.xwwxzwxzxwzwzzxx)).hi))).s42)).yyyyxyyxxxyyyxyy)).s919a)))).yyxwzzwzywwyzxzz)).odd, (uint32_t)(safe_sub_func_int16_t_s_s((l_1709 == l_1710), ((p_1814->g_200.s3 = ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(255UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(255UL, 253UL)), 1UL, 0xFDL)), (***p_1814->g_1319), ((VECTOR(uint8_t, 2))(p_1814->g_1714.s07)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(0xC1L, 255UL, FAKE_DIVERGE(p_1814->global_2_offset, get_global_id(2), 10), l_1698.x, ((safe_rshift_func_int8_t_s_u(p_1814->g_46.se, ((safe_unary_minus_func_uint8_t_u((+(*p_1814->g_252)))) >= (safe_rshift_func_uint16_t_u_s(((*l_1725) = ((((safe_rshift_func_int16_t_s_u((p_1814->g_1340.s1 != ((p_1814->g_1723 = l_1722) != (void*)0)), p_1814->g_1064.s5)) > FAKE_DIVERGE(p_1814->global_0_offset, get_global_id(0), 10)) < l_1724) ^ l_40.x)), (*p_1814->g_410)))))) , l_1560), 0xE2L, 0x75L, 0x6CL)).odd)), 253UL, 0xAAL, 0x46L, 0xC8L)).sf, p_1814->g_1064.s1)) & p_1814->g_1064.s3)) ^ GROUP_DIVERGE(2, 1))))))))).s05)).odd && 0x4CB0033DL), p_1814->g_1419.x)))) & 0UL);
    }
    else
    { /* block id: 822 */
        uint8_t l_1740 = 0xD1L;
        int64_t *l_1741 = (void*)0;
        int64_t *l_1742 = (void*)0;
        int64_t *l_1743 = (void*)0;
        int64_t *l_1744[1];
        int8_t l_1745 = 0L;
        int32_t l_1746 = 7L;
        int32_t *l_1747 = (void*)0;
        int32_t *l_1748 = &p_1814->g_96;
        int i;
        for (i = 0; i < 1; i++)
            l_1744[i] = (void*)0;
        (*l_1748) ^= (FAKE_DIVERGE(p_1814->global_0_offset, get_global_id(0), 10) , (safe_sub_func_int16_t_s_s((*p_1814->g_410), ((l_40.x & (((VECTOR(uint16_t, 2))(p_1814->g_1729.s73)).lo ^ (((safe_add_func_uint64_t_u_u((GROUP_DIVERGE(2, 1) > l_9), (l_1732[1][1] ^ (((((l_1733 = &p_1814->g_151[0]) != (void*)0) & ((1UL && (safe_sub_func_int64_t_s_s((l_1745 |= (!(((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((safe_rshift_func_uint8_t_u_s((**p_1814->g_1320), ((l_1740 = 1L) > p_1814->g_6.w))) <= 1UL), 0L, 0L, 0x63L)).w, 1)) & 0x66L) <= GROUP_DIVERGE(2, 1)))), 0L))) != l_1746)) , (void*)0) != (*p_1814->g_1319))))) && 252UL) , l_41.y))) == l_1706.y))));
    }
    if ((atomic_inc(&p_1814->l_atomic_input[1]) == 5))
    { /* block id: 829 */
        int32_t l_1749 = 4L;
        uint64_t l_1755 = 18446744073709551615UL;
        for (l_1749 = 0; (l_1749 == (-10)); l_1749 = safe_sub_func_uint8_t_u_u(l_1749, 3))
        { /* block id: 832 */
            uint8_t l_1752 = 255UL;
            l_1752--;
        }
        l_1755 = (-3L);
        for (l_1749 = (-1); (l_1749 != 19); l_1749 = safe_add_func_uint32_t_u_u(l_1749, 8))
        { /* block id: 838 */
            int16_t l_1758 = (-7L);
            if (l_1758)
            { /* block id: 839 */
                int32_t *l_1759[1][7];
                int32_t l_1761 = 0x5BF9A211L;
                int32_t *l_1760 = &l_1761;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_1759[i][j] = (void*)0;
                }
                l_1760 = l_1759[0][2];
            }
            else
            { /* block id: 841 */
                VECTOR(int32_t, 2) l_1762 = (VECTOR(int32_t, 2))(0x7E7D6FB9L, 0x09315C31L);
                int32_t l_1763 = 0x4F30195DL;
                int32_t l_1764 = (-4L);
                uint32_t l_1765 = 0x1BF05E9AL;
                VECTOR(uint64_t, 16) l_1768 = (VECTOR(uint64_t, 16))(0x45F9797808A23406L, (VECTOR(uint64_t, 4))(0x45F9797808A23406L, (VECTOR(uint64_t, 2))(0x45F9797808A23406L, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 0x45F9797808A23406L, 18446744073709551613UL, (VECTOR(uint64_t, 2))(0x45F9797808A23406L, 18446744073709551613UL), (VECTOR(uint64_t, 2))(0x45F9797808A23406L, 18446744073709551613UL), 0x45F9797808A23406L, 18446744073709551613UL, 0x45F9797808A23406L, 18446744073709551613UL);
                VECTOR(int16_t, 16) l_1769 = (VECTOR(int16_t, 16))(0x521CL, (VECTOR(int16_t, 4))(0x521CL, (VECTOR(int16_t, 2))(0x521CL, 1L), 1L), 1L, 0x521CL, 1L, (VECTOR(int16_t, 2))(0x521CL, 1L), (VECTOR(int16_t, 2))(0x521CL, 1L), 0x521CL, 1L, 0x521CL, 1L);
                VECTOR(uint16_t, 2) l_1770 = (VECTOR(uint16_t, 2))(0xE5D3L, 0x55F0L);
                uint32_t l_1771 = 6UL;
                VECTOR(int32_t, 8) l_1772 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 7L), 7L), 7L, 9L, 7L);
                VECTOR(int32_t, 16) l_1773 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                uint64_t l_1774 = 1UL;
                int32_t l_1775 = 0x2345E04AL;
                uint16_t l_1776[5] = {0UL,0UL,0UL,0UL,0UL};
                VECTOR(uint8_t, 2) l_1777 = (VECTOR(uint8_t, 2))(0x38L, 249UL);
                uint32_t l_1778 = 4294967295UL;
                int i;
                l_1765--;
                l_1771 = (((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_1768.s7433)).zzwwyzzz)))).s5324016540047573, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0xE16618E19F59D8DBL, 18446744073709551610UL)).xxyyyxxxxyxxyyyy))))).sf , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_1769.s60)), ((VECTOR(uint16_t, 4))(l_1770.xxxy)).lo))), (-10L), 0x1156606AL)).z);
                l_1778 = (((VECTOR(int32_t, 4))(l_1772.s2320)).y , ((l_1777.y |= ((l_1774 = ((VECTOR(int32_t, 2))(l_1773.sf0)).lo) , (l_1776[1] &= l_1775))) , (-1L)));
            }
        }
        unsigned int result = 0;
        result += l_1749;
        result += l_1755;
        atomic_add(&p_1814->l_special_values[1], result);
    }
    else
    { /* block id: 850 */
        (1 + 1);
    }
    (*p_1814->g_106) = ((safe_mul_func_uint16_t_u_u(l_17, (p_1814->g_99 | ((safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_1785.s3276)))), 18446744073709551614UL, (safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s(l_1790, ((safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((+(((l_1560 = (l_40.x > ((l_1790 , 0xFDL) , ((*p_1814->g_1320) == (**p_1814->g_1319))))) && (***p_1814->g_1319)) < GROUP_DIVERGE(2, 1))), 0x25C9L)), 5)))) , 0x35F8L))), l_47)), ((VECTOR(uint64_t, 2))(1UL)), ((VECTOR(uint64_t, 4))(0x62B3FD5A5FE0A8EAL)), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0xA4F833FCB50BF34FL, 18446744073709551608UL)).odd)).s0, 0x77DD68876942A1E9L)), l_1785.s0)) >= l_17)))) || (***p_1814->g_1319));
    l_17 = ((l_1560 = (p_1814->g_90 >= ((((l_1732[2][1] , (*p_1814->g_1345)) == (void*)0) , (safe_add_func_int64_t_s_s(l_1706.w, ((((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(l_1802.s43)).yxxxyyxy, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_1803.s5773)).odd)).yxxy, ((VECTOR(int8_t, 4))(8L, ((VECTOR(int8_t, 2))(p_1814->g_1804.yx)), (-9L))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_1805.s04)).xxyyxyyxxxyyxyxx)).s58)), 0L, 0x3BL))))).wxwyxyyy))).s4 > (-5L)) <= l_1805.s6)))) || (!(-6L))))) <= ((safe_div_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u((FAKE_DIVERGE(p_1814->global_1_offset, get_global_id(1), 10) < (safe_mod_func_int64_t_s_s((p_1814->g_511 && p_1814->g_1162.y), l_1785.s3))), l_1812)) > p_1814->g_1124), l_1813)) <= p_1814->g_481));
    return l_1706.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_598 p_1814->g_105 p_1814->g_106 p_1814->g_89
 * writes: p_1814->g_598
 */
int32_t  func_2(int32_t  p_3, struct S0 * p_1814)
{ /* block id: 689 */
    VECTOR(int8_t, 16) l_1563 = (VECTOR(int8_t, 16))(0x78L, (VECTOR(int8_t, 4))(0x78L, (VECTOR(int8_t, 2))(0x78L, 0x04L), 0x04L), 0x04L, 0x78L, 0x04L, (VECTOR(int8_t, 2))(0x78L, 0x04L), (VECTOR(int8_t, 2))(0x78L, 0x04L), 0x78L, 0x04L, 0x78L, 0x04L);
    int32_t *l_1564[10][8][3] = {{{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96}},{{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96}},{{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96}},{{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96}},{{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96}},{{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96}},{{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96}},{{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96}},{{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96}},{{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96},{&p_1814->g_79[0],&p_1814->g_555,&p_1814->g_96}}};
    uint8_t l_1565 = 0xA7L;
    int i, j, k;
    for (p_1814->g_598 = 0; (p_1814->g_598 < 27); p_1814->g_598 = safe_add_func_uint64_t_u_u(p_1814->g_598, 3))
    { /* block id: 692 */
        if (p_3)
            break;
        return l_1563.se;
    }
    l_1564[8][7][2] = (void*)0;
    l_1565++;
    if ((atomic_inc(&p_1814->l_atomic_input[68]) == 5))
    { /* block id: 699 */
        int32_t l_1568 = 0x64D948F7L;
        int64_t l_1583 = 0x49714245A8BFA3F9L;
        int16_t l_1584[9] = {0x1FB4L,0x1FB4L,0x1FB4L,0x1FB4L,0x1FB4L,0x1FB4L,0x1FB4L,0x1FB4L,0x1FB4L};
        int16_t l_1585 = 0x4475L;
        int i;
        for (l_1568 = 4; (l_1568 == 4); l_1568++)
        { /* block id: 702 */
            int32_t l_1572 = (-6L);
            int32_t *l_1571[4][10] = {{(void*)0,&l_1572,&l_1572,&l_1572,&l_1572,(void*)0,&l_1572,(void*)0,&l_1572,(void*)0},{(void*)0,&l_1572,&l_1572,&l_1572,&l_1572,(void*)0,&l_1572,(void*)0,&l_1572,(void*)0},{(void*)0,&l_1572,&l_1572,&l_1572,&l_1572,(void*)0,&l_1572,(void*)0,&l_1572,(void*)0},{(void*)0,&l_1572,&l_1572,&l_1572,&l_1572,(void*)0,&l_1572,(void*)0,&l_1572,(void*)0}};
            int32_t l_1577 = (-10L);
            int8_t l_1578 = 0x64L;
            int64_t l_1579 = 0L;
            uint32_t l_1580 = 1UL;
            int i, j;
            l_1571[3][8] = (void*)0;
            for (l_1572 = (-17); (l_1572 >= (-5)); l_1572 = safe_add_func_int8_t_s_s(l_1572, 1))
            { /* block id: 706 */
                VECTOR(uint64_t, 4) l_1575 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL);
                uint8_t l_1576 = 250UL;
                int i;
                l_1576 = l_1575.y;
            }
            l_1580++;
        }
        l_1584[0] = l_1583;
        if (l_1585)
        { /* block id: 712 */
            uint32_t l_1586 = 4294967295UL;
            if (l_1586)
            { /* block id: 713 */
                int32_t l_1587[2][2][5] = {{{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)}}};
                int32_t l_1602 = 0L;
                int32_t *l_1603 = (void*)0;
                int32_t *l_1604[4][1];
                uint32_t l_1605 = 0xB350F3CFL;
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1604[i][j] = &l_1587[1][1][0];
                }
                for (l_1587[1][0][3] = 0; (l_1587[1][0][3] < 10); ++l_1587[1][0][3])
                { /* block id: 716 */
                    int32_t l_1591 = 0x6FE2E001L;
                    int32_t *l_1590 = &l_1591;
                    int32_t *l_1592 = &l_1591;
                    VECTOR(int32_t, 16) l_1600 = (VECTOR(int32_t, 16))(0x57C1F0F9L, (VECTOR(int32_t, 4))(0x57C1F0F9L, (VECTOR(int32_t, 2))(0x57C1F0F9L, 0x4DACFD7BL), 0x4DACFD7BL), 0x4DACFD7BL, 0x57C1F0F9L, 0x4DACFD7BL, (VECTOR(int32_t, 2))(0x57C1F0F9L, 0x4DACFD7BL), (VECTOR(int32_t, 2))(0x57C1F0F9L, 0x4DACFD7BL), 0x57C1F0F9L, 0x4DACFD7BL, 0x57C1F0F9L, 0x4DACFD7BL);
                    int16_t l_1601 = 9L;
                    int i;
                    l_1590 = (l_1592 = l_1590);
                    for (l_1591 = 17; (l_1591 <= (-16)); l_1591 = safe_sub_func_uint64_t_u_u(l_1591, 7))
                    { /* block id: 721 */
                        int16_t l_1595 = 0L;
                        int32_t l_1596 = 0x36267F06L;
                        uint32_t l_1597 = 0x42089D2EL;
                        l_1597++;
                    }
                    l_1601 |= (l_1568 = ((VECTOR(int32_t, 2))(l_1600.sa3)).hi);
                }
                l_1604[1][0] = (l_1602 , (l_1603 = (void*)0));
                if (l_1605)
                { /* block id: 729 */
                    VECTOR(uint8_t, 16) l_1606 = (VECTOR(uint8_t, 16))(0xDBL, (VECTOR(uint8_t, 4))(0xDBL, (VECTOR(uint8_t, 2))(0xDBL, 0x66L), 0x66L), 0x66L, 0xDBL, 0x66L, (VECTOR(uint8_t, 2))(0xDBL, 0x66L), (VECTOR(uint8_t, 2))(0xDBL, 0x66L), 0xDBL, 0x66L, 0xDBL, 0x66L);
                    int i;
                    l_1606.sa |= 0L;
                    for (l_1606.s7 = (-25); (l_1606.s7 == 56); l_1606.s7 = safe_add_func_int8_t_s_s(l_1606.s7, 6))
                    { /* block id: 733 */
                        int16_t l_1609 = 0L;
                        int16_t l_1610 = (-5L);
                        int32_t l_1611[10] = {0L,0x040F1A56L,(-1L),0x040F1A56L,0L,0L,0x040F1A56L,(-1L),0x040F1A56L,0L};
                        int16_t l_1612 = 1L;
                        uint32_t l_1613 = 4294967295UL;
                        int i;
                        l_1610 = l_1609;
                        l_1613--;
                    }
                }
                else
                { /* block id: 737 */
                    VECTOR(int32_t, 16) l_1616 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3E6747E9L), 0x3E6747E9L), 0x3E6747E9L, (-1L), 0x3E6747E9L, (VECTOR(int32_t, 2))((-1L), 0x3E6747E9L), (VECTOR(int32_t, 2))((-1L), 0x3E6747E9L), (-1L), 0x3E6747E9L, (-1L), 0x3E6747E9L);
                    uint16_t l_1617 = 65534UL;
                    VECTOR(int8_t, 2) l_1618 = (VECTOR(int8_t, 2))(0x7BL, 0x69L);
                    int i;
                    l_1618.y = (l_1617 = ((VECTOR(int32_t, 4))(l_1616.sd859)).y);
                }
                for (l_1587[1][0][3] = 0; (l_1587[1][0][3] != (-24)); l_1587[1][0][3] = safe_sub_func_uint64_t_u_u(l_1587[1][0][3], 3))
                { /* block id: 743 */
                    int32_t l_1621 = 2L;
                    int32_t l_1622 = 0x65C6C1A5L;
                    int32_t l_1623 = (-5L);
                    int32_t *l_1624 = &l_1622;
                    l_1622 = l_1621;
                    l_1604[1][0] = (l_1623 , l_1624);
                }
            }
            else
            { /* block id: 747 */
                int16_t l_1625 = 0x6801L;
                uint32_t l_1626 = 0x829FAAC1L;
                l_1626--;
            }
            for (l_1586 = 0; (l_1586 <= 50); l_1586 = safe_add_func_int32_t_s_s(l_1586, 8))
            { /* block id: 752 */
                uint64_t l_1631 = 18446744073709551615UL;
                l_1568 &= l_1631;
            }
        }
        else
        { /* block id: 755 */
            int16_t l_1632 = 2L;
            VECTOR(uint8_t, 16) l_1633 = (VECTOR(uint8_t, 16))(0xFAL, (VECTOR(uint8_t, 4))(0xFAL, (VECTOR(uint8_t, 2))(0xFAL, 0x20L), 0x20L), 0x20L, 0xFAL, 0x20L, (VECTOR(uint8_t, 2))(0xFAL, 0x20L), (VECTOR(uint8_t, 2))(0xFAL, 0x20L), 0xFAL, 0x20L, 0xFAL, 0x20L);
            VECTOR(uint8_t, 16) l_1634 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x53L), 0x53L), 0x53L, 1UL, 0x53L, (VECTOR(uint8_t, 2))(1UL, 0x53L), (VECTOR(uint8_t, 2))(1UL, 0x53L), 1UL, 0x53L, 1UL, 0x53L);
            VECTOR(uint8_t, 4) l_1635 = (VECTOR(uint8_t, 4))(0x7AL, (VECTOR(uint8_t, 2))(0x7AL, 0x4DL), 0x4DL);
            VECTOR(uint8_t, 2) l_1636 = (VECTOR(uint8_t, 2))(0x57L, 0xF0L);
            int32_t l_1637 = 0x526631C3L;
            uint32_t l_1638 = 9UL;
            int8_t l_1639 = (-1L);
            uint32_t l_1640 = 0xEF7564E7L;
            VECTOR(uint8_t, 16) l_1641 = (VECTOR(uint8_t, 16))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 1UL), 1UL), 1UL, 247UL, 1UL, (VECTOR(uint8_t, 2))(247UL, 1UL), (VECTOR(uint8_t, 2))(247UL, 1UL), 247UL, 1UL, 247UL, 1UL);
            int32_t l_1642 = 0x33A01021L;
            VECTOR(uint8_t, 4) l_1643 = (VECTOR(uint8_t, 4))(0x4CL, (VECTOR(uint8_t, 2))(0x4CL, 0x82L), 0x82L);
            VECTOR(uint8_t, 2) l_1644 = (VECTOR(uint8_t, 2))(253UL, 253UL);
            VECTOR(uint8_t, 2) l_1645 = (VECTOR(uint8_t, 2))(1UL, 252UL);
            VECTOR(uint8_t, 2) l_1646 = (VECTOR(uint8_t, 2))(0x4EL, 255UL);
            int32_t l_1647 = (-10L);
            uint64_t l_1648[9][2][1] = {{{0x43818108B014E793L},{0x43818108B014E793L}},{{0x43818108B014E793L},{0x43818108B014E793L}},{{0x43818108B014E793L},{0x43818108B014E793L}},{{0x43818108B014E793L},{0x43818108B014E793L}},{{0x43818108B014E793L},{0x43818108B014E793L}},{{0x43818108B014E793L},{0x43818108B014E793L}},{{0x43818108B014E793L},{0x43818108B014E793L}},{{0x43818108B014E793L},{0x43818108B014E793L}},{{0x43818108B014E793L},{0x43818108B014E793L}}};
            int32_t *l_1692 = (void*)0;
            int32_t *l_1693 = &l_1642;
            int32_t *l_1694 = &l_1642;
            int i, j, k;
            if (((l_1632 &= 0x9BF5CE26484C3990L) , (((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(l_1633.s97)), ((VECTOR(uint8_t, 2))(255UL, 4UL)), ((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_1634.sb8)).xyyxyxyx)).even, ((VECTOR(uint8_t, 16))(l_1635.xyxwyyzwxwyyxxzw)).sac89))).even))), ((VECTOR(uint8_t, 16))(l_1636.yyxyyyyxyxyyyyxy)).s13))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))((l_1639 &= (l_1637 , l_1638)), GROUP_DIVERGE(0, 1), 0xDBL, 1UL, 1UL, 6UL, 6UL, 2UL)).s62))))), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(0x22L, 0x8DL, l_1640, 1UL, ((VECTOR(uint8_t, 2))(l_1641.s97)), 0xDBL, l_1642, ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(7UL, 253UL, ((VECTOR(uint8_t, 4))(l_1643.yxxz)), 0x72L, 0x14L)).lo)).even)))).xyxyxyyx, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(l_1644.yyxyyxxx)).s24, ((VECTOR(uint8_t, 16))(l_1645.yxyyyxyxxyyxyxxx)).s3d))).xyxxxxxy))).s3053745633040736, ((VECTOR(uint8_t, 8))(l_1646.xxyyyxxx)).s6332722427545366))).s5f65))), ((VECTOR(uint8_t, 2))(0UL, 0xEBL)), 0xCBL, 6UL)))).s00))).even , ((VECTOR(int32_t, 16))(0x0989EBC0L, ((VECTOR(int32_t, 2))(7L, 0x5AA16B82L)), l_1647, 1L, 0x5A1B9B12L, (-10L), 0x291D5D36L, l_1648[2][1][0], ((VECTOR(int32_t, 4))(0x58130415L)), 1L, 0x072F4D2EL, 0x4C96D9FCL)).s9)))
            { /* block id: 758 */
                uint16_t l_1649 = 7UL;
                l_1568 ^= (l_1649 = 0x5845D764L);
                for (l_1649 = 0; (l_1649 > 47); l_1649++)
                { /* block id: 763 */
                    uint32_t l_1652 = 0UL;
                    int32_t l_1654 = 0x6C11BF26L;
                    int32_t *l_1653 = &l_1654;
                    uint32_t l_1662 = 2UL;
                    uint64_t l_1663 = 18446744073709551615UL;
                    l_1653 = ((l_1642 = (l_1568 &= l_1652)) , (void*)0);
                    for (l_1652 = (-11); (l_1652 != 23); ++l_1652)
                    { /* block id: 769 */
                        int32_t l_1658 = 0x1836FCC5L;
                        int32_t *l_1657[7] = {&l_1658,&l_1658,&l_1658,&l_1658,&l_1658,&l_1658,&l_1658};
                        int64_t l_1659 = (-1L);
                        VECTOR(uint64_t, 2) l_1660 = (VECTOR(uint64_t, 2))(6UL, 0xF5D3852F997604B2L);
                        uint16_t l_1661 = 0xE4F9L;
                        int i;
                        l_1657[3] = l_1657[4];
                        l_1654 = (l_1568 ^= (l_1659 , (((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 16))(l_1660.xyxxxxyyxxxyxxxx)).s07, ((VECTOR(uint64_t, 2))(0xB58542A8A22BE9CDL, 0x21C6BA314252AA87L))))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(4UL, 0xF9F03577F1C70D1CL)).xxxx)).odd))).odd , 0x20F92A69L)));
                        l_1642 = l_1661;
                    }
                    l_1568 = l_1662;
                    l_1568 &= (l_1642 = l_1663);
                }
                for (l_1649 = 0; (l_1649 <= 35); ++l_1649)
                { /* block id: 781 */
                    uint32_t l_1666 = 0x05C69D7AL;
                    VECTOR(int32_t, 8) l_1669 = (VECTOR(int32_t, 8))(0x219BC44EL, (VECTOR(int32_t, 4))(0x219BC44EL, (VECTOR(int32_t, 2))(0x219BC44EL, 1L), 1L), 1L, 0x219BC44EL, 1L);
                    VECTOR(int32_t, 16) l_1670 = (VECTOR(int32_t, 16))(0x3BEE48A6L, (VECTOR(int32_t, 4))(0x3BEE48A6L, (VECTOR(int32_t, 2))(0x3BEE48A6L, 0x51597ED9L), 0x51597ED9L), 0x51597ED9L, 0x3BEE48A6L, 0x51597ED9L, (VECTOR(int32_t, 2))(0x3BEE48A6L, 0x51597ED9L), (VECTOR(int32_t, 2))(0x3BEE48A6L, 0x51597ED9L), 0x3BEE48A6L, 0x51597ED9L, 0x3BEE48A6L, 0x51597ED9L);
                    VECTOR(int32_t, 2) l_1671 = (VECTOR(int32_t, 2))(0x0E98170FL, 0x3000F8A2L);
                    VECTOR(int32_t, 2) l_1672 = (VECTOR(int32_t, 2))(0x3CB76DE5L, 0L);
                    int32_t *l_1682 = (void*)0;
                    int8_t l_1683 = 0x47L;
                    int i;
                    l_1666++;
                    if (((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(l_1669.s56)).yyyyyxyxyxyyxxyy, ((VECTOR(int32_t, 2))(l_1670.s46)).xyyyxyyyyxyxyyyy))).hi, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x79C25587L, 0x69C53F1CL)), 0x3FF25CD6L, 7L)).zwxwzyxzzzyzwyzy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1671.xyyx)).even)).yyxyyyyyyyyyyxyy, ((VECTOR(int32_t, 2))(0L, 4L)).yxxyyxyyyyxyxyyx))).hi, ((VECTOR(int32_t, 8))(l_1672.yxyyxyxx))))).s3)
                    { /* block id: 783 */
                        uint32_t l_1673[5];
                        int64_t l_1676 = 0x5355675A02DEEEC0L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1673[i] = 0x5AFDCB0CL;
                        l_1670.s9 ^= 7L;
                        ++l_1673[4];
                        l_1671.x ^= l_1676;
                    }
                    else
                    { /* block id: 787 */
                        uint8_t l_1677 = 0x22L;
                        uint32_t l_1678 = 4294967295UL;
                        int32_t l_1681 = 0x6D74A956L;
                        l_1642 = l_1677;
                        l_1678++;
                        l_1672.y = 0x5C104313L;
                        l_1672.y ^= l_1681;
                    }
                    l_1682 = (void*)0;
                    l_1642 |= l_1683;
                }
            }
            else
            { /* block id: 796 */
                int64_t l_1684[6];
                int64_t l_1685 = 4L;
                int16_t l_1686 = (-1L);
                int32_t l_1687 = 0L;
                VECTOR(int32_t, 2) l_1688 = (VECTOR(int32_t, 2))(0x25B9E9EEL, (-10L));
                uint8_t l_1689 = 0x0FL;
                int i;
                for (i = 0; i < 6; i++)
                    l_1684[i] = (-1L);
                --l_1689;
            }
            l_1694 = (l_1693 = l_1692);
        }
        unsigned int result = 0;
        result += l_1568;
        result += l_1583;
        int l_1584_i0;
        for (l_1584_i0 = 0; l_1584_i0 < 9; l_1584_i0++) {
            result += l_1584[l_1584_i0];
        }
        result += l_1585;
        atomic_add(&p_1814->l_special_values[68], result);
    }
    else
    { /* block id: 802 */
        (1 + 1);
    }
    return (**p_1814->g_105);
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_148 p_1814->g_1112 p_1814->g_6 p_1814->g_252 p_1814->g_253 p_1814->g_1163 p_1814->g_1319 p_1814->g_89 p_1814->g_1320 p_1814->g_991 p_1814->g_106 p_1814->g_79 p_1814->g_259 p_1814->g_403 p_1814->g_404 p_1814->g_759 p_1814->g_1111 p_1814->g_511 p_1814->g_481 p_1814->g_224 p_1814->g_1345 p_1814->g_1259 p_1814->g_1079 p_1814->g_429 p_1814->g_151 p_1814->g_969 p_1814->g_1290 p_1814->g_555 p_1814->g_917 p_1814->g_918 p_1814->g_289 p_1814->g_1341 p_1814->g_688 p_1814->g_19 p_1814->g_1396 p_1814->g_116 p_1814->g_1419 p_1814->g_1422 p_1814->g_1423 p_1814->g_88 p_1814->g_1446 p_1814->g_1154 p_1814->g_554 p_1814->g_639 p_1814->g_444 p_1814->g_1457 p_1814->g_1458 p_1814->g_410 p_1814->g_140 p_1814->g_1124 p_1814->g_441 p_1814->g_1097
 * writes: p_1814->g_148 p_1814->g_556 p_1814->g_511 p_1814->g_598 p_1814->g_116 p_1814->g_79 p_1814->g_151 p_1814->g_19 p_1814->g_89 p_1814->g_1337 p_1814->g_255 p_1814->g_156 p_1814->g_481 p_1814->g_1124 p_1814->g_1230 p_1814->g_1068
 */
int16_t  func_23(int32_t * p_24, int32_t * p_25, int32_t * p_26, uint64_t  p_27, struct S0 * p_1814)
{ /* block id: 524 */
    int32_t *l_1269[7] = {&p_1814->g_255,&p_1814->g_255,&p_1814->g_255,&p_1814->g_255,&p_1814->g_255,&p_1814->g_255,&p_1814->g_255};
    int32_t l_1278 = 0x6464DC81L;
    VECTOR(int8_t, 8) l_1293 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x24L), 0x24L), 0x24L, 0L, 0x24L);
    int16_t ***l_1303 = &p_1814->g_918[1][0];
    VECTOR(int64_t, 4) l_1305 = (VECTOR(int64_t, 4))(0x7799D3C627143380L, (VECTOR(int64_t, 2))(0x7799D3C627143380L, 0L), 0L);
    uint16_t l_1318 = 65535UL;
    int32_t *l_1328[5] = {&p_1814->g_96,&p_1814->g_96,&p_1814->g_96,&p_1814->g_96,&p_1814->g_96};
    VECTOR(int32_t, 16) l_1413 = (VECTOR(int32_t, 16))(0x6CFE38DDL, (VECTOR(int32_t, 4))(0x6CFE38DDL, (VECTOR(int32_t, 2))(0x6CFE38DDL, 4L), 4L), 4L, 0x6CFE38DDL, 4L, (VECTOR(int32_t, 2))(0x6CFE38DDL, 4L), (VECTOR(int32_t, 2))(0x6CFE38DDL, 4L), 0x6CFE38DDL, 4L, 0x6CFE38DDL, 4L);
    uint64_t l_1467[1];
    int32_t l_1486 = (-10L);
    int32_t l_1487[9][3][2] = {{{0L,0x72BD2BDDL},{0L,0x72BD2BDDL},{0L,0x72BD2BDDL}},{{0L,0x72BD2BDDL},{0L,0x72BD2BDDL},{0L,0x72BD2BDDL}},{{0L,0x72BD2BDDL},{0L,0x72BD2BDDL},{0L,0x72BD2BDDL}},{{0L,0x72BD2BDDL},{0L,0x72BD2BDDL},{0L,0x72BD2BDDL}},{{0L,0x72BD2BDDL},{0L,0x72BD2BDDL},{0L,0x72BD2BDDL}},{{0L,0x72BD2BDDL},{0L,0x72BD2BDDL},{0L,0x72BD2BDDL}},{{0L,0x72BD2BDDL},{0L,0x72BD2BDDL},{0L,0x72BD2BDDL}},{{0L,0x72BD2BDDL},{0L,0x72BD2BDDL},{0L,0x72BD2BDDL}},{{0L,0x72BD2BDDL},{0L,0x72BD2BDDL},{0L,0x72BD2BDDL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1467[i] = 0xC8FB2AD27DB6AA6EL;
    for (p_1814->g_148 = (-2); (p_1814->g_148 >= (-11)); p_1814->g_148--)
    { /* block id: 527 */
        int32_t *l_1270 = &p_1814->g_255;
        uint32_t *l_1281 = &p_1814->g_429;
        int32_t l_1283 = 0x5FAD0A08L;
        int32_t l_1306 = (-1L);
        VECTOR(int16_t, 2) l_1362 = (VECTOR(int16_t, 2))((-7L), 8L);
        VECTOR(uint32_t, 8) l_1364 = (VECTOR(uint32_t, 8))(0xA0284D84L, (VECTOR(uint32_t, 4))(0xA0284D84L, (VECTOR(uint32_t, 2))(0xA0284D84L, 4294967288UL), 4294967288UL), 4294967288UL, 0xA0284D84L, 4294967288UL);
        int32_t *l_1395 = &l_1283;
        int32_t l_1402 = (-3L);
        VECTOR(int32_t, 4) l_1403 = (VECTOR(int32_t, 4))(0x27F99F5DL, (VECTOR(int32_t, 2))(0x27F99F5DL, 7L), 7L);
        uint16_t l_1404 = 0UL;
        VECTOR(int64_t, 8) l_1418 = (VECTOR(int64_t, 8))(0x440ED59F6A5D7184L, (VECTOR(int64_t, 4))(0x440ED59F6A5D7184L, (VECTOR(int64_t, 2))(0x440ED59F6A5D7184L, 0x576DB9ADFA32CEA6L), 0x576DB9ADFA32CEA6L), 0x576DB9ADFA32CEA6L, 0x440ED59F6A5D7184L, 0x576DB9ADFA32CEA6L);
        uint64_t *l_1428 = &p_1814->g_542;
        int16_t ****l_1439 = &l_1303;
        VECTOR(int64_t, 8) l_1468 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x489BDE61CE205E8CL), 0x489BDE61CE205E8CL), 0x489BDE61CE205E8CL, 0L, 0x489BDE61CE205E8CL);
        int64_t *l_1469 = (void*)0;
        int64_t *l_1470 = (void*)0;
        int64_t *l_1471 = (void*)0;
        int64_t *l_1472 = (void*)0;
        int64_t l_1473 = 0x6F4868FF1811713CL;
        int32_t **l_1474 = &l_1328[1];
        int8_t *l_1477 = (void*)0;
        int16_t *l_1478 = (void*)0;
        int16_t *l_1479 = &p_1814->g_1124;
        int16_t *l_1480 = &p_1814->g_1230;
        int8_t *l_1481 = (void*)0;
        int8_t *l_1482 = (void*)0;
        int8_t *l_1483 = &p_1814->g_1068;
        uint16_t *l_1484 = (void*)0;
        uint16_t *l_1485 = &p_1814->g_151[0];
        uint64_t l_1488 = 0UL;
        int i;
        for (p_1814->g_556 = (-28); (p_1814->g_556 < (-14)); p_1814->g_556++)
        { /* block id: 530 */
            uint16_t *l_1271[5];
            int32_t l_1282 = 5L;
            int32_t *l_1329[9];
            int32_t ***l_1336 = &p_1814->g_548;
            VECTOR(uint32_t, 8) l_1363 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL), 4294967295UL, 1UL, 4294967295UL);
            int32_t l_1399[5] = {0x174EB41AL,0x174EB41AL,0x174EB41AL,0x174EB41AL,0x174EB41AL};
            int i;
            for (i = 0; i < 5; i++)
                l_1271[i] = &p_1814->g_510;
            for (i = 0; i < 9; i++)
                l_1329[i] = &p_1814->g_554;
            if (((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x3A13L, 0x0E02L)))).even | p_27) && (safe_rshift_func_int8_t_s_u((l_1282 = (((((l_1269[3] == l_1270) && ((*p_1814->g_1112) = p_27)) <= 0x69C6L) <= ((safe_lshift_func_uint16_t_u_s(p_27, 8)) == (((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s((l_1278 == (((((safe_rshift_func_int16_t_s_s((GROUP_DIVERGE(1, 1) , ((l_1281 = &p_1814->g_557[0]) != p_25)), l_1282)) != l_1283) , (void*)0) == (void*)0) , 0xA63EA46BL)), l_1278)), p_27)) >= 0x5DL) >= 0x4412D796L))) != l_1283)), 3))))
            { /* block id: 534 */
                int16_t ***l_1300 = (void*)0;
                int64_t *l_1304 = (void*)0;
                int32_t l_1321 = (-1L);
                int32_t l_1325 = 0x02C7B93EL;
                VECTOR(int32_t, 16) l_1342 = (VECTOR(int32_t, 16))(0x643FDEFCL, (VECTOR(int32_t, 4))(0x643FDEFCL, (VECTOR(int32_t, 2))(0x643FDEFCL, (-7L)), (-7L)), (-7L), 0x643FDEFCL, (-7L), (VECTOR(int32_t, 2))(0x643FDEFCL, (-7L)), (VECTOR(int32_t, 2))(0x643FDEFCL, (-7L)), 0x643FDEFCL, (-7L), 0x643FDEFCL, (-7L));
                int i;
                for (p_27 = 0; (p_27 < 22); p_27 = safe_add_func_uint32_t_u_u(p_27, 2))
                { /* block id: 537 */
                    uint64_t l_1317 = 0UL;
                    VECTOR(int32_t, 16) l_1338 = (VECTOR(int32_t, 16))(0x05B7A0EEL, (VECTOR(int32_t, 4))(0x05B7A0EEL, (VECTOR(int32_t, 2))(0x05B7A0EEL, 1L), 1L), 1L, 0x05B7A0EEL, 1L, (VECTOR(int32_t, 2))(0x05B7A0EEL, 1L), (VECTOR(int32_t, 2))(0x05B7A0EEL, 1L), 0x05B7A0EEL, 1L, 0x05B7A0EEL, 1L);
                    VECTOR(int32_t, 4) l_1339 = (VECTOR(int32_t, 4))(0x51007322L, (VECTOR(int32_t, 2))(0x51007322L, 0L), 0L);
                    VECTOR(uint32_t, 4) l_1343 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 8UL), 8UL);
                    uint64_t *l_1344[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    if ((safe_rshift_func_int8_t_s_s(((l_1278 & (!0x9CE5L)) != ((p_1814->g_6.w , GROUP_DIVERGE(2, 1)) != ((safe_mul_func_int16_t_s_s(p_27, ((p_1814->g_598 = 2UL) == FAKE_DIVERGE(p_1814->global_1_offset, get_global_id(1), 10)))) || ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1814->g_1290.yy)).xyxxyxxy)).s36)))).lo))), 1)))
                    { /* block id: 539 */
                        int i, j;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1814->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 41)), permutations[(safe_mod_func_uint32_t_u_u(l_1278, 10))][(safe_mod_func_uint32_t_u_u(p_1814->tid, 41))]));
                    }
                    else
                    { /* block id: 543 */
                        int8_t *l_1294 = (void*)0;
                        int8_t *l_1295 = (void*)0;
                        int8_t *l_1296 = (void*)0;
                        int8_t *l_1297 = (void*)0;
                        int8_t *l_1298[8][1] = {{&p_1814->g_1068},{&p_1814->g_1068},{&p_1814->g_1068},{&p_1814->g_1068},{&p_1814->g_1068},{&p_1814->g_1068},{&p_1814->g_1068},{&p_1814->g_1068}};
                        int32_t l_1299[8] = {0x2D8CA62DL,0x2D8CA62DL,0x2D8CA62DL,0x2D8CA62DL,0x2D8CA62DL,0x2D8CA62DL,0x2D8CA62DL,0x2D8CA62DL};
                        int16_t ****l_1301 = &p_1814->g_916;
                        int16_t ****l_1302[8][10] = {{(void*)0,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,(void*)0},{(void*)0,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,(void*)0},{(void*)0,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,(void*)0},{(void*)0,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,(void*)0},{(void*)0,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,(void*)0},{(void*)0,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,(void*)0},{(void*)0,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,(void*)0},{(void*)0,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,&p_1814->g_916,(void*)0}};
                        uint8_t *l_1324[5][9][5] = {{{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481}},{{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481}},{{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481}},{{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481}},{{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481},{&p_1814->g_481,&p_1814->g_481,&p_1814->g_481,(void*)0,&p_1814->g_481}}};
                        int i, j, k;
                        l_1306 &= ((safe_sub_func_uint32_t_u_u((0x26BA9047CE18583BL || ((*p_1814->g_252) | (((l_1299[3] = ((VECTOR(int8_t, 8))(l_1293.s32644575)).s4) , l_1300) == (l_1303 = (void*)0)))), p_1814->g_1163.s2)) <= (((l_1283 = 252UL) || (l_1283 = (!((void*)0 != l_1304)))) | (!(+((VECTOR(int64_t, 4))(l_1305.wxyy)).y))));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1814->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 41)), permutations[(safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((0x4AL == ((safe_rshift_func_uint8_t_u_u(p_27, 2)) != (safe_rshift_func_uint16_t_u_u(l_1317, 5)))), ((l_1299[3] |= ((p_27 || l_1317) <= ((l_1318 <= ((void*)0 == p_1814->g_1319)) && p_1814->g_89[4][3][1]))) >= p_27))), 0xE54E39EAL)), 0L)), 10))][(safe_mod_func_uint32_t_u_u(p_1814->tid, 41))]));
                        l_1328[0] = func_68(p_26, p_25, func_62(l_1321, (l_1306 , (safe_rshift_func_uint8_t_u_u((l_1325 = (**p_1814->g_1320)), 6))), l_1269[2], p_1814), p_1814->g_991.s6, (safe_rshift_func_int16_t_s_s((l_1283 = l_1282), p_27)), p_1814);
                        (*p_1814->g_106) = (p_24 != ((1L >= 0x1ECAL) , func_68(p_24, (*p_1814->g_403), l_1329[6], p_27, p_1814->g_759.s6, p_1814)));
                    }
                    (*p_1814->g_106) = (safe_div_func_uint64_t_u_u(((++(**p_1814->g_1111)) > ((p_1814->g_481 , ((safe_rshift_func_uint8_t_u_s(p_27, 5)) ^ (l_1306 >= (((p_1814->g_1337 = l_1336) == (void*)0) , (0x18EDL < (p_1814->g_224.s6 == (-1L))))))) >= ((l_1321 &= (((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_1338.sca58)).hi, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))((-8L), (-1L))).yxxy, ((VECTOR(int32_t, 8))(l_1339.zyyzxwzy)).hi))).hi, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(p_1814->g_1340.s2415575024465053)).hi, ((VECTOR(int32_t, 4))(p_1814->g_1341.s52ac)).xwyxzxxz, ((VECTOR(int32_t, 4))(l_1342.sbf9b)).zywwzwyw))).s45))).lo <= ((VECTOR(uint32_t, 8))(l_1343.yyyxyxwy)).s7)) > (((void*)0 != p_1814->g_1345) < (-1L))))), 0x14B1516050B7EEA9L));
                }
                for (l_1325 = (-27); (l_1325 >= (-17)); l_1325 = safe_add_func_uint16_t_u_u(l_1325, 3))
                { /* block id: 565 */
                    uint32_t l_1370 = 4294967288UL;
                    int32_t **l_1371 = (void*)0;
                    int32_t **l_1372[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1372[i] = &l_1328[0];
                    for (p_1814->g_255 = 0; (p_1814->g_255 < (-10)); --p_1814->g_255)
                    { /* block id: 568 */
                        int16_t l_1355 = 0x18AFL;
                        l_1355 &= (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))(p_1814->g_1354.xxxyxxxy)).s6, 0xE5E104E72C5B2551L));
                    }
                    if ((atomic_inc(&p_1814->g_atomic_input[84 * get_linear_group_id() + 82]) == 9))
                    { /* block id: 572 */
                        uint32_t l_1356 = 0xD2C03358L;
                        uint16_t l_1357 = 0UL;
                        l_1356 = 0x23B05FB3L;
                        ++l_1357;
                        unsigned int result = 0;
                        result += l_1356;
                        result += l_1357;
                        atomic_add(&p_1814->g_special_values[84 * get_linear_group_id() + 82], result);
                    }
                    else
                    { /* block id: 575 */
                        (1 + 1);
                    }
                    if (p_27)
                        continue;
                    l_1328[3] = ((*p_1814->g_969) = func_62((((safe_lshift_func_uint8_t_u_u(((l_1306 = (-1L)) && (((VECTOR(int16_t, 4))(0x7221L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_1362.xyxx)).odd)), 0L)).x , ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(0x2BE0C6B7L, 4294967288UL, 0x2EEAB26BL, ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_1363.s65)).yyyyyxxxxyxyxyyy)).s4d2a, ((VECTOR(uint32_t, 2))(0x91E9CF0AL, 0xDF21CD50L)).yyyy, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(l_1364.s70540215)).s77, ((VECTOR(uint32_t, 16))(p_27, 0x484768D8L, 0xE3080C5EL, 0x8B793DE6L, 0x49D9ECA2L, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(p_1814->g_1365.xyyxxyyxyxxxyyxx)).sf789)).wwxyzxyw)), ((VECTOR(uint32_t, 2))(0x18D4CB00L, 1UL)), 4294967292UL)).s7c))).yxyx))), 1UL)).lo)))).z)), (safe_lshift_func_uint8_t_u_s(p_27, 2)))) == (p_1814->g_1259 || 4UL)) ^ (0x9951L >= (p_1814->g_1079.w != (((l_1364.s7 >= p_1814->g_429) ^ l_1370) || p_1814->g_151[0])))), l_1342.s3, (*p_1814->g_403), p_1814));
                }
                for (l_1325 = (-21); (l_1325 == (-23)); l_1325 = safe_sub_func_uint16_t_u_u(l_1325, 5))
                { /* block id: 585 */
                    int16_t l_1389 = 1L;
                    int32_t **l_1390 = &l_1328[0];
                    int32_t l_1394 = (-7L);
                    for (l_1278 = 0; (l_1278 != 19); l_1278 = safe_add_func_uint16_t_u_u(l_1278, 5))
                    { /* block id: 588 */
                        int64_t *l_1379 = (void*)0;
                        int64_t *l_1380[8][9][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                        int i, j, k;
                        if (p_27)
                            break;
                        l_1389 |= (((~4294967295UL) , p_1814->g_1290.x) <= (((p_27 , ((((VECTOR(uint8_t, 2))(2UL, 1UL)).odd >= ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 8UL)).xxxy)).hi)).even > l_1363.s1) >= ((l_1282 ^= p_1814->g_555) ^ (((((safe_div_func_uint32_t_u_u(((void*)0 != (*p_1814->g_917)), p_27)) , (safe_rshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u(0UL, p_27)), 0x49E26B4FL)) & p_1814->g_151[0]), 4))) >= 0x0E65FF5B466E5CECL) != p_1814->g_289.s2) , GROUP_DIVERGE(2, 1))))) , p_27)) == l_1342.sb) >= p_1814->g_1341.s6));
                        return l_1389;
                    }
                    (*l_1390) = (void*)0;
                    for (p_1814->g_481 = (-18); (p_1814->g_481 > 27); p_1814->g_481 = safe_add_func_uint16_t_u_u(p_1814->g_481, 6))
                    { /* block id: 597 */
                        int32_t l_1393 = 0L;
                        l_1394 |= l_1393;
                        if (l_1325)
                            break;
                        if ((**p_1814->g_688))
                            break;
                        l_1393 ^= (*p_1814->g_106);
                    }
                }
                if (p_27)
                    continue;
            }
            else
            { /* block id: 605 */
                l_1395 = func_30((*p_1814->g_403), p_1814);
            }
            l_1328[0] = (void*)0;
            (*p_1814->g_106) = (((*l_1395) | p_1814->g_1396.x) , 0x637454EBL);
            for (p_1814->g_116 = 0; (p_1814->g_116 <= 59); ++p_1814->g_116)
            { /* block id: 612 */
                int8_t l_1400 = 0x40L;
                int32_t l_1401[9] = {0x5B07B648L,0x5B07B648L,0x5B07B648L,0x5B07B648L,0x5B07B648L,0x5B07B648L,0x5B07B648L,0x5B07B648L,0x5B07B648L};
                uint64_t *l_1427 = &p_1814->g_542;
                int i;
                --l_1404;
                for (l_1306 = 0; (l_1306 <= (-26)); l_1306 = safe_sub_func_int32_t_s_s(l_1306, 4))
                { /* block id: 616 */
                    VECTOR(int64_t, 2) l_1424 = (VECTOR(int64_t, 2))(0x695BAE680E30C729L, 0x08C118D0D7F48188L);
                    int i;
                    (*l_1395) = (safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 2))(l_1413.s43)).hi, (safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (p_27 <= ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_1418.s31)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(0x18C25D01DA7D50C0L, 0x5A5BD541D46964A0L)).yxxxyyxxxxyxxyyx, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_1814->g_1419.zwwx)).lo)).xyyx, (int64_t)((safe_mod_func_uint32_t_u_u(((void*)0 == &p_1814->g_548), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1814->g_1422.s77)).xyxxyxyx)).s54)).odd)) == 0x7CL)))).yxwxzzyyxyyyzzyw, ((VECTOR(int64_t, 2))(p_1814->g_1423.yz)).xxxxxxyyxyyxxyxx))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_1424.xyyx)).even)))), 0x27402FBA2E295C05L, 0L)), 0L, 0L, 0x6670BD0ACC28F325L, 0x66A258FF299E3F31L)).odd)))).yzwxxxzzyzyyzxyx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))((safe_sub_func_uint64_t_u_u(p_27, (l_1427 == l_1428))), (-4L), (-2L), ((VECTOR(int64_t, 4))(5L)), 0x45C64B78D5378A0EL)))).s0263122734544362))).sb00d)).xxzwzwzyxyyyyxxx, ((VECTOR(int64_t, 16))(0x5256CABBF43FE16BL))))).s76)), ((VECTOR(int64_t, 4))(1L)))).s0))), p_27)))), (*l_1395)));
                }
            }
        }
        l_1306 |= (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((p_27 && ((-1L) > (safe_add_func_uint64_t_u_u(p_27, ((safe_sub_func_int16_t_s_s((((void*)0 == l_1439) >= 250UL), (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(0x12L, p_27, (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(p_1814->g_88, ((VECTOR(int8_t, 2))(p_1814->g_1446.s2b)), ((VECTOR(int8_t, 4))((safe_sub_func_int16_t_s_s(p_27, (*l_1395))), 0x21L, (-1L), 0L)), 0x60L)), ((VECTOR(int8_t, 8))(1L))))).s2 | 0x44L), p_1814->g_1154.y)) | (-5L)), GROUP_DIVERGE(1, 1))), p_1814->g_554, ((VECTOR(int8_t, 4))((-2L))), 0x5EL, p_1814->g_639.x, p_1814->g_1423.y, 0x3DL, (*l_1395), ((VECTOR(int8_t, 2))(0L)), 0x38L)).s3, p_1814->g_444.s4)))) < 0x4266A49B97ABEA9FL))))) && 65531UL), 0UL)), p_27)), p_27));
        l_1306 = (safe_sub_func_uint16_t_u_u(((**p_1814->g_1111) = ((*l_1485) = (safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((*l_1483) = ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1814->g_1457.xzxxywwzzzyywwww)))).sd5, ((VECTOR(int8_t, 16))(p_1814->g_1458.s6f3e2c4fc75c292d)).s19, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0x09L, 0L, (-9L), 0x29L)), (*l_1395), ((((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))((((safe_add_func_int16_t_s_s((*p_1814->g_410), ((*l_1480) = (((safe_sub_func_int16_t_s_s((+p_27), ((safe_add_func_int32_t_s_s(((((safe_add_func_uint64_t_u_u(((p_27 && ((l_1467[0] || (l_1473 &= ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_1468.s27)).xyyyxxyx)).s7)) & ((~((*l_1479) |= ((((p_27 , &l_1328[0]) == l_1474) | (safe_lshift_func_int8_t_s_u(((*l_1395) &= (-9L)), 3))) && p_27))) > (-9L)))) && 0x587AB0A6812BFD9DL), p_27)) >= (*p_1814->g_410)) == p_1814->g_481) || p_27), 0L)) , 0x99E2L))) ^ p_27) & p_27)))) != 0x96L) == p_27), 0x4670DFB0L, 0x02F0BB3BL, p_1814->g_441.s8, 0xBB0C5AD4L, ((VECTOR(uint32_t, 2))(0UL)), 4294967294UL)), ((VECTOR(uint32_t, 8))(1UL))))).s6 & 1UL) <= 0x2949160DL), 0x23L, 5L, ((VECTOR(int8_t, 4))((-1L))), p_1814->g_1097.sa, 1L, 0x11L, 0x65L)).s4b))).hi), 6)), 0x40F9L)), 1L)))), p_27));
        l_1488++;
    }
    (*p_1814->g_106) ^= 0L;
    if ((atomic_inc(&p_1814->l_atomic_input[52]) == 6))
    { /* block id: 634 */
        int64_t l_1491 = 3L;
        int8_t l_1492 = 4L;
        int16_t l_1493 = 0x5392L;
        int64_t l_1494 = 0x2C0F3DB2D8F8C078L;
        uint16_t l_1495 = 0xFB4DL;
        int32_t l_1498[8] = {0x5C73D3D7L,0x5C73D3D7L,0x5C73D3D7L,0x5C73D3D7L,0x5C73D3D7L,0x5C73D3D7L,0x5C73D3D7L,0x5C73D3D7L};
        VECTOR(int32_t, 16) l_1548 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7A2EC583L), 0x7A2EC583L), 0x7A2EC583L, 1L, 0x7A2EC583L, (VECTOR(int32_t, 2))(1L, 0x7A2EC583L), (VECTOR(int32_t, 2))(1L, 0x7A2EC583L), 1L, 0x7A2EC583L, 1L, 0x7A2EC583L);
        VECTOR(int32_t, 4) l_1549 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
        VECTOR(int32_t, 4) l_1550 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1A4F5A29L), 0x1A4F5A29L);
        VECTOR(int32_t, 2) l_1551 = (VECTOR(int32_t, 2))(0x43B88E20L, 1L);
        VECTOR(int32_t, 4) l_1552 = (VECTOR(int32_t, 4))(0x46DEC582L, (VECTOR(int32_t, 2))(0x46DEC582L, (-3L)), (-3L));
        int32_t l_1553 = 0L;
        int i;
        l_1492 |= l_1491;
        --l_1495;
        if (l_1498[5])
        { /* block id: 637 */
            int32_t l_1499[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1499[i] = (-6L);
            for (l_1499[0] = 0; (l_1499[0] < (-18)); l_1499[0]--)
            { /* block id: 640 */
                uint16_t l_1502 = 1UL;
                uint32_t l_1503 = 4294967289UL;
                int32_t l_1504[9] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
                int32_t *l_1505 = (void*)0;
                int32_t *l_1506[3];
                int32_t *l_1507 = &l_1504[1];
                int32_t *l_1508 = &l_1504[7];
                int32_t *l_1509 = &l_1504[1];
                int32_t *l_1510[7][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1506[i] = &l_1504[3];
                l_1508 = (l_1505 = (l_1507 = ((l_1503 = l_1502) , (l_1506[0] = (l_1504[1] , l_1505)))));
                l_1510[6][0] = l_1509;
            }
            for (l_1499[0] = 0; (l_1499[0] != 22); l_1499[0] = safe_add_func_int8_t_s_s(l_1499[0], 2))
            { /* block id: 650 */
                int32_t l_1513 = 0x0D200B8BL;
                VECTOR(uint8_t, 4) l_1520 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x41L), 0x41L);
                VECTOR(uint8_t, 4) l_1521 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL);
                VECTOR(uint8_t, 2) l_1522 = (VECTOR(uint8_t, 2))(1UL, 1UL);
                VECTOR(uint8_t, 4) l_1523 = (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 250UL), 250UL);
                int32_t l_1524 = (-1L);
                VECTOR(uint8_t, 2) l_1525 = (VECTOR(uint8_t, 2))(1UL, 254UL);
                VECTOR(uint8_t, 8) l_1526 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 254UL), 254UL), 254UL, 255UL, 254UL);
                VECTOR(uint8_t, 2) l_1527 = (VECTOR(uint8_t, 2))(0x07L, 0xF1L);
                uint16_t l_1528 = 65533UL;
                VECTOR(int8_t, 2) l_1529 = (VECTOR(int8_t, 2))(1L, 1L);
                int32_t l_1530 = 0L;
                int16_t l_1531[8][10][3] = {{{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)}},{{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)}},{{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)}},{{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)}},{{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)}},{{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)}},{{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)}},{{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)},{0x2B58L,0x31BAL,(-2L)}}};
                VECTOR(uint8_t, 8) l_1532 = (VECTOR(uint8_t, 8))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0x56L), 0x56L), 0x56L, 5UL, 0x56L);
                uint32_t l_1533 = 0UL;
                uint16_t l_1534 = 0UL;
                VECTOR(uint8_t, 4) l_1535 = (VECTOR(uint8_t, 4))(0x58L, (VECTOR(uint8_t, 2))(0x58L, 248UL), 248UL);
                int32_t l_1536 = 0x14CD790BL;
                uint32_t l_1537 = 0xFFA63886L;
                int i, j, k;
                for (l_1513 = 0; (l_1513 == (-19)); l_1513 = safe_sub_func_int16_t_s_s(l_1513, 4))
                { /* block id: 653 */
                    int32_t l_1516 = 1L;
                    for (l_1516 = 8; (l_1516 > (-2)); l_1516 = safe_sub_func_uint16_t_u_u(l_1516, 7))
                    { /* block id: 656 */
                        int16_t l_1519 = 1L;
                        l_1498[2] &= l_1519;
                        l_1498[5] = 0L;
                    }
                }
                l_1498[3] &= ((l_1537 ^= ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_1520.yzwwwzzzyyyyywwx)))).s5a, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 8))(l_1521.zxzxxxxx)).s1627161054174112, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(l_1522.yxxx)).even, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 2))(l_1523.yy))))), 0x31L, l_1524, 1UL, 5UL, 1UL, 1UL)).s56))).xxxxxyyx)).s4250505607370146))).hi, (uint8_t)(l_1521.w = 0x07L)))))).s50, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 16))(l_1525.xxxxyyxxyyyyyxxy)).s28dd, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(6UL, 0UL)), 0x3DL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_1526.s0762)))), ((VECTOR(uint8_t, 2))(l_1527.yx)).even, l_1528, 253UL, 254UL, 1UL, l_1529.x, (l_1530 , (l_1520.x = (l_1523.w |= l_1531[7][7][0]))), 0x3EL, 1UL)).sbbdd, ((VECTOR(uint8_t, 2))(l_1532.s43)).yxyx))).zzzzzzyw, ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 2))(0x52L, 8UL)).xyxyyyyxyyxxyxxy))).odd))).s57))))).yxyxxxyy, ((VECTOR(uint8_t, 8))((l_1534 |= l_1533), 0x75L, ((VECTOR(uint8_t, 16))(l_1535.zzxyyzxwxxwxwzww)).s4, 0x63L, l_1536, 0x34L, 0xA7L, 251UL)), ((VECTOR(uint8_t, 8))(1UL))))).s4) , 1L);
            }
            for (l_1499[0] = (-10); (l_1499[0] < (-24)); --l_1499[0])
            { /* block id: 670 */
                VECTOR(int64_t, 16) l_1540 = (VECTOR(int64_t, 16))(0x7CFD171B6EA0580CL, (VECTOR(int64_t, 4))(0x7CFD171B6EA0580CL, (VECTOR(int64_t, 2))(0x7CFD171B6EA0580CL, (-1L)), (-1L)), (-1L), 0x7CFD171B6EA0580CL, (-1L), (VECTOR(int64_t, 2))(0x7CFD171B6EA0580CL, (-1L)), (VECTOR(int64_t, 2))(0x7CFD171B6EA0580CL, (-1L)), 0x7CFD171B6EA0580CL, (-1L), 0x7CFD171B6EA0580CL, (-1L));
                int64_t l_1541[8][7] = {{(-1L),(-1L),0x4BE54500B7FB245BL,(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),0x4BE54500B7FB245BL,(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),0x4BE54500B7FB245BL,(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),0x4BE54500B7FB245BL,(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),0x4BE54500B7FB245BL,(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),0x4BE54500B7FB245BL,(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),0x4BE54500B7FB245BL,(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),0x4BE54500B7FB245BL,(-1L),(-1L),(-1L),(-1L)}};
                uint32_t l_1542 = 4UL;
                int i, j;
                ++l_1542;
            }
        }
        else
        { /* block id: 673 */
            int32_t l_1546 = (-6L);
            int32_t *l_1545 = &l_1546;
            int32_t *l_1547 = &l_1546;
            l_1547 = l_1545;
        }
        l_1553 |= ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1548.saea09b6012b1ba48)).odd)).hi)).zywzxxzxzxyxzzwy)), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(l_1549.wzxxwywy)).odd, ((VECTOR(int32_t, 2))((-10L), 7L)).xyxx, ((VECTOR(int32_t, 4))(l_1550.wwww))))).xxxywwzw, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_1551.xx)).xxyxxxyy, ((VECTOR(int32_t, 16))(l_1552.xwzzyxyywwxzwxyy)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-4L), 0x729B972BL)), 0x4BEAD8DAL, 0L)).zxyzwwwz)))))).s33))).yxxxyyyxxyxxxyyy))).s8;
        unsigned int result = 0;
        result += l_1491;
        result += l_1492;
        result += l_1493;
        result += l_1494;
        result += l_1495;
        int l_1498_i0;
        for (l_1498_i0 = 0; l_1498_i0 < 8; l_1498_i0++) {
            result += l_1498[l_1498_i0];
        }
        result += l_1548.sf;
        result += l_1548.se;
        result += l_1548.sd;
        result += l_1548.sc;
        result += l_1548.sb;
        result += l_1548.sa;
        result += l_1548.s9;
        result += l_1548.s8;
        result += l_1548.s7;
        result += l_1548.s6;
        result += l_1548.s5;
        result += l_1548.s4;
        result += l_1548.s3;
        result += l_1548.s2;
        result += l_1548.s1;
        result += l_1548.s0;
        result += l_1549.w;
        result += l_1549.z;
        result += l_1549.y;
        result += l_1549.x;
        result += l_1550.w;
        result += l_1550.z;
        result += l_1550.y;
        result += l_1550.x;
        result += l_1551.y;
        result += l_1551.x;
        result += l_1552.w;
        result += l_1552.z;
        result += l_1552.y;
        result += l_1552.x;
        result += l_1553;
        atomic_add(&p_1814->l_special_values[52], result);
    }
    else
    { /* block id: 677 */
        (1 + 1);
    }
    if ((atomic_inc(&p_1814->l_atomic_input[72]) == 4))
    { /* block id: 681 */
        int32_t l_1554 = 1L;
        int16_t l_1555 = (-9L);
        uint16_t l_1556[9][4] = {{65535UL,1UL,65529UL,0xEDFEL},{65535UL,1UL,65529UL,0xEDFEL},{65535UL,1UL,65529UL,0xEDFEL},{65535UL,1UL,65529UL,0xEDFEL},{65535UL,1UL,65529UL,0xEDFEL},{65535UL,1UL,65529UL,0xEDFEL},{65535UL,1UL,65529UL,0xEDFEL},{65535UL,1UL,65529UL,0xEDFEL},{65535UL,1UL,65529UL,0xEDFEL}};
        int i, j;
        --l_1556[1][1];
        unsigned int result = 0;
        result += l_1554;
        result += l_1555;
        int l_1556_i0, l_1556_i1;
        for (l_1556_i0 = 0; l_1556_i0 < 9; l_1556_i0++) {
            for (l_1556_i1 = 0; l_1556_i1 < 4; l_1556_i1++) {
                result += l_1556[l_1556_i0][l_1556_i1];
            }
        }
        atomic_add(&p_1814->l_special_values[72], result);
    }
    else
    { /* block id: 683 */
        (1 + 1);
    }
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_410 p_1814->g_140 p_1814->g_151 p_1814->g_252 p_1814->g_253 p_1814->g_481 p_1814->g_759 p_1814->g_542 p_1814->g_555 p_1814->g_445 p_1814->g_79 p_1814->g_865 p_1814->g_271 p_1814->g_510 p_1814->g_688 p_1814->g_106 p_1814->g_89 p_1814->g_556 p_1814->g_6 p_1814->g_14 p_1814->g_434 p_1814->g_156 p_1814->g_969 p_1814->g_224 p_1814->g_1027 p_1814->g_511 p_1814->g_44 p_1814->g_468 p_1814->g_771 p_1814->g_1068 p_1814->g_121 p_1814->g_1093 p_1814->g_1097 p_1814->g_1111 p_1814->g_1154 p_1814->g_1161 p_1814->g_1162 p_1814->g_1163 p_1814->g_512 p_1814->g_1112 p_1814->g_1206 p_1814->g_1213 p_1814->g_19 p_1814->g_1224 p_1814->g_116 p_1814->g_259 p_1814->g_1230 p_1814->g_comm_values p_1814->g_105 p_1814->g_148
 * writes: p_1814->g_481 p_1814->g_542 p_1814->g_555 p_1814->g_511 p_1814->g_79 p_1814->g_19 p_1814->g_156 p_1814->g_96 p_1814->g_43 p_1814->g_510 p_1814->g_106 p_1814->g_89 p_1814->g_554 p_1814->g_140 p_1814->g_224 p_1814->g_1068 p_1814->g_982 p_1814->g_445 p_1814->g_44 p_1814->g_556 p_1814->g_116 p_1814->g_151 p_1814->g_1259
 */
int32_t * func_28(int32_t * p_29, struct S0 * p_1814)
{ /* block id: 352 */
    int16_t **l_786 = &p_1814->g_410;
    int16_t ***l_785 = &l_786;
    int16_t **l_788 = &p_1814->g_410;
    int16_t ***l_787 = &l_788;
    int32_t l_789 = 0x17E75183L;
    int32_t l_793 = 0x0F478355L;
    int32_t l_794 = 0L;
    int32_t l_795 = (-1L);
    int32_t l_796 = 7L;
    int32_t l_797 = 0x5EEE2894L;
    int32_t l_798 = 0x7B0A116CL;
    int32_t l_799 = 1L;
    int32_t l_800[6][1] = {{0L},{0L},{0L},{0L},{0L},{0L}};
    uint64_t *l_823 = (void*)0;
    uint64_t ***l_846 = (void*)0;
    VECTOR(uint8_t, 8) l_882 = (VECTOR(uint8_t, 8))(0x95L, (VECTOR(uint8_t, 4))(0x95L, (VECTOR(uint8_t, 2))(0x95L, 0xE6L), 0xE6L), 0xE6L, 0x95L, 0xE6L);
    VECTOR(uint64_t, 2) l_912 = (VECTOR(uint64_t, 2))(6UL, 0x4EBD04397CF50D78L);
    int32_t **l_993 = &p_1814->g_156;
    uint8_t *l_999 = &p_1814->g_481;
    uint32_t l_1065[5] = {0x23E549E5L,0x23E549E5L,0x23E549E5L,0x23E549E5L,0x23E549E5L};
    VECTOR(uint16_t, 2) l_1090 = (VECTOR(uint16_t, 2))(0x8433L, 0xF9B3L);
    VECTOR(uint16_t, 4) l_1091 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL);
    uint16_t *l_1098[9] = {&p_1814->g_151[0],&p_1814->g_151[0],&p_1814->g_151[0],&p_1814->g_151[0],&p_1814->g_151[0],&p_1814->g_151[0],&p_1814->g_151[0],&p_1814->g_151[0],&p_1814->g_151[0]};
    VECTOR(uint8_t, 2) l_1108 = (VECTOR(uint8_t, 2))(1UL, 0x2FL);
    uint16_t l_1147[2];
    int32_t l_1153 = (-1L);
    uint32_t *l_1155 = &l_1065[3];
    VECTOR(uint8_t, 16) l_1160 = (VECTOR(uint8_t, 16))(0x31L, (VECTOR(uint8_t, 4))(0x31L, (VECTOR(uint8_t, 2))(0x31L, 0UL), 0UL), 0UL, 0x31L, 0UL, (VECTOR(uint8_t, 2))(0x31L, 0UL), (VECTOR(uint8_t, 2))(0x31L, 0UL), 0x31L, 0UL, 0x31L, 0UL);
    uint16_t **l_1170 = &l_1098[6];
    uint16_t *l_1172 = &p_1814->g_151[8];
    uint16_t **l_1171 = &l_1172;
    uint16_t *l_1173 = (void*)0;
    uint16_t **l_1174 = &l_1173;
    int64_t *l_1179 = (void*)0;
    int64_t *l_1180 = (void*)0;
    int64_t *l_1181 = (void*)0;
    int64_t *l_1182 = (void*)0;
    int64_t *l_1183[7][6][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int8_t l_1184 = 0L;
    VECTOR(int8_t, 4) l_1209 = (VECTOR(int8_t, 4))(0x26L, (VECTOR(int8_t, 2))(0x26L, 4L), 4L);
    VECTOR(int8_t, 8) l_1211 = (VECTOR(int8_t, 8))(0x18L, (VECTOR(int8_t, 4))(0x18L, (VECTOR(int8_t, 2))(0x18L, 0x51L), 0x51L), 0x51L, 0x18L, 0x51L);
    uint8_t l_1214 = 0x6FL;
    int32_t l_1231 = 0L;
    int8_t *l_1257[7][2][1] = {{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}}};
    int8_t **l_1256 = &l_1257[4][0][0];
    VECTOR(uint16_t, 16) l_1261 = (VECTOR(uint16_t, 16))(0x2CF1L, (VECTOR(uint16_t, 4))(0x2CF1L, (VECTOR(uint16_t, 2))(0x2CF1L, 0xCE7DL), 0xCE7DL), 0xCE7DL, 0x2CF1L, 0xCE7DL, (VECTOR(uint16_t, 2))(0x2CF1L, 0xCE7DL), (VECTOR(uint16_t, 2))(0x2CF1L, 0xCE7DL), 0x2CF1L, 0xCE7DL, 0x2CF1L, 0xCE7DL);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1147[i] = 7UL;
    if ((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(((*p_1814->g_410) ^ p_1814->g_151[3]))) < (((VECTOR(uint32_t, 2))(0UL, 6UL)).hi <= 0x1A025811L)), (*p_1814->g_252))), (((-1L) > (((*l_785) = (void*)0) == ((*l_787) = &p_1814->g_410))) > l_789))))
    { /* block id: 355 */
        int32_t *l_790 = &p_1814->g_555;
        int32_t *l_791 = &p_1814->g_79[1];
        int32_t *l_792[3][5] = {{(void*)0,(void*)0,(void*)0,&p_1814->g_556,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1814->g_556,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1814->g_556,(void*)0}};
        uint32_t l_801 = 0x1472F43FL;
        uint8_t *l_806 = (void*)0;
        uint8_t *l_807 = &p_1814->g_481;
        int32_t l_835 = (-5L);
        int32_t *l_956 = (void*)0;
        VECTOR(int32_t, 8) l_972 = (VECTOR(int32_t, 8))(0x31CE9787L, (VECTOR(int32_t, 4))(0x31CE9787L, (VECTOR(int32_t, 2))(0x31CE9787L, 0x48763F4EL), 0x48763F4EL), 0x48763F4EL, 0x31CE9787L, 0x48763F4EL);
        uint64_t *l_1003 = &p_1814->g_598;
        uint64_t l_1036 = 0xF4DF2A4742A43B3AL;
        int16_t **l_1075 = &p_1814->g_410;
        int i, j;
        ++l_801;
        if (((safe_mul_func_uint16_t_u_u(((((*l_807) ^= 0x18L) , 65533UL) == l_793), l_797)) != p_1814->g_759.s7))
        { /* block id: 358 */
            uint64_t l_810 = 0x1298BBD5E0EDD398L;
            int32_t l_855 = (-1L);
            int32_t l_858[6];
            uint8_t l_861 = 0UL;
            int i;
            for (i = 0; i < 6; i++)
                l_858[i] = (-1L);
            for (p_1814->g_542 = 0; (p_1814->g_542 != 7); p_1814->g_542 = safe_add_func_uint16_t_u_u(p_1814->g_542, 1))
            { /* block id: 361 */
                int32_t l_824 = 1L;
                int8_t *l_839 = (void*)0;
                int8_t **l_838 = &l_839;
                uint16_t *l_840 = (void*)0;
                uint16_t *l_841 = &p_1814->g_511;
                uint64_t **l_848[9][10] = {{&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,(void*)0},{&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,(void*)0},{&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,(void*)0},{&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,(void*)0},{&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,(void*)0},{&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,(void*)0},{&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,(void*)0},{&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,(void*)0},{&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,&p_1814->g_486,(void*)0,&p_1814->g_486,(void*)0}};
                uint64_t ***l_847 = &l_848[2][4];
                int32_t **l_864 = (void*)0;
                VECTOR(uint8_t, 2) l_881 = (VECTOR(uint8_t, 2))(249UL, 0xEEL);
                VECTOR(uint16_t, 8) l_900 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL);
                int32_t l_927 = 0L;
                int i, j;
                (*l_790) = ((l_810 > (safe_mod_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s(0xC6E9L, 7)) <= (safe_div_func_int64_t_s_s((((safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((*p_1814->g_410) , ((FAKE_DIVERGE(p_1814->local_2_offset, get_local_id(2), 10) , l_823) != l_823)), (*l_790))), l_824)) || 0x3AL) , (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((safe_lshift_func_int16_t_s_s((((!(0x43EA8C262CFABB4BL >= l_824)) , &p_1814->g_542) != &p_1814->g_542), (*p_1814->g_410))) , l_795), l_800[4][0], 0x6780AAED73832C25L, l_824, GROUP_DIVERGE(1, 1), 0x9C247A009AF2F27CL, 18446744073709551615UL, 0xBCAD1900910102FFL)).s1310320630434243)).lo)).s52)), 0x4DD598916061F3ECL, 0x0F9959C7ACF6F3DEL)).z, l_824)), 3)), 6))), 0x0EA02B887256D8B8L))) > 18446744073709551615UL) , 0x2BCAL), 1)) || l_810) , l_810), p_1814->g_445.x))) >= l_824);
                if ((((safe_mod_func_uint8_t_u_u(l_835, (*p_1814->g_252))) , 0x19L) && ((safe_mod_func_uint64_t_u_u((l_793 = (((*p_1814->g_410) ^ (((*l_838) = (void*)0) == l_806)) > ((*l_841) = 0xC0FEL))), (safe_rshift_func_uint8_t_u_s(l_824, (l_810 < 0x79L))))) , l_793)))
                { /* block id: 366 */
                    uint64_t ****l_849 = (void*)0;
                    uint64_t ****l_850 = (void*)0;
                    uint64_t ****l_851 = &l_847;
                    int32_t l_852 = 0x44359366L;
                    (*l_790) = (safe_mod_func_int16_t_s_s(((l_846 == ((*l_851) = l_847)) <= p_1814->g_79[1]), (*l_791)));
                    l_852 ^= ((*l_791) = ((VECTOR(int32_t, 2))(0L, 0L)).hi);
                }
                else
                { /* block id: 371 */
                    int32_t l_856 = (-7L);
                    VECTOR(int32_t, 2) l_859 = (VECTOR(int32_t, 2))((-7L), 1L);
                    int i;
                    for (p_1814->g_19 = (-19); (p_1814->g_19 < 8); p_1814->g_19 = safe_add_func_int8_t_s_s(p_1814->g_19, 1))
                    { /* block id: 374 */
                        int32_t l_857 = 0x2E038396L;
                        int32_t l_860 = 0x5E0FD8DCL;
                        l_861++;
                    }
                }
                (*p_1814->g_865) = p_29;
                for (p_1814->g_96 = 12; (p_1814->g_96 != 19); p_1814->g_96 = safe_add_func_uint8_t_u_u(p_1814->g_96, 4))
                { /* block id: 381 */
                    int64_t *l_887 = (void*)0;
                    int64_t *l_888 = (void*)0;
                    int64_t *l_889 = (void*)0;
                    int64_t *l_890 = (void*)0;
                    int64_t *l_891 = (void*)0;
                    int32_t l_905 = 4L;
                    VECTOR(uint32_t, 4) l_906 = (VECTOR(uint32_t, 4))(0x92513DB1L, (VECTOR(uint32_t, 2))(0x92513DB1L, 0x969179E3L), 0x969179E3L);
                    uint32_t *l_907 = &l_801;
                    int16_t ***l_914 = &l_788;
                    int16_t ****l_915 = (void*)0;
                    uint8_t *l_919 = (void*)0;
                    uint8_t *l_920 = &l_861;
                    int64_t *l_921 = (void*)0;
                    int64_t *l_922 = (void*)0;
                    int64_t *l_923 = (void*)0;
                    int64_t *l_924 = (void*)0;
                    int64_t *l_925 = (void*)0;
                    int64_t *l_926[10][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t *l_928 = &l_795;
                    int i, j;
                    l_927 |= (safe_mul_func_uint8_t_u_u(((0x0FED8FAD5C9C8B3EL != (p_1814->g_43.s1 = (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint8_t_u_u(((*l_807)++), ((safe_div_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), (p_1814->g_271.s4 , (-6L)))) , (safe_sub_func_int64_t_s_s(((((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(l_881.xxyx)).odd, ((VECTOR(uint8_t, 16))(l_882.s2304554225356666)).sf3, ((VECTOR(uint8_t, 8))((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((((!(((l_794 <= (((l_858[0] = (255UL || (l_795 ^= ((VECTOR(uint8_t, 4))(255UL, 0xA3L, 0x75L, 255UL)).z))) <= ((*l_790) ^= (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(l_900.s1057630021461464)).sf, 3)), ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((l_905 = l_810), (((((((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(l_906.xz)), ((VECTOR(uint32_t, 16))((l_855 = ((*l_907)++)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))((((((*l_920) |= (safe_lshift_func_int8_t_s_s((0x91891C4A6619C2DFL > ((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 8))(l_912.yxxxxyxx)), ((VECTOR(uint64_t, 16))((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(0x09EC7628L, 4L)).yxyxxyyy, (int32_t)((p_1814->g_916 = l_914) != (p_1814->g_917 = p_1814->g_917))))), l_906.x, l_810, ((VECTOR(int32_t, 4))(0x5DFA6757L)), (-1L), 0x192E0FCEL)).s2)), l_906.w, ((VECTOR(uint64_t, 2))(0UL)), 0x82B1A3ACFF699A78L, ((VECTOR(uint64_t, 4))(1UL)), 1UL, 4UL, FAKE_DIVERGE(p_1814->local_1_offset, get_local_id(1), 10), 0x5BA71346410B0069L, 0x3681DB9D0832685AL, 18446744073709551615UL, 0x9434E8270EEFE9C6L)).even))), (uint64_t)18446744073709551615UL, (uint64_t)FAKE_DIVERGE(p_1814->group_2_offset, get_group_id(2), 10)))).s5), 3))) >= (-1L)) & l_906.y) == 8L), ((VECTOR(uint32_t, 2))(1UL)), 1UL)).odd)), p_1814->g_46.s0, ((VECTOR(uint32_t, 2))(4294967293UL)), ((VECTOR(uint32_t, 2))(1UL)), p_1814->g_96, 0x6C1EBE7DL, 0x1345A5D9L, ((VECTOR(uint32_t, 4))(0x835BFDFBL)), 0x3DF5305FL)).s87))).odd <= l_906.y) , l_912.x) == (-1L)) == GROUP_DIVERGE(2, 1)) | GROUP_DIVERGE(0, 1)))), l_810)) && l_906.z))), l_824)), 0xA9DBL)))) >= l_789)) & (*p_1814->g_252)) < (*l_791))) , l_793) ^ p_1814->g_19), 65526UL)), FAKE_DIVERGE(p_1814->global_2_offset, get_global_id(2), 10))), ((VECTOR(uint8_t, 4))(0xD4L)), ((VECTOR(uint8_t, 2))(8UL)), 0UL)).s67))).lo != l_810) <= l_906.z), l_906.w))))) | p_1814->g_151[0]))), 1)))) >= (-7L)), 0L));
                    l_928 = p_29;
                }
            }
        }
        else
        { /* block id: 397 */
            uint16_t l_940 = 65533UL;
            int32_t l_958 = 0x3C116A8DL;
            int32_t l_960 = 0L;
            int32_t l_961 = (-2L);
            int32_t l_962 = 0x1B318AEDL;
            int32_t l_1010 = (-1L);
            VECTOR(uint64_t, 16) l_1018 = (VECTOR(uint64_t, 16))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 8UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(8UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(8UL, 18446744073709551615UL), 8UL, 18446744073709551615UL, 8UL, 18446744073709551615UL);
            VECTOR(int64_t, 8) l_1028 = (VECTOR(int64_t, 8))(0x075FE1938DFA3961L, (VECTOR(int64_t, 4))(0x075FE1938DFA3961L, (VECTOR(int64_t, 2))(0x075FE1938DFA3961L, 0x441136F22A9F2289L), 0x441136F22A9F2289L), 0x441136F22A9F2289L, 0x075FE1938DFA3961L, 0x441136F22A9F2289L);
            int32_t l_1031[6];
            int32_t l_1032 = 0x1F409FDBL;
            uint64_t **l_1037 = &p_1814->g_486;
            VECTOR(int32_t, 2) l_1050 = (VECTOR(int32_t, 2))(0x75A56AF1L, 0L);
            uint16_t l_1083[3][2];
            VECTOR(uint16_t, 16) l_1092 = (VECTOR(uint16_t, 16))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0x78EBL), 0x78EBL), 0x78EBL, 65532UL, 0x78EBL, (VECTOR(uint16_t, 2))(65532UL, 0x78EBL), (VECTOR(uint16_t, 2))(65532UL, 0x78EBL), 65532UL, 0x78EBL, 65532UL, 0x78EBL);
            int8_t l_1142 = 0x78L;
            int64_t l_1143 = 0x238AA20B43EE2952L;
            int32_t l_1144 = 5L;
            int8_t l_1146 = (-10L);
            int i, j;
            for (i = 0; i < 6; i++)
                l_1031[i] = 1L;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1083[i][j] = 0xC70DL;
            }
            for (l_795 = 0; (l_795 < 17); ++l_795)
            { /* block id: 400 */
                int32_t l_949 = (-7L);
                int32_t l_957 = 0x6EEF1457L;
                int32_t l_959[9][1][2] = {{{(-8L),(-1L)}},{{(-8L),(-1L)}},{{(-8L),(-1L)}},{{(-8L),(-1L)}},{{(-8L),(-1L)}},{{(-8L),(-1L)}},{{(-8L),(-1L)}},{{(-8L),(-1L)}},{{(-8L),(-1L)}}};
                uint64_t l_963 = 0x3C494DD2CBDE791CL;
                int i, j, k;
                for (p_1814->g_510 = 0; (p_1814->g_510 <= 19); ++p_1814->g_510)
                { /* block id: 403 */
                    uint16_t l_933 = 0UL;
                    volatile int32_t **l_953 = &p_1814->g_106;
                    --l_933;
                    (*l_953) = (((((safe_lshift_func_uint16_t_u_s(((0x52E21F0A1E8E1FC1L && ((VECTOR(int64_t, 16))(0L, 0x74C279264C8A8BF6L, 0x7C1046F9AF6D0E0AL, 1L, ((safe_add_func_uint8_t_u_u(((l_940 >= (((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xA1L, 0x89L)).xxyxxyyyxxxxxyyy)).sd76e)).x, (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), l_949)), ((**p_1814->g_688) <= (!1L)))), ((void*)0 == p_29))))) > (safe_rshift_func_uint16_t_u_u((0x63585979L | (p_1814->g_556 | FAKE_DIVERGE(p_1814->group_1_offset, get_group_id(1), 10))), 9))) , 0x5E9A72A6L)) , l_795), p_1814->g_6.x)) == l_795), 1L, 3L, l_795, 0x5440A9595A948E39L, 0x21149624397330C6L, p_1814->g_14.s3, 0x1F07F6E4A233B149L, l_933, ((VECTOR(int64_t, 2))(0x5C443203981EBC6FL)), (-2L))).s7) | l_940), l_940)) , l_933) == 0x22A9571257BD89ACL) ^ 0x1E4CL) , (*p_1814->g_688));
                    for (l_793 = 0; (l_793 >= (-18)); --l_793)
                    { /* block id: 408 */
                        return l_956;
                    }
                }
                --l_963;
                (*l_790) = l_958;
            }
            for (l_835 = (-4); (l_835 < (-15)); l_835 = safe_sub_func_uint32_t_u_u(l_835, 1))
            { /* block id: 417 */
                int32_t **l_981[8];
                int32_t l_984[7][1][4] = {{{0x332554E8L,(-5L),0x013CD30AL,(-5L)}},{{0x332554E8L,(-5L),0x013CD30AL,(-5L)}},{{0x332554E8L,(-5L),0x013CD30AL,(-5L)}},{{0x332554E8L,(-5L),0x013CD30AL,(-5L)}},{{0x332554E8L,(-5L),0x013CD30AL,(-5L)}},{{0x332554E8L,(-5L),0x013CD30AL,(-5L)}},{{0x332554E8L,(-5L),0x013CD30AL,(-5L)}}};
                int32_t **l_992 = &p_1814->g_156;
                VECTOR(uint8_t, 16) l_997 = (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x16L), 0x16L), 0x16L, 2UL, 0x16L, (VECTOR(uint8_t, 2))(2UL, 0x16L), (VECTOR(uint8_t, 2))(2UL, 0x16L), 2UL, 0x16L, 2UL, 0x16L);
                uint16_t *l_1035 = &p_1814->g_511;
                int8_t *l_1038 = (void*)0;
                int64_t l_1045[7][8];
                VECTOR(int32_t, 4) l_1051 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x58490D93L), 0x58490D93L);
                uint8_t **l_1080 = &l_807;
                uint8_t **l_1082 = &l_807;
                uint64_t ***l_1121 = (void*)0;
                int32_t l_1134[4][4] = {{1L,(-10L),1L,1L},{1L,(-10L),1L,1L},{1L,(-10L),1L,1L},{1L,(-10L),1L,1L}};
                int32_t l_1137 = 0x5AB76F06L;
                int64_t l_1145[8] = {0x5A2B444670639CC4L,0x27C1C8A0B3566234L,0x5A2B444670639CC4L,0x5A2B444670639CC4L,0x27C1C8A0B3566234L,0x5A2B444670639CC4L,0x5A2B444670639CC4L,0x27C1C8A0B3566234L};
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_981[i] = (void*)0;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_1045[i][j] = 0L;
                }
                (*p_1814->g_969) = (*p_1814->g_434);
                for (p_1814->g_96 = 5; (p_1814->g_96 <= (-10)); p_1814->g_96 = safe_sub_func_uint32_t_u_u(p_1814->g_96, 4))
                { /* block id: 421 */
                    uint16_t l_995 = 0x23AEL;
                    int32_t l_996[4][3][7] = {{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}}};
                    uint64_t *l_998 = (void*)0;
                    int i, j, k;
                    (*p_1814->g_106) = ((VECTOR(int32_t, 16))(l_972.s6011736213163034)).s3;
                    for (p_1814->g_554 = (-5); (p_1814->g_554 > 24); p_1814->g_554++)
                    { /* block id: 425 */
                        uint16_t *l_983[10] = {&l_940,(void*)0,&l_940,&l_940,(void*)0,&l_940,&l_940,(void*)0,&l_940,&l_940};
                        int32_t l_994 = 0x0F22C328L;
                        uint8_t **l_1000 = &p_1814->g_250;
                        uint8_t **l_1001 = (void*)0;
                        uint8_t **l_1002 = &l_806;
                        uint64_t **l_1012 = &p_1814->g_486;
                        uint64_t ***l_1011[9][6] = {{&l_1012,&l_1012,&l_1012,&l_1012,&l_1012,&l_1012},{&l_1012,&l_1012,&l_1012,&l_1012,&l_1012,&l_1012},{&l_1012,&l_1012,&l_1012,&l_1012,&l_1012,&l_1012},{&l_1012,&l_1012,&l_1012,&l_1012,&l_1012,&l_1012},{&l_1012,&l_1012,&l_1012,&l_1012,&l_1012,&l_1012},{&l_1012,&l_1012,&l_1012,&l_1012,&l_1012,&l_1012},{&l_1012,&l_1012,&l_1012,&l_1012,&l_1012,&l_1012},{&l_1012,&l_1012,&l_1012,&l_1012,&l_1012,&l_1012},{&l_1012,&l_1012,&l_1012,&l_1012,&l_1012,&l_1012}};
                        int i, j;
                        (*l_791) = (safe_div_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((l_984[4][0][3] = ((l_981[6] == ((!4294967295UL) , &p_1814->g_404)) == (((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 2))(0x555B57E02BA6E723L, 0x2D013815999F99C9L)).yxyyxxxyyxxyyxxy, ((VECTOR(int64_t, 8))(p_1814->g_982.yyxyxxxx)).s2404565420040042))).sc , (-1L)))) | ((((l_995 = ((*l_790) |= ((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(1L, (((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(p_1814->g_991.sd5a71095ce42a745)).sa, (*l_791))) | FAKE_DIVERGE(p_1814->group_2_offset, get_group_id(2), 10)) ^ ((0x3C0E185B3D8BABBBL & ((p_1814->g_486 == ((l_992 == l_993) , p_1814->g_486)) != 0x0E1FL)) , l_994)), ((VECTOR(int8_t, 4))((-9L))), 0x19L, 0x08L)))))), ((VECTOR(int8_t, 8))(0L))))).s5454446472155701)).s99, ((VECTOR(uint8_t, 2))(255UL))))), ((VECTOR(uint8_t, 2))(9UL)), ((VECTOR(uint8_t, 2))(0x4CL))))), 0x5CL, 0x87L)).xywywwxy, ((VECTOR(uint8_t, 8))(249UL)), ((VECTOR(uint8_t, 8))(255UL))))))).s14)).even, 0x61L)) & 0x15L), 6)) <= p_1814->g_510))) || l_994) , (*l_791)) < 0UL)), l_996[3][0][2])) <= l_962), 0x08L));
                        (*l_791) = l_997.s9;
                        (*l_790) = ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))((((p_1814->g_1013 = ((((l_998 == ((((*l_1000) = l_999) != ((*l_1002) = &p_1814->g_481)) , (p_1814->g_771.y , l_1003))) & (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65526UL, 0xC841L)), 0xDDAAL, ((-1L) && (safe_mul_func_int8_t_s_s((((4UL >= p_1814->g_96) , ((safe_sub_func_int8_t_s_s(((1UL & GROUP_DIVERGE(1, 1)) & l_1010), l_958)) , p_1814->g_224.s6)) | 7UL), 0x75L))), 0x16FBL, 1UL, 1UL, 8UL)).s73)).yyxy, ((VECTOR(uint16_t, 4))(0x157CL))))), ((VECTOR(uint16_t, 4))(65535UL)))).s0, 13))) && l_1010) , (void*)0)) == &l_998) >= l_994), l_962, 0x664CE4CCL, l_958, ((VECTOR(int32_t, 4))(0x5F8389BAL)), 0x34B843A6L, (-5L), ((VECTOR(int32_t, 4))(0x1E5BBB35L)), (-5L), (-4L))).odd, ((VECTOR(int32_t, 8))(0x05CED238L))))).odd, ((VECTOR(int32_t, 4))(0x1914D37AL))))).y;
                        (*l_993) = (void*)0;
                    }
                    (*l_790) &= (((safe_rshift_func_uint16_t_u_s((l_995 != ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(l_1018.s5475becb3eaea26e)).s8, (p_1814->g_224.s1 & ((safe_lshift_func_uint8_t_u_u(246UL, 4)) ^ (safe_div_func_uint8_t_u_u(((l_996[1][2][6] && ((safe_div_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(p_1814->g_1027.ww)).xxyxxyyyxxxyyyxy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))((&p_1814->g_486 != (void*)0), ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_1028.s11474734)).s41)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(7L, 0x025BEA7FDF9D48D9L)), ((safe_add_func_uint8_t_u_u(l_1031[3], (&l_992 != (void*)0))) >= (*l_791)), 0x5AD3CFA75D031315L, ((VECTOR(int64_t, 2))(7L)), 0x5ED6002657129567L, 0L)).even)), ((VECTOR(int64_t, 2))((-2L))), 0x75DE84314643434DL, 0L)).s56))), 0x580138A35C54CB22L)).xzzxzxxz)).s5000013656374434, ((VECTOR(int64_t, 16))(7L))))).s5 , 1UL) && l_1031[3]), l_958)) ^ 1L), FAKE_DIVERGE(p_1814->local_2_offset, get_local_id(2), 10))) & 1UL)) , l_1032), 5L)))))) && 5L)), (*p_1814->g_410))) , (void*)0) == &p_29);
                }
                if ((safe_rshift_func_uint16_t_u_u((&l_806 == (((((*l_1035) ^= 0xFA29L) && (l_1036 = ((***l_787) = (*p_1814->g_410)))) & 9UL) , &p_1814->g_250)), ((VECTOR(uint16_t, 4))(65535UL, (((0xC30FL < p_1814->g_44.x) , (p_1814->g_224.s6 = (((void*)0 == l_1037) || l_1028.s2))) > 0L), 65535UL, 65529UL)).z)))
                { /* block id: 443 */
                    uint32_t l_1046[4][4] = {{7UL,0x3D3FF627L,7UL,7UL},{7UL,0x3D3FF627L,7UL,7UL},{7UL,0x3D3FF627L,7UL,7UL},{7UL,0x3D3FF627L,7UL,7UL}};
                    uint64_t *l_1063 = (void*)0;
                    int32_t l_1066 = 0x470D9802L;
                    int32_t l_1067[10] = {0x16A33A71L,5L,0x16A33A71L,0x16A33A71L,5L,0x16A33A71L,0x16A33A71L,5L,0x16A33A71L,0x16A33A71L};
                    int8_t l_1069 = 1L;
                    int32_t *l_1084 = (void*)0;
                    uint8_t l_1085 = 0xB3L;
                    uint32_t *l_1094 = &l_801;
                    uint16_t **l_1099 = (void*)0;
                    uint16_t **l_1100 = (void*)0;
                    uint16_t **l_1101 = &l_1035;
                    int i, j;
                    for (p_1814->g_140 = 0; (p_1814->g_140 >= (-14)); p_1814->g_140 = safe_sub_func_int16_t_s_s(p_1814->g_140, 7))
                    { /* block id: 446 */
                        VECTOR(int32_t, 16) l_1049 = (VECTOR(int32_t, 16))(0x18A54FC8L, (VECTOR(int32_t, 4))(0x18A54FC8L, (VECTOR(int32_t, 2))(0x18A54FC8L, 0x2A197E1AL), 0x2A197E1AL), 0x2A197E1AL, 0x18A54FC8L, 0x2A197E1AL, (VECTOR(int32_t, 2))(0x18A54FC8L, 0x2A197E1AL), (VECTOR(int32_t, 2))(0x18A54FC8L, 0x2A197E1AL), 0x18A54FC8L, 0x2A197E1AL, 0x18A54FC8L, 0x2A197E1AL);
                        uint32_t l_1070 = 0xEDC9AC10L;
                        int8_t *l_1076 = &p_1814->g_1068;
                        uint8_t ***l_1081 = &l_1080;
                        int i;
                        (*p_1814->g_106) = (safe_sub_func_int32_t_s_s((((~((((((((VECTOR(uint8_t, 4))(255UL, (safe_lshift_func_uint16_t_u_u(l_1045[3][6], 8)), 0x4AL, 0x33L)).x , l_1046[3][1]) < (*l_790)) >= ((safe_sub_func_uint64_t_u_u((~0xAC45536E615B5139L), ((p_1814->g_468.s6 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(0x2D9A3C6FL, 0x078D2477L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1049.sdbc8)), ((VECTOR(int32_t, 4))(0x64336528L, ((VECTOR(int32_t, 2))(l_1050.xy)), 0x1ADB9A20L)).w, ((VECTOR(int32_t, 2))(8L, 0x4EDFE8FDL)), ((VECTOR(int32_t, 2))(l_1051.zz)), 0x3C3F9143L, 0L, (safe_rshift_func_int16_t_s_s((((*l_791) = (safe_rshift_func_uint8_t_u_u((*l_791), 6))) , (safe_add_func_int8_t_s_s(((safe_div_func_int64_t_s_s((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1814->g_1060.s9091)).xyxwzzzx)).s3 == (safe_div_func_uint64_t_u_u(((((*l_1037) = l_1063) != (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_1814->g_1064.s35475131)))).s4 , &l_1036)) < 1UL), FAKE_DIVERGE(p_1814->global_1_offset, get_global_id(1), 10)))), 18446744073709551612UL)) || l_882.s4), 0x5BL))), l_960)), ((VECTOR(int32_t, 4))((-1L))))), ((VECTOR(int32_t, 16))((-10L)))))), ((VECTOR(int32_t, 16))(0x12B5E3B5L)), ((VECTOR(int32_t, 16))((-1L)))))).sf287)).hi, ((VECTOR(int32_t, 2))((-5L)))))), (*l_791), 1L, ((VECTOR(int32_t, 4))(0x4AA0A6A2L)))), ((VECTOR(int32_t, 2))((-1L))), (*p_1814->g_106), 0x3CE01E4BL, 0x2EC8A539L, 0x318B537CL)).sc5, ((VECTOR(int32_t, 2))(0x53DBA449L)), ((VECTOR(int32_t, 2))((-2L)))))).xxxx)).xwzxzzwy)), ((VECTOR(int32_t, 8))(6L)), ((VECTOR(int32_t, 8))((-4L)))))).s1, l_1049.s3, ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 4))(0x50D9F2EBL)), 0x7FA9DB44L, 0x2B9FA93EL)).se) < p_1814->g_771.y))) >= l_1065[3])) <= l_1046[0][3]) ^ 0xEE1EL) ^ GROUP_DIVERGE(1, 1))) || l_1049.s9) || 0x60AE6027785295DEL), l_1046[3][1]));
                        l_1070++;
                        l_1084 = ((1L == (safe_rshift_func_int8_t_s_u(((*l_1076) ^= ((void*)0 == l_1075)), (safe_mod_func_int8_t_s_s((((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1814->g_1079.wx)).xxyy)).y == (((*l_1081) = l_1080) == (l_1082 = &p_1814->g_250))) <= ((l_958 <= l_1083[0][0]) & (0x00EB9E31L == p_1814->g_121.y))) , 0x37L), p_1814->g_14.s6))))) , p_29);
                    }
                    --l_1085;
                    (*l_790) &= (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(l_1090.yxxxxyyxyxyyxxyy)).sc1c8, ((VECTOR(uint16_t, 8))(0xA931L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 16))(l_1091.ywyxwyzyyzxyyxww)).s39a4))).xyzwyyywxxxxzxyz, ((VECTOR(uint16_t, 4))(l_1092.s8c31)).ywzzxzyxyxwxzxyx))).s6e)), 7UL, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(p_1814->g_1093.s627bfeed)).s4202507357400354)).s90, (uint16_t)((--(*l_1094)) <= ((VECTOR(uint32_t, 8))(p_1814->g_1097.sc9de97fb)).s4), (uint16_t)(((*l_1101) = l_1098[6]) == (void*)0)))), 65535UL, 0xF22AL)).odd))).yxxyzzxzwwzwwwyy)).s4, (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(l_1085, (safe_rshift_func_uint8_t_u_u(l_1092.s6, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 4))(l_1108.xyyy)).yzzwwyxz, (uint8_t)(safe_rshift_func_int16_t_s_s((((void*)0 == p_1814->g_1111) || ((safe_mul_func_int16_t_s_s(((**l_1075) = (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((void*)0 == l_1121), (((safe_rshift_func_uint8_t_u_u((*p_1814->g_252), (*l_791))) , (-1L)) || l_1050.x))) , FAKE_DIVERGE(p_1814->global_1_offset, get_global_id(1), 10)), 4L)), l_1066))), l_960)) != p_1814->g_556)), 6)), (uint8_t)l_1031[5]))).s77)).odd)))), l_997.s8))));
                    if (l_1069)
                        continue;
                }
                else
                { /* block id: 462 */
                    int16_t l_1125 = 0x620FL;
                    int32_t l_1126 = 1L;
                    int64_t l_1127 = 0L;
                    int32_t l_1128 = 0x5D4536FFL;
                    int32_t l_1129 = 0L;
                    int32_t l_1130 = 7L;
                    int32_t l_1131 = 0x5DDD9167L;
                    int32_t l_1132 = 0x4F653106L;
                    int32_t l_1133 = (-1L);
                    int32_t l_1135 = 0x65E93A00L;
                    int32_t l_1136 = 0x638A48FDL;
                    int32_t l_1138[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    uint32_t l_1139 = 0x891604A3L;
                    int i;
                    (*l_993) = (*l_993);
                    l_1139++;
                    l_1135 = (*l_791);
                }
                --l_1147[0];
            }
            if ((atomic_inc(&p_1814->g_atomic_input[84 * get_linear_group_id() + 80]) == 1))
            { /* block id: 470 */
                int32_t *l_1150 = (void*)0;
                int32_t l_1152 = 1L;
                int32_t *l_1151[8][7] = {{&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152},{&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152},{&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152},{&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152},{&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152},{&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152},{&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152},{&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152,&l_1152}};
                int i, j;
                l_1151[2][2] = l_1150;
                unsigned int result = 0;
                result += l_1152;
                atomic_add(&p_1814->g_special_values[84 * get_linear_group_id() + 80], result);
            }
            else
            { /* block id: 472 */
                (1 + 1);
            }
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1814->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 41)), permutations[(safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), 10))][(safe_mod_func_uint32_t_u_u(p_1814->tid, 41))]));
    }
    else
    { /* block id: 479 */
        (*p_1814->g_106) &= l_1153;
    }
    if ((l_795 = (((*l_1155) = ((VECTOR(uint32_t, 4))(p_1814->g_1154.yyyy)).z) & ((p_1814->g_542 = (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((safe_sub_func_uint8_t_u_u(((l_1155 == l_1155) , 0xDBL), ((**l_787) == (l_1160.se , (*l_788))))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(p_1814->g_1161.s17fa)).xxzzwyzy, ((VECTOR(int8_t, 8))(p_1814->g_1162.yyyyxxxy)), ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 8))(p_1814->g_1163.s98e94fbc)).s22, (int8_t)(safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(((((*l_1171) = ((*l_1170) = &l_1147[0])) == ((*l_1174) = l_1173)) || (safe_mod_func_uint16_t_u_u((((*l_1172) ^= ((safe_lshift_func_int8_t_s_u((((p_1814->g_445.y = (p_1814->g_982.y = l_793)) , (-1L)) , l_1153), 0)) > 0x5E1C2D59L)) > l_1108.y), l_794))), 0x2617L)), p_1814->g_512.y)) >= p_1814->g_140), l_882.s2)), (int8_t)l_1184))).yyxxxyyy))).s6375071272344501)).s31)), 5L)).wzzxwwyxzwxwzzzx)).sb, l_882.s5))) , l_800[4][0]))))
    { /* block id: 491 */
        int8_t l_1205[10][8][3] = {{{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L}},{{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L}},{{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L}},{{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L}},{{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L}},{{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L}},{{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L}},{{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L}},{{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L}},{{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L},{(-2L),(-5L),0x22L}}};
        int32_t l_1217 = 0x17F82B90L;
        int32_t *l_1218[1][7][3];
        int32_t *l_1223 = &p_1814->g_19;
        uint32_t *l_1225 = &p_1814->g_116;
        int32_t *l_1229 = &p_1814->g_255;
        int32_t **l_1228 = &l_1229;
        int8_t l_1248 = 0x52L;
        uint16_t l_1251 = 0xA168L;
        int16_t l_1258 = 0x55EEL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 3; k++)
                    l_1218[i][j][k] = &p_1814->g_19;
            }
        }
        for (l_796 = (-26); (l_796 >= (-11)); l_796 = safe_add_func_int32_t_s_s(l_796, 2))
        { /* block id: 494 */
            VECTOR(uint16_t, 4) l_1196 = (VECTOR(uint16_t, 4))(0x0354L, (VECTOR(uint16_t, 2))(0x0354L, 65531UL), 65531UL);
            uint64_t **l_1199 = &p_1814->g_486;
            uint8_t l_1212 = 6UL;
            int i;
            for (l_1153 = (-1); (l_1153 == (-12)); l_1153 = safe_sub_func_int64_t_s_s(l_1153, 6))
            { /* block id: 497 */
                uint64_t **l_1197 = &p_1814->g_486;
                int32_t l_1216 = 1L;
                if (((VECTOR(int32_t, 4))(((void*)0 != (*p_1814->g_1111)), 0L, 0x470779F1L, 1L)).z)
                { /* block id: 498 */
                    uint16_t l_1189[5][2] = {{0x9997L,0x6693L},{0x9997L,0x6693L},{0x9997L,0x6693L},{0x9997L,0x6693L},{0x9997L,0x6693L}};
                    int i, j;
                    l_1189[4][1]++;
                }
                else
                { /* block id: 500 */
                    uint64_t ***l_1198 = &l_1197;
                    int32_t l_1204 = 0x160C1270L;
                    VECTOR(int8_t, 8) l_1210 = (VECTOR(int8_t, 8))(0x22L, (VECTOR(int8_t, 4))(0x22L, (VECTOR(int8_t, 2))(0x22L, (-1L)), (-1L)), (-1L), 0x22L, (-1L));
                    int8_t *l_1215[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1215[i] = &p_1814->g_1068;
                    (*p_1814->g_106) = (safe_rshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u((l_1196.x & (((*l_1198) = l_1197) != l_1199)), (p_1814->g_44.z = (safe_rshift_func_uint8_t_u_s(250UL, 0))))), 3));
                    l_1217 ^= (p_1814->g_556 ^= (safe_sub_func_int64_t_s_s((p_1814->g_511 , (l_1204 , (l_1205[0][4][0] & (((((VECTOR(uint8_t, 2))(0xD4L, 255UL)).odd > (~((((***l_787) = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1814->g_1206.sd9)), 0L, (-1L))).wzwwwwxy)).s37, ((VECTOR(int16_t, 4))(0x0B18L, ((VECTOR(int16_t, 2))(0L, 3L)), 0x3235L)).hi))))).lo) || (((l_1204 = ((((VECTOR(int8_t, 16))(0x43L, 1L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))((-7L), 0x59L)).yxxxyyxxyyyyyxyx, ((VECTOR(int8_t, 8))(l_1209.wwyyxyzx)).s3147045131257360))).even)).s33)).yxyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_1210.s4533)).odd)).yyxy))), ((VECTOR(int8_t, 8))(l_1211.s40051446)).even))), l_1212, 0x7CL, (-2L), 0x6AL)), (((VECTOR(uint64_t, 2))(p_1814->g_1213.yy)).even , l_1214), ((VECTOR(int8_t, 2))(0L, 0L)), l_1196.y, 0x16L, 0L)).sf >= ((1UL == ((p_1814->g_79[1] <= 0xA5F333643459D239L) ^ 7L)) >= p_1814->g_19)) & p_1814->g_224.s0)) | 0UL) >= l_1216)) , 0xEAL))) & 3L) <= (-6L))))), l_1205[3][4][0])));
                    return l_1218[0][6][1];
                }
            }
        }
        l_1231 ^= (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((p_29 == ((*l_1228) = func_68(l_1223, p_29, (((VECTOR(uint8_t, 4))(p_1814->g_1224.s14f5)).z , func_62(l_1205[0][4][0], (++(*l_1225)), func_30(l_1155, p_1814), p_1814)), l_1205[4][6][0], p_1814->g_771.x, p_1814))), p_1814->g_1230)) < 9L), l_1205[0][4][0]));
        (*l_993) = (((safe_add_func_int32_t_s_s(l_1205[2][5][0], (safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((l_1205[2][3][1] <= (((p_1814->g_comm_values[p_1814->tid] >= (0x51L || (safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(p_1814->g_1161.s3, ((VECTOR(int32_t, 4))((**p_1814->g_105), ((VECTOR(int32_t, 4))(0x726C1126L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))((0x4DEDL > (((VECTOR(int8_t, 4))((safe_lshift_func_int16_t_s_s(((void*)0 != &p_1814->g_252), l_1217)), ((VECTOR(int8_t, 2))(0x0DL)), 0x2FL)).y >= l_1205[0][4][0])), ((VECTOR(int32_t, 4))(1L)), 0x1A051839L, (-1L), 0x30200318L)).s32))), 0x577B7293L)).x, 0L, 0L)).z)), 0x201E2270CFC634ECL)))) >= l_1205[6][5][1]) >= 0x34502FF3L)), 0x0DL)), FAKE_DIVERGE(p_1814->group_0_offset, get_group_id(0), 10))))) , (*p_1814->g_1112)) , (void*)0);
        p_1814->g_1259 = (((safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s((((((l_1248 | l_1211.s4) != (safe_sub_func_uint8_t_u_u(((*l_999) = (((l_1251 == (safe_rshift_func_int8_t_s_u(((((l_1217 = (safe_mod_func_uint8_t_u_u(0x1FL, p_1814->g_151[0]))) , (*l_785)) != (*l_785)) < (((l_1205[0][4][0] ^ 1UL) > l_1205[1][6][0]) <= l_1251)), l_1205[4][6][1]))) , l_1256) == (void*)0)), l_796))) & GROUP_DIVERGE(2, 1)) != l_1184) > l_1205[0][4][0]), 0x93B17FCDL)), l_1205[1][6][0])) != l_1258) && l_1248);
    }
    else
    { /* block id: 519 */
        VECTOR(uint16_t, 8) l_1260 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL);
        int32_t *l_1262 = &l_794;
        int i;
        (*l_1262) |= ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(0x7E41L, (-7L))), ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(65532UL, 0xAF19L)).xxxyyyxxxxxxyxxx, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 2))(0UL, 65531UL)).xyxyyxyxyyyxxxxy, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 16))(l_1260.s0657343613603214)).s843d, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_1261.s12e4)).xzxwxzxx)).even))).xxyzzwyxxwyxxxwy))).s114f, (uint16_t)(!((((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))((0x64L == (l_1260.s0 && 3L)), (p_1814->g_148 > ((((*l_1155) ^= (((((void*)0 != &l_1257[4][0][0]) && (l_1260.s6 && l_1260.s2)) || (l_1260.s7 & (*p_1814->g_252))) == l_1260.s7)) || l_1260.s3) >= l_1147[0])), 65531UL, 0x9F45L)).xzxxxwxyzzwxzzzw)).s1839)).xzwzzzwz, ((VECTOR(uint16_t, 8))(0x4646L))))).s2 | l_1260.s7) > 0x1BL))))).ywyxwxwyyyzyywxy))).sf8)))))).xxxy))))).y;
    }
    return p_29;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_30(int32_t * p_31, struct S0 * p_1814)
{ /* block id: 350 */
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_6 p_1814->g_19 p_1814->g_79 p_1814->g_14 p_1814->g_105 p_1814->g_106 p_1814->g_89 p_1814->g_46 p_1814->g_93 p_1814->g_151 p_1814->g_43 p_1814->g_39 p_1814->g_155 p_1814->g_140 p_1814->g_116 p_1814->g_200 p_1814->g_148 p_1814->g_224 p_1814->g_228 p_1814->g_250 p_1814->g_252 p_1814->g_99 p_1814->g_253 p_1814->g_259 p_1814->g_271 p_1814->g_comm_values p_1814->g_255 p_1814->g_42 p_1814->g_403 p_1814->g_434 p_1814->g_441 p_1814->g_444 p_1814->g_445 p_1814->g_468 p_1814->g_471 p_1814->g_410 p_1814->l_comm_values p_1814->g_121 p_1814->g_486 p_1814->g_512 p_1814->g_404 p_1814->g_510 p_1814->g_96 p_1814->g_547 p_1814->g_289 p_1814->g_557 p_1814->g_581 p_1814->g_598 p_1814->g_639 p_1814->g_429 p_1814->g_665 p_1814->g_548 p_1814->g_688 p_1814->g_91 p_1814->g_481 p_1814->g_759 p_1814->g_772 p_1814->g_554
 * writes: p_1814->g_79 p_1814->g_19 p_1814->g_96 p_1814->g_99 p_1814->g_106 p_1814->g_89 p_1814->g_116 p_1814->g_140 p_1814->g_151 p_1814->g_156 p_1814->g_39 p_1814->g_250 p_1814->g_255 p_1814->g_410 p_1814->g_429 p_1814->g_148 p_1814->g_224 p_1814->g_46 p_1814->g_481 p_1814->g_486 p_1814->g_510 p_1814->g_511 p_1814->g_42 p_1814->g_542 p_1814->g_548 p_1814->g_557 p_1814->g_598 p_1814->g_771 p_1814->g_554
 */
int32_t * func_32(uint32_t  p_33, int64_t  p_34, int32_t * p_35, int32_t * p_36, struct S0 * p_1814)
{ /* block id: 8 */
    VECTOR(uint32_t, 2) l_50 = (VECTOR(uint32_t, 2))(0UL, 4UL);
    VECTOR(uint32_t, 16) l_51 = (VECTOR(uint32_t, 16))(0xFE95B7CAL, (VECTOR(uint32_t, 4))(0xFE95B7CAL, (VECTOR(uint32_t, 2))(0xFE95B7CAL, 3UL), 3UL), 3UL, 0xFE95B7CAL, 3UL, (VECTOR(uint32_t, 2))(0xFE95B7CAL, 3UL), (VECTOR(uint32_t, 2))(0xFE95B7CAL, 3UL), 0xFE95B7CAL, 3UL, 0xFE95B7CAL, 3UL);
    int32_t *l_74 = &p_1814->g_19;
    uint32_t l_165 = 1UL;
    int32_t **l_287 = &l_74;
    int32_t *l_288 = (void*)0;
    int32_t *l_435[7][10] = {{&p_1814->g_96,&p_1814->g_99,(void*)0,(void*)0,(void*)0,&p_1814->g_99,&p_1814->g_96,(void*)0,&p_1814->g_96,&p_1814->g_96},{&p_1814->g_96,&p_1814->g_99,(void*)0,(void*)0,(void*)0,&p_1814->g_99,&p_1814->g_96,(void*)0,&p_1814->g_96,&p_1814->g_96},{&p_1814->g_96,&p_1814->g_99,(void*)0,(void*)0,(void*)0,&p_1814->g_99,&p_1814->g_96,(void*)0,&p_1814->g_96,&p_1814->g_96},{&p_1814->g_96,&p_1814->g_99,(void*)0,(void*)0,(void*)0,&p_1814->g_99,&p_1814->g_96,(void*)0,&p_1814->g_96,&p_1814->g_96},{&p_1814->g_96,&p_1814->g_99,(void*)0,(void*)0,(void*)0,&p_1814->g_99,&p_1814->g_96,(void*)0,&p_1814->g_96,&p_1814->g_96},{&p_1814->g_96,&p_1814->g_99,(void*)0,(void*)0,(void*)0,&p_1814->g_99,&p_1814->g_96,(void*)0,&p_1814->g_96,&p_1814->g_96},{&p_1814->g_96,&p_1814->g_99,(void*)0,(void*)0,(void*)0,&p_1814->g_99,&p_1814->g_96,(void*)0,&p_1814->g_96,&p_1814->g_96}};
    uint32_t l_436 = 0x806E64B2L;
    VECTOR(int64_t, 8) l_453 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    VECTOR(int16_t, 4) l_458 = (VECTOR(int16_t, 4))(0x1072L, (VECTOR(int16_t, 2))(0x1072L, 1L), 1L);
    VECTOR(int16_t, 8) l_459 = (VECTOR(int16_t, 8))(0x0B25L, (VECTOR(int16_t, 4))(0x0B25L, (VECTOR(int16_t, 2))(0x0B25L, 0x1CBAL), 0x1CBAL), 0x1CBAL, 0x0B25L, 0x1CBAL);
    int16_t *l_460 = (void*)0;
    VECTOR(int32_t, 8) l_469 = (VECTOR(int32_t, 8))(0x7DBE4B19L, (VECTOR(int32_t, 4))(0x7DBE4B19L, (VECTOR(int32_t, 2))(0x7DBE4B19L, 0x0110A248L), 0x0110A248L), 0x0110A248L, 0x7DBE4B19L, 0x0110A248L);
    int16_t l_482 = (-1L);
    VECTOR(int8_t, 2) l_490 = (VECTOR(int8_t, 2))(0x1BL, 0x40L);
    uint8_t l_568 = 255UL;
    VECTOR(uint8_t, 16) l_585 = (VECTOR(uint8_t, 16))(0x96L, (VECTOR(uint8_t, 4))(0x96L, (VECTOR(uint8_t, 2))(0x96L, 6UL), 6UL), 6UL, 0x96L, 6UL, (VECTOR(uint8_t, 2))(0x96L, 6UL), (VECTOR(uint8_t, 2))(0x96L, 6UL), 0x96L, 6UL, 0x96L, 6UL);
    VECTOR(int8_t, 16) l_666 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int8_t, 2))(0L, 0L), (VECTOR(int8_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
    int32_t l_676 = 0x061BFD4AL;
    VECTOR(uint32_t, 8) l_685 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL), 4294967295UL, 1UL, 4294967295UL);
    uint8_t l_734 = 0xA6L;
    uint64_t **l_743 = (void*)0;
    int i, j;
    l_436 = (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(l_50.xx)).xxxx, ((VECTOR(uint32_t, 2))(0xBF0BED92L, 0x849B7D65L)).yxxy, ((VECTOR(uint32_t, 2))(l_51.s7a)).yxyy))).y, (safe_add_func_uint16_t_u_u(((p_1814->g_224.s5 = (p_1814->g_6.x == (safe_lshift_func_int8_t_s_s(func_56((((*l_287) = func_62(p_33, (p_34 , (((safe_lshift_func_uint16_t_u_s((&p_1814->g_19 == p_36), 8)) , ((*l_287) = func_68(&p_1814->g_19, l_74, (func_75(l_74, p_1814) , p_36), l_50.x, l_165, p_1814))) == (void*)0)), l_288, p_1814)) == (void*)0), l_288, p_1814->g_comm_values[p_1814->tid], p_1814->g_224.s5, l_50.x, p_1814), 1)))) , l_51.sf), 0x442BL))));
    if ((p_33 | (safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((0x348541E4534A2DFFL & ((&l_165 == (void*)0) < ((VECTOR(int16_t, 8))(p_1814->g_441.s9a9d9828)).s1)), (safe_rshift_func_uint16_t_u_s(65529UL, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_1814->g_444.s19419c56)), ((VECTOR(int16_t, 2))(0x64F7L, 5L)), 0x195AL, 0x6C77L, 1L, 0L, 0L, 3L)).even)).s6536732017224752)))).s6)))) == GROUP_DIVERGE(2, 1)), (-5L)))))
    { /* block id: 197 */
        int64_t *l_446 = (void*)0;
        int64_t *l_447 = (void*)0;
        int64_t *l_448 = (void*)0;
        int64_t *l_449 = (void*)0;
        int64_t *l_450 = (void*)0;
        int64_t *l_451 = (void*)0;
        int64_t *l_452 = (void*)0;
        int32_t l_467[3];
        VECTOR(int32_t, 4) l_470 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0L), 0L);
        uint16_t *l_477 = &p_1814->g_151[0];
        uint32_t *l_478 = (void*)0;
        uint32_t *l_479 = (void*)0;
        uint32_t *l_480[3];
        int32_t **l_484 = &l_435[0][7];
        VECTOR(int32_t, 2) l_485 = (VECTOR(int32_t, 2))(0x55BE359EL, 7L);
        uint64_t **l_487 = &p_1814->g_486;
        uint16_t *l_508 = (void*)0;
        uint16_t *l_509 = &p_1814->g_510;
        VECTOR(uint8_t, 16) l_538 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL, (VECTOR(uint8_t, 2))(255UL, 0UL), (VECTOR(uint8_t, 2))(255UL, 0UL), 255UL, 0UL, 255UL, 0UL);
        VECTOR(int64_t, 16) l_579 = (VECTOR(int64_t, 16))(0x60874EFEC77BB7EBL, (VECTOR(int64_t, 4))(0x60874EFEC77BB7EBL, (VECTOR(int64_t, 2))(0x60874EFEC77BB7EBL, 9L), 9L), 9L, 0x60874EFEC77BB7EBL, 9L, (VECTOR(int64_t, 2))(0x60874EFEC77BB7EBL, 9L), (VECTOR(int64_t, 2))(0x60874EFEC77BB7EBL, 9L), 0x60874EFEC77BB7EBL, 9L, 0x60874EFEC77BB7EBL, 9L);
        VECTOR(int64_t, 8) l_593 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x0555E80177D48A48L), 0x0555E80177D48A48L), 0x0555E80177D48A48L, 1L, 0x0555E80177D48A48L);
        int8_t *l_596 = (void*)0;
        VECTOR(uint16_t, 2) l_626 = (VECTOR(uint16_t, 2))(0xB130L, 65535UL);
        VECTOR(uint16_t, 8) l_627 = (VECTOR(uint16_t, 8))(0xB497L, (VECTOR(uint16_t, 4))(0xB497L, (VECTOR(uint16_t, 2))(0xB497L, 0UL), 0UL), 0UL, 0xB497L, 0UL);
        int64_t l_657 = 1L;
        int i;
        for (i = 0; i < 3; i++)
            l_467[i] = 0x79C38F91L;
        for (i = 0; i < 3; i++)
            l_480[i] = &l_165;
        (*p_1814->g_106) = (l_482 = (p_33 < ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))((p_1814->g_46.s4 = (p_33 >= ((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 2))(p_1814->g_445.yy)).yyyxyyyyxyyyxxyx))).sd)), 1L, ((VECTOR(int64_t, 4))(l_453.s3136)), (safe_sub_func_uint64_t_u_u(((((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(0UL, 0xCA343DF7L)).xyxy, ((VECTOR(uint32_t, 16))(4294967294UL, (((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_458.zx)).yyyxxyxy)).s4741254557042132, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(0x6BB9L, 1L)).xyyx))).zxyzzyzywxzzwzwx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-1L), (-1L))).yyxxxxyx)).s4402520157250043))).sf, ((VECTOR(int16_t, 2))(l_459.s45)).even)) >= ((((p_1814->g_481 = (((((&p_1814->g_140 == l_460) ^ (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((GROUP_DIVERGE(2, 1) | (p_1814->g_224.s2 ^ (safe_div_func_int32_t_s_s((p_34 ^ (GROUP_DIVERGE(1, 1) < (~((l_467[0] , ((VECTOR(int32_t, 2))(p_1814->g_468.sc6)).hi) && ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_469.s5620434115401502)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x0C95C292L, 0x05D087F7L)), ((VECTOR(int32_t, 16))(l_470.zyxzyzwwzyzyxxyx)).s29, ((VECTOR(int32_t, 2))(0L, 0x0E32E8B4L))))).xxxxxyyxxyxxxxxy, ((VECTOR(int32_t, 2))(p_1814->g_471.s06)).yyyxxxyyxyxyyyyx))))).s6)))), ((safe_unary_minus_func_uint32_t_u(((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(((*l_477) ^= (9L != (&p_1814->g_151[7] == l_477))), (*p_1814->g_410))) || 0x92472EED9845B8D6L), p_33)) , p_1814->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1814->tid, 41))]))) , 1UL))))) > p_33), p_33)), (*p_1814->g_410)))) == p_1814->g_42.y) || l_467[0]) , p_1814->g_121.y)) , p_33) , 4294967295UL) > p_1814->g_200.s1)) & l_467[1]), 1UL, p_33, 0x67232F6FL, 0UL, ((VECTOR(uint32_t, 2))(3UL)), 0x88A5C4FDL, 0x7FB6D1F1L, 0x85A6295FL, ((VECTOR(uint32_t, 2))(0x98F5F015L)), 0xE9EFB069L, 4294967295UL, 4294967293UL)).sad38, ((VECTOR(uint32_t, 4))(0xBAADA410L))))).x ^ 0x114166A7L) <= 0x5470L), l_470.y)), 0L, p_1814->g_151[2], ((VECTOR(int64_t, 4))(1L)), 2L, 1L, 1L)).odd)).s3));
        (*l_484) = p_35;
        if ((((VECTOR(int32_t, 16))(l_485.xyxyxyxyxxyxyxyx)).sb , ((l_446 == ((*l_487) = p_1814->g_486)) , (safe_sub_func_int64_t_s_s((((VECTOR(int8_t, 2))(l_490.yx)).hi ^ (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(p_33, (l_470.z | (safe_rshift_func_int8_t_s_s(((p_1814->g_511 = (safe_add_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), 2)) , ((*l_477) = p_1814->g_42.x)) , p_34), (safe_unary_minus_func_uint16_t_u((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((FAKE_DIVERGE(p_1814->global_0_offset, get_global_id(0), 10) , (p_1814->g_43.s7 == (((safe_rshift_func_uint16_t_u_u(p_1814->g_444.s6, ((*l_509) = (p_34 <= l_467[0])))) & p_1814->g_471.s0) ^ l_485.y))), p_33)), p_1814->g_468.sf))))))) > 0x630D37B5L), 1))))) < p_34), p_33))), 0UL)))))
        { /* block id: 208 */
            int8_t l_513 = 1L;
            int32_t l_545 = 1L;
            l_513 = (p_33 & (!((VECTOR(uint8_t, 8))(p_1814->g_512.zxzwwzxx)).s2));
            if (p_33)
            { /* block id: 210 */
                return (*p_1814->g_403);
            }
            else
            { /* block id: 212 */
                int32_t l_523 = 0x50D5CAD8L;
                int32_t **l_546[3];
                VECTOR(uint16_t, 8) l_549 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x893EL), 0x893EL), 0x893EL, 0UL, 0x893EL);
                uint32_t *l_569 = &p_1814->g_429;
                int i;
                for (i = 0; i < 3; i++)
                    l_546[i] = &l_435[0][3];
                for (p_33 = 0; (p_33 != 13); p_33 = safe_add_func_int16_t_s_s(p_33, 1))
                { /* block id: 215 */
                    uint32_t l_516 = 0x2316A527L;
                    int32_t l_539 = (-5L);
                    if (p_33)
                        break;
                    l_516++;
                    (*p_1814->g_106) ^= p_34;
                    for (p_1814->g_510 = 0; (p_1814->g_510 <= 18); p_1814->g_510 = safe_add_func_uint8_t_u_u(p_1814->g_510, 2))
                    { /* block id: 221 */
                        uint64_t l_540 = 5UL;
                        uint64_t *l_541 = &p_1814->g_542;
                        int8_t *l_543 = (void*)0;
                        int8_t *l_544 = &l_513;
                        int i, j;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1814->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 41)), permutations[(safe_mod_func_uint32_t_u_u((l_545 = (((safe_lshift_func_uint16_t_u_s((++(*l_477)), (safe_add_func_uint16_t_u_u((GROUP_DIVERGE(0, 1) && (18446744073709551610UL == (l_523 <= ((p_1814->g_42.x = p_33) , p_33)))), (1UL != ((safe_rshift_func_uint8_t_u_u((0x91EF33764281D12BL > (safe_div_func_uint8_t_u_u(((((*l_544) = ((((((*l_541) = (((l_540 = (l_539 ^= (((safe_mod_func_uint16_t_u_u(p_33, ((VECTOR(uint16_t, 8))(((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(0x8EL, 0x76L)).hi, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_538.s79)).xyxyyyxyxxxxyyxx)).s4)) || p_33), 0x4AE0L, 0UL, 65535UL, p_33, 0x3407L, 0x2F21L, 65535UL)).s6)) , 4294967295UL) != p_1814->g_46.sc))) != 4294967295UL) , 18446744073709551608UL)) , (*l_287)) == p_35) & (-4L)) , l_516)) , (*p_1814->g_403)) != (void*)0), 0x76L))), 0)) & p_1814->g_96)))))) , 0x4D96D7E9L) < 0x682DCBBDL)), 10))][(safe_mod_func_uint32_t_u_u(p_1814->tid, 41))]));
                        if ((*p_1814->g_106))
                            continue;
                    }
                }
                (*p_1814->g_547) = l_546[0];
                atomic_or(&p_1814->g_atomic_reduction[get_linear_group_id()], (((((((*l_569) = (((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(1UL, 4294967294UL)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 2))(0x7DDAL, 0x24B2L)).xxyxxxyy))).s73, ((VECTOR(uint16_t, 2))(l_549.s47))))), 0xAF155812L, (((safe_add_func_uint64_t_u_u((!(p_1814->g_289.s7 , p_34)), GROUP_DIVERGE(1, 1))) , (safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1814->local_1_offset, get_local_id(1), 10), (~(-1L))))) , (p_1814->g_557[0]++)), ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 4))((((&l_74 == &p_1814->g_404) <= (safe_mul_func_int16_t_s_s((*p_1814->g_410), ((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((((safe_mul_func_int16_t_s_s((((l_513 != p_34) || p_33) , (*p_1814->g_410)), l_568)) != 6UL) , 0x247F38A27C8F3F67L) <= 0x81976FB6943B49A2L) != p_34), 0x67911295L)), p_33)) == p_1814->g_445.z)))) || l_513), 4294967292UL, 4294967295UL, 0UL)), ((VECTOR(uint32_t, 4))(0x63C64822L))))))).s75))).lo || 5L)) , p_34) && p_34) <= p_34) && (-1L)) , p_34) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1814->v_collective += p_1814->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
        }
        else
        { /* block id: 240 */
            VECTOR(int64_t, 4) l_580 = (VECTOR(int64_t, 4))(0x13546DB77BCBD6BCL, (VECTOR(int64_t, 2))(0x13546DB77BCBD6BCL, (-1L)), (-1L));
            int32_t *l_642 = &p_1814->g_79[1];
            int32_t **l_651 = &l_74;
            int32_t l_652 = 9L;
            int32_t l_653 = (-1L);
            int32_t l_654 = 0L;
            int32_t l_655 = 0L;
            int32_t l_656[1][9][6] = {{{4L,1L,7L,1L,4L,4L},{4L,1L,7L,1L,4L,4L},{4L,1L,7L,1L,4L,4L},{4L,1L,7L,1L,4L,4L},{4L,1L,7L,1L,4L,4L},{4L,1L,7L,1L,4L,4L},{4L,1L,7L,1L,4L,4L},{4L,1L,7L,1L,4L,4L},{4L,1L,7L,1L,4L,4L}}};
            uint64_t l_658 = 1UL;
            int i, j, k;
            if ((atomic_inc(&p_1814->l_atomic_input[62]) == 9))
            { /* block id: 242 */
                uint64_t l_570[1];
                int32_t l_573 = 0x4DF08E85L;
                uint16_t l_574 = 5UL;
                VECTOR(int32_t, 4) l_576 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5B3CF177L), 0x5B3CF177L);
                int32_t *l_575[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_570[i] = 0xB2DFAC672FDFCC52L;
                ++l_570[0];
                l_574 &= l_573;
                l_575[5][1] = (void*)0;
                unsigned int result = 0;
                int l_570_i0;
                for (l_570_i0 = 0; l_570_i0 < 1; l_570_i0++) {
                    result += l_570[l_570_i0];
                }
                result += l_573;
                result += l_574;
                result += l_576.w;
                result += l_576.z;
                result += l_576.y;
                result += l_576.x;
                atomic_add(&p_1814->l_special_values[62], result);
            }
            else
            { /* block id: 246 */
                (1 + 1);
            }
            for (p_1814->g_255 = (-18); (p_1814->g_255 >= (-24)); p_1814->g_255--)
            { /* block id: 251 */
                VECTOR(int8_t, 8) l_584 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x79L), 0x79L), 0x79L, 0L, 0x79L);
                uint64_t l_588 = 1UL;
                int8_t *l_595 = (void*)0;
                int8_t **l_594 = &l_595;
                uint64_t *l_597 = &p_1814->g_598;
                VECTOR(uint16_t, 16) l_628 = (VECTOR(uint16_t, 16))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0xBE4CL), 0xBE4CL), 0xBE4CL, 3UL, 0xBE4CL, (VECTOR(uint16_t, 2))(3UL, 0xBE4CL), (VECTOR(uint16_t, 2))(3UL, 0xBE4CL), 3UL, 0xBE4CL, 3UL, 0xBE4CL);
                int32_t l_641 = 0x21385572L;
                int i;
                if (((((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 2))(l_579.s59)).xyyyxyyx, ((VECTOR(int64_t, 16))(l_580.yzwzzywyxzwwwwyw)).odd))).s7364271766717213, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_34, 5L, (((VECTOR(uint64_t, 16))(p_1814->g_581.s1dd73bc7eb4eddd3)).sa == ((*l_597) |= (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(l_584.s6162)).x, ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(l_585.s14deb2c4e7d89db2)).s8d1f, ((VECTOR(uint8_t, 8))(3UL, 0x35L, (l_588 || 0UL), l_584.s7, (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_33, (!(*p_1814->g_410)))), (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_593.s47)).xxxxyyyyyyxxyxyy)).s5 <= ((((p_33 == (((*l_594) = (void*)0) != l_596)) , 0xA4L) ^ (-1L)) == p_34)))), ((VECTOR(uint8_t, 2))(0xBBL)), 1UL)).lo))).z)))), ((VECTOR(int64_t, 4))((-1L))), 5L, ((VECTOR(int64_t, 2))(1L)), l_588, ((VECTOR(int64_t, 2))(0x29717C4B96F2C16AL)), ((VECTOR(int64_t, 2))((-8L))), 1L)).s01f8)).yxyxxyzyxwzzzwyx))))).hi, ((VECTOR(int64_t, 8))(0x52F1F1C6554EFA46L)), ((VECTOR(int64_t, 8))(1L))))).s4 > 0x45DA87742D706451L) || l_584.s1))
                { /* block id: 254 */
                    int8_t l_613 = 0x58L;
                    VECTOR(int16_t, 8) l_618 = (VECTOR(int16_t, 8))(0x3CE8L, (VECTOR(int16_t, 4))(0x3CE8L, (VECTOR(int16_t, 2))(0x3CE8L, 0L), 0L), 0L, 0x3CE8L, 0L);
                    int32_t l_643[9][10] = {{0x286ACF5CL,0x7AFEBB02L,0x6E42483AL,0x335A2595L,0x0717CA1FL,0x335A2595L,0x6E42483AL,0x7AFEBB02L,0x286ACF5CL,0x6E42483AL},{0x286ACF5CL,0x7AFEBB02L,0x6E42483AL,0x335A2595L,0x0717CA1FL,0x335A2595L,0x6E42483AL,0x7AFEBB02L,0x286ACF5CL,0x6E42483AL},{0x286ACF5CL,0x7AFEBB02L,0x6E42483AL,0x335A2595L,0x0717CA1FL,0x335A2595L,0x6E42483AL,0x7AFEBB02L,0x286ACF5CL,0x6E42483AL},{0x286ACF5CL,0x7AFEBB02L,0x6E42483AL,0x335A2595L,0x0717CA1FL,0x335A2595L,0x6E42483AL,0x7AFEBB02L,0x286ACF5CL,0x6E42483AL},{0x286ACF5CL,0x7AFEBB02L,0x6E42483AL,0x335A2595L,0x0717CA1FL,0x335A2595L,0x6E42483AL,0x7AFEBB02L,0x286ACF5CL,0x6E42483AL},{0x286ACF5CL,0x7AFEBB02L,0x6E42483AL,0x335A2595L,0x0717CA1FL,0x335A2595L,0x6E42483AL,0x7AFEBB02L,0x286ACF5CL,0x6E42483AL},{0x286ACF5CL,0x7AFEBB02L,0x6E42483AL,0x335A2595L,0x0717CA1FL,0x335A2595L,0x6E42483AL,0x7AFEBB02L,0x286ACF5CL,0x6E42483AL},{0x286ACF5CL,0x7AFEBB02L,0x6E42483AL,0x335A2595L,0x0717CA1FL,0x335A2595L,0x6E42483AL,0x7AFEBB02L,0x286ACF5CL,0x6E42483AL},{0x286ACF5CL,0x7AFEBB02L,0x6E42483AL,0x335A2595L,0x0717CA1FL,0x335A2595L,0x6E42483AL,0x7AFEBB02L,0x286ACF5CL,0x6E42483AL}};
                    uint16_t l_644 = 8UL;
                    int i, j;
                    for (p_33 = 0; (p_33 == 27); p_33 = safe_add_func_uint8_t_u_u(p_33, 9))
                    { /* block id: 257 */
                        VECTOR(uint16_t, 16) l_625 = (VECTOR(uint16_t, 16))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 1UL), 1UL), 1UL, 5UL, 1UL, (VECTOR(uint16_t, 2))(5UL, 1UL), (VECTOR(uint16_t, 2))(5UL, 1UL), 5UL, 1UL, 5UL, 1UL);
                        int32_t l_640 = 0x0D63C5BCL;
                        int i;
                        (*p_1814->g_106) = ((safe_mul_func_int8_t_s_s(p_1814->g_148, (((safe_mod_func_int8_t_s_s(((((*l_597) = (((((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(0UL, 0x9562A756L)).yxxyxyyx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(4294967287UL, (18446744073709551609UL < ((safe_sub_func_int8_t_s_s(l_588, (safe_rshift_func_int16_t_s_s(0L, 7)))) , (safe_add_func_int8_t_s_s((((((safe_add_func_int32_t_s_s((l_613 = (-7L)), GROUP_DIVERGE(2, 1))) , l_596) == l_596) | (p_33 , (safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(0x1FDFL, 0xD034L)) != p_1814->g_89[3][3][0]), p_33)))) && p_1814->g_445.z), p_33)))), 4294967295UL, 0x5E1787E5L)).wxzzxzxy))))).s7 , 1L) <= 0x3F206F086E8DB090L) == (-9L))) ^ p_1814->g_42.w) != 253UL), 0x34L)) , p_34) & l_618.s5))) ^ 1UL);
                        (*p_1814->g_106) = ((&p_36 == &p_1814->g_404) ^ (FAKE_DIVERGE(p_1814->group_1_offset, get_group_id(1), 10) == ((safe_lshift_func_uint16_t_u_u((((((((safe_rshift_func_uint16_t_u_s((GROUP_DIVERGE(0, 1) & (safe_rshift_func_uint8_t_u_u(((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(l_625.s48d9307563d8fc86)).lo, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_626.xyxy)).wwwxzwxzzzzyzwxy)), ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 2))(0UL, 0UL)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 2))(4L, 0x5133L)).xyxyyxyy))).s6622134576204716, ((VECTOR(uint16_t, 8))(l_627.s55075671)).s0043036121521163))).s02f0)).hi, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_628.s34)), 0UL, 0x8BA6L)).hi))).xyyxxxxyxxxyyyxy))))).even))))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x2001L, 65535UL)))), 65527UL, 0xC792L)).yxwyxxxy, ((VECTOR(uint16_t, 2))(0x623FL, 0x5997L)).yxxxyyyy))).s52)).lo != (((-10L) <= (~(safe_sub_func_int64_t_s_s((((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(65535UL, (((safe_add_func_int16_t_s_s(((void*)0 != &p_1814->g_548), (p_33 > (((((l_640 = ((safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(p_1814->g_639.xyyxyyyxxyxyxxyx)))).s3 != p_1814->g_512.y), 7)), 1UL)), 14)) | (-1L))) == p_1814->g_46.sf) > p_1814->g_510) != p_33) , p_1814->g_429)))) != p_1814->g_429) , p_33), 1UL, 65532UL, 4UL, ((VECTOR(uint16_t, 2))(0x6828L)), ((VECTOR(uint16_t, 8))(0xC6E6L)), 0xE6DAL)).even, ((VECTOR(uint16_t, 8))(0x82B4L)), ((VECTOR(uint16_t, 8))(0x964EL))))).s2 && l_641), 7UL)))) > (*p_1814->g_410))) <= l_625.sd), 5))), l_613)) <= 2L) ^ p_34) || FAKE_DIVERGE(p_1814->local_0_offset, get_local_id(0), 10)) , l_618.s3) > p_33) >= 0x52L), l_641)) > p_33)));
                        (*l_484) = l_642;
                    }
                    --l_644;
                }
                else
                { /* block id: 266 */
                    for (p_1814->g_96 = (-14); (p_1814->g_96 >= (-22)); p_1814->g_96 = safe_sub_func_int64_t_s_s(p_1814->g_96, 6))
                    { /* block id: 269 */
                        return (*p_1814->g_403);
                    }
                    if ((*l_642))
                        break;
                    for (p_1814->g_116 = 0; (p_1814->g_116 < 25); ++p_1814->g_116)
                    { /* block id: 275 */
                        (*p_1814->g_106) &= (l_651 == (void*)0);
                    }
                }
            }
            ++l_658;
        }
    }
    else
    { /* block id: 282 */
        int8_t *l_663 = (void*)0;
        int8_t **l_664 = &l_663;
        int32_t l_675 = 0x43D94A14L;
        int64_t *l_677 = (void*)0;
        int64_t *l_678 = (void*)0;
        int64_t *l_679 = (void*)0;
        int64_t *l_680 = (void*)0;
        int64_t *l_681 = (void*)0;
        int64_t *l_682 = (void*)0;
        int32_t l_683 = (-1L);
        VECTOR(uint32_t, 8) l_684 = (VECTOR(uint32_t, 8))(0x2676AEF8L, (VECTOR(uint32_t, 4))(0x2676AEF8L, (VECTOR(uint32_t, 2))(0x2676AEF8L, 0x1DF5B73FL), 0x1DF5B73FL), 0x1DF5B73FL, 0x2676AEF8L, 0x1DF5B73FL);
        int i;
        for (p_1814->g_255 = (-26); (p_1814->g_255 < (-16)); p_1814->g_255 = safe_add_func_uint8_t_u_u(p_1814->g_255, 5))
        { /* block id: 285 */
            (*p_1814->g_106) |= p_33;
            if (p_33)
                break;
        }
        l_684.s0 &= (l_675 = (p_34 <= (((((*l_664) = l_663) == (void*)0) , (((((0x899C44F1L == ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_1814->g_665.sd9ef9606)))).s7 && (p_1814->g_comm_values[p_1814->tid] || ((VECTOR(int8_t, 4))(l_666.s44c1)).x)) != (((&l_435[4][5] == &p_1814->g_106) < ((l_683 = (safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_s((+((l_675 | p_1814->g_224.s0) , 0UL)), 6)) && p_33) && p_1814->g_471.s5) , 0x39FD5487L), 0x2E2FF024L)) ^ p_34), (-1L))) | p_33), l_676))) <= (-1L))) == 1L))) == 0x4879L) | p_34) != p_33) , p_1814->g_445.z)) > p_1814->g_445.y)));
        (*p_1814->g_548) = p_36;
    }
    if (l_685.s4)
    { /* block id: 295 */
        uint16_t l_694[7] = {65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL};
        int32_t *l_699[4][1];
        VECTOR(int16_t, 2) l_708 = (VECTOR(int16_t, 2))(0x7D1FL, 0x50F9L);
        VECTOR(uint16_t, 2) l_710 = (VECTOR(uint16_t, 2))(65530UL, 0x01BBL);
        int32_t l_729 = (-1L);
        int32_t l_730 = 0x03A35CD7L;
        int32_t l_731 = 0x79B5DC5DL;
        uint64_t **l_745 = &p_1814->g_486;
        VECTOR(int64_t, 2) l_746 = (VECTOR(int64_t, 2))(0x4034827833E0B7F5L, (-7L));
        VECTOR(uint32_t, 2) l_747 = (VECTOR(uint32_t, 2))(5UL, 1UL);
        VECTOR(int16_t, 4) l_758 = (VECTOR(int16_t, 4))(0x38BCL, (VECTOR(int16_t, 2))(0x38BCL, 0L), 0L);
        VECTOR(int16_t, 8) l_760 = (VECTOR(int16_t, 8))(0x3D11L, (VECTOR(int16_t, 4))(0x3D11L, (VECTOR(int16_t, 2))(0x3D11L, 0x6DAFL), 0x6DAFL), 0x6DAFL, 0x3D11L, 0x6DAFL);
        int8_t *l_769 = (void*)0;
        int8_t *l_770 = (void*)0;
        int32_t *l_774 = &l_729;
        int32_t **l_773 = &l_774;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_699[i][j] = (void*)0;
        }
        for (p_33 = (-5); (p_33 > 25); p_33 = safe_add_func_int64_t_s_s(p_33, 7))
        { /* block id: 298 */
            (*p_1814->g_106) ^= (!((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x513E372AL, 0x583288BBL)), 2L, 1L)).hi, ((VECTOR(int32_t, 2))((-9L), 0x2191D8F3L))))).even);
        }
        (*p_1814->g_688) = (*p_1814->g_105);
        for (p_1814->g_510 = 0; (p_1814->g_510 <= 9); p_1814->g_510 = safe_add_func_int64_t_s_s(p_1814->g_510, 9))
        { /* block id: 304 */
            uint32_t l_691 = 0xB913065BL;
            ++l_691;
            if ((l_694[6] &= 0x3B9FDDBBL))
            { /* block id: 307 */
                (**p_1814->g_688) = l_694[6];
            }
            else
            { /* block id: 309 */
                VECTOR(int16_t, 4) l_709 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L);
                int32_t ***l_715 = &p_1814->g_548;
                int8_t *l_726 = (void*)0;
                int8_t *l_727[2][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                uint8_t *l_728[7][3][10] = {{{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481}},{{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481}},{{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481}},{{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481}},{{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481}},{{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481}},{{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481},{(void*)0,(void*)0,&p_1814->g_481,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,(void*)0,&p_1814->g_481}}};
                uint16_t *l_735[5] = {&l_694[3],&l_694[3],&l_694[3],&l_694[3],&l_694[3]};
                int16_t **l_742 = &p_1814->g_410;
                uint64_t ***l_744[8][9] = {{&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743},{&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743},{&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743},{&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743},{&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743},{&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743},{&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743},{&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743}};
                int i, j, k;
                for (p_1814->g_511 = (-3); (p_1814->g_511 <= 13); p_1814->g_511++)
                { /* block id: 312 */
                    for (p_1814->g_140 = 0; (p_1814->g_140 > 14); p_1814->g_140 = safe_add_func_uint8_t_u_u(p_1814->g_140, 2))
                    { /* block id: 315 */
                        (*p_1814->g_548) = (void*)0;
                        return l_699[3][0];
                    }
                    if ((*p_1814->g_106))
                        continue;
                }
                l_731 = (safe_add_func_uint8_t_u_u((((((safe_lshift_func_int16_t_s_s(p_33, ((*p_1814->g_410) = (safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(p_34, ((((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(l_708.xxyxyxxy)), ((VECTOR(int16_t, 4))(l_709.zxxz)).xwzyyzyz))).even, ((VECTOR(uint16_t, 2))(l_710.yy)).xxxx))).z != (safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((((l_715 == (((safe_mul_func_uint8_t_u_u((l_730 |= ((*p_1814->g_252) & (safe_add_func_int8_t_s_s(0L, (l_729 = (safe_mul_func_uint8_t_u_u(l_691, (safe_mul_func_int8_t_s_s((p_1814->g_224.s1 ^= ((safe_lshift_func_uint8_t_u_u((&p_1814->g_148 != (void*)0), (+(p_33 > p_33)))) != p_33)), l_694[6]))))))))), p_1814->g_46.s5)) , p_1814->g_91) , (void*)0)) != p_34) > l_691), 0x3EL)) == l_710.x) | 255UL), 0xA4L))) | p_1814->g_598))), p_33))))) != (-3L)) || p_33) >= l_708.y) ^ 9L), p_33));
                (*p_1814->g_106) = (p_1814->g_151[1] , 0x3132464BL);
                (*p_1814->g_548) = func_68((*p_1814->g_403), ((((0x0943L ^ (p_1814->g_151[0] = (safe_rshift_func_int16_t_s_u(l_734, (p_33 , p_34))))) , (safe_rshift_func_int8_t_s_s((((0x4ABDL == FAKE_DIVERGE(p_1814->group_0_offset, get_group_id(0), 10)) , ((((~(((l_745 = (((l_709.z , (safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((l_691 , &p_1814->g_410) == l_742), 0x255E0316L)), FAKE_DIVERGE(p_1814->local_2_offset, get_local_id(2), 10)))) || (*p_1814->g_410)) , l_743)) != (void*)0) >= (*p_1814->g_410))) && 0x114CF66C7C69168DL) > l_694[6]) , 4L)) && p_1814->g_481), 4))) || p_1814->g_46.s1) , (void*)0), p_36, p_34, p_1814->g_121.y, p_1814);
            }
            (*p_1814->g_106) = p_34;
        }
        (*l_773) = ((*p_1814->g_548) = func_62(((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(0x6633BA18125F95ACL, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 2))(0L, 5L)).xxxxxyxx, ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 8))(l_746.yxxxxyyx)).s77, ((VECTOR(int64_t, 16))((&p_1814->g_404 != (((VECTOR(uint32_t, 4))(l_747.yyxx)).x , (((((p_1814->g_771.y = (safe_add_func_uint64_t_u_u((safe_add_func_int8_t_s_s(p_34, 0x55L)), (safe_mul_func_int16_t_s_s((p_33 && (((safe_sub_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_758.ywwy)), 2L, 0L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_1814->g_759.s17)).xyxyyxyyyxxyyyxx)).s33, ((VECTOR(int16_t, 4))(l_760.s5751)).lo))), (((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s(l_731, (l_729 = l_708.x))) | (safe_lshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_s((-1L), 0)) && 0x6BL) && (((l_730 = (p_1814->g_445.x && p_33)) & p_33) == 0xC0B196B7C8282727L)), 0))), FAKE_DIVERGE(p_1814->global_0_offset, get_global_id(0), 10))) & p_34) , p_34), ((VECTOR(int16_t, 2))((-1L))), 0x2C49L, 0x6784L, 1L)), 0L, 0x41C4L)).s9, l_710.x)) ^ p_1814->g_441.s6), 0L)) , l_694[2]) ^ p_1814->g_471.s3)), 0x216DL))))) , p_1814->g_772.y) || 0x2FDDL) > p_34) , &p_1814->g_404))), 0x231D745942FA1570L, 0x582F9ECB0D6A3537L, ((VECTOR(int64_t, 8))(0L)), 0x7914F17B75C1DE82L, ((VECTOR(int64_t, 2))(0L)), (-1L), 8L)).s0a, ((VECTOR(int64_t, 2))((-10L)))))).xxxxyyyx))).s0011575713425005)).se374)), ((VECTOR(int64_t, 2))(0x4720142EF1358118L)), 0x2869CE20D4DF40DEL)).s5602311256513533)).s15, ((VECTOR(int64_t, 2))(8L))))), 0x60FF40B4CB09A6F2L, 0x0C70320D186CD5A1L)).y < GROUP_DIVERGE(0, 1)) > 5L), l_760.s3, (*p_1814->g_403), p_1814));
    }
    else
    { /* block id: 338 */
        for (p_1814->g_99 = (-13); (p_1814->g_99 < (-2)); ++p_1814->g_99)
        { /* block id: 341 */
            VECTOR(uint16_t, 2) l_779 = (VECTOR(uint16_t, 2))(65535UL, 3UL);
            int i;
            for (p_1814->g_554 = (-1); (p_1814->g_554 >= 8); p_1814->g_554 = safe_add_func_uint16_t_u_u(p_1814->g_554, 5))
            { /* block id: 344 */
                (*p_1814->g_106) = (((*p_1814->g_410) ^ ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_779.yy)).yxyxyxyxyxyyxyyx)).sa) , (-10L));
            }
        }
    }
    return (*p_1814->g_403);
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_255 p_1814->g_42 p_1814->g_403 p_1814->g_43 p_1814->g_99 p_1814->g_252 p_1814->g_253 p_1814->g_79 p_1814->g_434
 * writes: p_1814->g_255 p_1814->g_79 p_1814->g_410 p_1814->g_140 p_1814->g_429 p_1814->g_148 p_1814->g_156
 */
int8_t  func_56(int32_t  p_57, int32_t * p_58, uint64_t  p_59, uint32_t  p_60, uint32_t  p_61, struct S0 * p_1814)
{ /* block id: 132 */
    VECTOR(int32_t, 4) l_406 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3672C7B2L), 0x3672C7B2L);
    int16_t *l_407 = &p_1814->g_140;
    int16_t *l_411 = &p_1814->g_140;
    int32_t l_421 = 0x0F7284FCL;
    int32_t l_430 = 6L;
    int32_t **l_431 = &p_1814->g_404;
    int8_t l_433 = 0x75L;
    int i;
    for (p_1814->g_255 = 0; (p_1814->g_255 < (-19)); --p_1814->g_255)
    { /* block id: 135 */
        if ((atomic_inc(&p_1814->l_atomic_input[61]) == 6))
        { /* block id: 137 */
            int32_t l_324 = 0x1E6B39C1L;
            if (l_324)
            { /* block id: 138 */
                uint32_t l_325[1][9];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_325[i][j] = 4294967295UL;
                }
                l_324 = l_325[0][0];
            }
            else
            { /* block id: 140 */
                uint64_t l_326 = 0xC651FAF66FAEE356L;
                uint16_t l_327 = 0xEDD0L;
                uint8_t l_328[6] = {0x6FL,0x6FL,0x6FL,0x6FL,0x6FL,0x6FL};
                int8_t l_329 = (-5L);
                uint16_t l_330 = 0xFD26L;
                int i;
                if (((l_327 |= l_326) , (l_328[3] , (l_329 , l_330))))
                { /* block id: 142 */
                    int8_t l_331 = 0x08L;
                    uint32_t l_332 = 0xDDD89E2EL;
                    int64_t l_338 = (-1L);
                    l_332--;
                    for (l_331 = 0; (l_331 == 24); l_331 = safe_add_func_uint16_t_u_u(l_331, 6))
                    { /* block id: 146 */
                        uint64_t l_337[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_337[i] = 0x89819BB82F7A1C22L;
                        l_324 = l_337[1];
                    }
                    l_324 |= 8L;
                    if (l_338)
                    { /* block id: 150 */
                        int32_t l_339 = 0x46E424C7L;
                        uint16_t l_340 = 7UL;
                        uint64_t l_343 = 18446744073709551611UL;
                        uint64_t l_344 = 0x1644F10BCE4668D8L;
                        uint8_t l_345 = 0UL;
                        l_340--;
                        l_344 = l_343;
                        l_345 &= (l_324 = 0x0FC93802L);
                    }
                    else
                    { /* block id: 155 */
                        uint16_t l_346[2];
                        int8_t l_349 = 0x42L;
                        uint32_t l_350 = 0x671C6B98L;
                        uint32_t l_351[3];
                        VECTOR(uint32_t, 16) l_352 = (VECTOR(uint32_t, 16))(0x913A9347L, (VECTOR(uint32_t, 4))(0x913A9347L, (VECTOR(uint32_t, 2))(0x913A9347L, 0UL), 0UL), 0UL, 0x913A9347L, 0UL, (VECTOR(uint32_t, 2))(0x913A9347L, 0UL), (VECTOR(uint32_t, 2))(0x913A9347L, 0UL), 0x913A9347L, 0UL, 0x913A9347L, 0UL);
                        uint16_t l_353 = 65535UL;
                        int32_t l_354 = 1L;
                        int32_t *l_355 = (void*)0;
                        int32_t *l_356[5][9] = {{&l_354,(void*)0,(void*)0,&l_354,(void*)0,(void*)0,(void*)0,(void*)0,&l_354},{&l_354,(void*)0,(void*)0,&l_354,(void*)0,(void*)0,(void*)0,(void*)0,&l_354},{&l_354,(void*)0,(void*)0,&l_354,(void*)0,(void*)0,(void*)0,(void*)0,&l_354},{&l_354,(void*)0,(void*)0,&l_354,(void*)0,(void*)0,(void*)0,(void*)0,&l_354},{&l_354,(void*)0,(void*)0,&l_354,(void*)0,(void*)0,(void*)0,(void*)0,&l_354}};
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_346[i] = 0x69EDL;
                        for (i = 0; i < 3; i++)
                            l_351[i] = 4294967294UL;
                        l_324 = ((l_346[1] , ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(1UL, 0UL, (++l_326), ((VECTOR(uint64_t, 4))(l_349, 18446744073709551615UL, 18446744073709551615UL, 0x5CB2F23841E4F36CL)), 0UL)))).s6) , (l_350 , l_351[2]));
                        l_324 = ((l_353 &= ((VECTOR(uint32_t, 8))(l_352.s57138a26)).s3) , l_354);
                        l_356[4][3] = (GROUP_DIVERGE(0, 1) , l_355);
                    }
                }
                else
                { /* block id: 162 */
                    int16_t l_357 = 0x3023L;
                    int16_t l_358 = 1L;
                    uint64_t l_359 = 18446744073709551608UL;
                    uint64_t l_360 = 0x3E3E66BAA3851B16L;
                    int16_t l_361 = 0x743EL;
                    uint16_t l_362[10] = {1UL,0x6365L,1UL,1UL,0x6365L,1UL,1UL,0x6365L,1UL,1UL};
                    VECTOR(int32_t, 2) l_363 = (VECTOR(int32_t, 2))(0L, 0x44F46857L);
                    VECTOR(int32_t, 4) l_364 = (VECTOR(int32_t, 4))(0x448D2985L, (VECTOR(int32_t, 2))(0x448D2985L, 0x4EB0016CL), 0x4EB0016CL);
                    VECTOR(int32_t, 8) l_365 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x4E95B680L), 0x4E95B680L), 0x4E95B680L, 4L, 0x4E95B680L);
                    VECTOR(int32_t, 8) l_366 = (VECTOR(int32_t, 8))(0x107C03FBL, (VECTOR(int32_t, 4))(0x107C03FBL, (VECTOR(int32_t, 2))(0x107C03FBL, 1L), 1L), 1L, 0x107C03FBL, 1L);
                    int8_t l_367[1];
                    uint8_t l_368 = 3UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_367[i] = 0x3FL;
                    if (((VECTOR(int32_t, 16))((-1L), (l_357 , ((VECTOR(int32_t, 8))(l_358, 0x1C3ADEF4L, l_359, (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 1L)))).yxyxxxxy)).s2500340130125600)).sbf1f, (int32_t)((VECTOR(int32_t, 8))((l_324 = 0x448BBD69L), 0x206B3AA1L, 0x79AAB1D1L, l_360, (-10L), 0x58A552D1L, (-1L), (-7L))).s5))), ((l_362[6] |= l_361) , ((VECTOR(int32_t, 4))(0x3027AC53L, ((VECTOR(int32_t, 2))(0x1E321941L, 0x3280F9C2L)), 0x4C970D5FL)).x), 0L, 0x176FC5ABL)).s7760701756057346)).s98e2)))).s0), ((VECTOR(int32_t, 4))(l_363.xxxy)), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_364.yx)), ((VECTOR(int32_t, 4))(1L, 0L, 0L, 0x321056A9L)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_365.s36)).xyxyyxxxxyxxyxyy)).s5328)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_366.s7472503406631333)).s5133, ((VECTOR(int32_t, 8))((-1L), 0x03D84E16L, ((VECTOR(int32_t, 2))(0x1D4CE806L)), 0x4F51CFE5L, ((VECTOR(int32_t, 2))(0x46B5629DL)), (-2L))).odd, ((VECTOR(int32_t, 4))((-9L)))))).lo)).xxyyyxxx)).s34, ((VECTOR(int32_t, 2))(0x399EFB11L))))), 0x43036002L, (-2L))), ((VECTOR(int32_t, 4))(9L)), ((VECTOR(int32_t, 4))((-2L)))))).yzyzzywx)).s46))).lo, l_367[0], (-7L), 6L, l_368, ((VECTOR(int32_t, 4))(0L)), 0x65296F96L)).s5)
                    { /* block id: 165 */
                        uint16_t l_369 = 6UL;
                        --l_369;
                    }
                    else
                    { /* block id: 167 */
                        int8_t l_372[7];
                        uint64_t l_373 = 0x0128EC9E13BADAA5L;
                        VECTOR(int16_t, 8) l_374 = (VECTOR(int16_t, 8))(0x6A42L, (VECTOR(int16_t, 4))(0x6A42L, (VECTOR(int16_t, 2))(0x6A42L, (-1L)), (-1L)), (-1L), 0x6A42L, (-1L));
                        uint64_t l_375 = 0UL;
                        VECTOR(int16_t, 16) l_376 = (VECTOR(int16_t, 16))(0x197AL, (VECTOR(int16_t, 4))(0x197AL, (VECTOR(int16_t, 2))(0x197AL, 0x15F6L), 0x15F6L), 0x15F6L, 0x197AL, 0x15F6L, (VECTOR(int16_t, 2))(0x197AL, 0x15F6L), (VECTOR(int16_t, 2))(0x197AL, 0x15F6L), 0x197AL, 0x15F6L, 0x197AL, 0x15F6L);
                        int64_t l_377 = 0x3F6B1128E73CFC83L;
                        uint8_t l_378 = 0x2DL;
                        int32_t l_379 = 0x6206D4DFL;
                        VECTOR(int16_t, 16) l_380 = (VECTOR(int16_t, 16))(0x29CEL, (VECTOR(int16_t, 4))(0x29CEL, (VECTOR(int16_t, 2))(0x29CEL, 0L), 0L), 0L, 0x29CEL, 0L, (VECTOR(int16_t, 2))(0x29CEL, 0L), (VECTOR(int16_t, 2))(0x29CEL, 0L), 0x29CEL, 0L, 0x29CEL, 0L);
                        VECTOR(uint8_t, 2) l_381 = (VECTOR(uint8_t, 2))(1UL, 4UL);
                        VECTOR(int16_t, 16) l_382 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x230AL), 0x230AL), 0x230AL, 0L, 0x230AL, (VECTOR(int16_t, 2))(0L, 0x230AL), (VECTOR(int16_t, 2))(0L, 0x230AL), 0L, 0x230AL, 0L, 0x230AL);
                        int32_t l_383 = 0x60EB751AL;
                        VECTOR(int16_t, 2) l_384 = (VECTOR(int16_t, 2))(1L, 0x3704L);
                        uint32_t l_385 = 0UL;
                        uint16_t l_386 = 0xA482L;
                        uint8_t **l_387 = (void*)0;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_372[i] = 0x72L;
                        l_383 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(0L, l_372[6], (-1L), l_373, 1L, 0x4E060801L, 5L, 9L)).s7135534513635055, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x3BA304D3L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_374.s03)), (l_375 , 0x5ACFL), 6L, 0x0BE3L, ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_376.s79)).xxxxyxxx)).s7514166135515612)))))).lo))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_377, (l_357 = l_378), (l_379 , ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_380.s5912ea7d)))).s0), 0x5B1FL, 0x4E58L, (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_381.xx)).xxxyxyxx)).s1174130733203262)).s2 , (l_361 = ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(l_382.s70))))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_383, l_384.y, 0x3BD7L, 0L, ((VECTOR(int16_t, 2))(0L)), 0x490CL, ((VECTOR(int16_t, 4))(0x48E6L)), ((VECTOR(int16_t, 4))(0x07A4L)), 0x6E15L)).s4, ((VECTOR(int16_t, 4))(0x5A42L)), ((VECTOR(int16_t, 2))(0x11CFL)), 0x1670L)).s66, ((VECTOR(int16_t, 2))(0L))))).hi)), 0x6D06L, 0L, l_385, ((VECTOR(int16_t, 2))(1L)), 3L, l_386, ((VECTOR(int16_t, 2))(0x41C4L)), 0x78B4L)).s41)), 0x2BF1L)).s94ae, ((VECTOR(uint16_t, 4))(0xBF91L))))).even)), 0x58CCD959L)).zzxxxyxz)).s3763761372740151))).s35)).yyyxyxxx)).s7;
                        l_387 = (void*)0;
                    }
                }
            }
            unsigned int result = 0;
            result += l_324;
            atomic_add(&p_1814->l_special_values[61], result);
        }
        else
        { /* block id: 175 */
            (1 + 1);
        }
    }
    for (p_59 = (-26); (p_59 >= 8); p_59 = safe_add_func_int16_t_s_s(p_59, 6))
    { /* block id: 181 */
        uint32_t l_394 = 1UL;
        int32_t *l_395 = &p_1814->g_79[0];
        int32_t **l_405 = &p_1814->g_404;
        int16_t **l_408 = (void*)0;
        int16_t **l_409 = &l_407;
        int16_t *l_412 = &p_1814->g_140;
        int8_t *l_417 = (void*)0;
        int8_t *l_418 = (void*)0;
        int8_t *l_419 = (void*)0;
        uint32_t l_420[9] = {0xFF9F5110L,0UL,0xFF9F5110L,0xFF9F5110L,0UL,0xFF9F5110L,0xFF9F5110L,0UL,0xFF9F5110L};
        VECTOR(uint32_t, 2) l_424 = (VECTOR(uint32_t, 2))(4294967295UL, 4UL);
        uint32_t *l_425 = (void*)0;
        uint32_t *l_426 = (void*)0;
        uint32_t *l_427 = (void*)0;
        uint32_t *l_428 = (void*)0;
        int16_t *l_432 = &p_1814->g_148;
        int i;
        (*p_1814->g_434) = func_62((((((safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_1814->global_0_offset, get_global_id(0), 10), ((*l_432) = (((((*l_395) = l_394) <= (p_1814->g_42.y ^ (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(0x2C20F673L)), ((safe_add_func_int32_t_s_s(0x0AB64B31L, (!((l_405 = p_1814->g_403) != (((((*l_412) = (((VECTOR(int32_t, 4))(l_406.xyyx)).w > ((p_1814->g_410 = ((*l_409) = l_407)) == (l_411 = &p_1814->g_140)))) >= (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((+(l_421 = (l_420[1] = p_60))), ((((safe_sub_func_uint32_t_u_u((p_1814->g_429 = ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 4))(l_424.xxxy)).lo, (uint32_t)p_57))), 0x6A8FB5B8L, 1UL)).w), 0xBC90B6EFL)) , 0UL) < p_1814->g_43.s7) , l_430))), p_59))) && p_1814->g_99) , l_431))))) ^ 0x662171E7L))), (*p_1814->g_252))))) && 5UL) , p_57)))))) <= l_433) || (*l_395)) , l_406.w) , 0x0FC2L), p_59, l_426, p_1814);
    }
    return p_61;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_62(uint16_t  p_63, uint32_t  p_64, int32_t * p_65, struct S0 * p_1814)
{ /* block id: 95 */
    if ((atomic_inc(&p_1814->g_atomic_input[84 * get_linear_group_id() + 19]) == 7))
    { /* block id: 97 */
        VECTOR(int32_t, 4) l_290 = (VECTOR(int32_t, 4))(0x4497394EL, (VECTOR(int32_t, 2))(0x4497394EL, (-1L)), (-1L));
        int32_t l_291 = 0L;
        uint8_t l_292 = 0xEEL;
        int i;
        l_292 ^= (l_291 = ((VECTOR(int32_t, 16))(l_290.zzxzxxzzyyyyzxwy)).s7);
        for (l_290.z = 23; (l_290.z >= 16); --l_290.z)
        { /* block id: 102 */
            uint16_t l_295 = 1UL;
            int32_t l_296 = (-1L);
            int16_t l_297 = 0x7FD6L;
            int32_t l_298 = 0x1C48D3F9L;
            uint32_t l_299 = 0x2B63C7F4L;
            uint16_t l_319 = 65535UL;
            uint64_t l_320 = 0x2DC59FE1D74C6D1DL;
            int16_t **l_321 = (void*)0;
            l_298 |= (l_297 ^= (l_296 ^= (l_295 = (l_291 |= 7L))));
            if (l_299)
            { /* block id: 108 */
                VECTOR(uint32_t, 16) l_300 = (VECTOR(uint32_t, 16))(0x43B0D8F9L, (VECTOR(uint32_t, 4))(0x43B0D8F9L, (VECTOR(uint32_t, 2))(0x43B0D8F9L, 0x192ABE02L), 0x192ABE02L), 0x192ABE02L, 0x43B0D8F9L, 0x192ABE02L, (VECTOR(uint32_t, 2))(0x43B0D8F9L, 0x192ABE02L), (VECTOR(uint32_t, 2))(0x43B0D8F9L, 0x192ABE02L), 0x43B0D8F9L, 0x192ABE02L, 0x43B0D8F9L, 0x192ABE02L);
                int32_t l_302[7] = {0x4CB60AA2L,0x391D493BL,0x4CB60AA2L,0x4CB60AA2L,0x391D493BL,0x4CB60AA2L,0x4CB60AA2L};
                int32_t *l_301 = &l_302[0];
                uint64_t l_303[10][10][2] = {{{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL}},{{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL}},{{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL}},{{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL}},{{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL}},{{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL}},{{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL}},{{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL}},{{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL}},{{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL},{0x4BD69DB07DDA2134L,6UL}}};
                int32_t l_304[4];
                int32_t *l_305 = &l_302[4];
                int32_t *l_306 = &l_302[0];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_304[i] = 0x37075255L;
                l_301 = (((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(l_300.s6262a0cc)).s36, ((VECTOR(uint32_t, 2))(0x31C70529L, 0UL)), ((VECTOR(uint32_t, 2))(0x00466A71L, 0xCCE7E190L))))).yyyxxxxx, ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967287UL, 2UL)).xyyx)).yzyxwywxyzwxyxyz, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(0xF32D9A53L, FAKE_DIVERGE(p_1814->group_1_offset, get_group_id(1), 10), 0xA95B7A0CL, 5UL, 4294967295UL, 4294967290UL, 4294967290UL, 0xBF150C96L)).s5133257576245313))))).even))).s0 , (void*)0);
                l_306 = ((l_303[8][3][1] , l_304[0]) , l_305);
            }
            else
            { /* block id: 111 */
                uint64_t l_307[6][1] = {{0x0E96BCE63F293863L},{0x0E96BCE63F293863L},{0x0E96BCE63F293863L},{0x0E96BCE63F293863L},{0x0E96BCE63F293863L},{0x0E96BCE63F293863L}};
                int i, j;
                l_298 = (-8L);
                if (l_307[5][0])
                { /* block id: 113 */
                    int32_t l_308[6] = {0x1D1CE11DL,0x1D1CE11DL,0x1D1CE11DL,0x1D1CE11DL,0x1D1CE11DL,0x1D1CE11DL};
                    uint16_t l_314 = 0UL;
                    int i;
                    for (l_308[1] = 0; (l_308[1] < (-21)); l_308[1]--)
                    { /* block id: 116 */
                        uint8_t l_311 = 0x97L;
                        l_311++;
                    }
                    l_314--;
                }
                else
                { /* block id: 120 */
                    VECTOR(int32_t, 8) l_317 = (VECTOR(int32_t, 8))(0x76E89C65L, (VECTOR(int32_t, 4))(0x76E89C65L, (VECTOR(int32_t, 2))(0x76E89C65L, (-1L)), (-1L)), (-1L), 0x76E89C65L, (-1L));
                    int32_t l_318 = (-10L);
                    int i;
                    l_318 = ((VECTOR(int32_t, 2))(l_317.s07)).even;
                }
            }
            l_321 = ((l_319 , l_320) , (void*)0);
            l_291 = ((VECTOR(int32_t, 2))(7L, 1L)).odd;
        }
        unsigned int result = 0;
        result += l_290.w;
        result += l_290.z;
        result += l_290.y;
        result += l_290.x;
        result += l_291;
        result += l_292;
        atomic_add(&p_1814->g_special_values[84 * get_linear_group_id() + 19], result);
    }
    else
    { /* block id: 127 */
        (1 + 1);
    }
    return p_65;
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_116 p_1814->g_106 p_1814->g_89 p_1814->g_79 p_1814->g_200 p_1814->g_148 p_1814->g_140 p_1814->g_6 p_1814->g_19 p_1814->g_224 p_1814->g_228 p_1814->g_250 p_1814->g_252 p_1814->g_39 p_1814->g_99 p_1814->g_253 p_1814->g_43 p_1814->g_259 p_1814->g_271 p_1814->g_151
 * writes: p_1814->g_116 p_1814->g_79 p_1814->g_39 p_1814->g_151 p_1814->g_19 p_1814->g_250 p_1814->g_255 p_1814->g_89
 */
int32_t * func_68(int32_t * p_69, int32_t * p_70, int32_t * p_71, uint32_t  p_72, uint32_t  p_73, struct S0 * p_1814)
{ /* block id: 52 */
    int64_t l_166 = 0x2CDD5523DC5B1D96L;
    int32_t *l_167 = &p_1814->g_79[0];
    int32_t *l_168 = (void*)0;
    int32_t *l_169[4] = {&p_1814->g_79[1],&p_1814->g_79[1],&p_1814->g_79[1],&p_1814->g_79[1]};
    int8_t l_170[6][3] = {{(-1L),0x0AL,0x0AL},{(-1L),0x0AL,0x0AL},{(-1L),0x0AL,0x0AL},{(-1L),0x0AL,0x0AL},{(-1L),0x0AL,0x0AL},{(-1L),0x0AL,0x0AL}};
    uint64_t l_171 = 18446744073709551615UL;
    uint16_t *l_210 = &p_1814->g_151[0];
    uint8_t l_285 = 0x46L;
    int i, j;
    l_171++;
    for (p_1814->g_116 = 0; (p_1814->g_116 == 37); p_1814->g_116 = safe_add_func_int64_t_s_s(p_1814->g_116, 2))
    { /* block id: 56 */
        uint8_t l_178 = 0x90L;
        uint16_t *l_179 = &p_1814->g_151[6];
        uint64_t l_182 = 9UL;
        uint8_t *l_197 = &l_178;
        VECTOR(int64_t, 16) l_201 = (VECTOR(int64_t, 16))(0x30F57F58CE94D726L, (VECTOR(int64_t, 4))(0x30F57F58CE94D726L, (VECTOR(int64_t, 2))(0x30F57F58CE94D726L, 0L), 0L), 0L, 0x30F57F58CE94D726L, 0L, (VECTOR(int64_t, 2))(0x30F57F58CE94D726L, 0L), (VECTOR(int64_t, 2))(0x30F57F58CE94D726L, 0L), 0x30F57F58CE94D726L, 0L, 0x30F57F58CE94D726L, 0L);
        VECTOR(int16_t, 4) l_202 = (VECTOR(int16_t, 4))(0x5EE9L, (VECTOR(int16_t, 2))(0x5EE9L, 0x6567L), 0x6567L);
        int32_t *l_207 = &p_1814->g_79[1];
        int64_t *l_208[10][10] = {{&l_166,&l_166,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_166,(void*)0,(void*)0},{&l_166,&l_166,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_166,(void*)0,(void*)0},{&l_166,&l_166,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_166,(void*)0,(void*)0},{&l_166,&l_166,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_166,(void*)0,(void*)0},{&l_166,&l_166,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_166,(void*)0,(void*)0},{&l_166,&l_166,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_166,(void*)0,(void*)0},{&l_166,&l_166,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_166,(void*)0,(void*)0},{&l_166,&l_166,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_166,(void*)0,(void*)0},{&l_166,&l_166,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_166,(void*)0,(void*)0},{&l_166,&l_166,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_166,(void*)0,(void*)0}};
        int32_t l_209 = 0x0B171818L;
        int32_t l_211 = 0x230C5E8CL;
        VECTOR(int8_t, 4) l_225 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x79L), 0x79L);
        VECTOR(int64_t, 2) l_230 = (VECTOR(int64_t, 2))((-1L), 0L);
        VECTOR(int32_t, 4) l_258 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 2L), 2L);
        uint16_t l_281 = 0xD1B1L;
        int i, j;
        if ((*p_1814->g_106))
            break;
        (*l_167) |= (safe_rshift_func_int16_t_s_s((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))((((((VECTOR(uint8_t, 2))(255UL, 255UL)).odd & (l_178 , (&p_1814->g_151[6] != l_179))) , (0L != (l_182 > ((!(l_178 > 8UL)) < p_72)))) , (safe_div_func_int64_t_s_s(p_72, 0x7253EEF999C13443L))), ((VECTOR(uint64_t, 8))(0xD39C3C4A1115CFEDL)), 0x1725C1C1F29E83EFL, GROUP_DIVERGE(1, 1), ((VECTOR(uint64_t, 2))(0x3D103FD7DE96F44FL)), 18446744073709551608UL, 0x76658A4AC17C9C8EL, 18446744073709551613UL)).s8cbd)).y <= p_73), p_73));
        if ((l_211 &= (safe_add_func_uint16_t_u_u(((*l_210) = ((-10L) >= ((safe_mod_func_int64_t_s_s(((*p_1814->g_106) | (l_179 == ((safe_mul_func_int16_t_s_s((0x0C6E62EBL & (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(FAKE_DIVERGE(p_1814->group_1_offset, get_group_id(1), 10), GROUP_DIVERGE(1, 1))), ((*l_197)--)))), ((-1L) && ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(p_1814->g_200.s12625622)).s52, ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(l_201.sba44a9b6d24c9dfc)).sbd, ((VECTOR(int64_t, 2))((-9L), 5L)))))))), ((*l_167) = (p_1814->g_39.s4 = (l_209 ^= ((((FAKE_DIVERGE(p_1814->global_1_offset, get_global_id(1), 10) && ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_202.wwyz)).hi)).xyyy)).y) <= (((-3L) || ((((((((2L < (safe_add_func_int64_t_s_s((p_72 || (l_207 != p_70)), (*l_167)))) , (*l_207)) , 0UL) , (-1L)) >= p_1814->g_148) & (*l_207)) ^ (*l_207)) != 0x0AF96AB8CA2FDA58L)) && p_1814->g_140)) >= p_73) ^ 255UL)))), 9L, 0L, (-1L), 0x24ACF00737D8D9BFL, (*l_207), (*l_207), p_72, ((VECTOR(int64_t, 4))((-6L))), 0x1627F55DE8ABE574L, (-10L))).s3))) , l_210))), p_1814->g_6.z)) && p_72))), p_72))))
        { /* block id: 65 */
            int16_t l_256 = 5L;
            for (p_1814->g_19 = (-8); (p_1814->g_19 < (-4)); p_1814->g_19 = safe_add_func_uint8_t_u_u(p_1814->g_19, 3))
            { /* block id: 68 */
                VECTOR(int8_t, 8) l_226 = (VECTOR(int8_t, 8))(0x21L, (VECTOR(int8_t, 4))(0x21L, (VECTOR(int8_t, 2))(0x21L, 0x5DL), 0x5DL), 0x5DL, 0x21L, 0x5DL);
                VECTOR(int8_t, 16) l_227 = (VECTOR(int8_t, 16))(0x25L, (VECTOR(int8_t, 4))(0x25L, (VECTOR(int8_t, 2))(0x25L, (-9L)), (-9L)), (-9L), 0x25L, (-9L), (VECTOR(int8_t, 2))(0x25L, (-9L)), (VECTOR(int8_t, 2))(0x25L, (-9L)), 0x25L, (-9L), 0x25L, (-9L));
                VECTOR(int8_t, 4) l_229 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x13L), 0x13L);
                uint8_t *l_239 = &l_178;
                uint8_t **l_251 = &p_1814->g_250;
                int32_t *l_254 = &p_1814->g_255;
                int32_t l_257 = 0x5E957BF9L;
                int i;
                l_257 ^= (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x55L, 0x5EL)))), 0x20L, 0x1FL)).hi, ((VECTOR(int8_t, 16))((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int64_t_s_s(((((safe_mul_func_uint8_t_u_u(((((GROUP_DIVERGE(2, 1) != (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(p_1814->g_224.s5075665510774323)).s45, ((VECTOR(int8_t, 8))(l_225.wyyzwxzy)).s51, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_226.s4036643267113024)).s4d35)).xyzzzwzxwxyxzwyx, ((VECTOR(int8_t, 2))(l_227.s51)).yxyxyyxyxxxyxyyx))).s379c, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(p_1814->g_228.wyyzxzyyzyywyyyw)), ((VECTOR(int8_t, 8))(l_229.zwyzyxzz)).s6366672246260350, ((VECTOR(int8_t, 2))((-5L), 0x00L)).xyxyyxyyxyyxyyyy))))).lo)).s65)).yxxx)))))).odd))).lo, ((*l_207) , ((VECTOR(int8_t, 2))((-5L), (-3L))).lo)))) == ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 16))(1L, ((VECTOR(int64_t, 8))(l_230.xxyxyyxx)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(8L, ((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u(5UL, (safe_lshift_func_int8_t_s_s(((void*)0 == l_239), (safe_sub_func_int16_t_s_s(((((safe_div_func_int32_t_s_s(p_73, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((((safe_sub_func_int32_t_s_s((*l_207), (((*l_254) = (safe_add_func_uint64_t_u_u(2UL, (safe_rshift_func_int16_t_s_s((((*l_251) = p_1814->g_250) != p_1814->g_252), p_73))))) , 0x07992483L))) < 0x52C2L) > 0x073FL) >= FAKE_DIVERGE(p_1814->global_2_offset, get_global_id(2), 10)), 0x279F36ABL, ((VECTOR(int32_t, 4))((-1L))), p_73, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))((-3L))), 0x005B4BBCL)).s8, (-10L), 0x198EA67BL, 0x66C186E4L)).xzxyywwwxxxzwxwx)).s3)) , p_73) ^ p_1814->g_39.s2) != p_72), (-1L))))))), p_72)), 0x60L)) > FAKE_DIVERGE(p_1814->global_1_offset, get_global_id(1), 10)), 0L, ((VECTOR(int64_t, 8))(0x45C7441C2B145ED0L)), ((VECTOR(int64_t, 4))((-3L))), (-1L))).s088f)), l_229.x, 0x7ABDB37D4CBDD056L, 1L)).odd, ((VECTOR(int64_t, 8))(4L)), ((VECTOR(int64_t, 8))(1L))))).s21)).lo , p_72) < p_1814->g_79[1])) || (-1L)) == 0x3771L), p_1814->g_99)) <= 0x393790DA8EE133C4L) >= l_256) != (*l_207)), p_73)) >= (*l_207)), p_72)), (-5L), ((VECTOR(int8_t, 2))(0x3DL)), p_73, p_1814->g_253, 0x30L, 1L, 0x59L, ((VECTOR(int8_t, 2))(0L)), l_256, (-1L), p_72, 1L, 5L)).se1))).xyxyxxyx, (int8_t)p_1814->g_43.s7))).s71)).even, l_256));
                (*l_167) = ((VECTOR(int32_t, 4))(l_258.wwzy)).z;
                return p_69;
            }
        }
        else
        { /* block id: 75 */
            int8_t *l_260 = &l_170[0][2];
            int8_t *l_261 = (void*)0;
            int8_t *l_262 = (void*)0;
            int8_t *l_263 = (void*)0;
            int32_t l_264 = (-8L);
            int32_t l_265 = (-10L);
            VECTOR(int32_t, 8) l_268 = (VECTOR(int32_t, 8))(0x31376937L, (VECTOR(int32_t, 4))(0x31376937L, (VECTOR(int32_t, 2))(0x31376937L, (-6L)), (-6L)), (-6L), 0x31376937L, (-6L));
            VECTOR(int32_t, 4) l_272 = (VECTOR(int32_t, 4))(0x07703AF5L, (VECTOR(int32_t, 2))(0x07703AF5L, (-1L)), (-1L));
            int i;
            (*p_1814->g_106) = ((l_264 = ((*l_260) = ((void*)0 != p_1814->g_259))) ^ l_265);
            for (p_73 = 0; (p_73 >= 54); p_73 = safe_add_func_int64_t_s_s(p_73, 4))
            { /* block id: 81 */
                VECTOR(int32_t, 16) l_269 = (VECTOR(int32_t, 16))(0x17EABBAEL, (VECTOR(int32_t, 4))(0x17EABBAEL, (VECTOR(int32_t, 2))(0x17EABBAEL, 3L), 3L), 3L, 0x17EABBAEL, 3L, (VECTOR(int32_t, 2))(0x17EABBAEL, 3L), (VECTOR(int32_t, 2))(0x17EABBAEL, 3L), 0x17EABBAEL, 3L, 0x17EABBAEL, 3L);
                VECTOR(int32_t, 4) l_270 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-10L)), (-10L));
                uint64_t *l_284 = &l_171;
                int i;
                (*l_167) = (l_285 &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_268.s46725613)).s26)).xxyyyxxy, ((VECTOR(int32_t, 8))(l_269.s8690e24a))))).hi)).wyzyxzwy)).s24, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_270.zzyyxxzxwzwwyxzz)).lo)).s55, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))((-1L), 0x445ABC60L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x4F5C3F5AL, 1L)).yxyxyxxx)).s00, ((VECTOR(int32_t, 8))(p_1814->g_271.s14165326)).s70))).xyyyxxyy, ((VECTOR(int32_t, 8))(l_272.wyxyyyyw)), ((VECTOR(int32_t, 16))(0x572EFC17L, (((safe_sub_func_uint64_t_u_u(((*l_284) = (safe_div_func_int8_t_s_s(((((safe_div_func_uint16_t_u_u((~(((void*)0 == &p_1814->g_19) , p_73)), p_1814->g_89[4][3][1])) | (l_270.z = p_72)) <= ((((*l_179) ^= (safe_mul_func_int8_t_s_s(((*l_260) = (l_281 > (safe_mul_func_uint16_t_u_u(l_272.z, (((8L != l_268.s5) != 0x58L) != p_72))))), 0x2CL))) , l_272.z) , (-3L))) , 0x62L), FAKE_DIVERGE(p_1814->global_2_offset, get_global_id(2), 10)))), 18446744073709551615UL)) < (*l_207)) || p_1814->g_271.s2), p_72, 0x1589AFB4L, ((VECTOR(int32_t, 8))(1L)), 0L, p_73, 0x7FE03B3AL, 1L)).odd))), ((VECTOR(int32_t, 8))(0x05B8D4C3L))))).s0321465066743460, ((VECTOR(int32_t, 16))(0x5D83B722L))))).s4f))))), ((VECTOR(int32_t, 2))(0x0B69752EL))))).xxyy, ((VECTOR(int32_t, 4))(6L))))).yzwyxxwy)).s5);
            }
            return l_207;
        }
    }
    l_169[1] = l_168;
    return &p_1814->g_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_19 p_1814->g_79 p_1814->g_14 p_1814->g_105 p_1814->g_106 p_1814->g_89 p_1814->g_46 p_1814->g_6 p_1814->g_93 p_1814->g_151 p_1814->g_43 p_1814->g_39 p_1814->g_155 p_1814->g_140
 * writes: p_1814->g_79 p_1814->g_19 p_1814->g_96 p_1814->g_99 p_1814->g_106 p_1814->g_89 p_1814->g_116 p_1814->g_140 p_1814->g_151 p_1814->g_156
 */
uint32_t  func_75(int32_t * p_76, struct S0 * p_1814)
{ /* block id: 9 */
    int32_t *l_77[8] = {&p_1814->g_19,&p_1814->g_19,&p_1814->g_19,&p_1814->g_19,&p_1814->g_19,&p_1814->g_19,&p_1814->g_19,&p_1814->g_19};
    int32_t *l_78 = &p_1814->g_79[1];
    VECTOR(uint32_t, 8) l_122 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
    VECTOR(int16_t, 2) l_158 = (VECTOR(int16_t, 2))(0x79ADL, 0L);
    VECTOR(int16_t, 4) l_159 = (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x29B7L), 0x29B7L);
    int i;
    if (((l_77[2] != (void*)0) , ((*l_78) = (+(-10L)))))
    { /* block id: 11 */
        uint32_t l_84 = 1UL;
        for (p_1814->g_19 = 0; (p_1814->g_19 <= (-25)); --p_1814->g_19)
        { /* block id: 14 */
            p_1814->g_79[0] = (*l_78);
        }
        for (p_1814->g_19 = 6; (p_1814->g_19 >= (-19)); p_1814->g_19--)
        { /* block id: 19 */
            return p_1814->g_14.s1;
        }
        (*l_78) |= l_84;
        return (*l_78);
    }
    else
    { /* block id: 24 */
        int16_t l_112 = (-7L);
        VECTOR(uint32_t, 4) l_123 = (VECTOR(uint32_t, 4))(0x493B66AFL, (VECTOR(uint32_t, 2))(0x493B66AFL, 4294967292UL), 4294967292UL);
        VECTOR(int32_t, 2) l_157 = (VECTOR(int32_t, 2))(0x475D9A96L, 0x21140AC0L);
        uint16_t *l_164 = &p_1814->g_151[4];
        int i;
        for (p_1814->g_19 = 19; (p_1814->g_19 == (-6)); --p_1814->g_19)
        { /* block id: 27 */
            uint32_t *l_115 = &p_1814->g_116;
            int32_t l_132 = 0x47468A15L;
            VECTOR(int8_t, 16) l_137 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x7FL), 0x7FL), 0x7FL, 1L, 0x7FL, (VECTOR(int8_t, 2))(1L, 0x7FL), (VECTOR(int8_t, 2))(1L, 0x7FL), 1L, 0x7FL, 1L, 0x7FL);
            int16_t *l_138 = &l_112;
            int16_t *l_139 = &p_1814->g_140;
            int32_t **l_143 = &l_78;
            uint16_t *l_149 = (void*)0;
            uint16_t *l_150 = &p_1814->g_151[0];
            uint32_t l_154[1][6][4];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_154[i][j][k] = 1UL;
                }
            }
            for (p_1814->g_96 = (-14); (p_1814->g_96 == 8); ++p_1814->g_96)
            { /* block id: 30 */
                VECTOR(int32_t, 4) l_109 = (VECTOR(int32_t, 4))(0x342B15ACL, (VECTOR(int32_t, 2))(0x342B15ACL, 0x7D18C202L), 0x7D18C202L);
                int i;
                for (p_1814->g_99 = 0; (p_1814->g_99 <= 13); p_1814->g_99 = safe_add_func_int8_t_s_s(p_1814->g_99, 9))
                { /* block id: 33 */
                    volatile int32_t **l_102 = (void*)0;
                    (*p_1814->g_105) = (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x4633L, 1L)))).odd , &p_1814->g_89[0][1][0]);
                }
                (*p_1814->g_106) ^= ((VECTOR(int32_t, 8))(8L, ((*l_78) , (safe_lshift_func_int16_t_s_s(0x72D5L, 9))), 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_109.xw)))), 0x590A9178L, 0x56C54523L, 0x2F2EBD03L)).s0;
            }
            (*p_1814->g_106) = (safe_sub_func_int8_t_s_s(((l_112 = (((-10L) && 0x189475B2L) | ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((-1L), 0x5CL, ((VECTOR(int8_t, 2))(0x43L, 0x13L)), ((void*)0 != &p_1814->g_19), 0x09L, (-4L), 0x6CL)).s1244755361063506)))).s7)) , (safe_mul_func_int8_t_s_s(((((((*l_115) = FAKE_DIVERGE(p_1814->group_1_offset, get_group_id(1), 10)) , FAKE_DIVERGE(p_1814->local_0_offset, get_local_id(0), 10)) != (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((&p_1814->g_19 != &p_1814->g_19) == (((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_1814->g_121.yyxy)).hi)))), 1UL, 1UL)), ((VECTOR(uint32_t, 4))(l_122.s4015)), ((VECTOR(uint32_t, 16))(l_123.ywwxywywwzxxxzyw)).s170a))).zxyyyzww))).s3 , (FAKE_DIVERGE(p_1814->global_0_offset, get_global_id(0), 10) > p_1814->g_46.s0))), 2)), (safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_1814->local_2_offset, get_local_id(2), 10), ((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((0x5E82L >= FAKE_DIVERGE(p_1814->local_1_offset, get_local_id(1), 10)), (safe_sub_func_uint16_t_u_u((((((0x32A6L || l_112) == l_112) < l_132) <= 2UL) ^ l_132), l_132)))), 0x58BCL)) ^ (*l_78))))))) < 0x36DCCDC5626D82A5L) == p_1814->g_6.z), 0x67L))), 0x79L));
            if (l_132)
                break;
            (*p_1814->g_155) = ((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((((*l_78) || (l_123.w | ((((((~(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_137.sb87322d81c2d92c0)))).sd , ((((*l_139) = ((*l_138) = (*l_78))) || (safe_mul_func_uint8_t_u_u((((((*l_143) = p_76) == p_76) ^ (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(0L, 0x4AF2DFD280BCC4B3L)).odd, 18446744073709551610UL))) , (GROUP_DIVERGE(1, 1) > (safe_mul_func_int8_t_s_s(((((*l_78) > p_1814->g_93) == ((*l_150)++)) ^ (-1L)), l_123.w)))), p_1814->g_14.s0))) | l_154[0][0][1]))) , 0x03E0E501L) , (**l_143)) , 0L) == p_1814->g_43.s6) != p_1814->g_79[1]))) || 0L) | p_1814->g_43.s2), p_1814->g_39.s6)), l_122.s0)) , l_78);
        }
        (*p_1814->g_106) = ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(l_157.yx)), (int32_t)(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(l_158.xyxyyxyx)).hi, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_159.zy)), (-1L), 1L))))).x < ((*l_164) = (safe_div_func_uint16_t_u_u(((*l_78) != (&p_1814->g_116 != p_76)), (safe_mul_func_int16_t_s_s(p_1814->g_140, ((void*)0 == l_164))))))), (int32_t)(-6L)))).lo;
    }
    return (*l_78);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[84];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 84; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[84];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 84; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[41];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 41; i++)
            l_comm_values[i] = 1;
    struct S0 c_1815;
    struct S0* p_1814 = &c_1815;
    struct S0 c_1816 = {
        (VECTOR(uint8_t, 4))(0x38L, (VECTOR(uint8_t, 2))(0x38L, 0x1BL), 0x1BL), // p_1814->g_6
        (VECTOR(uint64_t, 8))(0x228D5FEAF86F25DBL, (VECTOR(uint64_t, 4))(0x228D5FEAF86F25DBL, (VECTOR(uint64_t, 2))(0x228D5FEAF86F25DBL, 0UL), 0UL), 0UL, 0x228D5FEAF86F25DBL, 0UL), // p_1814->g_14
        0x25D732ADL, // p_1814->g_19
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 8L), 8L), 8L, (-1L), 8L), // p_1814->g_39
        (VECTOR(int64_t, 4))(0x7B6F8A3E09E13A3AL, (VECTOR(int64_t, 2))(0x7B6F8A3E09E13A3AL, 1L), 1L), // p_1814->g_42
        (VECTOR(int64_t, 8))(0x385637EAC691C6C8L, (VECTOR(int64_t, 4))(0x385637EAC691C6C8L, (VECTOR(int64_t, 2))(0x385637EAC691C6C8L, (-1L)), (-1L)), (-1L), 0x385637EAC691C6C8L, (-1L)), // p_1814->g_43
        (VECTOR(int64_t, 4))(0x0FEFE6B3E962DA72L, (VECTOR(int64_t, 2))(0x0FEFE6B3E962DA72L, (-10L)), (-10L)), // p_1814->g_44
        (VECTOR(int64_t, 8))(0x7236C342871EB1C2L, (VECTOR(int64_t, 4))(0x7236C342871EB1C2L, (VECTOR(int64_t, 2))(0x7236C342871EB1C2L, 0L), 0L), 0L, 0x7236C342871EB1C2L, 0L), // p_1814->g_45
        (VECTOR(int64_t, 16))(0x15EEC0DB1B79375EL, (VECTOR(int64_t, 4))(0x15EEC0DB1B79375EL, (VECTOR(int64_t, 2))(0x15EEC0DB1B79375EL, 1L), 1L), 1L, 0x15EEC0DB1B79375EL, 1L, (VECTOR(int64_t, 2))(0x15EEC0DB1B79375EL, 1L), (VECTOR(int64_t, 2))(0x15EEC0DB1B79375EL, 1L), 0x15EEC0DB1B79375EL, 1L, 0x15EEC0DB1B79375EL, 1L), // p_1814->g_46
        {4L,4L}, // p_1814->g_79
        0x09B0255DL, // p_1814->g_87
        (-6L), // p_1814->g_88
        {{{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L}},{{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L}},{{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L}},{{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L}},{{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L}},{{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L}},{{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L}},{{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L},{(-1L),(-1L),0L}}}, // p_1814->g_89
        0x4BD0D1FCL, // p_1814->g_90
        0x74C20F6EL, // p_1814->g_91
        (VECTOR(int32_t, 2))(0x29D2F475L, 0x5516B95FL), // p_1814->g_92
        (-3L), // p_1814->g_93
        (-1L), // p_1814->g_94
        0x281BCF51L, // p_1814->g_95
        0L, // p_1814->g_96
        0L, // p_1814->g_99
        (void*)0, // p_1814->g_103
        (void*)0, // p_1814->g_104
        &p_1814->g_89[1][0][0], // p_1814->g_106
        &p_1814->g_106, // p_1814->g_105
        4294967295UL, // p_1814->g_116
        (VECTOR(uint32_t, 2))(0x888E0995L, 0UL), // p_1814->g_121
        0x6A3AL, // p_1814->g_140
        (-2L), // p_1814->g_148
        {0x79D8L,0x79D8L,0x79D8L,0x79D8L,0x79D8L,0x79D8L,0x79D8L,0x79D8L,0x79D8L}, // p_1814->g_151
        (void*)0, // p_1814->g_156
        &p_1814->g_156, // p_1814->g_155
        (VECTOR(int64_t, 8))((-7L), (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 5L), 5L), 5L, (-7L), 5L), // p_1814->g_200
        (VECTOR(int8_t, 8))(0x34L, (VECTOR(int8_t, 4))(0x34L, (VECTOR(int8_t, 2))(0x34L, 0x2CL), 0x2CL), 0x2CL, 0x34L, 0x2CL), // p_1814->g_224
        (VECTOR(int8_t, 4))(0x13L, (VECTOR(int8_t, 2))(0x13L, 3L), 3L), // p_1814->g_228
        (void*)0, // p_1814->g_250
        0xAAL, // p_1814->g_253
        &p_1814->g_253, // p_1814->g_252
        0x0EBAFAAAL, // p_1814->g_255
        (void*)0, // p_1814->g_259
        (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0L), 0L), 0L, (-6L), 0L), // p_1814->g_271
        (void*)0, // p_1814->g_286
        (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x6EBE0AD6L), 0x6EBE0AD6L), 0x6EBE0AD6L, (-2L), 0x6EBE0AD6L), // p_1814->g_289
        &p_1814->g_19, // p_1814->g_404
        &p_1814->g_404, // p_1814->g_403
        &p_1814->g_140, // p_1814->g_410
        7UL, // p_1814->g_429
        &p_1814->g_156, // p_1814->g_434
        (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 3L), 3L), 3L, 2L, 3L, (VECTOR(int16_t, 2))(2L, 3L), (VECTOR(int16_t, 2))(2L, 3L), 2L, 3L, 2L, 3L), // p_1814->g_441
        (VECTOR(int16_t, 16))(0x0EEEL, (VECTOR(int16_t, 4))(0x0EEEL, (VECTOR(int16_t, 2))(0x0EEEL, 0L), 0L), 0L, 0x0EEEL, 0L, (VECTOR(int16_t, 2))(0x0EEEL, 0L), (VECTOR(int16_t, 2))(0x0EEEL, 0L), 0x0EEEL, 0L, 0x0EEEL, 0L), // p_1814->g_444
        (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x13270EE404CAEC73L), 0x13270EE404CAEC73L), // p_1814->g_445
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_1814->g_468
        (VECTOR(int32_t, 8))(0x5E9A0EBCL, (VECTOR(int32_t, 4))(0x5E9A0EBCL, (VECTOR(int32_t, 2))(0x5E9A0EBCL, 0x1ACD674AL), 0x1ACD674AL), 0x1ACD674AL, 0x5E9A0EBCL, 0x1ACD674AL), // p_1814->g_471
        0UL, // p_1814->g_481
        {&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156}, // p_1814->g_483
        (void*)0, // p_1814->g_486
        0x98E1L, // p_1814->g_510
        0xABC9L, // p_1814->g_511
        (VECTOR(uint8_t, 4))(0x78L, (VECTOR(uint8_t, 2))(0x78L, 250UL), 250UL), // p_1814->g_512
        0x9B366D83C2673E54L, // p_1814->g_542
        &p_1814->g_156, // p_1814->g_548
        &p_1814->g_548, // p_1814->g_547
        0x5105892BL, // p_1814->g_554
        0L, // p_1814->g_555
        0L, // p_1814->g_556
        {4294967295UL}, // p_1814->g_557
        (VECTOR(uint64_t, 16))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 0xCB79A59931891D9AL), 0xCB79A59931891D9AL), 0xCB79A59931891D9AL, 5UL, 0xCB79A59931891D9AL, (VECTOR(uint64_t, 2))(5UL, 0xCB79A59931891D9AL), (VECTOR(uint64_t, 2))(5UL, 0xCB79A59931891D9AL), 5UL, 0xCB79A59931891D9AL, 5UL, 0xCB79A59931891D9AL), // p_1814->g_581
        0x03E6368B1ECFE81EL, // p_1814->g_598
        (VECTOR(uint8_t, 2))(0x78L, 1UL), // p_1814->g_639
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967291UL), 4294967291UL), 4294967291UL, 4294967295UL, 4294967291UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967291UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967291UL), 4294967295UL, 4294967291UL, 4294967295UL, 4294967291UL), // p_1814->g_665
        &p_1814->g_106, // p_1814->g_688
        (VECTOR(int16_t, 8))(0x5103L, (VECTOR(int16_t, 4))(0x5103L, (VECTOR(int16_t, 2))(0x5103L, 0x2891L), 0x2891L), 0x2891L, 0x5103L, 0x2891L), // p_1814->g_759
        (VECTOR(int16_t, 2))(1L, (-1L)), // p_1814->g_771
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x37L), 0x37L), // p_1814->g_772
        &p_1814->g_156, // p_1814->g_865
        (void*)0, // p_1814->g_916
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1814->g_918
        &p_1814->g_918[3][0], // p_1814->g_917
        {&p_1814->g_106,&p_1814->g_106,&p_1814->g_106,&p_1814->g_106,&p_1814->g_106,&p_1814->g_106}, // p_1814->g_952
        {{&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156},{&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156},{&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156},{&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156},{&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156},{&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156,&p_1814->g_156}}, // p_1814->g_968
        &p_1814->g_156, // p_1814->g_969
        (VECTOR(int64_t, 2))((-1L), 0x7E2CE4AF32098349L), // p_1814->g_982
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint64_t, 2))(1UL, 0UL), (VECTOR(uint64_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_1814->g_991
        &p_1814->g_486, // p_1814->g_1013
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-8L)), (-8L)), // p_1814->g_1027
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int8_t, 2))(0L, 1L), (VECTOR(int8_t, 2))(0L, 1L), 0L, 1L, 0L, 1L), // p_1814->g_1060
        (VECTOR(int8_t, 8))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x78L), 0x78L), 0x78L, (-10L), 0x78L), // p_1814->g_1064
        0x04L, // p_1814->g_1068
        (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x6CE0E561L), 0x6CE0E561L), // p_1814->g_1079
        (VECTOR(uint16_t, 16))(0xBE6CL, (VECTOR(uint16_t, 4))(0xBE6CL, (VECTOR(uint16_t, 2))(0xBE6CL, 0x4732L), 0x4732L), 0x4732L, 0xBE6CL, 0x4732L, (VECTOR(uint16_t, 2))(0xBE6CL, 0x4732L), (VECTOR(uint16_t, 2))(0xBE6CL, 0x4732L), 0xBE6CL, 0x4732L, 0xBE6CL, 0x4732L), // p_1814->g_1093
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x2AF3FBE0L), 0x2AF3FBE0L), 0x2AF3FBE0L, 4294967295UL, 0x2AF3FBE0L, (VECTOR(uint32_t, 2))(4294967295UL, 0x2AF3FBE0L), (VECTOR(uint32_t, 2))(4294967295UL, 0x2AF3FBE0L), 4294967295UL, 0x2AF3FBE0L, 4294967295UL, 0x2AF3FBE0L), // p_1814->g_1097
        &p_1814->g_511, // p_1814->g_1112
        &p_1814->g_1112, // p_1814->g_1111
        1L, // p_1814->g_1124
        (VECTOR(uint32_t, 2))(1UL, 1UL), // p_1814->g_1154
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x3BL), 0x3BL), 0x3BL, 1L, 0x3BL, (VECTOR(int8_t, 2))(1L, 0x3BL), (VECTOR(int8_t, 2))(1L, 0x3BL), 1L, 0x3BL, 1L, 0x3BL), // p_1814->g_1161
        (VECTOR(int8_t, 2))(0x1EL, 0x47L), // p_1814->g_1162
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x74L), 0x74L), 0x74L, 0L, 0x74L, (VECTOR(int8_t, 2))(0L, 0x74L), (VECTOR(int8_t, 2))(0L, 0x74L), 0L, 0x74L, 0L, 0x74L), // p_1814->g_1163
        (VECTOR(int16_t, 16))(0x1125L, (VECTOR(int16_t, 4))(0x1125L, (VECTOR(int16_t, 2))(0x1125L, (-6L)), (-6L)), (-6L), 0x1125L, (-6L), (VECTOR(int16_t, 2))(0x1125L, (-6L)), (VECTOR(int16_t, 2))(0x1125L, (-6L)), 0x1125L, (-6L), 0x1125L, (-6L)), // p_1814->g_1206
        (VECTOR(uint64_t, 2))(0xA3D8241BDC09866BL, 6UL), // p_1814->g_1213
        (VECTOR(uint8_t, 16))(0xD7L, (VECTOR(uint8_t, 4))(0xD7L, (VECTOR(uint8_t, 2))(0xD7L, 255UL), 255UL), 255UL, 0xD7L, 255UL, (VECTOR(uint8_t, 2))(0xD7L, 255UL), (VECTOR(uint8_t, 2))(0xD7L, 255UL), 0xD7L, 255UL, 0xD7L, 255UL), // p_1814->g_1224
        0x3EB5L, // p_1814->g_1230
        0x0C2CL, // p_1814->g_1259
        (VECTOR(int32_t, 2))(0x649BD75DL, 0L), // p_1814->g_1290
        &p_1814->g_252, // p_1814->g_1320
        &p_1814->g_1320, // p_1814->g_1319
        &p_1814->g_548, // p_1814->g_1337
        (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L)), // p_1814->g_1340
        (VECTOR(int32_t, 16))(0x14A058D2L, (VECTOR(int32_t, 4))(0x14A058D2L, (VECTOR(int32_t, 2))(0x14A058D2L, 0x6B1344AFL), 0x6B1344AFL), 0x6B1344AFL, 0x14A058D2L, 0x6B1344AFL, (VECTOR(int32_t, 2))(0x14A058D2L, 0x6B1344AFL), (VECTOR(int32_t, 2))(0x14A058D2L, 0x6B1344AFL), 0x14A058D2L, 0x6B1344AFL, 0x14A058D2L, 0x6B1344AFL), // p_1814->g_1341
        8UL, // p_1814->g_1347
        {&p_1814->g_1347,&p_1814->g_1347,&p_1814->g_1347,&p_1814->g_1347,&p_1814->g_1347,&p_1814->g_1347,&p_1814->g_1347,&p_1814->g_1347,&p_1814->g_1347}, // p_1814->g_1346
        &p_1814->g_1346[4], // p_1814->g_1345
        (VECTOR(int64_t, 2))(0x5EF0A2EA043B5B48L, 0x0540572CF7E0E3B0L), // p_1814->g_1354
        (VECTOR(uint32_t, 2))(0x8E0ED8A6L, 0x95A927BFL), // p_1814->g_1365
        (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, 0x2EL), 0x2EL), // p_1814->g_1396
        (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 1L), 1L), // p_1814->g_1419
        (VECTOR(int32_t, 8))(0x63C76F5CL, (VECTOR(int32_t, 4))(0x63C76F5CL, (VECTOR(int32_t, 2))(0x63C76F5CL, 0x011B4105L), 0x011B4105L), 0x011B4105L, 0x63C76F5CL, 0x011B4105L), // p_1814->g_1422
        (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), (-1L)), (-1L)), // p_1814->g_1423
        (VECTOR(int8_t, 16))(0x4AL, (VECTOR(int8_t, 4))(0x4AL, (VECTOR(int8_t, 2))(0x4AL, 0x58L), 0x58L), 0x58L, 0x4AL, 0x58L, (VECTOR(int8_t, 2))(0x4AL, 0x58L), (VECTOR(int8_t, 2))(0x4AL, 0x58L), 0x4AL, 0x58L, 0x4AL, 0x58L), // p_1814->g_1446
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), // p_1814->g_1457
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x65L), 0x65L), 0x65L, (-1L), 0x65L, (VECTOR(int8_t, 2))((-1L), 0x65L), (VECTOR(int8_t, 2))((-1L), 0x65L), (-1L), 0x65L, (-1L), 0x65L), // p_1814->g_1458
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 3UL), 3UL), 3UL, 0UL, 3UL), // p_1814->g_1705
        (VECTOR(uint8_t, 8))(0xF1L, (VECTOR(uint8_t, 4))(0xF1L, (VECTOR(uint8_t, 2))(0xF1L, 0x39L), 0x39L), 0x39L, 0xF1L, 0x39L), // p_1814->g_1714
        &p_1814->g_916, // p_1814->g_1723
        (VECTOR(uint16_t, 8))(0xB240L, (VECTOR(uint16_t, 4))(0xB240L, (VECTOR(uint16_t, 2))(0xB240L, 0UL), 0UL), 0UL, 0xB240L, 0UL), // p_1814->g_1729
        (VECTOR(int8_t, 2))((-10L), 0L), // p_1814->g_1804
        0, // p_1814->v_collective
        sequence_input[get_global_id(0)], // p_1814->global_0_offset
        sequence_input[get_global_id(1)], // p_1814->global_1_offset
        sequence_input[get_global_id(2)], // p_1814->global_2_offset
        sequence_input[get_local_id(0)], // p_1814->local_0_offset
        sequence_input[get_local_id(1)], // p_1814->local_1_offset
        sequence_input[get_local_id(2)], // p_1814->local_2_offset
        sequence_input[get_group_id(0)], // p_1814->group_0_offset
        sequence_input[get_group_id(1)], // p_1814->group_1_offset
        sequence_input[get_group_id(2)], // p_1814->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 41)), permutations[0][get_linear_local_id()])), // p_1814->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1815 = c_1816;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1814);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1814->g_6.x, "p_1814->g_6.x", print_hash_value);
    transparent_crc(p_1814->g_6.y, "p_1814->g_6.y", print_hash_value);
    transparent_crc(p_1814->g_6.z, "p_1814->g_6.z", print_hash_value);
    transparent_crc(p_1814->g_6.w, "p_1814->g_6.w", print_hash_value);
    transparent_crc(p_1814->g_14.s0, "p_1814->g_14.s0", print_hash_value);
    transparent_crc(p_1814->g_14.s1, "p_1814->g_14.s1", print_hash_value);
    transparent_crc(p_1814->g_14.s2, "p_1814->g_14.s2", print_hash_value);
    transparent_crc(p_1814->g_14.s3, "p_1814->g_14.s3", print_hash_value);
    transparent_crc(p_1814->g_14.s4, "p_1814->g_14.s4", print_hash_value);
    transparent_crc(p_1814->g_14.s5, "p_1814->g_14.s5", print_hash_value);
    transparent_crc(p_1814->g_14.s6, "p_1814->g_14.s6", print_hash_value);
    transparent_crc(p_1814->g_14.s7, "p_1814->g_14.s7", print_hash_value);
    transparent_crc(p_1814->g_19, "p_1814->g_19", print_hash_value);
    transparent_crc(p_1814->g_39.s0, "p_1814->g_39.s0", print_hash_value);
    transparent_crc(p_1814->g_39.s1, "p_1814->g_39.s1", print_hash_value);
    transparent_crc(p_1814->g_39.s2, "p_1814->g_39.s2", print_hash_value);
    transparent_crc(p_1814->g_39.s3, "p_1814->g_39.s3", print_hash_value);
    transparent_crc(p_1814->g_39.s4, "p_1814->g_39.s4", print_hash_value);
    transparent_crc(p_1814->g_39.s5, "p_1814->g_39.s5", print_hash_value);
    transparent_crc(p_1814->g_39.s6, "p_1814->g_39.s6", print_hash_value);
    transparent_crc(p_1814->g_39.s7, "p_1814->g_39.s7", print_hash_value);
    transparent_crc(p_1814->g_42.x, "p_1814->g_42.x", print_hash_value);
    transparent_crc(p_1814->g_42.y, "p_1814->g_42.y", print_hash_value);
    transparent_crc(p_1814->g_42.z, "p_1814->g_42.z", print_hash_value);
    transparent_crc(p_1814->g_42.w, "p_1814->g_42.w", print_hash_value);
    transparent_crc(p_1814->g_43.s0, "p_1814->g_43.s0", print_hash_value);
    transparent_crc(p_1814->g_43.s1, "p_1814->g_43.s1", print_hash_value);
    transparent_crc(p_1814->g_43.s2, "p_1814->g_43.s2", print_hash_value);
    transparent_crc(p_1814->g_43.s3, "p_1814->g_43.s3", print_hash_value);
    transparent_crc(p_1814->g_43.s4, "p_1814->g_43.s4", print_hash_value);
    transparent_crc(p_1814->g_43.s5, "p_1814->g_43.s5", print_hash_value);
    transparent_crc(p_1814->g_43.s6, "p_1814->g_43.s6", print_hash_value);
    transparent_crc(p_1814->g_43.s7, "p_1814->g_43.s7", print_hash_value);
    transparent_crc(p_1814->g_44.x, "p_1814->g_44.x", print_hash_value);
    transparent_crc(p_1814->g_44.y, "p_1814->g_44.y", print_hash_value);
    transparent_crc(p_1814->g_44.z, "p_1814->g_44.z", print_hash_value);
    transparent_crc(p_1814->g_44.w, "p_1814->g_44.w", print_hash_value);
    transparent_crc(p_1814->g_45.s0, "p_1814->g_45.s0", print_hash_value);
    transparent_crc(p_1814->g_45.s1, "p_1814->g_45.s1", print_hash_value);
    transparent_crc(p_1814->g_45.s2, "p_1814->g_45.s2", print_hash_value);
    transparent_crc(p_1814->g_45.s3, "p_1814->g_45.s3", print_hash_value);
    transparent_crc(p_1814->g_45.s4, "p_1814->g_45.s4", print_hash_value);
    transparent_crc(p_1814->g_45.s5, "p_1814->g_45.s5", print_hash_value);
    transparent_crc(p_1814->g_45.s6, "p_1814->g_45.s6", print_hash_value);
    transparent_crc(p_1814->g_45.s7, "p_1814->g_45.s7", print_hash_value);
    transparent_crc(p_1814->g_46.s0, "p_1814->g_46.s0", print_hash_value);
    transparent_crc(p_1814->g_46.s1, "p_1814->g_46.s1", print_hash_value);
    transparent_crc(p_1814->g_46.s2, "p_1814->g_46.s2", print_hash_value);
    transparent_crc(p_1814->g_46.s3, "p_1814->g_46.s3", print_hash_value);
    transparent_crc(p_1814->g_46.s4, "p_1814->g_46.s4", print_hash_value);
    transparent_crc(p_1814->g_46.s5, "p_1814->g_46.s5", print_hash_value);
    transparent_crc(p_1814->g_46.s6, "p_1814->g_46.s6", print_hash_value);
    transparent_crc(p_1814->g_46.s7, "p_1814->g_46.s7", print_hash_value);
    transparent_crc(p_1814->g_46.s8, "p_1814->g_46.s8", print_hash_value);
    transparent_crc(p_1814->g_46.s9, "p_1814->g_46.s9", print_hash_value);
    transparent_crc(p_1814->g_46.sa, "p_1814->g_46.sa", print_hash_value);
    transparent_crc(p_1814->g_46.sb, "p_1814->g_46.sb", print_hash_value);
    transparent_crc(p_1814->g_46.sc, "p_1814->g_46.sc", print_hash_value);
    transparent_crc(p_1814->g_46.sd, "p_1814->g_46.sd", print_hash_value);
    transparent_crc(p_1814->g_46.se, "p_1814->g_46.se", print_hash_value);
    transparent_crc(p_1814->g_46.sf, "p_1814->g_46.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1814->g_79[i], "p_1814->g_79[i]", print_hash_value);

    }
    transparent_crc(p_1814->g_87, "p_1814->g_87", print_hash_value);
    transparent_crc(p_1814->g_88, "p_1814->g_88", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1814->g_89[i][j][k], "p_1814->g_89[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1814->g_90, "p_1814->g_90", print_hash_value);
    transparent_crc(p_1814->g_91, "p_1814->g_91", print_hash_value);
    transparent_crc(p_1814->g_92.x, "p_1814->g_92.x", print_hash_value);
    transparent_crc(p_1814->g_92.y, "p_1814->g_92.y", print_hash_value);
    transparent_crc(p_1814->g_93, "p_1814->g_93", print_hash_value);
    transparent_crc(p_1814->g_94, "p_1814->g_94", print_hash_value);
    transparent_crc(p_1814->g_95, "p_1814->g_95", print_hash_value);
    transparent_crc(p_1814->g_96, "p_1814->g_96", print_hash_value);
    transparent_crc(p_1814->g_99, "p_1814->g_99", print_hash_value);
    transparent_crc(p_1814->g_116, "p_1814->g_116", print_hash_value);
    transparent_crc(p_1814->g_121.x, "p_1814->g_121.x", print_hash_value);
    transparent_crc(p_1814->g_121.y, "p_1814->g_121.y", print_hash_value);
    transparent_crc(p_1814->g_140, "p_1814->g_140", print_hash_value);
    transparent_crc(p_1814->g_148, "p_1814->g_148", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1814->g_151[i], "p_1814->g_151[i]", print_hash_value);

    }
    transparent_crc(p_1814->g_200.s0, "p_1814->g_200.s0", print_hash_value);
    transparent_crc(p_1814->g_200.s1, "p_1814->g_200.s1", print_hash_value);
    transparent_crc(p_1814->g_200.s2, "p_1814->g_200.s2", print_hash_value);
    transparent_crc(p_1814->g_200.s3, "p_1814->g_200.s3", print_hash_value);
    transparent_crc(p_1814->g_200.s4, "p_1814->g_200.s4", print_hash_value);
    transparent_crc(p_1814->g_200.s5, "p_1814->g_200.s5", print_hash_value);
    transparent_crc(p_1814->g_200.s6, "p_1814->g_200.s6", print_hash_value);
    transparent_crc(p_1814->g_200.s7, "p_1814->g_200.s7", print_hash_value);
    transparent_crc(p_1814->g_224.s0, "p_1814->g_224.s0", print_hash_value);
    transparent_crc(p_1814->g_224.s1, "p_1814->g_224.s1", print_hash_value);
    transparent_crc(p_1814->g_224.s2, "p_1814->g_224.s2", print_hash_value);
    transparent_crc(p_1814->g_224.s3, "p_1814->g_224.s3", print_hash_value);
    transparent_crc(p_1814->g_224.s4, "p_1814->g_224.s4", print_hash_value);
    transparent_crc(p_1814->g_224.s5, "p_1814->g_224.s5", print_hash_value);
    transparent_crc(p_1814->g_224.s6, "p_1814->g_224.s6", print_hash_value);
    transparent_crc(p_1814->g_224.s7, "p_1814->g_224.s7", print_hash_value);
    transparent_crc(p_1814->g_228.x, "p_1814->g_228.x", print_hash_value);
    transparent_crc(p_1814->g_228.y, "p_1814->g_228.y", print_hash_value);
    transparent_crc(p_1814->g_228.z, "p_1814->g_228.z", print_hash_value);
    transparent_crc(p_1814->g_228.w, "p_1814->g_228.w", print_hash_value);
    transparent_crc(p_1814->g_253, "p_1814->g_253", print_hash_value);
    transparent_crc(p_1814->g_255, "p_1814->g_255", print_hash_value);
    transparent_crc(p_1814->g_271.s0, "p_1814->g_271.s0", print_hash_value);
    transparent_crc(p_1814->g_271.s1, "p_1814->g_271.s1", print_hash_value);
    transparent_crc(p_1814->g_271.s2, "p_1814->g_271.s2", print_hash_value);
    transparent_crc(p_1814->g_271.s3, "p_1814->g_271.s3", print_hash_value);
    transparent_crc(p_1814->g_271.s4, "p_1814->g_271.s4", print_hash_value);
    transparent_crc(p_1814->g_271.s5, "p_1814->g_271.s5", print_hash_value);
    transparent_crc(p_1814->g_271.s6, "p_1814->g_271.s6", print_hash_value);
    transparent_crc(p_1814->g_271.s7, "p_1814->g_271.s7", print_hash_value);
    transparent_crc(p_1814->g_289.s0, "p_1814->g_289.s0", print_hash_value);
    transparent_crc(p_1814->g_289.s1, "p_1814->g_289.s1", print_hash_value);
    transparent_crc(p_1814->g_289.s2, "p_1814->g_289.s2", print_hash_value);
    transparent_crc(p_1814->g_289.s3, "p_1814->g_289.s3", print_hash_value);
    transparent_crc(p_1814->g_289.s4, "p_1814->g_289.s4", print_hash_value);
    transparent_crc(p_1814->g_289.s5, "p_1814->g_289.s5", print_hash_value);
    transparent_crc(p_1814->g_289.s6, "p_1814->g_289.s6", print_hash_value);
    transparent_crc(p_1814->g_289.s7, "p_1814->g_289.s7", print_hash_value);
    transparent_crc(p_1814->g_429, "p_1814->g_429", print_hash_value);
    transparent_crc(p_1814->g_441.s0, "p_1814->g_441.s0", print_hash_value);
    transparent_crc(p_1814->g_441.s1, "p_1814->g_441.s1", print_hash_value);
    transparent_crc(p_1814->g_441.s2, "p_1814->g_441.s2", print_hash_value);
    transparent_crc(p_1814->g_441.s3, "p_1814->g_441.s3", print_hash_value);
    transparent_crc(p_1814->g_441.s4, "p_1814->g_441.s4", print_hash_value);
    transparent_crc(p_1814->g_441.s5, "p_1814->g_441.s5", print_hash_value);
    transparent_crc(p_1814->g_441.s6, "p_1814->g_441.s6", print_hash_value);
    transparent_crc(p_1814->g_441.s7, "p_1814->g_441.s7", print_hash_value);
    transparent_crc(p_1814->g_441.s8, "p_1814->g_441.s8", print_hash_value);
    transparent_crc(p_1814->g_441.s9, "p_1814->g_441.s9", print_hash_value);
    transparent_crc(p_1814->g_441.sa, "p_1814->g_441.sa", print_hash_value);
    transparent_crc(p_1814->g_441.sb, "p_1814->g_441.sb", print_hash_value);
    transparent_crc(p_1814->g_441.sc, "p_1814->g_441.sc", print_hash_value);
    transparent_crc(p_1814->g_441.sd, "p_1814->g_441.sd", print_hash_value);
    transparent_crc(p_1814->g_441.se, "p_1814->g_441.se", print_hash_value);
    transparent_crc(p_1814->g_441.sf, "p_1814->g_441.sf", print_hash_value);
    transparent_crc(p_1814->g_444.s0, "p_1814->g_444.s0", print_hash_value);
    transparent_crc(p_1814->g_444.s1, "p_1814->g_444.s1", print_hash_value);
    transparent_crc(p_1814->g_444.s2, "p_1814->g_444.s2", print_hash_value);
    transparent_crc(p_1814->g_444.s3, "p_1814->g_444.s3", print_hash_value);
    transparent_crc(p_1814->g_444.s4, "p_1814->g_444.s4", print_hash_value);
    transparent_crc(p_1814->g_444.s5, "p_1814->g_444.s5", print_hash_value);
    transparent_crc(p_1814->g_444.s6, "p_1814->g_444.s6", print_hash_value);
    transparent_crc(p_1814->g_444.s7, "p_1814->g_444.s7", print_hash_value);
    transparent_crc(p_1814->g_444.s8, "p_1814->g_444.s8", print_hash_value);
    transparent_crc(p_1814->g_444.s9, "p_1814->g_444.s9", print_hash_value);
    transparent_crc(p_1814->g_444.sa, "p_1814->g_444.sa", print_hash_value);
    transparent_crc(p_1814->g_444.sb, "p_1814->g_444.sb", print_hash_value);
    transparent_crc(p_1814->g_444.sc, "p_1814->g_444.sc", print_hash_value);
    transparent_crc(p_1814->g_444.sd, "p_1814->g_444.sd", print_hash_value);
    transparent_crc(p_1814->g_444.se, "p_1814->g_444.se", print_hash_value);
    transparent_crc(p_1814->g_444.sf, "p_1814->g_444.sf", print_hash_value);
    transparent_crc(p_1814->g_445.x, "p_1814->g_445.x", print_hash_value);
    transparent_crc(p_1814->g_445.y, "p_1814->g_445.y", print_hash_value);
    transparent_crc(p_1814->g_445.z, "p_1814->g_445.z", print_hash_value);
    transparent_crc(p_1814->g_445.w, "p_1814->g_445.w", print_hash_value);
    transparent_crc(p_1814->g_468.s0, "p_1814->g_468.s0", print_hash_value);
    transparent_crc(p_1814->g_468.s1, "p_1814->g_468.s1", print_hash_value);
    transparent_crc(p_1814->g_468.s2, "p_1814->g_468.s2", print_hash_value);
    transparent_crc(p_1814->g_468.s3, "p_1814->g_468.s3", print_hash_value);
    transparent_crc(p_1814->g_468.s4, "p_1814->g_468.s4", print_hash_value);
    transparent_crc(p_1814->g_468.s5, "p_1814->g_468.s5", print_hash_value);
    transparent_crc(p_1814->g_468.s6, "p_1814->g_468.s6", print_hash_value);
    transparent_crc(p_1814->g_468.s7, "p_1814->g_468.s7", print_hash_value);
    transparent_crc(p_1814->g_468.s8, "p_1814->g_468.s8", print_hash_value);
    transparent_crc(p_1814->g_468.s9, "p_1814->g_468.s9", print_hash_value);
    transparent_crc(p_1814->g_468.sa, "p_1814->g_468.sa", print_hash_value);
    transparent_crc(p_1814->g_468.sb, "p_1814->g_468.sb", print_hash_value);
    transparent_crc(p_1814->g_468.sc, "p_1814->g_468.sc", print_hash_value);
    transparent_crc(p_1814->g_468.sd, "p_1814->g_468.sd", print_hash_value);
    transparent_crc(p_1814->g_468.se, "p_1814->g_468.se", print_hash_value);
    transparent_crc(p_1814->g_468.sf, "p_1814->g_468.sf", print_hash_value);
    transparent_crc(p_1814->g_471.s0, "p_1814->g_471.s0", print_hash_value);
    transparent_crc(p_1814->g_471.s1, "p_1814->g_471.s1", print_hash_value);
    transparent_crc(p_1814->g_471.s2, "p_1814->g_471.s2", print_hash_value);
    transparent_crc(p_1814->g_471.s3, "p_1814->g_471.s3", print_hash_value);
    transparent_crc(p_1814->g_471.s4, "p_1814->g_471.s4", print_hash_value);
    transparent_crc(p_1814->g_471.s5, "p_1814->g_471.s5", print_hash_value);
    transparent_crc(p_1814->g_471.s6, "p_1814->g_471.s6", print_hash_value);
    transparent_crc(p_1814->g_471.s7, "p_1814->g_471.s7", print_hash_value);
    transparent_crc(p_1814->g_481, "p_1814->g_481", print_hash_value);
    transparent_crc(p_1814->g_510, "p_1814->g_510", print_hash_value);
    transparent_crc(p_1814->g_511, "p_1814->g_511", print_hash_value);
    transparent_crc(p_1814->g_512.x, "p_1814->g_512.x", print_hash_value);
    transparent_crc(p_1814->g_512.y, "p_1814->g_512.y", print_hash_value);
    transparent_crc(p_1814->g_512.z, "p_1814->g_512.z", print_hash_value);
    transparent_crc(p_1814->g_512.w, "p_1814->g_512.w", print_hash_value);
    transparent_crc(p_1814->g_542, "p_1814->g_542", print_hash_value);
    transparent_crc(p_1814->g_554, "p_1814->g_554", print_hash_value);
    transparent_crc(p_1814->g_555, "p_1814->g_555", print_hash_value);
    transparent_crc(p_1814->g_556, "p_1814->g_556", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1814->g_557[i], "p_1814->g_557[i]", print_hash_value);

    }
    transparent_crc(p_1814->g_581.s0, "p_1814->g_581.s0", print_hash_value);
    transparent_crc(p_1814->g_581.s1, "p_1814->g_581.s1", print_hash_value);
    transparent_crc(p_1814->g_581.s2, "p_1814->g_581.s2", print_hash_value);
    transparent_crc(p_1814->g_581.s3, "p_1814->g_581.s3", print_hash_value);
    transparent_crc(p_1814->g_581.s4, "p_1814->g_581.s4", print_hash_value);
    transparent_crc(p_1814->g_581.s5, "p_1814->g_581.s5", print_hash_value);
    transparent_crc(p_1814->g_581.s6, "p_1814->g_581.s6", print_hash_value);
    transparent_crc(p_1814->g_581.s7, "p_1814->g_581.s7", print_hash_value);
    transparent_crc(p_1814->g_581.s8, "p_1814->g_581.s8", print_hash_value);
    transparent_crc(p_1814->g_581.s9, "p_1814->g_581.s9", print_hash_value);
    transparent_crc(p_1814->g_581.sa, "p_1814->g_581.sa", print_hash_value);
    transparent_crc(p_1814->g_581.sb, "p_1814->g_581.sb", print_hash_value);
    transparent_crc(p_1814->g_581.sc, "p_1814->g_581.sc", print_hash_value);
    transparent_crc(p_1814->g_581.sd, "p_1814->g_581.sd", print_hash_value);
    transparent_crc(p_1814->g_581.se, "p_1814->g_581.se", print_hash_value);
    transparent_crc(p_1814->g_581.sf, "p_1814->g_581.sf", print_hash_value);
    transparent_crc(p_1814->g_598, "p_1814->g_598", print_hash_value);
    transparent_crc(p_1814->g_639.x, "p_1814->g_639.x", print_hash_value);
    transparent_crc(p_1814->g_639.y, "p_1814->g_639.y", print_hash_value);
    transparent_crc(p_1814->g_665.s0, "p_1814->g_665.s0", print_hash_value);
    transparent_crc(p_1814->g_665.s1, "p_1814->g_665.s1", print_hash_value);
    transparent_crc(p_1814->g_665.s2, "p_1814->g_665.s2", print_hash_value);
    transparent_crc(p_1814->g_665.s3, "p_1814->g_665.s3", print_hash_value);
    transparent_crc(p_1814->g_665.s4, "p_1814->g_665.s4", print_hash_value);
    transparent_crc(p_1814->g_665.s5, "p_1814->g_665.s5", print_hash_value);
    transparent_crc(p_1814->g_665.s6, "p_1814->g_665.s6", print_hash_value);
    transparent_crc(p_1814->g_665.s7, "p_1814->g_665.s7", print_hash_value);
    transparent_crc(p_1814->g_665.s8, "p_1814->g_665.s8", print_hash_value);
    transparent_crc(p_1814->g_665.s9, "p_1814->g_665.s9", print_hash_value);
    transparent_crc(p_1814->g_665.sa, "p_1814->g_665.sa", print_hash_value);
    transparent_crc(p_1814->g_665.sb, "p_1814->g_665.sb", print_hash_value);
    transparent_crc(p_1814->g_665.sc, "p_1814->g_665.sc", print_hash_value);
    transparent_crc(p_1814->g_665.sd, "p_1814->g_665.sd", print_hash_value);
    transparent_crc(p_1814->g_665.se, "p_1814->g_665.se", print_hash_value);
    transparent_crc(p_1814->g_665.sf, "p_1814->g_665.sf", print_hash_value);
    transparent_crc(p_1814->g_759.s0, "p_1814->g_759.s0", print_hash_value);
    transparent_crc(p_1814->g_759.s1, "p_1814->g_759.s1", print_hash_value);
    transparent_crc(p_1814->g_759.s2, "p_1814->g_759.s2", print_hash_value);
    transparent_crc(p_1814->g_759.s3, "p_1814->g_759.s3", print_hash_value);
    transparent_crc(p_1814->g_759.s4, "p_1814->g_759.s4", print_hash_value);
    transparent_crc(p_1814->g_759.s5, "p_1814->g_759.s5", print_hash_value);
    transparent_crc(p_1814->g_759.s6, "p_1814->g_759.s6", print_hash_value);
    transparent_crc(p_1814->g_759.s7, "p_1814->g_759.s7", print_hash_value);
    transparent_crc(p_1814->g_771.x, "p_1814->g_771.x", print_hash_value);
    transparent_crc(p_1814->g_771.y, "p_1814->g_771.y", print_hash_value);
    transparent_crc(p_1814->g_772.x, "p_1814->g_772.x", print_hash_value);
    transparent_crc(p_1814->g_772.y, "p_1814->g_772.y", print_hash_value);
    transparent_crc(p_1814->g_772.z, "p_1814->g_772.z", print_hash_value);
    transparent_crc(p_1814->g_772.w, "p_1814->g_772.w", print_hash_value);
    transparent_crc(p_1814->g_982.x, "p_1814->g_982.x", print_hash_value);
    transparent_crc(p_1814->g_982.y, "p_1814->g_982.y", print_hash_value);
    transparent_crc(p_1814->g_991.s0, "p_1814->g_991.s0", print_hash_value);
    transparent_crc(p_1814->g_991.s1, "p_1814->g_991.s1", print_hash_value);
    transparent_crc(p_1814->g_991.s2, "p_1814->g_991.s2", print_hash_value);
    transparent_crc(p_1814->g_991.s3, "p_1814->g_991.s3", print_hash_value);
    transparent_crc(p_1814->g_991.s4, "p_1814->g_991.s4", print_hash_value);
    transparent_crc(p_1814->g_991.s5, "p_1814->g_991.s5", print_hash_value);
    transparent_crc(p_1814->g_991.s6, "p_1814->g_991.s6", print_hash_value);
    transparent_crc(p_1814->g_991.s7, "p_1814->g_991.s7", print_hash_value);
    transparent_crc(p_1814->g_991.s8, "p_1814->g_991.s8", print_hash_value);
    transparent_crc(p_1814->g_991.s9, "p_1814->g_991.s9", print_hash_value);
    transparent_crc(p_1814->g_991.sa, "p_1814->g_991.sa", print_hash_value);
    transparent_crc(p_1814->g_991.sb, "p_1814->g_991.sb", print_hash_value);
    transparent_crc(p_1814->g_991.sc, "p_1814->g_991.sc", print_hash_value);
    transparent_crc(p_1814->g_991.sd, "p_1814->g_991.sd", print_hash_value);
    transparent_crc(p_1814->g_991.se, "p_1814->g_991.se", print_hash_value);
    transparent_crc(p_1814->g_991.sf, "p_1814->g_991.sf", print_hash_value);
    transparent_crc(p_1814->g_1027.x, "p_1814->g_1027.x", print_hash_value);
    transparent_crc(p_1814->g_1027.y, "p_1814->g_1027.y", print_hash_value);
    transparent_crc(p_1814->g_1027.z, "p_1814->g_1027.z", print_hash_value);
    transparent_crc(p_1814->g_1027.w, "p_1814->g_1027.w", print_hash_value);
    transparent_crc(p_1814->g_1060.s0, "p_1814->g_1060.s0", print_hash_value);
    transparent_crc(p_1814->g_1060.s1, "p_1814->g_1060.s1", print_hash_value);
    transparent_crc(p_1814->g_1060.s2, "p_1814->g_1060.s2", print_hash_value);
    transparent_crc(p_1814->g_1060.s3, "p_1814->g_1060.s3", print_hash_value);
    transparent_crc(p_1814->g_1060.s4, "p_1814->g_1060.s4", print_hash_value);
    transparent_crc(p_1814->g_1060.s5, "p_1814->g_1060.s5", print_hash_value);
    transparent_crc(p_1814->g_1060.s6, "p_1814->g_1060.s6", print_hash_value);
    transparent_crc(p_1814->g_1060.s7, "p_1814->g_1060.s7", print_hash_value);
    transparent_crc(p_1814->g_1060.s8, "p_1814->g_1060.s8", print_hash_value);
    transparent_crc(p_1814->g_1060.s9, "p_1814->g_1060.s9", print_hash_value);
    transparent_crc(p_1814->g_1060.sa, "p_1814->g_1060.sa", print_hash_value);
    transparent_crc(p_1814->g_1060.sb, "p_1814->g_1060.sb", print_hash_value);
    transparent_crc(p_1814->g_1060.sc, "p_1814->g_1060.sc", print_hash_value);
    transparent_crc(p_1814->g_1060.sd, "p_1814->g_1060.sd", print_hash_value);
    transparent_crc(p_1814->g_1060.se, "p_1814->g_1060.se", print_hash_value);
    transparent_crc(p_1814->g_1060.sf, "p_1814->g_1060.sf", print_hash_value);
    transparent_crc(p_1814->g_1064.s0, "p_1814->g_1064.s0", print_hash_value);
    transparent_crc(p_1814->g_1064.s1, "p_1814->g_1064.s1", print_hash_value);
    transparent_crc(p_1814->g_1064.s2, "p_1814->g_1064.s2", print_hash_value);
    transparent_crc(p_1814->g_1064.s3, "p_1814->g_1064.s3", print_hash_value);
    transparent_crc(p_1814->g_1064.s4, "p_1814->g_1064.s4", print_hash_value);
    transparent_crc(p_1814->g_1064.s5, "p_1814->g_1064.s5", print_hash_value);
    transparent_crc(p_1814->g_1064.s6, "p_1814->g_1064.s6", print_hash_value);
    transparent_crc(p_1814->g_1064.s7, "p_1814->g_1064.s7", print_hash_value);
    transparent_crc(p_1814->g_1068, "p_1814->g_1068", print_hash_value);
    transparent_crc(p_1814->g_1079.x, "p_1814->g_1079.x", print_hash_value);
    transparent_crc(p_1814->g_1079.y, "p_1814->g_1079.y", print_hash_value);
    transparent_crc(p_1814->g_1079.z, "p_1814->g_1079.z", print_hash_value);
    transparent_crc(p_1814->g_1079.w, "p_1814->g_1079.w", print_hash_value);
    transparent_crc(p_1814->g_1093.s0, "p_1814->g_1093.s0", print_hash_value);
    transparent_crc(p_1814->g_1093.s1, "p_1814->g_1093.s1", print_hash_value);
    transparent_crc(p_1814->g_1093.s2, "p_1814->g_1093.s2", print_hash_value);
    transparent_crc(p_1814->g_1093.s3, "p_1814->g_1093.s3", print_hash_value);
    transparent_crc(p_1814->g_1093.s4, "p_1814->g_1093.s4", print_hash_value);
    transparent_crc(p_1814->g_1093.s5, "p_1814->g_1093.s5", print_hash_value);
    transparent_crc(p_1814->g_1093.s6, "p_1814->g_1093.s6", print_hash_value);
    transparent_crc(p_1814->g_1093.s7, "p_1814->g_1093.s7", print_hash_value);
    transparent_crc(p_1814->g_1093.s8, "p_1814->g_1093.s8", print_hash_value);
    transparent_crc(p_1814->g_1093.s9, "p_1814->g_1093.s9", print_hash_value);
    transparent_crc(p_1814->g_1093.sa, "p_1814->g_1093.sa", print_hash_value);
    transparent_crc(p_1814->g_1093.sb, "p_1814->g_1093.sb", print_hash_value);
    transparent_crc(p_1814->g_1093.sc, "p_1814->g_1093.sc", print_hash_value);
    transparent_crc(p_1814->g_1093.sd, "p_1814->g_1093.sd", print_hash_value);
    transparent_crc(p_1814->g_1093.se, "p_1814->g_1093.se", print_hash_value);
    transparent_crc(p_1814->g_1093.sf, "p_1814->g_1093.sf", print_hash_value);
    transparent_crc(p_1814->g_1097.s0, "p_1814->g_1097.s0", print_hash_value);
    transparent_crc(p_1814->g_1097.s1, "p_1814->g_1097.s1", print_hash_value);
    transparent_crc(p_1814->g_1097.s2, "p_1814->g_1097.s2", print_hash_value);
    transparent_crc(p_1814->g_1097.s3, "p_1814->g_1097.s3", print_hash_value);
    transparent_crc(p_1814->g_1097.s4, "p_1814->g_1097.s4", print_hash_value);
    transparent_crc(p_1814->g_1097.s5, "p_1814->g_1097.s5", print_hash_value);
    transparent_crc(p_1814->g_1097.s6, "p_1814->g_1097.s6", print_hash_value);
    transparent_crc(p_1814->g_1097.s7, "p_1814->g_1097.s7", print_hash_value);
    transparent_crc(p_1814->g_1097.s8, "p_1814->g_1097.s8", print_hash_value);
    transparent_crc(p_1814->g_1097.s9, "p_1814->g_1097.s9", print_hash_value);
    transparent_crc(p_1814->g_1097.sa, "p_1814->g_1097.sa", print_hash_value);
    transparent_crc(p_1814->g_1097.sb, "p_1814->g_1097.sb", print_hash_value);
    transparent_crc(p_1814->g_1097.sc, "p_1814->g_1097.sc", print_hash_value);
    transparent_crc(p_1814->g_1097.sd, "p_1814->g_1097.sd", print_hash_value);
    transparent_crc(p_1814->g_1097.se, "p_1814->g_1097.se", print_hash_value);
    transparent_crc(p_1814->g_1097.sf, "p_1814->g_1097.sf", print_hash_value);
    transparent_crc(p_1814->g_1124, "p_1814->g_1124", print_hash_value);
    transparent_crc(p_1814->g_1154.x, "p_1814->g_1154.x", print_hash_value);
    transparent_crc(p_1814->g_1154.y, "p_1814->g_1154.y", print_hash_value);
    transparent_crc(p_1814->g_1161.s0, "p_1814->g_1161.s0", print_hash_value);
    transparent_crc(p_1814->g_1161.s1, "p_1814->g_1161.s1", print_hash_value);
    transparent_crc(p_1814->g_1161.s2, "p_1814->g_1161.s2", print_hash_value);
    transparent_crc(p_1814->g_1161.s3, "p_1814->g_1161.s3", print_hash_value);
    transparent_crc(p_1814->g_1161.s4, "p_1814->g_1161.s4", print_hash_value);
    transparent_crc(p_1814->g_1161.s5, "p_1814->g_1161.s5", print_hash_value);
    transparent_crc(p_1814->g_1161.s6, "p_1814->g_1161.s6", print_hash_value);
    transparent_crc(p_1814->g_1161.s7, "p_1814->g_1161.s7", print_hash_value);
    transparent_crc(p_1814->g_1161.s8, "p_1814->g_1161.s8", print_hash_value);
    transparent_crc(p_1814->g_1161.s9, "p_1814->g_1161.s9", print_hash_value);
    transparent_crc(p_1814->g_1161.sa, "p_1814->g_1161.sa", print_hash_value);
    transparent_crc(p_1814->g_1161.sb, "p_1814->g_1161.sb", print_hash_value);
    transparent_crc(p_1814->g_1161.sc, "p_1814->g_1161.sc", print_hash_value);
    transparent_crc(p_1814->g_1161.sd, "p_1814->g_1161.sd", print_hash_value);
    transparent_crc(p_1814->g_1161.se, "p_1814->g_1161.se", print_hash_value);
    transparent_crc(p_1814->g_1161.sf, "p_1814->g_1161.sf", print_hash_value);
    transparent_crc(p_1814->g_1162.x, "p_1814->g_1162.x", print_hash_value);
    transparent_crc(p_1814->g_1162.y, "p_1814->g_1162.y", print_hash_value);
    transparent_crc(p_1814->g_1163.s0, "p_1814->g_1163.s0", print_hash_value);
    transparent_crc(p_1814->g_1163.s1, "p_1814->g_1163.s1", print_hash_value);
    transparent_crc(p_1814->g_1163.s2, "p_1814->g_1163.s2", print_hash_value);
    transparent_crc(p_1814->g_1163.s3, "p_1814->g_1163.s3", print_hash_value);
    transparent_crc(p_1814->g_1163.s4, "p_1814->g_1163.s4", print_hash_value);
    transparent_crc(p_1814->g_1163.s5, "p_1814->g_1163.s5", print_hash_value);
    transparent_crc(p_1814->g_1163.s6, "p_1814->g_1163.s6", print_hash_value);
    transparent_crc(p_1814->g_1163.s7, "p_1814->g_1163.s7", print_hash_value);
    transparent_crc(p_1814->g_1163.s8, "p_1814->g_1163.s8", print_hash_value);
    transparent_crc(p_1814->g_1163.s9, "p_1814->g_1163.s9", print_hash_value);
    transparent_crc(p_1814->g_1163.sa, "p_1814->g_1163.sa", print_hash_value);
    transparent_crc(p_1814->g_1163.sb, "p_1814->g_1163.sb", print_hash_value);
    transparent_crc(p_1814->g_1163.sc, "p_1814->g_1163.sc", print_hash_value);
    transparent_crc(p_1814->g_1163.sd, "p_1814->g_1163.sd", print_hash_value);
    transparent_crc(p_1814->g_1163.se, "p_1814->g_1163.se", print_hash_value);
    transparent_crc(p_1814->g_1163.sf, "p_1814->g_1163.sf", print_hash_value);
    transparent_crc(p_1814->g_1206.s0, "p_1814->g_1206.s0", print_hash_value);
    transparent_crc(p_1814->g_1206.s1, "p_1814->g_1206.s1", print_hash_value);
    transparent_crc(p_1814->g_1206.s2, "p_1814->g_1206.s2", print_hash_value);
    transparent_crc(p_1814->g_1206.s3, "p_1814->g_1206.s3", print_hash_value);
    transparent_crc(p_1814->g_1206.s4, "p_1814->g_1206.s4", print_hash_value);
    transparent_crc(p_1814->g_1206.s5, "p_1814->g_1206.s5", print_hash_value);
    transparent_crc(p_1814->g_1206.s6, "p_1814->g_1206.s6", print_hash_value);
    transparent_crc(p_1814->g_1206.s7, "p_1814->g_1206.s7", print_hash_value);
    transparent_crc(p_1814->g_1206.s8, "p_1814->g_1206.s8", print_hash_value);
    transparent_crc(p_1814->g_1206.s9, "p_1814->g_1206.s9", print_hash_value);
    transparent_crc(p_1814->g_1206.sa, "p_1814->g_1206.sa", print_hash_value);
    transparent_crc(p_1814->g_1206.sb, "p_1814->g_1206.sb", print_hash_value);
    transparent_crc(p_1814->g_1206.sc, "p_1814->g_1206.sc", print_hash_value);
    transparent_crc(p_1814->g_1206.sd, "p_1814->g_1206.sd", print_hash_value);
    transparent_crc(p_1814->g_1206.se, "p_1814->g_1206.se", print_hash_value);
    transparent_crc(p_1814->g_1206.sf, "p_1814->g_1206.sf", print_hash_value);
    transparent_crc(p_1814->g_1213.x, "p_1814->g_1213.x", print_hash_value);
    transparent_crc(p_1814->g_1213.y, "p_1814->g_1213.y", print_hash_value);
    transparent_crc(p_1814->g_1224.s0, "p_1814->g_1224.s0", print_hash_value);
    transparent_crc(p_1814->g_1224.s1, "p_1814->g_1224.s1", print_hash_value);
    transparent_crc(p_1814->g_1224.s2, "p_1814->g_1224.s2", print_hash_value);
    transparent_crc(p_1814->g_1224.s3, "p_1814->g_1224.s3", print_hash_value);
    transparent_crc(p_1814->g_1224.s4, "p_1814->g_1224.s4", print_hash_value);
    transparent_crc(p_1814->g_1224.s5, "p_1814->g_1224.s5", print_hash_value);
    transparent_crc(p_1814->g_1224.s6, "p_1814->g_1224.s6", print_hash_value);
    transparent_crc(p_1814->g_1224.s7, "p_1814->g_1224.s7", print_hash_value);
    transparent_crc(p_1814->g_1224.s8, "p_1814->g_1224.s8", print_hash_value);
    transparent_crc(p_1814->g_1224.s9, "p_1814->g_1224.s9", print_hash_value);
    transparent_crc(p_1814->g_1224.sa, "p_1814->g_1224.sa", print_hash_value);
    transparent_crc(p_1814->g_1224.sb, "p_1814->g_1224.sb", print_hash_value);
    transparent_crc(p_1814->g_1224.sc, "p_1814->g_1224.sc", print_hash_value);
    transparent_crc(p_1814->g_1224.sd, "p_1814->g_1224.sd", print_hash_value);
    transparent_crc(p_1814->g_1224.se, "p_1814->g_1224.se", print_hash_value);
    transparent_crc(p_1814->g_1224.sf, "p_1814->g_1224.sf", print_hash_value);
    transparent_crc(p_1814->g_1230, "p_1814->g_1230", print_hash_value);
    transparent_crc(p_1814->g_1259, "p_1814->g_1259", print_hash_value);
    transparent_crc(p_1814->g_1290.x, "p_1814->g_1290.x", print_hash_value);
    transparent_crc(p_1814->g_1290.y, "p_1814->g_1290.y", print_hash_value);
    transparent_crc(p_1814->g_1340.s0, "p_1814->g_1340.s0", print_hash_value);
    transparent_crc(p_1814->g_1340.s1, "p_1814->g_1340.s1", print_hash_value);
    transparent_crc(p_1814->g_1340.s2, "p_1814->g_1340.s2", print_hash_value);
    transparent_crc(p_1814->g_1340.s3, "p_1814->g_1340.s3", print_hash_value);
    transparent_crc(p_1814->g_1340.s4, "p_1814->g_1340.s4", print_hash_value);
    transparent_crc(p_1814->g_1340.s5, "p_1814->g_1340.s5", print_hash_value);
    transparent_crc(p_1814->g_1340.s6, "p_1814->g_1340.s6", print_hash_value);
    transparent_crc(p_1814->g_1340.s7, "p_1814->g_1340.s7", print_hash_value);
    transparent_crc(p_1814->g_1341.s0, "p_1814->g_1341.s0", print_hash_value);
    transparent_crc(p_1814->g_1341.s1, "p_1814->g_1341.s1", print_hash_value);
    transparent_crc(p_1814->g_1341.s2, "p_1814->g_1341.s2", print_hash_value);
    transparent_crc(p_1814->g_1341.s3, "p_1814->g_1341.s3", print_hash_value);
    transparent_crc(p_1814->g_1341.s4, "p_1814->g_1341.s4", print_hash_value);
    transparent_crc(p_1814->g_1341.s5, "p_1814->g_1341.s5", print_hash_value);
    transparent_crc(p_1814->g_1341.s6, "p_1814->g_1341.s6", print_hash_value);
    transparent_crc(p_1814->g_1341.s7, "p_1814->g_1341.s7", print_hash_value);
    transparent_crc(p_1814->g_1341.s8, "p_1814->g_1341.s8", print_hash_value);
    transparent_crc(p_1814->g_1341.s9, "p_1814->g_1341.s9", print_hash_value);
    transparent_crc(p_1814->g_1341.sa, "p_1814->g_1341.sa", print_hash_value);
    transparent_crc(p_1814->g_1341.sb, "p_1814->g_1341.sb", print_hash_value);
    transparent_crc(p_1814->g_1341.sc, "p_1814->g_1341.sc", print_hash_value);
    transparent_crc(p_1814->g_1341.sd, "p_1814->g_1341.sd", print_hash_value);
    transparent_crc(p_1814->g_1341.se, "p_1814->g_1341.se", print_hash_value);
    transparent_crc(p_1814->g_1341.sf, "p_1814->g_1341.sf", print_hash_value);
    transparent_crc(p_1814->g_1347, "p_1814->g_1347", print_hash_value);
    transparent_crc(p_1814->g_1354.x, "p_1814->g_1354.x", print_hash_value);
    transparent_crc(p_1814->g_1354.y, "p_1814->g_1354.y", print_hash_value);
    transparent_crc(p_1814->g_1365.x, "p_1814->g_1365.x", print_hash_value);
    transparent_crc(p_1814->g_1365.y, "p_1814->g_1365.y", print_hash_value);
    transparent_crc(p_1814->g_1396.x, "p_1814->g_1396.x", print_hash_value);
    transparent_crc(p_1814->g_1396.y, "p_1814->g_1396.y", print_hash_value);
    transparent_crc(p_1814->g_1396.z, "p_1814->g_1396.z", print_hash_value);
    transparent_crc(p_1814->g_1396.w, "p_1814->g_1396.w", print_hash_value);
    transparent_crc(p_1814->g_1419.x, "p_1814->g_1419.x", print_hash_value);
    transparent_crc(p_1814->g_1419.y, "p_1814->g_1419.y", print_hash_value);
    transparent_crc(p_1814->g_1419.z, "p_1814->g_1419.z", print_hash_value);
    transparent_crc(p_1814->g_1419.w, "p_1814->g_1419.w", print_hash_value);
    transparent_crc(p_1814->g_1422.s0, "p_1814->g_1422.s0", print_hash_value);
    transparent_crc(p_1814->g_1422.s1, "p_1814->g_1422.s1", print_hash_value);
    transparent_crc(p_1814->g_1422.s2, "p_1814->g_1422.s2", print_hash_value);
    transparent_crc(p_1814->g_1422.s3, "p_1814->g_1422.s3", print_hash_value);
    transparent_crc(p_1814->g_1422.s4, "p_1814->g_1422.s4", print_hash_value);
    transparent_crc(p_1814->g_1422.s5, "p_1814->g_1422.s5", print_hash_value);
    transparent_crc(p_1814->g_1422.s6, "p_1814->g_1422.s6", print_hash_value);
    transparent_crc(p_1814->g_1422.s7, "p_1814->g_1422.s7", print_hash_value);
    transparent_crc(p_1814->g_1423.x, "p_1814->g_1423.x", print_hash_value);
    transparent_crc(p_1814->g_1423.y, "p_1814->g_1423.y", print_hash_value);
    transparent_crc(p_1814->g_1423.z, "p_1814->g_1423.z", print_hash_value);
    transparent_crc(p_1814->g_1423.w, "p_1814->g_1423.w", print_hash_value);
    transparent_crc(p_1814->g_1446.s0, "p_1814->g_1446.s0", print_hash_value);
    transparent_crc(p_1814->g_1446.s1, "p_1814->g_1446.s1", print_hash_value);
    transparent_crc(p_1814->g_1446.s2, "p_1814->g_1446.s2", print_hash_value);
    transparent_crc(p_1814->g_1446.s3, "p_1814->g_1446.s3", print_hash_value);
    transparent_crc(p_1814->g_1446.s4, "p_1814->g_1446.s4", print_hash_value);
    transparent_crc(p_1814->g_1446.s5, "p_1814->g_1446.s5", print_hash_value);
    transparent_crc(p_1814->g_1446.s6, "p_1814->g_1446.s6", print_hash_value);
    transparent_crc(p_1814->g_1446.s7, "p_1814->g_1446.s7", print_hash_value);
    transparent_crc(p_1814->g_1446.s8, "p_1814->g_1446.s8", print_hash_value);
    transparent_crc(p_1814->g_1446.s9, "p_1814->g_1446.s9", print_hash_value);
    transparent_crc(p_1814->g_1446.sa, "p_1814->g_1446.sa", print_hash_value);
    transparent_crc(p_1814->g_1446.sb, "p_1814->g_1446.sb", print_hash_value);
    transparent_crc(p_1814->g_1446.sc, "p_1814->g_1446.sc", print_hash_value);
    transparent_crc(p_1814->g_1446.sd, "p_1814->g_1446.sd", print_hash_value);
    transparent_crc(p_1814->g_1446.se, "p_1814->g_1446.se", print_hash_value);
    transparent_crc(p_1814->g_1446.sf, "p_1814->g_1446.sf", print_hash_value);
    transparent_crc(p_1814->g_1457.x, "p_1814->g_1457.x", print_hash_value);
    transparent_crc(p_1814->g_1457.y, "p_1814->g_1457.y", print_hash_value);
    transparent_crc(p_1814->g_1457.z, "p_1814->g_1457.z", print_hash_value);
    transparent_crc(p_1814->g_1457.w, "p_1814->g_1457.w", print_hash_value);
    transparent_crc(p_1814->g_1458.s0, "p_1814->g_1458.s0", print_hash_value);
    transparent_crc(p_1814->g_1458.s1, "p_1814->g_1458.s1", print_hash_value);
    transparent_crc(p_1814->g_1458.s2, "p_1814->g_1458.s2", print_hash_value);
    transparent_crc(p_1814->g_1458.s3, "p_1814->g_1458.s3", print_hash_value);
    transparent_crc(p_1814->g_1458.s4, "p_1814->g_1458.s4", print_hash_value);
    transparent_crc(p_1814->g_1458.s5, "p_1814->g_1458.s5", print_hash_value);
    transparent_crc(p_1814->g_1458.s6, "p_1814->g_1458.s6", print_hash_value);
    transparent_crc(p_1814->g_1458.s7, "p_1814->g_1458.s7", print_hash_value);
    transparent_crc(p_1814->g_1458.s8, "p_1814->g_1458.s8", print_hash_value);
    transparent_crc(p_1814->g_1458.s9, "p_1814->g_1458.s9", print_hash_value);
    transparent_crc(p_1814->g_1458.sa, "p_1814->g_1458.sa", print_hash_value);
    transparent_crc(p_1814->g_1458.sb, "p_1814->g_1458.sb", print_hash_value);
    transparent_crc(p_1814->g_1458.sc, "p_1814->g_1458.sc", print_hash_value);
    transparent_crc(p_1814->g_1458.sd, "p_1814->g_1458.sd", print_hash_value);
    transparent_crc(p_1814->g_1458.se, "p_1814->g_1458.se", print_hash_value);
    transparent_crc(p_1814->g_1458.sf, "p_1814->g_1458.sf", print_hash_value);
    transparent_crc(p_1814->g_1705.s0, "p_1814->g_1705.s0", print_hash_value);
    transparent_crc(p_1814->g_1705.s1, "p_1814->g_1705.s1", print_hash_value);
    transparent_crc(p_1814->g_1705.s2, "p_1814->g_1705.s2", print_hash_value);
    transparent_crc(p_1814->g_1705.s3, "p_1814->g_1705.s3", print_hash_value);
    transparent_crc(p_1814->g_1705.s4, "p_1814->g_1705.s4", print_hash_value);
    transparent_crc(p_1814->g_1705.s5, "p_1814->g_1705.s5", print_hash_value);
    transparent_crc(p_1814->g_1705.s6, "p_1814->g_1705.s6", print_hash_value);
    transparent_crc(p_1814->g_1705.s7, "p_1814->g_1705.s7", print_hash_value);
    transparent_crc(p_1814->g_1714.s0, "p_1814->g_1714.s0", print_hash_value);
    transparent_crc(p_1814->g_1714.s1, "p_1814->g_1714.s1", print_hash_value);
    transparent_crc(p_1814->g_1714.s2, "p_1814->g_1714.s2", print_hash_value);
    transparent_crc(p_1814->g_1714.s3, "p_1814->g_1714.s3", print_hash_value);
    transparent_crc(p_1814->g_1714.s4, "p_1814->g_1714.s4", print_hash_value);
    transparent_crc(p_1814->g_1714.s5, "p_1814->g_1714.s5", print_hash_value);
    transparent_crc(p_1814->g_1714.s6, "p_1814->g_1714.s6", print_hash_value);
    transparent_crc(p_1814->g_1714.s7, "p_1814->g_1714.s7", print_hash_value);
    transparent_crc(p_1814->g_1729.s0, "p_1814->g_1729.s0", print_hash_value);
    transparent_crc(p_1814->g_1729.s1, "p_1814->g_1729.s1", print_hash_value);
    transparent_crc(p_1814->g_1729.s2, "p_1814->g_1729.s2", print_hash_value);
    transparent_crc(p_1814->g_1729.s3, "p_1814->g_1729.s3", print_hash_value);
    transparent_crc(p_1814->g_1729.s4, "p_1814->g_1729.s4", print_hash_value);
    transparent_crc(p_1814->g_1729.s5, "p_1814->g_1729.s5", print_hash_value);
    transparent_crc(p_1814->g_1729.s6, "p_1814->g_1729.s6", print_hash_value);
    transparent_crc(p_1814->g_1729.s7, "p_1814->g_1729.s7", print_hash_value);
    transparent_crc(p_1814->g_1804.x, "p_1814->g_1804.x", print_hash_value);
    transparent_crc(p_1814->g_1804.y, "p_1814->g_1804.y", print_hash_value);
    transparent_crc(p_1814->v_collective, "p_1814->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 84; i++)
            transparent_crc(p_1814->g_special_values[i + 84 * get_linear_group_id()], "p_1814->g_special_values[i + 84 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 84; i++)
            transparent_crc(p_1814->l_special_values[i], "p_1814->l_special_values[i]", print_hash_value);
    transparent_crc(p_1814->l_comm_values[get_linear_local_id()], "p_1814->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1814->g_comm_values[get_linear_group_id() * 41 + get_linear_local_id()], "p_1814->g_comm_values[get_linear_group_id() * 41 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
