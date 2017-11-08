// --atomics 52 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 44,90,2 -l 4,10,2
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

__constant uint32_t permutations[10][80] = {
{50,60,58,53,79,55,68,27,52,51,18,9,43,8,29,14,21,24,66,67,1,62,22,41,49,59,4,33,12,23,34,44,63,36,72,76,38,47,78,57,42,32,19,73,10,75,0,65,15,25,61,69,26,35,17,6,77,30,37,20,71,70,28,13,3,11,2,31,48,40,39,64,54,45,16,7,74,5,56,46}, // permutation 0
{74,75,47,22,51,67,3,71,16,59,39,69,78,48,15,35,4,49,60,38,14,44,10,1,7,64,8,32,11,54,77,76,70,0,73,28,12,52,26,5,19,42,13,58,37,53,2,56,30,63,21,34,17,62,31,18,41,65,72,40,9,33,29,66,57,43,6,20,25,68,36,27,61,55,45,50,23,24,46,79}, // permutation 1
{52,28,71,37,38,73,30,61,1,46,23,78,5,40,17,4,63,66,47,48,45,14,49,21,76,22,20,32,41,67,9,64,0,24,51,65,27,70,42,3,2,57,77,79,19,68,62,31,54,36,39,12,11,25,15,29,60,75,26,16,6,43,53,72,74,8,7,58,56,50,13,33,69,10,55,18,44,59,35,34}, // permutation 2
{70,62,59,9,28,38,75,63,73,65,40,58,74,4,50,22,24,51,47,15,66,60,45,12,25,42,43,34,77,41,23,8,44,10,19,76,36,35,54,0,18,11,26,13,3,30,21,37,46,64,2,29,49,17,78,33,71,16,1,7,61,68,39,69,79,6,14,5,53,27,57,31,52,56,72,20,32,55,48,67}, // permutation 3
{47,29,10,22,58,50,77,37,51,35,74,60,56,46,23,25,13,8,71,33,6,79,18,63,17,15,68,76,12,14,7,67,78,3,36,11,49,38,62,70,53,9,65,32,34,40,41,61,24,4,16,69,44,55,52,42,31,26,39,21,75,48,57,2,20,64,43,0,66,54,5,30,19,73,28,27,45,72,59,1}, // permutation 4
{56,57,18,67,28,38,24,53,69,44,3,17,75,74,71,20,10,72,33,61,49,26,7,14,45,4,36,70,8,42,73,59,78,1,46,22,58,21,76,0,13,32,23,27,40,11,34,37,47,54,6,55,39,52,41,31,16,68,63,19,2,15,60,5,51,9,29,48,43,65,35,30,62,66,77,12,25,79,50,64}, // permutation 5
{79,2,18,31,11,64,29,60,75,3,39,50,69,12,78,71,72,38,30,15,7,20,55,66,26,58,5,53,14,73,76,4,43,13,49,9,52,62,37,25,19,67,10,61,6,36,74,63,27,57,8,56,68,22,46,32,70,34,51,23,48,35,77,41,17,16,59,47,44,33,42,45,0,28,40,21,24,1,54,65}, // permutation 6
{36,28,37,11,57,70,45,20,3,41,65,42,12,1,49,19,24,50,60,17,6,66,14,29,7,75,4,22,72,8,62,33,0,63,67,58,2,10,52,55,39,51,35,18,32,73,64,31,15,54,40,79,43,77,9,44,68,23,74,30,71,61,76,46,59,78,48,34,27,56,47,53,69,16,25,5,13,38,26,21}, // permutation 7
{26,10,16,41,21,20,14,22,54,68,36,38,43,70,77,53,46,75,9,3,5,30,72,4,69,65,19,63,62,6,78,17,59,57,44,28,50,32,39,35,76,37,67,56,49,42,15,33,48,13,7,23,47,31,8,24,18,0,45,64,66,79,11,60,1,58,52,29,2,74,25,40,61,51,73,55,34,12,27,71}, // permutation 8
{47,70,59,50,15,57,40,35,60,10,58,68,44,45,30,21,74,20,12,38,49,37,48,76,42,64,75,1,79,56,0,46,29,19,7,61,32,22,71,2,14,17,23,13,25,34,6,33,27,66,39,65,28,41,77,67,52,78,5,54,26,72,31,9,16,63,11,24,55,18,62,36,4,51,69,3,8,53,43,73} // permutation 9
};

// Seed: 1187438898

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
};

struct S1 {
   uint64_t  f0;
   int64_t  f1;
   uint8_t  f2;
   volatile uint32_t  f3;
   volatile uint64_t  f4;
   int8_t  f5;
};

struct S2 {
   int64_t  f0;
   uint32_t  f1;
   volatile uint32_t  f2;
   uint8_t  f3;
   int8_t  f4;
   int32_t  f5;
   struct S1  f6;
};

union U3 {
   int8_t * f0;
   int32_t  f1;
   int64_t  f2;
};

struct S4 {
    int8_t g_13;
    int8_t *g_12;
    int32_t g_43;
    int64_t g_44;
    uint64_t g_53;
    int32_t g_62;
    volatile struct S2 g_75;
    struct S0 g_78;
    uint64_t g_80[4];
    uint64_t *g_79;
    int32_t * volatile g_83;
    int32_t * volatile g_84;
    volatile VECTOR(uint8_t, 2) g_99;
    volatile struct S1 g_105;
    volatile VECTOR(uint32_t, 4) g_108;
    volatile VECTOR(uint32_t, 8) g_109;
    volatile VECTOR(uint32_t, 2) g_110;
    volatile VECTOR(uint32_t, 2) g_118;
    VECTOR(uint32_t, 4) g_120;
    VECTOR(uint32_t, 4) g_122;
    VECTOR(uint32_t, 8) g_124;
    VECTOR(uint32_t, 8) g_126;
    volatile VECTOR(uint32_t, 4) g_129;
    VECTOR(uint8_t, 8) g_136;
    volatile union U3 g_137;
    int16_t g_154;
    VECTOR(int16_t, 2) g_156;
    volatile VECTOR(int32_t, 2) g_165;
    VECTOR(int32_t, 16) g_171;
    volatile VECTOR(uint32_t, 4) g_204;
    VECTOR(uint32_t, 8) g_238;
    VECTOR(uint64_t, 2) g_248;
    volatile struct S2 g_249;
    uint64_t g_253[6];
    int32_t g_273;
    uint8_t g_298[1];
    uint64_t *g_329;
    int16_t *g_360;
    int16_t **g_359;
    struct S1 g_364;
    struct S0 g_377;
    int32_t * volatile g_410;
    VECTOR(int16_t, 4) g_419;
    VECTOR(int16_t, 4) g_428;
    uint64_t *g_431;
    uint16_t g_433[5][4];
    volatile VECTOR(int8_t, 16) g_437;
    VECTOR(int32_t, 8) g_468;
    int32_t g_486;
    int32_t ** volatile g_488;
    int32_t ** volatile g_489;
    uint32_t *g_562[2];
    volatile struct S2 g_572;
    volatile struct S2 g_573[10][9][2];
    int8_t g_592;
    uint64_t *g_597;
    uint64_t **g_596;
    union U3 g_599[3][8][5];
    VECTOR(uint64_t, 8) g_602;
    int32_t g_620;
    VECTOR(uint32_t, 2) g_638;
    int32_t *g_649;
    int32_t ** volatile g_648;
    struct S2 g_653;
    VECTOR(uint8_t, 8) g_701;
    int32_t * volatile g_729;
    uint16_t *g_761;
    uint16_t **g_760;
    uint16_t *** volatile g_759;
    int8_t g_795;
    volatile int16_t g_802;
    struct S1 g_816[6][3];
    VECTOR(int64_t, 4) g_832;
    VECTOR(int8_t, 8) g_891;
    volatile VECTOR(int8_t, 8) g_892;
    VECTOR(uint8_t, 2) g_922;
    int32_t ** volatile g_924;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S4 * p_1002);
int16_t  func_7(int64_t  p_8, int8_t * p_9, int8_t * p_10, int64_t  p_11, struct S4 * p_1002);
int8_t * func_14(int8_t * p_15, union U3  p_16, uint32_t  p_17, uint64_t  p_18, uint32_t  p_19, struct S4 * p_1002);
int8_t * func_20(int8_t  p_21, struct S4 * p_1002);
int16_t  func_23(struct S0  p_24, int8_t * p_25, int8_t * p_26, int8_t * p_27, uint64_t  p_28, struct S4 * p_1002);
struct S0  func_29(int8_t * p_30, int8_t * p_31, uint32_t  p_32, struct S4 * p_1002);
int8_t * func_45(int8_t * p_46, uint64_t  p_47, int32_t * p_48, int32_t * p_49, int8_t * p_50, struct S4 * p_1002);
int32_t * func_56(uint8_t  p_57, int16_t  p_58, struct S4 * p_1002);
uint16_t  func_63(uint8_t  p_64, int8_t * p_65, int32_t  p_66, int8_t * p_67, uint64_t * p_68, struct S4 * p_1002);
int8_t * func_69(int8_t * p_70, int8_t * p_71, struct S4 * p_1002);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1002->g_12 p_1002->l_comm_values p_1002->g_44 p_1002->g_53 p_1002->g_comm_values p_1002->g_13 p_1002->g_43 p_1002->g_62 p_1002->g_75 p_1002->g_78 p_1002->g_79 p_1002->g_84 p_1002->g_99 p_1002->g_105 p_1002->g_108 p_1002->g_109 p_1002->g_110 p_1002->g_118 p_1002->g_120 p_1002->g_122 p_1002->g_124 p_1002->g_126 p_1002->g_129 p_1002->g_136 p_1002->g_137 p_1002->g_410 p_1002->g_419 p_1002->g_428 p_1002->g_437 p_1002->g_171 p_1002->g_273 p_1002->g_468 p_1002->g_80 p_1002->g_486 p_1002->g_364.f5 p_1002->g_562 p_1002->g_329 p_1002->g_253 p_1002->g_572 p_1002->g_592 p_1002->g_377.f0 p_1002->g_602 p_1002->g_620 p_1002->g_156 p_1002->g_249.f5 p_1002->g_638 p_1002->g_648 p_1002->g_729 p_1002->g_165 p_1002->g_653.f0 p_1002->g_154 p_1002->g_759 p_1002->g_364.f2 p_1002->g_649 p_1002->g_816 permutations p_1002->g_761 p_1002->g_298 p_1002->g_359 p_1002->g_360 p_1002->g_364.f1 p_1002->g_922 p_1002->g_433
 * writes: p_1002->g_43 p_1002->g_44 p_1002->g_53 p_1002->g_62 p_1002->g_78.f0 p_1002->g_273 p_1002->g_431 p_1002->g_433 p_1002->g_13 p_1002->g_486 p_1002->g_364.f5 p_1002->g_562 p_1002->g_573 p_1002->g_592 p_1002->g_364.f0 p_1002->g_596 p_1002->g_599 p_1002->g_156 p_1002->g_364.f1 p_1002->g_649 p_1002->g_653 p_1002->g_760 p_1002->g_154 p_1002->g_364.f2 p_1002->g_136 permutations p_1002->g_80 p_1002->g_171
 */
uint16_t  func_1(struct S4 * p_1002)
{ /* block id: 4 */
    VECTOR(int64_t, 8) l_4 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x3E135E1F6F084217L), 0x3E135E1F6F084217L), 0x3E135E1F6F084217L, (-1L), 0x3E135E1F6F084217L);
    VECTOR(int16_t, 2) l_22 = (VECTOR(int16_t, 2))((-3L), 0x6992L);
    VECTOR(uint8_t, 8) l_590 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xB3L), 0xB3L), 0xB3L, 255UL, 0xB3L);
    uint8_t l_591 = 0xE9L;
    int32_t l_593 = 0x656E5A1DL;
    uint64_t *l_594 = &p_1002->g_364.f0;
    uint64_t **l_595 = &p_1002->g_79;
    union U3 l_598 = {0};
    int32_t l_997 = 0x60612C9FL;
    int32_t *l_998[9][7][1] = {{{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43}},{{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43}},{{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43}},{{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43}},{{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43}},{{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43}},{{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43}},{{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43}},{{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43},{&p_1002->g_43}}};
    uint8_t l_999 = 0x7FL;
    int i, j, k;
    (*p_1002->g_729) = (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 16))(l_4.s0511412142132456)).s1, (safe_lshift_func_int16_t_s_s((l_997 |= (func_7(l_4.s2, p_1002->g_12, func_14(func_20((((VECTOR(int16_t, 8))(l_22.yyxyxxxy)).s2 && l_22.y), p_1002), (p_1002->g_599[2][1][1] = ((((p_1002->g_596 = ((((safe_sub_func_int64_t_s_s(p_1002->g_253[4], (((safe_unary_minus_func_uint32_t_u((((*l_594) = ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 0L)), 1L, (-9L), (safe_sub_func_uint32_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((p_1002->g_592 &= (((VECTOR(uint8_t, 8))(l_590.s40210612)).s6 || (~(((p_1002->g_120.x , (65533UL | l_591)) == 65535UL) < l_590.s1)))), 1)) >= 2UL), 1L)) & l_593) , 0x010AL) ^ 0x4AF4L), (-1L))), 0x42L, ((VECTOR(int8_t, 2))(0x67L)), 0L, (-1L), ((VECTOR(int8_t, 2))((-1L))), 0x44L, 0x03L, 0x4AL, 0x74L)).s06, ((VECTOR(int8_t, 2))(0x4DL))))), ((VECTOR(uint8_t, 2))(0xDCL))))).lo, l_22.y)) < l_22.x)) <= p_1002->g_428.y))) ^ 0x4035L) , 0x1D458530F2E251EBL))) >= l_4.s3) > p_1002->g_377.f0) , l_595)) == l_595) == l_593) , l_598)), l_590.s4, (*p_1002->g_329), p_1002->g_419.z, p_1002), l_591, p_1002) >= p_1002->g_922.x)), 4))));
    l_999--;
    p_1002->g_171.s8 ^= (*p_1002->g_84);
    return (*p_1002->g_761);
}


/* ------------------------------------------ */
/* 
 * reads : p_1002->g_410 p_1002->g_273 p_1002->g_648 p_1002->g_62 p_1002->g_13 p_1002->g_43 p_1002->g_75 p_1002->g_109 p_1002->g_364.f2 p_1002->g_12 p_1002->g_729 p_1002->g_165 p_1002->g_653.f0 p_1002->g_329 p_1002->g_253 p_1002->g_154 p_1002->g_759 p_1002->g_649 p_1002->g_816 p_1002->g_171 p_1002->g_120 p_1002->g_80 p_1002->g_126 p_1002->g_486 p_1002->g_78 permutations p_1002->g_761 p_1002->g_638 p_1002->g_298 p_1002->g_359 p_1002->g_360 p_1002->g_44 p_1002->g_364.f1
 * writes: p_1002->g_649 p_1002->g_273 p_1002->g_364.f5 p_1002->g_43 p_1002->g_653 p_1002->g_62 p_1002->g_44 p_1002->g_13 p_1002->g_364.f0 p_1002->g_760 p_1002->g_154 p_1002->g_364.f2 p_1002->g_433 p_1002->g_486 p_1002->g_136 permutations p_1002->g_80 p_1002->g_364.f1
 */
int16_t  func_7(int64_t  p_8, int8_t * p_9, int8_t * p_10, int64_t  p_11, struct S4 * p_1002)
{ /* block id: 240 */
    uint16_t l_646 = 0x944AL;
    int32_t *l_647 = &p_1002->g_62;
    struct S2 *l_652 = &p_1002->g_653;
    VECTOR(uint8_t, 16) l_666 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x38L), 0x38L), 0x38L, 1UL, 0x38L, (VECTOR(uint8_t, 2))(1UL, 0x38L), (VECTOR(uint8_t, 2))(1UL, 0x38L), 1UL, 0x38L, 1UL, 0x38L);
    VECTOR(int32_t, 4) l_676 = (VECTOR(int32_t, 4))(0x06589142L, (VECTOR(int32_t, 2))(0x06589142L, 0x0021804FL), 0x0021804FL);
    VECTOR(int8_t, 4) l_685 = (VECTOR(int8_t, 4))(0x29L, (VECTOR(int8_t, 2))(0x29L, 0x19L), 0x19L);
    uint16_t l_686 = 0x2841L;
    int16_t ***l_707 = &p_1002->g_359;
    uint64_t **l_719 = &p_1002->g_431;
    struct S1 *l_811 = &p_1002->g_364;
    int8_t *l_817 = &p_1002->g_653.f4;
    struct S0 *l_837 = &p_1002->g_78;
    uint64_t *l_851 = &p_1002->g_80[1];
    VECTOR(int16_t, 8) l_884 = (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x47A1L), 0x47A1L), 0x47A1L, (-5L), 0x47A1L);
    VECTOR(int8_t, 2) l_898 = (VECTOR(int8_t, 2))(0x48L, 0L);
    int32_t l_931 = (-1L);
    uint16_t **l_983 = &p_1002->g_761;
    int i;
    l_646 ^= (*p_1002->g_410);
    (*p_1002->g_648) = l_647;
    for (p_11 = 12; (p_11 <= (-13)); --p_11)
    { /* block id: 245 */
        struct S2 *l_654 = (void*)0;
        int8_t *l_657 = &p_1002->g_364.f5;
        int64_t *l_664 = (void*)0;
        VECTOR(uint8_t, 4) l_665 = (VECTOR(uint8_t, 4))(0x05L, (VECTOR(uint8_t, 2))(0x05L, 1UL), 1UL);
        VECTOR(int16_t, 2) l_667 = (VECTOR(int16_t, 2))(0L, 5L);
        int32_t *l_687 = &p_1002->g_273;
        struct S0 l_697 = {0x7F95C4CFL};
        VECTOR(uint8_t, 16) l_700 = (VECTOR(uint8_t, 16))(0x99L, (VECTOR(uint8_t, 4))(0x99L, (VECTOR(uint8_t, 2))(0x99L, 255UL), 255UL), 255UL, 0x99L, 255UL, (VECTOR(uint8_t, 2))(0x99L, 255UL), (VECTOR(uint8_t, 2))(0x99L, 255UL), 0x99L, 255UL, 0x99L, 255UL);
        int32_t l_728 = 0x51697206L;
        VECTOR(uint16_t, 2) l_748 = (VECTOR(uint16_t, 2))(0UL, 0x6506L);
        int32_t l_786 = 0x2986FE9CL;
        int32_t l_790 = 0L;
        int32_t l_791 = 0x485AE429L;
        int32_t l_793 = 0x0856E98CL;
        int32_t l_797 = 0x02E868DFL;
        int32_t l_798 = 0x066EBB01L;
        int32_t l_801[8] = {0x41404045L,0x106ABB26L,0x41404045L,0x41404045L,0x106ABB26L,0x41404045L,0x41404045L,0x106ABB26L};
        uint64_t l_804 = 18446744073709551613UL;
        int i, j;
        l_654 = l_652;
        if (((*l_687) ^= (safe_mod_func_int16_t_s_s((l_657 == ((safe_div_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 8))(0x74A6L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-6L), 0x0CL)), 0L, 7L)), (int8_t)(~((*l_657) = ((*p_1002->g_12) |= (p_11 >= (p_1002->g_comm_values[p_1002->tid] ^= p_1002->g_249.f0)))))))).odd, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(l_665.wzzw)).odd, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_666.s178b)))).lo))).yyxxxxxyyyxxxxxx)).se0))).xyyy))))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(l_667.xyxy)), (int16_t)((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_1002->global_2_offset, get_global_id(2), 10), l_665.y)) != (safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(p_8, (1L && (safe_div_func_uint64_t_u_u((((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(l_676.zxyz)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0L, 1L)), ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((p_1002->g_249 , ((l_665.y == (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((l_667.x != 0L) != (-1L)), l_667.x)), p_11))) || 0x6D3AL)), 5)) , (*p_10)), (*p_9))) <= (*l_647)), (*p_1002->g_649), (-1L), ((VECTOR(int32_t, 4))(1L)), 0x57A2DD76L, p_8, l_685.x, ((VECTOR(int32_t, 2))(1L)), 7L, 0x02A91963L)).sf4, ((VECTOR(int32_t, 2))(0x33D2A52CL))))).lo & p_8), 0x2E83AB456D8E6AC9L))))), p_8)))))).wyzwwzww)).s26)), (-1L), 0x33DFL)), ((VECTOR(int16_t, 4))(0x2FFBL))))).lo)), 0x0E66L)).s6, p_11)) && l_686), p_11)) >= 18446744073709551606UL), (*l_647))) , (void*)0)), p_8))))
        { /* block id: 251 */
            VECTOR(uint64_t, 16) l_692 = (VECTOR(uint64_t, 16))(0x14043957AE947FD4L, (VECTOR(uint64_t, 4))(0x14043957AE947FD4L, (VECTOR(uint64_t, 2))(0x14043957AE947FD4L, 2UL), 2UL), 2UL, 0x14043957AE947FD4L, 2UL, (VECTOR(uint64_t, 2))(0x14043957AE947FD4L, 2UL), (VECTOR(uint64_t, 2))(0x14043957AE947FD4L, 2UL), 0x14043957AE947FD4L, 2UL, 0x14043957AE947FD4L, 2UL);
            int16_t ***l_704 = &p_1002->g_359;
            int16_t ****l_705 = (void*)0;
            int16_t ****l_706 = &l_704;
            int32_t l_710 = 0x0A3FF1D3L;
            int32_t *l_711 = &p_1002->g_43;
            int i;
            (*l_711) |= (((void*)0 != l_647) & ((*p_9) != (l_710 = ((*l_657) = ((safe_lshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u((((VECTOR(uint64_t, 2))(l_692.s61)).lo < (safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s(((l_697 , (safe_mul_func_uint16_t_u_u(0x47BFL, (((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 16))(l_700.s63ef855e39dfbebc)), ((VECTOR(uint8_t, 2))(p_1002->g_701.s16)).yyyyxyyxyxxyxyyx, ((VECTOR(uint8_t, 8))(253UL, (safe_rshift_func_uint8_t_u_s((*l_687), (((((*l_706) = l_704) != l_707) ^ (safe_lshift_func_int8_t_s_s((p_8 , (*p_9)), 4))) != GROUP_DIVERGE(2, 1)))), ((VECTOR(uint8_t, 2))(0x1FL)), ((VECTOR(uint8_t, 4))(0x54L)))).s2304003045354665))).s7 != (*l_647))))) >= (*l_647)), l_692.s5)), p_8))), 9UL)), l_692.s0)) && p_8)))));
            (*l_652) = p_1002->g_75;
        }
        else
        { /* block id: 257 */
            int32_t *l_712 = (void*)0;
            l_687 = l_712;
            (*l_647) ^= ((l_712 == l_647) & p_1002->g_109.s7);
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1002->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 80)), permutations[(safe_mod_func_uint32_t_u_u(((p_1002->g_364.f2 != ((*p_1002->g_12) , (*l_647))) , (0x3C0AL <= p_8)), 10))][(safe_mod_func_uint32_t_u_u(p_1002->tid, 80))]));
        for (p_1002->g_653.f6.f0 = (-22); (p_1002->g_653.f6.f0 <= 12); p_1002->g_653.f6.f0 = safe_add_func_int32_t_s_s(p_1002->g_653.f6.f0, 4))
        { /* block id: 266 */
            union U3 l_722 = {0};
            uint16_t *l_723 = (void*)0;
            int32_t l_726 = 0x19EBCFFCL;
            int64_t *l_727 = (void*)0;
            int32_t l_732 = (-1L);
            int8_t *l_753 = &p_1002->g_653.f6.f5;
            int8_t l_754 = 0x1AL;
            int32_t l_784[3];
            struct S0 *l_834 = &p_1002->g_377;
            int16_t *l_857[3];
            int i;
            for (i = 0; i < 3; i++)
                l_784[i] = 0x4B3602B2L;
            for (i = 0; i < 3; i++)
                l_857[i] = &p_1002->g_154;
            (*p_1002->g_729) = (l_728 = (0x38L != ((*p_9) = ((safe_lshift_func_int16_t_s_s(0x0AD4L, (p_11 >= ((safe_div_func_uint64_t_u_u((((void*)0 == l_719) | (safe_lshift_func_uint16_t_u_u(65533UL, (l_722 , ((*l_647) = 0x3EB9L))))), (p_1002->g_44 = (safe_sub_func_int8_t_s_s(((*l_657) = ((*p_10) , 2L)), l_726))))) != p_8)))) ^ p_8))));
            for (p_1002->g_653.f5 = (-16); (p_1002->g_653.f5 != 10); ++p_1002->g_653.f5)
            { /* block id: 275 */
                uint64_t *l_741 = (void*)0;
                uint64_t *l_742 = (void*)0;
                uint64_t *l_743 = &p_1002->g_364.f0;
                int16_t l_755 = 1L;
                uint16_t **l_758[3][3][2];
                int32_t l_766 = 3L;
                int32_t l_781 = 0x0D890C6CL;
                int32_t l_782 = 0x2D181237L;
                int32_t l_783 = (-3L);
                int32_t l_785 = 1L;
                int32_t l_788 = 0x0A55962BL;
                int32_t l_789 = 0x356EE52AL;
                int32_t l_792 = 0L;
                int32_t l_794 = 0x21E4BF36L;
                int32_t l_796 = 0x79673D6CL;
                int64_t l_799 = 0L;
                int32_t l_800 = 0x41170288L;
                int32_t l_803[8] = {0x10B66C05L,9L,0x10B66C05L,0x10B66C05L,9L,0x10B66C05L,0x10B66C05L,9L};
                int16_t ***l_848 = &p_1002->g_359;
                int8_t l_852 = 0x7EL;
                uint8_t *l_862 = (void*)0;
                uint32_t *l_878 = (void*)0;
                uint32_t *l_879 = &permutations[(safe_mod_func_uint32_t_u_u(((p_1002->g_364.f2 != ((*p_1002->g_12) , (*l_647))) , (0x3C0AL <= p_8)), 10))][(safe_mod_func_uint32_t_u_u(p_1002->tid, 80))];
                uint8_t *l_880 = (void*)0;
                int32_t *l_881[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_758[i][j][k] = &l_723;
                    }
                }
                if (l_732)
                    break;
                if ((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(p_1002->g_165.y, ((safe_div_func_int32_t_s_s(((p_1002->g_653.f0 || (((*p_1002->g_329) & ((l_732 , ((~(+(l_722 , ((safe_sub_func_int8_t_s_s((((((*l_743) = p_8) == (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(0x8E3FL, 0x7F2DL)).yyxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_748.xyyxxxxy)).s74)).yyxxxxyy)).lo, ((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 4))(0x6E1AL, 0xF656L, 0x2369L, 0UL)).odd, (uint16_t)(~((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(1UL, 0x1629L)).yxyx)).x, 1)) || FAKE_DIVERGE(p_1002->global_1_offset, get_global_id(1), 10)))))).yyxy))).w, (0x1391A947L == (l_753 != &p_1002->g_592)))), 11))) && l_754) ^ 0x14L), 255UL)) == 1UL)))) < 1L)) , p_8)) > 0x6CFC93FBL)) == l_755), l_755)) && 1UL))), p_1002->g_154)))
                { /* block id: 278 */
                    for (p_1002->g_13 = 0; (p_1002->g_13 > 11); p_1002->g_13 = safe_add_func_int8_t_s_s(p_1002->g_13, 1))
                    { /* block id: 281 */
                        return l_726;
                    }
                }
                else
                { /* block id: 284 */
                    int32_t *l_762 = (void*)0;
                    int32_t *l_763 = &p_1002->g_273;
                    int32_t *l_764 = (void*)0;
                    int32_t *l_765 = (void*)0;
                    int32_t *l_767 = &p_1002->g_620;
                    int32_t *l_768 = &p_1002->g_620;
                    int32_t *l_769 = &l_766;
                    int32_t *l_770 = &p_1002->g_43;
                    int32_t *l_771 = &p_1002->g_486;
                    int32_t *l_772 = &l_728;
                    int32_t *l_773 = (void*)0;
                    int32_t *l_774 = (void*)0;
                    int32_t *l_775 = &p_1002->g_273;
                    int32_t *l_776 = (void*)0;
                    int32_t *l_777 = (void*)0;
                    int32_t *l_778 = &l_766;
                    int32_t *l_779 = &l_726;
                    int32_t *l_780[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_787[7][9][4] = {{{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L}},{{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L}},{{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L}},{{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L}},{{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L}},{{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L}},{{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L},{(-1L),0L,0x2FE83412L,0x2E14DAB5L}}};
                    int i, j, k;
                    (*p_1002->g_759) = l_758[1][0][0];
                    --l_804;
                    for (p_1002->g_154 = 0; (p_1002->g_154 < 17); ++p_1002->g_154)
                    { /* block id: 289 */
                        return p_8;
                    }
                    for (p_1002->g_364.f2 = 1; (p_1002->g_364.f2 >= 42); p_1002->g_364.f2 = safe_add_func_uint32_t_u_u(p_1002->g_364.f2, 9))
                    { /* block id: 294 */
                        (*p_1002->g_649) &= (l_811 != (void*)0);
                    }
                }
                for (l_786 = (-28); (l_786 >= 0); l_786 = safe_add_func_int8_t_s_s(l_786, 7))
                { /* block id: 300 */
                    int64_t l_828 = 0x66BFAF9EDB705F65L;
                    struct S0 *l_833 = &l_697;
                    int32_t *l_842 = (void*)0;
                    int32_t *l_843 = &l_781;
                    for (l_789 = (-28); (l_789 <= 10); l_789++)
                    { /* block id: 303 */
                        struct S0 *l_829 = &l_697;
                        (*l_829) = (p_1002->g_816[3][2] , func_29(func_69(l_817, p_10, p_1002), l_657, (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_1002->global_0_offset, get_global_id(0), 10), 14)), ((safe_mod_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((&p_1002->g_273 == (void*)0), (safe_mul_func_uint8_t_u_u(p_11, (p_1002->g_171.sf < (*p_1002->g_329)))))) != l_828), FAKE_DIVERGE(p_1002->global_2_offset, get_global_id(2), 10))) & p_1002->g_120.z))) , p_11) > 0L), p_1002));
                    }
                    (*l_647) &= ((((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1002->group_2_offset, get_group_id(2), 10), (p_8 >= (((VECTOR(int64_t, 16))(p_1002->g_832.wzywzzwxxwyxzwwx)).s7 & l_754)))) == (p_1002->g_78 , 4UL)) , l_833) == l_834);
                    atomic_and(&p_1002->l_atomic_reduction[0], (permutations[(safe_mod_func_uint32_t_u_u(((p_1002->g_364.f2 != ((*p_1002->g_12) , (*l_647))) , (0x3C0AL <= p_8)), 10))][(safe_mod_func_uint32_t_u_u(p_1002->tid, 80))] | ((*l_843) ^= ((l_784[0] |= (0x27L == (*l_647))) && ((*p_1002->g_410) = (safe_mul_func_uint16_t_u_u((((l_837 = &p_1002->g_78) != l_834) , ((*p_1002->g_761) = ((VECTOR(uint16_t, 4))((+p_8), 4UL, 65534UL, 0UL)).w)), (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(65530UL, p_8, (((VECTOR(int64_t, 16))(1L, ((VECTOR(int64_t, 2))((-1L), 0x184C441DD3E2A6F0L)), 0L, ((~(p_8 , ((((safe_sub_func_int32_t_s_s(((((-1L) && (*p_1002->g_12)) , p_8) != 4294967293UL), 0x33EB0901L)) == l_828) ^ p_11) , l_828))) <= l_803[3]), 0x5A1187A9331B493FL, ((VECTOR(int64_t, 8))(0x745A894E563D97E5L)), 0x1A44D8083524C20FL, 1L)).sf == p_1002->g_126.s5), 0UL, 0x68EBL, 0x8D74L, 0x29F7L, 0x6AA0L)).s5, 11)))))))));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1002->v_collective += p_1002->l_atomic_reduction[0];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    (*l_843) = (((0x46A6L >= (safe_mul_func_int16_t_s_s((((((*p_9) < ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(((void*)0 != l_848), (((&l_726 == &l_790) <= ((((((GROUP_DIVERGE(2, 1) != ((*p_1002->g_329)--)) < l_785) > (*p_9)) ^ (l_851 != (*p_1002->g_596))) | l_852) < 0x5EL)) && l_726), 0x0E01C6AEA021A882L, 0x5C70B14D2B930C8FL)).x, 0x50D0DB708DC34E4CL)) == p_1002->g_75.f6.f3)) | (*l_647)) ^ (*p_1002->g_649)) ^ (*l_647)), 65535UL))) || 0x5C8BL) != p_11);
                }
                (*p_1002->g_410) = ((safe_mul_func_uint16_t_u_u((((*l_647) = (safe_sub_func_uint64_t_u_u((l_857[2] == ((~((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(0x31L, FAKE_DIVERGE(p_1002->local_1_offset, get_local_id(1), 10))) && (p_1002->g_136.s3 = p_1002->g_75.f6.f0)), (((*l_851) = (safe_unary_minus_func_int64_t_s((safe_lshift_func_int8_t_s_u(((*l_817) = (safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((((+((*l_879) ^= (l_722 , (((void*)0 == &l_723) & ((p_1002->g_364.f2 != l_784[0]) == (safe_rshift_func_uint16_t_u_s((((safe_sub_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((253UL <= (-5L)) <= p_8), FAKE_DIVERGE(p_1002->group_0_offset, get_group_id(0), 10))) > GROUP_DIVERGE(1, 1)), l_784[1])) | 0x38738E7DL) < p_11), 11))))))) , l_784[1]) | p_1002->g_638.x), (*p_10))), 0xD8E640AAL)), l_782))), GROUP_DIVERGE(0, 1)))))) , p_1002->g_298[0]))) , (-6L))) , (**l_848))), 9L))) == l_785), 65535UL)) ^ p_11);
            }
        }
    }
    for (p_1002->g_44 = 0; (p_1002->g_44 < 4); p_1002->g_44++)
    { /* block id: 327 */
        int32_t l_885 = 0L;
        VECTOR(int8_t, 16) l_890 = (VECTOR(int8_t, 16))(0x29L, (VECTOR(int8_t, 4))(0x29L, (VECTOR(int8_t, 2))(0x29L, 0x38L), 0x38L), 0x38L, 0x29L, 0x38L, (VECTOR(int8_t, 2))(0x29L, 0x38L), (VECTOR(int8_t, 2))(0x29L, 0x38L), 0x29L, 0x38L, 0x29L, 0x38L);
        VECTOR(int8_t, 16) l_894 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x42L), 0x42L), 0x42L, 0L, 0x42L, (VECTOR(int8_t, 2))(0L, 0x42L), (VECTOR(int8_t, 2))(0L, 0x42L), 0L, 0x42L, 0L, 0x42L);
        uint32_t l_900 = 0UL;
        int32_t l_911 = 0x14EA1BE4L;
        int8_t l_912[1];
        int32_t l_913 = 0x3B102C5BL;
        int32_t l_917 = 0x17C840C6L;
        int32_t l_918[8];
        uint64_t l_919 = 18446744073709551609UL;
        int8_t l_932 = 0x02L;
        uint8_t l_967 = 248UL;
        uint16_t ***l_982 = &p_1002->g_760;
        int i;
        for (i = 0; i < 1; i++)
            l_912[i] = 0x7CL;
        for (i = 0; i < 8; i++)
            l_918[i] = 0x7003F56FL;
        if ((FAKE_DIVERGE(p_1002->local_2_offset, get_local_id(2), 10) && ((l_885 = ((VECTOR(int16_t, 8))(l_884.s72603765)).s3) != p_8)))
        { /* block id: 329 */
            if (p_11)
                break;
        }
        else
        { /* block id: 331 */
            VECTOR(int8_t, 4) l_893 = (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, 0x23L), 0x23L);
            int32_t l_914 = 1L;
            int32_t l_915 = 8L;
            VECTOR(int32_t, 2) l_916 = (VECTOR(int32_t, 2))((-1L), (-1L));
            uint64_t l_933 = 0x80BA166FFF1C142CL;
            uint16_t ***l_981 = &p_1002->g_760;
            uint32_t l_994 = 0x395DB323L;
            int i;
            for (p_1002->g_364.f1 = 0; (p_1002->g_364.f1 != (-15)); p_1002->g_364.f1 = safe_sub_func_uint8_t_u_u(p_1002->g_364.f1, 6))
            { /* block id: 334 */
                VECTOR(int8_t, 2) l_895 = (VECTOR(int8_t, 2))(0L, (-10L));
                uint32_t l_899 = 0x9DB351ABL;
                int32_t *l_901 = &p_1002->g_43;
                int32_t *l_902 = &p_1002->g_273;
                int32_t *l_903 = &p_1002->g_620;
                int32_t *l_904 = (void*)0;
                int32_t *l_905 = &p_1002->g_43;
                int32_t *l_906 = &p_1002->g_62;
                int32_t *l_907 = &p_1002->g_486;
                int32_t *l_908 = (void*)0;
                int32_t *l_909 = &p_1002->g_62;
                int32_t *l_910[10][1] = {{&p_1002->g_62},{&p_1002->g_62},{&p_1002->g_62},{&p_1002->g_62},{&p_1002->g_62},{&p_1002->g_62},{&p_1002->g_62},{&p_1002->g_62},{&p_1002->g_62},{&p_1002->g_62}};
                int16_t l_926 = 0x2881L;
                VECTOR(int64_t, 4) l_930 = (VECTOR(int64_t, 4))(0x78FF2A61DB1F7609L, (VECTOR(int64_t, 2))(0x78FF2A61DB1F7609L, 0x62784F46DAE53AF5L), 0x62784F46DAE53AF5L);
                uint16_t **l_986 = &p_1002->g_761;
                int i, j;
                (1 + 1);
            }
        }
    }
    return (*l_647);
}


/* ------------------------------------------ */
/* 
 * reads : p_1002->g_105.f0 p_1002->g_602 p_1002->g_124 p_1002->g_620 p_1002->g_156 p_1002->g_410 p_1002->g_249.f5 p_1002->g_572.f6.f2 p_1002->g_13 p_1002->g_638 p_1002->g_comm_values
 * writes: p_1002->g_156 p_1002->g_273 p_1002->g_13 p_1002->g_364.f1
 */
int8_t * func_14(int8_t * p_15, union U3  p_16, uint32_t  p_17, uint64_t  p_18, uint32_t  p_19, struct S4 * p_1002)
{ /* block id: 227 */
    uint32_t l_603[10][9] = {{0x2E1C7490L,0UL,0x27574203L,1UL,0xFF2849CEL,0x3787ACEAL,0x7D9A1F4DL,0x63B91F63L,8UL},{0x2E1C7490L,0UL,0x27574203L,1UL,0xFF2849CEL,0x3787ACEAL,0x7D9A1F4DL,0x63B91F63L,8UL},{0x2E1C7490L,0UL,0x27574203L,1UL,0xFF2849CEL,0x3787ACEAL,0x7D9A1F4DL,0x63B91F63L,8UL},{0x2E1C7490L,0UL,0x27574203L,1UL,0xFF2849CEL,0x3787ACEAL,0x7D9A1F4DL,0x63B91F63L,8UL},{0x2E1C7490L,0UL,0x27574203L,1UL,0xFF2849CEL,0x3787ACEAL,0x7D9A1F4DL,0x63B91F63L,8UL},{0x2E1C7490L,0UL,0x27574203L,1UL,0xFF2849CEL,0x3787ACEAL,0x7D9A1F4DL,0x63B91F63L,8UL},{0x2E1C7490L,0UL,0x27574203L,1UL,0xFF2849CEL,0x3787ACEAL,0x7D9A1F4DL,0x63B91F63L,8UL},{0x2E1C7490L,0UL,0x27574203L,1UL,0xFF2849CEL,0x3787ACEAL,0x7D9A1F4DL,0x63B91F63L,8UL},{0x2E1C7490L,0UL,0x27574203L,1UL,0xFF2849CEL,0x3787ACEAL,0x7D9A1F4DL,0x63B91F63L,8UL},{0x2E1C7490L,0UL,0x27574203L,1UL,0xFF2849CEL,0x3787ACEAL,0x7D9A1F4DL,0x63B91F63L,8UL}};
    VECTOR(uint32_t, 2) l_612 = (VECTOR(uint32_t, 2))(4294967295UL, 4294967290UL);
    VECTOR(uint32_t, 16) l_613 = (VECTOR(uint32_t, 16))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0x6EBEC371L), 0x6EBEC371L), 0x6EBEC371L, 4294967291UL, 0x6EBEC371L, (VECTOR(uint32_t, 2))(4294967291UL, 0x6EBEC371L), (VECTOR(uint32_t, 2))(4294967291UL, 0x6EBEC371L), 4294967291UL, 0x6EBEC371L, 4294967291UL, 0x6EBEC371L);
    VECTOR(uint32_t, 8) l_614 = (VECTOR(uint32_t, 8))(0xA7BCA82AL, (VECTOR(uint32_t, 4))(0xA7BCA82AL, (VECTOR(uint32_t, 2))(0xA7BCA82AL, 4294967286UL), 4294967286UL), 4294967286UL, 0xA7BCA82AL, 4294967286UL);
    VECTOR(uint64_t, 2) l_615 = (VECTOR(uint64_t, 2))(0x8975B76F3849E8E4L, 1UL);
    uint16_t *l_616[9] = {&p_1002->g_433[4][3],&p_1002->g_433[4][3],&p_1002->g_433[4][3],&p_1002->g_433[4][3],&p_1002->g_433[4][3],&p_1002->g_433[4][3],&p_1002->g_433[4][3],&p_1002->g_433[4][3],&p_1002->g_433[4][3]};
    int32_t l_617[6][8] = {{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)}};
    VECTOR(uint8_t, 2) l_618 = (VECTOR(uint8_t, 2))(0x26L, 0x6CL);
    int64_t l_619 = 0x24206BDCB70D6EF7L;
    int16_t *l_621 = (void*)0;
    int32_t *l_622[7];
    VECTOR(int8_t, 8) l_635 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x50L), 0x50L), 0x50L, 1L, 0x50L);
    VECTOR(int8_t, 4) l_636 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x7BL), 0x7BL);
    VECTOR(uint32_t, 2) l_637 = (VECTOR(uint32_t, 2))(5UL, 0x1C37D96BL);
    uint8_t l_639 = 0x55L;
    int64_t *l_644 = &p_1002->g_364.f1;
    VECTOR(uint64_t, 8) l_645 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x60B8E9FAA3FDBE49L), 0x60B8E9FAA3FDBE49L), 0x60B8E9FAA3FDBE49L, 1UL, 0x60B8E9FAA3FDBE49L);
    int i, j;
    for (i = 0; i < 7; i++)
        l_622[i] = &p_1002->g_273;
    (*p_1002->g_410) = (safe_div_func_int16_t_s_s((p_1002->g_105.f0 >= ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 2))(p_1002->g_602.s67)), ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 2))(0UL, 6UL)), ((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(1UL, 0x01AD3F975485B24DL)).yyxy)).zxxwxzxw))).even)).wxxwxzxyyzzwzzyw)).s56)).xyxxxyxy)).s50, ((VECTOR(uint64_t, 16))(1UL, 0UL, ((VECTOR(uint64_t, 2))(0xAFD3F0C073A5932BL, 7UL)), 1UL, l_603[1][6], 0x1DDF0AC980869704L, (safe_div_func_int16_t_s_s((p_1002->g_156.x &= (safe_lshift_func_int8_t_s_u((l_603[1][6] > ((l_619 = (0x121C8729C024423DL ^ (safe_rshift_func_uint8_t_u_u(((l_618.x &= (safe_mul_func_uint8_t_u_u(6UL, ((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 16))(l_612.yxyxxxxxyxyxyyxx)).odd, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 16))(l_613.s49aa85819860080f)).sec90))), 0xD9F23AB8L, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_614.s6666)), p_1002->g_124.s0, 0xD7765FA8L, 0xDF7BFF1FL, 4294967295UL)), p_18, 0x58263C7DL, 0xBD90FA79L)).even))), ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 8))(l_615.yxxxyyyy)).s12, ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 8))(((l_617[3][0] = p_17) && l_603[1][6]), p_18, 0x91FB46E527781692L, 18446744073709551615UL, FAKE_DIVERGE(p_1002->global_0_offset, get_global_id(0), 10), l_617[3][5], 0x1F81601B1F2D66A6L, 7UL)).s47, ((VECTOR(uint64_t, 2))(0x06C3E1032D094074L))))), ((VECTOR(uint64_t, 2))(18446744073709551610UL))))).yyyyyxxx, ((VECTOR(uint64_t, 8))(0x146AFD3849CBBBD1L)))))))), 4UL, p_19, 4UL, 0xD568CE22E61E9352L, l_612.y, 18446744073709551613UL, 0UL, 0xCCAB0879A94C2F7AL)).s87)).lo | l_603[1][6]) | l_614.s6)))) <= GROUP_DIVERGE(0, 1)), p_19)))) < p_17)), p_1002->g_620))), l_612.y)), ((VECTOR(uint64_t, 4))(0x6D767763ADF0835FL)), 0x94488C67591AFB98L, ((VECTOR(uint64_t, 2))(0UL)), 0x7A55AD2FD7798378L)).s4e))), ((VECTOR(uint64_t, 2))(18446744073709551615UL))))).yxxy, ((VECTOR(uint64_t, 4))(18446744073709551615UL))))).lo, ((VECTOR(uint64_t, 2))(18446744073709551615UL))))).odd), GROUP_DIVERGE(2, 1)));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1002->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 80)), permutations[(safe_mod_func_uint32_t_u_u((((((p_19 <= 0x7DE31ADED02D185FL) > p_1002->g_249.f5) && (safe_add_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((p_1002->g_572.f6.f2 & (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((*p_15) = (*p_15)), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(l_635.s05517601)).s52, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_636.wz)).xxyy)).hi))).even)) <= ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 16))(l_637.xxxxyxxxyyyxyyyy)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1002->g_638.xyyyxyxyyyyyyyyy)).sfa)).yyyyxxyyyxyyxyxy))))))).s6), 7)), (p_19 , 0x71L))), 4))), (++l_639))) != ((safe_sub_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (((*l_644) = p_19) | ((VECTOR(uint64_t, 16))(l_645.s3640700152333717)).s1))) > (p_19 <= p_19))), 1L))) > p_1002->g_comm_values[p_1002->tid]) , FAKE_DIVERGE(p_1002->local_1_offset, get_local_id(1), 10)), 10))][(safe_mod_func_uint32_t_u_u(p_1002->tid, 80))]));
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_1002->l_comm_values p_1002->g_44 p_1002->g_53 p_1002->g_comm_values p_1002->g_13 p_1002->g_43 p_1002->g_62 p_1002->g_75 p_1002->g_78 p_1002->g_79 p_1002->g_84 p_1002->g_12 p_1002->g_99 p_1002->g_105 p_1002->g_108 p_1002->g_109 p_1002->g_110 p_1002->g_118 p_1002->g_120 p_1002->g_122 p_1002->g_124 p_1002->g_126 p_1002->g_129 p_1002->g_136 p_1002->g_137 p_1002->g_410 p_1002->g_419 p_1002->g_428 p_1002->g_437 p_1002->g_171 p_1002->g_273 p_1002->g_468 p_1002->g_80 p_1002->g_486 p_1002->g_364.f5 p_1002->g_562 p_1002->g_329 p_1002->g_253 p_1002->g_572
 * writes: p_1002->g_43 p_1002->g_44 p_1002->g_53 p_1002->g_62 p_1002->g_78.f0 p_1002->g_273 p_1002->g_431 p_1002->g_433 p_1002->g_13 p_1002->g_486 p_1002->g_364.f5 p_1002->g_562 p_1002->g_573
 */
int8_t * func_20(int8_t  p_21, struct S4 * p_1002)
{ /* block id: 5 */
    int8_t *l_33 = (void*)0;
    int32_t *l_42[9];
    int8_t *l_51 = &p_1002->g_13;
    uint64_t *l_52 = &p_1002->g_53;
    int32_t l_578 = 0x39D43FD5L;
    int i;
    for (i = 0; i < 9; i++)
        l_42[i] = &p_1002->g_43;
    l_578 |= ((((VECTOR(int64_t, 16))(0x269919C44D4E2B79L, (func_23(func_29(l_33, (((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(0x20L, 2)), (safe_sub_func_uint16_t_u_u((((p_21 <= GROUP_DIVERGE(1, 1)) , (void*)0) != ((p_1002->g_44 &= (p_1002->g_43 = p_1002->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1002->tid, 80))])) , func_45(l_51, (--(*l_52)), func_56(p_1002->g_comm_values[p_1002->tid], p_1002->g_13, p_1002), &p_1002->g_43, l_51, p_1002))), 0x8804L)))) >= 0x78B3315FL), (*p_1002->g_12))) > (*p_1002->g_12)) , (void*)0), p_1002->g_124.s3, p_1002), p_1002->g_12, l_33, p_1002->g_12, p_21, p_1002) ^ 0x23D8L), ((VECTOR(int64_t, 8))(0x1618FF85F1027181L)), p_1002->g_136.s3, ((VECTOR(int64_t, 2))(0L)), ((VECTOR(int64_t, 2))((-1L))), 0x5B5ADE12816312CCL)).sd , l_51) == l_33);
    return &p_1002->g_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_1002->g_364.f5 p_1002->g_84 p_1002->g_62 p_1002->g_562 p_1002->g_329 p_1002->g_253 p_1002->g_572 p_1002->g_273
 * writes: p_1002->g_364.f5 p_1002->g_273 p_1002->g_562 p_1002->g_62 p_1002->g_573
 */
int16_t  func_23(struct S0  p_24, int8_t * p_25, int8_t * p_26, int8_t * p_27, uint64_t  p_28, struct S4 * p_1002)
{ /* block id: 153 */
    int32_t *l_491 = &p_1002->g_273;
    int32_t **l_492 = &l_491;
    int32_t *l_568[7] = {&p_1002->g_486,&p_1002->g_486,&p_1002->g_486,&p_1002->g_486,&p_1002->g_486,&p_1002->g_486,&p_1002->g_486};
    int8_t l_574 = 0x68L;
    uint64_t l_575 = 1UL;
    int i;
    (*l_492) = l_491;
    for (p_1002->g_364.f5 = (-24); (p_1002->g_364.f5 == 29); p_1002->g_364.f5++)
    { /* block id: 157 */
        uint32_t l_569 = 0xFBC96193L;
        if ((*p_1002->g_84))
        { /* block id: 158 */
            (*l_491) = 0L;
            if ((atomic_inc(&p_1002->l_atomic_input[11]) == 5))
            { /* block id: 161 */
                int32_t l_495[1];
                int32_t *l_561 = &l_495[0];
                int i;
                for (i = 0; i < 1; i++)
                    l_495[i] = 0x6494DADDL;
                for (l_495[0] = (-9); (l_495[0] >= (-30)); l_495[0]--)
                { /* block id: 164 */
                    int32_t l_498 = (-8L);
                    int32_t *l_509[9] = {(void*)0,&l_498,(void*)0,(void*)0,&l_498,(void*)0,(void*)0,&l_498,(void*)0};
                    int32_t *l_510[6][6][4] = {{{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498}},{{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498}},{{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498}},{{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498}},{{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498}},{{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498},{&l_498,&l_498,(void*)0,&l_498}}};
                    int32_t *l_511 = &l_498;
                    int32_t *l_512 = (void*)0;
                    int32_t *l_513 = &l_498;
                    int32_t *l_514[4][1] = {{&l_498},{&l_498},{&l_498},{&l_498}};
                    int32_t *l_515 = (void*)0;
                    union U3 l_516 = {0};
                    union U3 l_517 = {0};
                    union U3 l_518 = {0};
                    union U3 l_519 = {0};
                    uint8_t l_520 = 0x99L;
                    VECTOR(int32_t, 4) l_521 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x1FCD1A69L), 0x1FCD1A69L);
                    int32_t l_522 = 3L;
                    uint32_t l_523 = 0x97281257L;
                    VECTOR(int32_t, 16) l_524 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x20060DD8L), 0x20060DD8L), 0x20060DD8L, 7L, 0x20060DD8L, (VECTOR(int32_t, 2))(7L, 0x20060DD8L), (VECTOR(int32_t, 2))(7L, 0x20060DD8L), 7L, 0x20060DD8L, 7L, 0x20060DD8L);
                    uint8_t l_525 = 1UL;
                    VECTOR(uint8_t, 16) l_526 = (VECTOR(uint8_t, 16))(0x50L, (VECTOR(uint8_t, 4))(0x50L, (VECTOR(uint8_t, 2))(0x50L, 0x07L), 0x07L), 0x07L, 0x50L, 0x07L, (VECTOR(uint8_t, 2))(0x50L, 0x07L), (VECTOR(uint8_t, 2))(0x50L, 0x07L), 0x50L, 0x07L, 0x50L, 0x07L);
                    uint64_t l_527 = 1UL;
                    uint32_t l_528 = 0xD54E3216L;
                    int32_t l_529 = (-1L);
                    uint64_t l_530 = 0x9E34A3B1234E6EC1L;
                    uint64_t l_531[4] = {0x6F6364CCC6D10EA2L,0x6F6364CCC6D10EA2L,0x6F6364CCC6D10EA2L,0x6F6364CCC6D10EA2L};
                    int i, j, k;
                    for (l_498 = (-5); (l_498 == (-22)); l_498 = safe_sub_func_int32_t_s_s(l_498, 6))
                    { /* block id: 167 */
                        uint16_t l_501 = 0UL;
                        int32_t l_502 = 0x3B73723CL;
                        int32_t l_503 = 0x151EAA03L;
                        uint32_t l_504 = 0x95318EA7L;
                        int32_t *l_507[9][2] = {{&l_503,&l_503},{&l_503,&l_503},{&l_503,&l_503},{&l_503,&l_503},{&l_503,&l_503},{&l_503,&l_503},{&l_503,&l_503},{&l_503,&l_503},{&l_503,&l_503}};
                        int32_t *l_508 = &l_503;
                        int i, j;
                        l_501 ^= 0x3472CAF4L;
                        l_502 &= 0x6D4E7125L;
                        ++l_504;
                        l_508 = l_507[1][0];
                    }
                    l_512 = (l_511 = (l_510[1][2][0] = l_509[0]));
                    l_515 = (l_514[0][0] = l_513);
                    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((((l_519 = (((VECTOR(uint64_t, 2))(0x136EEE3BF38E63BFL, 0x3B75086393BAD850L)).odd , (l_516 , (l_518 = l_517)))) , l_520) , ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))((-2L), 1L, 8L, (-3L))).hi, ((VECTOR(int32_t, 8))(l_521.yxyzzxwy)).s17))).yxyyyxxxxxxxyxyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_522, 1L, (l_525 = (l_523 , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_524.s5b892758)).even)).x)), 7L, 0x591B77D5L, (l_531[0] = (((l_527 = ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(l_526.s1c59e287c57fe70d)).sa60e))).x) , (l_529 = l_528)) , l_530)), 6L, 0x0DB1F776L)).s43)).xxyyxxxyyxxyyxyx))).s2), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x16F6DA65L, 7L)))), 0x7051FD3DL)).odd)).hi)
                    { /* block id: 184 */
                        int32_t l_532 = 0x4DFD5D61L;
                        int16_t l_533 = 0x0C55L;
                        int64_t l_534 = 0x76020C1B5EF209E0L;
                        int16_t l_535 = 1L;
                        uint32_t l_536 = 1UL;
                        int32_t l_539 = 0x24E751B1L;
                        int64_t l_540 = 0x41EC9D480133ADFAL;
                        uint8_t l_541 = 253UL;
                        l_536--;
                        ++l_541;
                    }
                    else
                    { /* block id: 187 */
                        uint8_t l_544 = 0UL;
                        l_544--;
                    }
                }
                for (l_495[0] = 0; (l_495[0] < (-27)); l_495[0]--)
                { /* block id: 193 */
                    int32_t l_549 = 0x4FFA23EDL;
                    for (l_549 = 0; (l_549 <= 29); l_549 = safe_add_func_uint32_t_u_u(l_549, 3))
                    { /* block id: 196 */
                        VECTOR(int32_t, 2) l_552 = (VECTOR(int32_t, 2))((-4L), 3L);
                        uint8_t l_553 = 249UL;
                        uint32_t l_554 = 0xF0552634L;
                        struct S0 l_556 = {4294967294UL};
                        struct S0 *l_555 = &l_556;
                        struct S0 *l_557 = &l_556;
                        VECTOR(int32_t, 4) l_558 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
                        struct S0 l_559 = {0xD8763D5AL};
                        struct S0 l_560 = {4294967287UL};
                        int i;
                        l_553 |= ((VECTOR(int32_t, 4))(l_552.xxxy)).x;
                        l_552.x ^= l_554;
                        l_557 = l_555;
                        l_560 = (l_558.w , ((*l_557) = l_559));
                    }
                }
                l_561 = (void*)0;
                unsigned int result = 0;
                int l_495_i0;
                for (l_495_i0 = 0; l_495_i0 < 1; l_495_i0++) {
                    result += l_495[l_495_i0];
                }
                atomic_add(&p_1002->l_special_values[11], result);
            }
            else
            { /* block id: 205 */
                (1 + 1);
            }
        }
        else
        { /* block id: 208 */
            uint32_t **l_563 = &p_1002->g_562[1];
            l_569 = ((((*l_563) = p_1002->g_562[1]) == p_1002->g_84) != ((((*p_1002->g_329) == (safe_rshift_func_int8_t_s_u(0L, 3))) , ((*l_492) = (*l_492))) != l_568[1]));
        }
        for (p_1002->g_62 = 0; (p_1002->g_62 >= (-21)); p_1002->g_62 = safe_sub_func_int8_t_s_s(p_1002->g_62, 7))
        { /* block id: 215 */
            p_1002->g_573[1][0][1] = (p_28 , p_1002->g_572);
        }
    }
    l_575--;
    return (**l_492);
}


/* ------------------------------------------ */
/* 
 * reads : p_1002->g_419 p_1002->g_428 p_1002->g_437 p_1002->g_171 p_1002->g_122 p_1002->g_62 p_1002->g_84 p_1002->g_410 p_1002->g_273 p_1002->g_468 p_1002->g_78 p_1002->g_120 p_1002->g_12 p_1002->g_13 p_1002->g_80 p_1002->g_126 p_1002->g_486
 * writes: p_1002->g_431 p_1002->g_433 p_1002->g_43 p_1002->g_13 p_1002->g_486
 */
struct S0  func_29(int8_t * p_30, int8_t * p_31, uint32_t  p_32, struct S4 * p_1002)
{ /* block id: 137 */
    VECTOR(int16_t, 8) l_420 = (VECTOR(int16_t, 8))(0x3CEBL, (VECTOR(int16_t, 4))(0x3CEBL, (VECTOR(int16_t, 2))(0x3CEBL, (-5L)), (-5L)), (-5L), 0x3CEBL, (-5L));
    VECTOR(int16_t, 8) l_427 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x685CL), 0x685CL), 0x685CL, 1L, 0x685CL);
    uint64_t *l_429 = (void*)0;
    uint64_t **l_430[9][1][6] = {{{&l_429,(void*)0,&l_429,&l_429,&p_1002->g_329,&l_429}},{{&l_429,(void*)0,&l_429,&l_429,&p_1002->g_329,&l_429}},{{&l_429,(void*)0,&l_429,&l_429,&p_1002->g_329,&l_429}},{{&l_429,(void*)0,&l_429,&l_429,&p_1002->g_329,&l_429}},{{&l_429,(void*)0,&l_429,&l_429,&p_1002->g_329,&l_429}},{{&l_429,(void*)0,&l_429,&l_429,&p_1002->g_329,&l_429}},{{&l_429,(void*)0,&l_429,&l_429,&p_1002->g_329,&l_429}},{{&l_429,(void*)0,&l_429,&l_429,&p_1002->g_329,&l_429}},{{&l_429,(void*)0,&l_429,&l_429,&p_1002->g_329,&l_429}}};
    uint16_t *l_432 = &p_1002->g_433[4][3];
    VECTOR(uint16_t, 16) l_434 = (VECTOR(uint16_t, 16))(0x0347L, (VECTOR(uint16_t, 4))(0x0347L, (VECTOR(uint16_t, 2))(0x0347L, 0x9970L), 0x9970L), 0x9970L, 0x0347L, 0x9970L, (VECTOR(uint16_t, 2))(0x0347L, 0x9970L), (VECTOR(uint16_t, 2))(0x0347L, 0x9970L), 0x0347L, 0x9970L, 0x0347L, 0x9970L);
    VECTOR(int16_t, 16) l_435 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L, (VECTOR(int16_t, 2))((-1L), 2L), (VECTOR(int16_t, 2))((-1L), 2L), (-1L), 2L, (-1L), 2L);
    VECTOR(int16_t, 16) l_436 = (VECTOR(int16_t, 16))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L), (VECTOR(int16_t, 2))(9L, (-1L)), (VECTOR(int16_t, 2))(9L, (-1L)), 9L, (-1L), 9L, (-1L));
    VECTOR(int8_t, 2) l_438 = (VECTOR(int8_t, 2))(0x41L, 0x45L);
    int16_t **l_445 = &p_1002->g_360;
    struct S1 *l_450 = &p_1002->g_364;
    int8_t l_451 = (-9L);
    int32_t l_452 = 0x0C6F67F7L;
    int32_t *l_477 = &p_1002->g_62;
    uint8_t l_481 = 5UL;
    int64_t l_484 = 3L;
    struct S0 l_487 = {0x9CBCE19BL};
    int32_t **l_490 = &l_477;
    int i, j, k;
    if (((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(0x7029B9C2L, 0L, 0x67951E99L, 0x19F15E6DL, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_1002->g_419.yzxyzwxx)), ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_420.s14)))), ((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((((safe_lshift_func_int16_t_s_s((((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_427.s0240)))).odd)).xxyy)).odd)), ((VECTOR(int16_t, 4))(p_1002->g_428.wzxz)), 0x32B8L, 0L)).s5 != ((&p_1002->g_253[4] != (p_1002->g_431 = l_429)) , (((*l_432) = 0x82A3L) ^ ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_434.s6bea9332)).even)).zwzyzwzwyzxwywxy)).s9728, ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 16))(0x2B78L, l_427.s7, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(l_435.sefafb1a6)).s13, ((VECTOR(int16_t, 4))((-1L), (-1L), 0x7E11L, 1L)).odd, ((VECTOR(int16_t, 2))((-1L), 1L))))), (-1L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_436.s4d0437fa1a6bc765)))).lo, ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1002->g_437.sefe5c6eb1831b812)))), ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(l_438.yy)).xxxy, ((VECTOR(int8_t, 8))(0x60L, 0L, (safe_mul_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(p_1002->g_171.sf, ((safe_sub_func_uint64_t_u_u(((void*)0 != l_445), (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((((void*)0 != &l_445) <= 1UL) || 6L) , &p_1002->g_105) == l_450), p_32)), 11)))) || p_32))) || l_435.sa), 0x0CL)), 0x38L, 0x60L, 0x5CL, 0x35L, 0x5EL)).odd))).yxxxxwywwxywzzxy))).even, ((VECTOR(int8_t, 8))(1L))))).odd)).xyxyyzzzwzyzzyxy, ((VECTOR(int8_t, 16))(0L))))).s6133))).xywzwwwyyywzyxxw, (int8_t)l_427.s7))))).lo, ((VECTOR(uint8_t, 8))(0UL))))), ((VECTOR(int16_t, 8))(1L))))))).s16)), l_436.s1, ((VECTOR(int16_t, 8))(0x5332L)))).sb2, ((VECTOR(int16_t, 2))(0x63BCL))))).yxyyxxyy, ((VECTOR(uint16_t, 8))(0xC26DL))))).lo))).xxyzyxyx)).s4))) >= p_32) >= p_1002->g_122.x), 15)) , (void*)0) == &p_1002->g_80[3]) != p_1002->g_62), p_32)), p_32)) || l_451), 0x056FL, l_434.s2, 0x2D60L, 0x0226L, 0x2DF4L)).s0314652257465176, ((VECTOR(int16_t, 16))((-1L)))))).s3d31, ((VECTOR(int16_t, 4))(1L))))).even, ((VECTOR(int16_t, 2))(0x091CL))))).xyyxxyxy, ((VECTOR(int16_t, 8))(0x1B7EL))))).s2, l_452, p_32, ((VECTOR(int16_t, 4))((-1L))), 0x2D63L)).s59, ((VECTOR(uint16_t, 2))(9UL))))))), (int32_t)p_32, (int32_t)(*p_1002->g_84)))).xyyx, ((VECTOR(int32_t, 4))(0x038D8A4BL))))))).s0733511434226351, ((VECTOR(int32_t, 16))((-10L))), ((VECTOR(int32_t, 16))(0x34F08F81L))))).lo, ((VECTOR(int32_t, 8))(0x1D0195BEL))))).s6)
    { /* block id: 140 */
        union U3 l_453 = {0};
        struct S0 *l_454 = (void*)0;
        int32_t *l_463 = &p_1002->g_43;
        int32_t **l_478 = &l_477;
        int32_t l_482 = 0x1BBE3408L;
        int64_t l_483[8][7] = {{1L,1L,(-4L),0x53A99D0033823C9CL,1L,0x53A99D0033823C9CL,(-4L)},{1L,1L,(-4L),0x53A99D0033823C9CL,1L,0x53A99D0033823C9CL,(-4L)},{1L,1L,(-4L),0x53A99D0033823C9CL,1L,0x53A99D0033823C9CL,(-4L)},{1L,1L,(-4L),0x53A99D0033823C9CL,1L,0x53A99D0033823C9CL,(-4L)},{1L,1L,(-4L),0x53A99D0033823C9CL,1L,0x53A99D0033823C9CL,(-4L)},{1L,1L,(-4L),0x53A99D0033823C9CL,1L,0x53A99D0033823C9CL,(-4L)},{1L,1L,(-4L),0x53A99D0033823C9CL,1L,0x53A99D0033823C9CL,(-4L)},{1L,1L,(-4L),0x53A99D0033823C9CL,1L,0x53A99D0033823C9CL,(-4L)}};
        int32_t *l_485 = &p_1002->g_486;
        int i, j;
        (*l_485) &= (l_453 , (((l_454 != (void*)0) != (((safe_rshift_func_int8_t_s_u(((*p_1002->g_12) = (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((l_484 = (safe_div_func_int32_t_s_s((l_452 = ((*l_463) = (*p_1002->g_410))), (safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 16))(p_1002->g_468.s5521037617744721)).s4, (safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x5956L, 0x0362L)).yxxy)).y, (safe_mod_func_uint32_t_u_u((((*l_432) = ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(8UL, ((((((l_434.s1 || ((l_463 == ((*l_478) = l_477)) >= ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-2L), 0x6CL)))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(0x30L, 0x07L, 1L, (-1L), 1L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((p_1002->g_78 , ((safe_rshift_func_uint8_t_u_s(((+(((-1L) <= p_1002->g_120.z) == p_32)) ^ l_481), l_434.sa)) , l_482)), ((VECTOR(int8_t, 2))(1L)), 0x51L)).odd)), 0L)).s7334471417034073, ((VECTOR(int8_t, 16))((-1L)))))), ((VECTOR(int8_t, 16))(0x1BL)), ((VECTOR(int8_t, 16))(0x51L))))))).lo)).s60))).xyyyyxyy, (int8_t)l_434.s7))), ((VECTOR(int8_t, 8))((-3L))))).lo, ((VECTOR(int8_t, 8))((-1L)))))).hi)))).even)).odd)) & (*p_1002->g_12)) > 0L) & p_32) != (-1L)) == 18446744073709551615UL), 0xB5F9L, p_32, ((VECTOR(uint16_t, 2))(4UL)), 0xFD24L, 0xDDCAL)).s57)).even) | (-7L)), p_1002->g_80[2])))), 0)), p_32)))), l_483[5][2]))))), 1)), p_1002->g_171.sc))), 5)) & l_451) , (*l_477))) > p_1002->g_126.s1));
    }
    else
    { /* block id: 148 */
        return l_487;
    }
    (*l_490) = &p_1002->g_43;
    return l_487;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_45(int8_t * p_46, uint64_t  p_47, int32_t * p_48, int32_t * p_49, int8_t * p_50, struct S4 * p_1002)
{ /* block id: 135 */
    return &p_1002->g_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_1002->g_43 p_1002->g_62 p_1002->g_75 p_1002->g_78 p_1002->g_79 p_1002->g_84 p_1002->g_12 p_1002->g_13 p_1002->g_99 p_1002->g_105 p_1002->g_108 p_1002->g_109 p_1002->g_110 p_1002->g_118 p_1002->g_120 p_1002->g_122 p_1002->g_124 p_1002->g_126 p_1002->g_129 p_1002->g_136 p_1002->g_137 p_1002->g_410
 * writes: p_1002->g_62 p_1002->g_78.f0 p_1002->g_273
 */
int32_t * func_56(uint8_t  p_57, int16_t  p_58, struct S4 * p_1002)
{ /* block id: 9 */
    int32_t *l_61 = (void*)0;
    struct S0 l_72 = {4294967286UL};
    int8_t *l_73[6] = {&p_1002->g_13,&p_1002->g_13,&p_1002->g_13,&p_1002->g_13,&p_1002->g_13,&p_1002->g_13};
    uint16_t l_409 = 7UL;
    int32_t *l_411 = (void*)0;
    int32_t *l_412 = &p_1002->g_273;
    int32_t *l_413[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_414 = 1L;
    int32_t l_415 = 0x5AF0C840L;
    uint16_t l_416 = 0xD57BL;
    int i;
    for (p_57 = 0; (p_57 <= 53); p_57 = safe_add_func_int8_t_s_s(p_57, 9))
    { /* block id: 12 */
        return &p_1002->g_43;
    }
    p_1002->g_62 &= p_1002->g_43;
    (*p_1002->g_410) = (((p_58 & p_1002->g_43) ^ func_63(p_57, func_69((l_72 , l_73[3]), l_73[3], p_1002), (p_1002->g_78 , p_58), l_73[3], p_1002->g_79, p_1002)) | l_409);
    --l_416;
    return &p_1002->g_62;
}


/* ------------------------------------------ */
/* 
 * reads : p_1002->g_84 p_1002->g_62 p_1002->g_12 p_1002->g_13 p_1002->g_99 p_1002->g_105 p_1002->g_108 p_1002->g_109 p_1002->g_110 p_1002->g_118 p_1002->g_120 p_1002->g_122 p_1002->g_124 p_1002->g_126 p_1002->g_129 p_1002->g_136 p_1002->g_137 p_1002->g_78.f0 p_1002->g_75.f5
 * writes: p_1002->g_62 p_1002->g_78.f0
 */
uint16_t  func_63(uint8_t  p_64, int8_t * p_65, int32_t  p_66, int8_t * p_67, uint64_t * p_68, struct S4 * p_1002)
{ /* block id: 20 */
    int8_t l_91 = 0x60L;
    uint32_t l_93 = 0xC66F1EAAL;
    int32_t l_97 = 1L;
    VECTOR(uint8_t, 2) l_98 = (VECTOR(uint8_t, 2))(1UL, 255UL);
    VECTOR(int8_t, 8) l_101 = (VECTOR(int8_t, 8))(0x67L, (VECTOR(int8_t, 4))(0x67L, (VECTOR(int8_t, 2))(0x67L, 0x67L), 0x67L), 0x67L, 0x67L, 0x67L);
    VECTOR(int8_t, 2) l_102 = (VECTOR(int8_t, 2))((-6L), 0x34L);
    VECTOR(uint32_t, 8) l_111 = (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967294UL), 4294967294UL), 4294967294UL, 4294967294UL, 4294967294UL);
    VECTOR(uint32_t, 8) l_112 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xC8944EAFL), 0xC8944EAFL), 0xC8944EAFL, 4294967295UL, 0xC8944EAFL);
    VECTOR(uint32_t, 8) l_113 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 3UL), 3UL), 3UL, 4294967295UL, 3UL);
    VECTOR(uint16_t, 2) l_114 = (VECTOR(uint16_t, 2))(0xC4FDL, 0x6BF6L);
    VECTOR(uint32_t, 16) l_115 = (VECTOR(uint32_t, 16))(0xAA53E6A3L, (VECTOR(uint32_t, 4))(0xAA53E6A3L, (VECTOR(uint32_t, 2))(0xAA53E6A3L, 0x93C2DF58L), 0x93C2DF58L), 0x93C2DF58L, 0xAA53E6A3L, 0x93C2DF58L, (VECTOR(uint32_t, 2))(0xAA53E6A3L, 0x93C2DF58L), (VECTOR(uint32_t, 2))(0xAA53E6A3L, 0x93C2DF58L), 0xAA53E6A3L, 0x93C2DF58L, 0xAA53E6A3L, 0x93C2DF58L);
    VECTOR(uint32_t, 16) l_116 = (VECTOR(uint32_t, 16))(0x83824F8FL, (VECTOR(uint32_t, 4))(0x83824F8FL, (VECTOR(uint32_t, 2))(0x83824F8FL, 0UL), 0UL), 0UL, 0x83824F8FL, 0UL, (VECTOR(uint32_t, 2))(0x83824F8FL, 0UL), (VECTOR(uint32_t, 2))(0x83824F8FL, 0UL), 0x83824F8FL, 0UL, 0x83824F8FL, 0UL);
    VECTOR(uint32_t, 2) l_117 = (VECTOR(uint32_t, 2))(0xB5282479L, 0xEA165F45L);
    VECTOR(uint32_t, 8) l_119 = (VECTOR(uint32_t, 8))(0x9E613B00L, (VECTOR(uint32_t, 4))(0x9E613B00L, (VECTOR(uint32_t, 2))(0x9E613B00L, 0UL), 0UL), 0UL, 0x9E613B00L, 0UL);
    VECTOR(uint32_t, 16) l_121 = (VECTOR(uint32_t, 16))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0xAA8B2A03L), 0xAA8B2A03L), 0xAA8B2A03L, 4294967287UL, 0xAA8B2A03L, (VECTOR(uint32_t, 2))(4294967287UL, 0xAA8B2A03L), (VECTOR(uint32_t, 2))(4294967287UL, 0xAA8B2A03L), 4294967287UL, 0xAA8B2A03L, 4294967287UL, 0xAA8B2A03L);
    VECTOR(uint32_t, 8) l_123 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xDDC992EEL), 0xDDC992EEL), 0xDDC992EEL, 0UL, 0xDDC992EEL);
    VECTOR(uint32_t, 4) l_125 = (VECTOR(uint32_t, 4))(0xF67D394CL, (VECTOR(uint32_t, 2))(0xF67D394CL, 0xA244BBC7L), 0xA244BBC7L);
    VECTOR(uint32_t, 4) l_127 = (VECTOR(uint32_t, 4))(0x0C6B045EL, (VECTOR(uint32_t, 2))(0x0C6B045EL, 1UL), 1UL);
    VECTOR(uint32_t, 16) l_128 = (VECTOR(uint32_t, 16))(0x53E7E880L, (VECTOR(uint32_t, 4))(0x53E7E880L, (VECTOR(uint32_t, 2))(0x53E7E880L, 1UL), 1UL), 1UL, 0x53E7E880L, 1UL, (VECTOR(uint32_t, 2))(0x53E7E880L, 1UL), (VECTOR(uint32_t, 2))(0x53E7E880L, 1UL), 0x53E7E880L, 1UL, 0x53E7E880L, 1UL);
    VECTOR(uint32_t, 4) l_130 = (VECTOR(uint32_t, 4))(0x669DCB87L, (VECTOR(uint32_t, 2))(0x669DCB87L, 4294967295UL), 4294967295UL);
    VECTOR(uint32_t, 16) l_131 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint32_t, 2))(0UL, 1UL), (VECTOR(uint32_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
    int32_t *l_138 = &p_1002->g_62;
    uint8_t *l_177 = (void*)0;
    VECTOR(uint32_t, 8) l_197 = (VECTOR(uint32_t, 8))(0x56CCA364L, (VECTOR(uint32_t, 4))(0x56CCA364L, (VECTOR(uint32_t, 2))(0x56CCA364L, 0xA8F5FBB2L), 0xA8F5FBB2L), 0xA8F5FBB2L, 0x56CCA364L, 0xA8F5FBB2L);
    VECTOR(uint32_t, 8) l_198 = (VECTOR(uint32_t, 8))(0xB8CE4A9CL, (VECTOR(uint32_t, 4))(0xB8CE4A9CL, (VECTOR(uint32_t, 2))(0xB8CE4A9CL, 0xE3233A39L), 0xE3233A39L), 0xE3233A39L, 0xB8CE4A9CL, 0xE3233A39L);
    VECTOR(uint32_t, 4) l_209 = (VECTOR(uint32_t, 4))(0x99E6F73AL, (VECTOR(uint32_t, 2))(0x99E6F73AL, 0x0DF6F84DL), 0x0DF6F84DL);
    union U3 l_242 = {0};
    int32_t l_340 = (-4L);
    VECTOR(int16_t, 16) l_344 = (VECTOR(int16_t, 16))(0x2107L, (VECTOR(int16_t, 4))(0x2107L, (VECTOR(int16_t, 2))(0x2107L, 0x383FL), 0x383FL), 0x383FL, 0x2107L, 0x383FL, (VECTOR(int16_t, 2))(0x2107L, 0x383FL), (VECTOR(int16_t, 2))(0x2107L, 0x383FL), 0x2107L, 0x383FL, 0x2107L, 0x383FL);
    struct S0 l_374 = {1UL};
    int32_t l_397[9][10][2] = {{{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL}},{{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL}},{{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL}},{{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL}},{{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL}},{{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL}},{{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL}},{{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL}},{{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL},{0x1DAF6075L,0x6FDEA1CBL}}};
    int8_t l_400 = 3L;
    int16_t l_404 = 1L;
    int i, j, k;
    for (p_64 = (-30); (p_64 != 29); p_64 = safe_add_func_uint8_t_u_u(p_64, 1))
    { /* block id: 23 */
        int16_t l_96 = 0x3ED2L;
        VECTOR(int8_t, 16) l_100 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int8_t, 2))(1L, 1L), (VECTOR(int8_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
        int8_t l_103 = 1L;
        int32_t *l_104 = &p_1002->g_62;
        int i;
        (*p_1002->g_84) |= (0UL == p_64);
        (*l_104) ^= (safe_div_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(l_91, (safe_unary_minus_func_int8_t_s(l_93)))) && (((((safe_sub_func_int8_t_s_s((*p_1002->g_12), (l_97 = l_96))) != 0L) <= 0x3FF5L) <= ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_98.xyyx)).ywzzxwxx)).s0442042572540654, ((VECTOR(uint8_t, 8))(p_1002->g_99.xyxxyyxy)).s4420316724443544))))).s55, ((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_100.sdee6403f479f84cd)).hi)), ((VECTOR(int8_t, 16))((*p_1002->g_12), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x46L, 0x6CL)))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_101.s16)))), (-5L), ((VECTOR(int8_t, 2))(l_102.xx)), 0x64L, ((VECTOR(int8_t, 4))((0x2D2EL ^ GROUP_DIVERGE(2, 1)), ((VECTOR(int8_t, 2))(6L)), 0x14L)), ((VECTOR(int8_t, 2))(0x7DL)), 1L)).lo))).s6736333625464702, ((VECTOR(uint8_t, 16))(0x0CL)), ((VECTOR(uint8_t, 16))(0x9EL))))).sc6))).even) ^ 0x3AL)), l_103)) == l_98.x) , &p_66) != (void*)0), (*p_1002->g_12)));
    }
    (*l_138) &= (p_1002->g_105 , (safe_rshift_func_uint8_t_u_s((GROUP_DIVERGE(2, 1) || 0x75L), (l_97 = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(p_1002->g_108.wx)).xxyxyxyyxyyyxxxx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 4))(p_1002->g_109.s6614)).wzxwxxzwxwxzwwyw, ((VECTOR(uint32_t, 8))(p_1002->g_110.xxxyyxxx)).s1244234407636713))).lo)).s0413063244103266))).sb992)).zzxxxzxy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 2))(l_111.s36)).xyyy, (uint32_t)(0UL >= 0x756A42CAL), (uint32_t)p_1002->g_105.f0))).wzwxzyzywywyywwz)).s87)).yxxyyyxx, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_112.s12)).yxyy)).odd, ((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 4))(l_113.s7026)).hi, ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 4))(l_114.xyyx)).even, ((VECTOR(uint16_t, 2))(0x31A1L, 65529UL)))))))).xyxxyxyyyxxyxxxy)).even, ((VECTOR(uint32_t, 16))(l_115.s47fbb040387e0a5e)).even))))).lo, ((VECTOR(uint32_t, 16))(l_116.s24b42e23460c9fb3)).s39ec))).xwxzyyyzzywxywwz, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_117.yyyxxyxx)).s43)).yxyyyyyxyxyyyyyy))))).hi)).s40, ((VECTOR(uint32_t, 2))(0x62B7E369L, 0x562ED700L)), ((VECTOR(uint32_t, 16))(4294967295UL, 0x6CEBAF42L, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(p_1002->g_118.yyxxyxxxyyyyyyyy)).lo)).even)).xxwwxyxzwzzwzwwy, ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(l_119.s7757062155644450)).s22bc, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))(p_1002->g_120.xxyzzzxywzzzzwxw)).s6f, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 16))(l_121.sd7e572e8c5f53ca7)).odd, ((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(p_1002->g_122.wz)).yxyx, ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 16))(l_123.s2571545433170702)).sd3ed, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(p_1002->g_124.s21552465)).odd, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_125.xwwy)).zzzyxyxx)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_1002->g_126.s6171)).xyzzxzyzyyyzwyww)).s6f86)))))))), ((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x47BAECA1L, 1UL)), 1UL, 0x29422283L)).wwwxxxzwxyyywxwx)))).s9ed6, ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 2))(l_127.xw)).yyxy, ((VECTOR(uint32_t, 16))(l_128.s31dcf8424657f329)).sdde6, ((VECTOR(uint32_t, 2))(p_1002->g_129.zw)).yxxx))))))))).wwzyzwzy, ((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_130.ww)).xxyyyxyy)), ((VECTOR(uint32_t, 2))(5UL, 0x0440F41BL)).yxyxyxxy)))))).odd)).hi))), 7UL, ((VECTOR(uint32_t, 2))(l_131.s95)), (safe_mul_func_uint16_t_u_u(0x35E8L, ((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(p_1002->g_136.s24)).hi, ((p_1002->g_137 , l_123.s0) | (l_116.s4 || l_102.x)))) < 0x444B5CFA680EF530L))), 0x96A6C0ADL, 0x1D9937ACL)).hi))).xzyyyzxxwxxwzwxx))).hi))))), ((VECTOR(uint32_t, 8))(0xAD8F8F40L))))), ((VECTOR(uint32_t, 2))(0x05BC8A62L)), ((VECTOR(uint32_t, 2))(0x62037651L)), 0x0433D11FL, 0x7AAF5FA4L)).sec))), ((VECTOR(uint32_t, 2))(0xDFEC3DBCL))))).xxyyyxxx))).odd)), ((VECTOR(uint32_t, 8))(0UL)), l_93, ((VECTOR(uint32_t, 2))(0x6AD5B22CL)), 0x6132A9E9L)).s9fb6)), 0x59C151ECL, ((VECTOR(uint32_t, 4))(0x8A766390L)), l_121.s1, ((VECTOR(uint32_t, 2))(8UL)), ((VECTOR(uint32_t, 4))(0x1DF46D5BL)))).s37)).lo , (*p_1002->g_12))))));
    for (p_1002->g_78.f0 = (-15); (p_1002->g_78.f0 != 33); p_1002->g_78.f0 = safe_add_func_uint64_t_u_u(p_1002->g_78.f0, 3))
    { /* block id: 32 */
        uint32_t l_149 = 1UL;
        int32_t l_150 = 0x20BA19ADL;
        uint8_t *l_151[2];
        VECTOR(int8_t, 2) l_155 = (VECTOR(int8_t, 2))(0x14L, (-1L));
        VECTOR(int32_t, 16) l_172 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
        VECTOR(uint16_t, 2) l_183 = (VECTOR(uint16_t, 2))(0UL, 0x07E3L);
        int32_t **l_191 = &l_138;
        uint32_t l_326 = 4294967292UL;
        uint64_t *l_328[2];
        uint64_t l_348 = 0xC13E8D4C093A4387L;
        int16_t **l_361 = &p_1002->g_360;
        uint32_t l_371 = 0x993EE358L;
        int32_t l_399 = 3L;
        int8_t l_405 = 0x7AL;
        int i;
        for (i = 0; i < 2; i++)
            l_151[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_328[i] = (void*)0;
        (1 + 1);
    }
    return p_1002->g_75.f5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1002->g_75
 * writes:
 */
int8_t * func_69(int8_t * p_70, int8_t * p_71, struct S4 * p_1002)
{ /* block id: 16 */
    int32_t *l_74 = &p_1002->g_62;
    int8_t *l_76 = &p_1002->g_13;
    VECTOR(int32_t, 16) l_77 = (VECTOR(int32_t, 16))(0x59E1B0F0L, (VECTOR(int32_t, 4))(0x59E1B0F0L, (VECTOR(int32_t, 2))(0x59E1B0F0L, 0L), 0L), 0L, 0x59E1B0F0L, 0L, (VECTOR(int32_t, 2))(0x59E1B0F0L, 0L), (VECTOR(int32_t, 2))(0x59E1B0F0L, 0L), 0x59E1B0F0L, 0L, 0x59E1B0F0L, 0L);
    int i;
    l_74 = (void*)0;
    l_77.s5 |= ((p_1002->g_75 , &p_1002->g_13) != l_76);
    return &p_1002->g_13;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[52];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 52; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[52];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 52; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[80];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 80; i++)
            l_comm_values[i] = 1;
    struct S4 c_1003;
    struct S4* p_1002 = &c_1003;
    struct S4 c_1004 = {
        3L, // p_1002->g_13
        &p_1002->g_13, // p_1002->g_12
        9L, // p_1002->g_43
        0x0E56A96DAD8BE776L, // p_1002->g_44
        0x9A65C8BB6AF83395L, // p_1002->g_53
        (-4L), // p_1002->g_62
        {0x4DE216D727936456L,0xF9103153L,0x57951F1BL,0x03L,-1L,0x37BBCEC6L,{0xF78CAFACA8A51D4FL,1L,0x3BL,0UL,0x6CA241E226996DCEL,-5L}}, // p_1002->g_75
        {0x67BE229AL}, // p_1002->g_78
        {0UL,0UL,0UL,0UL}, // p_1002->g_80
        &p_1002->g_80[3], // p_1002->g_79
        (void*)0, // p_1002->g_83
        &p_1002->g_62, // p_1002->g_84
        (VECTOR(uint8_t, 2))(0xB5L, 248UL), // p_1002->g_99
        {0xC58EAAB991CC1712L,0x48CE6C9421085DA1L,250UL,4294967295UL,9UL,5L}, // p_1002->g_105
        (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0x63F81597L), 0x63F81597L), // p_1002->g_108
        (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 4294967292UL), 4294967292UL), 4294967292UL, 4294967288UL, 4294967292UL), // p_1002->g_109
        (VECTOR(uint32_t, 2))(0UL, 5UL), // p_1002->g_110
        (VECTOR(uint32_t, 2))(0x56848F5EL, 0x99F0A174L), // p_1002->g_118
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967286UL), 4294967286UL), // p_1002->g_120
        (VECTOR(uint32_t, 4))(0xE63CD3D8L, (VECTOR(uint32_t, 2))(0xE63CD3D8L, 1UL), 1UL), // p_1002->g_122
        (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0x0AE4559EL), 0x0AE4559EL), 0x0AE4559EL, 4294967294UL, 0x0AE4559EL), // p_1002->g_124
        (VECTOR(uint32_t, 8))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0xE87E310AL), 0xE87E310AL), 0xE87E310AL, 4294967286UL, 0xE87E310AL), // p_1002->g_126
        (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 4294967295UL), 4294967295UL), // p_1002->g_129
        (VECTOR(uint8_t, 8))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0x37L), 0x37L), 0x37L, 249UL, 0x37L), // p_1002->g_136
        {0}, // p_1002->g_137
        1L, // p_1002->g_154
        (VECTOR(int16_t, 2))(0x1DB9L, 1L), // p_1002->g_156
        (VECTOR(int32_t, 2))((-1L), 0x356361B4L), // p_1002->g_165
        (VECTOR(int32_t, 16))(0x28A3908BL, (VECTOR(int32_t, 4))(0x28A3908BL, (VECTOR(int32_t, 2))(0x28A3908BL, 0x4394845BL), 0x4394845BL), 0x4394845BL, 0x28A3908BL, 0x4394845BL, (VECTOR(int32_t, 2))(0x28A3908BL, 0x4394845BL), (VECTOR(int32_t, 2))(0x28A3908BL, 0x4394845BL), 0x28A3908BL, 0x4394845BL, 0x28A3908BL, 0x4394845BL), // p_1002->g_171
        (VECTOR(uint32_t, 4))(0x447F4B43L, (VECTOR(uint32_t, 2))(0x447F4B43L, 0UL), 0UL), // p_1002->g_204
        (VECTOR(uint32_t, 8))(0x1545B19DL, (VECTOR(uint32_t, 4))(0x1545B19DL, (VECTOR(uint32_t, 2))(0x1545B19DL, 0UL), 0UL), 0UL, 0x1545B19DL, 0UL), // p_1002->g_238
        (VECTOR(uint64_t, 2))(0x38FF28CAA444BCCDL, 0x1EBBCE2F1D7D21DFL), // p_1002->g_248
        {5L,0xD69629B2L,0xEEABF225L,1UL,0x4DL,0x484C7427L,{0xF449949446B94E04L,-1L,0xC4L,0UL,18446744073709551614UL,0x7DL}}, // p_1002->g_249
        {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}, // p_1002->g_253
        0x0B6C8E8BL, // p_1002->g_273
        {255UL}, // p_1002->g_298
        &p_1002->g_253[4], // p_1002->g_329
        (void*)0, // p_1002->g_360
        &p_1002->g_360, // p_1002->g_359
        {0UL,-4L,0x38L,4294967295UL,0x811CBD2238250102L,0x60L}, // p_1002->g_364
        {0xD051A042L}, // p_1002->g_377
        &p_1002->g_273, // p_1002->g_410
        (VECTOR(int16_t, 4))(0x516FL, (VECTOR(int16_t, 2))(0x516FL, (-7L)), (-7L)), // p_1002->g_419
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4611L), 0x4611L), // p_1002->g_428
        (void*)0, // p_1002->g_431
        {{65535UL,2UL,2UL,65535UL},{65535UL,2UL,2UL,65535UL},{65535UL,2UL,2UL,65535UL},{65535UL,2UL,2UL,65535UL},{65535UL,2UL,2UL,65535UL}}, // p_1002->g_433
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x0BL), 0x0BL), 0x0BL, 0L, 0x0BL, (VECTOR(int8_t, 2))(0L, 0x0BL), (VECTOR(int8_t, 2))(0L, 0x0BL), 0L, 0x0BL, 0L, 0x0BL), // p_1002->g_437
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x14524126L), 0x14524126L), 0x14524126L, 1L, 0x14524126L), // p_1002->g_468
        0x4C62418AL, // p_1002->g_486
        (void*)0, // p_1002->g_488
        (void*)0, // p_1002->g_489
        {(void*)0,(void*)0}, // p_1002->g_562
        {0x4245B2AF3C75C63BL,0x7A14252BL,1UL,251UL,-5L,0x7DF62024L,{0x93A53E9934F1742AL,0x3916B766F5F7CA9BL,247UL,0x2804B8D6L,18446744073709551610UL,7L}}, // p_1002->g_572
        {{{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}}},{{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}}},{{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}}},{{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}}},{{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}}},{{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}}},{{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}}},{{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}}},{{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}}},{{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}},{{1L,0xED1FC0FEL,7UL,255UL,1L,0x4660445CL,{0xFA4342E0ACDED520L,0x1CB57AE191B6FA7DL,0UL,0xB52D85BCL,0x43801DC2F5521ABDL,-1L}},{0x0085C6BE94EB11F9L,0x82545906L,0UL,1UL,0x5BL,0x2634D3C8L,{0UL,0x1B527351F8A30B5CL,0UL,0xDC431E2FL,18446744073709551615UL,0x38L}}}}}, // p_1002->g_573
        3L, // p_1002->g_592
        &p_1002->g_80[1], // p_1002->g_597
        &p_1002->g_597, // p_1002->g_596
        {{{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}}}}, // p_1002->g_599
        (VECTOR(uint64_t, 8))(0x4064A3AC908BD19CL, (VECTOR(uint64_t, 4))(0x4064A3AC908BD19CL, (VECTOR(uint64_t, 2))(0x4064A3AC908BD19CL, 0xAB02E0D03A54C44CL), 0xAB02E0D03A54C44CL), 0xAB02E0D03A54C44CL, 0x4064A3AC908BD19CL, 0xAB02E0D03A54C44CL), // p_1002->g_602
        0x18F5DF0BL, // p_1002->g_620
        (VECTOR(uint32_t, 2))(1UL, 0x408C861BL), // p_1002->g_638
        (void*)0, // p_1002->g_649
        &p_1002->g_649, // p_1002->g_648
        {0x47E0BA37B995D56BL,0xA8864A0AL,4294967293UL,0x27L,0x4BL,8L,{18446744073709551607UL,0x4343B448BCB2466EL,7UL,4294967291UL,0x4C4F8B8B7D82E365L,0x58L}}, // p_1002->g_653
        (VECTOR(uint8_t, 8))(0xAFL, (VECTOR(uint8_t, 4))(0xAFL, (VECTOR(uint8_t, 2))(0xAFL, 0x1EL), 0x1EL), 0x1EL, 0xAFL, 0x1EL), // p_1002->g_701
        &p_1002->g_43, // p_1002->g_729
        &p_1002->g_433[4][3], // p_1002->g_761
        &p_1002->g_761, // p_1002->g_760
        &p_1002->g_760, // p_1002->g_759
        0x0AL, // p_1002->g_795
        0x304DL, // p_1002->g_802
        {{{18446744073709551608UL,0x613FF2566FD9FC82L,1UL,4294967295UL,18446744073709551615UL,0x36L},{0xBEA1309D5D88C094L,-1L,1UL,4294967295UL,0xAB7383FEC8F87679L,9L},{18446744073709551608UL,0x613FF2566FD9FC82L,1UL,4294967295UL,18446744073709551615UL,0x36L}},{{18446744073709551608UL,0x613FF2566FD9FC82L,1UL,4294967295UL,18446744073709551615UL,0x36L},{0xBEA1309D5D88C094L,-1L,1UL,4294967295UL,0xAB7383FEC8F87679L,9L},{18446744073709551608UL,0x613FF2566FD9FC82L,1UL,4294967295UL,18446744073709551615UL,0x36L}},{{18446744073709551608UL,0x613FF2566FD9FC82L,1UL,4294967295UL,18446744073709551615UL,0x36L},{0xBEA1309D5D88C094L,-1L,1UL,4294967295UL,0xAB7383FEC8F87679L,9L},{18446744073709551608UL,0x613FF2566FD9FC82L,1UL,4294967295UL,18446744073709551615UL,0x36L}},{{18446744073709551608UL,0x613FF2566FD9FC82L,1UL,4294967295UL,18446744073709551615UL,0x36L},{0xBEA1309D5D88C094L,-1L,1UL,4294967295UL,0xAB7383FEC8F87679L,9L},{18446744073709551608UL,0x613FF2566FD9FC82L,1UL,4294967295UL,18446744073709551615UL,0x36L}},{{18446744073709551608UL,0x613FF2566FD9FC82L,1UL,4294967295UL,18446744073709551615UL,0x36L},{0xBEA1309D5D88C094L,-1L,1UL,4294967295UL,0xAB7383FEC8F87679L,9L},{18446744073709551608UL,0x613FF2566FD9FC82L,1UL,4294967295UL,18446744073709551615UL,0x36L}},{{18446744073709551608UL,0x613FF2566FD9FC82L,1UL,4294967295UL,18446744073709551615UL,0x36L},{0xBEA1309D5D88C094L,-1L,1UL,4294967295UL,0xAB7383FEC8F87679L,9L},{18446744073709551608UL,0x613FF2566FD9FC82L,1UL,4294967295UL,18446744073709551615UL,0x36L}}}, // p_1002->g_816
        (VECTOR(int64_t, 4))(0x2C3544079A6410EEL, (VECTOR(int64_t, 2))(0x2C3544079A6410EEL, 0x5859201CB55387EAL), 0x5859201CB55387EAL), // p_1002->g_832
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x03L), 0x03L), 0x03L, 0L, 0x03L), // p_1002->g_891
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L), // p_1002->g_892
        (VECTOR(uint8_t, 2))(0xB2L, 0UL), // p_1002->g_922
        &p_1002->g_649, // p_1002->g_924
        0, // p_1002->v_collective
        sequence_input[get_global_id(0)], // p_1002->global_0_offset
        sequence_input[get_global_id(1)], // p_1002->global_1_offset
        sequence_input[get_global_id(2)], // p_1002->global_2_offset
        sequence_input[get_local_id(0)], // p_1002->local_0_offset
        sequence_input[get_local_id(1)], // p_1002->local_1_offset
        sequence_input[get_local_id(2)], // p_1002->local_2_offset
        sequence_input[get_group_id(0)], // p_1002->group_0_offset
        sequence_input[get_group_id(1)], // p_1002->group_1_offset
        sequence_input[get_group_id(2)], // p_1002->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 80)), permutations[0][get_linear_local_id()])), // p_1002->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1003 = c_1004;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1002);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1002->g_13, "p_1002->g_13", print_hash_value);
    transparent_crc(p_1002->g_43, "p_1002->g_43", print_hash_value);
    transparent_crc(p_1002->g_44, "p_1002->g_44", print_hash_value);
    transparent_crc(p_1002->g_53, "p_1002->g_53", print_hash_value);
    transparent_crc(p_1002->g_62, "p_1002->g_62", print_hash_value);
    transparent_crc(p_1002->g_75.f0, "p_1002->g_75.f0", print_hash_value);
    transparent_crc(p_1002->g_75.f1, "p_1002->g_75.f1", print_hash_value);
    transparent_crc(p_1002->g_75.f2, "p_1002->g_75.f2", print_hash_value);
    transparent_crc(p_1002->g_75.f3, "p_1002->g_75.f3", print_hash_value);
    transparent_crc(p_1002->g_75.f4, "p_1002->g_75.f4", print_hash_value);
    transparent_crc(p_1002->g_75.f5, "p_1002->g_75.f5", print_hash_value);
    transparent_crc(p_1002->g_75.f6.f0, "p_1002->g_75.f6.f0", print_hash_value);
    transparent_crc(p_1002->g_75.f6.f1, "p_1002->g_75.f6.f1", print_hash_value);
    transparent_crc(p_1002->g_75.f6.f2, "p_1002->g_75.f6.f2", print_hash_value);
    transparent_crc(p_1002->g_75.f6.f3, "p_1002->g_75.f6.f3", print_hash_value);
    transparent_crc(p_1002->g_75.f6.f4, "p_1002->g_75.f6.f4", print_hash_value);
    transparent_crc(p_1002->g_75.f6.f5, "p_1002->g_75.f6.f5", print_hash_value);
    transparent_crc(p_1002->g_78.f0, "p_1002->g_78.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1002->g_80[i], "p_1002->g_80[i]", print_hash_value);

    }
    transparent_crc(p_1002->g_99.x, "p_1002->g_99.x", print_hash_value);
    transparent_crc(p_1002->g_99.y, "p_1002->g_99.y", print_hash_value);
    transparent_crc(p_1002->g_105.f0, "p_1002->g_105.f0", print_hash_value);
    transparent_crc(p_1002->g_105.f1, "p_1002->g_105.f1", print_hash_value);
    transparent_crc(p_1002->g_105.f2, "p_1002->g_105.f2", print_hash_value);
    transparent_crc(p_1002->g_105.f3, "p_1002->g_105.f3", print_hash_value);
    transparent_crc(p_1002->g_105.f4, "p_1002->g_105.f4", print_hash_value);
    transparent_crc(p_1002->g_105.f5, "p_1002->g_105.f5", print_hash_value);
    transparent_crc(p_1002->g_108.x, "p_1002->g_108.x", print_hash_value);
    transparent_crc(p_1002->g_108.y, "p_1002->g_108.y", print_hash_value);
    transparent_crc(p_1002->g_108.z, "p_1002->g_108.z", print_hash_value);
    transparent_crc(p_1002->g_108.w, "p_1002->g_108.w", print_hash_value);
    transparent_crc(p_1002->g_109.s0, "p_1002->g_109.s0", print_hash_value);
    transparent_crc(p_1002->g_109.s1, "p_1002->g_109.s1", print_hash_value);
    transparent_crc(p_1002->g_109.s2, "p_1002->g_109.s2", print_hash_value);
    transparent_crc(p_1002->g_109.s3, "p_1002->g_109.s3", print_hash_value);
    transparent_crc(p_1002->g_109.s4, "p_1002->g_109.s4", print_hash_value);
    transparent_crc(p_1002->g_109.s5, "p_1002->g_109.s5", print_hash_value);
    transparent_crc(p_1002->g_109.s6, "p_1002->g_109.s6", print_hash_value);
    transparent_crc(p_1002->g_109.s7, "p_1002->g_109.s7", print_hash_value);
    transparent_crc(p_1002->g_110.x, "p_1002->g_110.x", print_hash_value);
    transparent_crc(p_1002->g_110.y, "p_1002->g_110.y", print_hash_value);
    transparent_crc(p_1002->g_118.x, "p_1002->g_118.x", print_hash_value);
    transparent_crc(p_1002->g_118.y, "p_1002->g_118.y", print_hash_value);
    transparent_crc(p_1002->g_120.x, "p_1002->g_120.x", print_hash_value);
    transparent_crc(p_1002->g_120.y, "p_1002->g_120.y", print_hash_value);
    transparent_crc(p_1002->g_120.z, "p_1002->g_120.z", print_hash_value);
    transparent_crc(p_1002->g_120.w, "p_1002->g_120.w", print_hash_value);
    transparent_crc(p_1002->g_122.x, "p_1002->g_122.x", print_hash_value);
    transparent_crc(p_1002->g_122.y, "p_1002->g_122.y", print_hash_value);
    transparent_crc(p_1002->g_122.z, "p_1002->g_122.z", print_hash_value);
    transparent_crc(p_1002->g_122.w, "p_1002->g_122.w", print_hash_value);
    transparent_crc(p_1002->g_124.s0, "p_1002->g_124.s0", print_hash_value);
    transparent_crc(p_1002->g_124.s1, "p_1002->g_124.s1", print_hash_value);
    transparent_crc(p_1002->g_124.s2, "p_1002->g_124.s2", print_hash_value);
    transparent_crc(p_1002->g_124.s3, "p_1002->g_124.s3", print_hash_value);
    transparent_crc(p_1002->g_124.s4, "p_1002->g_124.s4", print_hash_value);
    transparent_crc(p_1002->g_124.s5, "p_1002->g_124.s5", print_hash_value);
    transparent_crc(p_1002->g_124.s6, "p_1002->g_124.s6", print_hash_value);
    transparent_crc(p_1002->g_124.s7, "p_1002->g_124.s7", print_hash_value);
    transparent_crc(p_1002->g_126.s0, "p_1002->g_126.s0", print_hash_value);
    transparent_crc(p_1002->g_126.s1, "p_1002->g_126.s1", print_hash_value);
    transparent_crc(p_1002->g_126.s2, "p_1002->g_126.s2", print_hash_value);
    transparent_crc(p_1002->g_126.s3, "p_1002->g_126.s3", print_hash_value);
    transparent_crc(p_1002->g_126.s4, "p_1002->g_126.s4", print_hash_value);
    transparent_crc(p_1002->g_126.s5, "p_1002->g_126.s5", print_hash_value);
    transparent_crc(p_1002->g_126.s6, "p_1002->g_126.s6", print_hash_value);
    transparent_crc(p_1002->g_126.s7, "p_1002->g_126.s7", print_hash_value);
    transparent_crc(p_1002->g_129.x, "p_1002->g_129.x", print_hash_value);
    transparent_crc(p_1002->g_129.y, "p_1002->g_129.y", print_hash_value);
    transparent_crc(p_1002->g_129.z, "p_1002->g_129.z", print_hash_value);
    transparent_crc(p_1002->g_129.w, "p_1002->g_129.w", print_hash_value);
    transparent_crc(p_1002->g_136.s0, "p_1002->g_136.s0", print_hash_value);
    transparent_crc(p_1002->g_136.s1, "p_1002->g_136.s1", print_hash_value);
    transparent_crc(p_1002->g_136.s2, "p_1002->g_136.s2", print_hash_value);
    transparent_crc(p_1002->g_136.s3, "p_1002->g_136.s3", print_hash_value);
    transparent_crc(p_1002->g_136.s4, "p_1002->g_136.s4", print_hash_value);
    transparent_crc(p_1002->g_136.s5, "p_1002->g_136.s5", print_hash_value);
    transparent_crc(p_1002->g_136.s6, "p_1002->g_136.s6", print_hash_value);
    transparent_crc(p_1002->g_136.s7, "p_1002->g_136.s7", print_hash_value);
    transparent_crc(p_1002->g_154, "p_1002->g_154", print_hash_value);
    transparent_crc(p_1002->g_156.x, "p_1002->g_156.x", print_hash_value);
    transparent_crc(p_1002->g_156.y, "p_1002->g_156.y", print_hash_value);
    transparent_crc(p_1002->g_165.x, "p_1002->g_165.x", print_hash_value);
    transparent_crc(p_1002->g_165.y, "p_1002->g_165.y", print_hash_value);
    transparent_crc(p_1002->g_171.s0, "p_1002->g_171.s0", print_hash_value);
    transparent_crc(p_1002->g_171.s1, "p_1002->g_171.s1", print_hash_value);
    transparent_crc(p_1002->g_171.s2, "p_1002->g_171.s2", print_hash_value);
    transparent_crc(p_1002->g_171.s3, "p_1002->g_171.s3", print_hash_value);
    transparent_crc(p_1002->g_171.s4, "p_1002->g_171.s4", print_hash_value);
    transparent_crc(p_1002->g_171.s5, "p_1002->g_171.s5", print_hash_value);
    transparent_crc(p_1002->g_171.s6, "p_1002->g_171.s6", print_hash_value);
    transparent_crc(p_1002->g_171.s7, "p_1002->g_171.s7", print_hash_value);
    transparent_crc(p_1002->g_171.s8, "p_1002->g_171.s8", print_hash_value);
    transparent_crc(p_1002->g_171.s9, "p_1002->g_171.s9", print_hash_value);
    transparent_crc(p_1002->g_171.sa, "p_1002->g_171.sa", print_hash_value);
    transparent_crc(p_1002->g_171.sb, "p_1002->g_171.sb", print_hash_value);
    transparent_crc(p_1002->g_171.sc, "p_1002->g_171.sc", print_hash_value);
    transparent_crc(p_1002->g_171.sd, "p_1002->g_171.sd", print_hash_value);
    transparent_crc(p_1002->g_171.se, "p_1002->g_171.se", print_hash_value);
    transparent_crc(p_1002->g_171.sf, "p_1002->g_171.sf", print_hash_value);
    transparent_crc(p_1002->g_204.x, "p_1002->g_204.x", print_hash_value);
    transparent_crc(p_1002->g_204.y, "p_1002->g_204.y", print_hash_value);
    transparent_crc(p_1002->g_204.z, "p_1002->g_204.z", print_hash_value);
    transparent_crc(p_1002->g_204.w, "p_1002->g_204.w", print_hash_value);
    transparent_crc(p_1002->g_238.s0, "p_1002->g_238.s0", print_hash_value);
    transparent_crc(p_1002->g_238.s1, "p_1002->g_238.s1", print_hash_value);
    transparent_crc(p_1002->g_238.s2, "p_1002->g_238.s2", print_hash_value);
    transparent_crc(p_1002->g_238.s3, "p_1002->g_238.s3", print_hash_value);
    transparent_crc(p_1002->g_238.s4, "p_1002->g_238.s4", print_hash_value);
    transparent_crc(p_1002->g_238.s5, "p_1002->g_238.s5", print_hash_value);
    transparent_crc(p_1002->g_238.s6, "p_1002->g_238.s6", print_hash_value);
    transparent_crc(p_1002->g_238.s7, "p_1002->g_238.s7", print_hash_value);
    transparent_crc(p_1002->g_248.x, "p_1002->g_248.x", print_hash_value);
    transparent_crc(p_1002->g_248.y, "p_1002->g_248.y", print_hash_value);
    transparent_crc(p_1002->g_249.f0, "p_1002->g_249.f0", print_hash_value);
    transparent_crc(p_1002->g_249.f1, "p_1002->g_249.f1", print_hash_value);
    transparent_crc(p_1002->g_249.f2, "p_1002->g_249.f2", print_hash_value);
    transparent_crc(p_1002->g_249.f3, "p_1002->g_249.f3", print_hash_value);
    transparent_crc(p_1002->g_249.f4, "p_1002->g_249.f4", print_hash_value);
    transparent_crc(p_1002->g_249.f5, "p_1002->g_249.f5", print_hash_value);
    transparent_crc(p_1002->g_249.f6.f0, "p_1002->g_249.f6.f0", print_hash_value);
    transparent_crc(p_1002->g_249.f6.f1, "p_1002->g_249.f6.f1", print_hash_value);
    transparent_crc(p_1002->g_249.f6.f2, "p_1002->g_249.f6.f2", print_hash_value);
    transparent_crc(p_1002->g_249.f6.f3, "p_1002->g_249.f6.f3", print_hash_value);
    transparent_crc(p_1002->g_249.f6.f4, "p_1002->g_249.f6.f4", print_hash_value);
    transparent_crc(p_1002->g_249.f6.f5, "p_1002->g_249.f6.f5", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1002->g_253[i], "p_1002->g_253[i]", print_hash_value);

    }
    transparent_crc(p_1002->g_273, "p_1002->g_273", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1002->g_298[i], "p_1002->g_298[i]", print_hash_value);

    }
    transparent_crc(p_1002->g_364.f0, "p_1002->g_364.f0", print_hash_value);
    transparent_crc(p_1002->g_364.f1, "p_1002->g_364.f1", print_hash_value);
    transparent_crc(p_1002->g_364.f2, "p_1002->g_364.f2", print_hash_value);
    transparent_crc(p_1002->g_364.f3, "p_1002->g_364.f3", print_hash_value);
    transparent_crc(p_1002->g_364.f4, "p_1002->g_364.f4", print_hash_value);
    transparent_crc(p_1002->g_364.f5, "p_1002->g_364.f5", print_hash_value);
    transparent_crc(p_1002->g_377.f0, "p_1002->g_377.f0", print_hash_value);
    transparent_crc(p_1002->g_419.x, "p_1002->g_419.x", print_hash_value);
    transparent_crc(p_1002->g_419.y, "p_1002->g_419.y", print_hash_value);
    transparent_crc(p_1002->g_419.z, "p_1002->g_419.z", print_hash_value);
    transparent_crc(p_1002->g_419.w, "p_1002->g_419.w", print_hash_value);
    transparent_crc(p_1002->g_428.x, "p_1002->g_428.x", print_hash_value);
    transparent_crc(p_1002->g_428.y, "p_1002->g_428.y", print_hash_value);
    transparent_crc(p_1002->g_428.z, "p_1002->g_428.z", print_hash_value);
    transparent_crc(p_1002->g_428.w, "p_1002->g_428.w", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1002->g_433[i][j], "p_1002->g_433[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1002->g_437.s0, "p_1002->g_437.s0", print_hash_value);
    transparent_crc(p_1002->g_437.s1, "p_1002->g_437.s1", print_hash_value);
    transparent_crc(p_1002->g_437.s2, "p_1002->g_437.s2", print_hash_value);
    transparent_crc(p_1002->g_437.s3, "p_1002->g_437.s3", print_hash_value);
    transparent_crc(p_1002->g_437.s4, "p_1002->g_437.s4", print_hash_value);
    transparent_crc(p_1002->g_437.s5, "p_1002->g_437.s5", print_hash_value);
    transparent_crc(p_1002->g_437.s6, "p_1002->g_437.s6", print_hash_value);
    transparent_crc(p_1002->g_437.s7, "p_1002->g_437.s7", print_hash_value);
    transparent_crc(p_1002->g_437.s8, "p_1002->g_437.s8", print_hash_value);
    transparent_crc(p_1002->g_437.s9, "p_1002->g_437.s9", print_hash_value);
    transparent_crc(p_1002->g_437.sa, "p_1002->g_437.sa", print_hash_value);
    transparent_crc(p_1002->g_437.sb, "p_1002->g_437.sb", print_hash_value);
    transparent_crc(p_1002->g_437.sc, "p_1002->g_437.sc", print_hash_value);
    transparent_crc(p_1002->g_437.sd, "p_1002->g_437.sd", print_hash_value);
    transparent_crc(p_1002->g_437.se, "p_1002->g_437.se", print_hash_value);
    transparent_crc(p_1002->g_437.sf, "p_1002->g_437.sf", print_hash_value);
    transparent_crc(p_1002->g_468.s0, "p_1002->g_468.s0", print_hash_value);
    transparent_crc(p_1002->g_468.s1, "p_1002->g_468.s1", print_hash_value);
    transparent_crc(p_1002->g_468.s2, "p_1002->g_468.s2", print_hash_value);
    transparent_crc(p_1002->g_468.s3, "p_1002->g_468.s3", print_hash_value);
    transparent_crc(p_1002->g_468.s4, "p_1002->g_468.s4", print_hash_value);
    transparent_crc(p_1002->g_468.s5, "p_1002->g_468.s5", print_hash_value);
    transparent_crc(p_1002->g_468.s6, "p_1002->g_468.s6", print_hash_value);
    transparent_crc(p_1002->g_468.s7, "p_1002->g_468.s7", print_hash_value);
    transparent_crc(p_1002->g_486, "p_1002->g_486", print_hash_value);
    transparent_crc(p_1002->g_572.f0, "p_1002->g_572.f0", print_hash_value);
    transparent_crc(p_1002->g_572.f1, "p_1002->g_572.f1", print_hash_value);
    transparent_crc(p_1002->g_572.f2, "p_1002->g_572.f2", print_hash_value);
    transparent_crc(p_1002->g_572.f3, "p_1002->g_572.f3", print_hash_value);
    transparent_crc(p_1002->g_572.f4, "p_1002->g_572.f4", print_hash_value);
    transparent_crc(p_1002->g_572.f5, "p_1002->g_572.f5", print_hash_value);
    transparent_crc(p_1002->g_572.f6.f0, "p_1002->g_572.f6.f0", print_hash_value);
    transparent_crc(p_1002->g_572.f6.f1, "p_1002->g_572.f6.f1", print_hash_value);
    transparent_crc(p_1002->g_572.f6.f2, "p_1002->g_572.f6.f2", print_hash_value);
    transparent_crc(p_1002->g_572.f6.f3, "p_1002->g_572.f6.f3", print_hash_value);
    transparent_crc(p_1002->g_572.f6.f4, "p_1002->g_572.f6.f4", print_hash_value);
    transparent_crc(p_1002->g_572.f6.f5, "p_1002->g_572.f6.f5", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1002->g_573[i][j][k].f0, "p_1002->g_573[i][j][k].f0", print_hash_value);
                transparent_crc(p_1002->g_573[i][j][k].f1, "p_1002->g_573[i][j][k].f1", print_hash_value);
                transparent_crc(p_1002->g_573[i][j][k].f2, "p_1002->g_573[i][j][k].f2", print_hash_value);
                transparent_crc(p_1002->g_573[i][j][k].f3, "p_1002->g_573[i][j][k].f3", print_hash_value);
                transparent_crc(p_1002->g_573[i][j][k].f4, "p_1002->g_573[i][j][k].f4", print_hash_value);
                transparent_crc(p_1002->g_573[i][j][k].f5, "p_1002->g_573[i][j][k].f5", print_hash_value);
                transparent_crc(p_1002->g_573[i][j][k].f6.f0, "p_1002->g_573[i][j][k].f6.f0", print_hash_value);
                transparent_crc(p_1002->g_573[i][j][k].f6.f1, "p_1002->g_573[i][j][k].f6.f1", print_hash_value);
                transparent_crc(p_1002->g_573[i][j][k].f6.f2, "p_1002->g_573[i][j][k].f6.f2", print_hash_value);
                transparent_crc(p_1002->g_573[i][j][k].f6.f3, "p_1002->g_573[i][j][k].f6.f3", print_hash_value);
                transparent_crc(p_1002->g_573[i][j][k].f6.f4, "p_1002->g_573[i][j][k].f6.f4", print_hash_value);
                transparent_crc(p_1002->g_573[i][j][k].f6.f5, "p_1002->g_573[i][j][k].f6.f5", print_hash_value);

            }
        }
    }
    transparent_crc(p_1002->g_592, "p_1002->g_592", print_hash_value);
    transparent_crc(p_1002->g_602.s0, "p_1002->g_602.s0", print_hash_value);
    transparent_crc(p_1002->g_602.s1, "p_1002->g_602.s1", print_hash_value);
    transparent_crc(p_1002->g_602.s2, "p_1002->g_602.s2", print_hash_value);
    transparent_crc(p_1002->g_602.s3, "p_1002->g_602.s3", print_hash_value);
    transparent_crc(p_1002->g_602.s4, "p_1002->g_602.s4", print_hash_value);
    transparent_crc(p_1002->g_602.s5, "p_1002->g_602.s5", print_hash_value);
    transparent_crc(p_1002->g_602.s6, "p_1002->g_602.s6", print_hash_value);
    transparent_crc(p_1002->g_602.s7, "p_1002->g_602.s7", print_hash_value);
    transparent_crc(p_1002->g_620, "p_1002->g_620", print_hash_value);
    transparent_crc(p_1002->g_638.x, "p_1002->g_638.x", print_hash_value);
    transparent_crc(p_1002->g_638.y, "p_1002->g_638.y", print_hash_value);
    transparent_crc(p_1002->g_653.f0, "p_1002->g_653.f0", print_hash_value);
    transparent_crc(p_1002->g_653.f1, "p_1002->g_653.f1", print_hash_value);
    transparent_crc(p_1002->g_653.f2, "p_1002->g_653.f2", print_hash_value);
    transparent_crc(p_1002->g_653.f3, "p_1002->g_653.f3", print_hash_value);
    transparent_crc(p_1002->g_653.f4, "p_1002->g_653.f4", print_hash_value);
    transparent_crc(p_1002->g_653.f5, "p_1002->g_653.f5", print_hash_value);
    transparent_crc(p_1002->g_653.f6.f0, "p_1002->g_653.f6.f0", print_hash_value);
    transparent_crc(p_1002->g_653.f6.f1, "p_1002->g_653.f6.f1", print_hash_value);
    transparent_crc(p_1002->g_653.f6.f2, "p_1002->g_653.f6.f2", print_hash_value);
    transparent_crc(p_1002->g_653.f6.f3, "p_1002->g_653.f6.f3", print_hash_value);
    transparent_crc(p_1002->g_653.f6.f4, "p_1002->g_653.f6.f4", print_hash_value);
    transparent_crc(p_1002->g_653.f6.f5, "p_1002->g_653.f6.f5", print_hash_value);
    transparent_crc(p_1002->g_701.s0, "p_1002->g_701.s0", print_hash_value);
    transparent_crc(p_1002->g_701.s1, "p_1002->g_701.s1", print_hash_value);
    transparent_crc(p_1002->g_701.s2, "p_1002->g_701.s2", print_hash_value);
    transparent_crc(p_1002->g_701.s3, "p_1002->g_701.s3", print_hash_value);
    transparent_crc(p_1002->g_701.s4, "p_1002->g_701.s4", print_hash_value);
    transparent_crc(p_1002->g_701.s5, "p_1002->g_701.s5", print_hash_value);
    transparent_crc(p_1002->g_701.s6, "p_1002->g_701.s6", print_hash_value);
    transparent_crc(p_1002->g_701.s7, "p_1002->g_701.s7", print_hash_value);
    transparent_crc(p_1002->g_795, "p_1002->g_795", print_hash_value);
    transparent_crc(p_1002->g_802, "p_1002->g_802", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1002->g_816[i][j].f0, "p_1002->g_816[i][j].f0", print_hash_value);
            transparent_crc(p_1002->g_816[i][j].f1, "p_1002->g_816[i][j].f1", print_hash_value);
            transparent_crc(p_1002->g_816[i][j].f2, "p_1002->g_816[i][j].f2", print_hash_value);
            transparent_crc(p_1002->g_816[i][j].f3, "p_1002->g_816[i][j].f3", print_hash_value);
            transparent_crc(p_1002->g_816[i][j].f4, "p_1002->g_816[i][j].f4", print_hash_value);
            transparent_crc(p_1002->g_816[i][j].f5, "p_1002->g_816[i][j].f5", print_hash_value);

        }
    }
    transparent_crc(p_1002->g_832.x, "p_1002->g_832.x", print_hash_value);
    transparent_crc(p_1002->g_832.y, "p_1002->g_832.y", print_hash_value);
    transparent_crc(p_1002->g_832.z, "p_1002->g_832.z", print_hash_value);
    transparent_crc(p_1002->g_832.w, "p_1002->g_832.w", print_hash_value);
    transparent_crc(p_1002->g_891.s0, "p_1002->g_891.s0", print_hash_value);
    transparent_crc(p_1002->g_891.s1, "p_1002->g_891.s1", print_hash_value);
    transparent_crc(p_1002->g_891.s2, "p_1002->g_891.s2", print_hash_value);
    transparent_crc(p_1002->g_891.s3, "p_1002->g_891.s3", print_hash_value);
    transparent_crc(p_1002->g_891.s4, "p_1002->g_891.s4", print_hash_value);
    transparent_crc(p_1002->g_891.s5, "p_1002->g_891.s5", print_hash_value);
    transparent_crc(p_1002->g_891.s6, "p_1002->g_891.s6", print_hash_value);
    transparent_crc(p_1002->g_891.s7, "p_1002->g_891.s7", print_hash_value);
    transparent_crc(p_1002->g_892.s0, "p_1002->g_892.s0", print_hash_value);
    transparent_crc(p_1002->g_892.s1, "p_1002->g_892.s1", print_hash_value);
    transparent_crc(p_1002->g_892.s2, "p_1002->g_892.s2", print_hash_value);
    transparent_crc(p_1002->g_892.s3, "p_1002->g_892.s3", print_hash_value);
    transparent_crc(p_1002->g_892.s4, "p_1002->g_892.s4", print_hash_value);
    transparent_crc(p_1002->g_892.s5, "p_1002->g_892.s5", print_hash_value);
    transparent_crc(p_1002->g_892.s6, "p_1002->g_892.s6", print_hash_value);
    transparent_crc(p_1002->g_892.s7, "p_1002->g_892.s7", print_hash_value);
    transparent_crc(p_1002->g_922.x, "p_1002->g_922.x", print_hash_value);
    transparent_crc(p_1002->g_922.y, "p_1002->g_922.y", print_hash_value);
    transparent_crc(p_1002->v_collective, "p_1002->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 52; i++)
            transparent_crc(p_1002->l_special_values[i], "p_1002->l_special_values[i]", print_hash_value);
    transparent_crc(p_1002->l_comm_values[get_linear_local_id()], "p_1002->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1002->g_comm_values[get_linear_group_id() * 80 + get_linear_local_id()], "p_1002->g_comm_values[get_linear_group_id() * 80 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
