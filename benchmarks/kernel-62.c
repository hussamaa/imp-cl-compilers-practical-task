// --atomics 94 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 53,3,41 -l 53,1,1
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

__constant uint32_t permutations[10][53] = {
{7,25,8,19,4,32,34,20,44,14,43,17,40,2,23,38,24,0,11,37,21,39,50,30,18,48,6,31,1,12,46,42,29,52,10,28,47,49,22,26,5,35,15,36,45,27,9,33,16,13,3,51,41}, // permutation 0
{32,11,29,16,27,39,17,30,15,14,43,41,8,12,34,46,23,48,5,28,9,18,1,20,49,38,3,19,35,51,4,52,13,45,21,33,36,26,7,40,24,47,42,31,37,6,22,44,25,10,0,2,50}, // permutation 1
{5,24,28,22,52,16,29,20,23,4,47,8,10,46,51,21,48,50,33,32,11,37,18,42,19,6,41,26,30,49,36,7,39,13,14,1,17,35,0,31,45,44,25,43,12,38,2,40,34,27,3,15,9}, // permutation 2
{1,48,11,41,9,12,51,5,13,49,42,29,25,4,16,22,7,45,2,15,43,0,32,31,19,30,40,52,33,20,14,21,6,37,18,35,3,38,8,24,17,26,23,50,28,44,47,39,36,34,27,10,46}, // permutation 3
{48,46,24,36,38,41,39,26,50,51,34,45,27,29,43,37,17,42,44,13,33,40,2,15,30,11,3,18,1,4,16,7,23,35,12,10,19,32,9,49,28,5,52,0,8,47,14,6,21,20,25,31,22}, // permutation 4
{11,21,24,0,41,14,13,12,50,37,18,45,20,6,5,36,34,15,19,40,27,28,35,44,29,39,2,43,49,16,31,32,4,51,26,33,42,47,30,8,1,22,38,48,17,9,46,23,3,52,10,25,7}, // permutation 5
{0,41,52,11,35,33,36,46,43,16,17,1,51,38,12,21,49,31,18,9,40,28,27,14,4,13,19,25,24,5,26,10,29,8,44,47,7,42,23,32,3,15,45,34,22,30,20,2,48,39,37,50,6}, // permutation 6
{27,22,50,2,14,38,35,21,15,8,1,18,25,32,44,5,40,19,34,30,45,17,23,42,48,4,26,52,31,46,10,6,11,33,29,36,39,12,13,9,7,51,43,37,0,47,3,16,20,28,41,49,24}, // permutation 7
{46,34,45,35,5,49,9,20,8,40,26,24,10,11,16,52,17,44,2,1,22,25,27,12,15,30,43,23,7,48,38,47,50,13,33,36,29,28,21,39,0,14,32,41,37,4,3,6,42,18,19,51,31}, // permutation 8
{13,15,21,14,49,8,45,22,31,36,42,23,39,4,46,30,6,47,32,26,11,33,41,51,19,5,25,50,24,1,48,35,28,34,16,0,44,7,17,20,9,18,27,38,29,2,12,37,43,40,10,3,52} // permutation 9
};

// Seed: 3061628772

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
   uint64_t  f0;
   uint64_t  f1;
   volatile uint8_t  f2;
   volatile int8_t  f3;
};

struct S3 {
   int32_t  f0;
   uint64_t  f1;
   struct S1  f2;
};

struct S2 {
   volatile uint32_t  f0;
   uint32_t  f1;
   volatile int64_t  f2;
   volatile uint32_t  f3;
};

struct S4 {
   volatile struct S2  f0;
   uint64_t  f1;
   int64_t  f2;
   uint8_t  f3;
   int32_t  f4;
   int32_t  f5;
   uint8_t  f6;
};

union U5 {
   struct S2  f0;
   uint64_t  f1;
   int64_t  f2;
};

struct S6 {
    volatile VECTOR(uint16_t, 16) g_35;
    VECTOR(uint16_t, 16) g_36;
    volatile int64_t g_42[7][10];
    volatile int64_t *g_41[2];
    int32_t g_47[6];
    uint16_t g_66[9][9];
    int64_t g_75;
    int32_t g_83[8][2][8];
    uint16_t g_84;
    uint8_t g_111[2];
    int64_t *g_113;
    int64_t **g_112;
    int8_t g_127;
    uint16_t *g_135[2];
    uint32_t g_138;
    int8_t g_144;
    int32_t g_152[5];
    VECTOR(int16_t, 8) g_174;
    int32_t g_179;
    uint64_t g_180;
    int8_t g_183;
    uint8_t g_185;
    struct S3 g_286;
    struct S3 *g_287;
    int32_t g_290;
    int64_t *g_292;
    VECTOR(int32_t, 16) g_294;
    uint16_t g_298;
    VECTOR(uint64_t, 16) g_308;
    VECTOR(int8_t, 16) g_330;
    VECTOR(int8_t, 16) g_336;
    int32_t *g_339;
    VECTOR(uint64_t, 16) g_354;
    VECTOR(uint64_t, 4) g_356;
    VECTOR(uint8_t, 16) g_403;
    struct S4 g_415;
    struct S4 *g_414;
    VECTOR(int32_t, 16) g_430;
    int32_t g_436;
    int8_t g_437;
    VECTOR(uint32_t, 2) g_453;
    volatile uint32_t *g_497;
    VECTOR(int32_t, 16) g_498;
    VECTOR(int32_t, 16) g_499;
    VECTOR(int32_t, 16) g_509;
    VECTOR(int32_t, 8) g_510;
    VECTOR(uint64_t, 2) g_525;
    struct S3 **g_534[4];
    VECTOR(int8_t, 4) g_565;
    VECTOR(uint16_t, 2) g_649;
    union U5 g_656;
    union U5 g_660;
    union U5 g_662;
    VECTOR(uint64_t, 16) g_670;
    uint64_t g_680[4];
    int64_t **g_685;
    VECTOR(int16_t, 16) g_707;
    uint32_t g_747;
    volatile struct S1 g_750;
    volatile VECTOR(uint16_t, 16) g_759;
    VECTOR(uint16_t, 4) g_761;
    volatile VECTOR(int16_t, 4) g_766;
    VECTOR(int16_t, 2) g_767;
    uint16_t g_776;
    struct S1 g_810;
    volatile struct S1 g_811;
    int32_t * volatile g_821;
    int32_t * volatile g_822;
    struct S3 ** volatile g_831;
    VECTOR(uint64_t, 4) g_853;
    uint32_t g_862;
    int32_t g_865;
    VECTOR(int32_t, 8) g_866;
    VECTOR(int32_t, 2) g_884;
    volatile VECTOR(int16_t, 4) g_890;
    volatile VECTOR(int32_t, 4) g_892;
    struct S1 g_897[5];
    int8_t g_909;
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
int64_t  func_1(struct S6 * p_914);
uint16_t  func_5(int32_t  p_6, struct S6 * p_914);
int32_t  func_7(uint32_t  p_8, uint8_t  p_9, int64_t  p_10, struct S6 * p_914);
uint16_t  func_13(uint64_t  p_14, int16_t  p_15, uint32_t  p_16, int32_t  p_17, int8_t  p_18, struct S6 * p_914);
int32_t  func_37(int64_t * p_38, int8_t  p_39, uint64_t  p_40, struct S6 * p_914);
int8_t  func_53(int64_t * p_54, uint64_t  p_55, int64_t * p_56, int64_t  p_57, uint32_t  p_58, struct S6 * p_914);
int64_t * func_59(uint32_t  p_60, uint64_t  p_61, int64_t * p_62, int32_t * p_63, int32_t * p_64, struct S6 * p_914);
int16_t  func_69(uint16_t  p_70, int64_t  p_71, uint32_t  p_72, struct S6 * p_914);
uint64_t  func_95(uint16_t  p_96, uint32_t  p_97, int64_t * p_98, int64_t  p_99, struct S6 * p_914);
int64_t * func_102(uint32_t  p_103, int64_t ** p_104, uint8_t  p_105, int64_t * p_106, int64_t ** p_107, struct S6 * p_914);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_914->l_comm_values p_914->g_35 p_914->g_36 p_914->g_41 p_914->g_comm_values p_914->g_47 p_914->g_66 p_914->g_75 p_914->g_84 p_914->g_111 p_914->g_112 p_914->g_138 p_914->g_144 p_914->g_174 p_914->g_179 p_914->g_113 p_914->g_183 p_914->g_83 p_914->g_286.f0 p_914->g_290 p_914->g_180 p_914->g_292 p_914->g_294 p_914->g_127 p_914->g_298 p_914->g_339 p_914->g_414 p_914->g_354 p_914->g_415.f2 p_914->g_415.f4 p_914->g_135 p_914->g_497 p_914->g_498 p_914->g_499 p_914->g_286.f2.f1 p_914->g_509 p_914->g_510 p_914->g_525 p_914->g_403 p_914->g_152 p_914->g_356 p_914->g_415.f5 p_914->g_565 p_914->g_286.f1 p_914->g_649 p_914->g_185 p_914->g_330 p_914->g_670 p_914->g_680 p_914->g_707 p_914->g_430 p_914->g_453 p_914->g_336 p_914->g_308 p_914->g_662 p_914->g_750 p_914->g_42 p_914->g_759 p_914->g_761 p_914->g_766 p_914->g_767 p_914->g_776 p_914->g_656.f2 p_914->g_810 p_914->g_811 p_914->g_822 p_914->g_831 p_914->g_853 p_914->g_865 p_914->g_866 p_914->g_415.f6 p_914->g_286.f2 p_914->g_415.f0.f0 p_914->g_884 p_914->g_656 p_914->g_890 p_914->g_892 p_914->g_897 p_914->g_909
 * writes: p_914->g_66 p_914->g_75 p_914->g_comm_values p_914->g_84 p_914->g_111 p_914->g_127 p_914->g_135 p_914->g_138 p_914->g_144 p_914->g_152 p_914->g_179 p_914->g_180 p_914->g_113 p_914->g_183 p_914->g_185 p_914->g_287 p_914->g_290 p_914->g_47 p_914->g_298 p_914->g_286.f0 p_914->g_339 p_914->g_330 p_914->g_286.f1 p_914->g_174 p_914->g_436 p_914->g_437 p_914->g_294 p_914->g_415.f4 p_914->g_534 p_914->g_415.f2 p_914->g_525 p_914->g_403 p_914->g_509 p_914->g_685 p_914->g_656.f2 p_914->g_662.f2 p_914->g_747 p_914->g_415.f5 p_914->g_414 p_914->g_680 p_914->g_292 p_914->g_862 p_914->g_865
 */
int64_t  func_1(struct S6 * p_914)
{ /* block id: 4 */
    uint32_t l_2[10];
    int64_t *l_27 = (void*)0;
    int64_t *l_28[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_29 = 1L;
    uint16_t *l_777[5][1][7] = {{{&p_914->g_776,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_914->g_776,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_914->g_776,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_914->g_776,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_914->g_776,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_778 = 0x13CE5C13L;
    int32_t *l_863 = &p_914->g_436;
    int32_t *l_864 = &p_914->g_865;
    VECTOR(int32_t, 4) l_867 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L);
    VECTOR(int32_t, 2) l_868 = (VECTOR(int32_t, 2))((-2L), 0x401B0BA9L);
    VECTOR(int16_t, 4) l_873 = (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 1L), 1L);
    VECTOR(uint64_t, 16) l_874 = (VECTOR(uint64_t, 16))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0x6440ABADC1140B93L), 0x6440ABADC1140B93L), 0x6440ABADC1140B93L, 9UL, 0x6440ABADC1140B93L, (VECTOR(uint64_t, 2))(9UL, 0x6440ABADC1140B93L), (VECTOR(uint64_t, 2))(9UL, 0x6440ABADC1140B93L), 9UL, 0x6440ABADC1140B93L, 9UL, 0x6440ABADC1140B93L);
    struct S3 ***l_879 = &p_914->g_534[2];
    int64_t l_880 = (-2L);
    int32_t *l_881 = &l_778;
    int32_t l_887 = 0x59142F71L;
    int16_t l_908 = 0x036EL;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_2[i] = 4294967295UL;
    (*l_864) &= (l_2[5] , ((((*l_863) = ((p_914->l_comm_values[(safe_mod_func_uint32_t_u_u(p_914->tid, 53))] <= (((safe_lshift_func_uint16_t_u_u(func_5(func_7((safe_mul_func_uint16_t_u_u((l_778 = func_13((safe_div_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(6UL, (safe_div_func_uint32_t_u_u(l_2[5], (safe_sub_func_int32_t_s_s(((l_29 = (~0x6E91B76E1EE67B38L)) > (safe_unary_minus_func_int64_t_s(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(0x7665L, ((VECTOR(uint16_t, 16))(p_914->g_35.s01197ba27438e213)).s6)), 3)) > ((VECTOR(uint16_t, 8))(p_914->g_36.saf849fb9)).s5)))), func_37(((l_28[0][0] != p_914->g_41[0]) , l_28[5][2]), l_2[6], l_2[4], p_914))))))), l_2[7])), p_914->g_453.y, p_914->g_336.s2, p_914->g_308.sf, l_2[0], p_914)), l_2[4])), p_914->g_680[2], l_2[5], p_914), p_914), l_2[7])) == p_914->g_707.sa) < 0xE6658705L)) || l_778)) , (-1L)) , (*p_914->g_822)));
    if (((*l_881) |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_914->g_866.s72)).yyxx)).odd)).xxyy, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((-7L), 3L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_867.xzwwwxwwzyzwzxxw)).s09)).xyyyxxyyyxyxxyxy)).lo, ((VECTOR(int32_t, 4))(l_868.xyyx)).xyyyzzwz))).s74)), (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(l_873.zw)).odd, ((*l_864) < (1L != ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_874.s5075)), ((safe_add_func_int8_t_s_s(((((p_914->g_415.f6 , &p_914->g_41[0]) == ((safe_sub_func_int32_t_s_s((((p_914->g_649.x < ((*l_864) & ((((p_914->g_286.f2 , &p_914->g_831) != (l_879 = &p_914->g_534[2])) && p_914->g_415.f0.f0) & (*l_864)))) && (*l_864)) & p_914->g_336.s9), 0x2B40E959L)) , &l_28[0][2])) , (*l_864)) >= p_914->g_670.s0), p_914->g_403.s2)) , p_914->g_811.f1), ((VECTOR(uint64_t, 2))(3UL)), 0xDBCBA80CBA7382ACL)).hi, ((VECTOR(uint64_t, 4))(0x372ED7DA74707E43L))))).lo, ((VECTOR(uint64_t, 2))(0xC5AAE29555A12BF2L)), ((VECTOR(uint64_t, 2))(0x2D07EB8089083D58L))))).lo, ((VECTOR(uint64_t, 2))(18446744073709551613UL)), 18446744073709551608UL)).yzzxzwwyyzxxwwzx)).sbef5)).x)))), 3)), (*l_864), ((VECTOR(int32_t, 2))((-1L))), (*p_914->g_822), (-4L), l_880, (*l_864), 0x1457C59DL, ((VECTOR(int32_t, 2))(0x5D0D7A1DL)), 1L)).s540f)).wxxwzzyzyxzyxzwz)), ((VECTOR(int32_t, 16))(0x028E3764L))))).sdc78))), (-1L), ((VECTOR(int32_t, 2))((-2L))), 0x481A90E4L)).s40)).xxxx)).xywyxzyy)).s4))
    { /* block id: 363 */
        int16_t l_891 = (-2L);
        int32_t l_898[3][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
        int16_t *l_899 = (void*)0;
        int16_t *l_900 = (void*)0;
        int16_t *l_901 = (void*)0;
        int16_t *l_902[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int32_t l_903 = 0x39B09C95L;
        uint32_t l_910 = 0x5A3F8F5FL;
        int i, j;
        l_910 = (safe_sub_func_int32_t_s_s((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(p_914->g_884.xxxxyyxy)).hi))), ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(0x6A018524L, ((safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), 0)) > (l_887 <= (safe_rshift_func_int16_t_s_u((p_914->g_656 , ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))((-1L), 0x23A3L)), ((VECTOR(int16_t, 16))(p_914->g_890.xyyxzxzzwxyzwzwy)).sad)))))).yxxyyxyxyyyxxxxy)))).sb1)).even), l_891)))), ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))((-3L), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x12245EA0L, (-1L), 0x15B74F95L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(2L, ((VECTOR(int32_t, 4))(p_914->g_892.zwzx)), (safe_lshift_func_int16_t_s_s((l_903 &= (safe_add_func_int32_t_s_s(l_891, (p_914->g_897[4] , (p_914->g_897[4] , (l_898[0][1] = (*p_914->g_822))))))), (safe_mod_func_uint64_t_u_u((*l_864), ((safe_rshift_func_int16_t_s_s(p_914->g_525.x, l_908)) , p_914->g_909))))), (-1L), ((VECTOR(int32_t, 4))(1L)), l_903, ((VECTOR(int32_t, 4))(1L)))).s09b7)).hi)), ((VECTOR(int32_t, 2))(0x68773562L)), (-1L))), ((VECTOR(int32_t, 8))(2L)))).s92, ((VECTOR(int32_t, 2))(0x4DAC6C8FL)), ((VECTOR(int32_t, 2))((-1L)))))).xxxx, ((VECTOR(int32_t, 4))(0x52911EE1L))))), ((VECTOR(int32_t, 2))(0L)), 0x7DC7DB0AL)).s4646457644011777, (int32_t)(*l_864)))).sb, ((VECTOR(int32_t, 8))((-4L))), ((VECTOR(int32_t, 2))((-5L))), (*p_914->g_822), 0x7B4EC3D8L, 0x2D05D4EAL)), ((VECTOR(int32_t, 16))(0x0B1560BDL))))).s8146, ((VECTOR(int32_t, 4))(0x3EC8F2A6L))))).ywxzyzxwwyxwyyyz)).sb & l_891), l_891));
    }
    else
    { /* block id: 367 */
        int32_t **l_911 = &l_864;
        (*l_911) = &p_914->g_865;
        (**l_911) |= (safe_mod_func_int32_t_s_s(((void*)0 != &p_914->g_821), (*l_881)));
    }
    return (*p_914->g_113);
}


/* ------------------------------------------ */
/* 
 * reads : p_914->g_831 p_914->g_759 p_914->g_41 p_914->g_66 p_914->g_853 p_914->g_453 p_914->g_286.f0 p_914->g_144
 * writes: p_914->g_287 p_914->g_292 p_914->g_144 p_914->g_862
 */
uint16_t  func_5(int32_t  p_6, struct S6 * p_914)
{ /* block id: 350 */
    struct S3 *l_830[1][1];
    int32_t *l_832[3];
    int64_t *l_846 = (void*)0;
    int64_t **l_847 = (void*)0;
    int64_t **l_848 = (void*)0;
    int64_t **l_849 = (void*)0;
    int64_t **l_850[2][5][7] = {{{&l_846,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292},{&l_846,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292},{&l_846,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292},{&l_846,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292},{&l_846,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292}},{{&l_846,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292},{&l_846,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292},{&l_846,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292},{&l_846,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292},{&l_846,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292,&p_914->g_292}}};
    int32_t **l_856 = &l_832[0];
    int16_t *l_859[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_860 = 1L;
    int8_t *l_861 = &p_914->g_144;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_830[i][j] = &p_914->g_286;
    }
    for (i = 0; i < 3; i++)
        l_832[i] = (void*)0;
    (*p_914->g_831) = l_830[0][0];
    p_6 &= ((void*)0 != &p_914->g_436);
    p_914->g_862 = (safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((((*l_861) |= ((safe_unary_minus_func_uint16_t_u((p_914->g_759.sf > GROUP_DIVERGE(0, 1)))) == ((l_860 = (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x3CL, 0x2BL)).xxxy)).yzzxxxzxwwzyxwxy)).odd)))).s0, (((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((p_914->g_292 = l_846) != p_914->g_41[0]), (p_914->g_66[1][5] & (safe_sub_func_uint64_t_u_u((~((VECTOR(uint64_t, 8))(p_914->g_853.wyzzxwyy)).s0), (GROUP_DIVERGE(2, 1) == 0xB8A5DBF63771A12DL)))))), 0xEA64L)) , ((VECTOR(uint8_t, 4))(0xA7L, ((VECTOR(uint8_t, 2))(249UL, 6UL)), 8UL)).x) >= (safe_rshift_func_uint8_t_u_u((~(((l_856 = &l_832[0]) != &l_832[0]) ^ (safe_rshift_func_uint8_t_u_u(((-1L) | p_914->g_453.x), 6)))), p_914->g_286.f0)))))) == 65531UL))) >= p_6), 255UL)) == p_6), 0x0235L));
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_914->g_185 p_914->g_286.f2.f1 p_914->g_403 p_914->g_680 p_914->g_656.f2 p_914->g_810 p_914->g_811 p_914->g_430 p_914->g_565 p_914->g_294 p_914->g_144 p_914->g_339 p_914->g_179 p_914->g_822
 * writes: p_914->g_185 p_914->g_138 p_914->g_680 p_914->g_287 p_914->g_656.f2 p_914->g_436 p_914->g_47 p_914->g_144 p_914->g_339
 */
int32_t  func_7(uint32_t  p_8, uint8_t  p_9, int64_t  p_10, struct S6 * p_914)
{ /* block id: 327 */
    struct S3 *l_782 = &p_914->g_286;
    uint8_t *l_787 = &p_914->g_185;
    int32_t l_792 = (-3L);
    uint32_t *l_793 = &p_914->g_138;
    int64_t l_794 = 2L;
    uint64_t *l_795 = &p_914->g_680[0];
    VECTOR(int64_t, 4) l_808 = (VECTOR(int64_t, 4))(0x509EE9BFC16D5341L, (VECTOR(int64_t, 2))(0x509EE9BFC16D5341L, 0x4F8E10D6406DA532L), 0x4F8E10D6406DA532L);
    int32_t l_823 = 0x2FDD6243L;
    int32_t *l_824 = (void*)0;
    int32_t *l_825[4][6] = {{&l_792,(void*)0,&p_914->g_415.f5,&l_823,&p_914->g_415.f5,(void*)0},{&l_792,(void*)0,&p_914->g_415.f5,&l_823,&p_914->g_415.f5,(void*)0},{&l_792,(void*)0,&p_914->g_415.f5,&l_823,&p_914->g_415.f5,(void*)0},{&l_792,(void*)0,&p_914->g_415.f5,&l_823,&p_914->g_415.f5,(void*)0}};
    int64_t l_826[9][10][2] = {{{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L}},{{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L}},{{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L}},{{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L}},{{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L}},{{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L}},{{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L}},{{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L}},{{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L},{0x58259B4C73161981L,0x413CDC31F622B387L}}};
    uint32_t l_827 = 0x64A7EFFEL;
    int i, j, k;
    if (((((!(0x32166CA22A3F958FL && ((*l_795) |= ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 16))((safe_unary_minus_func_uint16_t_u(65526UL)), 1UL, 2UL, 18446744073709551615UL, ((((safe_sub_func_int8_t_s_s(((void*)0 != l_782), (safe_mod_func_int16_t_s_s(0x5FFDL, (safe_add_func_uint8_t_u_u((--(*l_787)), (0x1C10L | ((safe_add_func_uint32_t_u_u(((*l_793) = l_792), l_794)) <= p_914->g_286.f2.f1)))))))) | 0x1FL) , p_914->g_403.s7) >= 0UL), 0xF2FDBBFE388CFA7FL, FAKE_DIVERGE(p_914->group_0_offset, get_group_id(0), 10), ((VECTOR(uint64_t, 4))(0x0D0CF72DD9F9F5FBL)), 0x25B69D594558923BL, 1UL, ((VECTOR(uint64_t, 2))(0xAFA86546B245A66AL)), 0x79195ECE27298CFEL)).lo))).even)).xxxyxwzx)).even)).wwzywywyyxzzywzx)).s9))) <= l_792) < (-1L)) ^ 0x222A6F48L))
    { /* block id: 331 */
        struct S3 **l_796 = &p_914->g_287;
        VECTOR(int64_t, 16) l_807 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-2L)), (-2L)), (-2L), 1L, (-2L), (VECTOR(int64_t, 2))(1L, (-2L)), (VECTOR(int64_t, 2))(1L, (-2L)), 1L, (-2L), 1L, (-2L));
        int64_t *l_809 = &p_914->g_656.f2;
        int32_t *l_816 = &p_914->g_436;
        int32_t *l_817 = &p_914->g_47[2];
        int i;
        (*l_796) = l_782;
        (*l_817) = ((safe_mul_func_uint16_t_u_u((((*l_816) = (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(((*l_809) &= ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_807.sf191)).lo)).xyyxxyxyyxxyyxyy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_808.yz)).xyyxyyyx)).s3527260637455114))).sbebe)).x), ((p_914->g_810 , (p_914->g_811 , 0xDAL)) | 0x52L))) >= (safe_rshift_func_uint16_t_u_s((p_9 && (p_914->g_430.s2 , (p_914->g_565.z == (-10L)))), (+(safe_mul_func_int16_t_s_s(l_808.w, l_807.sc)))))), 8L)), p_10)), p_914->g_294.s5))) , p_10), 65535UL)) > 0xD20BL);
    }
    else
    { /* block id: 336 */
        for (p_914->g_144 = (-17); (p_914->g_144 <= (-23)); --p_914->g_144)
        { /* block id: 339 */
            int32_t **l_820 = &p_914->g_339;
            (*l_820) = &p_914->g_179;
            if (p_8)
                break;
            (*l_820) = &p_914->g_179;
            if ((**l_820))
                break;
        }
        return p_10;
    }
    (*p_914->g_822) = (GROUP_DIVERGE(0, 1) || 0x3F71D42CL);
    l_827++;
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_914->g_179 p_914->g_662 p_914->g_290 p_914->g_415.f5 p_914->g_183 p_914->g_750 p_914->g_42 p_914->g_759 p_914->g_761 p_914->g_766 p_914->g_767 p_914->g_776
 * writes: p_914->g_179 p_914->g_415.f2 p_914->g_656.f2 p_914->g_662.f2 p_914->g_138 p_914->g_747 p_914->g_415.f5 p_914->g_183 p_914->g_414
 */
uint16_t  func_13(uint64_t  p_14, int16_t  p_15, uint32_t  p_16, int32_t  p_17, int8_t  p_18, struct S6 * p_914)
{ /* block id: 307 */
    int32_t *l_721 = &p_914->g_179;
    int32_t l_722 = 0x7AB1813AL;
    int32_t l_723[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t *l_724 = &l_722;
    int32_t *l_725 = (void*)0;
    int32_t *l_726 = &l_723[8];
    int32_t *l_727 = (void*)0;
    int32_t *l_728 = (void*)0;
    int32_t *l_729 = (void*)0;
    int32_t *l_730 = (void*)0;
    int32_t *l_731 = &p_914->g_415.f5;
    int32_t *l_732 = &l_723[8];
    int32_t *l_733 = (void*)0;
    int32_t *l_734[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t l_735 = 0x0159L;
    uint8_t l_736 = 0UL;
    int64_t *l_742 = &p_914->g_415.f2;
    int64_t *l_743 = (void*)0;
    int64_t *l_744 = &p_914->g_662.f2;
    uint32_t *l_745 = &p_914->g_138;
    uint32_t *l_746 = &p_914->g_747;
    union U5 *l_751 = &p_914->g_662;
    VECTOR(uint16_t, 2) l_760 = (VECTOR(uint16_t, 2))(65529UL, 65535UL);
    VECTOR(int16_t, 4) l_763 = (VECTOR(int16_t, 4))(0x6815L, (VECTOR(int16_t, 2))(0x6815L, 1L), 1L);
    struct S4 *l_772 = &p_914->g_415;
    int i;
    (*l_721) &= (-1L);
    l_736++;
    (*l_726) = ((safe_unary_minus_func_int8_t_s((((*l_744) = (p_914->g_656.f2 = ((*l_742) = ((safe_rshift_func_int8_t_s_u(1L, 6)) , p_18)))) ^ p_14))) , (((p_914->g_662 , l_743) == (void*)0) == (((*l_731) = ((*l_746) = ((*l_745) = 4294967293UL))) , (((p_914->g_290 || (GROUP_DIVERGE(2, 1) && p_18)) || p_914->g_415.f5) && p_17))));
    for (p_914->g_183 = (-17); (p_914->g_183 == (-15)); ++p_914->g_183)
    { /* block id: 319 */
        int16_t *l_752 = &l_735;
        int16_t **l_753 = &l_752;
        VECTOR(uint16_t, 16) l_758 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 8UL), 8UL), 8UL, 0UL, 8UL, (VECTOR(uint16_t, 2))(0UL, 8UL), (VECTOR(uint16_t, 2))(0UL, 8UL), 0UL, 8UL, 0UL, 8UL);
        uint64_t l_771[5][5][10] = {{{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL}},{{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL}},{{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL}},{{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL}},{{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL},{1UL,0x8B6675D1615B138FL,3UL,18446744073709551611UL,1UL,0xDB0ADA3FC5B33A07L,18446744073709551610UL,18446744073709551608UL,18446744073709551610UL,18446744073709551615UL}}};
        struct S4 **l_773 = &p_914->g_414;
        int i, j, k;
        (*l_726) = (((VECTOR(uint32_t, 16))((p_914->g_750 , (l_751 != (((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_914->g_42[2][8], p_14, 0x4F1A74C3D19E717EL, 0x541E6F971E9B9639L)).wxwyyzxwzyyxwzww)).hi, ((VECTOR(uint64_t, 8))((&p_15 != ((*l_753) = l_752)), ((VECTOR(uint64_t, 2))(0UL, 0UL)), 0UL, 0UL, 18446744073709551612UL, 1UL, 0x31EC807DEFB4F71AL))))).s6 , l_751))), 3UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(0x4B54AFB6L, GROUP_DIVERGE(0, 1), 4294967286UL, (safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 2))(l_758.s0e)).xxxxxyxx, ((VECTOR(uint16_t, 16))(p_914->g_759.sf7756930b61a4a63)).hi))), ((VECTOR(uint16_t, 16))(l_760.xxxyyyxxxyxxyyxx)).lo))).s7323125361353567, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_914->g_761.yzww)).wxywxwzwzzwxzwxx)).s3c43, (uint16_t)(((safe_unary_minus_func_uint64_t_u((((((VECTOR(int16_t, 16))((-1L), ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(l_763.wy)).xxxyxyyx, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 2))(0x2BBCL, 0L)).xyyyyyxy, (int16_t)((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(p_914->g_766.zywy)).xxzxxxyyyxywxwwx, ((VECTOR(int16_t, 16))(p_914->g_767.yyyxxxyxyyxyyyxx))))))).s1, (+(safe_unary_minus_func_int8_t_s((safe_mod_func_uint32_t_u_u(p_17, (-7L)))))))) < p_17)))).lo, ((VECTOR(int16_t, 4))(0x7B7AL))))).xwzzxxzz))), ((VECTOR(int16_t, 4))((-6L))), 0x6D07L, 0x742EL, 0L)).sf == p_17) || p_16) && l_758.sf))) ^ 6UL) <= p_16)))))).xzxwxwzzwzwzzxxy))))).s2 != GROUP_DIVERGE(1, 1)), p_15)), 1L)), l_758.sd, ((VECTOR(uint32_t, 2))(5UL)), 4294967295UL))))).s3674436005662344, ((VECTOR(uint32_t, 16))(0xE21B7C76L))))).odd)), ((VECTOR(uint32_t, 4))(0xFC0DC581L)), 0UL, 4294967295UL)).s9 , l_771[3][0][3]);
        (*l_773) = l_772;
        (*l_721) = (safe_add_func_int32_t_s_s(l_758.s1, 4294967288UL));
    }
    return p_914->g_776;
}


/* ------------------------------------------ */
/* 
 * reads : p_914->g_comm_values p_914->g_41 p_914->g_47 p_914->g_66 p_914->g_75 p_914->g_36 p_914->g_84 p_914->g_111 p_914->g_112 p_914->g_138 p_914->g_144 p_914->g_174 p_914->g_179 p_914->g_113 p_914->g_183 p_914->g_83 p_914->g_286.f0 p_914->g_290 p_914->g_180 p_914->g_292 p_914->g_294 p_914->g_127 p_914->g_298 p_914->g_339 p_914->g_414 p_914->g_354 p_914->g_415.f2 p_914->g_415.f4 p_914->g_135 p_914->g_497 p_914->g_498 p_914->g_499 p_914->g_286.f2.f1 p_914->g_509 p_914->g_510 p_914->g_525 p_914->g_403 p_914->g_152 p_914->g_356 p_914->g_415.f5 p_914->g_565 p_914->g_286.f1 p_914->g_649 p_914->g_185 p_914->g_330 p_914->g_670 p_914->g_680 p_914->g_707 p_914->g_430
 * writes: p_914->g_66 p_914->g_75 p_914->g_comm_values p_914->g_84 p_914->g_111 p_914->g_127 p_914->g_135 p_914->g_138 p_914->g_144 p_914->g_152 p_914->g_179 p_914->g_180 p_914->g_113 p_914->g_183 p_914->g_185 p_914->g_287 p_914->g_290 p_914->g_47 p_914->g_298 p_914->g_286.f0 p_914->g_339 p_914->g_330 p_914->g_286.f1 p_914->g_174 p_914->g_436 p_914->g_437 p_914->g_294 p_914->g_415.f4 p_914->g_534 p_914->g_415.f2 p_914->g_525 p_914->g_403 p_914->g_509 p_914->g_685
 */
int32_t  func_37(int64_t * p_38, int8_t  p_39, uint64_t  p_40, struct S6 * p_914)
{ /* block id: 6 */
    uint64_t l_48 = 0xC7D870105C6596AAL;
    uint16_t *l_65 = &p_914->g_66[7][6];
    VECTOR(int64_t, 16) l_73 = (VECTOR(int64_t, 16))(0x16490A06BCA32D9FL, (VECTOR(int64_t, 4))(0x16490A06BCA32D9FL, (VECTOR(int64_t, 2))(0x16490A06BCA32D9FL, 0x67FB9BE98DF1E582L), 0x67FB9BE98DF1E582L), 0x67FB9BE98DF1E582L, 0x16490A06BCA32D9FL, 0x67FB9BE98DF1E582L, (VECTOR(int64_t, 2))(0x16490A06BCA32D9FL, 0x67FB9BE98DF1E582L), (VECTOR(int64_t, 2))(0x16490A06BCA32D9FL, 0x67FB9BE98DF1E582L), 0x16490A06BCA32D9FL, 0x67FB9BE98DF1E582L, 0x16490A06BCA32D9FL, 0x67FB9BE98DF1E582L);
    int64_t *l_74 = &p_914->g_75;
    int64_t *l_80 = (void*)0;
    int32_t *l_293[10] = {&p_914->g_47[2],&p_914->g_47[2],&p_914->g_47[2],&p_914->g_47[2],&p_914->g_47[2],&p_914->g_47[2],&p_914->g_47[2],&p_914->g_47[2],&p_914->g_47[2],&p_914->g_47[2]};
    VECTOR(int8_t, 8) l_487 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L));
    VECTOR(uint32_t, 16) l_507 = (VECTOR(uint32_t, 16))(0xACA4CB82L, (VECTOR(uint32_t, 4))(0xACA4CB82L, (VECTOR(uint32_t, 2))(0xACA4CB82L, 4294967289UL), 4294967289UL), 4294967289UL, 0xACA4CB82L, 4294967289UL, (VECTOR(uint32_t, 2))(0xACA4CB82L, 4294967289UL), (VECTOR(uint32_t, 2))(0xACA4CB82L, 4294967289UL), 0xACA4CB82L, 4294967289UL, 0xACA4CB82L, 4294967289UL);
    uint32_t l_517 = 4294967292UL;
    VECTOR(uint16_t, 2) l_519 = (VECTOR(uint16_t, 2))(0xD599L, 0x2A7AL);
    uint16_t *l_531 = &p_914->g_298;
    uint32_t l_547 = 0x775A189CL;
    struct S3 ***l_559[8][9] = {{&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2],(void*)0,&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2]},{&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2],(void*)0,&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2]},{&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2],(void*)0,&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2]},{&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2],(void*)0,&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2]},{&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2],(void*)0,&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2]},{&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2],(void*)0,&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2]},{&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2],(void*)0,&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2]},{&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2],(void*)0,&p_914->g_534[2],&p_914->g_534[2],(void*)0,&p_914->g_534[2]}};
    uint64_t l_590[3];
    VECTOR(int32_t, 4) l_603 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x77D8AD76L), 0x77D8AD76L);
    int32_t l_624 = 0x6E3EB834L;
    int64_t ***l_690 = (void*)0;
    int64_t ***l_691[5];
    VECTOR(int16_t, 16) l_706 = (VECTOR(int16_t, 16))(0x6797L, (VECTOR(int16_t, 4))(0x6797L, (VECTOR(int16_t, 2))(0x6797L, (-1L)), (-1L)), (-1L), 0x6797L, (-1L), (VECTOR(int16_t, 2))(0x6797L, (-1L)), (VECTOR(int16_t, 2))(0x6797L, (-1L)), 0x6797L, (-1L), 0x6797L, (-1L));
    uint32_t *l_714 = (void*)0;
    uint32_t *l_715 = (void*)0;
    uint32_t *l_716 = (void*)0;
    uint32_t *l_717 = (void*)0;
    uint32_t *l_718[5];
    int32_t **l_719[1][7][5] = {{{&l_293[7],&l_293[7],&l_293[0],&l_293[7],&l_293[7]},{&l_293[7],&l_293[7],&l_293[0],&l_293[7],&l_293[7]},{&l_293[7],&l_293[7],&l_293[0],&l_293[7],&l_293[7]},{&l_293[7],&l_293[7],&l_293[0],&l_293[7],&l_293[7]},{&l_293[7],&l_293[7],&l_293[0],&l_293[7],&l_293[7]},{&l_293[7],&l_293[7],&l_293[0],&l_293[7],&l_293[7]},{&l_293[7],&l_293[7],&l_293[0],&l_293[7],&l_293[7]}}};
    int32_t *l_720 = &l_624;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_590[i] = 18446744073709551609UL;
    for (i = 0; i < 5; i++)
        l_691[i] = &p_914->g_685;
    for (i = 0; i < 5; i++)
        l_718[i] = (void*)0;
    for (p_39 = 0; (p_39 == (-18)); p_39 = safe_sub_func_uint16_t_u_u(p_39, 9))
    { /* block id: 9 */
        int32_t *l_45 = (void*)0;
        int32_t *l_46[8];
        int i;
        for (i = 0; i < 8; i++)
            l_46[i] = &p_914->g_47[2];
        l_48 ^= p_914->g_comm_values[p_914->tid];
        for (l_48 = 0; (l_48 > 18); ++l_48)
        { /* block id: 13 */
            return l_48;
        }
    }
    if ((safe_sub_func_uint8_t_u_u((p_914->g_41[0] == (void*)0), (p_40 , func_53(func_59(p_914->g_47[3], (((p_914->g_47[2] , (++(*l_65))) <= func_69(p_39, ((*l_74) ^= ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_73.sb275dcb43529adff)).s65)).yyxyyyyxxyyxxxyx)).se), ((((p_40 < (safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((p_914->g_comm_values[p_914->tid] = p_914->g_47[0]), l_48)), p_40))) < p_914->g_36.s3) , l_48) | 0L), p_914)) , p_914->g_180), p_914->g_292, l_293[7], &p_914->g_47[2], p_914), p_914->g_286.f0, l_74, p_40, p_914->g_174.s1, p_914)))))
    { /* block id: 191 */
        int32_t **l_461[7] = {&l_293[1],&p_914->g_339,&l_293[1],&l_293[1],&p_914->g_339,&l_293[1],&l_293[1]};
        int64_t *l_474 = (void*)0;
        int i;
        p_914->g_339 = l_293[7];
        for (p_914->g_179 = 26; (p_914->g_179 >= 16); p_914->g_179--)
        { /* block id: 195 */
            uint32_t l_464 = 4294967295UL;
            int32_t l_465 = (-1L);
            uint32_t l_475 = 0x29C9EBDFL;
            l_465 |= (l_464 &= (p_40 | 0L));
            p_914->g_294.sd = ((((safe_sub_func_uint32_t_u_u(0x25596403L, 0xB7241594L)) | (8L != (safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_914->global_0_offset, get_global_id(0), 10), 5)))) , (safe_div_func_uint8_t_u_u(p_914->g_111[0], (safe_mul_func_uint16_t_u_u(0x1C6CL, 65535UL))))) | (p_38 == l_474));
            p_914->g_294.sc |= (p_40 , ((void*)0 == &p_914->g_339));
            --l_475;
        }
        for (p_914->g_415.f4 = 24; (p_914->g_415.f4 < 0); p_914->g_415.f4 = safe_sub_func_int16_t_s_s(p_914->g_415.f4, 7))
        { /* block id: 204 */
            if (p_40)
                break;
        }
        for (p_914->g_415.f4 = 0; (p_914->g_415.f4 < (-16)); p_914->g_415.f4 = safe_sub_func_int32_t_s_s(p_914->g_415.f4, 2))
        { /* block id: 209 */
            VECTOR(int8_t, 4) l_486 = (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 6L), 6L);
            int16_t l_494 = (-1L);
            int i;
            if (p_40)
                break;
            p_914->g_286.f0 = ((((safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_914->local_2_offset, get_local_id(2), 10), 1L)) >= (p_39 < (GROUP_DIVERGE(2, 1) , (safe_mul_func_int8_t_s_s((p_914->g_135[1] != (void*)0), ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_486.zxwz)), ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(0x6CL, 2L)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_487.s2054245737462344)).hi)).s30))), 0x4DL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))((((safe_div_func_uint8_t_u_u((p_914->g_111[1] = (safe_rshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s((p_39 && l_486.w), ((((0x4ADAD5B0D86ED1A4L < l_486.w) & (p_39 >= p_39)) || p_914->g_111[0]) & 0x3E27L))) && l_494), GROUP_DIVERGE(1, 1)))), p_39)) ^ p_39) , p_914->g_183), 0x3AL, p_39, p_914->g_174.s2, 0x0EL, ((VECTOR(int8_t, 8))(1L)), 0x00L, 0L, 0x1CL)).s4f8f)), p_914->g_354.sc, 0x4DL, 0L, 2L, 1L)).s58, ((VECTOR(int8_t, 2))(0x33L))))).xyyx, ((VECTOR(int8_t, 4))(0x06L))))).ywxywwyzwzxxwywy)).s1ae8))), ((VECTOR(int8_t, 4))(1L))))).x))))) == p_39) < p_40);
        }
    }
    else
    { /* block id: 214 */
        VECTOR(int32_t, 16) l_508 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3F0F1AF0L), 0x3F0F1AF0L), 0x3F0F1AF0L, (-1L), 0x3F0F1AF0L, (VECTOR(int32_t, 2))((-1L), 0x3F0F1AF0L), (VECTOR(int32_t, 2))((-1L), 0x3F0F1AF0L), (-1L), 0x3F0F1AF0L, (-1L), 0x3F0F1AF0L);
        uint32_t *l_522 = (void*)0;
        uint32_t *l_523 = &p_914->g_138;
        VECTOR(int8_t, 4) l_546 = (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 0x35L), 0x35L);
        struct S3 **l_673 = &p_914->g_287;
        int32_t *l_688 = (void*)0;
        int i;
        for (p_914->g_127 = (-14); (p_914->g_127 <= 8); p_914->g_127 = safe_add_func_uint16_t_u_u(p_914->g_127, 7))
        { /* block id: 217 */
            uint8_t l_500 = 251UL;
            int32_t l_503 = (-1L);
            uint32_t *l_513 = (void*)0;
            uint32_t *l_514 = &p_914->g_138;
            uint32_t *l_515 = (void*)0;
            uint32_t *l_516 = (void*)0;
            int32_t l_518 = 3L;
            (*p_914->g_339) = (*p_914->g_339);
            l_518 ^= (l_508.s2 = ((VECTOR(int32_t, 16))(0x2ACE16EBL, 0x5896E2E9L, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((void*)0 == p_914->g_497), (-9L), ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(p_914->g_498.s443f8736)).odd))), 1L, 9L)).lo)).odd, ((VECTOR(int32_t, 4))(p_914->g_499.sba73)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x1F613E0AL, 0L, 0x09699E28L, 0L)))).yywzxzwy)).s26))))))), (l_500 != p_40), 1L, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(0x3EB499B8L, 0x7C349F62L)).yyxx, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((l_503 = (safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_914->group_2_offset, get_group_id(2), 10), 6))), ((*p_914->g_339) = (safe_unary_minus_func_int64_t_s((p_914->g_286.f2.f1 , ((safe_rshift_func_uint16_t_u_s(((!(((VECTOR(uint32_t, 16))(l_507.sbffb2fbaf79d217b)).s6 >= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_508.s51)).xxyx, ((VECTOR(int32_t, 16))(p_914->g_509.sa06b532a35b657de)).sf827))), p_40, ((VECTOR(int32_t, 2))(p_914->g_510.s67)), 1L)).s2)) , (safe_mod_func_int16_t_s_s(p_40, ((l_517 = ((*l_514) |= ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0L, 0L)).xyxyyyxy)).s2604551513210243)).sd == 0xD4L) || GROUP_DIVERGE(0, 1)))) && (*p_914->g_339))))), 9)) , p_914->g_354.sb))))), ((VECTOR(int32_t, 4))((-1L))), 0x3E8A71D3L, 0L)).s75)), ((VECTOR(int32_t, 2))(0x2661F1DEL))))).xyxy))).zzzxxxxx, (int32_t)1L))).s2, ((VECTOR(int32_t, 8))(0x52FA2251L)), 0L)).sd);
        }
        if ((((0xE940L != p_39) , l_65) != (((*l_523) |= (((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 2))(0xB4CFL, 8UL)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_519.xyyxxyxx)).s5277430402332113)).s8a))).hi != (safe_sub_func_uint32_t_u_u((l_508.s3 = p_914->g_415.f2), 4294967295UL)))) , (void*)0)))
        { /* block id: 228 */
            uint64_t *l_526[6] = {(void*)0,&l_48,(void*)0,(void*)0,&l_48,(void*)0};
            uint16_t *l_535[2][8][10] = {{{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84}},{{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84},{(void*)0,(void*)0,&p_914->g_66[7][6],(void*)0,&p_914->g_66[3][7],&p_914->g_298,&p_914->g_298,&p_914->g_66[7][6],(void*)0,&p_914->g_84}}};
            VECTOR(int32_t, 4) l_539 = (VECTOR(int32_t, 4))(0x4AEBBAB2L, (VECTOR(int32_t, 2))(0x4AEBBAB2L, 0x3F5D8886L), 0x3F5D8886L);
            int32_t **l_540 = &l_293[7];
            int32_t l_602 = 0x6B128FA8L;
            int64_t l_616[1];
            int32_t l_623 = 2L;
            union U5 *l_659 = &p_914->g_660;
            union U5 *l_661 = &p_914->g_662;
            struct S4 *l_663 = (void*)0;
            struct S3 **l_678 = &p_914->g_287;
            int64_t **l_682[1][8][3] = {{{&p_914->g_292,(void*)0,&p_914->g_292},{&p_914->g_292,(void*)0,&p_914->g_292},{&p_914->g_292,(void*)0,&p_914->g_292},{&p_914->g_292,(void*)0,&p_914->g_292},{&p_914->g_292,(void*)0,&p_914->g_292},{&p_914->g_292,(void*)0,&p_914->g_292},{&p_914->g_292,(void*)0,&p_914->g_292},{&p_914->g_292,(void*)0,&p_914->g_292}}};
            int64_t ***l_681 = &l_682[0][5][0];
            int64_t **l_684 = &l_80;
            int64_t ***l_683[10];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_616[i] = 0x0894D3C2205079ADL;
            for (i = 0; i < 10; i++)
                l_683[i] = &l_684;
            if (((*p_914->g_339) = (*p_914->g_339)))
            { /* block id: 230 */
                int8_t l_524 = 0L;
                struct S3 **l_533 = (void*)0;
                struct S3 ***l_532[9] = {&l_533,&l_533,&l_533,&l_533,&l_533,&l_533,&l_533,&l_533,&l_533};
                int64_t *l_536 = (void*)0;
                int64_t *l_537 = &p_914->g_415.f2;
                int32_t l_538 = (-1L);
                VECTOR(int16_t, 8) l_552 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                int32_t l_571[5][5] = {{(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L)}};
                int i, j;
                l_538 |= (((l_524 = (-10L)) > (((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 2))(0x50E54AE0C934FDD1L, 0x266CB8E8F1DCE807L)).yxyxyxyy, ((VECTOR(uint64_t, 16))(p_914->g_525.xxyyyyxyyyxxxxxy)).even))).s5 > 0x706A856433A3600AL)) & ((*l_537) = (((void*)0 != l_526[4]) < (p_914->g_111[1] && (l_508.s6 = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((l_531 == ((&p_914->g_287 == (p_914->g_534[2] = (void*)0)) , l_535[0][2][1])), p_40)), 0)) != p_40))))));
                if (((VECTOR(int32_t, 8))(l_539.xwzxzxxw)).s7)
                { /* block id: 236 */
                    (*p_914->g_339) &= (l_540 != &l_293[7]);
                    return (*p_914->g_339);
                }
                else
                { /* block id: 239 */
                    int16_t l_551 = 5L;
                    int32_t l_553 = (-1L);
                    int32_t l_554 = 0x719F2264L;
                    uint16_t *l_566 = &p_914->g_66[2][5];
                    int32_t l_573 = 0x5C683F98L;
                    int32_t l_576 = 8L;
                    uint16_t l_579 = 65529UL;
                    int32_t l_625[8][8][4] = {{{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)}},{{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)}},{{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)}},{{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)}},{{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)}},{{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)}},{{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)}},{{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)},{0x4B528BC5L,(-2L),0x63DFE1E9L,(-10L)}}};
                    int64_t l_626 = 0L;
                    uint32_t l_627 = 4294967295UL;
                    int i, j, k;
                    for (p_914->g_84 = 0; (p_914->g_84 != 2); p_914->g_84 = safe_add_func_uint16_t_u_u(p_914->g_84, 6))
                    { /* block id: 242 */
                        uint32_t l_543 = 1UL;
                        uint32_t *l_550 = (void*)0;
                        int32_t l_564 = 0x4C9A4695L;
                        int32_t l_572 = 0x47D52206L;
                        int32_t l_574 = 0L;
                        int32_t l_575 = (-1L);
                        int32_t l_577 = 9L;
                        int32_t l_578 = (-1L);
                        ++l_543;
                        l_554 = (((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_546.xxxwxwzyzyyzyyzw)).s46)).odd | ((((p_914->g_403.sd , l_547) | (l_508.s6 = ((safe_lshift_func_int16_t_s_s((((((((void*)0 == l_550) & 0xC7C9E4F19D413339L) , ((VECTOR(int16_t, 8))((-2L), l_551, ((VECTOR(int16_t, 4))(l_552.s2756)), 0x2DAFL, 0L)).s1) == 0x6F2BL) != (p_914->g_152[1] == (l_553 = GROUP_DIVERGE(2, 1)))) == 0x04L), l_508.s1)) < 0x4953L))) > 0xEACE8713L) && p_39)) & p_914->g_356.z) , p_40);
                        p_914->g_294.s8 ^= ((safe_mod_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((p_914->g_138 = (l_559[4][4] == &p_914->g_534[2])), (safe_mul_func_uint8_t_u_u((0x2A7E2A1EL & 9L), p_914->g_415.f5)))) & (safe_sub_func_uint64_t_u_u(((l_564 < ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(p_914->g_565.zxxw)), ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 16))(0x0AL, 0x76L, (p_39 = (l_566 == ((safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((void*)0 != &l_538), (*p_914->g_339))), p_39)) , (void*)0))), (-1L), (-1L), 3L, ((VECTOR(int8_t, 4))(0x05L)), p_39, (-1L), p_914->g_66[7][6], ((VECTOR(int8_t, 2))(0x64L)), 0x26L)), ((VECTOR(int8_t, 16))(1L))))).sc3)), ((VECTOR(int8_t, 2))(0x6CL)), ((VECTOR(int8_t, 2))(0x7AL))))).xxyx, ((VECTOR(int8_t, 4))(2L))))), ((VECTOR(int8_t, 4))(0x3DL))))).xyyzzywxzzwzwxzz, (int8_t)l_538, (int8_t)p_39))))).s70f7)).z) < p_914->g_286.f1), p_914->g_66[7][6]))) , 0L), 0xEE09L)) != p_40);
                        l_579++;
                    }
                    for (p_914->g_183 = 0; (p_914->g_183 == (-29)); p_914->g_183 = safe_sub_func_int16_t_s_s(p_914->g_183, 8))
                    { /* block id: 254 */
                        if ((*p_914->g_339))
                            break;
                        return l_571[2][4];
                    }
                    for (l_553 = 0; (l_553 <= (-24)); l_553 = safe_sub_func_int16_t_s_s(l_553, 9))
                    { /* block id: 260 */
                        int64_t l_601[5];
                        uint8_t *l_617 = (void*)0;
                        uint8_t *l_618[3];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_601[i] = 0x3AD14FCAA076FF46L;
                        for (i = 0; i < 3; i++)
                            l_618[i] = &p_914->g_111[0];
                        l_602 &= ((((safe_div_func_uint16_t_u_u(l_508.sc, (safe_rshift_func_int16_t_s_u(((p_39 , l_590[2]) , (((p_40 , &p_914->g_339) == (void*)0) , (safe_add_func_uint64_t_u_u((p_914->g_525.y = (safe_sub_func_uint16_t_u_u(((*l_65)++), (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((void*)0 == l_535[0][4][0]), ((*l_523) = 0x893CF65AL))), 0))))), p_39)))), 6)))) >= (*p_914->g_339)) , l_601[3]) != l_539.z);
                        l_603.z |= p_40;
                        l_602 ^= (safe_rshift_func_uint16_t_u_u(((p_914->g_185 = (p_39 , (p_914->g_111[1] < (+((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((p_40 <= (safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s((((((~FAKE_DIVERGE(p_914->global_1_offset, get_global_id(1), 10)) | (safe_lshift_func_uint8_t_u_u(p_39, (((VECTOR(int32_t, 4))((-4L), (*p_914->g_339), (-7L), 1L)).x != (*p_914->g_339))))) | l_573) & (((*l_65) = ((void*)0 == &p_39)) <= 0UL)) <= l_616[0]), 0x3CA4L)), l_508.s8))), p_914->g_290)), l_553)) < 0x4395L))))) == p_40), GROUP_DIVERGE(0, 1)));
                        return p_39;
                    }
                    for (p_914->g_179 = 12; (p_914->g_179 < (-18)); --p_914->g_179)
                    { /* block id: 273 */
                        int16_t l_621 = 0x1463L;
                        int32_t l_622[4];
                        uint8_t *l_636[1][3][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_622[i] = (-7L);
                        l_627--;
                        l_508.sf = (*p_914->g_339);
                        l_602 = (((safe_div_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(p_39, (0x8FL > (safe_add_func_int8_t_s_s((-9L), (p_914->g_403.s2--)))))) | (safe_lshift_func_uint8_t_u_s((~((safe_mul_func_uint8_t_u_u((p_39 != ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 2))((-7L), 0x6DL)).xxxyxxxyyxxxyyyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-4L), 5L)), p_40, ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(0L, (((*l_523) = (((safe_lshift_func_uint16_t_u_u((+(safe_mod_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_u((p_39 > ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(p_914->g_649.xxxx)).odd)).yyxx))).z), (safe_unary_minus_func_uint64_t_u(p_914->g_185)))) | ((safe_mul_func_int8_t_s_s(p_914->g_510.s3, (safe_sub_func_int32_t_s_s(p_40, 0x08FF19E4L)))) , l_524)) <= p_39), 0x3FC2982223AD0C1AL))), p_39)) < p_914->g_174.s4) == p_40)) || p_40), ((VECTOR(int8_t, 4))((-1L))), 0x02L, 0x1EL)))).s4441310733266420, ((VECTOR(int8_t, 16))(1L)), ((VECTOR(int8_t, 16))(0x46L))))).sc, ((VECTOR(int8_t, 4))(6L)), 0x08L, l_546.z, ((VECTOR(int8_t, 2))(7L)), ((VECTOR(int8_t, 4))(0L)))).hi)).s2244403656570435)), ((VECTOR(int8_t, 16))(0x2DL))))).sf), p_914->g_330.sb)) & p_39)), p_40))), 0x1BL)) >= l_622[1]) & 0xF9BAAF5CL);
                    }
                }
                (*p_914->g_339) ^= (+(&l_533 == (void*)0));
            }
            else
            { /* block id: 282 */
                union U5 *l_655 = &p_914->g_656;
                union U5 **l_657 = (void*)0;
                union U5 **l_658[9];
                int64_t *l_671 = (void*)0;
                int64_t *l_672 = &l_616[0];
                int32_t l_676[4][7][9] = {{{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L}},{{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L}},{{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L}},{{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L},{0L,0x69968431L,(-1L),(-9L),0x5BB23C21L,0x69F712EDL,(-1L),0L,0L}}};
                int8_t *l_677[3][6][10] = {{{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0}},{{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0}},{{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0},{&p_914->g_144,(void*)0,(void*)0,&p_914->g_127,&p_914->g_127,&p_914->g_144,&p_914->g_144,&p_914->g_127,&p_914->g_127,(void*)0}}};
                int64_t *l_679 = &p_914->g_75;
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_658[i] = &l_655;
                l_661 = (l_659 = l_655);
                l_663 = p_914->g_414;
                p_914->g_509.sf &= (safe_sub_func_int64_t_s_s((((safe_add_func_uint64_t_u_u((p_914->g_286.f0 >= (((*l_672) = (p_40 && ((VECTOR(uint64_t, 4))(p_914->g_670.s8b06)).w)) < (p_914->g_294.s9 < (l_673 != (void*)0)))), ((l_676[0][1][4] = ((l_679 = ((p_40 != (GROUP_DIVERGE(2, 1) >= ((((VECTOR(int32_t, 2))(0x57DB1F14L, 0x05C6EA0DL)).odd , (((p_39 = ((-1L) && ((safe_lshift_func_uint16_t_u_s((((VECTOR(int64_t, 2))((-9L), 0x0CE0602C174FD0E1L)).hi <= (l_540 != &p_914->g_339)), p_40)) , l_676[3][4][3]))) , l_678) == l_678)) , (*p_914->g_339)))) , (void*)0)) == p_38)) ^ (-1L)))) < p_40) & p_914->g_680[1]), p_40));
            }
            p_914->g_685 = ((*l_681) = &p_38);
        }
        else
        { /* block id: 294 */
            int32_t **l_689 = (void*)0;
            for (p_914->g_185 = 0; (p_914->g_185 == 18); p_914->g_185 = safe_add_func_uint16_t_u_u(p_914->g_185, 1))
            { /* block id: 297 */
                return (*p_914->g_339);
            }
            p_914->g_339 = l_688;
        }
    }
    l_720 = ((((p_914->g_685 = (void*)0) == (void*)0) | (((safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_int16_t_s_s(p_40, ((safe_lshift_func_int8_t_s_s((!(safe_mod_func_uint32_t_u_u((p_914->g_138 = ((safe_add_func_uint16_t_u_u(0x5A0DL, ((p_39 , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL)).yyxx)))).x) != ((p_914->g_510.s4 ^ (safe_sub_func_uint64_t_u_u(p_39, (p_40 < ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_706.sf0)), ((VECTOR(int16_t, 4))(p_914->g_707.s12c6)), (-10L), 0x1535L)).odd)).lo)).hi)))) == (safe_rshift_func_uint8_t_u_s((FAKE_DIVERGE(p_914->global_2_offset, get_global_id(2), 10) < (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((&p_914->g_111[0] == (void*)0), p_914->g_127)), p_914->g_comm_values[p_914->tid]))), p_914->g_680[1])))))) , p_39)), p_914->g_430.s1))), p_914->g_415.f5)) != FAKE_DIVERGE(p_914->local_2_offset, get_local_id(2), 10)))) , (void*)0) != l_691[2]) & p_40), 11)), 0x579C635C95A9494EL)) , 252UL) | p_39)) , &l_624);
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads : p_914->g_127 p_914->g_298 p_914->g_comm_values p_914->g_47 p_914->g_339 p_914->g_138 p_914->g_36 p_914->g_294 p_914->g_179 p_914->g_84 p_914->g_414 p_914->g_354 p_914->g_183 p_914->g_415.f2
 * writes: p_914->g_127 p_914->g_298 p_914->g_179 p_914->g_286.f0 p_914->g_339 p_914->g_330 p_914->g_138 p_914->g_47 p_914->g_84 p_914->g_180 p_914->g_286.f1 p_914->g_174 p_914->g_436 p_914->g_437
 */
int8_t  func_53(int64_t * p_54, uint64_t  p_55, int64_t * p_56, int64_t  p_57, uint32_t  p_58, struct S6 * p_914)
{ /* block id: 123 */
    VECTOR(int64_t, 2) l_306 = (VECTOR(int64_t, 2))(0L, (-3L));
    int32_t l_322 = 0x3D80B590L;
    uint32_t l_337 = 4294967295UL;
    struct S3 **l_350 = &p_914->g_287;
    int32_t l_365 = 0L;
    int32_t l_367 = 0x5244D842L;
    int32_t l_368 = (-1L);
    int32_t l_370[9][6][4] = {{{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L}},{{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L}},{{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L}},{{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L}},{{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L}},{{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L}},{{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L}},{{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L}},{{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L},{(-5L),0L,0x7D387E9AL,0L}}};
    int64_t **l_406 = &p_914->g_113;
    VECTOR(int8_t, 2) l_411 = (VECTOR(int8_t, 2))(0x45L, 0x65L);
    VECTOR(uint64_t, 16) l_428 = (VECTOR(uint64_t, 16))(0xCE4B953B5F3B14E4L, (VECTOR(uint64_t, 4))(0xCE4B953B5F3B14E4L, (VECTOR(uint64_t, 2))(0xCE4B953B5F3B14E4L, 0UL), 0UL), 0UL, 0xCE4B953B5F3B14E4L, 0UL, (VECTOR(uint64_t, 2))(0xCE4B953B5F3B14E4L, 0UL), (VECTOR(uint64_t, 2))(0xCE4B953B5F3B14E4L, 0UL), 0xCE4B953B5F3B14E4L, 0UL, 0xCE4B953B5F3B14E4L, 0UL);
    VECTOR(uint64_t, 4) l_429 = (VECTOR(uint64_t, 4))(0x704AC2E8B9C6FF2CL, (VECTOR(uint64_t, 2))(0x704AC2E8B9C6FF2CL, 0x7F49ABFA238B327BL), 0x7F49ABFA238B327BL);
    VECTOR(int16_t, 2) l_441 = (VECTOR(int16_t, 2))(0x43F9L, (-2L));
    int16_t l_456 = 0x1A9CL;
    int i, j, k;
    for (p_914->g_127 = 0; (p_914->g_127 <= 2); p_914->g_127 = safe_add_func_uint8_t_u_u(p_914->g_127, 1))
    { /* block id: 126 */
        int32_t *l_297[3][10][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        int8_t *l_305 = &p_914->g_127;
        int8_t *l_307 = (void*)0;
        int16_t *l_311 = (void*)0;
        int16_t *l_312 = (void*)0;
        int16_t *l_313 = (void*)0;
        int16_t *l_314 = (void*)0;
        int16_t *l_315 = (void*)0;
        int16_t *l_316 = (void*)0;
        int16_t *l_317[3];
        uint32_t *l_318 = &p_914->g_138;
        int8_t *l_319[2][3] = {{&p_914->g_144,&p_914->g_144,&p_914->g_144},{&p_914->g_144,&p_914->g_144,&p_914->g_144}};
        VECTOR(int8_t, 16) l_343 = (VECTOR(int8_t, 16))(0x44L, (VECTOR(int8_t, 4))(0x44L, (VECTOR(int8_t, 2))(0x44L, 0x45L), 0x45L), 0x45L, 0x44L, 0x45L, (VECTOR(int8_t, 2))(0x44L, 0x45L), (VECTOR(int8_t, 2))(0x44L, 0x45L), 0x44L, 0x45L, 0x44L, 0x45L);
        VECTOR(int8_t, 16) l_344 = (VECTOR(int8_t, 16))(0x41L, (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 6L), 6L), 6L, 0x41L, 6L, (VECTOR(int8_t, 2))(0x41L, 6L), (VECTOR(int8_t, 2))(0x41L, 6L), 0x41L, 6L, 0x41L, 6L);
        int32_t l_351 = 5L;
        VECTOR(uint64_t, 8) l_355 = (VECTOR(uint64_t, 8))(0xC18B8C5D578F2025L, (VECTOR(uint64_t, 4))(0xC18B8C5D578F2025L, (VECTOR(uint64_t, 2))(0xC18B8C5D578F2025L, 1UL), 1UL), 1UL, 0xC18B8C5D578F2025L, 1UL);
        uint16_t l_371[2][2] = {{8UL,8UL},{8UL,8UL}};
        int32_t l_383 = 0x3E097742L;
        uint32_t l_388 = 4UL;
        int64_t **l_391 = (void*)0;
        uint32_t l_454[9];
        int16_t l_455 = 0x24F8L;
        uint8_t l_457 = 0xF1L;
        int32_t **l_460 = &p_914->g_339;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_317[i] = (void*)0;
        for (i = 0; i < 9; i++)
            l_454[i] = 1UL;
        p_914->g_298++;
        if ((((((0UL == (safe_add_func_int16_t_s_s(p_914->g_comm_values[p_914->tid], p_55))) == (safe_sub_func_uint16_t_u_u((l_305 != (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_306.xyxyyyxyxyyyxyxx)).scf)).even , l_307)), 1L))) || (((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_914->g_308.s33)), ((p_914->g_144 = (((*p_914->g_113) , ((*l_318) |= ((p_914->g_174.s0 = ((safe_lshift_func_uint8_t_u_s((p_914->g_75 && p_914->g_290), 4)) | 65535UL)) | l_306.x))) , l_306.x)) >= p_914->g_308.s1), 1UL, p_914->g_83[0][0][3], ((VECTOR(uint64_t, 2))(2UL)), 0x1A3A6D9E3838C388L)).s5635125303410761)).s3030)).even)).yyyxyyxxyxxyyyxx, (uint64_t)FAKE_DIVERGE(p_914->group_1_offset, get_group_id(1), 10)))).s088b)).odd, ((VECTOR(uint64_t, 2))(18446744073709551614UL))))).xxxxxxyxxxxyyyxy, ((VECTOR(uint64_t, 16))(3UL))))).sc , p_55)) , 0x50906C6DL) != p_55))
        { /* block id: 131 */
            uint16_t l_324 = 0x9CFAL;
            int32_t *l_329 = &p_914->g_286.f0;
            int64_t l_335 = 0x33493CBFDBCE61ADL;
            VECTOR(int32_t, 16) l_338 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x51137B19L), 0x51137B19L), 0x51137B19L, 1L, 0x51137B19L, (VECTOR(int32_t, 2))(1L, 0x51137B19L), (VECTOR(int32_t, 2))(1L, 0x51137B19L), 1L, 0x51137B19L, 1L, 0x51137B19L);
            VECTOR(int32_t, 16) l_398 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-5L)), (-5L)), (-5L), 1L, (-5L), (VECTOR(int32_t, 2))(1L, (-5L)), (VECTOR(int32_t, 2))(1L, (-5L)), 1L, (-5L), 1L, (-5L));
            int i;
            for (p_914->g_179 = 12; (p_914->g_179 > 25); p_914->g_179 = safe_add_func_int8_t_s_s(p_914->g_179, 3))
            { /* block id: 134 */
                int32_t l_323 = 2L;
                int32_t *l_327 = &p_914->g_47[2];
                int32_t **l_328 = &l_297[0][2][0];
                l_324--;
                (*l_328) = l_327;
                (*l_329) = (&p_914->g_47[2] == l_329);
                (*l_328) = (((((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_914->g_330.sd1b5)).even)).yxyyxyyx, ((VECTOR(int8_t, 16))(((((4294967292UL > ((safe_add_func_int16_t_s_s((l_335 ^= p_58), p_58)) && p_914->g_75)) < 0x20L) > (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0x14L, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(p_914->g_336.scda0508c)).s17, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x0DL, ((((p_56 == (void*)0) && (p_57 && 4UL)) , l_306.x) <= p_57), ((VECTOR(int8_t, 4))(0x33L)), 0x3CL, 0x48L)).s2263522002325547)).s55, ((VECTOR(int8_t, 2))((-1L)))))), 0L)), p_55, 0x58L, 0x78L, 0x38L)).s1 <= p_55)) == p_914->g_36.sd), p_58, (-4L), ((VECTOR(int8_t, 8))(0x3EL)), 0L, l_337, 0L, 1L, 1L)).even)))))).s27)).yyxyyxyxxxxyyxxx, ((VECTOR(int8_t, 16))(9L))))), ((VECTOR(int8_t, 16))(0x4EL)), ((VECTOR(int8_t, 16))((-1L)))))).sfd51, ((VECTOR(int8_t, 4))(0x57L))))), ((VECTOR(int8_t, 4))(0x2BL))))), ((VECTOR(uint8_t, 4))(249UL))))).z ^ p_57) <= (*l_327)) , &p_914->g_47[2]);
            }
            if (((VECTOR(int32_t, 2))(l_338.sfc)).hi)
            { /* block id: 141 */
                p_914->g_339 = p_914->g_339;
            }
            else
            { /* block id: 143 */
                uint32_t *l_340 = &l_337;
                VECTOR(int8_t, 16) l_345 = (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x57L), 0x57L), 0x57L, (-4L), 0x57L, (VECTOR(int8_t, 2))((-4L), 0x57L), (VECTOR(int8_t, 2))((-4L), 0x57L), (-4L), 0x57L, (-4L), 0x57L);
                VECTOR(uint64_t, 16) l_357 = (VECTOR(uint64_t, 16))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 0UL), 0UL), 0UL, 3UL, 0UL, (VECTOR(uint64_t, 2))(3UL, 0UL), (VECTOR(uint64_t, 2))(3UL, 0UL), 3UL, 0UL, 3UL, 0UL);
                int32_t l_364 = (-7L);
                VECTOR(int32_t, 2) l_366 = (VECTOR(int32_t, 2))(0x4D0A928BL, 0x2677C693L);
                int32_t l_369 = (-1L);
                int32_t *l_380 = &l_364;
                VECTOR(uint32_t, 2) l_387 = (VECTOR(uint32_t, 2))(0x64F29F08L, 4294967291UL);
                int32_t l_408[10][7][3] = {{{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)}},{{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)}},{{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)}},{{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)}},{{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)}},{{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)}},{{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)}},{{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)}},{{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)}},{{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)},{(-1L),0x4732B72CL,(-3L)}}};
                int i, j, k;
                (*p_914->g_339) &= (l_340 == ((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(l_343.s24)).xxxxyxyyxxyyxxxx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_344.seb)), 0x39L, 6L)).yzxzxxyzyyxzyxwy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x28L, 1L)), 0L, 1L)).lo, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-10L), 0x39L)), 0x56L, 0x2FL)).even))), ((VECTOR(int8_t, 16))(l_345.s034a2d40e8e4600e)).sc4))).xyxy)).xzzywwwxzzyyyyyx))).s1, ((safe_add_func_int64_t_s_s(((p_914->g_330.s2 = 0x43L) == (((~((*l_318)--)) , ((l_350 != (l_351 , l_350)) < ((VECTOR(uint64_t, 16))(0xD60B48651E5AF4C3L, l_306.x, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL)))), (safe_div_func_int8_t_s_s(p_58, l_306.y)), ((VECTOR(uint64_t, 8))(p_914->g_354.s42035c2b)), (((VECTOR(uint64_t, 8))(0x710F93FCF1142FC6L, 18446744073709551615UL, ((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 8))(l_355.s46560667)).s45, ((VECTOR(uint64_t, 8))(p_914->g_356.zzxwwxxy)).s44))).xxxy, ((VECTOR(uint64_t, 8))(l_357.s7367082a)).odd))), 0xFE34874BAAC38457L, 0x9463CFA9A27993A3L)).s3 & ((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u((p_914->g_354.sa ^= ((GROUP_DIVERGE(0, 1) > (safe_mul_func_int16_t_s_s((p_914->g_174.s4 = 0L), 0xC265L))) > 18446744073709551615UL)), 0xD2B7072FF2AD20E9L)), 0x68L)) == 18446744073709551609UL)), 0xC1FF58AC76A57F8FL, 0x661F05CBE08F61FBL)).se)) >= p_914->g_36.s4)), l_357.s0)) & p_914->g_294.sb))) , l_329));
                if (p_58)
                    continue;
                --l_371[0][1];
                for (p_914->g_84 = (-30); (p_914->g_84 != 48); p_914->g_84 = safe_add_func_int32_t_s_s(p_914->g_84, 4))
                { /* block id: 153 */
                    int32_t **l_379[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_379[i] = (void*)0;
                    for (p_914->g_180 = 0; (p_914->g_180 == 2); ++p_914->g_180)
                    { /* block id: 156 */
                        int64_t l_378 = 0x2AFEE7C95F5A43B8L;
                        if (l_378)
                            break;
                        return p_914->g_84;
                    }
                    l_380 = l_329;
                    for (p_914->g_286.f1 = (-1); (p_914->g_286.f1 != 33); p_914->g_286.f1 = safe_add_func_int32_t_s_s(p_914->g_286.f1, 2))
                    { /* block id: 163 */
                        uint16_t l_384 = 0xB4DBL;
                        uint16_t *l_392[1][4][6] = {{{&l_371[0][1],(void*)0,(void*)0,&l_371[0][1],&l_371[0][1],(void*)0},{&l_371[0][1],(void*)0,(void*)0,&l_371[0][1],&l_371[0][1],(void*)0},{&l_371[0][1],(void*)0,(void*)0,&l_371[0][1],&l_371[0][1],(void*)0},{&l_371[0][1],(void*)0,(void*)0,&l_371[0][1],&l_371[0][1],(void*)0}}};
                        int32_t l_397 = 8L;
                        uint8_t *l_407[6] = {&p_914->g_111[0],&p_914->g_111[0],&p_914->g_111[0],&p_914->g_111[0],&p_914->g_111[0],&p_914->g_111[0]};
                        int i, j, k;
                        l_384++;
                        l_322 ^= (GROUP_DIVERGE(0, 1) ^ ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_387.xyyyxxyx)))).s45)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((*l_380) = l_388), ((((p_914->g_112 = l_391) == (void*)0) || (l_365 = p_57)) | (((-1L) || ((l_397 |= (safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(p_58, (*l_329))), (((*l_340) &= (0x95L ^ l_370[3][4][3])) || 1UL)))) >= l_384)) == GROUP_DIVERGE(1, 1))), 3L, 0x05EA307CL)).odd, ((VECTOR(int32_t, 2))(0x386036BEL))))).xyxx, ((VECTOR(int32_t, 4))(0L))))), 0x678D84EEL, p_57, 4294967294UL, 0x824A4C45L, FAKE_DIVERGE(p_914->group_2_offset, get_group_id(2), 10), 0x2F14996AL, ((VECTOR(uint32_t, 2))(4294967289UL)), 0x74817ADAL, p_55, 5UL, 0x6B2E86EDL)))).s72)), 0xCA220655L, 0x30E7A6A1L, 0x282461E0L, ((VECTOR(uint32_t, 2))(0xC4BF4F27L)), 0x6DFF4710L)).s26)))), FAKE_DIVERGE(p_914->local_1_offset, get_local_id(1), 10), p_58, 0UL, 0x062DCC83L)), p_914->g_294.s5, 4294967295UL, ((VECTOR(uint32_t, 4))(0xFF8F4E65L)), 0xDB4B4B19L, 0x3AF556C2L)).sb7, ((VECTOR(uint32_t, 2))(0x30C7EED9L)), ((VECTOR(uint32_t, 2))(1UL))))), 0x7A86F961L, 1UL)).y);
                        (*l_329) = (((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-2L), (-1L))).even, ((VECTOR(int32_t, 2))(0x6A7978CCL, 0x24C28967L)), (-1L), 9L, 1L, (-8L), 0x600A4EA4L)))).s3704303550227123, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-1L), 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(6L, ((VECTOR(int32_t, 2))(0x15E0CD68L, 0L)), 0L)))).hi)), ((VECTOR(int32_t, 16))(l_398.s419ae76fe50d40a2)).se, 0x2A718CBEL, 0x22259853L, 0x686FB2D5L)), 0x5AB4AA50L, (p_55 , (safe_div_func_uint32_t_u_u((((((safe_rshift_func_int8_t_s_u(p_55, p_914->l_comm_values[(safe_mod_func_uint32_t_u_u(p_914->tid, 53))])) || ((VECTOR(uint8_t, 4))(p_914->g_403.sc69c)).z) , &p_55) == (void*)0) > p_57), 0x8B3B590CL))), p_55, (*p_914->g_339), 6L, ((VECTOR(int32_t, 2))(4L)), 0x36BE72DEL)), ((VECTOR(int32_t, 16))((-6L)))))).s2b54, ((VECTOR(int32_t, 4))(0x716BC517L))))), ((VECTOR(int32_t, 4))(0x13B2F198L))))).x == (*p_914->g_339));
                    }
                    if (l_408[9][3][1])
                        break;
                }
            }
        }
        else
        { /* block id: 177 */
            uint16_t *l_416 = &l_371[1][1];
            VECTOR(uint64_t, 4) l_427 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 1UL), 1UL);
            uint16_t l_431 = 0UL;
            int32_t *l_434 = (void*)0;
            int32_t *l_435 = &p_914->g_436;
            VECTOR(int16_t, 4) l_440 = (VECTOR(int16_t, 4))(0x766CL, (VECTOR(int16_t, 2))(0x766CL, (-4L)), (-4L));
            uint32_t l_452 = 4294967288UL;
            int i;
            (*p_914->g_339) ^= ((18446744073709551606UL <= (p_55 | (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(l_411.xyyxyyyx)).s1, 2)))) == (safe_mod_func_uint8_t_u_u((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x89L, 0xBAL)).xyxx)).yzwywwxywxwyywxw)))).sa > (((p_914->g_414 != (void*)0) , (((((*l_416) ^= p_58) & (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((p_914->g_174.s0 = (((+(((safe_add_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(p_57, (safe_rshift_func_int16_t_s_u(p_914->g_354.s5, 9)))), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 16))(l_427.xyxywzzwxxyzyzyz)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 4))(l_428.s8612)).xyxxzyxw, ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 2))(l_429.xy)), (uint64_t)((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 4))(p_914->g_430.s0bf4)).xwyzwwwywzzwxwyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x5D9DCC36L, 0L)))).yxxxyyxxxxxyyxyx))).s7be5)).hi, ((VECTOR(uint32_t, 4))(0x05F024F1L, 0xBCF6B7DCL, 4294967293UL, 0x64244D42L)).hi))).even, (uint64_t)(!p_55)))).yxyxxyxy))).s6, ((VECTOR(uint64_t, 2))(0x6170F75BE9E22665L)), 1UL, 0x56B187D94E97AC22L, ((VECTOR(uint64_t, 2))(8UL)), 0x9186C4120BF9218DL)).s6656122333472376))))).s1)) > p_914->g_183) | 0x4A2AL)) <= l_431) ^ l_429.z)), 9)), 5))) , (-10L)) == (-1L))) == p_914->g_127)), 7L)));
            (*p_914->g_339) |= 0x0CBE5523L;
            (*p_914->g_339) &= (safe_add_func_int16_t_s_s((p_55 < ((p_914->g_437 = ((*l_435) = 0x58A83B29L)) , (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(0x28E0L, 0x2721L)).yxxyyxxyyxyxyxxx, ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(l_440.yxyw)).yywxwxxxzwxwxyzy, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(0L, 0x17B5L)).xyyyyxyy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x21F5L, 0x4C06L)).xxyxyyyy)).s0660652410514161)).even, ((VECTOR(int16_t, 8))(l_441.xxxyxxxx))))).s5250247207633101, (int16_t)(safe_sub_func_int8_t_s_s((p_58 ^ (0x7C5F5D95B5CBE758L || ((((((safe_sub_func_uint16_t_u_u(((+1UL) & ((((VECTOR(int32_t, 4))(0x425EF9CCL, (FAKE_DIVERGE(p_914->group_0_offset, get_group_id(0), 10) < ((safe_rshift_func_uint16_t_u_s(((++(*l_416)) & (safe_rshift_func_int16_t_s_u(((l_452 > (((((VECTOR(uint32_t, 16))(p_914->g_453.xyyxyyyxxxxyxxxx)).se , &p_914->g_111[1]) == (void*)0) ^ (0UL != p_914->g_152[1]))) , (-1L)), p_55))), p_58)) , p_914->g_111[0])), 0x1ECB4C70L, (-3L))).y , (*p_56)) < GROUP_DIVERGE(2, 1))), 0x8DFDL)) , p_914->g_84) == l_370[7][1][0]) == p_58) , p_914->g_415.f6) && l_367))), l_452))))).s54, ((VECTOR(int16_t, 2))(8L)), ((VECTOR(int16_t, 2))(0x3FD7L))))).xyxyxyyxyxxyyyyx, ((VECTOR(int16_t, 16))(0x507CL))))), ((VECTOR(int16_t, 16))(7L)))))))).lo)), ((VECTOR(int16_t, 8))((-10L))), ((VECTOR(int16_t, 8))(0x3207L))))).s6, l_454[7])))), p_55));
        }
        l_457++;
        (*l_460) = &p_914->g_47[2];
    }
    return p_914->g_415.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_914->g_294 p_914->g_47 p_914->g_292
 * writes: p_914->g_47
 */
int64_t * func_59(uint32_t  p_60, uint64_t  p_61, int64_t * p_62, int32_t * p_63, int32_t * p_64, struct S6 * p_914)
{ /* block id: 120 */
    (*p_64) &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(p_914->g_294.s9a)).xxyx, (int32_t)((VECTOR(int32_t, 2))((-3L), 0x16825D98L)).hi))))).z;
    return p_914->g_292;
}


/* ------------------------------------------ */
/* 
 * reads : p_914->g_84 p_914->g_36 p_914->g_111 p_914->g_112 p_914->g_138 p_914->g_144 p_914->g_47 p_914->g_174 p_914->g_179 p_914->g_113 p_914->g_183 p_914->g_83 p_914->g_286.f0 p_914->g_290
 * writes: p_914->g_84 p_914->g_111 p_914->g_127 p_914->g_135 p_914->g_138 p_914->g_144 p_914->g_comm_values p_914->g_152 p_914->g_179 p_914->g_180 p_914->g_113 p_914->g_183 p_914->g_185 p_914->g_287 p_914->g_290
 */
int16_t  func_69(uint16_t  p_70, int64_t  p_71, uint32_t  p_72, struct S6 * p_914)
{ /* block id: 20 */
    int32_t *l_81[10] = {(void*)0,&p_914->g_47[2],&p_914->g_47[2],&p_914->g_47[2],(void*)0,(void*)0,&p_914->g_47[2],&p_914->g_47[2],&p_914->g_47[2],(void*)0};
    VECTOR(int64_t, 4) l_82 = (VECTOR(int64_t, 4))(0x06622CCD07D1F873L, (VECTOR(int64_t, 2))(0x06622CCD07D1F873L, (-9L)), (-9L));
    int64_t *l_101 = (void*)0;
    int64_t **l_100 = &l_101;
    uint8_t *l_110[6];
    int64_t *l_114[1];
    int8_t *l_182 = &p_914->g_183;
    uint64_t *l_288[8][9][3] = {{{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1}},{{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1}},{{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1}},{{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1}},{{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1}},{{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1}},{{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1}},{{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1},{&p_914->g_286.f2.f1,(void*)0,&p_914->g_286.f2.f1}}};
    uint64_t l_289 = 0xC0BBEF1F7B180F11L;
    int32_t **l_291 = &l_81[5];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_110[i] = &p_914->g_111[0];
    for (i = 0; i < 1; i++)
        l_114[i] = &p_914->g_75;
    ++p_914->g_84;
    p_914->g_290 |= ((safe_lshift_func_int16_t_s_s((~(2UL < 0x0CDF1940C85F22E3L)), p_71)) ^ (safe_mod_func_uint8_t_u_u(p_70, ((~((safe_add_func_uint32_t_u_u(p_914->g_36.s7, (safe_div_func_int16_t_s_s(((l_289 &= func_95((((*l_182) |= (((*l_100) = (void*)0) == ((*p_914->g_112) = func_102((((safe_lshift_func_uint8_t_u_s((!(p_914->g_111[0] |= ((p_914->g_36.s6 <= 65535UL) < p_72))), p_71)) , 0x78L) || p_72), p_914->g_112, p_70, l_114[0], &p_914->g_113, p_914)))) && p_70), p_72, &p_914->g_75, p_914->g_83[2][1][5], p_914)) | p_914->g_174.s4), p_914->g_286.f0)))) <= p_71)) , p_914->g_144))));
    (*l_291) = &p_914->g_47[2];
    return p_70;
}


/* ------------------------------------------ */
/* 
 * reads : p_914->g_83
 * writes: p_914->g_179 p_914->g_185 p_914->g_287
 */
uint64_t  func_95(uint16_t  p_96, uint32_t  p_97, int64_t * p_98, int64_t  p_99, struct S6 * p_914)
{ /* block id: 43 */
    int32_t *l_184[8][9] = {{&p_914->g_179,&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_47[3],&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_179},{&p_914->g_179,&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_47[3],&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_179},{&p_914->g_179,&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_47[3],&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_179},{&p_914->g_179,&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_47[3],&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_179},{&p_914->g_179,&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_47[3],&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_179},{&p_914->g_179,&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_47[3],&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_179},{&p_914->g_179,&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_47[3],&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_179},{&p_914->g_179,&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_47[3],&p_914->g_179,&p_914->g_47[2],&p_914->g_179,&p_914->g_179}};
    uint16_t l_186 = 65535UL;
    struct S3 *l_285[9];
    struct S3 **l_284[5] = {&l_285[6],&l_285[6],&l_285[6],&l_285[6],&l_285[6]};
    int i, j;
    for (i = 0; i < 9; i++)
        l_285[i] = &p_914->g_286;
    p_914->g_185 = (p_914->g_179 = 0x3CAAB667L);
    l_186--;
    if ((atomic_inc(&p_914->l_atomic_input[6]) == 6))
    { /* block id: 48 */
        uint16_t l_189[1];
        uint64_t l_192 = 0x23FB6E778D2D4E03L;
        int i;
        for (i = 0; i < 1; i++)
            l_189[i] = 0xBC0CL;
        l_189[0]--;
        if (l_192)
        { /* block id: 50 */
            uint64_t l_193 = 0x0F59D7E22B2D8C64L;
            uint32_t l_194 = 0x2FDB1AD6L;
            int64_t l_253 = (-1L);
            int8_t l_254 = 0x10L;
            VECTOR(uint8_t, 4) l_255 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x2DL), 0x2DL);
            int32_t l_256 = (-5L);
            int16_t l_257 = 1L;
            uint32_t l_258 = 1UL;
            int i;
            l_193 |= 0x120C650BL;
            if (l_194)
            { /* block id: 52 */
                int32_t l_195 = 0x3A1A6B03L;
                int32_t l_232 = (-6L);
                uint32_t l_233 = 0x7B139300L;
                for (l_195 = 29; (l_195 == 2); l_195 = safe_sub_func_int64_t_s_s(l_195, 1))
                { /* block id: 55 */
                    int32_t l_198 = 0x4202275DL;
                    for (l_198 = 0; (l_198 < 11); ++l_198)
                    { /* block id: 58 */
                        int64_t l_201 = (-1L);
                        VECTOR(int32_t, 2) l_202 = (VECTOR(int32_t, 2))(0x63D58976L, 0x40407284L);
                        VECTOR(int32_t, 2) l_203 = (VECTOR(int32_t, 2))(0x71B99297L, 0x2964B635L);
                        int64_t l_204 = (-10L);
                        VECTOR(int32_t, 16) l_205 = (VECTOR(int32_t, 16))(0x3C74038AL, (VECTOR(int32_t, 4))(0x3C74038AL, (VECTOR(int32_t, 2))(0x3C74038AL, 0L), 0L), 0L, 0x3C74038AL, 0L, (VECTOR(int32_t, 2))(0x3C74038AL, 0L), (VECTOR(int32_t, 2))(0x3C74038AL, 0L), 0x3C74038AL, 0L, 0x3C74038AL, 0L);
                        VECTOR(int32_t, 2) l_206 = (VECTOR(int32_t, 2))(0x7A8C351DL, 0x491F7684L);
                        uint32_t l_207 = 0xD3E2A85BL;
                        VECTOR(int32_t, 2) l_208 = (VECTOR(int32_t, 2))(9L, 0x1F96459FL);
                        VECTOR(int32_t, 16) l_209 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x7E80386AL), 0x7E80386AL), 0x7E80386AL, 3L, 0x7E80386AL, (VECTOR(int32_t, 2))(3L, 0x7E80386AL), (VECTOR(int32_t, 2))(3L, 0x7E80386AL), 3L, 0x7E80386AL, 3L, 0x7E80386AL);
                        VECTOR(int32_t, 2) l_210 = (VECTOR(int32_t, 2))(0x73874521L, 0L);
                        uint32_t l_211 = 0xB3C7FF32L;
                        int8_t l_212 = 1L;
                        VECTOR(int32_t, 2) l_213 = (VECTOR(int32_t, 2))(0x3AEF7A6BL, 1L);
                        VECTOR(int32_t, 4) l_214 = (VECTOR(int32_t, 4))(0x318F1BF9L, (VECTOR(int32_t, 2))(0x318F1BF9L, 1L), 1L);
                        uint8_t l_215 = 0xC5L;
                        uint32_t l_216 = 4294967295UL;
                        uint16_t l_217 = 0xFFBCL;
                        VECTOR(int32_t, 4) l_218 = (VECTOR(int32_t, 4))(0x3F4803A4L, (VECTOR(int32_t, 2))(0x3F4803A4L, 0x47C19EDDL), 0x47C19EDDL);
                        int32_t l_219 = 0x343FE88FL;
                        int8_t l_220 = 0x0CL;
                        uint8_t l_221 = 4UL;
                        uint64_t l_222 = 0x907BB7D368092EE9L;
                        uint32_t l_223 = 4294967291UL;
                        int64_t l_224 = 0x20057B354AC34EC5L;
                        uint8_t l_225 = 0xFAL;
                        uint64_t l_228 = 18446744073709551609UL;
                        int32_t l_229 = (-9L);
                        uint32_t l_230 = 1UL;
                        int32_t l_231 = 0x5E0DAF64L;
                        int i;
                        l_224 = (l_201 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))((-2L), 0x3068F17BL, 0x56DC47B3L, 0x52B1CF9FL)).yyywzwwzxzzzwyxw))).s33ae)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(l_202.xxyxxxyx)).s5355506730650361, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(l_203.yyxy)).ywzwyxzxxxwwwxxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_204, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_205.s13e7cbb9)), 0x16FE7B0AL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_206.xy)).xyxx)).wywwxywzxzzxxxzz)).sb2e2)), l_207, 1L, 5L)).s53, ((VECTOR(int32_t, 16))(0x30275B19L, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((-5L), ((VECTOR(int32_t, 4))(l_208.yxyx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_209.seef4bbcf4ff70791)))).sd8)), 0x17F5A8E2L)).s61)).yyxx, ((VECTOR(int32_t, 8))(0x0371CF87L, 0x0E3E810FL, 4L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_210.yy)), 0x2071F149L, 0x09C1C668L)), 0x05B39BC7L)).hi))), 0x27616D27L, (l_211 , (l_213.x = l_212)), (l_215 = ((VECTOR(int32_t, 4))(l_214.yzyw)).z), (l_216 = 0x070C8B1AL), (l_203.x = l_217), (l_219 = ((VECTOR(int32_t, 8))(l_218.wzzzwxxy)).s3), 0x4A7994EBL, l_220, ((VECTOR(int32_t, 2))((-1L))), 0x123DBF3AL)).s56, ((VECTOR(int32_t, 2))((-5L)))))), 8L, 0x4A49A00BL)).x, 0x7652C32FL, 1L)), l_221, ((VECTOR(int32_t, 4))(0x6C08DA6CL)), 0x5F1352EBL, l_222, 1L, l_223, 0x3DBD97F5L, (-7L), 0x4D2575F5L))))).s8c)).yyyy, ((VECTOR(int32_t, 4))(0x274FA118L))))).wzyzzzxyyyxzzzyz))).sceea, ((VECTOR(int32_t, 4))(0x5D988B33L))))).hi, ((VECTOR(int32_t, 2))((-4L))), ((VECTOR(int32_t, 2))(1L))))))), 0L, 0x03CA587EL)).s1443547313326563)).s1);
                        l_225--;
                        l_230 &= ((VECTOR(int32_t, 4))((l_208.y = 0L), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((-2L), l_228, (-7L), 0x7DDABB3DL)).yywzxzxzxyzxwxwz)).sb5, ((VECTOR(int32_t, 2))(0x3CC853F9L, 0x166874D8L)), ((VECTOR(int32_t, 4))(0x7488365CL, (l_229 |= 0L), 0L, 7L)).lo))), 5L)).y;
                        l_231 ^= 2L;
                    }
                }
                if ((((l_189[0] = (FAKE_DIVERGE(p_914->group_1_offset, get_group_id(1), 10) , 65535UL)) , l_232) , l_233))
                { /* block id: 73 */
                    int32_t l_234 = 0x6B3EBBC5L;
                    for (l_234 = 0; (l_234 != 8); l_234 = safe_add_func_uint8_t_u_u(l_234, 2))
                    { /* block id: 76 */
                        int64_t l_237 = 1L;
                        int8_t l_238 = 0x75L;
                        l_195 &= l_237;
                        l_195 = (-2L);
                        l_195 = l_238;
                    }
                }
                else
                { /* block id: 81 */
                    struct S4 l_240 = {{0x2BADB369L,0x223DDD05L,0L,0xCD717D07L},0x8E55590321B15B69L,0x50536D2C72399D5EL,1UL,-1L,1L,249UL};/* VOLATILE GLOBAL l_240 */
                    struct S4 *l_239 = &l_240;
                    uint32_t l_241[10];
                    int16_t l_244 = 0x64FCL;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_241[i] = 4294967291UL;
                    l_239 = (void*)0;
                    l_241[2]++;
                    l_195 |= l_244;
                }
            }
            else
            { /* block id: 86 */
                uint16_t l_245 = 0xB798L;
                uint64_t l_246 = 0xF4A846E4403DE6FFL;
                uint8_t l_247 = 255UL;
                VECTOR(int32_t, 8) l_248 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-5L)), (-5L)), (-5L), (-1L), (-5L));
                uint64_t l_249 = 2UL;
                int32_t l_250[8];
                int16_t l_251 = 0L;
                int32_t l_252 = 5L;
                int i;
                for (i = 0; i < 8; i++)
                    l_250[i] = 0x0D130F14L;
                l_245 = 0x5A82F8B9L;
                l_252 &= (l_251 &= ((l_246 , (((l_247 , 0x68L) , ((VECTOR(int32_t, 16))(l_248.s2661602663703057)).s4) , l_249)) , (l_250[1] , 0x7B1DF563L)));
            }
            l_255.y ^= (l_254 = l_253);
            l_258++;
        }
        else
        { /* block id: 94 */
            uint16_t l_261 = 0xADB3L;
            if ((l_261 , (-2L)))
            { /* block id: 95 */
                int32_t l_262 = (-1L);
                int64_t l_263[7][9][4] = {{{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L}},{{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L}},{{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L}},{{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L}},{{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L}},{{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L}},{{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L},{0x04ED48955634FACBL,0x06B5A6B39912CEF2L,4L,0x6500601462088323L}}};
                int32_t *l_264 = &l_262;
                VECTOR(uint32_t, 4) l_265 = (VECTOR(uint32_t, 4))(0x2F3A7BD0L, (VECTOR(uint32_t, 2))(0x2F3A7BD0L, 0x2C2ECB7FL), 0x2C2ECB7FL);
                VECTOR(uint32_t, 4) l_266 = (VECTOR(uint32_t, 4))(0xD35928ADL, (VECTOR(uint32_t, 2))(0xD35928ADL, 0x55B995FAL), 0x55B995FAL);
                uint16_t l_267 = 0xE444L;
                uint16_t l_268 = 6UL;
                int64_t l_269[10] = {0x68F519CF447D9160L,0L,0x68F519CF447D9160L,0x68F519CF447D9160L,0L,0x68F519CF447D9160L,0x68F519CF447D9160L,0L,0x68F519CF447D9160L,0x68F519CF447D9160L};
                int16_t l_270 = (-2L);
                uint8_t l_271[5][2] = {{0x21L,0x21L},{0x21L,0x21L},{0x21L,0x21L},{0x21L,0x21L},{0x21L,0x21L}};
                int8_t l_272 = 0x6BL;
                VECTOR(int32_t, 8) l_273 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4AFB7451L), 0x4AFB7451L), 0x4AFB7451L, 1L, 0x4AFB7451L);
                uint16_t l_274 = 0UL;
                uint8_t l_275 = 0x6DL;
                VECTOR(int8_t, 8) l_276 = (VECTOR(int8_t, 8))(0x39L, (VECTOR(int8_t, 4))(0x39L, (VECTOR(int8_t, 2))(0x39L, 0x15L), 0x15L), 0x15L, 0x39L, 0x15L);
                int8_t l_277 = (-1L);
                uint16_t l_278 = 0UL;
                uint64_t l_279 = 0UL;
                int i, j, k;
                l_262 = (-5L);
                l_264 = ((l_263[2][1][2] = 250UL) , (void*)0);
                l_275 &= (((((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(l_265.wyxwyyxw)).s55, ((VECTOR(uint32_t, 16))(l_266.zywxwzzxyzywzwyz)).s18))).odd , (l_269[0] = (l_268 = l_267))) , l_270) , (l_274 ^= (l_273.s6 = (l_271[3][0] , l_272))));
                l_279 |= (((VECTOR(int8_t, 16))(l_276.s6025032341227777)).s1 , (l_278 = l_277));
            }
            else
            { /* block id: 106 */
                int8_t l_280 = 0x67L;
                uint32_t l_281 = 4294967292UL;
                uint64_t l_282 = 1UL;
                VECTOR(uint16_t, 8) l_283 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x160DL), 0x160DL), 0x160DL, 1UL, 0x160DL);
                int i;
                l_281 = l_280;
                l_283.s2 = l_282;
            }
        }
        unsigned int result = 0;
        int l_189_i0;
        for (l_189_i0 = 0; l_189_i0 < 1; l_189_i0++) {
            result += l_189[l_189_i0];
        }
        result += l_192;
        atomic_add(&p_914->l_special_values[6], result);
    }
    else
    { /* block id: 111 */
        (1 + 1);
    }
    p_914->g_287 = (void*)0;
    return p_914->g_83[2][1][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_914->g_84 p_914->g_138 p_914->g_144 p_914->g_47 p_914->g_174 p_914->g_179 p_914->g_112 p_914->g_113
 * writes: p_914->g_84 p_914->g_127 p_914->g_135 p_914->g_138 p_914->g_144 p_914->g_comm_values p_914->g_152 p_914->g_179 p_914->g_180
 */
int64_t * func_102(uint32_t  p_103, int64_t ** p_104, uint8_t  p_105, int64_t * p_106, int64_t ** p_107, struct S6 * p_914)
{ /* block id: 24 */
    uint64_t l_121 = 0x45B90580498758D7L;
    int32_t l_139 = (-3L);
    int32_t l_140 = 0x2CE59AEBL;
    VECTOR(int64_t, 2) l_154 = (VECTOR(int64_t, 2))((-1L), (-4L));
    VECTOR(int64_t, 4) l_155 = (VECTOR(int64_t, 4))(0x5D36EEBD1C9D4F09L, (VECTOR(int64_t, 2))(0x5D36EEBD1C9D4F09L, 0x1FE58D0190B99AC9L), 0x1FE58D0190B99AC9L);
    VECTOR(int32_t, 4) l_169 = (VECTOR(int32_t, 4))(0x2A4619C9L, (VECTOR(int32_t, 2))(0x2A4619C9L, 0L), 0L);
    int32_t *l_181[7];
    int i;
    for (i = 0; i < 7; i++)
        l_181[i] = &p_914->g_179;
    for (p_914->g_84 = 1; (p_914->g_84 == 54); ++p_914->g_84)
    { /* block id: 27 */
        int8_t *l_126 = &p_914->g_127;
        uint16_t *l_134 = (void*)0;
        int32_t l_136[7][7][3] = {{{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L}},{{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L}},{{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L}},{{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L}},{{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L}},{{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L}},{{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L},{1L,0x28BEC3B1L,5L}}};
        uint32_t *l_137[6][2][4] = {{{&p_914->g_138,&p_914->g_138,&p_914->g_138,&p_914->g_138},{&p_914->g_138,&p_914->g_138,&p_914->g_138,&p_914->g_138}},{{&p_914->g_138,&p_914->g_138,&p_914->g_138,&p_914->g_138},{&p_914->g_138,&p_914->g_138,&p_914->g_138,&p_914->g_138}},{{&p_914->g_138,&p_914->g_138,&p_914->g_138,&p_914->g_138},{&p_914->g_138,&p_914->g_138,&p_914->g_138,&p_914->g_138}},{{&p_914->g_138,&p_914->g_138,&p_914->g_138,&p_914->g_138},{&p_914->g_138,&p_914->g_138,&p_914->g_138,&p_914->g_138}},{{&p_914->g_138,&p_914->g_138,&p_914->g_138,&p_914->g_138},{&p_914->g_138,&p_914->g_138,&p_914->g_138,&p_914->g_138}},{{&p_914->g_138,&p_914->g_138,&p_914->g_138,&p_914->g_138},{&p_914->g_138,&p_914->g_138,&p_914->g_138,&p_914->g_138}}};
        int8_t *l_143 = &p_914->g_144;
        int64_t *l_151 = (void*)0;
        VECTOR(int64_t, 4) l_153 = (VECTOR(int64_t, 4))(0x0B63CE86B1698A33L, (VECTOR(int64_t, 2))(0x0B63CE86B1698A33L, 0L), 0L);
        VECTOR(int32_t, 8) l_162 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0B70B0F0L), 0x0B70B0F0L), 0x0B70B0F0L, 1L, 0x0B70B0F0L);
        int32_t *l_175 = (void*)0;
        int32_t *l_176 = (void*)0;
        int32_t *l_177 = (void*)0;
        int32_t *l_178[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_178[i] = &l_139;
        p_914->g_152[1] = (safe_lshift_func_int16_t_s_s(((p_914->g_comm_values[p_914->tid] = ((((safe_add_func_uint64_t_u_u(l_121, (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(p_105, ((((*l_126) = 0x3EL) ^ (safe_sub_func_uint16_t_u_u((!(p_914->g_84 != (safe_div_func_int8_t_s_s(((*l_143) |= (safe_add_func_uint64_t_u_u(((p_914->g_135[0] = l_134) == l_134), (l_136[4][3][1] < (p_914->g_138++))))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((-4L), (safe_lshift_func_uint8_t_u_s((p_914->g_47[4] , FAKE_DIVERGE(p_914->global_1_offset, get_global_id(1), 10)), 1)))), 65535UL)), (-9L), p_105, 0L, ((VECTOR(int8_t, 2))(0x67L)), 5L, 0x08L)), ((VECTOR(int8_t, 8))(0x4FL))))))).s7)))), p_103))) && p_105))) == l_136[4][3][1]), p_103)))) == l_136[6][0][0]) || p_914->g_144) & l_136[4][0][0])) && l_136[4][3][1]), l_140));
        p_914->g_180 = (((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_153.xxyw)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_154.xxyy)).lo)), ((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x0F7B83498CC23DAEL, 0x64AC108E42A34357L)).xyxyxxxy)).even, ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(0x02C5E52BB355BA67L, ((VECTOR(int64_t, 4))(l_155.ywww)), 0x43B544FA214550C2L, ((safe_sub_func_uint32_t_u_u((p_914->g_138--), (safe_mul_func_uint8_t_u_u(((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_162.s46)).yyyy, ((VECTOR(int32_t, 16))(0x01F268CCL, 1L, (-8L), (-1L), (p_103 || (safe_add_func_int8_t_s_s(((safe_add_func_int64_t_s_s(0L, p_914->g_84)) , (-7L)), (+(l_153.x && (safe_rshift_func_uint8_t_u_u(l_162.s1, 4))))))), ((VECTOR(int32_t, 8))(l_169.zyxyyzxy)), 0x369EBD4FL, (-4L), 0L)).s95be, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x5C00A655L, 0x27944967L)), (-5L), (-1L))).wzwyzwxwxyzxzzzz)).sea11))))), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((safe_mod_func_int32_t_s_s((p_914->g_179 &= ((l_136[4][3][1] = (safe_mod_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_914->g_174.s0473603660254303)))).s6))) & l_153.w)), p_105)), l_154.y, 1L, 0L)).xxwyzzww)), ((VECTOR(int32_t, 8))((-2L)))))).hi, ((VECTOR(int32_t, 4))(6L))))))).s2 , (*p_914->g_112)) != (*p_914->g_112)), l_155.y)))) < 0x9FL), ((VECTOR(int64_t, 2))(1L)), (-4L), l_140, 0x1BE9E0A6E090A8C7L, ((VECTOR(int64_t, 2))(0x192B74649171F469L)), 0x0A146DD524B9702AL, 0x49431B3FCD2A7965L)).sd118, ((VECTOR(int64_t, 4))(0x778EFA52C41C70B5L)), ((VECTOR(int64_t, 4))((-9L)))))), ((VECTOR(int64_t, 4))((-1L)))))).hi, ((VECTOR(int64_t, 2))(0x1FDE94E36BB2AB67L))))).yyxxyxxy, ((VECTOR(int64_t, 8))(0x250D9DD068715254L))))), 0x3ED74377B06565B6L, 0x472209DD69673EEEL)).s6c)).yyxyyyyy, ((VECTOR(int64_t, 8))(3L))))).s1 | 0x22D7FE986FCF5082L);
    }
    p_914->g_179 |= 0x2E5F2695L;
    return (*p_104);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[94];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 94; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[94];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 94; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[53];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 53; i++)
            l_comm_values[i] = 1;
    struct S6 c_915;
    struct S6* p_914 = &c_915;
    struct S6 c_916 = {
        (VECTOR(uint16_t, 16))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0xF18BL), 0xF18BL), 0xF18BL, 65533UL, 0xF18BL, (VECTOR(uint16_t, 2))(65533UL, 0xF18BL), (VECTOR(uint16_t, 2))(65533UL, 0xF18BL), 65533UL, 0xF18BL, 65533UL, 0xF18BL), // p_914->g_35
        (VECTOR(uint16_t, 16))(0x7C83L, (VECTOR(uint16_t, 4))(0x7C83L, (VECTOR(uint16_t, 2))(0x7C83L, 1UL), 1UL), 1UL, 0x7C83L, 1UL, (VECTOR(uint16_t, 2))(0x7C83L, 1UL), (VECTOR(uint16_t, 2))(0x7C83L, 1UL), 0x7C83L, 1UL, 0x7C83L, 1UL), // p_914->g_36
        {{0x12777FC3FE767E79L,(-9L),8L,0x57E7E5FF1FC5BFF9L,0x2AF72DA61EB61364L,0L,4L,8L,0x13D709C591EBB67AL,1L},{0x12777FC3FE767E79L,(-9L),8L,0x57E7E5FF1FC5BFF9L,0x2AF72DA61EB61364L,0L,4L,8L,0x13D709C591EBB67AL,1L},{0x12777FC3FE767E79L,(-9L),8L,0x57E7E5FF1FC5BFF9L,0x2AF72DA61EB61364L,0L,4L,8L,0x13D709C591EBB67AL,1L},{0x12777FC3FE767E79L,(-9L),8L,0x57E7E5FF1FC5BFF9L,0x2AF72DA61EB61364L,0L,4L,8L,0x13D709C591EBB67AL,1L},{0x12777FC3FE767E79L,(-9L),8L,0x57E7E5FF1FC5BFF9L,0x2AF72DA61EB61364L,0L,4L,8L,0x13D709C591EBB67AL,1L},{0x12777FC3FE767E79L,(-9L),8L,0x57E7E5FF1FC5BFF9L,0x2AF72DA61EB61364L,0L,4L,8L,0x13D709C591EBB67AL,1L},{0x12777FC3FE767E79L,(-9L),8L,0x57E7E5FF1FC5BFF9L,0x2AF72DA61EB61364L,0L,4L,8L,0x13D709C591EBB67AL,1L}}, // p_914->g_42
        {&p_914->g_42[2][8],&p_914->g_42[2][8]}, // p_914->g_41
        {1L,0x2BB7762BL,1L,1L,0x2BB7762BL,1L}, // p_914->g_47
        {{0xDA5AL,0x5D22L,0UL,4UL,0xC8A3L,0xC28EL,0x1B82L,0x5C85L,65535UL},{0xDA5AL,0x5D22L,0UL,4UL,0xC8A3L,0xC28EL,0x1B82L,0x5C85L,65535UL},{0xDA5AL,0x5D22L,0UL,4UL,0xC8A3L,0xC28EL,0x1B82L,0x5C85L,65535UL},{0xDA5AL,0x5D22L,0UL,4UL,0xC8A3L,0xC28EL,0x1B82L,0x5C85L,65535UL},{0xDA5AL,0x5D22L,0UL,4UL,0xC8A3L,0xC28EL,0x1B82L,0x5C85L,65535UL},{0xDA5AL,0x5D22L,0UL,4UL,0xC8A3L,0xC28EL,0x1B82L,0x5C85L,65535UL},{0xDA5AL,0x5D22L,0UL,4UL,0xC8A3L,0xC28EL,0x1B82L,0x5C85L,65535UL},{0xDA5AL,0x5D22L,0UL,4UL,0xC8A3L,0xC28EL,0x1B82L,0x5C85L,65535UL},{0xDA5AL,0x5D22L,0UL,4UL,0xC8A3L,0xC28EL,0x1B82L,0x5C85L,65535UL}}, // p_914->g_66
        8L, // p_914->g_75
        {{{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)},{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)}},{{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)},{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)}},{{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)},{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)}},{{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)},{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)}},{{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)},{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)}},{{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)},{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)}},{{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)},{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)}},{{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)},{(-10L),(-10L),0L,0x67447E38L,0x792CDF46L,0x67447E38L,0L,(-10L)}}}, // p_914->g_83
        1UL, // p_914->g_84
        {0x4AL,0x4AL}, // p_914->g_111
        &p_914->g_75, // p_914->g_113
        &p_914->g_113, // p_914->g_112
        0x09L, // p_914->g_127
        {(void*)0,(void*)0}, // p_914->g_135
        0xB476EADDL, // p_914->g_138
        9L, // p_914->g_144
        {(-9L),(-9L),(-9L),(-9L),(-9L)}, // p_914->g_152
        (VECTOR(int16_t, 8))(0x32A1L, (VECTOR(int16_t, 4))(0x32A1L, (VECTOR(int16_t, 2))(0x32A1L, 0L), 0L), 0L, 0x32A1L, 0L), // p_914->g_174
        1L, // p_914->g_179
        0UL, // p_914->g_180
        1L, // p_914->g_183
        249UL, // p_914->g_185
        {0x4BB113E4L,0x0CBAC443F89A180EL,{0xB1E2C253FF1EF5FAL,18446744073709551615UL,0x76L,0x5AL}}, // p_914->g_286
        (void*)0, // p_914->g_287
        8L, // p_914->g_290
        (void*)0, // p_914->g_292
        (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x1607B217L), 0x1607B217L), 0x1607B217L, (-3L), 0x1607B217L, (VECTOR(int32_t, 2))((-3L), 0x1607B217L), (VECTOR(int32_t, 2))((-3L), 0x1607B217L), (-3L), 0x1607B217L, (-3L), 0x1607B217L), // p_914->g_294
        0xCD0FL, // p_914->g_298
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xF442633FF123E632L), 0xF442633FF123E632L), 0xF442633FF123E632L, 1UL, 0xF442633FF123E632L, (VECTOR(uint64_t, 2))(1UL, 0xF442633FF123E632L), (VECTOR(uint64_t, 2))(1UL, 0xF442633FF123E632L), 1UL, 0xF442633FF123E632L, 1UL, 0xF442633FF123E632L), // p_914->g_308
        (VECTOR(int8_t, 16))(0x6EL, (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 7L), 7L), 7L, 0x6EL, 7L, (VECTOR(int8_t, 2))(0x6EL, 7L), (VECTOR(int8_t, 2))(0x6EL, 7L), 0x6EL, 7L, 0x6EL, 7L), // p_914->g_330
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x1AL), 0x1AL), 0x1AL, 0L, 0x1AL, (VECTOR(int8_t, 2))(0L, 0x1AL), (VECTOR(int8_t, 2))(0L, 0x1AL), 0L, 0x1AL, 0L, 0x1AL), // p_914->g_336
        &p_914->g_179, // p_914->g_339
        (VECTOR(uint64_t, 16))(0xDE3A6A89D7B60C3FL, (VECTOR(uint64_t, 4))(0xDE3A6A89D7B60C3FL, (VECTOR(uint64_t, 2))(0xDE3A6A89D7B60C3FL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 0xDE3A6A89D7B60C3FL, 18446744073709551614UL, (VECTOR(uint64_t, 2))(0xDE3A6A89D7B60C3FL, 18446744073709551614UL), (VECTOR(uint64_t, 2))(0xDE3A6A89D7B60C3FL, 18446744073709551614UL), 0xDE3A6A89D7B60C3FL, 18446744073709551614UL, 0xDE3A6A89D7B60C3FL, 18446744073709551614UL), // p_914->g_354
        (VECTOR(uint64_t, 4))(0xD346C9739BE886D3L, (VECTOR(uint64_t, 2))(0xD346C9739BE886D3L, 0x9B7091DFA88ACE81L), 0x9B7091DFA88ACE81L), // p_914->g_356
        (VECTOR(uint8_t, 16))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 6UL), 6UL), 6UL, 8UL, 6UL, (VECTOR(uint8_t, 2))(8UL, 6UL), (VECTOR(uint8_t, 2))(8UL, 6UL), 8UL, 6UL, 8UL, 6UL), // p_914->g_403
        {{7UL,0xDD8912CCL,0L,4294967295UL},18446744073709551615UL,0x06A3FE16B1E33C11L,0x79L,-1L,0x6EFB406AL,0x33L}, // p_914->g_415
        &p_914->g_415, // p_914->g_414
        (VECTOR(int32_t, 16))(0x1E966744L, (VECTOR(int32_t, 4))(0x1E966744L, (VECTOR(int32_t, 2))(0x1E966744L, (-7L)), (-7L)), (-7L), 0x1E966744L, (-7L), (VECTOR(int32_t, 2))(0x1E966744L, (-7L)), (VECTOR(int32_t, 2))(0x1E966744L, (-7L)), 0x1E966744L, (-7L), 0x1E966744L, (-7L)), // p_914->g_430
        0L, // p_914->g_436
        0x5DL, // p_914->g_437
        (VECTOR(uint32_t, 2))(4294967295UL, 1UL), // p_914->g_453
        (void*)0, // p_914->g_497
        (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L), 1L, 6L, 1L, (VECTOR(int32_t, 2))(6L, 1L), (VECTOR(int32_t, 2))(6L, 1L), 6L, 1L, 6L, 1L), // p_914->g_498
        (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x16D0B311L), 0x16D0B311L), 0x16D0B311L, (-3L), 0x16D0B311L, (VECTOR(int32_t, 2))((-3L), 0x16D0B311L), (VECTOR(int32_t, 2))((-3L), 0x16D0B311L), (-3L), 0x16D0B311L, (-3L), 0x16D0B311L), // p_914->g_499
        (VECTOR(int32_t, 16))(0x1827F73DL, (VECTOR(int32_t, 4))(0x1827F73DL, (VECTOR(int32_t, 2))(0x1827F73DL, 1L), 1L), 1L, 0x1827F73DL, 1L, (VECTOR(int32_t, 2))(0x1827F73DL, 1L), (VECTOR(int32_t, 2))(0x1827F73DL, 1L), 0x1827F73DL, 1L, 0x1827F73DL, 1L), // p_914->g_509
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L)), // p_914->g_510
        (VECTOR(uint64_t, 2))(0xA024416A9039E2E2L, 0xB4F33CF847C358FFL), // p_914->g_525
        {&p_914->g_287,&p_914->g_287,&p_914->g_287,&p_914->g_287}, // p_914->g_534
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x04L), 0x04L), // p_914->g_565
        (VECTOR(uint16_t, 2))(65528UL, 0UL), // p_914->g_649
        {{0xD30C8480L,0UL,0x18A9F75BF7870D54L,4294967295UL}}, // p_914->g_656
        {{4294967294UL,0x47E7901BL,0x0C855A9105EDE549L,4294967293UL}}, // p_914->g_660
        {{0UL,0x86F5FE05L,0x35CDB24967FD05D2L,1UL}}, // p_914->g_662
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint64_t, 2))(1UL, 0UL), (VECTOR(uint64_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_914->g_670
        {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}, // p_914->g_680
        &p_914->g_292, // p_914->g_685
        (VECTOR(int16_t, 16))(0x35BFL, (VECTOR(int16_t, 4))(0x35BFL, (VECTOR(int16_t, 2))(0x35BFL, 0L), 0L), 0L, 0x35BFL, 0L, (VECTOR(int16_t, 2))(0x35BFL, 0L), (VECTOR(int16_t, 2))(0x35BFL, 0L), 0x35BFL, 0L, 0x35BFL, 0L), // p_914->g_707
        7UL, // p_914->g_747
        {0xDA3E64C332D7537CL,0xBDEDCC6638C0126AL,0x61L,-6L}, // p_914->g_750
        (VECTOR(uint16_t, 16))(0x060CL, (VECTOR(uint16_t, 4))(0x060CL, (VECTOR(uint16_t, 2))(0x060CL, 0x0F58L), 0x0F58L), 0x0F58L, 0x060CL, 0x0F58L, (VECTOR(uint16_t, 2))(0x060CL, 0x0F58L), (VECTOR(uint16_t, 2))(0x060CL, 0x0F58L), 0x060CL, 0x0F58L, 0x060CL, 0x0F58L), // p_914->g_759
        (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 65533UL), 65533UL), // p_914->g_761
        (VECTOR(int16_t, 4))(0x1365L, (VECTOR(int16_t, 2))(0x1365L, 1L), 1L), // p_914->g_766
        (VECTOR(int16_t, 2))(8L, 0x6CB7L), // p_914->g_767
        1UL, // p_914->g_776
        {0x6D82D8203E7BAB50L,0xC5B6BDDBC2863AB3L,0xF5L,0x70L}, // p_914->g_810
        {0UL,0xDC6F2F7E51AEE6B8L,246UL,7L}, // p_914->g_811
        (void*)0, // p_914->g_821
        &p_914->g_47[2], // p_914->g_822
        &p_914->g_287, // p_914->g_831
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551607UL), 18446744073709551607UL), // p_914->g_853
        1UL, // p_914->g_862
        0x1A19E760L, // p_914->g_865
        (VECTOR(int32_t, 8))(0x1DD408F6L, (VECTOR(int32_t, 4))(0x1DD408F6L, (VECTOR(int32_t, 2))(0x1DD408F6L, 0x17113329L), 0x17113329L), 0x17113329L, 0x1DD408F6L, 0x17113329L), // p_914->g_866
        (VECTOR(int32_t, 2))(0x02C36789L, 0x0717172BL), // p_914->g_884
        (VECTOR(int16_t, 4))(0x0BF2L, (VECTOR(int16_t, 2))(0x0BF2L, 0x1EB5L), 0x1EB5L), // p_914->g_890
        (VECTOR(int32_t, 4))(0x4385471AL, (VECTOR(int32_t, 2))(0x4385471AL, 4L), 4L), // p_914->g_892
        {{0x80A0B65193CDDD0FL,0UL,0UL,4L},{0x80A0B65193CDDD0FL,0UL,0UL,4L},{0x80A0B65193CDDD0FL,0UL,0UL,4L},{0x80A0B65193CDDD0FL,0UL,0UL,4L},{0x80A0B65193CDDD0FL,0UL,0UL,4L}}, // p_914->g_897
        (-1L), // p_914->g_909
        0, // p_914->v_collective
        sequence_input[get_global_id(0)], // p_914->global_0_offset
        sequence_input[get_global_id(1)], // p_914->global_1_offset
        sequence_input[get_global_id(2)], // p_914->global_2_offset
        sequence_input[get_local_id(0)], // p_914->local_0_offset
        sequence_input[get_local_id(1)], // p_914->local_1_offset
        sequence_input[get_local_id(2)], // p_914->local_2_offset
        sequence_input[get_group_id(0)], // p_914->group_0_offset
        sequence_input[get_group_id(1)], // p_914->group_1_offset
        sequence_input[get_group_id(2)], // p_914->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 53)), permutations[0][get_linear_local_id()])), // p_914->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_915 = c_916;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_914);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_914->g_35.s0, "p_914->g_35.s0", print_hash_value);
    transparent_crc(p_914->g_35.s1, "p_914->g_35.s1", print_hash_value);
    transparent_crc(p_914->g_35.s2, "p_914->g_35.s2", print_hash_value);
    transparent_crc(p_914->g_35.s3, "p_914->g_35.s3", print_hash_value);
    transparent_crc(p_914->g_35.s4, "p_914->g_35.s4", print_hash_value);
    transparent_crc(p_914->g_35.s5, "p_914->g_35.s5", print_hash_value);
    transparent_crc(p_914->g_35.s6, "p_914->g_35.s6", print_hash_value);
    transparent_crc(p_914->g_35.s7, "p_914->g_35.s7", print_hash_value);
    transparent_crc(p_914->g_35.s8, "p_914->g_35.s8", print_hash_value);
    transparent_crc(p_914->g_35.s9, "p_914->g_35.s9", print_hash_value);
    transparent_crc(p_914->g_35.sa, "p_914->g_35.sa", print_hash_value);
    transparent_crc(p_914->g_35.sb, "p_914->g_35.sb", print_hash_value);
    transparent_crc(p_914->g_35.sc, "p_914->g_35.sc", print_hash_value);
    transparent_crc(p_914->g_35.sd, "p_914->g_35.sd", print_hash_value);
    transparent_crc(p_914->g_35.se, "p_914->g_35.se", print_hash_value);
    transparent_crc(p_914->g_35.sf, "p_914->g_35.sf", print_hash_value);
    transparent_crc(p_914->g_36.s0, "p_914->g_36.s0", print_hash_value);
    transparent_crc(p_914->g_36.s1, "p_914->g_36.s1", print_hash_value);
    transparent_crc(p_914->g_36.s2, "p_914->g_36.s2", print_hash_value);
    transparent_crc(p_914->g_36.s3, "p_914->g_36.s3", print_hash_value);
    transparent_crc(p_914->g_36.s4, "p_914->g_36.s4", print_hash_value);
    transparent_crc(p_914->g_36.s5, "p_914->g_36.s5", print_hash_value);
    transparent_crc(p_914->g_36.s6, "p_914->g_36.s6", print_hash_value);
    transparent_crc(p_914->g_36.s7, "p_914->g_36.s7", print_hash_value);
    transparent_crc(p_914->g_36.s8, "p_914->g_36.s8", print_hash_value);
    transparent_crc(p_914->g_36.s9, "p_914->g_36.s9", print_hash_value);
    transparent_crc(p_914->g_36.sa, "p_914->g_36.sa", print_hash_value);
    transparent_crc(p_914->g_36.sb, "p_914->g_36.sb", print_hash_value);
    transparent_crc(p_914->g_36.sc, "p_914->g_36.sc", print_hash_value);
    transparent_crc(p_914->g_36.sd, "p_914->g_36.sd", print_hash_value);
    transparent_crc(p_914->g_36.se, "p_914->g_36.se", print_hash_value);
    transparent_crc(p_914->g_36.sf, "p_914->g_36.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_914->g_42[i][j], "p_914->g_42[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_914->g_47[i], "p_914->g_47[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_914->g_66[i][j], "p_914->g_66[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_914->g_75, "p_914->g_75", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_914->g_83[i][j][k], "p_914->g_83[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_914->g_84, "p_914->g_84", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_914->g_111[i], "p_914->g_111[i]", print_hash_value);

    }
    transparent_crc(p_914->g_127, "p_914->g_127", print_hash_value);
    transparent_crc(p_914->g_138, "p_914->g_138", print_hash_value);
    transparent_crc(p_914->g_144, "p_914->g_144", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_914->g_152[i], "p_914->g_152[i]", print_hash_value);

    }
    transparent_crc(p_914->g_174.s0, "p_914->g_174.s0", print_hash_value);
    transparent_crc(p_914->g_174.s1, "p_914->g_174.s1", print_hash_value);
    transparent_crc(p_914->g_174.s2, "p_914->g_174.s2", print_hash_value);
    transparent_crc(p_914->g_174.s3, "p_914->g_174.s3", print_hash_value);
    transparent_crc(p_914->g_174.s4, "p_914->g_174.s4", print_hash_value);
    transparent_crc(p_914->g_174.s5, "p_914->g_174.s5", print_hash_value);
    transparent_crc(p_914->g_174.s6, "p_914->g_174.s6", print_hash_value);
    transparent_crc(p_914->g_174.s7, "p_914->g_174.s7", print_hash_value);
    transparent_crc(p_914->g_179, "p_914->g_179", print_hash_value);
    transparent_crc(p_914->g_180, "p_914->g_180", print_hash_value);
    transparent_crc(p_914->g_183, "p_914->g_183", print_hash_value);
    transparent_crc(p_914->g_185, "p_914->g_185", print_hash_value);
    transparent_crc(p_914->g_286.f0, "p_914->g_286.f0", print_hash_value);
    transparent_crc(p_914->g_286.f1, "p_914->g_286.f1", print_hash_value);
    transparent_crc(p_914->g_286.f2.f0, "p_914->g_286.f2.f0", print_hash_value);
    transparent_crc(p_914->g_286.f2.f1, "p_914->g_286.f2.f1", print_hash_value);
    transparent_crc(p_914->g_286.f2.f2, "p_914->g_286.f2.f2", print_hash_value);
    transparent_crc(p_914->g_286.f2.f3, "p_914->g_286.f2.f3", print_hash_value);
    transparent_crc(p_914->g_290, "p_914->g_290", print_hash_value);
    transparent_crc(p_914->g_294.s0, "p_914->g_294.s0", print_hash_value);
    transparent_crc(p_914->g_294.s1, "p_914->g_294.s1", print_hash_value);
    transparent_crc(p_914->g_294.s2, "p_914->g_294.s2", print_hash_value);
    transparent_crc(p_914->g_294.s3, "p_914->g_294.s3", print_hash_value);
    transparent_crc(p_914->g_294.s4, "p_914->g_294.s4", print_hash_value);
    transparent_crc(p_914->g_294.s5, "p_914->g_294.s5", print_hash_value);
    transparent_crc(p_914->g_294.s6, "p_914->g_294.s6", print_hash_value);
    transparent_crc(p_914->g_294.s7, "p_914->g_294.s7", print_hash_value);
    transparent_crc(p_914->g_294.s8, "p_914->g_294.s8", print_hash_value);
    transparent_crc(p_914->g_294.s9, "p_914->g_294.s9", print_hash_value);
    transparent_crc(p_914->g_294.sa, "p_914->g_294.sa", print_hash_value);
    transparent_crc(p_914->g_294.sb, "p_914->g_294.sb", print_hash_value);
    transparent_crc(p_914->g_294.sc, "p_914->g_294.sc", print_hash_value);
    transparent_crc(p_914->g_294.sd, "p_914->g_294.sd", print_hash_value);
    transparent_crc(p_914->g_294.se, "p_914->g_294.se", print_hash_value);
    transparent_crc(p_914->g_294.sf, "p_914->g_294.sf", print_hash_value);
    transparent_crc(p_914->g_298, "p_914->g_298", print_hash_value);
    transparent_crc(p_914->g_308.s0, "p_914->g_308.s0", print_hash_value);
    transparent_crc(p_914->g_308.s1, "p_914->g_308.s1", print_hash_value);
    transparent_crc(p_914->g_308.s2, "p_914->g_308.s2", print_hash_value);
    transparent_crc(p_914->g_308.s3, "p_914->g_308.s3", print_hash_value);
    transparent_crc(p_914->g_308.s4, "p_914->g_308.s4", print_hash_value);
    transparent_crc(p_914->g_308.s5, "p_914->g_308.s5", print_hash_value);
    transparent_crc(p_914->g_308.s6, "p_914->g_308.s6", print_hash_value);
    transparent_crc(p_914->g_308.s7, "p_914->g_308.s7", print_hash_value);
    transparent_crc(p_914->g_308.s8, "p_914->g_308.s8", print_hash_value);
    transparent_crc(p_914->g_308.s9, "p_914->g_308.s9", print_hash_value);
    transparent_crc(p_914->g_308.sa, "p_914->g_308.sa", print_hash_value);
    transparent_crc(p_914->g_308.sb, "p_914->g_308.sb", print_hash_value);
    transparent_crc(p_914->g_308.sc, "p_914->g_308.sc", print_hash_value);
    transparent_crc(p_914->g_308.sd, "p_914->g_308.sd", print_hash_value);
    transparent_crc(p_914->g_308.se, "p_914->g_308.se", print_hash_value);
    transparent_crc(p_914->g_308.sf, "p_914->g_308.sf", print_hash_value);
    transparent_crc(p_914->g_330.s0, "p_914->g_330.s0", print_hash_value);
    transparent_crc(p_914->g_330.s1, "p_914->g_330.s1", print_hash_value);
    transparent_crc(p_914->g_330.s2, "p_914->g_330.s2", print_hash_value);
    transparent_crc(p_914->g_330.s3, "p_914->g_330.s3", print_hash_value);
    transparent_crc(p_914->g_330.s4, "p_914->g_330.s4", print_hash_value);
    transparent_crc(p_914->g_330.s5, "p_914->g_330.s5", print_hash_value);
    transparent_crc(p_914->g_330.s6, "p_914->g_330.s6", print_hash_value);
    transparent_crc(p_914->g_330.s7, "p_914->g_330.s7", print_hash_value);
    transparent_crc(p_914->g_330.s8, "p_914->g_330.s8", print_hash_value);
    transparent_crc(p_914->g_330.s9, "p_914->g_330.s9", print_hash_value);
    transparent_crc(p_914->g_330.sa, "p_914->g_330.sa", print_hash_value);
    transparent_crc(p_914->g_330.sb, "p_914->g_330.sb", print_hash_value);
    transparent_crc(p_914->g_330.sc, "p_914->g_330.sc", print_hash_value);
    transparent_crc(p_914->g_330.sd, "p_914->g_330.sd", print_hash_value);
    transparent_crc(p_914->g_330.se, "p_914->g_330.se", print_hash_value);
    transparent_crc(p_914->g_330.sf, "p_914->g_330.sf", print_hash_value);
    transparent_crc(p_914->g_336.s0, "p_914->g_336.s0", print_hash_value);
    transparent_crc(p_914->g_336.s1, "p_914->g_336.s1", print_hash_value);
    transparent_crc(p_914->g_336.s2, "p_914->g_336.s2", print_hash_value);
    transparent_crc(p_914->g_336.s3, "p_914->g_336.s3", print_hash_value);
    transparent_crc(p_914->g_336.s4, "p_914->g_336.s4", print_hash_value);
    transparent_crc(p_914->g_336.s5, "p_914->g_336.s5", print_hash_value);
    transparent_crc(p_914->g_336.s6, "p_914->g_336.s6", print_hash_value);
    transparent_crc(p_914->g_336.s7, "p_914->g_336.s7", print_hash_value);
    transparent_crc(p_914->g_336.s8, "p_914->g_336.s8", print_hash_value);
    transparent_crc(p_914->g_336.s9, "p_914->g_336.s9", print_hash_value);
    transparent_crc(p_914->g_336.sa, "p_914->g_336.sa", print_hash_value);
    transparent_crc(p_914->g_336.sb, "p_914->g_336.sb", print_hash_value);
    transparent_crc(p_914->g_336.sc, "p_914->g_336.sc", print_hash_value);
    transparent_crc(p_914->g_336.sd, "p_914->g_336.sd", print_hash_value);
    transparent_crc(p_914->g_336.se, "p_914->g_336.se", print_hash_value);
    transparent_crc(p_914->g_336.sf, "p_914->g_336.sf", print_hash_value);
    transparent_crc(p_914->g_354.s0, "p_914->g_354.s0", print_hash_value);
    transparent_crc(p_914->g_354.s1, "p_914->g_354.s1", print_hash_value);
    transparent_crc(p_914->g_354.s2, "p_914->g_354.s2", print_hash_value);
    transparent_crc(p_914->g_354.s3, "p_914->g_354.s3", print_hash_value);
    transparent_crc(p_914->g_354.s4, "p_914->g_354.s4", print_hash_value);
    transparent_crc(p_914->g_354.s5, "p_914->g_354.s5", print_hash_value);
    transparent_crc(p_914->g_354.s6, "p_914->g_354.s6", print_hash_value);
    transparent_crc(p_914->g_354.s7, "p_914->g_354.s7", print_hash_value);
    transparent_crc(p_914->g_354.s8, "p_914->g_354.s8", print_hash_value);
    transparent_crc(p_914->g_354.s9, "p_914->g_354.s9", print_hash_value);
    transparent_crc(p_914->g_354.sa, "p_914->g_354.sa", print_hash_value);
    transparent_crc(p_914->g_354.sb, "p_914->g_354.sb", print_hash_value);
    transparent_crc(p_914->g_354.sc, "p_914->g_354.sc", print_hash_value);
    transparent_crc(p_914->g_354.sd, "p_914->g_354.sd", print_hash_value);
    transparent_crc(p_914->g_354.se, "p_914->g_354.se", print_hash_value);
    transparent_crc(p_914->g_354.sf, "p_914->g_354.sf", print_hash_value);
    transparent_crc(p_914->g_356.x, "p_914->g_356.x", print_hash_value);
    transparent_crc(p_914->g_356.y, "p_914->g_356.y", print_hash_value);
    transparent_crc(p_914->g_356.z, "p_914->g_356.z", print_hash_value);
    transparent_crc(p_914->g_356.w, "p_914->g_356.w", print_hash_value);
    transparent_crc(p_914->g_403.s0, "p_914->g_403.s0", print_hash_value);
    transparent_crc(p_914->g_403.s1, "p_914->g_403.s1", print_hash_value);
    transparent_crc(p_914->g_403.s2, "p_914->g_403.s2", print_hash_value);
    transparent_crc(p_914->g_403.s3, "p_914->g_403.s3", print_hash_value);
    transparent_crc(p_914->g_403.s4, "p_914->g_403.s4", print_hash_value);
    transparent_crc(p_914->g_403.s5, "p_914->g_403.s5", print_hash_value);
    transparent_crc(p_914->g_403.s6, "p_914->g_403.s6", print_hash_value);
    transparent_crc(p_914->g_403.s7, "p_914->g_403.s7", print_hash_value);
    transparent_crc(p_914->g_403.s8, "p_914->g_403.s8", print_hash_value);
    transparent_crc(p_914->g_403.s9, "p_914->g_403.s9", print_hash_value);
    transparent_crc(p_914->g_403.sa, "p_914->g_403.sa", print_hash_value);
    transparent_crc(p_914->g_403.sb, "p_914->g_403.sb", print_hash_value);
    transparent_crc(p_914->g_403.sc, "p_914->g_403.sc", print_hash_value);
    transparent_crc(p_914->g_403.sd, "p_914->g_403.sd", print_hash_value);
    transparent_crc(p_914->g_403.se, "p_914->g_403.se", print_hash_value);
    transparent_crc(p_914->g_403.sf, "p_914->g_403.sf", print_hash_value);
    transparent_crc(p_914->g_415.f0.f0, "p_914->g_415.f0.f0", print_hash_value);
    transparent_crc(p_914->g_415.f0.f1, "p_914->g_415.f0.f1", print_hash_value);
    transparent_crc(p_914->g_415.f0.f2, "p_914->g_415.f0.f2", print_hash_value);
    transparent_crc(p_914->g_415.f0.f3, "p_914->g_415.f0.f3", print_hash_value);
    transparent_crc(p_914->g_415.f1, "p_914->g_415.f1", print_hash_value);
    transparent_crc(p_914->g_415.f2, "p_914->g_415.f2", print_hash_value);
    transparent_crc(p_914->g_415.f3, "p_914->g_415.f3", print_hash_value);
    transparent_crc(p_914->g_415.f4, "p_914->g_415.f4", print_hash_value);
    transparent_crc(p_914->g_415.f5, "p_914->g_415.f5", print_hash_value);
    transparent_crc(p_914->g_415.f6, "p_914->g_415.f6", print_hash_value);
    transparent_crc(p_914->g_430.s0, "p_914->g_430.s0", print_hash_value);
    transparent_crc(p_914->g_430.s1, "p_914->g_430.s1", print_hash_value);
    transparent_crc(p_914->g_430.s2, "p_914->g_430.s2", print_hash_value);
    transparent_crc(p_914->g_430.s3, "p_914->g_430.s3", print_hash_value);
    transparent_crc(p_914->g_430.s4, "p_914->g_430.s4", print_hash_value);
    transparent_crc(p_914->g_430.s5, "p_914->g_430.s5", print_hash_value);
    transparent_crc(p_914->g_430.s6, "p_914->g_430.s6", print_hash_value);
    transparent_crc(p_914->g_430.s7, "p_914->g_430.s7", print_hash_value);
    transparent_crc(p_914->g_430.s8, "p_914->g_430.s8", print_hash_value);
    transparent_crc(p_914->g_430.s9, "p_914->g_430.s9", print_hash_value);
    transparent_crc(p_914->g_430.sa, "p_914->g_430.sa", print_hash_value);
    transparent_crc(p_914->g_430.sb, "p_914->g_430.sb", print_hash_value);
    transparent_crc(p_914->g_430.sc, "p_914->g_430.sc", print_hash_value);
    transparent_crc(p_914->g_430.sd, "p_914->g_430.sd", print_hash_value);
    transparent_crc(p_914->g_430.se, "p_914->g_430.se", print_hash_value);
    transparent_crc(p_914->g_430.sf, "p_914->g_430.sf", print_hash_value);
    transparent_crc(p_914->g_436, "p_914->g_436", print_hash_value);
    transparent_crc(p_914->g_437, "p_914->g_437", print_hash_value);
    transparent_crc(p_914->g_453.x, "p_914->g_453.x", print_hash_value);
    transparent_crc(p_914->g_453.y, "p_914->g_453.y", print_hash_value);
    transparent_crc(p_914->g_498.s0, "p_914->g_498.s0", print_hash_value);
    transparent_crc(p_914->g_498.s1, "p_914->g_498.s1", print_hash_value);
    transparent_crc(p_914->g_498.s2, "p_914->g_498.s2", print_hash_value);
    transparent_crc(p_914->g_498.s3, "p_914->g_498.s3", print_hash_value);
    transparent_crc(p_914->g_498.s4, "p_914->g_498.s4", print_hash_value);
    transparent_crc(p_914->g_498.s5, "p_914->g_498.s5", print_hash_value);
    transparent_crc(p_914->g_498.s6, "p_914->g_498.s6", print_hash_value);
    transparent_crc(p_914->g_498.s7, "p_914->g_498.s7", print_hash_value);
    transparent_crc(p_914->g_498.s8, "p_914->g_498.s8", print_hash_value);
    transparent_crc(p_914->g_498.s9, "p_914->g_498.s9", print_hash_value);
    transparent_crc(p_914->g_498.sa, "p_914->g_498.sa", print_hash_value);
    transparent_crc(p_914->g_498.sb, "p_914->g_498.sb", print_hash_value);
    transparent_crc(p_914->g_498.sc, "p_914->g_498.sc", print_hash_value);
    transparent_crc(p_914->g_498.sd, "p_914->g_498.sd", print_hash_value);
    transparent_crc(p_914->g_498.se, "p_914->g_498.se", print_hash_value);
    transparent_crc(p_914->g_498.sf, "p_914->g_498.sf", print_hash_value);
    transparent_crc(p_914->g_499.s0, "p_914->g_499.s0", print_hash_value);
    transparent_crc(p_914->g_499.s1, "p_914->g_499.s1", print_hash_value);
    transparent_crc(p_914->g_499.s2, "p_914->g_499.s2", print_hash_value);
    transparent_crc(p_914->g_499.s3, "p_914->g_499.s3", print_hash_value);
    transparent_crc(p_914->g_499.s4, "p_914->g_499.s4", print_hash_value);
    transparent_crc(p_914->g_499.s5, "p_914->g_499.s5", print_hash_value);
    transparent_crc(p_914->g_499.s6, "p_914->g_499.s6", print_hash_value);
    transparent_crc(p_914->g_499.s7, "p_914->g_499.s7", print_hash_value);
    transparent_crc(p_914->g_499.s8, "p_914->g_499.s8", print_hash_value);
    transparent_crc(p_914->g_499.s9, "p_914->g_499.s9", print_hash_value);
    transparent_crc(p_914->g_499.sa, "p_914->g_499.sa", print_hash_value);
    transparent_crc(p_914->g_499.sb, "p_914->g_499.sb", print_hash_value);
    transparent_crc(p_914->g_499.sc, "p_914->g_499.sc", print_hash_value);
    transparent_crc(p_914->g_499.sd, "p_914->g_499.sd", print_hash_value);
    transparent_crc(p_914->g_499.se, "p_914->g_499.se", print_hash_value);
    transparent_crc(p_914->g_499.sf, "p_914->g_499.sf", print_hash_value);
    transparent_crc(p_914->g_509.s0, "p_914->g_509.s0", print_hash_value);
    transparent_crc(p_914->g_509.s1, "p_914->g_509.s1", print_hash_value);
    transparent_crc(p_914->g_509.s2, "p_914->g_509.s2", print_hash_value);
    transparent_crc(p_914->g_509.s3, "p_914->g_509.s3", print_hash_value);
    transparent_crc(p_914->g_509.s4, "p_914->g_509.s4", print_hash_value);
    transparent_crc(p_914->g_509.s5, "p_914->g_509.s5", print_hash_value);
    transparent_crc(p_914->g_509.s6, "p_914->g_509.s6", print_hash_value);
    transparent_crc(p_914->g_509.s7, "p_914->g_509.s7", print_hash_value);
    transparent_crc(p_914->g_509.s8, "p_914->g_509.s8", print_hash_value);
    transparent_crc(p_914->g_509.s9, "p_914->g_509.s9", print_hash_value);
    transparent_crc(p_914->g_509.sa, "p_914->g_509.sa", print_hash_value);
    transparent_crc(p_914->g_509.sb, "p_914->g_509.sb", print_hash_value);
    transparent_crc(p_914->g_509.sc, "p_914->g_509.sc", print_hash_value);
    transparent_crc(p_914->g_509.sd, "p_914->g_509.sd", print_hash_value);
    transparent_crc(p_914->g_509.se, "p_914->g_509.se", print_hash_value);
    transparent_crc(p_914->g_509.sf, "p_914->g_509.sf", print_hash_value);
    transparent_crc(p_914->g_510.s0, "p_914->g_510.s0", print_hash_value);
    transparent_crc(p_914->g_510.s1, "p_914->g_510.s1", print_hash_value);
    transparent_crc(p_914->g_510.s2, "p_914->g_510.s2", print_hash_value);
    transparent_crc(p_914->g_510.s3, "p_914->g_510.s3", print_hash_value);
    transparent_crc(p_914->g_510.s4, "p_914->g_510.s4", print_hash_value);
    transparent_crc(p_914->g_510.s5, "p_914->g_510.s5", print_hash_value);
    transparent_crc(p_914->g_510.s6, "p_914->g_510.s6", print_hash_value);
    transparent_crc(p_914->g_510.s7, "p_914->g_510.s7", print_hash_value);
    transparent_crc(p_914->g_525.x, "p_914->g_525.x", print_hash_value);
    transparent_crc(p_914->g_525.y, "p_914->g_525.y", print_hash_value);
    transparent_crc(p_914->g_565.x, "p_914->g_565.x", print_hash_value);
    transparent_crc(p_914->g_565.y, "p_914->g_565.y", print_hash_value);
    transparent_crc(p_914->g_565.z, "p_914->g_565.z", print_hash_value);
    transparent_crc(p_914->g_565.w, "p_914->g_565.w", print_hash_value);
    transparent_crc(p_914->g_649.x, "p_914->g_649.x", print_hash_value);
    transparent_crc(p_914->g_649.y, "p_914->g_649.y", print_hash_value);
    transparent_crc(p_914->g_656.f2, "p_914->g_656.f2", print_hash_value);
    transparent_crc(p_914->g_660.f0.f0, "p_914->g_660.f0.f0", print_hash_value);
    transparent_crc(p_914->g_660.f0.f1, "p_914->g_660.f0.f1", print_hash_value);
    transparent_crc(p_914->g_660.f0.f2, "p_914->g_660.f0.f2", print_hash_value);
    transparent_crc(p_914->g_660.f0.f3, "p_914->g_660.f0.f3", print_hash_value);
    transparent_crc(p_914->g_662.f2, "p_914->g_662.f2", print_hash_value);
    transparent_crc(p_914->g_670.s0, "p_914->g_670.s0", print_hash_value);
    transparent_crc(p_914->g_670.s1, "p_914->g_670.s1", print_hash_value);
    transparent_crc(p_914->g_670.s2, "p_914->g_670.s2", print_hash_value);
    transparent_crc(p_914->g_670.s3, "p_914->g_670.s3", print_hash_value);
    transparent_crc(p_914->g_670.s4, "p_914->g_670.s4", print_hash_value);
    transparent_crc(p_914->g_670.s5, "p_914->g_670.s5", print_hash_value);
    transparent_crc(p_914->g_670.s6, "p_914->g_670.s6", print_hash_value);
    transparent_crc(p_914->g_670.s7, "p_914->g_670.s7", print_hash_value);
    transparent_crc(p_914->g_670.s8, "p_914->g_670.s8", print_hash_value);
    transparent_crc(p_914->g_670.s9, "p_914->g_670.s9", print_hash_value);
    transparent_crc(p_914->g_670.sa, "p_914->g_670.sa", print_hash_value);
    transparent_crc(p_914->g_670.sb, "p_914->g_670.sb", print_hash_value);
    transparent_crc(p_914->g_670.sc, "p_914->g_670.sc", print_hash_value);
    transparent_crc(p_914->g_670.sd, "p_914->g_670.sd", print_hash_value);
    transparent_crc(p_914->g_670.se, "p_914->g_670.se", print_hash_value);
    transparent_crc(p_914->g_670.sf, "p_914->g_670.sf", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_914->g_680[i], "p_914->g_680[i]", print_hash_value);

    }
    transparent_crc(p_914->g_707.s0, "p_914->g_707.s0", print_hash_value);
    transparent_crc(p_914->g_707.s1, "p_914->g_707.s1", print_hash_value);
    transparent_crc(p_914->g_707.s2, "p_914->g_707.s2", print_hash_value);
    transparent_crc(p_914->g_707.s3, "p_914->g_707.s3", print_hash_value);
    transparent_crc(p_914->g_707.s4, "p_914->g_707.s4", print_hash_value);
    transparent_crc(p_914->g_707.s5, "p_914->g_707.s5", print_hash_value);
    transparent_crc(p_914->g_707.s6, "p_914->g_707.s6", print_hash_value);
    transparent_crc(p_914->g_707.s7, "p_914->g_707.s7", print_hash_value);
    transparent_crc(p_914->g_707.s8, "p_914->g_707.s8", print_hash_value);
    transparent_crc(p_914->g_707.s9, "p_914->g_707.s9", print_hash_value);
    transparent_crc(p_914->g_707.sa, "p_914->g_707.sa", print_hash_value);
    transparent_crc(p_914->g_707.sb, "p_914->g_707.sb", print_hash_value);
    transparent_crc(p_914->g_707.sc, "p_914->g_707.sc", print_hash_value);
    transparent_crc(p_914->g_707.sd, "p_914->g_707.sd", print_hash_value);
    transparent_crc(p_914->g_707.se, "p_914->g_707.se", print_hash_value);
    transparent_crc(p_914->g_707.sf, "p_914->g_707.sf", print_hash_value);
    transparent_crc(p_914->g_747, "p_914->g_747", print_hash_value);
    transparent_crc(p_914->g_750.f0, "p_914->g_750.f0", print_hash_value);
    transparent_crc(p_914->g_750.f1, "p_914->g_750.f1", print_hash_value);
    transparent_crc(p_914->g_750.f2, "p_914->g_750.f2", print_hash_value);
    transparent_crc(p_914->g_750.f3, "p_914->g_750.f3", print_hash_value);
    transparent_crc(p_914->g_759.s0, "p_914->g_759.s0", print_hash_value);
    transparent_crc(p_914->g_759.s1, "p_914->g_759.s1", print_hash_value);
    transparent_crc(p_914->g_759.s2, "p_914->g_759.s2", print_hash_value);
    transparent_crc(p_914->g_759.s3, "p_914->g_759.s3", print_hash_value);
    transparent_crc(p_914->g_759.s4, "p_914->g_759.s4", print_hash_value);
    transparent_crc(p_914->g_759.s5, "p_914->g_759.s5", print_hash_value);
    transparent_crc(p_914->g_759.s6, "p_914->g_759.s6", print_hash_value);
    transparent_crc(p_914->g_759.s7, "p_914->g_759.s7", print_hash_value);
    transparent_crc(p_914->g_759.s8, "p_914->g_759.s8", print_hash_value);
    transparent_crc(p_914->g_759.s9, "p_914->g_759.s9", print_hash_value);
    transparent_crc(p_914->g_759.sa, "p_914->g_759.sa", print_hash_value);
    transparent_crc(p_914->g_759.sb, "p_914->g_759.sb", print_hash_value);
    transparent_crc(p_914->g_759.sc, "p_914->g_759.sc", print_hash_value);
    transparent_crc(p_914->g_759.sd, "p_914->g_759.sd", print_hash_value);
    transparent_crc(p_914->g_759.se, "p_914->g_759.se", print_hash_value);
    transparent_crc(p_914->g_759.sf, "p_914->g_759.sf", print_hash_value);
    transparent_crc(p_914->g_761.x, "p_914->g_761.x", print_hash_value);
    transparent_crc(p_914->g_761.y, "p_914->g_761.y", print_hash_value);
    transparent_crc(p_914->g_761.z, "p_914->g_761.z", print_hash_value);
    transparent_crc(p_914->g_761.w, "p_914->g_761.w", print_hash_value);
    transparent_crc(p_914->g_766.x, "p_914->g_766.x", print_hash_value);
    transparent_crc(p_914->g_766.y, "p_914->g_766.y", print_hash_value);
    transparent_crc(p_914->g_766.z, "p_914->g_766.z", print_hash_value);
    transparent_crc(p_914->g_766.w, "p_914->g_766.w", print_hash_value);
    transparent_crc(p_914->g_767.x, "p_914->g_767.x", print_hash_value);
    transparent_crc(p_914->g_767.y, "p_914->g_767.y", print_hash_value);
    transparent_crc(p_914->g_776, "p_914->g_776", print_hash_value);
    transparent_crc(p_914->g_810.f0, "p_914->g_810.f0", print_hash_value);
    transparent_crc(p_914->g_810.f1, "p_914->g_810.f1", print_hash_value);
    transparent_crc(p_914->g_810.f2, "p_914->g_810.f2", print_hash_value);
    transparent_crc(p_914->g_810.f3, "p_914->g_810.f3", print_hash_value);
    transparent_crc(p_914->g_811.f0, "p_914->g_811.f0", print_hash_value);
    transparent_crc(p_914->g_811.f1, "p_914->g_811.f1", print_hash_value);
    transparent_crc(p_914->g_811.f2, "p_914->g_811.f2", print_hash_value);
    transparent_crc(p_914->g_811.f3, "p_914->g_811.f3", print_hash_value);
    transparent_crc(p_914->g_853.x, "p_914->g_853.x", print_hash_value);
    transparent_crc(p_914->g_853.y, "p_914->g_853.y", print_hash_value);
    transparent_crc(p_914->g_853.z, "p_914->g_853.z", print_hash_value);
    transparent_crc(p_914->g_853.w, "p_914->g_853.w", print_hash_value);
    transparent_crc(p_914->g_862, "p_914->g_862", print_hash_value);
    transparent_crc(p_914->g_865, "p_914->g_865", print_hash_value);
    transparent_crc(p_914->g_866.s0, "p_914->g_866.s0", print_hash_value);
    transparent_crc(p_914->g_866.s1, "p_914->g_866.s1", print_hash_value);
    transparent_crc(p_914->g_866.s2, "p_914->g_866.s2", print_hash_value);
    transparent_crc(p_914->g_866.s3, "p_914->g_866.s3", print_hash_value);
    transparent_crc(p_914->g_866.s4, "p_914->g_866.s4", print_hash_value);
    transparent_crc(p_914->g_866.s5, "p_914->g_866.s5", print_hash_value);
    transparent_crc(p_914->g_866.s6, "p_914->g_866.s6", print_hash_value);
    transparent_crc(p_914->g_866.s7, "p_914->g_866.s7", print_hash_value);
    transparent_crc(p_914->g_884.x, "p_914->g_884.x", print_hash_value);
    transparent_crc(p_914->g_884.y, "p_914->g_884.y", print_hash_value);
    transparent_crc(p_914->g_890.x, "p_914->g_890.x", print_hash_value);
    transparent_crc(p_914->g_890.y, "p_914->g_890.y", print_hash_value);
    transparent_crc(p_914->g_890.z, "p_914->g_890.z", print_hash_value);
    transparent_crc(p_914->g_890.w, "p_914->g_890.w", print_hash_value);
    transparent_crc(p_914->g_892.x, "p_914->g_892.x", print_hash_value);
    transparent_crc(p_914->g_892.y, "p_914->g_892.y", print_hash_value);
    transparent_crc(p_914->g_892.z, "p_914->g_892.z", print_hash_value);
    transparent_crc(p_914->g_892.w, "p_914->g_892.w", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_914->g_897[i].f0, "p_914->g_897[i].f0", print_hash_value);
        transparent_crc(p_914->g_897[i].f1, "p_914->g_897[i].f1", print_hash_value);
        transparent_crc(p_914->g_897[i].f2, "p_914->g_897[i].f2", print_hash_value);
        transparent_crc(p_914->g_897[i].f3, "p_914->g_897[i].f3", print_hash_value);

    }
    transparent_crc(p_914->g_909, "p_914->g_909", print_hash_value);
    transparent_crc(p_914->v_collective, "p_914->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 94; i++)
            transparent_crc(p_914->l_special_values[i], "p_914->l_special_values[i]", print_hash_value);
    transparent_crc(p_914->l_comm_values[get_linear_local_id()], "p_914->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_914->g_comm_values[get_linear_group_id() * 53 + get_linear_local_id()], "p_914->g_comm_values[get_linear_group_id() * 53 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
