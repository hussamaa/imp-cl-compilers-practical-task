// --atomics 60 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 67,16,8 -l 1,16,4
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

__constant uint32_t permutations[10][64] = {
{34,15,26,22,18,1,58,25,6,40,48,41,60,47,24,43,54,46,30,32,4,56,21,11,57,52,37,49,3,10,51,59,31,2,33,61,0,23,20,27,12,16,50,28,19,7,63,39,29,38,42,45,53,55,13,5,17,14,8,9,62,44,36,35}, // permutation 0
{5,41,43,6,34,55,24,51,11,17,58,32,1,49,25,48,60,44,21,50,61,12,7,2,18,57,27,53,22,63,36,46,15,28,40,4,0,42,54,19,10,39,37,26,62,52,9,20,33,56,38,16,59,23,30,31,13,8,47,29,3,35,14,45}, // permutation 1
{19,57,24,16,4,2,20,49,8,1,29,3,17,45,35,54,25,33,50,18,7,62,13,48,23,12,36,28,32,52,44,9,22,14,40,6,26,10,47,27,15,37,63,53,43,39,61,55,60,56,30,21,0,5,38,51,41,34,46,59,42,11,58,31}, // permutation 2
{54,41,19,0,60,45,40,36,3,25,62,17,33,63,28,30,10,9,27,12,35,37,61,24,56,2,50,7,21,31,29,15,42,52,53,58,4,5,14,59,8,44,32,46,48,11,43,49,57,26,34,20,22,39,1,18,16,23,13,47,55,6,51,38}, // permutation 3
{25,24,35,56,7,53,52,21,33,57,8,48,26,45,28,16,44,27,38,59,46,50,61,11,32,47,43,20,42,36,63,55,22,3,10,34,39,14,37,31,60,9,0,12,29,30,15,5,19,62,40,17,1,4,58,6,2,51,54,18,41,23,49,13}, // permutation 4
{24,4,40,29,28,20,34,25,12,22,8,53,44,60,55,38,11,36,45,62,18,59,32,7,21,27,17,42,5,39,6,57,56,2,31,35,0,48,46,3,16,14,41,58,63,51,61,26,13,15,47,54,9,23,30,19,33,10,43,52,1,37,49,50}, // permutation 5
{15,25,44,36,53,38,34,5,63,59,11,40,52,6,17,45,7,49,37,3,41,43,35,23,42,14,28,30,58,21,31,54,12,19,22,13,48,33,29,60,46,32,24,2,39,47,8,20,9,51,26,0,61,1,50,18,55,27,56,62,16,4,10,57}, // permutation 6
{10,50,49,17,41,15,37,19,54,38,9,57,24,5,47,32,42,30,35,7,51,16,8,25,59,3,39,22,28,21,31,11,53,14,43,63,36,6,26,46,55,27,1,58,52,13,48,61,4,34,45,0,23,20,44,18,12,2,60,40,33,29,56,62}, // permutation 7
{4,37,34,48,5,36,54,21,15,12,50,47,51,32,56,17,6,49,3,24,25,10,19,20,55,14,40,44,58,27,0,29,45,52,30,61,42,31,57,11,33,26,7,2,43,46,8,28,60,9,16,13,62,39,22,41,63,18,59,1,38,35,23,53}, // permutation 8
{1,23,26,15,10,14,41,5,46,45,55,8,2,18,22,21,40,57,38,39,24,32,60,62,33,19,29,6,54,47,58,28,17,53,25,7,37,30,9,51,16,50,42,43,4,49,13,35,12,36,0,52,31,56,34,20,44,27,3,48,11,63,59,61} // permutation 9
};

// Seed: 1555807037

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
};

struct S1 {
   uint64_t  f0;
   uint64_t  f1;
   int32_t  f2;
   volatile uint32_t  f3;
   int32_t  f4;
   int64_t  f5;
   volatile uint64_t  f6;
   volatile int8_t  f7;
};

struct S2 {
   int16_t  f0;
   volatile uint64_t  f1;
   uint32_t  f2;
   int32_t  f3;
   volatile uint32_t  f4;
   volatile struct S1  f5;
   int32_t  f6;
   volatile int64_t  f7;
   uint32_t  f8;
   uint16_t  f9;
};

struct S3 {
    uint64_t g_11;
    VECTOR(int32_t, 16) g_15;
    int32_t * volatile g_17;
    int32_t * volatile g_18;
    int32_t g_21[9];
    int32_t * volatile g_20;
    VECTOR(int8_t, 8) g_36;
    volatile int8_t g_53;
    volatile int8_t * volatile g_52;
    uint8_t g_64;
    int8_t *g_84;
    int8_t **g_83;
    VECTOR(int16_t, 2) g_110;
    VECTOR(int16_t, 2) g_112;
    volatile VECTOR(uint64_t, 4) g_125;
    VECTOR(uint64_t, 8) g_127;
    VECTOR(uint64_t, 8) g_131;
    VECTOR(uint64_t, 16) g_135;
    int32_t *g_141;
    struct S0 g_151;
    volatile int16_t g_154[1][3][2];
    volatile int16_t * volatile g_153;
    VECTOR(uint16_t, 8) g_174;
    uint32_t g_186[7][1][9];
    volatile int16_t * volatile *g_199;
    struct S1 g_201;
    struct S1 g_236;
    struct S1 g_237;
    struct S1 *g_240;
    struct S1 **g_239;
    VECTOR(uint8_t, 8) g_258;
    VECTOR(uint8_t, 2) g_259;
    VECTOR(uint16_t, 4) g_260;
    volatile struct S1 g_267;
    volatile struct S1 g_268;
    int8_t g_281;
    struct S1 g_312;
    struct S1 g_313;
    VECTOR(int32_t, 16) g_357;
    struct S2 g_377;
    struct S2 g_390;
    VECTOR(uint8_t, 8) g_405;
    int16_t *g_409[7];
    int16_t **g_408;
    int16_t ***g_407;
    VECTOR(uint64_t, 4) g_437;
    VECTOR(uint64_t, 2) g_438;
    VECTOR(uint64_t, 4) g_440;
    int8_t *g_459[9][10][2];
    uint16_t g_510;
    VECTOR(int16_t, 2) g_513;
    VECTOR(int8_t, 2) g_520;
    VECTOR(int16_t, 16) g_555;
    volatile VECTOR(int16_t, 4) g_558;
    VECTOR(int32_t, 4) g_563;
    VECTOR(int64_t, 4) g_589;
    volatile VECTOR(uint16_t, 2) g_601;
    VECTOR(uint64_t, 2) g_607;
    VECTOR(int8_t, 4) g_612;
    VECTOR(int16_t, 8) g_637;
    VECTOR(uint8_t, 8) g_650;
    VECTOR(uint8_t, 16) g_651;
    struct S2 *g_656;
    struct S2 ** volatile g_655[2][10][2];
    uint64_t *g_669[5][8][6];
    volatile VECTOR(int16_t, 4) g_680;
    uint32_t g_689;
    VECTOR(int16_t, 8) g_691;
    VECTOR(int64_t, 4) g_699;
    uint16_t g_748;
    volatile VECTOR(uint32_t, 8) g_764;
    VECTOR(uint32_t, 2) g_765;
    VECTOR(uint32_t, 16) g_768;
    int32_t g_776;
    VECTOR(uint8_t, 4) g_782;
    VECTOR(uint64_t, 8) g_783;
    struct S2 ** volatile g_791;
    volatile struct S2 g_802;
    int32_t *g_803;
    uint64_t *g_804;
    int32_t g_861;
    volatile VECTOR(int32_t, 16) g_930;
    volatile uint8_t g_953;
    volatile struct S2 g_972;
    volatile VECTOR(uint16_t, 2) g_994;
    VECTOR(uint16_t, 4) g_996;
    struct S1 g_1005;
    volatile struct S2 g_1024;
    volatile struct S2 g_1039;
    VECTOR(uint32_t, 16) g_1043;
    VECTOR(int32_t, 8) g_1044;
    uint64_t g_1052;
    struct S1 g_1068;
    int32_t g_1076;
    struct S1 *g_1088;
    volatile struct S1 g_1089;
    VECTOR(uint32_t, 16) g_1126;
    VECTOR(int8_t, 8) g_1147;
    volatile VECTOR(int8_t, 2) g_1148;
    volatile VECTOR(int32_t, 16) g_1160;
    volatile VECTOR(int32_t, 8) g_1161;
    volatile uint8_t * volatile g_1167;
    volatile uint8_t * volatile * volatile g_1166[5][1];
    VECTOR(uint64_t, 2) g_1169;
    VECTOR(int64_t, 4) g_1171;
    VECTOR(uint64_t, 8) g_1175;
    VECTOR(uint64_t, 4) g_1176;
    volatile struct S1 g_1200[7];
    struct S1 g_1299;
    int16_t g_1300;
    VECTOR(int64_t, 4) g_1366;
    int32_t ** volatile g_1371;
    int32_t ** volatile g_1372;
    VECTOR(int32_t, 16) g_1391;
    uint32_t * volatile *g_1396;
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
uint64_t  func_1(struct S3 * p_1401);
uint64_t  func_4(uint32_t  p_5, int64_t  p_6, struct S3 * p_1401);
int32_t * func_22(int32_t * p_23, int32_t * p_24, uint32_t  p_25, uint32_t  p_26, uint8_t  p_27, struct S3 * p_1401);
int32_t * func_28(uint64_t  p_29, uint32_t  p_30, int32_t  p_31, int64_t  p_32, struct S3 * p_1401);
uint32_t  func_40(struct S0  p_41, int8_t * p_42, int8_t * p_43, int32_t * p_44, uint64_t * p_45, struct S3 * p_1401);
int8_t * func_47(int8_t * p_48, int32_t  p_49, int32_t  p_50, struct S3 * p_1401);
int8_t * func_55(uint64_t * p_56, int32_t * p_57, struct S3 * p_1401);
uint64_t * func_58(int32_t  p_59, int32_t * p_60, int32_t * p_61, int32_t  p_62, uint32_t  p_63, struct S3 * p_1401);
uint32_t  func_71(uint64_t  p_72, int32_t * p_73, uint64_t * p_74, int32_t * p_75, int32_t  p_76, struct S3 * p_1401);
int32_t * func_79(int32_t * p_80, int8_t ** p_81, struct S3 * p_1401);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1401->l_comm_values p_1401->g_11 p_1401->g_20 p_1401->g_21 p_1401->g_52 p_1401->g_64 p_1401->g_83 p_1401->g_comm_values p_1401->g_15 p_1401->g_36 p_1401->g_53 p_1401->g_110 p_1401->g_112 p_1401->g_84 p_1401->g_125 p_1401->g_127 p_1401->g_131 p_1401->g_135 p_1401->g_141 p_1401->g_151 p_1401->g_153 p_1401->g_174 p_1401->g_154 p_1401->g_186 p_1401->g_201.f0 p_1401->g_201.f7 p_1401->g_239 p_1401->g_236.f5 p_1401->g_237.f1 p_1401->g_267 p_1401->g_312 p_1401->g_680 p_1401->g_260 p_1401->g_689 p_1401->g_691 p_1401->g_699 p_1401->g_405 p_1401->g_520 p_1401->g_236.f0 p_1401->g_390.f2 p_1401->g_438 p_1401->g_637 p_1401->g_408 p_1401->g_377.f9 p_1401->g_377.f5.f1 p_1401->g_748 p_1401->g_201.f1 p_1401->g_764 p_1401->g_765 p_1401->g_768 p_1401->g_776 p_1401->g_782 p_1401->g_783 p_1401->g_199 p_1401->g_236.f4 p_1401->g_791 p_1401->g_651 p_1401->g_313.f0 p_1401->g_390.f3 p_1401->g_802 p_1401->g_803 p_1401->g_804 p_1401->g_861 p_1401->g_237.f4 p_1401->g_930 p_1401->g_953 p_1401->g_972 p_1401->g_1005 p_1401->g_240 p_1401->g_1024 p_1401->g_236.f2 p_1401->g_313.f4 p_1401->g_1068 p_1401->g_650 p_1401->g_1089 p_1401->g_377.f8 p_1401->g_201.f5 p_1401->g_390.f0 p_1401->g_1147 p_1401->g_1148 p_1401->g_513 p_1401->g_1160 p_1401->g_1161 p_1401->g_390.f5.f5 p_1401->g_1166 p_1401->g_1169 p_1401->g_1171 p_1401->g_1175 p_1401->g_1176 p_1401->g_377.f0 p_1401->g_1167 p_1401->g_1200 p_1401->g_313.f5 p_1401->g_236.f1 p_1401->g_236 p_1401->g_1391 p_1401->g_390.f6 p_1401->g_237.f5 p_1401->g_1396
 * writes: p_1401->g_11 p_1401->g_15 p_1401->g_21 p_1401->g_64 p_1401->g_83 p_1401->g_36 p_1401->g_110 p_1401->g_151 p_1401->g_141 p_1401->g_84 p_1401->g_186 p_1401->g_199 p_1401->g_201.f0 p_1401->g_236.f5 p_1401->g_268 p_1401->g_313 p_1401->g_409 p_1401->g_260 p_1401->g_377.f9 p_1401->g_240 p_1401->g_748 p_1401->g_776 p_1401->g_236.f4 p_1401->g_656 p_1401->g_459 p_1401->g_390.f3 p_1401->g_390.f2 p_1401->g_953 p_1401->g_236 p_1401->g_377.f0 p_1401->g_1076 p_1401->g_201.f5 p_1401->g_1088 p_1401->g_312.f4 p_1401->g_1068.f5 p_1401->g_20 p_1401->g_390.f9 p_1401->g_1052 p_1401->g_201.f2 p_1401->g_390.f6 p_1401->g_1299 p_1401->g_390.f8 p_1401->g_803 p_1401->g_1300 p_1401->g_1396 p_1401->g_17
 */
uint64_t  func_1(struct S3 * p_1401)
{ /* block id: 4 */
    uint8_t l_7 = 0x18L;
    int8_t *l_35 = (void*)0;
    int32_t l_37 = 0x07697AB8L;
    struct S0 l_46 = {0x1FL};
    int8_t **l_51 = &l_35;
    int32_t l_54 = 2L;
    VECTOR(uint64_t, 2) l_77 = (VECTOR(uint64_t, 2))(5UL, 1UL);
    uint64_t *l_78 = &p_1401->g_11;
    int32_t *l_82 = &l_54;
    int8_t ***l_85 = &p_1401->g_83;
    uint64_t *l_142 = (void*)0;
    uint32_t l_706 = 0x6EF86825L;
    int32_t *l_707 = (void*)0;
    int8_t **l_792[9][2] = {{&p_1401->g_459[4][4][0],&p_1401->g_459[4][9][1]},{&p_1401->g_459[4][4][0],&p_1401->g_459[4][9][1]},{&p_1401->g_459[4][4][0],&p_1401->g_459[4][9][1]},{&p_1401->g_459[4][4][0],&p_1401->g_459[4][9][1]},{&p_1401->g_459[4][4][0],&p_1401->g_459[4][9][1]},{&p_1401->g_459[4][4][0],&p_1401->g_459[4][9][1]},{&p_1401->g_459[4][4][0],&p_1401->g_459[4][9][1]},{&p_1401->g_459[4][4][0],&p_1401->g_459[4][9][1]},{&p_1401->g_459[4][4][0],&p_1401->g_459[4][9][1]}};
    int32_t **l_1399[4][9] = {{(void*)0,(void*)0,&p_1401->g_803,&p_1401->g_141,(void*)0,&p_1401->g_141,&p_1401->g_803,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1401->g_803,&p_1401->g_141,(void*)0,&p_1401->g_141,&p_1401->g_803,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1401->g_803,&p_1401->g_141,(void*)0,&p_1401->g_141,&p_1401->g_803,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1401->g_803,&p_1401->g_141,(void*)0,&p_1401->g_141,&p_1401->g_803,(void*)0,(void*)0}};
    int32_t l_1400 = 7L;
    int i, j;
    (*p_1401->g_20) |= (p_1401->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1401->tid, 64))] , (safe_mul_func_int16_t_s_s((func_4(l_7, p_1401->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1401->tid, 64))], p_1401) , (-10L)), 0xA5E0L)));
    p_1401->g_17 = func_22(func_28(l_7, (safe_mod_func_uint8_t_u_u((l_7 >= (l_37 &= 1L)), ((safe_add_func_int8_t_s_s((func_40(l_46, func_47((p_1401->g_459[4][4][0] = ((l_54 = (((*l_51) = (void*)0) != p_1401->g_52)) , func_55(func_58(((*l_82) = func_4(((((++p_1401->g_64) < (((*l_82) = (safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u((0x2B2C22B6L == func_71(((*l_78) ^= ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 4))(l_77.yxxy)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0xF0AC7725EFF85A04L, 1UL)))), 18446744073709551615UL, 8UL))))).z), func_79(l_82, ((*l_85) = p_1401->g_83), p_1401), l_142, p_1401->g_141, p_1401->g_131.s6, p_1401)), p_1401->g_127.s7)), 18446744073709551606UL))) , FAKE_DIVERGE(p_1401->group_0_offset, get_group_id(0), 10))) & l_706) || (*l_82)), p_1401->g_390.f2, p_1401)), l_82, l_707, p_1401->g_438.y, p_1401->g_637.s7, p_1401), l_707, p_1401))), p_1401->g_520.x, p_1401->g_651.s5, p_1401), &p_1401->g_281, p_1401->g_803, p_1401->g_804, p_1401) | p_1401->g_861), l_77.x)) , FAKE_DIVERGE(p_1401->global_0_offset, get_global_id(0), 10)))), l_77.x, p_1401->g_237.f4, p_1401), l_707, p_1401->g_135.s7, p_1401->g_237.f5, l_7, p_1401);
    return l_1400;
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_11
 * writes: p_1401->g_11 p_1401->g_15
 */
uint64_t  func_4(uint32_t  p_5, int64_t  p_6, struct S3 * p_1401)
{ /* block id: 5 */
    uint64_t *l_10 = (void*)0;
    int32_t *l_14 = (void*)0;
    int32_t *l_16 = (void*)0;
    int32_t *l_19 = (void*)0;
    p_1401->g_15.sb = (safe_rshift_func_int16_t_s_s(((--p_1401->g_11) == FAKE_DIVERGE(p_1401->group_0_offset, get_group_id(0), 10)), 7));
    return p_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_1396
 * writes: p_1401->g_1396
 */
int32_t * func_22(int32_t * p_23, int32_t * p_24, uint32_t  p_25, uint32_t  p_26, uint8_t  p_27, struct S3 * p_1401)
{ /* block id: 544 */
    uint32_t * volatile **l_1397 = &p_1401->g_1396;
    int32_t *l_1398 = (void*)0;
    (*l_1397) = p_1401->g_1396;
    return l_1398;
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_930 p_1401->g_390.f2 p_1401->g_151 p_1401->g_953 p_1401->g_972 p_1401->g_112 p_1401->g_20 p_1401->g_637 p_1401->g_64 p_1401->g_1005 p_1401->g_240 p_1401->g_1024 p_1401->g_236.f2 p_1401->g_260 p_1401->g_313.f4 p_1401->g_1068 p_1401->g_650 p_1401->g_239 p_1401->g_1089 p_1401->g_312.f4 p_1401->g_11 p_1401->g_21 p_1401->g_377.f8 p_1401->g_201.f5 p_1401->g_390.f0 p_1401->g_1147 p_1401->g_1148 p_1401->g_513 p_1401->g_1160 p_1401->g_1161 p_1401->g_390.f5.f5 p_1401->g_1166 p_1401->g_1169 p_1401->g_1171 p_1401->g_1175 p_1401->g_1176 p_1401->g_377.f0 p_1401->g_377.f9 p_1401->g_52 p_1401->g_53 p_1401->g_1167 p_1401->g_1200 p_1401->g_776 p_1401->g_313.f5 p_1401->g_236.f1 p_1401->g_236 p_1401->g_15 p_1401->g_141 p_1401->g_83 p_1401->g_84 p_1401->g_312.f5 p_1401->g_1391 p_1401->g_861 p_1401->g_390.f6
 * writes: p_1401->g_390.f2 p_1401->g_64 p_1401->g_953 p_1401->g_313.f5 p_1401->g_21 p_1401->g_236 p_1401->g_377.f0 p_1401->g_151.f0 p_1401->g_1076 p_1401->g_201.f5 p_1401->g_240 p_1401->g_1088 p_1401->g_312.f4 p_1401->g_11 p_1401->g_1068.f5 p_1401->g_20 p_1401->g_390.f9 p_1401->g_1052 p_1401->g_776 p_1401->g_377.f9 p_1401->g_201.f2 p_1401->g_390.f6 p_1401->g_313.f0 p_1401->g_1299 p_1401->g_390.f8 p_1401->g_803 p_1401->g_1300
 */
int32_t * func_28(uint64_t  p_29, uint32_t  p_30, int32_t  p_31, int64_t  p_32, struct S3 * p_1401)
{ /* block id: 340 */
    VECTOR(int32_t, 16) l_931 = (VECTOR(int32_t, 16))(0x22E005E9L, (VECTOR(int32_t, 4))(0x22E005E9L, (VECTOR(int32_t, 2))(0x22E005E9L, 0x1A69D634L), 0x1A69D634L), 0x1A69D634L, 0x22E005E9L, 0x1A69D634L, (VECTOR(int32_t, 2))(0x22E005E9L, 0x1A69D634L), (VECTOR(int32_t, 2))(0x22E005E9L, 0x1A69D634L), 0x22E005E9L, 0x1A69D634L, 0x22E005E9L, 0x1A69D634L);
    int32_t *l_932[5] = {&p_1401->g_312.f2,&p_1401->g_312.f2,&p_1401->g_312.f2,&p_1401->g_312.f2,&p_1401->g_312.f2};
    VECTOR(int64_t, 4) l_966 = (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 0x4ED27A40561C6978L), 0x4ED27A40561C6978L);
    struct S1 **l_1028[6][1];
    int32_t l_1053 = 0L;
    struct S0 l_1086[2][4] = {{{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L}}};
    VECTOR(uint64_t, 4) l_1168 = (VECTOR(uint64_t, 4))(0x6CFA3B0C7B3B50CDL, (VECTOR(uint64_t, 2))(0x6CFA3B0C7B3B50CDL, 0xAC5247A1F2FD9E1DL), 0xAC5247A1F2FD9E1DL);
    VECTOR(uint64_t, 8) l_1173 = (VECTOR(uint64_t, 8))(0x6EA8F53DEAAECC44L, (VECTOR(uint64_t, 4))(0x6EA8F53DEAAECC44L, (VECTOR(uint64_t, 2))(0x6EA8F53DEAAECC44L, 0x76F36CD9BEFB0B1AL), 0x76F36CD9BEFB0B1AL), 0x76F36CD9BEFB0B1AL, 0x6EA8F53DEAAECC44L, 0x76F36CD9BEFB0B1AL);
    uint64_t **l_1191 = &p_1401->g_804;
    int32_t l_1192[1][10] = {{0x77DD2ADDL,0x4DE05E1AL,0L,0x4DE05E1AL,0x77DD2ADDL,0x77DD2ADDL,0x4DE05E1AL,0L,0x4DE05E1AL,0x77DD2ADDL}};
    int32_t l_1311[5];
    int8_t **l_1339 = &p_1401->g_84;
    VECTOR(uint32_t, 4) l_1358 = (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0x54580E05L), 0x54580E05L);
    struct S0 l_1360 = {0x6DL};
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_1028[i][j] = &p_1401->g_240;
    }
    for (i = 0; i < 5; i++)
        l_1311[i] = 0x503E9D72L;
    if ((atomic_inc(&p_1401->l_atomic_input[26]) == 0))
    { /* block id: 342 */
        uint32_t l_862[1][2][4] = {{{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}}};
        VECTOR(uint16_t, 16) l_923 = (VECTOR(uint16_t, 16))(4UL, (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0UL), 0UL), 0UL, 4UL, 0UL, (VECTOR(uint16_t, 2))(4UL, 0UL), (VECTOR(uint16_t, 2))(4UL, 0UL), 4UL, 0UL, 4UL, 0UL);
        VECTOR(uint16_t, 16) l_924 = (VECTOR(uint16_t, 16))(0x73D8L, (VECTOR(uint16_t, 4))(0x73D8L, (VECTOR(uint16_t, 2))(0x73D8L, 0x5864L), 0x5864L), 0x5864L, 0x73D8L, 0x5864L, (VECTOR(uint16_t, 2))(0x73D8L, 0x5864L), (VECTOR(uint16_t, 2))(0x73D8L, 0x5864L), 0x73D8L, 0x5864L, 0x73D8L, 0x5864L);
        VECTOR(uint16_t, 4) l_925 = (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0UL), 0UL);
        VECTOR(uint16_t, 4) l_926 = (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0UL), 0UL);
        int32_t l_927[5];
        int16_t l_928 = (-1L);
        int32_t l_929 = 0x6EC1EEE2L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_927[i] = 0x2DDE4A81L;
        if (l_862[0][0][2])
        { /* block id: 343 */
            int32_t l_863[7];
            int i;
            for (i = 0; i < 7; i++)
                l_863[i] = 0x0C6B7388L;
            for (l_863[3] = 0; (l_863[3] > (-1)); --l_863[3])
            { /* block id: 346 */
                int32_t l_866[7][2][3] = {{{0x2366B30BL,0x70E6D5ACL,0L},{0x2366B30BL,0x70E6D5ACL,0L}},{{0x2366B30BL,0x70E6D5ACL,0L},{0x2366B30BL,0x70E6D5ACL,0L}},{{0x2366B30BL,0x70E6D5ACL,0L},{0x2366B30BL,0x70E6D5ACL,0L}},{{0x2366B30BL,0x70E6D5ACL,0L},{0x2366B30BL,0x70E6D5ACL,0L}},{{0x2366B30BL,0x70E6D5ACL,0L},{0x2366B30BL,0x70E6D5ACL,0L}},{{0x2366B30BL,0x70E6D5ACL,0L},{0x2366B30BL,0x70E6D5ACL,0L}},{{0x2366B30BL,0x70E6D5ACL,0L},{0x2366B30BL,0x70E6D5ACL,0L}}};
                int8_t l_867 = 0x45L;
                VECTOR(uint16_t, 2) l_868 = (VECTOR(uint16_t, 2))(2UL, 65527UL);
                int16_t l_869[6] = {1L,0x7EBCL,1L,1L,0x7EBCL,1L};
                int16_t l_870 = 0x64D3L;
                uint32_t l_871 = 0xF83DF450L;
                int32_t l_874 = 0x3600384FL;
                int16_t l_875 = 2L;
                uint32_t l_876 = 1UL;
                int i, j, k;
                l_867 = l_866[0][1][1];
                l_868.x = ((VECTOR(int32_t, 2))(0x28F445F8L, 1L)).hi;
                l_871--;
                l_876--;
            }
        }
        else
        { /* block id: 352 */
            uint16_t l_879 = 0x586EL;
            VECTOR(int16_t, 8) l_880 = (VECTOR(int16_t, 8))(0x0B2DL, (VECTOR(int16_t, 4))(0x0B2DL, (VECTOR(int16_t, 2))(0x0B2DL, 0x13CAL), 0x13CAL), 0x13CAL, 0x0B2DL, 0x13CAL);
            uint32_t l_914 = 1UL;
            VECTOR(int32_t, 2) l_915 = (VECTOR(int32_t, 2))(3L, 0x639029F8L);
            uint64_t l_916 = 0x42D145131E1CF15FL;
            int i;
            l_880.s3 ^= l_879;
            for (l_880.s5 = 2; (l_880.s5 < 3); l_880.s5 = safe_add_func_int32_t_s_s(l_880.s5, 2))
            { /* block id: 356 */
                VECTOR(int32_t, 16) l_883 = (VECTOR(int32_t, 16))(0x2F12F79BL, (VECTOR(int32_t, 4))(0x2F12F79BL, (VECTOR(int32_t, 2))(0x2F12F79BL, 3L), 3L), 3L, 0x2F12F79BL, 3L, (VECTOR(int32_t, 2))(0x2F12F79BL, 3L), (VECTOR(int32_t, 2))(0x2F12F79BL, 3L), 0x2F12F79BL, 3L, 0x2F12F79BL, 3L);
                int32_t l_884[6][10][4] = {{{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L}},{{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L}},{{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L}},{{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L}},{{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L}},{{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L},{0x419F654EL,0x4774942AL,0x66B1CAFAL,0L}}};
                uint32_t l_885 = 0UL;
                uint32_t l_886 = 1UL;
                VECTOR(int8_t, 2) l_887 = (VECTOR(int8_t, 2))(0x4BL, 0x12L);
                struct S0 l_888 = {-2L};
                uint16_t l_889 = 0xBAE0L;
                VECTOR(int8_t, 16) l_890 = (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x12L), 0x12L), 0x12L, (-10L), 0x12L, (VECTOR(int8_t, 2))((-10L), 0x12L), (VECTOR(int8_t, 2))((-10L), 0x12L), (-10L), 0x12L, (-10L), 0x12L);
                int64_t l_891 = 0L;
                uint32_t l_892[8] = {0x4EA8CE6BL,1UL,0x4EA8CE6BL,0x4EA8CE6BL,1UL,0x4EA8CE6BL,0x4EA8CE6BL,1UL};
                uint64_t l_893 = 0x479BDB5808B00552L;
                VECTOR(int8_t, 4) l_894 = (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, (-1L)), (-1L));
                int8_t l_895 = 0x6FL;
                VECTOR(int8_t, 16) l_896 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x04L), 0x04L), 0x04L, 1L, 0x04L, (VECTOR(int8_t, 2))(1L, 0x04L), (VECTOR(int8_t, 2))(1L, 0x04L), 1L, 0x04L, 1L, 0x04L);
                VECTOR(int8_t, 4) l_897 = (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, (-1L)), (-1L));
                struct S0 l_898 = {0x5EL};
                int16_t l_899 = 0x5334L;
                uint16_t l_900 = 0xE93DL;
                int16_t l_901 = 5L;
                uint32_t l_902[3];
                uint8_t l_903 = 1UL;
                uint32_t l_904 = 4UL;
                uint32_t l_905 = 8UL;
                uint32_t l_906 = 1UL;
                uint16_t l_907 = 65535UL;
                int32_t l_908 = 0L;
                int64_t l_909 = 8L;
                int8_t l_910 = (-2L);
                int32_t l_911 = 0x4DBA3978L;
                int16_t l_912[7][9] = {{3L,0x0F66L,0x1371L,(-1L),0x0F66L,(-1L),0x1371L,0x0F66L,3L},{3L,0x0F66L,0x1371L,(-1L),0x0F66L,(-1L),0x1371L,0x0F66L,3L},{3L,0x0F66L,0x1371L,(-1L),0x0F66L,(-1L),0x1371L,0x0F66L,3L},{3L,0x0F66L,0x1371L,(-1L),0x0F66L,(-1L),0x1371L,0x0F66L,3L},{3L,0x0F66L,0x1371L,(-1L),0x0F66L,(-1L),0x1371L,0x0F66L,3L},{3L,0x0F66L,0x1371L,(-1L),0x0F66L,(-1L),0x1371L,0x0F66L,3L},{3L,0x0F66L,0x1371L,(-1L),0x0F66L,(-1L),0x1371L,0x0F66L,3L}};
                VECTOR(int8_t, 2) l_913 = (VECTOR(int8_t, 2))(0x15L, 1L);
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_902[i] = 0x1499E5CCL;
                l_908 = (l_907 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_883.sb61d9857)).hi)), ((VECTOR(int32_t, 2))(0x57C834C8L, 0L)), 0x7A8C709EL, (-3L))).s67))), 0x069DCC5BL, ((VECTOR(int32_t, 2))(0x06C9EC28L, 0x239DF632L)), (((l_886 = (l_885 = l_884[0][7][2])) , ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 4))(l_887.xxyx)), ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 16))(1L, 5L, (-6L), (l_888 , l_889), 0x36L, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_890.s9eb84655)))), ((VECTOR(int8_t, 16))(0x11L, (-1L), (-1L), 0x18L, (l_891 , l_892[6]), (-1L), l_893, ((VECTOR(int8_t, 2))(l_894.xz)), ((VECTOR(int8_t, 4))(0x47L, 0x21L, (-8L), (-9L))), 3L, 0x23L, 0x53L)).sa, l_895, ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_896.s3338)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_897.yx)).yxxx)).zyyzyyyxzyzwxzzy)).s5, (l_898 , (l_899 , 0x17L)), ((VECTOR(int8_t, 4))(0L)), l_900, 0x6CL, 0L, (-1L), 0x0CL, 0x4CL)).sec5f)).xxyzxyzy)).even, ((VECTOR(int8_t, 4))((-8L)))))), (int8_t)l_901, (int8_t)l_902[2]))), 0x38L, 0L)).s953f, ((VECTOR(int8_t, 4))(1L))))).even, ((VECTOR(int8_t, 2))(0x26L)), ((VECTOR(int8_t, 2))(1L))))), (-3L), l_903, l_904, ((VECTOR(int8_t, 4))(0L)), (-5L), 0x38L)).odd, ((VECTOR(int8_t, 8))(0x22L)), ((VECTOR(int8_t, 8))(0x69L))))).s15, ((VECTOR(int8_t, 2))(0x31L))))).yyxyxxyxyxxxyxxy)).saffb)))).wzxzxwyw, (int8_t)l_905))).lo))).wwxyxxzwwzyzwyxx)).s7866)).z) , l_906), 0x015263BFL, 0x35A332A2L)).s7);
                l_909 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x25096FA8L)))), 0x0D1917EBL, 0L)).y;
                l_911 = l_910;
                l_913.x = l_912[2][5];
            }
            l_914 &= 0x76231EE2L;
            if ((l_916 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_915.xy)), 0x098F0CAEL, 0L)).y))
            { /* block id: 367 */
                struct S1 l_918 = {18446744073709551612UL,0xDE0036EC6646CD6CL,-1L,0x9AF4D33AL,-6L,6L,0x8F17381C0BB1F347L,1L};/* VOLATILE GLOBAL l_918 */
                struct S1 *l_917 = &l_918;
                l_917 = (void*)0;
            }
            else
            { /* block id: 369 */
                uint32_t l_919 = 4294967295UL;
                int32_t l_920 = 0x7033EAA4L;
                int32_t *l_921 = &l_920;
                int32_t *l_922 = &l_920;
                l_920 = (l_919 = (l_915.x = (-4L)));
                l_922 = l_921;
            }
        }
        l_928 ^= (((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(l_923.se9)), ((VECTOR(uint16_t, 8))(l_924.s3b356025)).s63))).yyyx, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 4))(l_925.wyzz)).xzzyzxywwzwxxxwy, ((VECTOR(uint16_t, 16))(l_926.zzxwxzywyxwzxwxy))))).sc09a))).z , l_927[4]);
        l_929 |= 0x29797588L;
        unsigned int result = 0;
        int l_862_i0, l_862_i1, l_862_i2;
        for (l_862_i0 = 0; l_862_i0 < 1; l_862_i0++) {
            for (l_862_i1 = 0; l_862_i1 < 2; l_862_i1++) {
                for (l_862_i2 = 0; l_862_i2 < 4; l_862_i2++) {
                    result += l_862[l_862_i0][l_862_i1][l_862_i2];
                }
            }
        }
        result += l_923.sf;
        result += l_923.se;
        result += l_923.sd;
        result += l_923.sc;
        result += l_923.sb;
        result += l_923.sa;
        result += l_923.s9;
        result += l_923.s8;
        result += l_923.s7;
        result += l_923.s6;
        result += l_923.s5;
        result += l_923.s4;
        result += l_923.s3;
        result += l_923.s2;
        result += l_923.s1;
        result += l_923.s0;
        result += l_924.sf;
        result += l_924.se;
        result += l_924.sd;
        result += l_924.sc;
        result += l_924.sb;
        result += l_924.sa;
        result += l_924.s9;
        result += l_924.s8;
        result += l_924.s7;
        result += l_924.s6;
        result += l_924.s5;
        result += l_924.s4;
        result += l_924.s3;
        result += l_924.s2;
        result += l_924.s1;
        result += l_924.s0;
        result += l_925.w;
        result += l_925.z;
        result += l_925.y;
        result += l_925.x;
        result += l_926.w;
        result += l_926.z;
        result += l_926.y;
        result += l_926.x;
        int l_927_i0;
        for (l_927_i0 = 0; l_927_i0 < 5; l_927_i0++) {
            result += l_927[l_927_i0];
        }
        result += l_928;
        result += l_929;
        atomic_add(&p_1401->l_special_values[26], result);
    }
    else
    { /* block id: 378 */
        (1 + 1);
    }
    if (((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1401->g_930.s18)).yxyx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_931.s052729941b16a799)).sd1)).yxxx))).y)
    { /* block id: 381 */
        return l_932[1];
    }
    else
    { /* block id: 383 */
        int64_t l_942 = 1L;
        int32_t l_948[9][10] = {{0x626AD4D2L,1L,0x461C4265L,(-1L),1L,(-1L),0x461C4265L,1L,0x626AD4D2L,0x626AD4D2L},{0x626AD4D2L,1L,0x461C4265L,(-1L),1L,(-1L),0x461C4265L,1L,0x626AD4D2L,0x626AD4D2L},{0x626AD4D2L,1L,0x461C4265L,(-1L),1L,(-1L),0x461C4265L,1L,0x626AD4D2L,0x626AD4D2L},{0x626AD4D2L,1L,0x461C4265L,(-1L),1L,(-1L),0x461C4265L,1L,0x626AD4D2L,0x626AD4D2L},{0x626AD4D2L,1L,0x461C4265L,(-1L),1L,(-1L),0x461C4265L,1L,0x626AD4D2L,0x626AD4D2L},{0x626AD4D2L,1L,0x461C4265L,(-1L),1L,(-1L),0x461C4265L,1L,0x626AD4D2L,0x626AD4D2L},{0x626AD4D2L,1L,0x461C4265L,(-1L),1L,(-1L),0x461C4265L,1L,0x626AD4D2L,0x626AD4D2L},{0x626AD4D2L,1L,0x461C4265L,(-1L),1L,(-1L),0x461C4265L,1L,0x626AD4D2L,0x626AD4D2L},{0x626AD4D2L,1L,0x461C4265L,(-1L),1L,(-1L),0x461C4265L,1L,0x626AD4D2L,0x626AD4D2L}};
        VECTOR(uint16_t, 2) l_995 = (VECTOR(uint16_t, 2))(0xB472L, 65528UL);
        uint8_t l_997 = 0UL;
        uint32_t l_998 = 0x659090C3L;
        VECTOR(int8_t, 4) l_1036 = (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, 0x52L), 0x52L);
        VECTOR(uint8_t, 8) l_1049 = (VECTOR(uint8_t, 8))(0x61L, (VECTOR(uint8_t, 4))(0x61L, (VECTOR(uint8_t, 2))(0x61L, 1UL), 1UL), 1UL, 0x61L, 1UL);
        uint8_t *l_1073 = &l_997;
        struct S0 l_1084 = {0x6AL};
        VECTOR(uint32_t, 4) l_1090 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL);
        uint32_t l_1093[6] = {0xC7525EE0L,0xC7525EE0L,0xC7525EE0L,0xC7525EE0L,0xC7525EE0L,0xC7525EE0L};
        uint64_t l_1140[1][9][8] = {{{0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL},{0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL},{0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL},{0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL},{0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL},{0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL},{0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL},{0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL},{0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL,0x17E7F2A4E52B4BE3L,0x17E7F2A4E52B4BE3L,1UL}}};
        VECTOR(uint64_t, 4) l_1172 = (VECTOR(uint64_t, 4))(0xB2221A7F7855794DL, (VECTOR(uint64_t, 2))(0xB2221A7F7855794DL, 0x547F3A5F55EC031FL), 0x547F3A5F55EC031FL);
        VECTOR(uint64_t, 8) l_1174 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x3F75D57BC23AFD92L), 0x3F75D57BC23AFD92L), 0x3F75D57BC23AFD92L, 1UL, 0x3F75D57BC23AFD92L);
        VECTOR(uint16_t, 4) l_1188 = (VECTOR(uint16_t, 4))(0x5285L, (VECTOR(uint16_t, 2))(0x5285L, 65535UL), 65535UL);
        int8_t **l_1330[9][6] = {{(void*)0,&p_1401->g_84,&p_1401->g_459[4][4][0],&p_1401->g_84,(void*)0,(void*)0},{(void*)0,&p_1401->g_84,&p_1401->g_459[4][4][0],&p_1401->g_84,(void*)0,(void*)0},{(void*)0,&p_1401->g_84,&p_1401->g_459[4][4][0],&p_1401->g_84,(void*)0,(void*)0},{(void*)0,&p_1401->g_84,&p_1401->g_459[4][4][0],&p_1401->g_84,(void*)0,(void*)0},{(void*)0,&p_1401->g_84,&p_1401->g_459[4][4][0],&p_1401->g_84,(void*)0,(void*)0},{(void*)0,&p_1401->g_84,&p_1401->g_459[4][4][0],&p_1401->g_84,(void*)0,(void*)0},{(void*)0,&p_1401->g_84,&p_1401->g_459[4][4][0],&p_1401->g_84,(void*)0,(void*)0},{(void*)0,&p_1401->g_84,&p_1401->g_459[4][4][0],&p_1401->g_84,(void*)0,(void*)0},{(void*)0,&p_1401->g_84,&p_1401->g_459[4][4][0],&p_1401->g_84,(void*)0,(void*)0}};
        int32_t l_1338 = 0L;
        VECTOR(int16_t, 8) l_1351 = (VECTOR(int16_t, 8))(0x4D1FL, (VECTOR(int16_t, 4))(0x4D1FL, (VECTOR(int16_t, 2))(0x4D1FL, (-4L)), (-4L)), (-4L), 0x4D1FL, (-4L));
        VECTOR(int8_t, 2) l_1352 = (VECTOR(int8_t, 2))((-10L), 0x6BL);
        VECTOR(uint32_t, 4) l_1359 = (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x8EF2E89BL), 0x8EF2E89BL);
        int32_t *l_1370 = &l_1311[0];
        VECTOR(uint64_t, 2) l_1374 = (VECTOR(uint64_t, 2))(0x516F1BDFB6FD2FF1L, 0x3FE9B6D6E5030AFBL);
        uint64_t *l_1375[7][3];
        VECTOR(uint8_t, 2) l_1388 = (VECTOR(uint8_t, 2))(4UL, 0x2CL);
        uint32_t l_1394 = 0x3751314FL;
        int16_t *l_1395 = &p_1401->g_1300;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 3; j++)
                l_1375[i][j] = (void*)0;
        }
        for (p_1401->g_390.f2 = 0; (p_1401->g_390.f2 > 4); p_1401->g_390.f2 = safe_add_func_uint8_t_u_u(p_1401->g_390.f2, 1))
        { /* block id: 386 */
            int64_t l_941 = 0x065486F2E033DF5FL;
            int32_t l_943 = 0x56400D50L;
            int32_t l_944 = 0x322E9318L;
            int32_t l_949 = (-1L);
            int32_t l_951 = 0x697B0E56L;
            VECTOR(int32_t, 4) l_952 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x68E60FD4L), 0x68E60FD4L);
            VECTOR(int32_t, 8) l_967 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 5L), 5L), 5L, 6L, 5L);
            int64_t *l_973 = &p_1401->g_313.f5;
            struct S1 **l_1026 = (void*)0;
            VECTOR(int32_t, 8) l_1159 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x21B5A47AL), 0x21B5A47AL), 0x21B5A47AL, (-1L), 0x21B5A47AL);
            VECTOR(int64_t, 4) l_1170 = (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), (-1L)), (-1L));
            int32_t l_1179[8];
            uint64_t *l_1195 = (void*)0;
            uint64_t *l_1196 = (void*)0;
            uint64_t *l_1197 = (void*)0;
            uint64_t *l_1198 = &p_1401->g_1052;
            int16_t *l_1199[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (i = 0; i < 8; i++)
                l_1179[i] = (-1L);
            for (p_1401->g_64 = 0; (p_1401->g_64 <= 15); p_1401->g_64 = safe_add_func_int32_t_s_s(p_1401->g_64, 1))
            { /* block id: 389 */
                uint8_t l_937 = 255UL;
                struct S0 l_940 = {-1L};
                int32_t l_945 = 4L;
                int32_t l_946 = 0x525DFDEFL;
                VECTOR(int32_t, 16) l_947 = (VECTOR(int32_t, 16))(0x3CD98740L, (VECTOR(int32_t, 4))(0x3CD98740L, (VECTOR(int32_t, 2))(0x3CD98740L, (-1L)), (-1L)), (-1L), 0x3CD98740L, (-1L), (VECTOR(int32_t, 2))(0x3CD98740L, (-1L)), (VECTOR(int32_t, 2))(0x3CD98740L, (-1L)), 0x3CD98740L, (-1L), 0x3CD98740L, (-1L));
                int32_t l_950 = 0x148B76D3L;
                int i;
                l_937++;
                if (l_937)
                    continue;
                l_940 = p_1401->g_151;
                p_1401->g_953++;
            }
            (*p_1401->g_20) = (((safe_sub_func_uint8_t_u_u(1UL, (((p_30 <= (p_30 || p_31)) > (safe_div_func_uint64_t_u_u(((p_31 != ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_31, (l_942 <= (safe_mul_func_int8_t_s_s((l_948[6][6] = (((VECTOR(int64_t, 2))(l_966.xy)).hi < ((*l_973) = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_967.s4376)), ((VECTOR(int32_t, 2))(0x201811F4L, 0x31D4A1B2L)), 0x67996470L, (-1L))).s3 && ((l_941 || (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(((p_1401->g_972 , 0x06EBL) > l_967.s2), FAKE_DIVERGE(p_1401->local_2_offset, get_local_id(2), 10))), 0UL))) != l_942))))), l_967.s0))))), p_1401->g_112.x)) ^ l_951)) | p_30), l_952.z))) >= p_29))) && 0x6DF9FD07B2F2431FL) && l_944);
            if ((safe_rshift_func_uint16_t_u_s(0x08C2L, ((safe_mod_func_uint64_t_u_u(p_32, (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((safe_rshift_func_int8_t_s_s((9UL && ((p_29 <= (((p_32 >= p_32) || (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s(p_30, (((0x6379L == ((safe_add_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 2))(p_1401->g_994.yy)).xyyxxyyxxxyyxyyx, ((VECTOR(uint16_t, 4))(7UL, ((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 4))(l_995.xxxy)).even, ((VECTOR(uint16_t, 4))(0xF1F6L, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1401->g_996.yyyx)).xyzyxwyz)).s57, ((VECTOR(uint16_t, 4))(0xB472L, (p_32 , p_31), 0xA3F4L, 0xF65CL)).odd))), 6UL)).odd))), 0UL)).xxwyxxwzyzxzzzxx))).odd)).s0027517477405327, ((VECTOR(uint16_t, 16))(0x7B29L)), ((VECTOR(uint16_t, 16))(0x6EE9L))))).s89f3))).x, 0UL)) > l_948[2][6]), l_951)) < 1L)) && 0x7FEFDB57L) & l_997))) ^ p_30) || 0x2FL), 0x4B8D65B1L)), p_1401->g_15.se)), p_31))) & l_995.x)) || l_998)), 4)) , 1L), 0L, 0L, 0x326C0DB1L)).y, ((VECTOR(int32_t, 2))((-3L))), l_952.z, 0x3EF084EDL, 0x7FACD22CL, 1L, 0x17C6C5B3L)))).s5, p_1401->g_637.s0)))) >= (-8L)))))
            { /* block id: 398 */
                (*p_1401->g_20) = ((((safe_lshift_func_uint8_t_u_s(0UL, 7)) > 18446744073709551615UL) & p_1401->g_972.f5.f6) >= ((p_1401->g_64 >= (safe_rshift_func_uint16_t_u_u(2UL, (p_32 > 0L)))) <= p_31));
                (*p_1401->g_240) = p_1401->g_1005;
            }
            else
            { /* block id: 401 */
                VECTOR(uint8_t, 16) l_1009 = (VECTOR(uint8_t, 16))(0x7CL, (VECTOR(uint8_t, 4))(0x7CL, (VECTOR(uint8_t, 2))(0x7CL, 8UL), 8UL), 8UL, 0x7CL, 8UL, (VECTOR(uint8_t, 2))(0x7CL, 8UL), (VECTOR(uint8_t, 2))(0x7CL, 8UL), 0x7CL, 8UL, 0x7CL, 8UL);
                uint8_t *l_1018 = (void*)0;
                uint8_t *l_1019 = &p_1401->g_64;
                int16_t *l_1020 = (void*)0;
                int16_t *l_1021 = &p_1401->g_377.f0;
                struct S1 **l_1025[5][6] = {{(void*)0,&p_1401->g_240,(void*)0,(void*)0,&p_1401->g_240,(void*)0},{(void*)0,&p_1401->g_240,(void*)0,(void*)0,&p_1401->g_240,(void*)0},{(void*)0,&p_1401->g_240,(void*)0,(void*)0,&p_1401->g_240,(void*)0},{(void*)0,&p_1401->g_240,(void*)0,(void*)0,&p_1401->g_240,(void*)0},{(void*)0,&p_1401->g_240,(void*)0,(void*)0,&p_1401->g_240,(void*)0}};
                struct S1 ***l_1027[7] = {&l_1025[0][0],&l_1025[1][4],&l_1025[0][0],&l_1025[0][0],&l_1025[1][4],&l_1025[0][0],&l_1025[0][0]};
                VECTOR(int8_t, 16) l_1035 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int8_t, 2))(0L, 1L), (VECTOR(int8_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                uint32_t l_1040 = 4294967294UL;
                uint64_t *l_1054 = &p_1401->g_11;
                uint32_t *l_1055 = (void*)0;
                int8_t *l_1056 = (void*)0;
                int8_t *l_1057 = &p_1401->g_151.f0;
                int8_t l_1059 = 1L;
                uint64_t l_1077[7][2] = {{8UL,1UL},{8UL,1UL},{8UL,1UL},{8UL,1UL},{8UL,1UL},{8UL,1UL},{8UL,1UL}};
                int8_t l_1079 = 0L;
                int32_t l_1097 = 0x226E2F89L;
                int32_t l_1098[8][6][5] = {{{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L}},{{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L}},{{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L}},{{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L}},{{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L}},{{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L}},{{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L}},{{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L},{(-7L),0L,(-9L),0x6F631BB6L,1L}}};
                uint32_t l_1111 = 4294967295UL;
                int32_t l_1125[4];
                VECTOR(uint16_t, 16) l_1149 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x8ECAL), 0x8ECAL), 0x8ECAL, 6UL, 0x8ECAL, (VECTOR(uint16_t, 2))(6UL, 0x8ECAL), (VECTOR(uint16_t, 2))(6UL, 0x8ECAL), 6UL, 0x8ECAL, 6UL, 0x8ECAL);
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1125[i] = 8L;
                p_1401->g_236.f2 ^= (safe_unary_minus_func_int32_t_s((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(l_1009.sa0)).even, (((*l_1021) = (safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(l_942, ((*l_1019) |= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(0x77L, 5)), 5))))) , p_30), 1UL))) , (safe_sub_func_int64_t_s_s((p_1401->g_1024 , (l_1025[1][5] == (l_1028[3][0] = l_1026))), p_29)))))));
                if ((safe_mul_func_uint16_t_u_u(65526UL, (((*l_1057) &= ((2UL & (safe_add_func_int8_t_s_s((l_948[4][1] = (safe_sub_func_uint8_t_u_u(p_1401->g_260.x, ((((VECTOR(int8_t, 8))(2L, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(l_1035.s68e468b8)).lo, ((VECTOR(int8_t, 8))(l_1036.xwyxwwxw)).lo))), (((safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1401->local_1_offset, get_local_id(1), 10), 6)) , p_1401->g_1039) , l_1040), 0x03L, 0x26L)).s7 ^ (safe_div_func_uint64_t_u_u((p_1401->g_313.f4 | (((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 2))(p_1401->g_1043.sba)).yyxyyxyx, (uint32_t)(p_30 ^= (((*l_1054) = (((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(p_1401->g_1044.s54104034)).s2017123220422005, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x6568E9F0L, (-3L), (p_1401->g_313.f2 = (p_32 >= p_32)), ((VECTOR(int32_t, 2))(7L, 0x5D0727C4L)), (p_1401->g_357.s7 = ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_1049.s52203222)).s5157730523777363)).s1, 6)), ((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((((p_1401->g_21[5] , p_1401->g_186[5][0][4]) , (-7L)) | l_944), 1L, 0x0171L, 0x1DC0L)), (-5L), 0x1BC6L, 0x2F98L, 0x3C76L)).s2, l_1040)) < p_1401->g_1052))) != p_29)), 0x10DE69A5L, l_942, p_32, 0x2862CB6AL, p_31, l_1053, ((VECTOR(int32_t, 2))(0x46C93E8BL)), (-4L), (-1L))).odd)).s45, ((VECTOR(int32_t, 2))(0x2310CD74L))))).xyxyyxyyyyxxxyxy))).even))).s6 , 18446744073709551615UL)) >= l_949))))).s4 , 0xF6EAC4FBL)), l_1009.s3))) & p_32)))), l_941))) == p_32)) == p_31))))
                { /* block id: 412 */
                    uint32_t **l_1058 = &l_1055;
                    int32_t l_1078 = 0x70A141CFL;
                    int64_t *l_1080 = (void*)0;
                    int64_t *l_1081 = &p_1401->g_201.f5;
                    int32_t l_1099 = 0x7286B4FDL;
                    int32_t l_1100 = 0x0405BDA7L;
                    int32_t l_1101 = 0x052DC064L;
                    int32_t l_1102 = (-1L);
                    int32_t l_1103 = 0L;
                    int32_t l_1104 = 0x6AFAECB4L;
                    int32_t l_1105 = 0x0E1652EFL;
                    int32_t l_1106 = (-4L);
                    int32_t l_1107 = 0x63306AF7L;
                    int32_t l_1108[3][9][3] = {{{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L}},{{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L}},{{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L},{0x1D1E4E71L,(-10L),1L}}};
                    VECTOR(int64_t, 8) l_1114 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x14908B662285402AL), 0x14908B662285402AL), 0x14908B662285402AL, 0L, 0x14908B662285402AL);
                    int i, j, k;
                    l_1059 = (p_29 ^ (((*l_1058) = &p_1401->g_186[5][0][4]) != l_932[0]));
                    if ((safe_mod_func_int64_t_s_s(((*l_1081) = ((*l_973) = (p_30 != ((((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((p_1401->g_1076 = (p_1401->g_1068 , ((*l_1057) = ((safe_lshift_func_uint16_t_u_s((p_1401->g_1024.f5.f3 >= p_32), (safe_rshift_func_int16_t_s_s((p_30 & ((void*)0 == l_1073)), 8)))) ^ (safe_lshift_func_int16_t_s_u(9L, 14)))))), p_32)), l_1077[6][0])), p_1401->g_650.s3)) != l_1078) ^ l_1079) && l_948[6][2])))), p_30)))
                    { /* block id: 419 */
                        struct S0 *l_1085[8];
                        struct S1 *l_1087[1][6];
                        int32_t l_1096[6] = {0x7E1F4D62L,0x7E1F4D62L,0x7E1F4D62L,0x7E1F4D62L,0x7E1F4D62L,0x7E1F4D62L};
                        VECTOR(int64_t, 4) l_1109 = (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 3L), 3L);
                        int32_t l_1110 = (-1L);
                        int i, j;
                        for (i = 0; i < 8; i++)
                            l_1085[i] = &p_1401->g_151;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_1087[i][j] = (void*)0;
                        }
                        p_1401->g_312.f4 ^= (safe_add_func_int32_t_s_s((l_948[2][6] = ((VECTOR(int32_t, 2))(0x257C72C3L, 0x01F46C0AL)).lo), (l_1049.s7 , (((((*p_1401->g_239) = (*p_1401->g_239)) != (p_1401->g_1088 = ((l_1086[1][1] = l_1084) , l_1087[0][5]))) && ((p_1401->g_1089 , (void*)0) != (void*)0)) , (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_1090.zxzx)))))).yzyxxxwyywwxyywy)).s4a, (uint32_t)(safe_mul_func_uint16_t_u_u(l_1093[1], (**p_1401->g_199)))))).xxxyxyxyxxyxyxyy)))).s12)).yxyyxyxy)).s6345462142754272)).sd > l_1009.s9)))));
                        l_1096[1] &= (safe_lshift_func_int16_t_s_u(p_29, 3));
                        ++l_1111;
                    }
                    else
                    { /* block id: 427 */
                        VECTOR(int64_t, 2) l_1127 = (VECTOR(int64_t, 2))(0L, 0x59D9737D758D4D7CL);
                        int32_t *l_1139 = &p_1401->g_21[5];
                        int i;
                        l_1098[7][3][2] &= (((((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 16))(l_1114.s4030747454201376)).lo))).s7 == l_997) < (p_1401->g_1068.f5 = (((*l_973) = ((*l_1081) &= (((safe_sub_func_uint16_t_u_u((((*l_1054)--) != (l_952.w | (safe_add_func_int32_t_s_s(((((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(1UL, l_1125[3])), (((VECTOR(uint32_t, 4))(p_1401->g_1126.sdfd8)).z & ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-5L), 2L)))), 0x567CBC3CL, (-5L))).y))) ^ ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_1127.yyxxyxxy)), (-3L), 0x3EBE75B7ECF7E7D5L, p_1401->g_377.f2, ((VECTOR(int64_t, 2))((-1L), 0x739DEE9B68399E2DL)), (safe_unary_minus_func_uint32_t_u(((*l_1055) = (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s(0x1DL)), (safe_sub_func_int32_t_s_s(p_31, ((safe_add_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(p_30)), p_31)) == 0x72L) <= 0x59L), 0x6FL)) < (-1L))))))))), (-1L), 0x5AAE3A6F65740143L)).se) & (*p_1401->g_20)) | 0UL), p_30)))), p_29)) & p_1401->g_377.f8) , (-3L)))) == p_1401->g_390.f0))) < 0x03BB7DCBL);
                        p_1401->g_20 = l_1139;
                    }
                    l_1140[0][6][1]++;
                    l_1097 = (safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u((l_1009.sd && ((*l_1057) = ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(p_1401->g_1147.s0163356667470507)).s9b5c, ((VECTOR(int8_t, 16))(p_1401->g_1148.yyyxxxxxyyxyyxxy)).sfe80))).w)), p_1401->g_513.x)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_1149.sa632)).even)).odd));
                }
                else
                { /* block id: 439 */
                    uint8_t l_1152 = 2UL;
                    for (p_1401->g_390.f9 = 0; (p_1401->g_390.f9 >= 25); p_1401->g_390.f9 = safe_add_func_int8_t_s_s(p_1401->g_390.f9, 6))
                    { /* block id: 442 */
                        l_1152 &= ((*p_1401->g_20) &= l_948[2][6]);
                    }
                    if (l_1077[2][1])
                        continue;
                }
                l_944 = ((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((l_952.z &= ((-6L) || ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(0x249767B2L, ((VECTOR(int32_t, 2))(l_1159.s70)), 0x0DC208E2L, ((VECTOR(int32_t, 4))((-3L), ((VECTOR(int32_t, 2))(p_1401->g_1160.sa2)), 0x4C34101CL)), ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(p_1401->g_1161.s01)).yyyxyyxy, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(4L, ((p_1401->g_390.f5.f5 , (safe_mod_func_int64_t_s_s(((void*)0 != p_1401->g_1166[0][0]), ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 8))(l_1168.yxwxwzyz)).even, ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(p_1401->g_1169.yy)), (uint64_t)((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 2))(7UL, 0UL)).xxxyyyyxyxyxxyyx, ((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 8))(l_1170.yyxzyxzw)).odd, ((VECTOR(int64_t, 2))(p_1401->g_1171.ww)).yxxx))).zyyywyxyxwwyyxyz, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_1172.yzwywzzywzzwywxz)).s87)).xyyyyyyyyxyyyxxy))).lo, ((VECTOR(uint64_t, 2))(l_1173.s25)).xxyyyyyx))).s0))).xyyx, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_1174.s41766122)))).s24, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_1401->g_1175.s57034170)).s1121073652475622)).even)))).s61))))), ((VECTOR(uint64_t, 16))(p_1401->g_1176.zxwzxzwzyyxyxyww)).s14))).yxxyxyyxxxyyyxyx)).s104a))).z))) | (((l_1028[0][0] = l_1026) == (void*)0) > (((*l_1021) ^= l_1036.w) && 0x229EL))), (-1L), 9L)).xwwyzyzzxxywzzyw)), ((VECTOR(int32_t, 2))(1L, 0L)).yyyxxyxyxyxyxyyy))).s83ac, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(0x0670726CL, 1L, 1L, 0L)), (int32_t)(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))((l_948[2][6] , l_949), ((VECTOR(int16_t, 4))((-7L))), ((VECTOR(int16_t, 8))(0x09A3L)), 0L, (-3L), 1L)).hi)), ((VECTOR(uint16_t, 8))(0xA9B2L))))).s0 , p_30))))))))).yxwwxxzw))))).s43, ((VECTOR(int32_t, 2))(0x6ABC7D1DL))))), 0x4391AC06L, 0x35470510L)).z)), 0xB4703F29L)) >= p_32), p_1401->g_377.f9)), l_949)) && (*p_1401->g_52));
                if (p_30)
                    break;
            }
            (*p_1401->g_240) = ((l_1179[3] = (safe_mul_func_int16_t_s_s((p_31 , l_1179[3]), (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s(((p_29 == (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(l_1188.zzyyxywyxzwwyxyz)).s1, (safe_rshift_func_int8_t_s_u((l_1192[0][6] = (&p_1401->g_669[1][6][3] == l_1191)), 5))))) | ((*p_1401->g_1167) | ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x30L, 0x2CL)))).odd)), 0x5B21241D92F91D4CL)), (safe_sub_func_uint64_t_u_u(p_30, ((*l_1198) = 8UL))))), 0x2A65L))))) , p_1401->g_1200[5]);
        }
        for (p_1401->g_776 = (-1); (p_1401->g_776 > 16); p_1401->g_776++)
        { /* block id: 461 */
            int32_t *l_1205 = (void*)0;
            if (l_997)
                break;
            for (p_1401->g_377.f9 = 0; (p_1401->g_377.f9 == 36); p_1401->g_377.f9 = safe_add_func_int16_t_s_s(p_1401->g_377.f9, 2))
            { /* block id: 465 */
                return l_1205;
            }
        }
        for (p_1401->g_313.f5 = 0; (p_1401->g_313.f5 >= 15); p_1401->g_313.f5 = safe_add_func_uint64_t_u_u(p_1401->g_313.f5, 6))
        { /* block id: 471 */
            int8_t l_1210 = 0x58L;
            uint8_t **l_1217[2][6] = {{&l_1073,&l_1073,&l_1073,&l_1073,&l_1073,&l_1073},{&l_1073,&l_1073,&l_1073,&l_1073,&l_1073,&l_1073}};
            int32_t l_1308[3][2][8] = {{{(-7L),(-1L),(-1L),0x65A136F5L,0x192F668EL,0x65A136F5L,(-1L),(-1L)},{(-7L),(-1L),(-1L),0x65A136F5L,0x192F668EL,0x65A136F5L,(-1L),(-1L)}},{{(-7L),(-1L),(-1L),0x65A136F5L,0x192F668EL,0x65A136F5L,(-1L),(-1L)},{(-7L),(-1L),(-1L),0x65A136F5L,0x192F668EL,0x65A136F5L,(-1L),(-1L)}},{{(-7L),(-1L),(-1L),0x65A136F5L,0x192F668EL,0x65A136F5L,(-1L),(-1L)},{(-7L),(-1L),(-1L),0x65A136F5L,0x192F668EL,0x65A136F5L,(-1L),(-1L)}}};
            VECTOR(uint64_t, 4) l_1318 = (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0UL), 0UL);
            int32_t l_1364 = 1L;
            int16_t l_1365 = 0x63D4L;
            int32_t **l_1373 = &p_1401->g_803;
            int i, j, k;
            for (p_1401->g_201.f2 = 26; (p_1401->g_201.f2 <= (-13)); p_1401->g_201.f2 = safe_sub_func_uint64_t_u_u(p_1401->g_201.f2, 3))
            { /* block id: 474 */
                uint32_t *l_1215 = &l_998;
                int32_t *l_1216 = &p_1401->g_390.f6;
                VECTOR(int32_t, 2) l_1298 = (VECTOR(int32_t, 2))((-3L), (-7L));
                int32_t l_1312 = 0x52ADC569L;
                uint32_t l_1313 = 4294967295UL;
                uint16_t *l_1327 = &p_1401->g_748;
                uint32_t *l_1333 = &p_1401->g_390.f8;
                int8_t ***l_1334[10][7][3] = {{{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83}},{{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83}},{{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83}},{{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83}},{{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83}},{{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83}},{{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83}},{{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83}},{{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83}},{{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83},{(void*)0,&l_1330[5][2],&p_1401->g_83}}};
                int8_t **l_1335 = (void*)0;
                uint64_t *l_1336 = (void*)0;
                uint64_t *l_1337[7] = {&p_1401->g_201.f0,&p_1401->g_201.f0,&p_1401->g_201.f0,&p_1401->g_201.f0,&p_1401->g_201.f0,&p_1401->g_201.f0,&p_1401->g_201.f0};
                int i, j, k;
                if (((p_30 <= ((((*l_1216) = ((((l_1210 && ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((-9L) & ((void*)0 == &p_1401->g_1167)), 0x7A56EAB2L, (((*l_1215) = (~(safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(0x00L, ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))((~((p_1401->g_390.f5.f5 , (safe_lshift_func_uint8_t_u_s(0x67L, 7))) <= p_1401->g_237.f0)), ((((p_1401->g_765.x &= ((VECTOR(uint32_t, 2))(4294967286UL, 4294967295UL)).even) <= (p_31 | 0xCDF5L)) < p_30) | l_1090.x), 0UL, ((VECTOR(uint8_t, 8))(0x5BL)), 0x3CL, 0xBDL, ((VECTOR(uint8_t, 2))(0x55L)), 2UL)))).odd, (uint8_t)0UL))), 0UL, p_30, 0xBEL, ((VECTOR(uint8_t, 2))(1UL)), 255UL, 255UL)).sd, p_32)))) , 7L), ((VECTOR(int32_t, 4))(0x7EEA42AAL)), 0L)).hi)).w) || p_31) , p_1401->g_236.f1) || p_29)) , l_1217[1][4]) == &l_1073)) < 0x29L))
                { /* block id: 478 */
                    if ((atomic_inc(&p_1401->l_atomic_input[13]) == 3))
                    { /* block id: 480 */
                        int32_t *l_1218[10];
                        int32_t l_1220 = 0x530E8CA8L;
                        int32_t *l_1219 = &l_1220;
                        VECTOR(int32_t, 8) l_1221 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 6L), 6L), 6L, (-1L), 6L);
                        uint32_t l_1222 = 0UL;
                        struct S1 l_1223 = {18446744073709551615UL,18446744073709551615UL,-5L,4294967291UL,0L,0L,18446744073709551613UL,1L};/* VOLATILE GLOBAL l_1223 */
                        VECTOR(int16_t, 16) l_1224 = (VECTOR(int16_t, 16))(0x0655L, (VECTOR(int16_t, 4))(0x0655L, (VECTOR(int16_t, 2))(0x0655L, 0L), 0L), 0L, 0x0655L, 0L, (VECTOR(int16_t, 2))(0x0655L, 0L), (VECTOR(int16_t, 2))(0x0655L, 0L), 0x0655L, 0L, 0x0655L, 0L);
                        VECTOR(int16_t, 2) l_1225 = (VECTOR(int16_t, 2))((-3L), 1L);
                        VECTOR(int16_t, 2) l_1226 = (VECTOR(int16_t, 2))(0x7241L, (-4L));
                        VECTOR(uint16_t, 2) l_1227 = (VECTOR(uint16_t, 2))(0x2F59L, 0x9380L);
                        VECTOR(int32_t, 8) l_1228 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x366399BCL), 0x366399BCL), 0x366399BCL, 0L, 0x366399BCL);
                        VECTOR(int32_t, 16) l_1229 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x2667E88BL), 0x2667E88BL), 0x2667E88BL, (-4L), 0x2667E88BL, (VECTOR(int32_t, 2))((-4L), 0x2667E88BL), (VECTOR(int32_t, 2))((-4L), 0x2667E88BL), (-4L), 0x2667E88BL, (-4L), 0x2667E88BL);
                        int32_t l_1230 = (-1L);
                        uint8_t l_1231 = 255UL;
                        int32_t l_1232 = 0x5E122C69L;
                        VECTOR(int32_t, 2) l_1233 = (VECTOR(int32_t, 2))((-1L), 0x06FA59C0L);
                        uint8_t l_1234 = 0UL;
                        int32_t l_1235 = (-4L);
                        uint64_t l_1236 = 8UL;
                        uint64_t l_1237 = 18446744073709551615UL;
                        struct S1 l_1238 = {18446744073709551609UL,7UL,0x4D420882L,0x0EE96492L,-1L,0x31FC65999765B315L,0x0F4869C2A40E5E51L,-10L};/* VOLATILE GLOBAL l_1238 */
                        int32_t l_1239 = 0x60514FF9L;
                        uint32_t l_1240 = 0x33B9D75CL;
                        int16_t l_1241 = (-1L);
                        int32_t l_1242 = (-6L);
                        uint32_t l_1243 = 0x1A5E6BCBL;
                        int16_t l_1244 = (-7L);
                        uint16_t l_1245 = 0xC627L;
                        VECTOR(int32_t, 16) l_1246 = (VECTOR(int32_t, 16))(0x48F2533FL, (VECTOR(int32_t, 4))(0x48F2533FL, (VECTOR(int32_t, 2))(0x48F2533FL, 0x55FD1432L), 0x55FD1432L), 0x55FD1432L, 0x48F2533FL, 0x55FD1432L, (VECTOR(int32_t, 2))(0x48F2533FL, 0x55FD1432L), (VECTOR(int32_t, 2))(0x48F2533FL, 0x55FD1432L), 0x48F2533FL, 0x55FD1432L, 0x48F2533FL, 0x55FD1432L);
                        VECTOR(int32_t, 16) l_1247 = (VECTOR(int32_t, 16))(0x38686968L, (VECTOR(int32_t, 4))(0x38686968L, (VECTOR(int32_t, 2))(0x38686968L, 1L), 1L), 1L, 0x38686968L, 1L, (VECTOR(int32_t, 2))(0x38686968L, 1L), (VECTOR(int32_t, 2))(0x38686968L, 1L), 0x38686968L, 1L, 0x38686968L, 1L);
                        VECTOR(int32_t, 2) l_1248 = (VECTOR(int32_t, 2))(0x7BB1B035L, 4L);
                        VECTOR(int32_t, 2) l_1249 = (VECTOR(int32_t, 2))((-1L), (-1L));
                        VECTOR(int32_t, 4) l_1250 = (VECTOR(int32_t, 4))(0x4B661CCCL, (VECTOR(int32_t, 2))(0x4B661CCCL, 9L), 9L);
                        VECTOR(int32_t, 4) l_1251 = (VECTOR(int32_t, 4))(0x0F52E6C7L, (VECTOR(int32_t, 2))(0x0F52E6C7L, 0x6E5E3845L), 0x6E5E3845L);
                        VECTOR(int32_t, 16) l_1252 = (VECTOR(int32_t, 16))(0x50DE121FL, (VECTOR(int32_t, 4))(0x50DE121FL, (VECTOR(int32_t, 2))(0x50DE121FL, 0x155E702EL), 0x155E702EL), 0x155E702EL, 0x50DE121FL, 0x155E702EL, (VECTOR(int32_t, 2))(0x50DE121FL, 0x155E702EL), (VECTOR(int32_t, 2))(0x50DE121FL, 0x155E702EL), 0x50DE121FL, 0x155E702EL, 0x50DE121FL, 0x155E702EL);
                        int8_t l_1253 = (-1L);
                        VECTOR(int16_t, 8) l_1254 = (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0L), 0L), 0L, 7L, 0L);
                        uint16_t l_1255[1];
                        uint8_t l_1258 = 0xCAL;
                        VECTOR(uint16_t, 8) l_1259 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x4F2FL), 0x4F2FL), 0x4F2FL, 1UL, 0x4F2FL);
                        VECTOR(uint16_t, 4) l_1260 = (VECTOR(uint16_t, 4))(0xF411L, (VECTOR(uint16_t, 2))(0xF411L, 0xAD09L), 0xAD09L);
                        int64_t l_1261 = 0x4F5A01A658156C04L;
                        VECTOR(uint16_t, 8) l_1262 = (VECTOR(uint16_t, 8))(0xCC06L, (VECTOR(uint16_t, 4))(0xCC06L, (VECTOR(uint16_t, 2))(0xCC06L, 0xAF09L), 0xAF09L), 0xAF09L, 0xCC06L, 0xAF09L);
                        VECTOR(uint16_t, 2) l_1263 = (VECTOR(uint16_t, 2))(65535UL, 1UL);
                        VECTOR(int32_t, 8) l_1264 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
                        VECTOR(int32_t, 4) l_1265 = (VECTOR(int32_t, 4))(0x5A1D4E73L, (VECTOR(int32_t, 2))(0x5A1D4E73L, 0x797BD66FL), 0x797BD66FL);
                        VECTOR(int32_t, 16) l_1266 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x358F166FL), 0x358F166FL), 0x358F166FL, 4L, 0x358F166FL, (VECTOR(int32_t, 2))(4L, 0x358F166FL), (VECTOR(int32_t, 2))(4L, 0x358F166FL), 4L, 0x358F166FL, 4L, 0x358F166FL);
                        VECTOR(int32_t, 16) l_1267 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4A2D5D22L), 0x4A2D5D22L), 0x4A2D5D22L, (-1L), 0x4A2D5D22L, (VECTOR(int32_t, 2))((-1L), 0x4A2D5D22L), (VECTOR(int32_t, 2))((-1L), 0x4A2D5D22L), (-1L), 0x4A2D5D22L, (-1L), 0x4A2D5D22L);
                        uint8_t l_1268 = 255UL;
                        uint32_t l_1269 = 4294967295UL;
                        VECTOR(int32_t, 16) l_1270 = (VECTOR(int32_t, 16))(0x37289E7EL, (VECTOR(int32_t, 4))(0x37289E7EL, (VECTOR(int32_t, 2))(0x37289E7EL, 0x512B8D38L), 0x512B8D38L), 0x512B8D38L, 0x37289E7EL, 0x512B8D38L, (VECTOR(int32_t, 2))(0x37289E7EL, 0x512B8D38L), (VECTOR(int32_t, 2))(0x37289E7EL, 0x512B8D38L), 0x37289E7EL, 0x512B8D38L, 0x37289E7EL, 0x512B8D38L);
                        VECTOR(int32_t, 2) l_1271 = (VECTOR(int32_t, 2))(0x1F1E6075L, (-1L));
                        VECTOR(int32_t, 16) l_1272 = (VECTOR(int32_t, 16))(0x57298906L, (VECTOR(int32_t, 4))(0x57298906L, (VECTOR(int32_t, 2))(0x57298906L, 0x762F92E6L), 0x762F92E6L), 0x762F92E6L, 0x57298906L, 0x762F92E6L, (VECTOR(int32_t, 2))(0x57298906L, 0x762F92E6L), (VECTOR(int32_t, 2))(0x57298906L, 0x762F92E6L), 0x57298906L, 0x762F92E6L, 0x57298906L, 0x762F92E6L);
                        VECTOR(int32_t, 16) l_1273 = (VECTOR(int32_t, 16))(0x2A03091DL, (VECTOR(int32_t, 4))(0x2A03091DL, (VECTOR(int32_t, 2))(0x2A03091DL, (-1L)), (-1L)), (-1L), 0x2A03091DL, (-1L), (VECTOR(int32_t, 2))(0x2A03091DL, (-1L)), (VECTOR(int32_t, 2))(0x2A03091DL, (-1L)), 0x2A03091DL, (-1L), 0x2A03091DL, (-1L));
                        VECTOR(int32_t, 8) l_1274 = (VECTOR(int32_t, 8))(0x6E012259L, (VECTOR(int32_t, 4))(0x6E012259L, (VECTOR(int32_t, 2))(0x6E012259L, (-5L)), (-5L)), (-5L), 0x6E012259L, (-5L));
                        VECTOR(int32_t, 8) l_1275 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x761A5968L), 0x761A5968L), 0x761A5968L, (-7L), 0x761A5968L);
                        VECTOR(int32_t, 16) l_1276 = (VECTOR(int32_t, 16))(0x36D4F71BL, (VECTOR(int32_t, 4))(0x36D4F71BL, (VECTOR(int32_t, 2))(0x36D4F71BL, 0x7F1A19DBL), 0x7F1A19DBL), 0x7F1A19DBL, 0x36D4F71BL, 0x7F1A19DBL, (VECTOR(int32_t, 2))(0x36D4F71BL, 0x7F1A19DBL), (VECTOR(int32_t, 2))(0x36D4F71BL, 0x7F1A19DBL), 0x36D4F71BL, 0x7F1A19DBL, 0x36D4F71BL, 0x7F1A19DBL);
                        int16_t l_1277 = 0x5DB2L;
                        uint32_t l_1278 = 0x3066D36EL;
                        VECTOR(int32_t, 8) l_1279 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x3FA2DE3AL), 0x3FA2DE3AL), 0x3FA2DE3AL, (-4L), 0x3FA2DE3AL);
                        int32_t l_1280 = (-1L);
                        VECTOR(int32_t, 16) l_1281 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x68E4782BL), 0x68E4782BL), 0x68E4782BL, 1L, 0x68E4782BL, (VECTOR(int32_t, 2))(1L, 0x68E4782BL), (VECTOR(int32_t, 2))(1L, 0x68E4782BL), 1L, 0x68E4782BL, 1L, 0x68E4782BL);
                        VECTOR(int32_t, 16) l_1282 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x5FB2F793L), 0x5FB2F793L), 0x5FB2F793L, 4L, 0x5FB2F793L, (VECTOR(int32_t, 2))(4L, 0x5FB2F793L), (VECTOR(int32_t, 2))(4L, 0x5FB2F793L), 4L, 0x5FB2F793L, 4L, 0x5FB2F793L);
                        VECTOR(int32_t, 4) l_1283 = (VECTOR(int32_t, 4))(0x655E30B7L, (VECTOR(int32_t, 2))(0x655E30B7L, (-1L)), (-1L));
                        VECTOR(int32_t, 8) l_1284 = (VECTOR(int32_t, 8))(0x0DE9408BL, (VECTOR(int32_t, 4))(0x0DE9408BL, (VECTOR(int32_t, 2))(0x0DE9408BL, 0x2A34DE3DL), 0x2A34DE3DL), 0x2A34DE3DL, 0x0DE9408BL, 0x2A34DE3DL);
                        struct S2 l_1285 = {-1L,7UL,0xF33F5469L,0x4E20C874L,0xF4187A8AL,{18446744073709551608UL,0x46168B2519075B5AL,-1L,0x626C3D33L,7L,0x0C461791EC6B31F8L,0xE4F49762CC935A60L,0x68L},0x6ED05B6BL,0x7C6569DEAA9C6F28L,0UL,1UL};/* VOLATILE GLOBAL l_1285 */
                        struct S2 l_1286 = {-5L,0xD4A7E9F893B83135L,8UL,0x0B75C58FL,4294967295UL,{5UL,0x93D1FC8CAC2B3FABL,0x26C2CFCFL,0x65DB4088L,0x5AD911A3L,0x7EF1B62C437F661EL,7UL,0x60L},-4L,1L,4294967295UL,0UL};/* VOLATILE GLOBAL l_1286 */
                        struct S2 l_1287 = {0x5A8EL,0xFE69A60439CC4A2FL,0x3F44BDCDL,9L,4294967287UL,{18446744073709551615UL,18446744073709551607UL,7L,1UL,0x7946F16AL,1L,0xA05F04CAC6DB8A8EL,1L},0x3E8BBE8DL,0x474DBD8EEE44723BL,0xD3E8D9BBL,65535UL};/* VOLATILE GLOBAL l_1287 */
                        uint16_t l_1288 = 0UL;
                        uint32_t l_1289 = 0xF2D98AD6L;
                        uint32_t l_1290 = 0xDFD7860EL;
                        uint32_t l_1291 = 4294967295UL;
                        uint64_t l_1292 = 0xD50B806A020D1F0FL;
                        int32_t l_1293 = 0x5C83691FL;
                        int16_t l_1294 = (-1L);
                        int16_t l_1295 = (-10L);
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1218[i] = (void*)0;
                        for (i = 0; i < 1; i++)
                            l_1255[i] = 1UL;
                        l_1219 = l_1218[0];
                        l_1242 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(l_1221.s11)).xyyxxxxxyxyyxyyx, ((VECTOR(int32_t, 4))((((l_1222 , l_1223) , ((VECTOR(uint64_t, 4))(0xC4EB174A31F442EEL, ((VECTOR(uint64_t, 2))(0xDE86D9E8371E2F0DL, 0x6093CE84251C9565L)), 0xDBD81B6E2A57BF11L)).x) , (l_1230 |= (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x2B7CAFE7L, ((VECTOR(int32_t, 2))(9L, 0x15C3988EL)), 0x68D44878L)).zywyzxxxxxzxxxyw)).lo)).s45, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(l_1224.s4c)), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(l_1225.yx)), (int16_t)((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_1226.xxxxyyyxyxyyyxyx)).lo)).hi)))).z)))))).yxxxxyxxxyxyyxxx, ((VECTOR(uint16_t, 8))(0x448BL, ((VECTOR(uint16_t, 2))(l_1227.xx)), 6UL, 65535UL, GROUP_DIVERGE(1, 1), 0x97D7L, 0xF584L)).s3077334633533073))).s2e, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1228.s37245367)).s77)), (-1L), 0x7C9A5910L)).lo))))).hi , ((VECTOR(int32_t, 8))(l_1229.sd470dfa3)).s5))), (l_1232 ^= l_1231), 0x3C427E6DL, 2L)).yyxyyzzwzzxywwyz))).even)).s10, ((VECTOR(int32_t, 2))(l_1233.yy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((-7L), 0L, (-8L), 0x6B6FC647L, (l_1234 , ((l_1235 , (l_1237 ^= l_1236)) , (l_1238 , 0x1850D6F1L))), l_1239, 0x6BE3AA92L, l_1240, (-1L), ((VECTOR(int32_t, 2))(0x51340047L)), (-1L), l_1241, 0x1AF17A09L, 0x006740ACL, 7L)))).sbd))).xyyxyyyxyyxxxxyx, ((VECTOR(int32_t, 16))(6L))))).s53, ((VECTOR(int32_t, 2))(0L))))).xxxxyxyxyyyyxyyx)).sa;
                        l_1244 = l_1243;
                        l_1295 |= (l_1245 , (l_1294 &= ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x1C29E95BL, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(l_1246.s8d)).yyyyyxxy))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(l_1247.sc3b34389)), ((VECTOR(int32_t, 16))(l_1248.yxyxxyxxxxyyxxxx)).hi))).hi)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_1249.yxxyyxyy)), ((VECTOR(int32_t, 8))(l_1250.wyyxxyyx))))).s6574411655125745, ((VECTOR(int32_t, 16))(l_1251.wyzxxwxzwwyxwwww))))).sbe)), 0x1936CC7BL)).s0526)).wyzzxywy, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(l_1252.s96cb8aaf17d4e6d8)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0x140B7242L)).xyyx)).zxzxwxxzzxxyxwwy, (int32_t)l_1253))).s0d, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_1254.s15714551)).s4240027164107031)).sa5)), 0x7BD2L, (-5L))).lo, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))((l_1258 = (++l_1255[0])), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 4))(l_1259.s0606)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65526UL, 0xD7A2L)).xyxy)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_1260.yzxy)).odd)), 0UL, 0x36FBL)).xzxyyxyz)).even))).yzxxxxywxzyzxzxz)).s3072)), ((VECTOR(uint16_t, 8))((l_1261 , ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_1262.s15)).xxxy)).z), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_1263.yx)).yyxyxxyy)).odd)), 0x975DL, 0UL, 0x7756L)), 0UL, 0xB89BL, 65530UL)))).s43))).xyxyyxyxyyxxxyxx, ((VECTOR(int32_t, 4))(l_1264.s2630)).yywyyywzzzxxxwwy, ((VECTOR(int32_t, 16))(l_1265.wzxyzyyxzyyyxzxz))))).even)).s55, ((VECTOR(int32_t, 16))(l_1266.s71594ffad8d33649)).s64)))))))).xyxxyxxyxxyxxxyx, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(l_1267.s933ed024f0881018)).sdab6, ((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 4))(0x5AADF8CFL, l_1268, 0x059C8B4CL, 1L)), l_1269, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(l_1270.s05a5c520))))), (-1L), 1L)).sa0f3))).odd, ((VECTOR(int32_t, 16))(0x05ACE1E1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1271.yy)).yxxyxyxy)), 0x164C15DFL, ((VECTOR(int32_t, 4))(l_1272.s189e)), (-6L), 1L)).s93, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(l_1273.s5b04386f)), ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1274.s56)), 0L, ((VECTOR(int32_t, 4))(l_1275.s0214)), 8L)).s4034612575727610, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1276.s27)), 0x2F42E15BL, 0x62330231L)).yzxwxyzz)).odd, ((VECTOR(int32_t, 4))((l_1278 = l_1277), ((VECTOR(int32_t, 2))((-3L), 1L)), 0x55309429L))))).wwwxyzzyxzxyxxxz, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(0x72466A25L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_1279.s34)), ((VECTOR(int32_t, 2))(9L, (-1L)))))), 6L, 0L)).even)), 0x17304BDFL)), ((VECTOR(int32_t, 8))(l_1280, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1281.s7e)))))), 0x599340BFL, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(l_1282.sb79398c3)).s32, ((VECTOR(int32_t, 8))(l_1283.xxyywxzy)).s53))).yxyxyyxx)).s1011410120011631)).s1b, (int32_t)0x61B64B5EL))).yxxxyxxxyxxyyyyy, ((VECTOR(int32_t, 2))(l_1284.s07)).xxyyxyxxyxxyyyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))((((l_1285 , l_1286) , l_1287) , (-2L)), l_1288, 4L, ((VECTOR(int32_t, 2))((-1L))), l_1289, (-5L), 0x11828D87L, l_1290, (-6L), l_1291, ((VECTOR(int32_t, 2))(0x100A0058L)), 9L, 0x0E23A500L, 7L)).hi, ((VECTOR(int32_t, 8))(0x0CE589B5L))))), ((VECTOR(int32_t, 8))(0x57F347E5L))))).s22)).xxyyxxyyxxyxxyyx))).s66)), ((VECTOR(int32_t, 2))(0x17BF3821L)), 0x54E7A851L, 0x2A22EF12L, 0L, 0x1D609F76L)).s57))), 0L, (-5L))).even))).wxwzzywxyyxyzxyy))).s01, ((VECTOR(int32_t, 2))((-1L)))))).yxyxxxxyyxyyxyyy))).hi))).hi, ((VECTOR(int32_t, 4))(0L))))), ((VECTOR(int32_t, 4))(0x7CD9C296L)), 1L, l_1292, l_1293, ((VECTOR(int32_t, 4))(3L)))).s73, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0x4A8DFAC2L)))))))).yxyyyyxyxyyyyxxy)))))).even))).s2));
                        unsigned int result = 0;
                        result += l_1220;
                        result += l_1221.s7;
                        result += l_1221.s6;
                        result += l_1221.s5;
                        result += l_1221.s4;
                        result += l_1221.s3;
                        result += l_1221.s2;
                        result += l_1221.s1;
                        result += l_1221.s0;
                        result += l_1222;
                        result += l_1223.f0;
                        result += l_1223.f1;
                        result += l_1223.f2;
                        result += l_1223.f3;
                        result += l_1223.f4;
                        result += l_1223.f5;
                        result += l_1223.f6;
                        result += l_1223.f7;
                        result += l_1224.sf;
                        result += l_1224.se;
                        result += l_1224.sd;
                        result += l_1224.sc;
                        result += l_1224.sb;
                        result += l_1224.sa;
                        result += l_1224.s9;
                        result += l_1224.s8;
                        result += l_1224.s7;
                        result += l_1224.s6;
                        result += l_1224.s5;
                        result += l_1224.s4;
                        result += l_1224.s3;
                        result += l_1224.s2;
                        result += l_1224.s1;
                        result += l_1224.s0;
                        result += l_1225.y;
                        result += l_1225.x;
                        result += l_1226.y;
                        result += l_1226.x;
                        result += l_1227.y;
                        result += l_1227.x;
                        result += l_1228.s7;
                        result += l_1228.s6;
                        result += l_1228.s5;
                        result += l_1228.s4;
                        result += l_1228.s3;
                        result += l_1228.s2;
                        result += l_1228.s1;
                        result += l_1228.s0;
                        result += l_1229.sf;
                        result += l_1229.se;
                        result += l_1229.sd;
                        result += l_1229.sc;
                        result += l_1229.sb;
                        result += l_1229.sa;
                        result += l_1229.s9;
                        result += l_1229.s8;
                        result += l_1229.s7;
                        result += l_1229.s6;
                        result += l_1229.s5;
                        result += l_1229.s4;
                        result += l_1229.s3;
                        result += l_1229.s2;
                        result += l_1229.s1;
                        result += l_1229.s0;
                        result += l_1230;
                        result += l_1231;
                        result += l_1232;
                        result += l_1233.y;
                        result += l_1233.x;
                        result += l_1234;
                        result += l_1235;
                        result += l_1236;
                        result += l_1237;
                        result += l_1238.f0;
                        result += l_1238.f1;
                        result += l_1238.f2;
                        result += l_1238.f3;
                        result += l_1238.f4;
                        result += l_1238.f5;
                        result += l_1238.f6;
                        result += l_1238.f7;
                        result += l_1239;
                        result += l_1240;
                        result += l_1241;
                        result += l_1242;
                        result += l_1243;
                        result += l_1244;
                        result += l_1245;
                        result += l_1246.sf;
                        result += l_1246.se;
                        result += l_1246.sd;
                        result += l_1246.sc;
                        result += l_1246.sb;
                        result += l_1246.sa;
                        result += l_1246.s9;
                        result += l_1246.s8;
                        result += l_1246.s7;
                        result += l_1246.s6;
                        result += l_1246.s5;
                        result += l_1246.s4;
                        result += l_1246.s3;
                        result += l_1246.s2;
                        result += l_1246.s1;
                        result += l_1246.s0;
                        result += l_1247.sf;
                        result += l_1247.se;
                        result += l_1247.sd;
                        result += l_1247.sc;
                        result += l_1247.sb;
                        result += l_1247.sa;
                        result += l_1247.s9;
                        result += l_1247.s8;
                        result += l_1247.s7;
                        result += l_1247.s6;
                        result += l_1247.s5;
                        result += l_1247.s4;
                        result += l_1247.s3;
                        result += l_1247.s2;
                        result += l_1247.s1;
                        result += l_1247.s0;
                        result += l_1248.y;
                        result += l_1248.x;
                        result += l_1249.y;
                        result += l_1249.x;
                        result += l_1250.w;
                        result += l_1250.z;
                        result += l_1250.y;
                        result += l_1250.x;
                        result += l_1251.w;
                        result += l_1251.z;
                        result += l_1251.y;
                        result += l_1251.x;
                        result += l_1252.sf;
                        result += l_1252.se;
                        result += l_1252.sd;
                        result += l_1252.sc;
                        result += l_1252.sb;
                        result += l_1252.sa;
                        result += l_1252.s9;
                        result += l_1252.s8;
                        result += l_1252.s7;
                        result += l_1252.s6;
                        result += l_1252.s5;
                        result += l_1252.s4;
                        result += l_1252.s3;
                        result += l_1252.s2;
                        result += l_1252.s1;
                        result += l_1252.s0;
                        result += l_1253;
                        result += l_1254.s7;
                        result += l_1254.s6;
                        result += l_1254.s5;
                        result += l_1254.s4;
                        result += l_1254.s3;
                        result += l_1254.s2;
                        result += l_1254.s1;
                        result += l_1254.s0;
                        int l_1255_i0;
                        for (l_1255_i0 = 0; l_1255_i0 < 1; l_1255_i0++) {
                            result += l_1255[l_1255_i0];
                        }
                        result += l_1258;
                        result += l_1259.s7;
                        result += l_1259.s6;
                        result += l_1259.s5;
                        result += l_1259.s4;
                        result += l_1259.s3;
                        result += l_1259.s2;
                        result += l_1259.s1;
                        result += l_1259.s0;
                        result += l_1260.w;
                        result += l_1260.z;
                        result += l_1260.y;
                        result += l_1260.x;
                        result += l_1261;
                        result += l_1262.s7;
                        result += l_1262.s6;
                        result += l_1262.s5;
                        result += l_1262.s4;
                        result += l_1262.s3;
                        result += l_1262.s2;
                        result += l_1262.s1;
                        result += l_1262.s0;
                        result += l_1263.y;
                        result += l_1263.x;
                        result += l_1264.s7;
                        result += l_1264.s6;
                        result += l_1264.s5;
                        result += l_1264.s4;
                        result += l_1264.s3;
                        result += l_1264.s2;
                        result += l_1264.s1;
                        result += l_1264.s0;
                        result += l_1265.w;
                        result += l_1265.z;
                        result += l_1265.y;
                        result += l_1265.x;
                        result += l_1266.sf;
                        result += l_1266.se;
                        result += l_1266.sd;
                        result += l_1266.sc;
                        result += l_1266.sb;
                        result += l_1266.sa;
                        result += l_1266.s9;
                        result += l_1266.s8;
                        result += l_1266.s7;
                        result += l_1266.s6;
                        result += l_1266.s5;
                        result += l_1266.s4;
                        result += l_1266.s3;
                        result += l_1266.s2;
                        result += l_1266.s1;
                        result += l_1266.s0;
                        result += l_1267.sf;
                        result += l_1267.se;
                        result += l_1267.sd;
                        result += l_1267.sc;
                        result += l_1267.sb;
                        result += l_1267.sa;
                        result += l_1267.s9;
                        result += l_1267.s8;
                        result += l_1267.s7;
                        result += l_1267.s6;
                        result += l_1267.s5;
                        result += l_1267.s4;
                        result += l_1267.s3;
                        result += l_1267.s2;
                        result += l_1267.s1;
                        result += l_1267.s0;
                        result += l_1268;
                        result += l_1269;
                        result += l_1270.sf;
                        result += l_1270.se;
                        result += l_1270.sd;
                        result += l_1270.sc;
                        result += l_1270.sb;
                        result += l_1270.sa;
                        result += l_1270.s9;
                        result += l_1270.s8;
                        result += l_1270.s7;
                        result += l_1270.s6;
                        result += l_1270.s5;
                        result += l_1270.s4;
                        result += l_1270.s3;
                        result += l_1270.s2;
                        result += l_1270.s1;
                        result += l_1270.s0;
                        result += l_1271.y;
                        result += l_1271.x;
                        result += l_1272.sf;
                        result += l_1272.se;
                        result += l_1272.sd;
                        result += l_1272.sc;
                        result += l_1272.sb;
                        result += l_1272.sa;
                        result += l_1272.s9;
                        result += l_1272.s8;
                        result += l_1272.s7;
                        result += l_1272.s6;
                        result += l_1272.s5;
                        result += l_1272.s4;
                        result += l_1272.s3;
                        result += l_1272.s2;
                        result += l_1272.s1;
                        result += l_1272.s0;
                        result += l_1273.sf;
                        result += l_1273.se;
                        result += l_1273.sd;
                        result += l_1273.sc;
                        result += l_1273.sb;
                        result += l_1273.sa;
                        result += l_1273.s9;
                        result += l_1273.s8;
                        result += l_1273.s7;
                        result += l_1273.s6;
                        result += l_1273.s5;
                        result += l_1273.s4;
                        result += l_1273.s3;
                        result += l_1273.s2;
                        result += l_1273.s1;
                        result += l_1273.s0;
                        result += l_1274.s7;
                        result += l_1274.s6;
                        result += l_1274.s5;
                        result += l_1274.s4;
                        result += l_1274.s3;
                        result += l_1274.s2;
                        result += l_1274.s1;
                        result += l_1274.s0;
                        result += l_1275.s7;
                        result += l_1275.s6;
                        result += l_1275.s5;
                        result += l_1275.s4;
                        result += l_1275.s3;
                        result += l_1275.s2;
                        result += l_1275.s1;
                        result += l_1275.s0;
                        result += l_1276.sf;
                        result += l_1276.se;
                        result += l_1276.sd;
                        result += l_1276.sc;
                        result += l_1276.sb;
                        result += l_1276.sa;
                        result += l_1276.s9;
                        result += l_1276.s8;
                        result += l_1276.s7;
                        result += l_1276.s6;
                        result += l_1276.s5;
                        result += l_1276.s4;
                        result += l_1276.s3;
                        result += l_1276.s2;
                        result += l_1276.s1;
                        result += l_1276.s0;
                        result += l_1277;
                        result += l_1278;
                        result += l_1279.s7;
                        result += l_1279.s6;
                        result += l_1279.s5;
                        result += l_1279.s4;
                        result += l_1279.s3;
                        result += l_1279.s2;
                        result += l_1279.s1;
                        result += l_1279.s0;
                        result += l_1280;
                        result += l_1281.sf;
                        result += l_1281.se;
                        result += l_1281.sd;
                        result += l_1281.sc;
                        result += l_1281.sb;
                        result += l_1281.sa;
                        result += l_1281.s9;
                        result += l_1281.s8;
                        result += l_1281.s7;
                        result += l_1281.s6;
                        result += l_1281.s5;
                        result += l_1281.s4;
                        result += l_1281.s3;
                        result += l_1281.s2;
                        result += l_1281.s1;
                        result += l_1281.s0;
                        result += l_1282.sf;
                        result += l_1282.se;
                        result += l_1282.sd;
                        result += l_1282.sc;
                        result += l_1282.sb;
                        result += l_1282.sa;
                        result += l_1282.s9;
                        result += l_1282.s8;
                        result += l_1282.s7;
                        result += l_1282.s6;
                        result += l_1282.s5;
                        result += l_1282.s4;
                        result += l_1282.s3;
                        result += l_1282.s2;
                        result += l_1282.s1;
                        result += l_1282.s0;
                        result += l_1283.w;
                        result += l_1283.z;
                        result += l_1283.y;
                        result += l_1283.x;
                        result += l_1284.s7;
                        result += l_1284.s6;
                        result += l_1284.s5;
                        result += l_1284.s4;
                        result += l_1284.s3;
                        result += l_1284.s2;
                        result += l_1284.s1;
                        result += l_1284.s0;
                        result += l_1285.f0;
                        result += l_1285.f1;
                        result += l_1285.f2;
                        result += l_1285.f3;
                        result += l_1285.f4;
                        result += l_1285.f5.f0;
                        result += l_1285.f5.f1;
                        result += l_1285.f5.f2;
                        result += l_1285.f5.f3;
                        result += l_1285.f5.f4;
                        result += l_1285.f5.f5;
                        result += l_1285.f5.f6;
                        result += l_1285.f5.f7;
                        result += l_1285.f6;
                        result += l_1285.f7;
                        result += l_1285.f8;
                        result += l_1285.f9;
                        result += l_1286.f0;
                        result += l_1286.f1;
                        result += l_1286.f2;
                        result += l_1286.f3;
                        result += l_1286.f4;
                        result += l_1286.f5.f0;
                        result += l_1286.f5.f1;
                        result += l_1286.f5.f2;
                        result += l_1286.f5.f3;
                        result += l_1286.f5.f4;
                        result += l_1286.f5.f5;
                        result += l_1286.f5.f6;
                        result += l_1286.f5.f7;
                        result += l_1286.f6;
                        result += l_1286.f7;
                        result += l_1286.f8;
                        result += l_1286.f9;
                        result += l_1287.f0;
                        result += l_1287.f1;
                        result += l_1287.f2;
                        result += l_1287.f3;
                        result += l_1287.f4;
                        result += l_1287.f5.f0;
                        result += l_1287.f5.f1;
                        result += l_1287.f5.f2;
                        result += l_1287.f5.f3;
                        result += l_1287.f5.f4;
                        result += l_1287.f5.f5;
                        result += l_1287.f5.f6;
                        result += l_1287.f5.f7;
                        result += l_1287.f6;
                        result += l_1287.f7;
                        result += l_1287.f8;
                        result += l_1287.f9;
                        result += l_1288;
                        result += l_1289;
                        result += l_1290;
                        result += l_1291;
                        result += l_1292;
                        result += l_1293;
                        result += l_1294;
                        result += l_1295;
                        atomic_add(&p_1401->l_special_values[13], result);
                    }
                    else
                    { /* block id: 492 */
                        (1 + 1);
                    }
                    l_948[3][2] = 0x3C5C4B0AL;
                    if (p_30)
                        break;
                    for (p_1401->g_313.f0 = 0; (p_1401->g_313.f0 >= 9); p_1401->g_313.f0 = safe_add_func_int32_t_s_s(p_1401->g_313.f0, 3))
                    { /* block id: 499 */
                        uint32_t l_1301 = 1UL;
                        l_948[2][6] ^= ((VECTOR(int32_t, 2))(l_1298.xy)).even;
                        p_1401->g_1299 = (**p_1401->g_239);
                        l_1301--;
                    }
                }
                else
                { /* block id: 504 */
                    int32_t *l_1306 = &p_1401->g_1005.f2;
                    int32_t l_1307 = 0x42C6D354L;
                    int32_t l_1309 = 5L;
                    VECTOR(int32_t, 4) l_1310 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x785F768CL), 0x785F768CL);
                    int i;
                    for (p_1401->g_390.f8 = 9; (p_1401->g_390.f8 > 32); p_1401->g_390.f8 = safe_add_func_uint16_t_u_u(p_1401->g_390.f8, 5))
                    { /* block id: 507 */
                        return l_1306;
                    }
                    ++l_1313;
                }
                if ((((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(0x21L, 0x7EL)).yyxx, ((VECTOR(int8_t, 16))((safe_mod_func_int32_t_s_s(((l_1338 &= ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_1318.zywwzwxwyxxwwwyw)).s8d)).xxxx, ((VECTOR(uint64_t, 8))(0x8A99D8DF22029145L, 0UL, ((VECTOR(uint64_t, 2))(0x6759BF50EE36B442L, 0x666F25577F7A6ADBL)), (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((-1L), 15)), ((safe_mul_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((*l_1327) = p_29), p_1401->g_802.f4)) >= (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((0x076BE8FE6693C5F5L & (&p_1401->g_64 != (((0x3EA529E6L || (l_1330[4][0] == (l_1335 = ((safe_add_func_uint64_t_u_u(((0x7A44733ADB965F39L | (((*l_1333) = ((((4294967291UL & p_1401->g_131.s7) | 0x5F2BL) & l_1308[1][0][7]) >= 0x4226D06AE682A0E5L)) , 0x657C4FD2D9FEAF18L)) < 0x171E2DDFL), p_31)) , l_1330[4][5])))) & p_31) , (void*)0))) > l_942), ((VECTOR(uint8_t, 4))(0xEEL)), 1UL, 255UL, l_1312, l_1298.y, 248UL, ((VECTOR(uint8_t, 2))(255UL)), p_1401->g_1044.s4, GROUP_DIVERGE(2, 1), 0xA8L, 0x71L)))).even, ((VECTOR(uint8_t, 8))(253UL))))).s6, 7))), 0x7C41L)) , p_31))), 3UL, 18446744073709551606UL, 0x05769469C8693B82L)).odd))), (uint64_t)FAKE_DIVERGE(p_1401->local_2_offset, get_local_id(2), 10), (uint64_t)p_30))).wyzyxyxz)).s3) == l_1084.f0), p_1401->g_186[5][0][4])), 0x5DL, ((VECTOR(int8_t, 2))(4L)), 0x30L, 0x4CL, 1L, ((VECTOR(int8_t, 4))(0L)), (*p_1401->g_52), 0x08L, 0x69L, 0L, 0L)).sb0a3))), ((VECTOR(int8_t, 2))(0x5FL)), 0x13L, (-1L), (-3L), ((VECTOR(int8_t, 4))(0x31L)), ((VECTOR(int8_t, 2))(0x43L)), (-1L))).s2 < l_1298.x) || 0UL) , 0x47079D7AL))
                { /* block id: 516 */
                    int32_t **l_1340 = &l_932[1];
                    (*l_1340) = func_79(func_79(&l_1308[1][0][4], (l_1339 = &p_1401->g_459[4][4][0]), p_1401), &p_1401->g_84, p_1401);
                    if ((atomic_inc(&p_1401->l_atomic_input[45]) == 7))
                    { /* block id: 520 */
                        int32_t l_1342 = 0x078B0C54L;
                        int32_t *l_1341[6] = {&l_1342,&l_1342,&l_1342,&l_1342,&l_1342,&l_1342};
                        int32_t *l_1343 = &l_1342;
                        int32_t l_1344 = 0x471C29F8L;
                        int16_t l_1345 = 0x1118L;
                        uint16_t l_1346 = 0x74C1L;
                        int i;
                        l_1343 = l_1341[2];
                        --l_1346;
                        unsigned int result = 0;
                        result += l_1342;
                        result += l_1344;
                        result += l_1345;
                        result += l_1346;
                        atomic_add(&p_1401->l_special_values[45], result);
                    }
                    else
                    { /* block id: 523 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 526 */
                    int64_t *l_1353 = (void*)0;
                    int64_t *l_1354[8][6] = {{&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5,&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5},{&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5,&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5},{&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5,&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5},{&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5,&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5},{&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5,&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5},{&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5,&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5},{&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5,&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5},{&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5,&p_1401->g_313.f5,&p_1401->g_1005.f5,&p_1401->g_313.f5}};
                    uint32_t l_1355 = 0x135B143EL;
                    uint64_t ***l_1363 = &l_1191;
                    int32_t **l_1369[8] = {&l_932[1],&l_932[1],&l_932[1],&l_932[1],&l_932[1],&l_932[1],&l_932[1],&l_932[1]};
                    int i, j;
                    l_948[2][6] = ((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(l_1351.s2577)), ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(l_1352.xxyy)).xzwzxyzw, ((VECTOR(uint8_t, 8))(((l_995.x <= (l_1355 = p_29)) || ((l_1298.y >= l_1298.x) & (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_1358.wx)).yyyx)))).hi)), ((VECTOR(uint32_t, 8))(l_1359.wxzyzyzz)).s20))).hi, (l_1360 , (safe_add_func_int32_t_s_s(l_1308[0][0][3], (l_1364 = ((((&p_1401->g_804 != ((*l_1363) = &l_1336)) <= 0x38L) < p_31) , p_29))))))))), 0xEBL, ((VECTOR(uint8_t, 2))(5UL)), ((VECTOR(uint8_t, 2))(255UL)), 255UL, 253UL))))).lo, ((VECTOR(int16_t, 4))(0x2742L)))))))).yzyxzyywzyywxzxy, ((VECTOR(int16_t, 16))((-1L)))))).s9d, ((VECTOR(int16_t, 2))((-10L)))))).even, l_1365)) > l_1365);
                    l_1298.x = (((VECTOR(int64_t, 8))(p_1401->g_1366.xxywzyxz)).s6 ^ (!(safe_lshift_func_int16_t_s_s(p_31, 10))));
                    l_1370 = (void*)0;
                }
                return &p_1401->g_21[2];
            }
            (*l_1373) = func_79(((*p_1401->g_240) , func_79(&p_1401->g_21[2], l_1339, p_1401)), (p_1401->g_151 , l_1339), p_1401);
        }
        l_948[2][6] ^= (((((~(((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x5DL, 0x50L)), ((VECTOR(int8_t, 4))(0x72L, (((*l_1370) &= ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_1374.yy)))).odd) == (((*p_1401->g_83) != (*p_1401->g_83)) >= ((-2L) != (p_31 ^ (!(safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((~(*p_1401->g_20)), (((VECTOR(int64_t, 2))(0x67BA723BEC4E756BL, 0x08B2E8655F593007L)).lo && (safe_rshift_func_uint16_t_u_u(((((VECTOR(uint16_t, 8))(0UL, 0x102EL, (((p_1401->g_312.f5 <= ((*l_1395) = ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))((((safe_rshift_func_int16_t_s_u(((l_1351.s0 && ((VECTOR(uint8_t, 2))(l_1388.yx)).hi) > ((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1401->g_1391.s470f)).yzyxxwyzwzxwzzyz)).s07)), 8L, (-8L))).x, ((safe_rshift_func_uint16_t_u_u(((p_31 == 1L) <= 0x463E55D9L), FAKE_DIVERGE(p_1401->group_1_offset, get_group_id(1), 10))) , 4294967295UL))) & l_1394)), 9)) < 4294967295UL) <= p_29), (-5L), 0x0015L, 0x72BDL)), ((VECTOR(int16_t, 4))(0x2F3EL)), ((VECTOR(int16_t, 4))(0L))))), ((VECTOR(int16_t, 4))(0x1582L))))).w)) >= p_29) , p_32), 65532UL, 0xF1C7L, p_1401->g_861, 9UL, 65535UL)).s6 != 0x21FCL) != FAKE_DIVERGE(p_1401->local_0_offset, get_local_id(0), 10)), p_31))))), p_1401->g_1147.s4)), p_32)), p_30))))))), 8L, 0x52L)), 4L, (*l_1370), p_29, ((VECTOR(int8_t, 2))(4L)), (*l_1370), 0x63L, 0x7EL, (-1L), (-3L))).s1 != p_1401->g_390.f6) , p_30) == p_1401->g_1391.sb)) && 0x41L) >= FAKE_DIVERGE(p_1401->local_0_offset, get_local_id(0), 10)) <= 5L) < FAKE_DIVERGE(p_1401->global_0_offset, get_global_id(0), 10));
    }
    (*p_1401->g_20) = (*p_1401->g_20);
    return &p_1401->g_21[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_783
 * writes:
 */
uint32_t  func_40(struct S0  p_41, int8_t * p_42, int8_t * p_43, int32_t * p_44, uint64_t * p_45, struct S3 * p_1401)
{ /* block id: 298 */
    if ((atomic_inc(&p_1401->g_atomic_input[60 * get_linear_group_id() + 58]) == 8))
    { /* block id: 300 */
        int32_t l_805 = 0x6660AD71L;
        for (l_805 = 0; (l_805 != (-4)); l_805--)
        { /* block id: 303 */
            struct S1 l_809 = {0x9CE0D2F76DEE03FBL,0xAC8A2582214ED277L,0x720CBC7BL,4294967289UL,0x47BFA0E5L,0x7E671E196A23565AL,0xF13D396FCAE371C7L,0x5BL};/* VOLATILE GLOBAL l_809 */
            struct S1 *l_808 = &l_809;
            uint8_t l_810 = 0x16L;
            l_808 = (void*)0;
            l_810 ^= (-1L);
            for (l_809.f2 = 0; (l_809.f2 <= (-4)); l_809.f2--)
            { /* block id: 308 */
                int32_t l_813 = (-1L);
                struct S1 l_821 = {0x64D554BEA524AACCL,0xAC2ACC1CE5EC2D13L,6L,1UL,0x11BD2CD5L,0x77292D4BB16AF140L,0xDA3D6A9B2960C76EL,0x26L};/* VOLATILE GLOBAL l_821 */
                int64_t l_822 = 0x579A5FB22913DE69L;
                VECTOR(int32_t, 16) l_823 = (VECTOR(int32_t, 16))(0x0BB8FFDEL, (VECTOR(int32_t, 4))(0x0BB8FFDEL, (VECTOR(int32_t, 2))(0x0BB8FFDEL, 4L), 4L), 4L, 0x0BB8FFDEL, 4L, (VECTOR(int32_t, 2))(0x0BB8FFDEL, 4L), (VECTOR(int32_t, 2))(0x0BB8FFDEL, 4L), 0x0BB8FFDEL, 4L, 0x0BB8FFDEL, 4L);
                VECTOR(int8_t, 16) l_824 = (VECTOR(int8_t, 16))(0x59L, (VECTOR(int8_t, 4))(0x59L, (VECTOR(int8_t, 2))(0x59L, 0x4BL), 0x4BL), 0x4BL, 0x59L, 0x4BL, (VECTOR(int8_t, 2))(0x59L, 0x4BL), (VECTOR(int8_t, 2))(0x59L, 0x4BL), 0x59L, 0x4BL, 0x59L, 0x4BL);
                VECTOR(int8_t, 2) l_825 = (VECTOR(int8_t, 2))(0x6AL, 0x75L);
                VECTOR(int8_t, 4) l_826 = (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, 0L), 0L);
                VECTOR(int8_t, 16) l_827 = (VECTOR(int8_t, 16))(0x42L, (VECTOR(int8_t, 4))(0x42L, (VECTOR(int8_t, 2))(0x42L, 1L), 1L), 1L, 0x42L, 1L, (VECTOR(int8_t, 2))(0x42L, 1L), (VECTOR(int8_t, 2))(0x42L, 1L), 0x42L, 1L, 0x42L, 1L);
                VECTOR(int8_t, 8) l_828 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x43L), 0x43L), 0x43L, 1L, 0x43L);
                VECTOR(int8_t, 8) l_829 = (VECTOR(int8_t, 8))(0x1DL, (VECTOR(int8_t, 4))(0x1DL, (VECTOR(int8_t, 2))(0x1DL, 0L), 0L), 0L, 0x1DL, 0L);
                uint64_t l_830 = 0xA6663D3C7B313F6DL;
                VECTOR(int8_t, 16) l_831 = (VECTOR(int8_t, 16))(0x16L, (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, 0x01L), 0x01L), 0x01L, 0x16L, 0x01L, (VECTOR(int8_t, 2))(0x16L, 0x01L), (VECTOR(int8_t, 2))(0x16L, 0x01L), 0x16L, 0x01L, 0x16L, 0x01L);
                VECTOR(int8_t, 16) l_832 = (VECTOR(int8_t, 16))(0x66L, (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 0x59L), 0x59L), 0x59L, 0x66L, 0x59L, (VECTOR(int8_t, 2))(0x66L, 0x59L), (VECTOR(int8_t, 2))(0x66L, 0x59L), 0x66L, 0x59L, 0x66L, 0x59L);
                VECTOR(int8_t, 4) l_833 = (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, 1L), 1L);
                int16_t l_834 = 0x279BL;
                uint64_t l_835 = 1UL;
                VECTOR(int8_t, 2) l_836 = (VECTOR(int8_t, 2))(0x07L, 0x09L);
                VECTOR(int8_t, 8) l_837 = (VECTOR(int8_t, 8))(0x79L, (VECTOR(int8_t, 4))(0x79L, (VECTOR(int8_t, 2))(0x79L, 0x3FL), 0x3FL), 0x3FL, 0x79L, 0x3FL);
                VECTOR(int8_t, 2) l_838 = (VECTOR(int8_t, 2))(0x3BL, (-2L));
                VECTOR(int8_t, 4) l_839 = (VECTOR(int8_t, 4))(0x75L, (VECTOR(int8_t, 2))(0x75L, (-1L)), (-1L));
                uint16_t l_840 = 0xB5C9L;
                uint16_t l_841 = 0x82A8L;
                int64_t l_842[3][10][5] = {{{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L}},{{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L}},{{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L},{4L,0x476C0A265D1166C4L,0x2AB3F716F8F5AB5CL,0L,0x51BBC521AAE78F81L}}};
                uint16_t l_843 = 0x9E83L;
                uint8_t l_844 = 255UL;
                int16_t l_845 = 1L;
                int16_t l_846[2];
                int64_t l_847 = 0x1EEA1609226699A8L;
                VECTOR(int32_t, 2) l_848 = (VECTOR(int32_t, 2))(1L, 0L);
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_846[i] = 0x7521L;
                for (l_813 = 12; (l_813 > (-21)); l_813--)
                { /* block id: 311 */
                    int32_t l_816 = 1L;
                    int32_t *l_817 = &l_816;
                    int32_t *l_818 = &l_816;
                    int32_t *l_819 = &l_816;
                    int32_t *l_820 = &l_816;
                    l_816 = (-5L);
                    l_820 = (l_819 = (l_818 = l_817));
                }
                l_809.f4 = ((l_821 , ((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(250UL, (l_822 &= 0xBEL), 0xD4L, 0x20L)).lo)).xxyyyxyxyyyyxyxx, (uint8_t)(l_810 = (((VECTOR(int32_t, 4))(l_823.s027b)).x , ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 16))(l_824.sdffe4624d8c4f8e1)).lo))).s24, ((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(0x23L, 0x6EL)), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(0x5FL, 0x45L)).yyxx, ((VECTOR(int8_t, 2))(l_825.yy)).yyyy))).odd, ((VECTOR(int8_t, 2))(l_826.xw)))))))), ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_827.s77)).yxxyyyyxxyxyyyxy)).se5, ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(l_828.s50)).xyyxxyxyyyxyxxyy, ((VECTOR(int8_t, 8))(l_829.s33221326)).s7167732322550525, ((VECTOR(int8_t, 4))((-3L), 0x73L, 1L, 0x04L)).yzzxyxzwwwxyyxwy))).s64))), l_830, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(2L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_831.s03cb28d153ce5fa2)).sa6)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_832.s9445cbd481b1d73f)).odd)).s5034757302372121)).sf3)), 0x0CL, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(l_833.yz)).xyyxxyxyyyyxxxxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(4L, 0x23L)), 0x53L, l_834, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(0x58L, (-1L), ((VECTOR(int8_t, 2))(0x78L, 0x2EL)), (l_835 = 0L), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(l_836.xx)), ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(l_837.s5731)).hi, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(0x64L, ((VECTOR(int8_t, 4))(l_838.xxyy)), (-7L), 0x2EL, 0x2CL)).s27, ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_839.zxywwyyzxwzwwxyy)).s03bc)).hi, ((VECTOR(int8_t, 16))((l_842[1][7][0] ^= (l_841 = l_840)), ((VECTOR(int8_t, 2))(1L)), l_843, ((VECTOR(int8_t, 8))((-1L))), ((VECTOR(int8_t, 4))(0x21L)))).s7b))).xyxx, (int8_t)l_844, (int8_t)l_845))).even, ((VECTOR(int8_t, 2))(0x34L))))).yyxxxxxxxxyyyxyx)).sab, ((VECTOR(int8_t, 2))(0x45L))))).yyyx, ((VECTOR(int8_t, 4))(0x6AL)), ((VECTOR(int8_t, 4))((-3L)))))).hi, ((VECTOR(int8_t, 2))(0L)))))))), 0x7FL)).s33, ((VECTOR(int8_t, 2))(0x2EL))))), 0x6BL, 1L)))).s2501623616677016))).s53)).xxxyxyxyyyxyyxxx)).s8f, ((VECTOR(int8_t, 2))((-4L)))))), 0x20L)).s4546772143522032)).sb5, ((VECTOR(int8_t, 2))((-4L)))))).yxyx, ((VECTOR(int8_t, 4))(0x0CL)), ((VECTOR(int8_t, 4))((-7L)))))).xxzyzxxy)), l_846[0], ((VECTOR(int8_t, 4))(0L)), 0x21L, 1L)).s8b)), 1L)).hi))).hi))).hi))))).s1) , l_847);
                l_809.f4 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_848.xxyxxyxy)).s0747053425305503)).s6;
            }
            for (l_809.f2 = 13; (l_809.f2 <= 25); l_809.f2 = safe_add_func_uint8_t_u_u(l_809.f2, 9))
            { /* block id: 327 */
                int32_t l_851[3];
                VECTOR(int32_t, 16) l_852 = (VECTOR(int32_t, 16))(0x2A604FD2L, (VECTOR(int32_t, 4))(0x2A604FD2L, (VECTOR(int32_t, 2))(0x2A604FD2L, 8L), 8L), 8L, 0x2A604FD2L, 8L, (VECTOR(int32_t, 2))(0x2A604FD2L, 8L), (VECTOR(int32_t, 2))(0x2A604FD2L, 8L), 0x2A604FD2L, 8L, 0x2A604FD2L, 8L);
                VECTOR(int32_t, 16) l_853 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x7F370D28L), 0x7F370D28L), 0x7F370D28L, (-3L), 0x7F370D28L, (VECTOR(int32_t, 2))((-3L), 0x7F370D28L), (VECTOR(int32_t, 2))((-3L), 0x7F370D28L), (-3L), 0x7F370D28L, (-3L), 0x7F370D28L);
                VECTOR(int32_t, 16) l_854 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L, (VECTOR(int32_t, 2))((-9L), 1L), (VECTOR(int32_t, 2))((-9L), 1L), (-9L), 1L, (-9L), 1L);
                int32_t l_855[3];
                VECTOR(int32_t, 8) l_856 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x247CB0D8L), 0x247CB0D8L), 0x247CB0D8L, 0L, 0x247CB0D8L);
                uint32_t l_857 = 0UL;
                uint32_t l_858 = 3UL;
                int32_t l_859 = 0x15E30433L;
                uint8_t l_860 = 3UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_851[i] = (-4L);
                for (i = 0; i < 3; i++)
                    l_855[i] = 0x363FA951L;
                l_809.f4 = (l_851[0] = ((VECTOR(int32_t, 2))((-1L), 0x2790206CL)).lo);
                l_860 = (l_854.s6 = (l_859 &= ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_852.sb62c)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(l_853.s92d7574d)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_854.s162f)).even)).yxyyyxxx))))).s3321764131040723)).s7130)), l_855[2], (l_809.f4 |= 4L), l_856.s7, l_857, 6L, l_858, (-6L), 0x52F48E8BL))))).s0));
            }
        }
        unsigned int result = 0;
        result += l_805;
        atomic_add(&p_1401->g_special_values[60 * get_linear_group_id() + 58], result);
    }
    else
    { /* block id: 336 */
        (1 + 1);
    }
    return p_1401->g_783.s2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_313.f0 p_1401->g_390.f3 p_1401->g_802 p_1401->g_110 p_1401->g_83 p_1401->g_84
 * writes: p_1401->g_313.f0 p_1401->g_141 p_1401->g_390.f3
 */
int8_t * func_47(int8_t * p_48, int32_t  p_49, int32_t  p_50, struct S3 * p_1401)
{ /* block id: 286 */
    for (p_1401->g_313.f0 = 1; (p_1401->g_313.f0 != 24); p_1401->g_313.f0++)
    { /* block id: 289 */
        int32_t **l_795 = &p_1401->g_141;
        (*l_795) = &p_1401->g_21[2];
        for (p_1401->g_390.f3 = 0; (p_1401->g_390.f3 <= (-3)); p_1401->g_390.f3 = safe_sub_func_uint64_t_u_u(p_1401->g_390.f3, 9))
        { /* block id: 293 */
            p_50 = (safe_mod_func_int8_t_s_s((FAKE_DIVERGE(p_1401->local_0_offset, get_local_id(0), 10) != (safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), p_49))), (p_1401->g_802 , p_1401->g_110.y)));
        }
    }
    return (*p_1401->g_83);
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_748 p_1401->g_377.f9 p_1401->g_201.f1 p_1401->g_764 p_1401->g_765 p_1401->g_768 p_1401->g_776 p_1401->g_782 p_1401->g_783 p_1401->g_312.f1 p_1401->g_199 p_1401->g_153 p_1401->g_154 p_1401->g_236.f4 p_1401->g_791 p_1401->g_83 p_1401->g_84
 * writes: p_1401->g_748 p_1401->g_776 p_1401->g_236.f4 p_1401->g_656
 */
int8_t * func_55(uint64_t * p_56, int32_t * p_57, struct S3 * p_1401)
{ /* block id: 279 */
    VECTOR(int16_t, 16) l_751 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int16_t, 2))(0L, 0L), (VECTOR(int16_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
    VECTOR(int16_t, 2) l_752 = (VECTOR(int16_t, 2))(0x348DL, 0x2383L);
    VECTOR(int16_t, 16) l_753 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x4264L), 0x4264L), 0x4264L, (-1L), 0x4264L, (VECTOR(int16_t, 2))((-1L), 0x4264L), (VECTOR(int16_t, 2))((-1L), 0x4264L), (-1L), 0x4264L, (-1L), 0x4264L);
    VECTOR(int32_t, 8) l_761 = (VECTOR(int32_t, 8))(0x3CA4F13AL, (VECTOR(int32_t, 4))(0x3CA4F13AL, (VECTOR(int32_t, 2))(0x3CA4F13AL, (-2L)), (-2L)), (-2L), 0x3CA4F13AL, (-2L));
    VECTOR(int32_t, 2) l_762 = (VECTOR(int32_t, 2))(1L, 0x5C633D1DL);
    VECTOR(uint32_t, 8) l_763 = (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x344FABC9L), 0x344FABC9L), 0x344FABC9L, 4294967288UL, 0x344FABC9L);
    VECTOR(uint32_t, 4) l_766 = (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0xEC3281D7L), 0xEC3281D7L);
    VECTOR(uint32_t, 8) l_767 = (VECTOR(uint32_t, 8))(0xC68C7266L, (VECTOR(uint32_t, 4))(0xC68C7266L, (VECTOR(uint32_t, 2))(0xC68C7266L, 0x8D87ED82L), 0x8D87ED82L), 0x8D87ED82L, 0xC68C7266L, 0x8D87ED82L);
    VECTOR(uint32_t, 4) l_769 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL);
    VECTOR(uint32_t, 2) l_770 = (VECTOR(uint32_t, 2))(0x4651C527L, 4294967295UL);
    VECTOR(uint32_t, 16) l_771 = (VECTOR(uint32_t, 16))(0x0C028765L, (VECTOR(uint32_t, 4))(0x0C028765L, (VECTOR(uint32_t, 2))(0x0C028765L, 0x90FD25AAL), 0x90FD25AAL), 0x90FD25AAL, 0x0C028765L, 0x90FD25AAL, (VECTOR(uint32_t, 2))(0x0C028765L, 0x90FD25AAL), (VECTOR(uint32_t, 2))(0x0C028765L, 0x90FD25AAL), 0x0C028765L, 0x90FD25AAL, 0x0C028765L, 0x90FD25AAL);
    VECTOR(uint32_t, 4) l_772 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x8FDA59E0L), 0x8FDA59E0L);
    VECTOR(uint32_t, 2) l_773 = (VECTOR(uint32_t, 2))(0xD736EBFCL, 4294967295UL);
    uint16_t l_774 = 0xBCF8L;
    int32_t *l_775[5];
    VECTOR(int16_t, 8) l_779 = (VECTOR(int16_t, 8))(0x68B4L, (VECTOR(int16_t, 4))(0x68B4L, (VECTOR(int16_t, 2))(0x68B4L, 6L), 6L), 6L, 0x68B4L, 6L);
    int32_t **l_786 = &p_1401->g_141;
    int32_t l_787 = 0x7CAF39FFL;
    int8_t l_788 = 0L;
    int32_t *l_789 = &p_1401->g_236.f4;
    struct S2 *l_790 = (void*)0;
    int i;
    for (i = 0; i < 5; i++)
        l_775[i] = &p_1401->g_776;
    p_1401->g_748--;
    (*l_789) |= (((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(l_751.sb803b239f664fe7f)).s97, ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(l_752.yx)).xyxxxyxy))).s25, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_753.s13)), 0x1E03L, ((safe_unary_minus_func_uint32_t_u(l_751.s6)) & (((safe_mul_func_uint8_t_u_u(l_751.sa, p_1401->g_377.f9)) ^ ((safe_mul_func_uint8_t_u_u(p_1401->g_201.f1, (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(l_761.s10)).yxyyxyyyxxyxyyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_762.xxxxyxyx)).s11)).yyyxxxxxxyyyxyxx))).s7ce6)).y == ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(l_763.s14526063)), ((VECTOR(uint32_t, 16))(p_1401->g_764.s5267677066103716)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_1401->g_765.yx)).yyxxxxxxxxxyyyxy)).lo))), ((VECTOR(uint32_t, 4))(4294967295UL, ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 4))(l_766.zwzz)).hi, ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_767.s71)), 7UL, 9UL)).wwyxxxxx)), ((VECTOR(uint32_t, 2))(3UL, 1UL)).yxyxxyxx))).s46, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(p_1401->g_768.s360cd6e6)), ((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 2))(0x048987C2L, 0x8E3733A8L)).xxxyxyxy, ((VECTOR(uint32_t, 8))(l_769.yxwzzwxw)), ((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 2))(4294967295UL, 9UL)).yyyyyxxyyxyxxxyy, ((VECTOR(uint32_t, 4))(l_770.yyxx)).wwwwyxxwwyxzzyxy, ((VECTOR(uint32_t, 4))(l_771.s8ea5)).wyzxxxyywyyzyzyw))).even))))).s48aa)).yywxxzyxyyxzzwyw, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 2))(l_772.zz)).xxyyyxyxxyxxxxyx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_773.xxxy)).wxxyxyxwwxzwxzwz)).s7e38)).yyyyxxxxwxwxzxyx))))).odd)).s7463115145710264))))).s7c))), 4294967293UL)).yxzwxyyw))).s6))) && (GROUP_DIVERGE(2, 1) == (l_774 >= (((p_1401->g_776 ^= l_762.x) , ((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(l_779.s3670027065767124)).s0, 1)) < (~(safe_add_func_uint32_t_u_u(l_770.x, (((VECTOR(uint8_t, 4))(p_1401->g_782.ywwy)).x , l_769.y)))))) , ((((VECTOR(uint64_t, 2))(p_1401->g_783.s71)).odd && (safe_lshift_func_uint16_t_u_u(((l_786 == &p_57) && GROUP_DIVERGE(1, 1)), p_1401->g_312.f1))) , l_773.x)))))) && FAKE_DIVERGE(p_1401->local_1_offset, get_local_id(1), 10))), 0x64F9L, ((VECTOR(int16_t, 2))(4L)), (-8L))).s53, ((VECTOR(int16_t, 2))(0x6D23L)))))))), (**p_1401->g_199), l_787, (-1L), (**p_1401->g_199), ((VECTOR(int16_t, 2))(4L)), 0x1947L, (-1L), l_788, 0x3722L, l_753.s0, 7L, 0L, 0x26C5L)).even, ((VECTOR(int16_t, 8))((-3L)))))).s11)).yxxxyxxy, ((VECTOR(int16_t, 8))((-6L)))))).s7 && l_761.s3);
    (*p_1401->g_791) = l_790;
    return (*p_1401->g_83);
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_186 p_1401->g_153 p_1401->g_154 p_1401->g_36 p_1401->g_408 p_1401->g_260 p_1401->g_377.f9 p_1401->g_239 p_1401->g_377.f5.f1 p_1401->g_151
 * writes: p_1401->g_186 p_1401->g_409 p_1401->g_260 p_1401->g_377.f9 p_1401->g_240
 */
uint64_t * func_58(int32_t  p_59, int32_t * p_60, int32_t * p_61, int32_t  p_62, uint32_t  p_63, struct S3 * p_1401)
{ /* block id: 264 */
    uint32_t *l_710 = &p_1401->g_186[4][0][6];
    uint8_t *l_718 = (void*)0;
    uint8_t **l_717 = &l_718;
    int16_t *l_726 = &p_1401->g_377.f0;
    VECTOR(int32_t, 2) l_729 = (VECTOR(int32_t, 2))(0x50D1B9EAL, 7L);
    uint16_t *l_730 = (void*)0;
    uint16_t *l_731[5][1][5] = {{{(void*)0,&p_1401->g_377.f9,(void*)0,(void*)0,&p_1401->g_377.f9}},{{(void*)0,&p_1401->g_377.f9,(void*)0,(void*)0,&p_1401->g_377.f9}},{{(void*)0,&p_1401->g_377.f9,(void*)0,(void*)0,&p_1401->g_377.f9}},{{(void*)0,&p_1401->g_377.f9,(void*)0,(void*)0,&p_1401->g_377.f9}},{{(void*)0,&p_1401->g_377.f9,(void*)0,(void*)0,&p_1401->g_377.f9}}};
    struct S1 *l_736 = &p_1401->g_236;
    VECTOR(uint8_t, 16) l_737 = (VECTOR(uint8_t, 16))(0x44L, (VECTOR(uint8_t, 4))(0x44L, (VECTOR(uint8_t, 2))(0x44L, 0UL), 0UL), 0UL, 0x44L, 0UL, (VECTOR(uint8_t, 2))(0x44L, 0UL), (VECTOR(uint8_t, 2))(0x44L, 0UL), 0x44L, 0UL, 0x44L, 0UL);
    int64_t l_746 = 0x69524D2A32003679L;
    struct S2 *l_747[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j, k;
    (*p_60) ^= (safe_add_func_uint64_t_u_u((((*l_710)--) || (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((&p_1401->g_510 == (void*)0) , ((void*)0 == l_717)), ((p_1401->g_260.z ^= (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((*p_1401->g_153), 65535UL)), (~(p_1401->g_36.s7 > (safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 2))(0x813231AE895A7EA6L, 0x26DC0330BF9EA5A7L)).xyyyyxxyxxxxyxxy, (uint64_t)(((*p_1401->g_408) = l_726) != ((safe_add_func_uint64_t_u_u((~l_729.y), l_729.x)) , l_726))))).sf)))))) > 0xDC9597C4L), 0x544DL))) | (-1L)))), p_62))), (-1L)));
    for (p_1401->g_377.f9 = (-4); (p_1401->g_377.f9 != 27); p_1401->g_377.f9 = safe_add_func_int8_t_s_s(p_1401->g_377.f9, 7))
    { /* block id: 271 */
        if (l_729.x)
            break;
    }
    l_747[4] = ((safe_sub_func_uint16_t_u_u(((p_63 > (~(((l_736 != ((*p_1401->g_239) = l_736)) <= (p_1401->g_377.f5.f1 < ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 2))(l_737.s6e)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x21L, 0UL)), ((((l_729.x = ((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0x1DL, 2)), (-1L))) | ((&p_1401->g_186[5][0][4] == (l_710 = ((safe_div_func_int8_t_s_s((p_1401->g_151 , l_746), 0x2EL)) , &p_1401->g_689))) > l_737.sc))) ^ 0UL) != p_63) ^ l_746), 0x64L, 0x5AL, 255UL, 0x19L, 255UL)))).s1042324203605571)).s48))), 0x6BL, 0x3DL)).hi, ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 2))(0xA7L))))).lo)) , 0xB1BAE7C2A9A05DDCL))) > 1L), p_62)) , l_747[4]);
    return &p_1401->g_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_151 p_1401->g_153 p_1401->g_15 p_1401->g_21 p_1401->g_141 p_1401->g_131 p_1401->g_174 p_1401->g_83 p_1401->g_110 p_1401->g_154 p_1401->g_186 p_1401->g_20 p_1401->g_201.f0 p_1401->g_201.f7 p_1401->g_112 p_1401->g_239 p_1401->g_236.f5 p_1401->g_237.f1 p_1401->g_267 p_1401->g_312 p_1401->g_680 p_1401->g_260 p_1401->g_689 p_1401->g_691 p_1401->g_699 p_1401->g_405 p_1401->g_520 p_1401->g_236.f0
 * writes: p_1401->g_151 p_1401->g_21 p_1401->g_141 p_1401->g_84 p_1401->g_186 p_1401->g_199 p_1401->g_201.f0 p_1401->g_236.f5 p_1401->g_268 p_1401->g_83 p_1401->g_313
 */
uint32_t  func_71(uint64_t  p_72, int32_t * p_73, uint64_t * p_74, int32_t * p_75, int32_t  p_76, struct S3 * p_1401)
{ /* block id: 30 */
    int32_t **l_144[10][2] = {{&p_1401->g_141,&p_1401->g_141},{&p_1401->g_141,&p_1401->g_141},{&p_1401->g_141,&p_1401->g_141},{&p_1401->g_141,&p_1401->g_141},{&p_1401->g_141,&p_1401->g_141},{&p_1401->g_141,&p_1401->g_141},{&p_1401->g_141,&p_1401->g_141},{&p_1401->g_141,&p_1401->g_141},{&p_1401->g_141,&p_1401->g_141},{&p_1401->g_141,&p_1401->g_141}};
    int32_t ***l_143 = &l_144[8][1];
    VECTOR(uint32_t, 4) l_145 = (VECTOR(uint32_t, 4))(0xA200B0FFL, (VECTOR(uint32_t, 2))(0xA200B0FFL, 1UL), 1UL);
    struct S0 l_147 = {1L};
    uint64_t l_214[6][6][1] = {{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}};
    int32_t l_226 = 0x17C3F468L;
    struct S1 *l_235[7] = {&p_1401->g_237,(void*)0,&p_1401->g_237,&p_1401->g_237,(void*)0,&p_1401->g_237,&p_1401->g_237};
    struct S1 **l_234 = &l_235[2];
    int32_t l_274 = 0x69FDC198L;
    int8_t l_288 = 3L;
    uint32_t l_292 = 0x2A9C9D6FL;
    int8_t **l_320 = &p_1401->g_84;
    VECTOR(uint8_t, 8) l_334 = (VECTOR(uint8_t, 8))(0xE5L, (VECTOR(uint8_t, 4))(0xE5L, (VECTOR(uint8_t, 2))(0xE5L, 0x46L), 0x46L), 0x46L, 0xE5L, 0x46L);
    VECTOR(uint8_t, 4) l_406 = (VECTOR(uint8_t, 4))(0x2CL, (VECTOR(uint8_t, 2))(0x2CL, 0xFBL), 0xFBL);
    uint8_t l_416 = 0x8BL;
    VECTOR(int8_t, 16) l_470 = (VECTOR(int8_t, 16))(0x2BL, (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, 8L), 8L), 8L, 0x2BL, 8L, (VECTOR(int8_t, 2))(0x2BL, 8L), (VECTOR(int8_t, 2))(0x2BL, 8L), 0x2BL, 8L, 0x2BL, 8L);
    VECTOR(int8_t, 4) l_471 = (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 0x75L), 0x75L);
    uint32_t l_475 = 0UL;
    struct S2 *l_478 = (void*)0;
    int16_t l_492 = 0x2E73L;
    int64_t l_495 = 0x0801816CF682966CL;
    VECTOR(uint8_t, 2) l_533 = (VECTOR(uint8_t, 2))(0xB8L, 0x1CL);
    VECTOR(uint32_t, 4) l_588 = (VECTOR(uint32_t, 4))(0xFD29C0C2L, (VECTOR(uint32_t, 2))(0xFD29C0C2L, 4294967295UL), 4294967295UL);
    VECTOR(uint16_t, 4) l_600 = (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0xA9C6L), 0xA9C6L);
    int16_t ***l_642 = &p_1401->g_408;
    VECTOR(int16_t, 16) l_679 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3984L), 0x3984L), 0x3984L, 1L, 0x3984L, (VECTOR(int16_t, 2))(1L, 0x3984L), (VECTOR(int16_t, 2))(1L, 0x3984L), 1L, 0x3984L, 1L, 0x3984L);
    VECTOR(int16_t, 8) l_692 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0A4CL), 0x0A4CL), 0x0A4CL, (-1L), 0x0A4CL);
    int64_t l_702 = 0L;
    int i, j, k;
    if ((((((*l_143) = (((void*)0 != &p_1401->g_52) , &p_1401->g_141)) == (void*)0) == 0x17DA3237L) != ((VECTOR(uint32_t, 4))(0UL, (~((VECTOR(uint32_t, 4))(l_145.wzzw)).z), 4294967292UL, 4294967290UL)).z))
    { /* block id: 32 */
        int64_t l_146 = 0x188B8C5FC2A831BCL;
        struct S0 l_148 = {0x45L};
        int16_t *l_155[7][4][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_156 = (-1L);
        VECTOR(uint16_t, 4) l_173 = (VECTOR(uint16_t, 4))(0xD996L, (VECTOR(uint16_t, 2))(0xD996L, 65532UL), 65532UL);
        int8_t *l_177 = (void*)0;
        VECTOR(int32_t, 2) l_180 = (VECTOR(int32_t, 2))(0x74864215L, 9L);
        VECTOR(int32_t, 8) l_189 = (VECTOR(int32_t, 8))(0x5025916FL, (VECTOR(int32_t, 4))(0x5025916FL, (VECTOR(int32_t, 2))(0x5025916FL, 0x1CDED3DBL), 0x1CDED3DBL), 0x1CDED3DBL, 0x5025916FL, 0x1CDED3DBL);
        struct S1 *l_200 = &p_1401->g_201;
        int32_t *l_203 = (void*)0;
        uint64_t l_208 = 0x64F4A25614E2AE66L;
        int64_t l_217 = (-1L);
        int64_t *l_229 = &l_146;
        struct S1 ***l_238 = &l_234;
        int64_t *l_241 = &p_1401->g_236.f5;
        int i, j, k;
        if (l_146)
        { /* block id: 33 */
            int32_t *l_157[5];
            uint32_t l_159 = 4294967295UL;
            int32_t l_175[4];
            int i;
            for (i = 0; i < 5; i++)
                l_157[i] = &p_1401->g_21[7];
            for (i = 0; i < 4; i++)
                l_175[i] = 0x131BB2BDL;
            l_148 = l_147;
            for (l_146 = 25; (l_146 < (-7)); l_146--)
            { /* block id: 37 */
                struct S0 *l_152[8] = {&l_148,&l_148,&l_148,&l_148,&l_148,&l_148,&l_148,&l_148};
                int8_t **l_158[8] = {&p_1401->g_84,&p_1401->g_84,&p_1401->g_84,&p_1401->g_84,&p_1401->g_84,&p_1401->g_84,&p_1401->g_84,&p_1401->g_84};
                int i;
                p_1401->g_151 = p_1401->g_151;
                l_156 &= (p_1401->g_153 == l_155[0][0][1]);
                p_73 = func_79(l_157[0], l_158[5], p_1401);
                l_159++;
            }
            for (p_76 = 0; (p_76 == 17); p_76++)
            { /* block id: 45 */
                int32_t *l_164 = &p_1401->g_21[5];
                int8_t *l_176 = &l_148.f0;
                int32_t l_183 = (-6L);
                int32_t l_184 = 0x0CED65FBL;
                int32_t l_185 = 5L;
                l_156 = (&l_156 == (p_1401->g_141 = (l_164 = l_164)));
                (*l_164) |= (+(safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((l_175[3] = (safe_rshift_func_uint16_t_u_u(p_1401->g_131.s4, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 8))(65527UL, 0xC45EL, ((VECTOR(uint16_t, 4))(l_173.zwxz)), 0xC31AL, 65533UL)).even, ((VECTOR(uint16_t, 2))(p_1401->g_174.s53)).yxyx))).x))), (l_176 != ((*p_1401->g_83) = l_177)))), p_1401->g_110.y)), (safe_add_func_uint64_t_u_u(l_173.z, p_1401->g_154[0][2][1])))));
                if (p_72)
                { /* block id: 52 */
                    (*l_164) ^= ((VECTOR(int32_t, 2))(l_180.yx)).hi;
                    if (l_180.y)
                        continue;
                }
                else
                { /* block id: 55 */
                    int64_t l_181 = (-2L);
                    int32_t l_182[5][5][6] = {{{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)}},{{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)}},{{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)}},{{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)}},{{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)},{(-1L),1L,0x1C6D304BL,0x62A0D870L,0L,(-1L)}}};
                    int i, j, k;
                    --p_1401->g_186[5][0][4];
                    if (l_173.z)
                        continue;
                    (*l_164) ^= ((VECTOR(int32_t, 16))(l_189.s7233524376473700)).sa;
                    (*p_1401->g_141) ^= 0x21F8846DL;
                }
            }
            for (p_76 = 0; (p_76 <= (-5)); --p_76)
            { /* block id: 64 */
                return p_76;
            }
        }
        else
        { /* block id: 67 */
            uint8_t l_193 = 0xCAL;
            int32_t l_204 = 0x13E1D839L;
            int32_t l_205 = (-1L);
            int32_t l_206 = 0x180AD38FL;
            int32_t l_207[6][7] = {{0x186AA3A4L,0x08F22E05L,0x186AA3A4L,0x186AA3A4L,0x08F22E05L,0x186AA3A4L,0x186AA3A4L},{0x186AA3A4L,0x08F22E05L,0x186AA3A4L,0x186AA3A4L,0x08F22E05L,0x186AA3A4L,0x186AA3A4L},{0x186AA3A4L,0x08F22E05L,0x186AA3A4L,0x186AA3A4L,0x08F22E05L,0x186AA3A4L,0x186AA3A4L},{0x186AA3A4L,0x08F22E05L,0x186AA3A4L,0x186AA3A4L,0x08F22E05L,0x186AA3A4L,0x186AA3A4L},{0x186AA3A4L,0x08F22E05L,0x186AA3A4L,0x186AA3A4L,0x08F22E05L,0x186AA3A4L,0x186AA3A4L},{0x186AA3A4L,0x08F22E05L,0x186AA3A4L,0x186AA3A4L,0x08F22E05L,0x186AA3A4L,0x186AA3A4L}};
            int i, j;
            if ((*p_1401->g_20))
            { /* block id: 68 */
                int8_t l_192 = 0x45L;
                p_73 = (void*)0;
                --l_193;
            }
            else
            { /* block id: 71 */
                volatile int16_t * volatile **l_196 = (void*)0;
                volatile int16_t * volatile *l_198 = &p_1401->g_153;
                volatile int16_t * volatile **l_197[3];
                struct S1 **l_202 = &l_200;
                int i;
                for (i = 0; i < 3; i++)
                    l_197[i] = &l_198;
                p_1401->g_199 = &p_1401->g_153;
                (*l_202) = l_200;
                (*l_143) = &p_75;
            }
            l_203 = p_75;
            ++l_208;
        }
        for (p_1401->g_201.f0 = 0; (p_1401->g_201.f0 >= 13); p_1401->g_201.f0 = safe_add_func_uint64_t_u_u(p_1401->g_201.f0, 3))
        { /* block id: 81 */
            uint8_t l_213 = 0xBEL;
            l_213 |= (*p_1401->g_20);
            l_214[4][1][0]--;
            if (l_217)
                break;
        }
        p_73 = func_79((p_1401->g_141 = func_79(((safe_add_func_int64_t_s_s(((*l_241) |= (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(p_1401->g_201.f7, ((p_1401->g_112.x , ((*l_229) = ((l_226 = l_208) == ((safe_lshift_func_int16_t_s_u(p_72, 11)) < p_72)))) != 0L))), ((safe_div_func_uint64_t_u_u((safe_div_func_int8_t_s_s((((*l_238) = l_234) != p_1401->g_239), (((p_76 , p_1401->g_151.f0) <= 1L) | p_72))), 3UL)) ^ p_76)))), (-3L))) , &p_1401->g_21[2]), &p_1401->g_84, p_1401)), &p_1401->g_84, p_1401);
    }
    else
    { /* block id: 92 */
        uint64_t l_262[5] = {0x7BA593B0E3760A9BL,0x7BA593B0E3760A9BL,0x7BA593B0E3760A9BL,0x7BA593B0E3760A9BL,0x7BA593B0E3760A9BL};
        int32_t l_263 = (-1L);
        VECTOR(int32_t, 2) l_264 = (VECTOR(int32_t, 2))(0x0BB4B703L, (-2L));
        int8_t ***l_298 = (void*)0;
        int32_t ***l_311 = &l_144[8][1];
        int32_t l_316 = 1L;
        struct S0 l_387 = {0x18L};
        int16_t ***l_411[2];
        VECTOR(int8_t, 8) l_427 = (VECTOR(int8_t, 8))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x73L), 0x73L), 0x73L, 5L, 0x73L);
        uint8_t l_443 = 0x90L;
        struct S1 **l_473 = (void*)0;
        VECTOR(uint16_t, 4) l_521 = (VECTOR(uint16_t, 4))(0x4D77L, (VECTOR(uint16_t, 2))(0x4D77L, 0UL), 0UL);
        VECTOR(int16_t, 4) l_554 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x50F6L), 0x50F6L);
        VECTOR(int16_t, 4) l_557 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 9L), 9L);
        VECTOR(int16_t, 8) l_559 = (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x3DF6L), 0x3DF6L), 0x3DF6L, (-6L), 0x3DF6L);
        int8_t l_567 = (-1L);
        VECTOR(int32_t, 8) l_568 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x420FDC19L), 0x420FDC19L), 0x420FDC19L, (-3L), 0x420FDC19L);
        VECTOR(int32_t, 8) l_587 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x2B4EE99AL), 0x2B4EE99AL), 0x2B4EE99AL, 3L, 0x2B4EE99AL);
        VECTOR(int8_t, 4) l_611 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x21L), 0x21L);
        VECTOR(uint16_t, 16) l_690 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x5184L), 0x5184L), 0x5184L, 6UL, 0x5184L, (VECTOR(uint16_t, 2))(6UL, 0x5184L), (VECTOR(uint16_t, 2))(6UL, 0x5184L), 6UL, 0x5184L, 6UL, 0x5184L);
        VECTOR(int16_t, 8) l_693 = (VECTOR(int16_t, 8))(0x0E90L, (VECTOR(int16_t, 4))(0x0E90L, (VECTOR(int16_t, 2))(0x0E90L, (-1L)), (-1L)), (-1L), 0x0E90L, (-1L));
        VECTOR(int16_t, 8) l_694 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4DE9L), 0x4DE9L), 0x4DE9L, 0L, 0x4DE9L);
        uint32_t l_700 = 1UL;
        int64_t *l_701[5];
        uint8_t l_703 = 0xA4L;
        int i;
        for (i = 0; i < 2; i++)
            l_411[i] = &p_1401->g_408;
        for (i = 0; i < 5; i++)
            l_701[i] = &l_495;
        for (p_1401->g_201.f0 = 0; (p_1401->g_201.f0 != 11); p_1401->g_201.f0 = safe_add_func_int64_t_s_s(p_1401->g_201.f0, 2))
        { /* block id: 95 */
            VECTOR(uint16_t, 16) l_261 = (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 65535UL), 65535UL), 65535UL, 8UL, 65535UL, (VECTOR(uint16_t, 2))(8UL, 65535UL), (VECTOR(uint16_t, 2))(8UL, 65535UL), 8UL, 65535UL, 8UL, 65535UL);
            int32_t l_277 = 0x555A148DL;
            int32_t l_280 = 0x2E588BFFL;
            int32_t l_282 = 0x2ECBBBB6L;
            int32_t l_283 = 0x1724C560L;
            int32_t l_284 = 0x3531BA01L;
            int32_t l_285 = 1L;
            int32_t l_286 = 1L;
            int32_t l_287[1];
            int16_t l_289 = 0x314BL;
            int i;
            for (i = 0; i < 1; i++)
                l_287[i] = 0x437ECDA4L;
            if (((safe_lshift_func_int8_t_s_u(0x30L, (safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((*p_1401->g_153), 6)), 0x22L)), p_72)), (p_1401->g_21[8] = (l_264.y = (safe_mod_func_int16_t_s_s(((l_263 ^= (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 4))(p_1401->g_258.s0247)).ywwzyywy, ((VECTOR(uint8_t, 2))(p_1401->g_259.yx)).yxxxxyyy))))).s44, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1401->g_260.yyxx)).wyzzzwxyzxxzxzxy)).hi, ((VECTOR(uint16_t, 2))(l_261.s83)).yxxxxyxx))).s35))))).lo, l_262[0]))) | (l_262[1] || p_76)), p_1401->g_186[4][0][4])))))))) < ((!(safe_mod_func_uint32_t_u_u((((p_76 , p_1401->g_237.f1) == p_72) & 0x1CE1L), p_1401->g_174.s5))) != p_1401->g_112.y)))
            { /* block id: 99 */
                struct S0 *l_270 = (void*)0;
                struct S0 **l_269 = &l_270;
                int8_t ***l_271 = &p_1401->g_83;
                int8_t **l_273 = &p_1401->g_84;
                int8_t ***l_272 = &l_273;
                p_73 = &l_263;
                p_1401->g_268 = p_1401->g_267;
                (*l_269) = (void*)0;
                (*l_272) = ((*l_271) = &p_1401->g_84);
            }
            else
            { /* block id: 105 */
                int8_t l_275[7] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
                int32_t l_276 = 0x54492AE3L;
                int32_t l_278 = 0x713D0573L;
                int32_t l_279[2][7] = {{0x2F2150C2L,0x2F2150C2L,0x2F2150C2L,0x2F2150C2L,0x2F2150C2L,0x2F2150C2L,0x2F2150C2L},{0x2F2150C2L,0x2F2150C2L,0x2F2150C2L,0x2F2150C2L,0x2F2150C2L,0x2F2150C2L,0x2F2150C2L}};
                int16_t l_290 = 0x65BDL;
                int32_t l_291 = 0x698A5A43L;
                int i, j;
                l_292--;
                if (l_264.y)
                { /* block id: 107 */
                    if (l_264.y)
                        break;
                }
                else
                { /* block id: 109 */
                    if ((*p_1401->g_20))
                        break;
                }
                for (l_278 = 7; (l_278 > 7); l_278 = safe_add_func_uint64_t_u_u(l_278, 1))
                { /* block id: 114 */
                    uint64_t l_297[5][4][9] = {{{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L}},{{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L}},{{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L}},{{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L}},{{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L},{3UL,0xD01751285E740721L,18446744073709551611UL,0xE10D2439B66B2A77L,0x5F5C83600955C8E0L,18446744073709551610UL,1UL,18446744073709551611UL,0xF38329EC642AF546L}}};
                    int i, j, k;
                    (1 + 1);
                }
                p_1401->g_313 = p_1401->g_312;
            }
        }
        for (p_1401->g_236.f5 = 5; (p_1401->g_236.f5 < 15); ++p_1401->g_236.f5)
        { /* block id: 124 */
            uint16_t l_317 = 65526UL;
            int32_t l_336 = 0x38851668L;
            int32_t l_338 = (-1L);
            int32_t l_339 = 0x608D0415L;
            int32_t l_340 = (-2L);
            uint64_t *l_412[10][4][1] = {{{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]}},{{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]}},{{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]}},{{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]}},{{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]}},{{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]}},{{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]}},{{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]}},{{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]}},{{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]},{&l_214[1][1][0]}}};
            struct S1 **l_413[6] = {&p_1401->g_240,&p_1401->g_240,&p_1401->g_240,&p_1401->g_240,&p_1401->g_240,&p_1401->g_240};
            uint16_t l_503 = 9UL;
            int32_t *l_506 = &p_1401->g_21[1];
            int16_t l_569 = 0x5E9AL;
            int64_t l_615 = 0L;
            uint16_t l_617 = 0xF3F3L;
            VECTOR(int32_t, 2) l_636 = (VECTOR(int32_t, 2))(0x5D29439BL, 1L);
            int32_t l_638 = (-1L);
            VECTOR(uint8_t, 2) l_649 = (VECTOR(uint8_t, 2))(0xCAL, 1UL);
            uint32_t l_652 = 0x244C9C35L;
            struct S2 *l_657 = &p_1401->g_377;
            VECTOR(int16_t, 8) l_661 = (VECTOR(int16_t, 8))(0x7419L, (VECTOR(int16_t, 4))(0x7419L, (VECTOR(int16_t, 2))(0x7419L, 0x5F78L), 0x5F78L), 0x5F78L, 0x7419L, 0x5F78L);
            uint8_t *l_672 = (void*)0;
            int i, j, k;
            l_264.x = l_316;
        }
        (*p_1401->g_20) = (safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((l_568.s0 || (safe_rshift_func_int8_t_s_u(((((FAKE_DIVERGE(p_1401->local_1_offset, get_local_id(1), 10) , ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_679.se4a226888b9ac2cb)).lo)).s6505626113002021, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_1401->g_680.wwzyxxzzyyxxwzzw))))))).s77))).yxxy)).w) < ((safe_mod_func_int64_t_s_s((((p_76 ^ (safe_sub_func_uint64_t_u_u(p_76, 0x7A3BC13CC43AFE89L))) , p_1401->g_260.z) , (safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((l_702 = ((255UL > ((p_1401->g_689 , ((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x10E1L, 0x1760L)), 0x2358L, ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_690.sa1a9b9ba290da13c)))).se7bd, ((VECTOR(uint16_t, 2))(65528UL, 65532UL)).yxxy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 4))(p_1401->g_691.s2163)).odd, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(l_692.s23145271)).even, ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((-1L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_693.s0332372501243511)).sd2)))).xyxyyxyyxyxxxxxx)).sf2)), ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(l_694.s76)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((~(safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x0BE93DB69D3C6483L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_1401->g_699.wwwwwzyzzzxxxywz)).s6d)), 0x0933AAE0C5800560L)).odd)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x7F3D71229759927DL, 0x306FB45E5991044FL)))).xxxy)), 0x11D826743DBF6D41L, 0x0FC171FDC17AC187L)).s4, (((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(5L, l_700, p_76, p_72, 0x01L, ((VECTOR(int8_t, 8))(0x31L)), l_427.s4, (-1L), 0L)))).even, ((VECTOR(int8_t, 8))(0x12L)), ((VECTOR(int8_t, 8))(0x56L))))).s23)).xxxxxyyy, ((VECTOR(int8_t, 8))(0L)), ((VECTOR(int8_t, 8))(1L))))), ((VECTOR(int8_t, 8))(0x14L))))).s1 || 0xCEL))), 0))), ((VECTOR(int16_t, 2))(0x7C63L)), 0L, ((VECTOR(int16_t, 2))((-9L))), ((VECTOR(int16_t, 2))(3L)), 1L, 0x31D4L, ((VECTOR(int16_t, 4))(7L)), 0x2F5BL, 4L)))).s3a))), 1L, (-4L), 0x044EL)).s0617700674367574)).sf68b, ((VECTOR(int16_t, 4))(0x76A2L)))))))), 0x1B55L, ((VECTOR(int16_t, 8))(1L)), 0x6F16L, 1L, 0x3D4EL)).s9c, ((VECTOR(int16_t, 2))(0x2E4BL))))).xxyx, ((VECTOR(int16_t, 4))(0L))))).even))), 0x115CL, 0xBD1AL))))))).lo)).xxxy, ((VECTOR(uint16_t, 4))(65529UL))))), 0x6E63L)), ((VECTOR(uint16_t, 8))(0x7BEDL)), ((VECTOR(uint16_t, 8))(0UL))))).s0) >= p_76)) >= p_76)), p_76)), l_554.y))), 0x165195337773AF5FL)) | p_1401->g_405.s6)) == 0x32A55C63L) < p_1401->g_520.x), 5))), 12)) == p_76), 9L));
        ++l_703;
    }
    return p_1401->g_236.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_comm_values p_1401->l_comm_values p_1401->g_15 p_1401->g_36 p_1401->g_52 p_1401->g_53 p_1401->g_20 p_1401->g_110 p_1401->g_112 p_1401->g_84 p_1401->g_125 p_1401->g_127 p_1401->g_131 p_1401->g_135 p_1401->g_83 p_1401->g_21 p_1401->g_141
 * writes: p_1401->g_83 p_1401->g_21 p_1401->g_36 p_1401->g_110
 */
int32_t * func_79(int32_t * p_80, int8_t ** p_81, struct S3 * p_1401)
{ /* block id: 16 */
    int32_t *l_86[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_87 = &l_86[0];
    VECTOR(int32_t, 4) l_88 = (VECTOR(int32_t, 4))(0x11F73439L, (VECTOR(int32_t, 2))(0x11F73439L, 0x74693715L), 0x74693715L);
    VECTOR(int32_t, 4) l_89 = (VECTOR(int32_t, 4))(0x18557C7BL, (VECTOR(int32_t, 2))(0x18557C7BL, 1L), 1L);
    VECTOR(int32_t, 2) l_90 = (VECTOR(int32_t, 2))(0x08D8C411L, 0x07F17E9BL);
    int32_t l_97 = 0x733C7506L;
    VECTOR(uint32_t, 4) l_98 = (VECTOR(uint32_t, 4))(0xE65A1B20L, (VECTOR(uint32_t, 2))(0xE65A1B20L, 7UL), 7UL);
    int8_t ***l_99 = &p_1401->g_83;
    VECTOR(int8_t, 4) l_100 = (VECTOR(int8_t, 4))(0x6FL, (VECTOR(int8_t, 2))(0x6FL, 0x51L), 0x51L);
    VECTOR(int8_t, 16) l_101 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x20L), 0x20L), 0x20L, 1L, 0x20L, (VECTOR(int8_t, 2))(1L, 0x20L), (VECTOR(int8_t, 2))(1L, 0x20L), 1L, 0x20L, 1L, 0x20L);
    VECTOR(int16_t, 8) l_102 = (VECTOR(int16_t, 8))(0x4960L, (VECTOR(int16_t, 4))(0x4960L, (VECTOR(int16_t, 2))(0x4960L, 0x78CBL), 0x78CBL), 0x78CBL, 0x4960L, 0x78CBL);
    VECTOR(int8_t, 16) l_103 = (VECTOR(int8_t, 16))(0x55L, (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0x13L), 0x13L), 0x13L, 0x55L, 0x13L, (VECTOR(int8_t, 2))(0x55L, 0x13L), (VECTOR(int8_t, 2))(0x55L, 0x13L), 0x55L, 0x13L, 0x55L, 0x13L);
    uint64_t l_104 = 0x3882C1F1FED3416FL;
    int64_t l_105 = (-3L);
    int8_t *l_106 = (void*)0;
    int8_t *l_107 = (void*)0;
    VECTOR(int16_t, 8) l_109 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    VECTOR(uint64_t, 16) l_126 = (VECTOR(uint64_t, 16))(0xC3FA49C8F8D30744L, (VECTOR(uint64_t, 4))(0xC3FA49C8F8D30744L, (VECTOR(uint64_t, 2))(0xC3FA49C8F8D30744L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xC3FA49C8F8D30744L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0xC3FA49C8F8D30744L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0xC3FA49C8F8D30744L, 18446744073709551615UL), 0xC3FA49C8F8D30744L, 18446744073709551615UL, 0xC3FA49C8F8D30744L, 18446744073709551615UL);
    VECTOR(uint64_t, 4) l_128 = (VECTOR(uint64_t, 4))(0xEFB5F142755BC849L, (VECTOR(uint64_t, 2))(0xEFB5F142755BC849L, 18446744073709551608UL), 18446744073709551608UL);
    VECTOR(uint64_t, 2) l_130 = (VECTOR(uint64_t, 2))(0xA7884222E9D9AFFEL, 18446744073709551612UL);
    VECTOR(uint64_t, 4) l_133 = (VECTOR(uint64_t, 4))(0x07D7012D8CDCC97EL, (VECTOR(uint64_t, 2))(0x07D7012D8CDCC97EL, 0x34017EA376DD06A0L), 0x34017EA376DD06A0L);
    int i;
    (*l_87) = l_86[0];
    if (((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_88.xyzzwwyw)).s63, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))((-3L), 5L, 0L, ((VECTOR(int32_t, 4))(l_89.wwzw)), 0x68BB0E3CL)).s7601070421665375, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_90.yyxy)), 1L, (safe_lshift_func_int16_t_s_s(((((p_1401->g_36.s3 = ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(((((safe_mod_func_uint8_t_u_u((p_1401->g_comm_values[p_1401->tid] | p_1401->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1401->tid, 64))]), p_1401->g_15.sf)) > (safe_rshift_func_uint8_t_u_u(l_97, 1))) , (((VECTOR(uint32_t, 4))(l_98.zwyx)).z & (((*p_1401->g_20) = ((*p_80) = ((((p_81 == ((*l_99) = p_81)) && (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(l_100.yyxw)).yxzwzxxz, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(0x33L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_101.sda)), (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_102.s42)), 0x599DL, 0x3BCAL)).y , (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_103.s09)).xxxxxyxx)).s0 == (l_104 >= p_1401->g_36.s5))), (&p_81 != l_99), (*p_1401->g_52), 0L, (-4L), (-1L))).s3641116627706464)).even)))).even)), 9L, 0x29L, 1L)).s05))).yyyx, ((VECTOR(int8_t, 4))((-1L)))))).lo)).xyxxyyyy))).lo)).hi)).odd != l_105)) != 0x6EDC4577908E2A1EL) >= GROUP_DIVERGE(2, 1)))) <= p_1401->g_36.s2))) & p_1401->g_36.s4), 5L, 0L, 0L)).yzxwxxwzyywyywzx))).s1b9a)).even, (int8_t)0L))).yxyyxxxxxxyxxyxy, ((VECTOR(int8_t, 16))(3L)), ((VECTOR(int8_t, 16))((-1L)))))).sad40, ((VECTOR(int8_t, 4))(0x30L))))), ((VECTOR(int8_t, 4))((-1L)))))).w) == p_1401->g_15.s4) , &p_80) == &p_80), p_1401->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1401->tid, 64))])), ((VECTOR(int32_t, 8))(0x4AA6C347L)), 0x44F6A9EDL, 8L)).s4258)).wxxyyxyywzxzzzzw, ((VECTOR(int32_t, 16))(4L))))).s1d, ((VECTOR(int32_t, 2))(0x6BD4EB13L))))).xyxyyyxyyyxxyxyx, ((VECTOR(int32_t, 16))(0x6207B948L))))).sf)
    { /* block id: 22 */
        VECTOR(int16_t, 2) l_108 = (VECTOR(int16_t, 2))(0x2080L, 0x6F4AL);
        VECTOR(int16_t, 16) l_111 = (VECTOR(int16_t, 16))(0x03A3L, (VECTOR(int16_t, 4))(0x03A3L, (VECTOR(int16_t, 2))(0x03A3L, 0x7225L), 0x7225L), 0x7225L, 0x03A3L, 0x7225L, (VECTOR(int16_t, 2))(0x03A3L, 0x7225L), (VECTOR(int16_t, 2))(0x03A3L, 0x7225L), 0x03A3L, 0x7225L, 0x03A3L, 0x7225L);
        VECTOR(int16_t, 2) l_113 = (VECTOR(int16_t, 2))((-5L), 6L);
        VECTOR(uint64_t, 16) l_124 = (VECTOR(uint64_t, 16))(0xE7527B815EE981B5L, (VECTOR(uint64_t, 4))(0xE7527B815EE981B5L, (VECTOR(uint64_t, 2))(0xE7527B815EE981B5L, 3UL), 3UL), 3UL, 0xE7527B815EE981B5L, 3UL, (VECTOR(uint64_t, 2))(0xE7527B815EE981B5L, 3UL), (VECTOR(uint64_t, 2))(0xE7527B815EE981B5L, 3UL), 0xE7527B815EE981B5L, 3UL, 0xE7527B815EE981B5L, 3UL);
        VECTOR(uint64_t, 8) l_129 = (VECTOR(uint64_t, 8))(0x5FBB508EA8A6AB53L, (VECTOR(uint64_t, 4))(0x5FBB508EA8A6AB53L, (VECTOR(uint64_t, 2))(0x5FBB508EA8A6AB53L, 0UL), 0UL), 0UL, 0x5FBB508EA8A6AB53L, 0UL);
        VECTOR(uint64_t, 2) l_132 = (VECTOR(uint64_t, 2))(0UL, 0UL);
        VECTOR(uint64_t, 16) l_134 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 0UL, 18446744073709551607UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551607UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551607UL), 0UL, 18446744073709551607UL, 0UL, 18446744073709551607UL);
        int8_t **l_137 = (void*)0;
        int8_t **l_138 = &l_106;
        int16_t *l_139 = (void*)0;
        int16_t *l_140[3][10][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        p_1401->g_21[0] ^= (((VECTOR(int16_t, 8))(0x20C2L, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(l_108.yxyyyyxy)).s22, ((VECTOR(int16_t, 4))(l_109.s5636)).hi))))), ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(1L, 0x090DL)).yyxxyyyy))).s02, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_1401->g_110.xyxxyyxx)).even)).even))))).xyyyyxxx)).even, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(0x0979L, 0x1A3DL)).yyxyxyyx, ((VECTOR(int16_t, 8))((-6L), 0x6E84L, ((VECTOR(int16_t, 2))(1L, 0x4899L)), 0x2A2FL, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(6L, ((VECTOR(int16_t, 4))(l_111.sd3e5)), 0x2F7FL, 0L, 0x71A0L)).even, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(p_1401->g_112.xx)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x6DC2L, 7L)).xyyyyxxx)).s01, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_113.yx)), 0x25F2L, 0x6688L)), (safe_lshift_func_uint8_t_u_s(l_113.x, ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((p_1401->g_110.x = ((&p_1401->g_52 == (void*)0) & ((*p_81) != ((*l_138) = (((safe_sub_func_int64_t_s_s((((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 16))(l_124.s6f1e1a5778d356cc)).even, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(p_1401->g_125.xz)).xxxxxxxxxxxxxyxx)).sd9, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 16))(l_126.sdd330705defb49f9)).odd))).s1716674367053122, ((VECTOR(uint64_t, 2))(p_1401->g_127.s06)).yyyxyyxyyyyxxxyy))))).even)).s00, ((VECTOR(uint64_t, 4))(l_128.zywx)).hi))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_129.s4334)).xyyzwwzywxyzxwxz)).even, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(9UL, 0xAB99CF72C582E535L)).xxxx)).wyzzwyzy))), ((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 4))(l_130.yyxx)).wwywzxwwwzzzzwxy, ((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 4))(p_1401->g_131.s5504)).zwzwyxwxwxwxzyzz, ((VECTOR(uint64_t, 4))(l_132.xxxy)).zxwywzzxwxzywyzy))), ((VECTOR(uint64_t, 2))(l_133.zz)).yyxxxyyxyyyxyxyy))).even, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_134.s3bed)), l_108.x, 18446744073709551609UL, 0x6104541D115FE204L, 0x0269AD26FA3AE11FL)).s45, ((VECTOR(uint64_t, 8))(p_1401->g_135.sd56fff88)).s24))).xxyyyyyx))))), (1UL & ((safe_unary_minus_func_int16_t_s(0x4D4EL)) || (0x68125F44ECFE5F79L == l_132.x))), 0x7E322D52091D0556L, ((VECTOR(uint64_t, 2))(0x555F879EAA1D0963L)), ((VECTOR(uint64_t, 4))(0UL)))).s4e, ((VECTOR(uint64_t, 2))(18446744073709551606UL)), ((VECTOR(uint64_t, 2))(0x4BBA38824DB70BDDL))))), 0xC012C7D4E62ACF96L, 18446744073709551608UL)), 0xD00A8C644E423C0BL, ((VECTOR(uint64_t, 4))(0x597859A0E455BE69L)), ((VECTOR(uint64_t, 2))(0UL)), 7UL, 0UL, 9UL)).s41))), 0UL, 0x1EA2908B59E8C662L, 0xE059B89695FD11F4L, 18446744073709551613UL, 0x3002C6F77066E75AL, 0xF2265D7B44CA53C5L)), ((VECTOR(uint64_t, 8))(0x6259D638C0381DD7L))))).s2 | l_134.s3), 0x4EFA1E05A8AC66ACL)) != p_1401->g_127.s7) , (*p_1401->g_83)))))), l_113.y)) <= (*p_80)), 0xABL)), p_1401->g_112.x)) && l_129.s4))), 3L, 0x604CL, 9L, ((VECTOR(int16_t, 2))(0x0DCCL)), ((VECTOR(int16_t, 4))(1L)), (-5L), 1L)).s92da)).lo, ((VECTOR(int16_t, 2))((-4L))), ((VECTOR(int16_t, 2))(0x6089L))))), (-1L), 8L)), ((VECTOR(int16_t, 4))(1L))))).wzzyyxyzxwwzyxyx, ((VECTOR(int16_t, 16))(0x5F89L))))).lo)).s35))))).xxyy, ((VECTOR(int16_t, 4))((-1L)))))).odd, (int16_t)0x2A7EL))).lo, 1L, (-5L)))))).odd)).lo, ((VECTOR(int16_t, 2))(0x2A58L))))), ((VECTOR(int16_t, 2))((-1L)))))), (int16_t)p_1401->g_127.s5, (int16_t)l_124.s3))).xyyx))).y, ((VECTOR(int16_t, 4))(0x77DCL)), 0x15B2L, (-1L))).s4 > p_1401->g_15.sd);
    }
    else
    { /* block id: 26 */
        return p_1401->g_141;
    }
    return p_80;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[60];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 60; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[60];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 60; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[64];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 64; i++)
            l_comm_values[i] = 1;
    struct S3 c_1402;
    struct S3* p_1401 = &c_1402;
    struct S3 c_1403 = {
        1UL, // p_1401->g_11
        (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0L), 0L), 0L, 6L, 0L, (VECTOR(int32_t, 2))(6L, 0L), (VECTOR(int32_t, 2))(6L, 0L), 6L, 0L, 6L, 0L), // p_1401->g_15
        (void*)0, // p_1401->g_17
        (void*)0, // p_1401->g_18
        {0L,0L,0L,0L,0L,0L,0L,0L,0L}, // p_1401->g_21
        &p_1401->g_21[2], // p_1401->g_20
        (VECTOR(int8_t, 8))(0x78L, (VECTOR(int8_t, 4))(0x78L, (VECTOR(int8_t, 2))(0x78L, (-3L)), (-3L)), (-3L), 0x78L, (-3L)), // p_1401->g_36
        (-1L), // p_1401->g_53
        &p_1401->g_53, // p_1401->g_52
        0x2BL, // p_1401->g_64
        (void*)0, // p_1401->g_84
        &p_1401->g_84, // p_1401->g_83
        (VECTOR(int16_t, 2))(0x6B26L, 0x1753L), // p_1401->g_110
        (VECTOR(int16_t, 2))((-1L), 4L), // p_1401->g_112
        (VECTOR(uint64_t, 4))(0xB48A4C82FA94D608L, (VECTOR(uint64_t, 2))(0xB48A4C82FA94D608L, 0x50E94D9BCEA6A748L), 0x50E94D9BCEA6A748L), // p_1401->g_125
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xA954584B11E5EC64L), 0xA954584B11E5EC64L), 0xA954584B11E5EC64L, 1UL, 0xA954584B11E5EC64L), // p_1401->g_127
        (VECTOR(uint64_t, 8))(0x4414D6DA497F6437L, (VECTOR(uint64_t, 4))(0x4414D6DA497F6437L, (VECTOR(uint64_t, 2))(0x4414D6DA497F6437L, 0xA3BE24AF6D0226C0L), 0xA3BE24AF6D0226C0L), 0xA3BE24AF6D0226C0L, 0x4414D6DA497F6437L, 0xA3BE24AF6D0226C0L), // p_1401->g_131
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL), // p_1401->g_135
        (void*)0, // p_1401->g_141
        {-3L}, // p_1401->g_151
        {{{0L,0L},{0L,0L},{0L,0L}}}, // p_1401->g_154
        &p_1401->g_154[0][2][1], // p_1401->g_153
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL), // p_1401->g_174
        {{{0x68ED2F35L,0xC3496F84L,4294967295UL,4294967295UL,0xC3496F84L,0x68ED2F35L,0x033FA5DFL,4294967286UL,2UL}},{{0x68ED2F35L,0xC3496F84L,4294967295UL,4294967295UL,0xC3496F84L,0x68ED2F35L,0x033FA5DFL,4294967286UL,2UL}},{{0x68ED2F35L,0xC3496F84L,4294967295UL,4294967295UL,0xC3496F84L,0x68ED2F35L,0x033FA5DFL,4294967286UL,2UL}},{{0x68ED2F35L,0xC3496F84L,4294967295UL,4294967295UL,0xC3496F84L,0x68ED2F35L,0x033FA5DFL,4294967286UL,2UL}},{{0x68ED2F35L,0xC3496F84L,4294967295UL,4294967295UL,0xC3496F84L,0x68ED2F35L,0x033FA5DFL,4294967286UL,2UL}},{{0x68ED2F35L,0xC3496F84L,4294967295UL,4294967295UL,0xC3496F84L,0x68ED2F35L,0x033FA5DFL,4294967286UL,2UL}},{{0x68ED2F35L,0xC3496F84L,4294967295UL,4294967295UL,0xC3496F84L,0x68ED2F35L,0x033FA5DFL,4294967286UL,2UL}}}, // p_1401->g_186
        &p_1401->g_153, // p_1401->g_199
        {0x736A73E15F1969B3L,0x69DF3D125E4FD0F9L,0x3AB8A426L,0xF55E92D3L,-1L,0L,0x5F2B4DD08391A86DL,0x01L}, // p_1401->g_201
        {18446744073709551615UL,18446744073709551608UL,-5L,4294967295UL,4L,1L,0x13625011BEFE2CFEL,9L}, // p_1401->g_236
        {0x2C5DC4A6E4DC9F04L,1UL,0x322041FAL,4294967289UL,0x1A4BEFFAL,0x5FD86312A780D69EL,1UL,-2L}, // p_1401->g_237
        (void*)0, // p_1401->g_240
        &p_1401->g_240, // p_1401->g_239
        (VECTOR(uint8_t, 8))(0x8EL, (VECTOR(uint8_t, 4))(0x8EL, (VECTOR(uint8_t, 2))(0x8EL, 253UL), 253UL), 253UL, 0x8EL, 253UL), // p_1401->g_258
        (VECTOR(uint8_t, 2))(0UL, 0UL), // p_1401->g_259
        (VECTOR(uint16_t, 4))(0x97B6L, (VECTOR(uint16_t, 2))(0x97B6L, 0UL), 0UL), // p_1401->g_260
        {0x40D792A632A50337L,18446744073709551615UL,-6L,0x192FC969L,0L,0x7D5A2C04680389E7L,0UL,1L}, // p_1401->g_267
        {0xA6C89448277D8B7AL,0x6E7C2798B5F067BCL,0x3C11F475L,4294967295UL,0x1F115524L,0x030ED60FAA0A1DD7L,0UL,0x6DL}, // p_1401->g_268
        0x58L, // p_1401->g_281
        {0UL,0x77C744603B487E6CL,5L,0x5DB9EF53L,0x32E415B7L,-5L,0UL,8L}, // p_1401->g_312
        {0x2520063B204C0E3DL,18446744073709551608UL,5L,1UL,-1L,1L,0xF964277D6217F93BL,0L}, // p_1401->g_313
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x16D52A2DL), 0x16D52A2DL), 0x16D52A2DL, 1L, 0x16D52A2DL, (VECTOR(int32_t, 2))(1L, 0x16D52A2DL), (VECTOR(int32_t, 2))(1L, 0x16D52A2DL), 1L, 0x16D52A2DL, 1L, 0x16D52A2DL), // p_1401->g_357
        {1L,0xE7B16FFDCCBAA067L,4294967295UL,0x3E64194FL,0x735630D5L,{0x05CBEF2439EA4779L,18446744073709551615UL,0x31A00123L,0x26CF183CL,0x670C0315L,-1L,0x1F0493E94BC6ED06L,-1L},0x1E05AFECL,0x286926DA3100FAC2L,0x771E8A1CL,0x820FL}, // p_1401->g_377
        {1L,7UL,0x0033D19DL,1L,0UL,{18446744073709551615UL,18446744073709551615UL,0x187AD996L,4294967295UL,0L,-1L,18446744073709551615UL,0x71L},7L,0x203095075DBB34C9L,0xBABAC764L,0x3DABL}, // p_1401->g_390
        (VECTOR(uint8_t, 8))(0x49L, (VECTOR(uint8_t, 4))(0x49L, (VECTOR(uint8_t, 2))(0x49L, 8UL), 8UL), 8UL, 0x49L, 8UL), // p_1401->g_405
        {&p_1401->g_390.f0,&p_1401->g_390.f0,&p_1401->g_390.f0,&p_1401->g_390.f0,&p_1401->g_390.f0,&p_1401->g_390.f0,&p_1401->g_390.f0}, // p_1401->g_409
        &p_1401->g_409[5], // p_1401->g_408
        &p_1401->g_408, // p_1401->g_407
        (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x8E1F7BB5B3E008DCL), 0x8E1F7BB5B3E008DCL), // p_1401->g_437
        (VECTOR(uint64_t, 2))(0x592327C08752B4CCL, 0UL), // p_1401->g_438
        (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551615UL), 18446744073709551615UL), // p_1401->g_440
        {{{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281}},{{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281}},{{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281}},{{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281}},{{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281}},{{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281}},{{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281}},{{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281}},{{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281},{(void*)0,&p_1401->g_281}}}, // p_1401->g_459
        0UL, // p_1401->g_510
        (VECTOR(int16_t, 2))(0x5AF8L, 0x16FAL), // p_1401->g_513
        (VECTOR(int8_t, 2))(0x28L, (-5L)), // p_1401->g_520
        (VECTOR(int16_t, 16))(0x626CL, (VECTOR(int16_t, 4))(0x626CL, (VECTOR(int16_t, 2))(0x626CL, (-9L)), (-9L)), (-9L), 0x626CL, (-9L), (VECTOR(int16_t, 2))(0x626CL, (-9L)), (VECTOR(int16_t, 2))(0x626CL, (-9L)), 0x626CL, (-9L), 0x626CL, (-9L)), // p_1401->g_555
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x3AFCL), 0x3AFCL), // p_1401->g_558
        (VECTOR(int32_t, 4))(0x18581F3AL, (VECTOR(int32_t, 2))(0x18581F3AL, 0x67767A9CL), 0x67767A9CL), // p_1401->g_563
        (VECTOR(int64_t, 4))(0x4C13DBC1C446EB45L, (VECTOR(int64_t, 2))(0x4C13DBC1C446EB45L, 0x708585BF58B7192DL), 0x708585BF58B7192DL), // p_1401->g_589
        (VECTOR(uint16_t, 2))(1UL, 65535UL), // p_1401->g_601
        (VECTOR(uint64_t, 2))(0x5AC6396AAE3798D7L, 0xC1AF002A7279BCD5L), // p_1401->g_607
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x0DL), 0x0DL), // p_1401->g_612
        (VECTOR(int16_t, 8))(0x572AL, (VECTOR(int16_t, 4))(0x572AL, (VECTOR(int16_t, 2))(0x572AL, 0L), 0L), 0L, 0x572AL, 0L), // p_1401->g_637
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x0DL), 0x0DL), 0x0DL, 1UL, 0x0DL), // p_1401->g_650
        (VECTOR(uint8_t, 16))(0xADL, (VECTOR(uint8_t, 4))(0xADL, (VECTOR(uint8_t, 2))(0xADL, 255UL), 255UL), 255UL, 0xADL, 255UL, (VECTOR(uint8_t, 2))(0xADL, 255UL), (VECTOR(uint8_t, 2))(0xADL, 255UL), 0xADL, 255UL, 0xADL, 255UL), // p_1401->g_651
        &p_1401->g_390, // p_1401->g_656
        {{{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656}},{{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656},{&p_1401->g_656,&p_1401->g_656}}}, // p_1401->g_655
        {{{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0}},{{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0}},{{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0}},{{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0}},{{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0},{(void*)0,(void*)0,(void*)0,&p_1401->g_236.f0,(void*)0,&p_1401->g_313.f0}}}, // p_1401->g_669
        (VECTOR(int16_t, 4))(0x4A99L, (VECTOR(int16_t, 2))(0x4A99L, 0x66E9L), 0x66E9L), // p_1401->g_680
        1UL, // p_1401->g_689
        (VECTOR(int16_t, 8))(0x0794L, (VECTOR(int16_t, 4))(0x0794L, (VECTOR(int16_t, 2))(0x0794L, 0x0A7AL), 0x0A7AL), 0x0A7AL, 0x0794L, 0x0A7AL), // p_1401->g_691
        (VECTOR(int64_t, 4))(0x34AC8D3E4891970CL, (VECTOR(int64_t, 2))(0x34AC8D3E4891970CL, 0x73FA664377FC1684L), 0x73FA664377FC1684L), // p_1401->g_699
        1UL, // p_1401->g_748
        (VECTOR(uint32_t, 8))(0x919C37ABL, (VECTOR(uint32_t, 4))(0x919C37ABL, (VECTOR(uint32_t, 2))(0x919C37ABL, 0xD9CB689FL), 0xD9CB689FL), 0xD9CB689FL, 0x919C37ABL, 0xD9CB689FL), // p_1401->g_764
        (VECTOR(uint32_t, 2))(4294967295UL, 0xC9DC3457L), // p_1401->g_765
        (VECTOR(uint32_t, 16))(0xD3FA83DDL, (VECTOR(uint32_t, 4))(0xD3FA83DDL, (VECTOR(uint32_t, 2))(0xD3FA83DDL, 9UL), 9UL), 9UL, 0xD3FA83DDL, 9UL, (VECTOR(uint32_t, 2))(0xD3FA83DDL, 9UL), (VECTOR(uint32_t, 2))(0xD3FA83DDL, 9UL), 0xD3FA83DDL, 9UL, 0xD3FA83DDL, 9UL), // p_1401->g_768
        1L, // p_1401->g_776
        (VECTOR(uint8_t, 4))(0x84L, (VECTOR(uint8_t, 2))(0x84L, 2UL), 2UL), // p_1401->g_782
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 5UL), 5UL), 5UL, 18446744073709551615UL, 5UL), // p_1401->g_783
        &p_1401->g_656, // p_1401->g_791
        {0x7451L,9UL,1UL,0x49859619L,0xF3D63466L,{0UL,0UL,1L,2UL,-2L,-3L,18446744073709551615UL,3L},-1L,0x08FF8E80973D367DL,0UL,65527UL}, // p_1401->g_802
        (void*)0, // p_1401->g_803
        (void*)0, // p_1401->g_804
        0x32D87288L, // p_1401->g_861
        (VECTOR(int32_t, 16))(0x78EC0BC3L, (VECTOR(int32_t, 4))(0x78EC0BC3L, (VECTOR(int32_t, 2))(0x78EC0BC3L, 0x38F8E817L), 0x38F8E817L), 0x38F8E817L, 0x78EC0BC3L, 0x38F8E817L, (VECTOR(int32_t, 2))(0x78EC0BC3L, 0x38F8E817L), (VECTOR(int32_t, 2))(0x78EC0BC3L, 0x38F8E817L), 0x78EC0BC3L, 0x38F8E817L, 0x78EC0BC3L, 0x38F8E817L), // p_1401->g_930
        0x38L, // p_1401->g_953
        {1L,0x970DB6500EECC4D6L,4294967295UL,1L,4294967295UL,{1UL,0x213CA67FDC0A12B3L,0x054A7330L,0x190A72F1L,1L,0x4BADE983760990A7L,1UL,0x2BL},0L,0L,0x9B2A33BBL,1UL}, // p_1401->g_972
        (VECTOR(uint16_t, 2))(0xC4DEL, 0x9307L), // p_1401->g_994
        (VECTOR(uint16_t, 4))(0xADE4L, (VECTOR(uint16_t, 2))(0xADE4L, 65535UL), 65535UL), // p_1401->g_996
        {0x93F888B30F4D6D77L,0x9533D67DA96A86E4L,0x31C0FB86L,0x27A2C2B2L,-10L,0L,0xE9C0CF50D51F8935L,0L}, // p_1401->g_1005
        {0x02D3L,0x7588B13AC8FFA7DEL,6UL,0x303716A8L,0xB96EA8D0L,{1UL,0xA6E593F134728ADFL,-10L,0xF7B481A9L,-3L,0x2FB6B3C9070FC440L,0x560D25F184B34A52L,0x11L},0x28739F61L,-1L,4294967286UL,65532UL}, // p_1401->g_1024
        {0x0F9BL,1UL,0x9CAC7012L,0x297D56CEL,1UL,{18446744073709551613UL,0x064586D1974028E7L,5L,1UL,0L,-1L,0xB1180397CEBDD7F4L,1L},0x7C099C13L,-8L,0x24EC09B5L,0xC7A2L}, // p_1401->g_1039
        (VECTOR(uint32_t, 16))(0x53AE3C03L, (VECTOR(uint32_t, 4))(0x53AE3C03L, (VECTOR(uint32_t, 2))(0x53AE3C03L, 4294967295UL), 4294967295UL), 4294967295UL, 0x53AE3C03L, 4294967295UL, (VECTOR(uint32_t, 2))(0x53AE3C03L, 4294967295UL), (VECTOR(uint32_t, 2))(0x53AE3C03L, 4294967295UL), 0x53AE3C03L, 4294967295UL, 0x53AE3C03L, 4294967295UL), // p_1401->g_1043
        (VECTOR(int32_t, 8))(0x3D163085L, (VECTOR(int32_t, 4))(0x3D163085L, (VECTOR(int32_t, 2))(0x3D163085L, (-1L)), (-1L)), (-1L), 0x3D163085L, (-1L)), // p_1401->g_1044
        0x51CA77E97D607749L, // p_1401->g_1052
        {18446744073709551609UL,0x69A89AC871D27D91L,0x3F5B4F7BL,4294967295UL,0L,0x629EBBC6DAD368B0L,0x2A113FCAE75C6588L,1L}, // p_1401->g_1068
        0x4C10E262L, // p_1401->g_1076
        &p_1401->g_237, // p_1401->g_1088
        {18446744073709551610UL,0x4716266DC0B5E133L,1L,0x94FFB59BL,0x58EAAACBL,2L,0x7620F4D711BD4C88L,2L}, // p_1401->g_1089
        (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0x35F9FBE5L), 0x35F9FBE5L), 0x35F9FBE5L, 4294967293UL, 0x35F9FBE5L, (VECTOR(uint32_t, 2))(4294967293UL, 0x35F9FBE5L), (VECTOR(uint32_t, 2))(4294967293UL, 0x35F9FBE5L), 4294967293UL, 0x35F9FBE5L, 4294967293UL, 0x35F9FBE5L), // p_1401->g_1126
        (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, (-3L)), (-3L)), (-3L), 8L, (-3L)), // p_1401->g_1147
        (VECTOR(int8_t, 2))(0x44L, 0x49L), // p_1401->g_1148
        (VECTOR(int32_t, 16))(0x61F09941L, (VECTOR(int32_t, 4))(0x61F09941L, (VECTOR(int32_t, 2))(0x61F09941L, 0x1C7B16E3L), 0x1C7B16E3L), 0x1C7B16E3L, 0x61F09941L, 0x1C7B16E3L, (VECTOR(int32_t, 2))(0x61F09941L, 0x1C7B16E3L), (VECTOR(int32_t, 2))(0x61F09941L, 0x1C7B16E3L), 0x61F09941L, 0x1C7B16E3L, 0x61F09941L, 0x1C7B16E3L), // p_1401->g_1160
        (VECTOR(int32_t, 8))(0x7148B6ECL, (VECTOR(int32_t, 4))(0x7148B6ECL, (VECTOR(int32_t, 2))(0x7148B6ECL, 0x1406274FL), 0x1406274FL), 0x1406274FL, 0x7148B6ECL, 0x1406274FL), // p_1401->g_1161
        &p_1401->g_953, // p_1401->g_1167
        {{&p_1401->g_1167},{&p_1401->g_1167},{&p_1401->g_1167},{&p_1401->g_1167},{&p_1401->g_1167}}, // p_1401->g_1166
        (VECTOR(uint64_t, 2))(1UL, 0UL), // p_1401->g_1169
        (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 2L), 2L), // p_1401->g_1171
        (VECTOR(uint64_t, 8))(0x9FAC75BD9D39E56AL, (VECTOR(uint64_t, 4))(0x9FAC75BD9D39E56AL, (VECTOR(uint64_t, 2))(0x9FAC75BD9D39E56AL, 0xEB4A84B3B06A8C46L), 0xEB4A84B3B06A8C46L), 0xEB4A84B3B06A8C46L, 0x9FAC75BD9D39E56AL, 0xEB4A84B3B06A8C46L), // p_1401->g_1175
        (VECTOR(uint64_t, 4))(0x0E7CE8887B554B3EL, (VECTOR(uint64_t, 2))(0x0E7CE8887B554B3EL, 0x4947F119EE8B637FL), 0x4947F119EE8B637FL), // p_1401->g_1176
        {{0xC94854ECC50DDB37L,0x1F58CE33DBDE6577L,-8L,4UL,0x79F0028BL,3L,0UL,0x22L},{0xC94854ECC50DDB37L,0x1F58CE33DBDE6577L,-8L,4UL,0x79F0028BL,3L,0UL,0x22L},{0xC94854ECC50DDB37L,0x1F58CE33DBDE6577L,-8L,4UL,0x79F0028BL,3L,0UL,0x22L},{0xC94854ECC50DDB37L,0x1F58CE33DBDE6577L,-8L,4UL,0x79F0028BL,3L,0UL,0x22L},{0xC94854ECC50DDB37L,0x1F58CE33DBDE6577L,-8L,4UL,0x79F0028BL,3L,0UL,0x22L},{0xC94854ECC50DDB37L,0x1F58CE33DBDE6577L,-8L,4UL,0x79F0028BL,3L,0UL,0x22L},{0xC94854ECC50DDB37L,0x1F58CE33DBDE6577L,-8L,4UL,0x79F0028BL,3L,0UL,0x22L}}, // p_1401->g_1200
        {18446744073709551614UL,0x3484C987EC74D7FFL,0x71AE15C2L,4294967295UL,-2L,0x3AB1219DCA533B3DL,0x9C2192CB418F609AL,0x78L}, // p_1401->g_1299
        (-1L), // p_1401->g_1300
        (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x115B9FE87EB956D8L), 0x115B9FE87EB956D8L), // p_1401->g_1366
        (void*)0, // p_1401->g_1371
        (void*)0, // p_1401->g_1372
        (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L, (VECTOR(int32_t, 2))((-2L), 0L), (VECTOR(int32_t, 2))((-2L), 0L), (-2L), 0L, (-2L), 0L), // p_1401->g_1391
        (void*)0, // p_1401->g_1396
        0, // p_1401->v_collective
        sequence_input[get_global_id(0)], // p_1401->global_0_offset
        sequence_input[get_global_id(1)], // p_1401->global_1_offset
        sequence_input[get_global_id(2)], // p_1401->global_2_offset
        sequence_input[get_local_id(0)], // p_1401->local_0_offset
        sequence_input[get_local_id(1)], // p_1401->local_1_offset
        sequence_input[get_local_id(2)], // p_1401->local_2_offset
        sequence_input[get_group_id(0)], // p_1401->group_0_offset
        sequence_input[get_group_id(1)], // p_1401->group_1_offset
        sequence_input[get_group_id(2)], // p_1401->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 64)), permutations[0][get_linear_local_id()])), // p_1401->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1402 = c_1403;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1401);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1401->g_11, "p_1401->g_11", print_hash_value);
    transparent_crc(p_1401->g_15.s0, "p_1401->g_15.s0", print_hash_value);
    transparent_crc(p_1401->g_15.s1, "p_1401->g_15.s1", print_hash_value);
    transparent_crc(p_1401->g_15.s2, "p_1401->g_15.s2", print_hash_value);
    transparent_crc(p_1401->g_15.s3, "p_1401->g_15.s3", print_hash_value);
    transparent_crc(p_1401->g_15.s4, "p_1401->g_15.s4", print_hash_value);
    transparent_crc(p_1401->g_15.s5, "p_1401->g_15.s5", print_hash_value);
    transparent_crc(p_1401->g_15.s6, "p_1401->g_15.s6", print_hash_value);
    transparent_crc(p_1401->g_15.s7, "p_1401->g_15.s7", print_hash_value);
    transparent_crc(p_1401->g_15.s8, "p_1401->g_15.s8", print_hash_value);
    transparent_crc(p_1401->g_15.s9, "p_1401->g_15.s9", print_hash_value);
    transparent_crc(p_1401->g_15.sa, "p_1401->g_15.sa", print_hash_value);
    transparent_crc(p_1401->g_15.sb, "p_1401->g_15.sb", print_hash_value);
    transparent_crc(p_1401->g_15.sc, "p_1401->g_15.sc", print_hash_value);
    transparent_crc(p_1401->g_15.sd, "p_1401->g_15.sd", print_hash_value);
    transparent_crc(p_1401->g_15.se, "p_1401->g_15.se", print_hash_value);
    transparent_crc(p_1401->g_15.sf, "p_1401->g_15.sf", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1401->g_21[i], "p_1401->g_21[i]", print_hash_value);

    }
    transparent_crc(p_1401->g_36.s0, "p_1401->g_36.s0", print_hash_value);
    transparent_crc(p_1401->g_36.s1, "p_1401->g_36.s1", print_hash_value);
    transparent_crc(p_1401->g_36.s2, "p_1401->g_36.s2", print_hash_value);
    transparent_crc(p_1401->g_36.s3, "p_1401->g_36.s3", print_hash_value);
    transparent_crc(p_1401->g_36.s4, "p_1401->g_36.s4", print_hash_value);
    transparent_crc(p_1401->g_36.s5, "p_1401->g_36.s5", print_hash_value);
    transparent_crc(p_1401->g_36.s6, "p_1401->g_36.s6", print_hash_value);
    transparent_crc(p_1401->g_36.s7, "p_1401->g_36.s7", print_hash_value);
    transparent_crc(p_1401->g_53, "p_1401->g_53", print_hash_value);
    transparent_crc(p_1401->g_64, "p_1401->g_64", print_hash_value);
    transparent_crc(p_1401->g_110.x, "p_1401->g_110.x", print_hash_value);
    transparent_crc(p_1401->g_110.y, "p_1401->g_110.y", print_hash_value);
    transparent_crc(p_1401->g_112.x, "p_1401->g_112.x", print_hash_value);
    transparent_crc(p_1401->g_112.y, "p_1401->g_112.y", print_hash_value);
    transparent_crc(p_1401->g_125.x, "p_1401->g_125.x", print_hash_value);
    transparent_crc(p_1401->g_125.y, "p_1401->g_125.y", print_hash_value);
    transparent_crc(p_1401->g_125.z, "p_1401->g_125.z", print_hash_value);
    transparent_crc(p_1401->g_125.w, "p_1401->g_125.w", print_hash_value);
    transparent_crc(p_1401->g_127.s0, "p_1401->g_127.s0", print_hash_value);
    transparent_crc(p_1401->g_127.s1, "p_1401->g_127.s1", print_hash_value);
    transparent_crc(p_1401->g_127.s2, "p_1401->g_127.s2", print_hash_value);
    transparent_crc(p_1401->g_127.s3, "p_1401->g_127.s3", print_hash_value);
    transparent_crc(p_1401->g_127.s4, "p_1401->g_127.s4", print_hash_value);
    transparent_crc(p_1401->g_127.s5, "p_1401->g_127.s5", print_hash_value);
    transparent_crc(p_1401->g_127.s6, "p_1401->g_127.s6", print_hash_value);
    transparent_crc(p_1401->g_127.s7, "p_1401->g_127.s7", print_hash_value);
    transparent_crc(p_1401->g_131.s0, "p_1401->g_131.s0", print_hash_value);
    transparent_crc(p_1401->g_131.s1, "p_1401->g_131.s1", print_hash_value);
    transparent_crc(p_1401->g_131.s2, "p_1401->g_131.s2", print_hash_value);
    transparent_crc(p_1401->g_131.s3, "p_1401->g_131.s3", print_hash_value);
    transparent_crc(p_1401->g_131.s4, "p_1401->g_131.s4", print_hash_value);
    transparent_crc(p_1401->g_131.s5, "p_1401->g_131.s5", print_hash_value);
    transparent_crc(p_1401->g_131.s6, "p_1401->g_131.s6", print_hash_value);
    transparent_crc(p_1401->g_131.s7, "p_1401->g_131.s7", print_hash_value);
    transparent_crc(p_1401->g_135.s0, "p_1401->g_135.s0", print_hash_value);
    transparent_crc(p_1401->g_135.s1, "p_1401->g_135.s1", print_hash_value);
    transparent_crc(p_1401->g_135.s2, "p_1401->g_135.s2", print_hash_value);
    transparent_crc(p_1401->g_135.s3, "p_1401->g_135.s3", print_hash_value);
    transparent_crc(p_1401->g_135.s4, "p_1401->g_135.s4", print_hash_value);
    transparent_crc(p_1401->g_135.s5, "p_1401->g_135.s5", print_hash_value);
    transparent_crc(p_1401->g_135.s6, "p_1401->g_135.s6", print_hash_value);
    transparent_crc(p_1401->g_135.s7, "p_1401->g_135.s7", print_hash_value);
    transparent_crc(p_1401->g_135.s8, "p_1401->g_135.s8", print_hash_value);
    transparent_crc(p_1401->g_135.s9, "p_1401->g_135.s9", print_hash_value);
    transparent_crc(p_1401->g_135.sa, "p_1401->g_135.sa", print_hash_value);
    transparent_crc(p_1401->g_135.sb, "p_1401->g_135.sb", print_hash_value);
    transparent_crc(p_1401->g_135.sc, "p_1401->g_135.sc", print_hash_value);
    transparent_crc(p_1401->g_135.sd, "p_1401->g_135.sd", print_hash_value);
    transparent_crc(p_1401->g_135.se, "p_1401->g_135.se", print_hash_value);
    transparent_crc(p_1401->g_135.sf, "p_1401->g_135.sf", print_hash_value);
    transparent_crc(p_1401->g_151.f0, "p_1401->g_151.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1401->g_154[i][j][k], "p_1401->g_154[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1401->g_174.s0, "p_1401->g_174.s0", print_hash_value);
    transparent_crc(p_1401->g_174.s1, "p_1401->g_174.s1", print_hash_value);
    transparent_crc(p_1401->g_174.s2, "p_1401->g_174.s2", print_hash_value);
    transparent_crc(p_1401->g_174.s3, "p_1401->g_174.s3", print_hash_value);
    transparent_crc(p_1401->g_174.s4, "p_1401->g_174.s4", print_hash_value);
    transparent_crc(p_1401->g_174.s5, "p_1401->g_174.s5", print_hash_value);
    transparent_crc(p_1401->g_174.s6, "p_1401->g_174.s6", print_hash_value);
    transparent_crc(p_1401->g_174.s7, "p_1401->g_174.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1401->g_186[i][j][k], "p_1401->g_186[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1401->g_201.f0, "p_1401->g_201.f0", print_hash_value);
    transparent_crc(p_1401->g_201.f1, "p_1401->g_201.f1", print_hash_value);
    transparent_crc(p_1401->g_201.f2, "p_1401->g_201.f2", print_hash_value);
    transparent_crc(p_1401->g_201.f3, "p_1401->g_201.f3", print_hash_value);
    transparent_crc(p_1401->g_201.f4, "p_1401->g_201.f4", print_hash_value);
    transparent_crc(p_1401->g_201.f5, "p_1401->g_201.f5", print_hash_value);
    transparent_crc(p_1401->g_201.f6, "p_1401->g_201.f6", print_hash_value);
    transparent_crc(p_1401->g_201.f7, "p_1401->g_201.f7", print_hash_value);
    transparent_crc(p_1401->g_236.f0, "p_1401->g_236.f0", print_hash_value);
    transparent_crc(p_1401->g_236.f1, "p_1401->g_236.f1", print_hash_value);
    transparent_crc(p_1401->g_236.f2, "p_1401->g_236.f2", print_hash_value);
    transparent_crc(p_1401->g_236.f3, "p_1401->g_236.f3", print_hash_value);
    transparent_crc(p_1401->g_236.f4, "p_1401->g_236.f4", print_hash_value);
    transparent_crc(p_1401->g_236.f5, "p_1401->g_236.f5", print_hash_value);
    transparent_crc(p_1401->g_236.f6, "p_1401->g_236.f6", print_hash_value);
    transparent_crc(p_1401->g_236.f7, "p_1401->g_236.f7", print_hash_value);
    transparent_crc(p_1401->g_237.f0, "p_1401->g_237.f0", print_hash_value);
    transparent_crc(p_1401->g_237.f1, "p_1401->g_237.f1", print_hash_value);
    transparent_crc(p_1401->g_237.f2, "p_1401->g_237.f2", print_hash_value);
    transparent_crc(p_1401->g_237.f3, "p_1401->g_237.f3", print_hash_value);
    transparent_crc(p_1401->g_237.f4, "p_1401->g_237.f4", print_hash_value);
    transparent_crc(p_1401->g_237.f5, "p_1401->g_237.f5", print_hash_value);
    transparent_crc(p_1401->g_237.f6, "p_1401->g_237.f6", print_hash_value);
    transparent_crc(p_1401->g_237.f7, "p_1401->g_237.f7", print_hash_value);
    transparent_crc(p_1401->g_258.s0, "p_1401->g_258.s0", print_hash_value);
    transparent_crc(p_1401->g_258.s1, "p_1401->g_258.s1", print_hash_value);
    transparent_crc(p_1401->g_258.s2, "p_1401->g_258.s2", print_hash_value);
    transparent_crc(p_1401->g_258.s3, "p_1401->g_258.s3", print_hash_value);
    transparent_crc(p_1401->g_258.s4, "p_1401->g_258.s4", print_hash_value);
    transparent_crc(p_1401->g_258.s5, "p_1401->g_258.s5", print_hash_value);
    transparent_crc(p_1401->g_258.s6, "p_1401->g_258.s6", print_hash_value);
    transparent_crc(p_1401->g_258.s7, "p_1401->g_258.s7", print_hash_value);
    transparent_crc(p_1401->g_259.x, "p_1401->g_259.x", print_hash_value);
    transparent_crc(p_1401->g_259.y, "p_1401->g_259.y", print_hash_value);
    transparent_crc(p_1401->g_260.x, "p_1401->g_260.x", print_hash_value);
    transparent_crc(p_1401->g_260.y, "p_1401->g_260.y", print_hash_value);
    transparent_crc(p_1401->g_260.z, "p_1401->g_260.z", print_hash_value);
    transparent_crc(p_1401->g_260.w, "p_1401->g_260.w", print_hash_value);
    transparent_crc(p_1401->g_267.f0, "p_1401->g_267.f0", print_hash_value);
    transparent_crc(p_1401->g_267.f1, "p_1401->g_267.f1", print_hash_value);
    transparent_crc(p_1401->g_267.f2, "p_1401->g_267.f2", print_hash_value);
    transparent_crc(p_1401->g_267.f3, "p_1401->g_267.f3", print_hash_value);
    transparent_crc(p_1401->g_267.f4, "p_1401->g_267.f4", print_hash_value);
    transparent_crc(p_1401->g_267.f5, "p_1401->g_267.f5", print_hash_value);
    transparent_crc(p_1401->g_267.f6, "p_1401->g_267.f6", print_hash_value);
    transparent_crc(p_1401->g_267.f7, "p_1401->g_267.f7", print_hash_value);
    transparent_crc(p_1401->g_268.f0, "p_1401->g_268.f0", print_hash_value);
    transparent_crc(p_1401->g_268.f1, "p_1401->g_268.f1", print_hash_value);
    transparent_crc(p_1401->g_268.f2, "p_1401->g_268.f2", print_hash_value);
    transparent_crc(p_1401->g_268.f3, "p_1401->g_268.f3", print_hash_value);
    transparent_crc(p_1401->g_268.f4, "p_1401->g_268.f4", print_hash_value);
    transparent_crc(p_1401->g_268.f5, "p_1401->g_268.f5", print_hash_value);
    transparent_crc(p_1401->g_268.f6, "p_1401->g_268.f6", print_hash_value);
    transparent_crc(p_1401->g_268.f7, "p_1401->g_268.f7", print_hash_value);
    transparent_crc(p_1401->g_281, "p_1401->g_281", print_hash_value);
    transparent_crc(p_1401->g_312.f0, "p_1401->g_312.f0", print_hash_value);
    transparent_crc(p_1401->g_312.f1, "p_1401->g_312.f1", print_hash_value);
    transparent_crc(p_1401->g_312.f2, "p_1401->g_312.f2", print_hash_value);
    transparent_crc(p_1401->g_312.f3, "p_1401->g_312.f3", print_hash_value);
    transparent_crc(p_1401->g_312.f4, "p_1401->g_312.f4", print_hash_value);
    transparent_crc(p_1401->g_312.f5, "p_1401->g_312.f5", print_hash_value);
    transparent_crc(p_1401->g_312.f6, "p_1401->g_312.f6", print_hash_value);
    transparent_crc(p_1401->g_312.f7, "p_1401->g_312.f7", print_hash_value);
    transparent_crc(p_1401->g_313.f0, "p_1401->g_313.f0", print_hash_value);
    transparent_crc(p_1401->g_313.f1, "p_1401->g_313.f1", print_hash_value);
    transparent_crc(p_1401->g_313.f2, "p_1401->g_313.f2", print_hash_value);
    transparent_crc(p_1401->g_313.f3, "p_1401->g_313.f3", print_hash_value);
    transparent_crc(p_1401->g_313.f4, "p_1401->g_313.f4", print_hash_value);
    transparent_crc(p_1401->g_313.f5, "p_1401->g_313.f5", print_hash_value);
    transparent_crc(p_1401->g_313.f6, "p_1401->g_313.f6", print_hash_value);
    transparent_crc(p_1401->g_313.f7, "p_1401->g_313.f7", print_hash_value);
    transparent_crc(p_1401->g_357.s0, "p_1401->g_357.s0", print_hash_value);
    transparent_crc(p_1401->g_357.s1, "p_1401->g_357.s1", print_hash_value);
    transparent_crc(p_1401->g_357.s2, "p_1401->g_357.s2", print_hash_value);
    transparent_crc(p_1401->g_357.s3, "p_1401->g_357.s3", print_hash_value);
    transparent_crc(p_1401->g_357.s4, "p_1401->g_357.s4", print_hash_value);
    transparent_crc(p_1401->g_357.s5, "p_1401->g_357.s5", print_hash_value);
    transparent_crc(p_1401->g_357.s6, "p_1401->g_357.s6", print_hash_value);
    transparent_crc(p_1401->g_357.s7, "p_1401->g_357.s7", print_hash_value);
    transparent_crc(p_1401->g_357.s8, "p_1401->g_357.s8", print_hash_value);
    transparent_crc(p_1401->g_357.s9, "p_1401->g_357.s9", print_hash_value);
    transparent_crc(p_1401->g_357.sa, "p_1401->g_357.sa", print_hash_value);
    transparent_crc(p_1401->g_357.sb, "p_1401->g_357.sb", print_hash_value);
    transparent_crc(p_1401->g_357.sc, "p_1401->g_357.sc", print_hash_value);
    transparent_crc(p_1401->g_357.sd, "p_1401->g_357.sd", print_hash_value);
    transparent_crc(p_1401->g_357.se, "p_1401->g_357.se", print_hash_value);
    transparent_crc(p_1401->g_357.sf, "p_1401->g_357.sf", print_hash_value);
    transparent_crc(p_1401->g_377.f0, "p_1401->g_377.f0", print_hash_value);
    transparent_crc(p_1401->g_377.f1, "p_1401->g_377.f1", print_hash_value);
    transparent_crc(p_1401->g_377.f2, "p_1401->g_377.f2", print_hash_value);
    transparent_crc(p_1401->g_377.f3, "p_1401->g_377.f3", print_hash_value);
    transparent_crc(p_1401->g_377.f4, "p_1401->g_377.f4", print_hash_value);
    transparent_crc(p_1401->g_377.f5.f0, "p_1401->g_377.f5.f0", print_hash_value);
    transparent_crc(p_1401->g_377.f5.f1, "p_1401->g_377.f5.f1", print_hash_value);
    transparent_crc(p_1401->g_377.f5.f2, "p_1401->g_377.f5.f2", print_hash_value);
    transparent_crc(p_1401->g_377.f5.f3, "p_1401->g_377.f5.f3", print_hash_value);
    transparent_crc(p_1401->g_377.f5.f4, "p_1401->g_377.f5.f4", print_hash_value);
    transparent_crc(p_1401->g_377.f5.f5, "p_1401->g_377.f5.f5", print_hash_value);
    transparent_crc(p_1401->g_377.f5.f6, "p_1401->g_377.f5.f6", print_hash_value);
    transparent_crc(p_1401->g_377.f5.f7, "p_1401->g_377.f5.f7", print_hash_value);
    transparent_crc(p_1401->g_377.f6, "p_1401->g_377.f6", print_hash_value);
    transparent_crc(p_1401->g_377.f7, "p_1401->g_377.f7", print_hash_value);
    transparent_crc(p_1401->g_377.f8, "p_1401->g_377.f8", print_hash_value);
    transparent_crc(p_1401->g_377.f9, "p_1401->g_377.f9", print_hash_value);
    transparent_crc(p_1401->g_390.f0, "p_1401->g_390.f0", print_hash_value);
    transparent_crc(p_1401->g_390.f1, "p_1401->g_390.f1", print_hash_value);
    transparent_crc(p_1401->g_390.f2, "p_1401->g_390.f2", print_hash_value);
    transparent_crc(p_1401->g_390.f3, "p_1401->g_390.f3", print_hash_value);
    transparent_crc(p_1401->g_390.f4, "p_1401->g_390.f4", print_hash_value);
    transparent_crc(p_1401->g_390.f5.f0, "p_1401->g_390.f5.f0", print_hash_value);
    transparent_crc(p_1401->g_390.f5.f1, "p_1401->g_390.f5.f1", print_hash_value);
    transparent_crc(p_1401->g_390.f5.f2, "p_1401->g_390.f5.f2", print_hash_value);
    transparent_crc(p_1401->g_390.f5.f3, "p_1401->g_390.f5.f3", print_hash_value);
    transparent_crc(p_1401->g_390.f5.f4, "p_1401->g_390.f5.f4", print_hash_value);
    transparent_crc(p_1401->g_390.f5.f5, "p_1401->g_390.f5.f5", print_hash_value);
    transparent_crc(p_1401->g_390.f5.f6, "p_1401->g_390.f5.f6", print_hash_value);
    transparent_crc(p_1401->g_390.f5.f7, "p_1401->g_390.f5.f7", print_hash_value);
    transparent_crc(p_1401->g_390.f6, "p_1401->g_390.f6", print_hash_value);
    transparent_crc(p_1401->g_390.f7, "p_1401->g_390.f7", print_hash_value);
    transparent_crc(p_1401->g_390.f8, "p_1401->g_390.f8", print_hash_value);
    transparent_crc(p_1401->g_390.f9, "p_1401->g_390.f9", print_hash_value);
    transparent_crc(p_1401->g_405.s0, "p_1401->g_405.s0", print_hash_value);
    transparent_crc(p_1401->g_405.s1, "p_1401->g_405.s1", print_hash_value);
    transparent_crc(p_1401->g_405.s2, "p_1401->g_405.s2", print_hash_value);
    transparent_crc(p_1401->g_405.s3, "p_1401->g_405.s3", print_hash_value);
    transparent_crc(p_1401->g_405.s4, "p_1401->g_405.s4", print_hash_value);
    transparent_crc(p_1401->g_405.s5, "p_1401->g_405.s5", print_hash_value);
    transparent_crc(p_1401->g_405.s6, "p_1401->g_405.s6", print_hash_value);
    transparent_crc(p_1401->g_405.s7, "p_1401->g_405.s7", print_hash_value);
    transparent_crc(p_1401->g_437.x, "p_1401->g_437.x", print_hash_value);
    transparent_crc(p_1401->g_437.y, "p_1401->g_437.y", print_hash_value);
    transparent_crc(p_1401->g_437.z, "p_1401->g_437.z", print_hash_value);
    transparent_crc(p_1401->g_437.w, "p_1401->g_437.w", print_hash_value);
    transparent_crc(p_1401->g_438.x, "p_1401->g_438.x", print_hash_value);
    transparent_crc(p_1401->g_438.y, "p_1401->g_438.y", print_hash_value);
    transparent_crc(p_1401->g_440.x, "p_1401->g_440.x", print_hash_value);
    transparent_crc(p_1401->g_440.y, "p_1401->g_440.y", print_hash_value);
    transparent_crc(p_1401->g_440.z, "p_1401->g_440.z", print_hash_value);
    transparent_crc(p_1401->g_440.w, "p_1401->g_440.w", print_hash_value);
    transparent_crc(p_1401->g_510, "p_1401->g_510", print_hash_value);
    transparent_crc(p_1401->g_513.x, "p_1401->g_513.x", print_hash_value);
    transparent_crc(p_1401->g_513.y, "p_1401->g_513.y", print_hash_value);
    transparent_crc(p_1401->g_520.x, "p_1401->g_520.x", print_hash_value);
    transparent_crc(p_1401->g_520.y, "p_1401->g_520.y", print_hash_value);
    transparent_crc(p_1401->g_555.s0, "p_1401->g_555.s0", print_hash_value);
    transparent_crc(p_1401->g_555.s1, "p_1401->g_555.s1", print_hash_value);
    transparent_crc(p_1401->g_555.s2, "p_1401->g_555.s2", print_hash_value);
    transparent_crc(p_1401->g_555.s3, "p_1401->g_555.s3", print_hash_value);
    transparent_crc(p_1401->g_555.s4, "p_1401->g_555.s4", print_hash_value);
    transparent_crc(p_1401->g_555.s5, "p_1401->g_555.s5", print_hash_value);
    transparent_crc(p_1401->g_555.s6, "p_1401->g_555.s6", print_hash_value);
    transparent_crc(p_1401->g_555.s7, "p_1401->g_555.s7", print_hash_value);
    transparent_crc(p_1401->g_555.s8, "p_1401->g_555.s8", print_hash_value);
    transparent_crc(p_1401->g_555.s9, "p_1401->g_555.s9", print_hash_value);
    transparent_crc(p_1401->g_555.sa, "p_1401->g_555.sa", print_hash_value);
    transparent_crc(p_1401->g_555.sb, "p_1401->g_555.sb", print_hash_value);
    transparent_crc(p_1401->g_555.sc, "p_1401->g_555.sc", print_hash_value);
    transparent_crc(p_1401->g_555.sd, "p_1401->g_555.sd", print_hash_value);
    transparent_crc(p_1401->g_555.se, "p_1401->g_555.se", print_hash_value);
    transparent_crc(p_1401->g_555.sf, "p_1401->g_555.sf", print_hash_value);
    transparent_crc(p_1401->g_558.x, "p_1401->g_558.x", print_hash_value);
    transparent_crc(p_1401->g_558.y, "p_1401->g_558.y", print_hash_value);
    transparent_crc(p_1401->g_558.z, "p_1401->g_558.z", print_hash_value);
    transparent_crc(p_1401->g_558.w, "p_1401->g_558.w", print_hash_value);
    transparent_crc(p_1401->g_563.x, "p_1401->g_563.x", print_hash_value);
    transparent_crc(p_1401->g_563.y, "p_1401->g_563.y", print_hash_value);
    transparent_crc(p_1401->g_563.z, "p_1401->g_563.z", print_hash_value);
    transparent_crc(p_1401->g_563.w, "p_1401->g_563.w", print_hash_value);
    transparent_crc(p_1401->g_589.x, "p_1401->g_589.x", print_hash_value);
    transparent_crc(p_1401->g_589.y, "p_1401->g_589.y", print_hash_value);
    transparent_crc(p_1401->g_589.z, "p_1401->g_589.z", print_hash_value);
    transparent_crc(p_1401->g_589.w, "p_1401->g_589.w", print_hash_value);
    transparent_crc(p_1401->g_601.x, "p_1401->g_601.x", print_hash_value);
    transparent_crc(p_1401->g_601.y, "p_1401->g_601.y", print_hash_value);
    transparent_crc(p_1401->g_607.x, "p_1401->g_607.x", print_hash_value);
    transparent_crc(p_1401->g_607.y, "p_1401->g_607.y", print_hash_value);
    transparent_crc(p_1401->g_612.x, "p_1401->g_612.x", print_hash_value);
    transparent_crc(p_1401->g_612.y, "p_1401->g_612.y", print_hash_value);
    transparent_crc(p_1401->g_612.z, "p_1401->g_612.z", print_hash_value);
    transparent_crc(p_1401->g_612.w, "p_1401->g_612.w", print_hash_value);
    transparent_crc(p_1401->g_637.s0, "p_1401->g_637.s0", print_hash_value);
    transparent_crc(p_1401->g_637.s1, "p_1401->g_637.s1", print_hash_value);
    transparent_crc(p_1401->g_637.s2, "p_1401->g_637.s2", print_hash_value);
    transparent_crc(p_1401->g_637.s3, "p_1401->g_637.s3", print_hash_value);
    transparent_crc(p_1401->g_637.s4, "p_1401->g_637.s4", print_hash_value);
    transparent_crc(p_1401->g_637.s5, "p_1401->g_637.s5", print_hash_value);
    transparent_crc(p_1401->g_637.s6, "p_1401->g_637.s6", print_hash_value);
    transparent_crc(p_1401->g_637.s7, "p_1401->g_637.s7", print_hash_value);
    transparent_crc(p_1401->g_650.s0, "p_1401->g_650.s0", print_hash_value);
    transparent_crc(p_1401->g_650.s1, "p_1401->g_650.s1", print_hash_value);
    transparent_crc(p_1401->g_650.s2, "p_1401->g_650.s2", print_hash_value);
    transparent_crc(p_1401->g_650.s3, "p_1401->g_650.s3", print_hash_value);
    transparent_crc(p_1401->g_650.s4, "p_1401->g_650.s4", print_hash_value);
    transparent_crc(p_1401->g_650.s5, "p_1401->g_650.s5", print_hash_value);
    transparent_crc(p_1401->g_650.s6, "p_1401->g_650.s6", print_hash_value);
    transparent_crc(p_1401->g_650.s7, "p_1401->g_650.s7", print_hash_value);
    transparent_crc(p_1401->g_651.s0, "p_1401->g_651.s0", print_hash_value);
    transparent_crc(p_1401->g_651.s1, "p_1401->g_651.s1", print_hash_value);
    transparent_crc(p_1401->g_651.s2, "p_1401->g_651.s2", print_hash_value);
    transparent_crc(p_1401->g_651.s3, "p_1401->g_651.s3", print_hash_value);
    transparent_crc(p_1401->g_651.s4, "p_1401->g_651.s4", print_hash_value);
    transparent_crc(p_1401->g_651.s5, "p_1401->g_651.s5", print_hash_value);
    transparent_crc(p_1401->g_651.s6, "p_1401->g_651.s6", print_hash_value);
    transparent_crc(p_1401->g_651.s7, "p_1401->g_651.s7", print_hash_value);
    transparent_crc(p_1401->g_651.s8, "p_1401->g_651.s8", print_hash_value);
    transparent_crc(p_1401->g_651.s9, "p_1401->g_651.s9", print_hash_value);
    transparent_crc(p_1401->g_651.sa, "p_1401->g_651.sa", print_hash_value);
    transparent_crc(p_1401->g_651.sb, "p_1401->g_651.sb", print_hash_value);
    transparent_crc(p_1401->g_651.sc, "p_1401->g_651.sc", print_hash_value);
    transparent_crc(p_1401->g_651.sd, "p_1401->g_651.sd", print_hash_value);
    transparent_crc(p_1401->g_651.se, "p_1401->g_651.se", print_hash_value);
    transparent_crc(p_1401->g_651.sf, "p_1401->g_651.sf", print_hash_value);
    transparent_crc(p_1401->g_680.x, "p_1401->g_680.x", print_hash_value);
    transparent_crc(p_1401->g_680.y, "p_1401->g_680.y", print_hash_value);
    transparent_crc(p_1401->g_680.z, "p_1401->g_680.z", print_hash_value);
    transparent_crc(p_1401->g_680.w, "p_1401->g_680.w", print_hash_value);
    transparent_crc(p_1401->g_689, "p_1401->g_689", print_hash_value);
    transparent_crc(p_1401->g_691.s0, "p_1401->g_691.s0", print_hash_value);
    transparent_crc(p_1401->g_691.s1, "p_1401->g_691.s1", print_hash_value);
    transparent_crc(p_1401->g_691.s2, "p_1401->g_691.s2", print_hash_value);
    transparent_crc(p_1401->g_691.s3, "p_1401->g_691.s3", print_hash_value);
    transparent_crc(p_1401->g_691.s4, "p_1401->g_691.s4", print_hash_value);
    transparent_crc(p_1401->g_691.s5, "p_1401->g_691.s5", print_hash_value);
    transparent_crc(p_1401->g_691.s6, "p_1401->g_691.s6", print_hash_value);
    transparent_crc(p_1401->g_691.s7, "p_1401->g_691.s7", print_hash_value);
    transparent_crc(p_1401->g_699.x, "p_1401->g_699.x", print_hash_value);
    transparent_crc(p_1401->g_699.y, "p_1401->g_699.y", print_hash_value);
    transparent_crc(p_1401->g_699.z, "p_1401->g_699.z", print_hash_value);
    transparent_crc(p_1401->g_699.w, "p_1401->g_699.w", print_hash_value);
    transparent_crc(p_1401->g_748, "p_1401->g_748", print_hash_value);
    transparent_crc(p_1401->g_764.s0, "p_1401->g_764.s0", print_hash_value);
    transparent_crc(p_1401->g_764.s1, "p_1401->g_764.s1", print_hash_value);
    transparent_crc(p_1401->g_764.s2, "p_1401->g_764.s2", print_hash_value);
    transparent_crc(p_1401->g_764.s3, "p_1401->g_764.s3", print_hash_value);
    transparent_crc(p_1401->g_764.s4, "p_1401->g_764.s4", print_hash_value);
    transparent_crc(p_1401->g_764.s5, "p_1401->g_764.s5", print_hash_value);
    transparent_crc(p_1401->g_764.s6, "p_1401->g_764.s6", print_hash_value);
    transparent_crc(p_1401->g_764.s7, "p_1401->g_764.s7", print_hash_value);
    transparent_crc(p_1401->g_765.x, "p_1401->g_765.x", print_hash_value);
    transparent_crc(p_1401->g_765.y, "p_1401->g_765.y", print_hash_value);
    transparent_crc(p_1401->g_768.s0, "p_1401->g_768.s0", print_hash_value);
    transparent_crc(p_1401->g_768.s1, "p_1401->g_768.s1", print_hash_value);
    transparent_crc(p_1401->g_768.s2, "p_1401->g_768.s2", print_hash_value);
    transparent_crc(p_1401->g_768.s3, "p_1401->g_768.s3", print_hash_value);
    transparent_crc(p_1401->g_768.s4, "p_1401->g_768.s4", print_hash_value);
    transparent_crc(p_1401->g_768.s5, "p_1401->g_768.s5", print_hash_value);
    transparent_crc(p_1401->g_768.s6, "p_1401->g_768.s6", print_hash_value);
    transparent_crc(p_1401->g_768.s7, "p_1401->g_768.s7", print_hash_value);
    transparent_crc(p_1401->g_768.s8, "p_1401->g_768.s8", print_hash_value);
    transparent_crc(p_1401->g_768.s9, "p_1401->g_768.s9", print_hash_value);
    transparent_crc(p_1401->g_768.sa, "p_1401->g_768.sa", print_hash_value);
    transparent_crc(p_1401->g_768.sb, "p_1401->g_768.sb", print_hash_value);
    transparent_crc(p_1401->g_768.sc, "p_1401->g_768.sc", print_hash_value);
    transparent_crc(p_1401->g_768.sd, "p_1401->g_768.sd", print_hash_value);
    transparent_crc(p_1401->g_768.se, "p_1401->g_768.se", print_hash_value);
    transparent_crc(p_1401->g_768.sf, "p_1401->g_768.sf", print_hash_value);
    transparent_crc(p_1401->g_776, "p_1401->g_776", print_hash_value);
    transparent_crc(p_1401->g_782.x, "p_1401->g_782.x", print_hash_value);
    transparent_crc(p_1401->g_782.y, "p_1401->g_782.y", print_hash_value);
    transparent_crc(p_1401->g_782.z, "p_1401->g_782.z", print_hash_value);
    transparent_crc(p_1401->g_782.w, "p_1401->g_782.w", print_hash_value);
    transparent_crc(p_1401->g_783.s0, "p_1401->g_783.s0", print_hash_value);
    transparent_crc(p_1401->g_783.s1, "p_1401->g_783.s1", print_hash_value);
    transparent_crc(p_1401->g_783.s2, "p_1401->g_783.s2", print_hash_value);
    transparent_crc(p_1401->g_783.s3, "p_1401->g_783.s3", print_hash_value);
    transparent_crc(p_1401->g_783.s4, "p_1401->g_783.s4", print_hash_value);
    transparent_crc(p_1401->g_783.s5, "p_1401->g_783.s5", print_hash_value);
    transparent_crc(p_1401->g_783.s6, "p_1401->g_783.s6", print_hash_value);
    transparent_crc(p_1401->g_783.s7, "p_1401->g_783.s7", print_hash_value);
    transparent_crc(p_1401->g_802.f0, "p_1401->g_802.f0", print_hash_value);
    transparent_crc(p_1401->g_802.f1, "p_1401->g_802.f1", print_hash_value);
    transparent_crc(p_1401->g_802.f2, "p_1401->g_802.f2", print_hash_value);
    transparent_crc(p_1401->g_802.f3, "p_1401->g_802.f3", print_hash_value);
    transparent_crc(p_1401->g_802.f4, "p_1401->g_802.f4", print_hash_value);
    transparent_crc(p_1401->g_802.f5.f0, "p_1401->g_802.f5.f0", print_hash_value);
    transparent_crc(p_1401->g_802.f5.f1, "p_1401->g_802.f5.f1", print_hash_value);
    transparent_crc(p_1401->g_802.f5.f2, "p_1401->g_802.f5.f2", print_hash_value);
    transparent_crc(p_1401->g_802.f5.f3, "p_1401->g_802.f5.f3", print_hash_value);
    transparent_crc(p_1401->g_802.f5.f4, "p_1401->g_802.f5.f4", print_hash_value);
    transparent_crc(p_1401->g_802.f5.f5, "p_1401->g_802.f5.f5", print_hash_value);
    transparent_crc(p_1401->g_802.f5.f6, "p_1401->g_802.f5.f6", print_hash_value);
    transparent_crc(p_1401->g_802.f5.f7, "p_1401->g_802.f5.f7", print_hash_value);
    transparent_crc(p_1401->g_802.f6, "p_1401->g_802.f6", print_hash_value);
    transparent_crc(p_1401->g_802.f7, "p_1401->g_802.f7", print_hash_value);
    transparent_crc(p_1401->g_802.f8, "p_1401->g_802.f8", print_hash_value);
    transparent_crc(p_1401->g_802.f9, "p_1401->g_802.f9", print_hash_value);
    transparent_crc(p_1401->g_861, "p_1401->g_861", print_hash_value);
    transparent_crc(p_1401->g_930.s0, "p_1401->g_930.s0", print_hash_value);
    transparent_crc(p_1401->g_930.s1, "p_1401->g_930.s1", print_hash_value);
    transparent_crc(p_1401->g_930.s2, "p_1401->g_930.s2", print_hash_value);
    transparent_crc(p_1401->g_930.s3, "p_1401->g_930.s3", print_hash_value);
    transparent_crc(p_1401->g_930.s4, "p_1401->g_930.s4", print_hash_value);
    transparent_crc(p_1401->g_930.s5, "p_1401->g_930.s5", print_hash_value);
    transparent_crc(p_1401->g_930.s6, "p_1401->g_930.s6", print_hash_value);
    transparent_crc(p_1401->g_930.s7, "p_1401->g_930.s7", print_hash_value);
    transparent_crc(p_1401->g_930.s8, "p_1401->g_930.s8", print_hash_value);
    transparent_crc(p_1401->g_930.s9, "p_1401->g_930.s9", print_hash_value);
    transparent_crc(p_1401->g_930.sa, "p_1401->g_930.sa", print_hash_value);
    transparent_crc(p_1401->g_930.sb, "p_1401->g_930.sb", print_hash_value);
    transparent_crc(p_1401->g_930.sc, "p_1401->g_930.sc", print_hash_value);
    transparent_crc(p_1401->g_930.sd, "p_1401->g_930.sd", print_hash_value);
    transparent_crc(p_1401->g_930.se, "p_1401->g_930.se", print_hash_value);
    transparent_crc(p_1401->g_930.sf, "p_1401->g_930.sf", print_hash_value);
    transparent_crc(p_1401->g_953, "p_1401->g_953", print_hash_value);
    transparent_crc(p_1401->g_972.f0, "p_1401->g_972.f0", print_hash_value);
    transparent_crc(p_1401->g_972.f1, "p_1401->g_972.f1", print_hash_value);
    transparent_crc(p_1401->g_972.f2, "p_1401->g_972.f2", print_hash_value);
    transparent_crc(p_1401->g_972.f3, "p_1401->g_972.f3", print_hash_value);
    transparent_crc(p_1401->g_972.f4, "p_1401->g_972.f4", print_hash_value);
    transparent_crc(p_1401->g_972.f5.f0, "p_1401->g_972.f5.f0", print_hash_value);
    transparent_crc(p_1401->g_972.f5.f1, "p_1401->g_972.f5.f1", print_hash_value);
    transparent_crc(p_1401->g_972.f5.f2, "p_1401->g_972.f5.f2", print_hash_value);
    transparent_crc(p_1401->g_972.f5.f3, "p_1401->g_972.f5.f3", print_hash_value);
    transparent_crc(p_1401->g_972.f5.f4, "p_1401->g_972.f5.f4", print_hash_value);
    transparent_crc(p_1401->g_972.f5.f5, "p_1401->g_972.f5.f5", print_hash_value);
    transparent_crc(p_1401->g_972.f5.f6, "p_1401->g_972.f5.f6", print_hash_value);
    transparent_crc(p_1401->g_972.f5.f7, "p_1401->g_972.f5.f7", print_hash_value);
    transparent_crc(p_1401->g_972.f6, "p_1401->g_972.f6", print_hash_value);
    transparent_crc(p_1401->g_972.f7, "p_1401->g_972.f7", print_hash_value);
    transparent_crc(p_1401->g_972.f8, "p_1401->g_972.f8", print_hash_value);
    transparent_crc(p_1401->g_972.f9, "p_1401->g_972.f9", print_hash_value);
    transparent_crc(p_1401->g_994.x, "p_1401->g_994.x", print_hash_value);
    transparent_crc(p_1401->g_994.y, "p_1401->g_994.y", print_hash_value);
    transparent_crc(p_1401->g_996.x, "p_1401->g_996.x", print_hash_value);
    transparent_crc(p_1401->g_996.y, "p_1401->g_996.y", print_hash_value);
    transparent_crc(p_1401->g_996.z, "p_1401->g_996.z", print_hash_value);
    transparent_crc(p_1401->g_996.w, "p_1401->g_996.w", print_hash_value);
    transparent_crc(p_1401->g_1005.f0, "p_1401->g_1005.f0", print_hash_value);
    transparent_crc(p_1401->g_1005.f1, "p_1401->g_1005.f1", print_hash_value);
    transparent_crc(p_1401->g_1005.f2, "p_1401->g_1005.f2", print_hash_value);
    transparent_crc(p_1401->g_1005.f3, "p_1401->g_1005.f3", print_hash_value);
    transparent_crc(p_1401->g_1005.f4, "p_1401->g_1005.f4", print_hash_value);
    transparent_crc(p_1401->g_1005.f5, "p_1401->g_1005.f5", print_hash_value);
    transparent_crc(p_1401->g_1005.f6, "p_1401->g_1005.f6", print_hash_value);
    transparent_crc(p_1401->g_1005.f7, "p_1401->g_1005.f7", print_hash_value);
    transparent_crc(p_1401->g_1024.f0, "p_1401->g_1024.f0", print_hash_value);
    transparent_crc(p_1401->g_1024.f1, "p_1401->g_1024.f1", print_hash_value);
    transparent_crc(p_1401->g_1024.f2, "p_1401->g_1024.f2", print_hash_value);
    transparent_crc(p_1401->g_1024.f3, "p_1401->g_1024.f3", print_hash_value);
    transparent_crc(p_1401->g_1024.f4, "p_1401->g_1024.f4", print_hash_value);
    transparent_crc(p_1401->g_1024.f5.f0, "p_1401->g_1024.f5.f0", print_hash_value);
    transparent_crc(p_1401->g_1024.f5.f1, "p_1401->g_1024.f5.f1", print_hash_value);
    transparent_crc(p_1401->g_1024.f5.f2, "p_1401->g_1024.f5.f2", print_hash_value);
    transparent_crc(p_1401->g_1024.f5.f3, "p_1401->g_1024.f5.f3", print_hash_value);
    transparent_crc(p_1401->g_1024.f5.f4, "p_1401->g_1024.f5.f4", print_hash_value);
    transparent_crc(p_1401->g_1024.f5.f5, "p_1401->g_1024.f5.f5", print_hash_value);
    transparent_crc(p_1401->g_1024.f5.f6, "p_1401->g_1024.f5.f6", print_hash_value);
    transparent_crc(p_1401->g_1024.f5.f7, "p_1401->g_1024.f5.f7", print_hash_value);
    transparent_crc(p_1401->g_1024.f6, "p_1401->g_1024.f6", print_hash_value);
    transparent_crc(p_1401->g_1024.f7, "p_1401->g_1024.f7", print_hash_value);
    transparent_crc(p_1401->g_1024.f8, "p_1401->g_1024.f8", print_hash_value);
    transparent_crc(p_1401->g_1024.f9, "p_1401->g_1024.f9", print_hash_value);
    transparent_crc(p_1401->g_1039.f0, "p_1401->g_1039.f0", print_hash_value);
    transparent_crc(p_1401->g_1039.f1, "p_1401->g_1039.f1", print_hash_value);
    transparent_crc(p_1401->g_1039.f2, "p_1401->g_1039.f2", print_hash_value);
    transparent_crc(p_1401->g_1039.f3, "p_1401->g_1039.f3", print_hash_value);
    transparent_crc(p_1401->g_1039.f4, "p_1401->g_1039.f4", print_hash_value);
    transparent_crc(p_1401->g_1039.f5.f0, "p_1401->g_1039.f5.f0", print_hash_value);
    transparent_crc(p_1401->g_1039.f5.f1, "p_1401->g_1039.f5.f1", print_hash_value);
    transparent_crc(p_1401->g_1039.f5.f2, "p_1401->g_1039.f5.f2", print_hash_value);
    transparent_crc(p_1401->g_1039.f5.f3, "p_1401->g_1039.f5.f3", print_hash_value);
    transparent_crc(p_1401->g_1039.f5.f4, "p_1401->g_1039.f5.f4", print_hash_value);
    transparent_crc(p_1401->g_1039.f5.f5, "p_1401->g_1039.f5.f5", print_hash_value);
    transparent_crc(p_1401->g_1039.f5.f6, "p_1401->g_1039.f5.f6", print_hash_value);
    transparent_crc(p_1401->g_1039.f5.f7, "p_1401->g_1039.f5.f7", print_hash_value);
    transparent_crc(p_1401->g_1039.f6, "p_1401->g_1039.f6", print_hash_value);
    transparent_crc(p_1401->g_1039.f7, "p_1401->g_1039.f7", print_hash_value);
    transparent_crc(p_1401->g_1039.f8, "p_1401->g_1039.f8", print_hash_value);
    transparent_crc(p_1401->g_1039.f9, "p_1401->g_1039.f9", print_hash_value);
    transparent_crc(p_1401->g_1043.s0, "p_1401->g_1043.s0", print_hash_value);
    transparent_crc(p_1401->g_1043.s1, "p_1401->g_1043.s1", print_hash_value);
    transparent_crc(p_1401->g_1043.s2, "p_1401->g_1043.s2", print_hash_value);
    transparent_crc(p_1401->g_1043.s3, "p_1401->g_1043.s3", print_hash_value);
    transparent_crc(p_1401->g_1043.s4, "p_1401->g_1043.s4", print_hash_value);
    transparent_crc(p_1401->g_1043.s5, "p_1401->g_1043.s5", print_hash_value);
    transparent_crc(p_1401->g_1043.s6, "p_1401->g_1043.s6", print_hash_value);
    transparent_crc(p_1401->g_1043.s7, "p_1401->g_1043.s7", print_hash_value);
    transparent_crc(p_1401->g_1043.s8, "p_1401->g_1043.s8", print_hash_value);
    transparent_crc(p_1401->g_1043.s9, "p_1401->g_1043.s9", print_hash_value);
    transparent_crc(p_1401->g_1043.sa, "p_1401->g_1043.sa", print_hash_value);
    transparent_crc(p_1401->g_1043.sb, "p_1401->g_1043.sb", print_hash_value);
    transparent_crc(p_1401->g_1043.sc, "p_1401->g_1043.sc", print_hash_value);
    transparent_crc(p_1401->g_1043.sd, "p_1401->g_1043.sd", print_hash_value);
    transparent_crc(p_1401->g_1043.se, "p_1401->g_1043.se", print_hash_value);
    transparent_crc(p_1401->g_1043.sf, "p_1401->g_1043.sf", print_hash_value);
    transparent_crc(p_1401->g_1044.s0, "p_1401->g_1044.s0", print_hash_value);
    transparent_crc(p_1401->g_1044.s1, "p_1401->g_1044.s1", print_hash_value);
    transparent_crc(p_1401->g_1044.s2, "p_1401->g_1044.s2", print_hash_value);
    transparent_crc(p_1401->g_1044.s3, "p_1401->g_1044.s3", print_hash_value);
    transparent_crc(p_1401->g_1044.s4, "p_1401->g_1044.s4", print_hash_value);
    transparent_crc(p_1401->g_1044.s5, "p_1401->g_1044.s5", print_hash_value);
    transparent_crc(p_1401->g_1044.s6, "p_1401->g_1044.s6", print_hash_value);
    transparent_crc(p_1401->g_1044.s7, "p_1401->g_1044.s7", print_hash_value);
    transparent_crc(p_1401->g_1052, "p_1401->g_1052", print_hash_value);
    transparent_crc(p_1401->g_1068.f0, "p_1401->g_1068.f0", print_hash_value);
    transparent_crc(p_1401->g_1068.f1, "p_1401->g_1068.f1", print_hash_value);
    transparent_crc(p_1401->g_1068.f2, "p_1401->g_1068.f2", print_hash_value);
    transparent_crc(p_1401->g_1068.f3, "p_1401->g_1068.f3", print_hash_value);
    transparent_crc(p_1401->g_1068.f4, "p_1401->g_1068.f4", print_hash_value);
    transparent_crc(p_1401->g_1068.f5, "p_1401->g_1068.f5", print_hash_value);
    transparent_crc(p_1401->g_1068.f6, "p_1401->g_1068.f6", print_hash_value);
    transparent_crc(p_1401->g_1068.f7, "p_1401->g_1068.f7", print_hash_value);
    transparent_crc(p_1401->g_1076, "p_1401->g_1076", print_hash_value);
    transparent_crc(p_1401->g_1089.f0, "p_1401->g_1089.f0", print_hash_value);
    transparent_crc(p_1401->g_1089.f1, "p_1401->g_1089.f1", print_hash_value);
    transparent_crc(p_1401->g_1089.f2, "p_1401->g_1089.f2", print_hash_value);
    transparent_crc(p_1401->g_1089.f3, "p_1401->g_1089.f3", print_hash_value);
    transparent_crc(p_1401->g_1089.f4, "p_1401->g_1089.f4", print_hash_value);
    transparent_crc(p_1401->g_1089.f5, "p_1401->g_1089.f5", print_hash_value);
    transparent_crc(p_1401->g_1089.f6, "p_1401->g_1089.f6", print_hash_value);
    transparent_crc(p_1401->g_1089.f7, "p_1401->g_1089.f7", print_hash_value);
    transparent_crc(p_1401->g_1126.s0, "p_1401->g_1126.s0", print_hash_value);
    transparent_crc(p_1401->g_1126.s1, "p_1401->g_1126.s1", print_hash_value);
    transparent_crc(p_1401->g_1126.s2, "p_1401->g_1126.s2", print_hash_value);
    transparent_crc(p_1401->g_1126.s3, "p_1401->g_1126.s3", print_hash_value);
    transparent_crc(p_1401->g_1126.s4, "p_1401->g_1126.s4", print_hash_value);
    transparent_crc(p_1401->g_1126.s5, "p_1401->g_1126.s5", print_hash_value);
    transparent_crc(p_1401->g_1126.s6, "p_1401->g_1126.s6", print_hash_value);
    transparent_crc(p_1401->g_1126.s7, "p_1401->g_1126.s7", print_hash_value);
    transparent_crc(p_1401->g_1126.s8, "p_1401->g_1126.s8", print_hash_value);
    transparent_crc(p_1401->g_1126.s9, "p_1401->g_1126.s9", print_hash_value);
    transparent_crc(p_1401->g_1126.sa, "p_1401->g_1126.sa", print_hash_value);
    transparent_crc(p_1401->g_1126.sb, "p_1401->g_1126.sb", print_hash_value);
    transparent_crc(p_1401->g_1126.sc, "p_1401->g_1126.sc", print_hash_value);
    transparent_crc(p_1401->g_1126.sd, "p_1401->g_1126.sd", print_hash_value);
    transparent_crc(p_1401->g_1126.se, "p_1401->g_1126.se", print_hash_value);
    transparent_crc(p_1401->g_1126.sf, "p_1401->g_1126.sf", print_hash_value);
    transparent_crc(p_1401->g_1147.s0, "p_1401->g_1147.s0", print_hash_value);
    transparent_crc(p_1401->g_1147.s1, "p_1401->g_1147.s1", print_hash_value);
    transparent_crc(p_1401->g_1147.s2, "p_1401->g_1147.s2", print_hash_value);
    transparent_crc(p_1401->g_1147.s3, "p_1401->g_1147.s3", print_hash_value);
    transparent_crc(p_1401->g_1147.s4, "p_1401->g_1147.s4", print_hash_value);
    transparent_crc(p_1401->g_1147.s5, "p_1401->g_1147.s5", print_hash_value);
    transparent_crc(p_1401->g_1147.s6, "p_1401->g_1147.s6", print_hash_value);
    transparent_crc(p_1401->g_1147.s7, "p_1401->g_1147.s7", print_hash_value);
    transparent_crc(p_1401->g_1148.x, "p_1401->g_1148.x", print_hash_value);
    transparent_crc(p_1401->g_1148.y, "p_1401->g_1148.y", print_hash_value);
    transparent_crc(p_1401->g_1160.s0, "p_1401->g_1160.s0", print_hash_value);
    transparent_crc(p_1401->g_1160.s1, "p_1401->g_1160.s1", print_hash_value);
    transparent_crc(p_1401->g_1160.s2, "p_1401->g_1160.s2", print_hash_value);
    transparent_crc(p_1401->g_1160.s3, "p_1401->g_1160.s3", print_hash_value);
    transparent_crc(p_1401->g_1160.s4, "p_1401->g_1160.s4", print_hash_value);
    transparent_crc(p_1401->g_1160.s5, "p_1401->g_1160.s5", print_hash_value);
    transparent_crc(p_1401->g_1160.s6, "p_1401->g_1160.s6", print_hash_value);
    transparent_crc(p_1401->g_1160.s7, "p_1401->g_1160.s7", print_hash_value);
    transparent_crc(p_1401->g_1160.s8, "p_1401->g_1160.s8", print_hash_value);
    transparent_crc(p_1401->g_1160.s9, "p_1401->g_1160.s9", print_hash_value);
    transparent_crc(p_1401->g_1160.sa, "p_1401->g_1160.sa", print_hash_value);
    transparent_crc(p_1401->g_1160.sb, "p_1401->g_1160.sb", print_hash_value);
    transparent_crc(p_1401->g_1160.sc, "p_1401->g_1160.sc", print_hash_value);
    transparent_crc(p_1401->g_1160.sd, "p_1401->g_1160.sd", print_hash_value);
    transparent_crc(p_1401->g_1160.se, "p_1401->g_1160.se", print_hash_value);
    transparent_crc(p_1401->g_1160.sf, "p_1401->g_1160.sf", print_hash_value);
    transparent_crc(p_1401->g_1161.s0, "p_1401->g_1161.s0", print_hash_value);
    transparent_crc(p_1401->g_1161.s1, "p_1401->g_1161.s1", print_hash_value);
    transparent_crc(p_1401->g_1161.s2, "p_1401->g_1161.s2", print_hash_value);
    transparent_crc(p_1401->g_1161.s3, "p_1401->g_1161.s3", print_hash_value);
    transparent_crc(p_1401->g_1161.s4, "p_1401->g_1161.s4", print_hash_value);
    transparent_crc(p_1401->g_1161.s5, "p_1401->g_1161.s5", print_hash_value);
    transparent_crc(p_1401->g_1161.s6, "p_1401->g_1161.s6", print_hash_value);
    transparent_crc(p_1401->g_1161.s7, "p_1401->g_1161.s7", print_hash_value);
    transparent_crc(p_1401->g_1169.x, "p_1401->g_1169.x", print_hash_value);
    transparent_crc(p_1401->g_1169.y, "p_1401->g_1169.y", print_hash_value);
    transparent_crc(p_1401->g_1171.x, "p_1401->g_1171.x", print_hash_value);
    transparent_crc(p_1401->g_1171.y, "p_1401->g_1171.y", print_hash_value);
    transparent_crc(p_1401->g_1171.z, "p_1401->g_1171.z", print_hash_value);
    transparent_crc(p_1401->g_1171.w, "p_1401->g_1171.w", print_hash_value);
    transparent_crc(p_1401->g_1175.s0, "p_1401->g_1175.s0", print_hash_value);
    transparent_crc(p_1401->g_1175.s1, "p_1401->g_1175.s1", print_hash_value);
    transparent_crc(p_1401->g_1175.s2, "p_1401->g_1175.s2", print_hash_value);
    transparent_crc(p_1401->g_1175.s3, "p_1401->g_1175.s3", print_hash_value);
    transparent_crc(p_1401->g_1175.s4, "p_1401->g_1175.s4", print_hash_value);
    transparent_crc(p_1401->g_1175.s5, "p_1401->g_1175.s5", print_hash_value);
    transparent_crc(p_1401->g_1175.s6, "p_1401->g_1175.s6", print_hash_value);
    transparent_crc(p_1401->g_1175.s7, "p_1401->g_1175.s7", print_hash_value);
    transparent_crc(p_1401->g_1176.x, "p_1401->g_1176.x", print_hash_value);
    transparent_crc(p_1401->g_1176.y, "p_1401->g_1176.y", print_hash_value);
    transparent_crc(p_1401->g_1176.z, "p_1401->g_1176.z", print_hash_value);
    transparent_crc(p_1401->g_1176.w, "p_1401->g_1176.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1401->g_1200[i].f0, "p_1401->g_1200[i].f0", print_hash_value);
        transparent_crc(p_1401->g_1200[i].f1, "p_1401->g_1200[i].f1", print_hash_value);
        transparent_crc(p_1401->g_1200[i].f2, "p_1401->g_1200[i].f2", print_hash_value);
        transparent_crc(p_1401->g_1200[i].f3, "p_1401->g_1200[i].f3", print_hash_value);
        transparent_crc(p_1401->g_1200[i].f4, "p_1401->g_1200[i].f4", print_hash_value);
        transparent_crc(p_1401->g_1200[i].f5, "p_1401->g_1200[i].f5", print_hash_value);
        transparent_crc(p_1401->g_1200[i].f6, "p_1401->g_1200[i].f6", print_hash_value);
        transparent_crc(p_1401->g_1200[i].f7, "p_1401->g_1200[i].f7", print_hash_value);

    }
    transparent_crc(p_1401->g_1299.f0, "p_1401->g_1299.f0", print_hash_value);
    transparent_crc(p_1401->g_1299.f1, "p_1401->g_1299.f1", print_hash_value);
    transparent_crc(p_1401->g_1299.f2, "p_1401->g_1299.f2", print_hash_value);
    transparent_crc(p_1401->g_1299.f3, "p_1401->g_1299.f3", print_hash_value);
    transparent_crc(p_1401->g_1299.f4, "p_1401->g_1299.f4", print_hash_value);
    transparent_crc(p_1401->g_1299.f5, "p_1401->g_1299.f5", print_hash_value);
    transparent_crc(p_1401->g_1299.f6, "p_1401->g_1299.f6", print_hash_value);
    transparent_crc(p_1401->g_1299.f7, "p_1401->g_1299.f7", print_hash_value);
    transparent_crc(p_1401->g_1300, "p_1401->g_1300", print_hash_value);
    transparent_crc(p_1401->g_1366.x, "p_1401->g_1366.x", print_hash_value);
    transparent_crc(p_1401->g_1366.y, "p_1401->g_1366.y", print_hash_value);
    transparent_crc(p_1401->g_1366.z, "p_1401->g_1366.z", print_hash_value);
    transparent_crc(p_1401->g_1366.w, "p_1401->g_1366.w", print_hash_value);
    transparent_crc(p_1401->g_1391.s0, "p_1401->g_1391.s0", print_hash_value);
    transparent_crc(p_1401->g_1391.s1, "p_1401->g_1391.s1", print_hash_value);
    transparent_crc(p_1401->g_1391.s2, "p_1401->g_1391.s2", print_hash_value);
    transparent_crc(p_1401->g_1391.s3, "p_1401->g_1391.s3", print_hash_value);
    transparent_crc(p_1401->g_1391.s4, "p_1401->g_1391.s4", print_hash_value);
    transparent_crc(p_1401->g_1391.s5, "p_1401->g_1391.s5", print_hash_value);
    transparent_crc(p_1401->g_1391.s6, "p_1401->g_1391.s6", print_hash_value);
    transparent_crc(p_1401->g_1391.s7, "p_1401->g_1391.s7", print_hash_value);
    transparent_crc(p_1401->g_1391.s8, "p_1401->g_1391.s8", print_hash_value);
    transparent_crc(p_1401->g_1391.s9, "p_1401->g_1391.s9", print_hash_value);
    transparent_crc(p_1401->g_1391.sa, "p_1401->g_1391.sa", print_hash_value);
    transparent_crc(p_1401->g_1391.sb, "p_1401->g_1391.sb", print_hash_value);
    transparent_crc(p_1401->g_1391.sc, "p_1401->g_1391.sc", print_hash_value);
    transparent_crc(p_1401->g_1391.sd, "p_1401->g_1391.sd", print_hash_value);
    transparent_crc(p_1401->g_1391.se, "p_1401->g_1391.se", print_hash_value);
    transparent_crc(p_1401->g_1391.sf, "p_1401->g_1391.sf", print_hash_value);
    transparent_crc(p_1401->v_collective, "p_1401->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 60; i++)
            transparent_crc(p_1401->g_special_values[i + 60 * get_linear_group_id()], "p_1401->g_special_values[i + 60 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 60; i++)
            transparent_crc(p_1401->l_special_values[i], "p_1401->l_special_values[i]", print_hash_value);
    transparent_crc(p_1401->l_comm_values[get_linear_local_id()], "p_1401->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1401->g_comm_values[get_linear_group_id() * 64 + get_linear_local_id()], "p_1401->g_comm_values[get_linear_group_id() * 64 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
