// --atomics 28 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 82,43,1 -l 2,1,1
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

// Seed: 2938953803

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint16_t  f0;
};

struct S1 {
   volatile uint8_t  f0;
   uint32_t  f1;
   int64_t  f2;
   uint64_t  f3;
   uint32_t  f4;
   uint16_t  f5;
   uint32_t  f6;
   uint16_t  f7;
   uint64_t  f8;
   volatile int32_t  f9;
};

struct S2 {
   uint32_t  f0;
   volatile int64_t  f1;
};

struct S3 {
   int8_t  f0;
};

struct S4 {
   struct S1  f0;
   volatile struct S0  f1;
   volatile struct S3  f2;
};

struct S5 {
   struct S0  f0;
   uint32_t  f1;
};

struct S6 {
   uint8_t  f0;
   uint32_t  f1;
   volatile int64_t  f2;
   volatile int8_t  f3;
   struct S2  f4;
   volatile int32_t  f5;
};

union U7 {
   volatile uint8_t  f0;
};

struct S8 {
    uint64_t g_9[7][5];
    uint8_t g_11;
    volatile VECTOR(uint8_t, 4) g_36;
    struct S0 g_43;
    struct S0 * volatile g_45;
    int32_t g_53;
    uint32_t g_59[3];
    int32_t g_65[6];
    struct S0 g_80;
    struct S0 g_81;
    struct S0 g_82[1];
    struct S0 g_83[9];
    struct S0 g_84;
    struct S0 g_85;
    struct S0 g_86;
    struct S0 g_87;
    struct S0 g_88;
    struct S0 g_89;
    struct S0 g_90;
    struct S0 g_91;
    struct S0 g_92;
    struct S0 g_93;
    struct S0 g_94;
    struct S0 g_95;
    struct S0 g_96;
    struct S0 g_97;
    struct S0 g_98[6];
    struct S0 *g_79[5][9];
    uint16_t g_107;
    uint64_t g_109;
    uint8_t g_112;
    uint8_t *g_111;
    int32_t *g_118;
    VECTOR(uint64_t, 8) g_136;
    struct S3 g_138;
    struct S3 *g_137;
    VECTOR(uint8_t, 16) g_159;
    uint32_t g_161;
    struct S0 g_168;
    struct S0 g_169[4][6];
    struct S0 g_170;
    int64_t g_185;
    int16_t g_187;
    int8_t g_188[2];
    VECTOR(int8_t, 8) g_218;
    VECTOR(uint64_t, 16) g_260;
    volatile struct S4 g_262;
    volatile struct S4 *g_261;
    int64_t g_282;
    VECTOR(int32_t, 16) g_286;
    int32_t ***g_305;
    int32_t * volatile **g_307;
    uint64_t *g_358[6];
    uint64_t **g_357;
    VECTOR(int16_t, 2) g_399;
    VECTOR(int16_t, 4) g_401;
    VECTOR(int16_t, 2) g_402;
    VECTOR(int16_t, 4) g_405;
    VECTOR(int16_t, 2) g_406;
    volatile uint64_t *g_410;
    volatile uint64_t * volatile *g_409;
    volatile uint64_t * volatile **g_408;
    uint8_t **g_413;
    struct S4 g_420[4];
    volatile VECTOR(uint8_t, 8) g_454;
    volatile VECTOR(int16_t, 4) g_506;
    volatile struct S2 g_515;
    VECTOR(int64_t, 16) g_529;
    struct S2 g_534;
    struct S2 * volatile g_535;
    VECTOR(uint32_t, 8) g_546;
    volatile VECTOR(int16_t, 16) g_556;
    volatile struct S6 g_576[6][9];
    int32_t ** volatile g_579;
    struct S4 g_599;
    VECTOR(uint16_t, 8) g_622;
    int16_t *g_626;
    int16_t *g_627;
    VECTOR(int8_t, 2) g_651;
    uint16_t *g_667;
    uint16_t **g_666;
    uint16_t *** volatile g_665[10][1];
    volatile VECTOR(int32_t, 8) g_712;
    volatile struct S5 g_727;
    volatile struct S5 * volatile g_728;
    uint8_t *** volatile g_746;
    VECTOR(int32_t, 16) g_805;
    struct S1 *g_817;
    struct S1 ** volatile g_816;
    int64_t *g_819[6];
    int64_t **g_818;
    int32_t ** volatile g_840;
    union U7 g_843;
    struct S6 g_857;
    struct S0 g_860;
    volatile VECTOR(uint64_t, 8) g_873;
    int32_t * volatile g_890;
    struct S0 g_905;
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
int32_t  func_1(struct S8 * p_906);
struct S0  func_2(uint8_t  p_3, uint32_t  p_4, struct S8 * p_906);
uint64_t  func_14(uint64_t  p_15, struct S8 * p_906);
int8_t  func_22(uint16_t  p_23, struct S8 * p_906);
int32_t * func_24(int32_t * p_25, int32_t * p_26, struct S8 * p_906);
int16_t  func_29(uint8_t  p_30, uint32_t  p_31, uint32_t  p_32, int8_t  p_33, struct S8 * p_906);
uint16_t  func_39(int64_t  p_40, int64_t  p_41, struct S8 * p_906);
int64_t  func_49(uint32_t  p_50, struct S8 * p_906);
int32_t  func_56(uint32_t  p_57, struct S8 * p_906);
uint16_t  func_75(struct S0 * p_76, uint8_t * p_77, struct S0 * p_78, struct S8 * p_906);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_906->l_comm_values p_906->g_9 p_906->g_36 p_906->g_43 p_906->g_45 p_906->g_comm_values p_906->g_420 p_906->g_261 p_906->g_187 p_906->g_262.f0.f2 p_906->g_118 p_906->g_65 p_906->g_399 p_906->g_305 p_906->g_454 p_906->g_282 p_906->g_137 p_906->g_506 p_906->g_138.f0 p_906->g_515 p_906->g_401 p_906->g_112 p_906->g_107 p_906->g_111 p_906->g_529 p_906->g_402 p_906->g_109 p_906->g_534 p_906->g_535 p_906->g_546 p_906->g_556 p_906->g_260 p_906->g_188 p_906->g_218 p_906->g_576 p_906->g_579 p_906->g_161 p_906->g_413 p_906->g_262.f0.f8 p_906->g_262 p_906->g_727 p_906->g_728 p_906->g_746 p_906->g_805 p_906->g_185 p_906->g_816 p_906->g_138 p_906->g_818 p_906->g_840 p_906->g_599.f0.f1 p_906->g_857 p_906->g_860 p_906->g_873 p_906->g_819 p_906->g_890
 * writes: p_906->g_9 p_906->g_11 p_906->g_43 p_906->g_53 p_906->g_262 p_906->g_413 p_906->g_187 p_906->g_109 p_906->g_405 p_906->g_65 p_906->g_138 p_906->g_515 p_906->g_112 p_906->g_420.f0.f7 p_906->g_534 p_906->g_188 p_906->g_218 p_906->g_576 p_906->g_118 p_906->g_161 p_906->g_626 p_906->g_627 p_906->g_107 p_906->g_599.f0.f8 p_906->g_727 p_906->g_185 p_906->g_817 p_906->g_818 p_906->g_857 p_906->g_282 p_906->g_599.f0.f4 p_906->g_905
 */
int32_t  func_1(struct S8 * p_906)
{ /* block id: 4 */
    int8_t l_7 = 0L;
    uint8_t *l_8 = (void*)0;
    uint8_t *l_10 = &p_906->g_11;
    VECTOR(int8_t, 2) l_849 = (VECTOR(int8_t, 2))(0x20L, 1L);
    uint16_t l_852 = 0xE8E2L;
    struct S3 **l_854 = &p_906->g_137;
    struct S3 ***l_853 = &l_854;
    uint32_t l_855 = 1UL;
    uint32_t l_856 = 1UL;
    uint32_t *l_887 = (void*)0;
    uint32_t *l_888 = &p_906->g_599.f0.f4;
    int i;
    p_906->g_905 = func_2((safe_lshift_func_int8_t_s_u(p_906->l_comm_values[(safe_mod_func_uint32_t_u_u(p_906->tid, 2))], ((*l_10) = (p_906->g_9[2][0] ^= l_7)))), ((*l_888) = ((safe_add_func_uint64_t_u_u(func_14(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(FAKE_DIVERGE(p_906->local_2_offset, get_local_id(2), 10), 4)) , (func_22(l_7, p_906) <= (safe_div_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_849.xyyyyxyx)).s60)), (-1L), 0L)).zwyywzxzzxzwxyyy))).s4)) , (safe_div_func_int64_t_s_s(l_852, ((((((p_906->g_599.f0.f1 ^ l_849.y) , ((-1L) | (((*l_853) = &p_906->g_137) != &p_906->g_137))) , l_849.x) , l_855) >= l_849.x) , l_856)))), l_7)))), p_906->g_399.y)), 6)) && GROUP_DIVERGE(1, 1)), p_906), l_852)) == l_849.x)), p_906);
    return p_906->g_860.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_906->g_890 p_906->g_45 p_906->g_43
 * writes: p_906->g_53 p_906->g_65
 */
struct S0  func_2(uint8_t  p_3, uint32_t  p_4, struct S8 * p_906)
{ /* block id: 448 */
    int32_t *l_889 = &p_906->g_53;
    int32_t l_891 = 0x4F078C4EL;
    int32_t *l_892 = &p_906->g_65[5];
    int32_t *l_893 = &p_906->g_53;
    int32_t *l_894 = &l_891;
    int32_t *l_895 = &p_906->g_65[5];
    int32_t *l_896 = &l_891;
    int32_t l_897 = 1L;
    int32_t l_898 = 0x640C3E6DL;
    int32_t l_899 = 0x4E099E96L;
    int32_t *l_900[7][10][3] = {{{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891}},{{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891}},{{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891}},{{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891}},{{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891}},{{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891}},{{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891},{&l_891,&l_898,&l_891}}};
    int64_t l_901 = 0L;
    uint32_t l_902 = 0xEAC3D54FL;
    int i, j, k;
    (*p_906->g_890) = ((*l_889) = 1L);
    ++l_902;
    return (*p_906->g_45);
}


/* ------------------------------------------ */
/* 
 * reads : p_906->g_857 p_906->g_860 p_906->g_111 p_906->g_112 p_906->g_873 p_906->g_818 p_906->g_819 p_906->g_805 p_906->g_282
 * writes: p_906->g_857 p_906->g_112 p_906->g_282 p_906->g_65
 */
uint64_t  func_14(uint64_t  p_15, struct S8 * p_906)
{ /* block id: 438 */
    struct S6 *l_858 = &p_906->g_857;
    VECTOR(int16_t, 4) l_859 = (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 7L), 7L);
    int32_t l_864 = 4L;
    int32_t l_867[7][4] = {{5L,0x6A4D5FA6L,5L,5L},{5L,0x6A4D5FA6L,5L,5L},{5L,0x6A4D5FA6L,5L,5L},{5L,0x6A4D5FA6L,5L,5L},{5L,0x6A4D5FA6L,5L,5L},{5L,0x6A4D5FA6L,5L,5L},{5L,0x6A4D5FA6L,5L,5L}};
    VECTOR(int64_t, 16) l_868 = (VECTOR(int64_t, 16))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0L), 0L), 0L, 9L, 0L, (VECTOR(int64_t, 2))(9L, 0L), (VECTOR(int64_t, 2))(9L, 0L), 9L, 0L, 9L, 0L);
    VECTOR(uint64_t, 4) l_869 = (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x009A555E9D503B26L), 0x009A555E9D503B26L);
    VECTOR(uint64_t, 16) l_870 = (VECTOR(uint64_t, 16))(0x0C17233FB0D3E9B2L, (VECTOR(uint64_t, 4))(0x0C17233FB0D3E9B2L, (VECTOR(uint64_t, 2))(0x0C17233FB0D3E9B2L, 0x0893658C3A147F29L), 0x0893658C3A147F29L), 0x0893658C3A147F29L, 0x0C17233FB0D3E9B2L, 0x0893658C3A147F29L, (VECTOR(uint64_t, 2))(0x0C17233FB0D3E9B2L, 0x0893658C3A147F29L), (VECTOR(uint64_t, 2))(0x0C17233FB0D3E9B2L, 0x0893658C3A147F29L), 0x0C17233FB0D3E9B2L, 0x0893658C3A147F29L, 0x0C17233FB0D3E9B2L, 0x0893658C3A147F29L);
    VECTOR(uint64_t, 16) l_871 = (VECTOR(uint64_t, 16))(0xF793C4CC56A1847AL, (VECTOR(uint64_t, 4))(0xF793C4CC56A1847AL, (VECTOR(uint64_t, 2))(0xF793C4CC56A1847AL, 0x422391A6F71EA243L), 0x422391A6F71EA243L), 0x422391A6F71EA243L, 0xF793C4CC56A1847AL, 0x422391A6F71EA243L, (VECTOR(uint64_t, 2))(0xF793C4CC56A1847AL, 0x422391A6F71EA243L), (VECTOR(uint64_t, 2))(0xF793C4CC56A1847AL, 0x422391A6F71EA243L), 0xF793C4CC56A1847AL, 0x422391A6F71EA243L, 0xF793C4CC56A1847AL, 0x422391A6F71EA243L);
    VECTOR(uint64_t, 16) l_872 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
    int32_t l_878 = (-3L);
    VECTOR(uint8_t, 8) l_879 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 4UL), 4UL), 4UL, 1UL, 4UL);
    VECTOR(int8_t, 8) l_880 = (VECTOR(int8_t, 8))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0L), 0L), 0L, 9L, 0L);
    uint64_t l_881 = 18446744073709551611UL;
    int32_t *l_882 = (void*)0;
    int32_t *l_883 = &p_906->g_65[5];
    struct S0 **l_884[3][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_906->g_79[4][1],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_906->g_79[4][1],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_906->g_79[4][1],(void*)0}};
    struct S0 ***l_885 = &l_884[2][1];
    int8_t l_886 = 0L;
    int i, j;
    (*l_858) = p_906->g_857;
    l_864 ^= ((*l_883) = ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_859.xxzz)).wwyzzwyx)).s75)).xyyx, (int16_t)0x156CL, (int16_t)(((+p_15) , p_906->g_860) , ((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_uint8_t_u_s(((*p_906->g_111)--), l_867[2][3])) && (!2UL)))) != ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 4))(1L, 0x67AA5CBB1B0E4422L, 0x331267CE24F95CD6L, 0x082C687B86F9C9C8L)).xxzzwxwwyxwyzyxy, ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 2))(l_868.s00)).xyxyyxyxxyxyxyxx, ((VECTOR(int64_t, 16))((-6L), (((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 4))(l_869.wzzx)).lo, ((VECTOR(uint64_t, 4))(l_870.s2347)).even, ((VECTOR(uint64_t, 4))(l_871.s4cac)).even))).yxyyxxxxxyxxyyxx)).lo, ((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 2))(l_872.s06)).yxyxyxxy, (uint64_t)p_15))), ((VECTOR(uint64_t, 4))(p_906->g_873.s7362)).yzwzyxxy))).s7 < (((safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((**p_906->g_818) = 0x2015D5133F2A33F6L) , (l_878 < ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(l_879.s41)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 16))(0x20L, ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_880.s12)), 0L, (-1L))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x5FL, (-1L))), l_881, 0x31L, (-1L), ((VECTOR(int8_t, 2))((-1L))), l_880.s3, ((VECTOR(int8_t, 2))(0x3CL)), 0x75L, ((VECTOR(int8_t, 2))(0L)), p_15, 0x73L, (-1L))).sc, ((VECTOR(int8_t, 2))(1L)), 0x34L)), (int8_t)(-1L), (int8_t)0L))).s0, (-1L), 0x05L, ((VECTOR(int8_t, 4))((-2L))), ((VECTOR(int8_t, 4))((-1L))), l_880.s4, (-8L), 0L, (-9L))).hi, ((VECTOR(int8_t, 8))(0x5BL))))).s0152573216420565, ((VECTOR(uint8_t, 16))(247UL))))))).s8167))))).odd, ((VECTOR(uint8_t, 2))(0x59L))))).odd)), 0xDD1AB6DEL)), p_906->g_805.sd)) != (-9L)) ^ l_869.y)), ((VECTOR(int64_t, 8))(0x7ADED778369B3A81L)), 0x205F40A69E4FF9E9L, (**p_906->g_818), l_879.s2, 0x08CC2DA425DA3D9CL, 2L, 0x70601E6CB6506FE8L))))).odd)).s53, ((VECTOR(int64_t, 2))((-1L)))))).xxxxxxyxxyyxxyxy))), ((VECTOR(int64_t, 16))(0x6F94AB400B673498L))))).even)).s27, (int64_t)0x1332B9BF0C8D4259L))).yyyx))).lo, ((VECTOR(int64_t, 2))(0x38E3F0FFA4D48727L)), ((VECTOR(int64_t, 2))((-1L)))))).even))))), ((VECTOR(uint16_t, 4))(0UL))))).w);
    (*l_883) = 0x673B8F05L;
    (*l_885) = l_884[1][6];
    return l_886;
}


/* ------------------------------------------ */
/* 
 * reads : p_906->g_36 p_906->g_43 p_906->g_45 p_906->g_comm_values p_906->g_420 p_906->g_261 p_906->g_187 p_906->g_262.f0.f2 p_906->g_118 p_906->g_65 p_906->g_399 p_906->g_305 p_906->g_454 p_906->g_282 p_906->g_137 p_906->g_506 p_906->g_138.f0 p_906->g_515 p_906->g_401 p_906->g_112 p_906->g_107 p_906->g_111 p_906->g_529 p_906->g_402 p_906->g_109 p_906->g_534 p_906->g_535 p_906->g_546 p_906->g_556 p_906->g_260 p_906->g_188 p_906->g_218 p_906->g_576 p_906->g_579 p_906->g_161 p_906->g_413 p_906->g_262.f0.f8 p_906->g_262 p_906->g_727 p_906->g_728 p_906->g_746 p_906->g_805 p_906->g_185 p_906->g_816 p_906->g_138 p_906->g_818 p_906->g_840
 * writes: p_906->g_43 p_906->g_53 p_906->g_262 p_906->g_413 p_906->g_187 p_906->g_109 p_906->g_405 p_906->g_65 p_906->g_138 p_906->g_515 p_906->g_112 p_906->g_420.f0.f7 p_906->g_534 p_906->g_188 p_906->g_218 p_906->g_576 p_906->g_118 p_906->g_161 p_906->g_626 p_906->g_627 p_906->g_107 p_906->g_599.f0.f8 p_906->g_727 p_906->g_185 p_906->g_817 p_906->g_818
 */
int8_t  func_22(uint16_t  p_23, struct S8 * p_906)
{ /* block id: 7 */
    VECTOR(uint8_t, 4) l_34 = (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 8UL), 8UL);
    VECTOR(uint8_t, 4) l_35 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x48L), 0x48L);
    int32_t l_42 = 0x0909FF4CL;
    VECTOR(uint8_t, 8) l_48 = (VECTOR(uint8_t, 8))(0x28L, (VECTOR(uint8_t, 4))(0x28L, (VECTOR(uint8_t, 2))(0x28L, 0x56L), 0x56L), 0x56L, 0x28L, 0x56L);
    int32_t l_418 = 0x1C1E188CL;
    int32_t *l_729 = (void*)0;
    union U7 *l_842[6][10][4] = {{{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843}},{{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843}},{{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843}},{{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843}},{{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843}},{{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843},{&p_906->g_843,&p_906->g_843,(void*)0,&p_906->g_843}}};
    union U7 **l_841[6];
    union U7 ***l_844 = &l_841[0];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_841[i] = &l_842[4][0][2];
    (*p_906->g_840) = func_24(((safe_add_func_int16_t_s_s((p_23 < func_29(((((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 16))(l_34.ywwyzzwyywwxwwyz)).sab, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_35.wx)).xyxxxyyyyxyxyxxy)).see, ((VECTOR(uint8_t, 16))(4UL, 0UL, 5UL, 0xA1L, 255UL, 1UL, ((VECTOR(uint8_t, 8))(0UL, 8UL, 0x53L, 0x74L, 0x07L, ((VECTOR(uint8_t, 4))(p_906->g_36.xxwy)).x, 255UL, 248UL)), 0x34L, 1UL)).sb6))).lo || (safe_mul_func_uint8_t_u_u((func_39(l_35.y, l_42, p_906) != p_906->g_comm_values[p_906->tid]), GROUP_DIVERGE(1, 1)))) , ((VECTOR(uint8_t, 8))(l_48.s06556714)).s2), p_23, l_48.s7, ((l_418 = func_49(l_34.x, p_906)) != p_23), p_906)), FAKE_DIVERGE(p_906->group_1_offset, get_group_id(1), 10))) , &l_418), l_729, p_906);
    (*l_844) = l_841[4];
    return l_35.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_906->g_746 p_906->g_805 p_906->g_65 p_906->g_185 p_906->g_816 p_906->g_137 p_906->g_138 p_906->g_818 p_906->g_107
 * writes: p_906->g_413 p_906->g_65 p_906->g_185 p_906->g_817 p_906->g_818 p_906->g_107
 */
int32_t * func_24(int32_t * p_25, int32_t * p_26, struct S8 * p_906)
{ /* block id: 358 */
    int32_t *l_730 = &p_906->g_65[1];
    int32_t *l_731 = &p_906->g_65[5];
    int32_t *l_732 = (void*)0;
    int32_t *l_733 = &p_906->g_65[5];
    int32_t *l_734 = &p_906->g_53;
    int32_t *l_735 = (void*)0;
    int32_t l_736 = 1L;
    int32_t *l_737 = &l_736;
    int32_t *l_738 = &p_906->g_53;
    int32_t l_739 = 0L;
    int32_t *l_740[7];
    uint32_t l_741 = 3UL;
    VECTOR(int32_t, 16) l_744 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L, (VECTOR(int32_t, 2))((-1L), 3L), (VECTOR(int32_t, 2))((-1L), 3L), (-1L), 3L, (-1L), 3L);
    uint8_t **l_745 = (void*)0;
    uint32_t l_761 = 0x5C95506FL;
    int8_t l_811 = (-1L);
    uint8_t l_812 = 1UL;
    struct S1 *l_815 = &p_906->g_420[0].f0;
    uint16_t l_829 = 0xEFE1L;
    int64_t l_834 = 7L;
    int32_t *l_839 = (void*)0;
    int i;
    for (i = 0; i < 7; i++)
        l_740[i] = (void*)0;
    --l_741;
    if (((VECTOR(int32_t, 4))(l_744.sab7a)).x)
    { /* block id: 360 */
        uint16_t l_747 = 0x353BL;
        int16_t l_758 = 0x22A4L;
        int32_t l_760 = 0x271166FFL;
        (*p_906->g_746) = l_745;
        l_747++;
        if ((*p_25))
        { /* block id: 363 */
            int16_t l_757 = 1L;
            int32_t l_759[4][5] = {{0x450F2C2FL,0x3AF85F15L,0x3AF85F15L,0x450F2C2FL,0x450F2C2FL},{0x450F2C2FL,0x3AF85F15L,0x3AF85F15L,0x450F2C2FL,0x450F2C2FL},{0x450F2C2FL,0x3AF85F15L,0x3AF85F15L,0x450F2C2FL,0x450F2C2FL},{0x450F2C2FL,0x3AF85F15L,0x3AF85F15L,0x450F2C2FL,0x450F2C2FL}};
            int i, j;
            if ((atomic_inc(&p_906->l_atomic_input[3]) == 4))
            { /* block id: 365 */
                int32_t l_750[6] = {0x00EDB337L,4L,0x00EDB337L,0x00EDB337L,4L,0x00EDB337L};
                int i;
                for (l_750[5] = 0; (l_750[5] <= 6); l_750[5]++)
                { /* block id: 368 */
                    struct S0 l_753 = {1UL};/* VOLATILE GLOBAL l_753 */
                    struct S0 l_754 = {0x6DE5L};/* VOLATILE GLOBAL l_754 */
                    uint64_t l_755[3];
                    uint32_t l_756[10] = {0x75B2DA19L,0x75B2DA19L,0x75B2DA19L,0x75B2DA19L,0x75B2DA19L,0x75B2DA19L,0x75B2DA19L,0x75B2DA19L,0x75B2DA19L,0x75B2DA19L};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_755[i] = 18446744073709551613UL;
                    l_754 = l_753;
                    l_756[9] = l_755[2];
                }
                unsigned int result = 0;
                int l_750_i0;
                for (l_750_i0 = 0; l_750_i0 < 6; l_750_i0++) {
                    result += l_750[l_750_i0];
                }
                atomic_add(&p_906->l_special_values[3], result);
            }
            else
            { /* block id: 372 */
                (1 + 1);
            }
            l_761--;
        }
        else
        { /* block id: 376 */
            if ((atomic_inc(&p_906->g_atomic_input[28 * get_linear_group_id() + 11]) == 1))
            { /* block id: 378 */
                uint16_t l_764 = 65535UL;
                uint32_t l_799 = 0x96EAF528L;
                uint16_t l_802 = 7UL;
                if ((l_764 = (-3L)))
                { /* block id: 380 */
                    uint8_t l_765 = 0xAEL;
                    VECTOR(int32_t, 2) l_766 = (VECTOR(int32_t, 2))(0x6508684EL, 0x5C93C078L);
                    uint16_t l_767 = 0x0CF2L;
                    uint16_t l_768 = 0UL;
                    int i;
                    l_765 &= (-1L);
                    l_768 |= (l_767 = ((VECTOR(int32_t, 2))(l_766.yx)).even);
                }
                else
                { /* block id: 384 */
                    uint16_t l_769 = 0x8DBCL;
                    int64_t l_770[5][1] = {{0x0F73206E5F351C8FL},{0x0F73206E5F351C8FL},{0x0F73206E5F351C8FL},{0x0F73206E5F351C8FL},{0x0F73206E5F351C8FL}};
                    VECTOR(int32_t, 8) l_771 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                    int32_t l_772 = 0x2CF87437L;
                    int32_t *l_797 = &l_772;
                    int32_t *l_798 = &l_772;
                    int i, j;
                    l_770[0][0] ^= l_769;
                    if ((l_772 ^= ((VECTOR(int32_t, 4))(l_771.s6417)).z))
                    { /* block id: 387 */
                        int16_t l_773 = 0x674AL;
                        struct S6 l_775 = {0x52L,4294967289UL,1L,0x68L,{0xB05CD6D9L,0x34479026E8DE0593L},0x5533EA89L};/* VOLATILE GLOBAL l_775 */
                        struct S6 *l_774 = &l_775;
                        struct S6 *l_776 = &l_775;
                        int32_t l_777 = (-1L);
                        int8_t l_778 = 0x72L;
                        int16_t l_779 = 0L;
                        uint8_t l_780 = 0x10L;
                        l_772 = (l_771.s2 = l_773);
                        l_776 = l_774;
                        l_771.s0 &= 1L;
                        ++l_780;
                    }
                    else
                    { /* block id: 393 */
                        uint32_t l_783 = 4294967295UL;
                        int16_t l_784 = 0L;
                        l_772 &= l_783;
                        l_772 |= l_784;
                    }
                    for (l_771.s4 = 0; (l_771.s4 < (-19)); l_771.s4 = safe_sub_func_uint16_t_u_u(l_771.s4, 2))
                    { /* block id: 399 */
                        int32_t l_787[6] = {0x5EE444DEL,0x5EE444DEL,0x5EE444DEL,0x5EE444DEL,0x5EE444DEL,0x5EE444DEL};
                        int8_t l_788 = 0x44L;
                        int32_t l_789 = 0x568D2426L;
                        int32_t l_790 = 0x29DB80F3L;
                        int64_t l_791[7][8][4] = {{{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L}},{{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L}},{{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L}},{{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L}},{{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L}},{{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L}},{{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L},{(-5L),(-1L),4L,3L}}};
                        VECTOR(uint8_t, 16) l_792 = (VECTOR(uint8_t, 16))(0xADL, (VECTOR(uint8_t, 4))(0xADL, (VECTOR(uint8_t, 2))(0xADL, 0xE2L), 0xE2L), 0xE2L, 0xADL, 0xE2L, (VECTOR(uint8_t, 2))(0xADL, 0xE2L), (VECTOR(uint8_t, 2))(0xADL, 0xE2L), 0xADL, 0xE2L, 0xADL, 0xE2L);
                        int32_t *l_795[3][9][1] = {{{&l_789},{&l_789},{&l_789},{&l_789},{&l_789},{&l_789},{&l_789},{&l_789},{&l_789}},{{&l_789},{&l_789},{&l_789},{&l_789},{&l_789},{&l_789},{&l_789},{&l_789},{&l_789}},{{&l_789},{&l_789},{&l_789},{&l_789},{&l_789},{&l_789},{&l_789},{&l_789},{&l_789}}};
                        int32_t *l_796 = &l_789;
                        int i, j, k;
                        l_792.s4--;
                        l_796 = l_795[2][2][0];
                    }
                    l_798 = l_797;
                }
                l_799++;
                l_802++;
                unsigned int result = 0;
                result += l_764;
                result += l_799;
                result += l_802;
                atomic_add(&p_906->g_special_values[28 * get_linear_group_id() + 11], result);
            }
            else
            { /* block id: 407 */
                (1 + 1);
            }
            (*l_731) &= ((VECTOR(int32_t, 4))(p_906->g_805.s5f58)).z;
        }
    }
    else
    { /* block id: 412 */
        int64_t ***l_820 = &p_906->g_818;
        int32_t l_823 = 0x30289267L;
        int32_t l_824 = 0x0C4D9EBEL;
        int32_t l_827 = 0x5024C0D6L;
        int32_t l_828 = 1L;
        int32_t l_835 = 0L;
        uint64_t l_836 = 0xDDAF2BA757622D59L;
        for (p_906->g_185 = (-29); (p_906->g_185 < (-18)); ++p_906->g_185)
        { /* block id: 415 */
            int8_t l_808 = 1L;
            int32_t l_809 = 0x44EE9CF1L;
            int32_t l_810 = 3L;
            l_812++;
        }
        (*p_906->g_816) = l_815;
        (*l_820) = ((*p_906->g_137) , p_906->g_818);
        for (p_906->g_107 = 18; (p_906->g_107 == 44); p_906->g_107++)
        { /* block id: 422 */
            VECTOR(int32_t, 4) l_825 = (VECTOR(int32_t, 4))(0x3C285671L, (VECTOR(int32_t, 2))(0x3C285671L, 0x785A7C96L), 0x785A7C96L);
            int32_t l_826[10] = {0x6A6E1055L,(-3L),0x6A6709FFL,(-3L),0x6A6E1055L,0x6A6E1055L,(-3L),0x6A6709FFL,(-3L),0x6A6E1055L};
            int i;
            l_829++;
            for (l_829 = 0; (l_829 >= 41); l_829 = safe_add_func_uint32_t_u_u(l_829, 3))
            { /* block id: 426 */
                if ((*p_25))
                    break;
                return p_26;
            }
            --l_836;
        }
    }
    return l_839;
}


/* ------------------------------------------ */
/* 
 * reads : p_906->g_420 p_906->g_261 p_906->g_187 p_906->g_262.f0.f2 p_906->g_118 p_906->g_65 p_906->g_399 p_906->g_305 p_906->g_454 p_906->g_282 p_906->g_137 p_906->g_506 p_906->g_138.f0 p_906->g_515 p_906->g_401 p_906->g_112 p_906->g_107 p_906->g_111 p_906->g_529 p_906->g_402 p_906->g_109 p_906->g_534 p_906->g_535 p_906->g_546 p_906->g_556 p_906->g_260 p_906->g_188 p_906->g_218 p_906->g_576 p_906->g_579 p_906->g_161 p_906->g_413 p_906->g_262.f0.f8 p_906->g_262 p_906->g_727 p_906->g_728
 * writes: p_906->g_262 p_906->g_413 p_906->g_187 p_906->g_109 p_906->g_405 p_906->g_65 p_906->g_138 p_906->g_515 p_906->g_112 p_906->g_420.f0.f7 p_906->g_534 p_906->g_188 p_906->g_218 p_906->g_576 p_906->g_118 p_906->g_161 p_906->g_626 p_906->g_627 p_906->g_107 p_906->g_599.f0.f8 p_906->g_727
 */
int16_t  func_29(uint8_t  p_30, uint32_t  p_31, uint32_t  p_32, int8_t  p_33, struct S8 * p_906)
{ /* block id: 171 */
    uint64_t **l_419 = &p_906->g_358[3];
    uint8_t **l_421 = (void*)0;
    uint8_t **l_422 = &p_906->g_111;
    uint8_t ***l_423 = &p_906->g_413;
    int32_t l_424 = 0x21530016L;
    int16_t *l_425 = &p_906->g_187;
    VECTOR(int32_t, 16) l_433 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x246A3850L), 0x246A3850L), 0x246A3850L, (-7L), 0x246A3850L, (VECTOR(int32_t, 2))((-7L), 0x246A3850L), (VECTOR(int32_t, 2))((-7L), 0x246A3850L), (-7L), 0x246A3850L, (-7L), 0x246A3850L);
    uint64_t *l_438 = &p_906->g_109;
    VECTOR(uint8_t, 16) l_460 = (VECTOR(uint8_t, 16))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 255UL), 255UL), 255UL, 249UL, 255UL, (VECTOR(uint8_t, 2))(249UL, 255UL), (VECTOR(uint8_t, 2))(249UL, 255UL), 249UL, 255UL, 249UL, 255UL);
    VECTOR(uint64_t, 8) l_544 = (VECTOR(uint64_t, 8))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 0xF86543E31D0712B0L), 0xF86543E31D0712B0L), 0xF86543E31D0712B0L, 2UL, 0xF86543E31D0712B0L);
    VECTOR(int8_t, 16) l_551 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L, (VECTOR(int8_t, 2))((-1L), 3L), (VECTOR(int8_t, 2))((-1L), 3L), (-1L), 3L, (-1L), 3L);
    int32_t *l_578 = (void*)0;
    int32_t **l_594 = &p_906->g_118;
    struct S4 **l_619 = (void*)0;
    int16_t *l_624 = (void*)0;
    uint16_t l_658 = 0x1E91L;
    int i;
    l_419 = l_419;
    (*p_906->g_261) = p_906->g_420[0];
    (*p_906->g_118) = (((l_421 != ((*l_423) = l_422)) > (((*l_425) |= l_424) ^ (p_33 >= (~((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((p_906->g_405.z = ((VECTOR(int16_t, 4))((safe_mod_func_uint64_t_u_u(((*l_438) = ((((safe_unary_minus_func_int64_t_s(((((VECTOR(int32_t, 16))(l_433.s1e517062632b20bb)).se <= FAKE_DIVERGE(p_906->group_0_offset, get_group_id(0), 10)) > p_906->g_262.f0.f2))) && GROUP_DIVERGE(2, 1)) == l_424) , (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x79L, 0xFAL)), 0UL, 0xD6L)).xwxwyzwxxyyywzxz)).s4, (safe_sub_func_uint32_t_u_u(p_31, 0xAAE346E9L)))))), (safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s((*p_906->g_118), p_906->g_420[0].f0.f1)), p_31)))), 0x2E76L, (-1L), 0x77A5L)).y), p_906->g_399.y)), l_433.s8)) <= 9UL))))) == p_33);
    if (p_32)
    { /* block id: 179 */
        struct S3 l_495 = {0x27L};
        uint8_t ***l_518[2][4][1] = {{{&p_906->g_413},{&p_906->g_413},{&p_906->g_413},{&p_906->g_413}},{{&p_906->g_413},{&p_906->g_413},{&p_906->g_413},{&p_906->g_413}}};
        VECTOR(int16_t, 16) l_519 = (VECTOR(int16_t, 16))(0x3B1DL, (VECTOR(int16_t, 4))(0x3B1DL, (VECTOR(int16_t, 2))(0x3B1DL, 2L), 2L), 2L, 0x3B1DL, 2L, (VECTOR(int16_t, 2))(0x3B1DL, 2L), (VECTOR(int16_t, 2))(0x3B1DL, 2L), 0x3B1DL, 2L, 0x3B1DL, 2L);
        int32_t **l_524 = (void*)0;
        int i, j, k;
        if ((safe_add_func_uint16_t_u_u((((void*)0 == &p_906->g_138) < ((((void*)0 != p_906->g_305) && (((void*)0 == &p_906->g_187) , (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_31, (safe_unary_minus_func_uint8_t_u((((*l_423) = (void*)0) == (void*)0))))), 8L)))) >= p_32)), p_906->g_420[0].f0.f2)))
        { /* block id: 181 */
            struct S3 **l_457 = &p_906->g_137;
            int32_t l_463 = 1L;
            int32_t ****l_464 = &p_906->g_305;
            l_463 = (((safe_rshift_func_int16_t_s_u((((safe_add_func_int8_t_s_s((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_906->g_454.s1600)).odd)).even >= ((safe_rshift_func_int8_t_s_u(((l_457 = l_457) != (void*)0), (safe_lshift_func_uint8_t_u_s(((p_31 ^ ((p_906->g_420[0].f0.f8 & (((VECTOR(uint8_t, 8))(l_460.s152bd256)).s5 != 0x22L)) || (safe_add_func_int32_t_s_s((l_424 > 0x3F7AL), ((VECTOR(int32_t, 2))(0x144D843EL, 1L)).hi)))) < (l_433.se = ((((*p_906->g_118) = (p_33 | 0x3FEB64B9L)) & 0x53322D46L) > p_32))), p_32)))) > p_906->g_282)), 0x65L)) & (-3L)) && 0x3EL), 5)) >= (-8L)) , p_32);
            if ((&p_906->g_307 != l_464))
            { /* block id: 186 */
                if ((atomic_inc(&p_906->g_atomic_input[28 * get_linear_group_id() + 27]) == 3))
                { /* block id: 188 */
                    int32_t l_465 = 2L;
                    union U7 l_476 = {0xDAL};/* VOLATILE GLOBAL l_476 */
                    uint8_t l_489 = 0x7DL;
                    union U7 l_490 = {0xD0L};/* VOLATILE GLOBAL l_490 */
                    int32_t *l_491 = &l_465;
                    int32_t *l_492 = &l_465;
                    uint32_t l_493 = 0UL;
                    VECTOR(uint32_t, 4) l_494 = (VECTOR(uint32_t, 4))(0x04D961C2L, (VECTOR(uint32_t, 2))(0x04D961C2L, 4294967290UL), 4294967290UL);
                    int i;
                    for (l_465 = 0; (l_465 < (-25)); l_465 = safe_sub_func_uint32_t_u_u(l_465, 6))
                    { /* block id: 191 */
                        uint32_t l_468 = 0xDDA71526L;
                        int32_t l_470 = (-1L);
                        int32_t *l_469[1][6][10] = {{{&l_470,&l_470,(void*)0,&l_470,&l_470,(void*)0,(void*)0,&l_470,&l_470,(void*)0},{&l_470,&l_470,(void*)0,&l_470,&l_470,(void*)0,(void*)0,&l_470,&l_470,(void*)0},{&l_470,&l_470,(void*)0,&l_470,&l_470,(void*)0,(void*)0,&l_470,&l_470,(void*)0},{&l_470,&l_470,(void*)0,&l_470,&l_470,(void*)0,(void*)0,&l_470,&l_470,(void*)0},{&l_470,&l_470,(void*)0,&l_470,&l_470,(void*)0,(void*)0,&l_470,&l_470,(void*)0},{&l_470,&l_470,(void*)0,&l_470,&l_470,(void*)0,(void*)0,&l_470,&l_470,(void*)0}}};
                        int32_t *l_471[3][3][9] = {{{&l_470,(void*)0,(void*)0,&l_470,&l_470,&l_470,(void*)0,(void*)0,&l_470},{&l_470,(void*)0,(void*)0,&l_470,&l_470,&l_470,(void*)0,(void*)0,&l_470},{&l_470,(void*)0,(void*)0,&l_470,&l_470,&l_470,(void*)0,(void*)0,&l_470}},{{&l_470,(void*)0,(void*)0,&l_470,&l_470,&l_470,(void*)0,(void*)0,&l_470},{&l_470,(void*)0,(void*)0,&l_470,&l_470,&l_470,(void*)0,(void*)0,&l_470},{&l_470,(void*)0,(void*)0,&l_470,&l_470,&l_470,(void*)0,(void*)0,&l_470}},{{&l_470,(void*)0,(void*)0,&l_470,&l_470,&l_470,(void*)0,(void*)0,&l_470},{&l_470,(void*)0,(void*)0,&l_470,&l_470,&l_470,(void*)0,(void*)0,&l_470},{&l_470,(void*)0,(void*)0,&l_470,&l_470,&l_470,(void*)0,(void*)0,&l_470}}};
                        int32_t *l_472 = &l_470;
                        uint32_t l_473 = 0x5F523904L;
                        int i, j, k;
                        l_468 ^= 1L;
                        l_472 = (l_471[1][2][1] = (l_469[0][2][7] = (void*)0));
                        l_473--;
                    }
                    if ((l_476 , 1L))
                    { /* block id: 198 */
                        int64_t l_477 = 0L;
                        struct S2 l_479 = {4294967292UL,7L};/* VOLATILE GLOBAL l_479 */
                        struct S2 *l_478 = &l_479;
                        struct S2 *l_480[1][6];
                        struct S2 *l_481 = &l_479;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_480[i][j] = (void*)0;
                        }
                        l_465 &= l_477;
                        l_481 = (l_480[0][3] = l_478);
                    }
                    else
                    { /* block id: 202 */
                        uint8_t l_482[5] = {1UL,1UL,1UL,1UL,1UL};
                        int32_t *l_485 = (void*)0;
                        int32_t l_487 = 0x180977A2L;
                        int32_t *l_486 = &l_487;
                        int32_t *l_488[4][5][2] = {{{(void*)0,&l_487},{(void*)0,&l_487},{(void*)0,&l_487},{(void*)0,&l_487},{(void*)0,&l_487}},{{(void*)0,&l_487},{(void*)0,&l_487},{(void*)0,&l_487},{(void*)0,&l_487},{(void*)0,&l_487}},{{(void*)0,&l_487},{(void*)0,&l_487},{(void*)0,&l_487},{(void*)0,&l_487},{(void*)0,&l_487}},{{(void*)0,&l_487},{(void*)0,&l_487},{(void*)0,&l_487},{(void*)0,&l_487},{(void*)0,&l_487}}};
                        int i, j, k;
                        l_482[4]++;
                        l_488[0][4][0] = (l_486 = l_485);
                    }
                    l_492 = (((l_489 = 0UL) , l_490) , l_491);
                    l_494.z |= l_493;
                    unsigned int result = 0;
                    result += l_465;
                    result += l_476.f0;
                    result += l_489;
                    result += l_490.f0;
                    result += l_493;
                    result += l_494.w;
                    result += l_494.z;
                    result += l_494.y;
                    result += l_494.x;
                    atomic_add(&p_906->g_special_values[28 * get_linear_group_id() + 27], result);
                }
                else
                { /* block id: 210 */
                    (1 + 1);
                }
                return l_460.s0;
            }
            else
            { /* block id: 214 */
                (**l_457) = l_495;
            }
        }
        else
        { /* block id: 217 */
            uint8_t ***l_496 = &l_422;
            int32_t l_499 = 0L;
            (*p_906->g_118) ^= ((((void*)0 == l_496) ^ (GROUP_DIVERGE(0, 1) | ((safe_add_func_uint16_t_u_u((l_499 <= (safe_add_func_uint16_t_u_u(((+p_31) | 4294967295UL), (safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(l_495.f0, ((VECTOR(int16_t, 4))(p_906->g_506.wzyw)).x)), 1))))), (l_433.s9 | p_32))) , ((void*)0 == &l_438)))) && l_495.f0);
        }
        for (p_33 = 0; (p_33 == (-7)); --p_33)
        { /* block id: 222 */
            uint64_t l_533 = 0xC8E9A5AF0ADDA811L;
            int32_t ****l_542 = &p_906->g_305;
            int32_t ****l_543 = &p_906->g_305;
            VECTOR(int16_t, 4) l_555 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x3F81L), 0x3F81L);
            int i;
            for (l_495.f0 = (-25); (l_495.f0 > 27); l_495.f0++)
            { /* block id: 225 */
                int32_t **l_525 = &p_906->g_118;
                int32_t **l_526 = &p_906->g_118;
                for (p_906->g_138.f0 = 0; (p_906->g_138.f0 >= 22); p_906->g_138.f0++)
                { /* block id: 228 */
                    for (p_32 = 0; (p_32 == 51); p_32 = safe_add_func_uint64_t_u_u(p_32, 3))
                    { /* block id: 231 */
                        volatile struct S2 *l_516 = (void*)0;
                        volatile struct S2 *l_517 = &p_906->g_515;
                        (*l_517) = p_906->g_515;
                        return p_31;
                    }
                    (*p_906->g_118) = (p_906->g_401.y <= ((((void*)0 == l_518[0][0][0]) || (p_33 >= p_32)) & ((VECTOR(int16_t, 8))(l_519.sf8dd201f)).s0));
                }
                for (p_906->g_112 = 8; (p_906->g_112 != 3); --p_906->g_112)
                { /* block id: 239 */
                    uint16_t *l_530 = &p_906->g_420[0].f0.f7;
                    (*p_906->g_118) ^= (safe_lshift_func_uint16_t_u_u((((((((l_525 = l_524) == l_526) & p_906->g_107) ^ 0x17L) && (safe_mul_func_uint8_t_u_u((*p_906->g_111), (((void*)0 == &p_906->g_59[1]) > 0xB839DA2AL)))) && GROUP_DIVERGE(0, 1)) >= ((*l_530) ^= (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(p_906->g_529.s73981dd3)).s1, 0x6E1171D5BAEA3968L, p_30, 0x3CFD23A21DF842DAL, p_30, ((VECTOR(int64_t, 4))(0x7E63A0B21617B9A9L)), ((VECTOR(int64_t, 4))(0x2D293E3E8C6C349EL)), (-1L), 9L, 0x15495ECE06F598C6L)).s1 , p_906->g_529.s5))), p_906->g_402.y));
                    for (p_906->g_109 = 0; (p_906->g_109 != 54); p_906->g_109 = safe_add_func_int8_t_s_s(p_906->g_109, 9))
                    { /* block id: 245 */
                        atomic_sub(&p_906->g_atomic_reduction[get_linear_group_id()], (0x1E32848AL || ((VECTOR(uint32_t, 8))(3UL, ((VECTOR(uint32_t, 2))(0x9CC263C8L, 0xCA60E739L)), 0x62113B64L, 0xB273EFB6L, 0x90E4415BL, 1UL, 0UL)).s6) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_906->v_collective += p_906->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        return l_533;
                    }
                }
                (*p_906->g_535) = p_906->g_534;
            }
            if (l_424)
                continue;
            for (p_906->g_109 = (-15); (p_906->g_109 < 53); p_906->g_109 = safe_add_func_uint16_t_u_u(p_906->g_109, 3))
            { /* block id: 255 */
                VECTOR(uint64_t, 4) l_545 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL);
                VECTOR(int8_t, 4) l_549 = (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, 0L), 0L);
                VECTOR(int8_t, 16) l_550 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int8_t, 2))((-1L), 0L), (VECTOR(int8_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                VECTOR(int8_t, 8) l_552 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x68L), 0x68L), 0x68L, 8L, 0x68L);
                uint16_t *l_571 = &p_906->g_420[0].f0.f7;
                int8_t *l_572 = &p_906->g_188[0];
                uint16_t l_573 = 0x52E4L;
                int i;
                (*p_906->g_118) |= (safe_lshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((l_542 = &p_906->g_305) != l_543), ((VECTOR(uint64_t, 4))(l_544.s6017)), ((VECTOR(uint64_t, 8))(l_545.zxwwzywy)), ((0x37A1756AL & ((VECTOR(uint32_t, 2))(p_906->g_546.s73)).odd) == ((((l_545.y < (safe_rshift_func_uint16_t_u_u(((0UL != (((p_906->g_218.s5 ^= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(l_549.wyzz)).even, ((VECTOR(int8_t, 16))(l_550.sf0dedee959f5b8e8)).sbe))).yyyyxyxyyyyxyyyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))(l_551.sb6ed)).zxwzxxxwxwyzyxxw, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(l_552.s5265164711562345)).s04, ((VECTOR(int8_t, 8))(((*l_572) ^= (safe_lshift_func_int16_t_s_u(((*l_425) &= ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 4))(l_555.wxxx)).yzwyzwzz, ((VECTOR(int16_t, 8))(p_906->g_556.s4401f76b))))))).s1), (safe_lshift_func_int16_t_s_s(p_906->g_260.se, ((p_31 & (safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((*l_571) ^= (safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((-7L), (~(safe_div_func_uint64_t_u_u(l_460.s4, p_32))))), p_33)), l_544.s1))), p_31)), p_32))) , 0x41DBL)))))), ((VECTOR(int8_t, 4))(1L)), 0x0EL, 0x55L, 0L)).s43))).xxxxxxyyxxxyxyyx))).s57)).xxxyxyxxxxxyyxxx))).lo)).s0) , 8L) != 2UL)) || GROUP_DIVERGE(2, 1)), 6))) <= p_33) , l_573) , p_906->g_420[0].f0.f0)), 0x1F903F9590A86AAFL, 2UL)).sa, 0x52903545B26172A0L)) ^ p_32), 0));
                if (p_33)
                    continue;
                if ((*p_906->g_118))
                    continue;
                if (p_32)
                    break;
            }
            (*p_906->g_118) = (*p_906->g_118);
        }
        for (p_906->g_109 = 3; (p_906->g_109 < 35); p_906->g_109 = safe_add_func_uint16_t_u_u(p_906->g_109, 3))
        { /* block id: 270 */
            volatile struct S6 *l_577[5] = {&p_906->g_576[3][6],&p_906->g_576[3][6],&p_906->g_576[3][6],&p_906->g_576[3][6],&p_906->g_576[3][6]};
            int i;
            p_906->g_576[0][2] = p_906->g_576[3][6];
            if (l_433.sf)
                break;
        }
        (*p_906->g_579) = l_578;
    }
    else
    { /* block id: 275 */
        int32_t *l_580[4];
        int16_t l_581 = (-1L);
        uint32_t l_582 = 0xD861AA55L;
        VECTOR(int32_t, 2) l_587 = (VECTOR(int32_t, 2))(2L, 0x23B4CB1CL);
        uint32_t l_588 = 1UL;
        uint8_t ***l_608[2][3][6] = {{{&l_422,&l_421,&l_421,(void*)0,&l_421,(void*)0},{&l_422,&l_421,&l_421,(void*)0,&l_421,(void*)0},{&l_422,&l_421,&l_421,(void*)0,&l_421,(void*)0}},{{&l_422,&l_421,&l_421,(void*)0,&l_421,(void*)0},{&l_422,&l_421,&l_421,(void*)0,&l_421,(void*)0},{&l_422,&l_421,&l_421,(void*)0,&l_421,(void*)0}}};
        struct S1 *l_633 = (void*)0;
        uint32_t l_661 = 0UL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_580[i] = (void*)0;
        l_582--;
        for (p_30 = 0; (p_30 <= 6); ++p_30)
        { /* block id: 279 */
            return p_906->g_454.s4;
        }
        (*p_906->g_118) = (l_551.s4 == (l_588 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_587.yyyy)))).wywwzwyzzwwzwzxz, (int32_t)0x229D98AEL))).se3)).lo));
        for (p_906->g_161 = (-13); (p_906->g_161 != 57); p_906->g_161 = safe_add_func_uint16_t_u_u(p_906->g_161, 7))
        { /* block id: 286 */
            int32_t **l_591[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t **l_593 = &l_580[1];
            int32_t ***l_592[1][2];
            struct S4 *l_602 = &p_906->g_599;
            uint8_t **l_605 = &p_906->g_111;
            uint8_t ****l_606 = (void*)0;
            uint8_t ****l_607 = &l_423;
            struct S3 l_623 = {0L};
            int16_t **l_625 = &l_425;
            int32_t l_628 = 0x70873085L;
            int32_t *l_630 = &p_906->g_53;
            int64_t l_650 = 0x06DDD6A7AEFC90E0L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_592[i][j] = &l_593;
            }
            (*p_906->g_118) |= ((((((((!((l_591[2] != (l_594 = (void*)0)) < (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 16))(p_906->g_282, ((((safe_mod_func_uint8_t_u_u(1UL, ((*p_906->g_111) = (((*l_425) = ((((p_906->g_599 , (((*l_607) = ((safe_rshift_func_uint16_t_u_s((((*p_906->g_535) , l_602) != p_906->g_261), (safe_lshift_func_int16_t_s_s(((((p_32 <= p_906->g_138.f0) , (*l_423)) != l_605) ^ 0x6EEEC6EF0273EA58L), 6)))) , &p_906->g_413)) != l_608[1][2][3])) , 255UL) & GROUP_DIVERGE(1, 1)) | (**p_906->g_413))) ^ (-9L))))) & p_33) ^ p_906->g_406.x) , p_906->g_169[3][0].f0), ((VECTOR(int8_t, 2))((-7L))), 0x0BL, p_906->g_420[0].f0.f7, (-1L), ((VECTOR(int8_t, 8))(0x15L)), 0x7EL)).sa, p_30)))) <= p_31) , 3UL) & 255UL) < p_31) > 0x7EL) < p_906->g_282) , p_33);
            if ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((p_30--), 5)), (((***l_423) &= ((void*)0 != l_619)) >= (safe_div_func_int16_t_s_s(p_906->g_262.f0.f8, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_906->g_622.s2015)).yyzzyxwx)).s3))))), ((void*)0 != &p_906->g_187))), ((p_906->g_420[0].f0.f8 , (((l_623 , &p_906->g_187) != (p_906->g_627 = (p_906->g_626 = ((*l_625) = l_624)))) | 1UL)) <= l_628))))
            { /* block id: 297 */
                int32_t *l_629 = &p_906->g_53;
                l_630 = l_629;
                (*p_906->g_261) = (*p_906->g_261);
                for (p_906->g_107 = 0; (p_906->g_107 == 23); p_906->g_107 = safe_add_func_uint16_t_u_u(p_906->g_107, 3))
                { /* block id: 302 */
                    (*l_593) = (*p_906->g_579);
                }
            }
            else
            { /* block id: 305 */
                struct S1 **l_634 = &l_633;
                int32_t l_644 = 1L;
                int16_t *l_645 = (void*)0;
                int16_t *l_646 = (void*)0;
                int16_t *l_647 = &p_906->g_187;
                VECTOR(int8_t, 8) l_648 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x3AL), 0x3AL), 0x3AL, (-1L), 0x3AL);
                VECTOR(int8_t, 4) l_649 = (VECTOR(int8_t, 4))(0x3BL, (VECTOR(int8_t, 2))(0x3BL, 0x63L), 0x63L);
                int32_t l_659 = (-10L);
                int32_t l_660[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                uint16_t **l_664 = (void*)0;
                uint16_t l_724 = 0x9927L;
                int i;
                (*l_634) = l_633;
                if (((((((safe_sub_func_int64_t_s_s(((**p_906->g_413) , ((safe_mul_func_int16_t_s_s(p_32, (safe_lshift_func_int8_t_s_s((((l_644 = ((+((&p_31 == &p_906->g_161) >= (safe_sub_func_int16_t_s_s((((safe_unary_minus_func_int16_t_s(((*l_647) &= l_644))) >= (0xF4L && ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_648.s7157)).lo)).xyyx, ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 16))(p_906->g_185, ((VECTOR(int8_t, 8))(l_649.yyxwwwzw)), (l_650 , ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(p_906->g_651.yyyy)).odd, ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(1L, 0x50L)).yxyyyxxx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x00L, 0L, 5L, (-1L), (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((p_906->g_218.s7 = (((void*)0 != &p_906->g_262) != 0x60L)), p_30)), 14)) > p_33), 1UL)), ((VECTOR(int8_t, 8))(0x20L)), ((VECTOR(int8_t, 2))((-1L))), 0x49L)).s3e)).yxyxxyxy))).s44, ((VECTOR(int8_t, 2))((-1L)))))).hi), p_906->g_88.f0, ((VECTOR(int8_t, 4))(0x71L)), 0x60L)), (int8_t)l_658, (int8_t)0x19L))).s701a))).z)) < FAKE_DIVERGE(p_906->local_0_offset, get_local_id(0), 10)), p_906->g_282)))) > p_32)) ^ 0x7C58L) , 0x61L), p_33)))) ^ 0x30F6F8EEL)), p_906->g_401.x)) , p_31) , (**l_423)) != (*p_906->g_413)) || (*p_906->g_118)) != (*p_906->g_118)))
                { /* block id: 310 */
                    uint16_t ***l_668 = &l_664;
                    int32_t l_669 = 1L;
                    ++l_661;
                    (*l_668) = l_664;
                    if (l_669)
                        break;
                }
                else
                { /* block id: 314 */
                    if ((atomic_inc(&p_906->l_atomic_input[18]) == 4))
                    { /* block id: 316 */
                        uint16_t l_670 = 1UL;
                        int32_t l_671 = 0L;
                        struct S5 l_672[5][5][5] = {{{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}}},{{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}}},{{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}}},{{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}}},{{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}},{{{5UL},1UL},{{65527UL},0x7295D147L},{{7UL},0UL},{{7UL},0UL},{{65527UL},0x7295D147L}}}};
                        struct S5 l_673 = {{0x182CL},0x60DBFC31L};/* VOLATILE GLOBAL l_673 */
                        int i, j, k;
                        l_671 = l_670;
                        l_673 = l_672[1][2][2];
                        unsigned int result = 0;
                        result += l_670;
                        result += l_671;
                        int l_672_i0, l_672_i1, l_672_i2;
                        for (l_672_i0 = 0; l_672_i0 < 5; l_672_i0++) {
                            for (l_672_i1 = 0; l_672_i1 < 5; l_672_i1++) {
                                for (l_672_i2 = 0; l_672_i2 < 5; l_672_i2++) {
                                    result += l_672[l_672_i0][l_672_i1][l_672_i2].f0.f0;
                                    result += l_672[l_672_i0][l_672_i1][l_672_i2].f1;
                                }
                            }
                        }
                        result += l_673.f0.f0;
                        result += l_673.f1;
                        atomic_add(&p_906->l_special_values[18], result);
                    }
                    else
                    { /* block id: 319 */
                        (1 + 1);
                    }
                    if ((atomic_inc(&p_906->l_atomic_input[14]) == 6))
                    { /* block id: 323 */
                        VECTOR(int32_t, 16) l_674 = (VECTOR(int32_t, 16))(0x6F920425L, (VECTOR(int32_t, 4))(0x6F920425L, (VECTOR(int32_t, 2))(0x6F920425L, 0x5BE32BA4L), 0x5BE32BA4L), 0x5BE32BA4L, 0x6F920425L, 0x5BE32BA4L, (VECTOR(int32_t, 2))(0x6F920425L, 0x5BE32BA4L), (VECTOR(int32_t, 2))(0x6F920425L, 0x5BE32BA4L), 0x6F920425L, 0x5BE32BA4L, 0x6F920425L, 0x5BE32BA4L);
                        VECTOR(int32_t, 8) l_675 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-7L)), (-7L)), (-7L), (-1L), (-7L));
                        VECTOR(int32_t, 2) l_676 = (VECTOR(int32_t, 2))((-2L), 0x3D35B780L);
                        VECTOR(int32_t, 2) l_677 = (VECTOR(int32_t, 2))((-2L), 0x5AB18EFBL);
                        VECTOR(int32_t, 16) l_678 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 9L), 9L), 9L, 1L, 9L, (VECTOR(int32_t, 2))(1L, 9L), (VECTOR(int32_t, 2))(1L, 9L), 1L, 9L, 1L, 9L);
                        VECTOR(int32_t, 16) l_679 = (VECTOR(int32_t, 16))(0x27DA7803L, (VECTOR(int32_t, 4))(0x27DA7803L, (VECTOR(int32_t, 2))(0x27DA7803L, 0x40E36838L), 0x40E36838L), 0x40E36838L, 0x27DA7803L, 0x40E36838L, (VECTOR(int32_t, 2))(0x27DA7803L, 0x40E36838L), (VECTOR(int32_t, 2))(0x27DA7803L, 0x40E36838L), 0x27DA7803L, 0x40E36838L, 0x27DA7803L, 0x40E36838L);
                        VECTOR(int32_t, 4) l_680 = (VECTOR(int32_t, 4))(0x5456FD22L, (VECTOR(int32_t, 2))(0x5456FD22L, 0x336EC1D1L), 0x336EC1D1L);
                        uint8_t l_681 = 255UL;
                        int8_t l_682 = 0x5EL;
                        VECTOR(int32_t, 8) l_683 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1C8CEEBBL), 0x1C8CEEBBL), 0x1C8CEEBBL, (-1L), 0x1C8CEEBBL);
                        VECTOR(int32_t, 4) l_684 = (VECTOR(int32_t, 4))(0x662BA8CAL, (VECTOR(int32_t, 2))(0x662BA8CAL, (-2L)), (-2L));
                        uint32_t l_685 = 0UL;
                        int64_t l_686[5][1][7] = {{{(-1L),0x7C096DCC6A651EB8L,(-1L),(-1L),0x7C096DCC6A651EB8L,(-1L),(-1L)}},{{(-1L),0x7C096DCC6A651EB8L,(-1L),(-1L),0x7C096DCC6A651EB8L,(-1L),(-1L)}},{{(-1L),0x7C096DCC6A651EB8L,(-1L),(-1L),0x7C096DCC6A651EB8L,(-1L),(-1L)}},{{(-1L),0x7C096DCC6A651EB8L,(-1L),(-1L),0x7C096DCC6A651EB8L,(-1L),(-1L)}},{{(-1L),0x7C096DCC6A651EB8L,(-1L),(-1L),0x7C096DCC6A651EB8L,(-1L),(-1L)}}};
                        int16_t l_687 = 0x1ABFL;
                        VECTOR(int16_t, 4) l_688 = (VECTOR(int16_t, 4))(0x217BL, (VECTOR(int16_t, 2))(0x217BL, (-3L)), (-3L));
                        VECTOR(int16_t, 8) l_689 = (VECTOR(int16_t, 8))(0x30E6L, (VECTOR(int16_t, 4))(0x30E6L, (VECTOR(int16_t, 2))(0x30E6L, 0x1B00L), 0x1B00L), 0x1B00L, 0x30E6L, 0x1B00L);
                        int8_t l_690[4];
                        int16_t l_691[10][3] = {{9L,(-1L),0L},{9L,(-1L),0L},{9L,(-1L),0L},{9L,(-1L),0L},{9L,(-1L),0L},{9L,(-1L),0L},{9L,(-1L),0L},{9L,(-1L),0L},{9L,(-1L),0L},{9L,(-1L),0L}};
                        uint16_t l_692 = 65527UL;
                        VECTOR(int8_t, 16) l_693 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int8_t, 2))(1L, 0L), (VECTOR(int8_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                        VECTOR(int8_t, 2) l_694 = (VECTOR(int8_t, 2))(0x10L, 0x10L);
                        uint16_t l_695[6][1] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
                        uint8_t l_696 = 0xD4L;
                        uint32_t l_697 = 4294967295UL;
                        int64_t l_698[10][2] = {{1L,0x7A63F18553F9F0DEL},{1L,0x7A63F18553F9F0DEL},{1L,0x7A63F18553F9F0DEL},{1L,0x7A63F18553F9F0DEL},{1L,0x7A63F18553F9F0DEL},{1L,0x7A63F18553F9F0DEL},{1L,0x7A63F18553F9F0DEL},{1L,0x7A63F18553F9F0DEL},{1L,0x7A63F18553F9F0DEL},{1L,0x7A63F18553F9F0DEL}};
                        int32_t l_699 = 0x67926F5BL;
                        int32_t l_700 = 0x4D6063C5L;
                        uint32_t l_701 = 0x85EF642CL;
                        int32_t l_702 = 4L;
                        int64_t l_703 = 0x7F89FD2C9ACEFDCAL;
                        uint64_t l_704[1][7][9] = {{{0xC68E7668A0E106C5L,0x1FB188C120ED811EL,0x7188E422897F829CL,0xC68E7668A0E106C5L,5UL,0x7188E422897F829CL,0x7188E422897F829CL,5UL,0xC68E7668A0E106C5L},{0xC68E7668A0E106C5L,0x1FB188C120ED811EL,0x7188E422897F829CL,0xC68E7668A0E106C5L,5UL,0x7188E422897F829CL,0x7188E422897F829CL,5UL,0xC68E7668A0E106C5L},{0xC68E7668A0E106C5L,0x1FB188C120ED811EL,0x7188E422897F829CL,0xC68E7668A0E106C5L,5UL,0x7188E422897F829CL,0x7188E422897F829CL,5UL,0xC68E7668A0E106C5L},{0xC68E7668A0E106C5L,0x1FB188C120ED811EL,0x7188E422897F829CL,0xC68E7668A0E106C5L,5UL,0x7188E422897F829CL,0x7188E422897F829CL,5UL,0xC68E7668A0E106C5L},{0xC68E7668A0E106C5L,0x1FB188C120ED811EL,0x7188E422897F829CL,0xC68E7668A0E106C5L,5UL,0x7188E422897F829CL,0x7188E422897F829CL,5UL,0xC68E7668A0E106C5L},{0xC68E7668A0E106C5L,0x1FB188C120ED811EL,0x7188E422897F829CL,0xC68E7668A0E106C5L,5UL,0x7188E422897F829CL,0x7188E422897F829CL,5UL,0xC68E7668A0E106C5L},{0xC68E7668A0E106C5L,0x1FB188C120ED811EL,0x7188E422897F829CL,0xC68E7668A0E106C5L,5UL,0x7188E422897F829CL,0x7188E422897F829CL,5UL,0xC68E7668A0E106C5L}}};
                        union U7 *l_705 = (void*)0;
                        union U7 l_707[9][3][4] = {{{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}}},{{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}}},{{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}}},{{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}}},{{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}}},{{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}}},{{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}}},{{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}}},{{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}},{{0xA6L},{4UL},{0x45L},{6UL}}}};
                        union U7 *l_706 = &l_707[6][2][2];
                        union U7 *l_708 = &l_707[6][2][2];
                        uint8_t l_709 = 0x7AL;
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_690[i] = 0x7EL;
                        l_704[0][6][2] ^= (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 8))(l_674.sca5c4bfd)).s1172420403757205, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_675.s7036724250006652)))), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(l_676.xy)).xxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_677.xyxxxxyy)).s00)).lo, 1L, 5L, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_678.s4255887e)))).s7706331137264623)).sbb)), 0x0E805412L, (-1L))).lo))).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x333E13D4L, (-7L), 0x1BAC724BL, 1L)).zwzzwzzxzzywzyww)).sb9, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_679.s5f17d943)).s15)), ((VECTOR(int32_t, 2))(0x1B51105BL, (-1L)))))), 4L, ((VECTOR(int32_t, 2))(l_680.zx)), (-9L), 0x4B41CAAFL, 1L)).s63))).xyyyyxyyxxxyxyxy, ((VECTOR(int32_t, 16))(l_681, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x6F8A165DL, 0x4E88F45AL, ((VECTOR(int32_t, 8))(l_682, 0x189AE111L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_683.s66006630)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_684.xw)).xxxxyxxyyxyyyyxy)))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x71CB59F3L, 0x2BEC01EBL)), 0x4361F8EAL, (-9L), l_685, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))((l_687 = l_686[4][0][3]), 1L, 0x3B13L, ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-8L), 0x06DAL)).yxyy)).wywwzzywyyzxzyyy, ((VECTOR(int16_t, 4))(l_688.yzwy)).wwzyyzxxzwwxyyxz))).s4, ((VECTOR(int16_t, 8))(l_689.s64226716)).s4, l_690[3], (l_692 ^= l_691[0][0]), ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(0x1F3BL, 0x2E08L, (l_689.s1 |= ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(l_693.sf4343351)).odd, ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_694.xy)).xyyyyyyxyxyyxxyx)).s65))).yxxy))).yywyzyzz)).s7712427460506166, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(0L, (-1L), 0x6DL, 0x0DL)).lo, ((VECTOR(int8_t, 8))(l_695[5][0], ((VECTOR(int8_t, 2))((-1L))), l_696, l_697, 0L, (-1L), 9L)).s75))).yxyxyyyxyxyxxyyy))).scde1, (int8_t)0x1FL, (int8_t)l_698[8][0]))), ((VECTOR(uint8_t, 4))(0x3EL))))).hi, (int16_t)l_699))).xyxx, ((VECTOR(int16_t, 4))(0x5549L))))).z), ((VECTOR(int16_t, 8))(9L)), 0x4377L, ((VECTOR(int16_t, 4))(0x2BD8L)))).odd, ((VECTOR(int16_t, 8))(0x4830L))))), 3L)).even, ((VECTOR(uint16_t, 8))(0UL))))), (int32_t)l_700))).hi)).hi, ((VECTOR(int32_t, 2))(0x0CE6D2CBL)), ((VECTOR(int32_t, 2))(0x3C0753ABL))))), 0x0068BE96L)).s1771721133104710))))), ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))((-1L)))))).s05)).xxxyxyxyyyxxyxxx)).sbeeb, ((VECTOR(int32_t, 4))(0L))))))), ((VECTOR(int32_t, 4))(3L)), l_701, ((VECTOR(int32_t, 2))(0x2105E455L)), ((VECTOR(int32_t, 2))(0x14E8078CL)), ((VECTOR(int32_t, 2))(8L)), 0x0947600CL)).sce, ((VECTOR(int32_t, 2))(0x4309B577L))))).yyxyyyyy, ((VECTOR(int32_t, 8))(7L)), ((VECTOR(int32_t, 8))((-3L)))))))))).s78, ((VECTOR(int32_t, 2))((-6L))), ((VECTOR(int32_t, 2))(2L))))).xxyx)), 4L, 0x45ABD03EL)).s3, ((VECTOR(int32_t, 4))(0x551BB75CL)), 0L)), l_702, ((VECTOR(int32_t, 2))((-1L))), 0x2FFEE9ECL, (-3L), 0x7AFCEC1AL, (-9L), (-7L))).hi)), 1L, 0x0447849BL, 9L, (-10L), l_703, (-1L), 0x63D3A283L)))))))).s5d)).odd , 0x4144733CL);
                        l_708 = (l_706 = l_705);
                        l_709 = 0x1B4E3431L;
                        unsigned int result = 0;
                        result += l_674.sf;
                        result += l_674.se;
                        result += l_674.sd;
                        result += l_674.sc;
                        result += l_674.sb;
                        result += l_674.sa;
                        result += l_674.s9;
                        result += l_674.s8;
                        result += l_674.s7;
                        result += l_674.s6;
                        result += l_674.s5;
                        result += l_674.s4;
                        result += l_674.s3;
                        result += l_674.s2;
                        result += l_674.s1;
                        result += l_674.s0;
                        result += l_675.s7;
                        result += l_675.s6;
                        result += l_675.s5;
                        result += l_675.s4;
                        result += l_675.s3;
                        result += l_675.s2;
                        result += l_675.s1;
                        result += l_675.s0;
                        result += l_676.y;
                        result += l_676.x;
                        result += l_677.y;
                        result += l_677.x;
                        result += l_678.sf;
                        result += l_678.se;
                        result += l_678.sd;
                        result += l_678.sc;
                        result += l_678.sb;
                        result += l_678.sa;
                        result += l_678.s9;
                        result += l_678.s8;
                        result += l_678.s7;
                        result += l_678.s6;
                        result += l_678.s5;
                        result += l_678.s4;
                        result += l_678.s3;
                        result += l_678.s2;
                        result += l_678.s1;
                        result += l_678.s0;
                        result += l_679.sf;
                        result += l_679.se;
                        result += l_679.sd;
                        result += l_679.sc;
                        result += l_679.sb;
                        result += l_679.sa;
                        result += l_679.s9;
                        result += l_679.s8;
                        result += l_679.s7;
                        result += l_679.s6;
                        result += l_679.s5;
                        result += l_679.s4;
                        result += l_679.s3;
                        result += l_679.s2;
                        result += l_679.s1;
                        result += l_679.s0;
                        result += l_680.w;
                        result += l_680.z;
                        result += l_680.y;
                        result += l_680.x;
                        result += l_681;
                        result += l_682;
                        result += l_683.s7;
                        result += l_683.s6;
                        result += l_683.s5;
                        result += l_683.s4;
                        result += l_683.s3;
                        result += l_683.s2;
                        result += l_683.s1;
                        result += l_683.s0;
                        result += l_684.w;
                        result += l_684.z;
                        result += l_684.y;
                        result += l_684.x;
                        result += l_685;
                        int l_686_i0, l_686_i1, l_686_i2;
                        for (l_686_i0 = 0; l_686_i0 < 5; l_686_i0++) {
                            for (l_686_i1 = 0; l_686_i1 < 1; l_686_i1++) {
                                for (l_686_i2 = 0; l_686_i2 < 7; l_686_i2++) {
                                    result += l_686[l_686_i0][l_686_i1][l_686_i2];
                                }
                            }
                        }
                        result += l_687;
                        result += l_688.w;
                        result += l_688.z;
                        result += l_688.y;
                        result += l_688.x;
                        result += l_689.s7;
                        result += l_689.s6;
                        result += l_689.s5;
                        result += l_689.s4;
                        result += l_689.s3;
                        result += l_689.s2;
                        result += l_689.s1;
                        result += l_689.s0;
                        int l_690_i0;
                        for (l_690_i0 = 0; l_690_i0 < 4; l_690_i0++) {
                            result += l_690[l_690_i0];
                        }
                        int l_691_i0, l_691_i1;
                        for (l_691_i0 = 0; l_691_i0 < 10; l_691_i0++) {
                            for (l_691_i1 = 0; l_691_i1 < 3; l_691_i1++) {
                                result += l_691[l_691_i0][l_691_i1];
                            }
                        }
                        result += l_692;
                        result += l_693.sf;
                        result += l_693.se;
                        result += l_693.sd;
                        result += l_693.sc;
                        result += l_693.sb;
                        result += l_693.sa;
                        result += l_693.s9;
                        result += l_693.s8;
                        result += l_693.s7;
                        result += l_693.s6;
                        result += l_693.s5;
                        result += l_693.s4;
                        result += l_693.s3;
                        result += l_693.s2;
                        result += l_693.s1;
                        result += l_693.s0;
                        result += l_694.y;
                        result += l_694.x;
                        int l_695_i0, l_695_i1;
                        for (l_695_i0 = 0; l_695_i0 < 6; l_695_i0++) {
                            for (l_695_i1 = 0; l_695_i1 < 1; l_695_i1++) {
                                result += l_695[l_695_i0][l_695_i1];
                            }
                        }
                        result += l_696;
                        result += l_697;
                        int l_698_i0, l_698_i1;
                        for (l_698_i0 = 0; l_698_i0 < 10; l_698_i0++) {
                            for (l_698_i1 = 0; l_698_i1 < 2; l_698_i1++) {
                                result += l_698[l_698_i0][l_698_i1];
                            }
                        }
                        result += l_699;
                        result += l_700;
                        result += l_701;
                        result += l_702;
                        result += l_703;
                        int l_704_i0, l_704_i1, l_704_i2;
                        for (l_704_i0 = 0; l_704_i0 < 1; l_704_i0++) {
                            for (l_704_i1 = 0; l_704_i1 < 7; l_704_i1++) {
                                for (l_704_i2 = 0; l_704_i2 < 9; l_704_i2++) {
                                    result += l_704[l_704_i0][l_704_i1][l_704_i2];
                                }
                            }
                        }
                        int l_707_i0, l_707_i1, l_707_i2;
                        for (l_707_i0 = 0; l_707_i0 < 9; l_707_i0++) {
                            for (l_707_i1 = 0; l_707_i1 < 3; l_707_i1++) {
                                for (l_707_i2 = 0; l_707_i2 < 4; l_707_i2++) {
                                    result += l_707[l_707_i0][l_707_i1][l_707_i2].f0;
                                }
                            }
                        }
                        result += l_709;
                        atomic_add(&p_906->l_special_values[14], result);
                    }
                    else
                    { /* block id: 331 */
                        (1 + 1);
                    }
                    return l_660[5];
                }
                for (p_906->g_599.f0.f8 = (-3); (p_906->g_599.f0.f8 == 30); p_906->g_599.f0.f8++)
                { /* block id: 338 */
                    int32_t l_719 = 0x45BE56D9L;
                    int32_t l_720 = 0L;
                    int32_t l_723 = 0x1DD23ECDL;
                    (*p_906->g_118) &= ((VECTOR(int32_t, 16))(p_906->g_712.s0515235431051431)).s2;
                    for (p_33 = 6; (p_33 <= (-17)); p_33 = safe_sub_func_int32_t_s_s(p_33, 3))
                    { /* block id: 342 */
                        return l_649.z;
                    }
                    if (p_33)
                        break;
                    for (p_906->g_112 = (-26); (p_906->g_112 < 50); p_906->g_112++)
                    { /* block id: 348 */
                        int32_t l_717 = 0x26C0D2C0L;
                        int32_t l_718 = (-1L);
                        int32_t l_721 = 0x31D90D83L;
                        int32_t l_722 = (-1L);
                        --l_724;
                        if ((**p_906->g_579))
                            continue;
                    }
                }
            }
            (*p_906->g_728) = p_906->g_727;
        }
    }
    return p_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_906->g_43 p_906->g_45
 * writes: p_906->g_43
 */
uint16_t  func_39(int64_t  p_40, int64_t  p_41, struct S8 * p_906)
{ /* block id: 8 */
    struct S0 *l_44 = (void*)0;
    VECTOR(int32_t, 4) l_46 = (VECTOR(int32_t, 4))(0x518F82EAL, (VECTOR(int32_t, 2))(0x518F82EAL, 0x77C83BE7L), 0x77C83BE7L);
    int32_t l_47 = 0x3758C9E4L;
    int i;
    (*p_906->g_45) = p_906->g_43;
    l_47 |= ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_46.zxxyywwwwxyzzyzy)).s6d29, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0x5830AF36L, 1L)).xyyyxxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x71DA89A0L, 0L)), 0L, 0x471B2A12L)).yyyzyxxx))).odd, ((VECTOR(int32_t, 2))((-1L), 0x2C961F9DL)).xyyx))).x;
    return p_906->g_43.f0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_906->g_53
 */
int64_t  func_49(uint32_t  p_50, struct S8 * p_906)
{ /* block id: 12 */
    uint64_t **l_359 = (void*)0;
    VECTOR(uint8_t, 16) l_366 = (VECTOR(uint8_t, 16))(0x5EL, (VECTOR(uint8_t, 4))(0x5EL, (VECTOR(uint8_t, 2))(0x5EL, 0xAEL), 0xAEL), 0xAEL, 0x5EL, 0xAEL, (VECTOR(uint8_t, 2))(0x5EL, 0xAEL), (VECTOR(uint8_t, 2))(0x5EL, 0xAEL), 0x5EL, 0xAEL, 0x5EL, 0xAEL);
    int16_t l_367 = 5L;
    uint64_t l_374 = 1UL;
    VECTOR(int16_t, 4) l_400 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x662BL), 0x662BL);
    VECTOR(int16_t, 8) l_403 = (VECTOR(int16_t, 8))(0x5191L, (VECTOR(int16_t, 4))(0x5191L, (VECTOR(int16_t, 2))(0x5191L, (-1L)), (-1L)), (-1L), 0x5191L, (-1L));
    VECTOR(int16_t, 4) l_404 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L);
    VECTOR(int16_t, 4) l_407 = (VECTOR(int16_t, 4))(0x2342L, (VECTOR(int16_t, 2))(0x2342L, 0x60F6L), 0x60F6L);
    int i;
    for (p_50 = (-28); (p_50 != 20); ++p_50)
    { /* block id: 15 */
        uint32_t *l_58 = &p_906->g_59[1];
        int32_t *l_342 = &p_906->g_65[3];
        struct S3 l_379 = {1L};
        uint64_t **l_389 = &p_906->g_358[5];
        uint64_t ***l_390 = &p_906->g_357;
        VECTOR(int16_t, 8) l_398 = (VECTOR(int16_t, 8))(0x48AFL, (VECTOR(int16_t, 4))(0x48AFL, (VECTOR(int16_t, 2))(0x48AFL, 0x7B9CL), 0x7B9CL), 0x7B9CL, 0x48AFL, 0x7B9CL);
        uint8_t **l_412[2];
        uint8_t ***l_411[2];
        uint16_t l_414 = 1UL;
        int8_t l_415 = 0x08L;
        uint16_t *l_416 = (void*)0;
        uint16_t *l_417 = &l_414;
        int i;
        for (i = 0; i < 2; i++)
            l_412[i] = &p_906->g_111;
        for (i = 0; i < 2; i++)
            l_411[i] = &l_412[1];
        for (p_906->g_53 = (-22); (p_906->g_53 < 29); ++p_906->g_53)
        { /* block id: 18 */
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_906->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_906->global_2_offset, get_global_id(2), 10), 10))][(safe_mod_func_uint32_t_u_u(p_906->tid, 2))]));
        }
    }
    return p_50;
}


/* ------------------------------------------ */
/* 
 * reads : p_906->g_53 p_906->g_comm_values p_906->g_79 p_906->l_comm_values p_906->g_111 p_906->g_109 p_906->g_137 p_906->g_107 p_906->g_112 p_906->g_65 p_906->g_118 p_906->g_187 p_906->g_59 p_906->g_188 p_906->g_136 p_906->g_159
 * writes: p_906->g_53 p_906->g_65 p_906->g_109 p_906->g_118 p_906->g_136 p_906->g_137 p_906->g_107 p_906->g_185 p_906->g_187 p_906->g_188
 */
int32_t  func_56(uint32_t  p_57, struct S8 * p_906)
{ /* block id: 24 */
    int8_t l_62 = 0x0DL;
    int32_t *l_63 = (void*)0;
    int32_t l_67 = 0x5007C168L;
    int32_t l_68 = 0x5893B252L;
    int32_t l_69 = 0x5E00DC0FL;
    int32_t l_70 = 1L;
    int32_t l_71[10][5][5] = {{{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)}},{{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)}},{{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)}},{{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)}},{{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)}},{{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)}},{{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)}},{{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)}},{{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)}},{{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)},{0x49D3CD2FL,0x2A934B7DL,(-3L),0L,(-4L)}}};
    uint8_t *l_99 = (void*)0;
    uint8_t **l_100 = &l_99;
    struct S0 *l_101 = (void*)0;
    uint16_t *l_106[2][10] = {{&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107},{&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107,&p_906->g_107}};
    int32_t *l_108[6] = {&l_68,&p_906->g_53,&l_68,&l_68,&p_906->g_53,&l_68};
    int32_t **l_180 = &l_63;
    int32_t l_199 = 0x527EC4DDL;
    VECTOR(uint64_t, 16) l_213 = (VECTOR(uint64_t, 16))(0x965B400E7F460535L, (VECTOR(uint64_t, 4))(0x965B400E7F460535L, (VECTOR(uint64_t, 2))(0x965B400E7F460535L, 0UL), 0UL), 0UL, 0x965B400E7F460535L, 0UL, (VECTOR(uint64_t, 2))(0x965B400E7F460535L, 0UL), (VECTOR(uint64_t, 2))(0x965B400E7F460535L, 0UL), 0x965B400E7F460535L, 0UL, 0x965B400E7F460535L, 0UL);
    VECTOR(int16_t, 16) l_248 = (VECTOR(int16_t, 16))(0x4F89L, (VECTOR(int16_t, 4))(0x4F89L, (VECTOR(int16_t, 2))(0x4F89L, 0x0EEBL), 0x0EEBL), 0x0EEBL, 0x4F89L, 0x0EEBL, (VECTOR(int16_t, 2))(0x4F89L, 0x0EEBL), (VECTOR(int16_t, 2))(0x4F89L, 0x0EEBL), 0x4F89L, 0x0EEBL, 0x4F89L, 0x0EEBL);
    uint32_t *l_273 = &p_906->g_59[1];
    VECTOR(int16_t, 2) l_324 = (VECTOR(int16_t, 2))((-3L), 0x58ABL);
    int32_t l_333 = 1L;
    int i, j, k;
    for (p_906->g_53 = 12; (p_906->g_53 != (-15)); --p_906->g_53)
    { /* block id: 27 */
        int32_t *l_64 = &p_906->g_65[5];
        int32_t *l_66[7][6][6] = {{{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]}},{{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]}},{{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]}},{{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]}},{{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]}},{{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]}},{{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]},{&p_906->g_65[5],&p_906->g_65[2],&p_906->g_65[5],&p_906->g_65[4],&p_906->g_65[4],&p_906->g_65[5]}}};
        uint32_t l_72[4][5][6] = {{{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL}},{{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL}},{{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL}},{{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL},{1UL,0xF478804CL,0UL,0x68AD1B2BL,1UL,4294967295UL}}};
        int i, j, k;
        if (l_62)
            break;
        l_63 = (void*)0;
        l_72[3][3][4]++;
    }
    if ((p_906->g_109 = (((p_906->g_comm_values[p_906->tid] || (p_906->g_65[3] = ((l_71[5][2][4] = func_75(p_906->g_79[4][1], ((*l_100) = l_99), ((+((!p_57) != p_57)) , l_101), p_906)) <= p_906->g_comm_values[p_906->tid]))) , &p_57) != &p_906->g_59[2])))
    { /* block id: 43 */
        uint8_t **l_110 = &l_99;
        int32_t l_113 = 0L;
        struct S3 *l_140 = (void*)0;
        VECTOR(int8_t, 8) l_164 = (VECTOR(int8_t, 8))(0x63L, (VECTOR(int8_t, 4))(0x63L, (VECTOR(int8_t, 2))(0x63L, (-8L)), (-8L)), (-8L), 0x63L, (-8L));
        int32_t **l_178 = &l_63;
        uint64_t l_189 = 18446744073709551615UL;
        int32_t l_196 = 0x5D0CD89FL;
        int32_t l_197 = 0x230BC3B0L;
        int32_t l_198 = 0L;
        int16_t l_200[2];
        int32_t l_202 = 0L;
        int32_t l_203 = 1L;
        int32_t l_208 = 0x7D1AB546L;
        int32_t l_209[5][2][10] = {{{0x59F67356L,(-8L),(-1L),0x23CEED60L,0x66F2683EL,0x23CEED60L,(-1L),(-8L),0x59F67356L,(-1L)},{0x59F67356L,(-8L),(-1L),0x23CEED60L,0x66F2683EL,0x23CEED60L,(-1L),(-8L),0x59F67356L,(-1L)}},{{0x59F67356L,(-8L),(-1L),0x23CEED60L,0x66F2683EL,0x23CEED60L,(-1L),(-8L),0x59F67356L,(-1L)},{0x59F67356L,(-8L),(-1L),0x23CEED60L,0x66F2683EL,0x23CEED60L,(-1L),(-8L),0x59F67356L,(-1L)}},{{0x59F67356L,(-8L),(-1L),0x23CEED60L,0x66F2683EL,0x23CEED60L,(-1L),(-8L),0x59F67356L,(-1L)},{0x59F67356L,(-8L),(-1L),0x23CEED60L,0x66F2683EL,0x23CEED60L,(-1L),(-8L),0x59F67356L,(-1L)}},{{0x59F67356L,(-8L),(-1L),0x23CEED60L,0x66F2683EL,0x23CEED60L,(-1L),(-8L),0x59F67356L,(-1L)},{0x59F67356L,(-8L),(-1L),0x23CEED60L,0x66F2683EL,0x23CEED60L,(-1L),(-8L),0x59F67356L,(-1L)}},{{0x59F67356L,(-8L),(-1L),0x23CEED60L,0x66F2683EL,0x23CEED60L,(-1L),(-8L),0x59F67356L,(-1L)},{0x59F67356L,(-8L),(-1L),0x23CEED60L,0x66F2683EL,0x23CEED60L,(-1L),(-8L),0x59F67356L,(-1L)}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_200[i] = 0x5A0FL;
        if (((&l_99 != l_110) , (p_906->l_comm_values[(safe_mod_func_uint32_t_u_u(p_906->tid, 2))] || (p_906->g_111 == ((*l_110) = ((p_906->l_comm_values[(safe_mod_func_uint32_t_u_u(p_906->tid, 2))] >= l_113) , (*l_110)))))))
        { /* block id: 45 */
            uint8_t l_145 = 255UL;
            struct S0 *l_167[7][1] = {{&p_906->g_169[3][0]},{&p_906->g_169[3][0]},{&p_906->g_169[3][0]},{&p_906->g_169[3][0]},{&p_906->g_169[3][0]},{&p_906->g_169[3][0]},{&p_906->g_169[3][0]}};
            uint32_t l_172 = 0x487F612EL;
            int32_t **l_177 = &p_906->g_118;
            int32_t ***l_179 = &l_178;
            uint8_t *l_181 = (void*)0;
            uint8_t *l_182[2];
            int32_t l_183 = 9L;
            int64_t *l_184 = &p_906->g_185;
            int16_t *l_186 = &p_906->g_187;
            int i, j;
            for (i = 0; i < 2; i++)
                l_182[i] = &l_145;
            for (l_69 = 0; (l_69 <= 6); ++l_69)
            { /* block id: 48 */
                VECTOR(uint8_t, 8) l_123 = (VECTOR(uint8_t, 8))(0xF8L, (VECTOR(uint8_t, 4))(0xF8L, (VECTOR(uint8_t, 2))(0xF8L, 255UL), 255UL), 255UL, 0xF8L, 255UL);
                uint32_t *l_160 = &p_906->g_161;
                struct S0 **l_171[1][6][8] = {{{(void*)0,&p_906->g_79[4][3],(void*)0,&l_101,&l_167[4][0],(void*)0,&l_101,&l_167[2][0]},{(void*)0,&p_906->g_79[4][3],(void*)0,&l_101,&l_167[4][0],(void*)0,&l_101,&l_167[2][0]},{(void*)0,&p_906->g_79[4][3],(void*)0,&l_101,&l_167[4][0],(void*)0,&l_101,&l_167[2][0]},{(void*)0,&p_906->g_79[4][3],(void*)0,&l_101,&l_167[4][0],(void*)0,&l_101,&l_167[2][0]},{(void*)0,&p_906->g_79[4][3],(void*)0,&l_101,&l_167[4][0],(void*)0,&l_101,&l_167[2][0]},{(void*)0,&p_906->g_79[4][3],(void*)0,&l_101,&l_167[4][0],(void*)0,&l_101,&l_167[2][0]}}};
                int i, j, k;
                for (p_906->g_53 = 4; (p_906->g_53 <= (-15)); p_906->g_53 = safe_sub_func_int8_t_s_s(p_906->g_53, 1))
                { /* block id: 51 */
                    uint32_t l_130 = 0x7385A9E9L;
                    uint64_t *l_135[7][6] = {{&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109},{&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109},{&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109},{&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109},{&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109},{&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109},{&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109,&p_906->g_109}};
                    struct S3 **l_139 = &p_906->g_137;
                    uint32_t *l_143 = (void*)0;
                    int32_t l_144 = 5L;
                    int i, j;
                    if (p_57)
                        break;
                    p_906->g_118 = &p_906->g_53;
                    l_113 &= (p_906->g_109 & ((safe_sub_func_int32_t_s_s((((l_144 = ((((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(l_123.s50)).odd, 3)) < ((safe_sub_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(4L, (l_130 & (0L >= (safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_s((((-1L) != (p_906->g_136.s2 = ((VECTOR(uint64_t, 2))(0x126E95B7E0EDF683L, 1UL)).even)) < (((*l_139) = p_906->g_137) == l_140)), 7)) , (safe_lshift_func_uint16_t_u_u((p_906->g_107 |= 65529UL), 6))) != 1L), (*p_906->g_111))))))), 1UL)) && p_906->g_65[4]), p_57)) , l_123.s7)) , 0L) | p_57)) | (*p_906->g_118)) , 3L), l_130)) ^ l_145));
                    if ((atomic_inc(&p_906->l_atomic_input[6]) == 5))
                    { /* block id: 60 */
                        int16_t l_146 = (-4L);
                        int32_t l_147[1];
                        uint32_t l_148 = 9UL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_147[i] = 0x6F99F4FEL;
                        l_148++;
                        unsigned int result = 0;
                        result += l_146;
                        int l_147_i0;
                        for (l_147_i0 = 0; l_147_i0 < 1; l_147_i0++) {
                            result += l_147[l_147_i0];
                        }
                        result += l_148;
                        atomic_add(&p_906->l_special_values[6], result);
                    }
                    else
                    { /* block id: 62 */
                        (1 + 1);
                    }
                }
                if (p_57)
                    continue;
                p_906->g_65[3] |= (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(2UL, (l_123.s3 == ((l_113 = (*p_906->g_111)) | ((safe_add_func_uint8_t_u_u((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(p_906->g_159.sca2b82a31379ac75)), ((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 8))(248UL, (((((*l_160) ^= (&p_906->g_138 == &p_906->g_138)) , p_57) | (1L && (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_164.s1230670157532707)).lo)).s43, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((safe_mod_func_uint8_t_u_u(p_57, (((p_906->g_79[4][1] = l_167[4][0]) == (void*)0) & p_906->g_59[1]))), 0x05L, 0x68L, p_906->g_159.s7, ((VECTOR(int8_t, 4))(0x52L)))).lo)), ((VECTOR(int8_t, 4))((-1L)))))), ((VECTOR(int8_t, 4))((-9L))), ((VECTOR(int8_t, 4))((-8L)))))).even, ((VECTOR(int8_t, 2))(0L))))).yyyyxxyxyyyxyyxy, ((VECTOR(int8_t, 16))(5L)), ((VECTOR(int8_t, 16))(3L))))).s5, p_906->g_53)))) <= 0x3A90L), ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 4))(255UL)))), (uint8_t)(*p_906->g_111)))).s5174457246023131, ((VECTOR(uint8_t, 16))(0x8DL)), ((VECTOR(uint8_t, 16))(0x37L)))))))).s289f)), ((VECTOR(uint8_t, 4))(0x4CL)))).s0 > (*p_906->g_111)), 0x03L)) ^ 0xABF17A3B1E4C70D5L))))), 10)), 5));
            }
            p_906->g_188[0] &= ((l_172 == FAKE_DIVERGE(p_906->local_0_offset, get_local_id(0), 10)) , ((((safe_add_func_int8_t_s_s((p_57 || p_906->g_112), (((safe_mod_func_int64_t_s_s((((*l_186) ^= ((((*l_177) = (void*)0) == ((((p_906->g_53 &= 0x5C63001BL) >= GROUP_DIVERGE(1, 1)) || (((((p_57 | ((*l_184) = (((VECTOR(int16_t, 2))((-1L), 0x5225L)).even , ((p_57 && (l_183 = (((*l_179) = l_178) == l_180))) , 0x4981E7944D6970CDL)))) != p_57) >= l_164.s6) <= 0x69L) <= (-3L))) , (*l_180))) < p_906->g_65[5])) || p_57), p_906->g_59[0])) | 0x46FCL) ^ 9L))) < 5UL) < 0xEF9C9ED5L) >= l_164.s0));
            l_189 = p_906->g_136.s6;
        }
        else
        { /* block id: 80 */
            int16_t l_190 = 0x01FDL;
            int8_t l_191 = 0x46L;
            int32_t l_192 = (-1L);
            int32_t l_193 = 1L;
            int32_t l_194 = 0x1413A5F7L;
            int32_t l_195 = 1L;
            int32_t l_201 = 1L;
            int32_t l_204 = 0L;
            int32_t l_205 = 0L;
            int32_t l_206 = 0x5E647F0CL;
            int32_t l_207[9][7] = {{(-3L),0x4792F72FL,1L,(-3L),0x32B0C328L,(-3L),(-3L)},{(-3L),0x4792F72FL,1L,(-3L),0x32B0C328L,(-3L),(-3L)},{(-3L),0x4792F72FL,1L,(-3L),0x32B0C328L,(-3L),(-3L)},{(-3L),0x4792F72FL,1L,(-3L),0x32B0C328L,(-3L),(-3L)},{(-3L),0x4792F72FL,1L,(-3L),0x32B0C328L,(-3L),(-3L)},{(-3L),0x4792F72FL,1L,(-3L),0x32B0C328L,(-3L),(-3L)},{(-3L),0x4792F72FL,1L,(-3L),0x32B0C328L,(-3L),(-3L)},{(-3L),0x4792F72FL,1L,(-3L),0x32B0C328L,(-3L),(-3L)},{(-3L),0x4792F72FL,1L,(-3L),0x32B0C328L,(-3L),(-3L)}};
            uint8_t l_210 = 0x9FL;
            int i, j;
            l_113 ^= (*p_906->g_118);
            ++l_210;
            l_207[8][0] |= (*p_906->g_118);
        }
        return p_906->g_159.sf;
    }
    else
    { /* block id: 86 */
        int32_t l_237 = (-1L);
        uint8_t **l_242 = &p_906->g_111;
        uint16_t l_298 = 1UL;
        struct S3 **l_313 = &p_906->g_137;
        VECTOR(int16_t, 4) l_322 = (VECTOR(int16_t, 4))(0x198BL, (VECTOR(int16_t, 2))(0x198BL, 0x02F2L), 0x02F2L);
        int32_t l_327 = 0L;
        int32_t l_328 = 0x5BF9BB5AL;
        int32_t l_329 = (-7L);
        int32_t l_338 = 1L;
        int i;
        (*p_906->g_118) &= (((VECTOR(uint64_t, 8))(l_213.s499a69bf)).s5 && p_57);
        for (l_199 = 12; (l_199 != (-9)); l_199 = safe_sub_func_int8_t_s_s(l_199, 6))
        { /* block id: 90 */
            int16_t *l_229 = &p_906->g_187;
            int32_t *l_230 = &l_70;
            VECTOR(int8_t, 4) l_256 = (VECTOR(int8_t, 4))(0x77L, (VECTOR(int8_t, 2))(0x77L, 0x69L), 0x69L);
            int32_t l_259 = 0x749C7F3CL;
            uint64_t l_291 = 0xB86FFA968A6DDACAL;
            struct S3 **l_304 = &p_906->g_137;
            uint64_t l_310 = 0x743C2EFA90737FC2L;
            VECTOR(int16_t, 8) l_323 = (VECTOR(int16_t, 8))(0x480CL, (VECTOR(int16_t, 4))(0x480CL, (VECTOR(int16_t, 2))(0x480CL, 0x1B94L), 0x1B94L), 0x1B94L, 0x480CL, 0x1B94L);
            int32_t l_331 = 2L;
            int32_t l_332[1];
            int i;
            for (i = 0; i < 1; i++)
                l_332[i] = 0L;
            (1 + 1);
        }
        l_328 |= l_322.x;
    }
    (*l_180) = (*l_180);
    return (*p_906->g_118);
}


/* ------------------------------------------ */
/* 
 * reads : p_906->g_53
 * writes: p_906->g_53
 */
uint16_t  func_75(struct S0 * p_76, uint8_t * p_77, struct S0 * p_78, struct S8 * p_906)
{ /* block id: 33 */
    struct S3 l_104[7] = {{2L},{2L},{2L},{2L},{2L},{2L},{2L}};
    int i;
    for (p_906->g_53 = 0; (p_906->g_53 >= (-27)); p_906->g_53 = safe_sub_func_uint8_t_u_u(p_906->g_53, 7))
    { /* block id: 36 */
        struct S3 *l_105 = &l_104[4];
        (*l_105) = l_104[4];
    }
    return p_906->g_53;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[28];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 28; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[28];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 28; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S8 c_907;
    struct S8* p_906 = &c_907;
    struct S8 c_908 = {
        {{18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL}}, // p_906->g_9
        0xDAL, // p_906->g_11
        (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0x58L), 0x58L), // p_906->g_36
        {0UL}, // p_906->g_43
        &p_906->g_43, // p_906->g_45
        6L, // p_906->g_53
        {0x9E2267C8L,0x9E2267C8L,0x9E2267C8L}, // p_906->g_59
        {0x66C8CEE6L,0x66C8CEE6L,0x66C8CEE6L,0x66C8CEE6L,0x66C8CEE6L,0x66C8CEE6L}, // p_906->g_65
        {1UL}, // p_906->g_80
        {0UL}, // p_906->g_81
        {{65535UL}}, // p_906->g_82
        {{0UL},{0x433FL},{0UL},{0UL},{0x433FL},{0UL},{0UL},{0x433FL},{0UL}}, // p_906->g_83
        {0x1DD9L}, // p_906->g_84
        {65531UL}, // p_906->g_85
        {0x3B9BL}, // p_906->g_86
        {1UL}, // p_906->g_87
        {65535UL}, // p_906->g_88
        {0UL}, // p_906->g_89
        {0x7176L}, // p_906->g_90
        {0xB22AL}, // p_906->g_91
        {0x51C9L}, // p_906->g_92
        {65535UL}, // p_906->g_93
        {0xB315L}, // p_906->g_94
        {2UL}, // p_906->g_95
        {0x46F2L}, // p_906->g_96
        {0x531EL}, // p_906->g_97
        {{1UL},{65535UL},{1UL},{1UL},{65535UL},{1UL}}, // p_906->g_98
        {{&p_906->g_83[1],&p_906->g_91,&p_906->g_87,&p_906->g_91,&p_906->g_83[1],&p_906->g_83[1],&p_906->g_91,&p_906->g_87,&p_906->g_91},{&p_906->g_83[1],&p_906->g_91,&p_906->g_87,&p_906->g_91,&p_906->g_83[1],&p_906->g_83[1],&p_906->g_91,&p_906->g_87,&p_906->g_91},{&p_906->g_83[1],&p_906->g_91,&p_906->g_87,&p_906->g_91,&p_906->g_83[1],&p_906->g_83[1],&p_906->g_91,&p_906->g_87,&p_906->g_91},{&p_906->g_83[1],&p_906->g_91,&p_906->g_87,&p_906->g_91,&p_906->g_83[1],&p_906->g_83[1],&p_906->g_91,&p_906->g_87,&p_906->g_91},{&p_906->g_83[1],&p_906->g_91,&p_906->g_87,&p_906->g_91,&p_906->g_83[1],&p_906->g_83[1],&p_906->g_91,&p_906->g_87,&p_906->g_91}}, // p_906->g_79
        0UL, // p_906->g_107
        0x37B90CDC1F2F3EF5L, // p_906->g_109
        0x42L, // p_906->g_112
        &p_906->g_112, // p_906->g_111
        &p_906->g_65[5], // p_906->g_118
        (VECTOR(uint64_t, 8))(0xF6353B77AA8E5AB0L, (VECTOR(uint64_t, 4))(0xF6353B77AA8E5AB0L, (VECTOR(uint64_t, 2))(0xF6353B77AA8E5AB0L, 7UL), 7UL), 7UL, 0xF6353B77AA8E5AB0L, 7UL), // p_906->g_136
        {0L}, // p_906->g_138
        &p_906->g_138, // p_906->g_137
        (VECTOR(uint8_t, 16))(0x5FL, (VECTOR(uint8_t, 4))(0x5FL, (VECTOR(uint8_t, 2))(0x5FL, 0x29L), 0x29L), 0x29L, 0x5FL, 0x29L, (VECTOR(uint8_t, 2))(0x5FL, 0x29L), (VECTOR(uint8_t, 2))(0x5FL, 0x29L), 0x5FL, 0x29L, 0x5FL, 0x29L), // p_906->g_159
        0x7F3023DFL, // p_906->g_161
        {0x4176L}, // p_906->g_168
        {{{65535UL},{0x3F73L},{65535UL},{65535UL},{0x3F73L},{65535UL}},{{65535UL},{0x3F73L},{65535UL},{65535UL},{0x3F73L},{65535UL}},{{65535UL},{0x3F73L},{65535UL},{65535UL},{0x3F73L},{65535UL}},{{65535UL},{0x3F73L},{65535UL},{65535UL},{0x3F73L},{65535UL}}}, // p_906->g_169
        {0UL}, // p_906->g_170
        9L, // p_906->g_185
        (-1L), // p_906->g_187
        {0x1AL,0x1AL}, // p_906->g_188
        (VECTOR(int8_t, 8))(0x75L, (VECTOR(int8_t, 4))(0x75L, (VECTOR(int8_t, 2))(0x75L, (-1L)), (-1L)), (-1L), 0x75L, (-1L)), // p_906->g_218
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 1UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), 1UL, 18446744073709551615UL, 1UL, 18446744073709551615UL), // p_906->g_260
        {{0x69L,0UL,0x5DEE8C9854E49107L,0xA0E52FC0732C8579L,5UL,0xDB81L,1UL,65535UL,0UL,2L},{65529UL},{-9L}}, // p_906->g_262
        &p_906->g_262, // p_906->g_261
        0x6DEE25096C6FE63BL, // p_906->g_282
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x54718C70L), 0x54718C70L), 0x54718C70L, 1L, 0x54718C70L, (VECTOR(int32_t, 2))(1L, 0x54718C70L), (VECTOR(int32_t, 2))(1L, 0x54718C70L), 1L, 0x54718C70L, 1L, 0x54718C70L), // p_906->g_286
        (void*)0, // p_906->g_305
        (void*)0, // p_906->g_307
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_906->g_358
        &p_906->g_358[0], // p_906->g_357
        (VECTOR(int16_t, 2))((-7L), 0x209FL), // p_906->g_399
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), // p_906->g_401
        (VECTOR(int16_t, 2))(0x7224L, 1L), // p_906->g_402
        (VECTOR(int16_t, 4))(0x41A9L, (VECTOR(int16_t, 2))(0x41A9L, 0x241DL), 0x241DL), // p_906->g_405
        (VECTOR(int16_t, 2))(0x78E7L, (-2L)), // p_906->g_406
        (void*)0, // p_906->g_410
        &p_906->g_410, // p_906->g_409
        &p_906->g_409, // p_906->g_408
        &p_906->g_111, // p_906->g_413
        {{{0xFEL,0xA24CCCF1L,1L,0x3698B40CA7EAAE5EL,2UL,1UL,6UL,2UL,6UL,0x6FFA9CCAL},{1UL},{0L}},{{0xFEL,0xA24CCCF1L,1L,0x3698B40CA7EAAE5EL,2UL,1UL,6UL,2UL,6UL,0x6FFA9CCAL},{1UL},{0L}},{{0xFEL,0xA24CCCF1L,1L,0x3698B40CA7EAAE5EL,2UL,1UL,6UL,2UL,6UL,0x6FFA9CCAL},{1UL},{0L}},{{0xFEL,0xA24CCCF1L,1L,0x3698B40CA7EAAE5EL,2UL,1UL,6UL,2UL,6UL,0x6FFA9CCAL},{1UL},{0L}}}, // p_906->g_420
        (VECTOR(uint8_t, 8))(0x9AL, (VECTOR(uint8_t, 4))(0x9AL, (VECTOR(uint8_t, 2))(0x9AL, 0xAFL), 0xAFL), 0xAFL, 0x9AL, 0xAFL), // p_906->g_454
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x73B3L), 0x73B3L), // p_906->g_506
        {0xA73AC1FCL,0x63C38778FB3CEB98L}, // p_906->g_515
        (VECTOR(int64_t, 16))(0x759138A2DA892971L, (VECTOR(int64_t, 4))(0x759138A2DA892971L, (VECTOR(int64_t, 2))(0x759138A2DA892971L, (-1L)), (-1L)), (-1L), 0x759138A2DA892971L, (-1L), (VECTOR(int64_t, 2))(0x759138A2DA892971L, (-1L)), (VECTOR(int64_t, 2))(0x759138A2DA892971L, (-1L)), 0x759138A2DA892971L, (-1L), 0x759138A2DA892971L, (-1L)), // p_906->g_529
        {1UL,0x314B036045318054L}, // p_906->g_534
        &p_906->g_534, // p_906->g_535
        (VECTOR(uint32_t, 8))(0xC5E08238L, (VECTOR(uint32_t, 4))(0xC5E08238L, (VECTOR(uint32_t, 2))(0xC5E08238L, 4294967295UL), 4294967295UL), 4294967295UL, 0xC5E08238L, 4294967295UL), // p_906->g_546
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L)), // p_906->g_556
        {{{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL}},{{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL}},{{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL}},{{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL}},{{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL}},{{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL},{0UL,0x01AF37CFL,-7L,0L,{0xFEBCB11CL,-1L},0x270747ADL}}}, // p_906->g_576
        &p_906->g_118, // p_906->g_579
        {{0x0AL,0x94229F4FL,0x7C9805517ED3491AL,0UL,1UL,0x58C8L,0UL,1UL,18446744073709551615UL,0x0E7E3CFFL},{65535UL},{0x26L}}, // p_906->g_599
        (VECTOR(uint16_t, 8))(0xF087L, (VECTOR(uint16_t, 4))(0xF087L, (VECTOR(uint16_t, 2))(0xF087L, 0x447CL), 0x447CL), 0x447CL, 0xF087L, 0x447CL), // p_906->g_622
        (void*)0, // p_906->g_626
        (void*)0, // p_906->g_627
        (VECTOR(int8_t, 2))(0x6FL, (-1L)), // p_906->g_651
        &p_906->g_599.f0.f5, // p_906->g_667
        &p_906->g_667, // p_906->g_666
        {{&p_906->g_666},{&p_906->g_666},{&p_906->g_666},{&p_906->g_666},{&p_906->g_666},{&p_906->g_666},{&p_906->g_666},{&p_906->g_666},{&p_906->g_666},{&p_906->g_666}}, // p_906->g_665
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-7L)), (-7L)), (-7L), 0L, (-7L)), // p_906->g_712
        {{0xD6D5L},4294967289UL}, // p_906->g_727
        &p_906->g_727, // p_906->g_728
        &p_906->g_413, // p_906->g_746
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1998C237L), 0x1998C237L), 0x1998C237L, 0L, 0x1998C237L, (VECTOR(int32_t, 2))(0L, 0x1998C237L), (VECTOR(int32_t, 2))(0L, 0x1998C237L), 0L, 0x1998C237L, 0L, 0x1998C237L), // p_906->g_805
        &p_906->g_420[0].f0, // p_906->g_817
        &p_906->g_817, // p_906->g_816
        {&p_906->g_282,&p_906->g_282,&p_906->g_282,&p_906->g_282,&p_906->g_282,&p_906->g_282}, // p_906->g_819
        &p_906->g_819[3], // p_906->g_818
        &p_906->g_118, // p_906->g_840
        {0xC8L}, // p_906->g_843
        {255UL,1UL,-1L,0x52L,{0xE383C5D6L,0x66C85F8AB4993C30L},0x74728626L}, // p_906->g_857
        {0UL}, // p_906->g_860
        (VECTOR(uint64_t, 8))(0x655109DA3F7DD96DL, (VECTOR(uint64_t, 4))(0x655109DA3F7DD96DL, (VECTOR(uint64_t, 2))(0x655109DA3F7DD96DL, 1UL), 1UL), 1UL, 0x655109DA3F7DD96DL, 1UL), // p_906->g_873
        &p_906->g_65[1], // p_906->g_890
        {0x2586L}, // p_906->g_905
        0, // p_906->v_collective
        sequence_input[get_global_id(0)], // p_906->global_0_offset
        sequence_input[get_global_id(1)], // p_906->global_1_offset
        sequence_input[get_global_id(2)], // p_906->global_2_offset
        sequence_input[get_local_id(0)], // p_906->local_0_offset
        sequence_input[get_local_id(1)], // p_906->local_1_offset
        sequence_input[get_local_id(2)], // p_906->local_2_offset
        sequence_input[get_group_id(0)], // p_906->group_0_offset
        sequence_input[get_group_id(1)], // p_906->group_1_offset
        sequence_input[get_group_id(2)], // p_906->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_906->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_907 = c_908;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_906);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_906->g_9[i][j], "p_906->g_9[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_906->g_11, "p_906->g_11", print_hash_value);
    transparent_crc(p_906->g_36.x, "p_906->g_36.x", print_hash_value);
    transparent_crc(p_906->g_36.y, "p_906->g_36.y", print_hash_value);
    transparent_crc(p_906->g_36.z, "p_906->g_36.z", print_hash_value);
    transparent_crc(p_906->g_36.w, "p_906->g_36.w", print_hash_value);
    transparent_crc(p_906->g_43.f0, "p_906->g_43.f0", print_hash_value);
    transparent_crc(p_906->g_53, "p_906->g_53", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_906->g_59[i], "p_906->g_59[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_906->g_65[i], "p_906->g_65[i]", print_hash_value);

    }
    transparent_crc(p_906->g_80.f0, "p_906->g_80.f0", print_hash_value);
    transparent_crc(p_906->g_81.f0, "p_906->g_81.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_906->g_82[i].f0, "p_906->g_82[i].f0", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_906->g_83[i].f0, "p_906->g_83[i].f0", print_hash_value);

    }
    transparent_crc(p_906->g_84.f0, "p_906->g_84.f0", print_hash_value);
    transparent_crc(p_906->g_85.f0, "p_906->g_85.f0", print_hash_value);
    transparent_crc(p_906->g_86.f0, "p_906->g_86.f0", print_hash_value);
    transparent_crc(p_906->g_87.f0, "p_906->g_87.f0", print_hash_value);
    transparent_crc(p_906->g_88.f0, "p_906->g_88.f0", print_hash_value);
    transparent_crc(p_906->g_89.f0, "p_906->g_89.f0", print_hash_value);
    transparent_crc(p_906->g_90.f0, "p_906->g_90.f0", print_hash_value);
    transparent_crc(p_906->g_91.f0, "p_906->g_91.f0", print_hash_value);
    transparent_crc(p_906->g_92.f0, "p_906->g_92.f0", print_hash_value);
    transparent_crc(p_906->g_93.f0, "p_906->g_93.f0", print_hash_value);
    transparent_crc(p_906->g_94.f0, "p_906->g_94.f0", print_hash_value);
    transparent_crc(p_906->g_95.f0, "p_906->g_95.f0", print_hash_value);
    transparent_crc(p_906->g_96.f0, "p_906->g_96.f0", print_hash_value);
    transparent_crc(p_906->g_97.f0, "p_906->g_97.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_906->g_98[i].f0, "p_906->g_98[i].f0", print_hash_value);

    }
    transparent_crc(p_906->g_107, "p_906->g_107", print_hash_value);
    transparent_crc(p_906->g_109, "p_906->g_109", print_hash_value);
    transparent_crc(p_906->g_112, "p_906->g_112", print_hash_value);
    transparent_crc(p_906->g_136.s0, "p_906->g_136.s0", print_hash_value);
    transparent_crc(p_906->g_136.s1, "p_906->g_136.s1", print_hash_value);
    transparent_crc(p_906->g_136.s2, "p_906->g_136.s2", print_hash_value);
    transparent_crc(p_906->g_136.s3, "p_906->g_136.s3", print_hash_value);
    transparent_crc(p_906->g_136.s4, "p_906->g_136.s4", print_hash_value);
    transparent_crc(p_906->g_136.s5, "p_906->g_136.s5", print_hash_value);
    transparent_crc(p_906->g_136.s6, "p_906->g_136.s6", print_hash_value);
    transparent_crc(p_906->g_136.s7, "p_906->g_136.s7", print_hash_value);
    transparent_crc(p_906->g_138.f0, "p_906->g_138.f0", print_hash_value);
    transparent_crc(p_906->g_159.s0, "p_906->g_159.s0", print_hash_value);
    transparent_crc(p_906->g_159.s1, "p_906->g_159.s1", print_hash_value);
    transparent_crc(p_906->g_159.s2, "p_906->g_159.s2", print_hash_value);
    transparent_crc(p_906->g_159.s3, "p_906->g_159.s3", print_hash_value);
    transparent_crc(p_906->g_159.s4, "p_906->g_159.s4", print_hash_value);
    transparent_crc(p_906->g_159.s5, "p_906->g_159.s5", print_hash_value);
    transparent_crc(p_906->g_159.s6, "p_906->g_159.s6", print_hash_value);
    transparent_crc(p_906->g_159.s7, "p_906->g_159.s7", print_hash_value);
    transparent_crc(p_906->g_159.s8, "p_906->g_159.s8", print_hash_value);
    transparent_crc(p_906->g_159.s9, "p_906->g_159.s9", print_hash_value);
    transparent_crc(p_906->g_159.sa, "p_906->g_159.sa", print_hash_value);
    transparent_crc(p_906->g_159.sb, "p_906->g_159.sb", print_hash_value);
    transparent_crc(p_906->g_159.sc, "p_906->g_159.sc", print_hash_value);
    transparent_crc(p_906->g_159.sd, "p_906->g_159.sd", print_hash_value);
    transparent_crc(p_906->g_159.se, "p_906->g_159.se", print_hash_value);
    transparent_crc(p_906->g_159.sf, "p_906->g_159.sf", print_hash_value);
    transparent_crc(p_906->g_161, "p_906->g_161", print_hash_value);
    transparent_crc(p_906->g_168.f0, "p_906->g_168.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_906->g_169[i][j].f0, "p_906->g_169[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_906->g_170.f0, "p_906->g_170.f0", print_hash_value);
    transparent_crc(p_906->g_185, "p_906->g_185", print_hash_value);
    transparent_crc(p_906->g_187, "p_906->g_187", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_906->g_188[i], "p_906->g_188[i]", print_hash_value);

    }
    transparent_crc(p_906->g_218.s0, "p_906->g_218.s0", print_hash_value);
    transparent_crc(p_906->g_218.s1, "p_906->g_218.s1", print_hash_value);
    transparent_crc(p_906->g_218.s2, "p_906->g_218.s2", print_hash_value);
    transparent_crc(p_906->g_218.s3, "p_906->g_218.s3", print_hash_value);
    transparent_crc(p_906->g_218.s4, "p_906->g_218.s4", print_hash_value);
    transparent_crc(p_906->g_218.s5, "p_906->g_218.s5", print_hash_value);
    transparent_crc(p_906->g_218.s6, "p_906->g_218.s6", print_hash_value);
    transparent_crc(p_906->g_218.s7, "p_906->g_218.s7", print_hash_value);
    transparent_crc(p_906->g_260.s0, "p_906->g_260.s0", print_hash_value);
    transparent_crc(p_906->g_260.s1, "p_906->g_260.s1", print_hash_value);
    transparent_crc(p_906->g_260.s2, "p_906->g_260.s2", print_hash_value);
    transparent_crc(p_906->g_260.s3, "p_906->g_260.s3", print_hash_value);
    transparent_crc(p_906->g_260.s4, "p_906->g_260.s4", print_hash_value);
    transparent_crc(p_906->g_260.s5, "p_906->g_260.s5", print_hash_value);
    transparent_crc(p_906->g_260.s6, "p_906->g_260.s6", print_hash_value);
    transparent_crc(p_906->g_260.s7, "p_906->g_260.s7", print_hash_value);
    transparent_crc(p_906->g_260.s8, "p_906->g_260.s8", print_hash_value);
    transparent_crc(p_906->g_260.s9, "p_906->g_260.s9", print_hash_value);
    transparent_crc(p_906->g_260.sa, "p_906->g_260.sa", print_hash_value);
    transparent_crc(p_906->g_260.sb, "p_906->g_260.sb", print_hash_value);
    transparent_crc(p_906->g_260.sc, "p_906->g_260.sc", print_hash_value);
    transparent_crc(p_906->g_260.sd, "p_906->g_260.sd", print_hash_value);
    transparent_crc(p_906->g_260.se, "p_906->g_260.se", print_hash_value);
    transparent_crc(p_906->g_260.sf, "p_906->g_260.sf", print_hash_value);
    transparent_crc(p_906->g_262.f0.f0, "p_906->g_262.f0.f0", print_hash_value);
    transparent_crc(p_906->g_262.f0.f1, "p_906->g_262.f0.f1", print_hash_value);
    transparent_crc(p_906->g_262.f0.f2, "p_906->g_262.f0.f2", print_hash_value);
    transparent_crc(p_906->g_262.f0.f3, "p_906->g_262.f0.f3", print_hash_value);
    transparent_crc(p_906->g_262.f0.f4, "p_906->g_262.f0.f4", print_hash_value);
    transparent_crc(p_906->g_262.f0.f5, "p_906->g_262.f0.f5", print_hash_value);
    transparent_crc(p_906->g_262.f0.f6, "p_906->g_262.f0.f6", print_hash_value);
    transparent_crc(p_906->g_262.f0.f7, "p_906->g_262.f0.f7", print_hash_value);
    transparent_crc(p_906->g_262.f0.f8, "p_906->g_262.f0.f8", print_hash_value);
    transparent_crc(p_906->g_262.f0.f9, "p_906->g_262.f0.f9", print_hash_value);
    transparent_crc(p_906->g_262.f1.f0, "p_906->g_262.f1.f0", print_hash_value);
    transparent_crc(p_906->g_262.f2.f0, "p_906->g_262.f2.f0", print_hash_value);
    transparent_crc(p_906->g_282, "p_906->g_282", print_hash_value);
    transparent_crc(p_906->g_286.s0, "p_906->g_286.s0", print_hash_value);
    transparent_crc(p_906->g_286.s1, "p_906->g_286.s1", print_hash_value);
    transparent_crc(p_906->g_286.s2, "p_906->g_286.s2", print_hash_value);
    transparent_crc(p_906->g_286.s3, "p_906->g_286.s3", print_hash_value);
    transparent_crc(p_906->g_286.s4, "p_906->g_286.s4", print_hash_value);
    transparent_crc(p_906->g_286.s5, "p_906->g_286.s5", print_hash_value);
    transparent_crc(p_906->g_286.s6, "p_906->g_286.s6", print_hash_value);
    transparent_crc(p_906->g_286.s7, "p_906->g_286.s7", print_hash_value);
    transparent_crc(p_906->g_286.s8, "p_906->g_286.s8", print_hash_value);
    transparent_crc(p_906->g_286.s9, "p_906->g_286.s9", print_hash_value);
    transparent_crc(p_906->g_286.sa, "p_906->g_286.sa", print_hash_value);
    transparent_crc(p_906->g_286.sb, "p_906->g_286.sb", print_hash_value);
    transparent_crc(p_906->g_286.sc, "p_906->g_286.sc", print_hash_value);
    transparent_crc(p_906->g_286.sd, "p_906->g_286.sd", print_hash_value);
    transparent_crc(p_906->g_286.se, "p_906->g_286.se", print_hash_value);
    transparent_crc(p_906->g_286.sf, "p_906->g_286.sf", print_hash_value);
    transparent_crc(p_906->g_399.x, "p_906->g_399.x", print_hash_value);
    transparent_crc(p_906->g_399.y, "p_906->g_399.y", print_hash_value);
    transparent_crc(p_906->g_401.x, "p_906->g_401.x", print_hash_value);
    transparent_crc(p_906->g_401.y, "p_906->g_401.y", print_hash_value);
    transparent_crc(p_906->g_401.z, "p_906->g_401.z", print_hash_value);
    transparent_crc(p_906->g_401.w, "p_906->g_401.w", print_hash_value);
    transparent_crc(p_906->g_402.x, "p_906->g_402.x", print_hash_value);
    transparent_crc(p_906->g_402.y, "p_906->g_402.y", print_hash_value);
    transparent_crc(p_906->g_405.x, "p_906->g_405.x", print_hash_value);
    transparent_crc(p_906->g_405.y, "p_906->g_405.y", print_hash_value);
    transparent_crc(p_906->g_405.z, "p_906->g_405.z", print_hash_value);
    transparent_crc(p_906->g_405.w, "p_906->g_405.w", print_hash_value);
    transparent_crc(p_906->g_406.x, "p_906->g_406.x", print_hash_value);
    transparent_crc(p_906->g_406.y, "p_906->g_406.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_906->g_420[i].f0.f0, "p_906->g_420[i].f0.f0", print_hash_value);
        transparent_crc(p_906->g_420[i].f0.f1, "p_906->g_420[i].f0.f1", print_hash_value);
        transparent_crc(p_906->g_420[i].f0.f2, "p_906->g_420[i].f0.f2", print_hash_value);
        transparent_crc(p_906->g_420[i].f0.f3, "p_906->g_420[i].f0.f3", print_hash_value);
        transparent_crc(p_906->g_420[i].f0.f4, "p_906->g_420[i].f0.f4", print_hash_value);
        transparent_crc(p_906->g_420[i].f0.f5, "p_906->g_420[i].f0.f5", print_hash_value);
        transparent_crc(p_906->g_420[i].f0.f6, "p_906->g_420[i].f0.f6", print_hash_value);
        transparent_crc(p_906->g_420[i].f0.f7, "p_906->g_420[i].f0.f7", print_hash_value);
        transparent_crc(p_906->g_420[i].f0.f8, "p_906->g_420[i].f0.f8", print_hash_value);
        transparent_crc(p_906->g_420[i].f0.f9, "p_906->g_420[i].f0.f9", print_hash_value);
        transparent_crc(p_906->g_420[i].f1.f0, "p_906->g_420[i].f1.f0", print_hash_value);
        transparent_crc(p_906->g_420[i].f2.f0, "p_906->g_420[i].f2.f0", print_hash_value);

    }
    transparent_crc(p_906->g_454.s0, "p_906->g_454.s0", print_hash_value);
    transparent_crc(p_906->g_454.s1, "p_906->g_454.s1", print_hash_value);
    transparent_crc(p_906->g_454.s2, "p_906->g_454.s2", print_hash_value);
    transparent_crc(p_906->g_454.s3, "p_906->g_454.s3", print_hash_value);
    transparent_crc(p_906->g_454.s4, "p_906->g_454.s4", print_hash_value);
    transparent_crc(p_906->g_454.s5, "p_906->g_454.s5", print_hash_value);
    transparent_crc(p_906->g_454.s6, "p_906->g_454.s6", print_hash_value);
    transparent_crc(p_906->g_454.s7, "p_906->g_454.s7", print_hash_value);
    transparent_crc(p_906->g_506.x, "p_906->g_506.x", print_hash_value);
    transparent_crc(p_906->g_506.y, "p_906->g_506.y", print_hash_value);
    transparent_crc(p_906->g_506.z, "p_906->g_506.z", print_hash_value);
    transparent_crc(p_906->g_506.w, "p_906->g_506.w", print_hash_value);
    transparent_crc(p_906->g_515.f0, "p_906->g_515.f0", print_hash_value);
    transparent_crc(p_906->g_515.f1, "p_906->g_515.f1", print_hash_value);
    transparent_crc(p_906->g_529.s0, "p_906->g_529.s0", print_hash_value);
    transparent_crc(p_906->g_529.s1, "p_906->g_529.s1", print_hash_value);
    transparent_crc(p_906->g_529.s2, "p_906->g_529.s2", print_hash_value);
    transparent_crc(p_906->g_529.s3, "p_906->g_529.s3", print_hash_value);
    transparent_crc(p_906->g_529.s4, "p_906->g_529.s4", print_hash_value);
    transparent_crc(p_906->g_529.s5, "p_906->g_529.s5", print_hash_value);
    transparent_crc(p_906->g_529.s6, "p_906->g_529.s6", print_hash_value);
    transparent_crc(p_906->g_529.s7, "p_906->g_529.s7", print_hash_value);
    transparent_crc(p_906->g_529.s8, "p_906->g_529.s8", print_hash_value);
    transparent_crc(p_906->g_529.s9, "p_906->g_529.s9", print_hash_value);
    transparent_crc(p_906->g_529.sa, "p_906->g_529.sa", print_hash_value);
    transparent_crc(p_906->g_529.sb, "p_906->g_529.sb", print_hash_value);
    transparent_crc(p_906->g_529.sc, "p_906->g_529.sc", print_hash_value);
    transparent_crc(p_906->g_529.sd, "p_906->g_529.sd", print_hash_value);
    transparent_crc(p_906->g_529.se, "p_906->g_529.se", print_hash_value);
    transparent_crc(p_906->g_529.sf, "p_906->g_529.sf", print_hash_value);
    transparent_crc(p_906->g_534.f0, "p_906->g_534.f0", print_hash_value);
    transparent_crc(p_906->g_534.f1, "p_906->g_534.f1", print_hash_value);
    transparent_crc(p_906->g_546.s0, "p_906->g_546.s0", print_hash_value);
    transparent_crc(p_906->g_546.s1, "p_906->g_546.s1", print_hash_value);
    transparent_crc(p_906->g_546.s2, "p_906->g_546.s2", print_hash_value);
    transparent_crc(p_906->g_546.s3, "p_906->g_546.s3", print_hash_value);
    transparent_crc(p_906->g_546.s4, "p_906->g_546.s4", print_hash_value);
    transparent_crc(p_906->g_546.s5, "p_906->g_546.s5", print_hash_value);
    transparent_crc(p_906->g_546.s6, "p_906->g_546.s6", print_hash_value);
    transparent_crc(p_906->g_546.s7, "p_906->g_546.s7", print_hash_value);
    transparent_crc(p_906->g_556.s0, "p_906->g_556.s0", print_hash_value);
    transparent_crc(p_906->g_556.s1, "p_906->g_556.s1", print_hash_value);
    transparent_crc(p_906->g_556.s2, "p_906->g_556.s2", print_hash_value);
    transparent_crc(p_906->g_556.s3, "p_906->g_556.s3", print_hash_value);
    transparent_crc(p_906->g_556.s4, "p_906->g_556.s4", print_hash_value);
    transparent_crc(p_906->g_556.s5, "p_906->g_556.s5", print_hash_value);
    transparent_crc(p_906->g_556.s6, "p_906->g_556.s6", print_hash_value);
    transparent_crc(p_906->g_556.s7, "p_906->g_556.s7", print_hash_value);
    transparent_crc(p_906->g_556.s8, "p_906->g_556.s8", print_hash_value);
    transparent_crc(p_906->g_556.s9, "p_906->g_556.s9", print_hash_value);
    transparent_crc(p_906->g_556.sa, "p_906->g_556.sa", print_hash_value);
    transparent_crc(p_906->g_556.sb, "p_906->g_556.sb", print_hash_value);
    transparent_crc(p_906->g_556.sc, "p_906->g_556.sc", print_hash_value);
    transparent_crc(p_906->g_556.sd, "p_906->g_556.sd", print_hash_value);
    transparent_crc(p_906->g_556.se, "p_906->g_556.se", print_hash_value);
    transparent_crc(p_906->g_556.sf, "p_906->g_556.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_906->g_576[i][j].f0, "p_906->g_576[i][j].f0", print_hash_value);
            transparent_crc(p_906->g_576[i][j].f1, "p_906->g_576[i][j].f1", print_hash_value);
            transparent_crc(p_906->g_576[i][j].f2, "p_906->g_576[i][j].f2", print_hash_value);
            transparent_crc(p_906->g_576[i][j].f3, "p_906->g_576[i][j].f3", print_hash_value);
            transparent_crc(p_906->g_576[i][j].f4.f0, "p_906->g_576[i][j].f4.f0", print_hash_value);
            transparent_crc(p_906->g_576[i][j].f4.f1, "p_906->g_576[i][j].f4.f1", print_hash_value);
            transparent_crc(p_906->g_576[i][j].f5, "p_906->g_576[i][j].f5", print_hash_value);

        }
    }
    transparent_crc(p_906->g_599.f0.f0, "p_906->g_599.f0.f0", print_hash_value);
    transparent_crc(p_906->g_599.f0.f1, "p_906->g_599.f0.f1", print_hash_value);
    transparent_crc(p_906->g_599.f0.f2, "p_906->g_599.f0.f2", print_hash_value);
    transparent_crc(p_906->g_599.f0.f3, "p_906->g_599.f0.f3", print_hash_value);
    transparent_crc(p_906->g_599.f0.f4, "p_906->g_599.f0.f4", print_hash_value);
    transparent_crc(p_906->g_599.f0.f5, "p_906->g_599.f0.f5", print_hash_value);
    transparent_crc(p_906->g_599.f0.f6, "p_906->g_599.f0.f6", print_hash_value);
    transparent_crc(p_906->g_599.f0.f7, "p_906->g_599.f0.f7", print_hash_value);
    transparent_crc(p_906->g_599.f0.f8, "p_906->g_599.f0.f8", print_hash_value);
    transparent_crc(p_906->g_599.f0.f9, "p_906->g_599.f0.f9", print_hash_value);
    transparent_crc(p_906->g_599.f1.f0, "p_906->g_599.f1.f0", print_hash_value);
    transparent_crc(p_906->g_599.f2.f0, "p_906->g_599.f2.f0", print_hash_value);
    transparent_crc(p_906->g_622.s0, "p_906->g_622.s0", print_hash_value);
    transparent_crc(p_906->g_622.s1, "p_906->g_622.s1", print_hash_value);
    transparent_crc(p_906->g_622.s2, "p_906->g_622.s2", print_hash_value);
    transparent_crc(p_906->g_622.s3, "p_906->g_622.s3", print_hash_value);
    transparent_crc(p_906->g_622.s4, "p_906->g_622.s4", print_hash_value);
    transparent_crc(p_906->g_622.s5, "p_906->g_622.s5", print_hash_value);
    transparent_crc(p_906->g_622.s6, "p_906->g_622.s6", print_hash_value);
    transparent_crc(p_906->g_622.s7, "p_906->g_622.s7", print_hash_value);
    transparent_crc(p_906->g_651.x, "p_906->g_651.x", print_hash_value);
    transparent_crc(p_906->g_651.y, "p_906->g_651.y", print_hash_value);
    transparent_crc(p_906->g_712.s0, "p_906->g_712.s0", print_hash_value);
    transparent_crc(p_906->g_712.s1, "p_906->g_712.s1", print_hash_value);
    transparent_crc(p_906->g_712.s2, "p_906->g_712.s2", print_hash_value);
    transparent_crc(p_906->g_712.s3, "p_906->g_712.s3", print_hash_value);
    transparent_crc(p_906->g_712.s4, "p_906->g_712.s4", print_hash_value);
    transparent_crc(p_906->g_712.s5, "p_906->g_712.s5", print_hash_value);
    transparent_crc(p_906->g_712.s6, "p_906->g_712.s6", print_hash_value);
    transparent_crc(p_906->g_712.s7, "p_906->g_712.s7", print_hash_value);
    transparent_crc(p_906->g_727.f0.f0, "p_906->g_727.f0.f0", print_hash_value);
    transparent_crc(p_906->g_727.f1, "p_906->g_727.f1", print_hash_value);
    transparent_crc(p_906->g_805.s0, "p_906->g_805.s0", print_hash_value);
    transparent_crc(p_906->g_805.s1, "p_906->g_805.s1", print_hash_value);
    transparent_crc(p_906->g_805.s2, "p_906->g_805.s2", print_hash_value);
    transparent_crc(p_906->g_805.s3, "p_906->g_805.s3", print_hash_value);
    transparent_crc(p_906->g_805.s4, "p_906->g_805.s4", print_hash_value);
    transparent_crc(p_906->g_805.s5, "p_906->g_805.s5", print_hash_value);
    transparent_crc(p_906->g_805.s6, "p_906->g_805.s6", print_hash_value);
    transparent_crc(p_906->g_805.s7, "p_906->g_805.s7", print_hash_value);
    transparent_crc(p_906->g_805.s8, "p_906->g_805.s8", print_hash_value);
    transparent_crc(p_906->g_805.s9, "p_906->g_805.s9", print_hash_value);
    transparent_crc(p_906->g_805.sa, "p_906->g_805.sa", print_hash_value);
    transparent_crc(p_906->g_805.sb, "p_906->g_805.sb", print_hash_value);
    transparent_crc(p_906->g_805.sc, "p_906->g_805.sc", print_hash_value);
    transparent_crc(p_906->g_805.sd, "p_906->g_805.sd", print_hash_value);
    transparent_crc(p_906->g_805.se, "p_906->g_805.se", print_hash_value);
    transparent_crc(p_906->g_805.sf, "p_906->g_805.sf", print_hash_value);
    transparent_crc(p_906->g_843.f0, "p_906->g_843.f0", print_hash_value);
    transparent_crc(p_906->g_857.f0, "p_906->g_857.f0", print_hash_value);
    transparent_crc(p_906->g_857.f1, "p_906->g_857.f1", print_hash_value);
    transparent_crc(p_906->g_857.f2, "p_906->g_857.f2", print_hash_value);
    transparent_crc(p_906->g_857.f3, "p_906->g_857.f3", print_hash_value);
    transparent_crc(p_906->g_857.f4.f0, "p_906->g_857.f4.f0", print_hash_value);
    transparent_crc(p_906->g_857.f4.f1, "p_906->g_857.f4.f1", print_hash_value);
    transparent_crc(p_906->g_857.f5, "p_906->g_857.f5", print_hash_value);
    transparent_crc(p_906->g_860.f0, "p_906->g_860.f0", print_hash_value);
    transparent_crc(p_906->g_873.s0, "p_906->g_873.s0", print_hash_value);
    transparent_crc(p_906->g_873.s1, "p_906->g_873.s1", print_hash_value);
    transparent_crc(p_906->g_873.s2, "p_906->g_873.s2", print_hash_value);
    transparent_crc(p_906->g_873.s3, "p_906->g_873.s3", print_hash_value);
    transparent_crc(p_906->g_873.s4, "p_906->g_873.s4", print_hash_value);
    transparent_crc(p_906->g_873.s5, "p_906->g_873.s5", print_hash_value);
    transparent_crc(p_906->g_873.s6, "p_906->g_873.s6", print_hash_value);
    transparent_crc(p_906->g_873.s7, "p_906->g_873.s7", print_hash_value);
    transparent_crc(p_906->g_905.f0, "p_906->g_905.f0", print_hash_value);
    transparent_crc(p_906->v_collective, "p_906->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 28; i++)
            transparent_crc(p_906->g_special_values[i + 28 * get_linear_group_id()], "p_906->g_special_values[i + 28 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 28; i++)
            transparent_crc(p_906->l_special_values[i], "p_906->l_special_values[i]", print_hash_value);
    transparent_crc(p_906->l_comm_values[get_linear_local_id()], "p_906->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_906->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_906->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
