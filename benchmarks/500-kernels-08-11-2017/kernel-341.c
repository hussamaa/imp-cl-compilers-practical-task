// --atomics 86 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 55,93,1 -l 55,1,1
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
{7,0,47,3,4,35,28,34,2,5,41,27,53,21,8,51,12,10,52,23,36,17,32,16,31,19,15,20,54,49,33,40,22,26,45,14,44,42,50,43,39,11,30,6,1,9,18,38,13,48,24,46,29,25,37}, // permutation 0
{4,42,13,33,3,15,48,46,36,34,54,2,6,44,23,24,26,32,12,39,49,53,43,41,30,35,28,31,52,25,0,14,50,27,22,19,5,38,18,11,40,37,9,21,7,1,51,10,29,47,45,17,8,20,16}, // permutation 1
{14,13,34,3,16,44,9,46,10,30,54,19,26,52,48,5,23,11,1,7,12,51,29,28,25,32,37,18,31,36,40,15,33,6,50,2,4,47,38,21,22,27,39,20,0,41,53,49,42,43,24,45,8,35,17}, // permutation 2
{6,48,25,28,31,38,11,32,17,50,2,15,45,7,13,23,9,16,47,34,53,42,3,18,22,52,40,30,35,1,20,39,0,51,29,43,37,19,26,33,21,41,36,14,8,4,54,5,27,46,24,44,10,12,49}, // permutation 3
{46,54,39,21,12,30,43,13,33,0,10,51,16,23,31,35,28,7,24,6,15,29,3,25,37,52,49,1,41,2,22,18,11,17,4,50,42,34,26,8,27,20,45,14,48,47,36,38,9,32,40,19,44,5,53}, // permutation 4
{6,19,33,40,8,5,12,27,18,36,16,21,1,23,2,10,4,51,43,53,35,24,49,15,44,17,13,9,7,14,32,34,41,26,47,50,22,37,46,20,11,3,38,42,25,52,29,0,31,28,30,54,45,39,48}, // permutation 5
{16,11,12,18,6,50,36,5,39,41,24,54,40,13,52,43,44,17,25,45,3,53,22,33,1,35,28,30,31,37,9,32,2,48,21,29,47,20,38,26,7,10,51,49,34,19,14,42,8,15,4,0,23,27,46}, // permutation 6
{32,2,38,16,48,19,33,12,21,50,51,15,40,49,44,5,43,28,35,26,52,53,18,45,8,29,4,47,13,10,9,25,46,30,27,17,54,0,3,14,37,22,7,41,39,36,1,24,42,11,23,20,6,31,34}, // permutation 7
{25,7,22,10,29,50,31,51,49,9,24,41,4,47,53,37,52,33,32,35,5,11,36,20,45,21,8,40,6,14,54,19,15,30,46,38,12,39,48,13,27,43,18,2,16,26,1,42,28,0,34,3,17,23,44}, // permutation 8
{27,31,47,48,50,51,45,35,14,15,39,16,38,4,1,5,6,54,30,37,17,36,49,2,46,13,9,8,18,43,28,41,29,26,40,21,52,0,3,53,44,32,42,7,24,12,25,34,10,11,20,23,22,19,33} // permutation 9
};

// Seed: 1669715192

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int8_t * volatile  f0;
   int8_t * volatile  f1;
   int32_t  f2;
   volatile int64_t  f3;
};

union U1 {
   uint64_t  f0;
   int8_t * f1;
   volatile int32_t  f2;
   uint64_t  f3;
};

union U2 {
   int8_t * f0;
   uint16_t  f1;
};

struct S3 {
    VECTOR(int64_t, 2) g_4;
    int8_t g_7[8];
    int32_t g_31;
    uint8_t g_33;
    uint32_t g_44;
    int64_t g_56;
    int32_t g_58;
    uint64_t g_64;
    volatile VECTOR(uint8_t, 8) g_77;
    VECTOR(int32_t, 2) g_86;
    uint64_t g_100;
    int16_t g_107;
    volatile int8_t g_117;
    volatile int8_t *g_116;
    volatile int8_t **g_115;
    int32_t g_119;
    VECTOR(uint64_t, 4) g_123;
    int8_t *g_129;
    int8_t **g_128;
    VECTOR(uint32_t, 16) g_135;
    volatile uint32_t g_144;
    volatile uint32_t g_145;
    volatile uint32_t g_146;
    volatile uint32_t g_147;
    volatile uint32_t g_148[8][4][5];
    volatile uint32_t g_149[7][1];
    volatile VECTOR(uint32_t, 2) g_150;
    volatile uint32_t g_151[9];
    volatile uint32_t g_152;
    volatile uint32_t g_153;
    volatile uint32_t g_154;
    volatile uint32_t g_155;
    volatile uint32_t g_156[3][1][9];
    volatile uint32_t g_157;
    volatile uint32_t g_158;
    volatile uint32_t g_159;
    volatile uint32_t g_160;
    volatile uint32_t g_161;
    volatile uint32_t g_162;
    volatile uint32_t g_163;
    volatile uint32_t g_164;
    volatile uint32_t g_165;
    volatile uint32_t g_166;
    volatile uint32_t g_167;
    volatile uint32_t g_168[2];
    volatile uint32_t g_169;
    volatile uint32_t g_170;
    volatile uint32_t g_171;
    volatile uint32_t g_172;
    volatile uint32_t g_173[9];
    volatile uint32_t g_174;
    volatile uint32_t g_175;
    volatile uint32_t g_176;
    volatile uint32_t g_177;
    volatile uint32_t g_178[2][9][10];
    volatile uint32_t g_179;
    volatile uint32_t g_180;
    volatile uint32_t g_181;
    volatile uint32_t g_182;
    volatile uint32_t g_183;
    volatile uint32_t g_184;
    volatile uint32_t g_185[3][6][3];
    volatile uint32_t g_186;
    volatile uint32_t g_187;
    volatile uint32_t g_188;
    volatile uint32_t g_189;
    volatile uint32_t g_190;
    volatile uint32_t *g_143[6][2][10];
    volatile int32_t g_200[3][6][2];
    volatile int32_t * volatile g_199;
    VECTOR(int8_t, 16) g_229;
    VECTOR(int8_t, 16) g_230;
    int32_t *g_262;
    int32_t ** volatile g_261;
    int64_t *g_297[10];
    int64_t **g_296[10][6][4];
    int64_t *** volatile g_295[1][6];
    uint8_t g_328;
    union U0 g_341[2][7];
    int16_t g_345;
    union U2 g_350;
    uint32_t *g_384;
    uint32_t **g_383[3][2];
    int32_t g_396[7];
    volatile VECTOR(int32_t, 2) g_399;
    int32_t g_418;
    int8_t g_421[3];
    int32_t **g_532;
    VECTOR(uint32_t, 2) g_558;
    VECTOR(uint32_t, 16) g_560;
    VECTOR(uint32_t, 4) g_561;
    union U1 g_563;
    VECTOR(uint16_t, 16) g_573;
    volatile VECTOR(uint8_t, 4) g_609;
    VECTOR(int8_t, 8) g_612;
    volatile union U2 g_693[5];
    volatile union U2 *g_692[7][4];
    VECTOR(int32_t, 4) g_729;
    uint32_t g_767;
    VECTOR(int16_t, 4) g_775;
    volatile VECTOR(int8_t, 16) g_776;
    VECTOR(uint8_t, 8) g_785;
    uint64_t *g_796[4];
    int8_t g_817;
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
uint8_t  func_1(struct S3 * p_840);
uint8_t  func_9(int8_t * p_10, int64_t  p_11, uint64_t  p_12, int8_t * p_13, struct S3 * p_840);
int8_t * func_14(int8_t * p_15, int8_t * p_16, int32_t  p_17, int8_t * p_18, int32_t  p_19, struct S3 * p_840);
int8_t * func_20(int8_t * p_21, struct S3 * p_840);
int8_t * func_22(int8_t  p_23, uint32_t  p_24, int8_t * p_25, struct S3 * p_840);
int32_t  func_26(int8_t * p_27, int8_t  p_28, struct S3 * p_840);
int32_t * func_36(int64_t  p_37, uint32_t  p_38, int32_t  p_39, uint64_t  p_40, uint64_t  p_41, struct S3 * p_840);
int8_t * func_51(int64_t  p_52, int8_t * p_53, int32_t * p_54, struct S3 * p_840);
uint32_t  func_78(int64_t  p_79, uint64_t * p_80, int32_t  p_81, int8_t ** p_82, uint64_t  p_83, struct S3 * p_840);
int64_t  func_84(uint32_t  p_85, struct S3 * p_840);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_840->l_comm_values p_840->g_4 p_840->g_7 p_840->g_33 p_840->g_44 p_840->g_31 p_840->g_58 p_840->g_77 p_840->g_64 p_840->g_86 p_840->g_comm_values p_840->g_107 p_840->g_56 p_840->g_115 p_840->g_123 p_840->g_128 p_840->g_135 p_840->g_129 p_840->g_143 p_840->g_158 p_840->g_199 p_840->g_200 p_840->g_229 p_840->g_230 p_840->g_261 p_840->g_262 p_840->g_341 p_840->g_383 p_840->g_396 p_840->g_399 p_840->g_116 p_840->g_117 p_840->g_175 p_840->g_532 p_840->g_418 p_840->g_558 p_840->g_560 p_840->g_561 p_840->g_563.f0 p_840->g_573 p_840->g_153 p_840->g_421 p_840->g_609 p_840->g_612 p_840->g_563 p_840->g_149 p_840->g_146 p_840->g_188 p_840->g_345 p_840->g_173 p_840->g_100 p_840->g_692 p_840->g_119 p_840->g_729 p_840->g_145 p_840->g_328 p_840->g_775 p_840->g_776 p_840->g_785 p_840->g_148 p_840->g_384 p_840->g_159 p_840->g_184
 * writes: p_840->g_33 p_840->g_44 p_840->g_56 p_840->g_58 p_840->g_64 p_840->g_31 p_840->g_107 p_840->g_86 p_840->g_7 p_840->g_135 p_840->g_200 p_840->g_262 p_840->g_328 p_840->g_345 p_840->g_383 p_840->g_350.f1 p_840->g_100 p_840->g_119 p_840->g_573 p_840->g_767 p_840->g_796
 */
uint8_t  func_1(struct S3 * p_840)
{ /* block id: 4 */
    uint8_t l_5 = 0xF1L;
    int8_t *l_6[1];
    uint16_t l_8 = 65534UL;
    int32_t l_29[2][4][10] = {{{0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L,0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L},{0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L,0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L},{0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L,0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L},{0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L,0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L}},{{0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L,0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L},{0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L,0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L},{0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L,0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L},{0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L,0x5BB7A2E2L,0x18C245E3L,0x0525C7E4L,0x18C245E3L,0x5BB7A2E2L}}};
    int64_t l_823 = (-1L);
    uint64_t l_824 = 0xE079C82EA4215CD5L;
    VECTOR(int8_t, 16) l_831 = (VECTOR(int8_t, 16))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 1L), 1L), 1L, 6L, 1L, (VECTOR(int8_t, 2))(6L, 1L), (VECTOR(int8_t, 2))(6L, 1L), 6L, 1L, 6L, 1L);
    VECTOR(uint8_t, 8) l_834 = (VECTOR(uint8_t, 8))(0x6CL, (VECTOR(uint8_t, 4))(0x6CL, (VECTOR(uint8_t, 2))(0x6CL, 9UL), 9UL), 9UL, 0x6CL, 9UL);
    int32_t *l_835 = &l_29[1][1][3];
    uint64_t *l_838 = &p_840->g_100;
    int32_t *l_839[2];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_6[i] = &p_840->g_7[0];
    for (i = 0; i < 2; i++)
        l_839[i] = &p_840->g_31;
    l_29[1][1][3] = ((safe_lshift_func_uint8_t_u_s(((p_840->l_comm_values[(safe_mod_func_uint32_t_u_u(p_840->tid, 55))] <= ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_840->g_4.xyyx)).yxywwzyzxyxxyxxx)).s0) ^ (((((FAKE_DIVERGE(p_840->global_2_offset, get_global_id(2), 10) == 18446744073709551615UL) || (l_5 , (+((l_6[0] != &p_840->g_7[1]) == l_8)))) , l_8) > (func_9(func_14(func_20(func_22((l_29[1][1][3] = ((func_26(&p_840->g_7[1], (p_840->g_7[6] || l_5), p_840) <= l_29[1][1][3]) | 0x9AL)), p_840->g_7[4], &p_840->g_7[2], p_840), p_840), l_6[0], p_840->l_comm_values[(safe_mod_func_uint32_t_u_u(p_840->tid, 55))], l_6[0], p_840->g_563.f0, p_840), l_5, l_8, l_6[0], p_840) , p_840->g_159)) >= 0xA804L)), 0)) != 250UL);
    l_824 = l_823;
    p_840->g_58 ^= (safe_lshift_func_uint16_t_u_s(FAKE_DIVERGE(p_840->group_0_offset, get_group_id(0), 10), (l_5 == (safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_840->group_0_offset, get_group_id(0), 10), ((p_840->g_184 >= l_5) & ((0x10L != ((((*l_838) &= (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_831.s1923cb0a)))).s4, (safe_sub_func_int32_t_s_s(l_823, (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_834.s4263)).xzxzxwxywxyyzyxy)).s2 && ((*p_840->g_129) = (((((*l_835) = (0x84603F4AL <= l_831.sb)) == ((VECTOR(int32_t, 4))(0x6EE926F2L, ((VECTOR(int32_t, 2))(0x56AD15B7L, 0x15EF2813L)), 0x7C8F18BBL)).w) || (safe_mul_func_uint8_t_u_u((p_840->g_44 | ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x13L, 0x5BL)).xyyyxyyy)).s4), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(2L, 0L)), 9L, (-7L))).yxxzyyzzyyyxwwyx)).sdd)).lo))) | (0x969B80CAL & l_834.s2))))))))) & p_840->g_86.x) && (*l_835))) < l_831.se)))))));
    return p_840->g_729.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_776 p_840->g_421 p_840->g_785 p_840->g_262 p_840->g_31 p_840->g_7 p_840->g_199 p_840->g_200 p_840->g_532 p_840->g_4 p_840->g_148 p_840->g_86 p_840->g_58 p_840->g_123 p_840->g_775 p_840->g_128 p_840->g_129 p_840->g_384 p_840->g_64 p_840->g_33 p_840->g_115 p_840->g_44 p_840->g_56 p_840->g_158 p_840->g_comm_values
 * writes: p_840->g_31 p_840->g_200 p_840->g_796 p_840->g_345 p_840->g_44 p_840->g_33 p_840->g_86 p_840->g_262
 */
uint8_t  func_9(int8_t * p_10, int64_t  p_11, uint64_t  p_12, int8_t * p_13, struct S3 * p_840)
{ /* block id: 311 */
    union U2 *l_781[4];
    union U2 *l_782 = &p_840->g_350;
    int32_t *l_784 = &p_840->g_396[0];
    int32_t **l_783[2];
    int32_t l_788 = (-6L);
    VECTOR(int32_t, 8) l_799 = (VECTOR(int32_t, 8))(0x6AD87071L, (VECTOR(int32_t, 4))(0x6AD87071L, (VECTOR(int32_t, 2))(0x6AD87071L, 1L), 1L), 1L, 0x6AD87071L, 1L);
    int8_t l_819 = 0L;
    uint32_t l_820 = 0x331D4EE9L;
    int i;
    for (i = 0; i < 4; i++)
        l_781[i] = &p_840->g_350;
    for (i = 0; i < 2; i++)
        l_783[i] = &l_784;
    if ((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_840->g_776.s285abfc3)).s05)).hi == (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((l_781[2] != l_782), 1)), 7))))
    { /* block id: 312 */
        uint16_t l_791 = 0UL;
        uint64_t *l_794 = &p_840->g_563.f0;
        uint64_t **l_795[6][8][5] = {{{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794}},{{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794}},{{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794}},{{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794}},{{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794}},{{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794},{&l_794,(void*)0,&l_794,&l_794,&l_794}}};
        int16_t *l_802 = (void*)0;
        int16_t *l_803 = &p_840->g_345;
        VECTOR(uint16_t, 4) l_810 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL);
        VECTOR(uint16_t, 2) l_811 = (VECTOR(uint16_t, 2))(0xDDF8L, 0UL);
        int i, j, k;
        (*p_840->g_199) ^= (((((void*)0 != &p_11) > (l_783[1] == (p_840->g_421[1] , (void*)0))) <= (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_840->g_785.s07)), 0xA0L, 255UL)).hi)).yxxyyxyy)).s65)).hi <= ((safe_add_func_uint32_t_u_u((((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))((0x516EL ^ ((l_788 <= ((*p_840->g_262) |= ((safe_mod_func_int64_t_s_s((0UL & 0x0F2E679FL), 18446744073709551615UL)) ^ l_791))) , p_12)), 0x16D7L, 0x712DL, 0xC743L)), 0xA3E8L, 0x4EB8L, 0x9725L, 8UL)).s3014601645337443, ((VECTOR(uint16_t, 16))(1UL))))).odd, ((VECTOR(uint16_t, 8))(9UL))))).s0 > (-7L)), l_791)) != 1UL))) >= (*p_13));
        (**p_840->g_532) = (4294967289UL <= ((1UL >= (((VECTOR(int8_t, 2))(0x61L, 0L)).odd & ((p_840->g_796[1] = l_794) != ((safe_lshift_func_int8_t_s_u(l_791, 1)) , &p_12)))) == ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x065E275AL, (-1L))).yxxxyxyx)).s76, ((VECTOR(int32_t, 2))(l_799.s04))))).hi));
        (*p_840->g_532) = func_36(((safe_rshift_func_uint8_t_u_s(p_11, 5)) && p_11), ((*p_840->g_384) = ((((p_11 >= ((*l_803) = 0x78CAL)) > p_840->g_4.x) | p_840->g_148[2][2][0]) | ((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((FAKE_DIVERGE(p_840->group_2_offset, get_group_id(2), 10) <= ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551613UL, 0UL)), 0xBDE26AF74BB2F070L, 3UL)).odd)).yyxxxxxxxxxxxyyy)).s0) <= (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_810.zxwy)), ((VECTOR(uint16_t, 8))(p_12, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 4))(l_811.xyyx)).yyxyxxzw, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))((p_11 == ((**p_840->g_532) = (safe_rshift_func_int8_t_s_u(((l_799.s0 > p_12) > p_840->g_86.y), p_840->g_58)))), 0xB5BBL, 1UL, p_12, l_799.s7, l_788, l_799.s3, ((VECTOR(uint16_t, 8))(3UL)), 0xC4F4L)).sbcef, ((VECTOR(uint16_t, 4))(65531UL)), ((VECTOR(uint16_t, 4))(1UL))))).y, ((VECTOR(uint16_t, 2))(0xC479L)), ((VECTOR(uint16_t, 4))(0UL)), 0xA276L))))), l_810.w, 0UL, ((VECTOR(uint16_t, 2))(0x869DL)), 0xBD29L, ((VECTOR(uint16_t, 2))(65535UL)), 0xC494L)).even)), ((VECTOR(uint16_t, 8))(0UL))))).s65, ((VECTOR(uint16_t, 2))(0x8742L))))).yxyyyxyxyyxxyxxx, ((VECTOR(uint16_t, 16))(0x0EAEL)), ((VECTOR(uint16_t, 16))(0UL))))).s2c)).xyyx)), p_12, 0x0B4BL, 0x1903L)), ((VECTOR(uint16_t, 2))(65530UL)), 1UL, 0x1B71L)).s8 == l_788)), p_840->g_86.x)), p_840->g_123.y)), p_840->g_775.z)), ((VECTOR(int8_t, 4))(9L)), 0x08L, 5L, 0x39L)).s1, 1L, (**p_840->g_128), (*p_13), l_799.s7, 0x38L, 0L, 5L)).s34))).xyyx))).x)), l_799.s2, p_12, l_810.z, p_840);
    }
    else
    { /* block id: 321 */
        int32_t *l_814 = &l_788;
        int32_t *l_815 = (void*)0;
        int32_t *l_816[2][4][3] = {{{(void*)0,(void*)0,&p_840->g_119},{(void*)0,(void*)0,&p_840->g_119},{(void*)0,(void*)0,&p_840->g_119},{(void*)0,(void*)0,&p_840->g_119}},{{(void*)0,(void*)0,&p_840->g_119},{(void*)0,(void*)0,&p_840->g_119},{(void*)0,(void*)0,&p_840->g_119},{(void*)0,(void*)0,&p_840->g_119}}};
        int32_t l_818 = 1L;
        int i, j, k;
        l_820++;
        (*p_840->g_532) = &l_818;
    }
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_573 p_840->g_341 p_840->g_153 p_840->g_421 p_840->g_262 p_840->g_31 p_840->g_86 p_840->g_532 p_840->g_609 p_840->g_612 p_840->g_7 p_840->g_123 p_840->g_563 p_840->g_149 p_840->g_146 p_840->g_188 p_840->g_345 p_840->g_44 p_840->g_173 p_840->g_129 p_840->g_115 p_840->g_116 p_840->g_117 p_840->g_229 p_840->g_128 p_840->g_399 p_840->g_100 p_840->g_692 p_840->g_558 p_840->g_396 p_840->g_4 p_840->g_64 p_840->g_33 p_840->g_56 p_840->g_158 p_840->g_199 p_840->g_200 p_840->g_comm_values p_840->g_58 p_840->g_119 p_840->g_729 p_840->g_135 p_840->g_145 p_840->g_328 p_840->g_775
 * writes: p_840->g_345 p_840->g_350.f1 p_840->g_31 p_840->g_86 p_840->g_7 p_840->g_100 p_840->g_119 p_840->g_44 p_840->g_33 p_840->g_200 p_840->g_262 p_840->g_573 p_840->g_767 p_840->g_328
 */
int8_t * func_14(int8_t * p_15, int8_t * p_16, int32_t  p_17, int8_t * p_18, int32_t  p_19, struct S3 * p_840)
{ /* block id: 220 */
    int16_t *l_587 = &p_840->g_345;
    int32_t l_591 = 0x68B91005L;
    int32_t l_592 = (-1L);
    int32_t l_593 = 0x293EBF78L;
    int32_t l_594[9];
    uint64_t l_595 = 18446744073709551611UL;
    int32_t l_700 = 0L;
    VECTOR(int32_t, 4) l_728 = (VECTOR(int32_t, 4))(0x49348319L, (VECTOR(int32_t, 2))(0x49348319L, 0x4E8EF0DBL), 0x4E8EF0DBL);
    union U1 *l_765 = (void*)0;
    union U1 **l_764 = &l_765;
    int i;
    for (i = 0; i < 9; i++)
        l_594[i] = 0x1E0CB7BCL;
    for (p_19 = 0; (p_19 < (-9)); p_19 = safe_sub_func_int16_t_s_s(p_19, 3))
    { /* block id: 223 */
        VECTOR(int32_t, 4) l_574 = (VECTOR(int32_t, 4))(0x5EB3D21AL, (VECTOR(int32_t, 2))(0x5EB3D21AL, 0L), 0L);
        uint32_t *l_583[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint8_t l_584 = 6UL;
        int16_t *l_588 = &p_840->g_345;
        uint16_t *l_589 = &p_840->g_350.f1;
        int32_t *l_590[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        uint8_t l_598 = 0xB6L;
        int i, j;
        (*p_840->g_262) |= ((((*l_589) = (~(safe_add_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s((((VECTOR(uint16_t, 2))(p_840->g_573.s68)).even & (((VECTOR(int32_t, 4))(l_574.wyxx)).w , (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(0xF831L, (((safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_840->local_1_offset, get_local_id(1), 10), p_17)) && (safe_mod_func_int16_t_s_s(p_840->g_573.s1, 0x3C48L))) != (l_584--)))), (p_840->g_341[1][5] , ((+(((*l_587) = (((p_840->g_341[1][6] , l_587) == l_588) , p_840->g_153)) >= FAKE_DIVERGE(p_840->group_1_offset, get_group_id(1), 10))) < 0L)))) & (-1L)) == GROUP_DIVERGE(2, 1)))), l_574.x)), p_840->g_421[2])), p_19)))) != l_574.y) , p_19);
        l_591 = (p_840->g_86.x &= (*p_840->g_262));
        l_595++;
        --l_598;
    }
    if ((atomic_inc(&p_840->g_atomic_input[86 * get_linear_group_id() + 28]) == 2))
    { /* block id: 234 */
        uint16_t l_601 = 0x48D7L;
        ++l_601;
        unsigned int result = 0;
        result += l_601;
        atomic_add(&p_840->g_special_values[86 * get_linear_group_id() + 28], result);
    }
    else
    { /* block id: 236 */
        (1 + 1);
    }
    if ((**p_840->g_532))
    { /* block id: 239 */
        uint32_t l_604 = 1UL;
        int64_t *l_607 = &p_840->g_56;
        VECTOR(uint8_t, 16) l_608 = (VECTOR(uint8_t, 16))(0x0DL, (VECTOR(uint8_t, 4))(0x0DL, (VECTOR(uint8_t, 2))(0x0DL, 0xD8L), 0xD8L), 0xD8L, 0x0DL, 0xD8L, (VECTOR(uint8_t, 2))(0x0DL, 0xD8L), (VECTOR(uint8_t, 2))(0x0DL, 0xD8L), 0x0DL, 0xD8L, 0x0DL, 0xD8L);
        int32_t *l_625 = &p_840->g_119;
        union U0 *l_626 = &p_840->g_341[1][5];
        union U0 **l_627 = &l_626;
        int i;
        (*l_625) = ((l_604 < ((((safe_mod_func_uint32_t_u_u((((l_607 != (void*)0) && ((*p_840->g_262) = ((p_19 == ((((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 16))(l_608.sd63586f2cb345024)).odd, ((VECTOR(uint8_t, 16))(p_840->g_609.wwxxxyxyxxwywzxy)).hi))), (safe_add_func_int8_t_s_s(((*p_16) |= ((VECTOR(int8_t, 8))(p_840->g_612.s67325137)).s3), (((safe_rshift_func_uint8_t_u_s(p_840->g_123.x, (0x02C52D622C56FF2DL && 0xCB8928DA939C969BL))) || ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((p_840->g_563 , (((p_840->g_100 = (safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((p_840->g_341[1][5] , p_19) < l_594[5]), l_591)), l_604)), l_594[5]))) , p_840->g_149[4][0]) , p_840->g_146)), 0UL)), (*p_840->g_262))), ((VECTOR(uint64_t, 8))(18446744073709551606UL)), 18446744073709551615UL, ((VECTOR(uint64_t, 2))(18446744073709551609UL)), ((VECTOR(uint64_t, 2))(0xBF0BBB1194BDF36BL)), 18446744073709551614UL, 7UL)).s2e06)).z) > l_604))), 0x41L, p_840->g_188, ((VECTOR(uint8_t, 4))(0x4FL)), 250UL)).s4d2c)).wxyzxyyzwxxwyzxz, ((VECTOR(uint8_t, 16))(254UL))))).saf, ((VECTOR(uint8_t, 2))(0xC5L)), ((VECTOR(uint8_t, 2))(0xEAL))))).yxxy, ((VECTOR(uint8_t, 4))(0x27L))))), ((VECTOR(uint8_t, 4))(0x39L)), ((VECTOR(uint8_t, 4))(1UL))))).y > l_608.s1) < p_19)) != 1L))) && (*p_18)), 0x7A5EBE5AL)) , (void*)0) != (void*)0) < p_17)) ^ p_19);
        (*l_627) = l_626;
    }
    else
    { /* block id: 245 */
        int8_t *l_630[9][5][5] = {{{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]}},{{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]}},{{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]}},{{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]}},{{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]}},{{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]}},{{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]}},{{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]}},{{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]},{&p_840->g_7[0],(void*)0,(void*)0,(void*)0,&p_840->g_421[0]}}};
        union U1 *l_654 = (void*)0;
        int32_t l_660[1][1];
        int64_t l_668 = 1L;
        int32_t l_670 = 0x1857EC88L;
        union U2 l_732[1][5] = {{{0},{0},{0},{0},{0}}};
        uint64_t *l_733 = &p_840->g_64;
        VECTOR(int16_t, 2) l_749 = (VECTOR(int16_t, 2))(0x6398L, 0L);
        int32_t l_759 = 0x35D7266DL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_660[i][j] = (-9L);
        }
        for (p_840->g_345 = 0; (p_840->g_345 == (-30)); --p_840->g_345)
        { /* block id: 248 */
            return l_630[8][0][4];
        }
        for (p_840->g_44 = (-6); (p_840->g_44 > 52); ++p_840->g_44)
        { /* block id: 253 */
            union U1 **l_655 = &l_654;
            uint32_t *l_669[1];
            VECTOR(int32_t, 16) l_671 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-8L)), (-8L)), (-8L), 3L, (-8L), (VECTOR(int32_t, 2))(3L, (-8L)), (VECTOR(int32_t, 2))(3L, (-8L)), 3L, (-8L), 3L, (-8L));
            VECTOR(int32_t, 2) l_672 = (VECTOR(int32_t, 2))((-7L), 1L);
            VECTOR(int16_t, 8) l_722 = (VECTOR(int16_t, 8))(0x5C67L, (VECTOR(int16_t, 4))(0x5C67L, (VECTOR(int16_t, 2))(0x5C67L, (-6L)), (-6L)), (-6L), 0x5C67L, (-6L));
            VECTOR(int16_t, 16) l_723 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x6E82L), 0x6E82L), 0x6E82L, (-1L), 0x6E82L, (VECTOR(int16_t, 2))((-1L), 0x6E82L), (VECTOR(int16_t, 2))((-1L), 0x6E82L), (-1L), 0x6E82L, (-1L), 0x6E82L);
            uint16_t l_736 = 0UL;
            int i;
            for (i = 0; i < 1; i++)
                l_669[i] = (void*)0;
            if ((atomic_inc(&p_840->l_atomic_input[38]) == 6))
            { /* block id: 255 */
                int32_t l_633 = 0L;
                uint64_t l_634 = 0x80D4F09B74176977L;
                uint32_t l_635[9] = {0xAB80BB41L,4294967295UL,0xAB80BB41L,0xAB80BB41L,4294967295UL,0xAB80BB41L,0xAB80BB41L,4294967295UL,0xAB80BB41L};
                int i;
                if ((l_635[8] = (l_634 = l_633)))
                { /* block id: 258 */
                    uint16_t l_636 = 65526UL;
                    int32_t l_637 = 0L;
                    int32_t l_639 = 0x7F916125L;
                    int32_t *l_638[8][2] = {{(void*)0,&l_639},{(void*)0,&l_639},{(void*)0,&l_639},{(void*)0,&l_639},{(void*)0,&l_639},{(void*)0,&l_639},{(void*)0,&l_639},{(void*)0,&l_639}};
                    int32_t *l_640 = &l_639;
                    uint16_t l_641 = 0xB5B0L;
                    int32_t l_642 = (-6L);
                    uint64_t l_643[3];
                    VECTOR(uint32_t, 8) l_644 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 6UL), 6UL), 6UL, 1UL, 6UL);
                    int32_t l_645 = 0x13357FE7L;
                    int64_t l_646 = 0x1F570D1148B81A26L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_643[i] = 7UL;
                    l_637 = l_636;
                    l_640 = l_638[4][0];
                    l_642 = l_641;
                    l_646 = (l_645 = (l_644.s0 = l_643[1]));
                }
                else
                { /* block id: 265 */
                    uint32_t l_647 = 0x0BEF7A4CL;
                    ++l_647;
                }
                unsigned int result = 0;
                result += l_633;
                result += l_634;
                int l_635_i0;
                for (l_635_i0 = 0; l_635_i0 < 9; l_635_i0++) {
                    result += l_635[l_635_i0];
                }
                atomic_add(&p_840->l_special_values[38], result);
            }
            else
            { /* block id: 268 */
                (1 + 1);
            }
            if (((safe_mul_func_int8_t_s_s(((((safe_div_func_int32_t_s_s((((*l_655) = l_654) != &p_840->g_563), (-5L))) , (safe_mod_func_uint8_t_u_u((l_671.sc = (safe_add_func_int16_t_s_s((+l_660[0][0]), ((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(p_17, p_19)), (l_670 = (l_594[8] = (safe_add_func_int8_t_s_s((((p_19 != ((VECTOR(uint64_t, 4))(p_840->g_173[0], ((((((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0x23L, (safe_unary_minus_func_int8_t_s((*p_840->g_129))), 0x29L, 0x65L)).yxzyzywy)).s1 || (**p_840->g_115)) >= 65535UL) ^ 0x04EDL) , 8UL) && l_595) >= l_668), 18446744073709551615UL, 0x0B5DFDEDDCDD349CL)).y) != p_19) != p_840->g_229.sc), (**p_840->g_128))))))) , 0xD408L)))), l_672.x))) || p_840->g_399.y) < (*p_840->g_262)), (*p_840->g_129))) ^ 0xDEL))
            { /* block id: 275 */
                uint32_t l_708 = 4294967295UL;
                uint16_t *l_719 = (void*)0;
                for (l_593 = (-8); (l_593 < 14); l_593++)
                { /* block id: 278 */
                    int32_t *l_701 = (void*)0;
                    int32_t *l_702 = &l_660[0][0];
                    int32_t *l_703 = (void*)0;
                    int32_t *l_704 = &l_594[2];
                    int32_t *l_705 = &l_660[0][0];
                    int32_t *l_706 = &p_840->g_31;
                    int32_t *l_707[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_707[i] = &l_660[0][0];
                    for (p_840->g_100 = 27; (p_840->g_100 != 3); p_840->g_100--)
                    { /* block id: 281 */
                        int32_t *l_679[5] = {&p_840->g_396[6],&p_840->g_396[6],&p_840->g_396[6],&p_840->g_396[6],&p_840->g_396[6]};
                        int32_t *l_681 = &p_840->g_396[4];
                        int32_t **l_680 = &l_681;
                        int64_t *l_694 = &l_668;
                        int32_t l_699 = 0L;
                        int i;
                        (*p_840->g_532) = func_36((((**p_840->g_532) = (safe_sub_func_uint16_t_u_u(((l_679[0] == ((*l_680) = &p_19)) & (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((-1L) != ((safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s(((*l_694) = ((&p_840->g_350 == (p_840->g_341[0][6] , p_840->g_692[4][1])) | FAKE_DIVERGE(p_840->local_0_offset, get_local_id(0), 10))), (l_660[0][0] != ((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((0x7733BF66L <= 0x76C4138CL), l_699)), p_17)) , 0x2A9187F3L)))), 0x0B7049F5DA78CBFAL)) == l_670)), p_840->g_558.x)), 0))), l_700))) | l_699), l_592, p_17, p_840->g_396[4], l_594[5], p_840);
                    }
                    l_708++;
                    (*p_840->g_262) |= ((((((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u((l_719 != (void*)0), 14)) & (safe_rshift_func_int16_t_s_s(0x4C2DL, (+((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_722.s32627655)))).s3)))) ^ (p_19 && ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_723.s38)).yyyxxyyyxxyyxxyy)).sf)), ((safe_rshift_func_int8_t_s_s((1UL == (**p_840->g_115)), (p_840->g_119 , ((&p_840->g_384 == (((0xD77AL < l_594[5]) , p_17) , &p_840->g_384)) ^ 9L)))) , p_17))), 0xB711L)), p_19)) != (**p_840->g_128)) , GROUP_DIVERGE(0, 1)) && 1UL) == 0x54L) && p_17);
                }
            }
            else
            { /* block id: 290 */
                uint16_t *l_754 = &p_840->g_350.f1;
                uint16_t *l_755 = &p_840->g_350.f1;
                uint16_t *l_756 = &l_732[0][0].f1;
                uint16_t *l_757 = (void*)0;
                uint16_t *l_758[2];
                uint32_t *l_766 = &p_840->g_767;
                uint8_t *l_768 = &p_840->g_328;
                uint8_t *l_769 = &p_840->g_33;
                uint64_t *l_770 = &p_840->g_100;
                int i;
                for (i = 0; i < 2; i++)
                    l_758[i] = &l_732[0][0].f1;
                (*p_840->g_262) |= (p_840->g_86.x | (((l_670 = ((safe_rshift_func_int8_t_s_s(((+((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_728.yxxyzzzwywxwywxx)).s3ed6)).wzyxwzzzxwyyxxwy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_840->g_729.yxzw)), (p_840->g_149[1][0] , 0x0536C422L), 0x2A7CB9CFL, ((((safe_div_func_int16_t_s_s(((l_732[0][0] , FAKE_DIVERGE(p_840->local_0_offset, get_local_id(0), 10)) < (((**p_840->g_128) = ((-7L) >= 0L)) , ((l_594[5] , (*p_840->g_532)) != (l_660[0][0] , l_669[0])))), p_17)) , (void*)0) != l_733) ^ p_840->g_56), 0x6C46FF64L, ((VECTOR(int32_t, 2))((-7L))), 0L, (-7L), 0x567A423CL, ((VECTOR(int32_t, 2))((-10L))), 0x546203D9L))))).sb) , 0x45L), 6)) > 65529UL)) , 0x1F50697A901F3953L) ^ p_840->g_135.se));
                (**p_840->g_532) = (GROUP_DIVERGE(0, 1) && (safe_mul_func_int8_t_s_s(l_736, (!(((*l_770) = (safe_add_func_uint8_t_u_u(((*l_769) = (safe_div_func_uint8_t_u_u(((*l_768) |= (8UL <= (l_722.s2 > (safe_rshift_func_int16_t_s_s(p_19, ((safe_mul_func_int8_t_s_s((((*l_766) = (l_671.s8 &= (safe_div_func_uint32_t_u_u(l_660[0][0], (l_728.y = (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_749.xyxy)).hi)), 3L, 0x5F90L)), (+((*l_587) = ((safe_div_func_uint16_t_u_u((0x4FFA137A872E46BEL && (safe_lshift_func_uint16_t_u_u((++p_840->g_573.sb), ((l_672.y = ((safe_rshift_func_int8_t_s_s(((&l_654 == (p_840->g_341[1][5] , l_764)) | (*p_840->g_262)), 5)) , p_17)) , l_660[0][0])))), p_840->g_729.z)) , p_840->g_145))), 0x777DL, 1L, ((VECTOR(int16_t, 8))(0x7F8DL)), 0x3E2DL)).s64d7)).y, 2))))))) , 0x55L), l_749.y)) && l_660[0][0])))))), 0x13L))), l_722.s7))) >= 0x7B7C5425DF67ECCCL)))));
                if (p_19)
                    continue;
            }
        }
        l_591 |= ((((FAKE_DIVERGE(p_840->group_0_offset, get_group_id(0), 10) >= (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(1L, 13)), ((l_654 != (void*)0) || (&p_840->g_33 != l_630[8][0][4]))))) , (((VECTOR(int16_t, 4))(p_840->g_775.xzyx)).y != (((*l_587) = (0x38C4L > p_840->g_64)) , (l_668 == 5L)))) || l_728.z) <= p_19);
    }
    return (*p_840->g_128);
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_33 p_840->g_261 p_840->g_262 p_840->g_7 p_840->g_31 p_840->g_58 p_840->g_135 p_840->g_128 p_840->g_129 p_840->g_341 p_840->g_107 p_840->g_383 p_840->g_396 p_840->g_399 p_840->g_199 p_840->g_200 p_840->g_116 p_840->g_117 p_840->g_229 p_840->g_175 p_840->g_44 p_840->g_532 p_840->g_418 p_840->g_558 p_840->g_560 p_840->g_561
 * writes: p_840->g_33 p_840->g_328 p_840->g_135 p_840->g_107 p_840->g_345 p_840->g_7 p_840->g_31 p_840->g_383
 */
int8_t * func_20(int8_t * p_21, struct S3 * p_840)
{ /* block id: 59 */
    int64_t *l_294 = (void*)0;
    int64_t **l_293[1];
    int64_t ***l_298[4][9][7] = {{{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]}},{{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]}},{{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]}},{{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]},{&p_840->g_296[1][1][2],&l_293[0],&l_293[0],&p_840->g_296[2][1][1],&p_840->g_296[8][5][0],(void*)0,&p_840->g_296[8][5][0]}}};
    int64_t **l_299 = &p_840->g_297[3];
    VECTOR(int64_t, 8) l_300 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x7ED305FA5C55A6DBL), 0x7ED305FA5C55A6DBL), 0x7ED305FA5C55A6DBL, 1L, 0x7ED305FA5C55A6DBL);
    int32_t l_301[9][6][1] = {{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}}};
    VECTOR(uint16_t, 16) l_314 = (VECTOR(uint16_t, 16))(0xABBBL, (VECTOR(uint16_t, 4))(0xABBBL, (VECTOR(uint16_t, 2))(0xABBBL, 0UL), 0UL), 0UL, 0xABBBL, 0UL, (VECTOR(uint16_t, 2))(0xABBBL, 0UL), (VECTOR(uint16_t, 2))(0xABBBL, 0UL), 0xABBBL, 0UL, 0xABBBL, 0UL);
    int32_t *l_321 = &l_301[1][1][0];
    uint32_t ***l_324 = (void*)0;
    union U2 *l_349 = &p_840->g_350;
    uint32_t l_378 = 8UL;
    VECTOR(uint8_t, 2) l_393 = (VECTOR(uint8_t, 2))(0x4DL, 252UL);
    int8_t **l_409 = &p_840->g_129;
    VECTOR(uint8_t, 2) l_410 = (VECTOR(uint8_t, 2))(0UL, 0xDBL);
    int32_t l_416[1];
    int8_t l_417[1][4][7] = {{{0x7AL,0x7AL,3L,8L,9L,(-3L),(-5L)},{0x7AL,0x7AL,3L,8L,9L,(-3L),(-5L)},{0x7AL,0x7AL,3L,8L,9L,(-3L),(-5L)},{0x7AL,0x7AL,3L,8L,9L,(-3L),(-5L)}}};
    int32_t l_423[4][8];
    uint64_t l_424 = 18446744073709551615UL;
    VECTOR(int16_t, 4) l_451 = (VECTOR(int16_t, 4))(0x336CL, (VECTOR(int16_t, 2))(0x336CL, (-1L)), (-1L));
    union U1 *l_562 = &p_840->g_563;
    union U1 **l_564 = &l_562;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_293[i] = &l_294;
    for (i = 0; i < 1; i++)
        l_416[i] = 0x7423A782L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
            l_423[i][j] = 1L;
    }
    if ((atomic_inc(&p_840->l_atomic_input[20]) == 6))
    { /* block id: 61 */
        int32_t l_263 = 0L;
        VECTOR(int32_t, 4) l_267 = (VECTOR(int32_t, 4))(0x5A909A3CL, (VECTOR(int32_t, 2))(0x5A909A3CL, 1L), 1L);
        VECTOR(int32_t, 4) l_268 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
        int8_t l_269[5] = {0x4AL,0x4AL,0x4AL,0x4AL,0x4AL};
        union U2 l_290 = {0};
        union U2 *l_289[1];
        union U2 *l_291 = &l_290;
        union U2 *l_292 = &l_290;
        int i;
        for (i = 0; i < 1; i++)
            l_289[i] = &l_290;
        for (l_263 = (-24); (l_263 >= 14); l_263 = safe_add_func_uint16_t_u_u(l_263, 6))
        { /* block id: 64 */
            int32_t l_266 = (-8L);
            l_266 = 0x26209F7CL;
        }
        if ((l_269[1] = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(l_267.xwxywyywywwxyzxw)), ((VECTOR(int32_t, 16))(l_268.yxywwywyyxwwxwxx))))).lo)).s3))
        { /* block id: 68 */
            int32_t l_270 = 1L;
            for (l_270 = 0; (l_270 < (-18)); --l_270)
            { /* block id: 71 */
                int8_t l_273 = 2L;
                int32_t l_275 = 0x572D77EDL;
                int32_t *l_274 = &l_275;
                int32_t *l_276 = &l_275;
                uint64_t l_277 = 0x6E6614B1E1DA71A9L;
                l_273 = 0x7379416BL;
                l_276 = l_274;
                l_277++;
                for (l_273 = 0; (l_273 != 5); ++l_273)
                { /* block id: 77 */
                    int16_t l_282 = 5L;
                    (*l_274) &= l_282;
                }
            }
        }
        else
        { /* block id: 81 */
            int32_t l_283 = (-3L);
            for (l_283 = 0; (l_283 > 24); l_283 = safe_add_func_int32_t_s_s(l_283, 1))
            { /* block id: 84 */
                int32_t l_287 = 0x47B00D79L;
                int32_t *l_286 = &l_287;
                int32_t *l_288 = &l_287;
                l_288 = (l_286 = (void*)0);
            }
        }
        l_292 = (l_291 = l_289[0]);
        unsigned int result = 0;
        result += l_263;
        result += l_267.w;
        result += l_267.z;
        result += l_267.y;
        result += l_267.x;
        result += l_268.w;
        result += l_268.z;
        result += l_268.y;
        result += l_268.x;
        int l_269_i0;
        for (l_269_i0 = 0; l_269_i0 < 5; l_269_i0++) {
            result += l_269[l_269_i0];
        }
        result += l_290.f0;
        result += l_290.f1;
        atomic_add(&p_840->l_special_values[20], result);
    }
    else
    { /* block id: 91 */
        (1 + 1);
    }
    l_299 = l_293[0];
    if (((l_301[0][5][0] = ((VECTOR(int64_t, 16))(l_300.s1664055113450054)).sd) , ((VECTOR(int32_t, 2))(0x418536C7L, (-1L))).odd))
    { /* block id: 96 */
        uint64_t l_310 = 0xCFA46E6413676E28L;
        VECTOR(uint16_t, 2) l_313 = (VECTOR(uint16_t, 2))(6UL, 0UL);
        VECTOR(uint8_t, 8) l_333 = (VECTOR(uint8_t, 8))(0x29L, (VECTOR(uint8_t, 4))(0x29L, (VECTOR(uint8_t, 2))(0x29L, 246UL), 246UL), 246UL, 0x29L, 246UL);
        VECTOR(uint32_t, 8) l_337 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x597ACBCCL), 0x597ACBCCL), 0x597ACBCCL, 1UL, 0x597ACBCCL);
        int32_t *l_352[5][10][5] = {{{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119}},{{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119}},{{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119}},{{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119}},{{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119},{&p_840->g_58,&p_840->g_58,&l_301[0][5][0],(void*)0,&p_840->g_119}}};
        int16_t l_377[5][2];
        uint8_t *l_394 = &p_840->g_33;
        uint8_t *l_395[7];
        int32_t **l_404 = &l_352[3][1][2];
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_377[i][j] = 0x10ACL;
        }
        for (i = 0; i < 7; i++)
            l_395[i] = (void*)0;
        for (p_840->g_33 = 27; (p_840->g_33 < 16); --p_840->g_33)
        { /* block id: 99 */
            uint64_t *l_323 = (void*)0;
            uint64_t **l_322 = &l_323;
            uint32_t ***l_326 = (void*)0;
            uint32_t ****l_325 = &l_326;
            uint8_t *l_327 = &p_840->g_328;
            int64_t *l_329 = (void*)0;
            int32_t l_330 = 0x51222068L;
            if ((safe_sub_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((((((safe_div_func_int64_t_s_s((l_310 & (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 4))(l_313.yyxy)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_314.s9d358c5a75c87384)).s72)).yxxx))).w, (!((-1L) != 6UL))))), (safe_mod_func_int64_t_s_s((l_330 = ((safe_sub_func_int32_t_s_s((((((safe_sub_func_uint8_t_u_u(((l_321 != (*p_840->g_261)) & (l_294 == ((*l_322) = l_294))), ((*l_327) = ((l_324 == ((*l_325) = l_324)) || 1L)))) != (*l_321)) == (*p_21)) , (*l_321)) ^ 3L), (*p_840->g_262))) > l_313.x)), p_840->g_58)))) <= p_840->g_135.s1) <= (*p_21)) , 0x2CL) , 0xD29AL), (*l_321))) , GROUP_DIVERGE(1, 1)), 0UL)))
            { /* block id: 104 */
                VECTOR(uint64_t, 2) l_336 = (VECTOR(uint64_t, 2))(0x20BA3940CC902525L, 18446744073709551615UL);
                uint32_t *l_338 = (void*)0;
                uint32_t *l_339 = (void*)0;
                uint32_t *l_340 = (void*)0;
                uint32_t *l_342 = &p_840->g_44;
                int16_t *l_343 = &p_840->g_107;
                int16_t *l_344 = &p_840->g_345;
                int32_t l_346 = 0x055465E1L;
                union U2 l_351 = {0};
                int i;
                (*p_840->g_262) ^= (safe_mul_func_int16_t_s_s((((*l_327) = (((VECTOR(uint8_t, 4))(l_333.s6212)).y < ((**p_840->g_128) = (l_346 |= (safe_lshift_func_int16_t_s_s(((**p_840->g_128) != (((VECTOR(uint64_t, 16))(l_336.yxxxyxxxxxxyxxyy)).s3 ^ ((p_840->g_135.s4 ^= ((VECTOR(uint32_t, 16))(l_337.s7046422003333061)).s7) <= ((((void*)0 == (*l_325)) ^ l_337.s0) > ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0x6B9DF437L)).yxyy)).y)))), ((*l_344) = ((*l_343) ^= ((p_840->g_341[1][5] , l_342) != (void*)0))))))))) & (safe_mod_func_int32_t_s_s((l_349 == ((l_351 , l_330) , (void*)0)), (*l_321)))), (*l_321)));
            }
            else
            { /* block id: 112 */
                if (l_333.s0)
                    break;
            }
            l_352[3][1][2] = (*p_840->g_261);
            if ((atomic_inc(&p_840->l_atomic_input[39]) == 9))
            { /* block id: 117 */
                uint64_t l_353 = 0x67EA2E9DD434D3A0L;
                VECTOR(int32_t, 4) l_354 = (VECTOR(int32_t, 4))(0x4C0E27DAL, (VECTOR(int32_t, 2))(0x4C0E27DAL, (-9L)), (-9L));
                int32_t l_355 = (-1L);
                uint32_t l_356[9] = {8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL};
                VECTOR(uint32_t, 8) l_357 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xB0BBA036L), 0xB0BBA036L), 0xB0BBA036L, 4294967295UL, 0xB0BBA036L);
                uint32_t l_358 = 0x54E2F47AL;
                uint8_t l_359[7] = {0xD4L,0x13L,0xD4L,0xD4L,0x13L,0xD4L,0xD4L};
                uint32_t l_360 = 1UL;
                int8_t l_363 = 0x64L;
                int i;
                l_359[2] = (l_358 = (l_357.s1 = (l_356[4] = (l_355 = (l_353 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_354.wwwzzyxz)).s74)).hi)))));
                ++l_360;
                if (l_363)
                { /* block id: 124 */
                    uint64_t l_364 = 0UL;
                    int32_t l_365 = 0x28602A06L;
                    int64_t l_366 = 0x7B913B07E92FE9CAL;
                    int32_t l_367 = (-1L);
                    union U2 l_369 = {0};
                    union U2 *l_368 = &l_369;
                    union U2 *l_370 = &l_369;
                    union U2 *l_371 = &l_369;
                    union U2 *l_372 = (void*)0;
                    l_365 = l_364;
                    l_368 = (l_372 = (l_366 , (l_371 = ((l_367 = 0x442FL) , (l_370 = l_368)))));
                }
                else
                { /* block id: 131 */
                    VECTOR(int32_t, 8) l_373 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x738741EEL), 0x738741EEL), 0x738741EEL, (-1L), 0x738741EEL);
                    VECTOR(int32_t, 16) l_374 = (VECTOR(int32_t, 16))(0x54D9FA69L, (VECTOR(int32_t, 4))(0x54D9FA69L, (VECTOR(int32_t, 2))(0x54D9FA69L, 0x6ED79273L), 0x6ED79273L), 0x6ED79273L, 0x54D9FA69L, 0x6ED79273L, (VECTOR(int32_t, 2))(0x54D9FA69L, 0x6ED79273L), (VECTOR(int32_t, 2))(0x54D9FA69L, 0x6ED79273L), 0x54D9FA69L, 0x6ED79273L, 0x54D9FA69L, 0x6ED79273L);
                    int i;
                    l_355 = ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_373.s52)).yxxxxxyxxxyxyxxy, ((VECTOR(int32_t, 2))(l_374.s56)).yyyxyxyxxxxyyyyx))).s2;
                }
                unsigned int result = 0;
                result += l_353;
                result += l_354.w;
                result += l_354.z;
                result += l_354.y;
                result += l_354.x;
                result += l_355;
                int l_356_i0;
                for (l_356_i0 = 0; l_356_i0 < 9; l_356_i0++) {
                    result += l_356[l_356_i0];
                }
                result += l_357.s7;
                result += l_357.s6;
                result += l_357.s5;
                result += l_357.s4;
                result += l_357.s3;
                result += l_357.s2;
                result += l_357.s1;
                result += l_357.s0;
                result += l_358;
                int l_359_i0;
                for (l_359_i0 = 0; l_359_i0 < 7; l_359_i0++) {
                    result += l_359[l_359_i0];
                }
                result += l_360;
                result += l_363;
                atomic_add(&p_840->l_special_values[39], result);
            }
            else
            { /* block id: 134 */
                (1 + 1);
            }
            (*l_321) = 0L;
        }
        if ((atomic_inc(&p_840->l_atomic_input[30]) == 8))
        { /* block id: 140 */
            int32_t l_375 = 9L;
            int8_t l_376 = 0x1EL;
            l_376 |= l_375;
            unsigned int result = 0;
            result += l_375;
            result += l_376;
            atomic_add(&p_840->l_special_values[30], result);
        }
        else
        { /* block id: 142 */
            (1 + 1);
        }
        --l_378;
        (*l_404) = ((safe_lshift_func_int16_t_s_u(((p_840->g_383[1][1] = p_840->g_383[1][1]) == (void*)0), (safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((*l_321) &= (safe_lshift_func_int8_t_s_u(((void*)0 != l_321), ((*l_394) = ((VECTOR(uint8_t, 4))(l_393.yyyx)).z)))), (p_840->g_396[4] != (((p_840->g_328 = GROUP_DIVERGE(2, 1)) , (((safe_lshift_func_uint8_t_u_u(0x10L, p_840->g_7[2])) & ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_840->g_399.yyyyxyyxyyyxyxyx)).odd)))).s42))).xyyy, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x08E044B3L, (-1L))))), (int32_t)(safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((void*)0 == &p_840->g_350), FAKE_DIVERGE(p_840->global_1_offset, get_global_id(1), 10))), (-10L))), (int32_t)(*p_840->g_199)))).xyyx, ((VECTOR(int32_t, 4))((-8L)))))), ((VECTOR(int32_t, 2))((-1L))), 0x336FC8C0L, ((VECTOR(int32_t, 2))(0x6860C42AL)), 1L, 0x496F6771L, ((VECTOR(int32_t, 2))((-5L))), (-2L), 0x3EF1ED81L, 0x139B6406L)))), ((VECTOR(int32_t, 16))(4L))))).even)).s6) | 0x1FAC696D2CCA0AADL)) || (*p_840->g_116))))), p_840->g_229.s3)), 4)))) , (void*)0);
    }
    else
    { /* block id: 151 */
        uint32_t l_411 = 1UL;
        int32_t l_414 = 0x49F11B40L;
        int32_t l_415[10];
        int32_t l_419[8] = {(-1L),0x16941FA8L,(-1L),(-1L),0x16941FA8L,(-1L),(-1L),0x16941FA8L};
        int16_t l_420 = 0x7BCFL;
        int32_t **l_433 = (void*)0;
        uint32_t *l_444 = (void*)0;
        VECTOR(uint16_t, 8) l_553 = (VECTOR(uint16_t, 8))(0xD3B0L, (VECTOR(uint16_t, 4))(0xD3B0L, (VECTOR(uint16_t, 2))(0xD3B0L, 0x8A98L), 0x8A98L), 0x8A98L, 0xD3B0L, 0x8A98L);
        VECTOR(uint32_t, 16) l_559 = (VECTOR(uint32_t, 16))(0x056A8F8FL, (VECTOR(uint32_t, 4))(0x056A8F8FL, (VECTOR(uint32_t, 2))(0x056A8F8FL, 4294967288UL), 4294967288UL), 4294967288UL, 0x056A8F8FL, 4294967288UL, (VECTOR(uint32_t, 2))(0x056A8F8FL, 4294967288UL), (VECTOR(uint32_t, 2))(0x056A8F8FL, 4294967288UL), 0x056A8F8FL, 4294967288UL, 0x056A8F8FL, 4294967288UL);
        int i;
        for (i = 0; i < 10; i++)
            l_415[i] = 3L;
        if ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((p_840->g_341[1][0] , l_409) == (void*)0), 3)) >= (l_411 = (((*p_21) = ((void*)0 != &p_840->g_350)) & ((VECTOR(uint8_t, 2))(l_410.xx)).hi))), 255UL)))
        { /* block id: 154 */
            int32_t *l_412 = &p_840->g_31;
            int32_t *l_413[6];
            int16_t l_422[2][2][7] = {{{(-4L),(-4L),0x040EL,(-1L),3L,(-1L),0x040EL},{(-4L),(-4L),0x040EL,(-1L),3L,(-1L),0x040EL}},{{(-4L),(-4L),0x040EL,(-1L),3L,(-1L),0x040EL},{(-4L),(-4L),0x040EL,(-1L),3L,(-1L),0x040EL}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_413[i] = (void*)0;
            --l_424;
            for (l_420 = 0; (l_420 == 16); l_420++)
            { /* block id: 158 */
                int8_t *l_438 = &l_417[0][3][1];
                l_416[0] &= (safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((l_433 == (void*)0), 4)) || (*p_840->g_129)) | (safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((*l_438) = (*p_21)), (safe_unary_minus_func_int8_t_s((FAKE_DIVERGE(p_840->global_0_offset, get_global_id(0), 10) , (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((l_444 == &l_378) , p_840->g_175), (safe_add_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_840->local_2_offset, get_local_id(2), 10), (safe_mod_func_uint32_t_u_u((((0x91C6L != ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(0x2D2FL, (-3L))), (int16_t)((VECTOR(int16_t, 16))(l_451.xzyzywzwwywzzxyz)).sf))), 0L, 0x1C99L)).z) != ((((*l_321) == (*l_412)) <= p_840->g_58) != p_840->g_44)) > (*p_840->g_262)), 0xC48FDF45L)))) >= 0xDB68611C628B4E32L), l_419[7])))), 6))))))), (*p_840->g_262)))), (*p_840->g_129)));
                return (*l_409);
            }
        }
        else
        { /* block id: 163 */
            int32_t *l_528[4];
            uint32_t l_529 = 7UL;
            int i;
            for (i = 0; i < 4; i++)
                l_528[i] = (void*)0;
            if ((atomic_inc(&p_840->g_atomic_input[86 * get_linear_group_id() + 71]) == 5))
            { /* block id: 165 */
                int32_t l_452[7] = {0x213F6BE3L,0x0F7B7E65L,0x213F6BE3L,0x213F6BE3L,0x0F7B7E65L,0x213F6BE3L,0x213F6BE3L};
                uint16_t l_489 = 65535UL;
                uint16_t l_490 = 0UL;
                VECTOR(int32_t, 4) l_491 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 7L), 7L);
                VECTOR(int32_t, 4) l_492 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2977CFEFL), 0x2977CFEFL);
                uint64_t l_493 = 6UL;
                int8_t l_494 = (-10L);
                uint16_t l_495 = 0x288CL;
                int32_t l_496 = (-4L);
                uint8_t l_497 = 0x37L;
                uint64_t l_500 = 18446744073709551615UL;
                union U2 l_501 = {0};
                uint16_t l_502 = 0x70E1L;
                uint64_t l_503 = 18446744073709551615UL;
                int16_t l_504 = 7L;
                uint32_t l_505 = 1UL;
                VECTOR(uint64_t, 16) l_506 = (VECTOR(uint64_t, 16))(0x1634B71043667947L, (VECTOR(uint64_t, 4))(0x1634B71043667947L, (VECTOR(uint64_t, 2))(0x1634B71043667947L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x1634B71043667947L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x1634B71043667947L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x1634B71043667947L, 18446744073709551615UL), 0x1634B71043667947L, 18446744073709551615UL, 0x1634B71043667947L, 18446744073709551615UL);
                VECTOR(uint64_t, 4) l_507 = (VECTOR(uint64_t, 4))(0xF01044D0373F3046L, (VECTOR(uint64_t, 2))(0xF01044D0373F3046L, 18446744073709551607UL), 18446744073709551607UL);
                int16_t l_508 = (-9L);
                VECTOR(uint64_t, 2) l_509 = (VECTOR(uint64_t, 2))(0UL, 2UL);
                VECTOR(uint64_t, 4) l_510 = (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 0x43F5FBDE30487BDBL), 0x43F5FBDE30487BDBL);
                int8_t l_511[1];
                VECTOR(uint64_t, 8) l_512 = (VECTOR(uint64_t, 8))(0xF286B38197485CFDL, (VECTOR(uint64_t, 4))(0xF286B38197485CFDL, (VECTOR(uint64_t, 2))(0xF286B38197485CFDL, 1UL), 1UL), 1UL, 0xF286B38197485CFDL, 1UL);
                int32_t l_513[9][4] = {{0x63285A2EL,0x63285A2EL,0x72C748E5L,7L},{0x63285A2EL,0x63285A2EL,0x72C748E5L,7L},{0x63285A2EL,0x63285A2EL,0x72C748E5L,7L},{0x63285A2EL,0x63285A2EL,0x72C748E5L,7L},{0x63285A2EL,0x63285A2EL,0x72C748E5L,7L},{0x63285A2EL,0x63285A2EL,0x72C748E5L,7L},{0x63285A2EL,0x63285A2EL,0x72C748E5L,7L},{0x63285A2EL,0x63285A2EL,0x72C748E5L,7L},{0x63285A2EL,0x63285A2EL,0x72C748E5L,7L}};
                uint32_t l_514 = 0xCEDA2C19L;
                VECTOR(int16_t, 4) l_515 = (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x238BL), 0x238BL);
                VECTOR(uint16_t, 2) l_516 = (VECTOR(uint16_t, 2))(65535UL, 0x8E79L);
                VECTOR(uint16_t, 4) l_517 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0UL), 0UL);
                VECTOR(uint16_t, 2) l_518 = (VECTOR(uint16_t, 2))(1UL, 65526UL);
                VECTOR(int32_t, 2) l_519 = (VECTOR(int32_t, 2))(0x1B2CCE87L, 0L);
                VECTOR(int32_t, 8) l_520 = (VECTOR(int32_t, 8))(0x741AC3BBL, (VECTOR(int32_t, 4))(0x741AC3BBL, (VECTOR(int32_t, 2))(0x741AC3BBL, (-6L)), (-6L)), (-6L), 0x741AC3BBL, (-6L));
                VECTOR(int32_t, 2) l_521 = (VECTOR(int32_t, 2))(1L, 7L);
                int64_t l_522 = 0x789979310B8B6142L;
                uint32_t l_523 = 0x52B91847L;
                uint16_t l_524 = 0x8F09L;
                int16_t l_525[6] = {0x1018L,0x728DL,0x1018L,0x1018L,0x728DL,0x1018L};
                int8_t l_526 = 1L;
                uint32_t l_527 = 1UL;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_511[i] = 0x58L;
                for (l_452[2] = 0; (l_452[2] > 1); l_452[2] = safe_add_func_uint32_t_u_u(l_452[2], 3))
                { /* block id: 168 */
                    uint8_t l_455 = 247UL;
                    uint8_t l_456 = 1UL;
                    int16_t l_457 = (-1L);
                    uint16_t l_458 = 0xD031L;
                    uint16_t l_459[5];
                    VECTOR(int32_t, 4) l_460 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x43733286L), 0x43733286L);
                    VECTOR(int32_t, 2) l_461 = (VECTOR(int32_t, 2))((-1L), 0x4C55D694L);
                    VECTOR(int32_t, 8) l_462 = (VECTOR(int32_t, 8))(0x36110386L, (VECTOR(int32_t, 4))(0x36110386L, (VECTOR(int32_t, 2))(0x36110386L, 6L), 6L), 6L, 0x36110386L, 6L);
                    uint32_t l_463 = 4294967289UL;
                    VECTOR(int32_t, 4) l_464 = (VECTOR(int32_t, 4))(0x384ABCE2L, (VECTOR(int32_t, 2))(0x384ABCE2L, 0x531A6B27L), 0x531A6B27L);
                    uint8_t l_465 = 0xB6L;
                    VECTOR(int32_t, 2) l_466 = (VECTOR(int32_t, 2))(0x7686FE12L, (-8L));
                    VECTOR(int32_t, 8) l_467 = (VECTOR(int32_t, 8))(0x4412ACFFL, (VECTOR(int32_t, 4))(0x4412ACFFL, (VECTOR(int32_t, 2))(0x4412ACFFL, 8L), 8L), 8L, 0x4412ACFFL, 8L);
                    uint64_t l_468 = 0x9CD9867D08A5304AL;
                    uint8_t l_469 = 255UL;
                    int64_t l_470 = 0x3127AD8EE91EAF27L;
                    int64_t l_471 = 1L;
                    uint64_t l_472 = 1UL;
                    uint32_t l_473 = 1UL;
                    uint32_t l_474 = 0xB630BACCL;
                    uint32_t l_475 = 0x9B238248L;
                    int16_t l_476 = 0L;
                    uint32_t l_477[10][5] = {{0xBAE2B226L,0x1D551D55L,0xD89FAE1AL,0x1D551D55L,0xBAE2B226L},{0xBAE2B226L,0x1D551D55L,0xD89FAE1AL,0x1D551D55L,0xBAE2B226L},{0xBAE2B226L,0x1D551D55L,0xD89FAE1AL,0x1D551D55L,0xBAE2B226L},{0xBAE2B226L,0x1D551D55L,0xD89FAE1AL,0x1D551D55L,0xBAE2B226L},{0xBAE2B226L,0x1D551D55L,0xD89FAE1AL,0x1D551D55L,0xBAE2B226L},{0xBAE2B226L,0x1D551D55L,0xD89FAE1AL,0x1D551D55L,0xBAE2B226L},{0xBAE2B226L,0x1D551D55L,0xD89FAE1AL,0x1D551D55L,0xBAE2B226L},{0xBAE2B226L,0x1D551D55L,0xD89FAE1AL,0x1D551D55L,0xBAE2B226L},{0xBAE2B226L,0x1D551D55L,0xD89FAE1AL,0x1D551D55L,0xBAE2B226L},{0xBAE2B226L,0x1D551D55L,0xD89FAE1AL,0x1D551D55L,0xBAE2B226L}};
                    VECTOR(uint32_t, 4) l_478 = (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x389F05D0L), 0x389F05D0L);
                    int32_t l_479 = 0x70BABB56L;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_459[i] = 2UL;
                    l_456 = (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x24L, (-9L))), 0x69L, 1L)).z , l_455);
                    l_459[1] |= (l_458 = l_457);
                    if ((l_479 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(l_460.zwxz)), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(l_461.yy)).xyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(l_462.s22)), (int32_t)l_463))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(l_464.xzwyzxxw)).s55, (int32_t)l_465))))), 0x08A54655L, (-1L), 0L, 0L)), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_466.xyxyyxyxyxyyyxyy)).s40df, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_467.s34164724)).even)).lo)).yxyx))).ywywwwxz))).lo)))))))))), (((l_469 = l_468) , l_470) , (((l_471 , (l_476 = ((l_472 , l_473) , ((l_474 = 0x0FL) , l_475)))) , l_477[5][2]) , l_478.x)), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 8))(0x2BF658F8L)), 0x067992C3L)).s8))
                    { /* block id: 176 */
                        uint16_t l_480 = 0xEB62L;
                        VECTOR(int32_t, 8) l_481 = (VECTOR(int32_t, 8))(0x6A15F2B1L, (VECTOR(int32_t, 4))(0x6A15F2B1L, (VECTOR(int32_t, 2))(0x6A15F2B1L, 0L), 0L), 0L, 0x6A15F2B1L, 0L);
                        int32_t *l_482 = (void*)0;
                        union U2 l_484 = {0};
                        union U2 *l_483[9][9] = {{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484}};
                        union U2 *l_485[5] = {&l_484,&l_484,&l_484,&l_484,&l_484};
                        union U2 *l_486 = &l_484;
                        int i, j;
                        l_460.z = 4L;
                        l_482 = ((l_480 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_481.s4216103077210233)).lo)).s3) , l_482);
                        l_486 = (l_485[3] = l_483[4][4]);
                    }
                    else
                    { /* block id: 181 */
                        int32_t l_487 = 0x73440FB1L;
                        uint32_t l_488 = 0xDFB0D941L;
                        l_487 = (l_487 , (l_466.x ^= l_488));
                    }
                }
                l_490 = l_489;
                l_527 &= ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(l_491.wxwy)).zyxzxxxzyzyzyyxy, ((VECTOR(int32_t, 8))(l_492.wzxxzzwx)).s0621277326736020))).s8952, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(0x28782FEBL, l_493, 0x53FE2603L, (l_495 = (l_494 = 0x0769C75DL)), (((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))((l_504 |= (l_503 &= ((l_501 = ((l_500 = (--l_497)) , l_501)) , l_502))), l_505, 18446744073709551615UL, 0xDC0FF4D86060A22FL)).xwywzzyz)).s67, ((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 16))(l_506.s042896ca0242a00e)).s9f, ((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_507.xy)), 0x14DA2C40D9A2ECBFL, 0x9F0B12B1D51664BEL, (l_508 &= FAKE_DIVERGE(p_840->group_2_offset, get_group_id(2), 10)), 0xD58371FA1E8CE01DL, 0xCEC2F4FCB5C66CB2L, 18446744073709551614UL)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_509.yxyx)).lo)), 8UL, 18446744073709551610UL)).wwwyzyzy))).hi, ((VECTOR(uint64_t, 4))(0xE0C598B08106D7B5L, ((VECTOR(uint64_t, 2))(0x9E6E4D090545F874L, 0x04FF7607CA6B39A7L)), 6UL))))).odd))), ((VECTOR(uint64_t, 8))(l_510.xzwzywyz)).s73)))))), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 4))(l_511[0], 0x0B027EAAA2163772L, 1UL, 0x4BCC445593A56790L)).lo, ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 4))(l_512.s2407)).lo, (uint64_t)l_513[5][0], (uint64_t)l_514)))))).xxyxyyxyxyyxxxxx)).s95))).yyxyxxxy)).even)).lo))).even , ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_515.xyxyyzwz)).hi)).lo, ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 8))(l_516.yyxxxyyy)).s32, ((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(l_517.zzwy)).yzzzzwzzzxwwyzxz, ((VECTOR(uint16_t, 8))(l_518.yyxxxxyy)).s0316626171726273))).sbf)))))).lo), 0x363F3F98L, 0x5A5EF8C5L, 0x62C58FA0L)), ((VECTOR(int32_t, 2))((-3L), 0x4E6D39E8L)).xxxyxyyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_519.yy)).yyyy)).zwzwwwyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x6CF2D6E7L, 0x6B8DD0CEL)))).even, 0x1065D479L, 0x78EA9371L, ((VECTOR(int32_t, 4))(l_520.s3102)), ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(0x62C8192CL, 0x647A9B4BL)).xyxyyxxx, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_521.xyyxxyyy)))).lo)), ((VECTOR(int32_t, 16))((l_523 = l_522), l_524, ((VECTOR(int32_t, 2))(0x6A49E31DL)), ((VECTOR(int32_t, 4))((-4L))), 0x5A56DFBFL, l_525[1], ((VECTOR(int32_t, 2))(8L)), 0x269B653EL, l_526, 6L, 7L)).scdd0, ((VECTOR(int32_t, 4))(0x400D5EB4L))))).xzxzxyyx))), (-1L))).hi, ((VECTOR(int32_t, 8))(0x7769F266L))))).s2072221524063760, ((VECTOR(int32_t, 16))(0x7BC3E05FL)), ((VECTOR(int32_t, 16))(1L))))).s0c98)).zxxywxwzywwywwxx)).lo, ((VECTOR(int32_t, 8))(1L))))).s30)), 0L, 0x0EA9A539L)).wwxzxyzy))).odd))).xywxxwxyywwzzxyy)).scdc9, ((VECTOR(int32_t, 4))(3L))))).w;
                unsigned int result = 0;
                int l_452_i0;
                for (l_452_i0 = 0; l_452_i0 < 7; l_452_i0++) {
                    result += l_452[l_452_i0];
                }
                result += l_489;
                result += l_490;
                result += l_491.w;
                result += l_491.z;
                result += l_491.y;
                result += l_491.x;
                result += l_492.w;
                result += l_492.z;
                result += l_492.y;
                result += l_492.x;
                result += l_493;
                result += l_494;
                result += l_495;
                result += l_496;
                result += l_497;
                result += l_500;
                result += l_501.f0;
                result += l_501.f1;
                result += l_502;
                result += l_503;
                result += l_504;
                result += l_505;
                result += l_506.sf;
                result += l_506.se;
                result += l_506.sd;
                result += l_506.sc;
                result += l_506.sb;
                result += l_506.sa;
                result += l_506.s9;
                result += l_506.s8;
                result += l_506.s7;
                result += l_506.s6;
                result += l_506.s5;
                result += l_506.s4;
                result += l_506.s3;
                result += l_506.s2;
                result += l_506.s1;
                result += l_506.s0;
                result += l_507.w;
                result += l_507.z;
                result += l_507.y;
                result += l_507.x;
                result += l_508;
                result += l_509.y;
                result += l_509.x;
                result += l_510.w;
                result += l_510.z;
                result += l_510.y;
                result += l_510.x;
                int l_511_i0;
                for (l_511_i0 = 0; l_511_i0 < 1; l_511_i0++) {
                    result += l_511[l_511_i0];
                }
                result += l_512.s7;
                result += l_512.s6;
                result += l_512.s5;
                result += l_512.s4;
                result += l_512.s3;
                result += l_512.s2;
                result += l_512.s1;
                result += l_512.s0;
                int l_513_i0, l_513_i1;
                for (l_513_i0 = 0; l_513_i0 < 9; l_513_i0++) {
                    for (l_513_i1 = 0; l_513_i1 < 4; l_513_i1++) {
                        result += l_513[l_513_i0][l_513_i1];
                    }
                }
                result += l_514;
                result += l_515.w;
                result += l_515.z;
                result += l_515.y;
                result += l_515.x;
                result += l_516.y;
                result += l_516.x;
                result += l_517.w;
                result += l_517.z;
                result += l_517.y;
                result += l_517.x;
                result += l_518.y;
                result += l_518.x;
                result += l_519.y;
                result += l_519.x;
                result += l_520.s7;
                result += l_520.s6;
                result += l_520.s5;
                result += l_520.s4;
                result += l_520.s3;
                result += l_520.s2;
                result += l_520.s1;
                result += l_520.s0;
                result += l_521.y;
                result += l_521.x;
                result += l_522;
                result += l_523;
                result += l_524;
                int l_525_i0;
                for (l_525_i0 = 0; l_525_i0 < 6; l_525_i0++) {
                    result += l_525[l_525_i0];
                }
                result += l_526;
                result += l_527;
                atomic_add(&p_840->g_special_values[86 * get_linear_group_id() + 71], result);
            }
            else
            { /* block id: 197 */
                (1 + 1);
            }
            l_529--;
            (*l_321) &= ((void*)0 != p_840->g_532);
            for (l_414 = 3; (l_414 < (-22)); l_414 = safe_sub_func_uint64_t_u_u(l_414, 7))
            { /* block id: 204 */
                int16_t l_554 = (-6L);
                int32_t l_557[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_557[i] = 0x7102A989L;
                for (p_840->g_345 = (-1); (p_840->g_345 >= 21); p_840->g_345 = safe_add_func_int16_t_s_s(p_840->g_345, 2))
                { /* block id: 207 */
                    union U2 *l_537 = (void*)0;
                    union U2 **l_538 = &l_349;
                    int16_t *l_550 = &p_840->g_107;
                    int32_t *l_555[4][7] = {{&l_423[3][5],&p_840->g_396[4],&l_423[3][5],&l_423[3][5],&p_840->g_396[4],&l_423[3][5],&l_423[3][5]},{&l_423[3][5],&p_840->g_396[4],&l_423[3][5],&l_423[3][5],&p_840->g_396[4],&l_423[3][5],&l_423[3][5]},{&l_423[3][5],&p_840->g_396[4],&l_423[3][5],&l_423[3][5],&p_840->g_396[4],&l_423[3][5],&l_423[3][5]},{&l_423[3][5],&p_840->g_396[4],&l_423[3][5],&l_423[3][5],&p_840->g_396[4],&l_423[3][5],&l_423[3][5]}};
                    int32_t l_556 = 0x69A36828L;
                    int i, j;
                    (*l_538) = l_537;
                    (*p_840->g_262) = (~(safe_sub_func_uint16_t_u_u(((*p_21) , (safe_unary_minus_func_uint64_t_u(((safe_add_func_int8_t_s_s((*p_840->g_116), (safe_mul_func_int16_t_s_s(((*l_550) &= (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((void*)0 == &p_840->g_107), ((VECTOR(uint32_t, 2))(0x22789842L, 0x500DC684L)).even)), ((*l_321) <= (*l_321))))), (((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(3L, 0x4294BD45L, (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_553.s42764671)).s5, l_554)), (-1L), (l_557[0] = (l_556 = (~p_840->g_418))), 0x36F01C8DL, 0x2A40496CL, 2L)).odd, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(p_840->g_558.xx)).xxyx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_559.s5033)).wzwyxyzxxzxyyzxw)).even)))).hi, ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(p_840->g_560.s0dde8be5)).even, ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 2))(p_840->g_561.xz)).xxyy, (uint32_t)0xF29932ECL))), ((VECTOR(uint32_t, 4))(0x8EB48899L)))))).s2, l_556, FAKE_DIVERGE(p_840->group_0_offset, get_group_id(0), 10), ((VECTOR(uint32_t, 2))(4294967292UL)), ((VECTOR(uint32_t, 2))(2UL)), 0x29EF9DB9L)).hi, ((VECTOR(uint32_t, 4))(0xB656E1FAL))))).odd, ((VECTOR(uint32_t, 2))(0xD67FA6A8L)), ((VECTOR(uint32_t, 2))(0x5E395B89L))))), 0x93BC8A55L, ((VECTOR(uint32_t, 2))(4294967291UL)), 1UL, 1UL, 0x2F882711L)), ((VECTOR(uint32_t, 8))(0x8A716FECL))))).s61))).yxxx))).hi, ((VECTOR(uint32_t, 2))(4UL))))).yyxx))).zzxywwwxwwzwwwzw)).scf33))).y > 0x6C14EAA1EC64C60BL))))) , l_556)))), (*l_321))));
                    if (l_556)
                        break;
                }
            }
        }
    }
    (*l_564) = l_562;
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_33 p_840->g_44 p_840->g_31 p_840->g_58 p_840->g_4 p_840->g_77 p_840->g_64 p_840->g_86 p_840->g_comm_values p_840->g_107 p_840->g_56 p_840->g_7 p_840->g_115 p_840->g_123 p_840->g_128 p_840->g_135 p_840->g_129 p_840->g_143 p_840->g_158 p_840->g_199 p_840->g_200 p_840->g_229 p_840->g_230 p_840->g_261
 * writes: p_840->g_33 p_840->g_44 p_840->g_56 p_840->g_58 p_840->g_64 p_840->g_31 p_840->g_107 p_840->g_86 p_840->g_7 p_840->g_135 p_840->g_200 p_840->g_262
 */
int8_t * func_22(int8_t  p_23, uint32_t  p_24, int8_t * p_25, struct S3 * p_840)
{ /* block id: 8 */
    int32_t *l_30 = &p_840->g_31;
    int32_t *l_32[6];
    uint32_t *l_42 = (void*)0;
    uint32_t *l_43 = &p_840->g_44;
    int64_t *l_55 = &p_840->g_56;
    int8_t **l_60 = (void*)0;
    int8_t *l_62 = (void*)0;
    int8_t **l_61 = &l_62;
    uint64_t *l_63 = &p_840->g_64;
    int i;
    for (i = 0; i < 6; i++)
        l_32[i] = &p_840->g_31;
    p_840->g_33--;
    (*p_840->g_261) = func_36(p_23, (--(*l_43)), (l_30 == l_43), ((*l_63) = (safe_add_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((0xED3351F4L < GROUP_DIVERGE(1, 1)) ^ (*l_30)), func_26(((*l_61) = (p_25 = func_51(((*l_55) = p_23), &p_840->g_7[7], &p_840->g_31, p_840))), p_24, p_840))), 0xF8F04B7466640DD1L))), (*l_30), p_840);
    return (*p_840->g_128);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_26(int8_t * p_27, int8_t  p_28, struct S3 * p_840)
{ /* block id: 5 */
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_4 p_840->g_77 p_840->g_64 p_840->g_86 p_840->g_comm_values p_840->g_107 p_840->g_56 p_840->g_7 p_840->g_33 p_840->g_115 p_840->g_31 p_840->g_123 p_840->g_128 p_840->g_135 p_840->g_129 p_840->g_44 p_840->g_143 p_840->g_158 p_840->g_199 p_840->g_200 p_840->g_229 p_840->g_230 p_840->g_58
 * writes: p_840->g_31 p_840->g_107 p_840->g_58 p_840->g_33 p_840->g_86 p_840->g_7 p_840->g_135 p_840->g_200
 */
int32_t * func_36(int64_t  p_37, uint32_t  p_38, int32_t  p_39, uint64_t  p_40, uint64_t  p_41, struct S3 * p_840)
{ /* block id: 18 */
    VECTOR(int8_t, 2) l_72 = (VECTOR(int8_t, 2))(9L, 0x7EL);
    VECTOR(int64_t, 2) l_125 = (VECTOR(int64_t, 2))((-1L), (-1L));
    int32_t l_208 = 0x4D4F550BL;
    int32_t l_209 = (-1L);
    int32_t l_210 = 0x23BC6753L;
    int32_t l_211 = 0x1EAF598EL;
    int32_t l_212 = 0x00E6A570L;
    int32_t l_213 = (-10L);
    int32_t l_214 = (-1L);
    int32_t l_215 = 0x366CBA3DL;
    int32_t l_216[2];
    uint64_t l_217 = 18446744073709551615UL;
    VECTOR(int8_t, 2) l_228 = (VECTOR(int8_t, 2))((-1L), 2L);
    uint32_t *l_258 = &p_840->g_44;
    uint32_t **l_257 = &l_258;
    uint32_t ***l_256 = &l_257;
    uint8_t l_259 = 0x45L;
    int i;
    for (i = 0; i < 2; i++)
        l_216[i] = 0L;
    for (p_37 = 0; (p_37 >= 14); p_37 = safe_add_func_int64_t_s_s(p_37, 3))
    { /* block id: 21 */
        int32_t l_71 = 0L;
        VECTOR(uint64_t, 8) l_124 = (VECTOR(uint64_t, 8))(0x64F81135C14CCD6CL, (VECTOR(uint64_t, 4))(0x64F81135C14CCD6CL, (VECTOR(uint64_t, 2))(0x64F81135C14CCD6CL, 0x52F1CB2A3AB48436L), 0x52F1CB2A3AB48436L), 0x52F1CB2A3AB48436L, 0x64F81135C14CCD6CL, 0x52F1CB2A3AB48436L);
        uint8_t *l_198 = &p_840->g_33;
        int32_t l_207[10] = {0x05D671C7L,0L,(-1L),0L,0x05D671C7L,0x05D671C7L,0L,(-1L),0L,0x05D671C7L};
        uint32_t **l_254 = (void*)0;
        uint32_t ***l_253 = &l_254;
        uint32_t ****l_255 = &l_253;
        int32_t *l_260 = &l_208;
        int i;
        if ((safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(((((*l_198) = func_26(((0x186F270ADFF402E8L == ((l_71 &= (-5L)) , (((p_840->g_4.y == (0x33L > ((VECTOR(int8_t, 2))(l_72.xx)).hi)) != (safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(p_840->g_77.s6266)).x, (func_78(func_84(p_840->g_64, p_840), ((safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_840->local_1_offset, get_local_id(1), 10), (((l_72.y , 0x88C7F9DB91B04C5DL) != (p_41 = ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 4))(p_840->g_123.wxww)).xzxxyzwwxzwyxywz, ((VECTOR(uint64_t, 4))(l_124.s0032)).zyywyxzzxyyyxyyw, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_125.xyyyxxxxyyyyyxyy)).s4182)).yzwzzzwxzyxzxyxx))))).s21e9)).wwwzwxzzxxwzwwyw)).s58ea)).zyxxxyywxxwzyzzx))).s2f35, (uint64_t)((safe_sub_func_uint16_t_u_u((l_72.y == l_125.x), p_840->g_123.w)) == 0x0518L)))).odd, ((VECTOR(uint64_t, 2))(0xCC9C010315540926L)), ((VECTOR(uint64_t, 2))(0x988898D0BA58DE8AL))))), 0xB83A45DBAEAE63DAL, 1UL)).x)) , l_72.x))) , &p_840->g_64), p_39, p_840->g_128, p_840->g_123.w, p_840) , 0x12L))), p_38))) != FAKE_DIVERGE(p_840->group_2_offset, get_group_id(2), 10)))) , (void*)0), p_40, p_840)) , p_41) , p_39), p_840->g_56)), l_124.s5)))
        { /* block id: 41 */
            (*p_840->g_199) = p_840->g_158;
        }
        else
        { /* block id: 43 */
            int32_t *l_201 = &p_840->g_31;
            int32_t *l_202 = (void*)0;
            int32_t *l_203 = &p_840->g_119;
            int32_t *l_204 = (void*)0;
            int32_t *l_205 = &l_71;
            int32_t *l_206[9] = {&p_840->g_119,&p_840->g_119,&p_840->g_119,&p_840->g_119,&p_840->g_119,&p_840->g_119,&p_840->g_119,&p_840->g_119,&p_840->g_119};
            uint32_t ***l_220 = (void*)0;
            uint32_t *l_223 = &p_840->g_44;
            uint32_t **l_222 = &l_223;
            uint32_t ***l_221 = &l_222;
            int i;
            l_217++;
            if (l_217)
                break;
            (*l_221) = (void*)0;
        }
        if ((*p_840->g_199))
            continue;
        (*l_260) = (((*p_840->g_199) < (((((safe_rshift_func_int16_t_s_u(((-8L) == p_840->g_comm_values[p_840->tid]), 13)) , (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(l_228.yy)).yyxxxxyyxxxxyyxy, ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_840->g_229.s5e)).yxxyyxyy)).s6756476060707673, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(2L, 9L)).xxxy)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_840->g_230.s5074fc59c9fe5a34)).s18)), 0x4AL, 0x1DL)).s5221544063745333)))))).sf, (safe_rshift_func_uint8_t_u_u(((*l_198)--), FAKE_DIVERGE(p_840->local_2_offset, get_local_id(2), 10)))))) >= FAKE_DIVERGE(p_840->global_0_offset, get_global_id(0), 10)) , ((safe_lshift_func_uint8_t_u_s(0xD5L, 0)) && ((safe_sub_func_int16_t_s_s((~(safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((l_207[9] > (safe_mul_func_int16_t_s_s(0x7A84L, ((safe_rshift_func_uint16_t_u_s(((safe_div_func_int8_t_s_s((!(safe_mod_func_uint64_t_u_u(((65529UL & (l_214 = ((safe_add_func_int16_t_s_s((l_71 &= (((*l_255) = l_253) == l_256)), p_37)) & FAKE_DIVERGE(p_840->group_1_offset, get_group_id(1), 10)))) != 7L), 0x1BC6A5EF5CE96DD3L))), 0x1AL)) < (**p_840->g_128)), p_840->g_31)) ^ p_38)))) <= p_840->g_7[0]), p_840->g_58)), 0x6E43L))), FAKE_DIVERGE(p_840->group_0_offset, get_group_id(0), 10))) , l_259))) , p_39)) == 0xD90FL);
        if ((*l_260))
            continue;
    }
    return &p_840->g_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_58
 * writes: p_840->g_58
 */
int8_t * func_51(int64_t  p_52, int8_t * p_53, int32_t * p_54, struct S3 * p_840)
{ /* block id: 12 */
    int32_t *l_57 = &p_840->g_58;
    int8_t *l_59[10][10] = {{&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],(void*)0,&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],&p_840->g_7[0]},{&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],(void*)0,&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],&p_840->g_7[0]},{&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],(void*)0,&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],&p_840->g_7[0]},{&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],(void*)0,&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],&p_840->g_7[0]},{&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],(void*)0,&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],&p_840->g_7[0]},{&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],(void*)0,&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],&p_840->g_7[0]},{&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],(void*)0,&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],&p_840->g_7[0]},{&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],(void*)0,&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],&p_840->g_7[0]},{&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],(void*)0,&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],&p_840->g_7[0]},{&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],(void*)0,&p_840->g_7[0],(void*)0,(void*)0,&p_840->g_7[0],&p_840->g_7[0]}};
    int i, j;
    (*l_57) ^= ((void*)0 != &p_840->g_56);
    return l_59[0][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_123 p_840->g_135 p_840->g_129 p_840->g_44 p_840->g_143 p_840->g_64 p_840->g_7
 * writes: p_840->g_86 p_840->g_7 p_840->g_135
 */
uint32_t  func_78(int64_t  p_79, uint64_t * p_80, int32_t  p_81, int8_t ** p_82, uint64_t  p_83, struct S3 * p_840)
{ /* block id: 33 */
    int32_t *l_130[2][8] = {{&p_840->g_119,&p_840->g_31,&p_840->g_119,&p_840->g_119,&p_840->g_31,&p_840->g_119,&p_840->g_119,&p_840->g_31},{&p_840->g_119,&p_840->g_31,&p_840->g_119,&p_840->g_119,&p_840->g_31,&p_840->g_119,&p_840->g_119,&p_840->g_31}};
    int32_t **l_131 = (void*)0;
    VECTOR(int8_t, 16) l_132 = (VECTOR(int8_t, 16))(0x3EL, (VECTOR(int8_t, 4))(0x3EL, (VECTOR(int8_t, 2))(0x3EL, 0x61L), 0x61L), 0x61L, 0x3EL, 0x61L, (VECTOR(int8_t, 2))(0x3EL, 0x61L), (VECTOR(int8_t, 2))(0x3EL, 0x61L), 0x3EL, 0x61L, 0x3EL, 0x61L);
    union U2 l_140 = {0};
    VECTOR(int8_t, 16) l_141 = (VECTOR(int8_t, 16))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x41L), 0x41L), 0x41L, 9L, 0x41L, (VECTOR(int8_t, 2))(9L, 0x41L), (VECTOR(int8_t, 2))(9L, 0x41L), 9L, 0x41L, 9L, 0x41L);
    VECTOR(int32_t, 16) l_142 = (VECTOR(int32_t, 16))(0x47E52D05L, (VECTOR(int32_t, 4))(0x47E52D05L, (VECTOR(int32_t, 2))(0x47E52D05L, 0x78C25799L), 0x78C25799L), 0x78C25799L, 0x47E52D05L, 0x78C25799L, (VECTOR(int32_t, 2))(0x47E52D05L, 0x78C25799L), (VECTOR(int32_t, 2))(0x47E52D05L, 0x78C25799L), 0x47E52D05L, 0x78C25799L, 0x47E52D05L, 0x78C25799L);
    uint64_t *l_195 = &p_840->g_100;
    uint32_t *l_196 = (void*)0;
    uint32_t *l_197 = (void*)0;
    int i, j;
    l_130[1][5] = l_130[1][7];
    p_840->g_86.x = (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_132.sab33)).wyxwzwzwwzywwxzw)).sb111)).w != ((p_79 , (safe_div_func_int8_t_s_s((p_840->g_123.x <= (((VECTOR(uint32_t, 16))(p_840->g_135.s7dc2514dc0aa95c4)).sc && 0x4576A339L)), (((*p_82) == (p_840->g_44 , (void*)0)) & 0xF213L)))) > (((void*)0 != &p_840->g_33) > p_840->g_44)));
    p_840->g_86.x = ((safe_div_func_int64_t_s_s((-1L), 1UL)) , ((safe_sub_func_uint8_t_u_u(p_79, (l_140 , ((VECTOR(int8_t, 16))(9L, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_141.sbe63813a0b3c3f10)))).s5, ((p_840->g_135.s5 = ((((0x27B00CA6L & (((**p_82) = (((+((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_142.sef)).xxxy)).x) , ((void*)0 != &p_840->g_44)) >= (p_840->g_143[0][0][2] == ((((((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((!(&p_840->g_100 == l_195)), p_83)), p_83)) | p_840->g_64) > (**p_82)) | 0x2DCEL) ^ (**p_82)) , l_130[1][7])))) ^ p_79)) , p_79) <= p_83) | p_840->g_123.z)) <= p_81), ((VECTOR(int8_t, 8))(6L)), 0x40L, (**p_82), ((VECTOR(int8_t, 2))(0x20L)), 0x16L)).se))) <= 0x44L));
    return p_81;
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_86 p_840->g_4 p_840->g_comm_values p_840->g_107 p_840->g_56 p_840->g_7 p_840->g_33 p_840->g_115 p_840->g_31
 * writes: p_840->g_31 p_840->g_107 p_840->g_58 p_840->g_33
 */
int64_t  func_84(uint32_t  p_85, struct S3 * p_840)
{ /* block id: 23 */
    int32_t *l_87 = (void*)0;
    int32_t *l_88 = &p_840->g_31;
    VECTOR(int32_t, 16) l_91 = (VECTOR(int32_t, 16))(0x70658699L, (VECTOR(int32_t, 4))(0x70658699L, (VECTOR(int32_t, 2))(0x70658699L, 0x333379BBL), 0x333379BBL), 0x333379BBL, 0x70658699L, 0x333379BBL, (VECTOR(int32_t, 2))(0x70658699L, 0x333379BBL), (VECTOR(int32_t, 2))(0x70658699L, 0x333379BBL), 0x70658699L, 0x333379BBL, 0x70658699L, 0x333379BBL);
    VECTOR(uint32_t, 2) l_98 = (VECTOR(uint32_t, 2))(0xFB082E28L, 0xCE6FA973L);
    uint64_t *l_99[3][2][4] = {{{&p_840->g_100,(void*)0,&p_840->g_100,&p_840->g_100},{&p_840->g_100,(void*)0,&p_840->g_100,&p_840->g_100}},{{&p_840->g_100,(void*)0,&p_840->g_100,&p_840->g_100},{&p_840->g_100,(void*)0,&p_840->g_100,&p_840->g_100}},{{&p_840->g_100,(void*)0,&p_840->g_100,&p_840->g_100},{&p_840->g_100,(void*)0,&p_840->g_100,&p_840->g_100}}};
    uint8_t l_101[2];
    uint32_t *l_106[7][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t *l_108 = (void*)0;
    int64_t *l_109 = (void*)0;
    int64_t *l_110 = (void*)0;
    int32_t *l_111 = (void*)0;
    int32_t *l_112 = &p_840->g_58;
    int32_t l_113 = 9L;
    uint8_t *l_114 = &p_840->g_33;
    int32_t *l_118[8][2] = {{&p_840->g_119,&p_840->g_119},{&p_840->g_119,&p_840->g_119},{&p_840->g_119,&p_840->g_119},{&p_840->g_119,&p_840->g_119},{&p_840->g_119,&p_840->g_119},{&p_840->g_119,&p_840->g_119},{&p_840->g_119,&p_840->g_119},{&p_840->g_119,&p_840->g_119}};
    uint64_t l_120 = 4UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_101[i] = 0x2BL;
    (*l_88) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_840->g_86.yyyxxyyyyyxyxyyy)).s0f)).hi;
    l_120 &= ((((safe_mul_func_uint8_t_u_u(((*l_114) = (((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x5C475587L, ((VECTOR(int32_t, 2))(l_91.sdc)), (safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((*l_112) = (safe_mod_func_uint32_t_u_u((18446744073709551615UL || ((*l_88) = (p_840->g_4.y < (+((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_98.yxyy)), 0UL, (~((!((l_87 == (void*)0) && 0xD0D3007418113439L)) >= (-7L))), 0xCBA4768EL, 0x1A1E6DEAL, (p_840->g_comm_values[p_840->tid] > (l_101[0]++)), ((VECTOR(uint32_t, 8))(0UL, p_840->g_4.y, ((VECTOR(uint32_t, 2))(9UL, 0xC0B8F99DL)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0xA8D4FF7DL, 5UL)))), 0xB784503AL, 0x54D2AC32L)).s2, 4294967286UL, (~((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 4))((safe_lshift_func_uint16_t_u_s((((((p_840->g_107 |= 0x7685C130L) > p_85) || 8L) , &p_840->g_7[0]) == (void*)0), 8)), 4UL, 0UL, 0xA3813E0DL)).xxywzyzw, ((VECTOR(uint32_t, 8))(4294967291UL))))).odd, ((VECTOR(uint32_t, 4))(0xCBD83D76L))))).x), 3UL, 4UL, 4294967292UL, 0x7EAAE7FFL)).s6f2d)).w)))), p_840->g_56))), p_85)) && 4UL), GROUP_DIVERGE(1, 1))), p_85, p_840->g_7[0], 0x2BD29671L, (-1L))))).lo)).wwxyyxzzywxwxyww)).sfa41)).wxxxzwyx, ((VECTOR(int32_t, 8))(0x7EA996BBL))))).s16)).xxxxxxxxyyyxxyxy, (int32_t)l_113))).s8 < p_840->g_86.y)), p_85)) || p_840->g_33) , p_840->g_115) != (void*)0);
    return (*l_88);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[86];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 86; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[86];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 86; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_comm_values[i] = 1;
    struct S3 c_841;
    struct S3* p_840 = &c_841;
    struct S3 c_842 = {
        (VECTOR(int64_t, 2))(0x61E3FF14EB4C8F0DL, 2L), // p_840->g_4
        {0L,0L,0L,0L,0L,0L,0L,0L}, // p_840->g_7
        0x5BEC151DL, // p_840->g_31
        0x8AL, // p_840->g_33
        4294967287UL, // p_840->g_44
        0x67338D581CA9286DL, // p_840->g_56
        8L, // p_840->g_58
        1UL, // p_840->g_64
        (VECTOR(uint8_t, 8))(0x76L, (VECTOR(uint8_t, 4))(0x76L, (VECTOR(uint8_t, 2))(0x76L, 250UL), 250UL), 250UL, 0x76L, 250UL), // p_840->g_77
        (VECTOR(int32_t, 2))(0L, 0L), // p_840->g_86
        18446744073709551611UL, // p_840->g_100
        0x4D72L, // p_840->g_107
        0x61L, // p_840->g_117
        &p_840->g_117, // p_840->g_116
        &p_840->g_116, // p_840->g_115
        1L, // p_840->g_119
        (VECTOR(uint64_t, 4))(0xFB40517B6AFEBA28L, (VECTOR(uint64_t, 2))(0xFB40517B6AFEBA28L, 0UL), 0UL), // p_840->g_123
        &p_840->g_7[0], // p_840->g_129
        &p_840->g_129, // p_840->g_128
        (VECTOR(uint32_t, 16))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0xD40A597CL), 0xD40A597CL), 0xD40A597CL, 4294967288UL, 0xD40A597CL, (VECTOR(uint32_t, 2))(4294967288UL, 0xD40A597CL), (VECTOR(uint32_t, 2))(4294967288UL, 0xD40A597CL), 4294967288UL, 0xD40A597CL, 4294967288UL, 0xD40A597CL), // p_840->g_135
        9UL, // p_840->g_144
        1UL, // p_840->g_145
        4294967293UL, // p_840->g_146
        4294967295UL, // p_840->g_147
        {{{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL}},{{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL}},{{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL}},{{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL}},{{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL}},{{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL}},{{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL}},{{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL},{4294967288UL,0x38158088L,4294967286UL,0x9E97AACEL,0x2E19209CL}}}, // p_840->g_148
        {{0x82994EBAL},{0x82994EBAL},{0x82994EBAL},{0x82994EBAL},{0x82994EBAL},{0x82994EBAL},{0x82994EBAL}}, // p_840->g_149
        (VECTOR(uint32_t, 2))(0x1C83726DL, 4294967288UL), // p_840->g_150
        {6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL}, // p_840->g_151
        4294967293UL, // p_840->g_152
        3UL, // p_840->g_153
        0xC6D56ED2L, // p_840->g_154
        4294967295UL, // p_840->g_155
        {{{0xC739D5C1L,0xDCBAFF72L,0x6A1B3C1EL,0xDCBAFF72L,0xC739D5C1L,0xC739D5C1L,0xDCBAFF72L,0x6A1B3C1EL,0xDCBAFF72L}},{{0xC739D5C1L,0xDCBAFF72L,0x6A1B3C1EL,0xDCBAFF72L,0xC739D5C1L,0xC739D5C1L,0xDCBAFF72L,0x6A1B3C1EL,0xDCBAFF72L}},{{0xC739D5C1L,0xDCBAFF72L,0x6A1B3C1EL,0xDCBAFF72L,0xC739D5C1L,0xC739D5C1L,0xDCBAFF72L,0x6A1B3C1EL,0xDCBAFF72L}}}, // p_840->g_156
        4294967295UL, // p_840->g_157
        6UL, // p_840->g_158
        0x9F08BABBL, // p_840->g_159
        7UL, // p_840->g_160
        0x34785C46L, // p_840->g_161
        0x85A425B5L, // p_840->g_162
        1UL, // p_840->g_163
        4294967295UL, // p_840->g_164
        3UL, // p_840->g_165
        1UL, // p_840->g_166
        0UL, // p_840->g_167
        {0x0149C121L,0x0149C121L}, // p_840->g_168
        4294967295UL, // p_840->g_169
        4294967294UL, // p_840->g_170
        0xAFECD871L, // p_840->g_171
        0xD74585E3L, // p_840->g_172
        {0x6BEB426BL,1UL,0x6BEB426BL,0x6BEB426BL,1UL,0x6BEB426BL,0x6BEB426BL,1UL,0x6BEB426BL}, // p_840->g_173
        4294967290UL, // p_840->g_174
        0x00192FCFL, // p_840->g_175
        0x5955131BL, // p_840->g_176
        0x34AE07ADL, // p_840->g_177
        {{{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL}},{{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL},{0xCACFC5F2L,9UL,4294967295UL,0UL,0x8F1CD69EL,2UL,0xE093A50BL,7UL,0x44AFDE6BL,4UL}}}, // p_840->g_178
        0xC80965D6L, // p_840->g_179
        0x99A9337AL, // p_840->g_180
        4294967295UL, // p_840->g_181
        0x84839B6CL, // p_840->g_182
        7UL, // p_840->g_183
        4294967288UL, // p_840->g_184
        {{{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L}},{{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L}},{{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L},{4294967295UL,1UL,0x1393EBF6L}}}, // p_840->g_185
        4294967293UL, // p_840->g_186
        0xD69D35C1L, // p_840->g_187
        0x4153CC62L, // p_840->g_188
        0UL, // p_840->g_189
        0x332DDE11L, // p_840->g_190
        {{{&p_840->g_147,(void*)0,&p_840->g_166,&p_840->g_187,&p_840->g_181,&p_840->g_147,&p_840->g_187,&p_840->g_152,&p_840->g_187,&p_840->g_147},{&p_840->g_147,(void*)0,&p_840->g_166,&p_840->g_187,&p_840->g_181,&p_840->g_147,&p_840->g_187,&p_840->g_152,&p_840->g_187,&p_840->g_147}},{{&p_840->g_147,(void*)0,&p_840->g_166,&p_840->g_187,&p_840->g_181,&p_840->g_147,&p_840->g_187,&p_840->g_152,&p_840->g_187,&p_840->g_147},{&p_840->g_147,(void*)0,&p_840->g_166,&p_840->g_187,&p_840->g_181,&p_840->g_147,&p_840->g_187,&p_840->g_152,&p_840->g_187,&p_840->g_147}},{{&p_840->g_147,(void*)0,&p_840->g_166,&p_840->g_187,&p_840->g_181,&p_840->g_147,&p_840->g_187,&p_840->g_152,&p_840->g_187,&p_840->g_147},{&p_840->g_147,(void*)0,&p_840->g_166,&p_840->g_187,&p_840->g_181,&p_840->g_147,&p_840->g_187,&p_840->g_152,&p_840->g_187,&p_840->g_147}},{{&p_840->g_147,(void*)0,&p_840->g_166,&p_840->g_187,&p_840->g_181,&p_840->g_147,&p_840->g_187,&p_840->g_152,&p_840->g_187,&p_840->g_147},{&p_840->g_147,(void*)0,&p_840->g_166,&p_840->g_187,&p_840->g_181,&p_840->g_147,&p_840->g_187,&p_840->g_152,&p_840->g_187,&p_840->g_147}},{{&p_840->g_147,(void*)0,&p_840->g_166,&p_840->g_187,&p_840->g_181,&p_840->g_147,&p_840->g_187,&p_840->g_152,&p_840->g_187,&p_840->g_147},{&p_840->g_147,(void*)0,&p_840->g_166,&p_840->g_187,&p_840->g_181,&p_840->g_147,&p_840->g_187,&p_840->g_152,&p_840->g_187,&p_840->g_147}},{{&p_840->g_147,(void*)0,&p_840->g_166,&p_840->g_187,&p_840->g_181,&p_840->g_147,&p_840->g_187,&p_840->g_152,&p_840->g_187,&p_840->g_147},{&p_840->g_147,(void*)0,&p_840->g_166,&p_840->g_187,&p_840->g_181,&p_840->g_147,&p_840->g_187,&p_840->g_152,&p_840->g_187,&p_840->g_147}}}, // p_840->g_143
        {{{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L}},{{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L}},{{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L},{0x4E1E5C57L,0x4E1E5C57L}}}, // p_840->g_200
        &p_840->g_200[1][5][1], // p_840->g_199
        (VECTOR(int8_t, 16))(0x62L, (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 0x70L), 0x70L), 0x70L, 0x62L, 0x70L, (VECTOR(int8_t, 2))(0x62L, 0x70L), (VECTOR(int8_t, 2))(0x62L, 0x70L), 0x62L, 0x70L, 0x62L, 0x70L), // p_840->g_229
        (VECTOR(int8_t, 16))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x4EL), 0x4EL), 0x4EL, (-6L), 0x4EL, (VECTOR(int8_t, 2))((-6L), 0x4EL), (VECTOR(int8_t, 2))((-6L), 0x4EL), (-6L), 0x4EL, (-6L), 0x4EL), // p_840->g_230
        &p_840->g_119, // p_840->g_262
        &p_840->g_262, // p_840->g_261
        {&p_840->g_56,&p_840->g_56,&p_840->g_56,&p_840->g_56,&p_840->g_56,&p_840->g_56,&p_840->g_56,&p_840->g_56,&p_840->g_56,&p_840->g_56}, // p_840->g_297
        {{{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]}},{{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]}},{{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]}},{{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]}},{{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]}},{{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]}},{{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]}},{{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]}},{{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]}},{{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]},{&p_840->g_297[6],&p_840->g_297[5],&p_840->g_297[5],&p_840->g_297[5]}}}, // p_840->g_296
        {{&p_840->g_296[2][2][1],&p_840->g_296[8][5][0],&p_840->g_296[2][2][1],&p_840->g_296[2][2][1],&p_840->g_296[8][5][0],&p_840->g_296[2][2][1]}}, // p_840->g_295
        255UL, // p_840->g_328
        {{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}}, // p_840->g_341
        4L, // p_840->g_345
        {0}, // p_840->g_350
        &p_840->g_44, // p_840->g_384
        {{&p_840->g_384,&p_840->g_384},{&p_840->g_384,&p_840->g_384},{&p_840->g_384,&p_840->g_384}}, // p_840->g_383
        {0x1C8ED147L,0x07F9EC9AL,0x1C8ED147L,0x1C8ED147L,0x07F9EC9AL,0x1C8ED147L,0x1C8ED147L}, // p_840->g_396
        (VECTOR(int32_t, 2))(0x5AF13EE5L, 0x26B7294BL), // p_840->g_399
        0x312371C1L, // p_840->g_418
        {0x52L,0x52L,0x52L}, // p_840->g_421
        &p_840->g_262, // p_840->g_532
        (VECTOR(uint32_t, 2))(4294967292UL, 0UL), // p_840->g_558
        (VECTOR(uint32_t, 16))(0xDC706811L, (VECTOR(uint32_t, 4))(0xDC706811L, (VECTOR(uint32_t, 2))(0xDC706811L, 0xB0B246E0L), 0xB0B246E0L), 0xB0B246E0L, 0xDC706811L, 0xB0B246E0L, (VECTOR(uint32_t, 2))(0xDC706811L, 0xB0B246E0L), (VECTOR(uint32_t, 2))(0xDC706811L, 0xB0B246E0L), 0xDC706811L, 0xB0B246E0L, 0xDC706811L, 0xB0B246E0L), // p_840->g_560
        (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0x440FE52DL), 0x440FE52DL), // p_840->g_561
        {0xBBC797455B4529C0L}, // p_840->g_563
        (VECTOR(uint16_t, 16))(0x1766L, (VECTOR(uint16_t, 4))(0x1766L, (VECTOR(uint16_t, 2))(0x1766L, 0xF168L), 0xF168L), 0xF168L, 0x1766L, 0xF168L, (VECTOR(uint16_t, 2))(0x1766L, 0xF168L), (VECTOR(uint16_t, 2))(0x1766L, 0xF168L), 0x1766L, 0xF168L, 0x1766L, 0xF168L), // p_840->g_573
        (VECTOR(uint8_t, 4))(0xC9L, (VECTOR(uint8_t, 2))(0xC9L, 1UL), 1UL), // p_840->g_609
        (VECTOR(int8_t, 8))(0x60L, (VECTOR(int8_t, 4))(0x60L, (VECTOR(int8_t, 2))(0x60L, 0x7AL), 0x7AL), 0x7AL, 0x60L, 0x7AL), // p_840->g_612
        {{0},{0},{0},{0},{0}}, // p_840->g_693
        {{&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1]},{&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1]},{&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1]},{&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1]},{&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1]},{&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1]},{&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1],&p_840->g_693[1]}}, // p_840->g_692
        (VECTOR(int32_t, 4))(0x5DA2880BL, (VECTOR(int32_t, 2))(0x5DA2880BL, 0x29332289L), 0x29332289L), // p_840->g_729
        1UL, // p_840->g_767
        (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x0B92L), 0x0B92L), // p_840->g_775
        (VECTOR(int8_t, 16))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x67L), 0x67L), 0x67L, 4L, 0x67L, (VECTOR(int8_t, 2))(4L, 0x67L), (VECTOR(int8_t, 2))(4L, 0x67L), 4L, 0x67L, 4L, 0x67L), // p_840->g_776
        (VECTOR(uint8_t, 8))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 255UL), 255UL), 255UL, 248UL, 255UL), // p_840->g_785
        {&p_840->g_100,&p_840->g_100,&p_840->g_100,&p_840->g_100}, // p_840->g_796
        0x55L, // p_840->g_817
        0, // p_840->v_collective
        sequence_input[get_global_id(0)], // p_840->global_0_offset
        sequence_input[get_global_id(1)], // p_840->global_1_offset
        sequence_input[get_global_id(2)], // p_840->global_2_offset
        sequence_input[get_local_id(0)], // p_840->local_0_offset
        sequence_input[get_local_id(1)], // p_840->local_1_offset
        sequence_input[get_local_id(2)], // p_840->local_2_offset
        sequence_input[get_group_id(0)], // p_840->group_0_offset
        sequence_input[get_group_id(1)], // p_840->group_1_offset
        sequence_input[get_group_id(2)], // p_840->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[0][get_linear_local_id()])), // p_840->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_841 = c_842;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_840);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_840->g_4.x, "p_840->g_4.x", print_hash_value);
    transparent_crc(p_840->g_4.y, "p_840->g_4.y", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_840->g_7[i], "p_840->g_7[i]", print_hash_value);

    }
    transparent_crc(p_840->g_31, "p_840->g_31", print_hash_value);
    transparent_crc(p_840->g_33, "p_840->g_33", print_hash_value);
    transparent_crc(p_840->g_44, "p_840->g_44", print_hash_value);
    transparent_crc(p_840->g_56, "p_840->g_56", print_hash_value);
    transparent_crc(p_840->g_58, "p_840->g_58", print_hash_value);
    transparent_crc(p_840->g_64, "p_840->g_64", print_hash_value);
    transparent_crc(p_840->g_77.s0, "p_840->g_77.s0", print_hash_value);
    transparent_crc(p_840->g_77.s1, "p_840->g_77.s1", print_hash_value);
    transparent_crc(p_840->g_77.s2, "p_840->g_77.s2", print_hash_value);
    transparent_crc(p_840->g_77.s3, "p_840->g_77.s3", print_hash_value);
    transparent_crc(p_840->g_77.s4, "p_840->g_77.s4", print_hash_value);
    transparent_crc(p_840->g_77.s5, "p_840->g_77.s5", print_hash_value);
    transparent_crc(p_840->g_77.s6, "p_840->g_77.s6", print_hash_value);
    transparent_crc(p_840->g_77.s7, "p_840->g_77.s7", print_hash_value);
    transparent_crc(p_840->g_86.x, "p_840->g_86.x", print_hash_value);
    transparent_crc(p_840->g_86.y, "p_840->g_86.y", print_hash_value);
    transparent_crc(p_840->g_100, "p_840->g_100", print_hash_value);
    transparent_crc(p_840->g_107, "p_840->g_107", print_hash_value);
    transparent_crc(p_840->g_117, "p_840->g_117", print_hash_value);
    transparent_crc(p_840->g_119, "p_840->g_119", print_hash_value);
    transparent_crc(p_840->g_123.x, "p_840->g_123.x", print_hash_value);
    transparent_crc(p_840->g_123.y, "p_840->g_123.y", print_hash_value);
    transparent_crc(p_840->g_123.z, "p_840->g_123.z", print_hash_value);
    transparent_crc(p_840->g_123.w, "p_840->g_123.w", print_hash_value);
    transparent_crc(p_840->g_135.s0, "p_840->g_135.s0", print_hash_value);
    transparent_crc(p_840->g_135.s1, "p_840->g_135.s1", print_hash_value);
    transparent_crc(p_840->g_135.s2, "p_840->g_135.s2", print_hash_value);
    transparent_crc(p_840->g_135.s3, "p_840->g_135.s3", print_hash_value);
    transparent_crc(p_840->g_135.s4, "p_840->g_135.s4", print_hash_value);
    transparent_crc(p_840->g_135.s5, "p_840->g_135.s5", print_hash_value);
    transparent_crc(p_840->g_135.s6, "p_840->g_135.s6", print_hash_value);
    transparent_crc(p_840->g_135.s7, "p_840->g_135.s7", print_hash_value);
    transparent_crc(p_840->g_135.s8, "p_840->g_135.s8", print_hash_value);
    transparent_crc(p_840->g_135.s9, "p_840->g_135.s9", print_hash_value);
    transparent_crc(p_840->g_135.sa, "p_840->g_135.sa", print_hash_value);
    transparent_crc(p_840->g_135.sb, "p_840->g_135.sb", print_hash_value);
    transparent_crc(p_840->g_135.sc, "p_840->g_135.sc", print_hash_value);
    transparent_crc(p_840->g_135.sd, "p_840->g_135.sd", print_hash_value);
    transparent_crc(p_840->g_135.se, "p_840->g_135.se", print_hash_value);
    transparent_crc(p_840->g_135.sf, "p_840->g_135.sf", print_hash_value);
    transparent_crc(p_840->g_144, "p_840->g_144", print_hash_value);
    transparent_crc(p_840->g_145, "p_840->g_145", print_hash_value);
    transparent_crc(p_840->g_146, "p_840->g_146", print_hash_value);
    transparent_crc(p_840->g_147, "p_840->g_147", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_840->g_148[i][j][k], "p_840->g_148[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_840->g_149[i][j], "p_840->g_149[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_840->g_150.x, "p_840->g_150.x", print_hash_value);
    transparent_crc(p_840->g_150.y, "p_840->g_150.y", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_840->g_151[i], "p_840->g_151[i]", print_hash_value);

    }
    transparent_crc(p_840->g_152, "p_840->g_152", print_hash_value);
    transparent_crc(p_840->g_153, "p_840->g_153", print_hash_value);
    transparent_crc(p_840->g_154, "p_840->g_154", print_hash_value);
    transparent_crc(p_840->g_155, "p_840->g_155", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_840->g_156[i][j][k], "p_840->g_156[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_840->g_157, "p_840->g_157", print_hash_value);
    transparent_crc(p_840->g_158, "p_840->g_158", print_hash_value);
    transparent_crc(p_840->g_159, "p_840->g_159", print_hash_value);
    transparent_crc(p_840->g_160, "p_840->g_160", print_hash_value);
    transparent_crc(p_840->g_161, "p_840->g_161", print_hash_value);
    transparent_crc(p_840->g_162, "p_840->g_162", print_hash_value);
    transparent_crc(p_840->g_163, "p_840->g_163", print_hash_value);
    transparent_crc(p_840->g_164, "p_840->g_164", print_hash_value);
    transparent_crc(p_840->g_165, "p_840->g_165", print_hash_value);
    transparent_crc(p_840->g_166, "p_840->g_166", print_hash_value);
    transparent_crc(p_840->g_167, "p_840->g_167", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_840->g_168[i], "p_840->g_168[i]", print_hash_value);

    }
    transparent_crc(p_840->g_169, "p_840->g_169", print_hash_value);
    transparent_crc(p_840->g_170, "p_840->g_170", print_hash_value);
    transparent_crc(p_840->g_171, "p_840->g_171", print_hash_value);
    transparent_crc(p_840->g_172, "p_840->g_172", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_840->g_173[i], "p_840->g_173[i]", print_hash_value);

    }
    transparent_crc(p_840->g_174, "p_840->g_174", print_hash_value);
    transparent_crc(p_840->g_175, "p_840->g_175", print_hash_value);
    transparent_crc(p_840->g_176, "p_840->g_176", print_hash_value);
    transparent_crc(p_840->g_177, "p_840->g_177", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_840->g_178[i][j][k], "p_840->g_178[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_840->g_179, "p_840->g_179", print_hash_value);
    transparent_crc(p_840->g_180, "p_840->g_180", print_hash_value);
    transparent_crc(p_840->g_181, "p_840->g_181", print_hash_value);
    transparent_crc(p_840->g_182, "p_840->g_182", print_hash_value);
    transparent_crc(p_840->g_183, "p_840->g_183", print_hash_value);
    transparent_crc(p_840->g_184, "p_840->g_184", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_840->g_185[i][j][k], "p_840->g_185[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_840->g_186, "p_840->g_186", print_hash_value);
    transparent_crc(p_840->g_187, "p_840->g_187", print_hash_value);
    transparent_crc(p_840->g_188, "p_840->g_188", print_hash_value);
    transparent_crc(p_840->g_189, "p_840->g_189", print_hash_value);
    transparent_crc(p_840->g_190, "p_840->g_190", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_840->g_200[i][j][k], "p_840->g_200[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_840->g_229.s0, "p_840->g_229.s0", print_hash_value);
    transparent_crc(p_840->g_229.s1, "p_840->g_229.s1", print_hash_value);
    transparent_crc(p_840->g_229.s2, "p_840->g_229.s2", print_hash_value);
    transparent_crc(p_840->g_229.s3, "p_840->g_229.s3", print_hash_value);
    transparent_crc(p_840->g_229.s4, "p_840->g_229.s4", print_hash_value);
    transparent_crc(p_840->g_229.s5, "p_840->g_229.s5", print_hash_value);
    transparent_crc(p_840->g_229.s6, "p_840->g_229.s6", print_hash_value);
    transparent_crc(p_840->g_229.s7, "p_840->g_229.s7", print_hash_value);
    transparent_crc(p_840->g_229.s8, "p_840->g_229.s8", print_hash_value);
    transparent_crc(p_840->g_229.s9, "p_840->g_229.s9", print_hash_value);
    transparent_crc(p_840->g_229.sa, "p_840->g_229.sa", print_hash_value);
    transparent_crc(p_840->g_229.sb, "p_840->g_229.sb", print_hash_value);
    transparent_crc(p_840->g_229.sc, "p_840->g_229.sc", print_hash_value);
    transparent_crc(p_840->g_229.sd, "p_840->g_229.sd", print_hash_value);
    transparent_crc(p_840->g_229.se, "p_840->g_229.se", print_hash_value);
    transparent_crc(p_840->g_229.sf, "p_840->g_229.sf", print_hash_value);
    transparent_crc(p_840->g_230.s0, "p_840->g_230.s0", print_hash_value);
    transparent_crc(p_840->g_230.s1, "p_840->g_230.s1", print_hash_value);
    transparent_crc(p_840->g_230.s2, "p_840->g_230.s2", print_hash_value);
    transparent_crc(p_840->g_230.s3, "p_840->g_230.s3", print_hash_value);
    transparent_crc(p_840->g_230.s4, "p_840->g_230.s4", print_hash_value);
    transparent_crc(p_840->g_230.s5, "p_840->g_230.s5", print_hash_value);
    transparent_crc(p_840->g_230.s6, "p_840->g_230.s6", print_hash_value);
    transparent_crc(p_840->g_230.s7, "p_840->g_230.s7", print_hash_value);
    transparent_crc(p_840->g_230.s8, "p_840->g_230.s8", print_hash_value);
    transparent_crc(p_840->g_230.s9, "p_840->g_230.s9", print_hash_value);
    transparent_crc(p_840->g_230.sa, "p_840->g_230.sa", print_hash_value);
    transparent_crc(p_840->g_230.sb, "p_840->g_230.sb", print_hash_value);
    transparent_crc(p_840->g_230.sc, "p_840->g_230.sc", print_hash_value);
    transparent_crc(p_840->g_230.sd, "p_840->g_230.sd", print_hash_value);
    transparent_crc(p_840->g_230.se, "p_840->g_230.se", print_hash_value);
    transparent_crc(p_840->g_230.sf, "p_840->g_230.sf", print_hash_value);
    transparent_crc(p_840->g_328, "p_840->g_328", print_hash_value);
    transparent_crc(p_840->g_345, "p_840->g_345", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_840->g_396[i], "p_840->g_396[i]", print_hash_value);

    }
    transparent_crc(p_840->g_399.x, "p_840->g_399.x", print_hash_value);
    transparent_crc(p_840->g_399.y, "p_840->g_399.y", print_hash_value);
    transparent_crc(p_840->g_418, "p_840->g_418", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_840->g_421[i], "p_840->g_421[i]", print_hash_value);

    }
    transparent_crc(p_840->g_558.x, "p_840->g_558.x", print_hash_value);
    transparent_crc(p_840->g_558.y, "p_840->g_558.y", print_hash_value);
    transparent_crc(p_840->g_560.s0, "p_840->g_560.s0", print_hash_value);
    transparent_crc(p_840->g_560.s1, "p_840->g_560.s1", print_hash_value);
    transparent_crc(p_840->g_560.s2, "p_840->g_560.s2", print_hash_value);
    transparent_crc(p_840->g_560.s3, "p_840->g_560.s3", print_hash_value);
    transparent_crc(p_840->g_560.s4, "p_840->g_560.s4", print_hash_value);
    transparent_crc(p_840->g_560.s5, "p_840->g_560.s5", print_hash_value);
    transparent_crc(p_840->g_560.s6, "p_840->g_560.s6", print_hash_value);
    transparent_crc(p_840->g_560.s7, "p_840->g_560.s7", print_hash_value);
    transparent_crc(p_840->g_560.s8, "p_840->g_560.s8", print_hash_value);
    transparent_crc(p_840->g_560.s9, "p_840->g_560.s9", print_hash_value);
    transparent_crc(p_840->g_560.sa, "p_840->g_560.sa", print_hash_value);
    transparent_crc(p_840->g_560.sb, "p_840->g_560.sb", print_hash_value);
    transparent_crc(p_840->g_560.sc, "p_840->g_560.sc", print_hash_value);
    transparent_crc(p_840->g_560.sd, "p_840->g_560.sd", print_hash_value);
    transparent_crc(p_840->g_560.se, "p_840->g_560.se", print_hash_value);
    transparent_crc(p_840->g_560.sf, "p_840->g_560.sf", print_hash_value);
    transparent_crc(p_840->g_561.x, "p_840->g_561.x", print_hash_value);
    transparent_crc(p_840->g_561.y, "p_840->g_561.y", print_hash_value);
    transparent_crc(p_840->g_561.z, "p_840->g_561.z", print_hash_value);
    transparent_crc(p_840->g_561.w, "p_840->g_561.w", print_hash_value);
    transparent_crc(p_840->g_563.f0, "p_840->g_563.f0", print_hash_value);
    transparent_crc(p_840->g_573.s0, "p_840->g_573.s0", print_hash_value);
    transparent_crc(p_840->g_573.s1, "p_840->g_573.s1", print_hash_value);
    transparent_crc(p_840->g_573.s2, "p_840->g_573.s2", print_hash_value);
    transparent_crc(p_840->g_573.s3, "p_840->g_573.s3", print_hash_value);
    transparent_crc(p_840->g_573.s4, "p_840->g_573.s4", print_hash_value);
    transparent_crc(p_840->g_573.s5, "p_840->g_573.s5", print_hash_value);
    transparent_crc(p_840->g_573.s6, "p_840->g_573.s6", print_hash_value);
    transparent_crc(p_840->g_573.s7, "p_840->g_573.s7", print_hash_value);
    transparent_crc(p_840->g_573.s8, "p_840->g_573.s8", print_hash_value);
    transparent_crc(p_840->g_573.s9, "p_840->g_573.s9", print_hash_value);
    transparent_crc(p_840->g_573.sa, "p_840->g_573.sa", print_hash_value);
    transparent_crc(p_840->g_573.sb, "p_840->g_573.sb", print_hash_value);
    transparent_crc(p_840->g_573.sc, "p_840->g_573.sc", print_hash_value);
    transparent_crc(p_840->g_573.sd, "p_840->g_573.sd", print_hash_value);
    transparent_crc(p_840->g_573.se, "p_840->g_573.se", print_hash_value);
    transparent_crc(p_840->g_573.sf, "p_840->g_573.sf", print_hash_value);
    transparent_crc(p_840->g_609.x, "p_840->g_609.x", print_hash_value);
    transparent_crc(p_840->g_609.y, "p_840->g_609.y", print_hash_value);
    transparent_crc(p_840->g_609.z, "p_840->g_609.z", print_hash_value);
    transparent_crc(p_840->g_609.w, "p_840->g_609.w", print_hash_value);
    transparent_crc(p_840->g_612.s0, "p_840->g_612.s0", print_hash_value);
    transparent_crc(p_840->g_612.s1, "p_840->g_612.s1", print_hash_value);
    transparent_crc(p_840->g_612.s2, "p_840->g_612.s2", print_hash_value);
    transparent_crc(p_840->g_612.s3, "p_840->g_612.s3", print_hash_value);
    transparent_crc(p_840->g_612.s4, "p_840->g_612.s4", print_hash_value);
    transparent_crc(p_840->g_612.s5, "p_840->g_612.s5", print_hash_value);
    transparent_crc(p_840->g_612.s6, "p_840->g_612.s6", print_hash_value);
    transparent_crc(p_840->g_612.s7, "p_840->g_612.s7", print_hash_value);
    transparent_crc(p_840->g_729.x, "p_840->g_729.x", print_hash_value);
    transparent_crc(p_840->g_729.y, "p_840->g_729.y", print_hash_value);
    transparent_crc(p_840->g_729.z, "p_840->g_729.z", print_hash_value);
    transparent_crc(p_840->g_729.w, "p_840->g_729.w", print_hash_value);
    transparent_crc(p_840->g_767, "p_840->g_767", print_hash_value);
    transparent_crc(p_840->g_775.x, "p_840->g_775.x", print_hash_value);
    transparent_crc(p_840->g_775.y, "p_840->g_775.y", print_hash_value);
    transparent_crc(p_840->g_775.z, "p_840->g_775.z", print_hash_value);
    transparent_crc(p_840->g_775.w, "p_840->g_775.w", print_hash_value);
    transparent_crc(p_840->g_776.s0, "p_840->g_776.s0", print_hash_value);
    transparent_crc(p_840->g_776.s1, "p_840->g_776.s1", print_hash_value);
    transparent_crc(p_840->g_776.s2, "p_840->g_776.s2", print_hash_value);
    transparent_crc(p_840->g_776.s3, "p_840->g_776.s3", print_hash_value);
    transparent_crc(p_840->g_776.s4, "p_840->g_776.s4", print_hash_value);
    transparent_crc(p_840->g_776.s5, "p_840->g_776.s5", print_hash_value);
    transparent_crc(p_840->g_776.s6, "p_840->g_776.s6", print_hash_value);
    transparent_crc(p_840->g_776.s7, "p_840->g_776.s7", print_hash_value);
    transparent_crc(p_840->g_776.s8, "p_840->g_776.s8", print_hash_value);
    transparent_crc(p_840->g_776.s9, "p_840->g_776.s9", print_hash_value);
    transparent_crc(p_840->g_776.sa, "p_840->g_776.sa", print_hash_value);
    transparent_crc(p_840->g_776.sb, "p_840->g_776.sb", print_hash_value);
    transparent_crc(p_840->g_776.sc, "p_840->g_776.sc", print_hash_value);
    transparent_crc(p_840->g_776.sd, "p_840->g_776.sd", print_hash_value);
    transparent_crc(p_840->g_776.se, "p_840->g_776.se", print_hash_value);
    transparent_crc(p_840->g_776.sf, "p_840->g_776.sf", print_hash_value);
    transparent_crc(p_840->g_785.s0, "p_840->g_785.s0", print_hash_value);
    transparent_crc(p_840->g_785.s1, "p_840->g_785.s1", print_hash_value);
    transparent_crc(p_840->g_785.s2, "p_840->g_785.s2", print_hash_value);
    transparent_crc(p_840->g_785.s3, "p_840->g_785.s3", print_hash_value);
    transparent_crc(p_840->g_785.s4, "p_840->g_785.s4", print_hash_value);
    transparent_crc(p_840->g_785.s5, "p_840->g_785.s5", print_hash_value);
    transparent_crc(p_840->g_785.s6, "p_840->g_785.s6", print_hash_value);
    transparent_crc(p_840->g_785.s7, "p_840->g_785.s7", print_hash_value);
    transparent_crc(p_840->g_817, "p_840->g_817", print_hash_value);
    transparent_crc(p_840->v_collective, "p_840->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 86; i++)
            transparent_crc(p_840->g_special_values[i + 86 * get_linear_group_id()], "p_840->g_special_values[i + 86 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 86; i++)
            transparent_crc(p_840->l_special_values[i], "p_840->l_special_values[i]", print_hash_value);
    transparent_crc(p_840->l_comm_values[get_linear_local_id()], "p_840->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_840->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()], "p_840->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
