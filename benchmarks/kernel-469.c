// --atomics 3 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 49,15,2 -l 7,3,1
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

__constant uint32_t permutations[10][21] = {
{8,15,4,0,19,10,1,17,9,2,18,11,16,7,13,5,20,3,12,6,14}, // permutation 0
{15,18,13,4,8,12,11,2,19,16,10,3,14,17,1,5,6,20,9,7,0}, // permutation 1
{10,6,2,18,13,0,11,8,19,1,7,3,17,9,5,20,4,15,14,12,16}, // permutation 2
{11,9,15,3,4,2,14,7,6,20,19,5,0,10,18,17,16,13,8,1,12}, // permutation 3
{9,6,7,1,13,15,12,19,0,3,14,10,8,5,20,11,4,2,18,16,17}, // permutation 4
{1,15,13,2,11,12,14,6,0,9,4,18,5,20,8,7,10,17,19,16,3}, // permutation 5
{6,1,17,13,15,18,4,20,0,8,14,19,11,2,16,9,10,12,3,5,7}, // permutation 6
{4,5,9,7,17,13,15,20,10,2,0,3,6,12,11,18,16,19,8,14,1}, // permutation 7
{20,0,15,3,6,5,18,11,1,7,13,4,8,10,17,12,2,16,9,19,14}, // permutation 8
{5,4,19,2,8,14,3,17,7,16,18,12,20,11,1,0,6,15,13,10,9} // permutation 9
};

// Seed: 2956751212

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
};

struct S1 {
   int8_t  f0;
   int32_t  f1;
   uint64_t  f2;
   int32_t  f3;
   uint64_t  f4;
   int16_t  f5;
   volatile int64_t  f6;
   struct S0  f7;
   volatile uint8_t  f8;
   uint8_t  f9;
};

union U2 {
   volatile struct S1  f0;
   volatile uint64_t  f1;
   int64_t  f2;
   int8_t * volatile  f3;
   volatile int8_t * f4;
};

struct S3 {
    int32_t g_3;
    int32_t g_10;
    int32_t * volatile g_9;
    volatile int16_t g_23;
    uint8_t g_42;
    int16_t g_50;
    int64_t g_53[5];
    VECTOR(int64_t, 2) g_55;
    int32_t g_56[9][2][3];
    uint32_t g_57;
    int8_t g_70;
    int8_t *g_83;
    int8_t g_97;
    VECTOR(int64_t, 16) g_104;
    volatile struct S1 g_113;
    int16_t g_125;
    uint8_t g_136;
    struct S1 g_165;
    volatile int64_t * volatile g_192;
    volatile struct S1 g_200;
    int32_t g_214;
    int32_t *g_217;
    int32_t ** volatile g_216;
    volatile VECTOR(int32_t, 2) g_257;
    int32_t g_262;
    VECTOR(uint8_t, 8) g_265;
    VECTOR(uint64_t, 8) g_276;
    VECTOR(uint64_t, 16) g_278;
    uint32_t g_284;
    int64_t *g_285[5];
    int32_t ** volatile g_287[2][9];
    int32_t *g_288;
    volatile VECTOR(uint8_t, 8) g_298;
    struct S0 *g_303;
    int32_t ** volatile g_305;
    VECTOR(int32_t, 8) g_344;
    struct S0 * volatile g_716;
    uint32_t g_718;
    int32_t * volatile g_724;
    VECTOR(int16_t, 8) g_725;
    int8_t *** volatile g_729;
    int8_t **g_731;
    int8_t *** volatile g_730;
    struct S0 * volatile g_735;
    union U2 g_742[2][6][1];
    VECTOR(uint16_t, 16) g_754;
    int32_t * volatile g_779;
    VECTOR(int64_t, 8) g_789;
    union U2 g_790;
    volatile VECTOR(int8_t, 4) g_810;
    int32_t * volatile g_842;
    int32_t ** volatile g_848;
    volatile VECTOR(int16_t, 2) g_870;
    int64_t *g_873;
    int64_t **g_872;
    int64_t ** volatile * volatile g_871;
    union U2 g_881[3];
    union U2 g_884[8];
    union U2 g_886;
    struct S0 ** volatile g_918;
    volatile int32_t g_927;
    volatile int32_t *g_926;
    volatile int32_t **g_925;
    VECTOR(int64_t, 4) g_936;
    volatile uint32_t g_943;
    int32_t g_996;
    volatile VECTOR(int16_t, 2) g_1012;
    struct S0 g_1017;
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
union U2  func_1(struct S3 * p_1018);
int32_t * func_11(int32_t  p_12, int16_t  p_13, int8_t  p_14, struct S3 * p_1018);
int32_t  func_20(int32_t  p_21, struct S3 * p_1018);
int32_t  func_32(int32_t * p_33, int32_t * p_34, int8_t * p_35, struct S3 * p_1018);
int32_t * func_36(uint8_t  p_37, uint64_t  p_38, int32_t  p_39, struct S3 * p_1018);
uint8_t  func_45(uint8_t  p_46, uint32_t  p_47, struct S3 * p_1018);
struct S0 * func_60(int32_t * p_61, int64_t  p_62, struct S3 * p_1018);
int32_t * func_63(int8_t * p_64, int64_t * p_65, uint64_t  p_66, uint32_t  p_67, int64_t  p_68, struct S3 * p_1018);
int64_t * func_71(int8_t * p_72, uint8_t  p_73, int64_t  p_74, int64_t  p_75, int64_t * p_76, struct S3 * p_1018);
int8_t * func_77(int8_t * p_78, uint64_t  p_79, uint8_t * p_80, uint64_t  p_81, int64_t  p_82, struct S3 * p_1018);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1018->g_comm_values p_1018->g_3 p_1018->g_9 p_1018->g_10 p_1018->l_comm_values p_1018->g_56 p_1018->g_57 p_1018->g_83 p_1018->g_70 p_1018->g_165 p_1018->g_136 p_1018->g_200 p_1018->g_97 p_1018->g_55 p_1018->g_216 p_1018->g_257 p_1018->g_217 p_1018->g_113.f2 p_1018->g_265 p_1018->g_276 p_1018->g_278 p_1018->g_104 p_1018->g_284 p_1018->g_285 p_1018->g_288 p_1018->g_303 p_1018->g_305 p_1018->g_262 p_1018->g_53 p_1018->g_344 p_1018->g_716 p_1018->g_718 p_1018->g_724 p_1018->g_725 p_1018->g_50 p_1018->g_730 p_1018->g_735 p_1018->g_742 p_1018->g_742.f0.f8 p_1018->g_779 p_1018->g_842 p_1018->g_789 p_1018->g_790 p_1018->g_742.f0.f1 p_1018->g_810 p_1018->g_113.f9 p_1018->g_42 p_1018->g_848 p_1018->g_731 p_1018->g_742.f0.f3 p_1018->g_918 p_1018->g_925 p_1018->g_936 p_1018->g_886.f0.f0 p_1018->g_943 p_1018->g_884.f0.f4 p_1018->g_754 p_1018->g_1012 p_1018->g_1017 p_1018->g_881
 * writes: p_1018->g_3 p_1018->g_10 p_1018->g_42 p_1018->g_50 p_1018->g_53 p_1018->g_55 p_1018->g_56 p_1018->g_57 p_1018->g_97 p_1018->g_104 p_1018->g_136 p_1018->g_214 p_1018->g_217 p_1018->g_70 p_1018->g_165.f1 p_1018->g_165.f7.f0 p_1018->g_262 p_1018->g_125 p_1018->g_284 p_1018->g_165.f3 p_1018->g_303 p_1018->g_288 p_1018->g_165.f5 p_1018->g_165.f7 p_1018->g_718 p_1018->g_731 p_1018->g_165.f2 p_1018->g_725 p_1018->g_344
 */
union U2  func_1(struct S3 * p_1018)
{ /* block id: 4 */
    int32_t *l_2 = &p_1018->g_3;
    VECTOR(uint8_t, 8) l_6 = (VECTOR(uint8_t, 8))(0xA9L, (VECTOR(uint8_t, 4))(0xA9L, (VECTOR(uint8_t, 2))(0xA9L, 3UL), 3UL), 3UL, 0xA9L, 3UL);
    int32_t l_719 = (-1L);
    uint8_t *l_720 = &p_1018->g_136;
    int32_t **l_1009 = (void*)0;
    int32_t l_1013 = 0x2CD8B3CBL;
    int64_t **l_1016[2];
    int i;
    for (i = 0; i < 2; i++)
        l_1016[i] = &p_1018->g_873;
    (*l_2) &= p_1018->g_comm_values[p_1018->tid];
    (*p_1018->g_9) ^= (safe_lshift_func_uint8_t_u_s(((~((VECTOR(uint8_t, 4))(l_6.s3647)).y) != p_1018->g_comm_values[p_1018->tid]), (p_1018->g_3 ^ (safe_lshift_func_uint16_t_u_u(p_1018->g_3, 4)))));
    (*p_1018->g_848) = func_11((p_1018->g_comm_values[p_1018->tid] >= (0x18L || ((&p_1018->g_10 != l_2) , ((p_1018->g_comm_values[p_1018->tid] == (safe_rshift_func_int8_t_s_s((*l_2), ((p_1018->g_comm_values[p_1018->tid] && ((*l_720) = (((((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 4))(func_20((*l_2), p_1018), l_719, 0x027B8827L, 7L)), ((VECTOR(int32_t, 2))(0x20DCD2D6L)), (*l_2), 0L, 0x38FA88DEL, ((VECTOR(int32_t, 2))(2L)), ((VECTOR(int32_t, 4))(0x4ED8497DL)))).s0297, (int32_t)(-3L)))).wyzzwwxxxywyzyzy, ((VECTOR(int32_t, 16))(0x0792913CL)), ((VECTOR(int32_t, 16))(0x5569E5DEL))))).sf8, ((VECTOR(int32_t, 2))(2L)), ((VECTOR(int32_t, 2))(0L))))).xyxx, ((VECTOR(int32_t, 4))(0x2A339C77L)), ((VECTOR(int32_t, 4))(0x34DAB602L))))).wxzwyyyzzyxxyxxx)), ((VECTOR(int32_t, 16))(4L))))).scab6, ((VECTOR(int32_t, 4))(0x21675556L)), ((VECTOR(int32_t, 4))((-7L)))))).x)), 7)) == p_1018->g_344.s0) , (-7L)) < 0x0E2858F445491922L) == (*l_2)))) && (*p_1018->g_217))))) >= (*l_2))))), (*l_2), (*l_2), p_1018);
    (*l_2) = (safe_add_func_uint64_t_u_u(((*l_2) <= ((VECTOR(int16_t, 2))(p_1018->g_1012.yx)).lo), ((l_1013 &= 0xD5863B5E93FEB292L) || (safe_mul_func_uint8_t_u_u((((0xF3655D2F981D46CAL & (((p_1018->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1018->tid, 21))] , (((void*)0 != l_1016[0]) , ((void*)0 == l_2))) , ((p_1018->g_1017 , &p_1018->g_217) == &l_2)) != (*l_2))) , p_1018->g_104.sb) , p_1018->g_936.z), 7UL)))));
    return p_1018->g_881[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1018->g_217 p_1018->g_165.f1 p_1018->g_56 p_1018->g_262 p_1018->g_724 p_1018->g_725 p_1018->g_9 p_1018->g_10 p_1018->g_50 p_1018->g_730 p_1018->g_735 p_1018->g_200.f5 p_1018->g_742 p_1018->g_742.f0.f8 p_1018->g_216 p_1018->g_779 p_1018->g_789 p_1018->g_790 p_1018->g_742.f0.f1 p_1018->g_810 p_1018->g_165.f5 p_1018->g_718 p_1018->g_113.f9 p_1018->g_165.f4 p_1018->g_42 p_1018->g_97 p_1018->g_265 p_1018->g_165.f3 p_1018->g_842 p_1018->g_848 p_1018->g_731 p_1018->g_104 p_1018->g_165.f2 p_1018->g_742.f0.f3 p_1018->g_344 p_1018->g_918 p_1018->g_925 p_1018->g_936 p_1018->g_886.f0.f0 p_1018->g_943 p_1018->g_3 p_1018->g_276 p_1018->g_884.f0.f4 p_1018->g_754
 * writes: p_1018->g_165.f1 p_1018->g_56 p_1018->g_262 p_1018->g_3 p_1018->g_10 p_1018->g_50 p_1018->g_731 p_1018->g_165.f7 p_1018->g_165.f5 p_1018->g_718 p_1018->g_136 p_1018->g_42 p_1018->g_288 p_1018->g_165.f2 p_1018->g_725 p_1018->g_344 p_1018->g_303 p_1018->g_217
 */
int32_t * func_11(int32_t  p_12, int16_t  p_13, int8_t  p_14, struct S3 * p_1018)
{ /* block id: 383 */
    VECTOR(int8_t, 4) l_723 = (VECTOR(int8_t, 4))(0x40L, (VECTOR(int8_t, 2))(0x40L, 0x42L), 0x42L);
    int8_t **l_728 = (void*)0;
    int64_t *l_760 = &p_1018->g_53[4];
    uint8_t *l_777 = &p_1018->g_136;
    VECTOR(uint8_t, 8) l_794 = (VECTOR(uint8_t, 8))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x74L), 0x74L), 0x74L, 248UL, 0x74L);
    int32_t l_817 = 0x1C85F958L;
    union U2 *l_885[9];
    int32_t **l_907 = &p_1018->g_217;
    int64_t ***l_916 = &p_1018->g_872;
    struct S0 *l_917 = &p_1018->g_165.f7;
    VECTOR(int16_t, 2) l_922 = (VECTOR(int16_t, 2))(0x0174L, 0x20F0L);
    VECTOR(int64_t, 16) l_937 = (VECTOR(int64_t, 16))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L, (VECTOR(int64_t, 2))((-4L), 0L), (VECTOR(int64_t, 2))((-4L), 0L), (-4L), 0L, (-4L), 0L);
    int32_t l_958 = (-1L);
    int32_t l_962 = 0x2037EDC7L;
    int32_t l_964 = 0x3D9136E9L;
    int32_t l_997 = 0x363F6467L;
    int32_t l_998 = 1L;
    int32_t l_999 = 4L;
    int32_t l_1000 = 1L;
    int32_t l_1001 = 0x33613B94L;
    int32_t l_1002 = 0L;
    int32_t l_1003 = 0x3E92589BL;
    int32_t l_1004 = 0L;
    int32_t l_1005 = 0x4F5486EAL;
    int i;
    for (i = 0; i < 9; i++)
        l_885[i] = &p_1018->g_886;
    if (p_13)
    { /* block id: 384 */
        struct S0 l_732 = {4294967295UL};
        VECTOR(int64_t, 4) l_744 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x521332D44B6A1D74L), 0x521332D44B6A1D74L);
        VECTOR(uint8_t, 8) l_784 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xACL), 0xACL), 0xACL, 1UL, 0xACL);
        VECTOR(uint64_t, 16) l_805 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 1UL, 18446744073709551610UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551610UL), (VECTOR(uint64_t, 2))(1UL, 18446744073709551610UL), 1UL, 18446744073709551610UL, 1UL, 18446744073709551610UL);
        int32_t l_827[5][10] = {{0x41E72A80L,6L,0L,0x62E6A506L,(-1L),0x62E6A506L,0L,6L,0x41E72A80L,0L},{0x41E72A80L,6L,0L,0x62E6A506L,(-1L),0x62E6A506L,0L,6L,0x41E72A80L,0L},{0x41E72A80L,6L,0L,0x62E6A506L,(-1L),0x62E6A506L,0L,6L,0x41E72A80L,0L},{0x41E72A80L,6L,0L,0x62E6A506L,(-1L),0x62E6A506L,0L,6L,0x41E72A80L,0L},{0x41E72A80L,6L,0L,0x62E6A506L,(-1L),0x62E6A506L,0L,6L,0x41E72A80L,0L}};
        uint8_t *l_846 = (void*)0;
        int8_t **l_850 = &p_1018->g_83;
        union U2 *l_883 = &p_1018->g_884[4];
        int32_t *l_929 = &p_1018->g_214;
        int32_t **l_928 = &l_929;
        VECTOR(int32_t, 2) l_933 = (VECTOR(int32_t, 2))(1L, 0x6A01766FL);
        VECTOR(int64_t, 8) l_938 = (VECTOR(int64_t, 8))(0x7E2F20F8177CD913L, (VECTOR(int64_t, 4))(0x7E2F20F8177CD913L, (VECTOR(int64_t, 2))(0x7E2F20F8177CD913L, 0x32F9BCEC98388E18L), 0x32F9BCEC98388E18L), 0x32F9BCEC98388E18L, 0x7E2F20F8177CD913L, 0x32F9BCEC98388E18L);
        int i, j;
        (*p_1018->g_724) = ((*p_1018->g_217) ^= (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 2))(l_723.yw)).even, 5)));
        (*p_1018->g_9) ^= ((p_12 >= (p_14 | 0xD7DC3FFEA206CF71L)) <= (p_14 , ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_1018->g_725.s74256332)))).s26)).even));
        for (p_1018->g_50 = 0; (p_1018->g_50 > 0); p_1018->g_50 = safe_add_func_int16_t_s_s(p_1018->g_50, 8))
        { /* block id: 390 */
            struct S0 *l_733 = (void*)0;
            struct S0 l_734 = {4294967290UL};
            int32_t l_743 = 0x605B8314L;
            uint32_t l_749 = 0x75D4DD7DL;
            int32_t l_776 = 0x38F4F1E8L;
            int32_t l_818 = 0x511FF762L;
            union U2 *l_880 = &p_1018->g_881[2];
            int32_t ***l_930 = &l_928;
            int64_t *l_944 = (void*)0;
            int64_t *l_945 = (void*)0;
            int64_t *l_946 = (void*)0;
            int64_t *l_947 = (void*)0;
            int64_t *l_948 = (void*)0;
            int64_t *l_949 = (void*)0;
            int64_t *l_950[4][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_961 = 3L;
            uint16_t *l_983 = (void*)0;
            int32_t l_985[8] = {0x72763C4AL,0x72763C4AL,0x72763C4AL,0x72763C4AL,0x72763C4AL,0x72763C4AL,0x72763C4AL,0x72763C4AL};
            int i, j;
            (*p_1018->g_730) = l_728;
            (*p_1018->g_735) = (l_732 , (l_734 = l_732));
            if (((((GROUP_DIVERGE(0, 1) & (safe_add_func_uint16_t_u_u(p_14, ((safe_div_func_int16_t_s_s((safe_sub_func_int64_t_s_s((p_1018->g_200.f5 || (+(p_1018->g_742[0][0][0] , (p_1018->g_742[0][0][0].f0.f8 ^ (l_743 = p_13))))), ((VECTOR(int64_t, 2))(l_744.yw)).lo)), l_723.y)) <= (FAKE_DIVERGE(p_1018->local_2_offset, get_local_id(2), 10) < (!(safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_734.f0, ((VECTOR(int16_t, 16))(0L, p_1018->g_70, 0L, ((l_749 >= 0UL) || p_13), 1L, ((VECTOR(int16_t, 8))(0x1149L)), ((VECTOR(int16_t, 2))(0x4455L)), 0x756EL)).s3)), p_1018->g_262)))))))) , p_14) , l_732.f0) == 1L))
            { /* block id: 395 */
                int32_t *l_750 = &p_1018->g_165.f1;
                int32_t **l_751 = &l_750;
                (*l_751) = l_750;
                return (*p_1018->g_216);
            }
            else
            { /* block id: 398 */
                uint64_t l_759 = 0x683F7DCC3336CEA9L;
                int32_t l_775 = 0x0600C836L;
                int32_t l_803 = (-4L);
                VECTOR(uint64_t, 16) l_804 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x983742B836607315L), 0x983742B836607315L), 0x983742B836607315L, 1UL, 0x983742B836607315L, (VECTOR(uint64_t, 2))(1UL, 0x983742B836607315L), (VECTOR(uint64_t, 2))(1UL, 0x983742B836607315L), 1UL, 0x983742B836607315L, 1UL, 0x983742B836607315L);
                int32_t **l_910 = &p_1018->g_217;
                int i;
                if (p_12)
                { /* block id: 399 */
                    int32_t l_765 = 0x4003BEC3L;
                    uint64_t *l_774[4][7] = {{(void*)0,&l_759,&l_759,&l_759,(void*)0,(void*)0,&l_759},{(void*)0,&l_759,&l_759,&l_759,(void*)0,(void*)0,&l_759},{(void*)0,&l_759,&l_759,&l_759,(void*)0,(void*)0,&l_759},{(void*)0,&l_759,&l_759,&l_759,(void*)0,(void*)0,&l_759}};
                    int64_t l_778 = 0x32D645494C1DC5C8L;
                    VECTOR(int16_t, 16) l_828 = (VECTOR(int16_t, 16))(0x052AL, (VECTOR(int16_t, 4))(0x052AL, (VECTOR(int16_t, 2))(0x052AL, 7L), 7L), 7L, 0x052AL, 7L, (VECTOR(int16_t, 2))(0x052AL, 7L), (VECTOR(int16_t, 2))(0x052AL, 7L), 0x052AL, 7L, 0x052AL, 7L);
                    union U2 *l_833 = (void*)0;
                    int8_t *l_844[5] = {&p_1018->g_165.f0,&p_1018->g_165.f0,&p_1018->g_165.f0,&p_1018->g_165.f0,&p_1018->g_165.f0};
                    int32_t l_853 = 0x035F8B92L;
                    uint16_t l_859 = 1UL;
                    int i, j;
                    (*p_1018->g_779) = ((*p_1018->g_217) = (safe_rshift_func_uint16_t_u_s((((((((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 2))(0L, 0x334EL)).xyyyxyxxyyyxyyyy))).s0a, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_1018->g_754.seebb32909ad71d24)).odd)).s11))).lo & ((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (safe_add_func_uint32_t_u_u(l_743, l_759)))) != (l_760 == (void*)0))) , ((((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 2))(1UL, 8UL)).xxyy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(1UL, ((safe_lshift_func_int16_t_s_s((((((l_734.f0 && (&p_1018->g_42 == ((((safe_sub_func_uint16_t_u_u((l_765 || ((safe_sub_func_uint64_t_u_u((l_775 = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((4294967295UL && ((safe_lshift_func_int16_t_s_s(p_12, 11)) & 4294967295UL)), p_13)), 7))), 1UL)) == l_776)), p_14)) , l_775) > p_12) , l_777))) , p_13) || p_1018->g_718) , p_14) != l_765), p_1018->g_56[8][0][2])) & l_759), 8UL, 1UL, 4294967295UL, l_778, l_765, 2UL, ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 2))(1UL)), 0xF722B690L, 0x358FE983L)).sa9e5)).even)).xyxx))).y || p_13) == l_723.y)) == 4294967295UL) >= GROUP_DIVERGE(1, 1)) > p_14), 10)));
                    for (p_1018->g_165.f5 = (-2); (p_1018->g_165.f5 == 10); ++p_1018->g_165.f5)
                    { /* block id: 405 */
                        uint8_t l_791 = 1UL;
                        uint16_t *l_795 = (void*)0;
                        uint16_t *l_796 = (void*)0;
                        uint16_t *l_797 = (void*)0;
                        uint16_t *l_798 = (void*)0;
                        uint16_t *l_799 = (void*)0;
                        uint16_t *l_800 = (void*)0;
                        uint16_t *l_801 = (void*)0;
                        uint16_t *l_802 = (void*)0;
                        uint32_t *l_815 = &p_1018->g_718;
                        uint64_t l_816[9][1] = {{0x1CA1B64763D57F86L},{0x1CA1B64763D57F86L},{0x1CA1B64763D57F86L},{0x1CA1B64763D57F86L},{0x1CA1B64763D57F86L},{0x1CA1B64763D57F86L},{0x1CA1B64763D57F86L},{0x1CA1B64763D57F86L},{0x1CA1B64763D57F86L}};
                        int16_t *l_819[2][4][9] = {{{&p_1018->g_165.f5,(void*)0,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5},{&p_1018->g_165.f5,(void*)0,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5},{&p_1018->g_165.f5,(void*)0,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5},{&p_1018->g_165.f5,(void*)0,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5}},{{&p_1018->g_165.f5,(void*)0,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5},{&p_1018->g_165.f5,(void*)0,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5},{&p_1018->g_165.f5,(void*)0,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5},{&p_1018->g_165.f5,(void*)0,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5,&p_1018->g_165.f5}}};
                        VECTOR(int16_t, 8) l_822 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        int i, j, k;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1018->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(0x7164385E2BDBF904L, (((VECTOR(uint8_t, 16))(l_784.s0625171176020644)).s6 | (p_1018->g_42 ^= ((p_13 = (safe_div_func_uint64_t_u_u((!(safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(p_1018->g_789.s5152)).w, ((p_1018->g_790 , ((l_791 < (l_803 ^= (safe_add_func_int8_t_s_s(p_13, ((VECTOR(uint8_t, 4))(l_794.s0162)).z)))) != p_14)) && ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(uint64_t, 4))(l_804.s6bcb)).zzzwxwzz, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_805.s08b1d8ed)))).odd)).odd)).xxxxyxxx, ((VECTOR(uint64_t, 8))(0x0C98E588A2BC9391L, FAKE_DIVERGE(p_1018->local_0_offset, get_local_id(0), 10), (l_817 ^= ((safe_mul_func_int16_t_s_s(p_1018->g_742[0][0][0].f0.f1, 65535UL)) , (+(safe_add_func_uint8_t_u_u(((((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(p_1018->g_810.zxwxzyywwyxzxwww)).sb9, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0L, 0L)), 3L, (-9L))), ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((p_14 ^= (safe_rshift_func_uint8_t_u_u(((*l_777) = (((safe_div_func_uint16_t_u_u(((p_1018->g_165.f5 , ((*l_815) |= ((p_12 <= p_12) <= p_12))) , p_1018->g_113.f9), 0x0D0DL)) , p_1018->g_165.f4) & 0L)), l_816[5][0]))), ((VECTOR(int8_t, 2))(0x7CL)), 0x77L, ((VECTOR(int8_t, 8))((-3L))), ((VECTOR(int8_t, 4))((-2L))))).lo)), ((VECTOR(int8_t, 8))((-6L))), ((VECTOR(int8_t, 8))(5L))))).hi))).even))).even | p_13) != 0x1FBFF0E6L), 1UL))))), 18446744073709551615UL, 18446744073709551610UL, 18446744073709551608UL, 0xC670D2F9B2548389L, 18446744073709551615UL))))).hi)).zxxwxwxw))).odd, ((VECTOR(uint64_t, 4))(0xA72A96FEE419C512L))))).xyyxwxywwzywywzy)).sa535)).wzwzxzzz)).s2)))), l_818))) == p_12))))), 10))][(safe_mod_func_uint32_t_u_u(p_1018->tid, 21))]));
                        (*p_1018->g_842) = (((safe_rshift_func_uint8_t_u_s(((-10L) >= ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x1221L, (-1L))))))).yxyx, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(l_822.s3605)), (int16_t)(safe_mul_func_int16_t_s_s((p_1018->g_725.s0 = (l_827[2][5] = (safe_mul_func_int8_t_s_s(l_804.s7, (-1L))))), p_1018->g_70))))), ((VECTOR(int16_t, 16))(l_828.s2dfda7d74fdde03e)).s150f))).z), 7)) ^ (((((*p_1018->g_217) |= (p_1018->g_97 , ((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((void*)0 == l_833) & (safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0x18L, (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1018->global_1_offset, get_global_id(1), 10), 0L)))), l_791)), (-1L)))), l_723.w)), 5L)) , l_765))) != 0xA4F6CBF6L) , l_817) != p_1018->g_265.s0)) <= p_1018->g_165.f3);
                    }
                    if (l_784.s5)
                    { /* block id: 421 */
                        int8_t *l_843 = &p_1018->g_97;
                        int32_t l_845[5][9][3] = {{{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}},{{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}},{{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}},{{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}},{{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}}};
                        uint8_t **l_847 = &l_846;
                        int8_t ***l_849 = &l_728;
                        int i, j, k;
                        if (p_14)
                            break;
                        (*p_1018->g_848) = &l_803;
                        l_827[2][5] = (((*l_849) = (*p_1018->g_730)) == l_850);
                    }
                    else
                    { /* block id: 427 */
                        int32_t *l_851 = &p_1018->g_3;
                        int32_t *l_852 = (void*)0;
                        int32_t *l_854 = &l_803;
                        int32_t *l_855 = (void*)0;
                        int32_t *l_856 = &p_1018->g_165.f1;
                        int32_t *l_857 = &p_1018->g_10;
                        int32_t *l_858[8][5] = {{&l_775,&l_827[2][5],&p_1018->g_10,(void*)0,&p_1018->g_10},{&l_775,&l_827[2][5],&p_1018->g_10,(void*)0,&p_1018->g_10},{&l_775,&l_827[2][5],&p_1018->g_10,(void*)0,&p_1018->g_10},{&l_775,&l_827[2][5],&p_1018->g_10,(void*)0,&p_1018->g_10},{&l_775,&l_827[2][5],&p_1018->g_10,(void*)0,&p_1018->g_10},{&l_775,&l_827[2][5],&p_1018->g_10,(void*)0,&p_1018->g_10},{&l_775,&l_827[2][5],&p_1018->g_10,(void*)0,&p_1018->g_10},{&l_775,&l_827[2][5],&p_1018->g_10,(void*)0,&p_1018->g_10}};
                        int i, j;
                        l_859--;
                    }
                }
                else
                { /* block id: 430 */
                    uint32_t l_888 = 4294967291UL;
                    for (p_1018->g_165.f2 = 0; (p_1018->g_165.f2 > 3); ++p_1018->g_165.f2)
                    { /* block id: 433 */
                        union U2 **l_882[8] = {&l_880,&l_880,&l_880,&l_880,&l_880,&l_880,&l_880,&l_880};
                        int16_t *l_887[2][4] = {{&p_1018->g_125,&p_1018->g_50,&p_1018->g_125,&p_1018->g_125},{&p_1018->g_125,&p_1018->g_50,&p_1018->g_125,&p_1018->g_125}};
                        VECTOR(int8_t, 8) l_895 = (VECTOR(int8_t, 8))(0x73L, (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, 0x4CL), 0x4CL), 0x4CL, 0x73L, 0x4CL);
                        int8_t l_896 = 0x54L;
                        int64_t ***l_912[10] = {&p_1018->g_872,(void*)0,&p_1018->g_872,(void*)0,&p_1018->g_872,&p_1018->g_872,(void*)0,&p_1018->g_872,(void*)0,&p_1018->g_872};
                        int64_t ****l_911 = &l_912[4];
                        int64_t ****l_913 = (void*)0;
                        int64_t ***l_915[8][8][4] = {{{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0}},{{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0}},{{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0}},{{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0}},{{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0}},{{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0}},{{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0}},{{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0},{&p_1018->g_872,&p_1018->g_872,&p_1018->g_872,(void*)0}}};
                        int64_t ****l_914 = &l_915[5][7][0];
                        int i, j, k;
                        (*p_1018->g_217) = ((safe_lshift_func_int16_t_s_u((p_1018->g_725.s1 ^= (safe_mul_func_int8_t_s_s(l_817, (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(0x7B56L, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 16))(p_1018->g_870.xxxxxyxxyxyxyxyx)).sc673, (int16_t)(((p_1018->g_871 != &p_1018->g_872) >= (((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xB87927B8L, 1UL)).yxyyxyyx)).s0115574231616126)).odd)).s6 & (safe_sub_func_uint8_t_u_u(0xA6L, p_1018->g_136))) , (safe_sub_func_int16_t_s_s((0xF57CL ^ (safe_lshift_func_uint16_t_u_s(2UL, (p_12 != ((l_883 = l_880) != l_885[8]))))), p_12))) , l_804.s6)) , p_14), (int16_t)0x28B2L))), 0x765AL, 0x666EL, 0x59C3L)).s34, ((VECTOR(int16_t, 2))((-7L)))))), 0x7DF6L, 0x168BL)).lo)), ((VECTOR(int16_t, 2))(0x0B54L))))).xyyyxyyyxxyxyyxx)).s8c, ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 2))(0L))))))), 0x0DD4L, 0x2A65L)).x, p_1018->g_104.s2))))), p_1018->g_56[1][1][0])) == 0x5B10L);
                        (*p_1018->g_217) |= p_14;
                        p_1018->g_344.s6 &= ((((~l_888) <= p_1018->g_165.f2) <= (safe_rshift_func_uint8_t_u_s((p_1018->g_742[0][0][0].f0.f3 | (safe_sub_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(p_12, ((VECTOR(int8_t, 4))(l_895.s0363)).w)) , l_896), (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((((*l_914) = ((*l_911) = ((+(safe_mod_func_int16_t_s_s((l_907 == ((safe_sub_func_int8_t_s_s(0x38L, 0x02L)) , l_910)), p_12))) , &p_1018->g_872))) == l_916), 1UL)) , l_776) | (**l_910)), p_13)), 0x96L)), l_888))))), (**l_907)))) == 0x57E388A1L);
                    }
                }
                if (p_12)
                    break;
                (*p_1018->g_918) = l_917;
            }
            if (((((((**l_907) < ((safe_lshift_func_uint16_t_u_u(FAKE_DIVERGE(p_1018->global_1_offset, get_global_id(1), 10), ((void*)0 != l_917))) & p_12)) == (safe_unary_minus_func_int64_t_s((l_817 = ((0x669EL > ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_922.yyyxxxxyyyxyxyyx)))), ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))((safe_div_func_uint16_t_u_u(((p_1018->g_925 != ((*l_930) = l_928)) >= (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_933.xy)).xxyy)).wyzzwzxwxxzwyzzz, ((VECTOR(int32_t, 16))((safe_rshift_func_uint8_t_u_s((((**l_907) ^ (((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(p_1018->g_936.zxwxwwywzzwyyyyw)), ((VECTOR(int64_t, 8))(l_937.s68746abf)).s0066725747650740, ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_938.s0360)), 1L, (((safe_rshift_func_int8_t_s_s((!(safe_add_func_uint32_t_u_u(p_14, p_1018->g_886.f0.f0))), 1)) , p_1018->g_943) < 4294967295UL), (-1L), 6L)).s2260451163613071)).sae67)).wxzwwzzwwwyzxzzw, ((VECTOR(int64_t, 16))(1L)), ((VECTOR(int64_t, 16))(0x621C15E607B9CAD5L))))).s06)).xxyxyxyyxyxyxxxy)).s61e4)).hi, ((VECTOR(int64_t, 2))(0x36F5E59BCD2D5151L))))).xxyyyyyyyxxyyyyy))).s8d)), 0x76CFED571897960DL, ((VECTOR(int64_t, 2))(6L)), p_12, (-3L), 0L)), ((VECTOR(int64_t, 8))(0x59EB713DCF1EE05CL)), ((VECTOR(int64_t, 8))((-8L)))))).s1 , (**l_907))) == p_12), 7)), ((VECTOR(int32_t, 8))(0x342F359CL)), (*p_1018->g_842), 1L, ((VECTOR(int32_t, 2))((-1L))), (-2L), 1L, 0x449BFFEDL))))).s2, (*p_1018->g_217)))), p_14)), p_1018->g_276.s2, 1L, 8L, l_776, p_12, 3L, (-1L), 1L, 0x1857L, ((VECTOR(int16_t, 4))(0x753AL)), 0x77CBL, 0x0979L)), ((VECTOR(int16_t, 16))(0x3D38L)))))))).s15, ((VECTOR(int16_t, 2))((-1L)))))).even) ^ l_734.f0))))) ^ l_743) > l_827[2][5]) , (-1L)))
            { /* block id: 448 */
                int32_t l_959 = 3L;
                int32_t l_960 = 0x79B1C11DL;
                int32_t l_968[3][9] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                int i, j;
                (*p_1018->g_217) = 0L;
                for (p_1018->g_165.f1 = 0; (p_1018->g_165.f1 <= 17); ++p_1018->g_165.f1)
                { /* block id: 452 */
                    uint32_t l_965 = 0x70CDA4A9L;
                    int32_t *l_969 = &l_818;
                    for (p_12 = 0; (p_12 >= (-11)); --p_12)
                    { /* block id: 455 */
                        int32_t *l_955 = &p_1018->g_3;
                        int32_t *l_956 = (void*)0;
                        int32_t *l_957[3];
                        int32_t l_963 = (-1L);
                        int i;
                        for (i = 0; i < 3; i++)
                            l_957[i] = &p_1018->g_56[6][1][0];
                        l_965--;
                    }
                    (*l_969) |= l_968[2][8];
                    return (*p_1018->g_216);
                }
                if (p_12)
                    continue;
                (*l_907) = (*p_1018->g_216);
            }
            else
            { /* block id: 463 */
                VECTOR(int16_t, 2) l_980 = (VECTOR(int16_t, 2))((-1L), 0x21D1L);
                int16_t *l_984 = (void*)0;
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1018->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[(safe_mod_func_uint32_t_u_u((((p_1018->g_884[4].f0.f4 | (safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(0, 1), ((safe_sub_func_int64_t_s_s(((((p_12 >= ((safe_div_func_int32_t_s_s((((safe_mod_func_int8_t_s_s(0L, 0xF7L)) && (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 4))(l_980.yxyx)).xzwywxzyyxyzzxwy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x274AL, 0x7F27L)), 0x329DL, (safe_mod_func_uint32_t_u_u(((p_13 = ((l_983 == (void*)0) >= GROUP_DIVERGE(1, 1))) >= 0L), GROUP_DIVERGE(0, 1))), 9L, (l_961 <= (**l_907)), 0L, ((VECTOR(int16_t, 8))((-6L))), 3L))))).lo, ((VECTOR(int16_t, 8))(0x0005L))))).s0207600075713466, (int16_t)p_12))).s96da)).wxyyyxxwxzwywxyz, ((VECTOR(int16_t, 16))(0x338EL)), ((VECTOR(int16_t, 16))(0x4851L))))).sb, 0x277DL))) && l_985[1]), p_1018->g_754.s2)) == 65528UL)) || 0x30C1L) , p_13) & FAKE_DIVERGE(p_1018->local_2_offset, get_local_id(2), 10)), 18446744073709551615UL)) && p_14)))) && (-1L)) != p_1018->g_42), 10))][(safe_mod_func_uint32_t_u_u(p_1018->tid, 21))]));
            }
        }
        (*p_1018->g_842) = (!(*p_1018->g_9));
    }
    else
    { /* block id: 471 */
        int32_t *l_986 = &l_958;
        int32_t *l_987 = &l_964;
        int32_t *l_988 = &p_1018->g_56[0][0][0];
        int32_t *l_989 = &l_817;
        int32_t *l_990 = &p_1018->g_262;
        int32_t *l_991 = &p_1018->g_165.f1;
        int32_t *l_992 = &l_958;
        int32_t *l_993 = &p_1018->g_165.f1;
        int32_t *l_994 = &p_1018->g_56[2][1][1];
        int32_t *l_995[10];
        uint8_t l_1006 = 0x82L;
        int i;
        for (i = 0; i < 10; i++)
            l_995[i] = (void*)0;
        l_1006++;
        (*l_988) = (*l_987);
    }
    return (*p_1018->g_216);
}


/* ------------------------------------------ */
/* 
 * reads : p_1018->l_comm_values p_1018->g_comm_values p_1018->g_9 p_1018->g_3 p_1018->g_56 p_1018->g_57 p_1018->g_83 p_1018->g_70 p_1018->g_10 p_1018->g_165 p_1018->g_136 p_1018->g_200 p_1018->g_97 p_1018->g_55 p_1018->g_216 p_1018->g_257 p_1018->g_217 p_1018->g_113.f2 p_1018->g_265 p_1018->g_276 p_1018->g_278 p_1018->g_104 p_1018->g_284 p_1018->g_285 p_1018->g_288 p_1018->g_303 p_1018->g_305 p_1018->g_262 p_1018->g_53 p_1018->g_344 p_1018->g_716 p_1018->g_718
 * writes: p_1018->g_10 p_1018->g_42 p_1018->g_50 p_1018->g_53 p_1018->g_55 p_1018->g_56 p_1018->g_57 p_1018->g_97 p_1018->g_104 p_1018->g_136 p_1018->g_214 p_1018->g_217 p_1018->g_70 p_1018->g_165.f1 p_1018->g_165.f7.f0 p_1018->g_262 p_1018->g_125 p_1018->g_284 p_1018->g_165.f3 p_1018->g_303 p_1018->g_288 p_1018->g_165.f5 p_1018->g_165.f7 p_1018->g_718
 */
int32_t  func_20(int32_t  p_21, struct S3 * p_1018)
{ /* block id: 7 */
    int32_t *l_22[2][5] = {{&p_1018->g_10,&p_1018->g_10,&p_1018->g_10,&p_1018->g_10,&p_1018->g_10},{&p_1018->g_10,&p_1018->g_10,&p_1018->g_10,&p_1018->g_10,&p_1018->g_10}};
    int64_t l_24 = 0x0E0EA626AECE0115L;
    uint64_t l_25[2][8][7] = {{{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL}},{{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL},{0UL,0x65B212F019D465F4L,0x1BFD6FFBBA6F2DB4L,0xDD571B4D09D52FFAL,0xB8161DBFA2F90942L,1UL,0UL}}};
    uint64_t l_40 = 18446744073709551614UL;
    uint8_t *l_41 = &p_1018->g_42;
    int64_t *l_51 = &l_24;
    int64_t *l_52 = &p_1018->g_53[4];
    int64_t *l_54 = (void*)0;
    int i, j, k;
    --l_25[0][4][0];
    (*p_1018->g_9) = (safe_lshift_func_uint8_t_u_s((((safe_mul_func_uint8_t_u_u(1UL, p_1018->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1018->tid, 21))])) & ((VECTOR(int16_t, 2))(0x298FL, 0x4433L)).hi) == p_1018->g_comm_values[p_1018->tid]), 6));
    p_1018->g_718 ^= func_32(func_36(((*l_41) = l_40), p_1018->g_3, (safe_add_func_uint8_t_u_u(func_45(p_1018->g_comm_values[p_1018->tid], ((((*l_51) = (safe_lshift_func_uint8_t_u_s((p_1018->g_50 = p_1018->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1018->tid, 21))]), 4))) , (p_1018->g_56[2][1][1] ^= (p_1018->g_55.y = ((*l_52) = 0x1B92FD598C55CA0DL)))) , (--p_1018->g_57)), p_1018), (!(safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((void*)0 == l_41), (safe_unary_minus_func_uint64_t_u(p_1018->g_165.f5)))), p_1018->g_278.s5))))), p_1018), &p_1018->g_3, p_1018->g_83, p_1018);
    return (*p_1018->g_9);
}


/* ------------------------------------------ */
/* 
 * reads : p_1018->g_217 p_1018->g_56 p_1018->g_262
 * writes: p_1018->g_56 p_1018->g_262
 */
int32_t  func_32(int32_t * p_33, int32_t * p_34, int8_t * p_35, struct S3 * p_1018)
{ /* block id: 377 */
    int64_t l_717 = (-1L);
    (*p_1018->g_217) &= 0x46AFC312L;
    return l_717;
}


/* ------------------------------------------ */
/* 
 * reads : p_1018->g_262 p_1018->g_257 p_1018->g_83 p_1018->g_70 p_1018->g_217 p_1018->g_53 p_1018->g_165.f5 p_1018->g_comm_values p_1018->g_344 p_1018->g_165.f3 p_1018->g_9 p_1018->g_10 p_1018->g_216 p_1018->g_716
 * writes: p_1018->g_165.f5 p_1018->g_262 p_1018->g_165.f7 p_1018->g_165.f3 p_1018->g_217
 */
int32_t * func_36(uint8_t  p_37, uint64_t  p_38, int32_t  p_39, struct S3 * p_1018)
{ /* block id: 105 */
    int32_t *l_312 = &p_1018->g_262;
    int64_t *l_336[1][4][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_340 = 0x6664A99CL;
    int32_t l_342 = 0x338B5462L;
    struct S0 l_715 = {4294967295UL};
    int i, j, k;
    l_312 = l_312;
    if ((*l_312))
    { /* block id: 107 */
        uint8_t l_313 = 0xD2L;
        struct S0 l_326 = {0x009823C3L};
        VECTOR(int8_t, 16) l_335 = (VECTOR(int8_t, 16))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0x48L), 0x48L), 0x48L, 0x6AL, 0x48L, (VECTOR(int8_t, 2))(0x6AL, 0x48L), (VECTOR(int8_t, 2))(0x6AL, 0x48L), 0x6AL, 0x48L, 0x6AL, 0x48L);
        int16_t *l_337 = &p_1018->g_165.f5;
        int16_t *l_338 = (void*)0;
        int16_t *l_339[3];
        uint8_t *l_341[5][7] = {{&p_1018->g_165.f9,(void*)0,&p_1018->g_165.f9,&p_1018->g_165.f9,(void*)0,&p_1018->g_165.f9,&p_1018->g_165.f9},{&p_1018->g_165.f9,(void*)0,&p_1018->g_165.f9,&p_1018->g_165.f9,(void*)0,&p_1018->g_165.f9,&p_1018->g_165.f9},{&p_1018->g_165.f9,(void*)0,&p_1018->g_165.f9,&p_1018->g_165.f9,(void*)0,&p_1018->g_165.f9,&p_1018->g_165.f9},{&p_1018->g_165.f9,(void*)0,&p_1018->g_165.f9,&p_1018->g_165.f9,(void*)0,&p_1018->g_165.f9,&p_1018->g_165.f9},{&p_1018->g_165.f9,(void*)0,&p_1018->g_165.f9,&p_1018->g_165.f9,(void*)0,&p_1018->g_165.f9,&p_1018->g_165.f9}};
        VECTOR(int32_t, 4) l_345 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x2F425CAEL), 0x2F425CAEL);
        int i, j;
        for (i = 0; i < 3; i++)
            l_339[i] = &p_1018->g_50;
        if (((l_313 , &p_1018->g_53[4]) == (((safe_mod_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((l_342 |= ((l_340 = (p_1018->g_257.x <= ((*l_312) = ((safe_add_func_int16_t_s_s((((VECTOR(int64_t, 4))((((safe_rshift_func_int16_t_s_s((l_326 , p_38), 11)) > (safe_mod_func_uint32_t_u_u((0x77CF2D83C8EEB1B3L < FAKE_DIVERGE(p_1018->local_2_offset, get_local_id(2), 10)), ((safe_div_func_int8_t_s_s((((*l_337) &= ((((((safe_rshift_func_uint8_t_u_s(0x16L, (*p_1018->g_83))) & GROUP_DIVERGE(1, 1)) , (safe_add_func_uint32_t_u_u((((VECTOR(int8_t, 4))(2L, ((VECTOR(int8_t, 2))(l_335.s5b)), 0x45L)).z == (((void*)0 == l_336[0][2][0]) , 0x51L)), (*p_1018->g_217)))) != l_335.se) ^ p_37) , p_1018->g_53[4])) || p_39), p_39)) && p_38)))) , (*l_312)), ((VECTOR(int64_t, 2))(7L)), (-9L))).z , l_326.f0), p_38)) & 0x65411332B8C5BE1EL)))) <= p_1018->g_comm_values[p_1018->tid])), l_335.sb)), FAKE_DIVERGE(p_1018->group_1_offset, get_group_id(1), 10))), l_335.sc)), p_38)) ^ p_1018->g_53[4]) , (void*)0)))
        { /* block id: 112 */
            VECTOR(int32_t, 4) l_343 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2A15524EL), 0x2A15524EL);
            int i;
            (*l_312) |= ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_343.zx)).xyxyyxyxyxyyxxxy)).even, ((VECTOR(int32_t, 8))(p_1018->g_344.s17042564)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_345.wy)).yxxxxxxx))))).s0;
            (*l_312) ^= (safe_lshift_func_uint16_t_u_u((0x244E82E8FB40FC71L == (p_38 | p_39)), 3));
            (*p_1018->g_217) ^= (-4L);
        }
        else
        { /* block id: 116 */
            struct S0 *l_348 = &p_1018->g_165.f7;
            (*l_348) = l_326;
        }
    }
    else
    { /* block id: 119 */
        int64_t *l_352 = (void*)0;
        int64_t **l_351 = &l_352;
        int32_t *l_381 = &p_1018->g_56[4][0][1];
        for (p_1018->g_165.f3 = 0; (p_1018->g_165.f3 <= 9); p_1018->g_165.f3 = safe_add_func_int64_t_s_s(p_1018->g_165.f3, 6))
        { /* block id: 122 */
            int64_t ***l_353 = &l_351;
            int64_t **l_355 = &l_352;
            int64_t ***l_354 = &l_355;
            int64_t **l_357[2][9] = {{&l_352,(void*)0,&l_352,&l_352,(void*)0,&l_352,&l_352,(void*)0,&l_352},{&l_352,(void*)0,&l_352,&l_352,(void*)0,&l_352,&l_352,(void*)0,&l_352}};
            int64_t ***l_356 = &l_357[1][2];
            int i, j;
            (*l_356) = ((*l_354) = ((*l_353) = l_351));
            (*p_1018->g_217) &= (*p_1018->g_9);
        }
        for (p_37 = 0; (p_37 < 3); p_37 = safe_add_func_uint64_t_u_u(p_37, 3))
        { /* block id: 130 */
            int32_t **l_382 = (void*)0;
            if ((atomic_inc(&p_1018->l_atomic_input[0]) == 3))
            { /* block id: 132 */
                int32_t l_360[7][1][5] = {{{0x3CC9D723L,8L,8L,0x3CC9D723L,1L}},{{0x3CC9D723L,8L,8L,0x3CC9D723L,1L}},{{0x3CC9D723L,8L,8L,0x3CC9D723L,1L}},{{0x3CC9D723L,8L,8L,0x3CC9D723L,1L}},{{0x3CC9D723L,8L,8L,0x3CC9D723L,1L}},{{0x3CC9D723L,8L,8L,0x3CC9D723L,1L}},{{0x3CC9D723L,8L,8L,0x3CC9D723L,1L}}};
                VECTOR(int32_t, 8) l_374 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                int32_t l_375 = 0x5A9680D9L;
                int32_t l_376 = 1L;
                uint16_t l_377[7][6][6] = {{{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL}},{{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL}},{{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL}},{{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL}},{{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL}},{{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL}},{{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL},{0xCD56L,0xDD4BL,0UL,1UL,0xFA23L,65532UL}}};
                int16_t l_378 = 0x4303L;
                int64_t l_379 = 0x6079B65197E051DFL;
                uint32_t l_380 = 0x57CFADEEL;
                int i, j, k;
                for (l_360[6][0][4] = 0; (l_360[6][0][4] > (-30)); --l_360[6][0][4])
                { /* block id: 135 */
                    uint32_t l_363 = 1UL;
                    int32_t l_364 = 0x466CE4FCL;
                    uint16_t l_365 = 0x53CFL;
                    uint64_t l_366 = 0x2A2B2E422E0EE37AL;
                    l_364 = l_363;
                    if ((l_366 = (l_365 , 0x4EDFAB53L)))
                    { /* block id: 138 */
                        int64_t l_367[5] = {0L,0L,0L,0L,0L};
                        uint8_t l_368 = 7UL;
                        uint16_t l_369 = 0x717BL;
                        int i;
                        l_368 |= l_367[4];
                        l_369 = (-4L);
                    }
                    else
                    { /* block id: 141 */
                        uint8_t l_370 = 0xB6L;
                        struct S0 l_372 = {0xEFBD0D51L};
                        struct S0 *l_371 = &l_372;
                        struct S0 *l_373[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_373[i] = &l_372;
                        l_370 = 0x3C2ED549L;
                        l_373[2] = l_371;
                    }
                }
                l_378 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 4))(l_374.s7616)).wzzywzww, (int32_t)(l_375 , l_376), (int32_t)(l_374.s0 = (l_377[6][0][4] = 0x64DB2E43L))))))).s7;
                l_380 = l_379;
                unsigned int result = 0;
                int l_360_i0, l_360_i1, l_360_i2;
                for (l_360_i0 = 0; l_360_i0 < 7; l_360_i0++) {
                    for (l_360_i1 = 0; l_360_i1 < 1; l_360_i1++) {
                        for (l_360_i2 = 0; l_360_i2 < 5; l_360_i2++) {
                            result += l_360[l_360_i0][l_360_i1][l_360_i2];
                        }
                    }
                }
                result += l_374.s7;
                result += l_374.s6;
                result += l_374.s5;
                result += l_374.s4;
                result += l_374.s3;
                result += l_374.s2;
                result += l_374.s1;
                result += l_374.s0;
                result += l_375;
                result += l_376;
                int l_377_i0, l_377_i1, l_377_i2;
                for (l_377_i0 = 0; l_377_i0 < 7; l_377_i0++) {
                    for (l_377_i1 = 0; l_377_i1 < 6; l_377_i1++) {
                        for (l_377_i2 = 0; l_377_i2 < 6; l_377_i2++) {
                            result += l_377[l_377_i0][l_377_i1][l_377_i2];
                        }
                    }
                }
                result += l_378;
                result += l_379;
                result += l_380;
                atomic_add(&p_1018->l_special_values[0], result);
            }
            else
            { /* block id: 150 */
                (1 + 1);
            }
            (*p_1018->g_216) = l_381;
        }
    }
    if ((atomic_inc(&p_1018->l_atomic_input[2]) == 0))
    { /* block id: 157 */
        uint32_t l_383[8] = {1UL,0x5C9DB548L,1UL,1UL,0x5C9DB548L,1UL,1UL,0x5C9DB548L};
        union U2 l_384 = {{-1L,0x33487EE1L,0xE28A3B6B4E82D966L,6L,0x1874F25BF8AD4E4DL,0L,0x5057E2BCC1AD29EEL,{0x9F96FA1EL},0x93L,0x02L}};/* VOLATILE GLOBAL l_384 */
        uint32_t l_385 = 4294967295UL;
        struct S0 l_386[1] = {{0x88744FB4L}};
        struct S0 l_387 = {4294967295UL};
        struct S0 l_388 = {0x1C10BEC9L};
        uint32_t l_389 = 0xAAB8874AL;
        VECTOR(int16_t, 8) l_602 = (VECTOR(int16_t, 8))(0x2D43L, (VECTOR(int16_t, 4))(0x2D43L, (VECTOR(int16_t, 2))(0x2D43L, 0L), 0L), 0L, 0x2D43L, 0L);
        VECTOR(int16_t, 4) l_603 = (VECTOR(int16_t, 4))(0x5A80L, (VECTOR(int16_t, 2))(0x5A80L, 0x573AL), 0x573AL);
        VECTOR(uint16_t, 2) l_604 = (VECTOR(uint16_t, 2))(65533UL, 65527UL);
        VECTOR(uint8_t, 2) l_605 = (VECTOR(uint8_t, 2))(0xEDL, 255UL);
        int16_t l_606 = 7L;
        int16_t l_607 = 0x12F4L;
        uint32_t l_608 = 0x4CFCB39FL;
        int i;
        l_383[2] = (-7L);
        l_388 = (l_384 , (l_387 = (l_385 , l_386[0])));
        if (l_389)
        { /* block id: 161 */
            uint8_t l_390 = 8UL;
            int32_t l_589 = 0x773219B7L;
            int32_t *l_588 = &l_589;
            int32_t *l_590 = &l_589;
            int32_t *l_591[1];
            union U2 l_593[1] = {{{0x47L,-1L,18446744073709551608UL,0x34F64F26L,18446744073709551611UL,0x7784L,0x7082EFFA251B305CL,{4294967290UL},0xE3L,0x88L}}};
            union U2 *l_592 = &l_593[0];
            union U2 *l_594 = &l_593[0];
            union U2 *l_595 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_591[i] = &l_589;
            if (l_390)
            { /* block id: 162 */
                int32_t l_391 = 0x050D0A11L;
                VECTOR(int32_t, 16) l_403 = (VECTOR(int32_t, 16))(0x7EBA1D3AL, (VECTOR(int32_t, 4))(0x7EBA1D3AL, (VECTOR(int32_t, 2))(0x7EBA1D3AL, 0L), 0L), 0L, 0x7EBA1D3AL, 0L, (VECTOR(int32_t, 2))(0x7EBA1D3AL, 0L), (VECTOR(int32_t, 2))(0x7EBA1D3AL, 0L), 0x7EBA1D3AL, 0L, 0x7EBA1D3AL, 0L);
                uint8_t l_419 = 254UL;
                int i;
                for (l_391 = 0; (l_391 == 11); l_391 = safe_add_func_int8_t_s_s(l_391, 3))
                { /* block id: 165 */
                    uint16_t l_394 = 0x9A1AL;
                    if (l_394)
                    { /* block id: 166 */
                        uint8_t l_395 = 0x83L;
                        uint8_t l_396 = 0xA8L;
                        int32_t l_397 = 1L;
                        struct S0 l_398 = {0xB43B9F2DL};
                        l_384.f0.f1 = l_395;
                        l_396 = 2L;
                        l_384.f0.f1 = l_397;
                        l_387 = l_398;
                    }
                    else
                    { /* block id: 171 */
                        int32_t *l_399[5];
                        int32_t l_401[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                        int32_t *l_400[3][7][8] = {{{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]}},{{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]}},{{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]},{&l_401[6],&l_401[6],&l_401[4],&l_401[6],&l_401[6],&l_401[6],&l_401[6],&l_401[6]}}};
                        uint32_t l_402 = 0x1510A018L;
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_399[i] = (void*)0;
                        l_400[0][2][2] = l_399[4];
                        l_384.f0.f1 &= l_402;
                    }
                }
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_403.sf968)), ((VECTOR(int32_t, 2))(1L, 0x344E91C9L)), 0L, 1L)).s4)
                { /* block id: 176 */
                    uint32_t l_404 = 0xEE6B65DAL;
                    l_403.s4 &= 0x79F91D28L;
                    l_391 &= (l_403.s7 = (-9L));
                    --l_404;
                }
                else
                { /* block id: 181 */
                    VECTOR(int32_t, 4) l_407 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x54DBD5B0L), 0x54DBD5B0L);
                    VECTOR(int32_t, 4) l_408 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x1BAF866CL), 0x1BAF866CL);
                    uint32_t l_409 = 0UL;
                    int i;
                    l_409 = (l_391 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_407.wxxxzwxw)))).even, ((VECTOR(int32_t, 4))(l_408.xxxz))))).even)).xyyyyyyyxyyyyxyy)).sf);
                    for (l_407.x = 0; (l_407.x == 22); l_407.x++)
                    { /* block id: 186 */
                        uint32_t l_412 = 0xC6EDAE68L;
                        VECTOR(int32_t, 2) l_415 = (VECTOR(int32_t, 2))(0L, 0x0B6CB277L);
                        int32_t *l_416 = (void*)0;
                        int32_t *l_417 = (void*)0;
                        int32_t *l_418 = (void*)0;
                        int i;
                        l_412--;
                        l_403.s8 = ((VECTOR(int32_t, 2))(l_415.yx)).lo;
                        l_417 = l_416;
                        l_418 = (void*)0;
                    }
                }
                if (l_419)
                { /* block id: 193 */
                    int8_t l_420[8][2];
                    VECTOR(uint32_t, 2) l_421 = (VECTOR(uint32_t, 2))(0xCD98FA9AL, 4294967286UL);
                    int32_t l_422[7][1][9] = {{{0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L}},{{0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L}},{{0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L}},{{0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L}},{{0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L}},{{0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L}},{{0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L,0x3C9FF2C2L}}};
                    uint32_t l_423 = 0xC383ADA9L;
                    int16_t l_426 = 0x3359L;
                    int32_t l_427 = 0x0E05967DL;
                    union U2 l_428 = {{0x18L,-1L,18446744073709551610UL,-1L,0UL,0x58B1L,-1L,{0xE9BC6FBDL},0UL,7UL}};/* VOLATILE GLOBAL l_428 */
                    int8_t l_429[1][7] = {{0x50L,(-1L),0x50L,0x50L,(-1L),0x50L,0x50L}};
                    uint32_t l_430 = 4294967295UL;
                    uint32_t l_431 = 0UL;
                    int32_t l_432 = 3L;
                    int32_t l_434 = 1L;
                    int32_t *l_433[7][8][4] = {{{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434}},{{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434}},{{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434}},{{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434}},{{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434}},{{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434}},{{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434,&l_434}}};
                    int32_t *l_435[9] = {&l_434,&l_434,&l_434,&l_434,&l_434,&l_434,&l_434,&l_434,&l_434};
                    int64_t l_469 = 0x7C26875A8B4412E7L;
                    uint16_t l_470 = 0x503CL;
                    VECTOR(uint64_t, 8) l_471 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xF7713BEE50B4AEFBL), 0xF7713BEE50B4AEFBL), 0xF7713BEE50B4AEFBL, 0UL, 0xF7713BEE50B4AEFBL);
                    int32_t l_472 = (-1L);
                    union U2 l_473 = {{0L,0x25433570L,1UL,0x785A7A83L,0xE5543A251F31AC1AL,0x2F68L,-1L,{0x30DF8A52L},0x60L,250UL}};/* VOLATILE GLOBAL l_473 */
                    int64_t l_474 = (-1L);
                    uint8_t l_475 = 4UL;
                    VECTOR(int32_t, 16) l_476 = (VECTOR(int32_t, 16))(0x79361D68L, (VECTOR(int32_t, 4))(0x79361D68L, (VECTOR(int32_t, 2))(0x79361D68L, 0x75247BCCL), 0x75247BCCL), 0x75247BCCL, 0x79361D68L, 0x75247BCCL, (VECTOR(int32_t, 2))(0x79361D68L, 0x75247BCCL), (VECTOR(int32_t, 2))(0x79361D68L, 0x75247BCCL), 0x79361D68L, 0x75247BCCL, 0x79361D68L, 0x75247BCCL);
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_420[i][j] = 0x06L;
                    }
                    l_435[1] = (l_420[0][0] , (((VECTOR(uint32_t, 16))(4294967295UL, ((VECTOR(uint32_t, 2))(l_421.yy)), 0x6529C741L, 0x04A13A5DL, 0xEEE63311L, 0x7CB186C5L, 0x96D70EA3L, (l_423++), FAKE_DIVERGE(p_1018->local_1_offset, get_local_id(1), 10), 0x42652061L, (((((l_391 = l_426) , l_427) , l_428) , l_429[0][0]) , (l_431 = l_430)), l_432, 0x0719BB40L, 6UL, 0x935297C7L)).se , l_433[2][2][2]));
                    if ((l_391 ^= 4L))
                    { /* block id: 199 */
                        uint8_t l_436 = 4UL;
                        int32_t l_437 = 0x128351B1L;
                        VECTOR(uint32_t, 8) l_438 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x20244C1EL), 0x20244C1EL), 0x20244C1EL, 4294967295UL, 0x20244C1EL);
                        VECTOR(uint32_t, 2) l_439 = (VECTOR(uint32_t, 2))(1UL, 0x305ED13AL);
                        VECTOR(uint32_t, 8) l_440 = (VECTOR(uint32_t, 8))(0xCA28B9F3L, (VECTOR(uint32_t, 4))(0xCA28B9F3L, (VECTOR(uint32_t, 2))(0xCA28B9F3L, 0xE683CA41L), 0xE683CA41L), 0xE683CA41L, 0xCA28B9F3L, 0xE683CA41L);
                        uint32_t l_441 = 0x3CC06D9DL;
                        uint8_t l_442[8][9] = {{1UL,0x3FL,0xD9L,0UL,255UL,0x1AL,7UL,0xE8L,0x3FL},{1UL,0x3FL,0xD9L,0UL,255UL,0x1AL,7UL,0xE8L,0x3FL},{1UL,0x3FL,0xD9L,0UL,255UL,0x1AL,7UL,0xE8L,0x3FL},{1UL,0x3FL,0xD9L,0UL,255UL,0x1AL,7UL,0xE8L,0x3FL},{1UL,0x3FL,0xD9L,0UL,255UL,0x1AL,7UL,0xE8L,0x3FL},{1UL,0x3FL,0xD9L,0UL,255UL,0x1AL,7UL,0xE8L,0x3FL},{1UL,0x3FL,0xD9L,0UL,255UL,0x1AL,7UL,0xE8L,0x3FL},{1UL,0x3FL,0xD9L,0UL,255UL,0x1AL,7UL,0xE8L,0x3FL}};
                        VECTOR(uint32_t, 4) l_443 = (VECTOR(uint32_t, 4))(0x02D4C756L, (VECTOR(uint32_t, 2))(0x02D4C756L, 0UL), 0UL);
                        VECTOR(uint32_t, 4) l_444 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967289UL), 4294967289UL);
                        VECTOR(uint32_t, 16) l_445 = (VECTOR(uint32_t, 16))(0x2C98C4CCL, (VECTOR(uint32_t, 4))(0x2C98C4CCL, (VECTOR(uint32_t, 2))(0x2C98C4CCL, 4294967291UL), 4294967291UL), 4294967291UL, 0x2C98C4CCL, 4294967291UL, (VECTOR(uint32_t, 2))(0x2C98C4CCL, 4294967291UL), (VECTOR(uint32_t, 2))(0x2C98C4CCL, 4294967291UL), 0x2C98C4CCL, 4294967291UL, 0x2C98C4CCL, 4294967291UL);
                        VECTOR(uint32_t, 2) l_446 = (VECTOR(uint32_t, 2))(0xCF81BAA2L, 0x9B3CD61CL);
                        VECTOR(uint32_t, 4) l_447 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x846A13A8L), 0x846A13A8L);
                        VECTOR(uint32_t, 2) l_448 = (VECTOR(uint32_t, 2))(4294967292UL, 0xE6A10C12L);
                        VECTOR(uint32_t, 8) l_449 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x1088CE8FL), 0x1088CE8FL), 0x1088CE8FL, 1UL, 0x1088CE8FL);
                        VECTOR(uint32_t, 4) l_450 = (VECTOR(uint32_t, 4))(0xE8ADD36BL, (VECTOR(uint32_t, 2))(0xE8ADD36BL, 4294967286UL), 4294967286UL);
                        VECTOR(uint32_t, 16) l_451 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint32_t, 2))(1UL, 0UL), (VECTOR(uint32_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
                        VECTOR(uint32_t, 4) l_452 = (VECTOR(uint32_t, 4))(0xA2DBC4C0L, (VECTOR(uint32_t, 2))(0xA2DBC4C0L, 4294967295UL), 4294967295UL);
                        VECTOR(uint32_t, 8) l_453 = (VECTOR(uint32_t, 8))(0xCF09A673L, (VECTOR(uint32_t, 4))(0xCF09A673L, (VECTOR(uint32_t, 2))(0xCF09A673L, 4UL), 4UL), 4UL, 0xCF09A673L, 4UL);
                        VECTOR(uint32_t, 8) l_454 = (VECTOR(uint32_t, 8))(0x87C79DF4L, (VECTOR(uint32_t, 4))(0x87C79DF4L, (VECTOR(uint32_t, 2))(0x87C79DF4L, 0xE81EE3BAL), 0xE81EE3BAL), 0xE81EE3BAL, 0x87C79DF4L, 0xE81EE3BAL);
                        uint64_t l_455 = 18446744073709551614UL;
                        VECTOR(int32_t, 16) l_456 = (VECTOR(int32_t, 16))(0x3BD27C76L, (VECTOR(int32_t, 4))(0x3BD27C76L, (VECTOR(int32_t, 2))(0x3BD27C76L, 0x08151E5CL), 0x08151E5CL), 0x08151E5CL, 0x3BD27C76L, 0x08151E5CL, (VECTOR(int32_t, 2))(0x3BD27C76L, 0x08151E5CL), (VECTOR(int32_t, 2))(0x3BD27C76L, 0x08151E5CL), 0x3BD27C76L, 0x08151E5CL, 0x3BD27C76L, 0x08151E5CL);
                        uint16_t l_457 = 6UL;
                        VECTOR(uint32_t, 2) l_458 = (VECTOR(uint32_t, 2))(0x3BF86E2DL, 0UL);
                        VECTOR(int32_t, 2) l_459 = (VECTOR(int32_t, 2))(0x54012CE8L, 1L);
                        VECTOR(int32_t, 2) l_460 = (VECTOR(int32_t, 2))((-7L), 0x6E824ABFL);
                        VECTOR(int32_t, 4) l_461 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5ED0A79EL), 0x5ED0A79EL);
                        uint32_t l_462[3];
                        int16_t l_463 = 0x759DL;
                        int64_t l_464 = 0x1A9E01F7D11C5828L;
                        uint64_t l_465 = 0x8A6732CACD3FCC03L;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_462[i] = 0xFCB5AB9EL;
                        l_433[2][2][2] = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 16))(l_436, (l_437 = ((VECTOR(uint32_t, 2))(0x4231680EL, 4294967295UL)).lo), 4UL, ((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 16))(0xF97B7E1DL, ((VECTOR(uint32_t, 8))(l_438.s13144340)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_439.xyxxyyxyyxxyxxxx)).sb0)), ((VECTOR(uint32_t, 2))(l_440.s44)), ((l_441 = (l_389 = 4294967288UL)) , ((l_442[6][4] = 6UL) , 4294967293UL)), 0xA7E79A16L, 4294967288UL)).s91, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_443.zyywyywxyzzzyywy)).sa410)).w, ((VECTOR(uint32_t, 2))(l_444.xz)), 0UL)).odd))).xxyyxyyx)), ((VECTOR(uint32_t, 8))(l_445.s9c9ee2f2)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(l_446.xxyyxyyy)), ((VECTOR(uint32_t, 8))(l_447.wzyxywxx)))))))))), 0UL, 0x78D42744L, ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_448.yyxxyxxx)), ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 16))(l_449.s4463366107363433)).s4eaa, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_450.wwyxyxwxwxwzxyzy)).even)).odd))), ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xDEA0201BL, 0xE40D5BDCL)).yyyyxxxx)), ((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 16))(l_451.s098c4e593ce48329)), ((VECTOR(uint32_t, 8))(l_452.wxxxxwyw)).s1404155164350515))).lo, ((VECTOR(uint32_t, 16))(l_453.s7214260400534600)).lo))).even, ((VECTOR(uint32_t, 16))(l_454.s2523354660216203)).sb599))), ((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(4294967295UL, 0xC59FCDAAL, 0xC5763638L, 1UL)))).xwxxywzxyzwwzzxw, ((VECTOR(uint32_t, 4))(l_455, ((VECTOR(uint32_t, 2))(7UL, 1UL)), 3UL)).zwxzyyyxwwzywzxx))).se566))))).even))).s20))), 0UL)).odd, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_456.s59c2)).hi)).odd , (l_444.w = (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_457, (-1L), (-1L), 0x71L)).ywyxyzywwyyzzyzw)).s4 , 1UL))), 0xDE9836F4L, ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_458.xyyx)))).lo, ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_459.xyyxxyyy)).s6255005413641126)).s2a38, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(l_460.xxxxyxxy)).s1031400421444374, ((VECTOR(int32_t, 8))(l_461.xzzzwzxz)).s2312147553552611))).s7bda))).lo))), (l_388.f0 = (l_462[2] , (l_463 , GROUP_DIVERGE(1, 1)))), 0x77B16778L, 4294967295UL, 4294967289UL)).s06)).xxyyxyxx)).s3472502462723707)).sdf, ((VECTOR(uint32_t, 2))(0UL))))).xyyyxxyy, ((VECTOR(uint32_t, 8))(0x3BB585D4L)), ((VECTOR(uint32_t, 8))(0x5015FB9EL))))).s3640614161132566)).odd))).s7332603073544774)).hi)).s1 , (void*)0);
                        l_464 = 0x0167CB32L;
                        --l_465;
                    }
                    else
                    { /* block id: 209 */
                        int32_t *l_468 = (void*)0;
                        l_435[2] = (l_433[1][3][1] = ((l_420[3][1] &= (-1L)) , l_468));
                    }
                    l_384.f0.f1 = (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 2))(18446744073709551611UL, 4UL)).yyxxyxxx, ((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(18446744073709551615UL, 0x9632418B9132DB48L, 0UL, 0x1D058AC51A7F1540L)).even)).yxyx)).xxzzxwzyzzwwxxyw)))).hi, ((VECTOR(uint64_t, 4))(((l_470 = (l_469 , ((VECTOR(int64_t, 4))(0x13A2B9D885BC8F06L, 0x5D63482E6B681822L, 0x74FD9F04DBA90F77L, (-3L))).x)) , GROUP_DIVERGE(0, 1)), ((VECTOR(uint64_t, 2))(l_471.s65)), 0xB0D52E298E86FE70L)).zxzzwzyw)))))).s40)).xyyyxxyx)).s6 , 0x17499EA3L);
                    if (((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(0x06D0D2F1L, (-7L))).yyxx, (int32_t)(((l_472 , l_473) , (l_475 = l_474)) , ((VECTOR(int32_t, 2))(l_476.s18)).lo)))).y)
                    { /* block id: 217 */
                        uint64_t l_477 = 18446744073709551615UL;
                        uint16_t l_478 = 0xA6C9L;
                        int8_t l_479 = 0x79L;
                        int64_t l_480 = 0x33493A44B2BDDAD5L;
                        int16_t l_481 = (-3L);
                        int32_t l_483 = 5L;
                        int32_t *l_482 = &l_483;
                        int16_t l_484 = 1L;
                        int64_t l_485 = 1L;
                        VECTOR(int8_t, 8) l_486 = (VECTOR(int8_t, 8))(0x08L, (VECTOR(int8_t, 4))(0x08L, (VECTOR(int8_t, 2))(0x08L, 0x77L), 0x77L), 0x77L, 0x08L, 0x77L);
                        VECTOR(int8_t, 2) l_487 = (VECTOR(int8_t, 2))(0L, 0x23L);
                        int64_t l_488 = (-5L);
                        int32_t l_489 = (-1L);
                        int8_t l_490 = 0x66L;
                        int32_t l_491 = 1L;
                        int64_t l_492 = 0x4A9785375A3A4CF1L;
                        int32_t l_495 = 9L;
                        VECTOR(int8_t, 4) l_496 = (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, 0x6EL), 0x6EL);
                        VECTOR(int8_t, 4) l_497 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 6L), 6L);
                        VECTOR(int8_t, 2) l_498 = (VECTOR(int8_t, 2))(1L, (-1L));
                        VECTOR(int8_t, 16) l_499 = (VECTOR(int8_t, 16))(0x7EL, (VECTOR(int8_t, 4))(0x7EL, (VECTOR(int8_t, 2))(0x7EL, (-2L)), (-2L)), (-2L), 0x7EL, (-2L), (VECTOR(int8_t, 2))(0x7EL, (-2L)), (VECTOR(int8_t, 2))(0x7EL, (-2L)), 0x7EL, (-2L), 0x7EL, (-2L));
                        int16_t l_500 = 0x1B90L;
                        int32_t l_501 = 0L;
                        struct S0 l_503 = {0x63FE3BD1L};
                        struct S0 *l_502 = &l_503;
                        struct S0 *l_504[7] = {&l_503,&l_503,&l_503,&l_503,&l_503,&l_503,&l_503};
                        int i;
                        l_479 &= (l_477 , l_478);
                        l_480 = 0L;
                        l_433[2][2][2] = (l_481 , l_482);
                        l_504[2] = (l_484 , (l_502 = (((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(2L, l_485, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_486.s0250)))).odd, (int8_t)((VECTOR(int8_t, 4))(l_487.yyyy)).x, (int8_t)l_488))), (l_429[0][1] = (l_489 , (((l_490 , ((VECTOR(int32_t, 8))((-1L), (l_492 ^= (l_432 = l_491)), ((VECTOR(int32_t, 4))(1L, (-1L), (-2L), 0x7EF9E072L)), 0x11FE73E1L, 0L)).s1) , (--l_423)) , l_495))), (((VECTOR(int64_t, 2))((-1L), 0x5DB4E088063E04CBL)).hi , 1L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(l_496.zyyzwxzx)).lo, ((VECTOR(int8_t, 8))(l_497.xxzwzyzw)).odd))))).zyxyyzyw, ((VECTOR(int8_t, 4))(l_498.yxxy)).wxwwzyxy, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0x77L, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(l_499.s3c)), ((VECTOR(int8_t, 4))(0x7DL, (-5L), 1L, 0x6FL)).even))), 0x74L)), (l_496.z = (l_500 , 0x79L)), l_501, 0x61L, 6L, ((VECTOR(int8_t, 2))(1L)), (-1L), (-1L), 0x1AL, (-10L), 0L, (-9L))).even, ((VECTOR(int8_t, 8))(0L))))).s35, ((VECTOR(int8_t, 2))(0L))))).yxxyyyyx))).lo)))).hi, ((VECTOR(int8_t, 4))(2L)), ((VECTOR(int8_t, 4))((-1L)))))).lo, ((VECTOR(int8_t, 2))((-1L)))))), 0x43L, 1L, (-1L), 1L)).s67, ((VECTOR(int8_t, 2))(0x3DL)), ((VECTOR(int8_t, 2))(0x5DL))))).xxxyxxxy))).s7 , (void*)0)));
                    }
                    else
                    { /* block id: 228 */
                        int8_t l_505 = 0L;
                        uint16_t l_506 = 65530UL;
                        uint32_t l_507 = 0x76E79FA9L;
                        int32_t l_509 = (-7L);
                        int32_t *l_508[7] = {&l_509,&l_509,&l_509,&l_509,&l_509,&l_509,&l_509};
                        int i;
                        l_507 &= (l_506 |= l_505);
                        l_508[6] = (l_435[1] = l_508[6]);
                    }
                }
                else
                { /* block id: 234 */
                    int8_t l_510 = 0x6AL;
                    VECTOR(int32_t, 16) l_512 = (VECTOR(int32_t, 16))(0x1C563A4CL, (VECTOR(int32_t, 4))(0x1C563A4CL, (VECTOR(int32_t, 2))(0x1C563A4CL, 1L), 1L), 1L, 0x1C563A4CL, 1L, (VECTOR(int32_t, 2))(0x1C563A4CL, 1L), (VECTOR(int32_t, 2))(0x1C563A4CL, 1L), 0x1C563A4CL, 1L, 0x1C563A4CL, 1L);
                    int32_t *l_511 = (void*)0;
                    int32_t *l_513 = (void*)0;
                    int64_t l_514 = (-1L);
                    int32_t l_552 = 0x4F9CEC7EL;
                    VECTOR(uint16_t, 4) l_553 = (VECTOR(uint16_t, 4))(0x622FL, (VECTOR(uint16_t, 2))(0x622FL, 0xBD1CL), 0xBD1CL);
                    VECTOR(uint16_t, 16) l_554 = (VECTOR(uint16_t, 16))(0x5D53L, (VECTOR(uint16_t, 4))(0x5D53L, (VECTOR(uint16_t, 2))(0x5D53L, 65533UL), 65533UL), 65533UL, 0x5D53L, 65533UL, (VECTOR(uint16_t, 2))(0x5D53L, 65533UL), (VECTOR(uint16_t, 2))(0x5D53L, 65533UL), 0x5D53L, 65533UL, 0x5D53L, 65533UL);
                    int i;
                    l_513 = ((l_510 , ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x1774F6C9L, 7UL)).xyxxxxyy)).s5) , l_511);
                    if (l_514)
                    { /* block id: 236 */
                        struct S0 l_515 = {4294967295UL};
                        VECTOR(int32_t, 2) l_516 = (VECTOR(int32_t, 2))(0x3AA0DDD6L, 0x1FF5C02CL);
                        int i;
                        l_386[0] = l_515;
                        l_384.f0.f1 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_516.xxyx)).xzxywwyyyzzyzywy)).s62)).yyyxxxyy)).s1;
                    }
                    else
                    { /* block id: 239 */
                        int32_t l_517 = (-1L);
                        VECTOR(int32_t, 16) l_518 = (VECTOR(int32_t, 16))(0x2CF4CF72L, (VECTOR(int32_t, 4))(0x2CF4CF72L, (VECTOR(int32_t, 2))(0x2CF4CF72L, 1L), 1L), 1L, 0x2CF4CF72L, 1L, (VECTOR(int32_t, 2))(0x2CF4CF72L, 1L), (VECTOR(int32_t, 2))(0x2CF4CF72L, 1L), 0x2CF4CF72L, 1L, 0x2CF4CF72L, 1L);
                        VECTOR(int32_t, 4) l_519 = (VECTOR(int32_t, 4))(0x1EDF8033L, (VECTOR(int32_t, 2))(0x1EDF8033L, 0L), 0L);
                        int32_t l_520 = 0x38740C67L;
                        int32_t l_521 = 0x7CE8210CL;
                        int32_t l_522 = 0x79F4C31EL;
                        uint32_t l_523 = 0xA5318897L;
                        VECTOR(int8_t, 2) l_524 = (VECTOR(int8_t, 2))(0L, 0x74L);
                        struct S0 l_525 = {4294967290UL};
                        int i;
                        l_517 = l_517;
                        l_524.x |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 0x6C66CD7CL)).yyxy)).yyzxzzyw, ((VECTOR(int32_t, 2))(3L, (-1L))).xxxyyyyy, ((VECTOR(int32_t, 2))(l_518.s81)).yyxxxxyy))).even, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_519.wzxw)).even, (int32_t)(l_523 ^= ((l_521 = l_520) , l_522))))).xyxy))).xxyzyxwzzzwyxwxy)).sa;
                        l_521 ^= 0x2444D520L;
                        l_388 = l_525;
                    }
                    for (l_512.sc = 0; (l_512.sc != 15); l_512.sc = safe_add_func_uint8_t_u_u(l_512.sc, 8))
                    { /* block id: 249 */
                        VECTOR(int32_t, 2) l_528 = (VECTOR(int32_t, 2))(0x4F837703L, 0x3079C338L);
                        VECTOR(int32_t, 2) l_529 = (VECTOR(int32_t, 2))(0x36DDE284L, 0L);
                        VECTOR(int32_t, 8) l_530 = (VECTOR(int32_t, 8))(0x65834FABL, (VECTOR(int32_t, 4))(0x65834FABL, (VECTOR(int32_t, 2))(0x65834FABL, 1L), 1L), 1L, 0x65834FABL, 1L);
                        int64_t l_531 = 0x731303C55DD0F4EAL;
                        int32_t l_532 = 0x5351DD7DL;
                        VECTOR(int32_t, 8) l_533 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 1L), 1L), 1L, (-8L), 1L);
                        VECTOR(int32_t, 8) l_534 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L));
                        VECTOR(int32_t, 2) l_535 = (VECTOR(int32_t, 2))(0L, 0x1B605E9DL);
                        VECTOR(int16_t, 8) l_536 = (VECTOR(int16_t, 8))(0x5D43L, (VECTOR(int16_t, 4))(0x5D43L, (VECTOR(int16_t, 2))(0x5D43L, 4L), 4L), 4L, 0x5D43L, 4L);
                        VECTOR(uint16_t, 8) l_537 = (VECTOR(uint16_t, 8))(0x93B8L, (VECTOR(uint16_t, 4))(0x93B8L, (VECTOR(uint16_t, 2))(0x93B8L, 0x33B1L), 0x33B1L), 0x33B1L, 0x93B8L, 0x33B1L);
                        VECTOR(int32_t, 16) l_538 = (VECTOR(int32_t, 16))(0x74D7CB1CL, (VECTOR(int32_t, 4))(0x74D7CB1CL, (VECTOR(int32_t, 2))(0x74D7CB1CL, (-1L)), (-1L)), (-1L), 0x74D7CB1CL, (-1L), (VECTOR(int32_t, 2))(0x74D7CB1CL, (-1L)), (VECTOR(int32_t, 2))(0x74D7CB1CL, (-1L)), 0x74D7CB1CL, (-1L), 0x74D7CB1CL, (-1L));
                        VECTOR(int32_t, 16) l_539 = (VECTOR(int32_t, 16))(0x6A11EED2L, (VECTOR(int32_t, 4))(0x6A11EED2L, (VECTOR(int32_t, 2))(0x6A11EED2L, 0L), 0L), 0L, 0x6A11EED2L, 0L, (VECTOR(int32_t, 2))(0x6A11EED2L, 0L), (VECTOR(int32_t, 2))(0x6A11EED2L, 0L), 0x6A11EED2L, 0L, 0x6A11EED2L, 0L);
                        uint8_t l_540[5][5] = {{254UL,254UL,0xA9L,0xB5L,0x9BL},{254UL,254UL,0xA9L,0xB5L,0x9BL},{254UL,254UL,0xA9L,0xB5L,0x9BL},{254UL,254UL,0xA9L,0xB5L,0x9BL},{254UL,254UL,0xA9L,0xB5L,0x9BL}};
                        VECTOR(int32_t, 8) l_541 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                        VECTOR(int32_t, 16) l_542 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, (-9L)), (-9L)), (-9L), 4L, (-9L), (VECTOR(int32_t, 2))(4L, (-9L)), (VECTOR(int32_t, 2))(4L, (-9L)), 4L, (-9L), 4L, (-9L));
                        VECTOR(int32_t, 8) l_543 = (VECTOR(int32_t, 8))(0x1D914379L, (VECTOR(int32_t, 4))(0x1D914379L, (VECTOR(int32_t, 2))(0x1D914379L, 0x715BB36CL), 0x715BB36CL), 0x715BB36CL, 0x1D914379L, 0x715BB36CL);
                        VECTOR(int32_t, 16) l_544 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x4F1A58F5L), 0x4F1A58F5L), 0x4F1A58F5L, 3L, 0x4F1A58F5L, (VECTOR(int32_t, 2))(3L, 0x4F1A58F5L), (VECTOR(int32_t, 2))(3L, 0x4F1A58F5L), 3L, 0x4F1A58F5L, 3L, 0x4F1A58F5L);
                        VECTOR(int32_t, 4) l_545 = (VECTOR(int32_t, 4))(0x37C1D11FL, (VECTOR(int32_t, 2))(0x37C1D11FL, 0x40F171D2L), 0x40F171D2L);
                        uint8_t l_546 = 0x0EL;
                        VECTOR(int32_t, 16) l_547 = (VECTOR(int32_t, 16))(0x67CF04CEL, (VECTOR(int32_t, 4))(0x67CF04CEL, (VECTOR(int32_t, 2))(0x67CF04CEL, (-1L)), (-1L)), (-1L), 0x67CF04CEL, (-1L), (VECTOR(int32_t, 2))(0x67CF04CEL, (-1L)), (VECTOR(int32_t, 2))(0x67CF04CEL, (-1L)), 0x67CF04CEL, (-1L), 0x67CF04CEL, (-1L));
                        int8_t l_548 = (-10L);
                        uint32_t l_549 = 0x7B56CCAEL;
                        int i, j;
                        l_403.sd = ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_528.xyyyyxyy)).s52, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x77E7A44EL, 0x180254E1L)).xyyxxxyy)).s6724303766210773)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_529.yyxyxxxxyyyyyyyy)).s16, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(l_530.s41111035)).s22, (int32_t)(l_531 , l_532)))).yyxy)).odd))), 1L, 1L, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(l_533.s75)), ((VECTOR(int32_t, 4))(5L, 0x2CD3998AL, (-10L), 1L)).even))), 0x7BBECF8DL, 0x4B62808FL, ((VECTOR(int32_t, 4))(l_534.s2406)), 0x5F25D9D6L, (-7L), 0x3CEA4AC1L)).even)).odd)).yzzywzxwywxxzxww))).s3c9e)).xyywwwwz, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_535.xxyyxyyy)).s04))))).yyyxxyxx))).s14))))).yyxyyyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(l_536.s1745761346052175)), ((VECTOR(uint16_t, 4))(0xDC35L, ((VECTOR(uint16_t, 2))(l_537.s17)), 0x24FAL)).xwxzzzyzyxwywywz))))).s10)).yyyxxxxyyyyyxyyx, ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(l_538.s3f)).xxyyyyxxxyxyxxyx, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_539.s43)).xxyx, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(0x74A258E2L, 1L)).xyxyyyyx, ((VECTOR(int32_t, 2))((-8L), (-6L))).yyyxyyxx))).even))), (-1L), l_540[3][0], 0x1674DBFBL, 1L)))).s2662167414417507))).lo, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(l_541.s4604147257513305)).s89))).yxyyxxxx))).s1345762047162713))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_542.s50)).yyxy)).yxxxwxwzyzyyzyyz))), ((VECTOR(int32_t, 16))(l_543.s4344506370326141))))).sf4)).xxxyxxxy))).s31)), ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(l_544.s4cc1)).even, ((VECTOR(int32_t, 8))(l_545.xxwzwwzx)).s15))), (int32_t)l_546))))), 0L, 0x35D18577L)).wyxyzyzy, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x728946DDL, 6L)), 1L, 1L)).zwwzwyyy)).s2223676257102762)).s24a4, ((VECTOR(int32_t, 2))((-10L), 0x4A4B7B8AL)).xxyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0L, (-5L), 1L, 0x216EDF8AL)).lo)).xxxx))).xwywxxwx))).s35, ((VECTOR(int32_t, 16))(l_547.scf556e5a342f4bdb)).s6b))).hi;
                        ++l_549;
                    }
                    if ((l_552 , (l_391 = (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_553.wx)).lo, 0xB472L, 0x17B6L, 65535UL)).z , l_554.s1))))
                    { /* block id: 254 */
                        struct S1 l_555[10] = {{0x3EL,0x1CE51EBEL,0xA41BFF72E11316EFL,0L,0UL,0L,0L,{4294967295UL},0x68L,252UL},{0x3EL,0x1CE51EBEL,0xA41BFF72E11316EFL,0L,0UL,0L,0L,{4294967295UL},0x68L,252UL},{0x3EL,0x1CE51EBEL,0xA41BFF72E11316EFL,0L,0UL,0L,0L,{4294967295UL},0x68L,252UL},{0x3EL,0x1CE51EBEL,0xA41BFF72E11316EFL,0L,0UL,0L,0L,{4294967295UL},0x68L,252UL},{0x3EL,0x1CE51EBEL,0xA41BFF72E11316EFL,0L,0UL,0L,0L,{4294967295UL},0x68L,252UL},{0x3EL,0x1CE51EBEL,0xA41BFF72E11316EFL,0L,0UL,0L,0L,{4294967295UL},0x68L,252UL},{0x3EL,0x1CE51EBEL,0xA41BFF72E11316EFL,0L,0UL,0L,0L,{4294967295UL},0x68L,252UL},{0x3EL,0x1CE51EBEL,0xA41BFF72E11316EFL,0L,0UL,0L,0L,{4294967295UL},0x68L,252UL},{0x3EL,0x1CE51EBEL,0xA41BFF72E11316EFL,0L,0UL,0L,0L,{4294967295UL},0x68L,252UL},{0x3EL,0x1CE51EBEL,0xA41BFF72E11316EFL,0L,0UL,0L,0L,{4294967295UL},0x68L,252UL}};
                        int32_t l_556 = 0x003EC2B2L;
                        int32_t l_557 = (-2L);
                        int32_t l_558 = 0x620DEFF4L;
                        uint64_t l_559 = 18446744073709551615UL;
                        VECTOR(int32_t, 8) l_560 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x43BADC10L), 0x43BADC10L), 0x43BADC10L, 4L, 0x43BADC10L);
                        int i;
                        l_384.f0 = l_555[0];
                        l_391 = ((l_557 ^= l_556) , ((l_558 , l_559) , ((VECTOR(int32_t, 4))(l_560.s5510)).z));
                    }
                    else
                    { /* block id: 258 */
                        int32_t l_561 = 0x305665BCL;
                        uint8_t l_562 = 0x23L;
                        int32_t l_565 = 0x0142FDE8L;
                        uint64_t l_566 = 0x3667276338A6B976L;
                        int8_t l_567 = 0x0BL;
                        struct S0 l_568 = {4294967286UL};
                        VECTOR(int16_t, 4) l_569 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L);
                        struct S0 l_570 = {0x7351FA0EL};
                        struct S0 l_571 = {0UL};
                        uint8_t l_572 = 0xBBL;
                        int8_t l_573 = 0x7DL;
                        uint16_t l_574 = 1UL;
                        struct S1 l_575 = {-10L,-1L,0xE9BF282E63049120L,0x0C17E695L,1UL,5L,0x476226A2B620092EL,{4294967289UL},0x3DL,0xAFL};/* VOLATILE GLOBAL l_575 */
                        uint64_t l_576 = 18446744073709551615UL;
                        uint64_t l_577[6][9][1] = {{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}};
                        int i, j, k;
                        l_561 ^= 0x12DE224DL;
                        l_562--;
                        l_577[5][2][0] |= (l_575.f1 = ((((l_567 = ((l_384.f2 = l_565) , l_566)) , (l_568 , (l_386[0] = (l_569.w , l_570)))) , l_571) , (l_391 = (l_572 , (((l_573 , l_574) , l_575) , l_576)))));
                    }
                }
            }
            else
            { /* block id: 269 */
                int16_t l_578 = 0x2934L;
                if (l_578)
                { /* block id: 270 */
                    int32_t l_579 = 2L;
                    uint32_t l_580 = 0x67C09012L;
                    union U2 l_582 = {{9L,1L,1UL,0x45322BE8L,1UL,1L,5L,{0x23EA5867L},0x12L,0x9FL}};/* VOLATILE GLOBAL l_582 */
                    union U2 *l_581 = &l_582;
                    union U2 *l_583[6] = {&l_582,&l_582,&l_582,&l_582,&l_582,&l_582};
                    int i;
                    l_580 ^= l_579;
                    l_583[0] = l_581;
                }
                else
                { /* block id: 273 */
                    int32_t l_584 = 0x13CBFA73L;
                    for (l_584 = 18; (l_584 < 9); l_584 = safe_sub_func_int8_t_s_s(l_584, 9))
                    { /* block id: 276 */
                        int32_t *l_587 = (void*)0;
                        l_587 = l_587;
                    }
                }
                l_384.f0.f1 = 0x2D234402L;
            }
            l_590 = l_588;
            l_591[0] = (void*)0;
            l_595 = (l_594 = l_592);
        }
        else
        { /* block id: 286 */
            int32_t *l_596 = (void*)0;
            int32_t *l_597 = (void*)0;
            struct S0 l_598 = {1UL};
            uint32_t l_599 = 1UL;
            struct S0 l_600 = {0x1C627E15L};
            struct S0 l_601 = {4294967295UL};
            l_384.f0.f1 = (-10L);
            l_597 = (l_596 = l_596);
            l_384.f0.f7 = l_598;
            l_601 = ((l_384.f2 = l_599) , l_600);
        }
        if ((l_602.s2 , (l_608 = (l_607 = (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 2))(1UL, 0x3D2AL)).xxxyyyyyyyyxxxxx, ((VECTOR(uint16_t, 16))(5UL, ((VECTOR(uint16_t, 8))(0xA027L, 5UL, ((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_603.yw)), 0x78F7L, 0x7D63L)).odd))).lo, ((VECTOR(uint16_t, 2))(65526UL, 1UL)), ((VECTOR(uint16_t, 2))(l_604.xy)), 0UL)), ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(l_605.yxxxyyxyxyyyxxyy)).sd9f6, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(255UL, 0x71L)).xxxxxyyx)).hi))), 1UL, 0x7698L, 1UL))))).s70e8)))).z , l_606)))))
        { /* block id: 296 */
            uint64_t l_609 = 18446744073709551615UL;
            int32_t *l_610 = (void*)0;
            int32_t *l_611 = (void*)0;
            int32_t l_614 = 0L;
            int32_t *l_613 = &l_614;
            int32_t **l_612 = &l_613;
            l_611 = (l_610 = (l_609 , (void*)0));
            l_612 = (void*)0;
        }
        else
        { /* block id: 300 */
            int8_t l_615 = 0x3BL;
            int16_t l_703 = 0x756DL;
            uint32_t l_704 = 0x8242805BL;
            uint64_t l_707 = 4UL;
            int32_t l_708 = 0x5D2FB718L;
            struct S0 l_709 = {0x23811CFFL};
            int8_t l_710 = (-10L);
            int8_t l_711 = (-1L);
            int32_t l_712 = (-1L);
            int16_t l_713 = 0x2893L;
            uint8_t l_714 = 0xAEL;
            if ((l_615 ^= (-3L)))
            { /* block id: 302 */
                uint16_t l_616 = 0x1EF5L;
                uint8_t l_617 = 249UL;
                struct S0 **l_618 = (void*)0;
                struct S0 l_621[2][2][6] = {{{{4294967295UL},{0x489CACD0L},{0x99236B9FL},{1UL},{0x99236B9FL},{0x489CACD0L}},{{4294967295UL},{0x489CACD0L},{0x99236B9FL},{1UL},{0x99236B9FL},{0x489CACD0L}}},{{{4294967295UL},{0x489CACD0L},{0x99236B9FL},{1UL},{0x99236B9FL},{0x489CACD0L}},{{4294967295UL},{0x489CACD0L},{0x99236B9FL},{1UL},{0x99236B9FL},{0x489CACD0L}}}};
                struct S0 *l_620 = &l_621[0][1][1];
                struct S0 **l_619 = &l_620;
                int i, j, k;
                l_617 &= l_616;
                l_619 = (l_618 = (void*)0);
            }
            else
            { /* block id: 306 */
                uint16_t l_622 = 65534UL;
                int32_t l_684 = 0x112F9550L;
                int32_t *l_683 = &l_684;
                l_622++;
                for (l_622 = 11; (l_622 < 41); l_622 = safe_add_func_int16_t_s_s(l_622, 1))
                { /* block id: 310 */
                    int32_t l_627 = (-10L);
                    VECTOR(int16_t, 4) l_641 = (VECTOR(int16_t, 4))(0x6DAFL, (VECTOR(int16_t, 2))(0x6DAFL, 0x415AL), 0x415AL);
                    struct S1 l_642 = {0x46L,-1L,0x292FA9A0BDBA46D1L,0x3A4FB26BL,0UL,-1L,-1L,{0UL},2UL,251UL};/* VOLATILE GLOBAL l_642 */
                    uint32_t l_643 = 0xF12A2EA5L;
                    VECTOR(int16_t, 8) l_644 = (VECTOR(int16_t, 8))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, (-7L)), (-7L)), (-7L), 4L, (-7L));
                    VECTOR(int16_t, 4) l_645 = (VECTOR(int16_t, 4))(0x5235L, (VECTOR(int16_t, 2))(0x5235L, 3L), 3L);
                    VECTOR(int16_t, 16) l_646 = (VECTOR(int16_t, 16))(0x799CL, (VECTOR(int16_t, 4))(0x799CL, (VECTOR(int16_t, 2))(0x799CL, 0L), 0L), 0L, 0x799CL, 0L, (VECTOR(int16_t, 2))(0x799CL, 0L), (VECTOR(int16_t, 2))(0x799CL, 0L), 0x799CL, 0L, 0x799CL, 0L);
                    VECTOR(int16_t, 2) l_647 = (VECTOR(int16_t, 2))((-1L), (-1L));
                    VECTOR(int16_t, 2) l_648 = (VECTOR(int16_t, 2))((-5L), 0L);
                    VECTOR(int16_t, 8) l_649 = (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x02ABL), 0x02ABL), 0x02ABL, (-10L), 0x02ABL);
                    VECTOR(int16_t, 4) l_650 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x0C2DL), 0x0C2DL);
                    uint64_t l_651 = 0x5253DAA1DB607D2AL;
                    uint8_t l_652 = 1UL;
                    VECTOR(int16_t, 8) l_653 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-9L)), (-9L)), (-9L), 0L, (-9L));
                    VECTOR(int16_t, 16) l_654 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0825L), 0x0825L), 0x0825L, (-1L), 0x0825L, (VECTOR(int16_t, 2))((-1L), 0x0825L), (VECTOR(int16_t, 2))((-1L), 0x0825L), (-1L), 0x0825L, (-1L), 0x0825L);
                    int16_t l_655 = (-5L);
                    int64_t l_656 = 0x168351CBFD7E8977L;
                    uint32_t l_668 = 0xCE969D16L;
                    uint32_t l_669 = 0xC42F8309L;
                    uint16_t l_670[8][9][3] = {{{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L}},{{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L}},{{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L}},{{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L}},{{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L}},{{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L}},{{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L}},{{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L},{0x9B7BL,7UL,0x71E8L}}};
                    VECTOR(uint64_t, 4) l_671 = (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 6UL), 6UL);
                    VECTOR(uint64_t, 4) l_672 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL);
                    VECTOR(uint64_t, 2) l_673 = (VECTOR(uint64_t, 2))(0x9B89B6AE8DB22790L, 18446744073709551609UL);
                    VECTOR(uint64_t, 4) l_674 = (VECTOR(uint64_t, 4))(0x80ADD90035978D2EL, (VECTOR(uint64_t, 2))(0x80ADD90035978D2EL, 0xAFE19CB51C29C0E8L), 0xAFE19CB51C29C0E8L);
                    VECTOR(uint64_t, 4) l_675 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551611UL), 18446744073709551611UL);
                    VECTOR(uint16_t, 8) l_676 = (VECTOR(uint16_t, 8))(0x6A77L, (VECTOR(uint16_t, 4))(0x6A77L, (VECTOR(uint16_t, 2))(0x6A77L, 0x527AL), 0x527AL), 0x527AL, 0x6A77L, 0x527AL);
                    uint8_t l_677 = 0x82L;
                    VECTOR(uint64_t, 8) l_678 = (VECTOR(uint64_t, 8))(0xC33BC2DCCCB2B182L, (VECTOR(uint64_t, 4))(0xC33BC2DCCCB2B182L, (VECTOR(uint64_t, 2))(0xC33BC2DCCCB2B182L, 0x7E0E9375C22CDAEFL), 0x7E0E9375C22CDAEFL), 0x7E0E9375C22CDAEFL, 0xC33BC2DCCCB2B182L, 0x7E0E9375C22CDAEFL);
                    uint64_t l_679 = 0xDE29A683D0C84F6AL;
                    int16_t l_680[5] = {0x081CL,0x081CL,0x081CL,0x081CL,0x081CL};
                    int64_t l_681 = (-6L);
                    int32_t l_682 = 3L;
                    int i, j, k;
                    for (l_627 = 0; (l_627 >= 13); l_627 = safe_add_func_int64_t_s_s(l_627, 9))
                    { /* block id: 313 */
                        int8_t l_630 = 0x04L;
                        uint8_t l_631 = 255UL;
                        uint64_t l_634 = 0xC98F1D8132B7E5E9L;
                        struct S0 l_635 = {4294967295UL};
                        uint32_t l_636 = 0x16E9C11DL;
                        int32_t l_637 = 0x59A631FFL;
                        int32_t l_638 = (-9L);
                        uint16_t l_639 = 0x938FL;
                        uint16_t l_640 = 0x2499L;
                        l_631++;
                        l_384.f0.f1 = l_634;
                        l_388 = (l_387 = l_635);
                        l_640 ^= ((l_636 , 0x88L) , ((l_638 = l_637) , l_639));
                    }
                    if (((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_641.xx)), (l_607 = (l_642 , (l_643 , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_644.s12725653)).even)), (l_602.s0 = (l_603.z = ((VECTOR(int16_t, 4))(l_645.zyxx)).x)), 0x631BL, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(l_646.s5, 0x754CL, 0x2BEDL, 0x535AL)).hi, ((VECTOR(int16_t, 8))(l_647.xxyxyxyx)).s17))), 0x7C1CL, ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(l_648.yxxxxxyy)).s15, ((VECTOR(int16_t, 4))(l_649.s0500)).odd, ((VECTOR(int16_t, 2))(l_650.xx))))), 0x07FDL, (l_603.x = (l_606 = (l_651 , (l_602.s7 |= l_652)))), ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(l_653.s17)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(1L, (-10L))).hi, ((VECTOR(int16_t, 2))(l_654.s8c)), 0L)).lo, ((VECTOR(int16_t, 8))((-1L), 1L, l_655, ((VECTOR(int16_t, 2))((-1L), 0x6D9AL)), (l_645.y &= (-1L)), 0x2A3CL, 5L)).s35))))).yxyyyxxxxyxyyyyx)).sdf))), (int16_t)l_656))), (-1L))).hi)).odd)).y))), (-1L), 0x1ED0L, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))(0x0EDEL)), (-1L), 0x3D2BL, (-6L))).hi)).s1227274706415213, ((VECTOR(uint16_t, 16))(0x2F73L))))).s6)
                    { /* block id: 328 */
                        VECTOR(int32_t, 8) l_657 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3B79E020L), 0x3B79E020L), 0x3B79E020L, 0L, 0x3B79E020L);
                        struct S0 l_661 = {0x1BABAD44L};
                        struct S0 *l_660 = &l_661;
                        struct S0 *l_662 = (void*)0;
                        int i;
                        l_384.f0.f1 = ((VECTOR(int32_t, 16))(l_657.s1275762300457521)).s3;
                        l_662 = (l_660 = ((l_604.x--) , (void*)0));
                    }
                    else
                    { /* block id: 333 */
                        struct S0 l_664 = {8UL};
                        struct S0 *l_663 = &l_664;
                        uint16_t l_665 = 65533UL;
                        struct S0 l_666[3] = {{4294967295UL},{4294967295UL},{4294967295UL}};
                        struct S0 l_667 = {0x3B13BCD0L};
                        int i;
                        l_663 = (void*)0;
                        l_667 = (l_665 , l_666[0]);
                    }
                    l_627 |= (l_668 , (l_642.f1 = (((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 2))(0xE88C4A8DEB865DDAL, 0x36C1A645D71007EAL)).yxxyyxyx, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(0UL, (l_669 , ((VECTOR(uint64_t, 8))(0x3298D8660198EB45L, 0x37671D334F383040L, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(2UL, 0x5AA0FE8C2DF3D885L)).lo, 18446744073709551615UL, 0x3C6D016CFABFF4F3L, 0UL, 0x97A8394BA39537D7L)).s4), (l_670[3][8][1] , ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 2))(l_671.zy)), ((VECTOR(uint64_t, 4))(l_672.zxxx)).lo))).lo), 8UL, 0UL, GROUP_DIVERGE(2, 1), 0x9724D2A9A7213BF0L, ((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 2))(l_673.yy)).yxyyxyyyxyxyxxyx, ((VECTOR(uint64_t, 8))(l_674.yxwwzzyz)).s7700615626224435))).s4, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_675.wywy)).odd)), l_676.s0, l_677, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_678.s5703115033536557)).hi)).s14, (uint64_t)((l_679 , l_680[3]) , 1UL)))).yyyy)))).sd9)).yyyyxyxx, ((VECTOR(uint64_t, 8))(0xB3FD9F80E221C900L))))).s21, ((VECTOR(uint64_t, 2))(0x2C33A40F12A117C7L))))).even , l_681)));
                    l_642.f1 = l_682;
                }
                l_683 = (void*)0;
                for (l_684 = 0; (l_684 >= 12); l_684++)
                { /* block id: 344 */
                    int32_t l_687 = 0L;
                    uint64_t l_688 = 1UL;
                    int32_t l_689 = 0x19F2F6EAL;
                    int64_t l_698 = 0x286C58CC8D1B7BEAL;
                    uint32_t l_699 = 0x3BD502FBL;
                    if ((l_689 = (FAKE_DIVERGE(p_1018->group_0_offset, get_group_id(0), 10) , ((l_608 = l_687) , l_688))))
                    { /* block id: 347 */
                        int32_t l_690 = (-1L);
                        int32_t l_691 = 0x046974F1L;
                        struct S0 l_692 = {0xA21E50BAL};
                        VECTOR(int32_t, 16) l_693 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x50A6E0B6L), 0x50A6E0B6L), 0x50A6E0B6L, 1L, 0x50A6E0B6L, (VECTOR(int32_t, 2))(1L, 0x50A6E0B6L), (VECTOR(int32_t, 2))(1L, 0x50A6E0B6L), 1L, 0x50A6E0B6L, 1L, 0x50A6E0B6L);
                        int32_t l_694 = 0L;
                        uint32_t l_695 = 0UL;
                        int i;
                        l_691 = l_690;
                        l_388 = l_692;
                        l_384.f0.f1 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_693.s6a58)))).x;
                        l_695 = l_694;
                    }
                    else
                    { /* block id: 352 */
                        VECTOR(uint16_t, 8) l_696 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0UL), 0UL), 0UL, 2UL, 0UL);
                        uint8_t l_697[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_697[i] = 0xA3L;
                        l_683 = (FAKE_DIVERGE(p_1018->local_0_offset, get_local_id(0), 10) , (((VECTOR(uint16_t, 2))(l_696.s14)).lo , ((l_687 = (l_697[2] = (-1L))) , (void*)0)));
                    }
                    if ((l_699 = l_698))
                    { /* block id: 358 */
                        int32_t l_700 = 0L;
                        int32_t l_701 = 5L;
                        l_701 &= (l_689 = l_700);
                    }
                    else
                    { /* block id: 361 */
                        int32_t *l_702[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_702[i] = (void*)0;
                        l_683 = l_702[0];
                    }
                }
            }
            l_704--;
            l_384.f0.f1 = l_707;
            l_714 &= (l_708 , (l_709 , (l_713 = (l_712 = (l_710 , l_711)))));
        }
        unsigned int result = 0;
        int l_383_i0;
        for (l_383_i0 = 0; l_383_i0 < 8; l_383_i0++) {
            result += l_383[l_383_i0];
        }
        result += l_384.f0.f0;
        result += l_384.f0.f1;
        result += l_384.f0.f2;
        result += l_384.f0.f3;
        result += l_384.f0.f4;
        result += l_384.f0.f5;
        result += l_384.f0.f6;
        result += l_384.f0.f7.f0;
        result += l_384.f0.f8;
        result += l_384.f0.f9;
        result += l_384.f1;
        result += l_384.f2;
        result += l_384.f3;
        result += l_384.f4;
        result += l_385;
        int l_386_i0;
        for (l_386_i0 = 0; l_386_i0 < 1; l_386_i0++) {
            result += l_386[l_386_i0].f0;
        }
        result += l_387.f0;
        result += l_388.f0;
        result += l_389;
        result += l_602.s7;
        result += l_602.s6;
        result += l_602.s5;
        result += l_602.s4;
        result += l_602.s3;
        result += l_602.s2;
        result += l_602.s1;
        result += l_602.s0;
        result += l_603.w;
        result += l_603.z;
        result += l_603.y;
        result += l_603.x;
        result += l_604.y;
        result += l_604.x;
        result += l_605.y;
        result += l_605.x;
        result += l_606;
        result += l_607;
        result += l_608;
        atomic_add(&p_1018->l_special_values[2], result);
    }
    else
    { /* block id: 372 */
        (1 + 1);
    }
    (*p_1018->g_716) = l_715;
    return (*p_1018->g_216);
}


/* ------------------------------------------ */
/* 
 * reads : p_1018->g_56 p_1018->g_83 p_1018->g_70 p_1018->g_9 p_1018->g_10 p_1018->g_165 p_1018->g_136 p_1018->g_200 p_1018->g_3 p_1018->g_97 p_1018->g_55 p_1018->g_216 p_1018->g_257 p_1018->g_217 p_1018->g_113.f2 p_1018->g_265 p_1018->g_276 p_1018->g_278 p_1018->g_104 p_1018->g_284 p_1018->g_285 p_1018->g_comm_values p_1018->g_288 p_1018->g_303 p_1018->g_305
 * writes: p_1018->g_56 p_1018->g_97 p_1018->g_104 p_1018->g_10 p_1018->g_136 p_1018->g_214 p_1018->g_217 p_1018->g_70 p_1018->g_165.f1 p_1018->g_165.f7.f0 p_1018->g_262 p_1018->g_125 p_1018->g_284 p_1018->g_165.f3 p_1018->g_303 p_1018->g_288
 */
uint8_t  func_45(uint8_t  p_46, uint32_t  p_47, struct S3 * p_1018)
{ /* block id: 17 */
    int8_t *l_69 = &p_1018->g_70;
    int32_t l_84 = (-8L);
    VECTOR(int8_t, 8) l_89 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    int16_t l_90[3][5][8] = {{{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL},{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL},{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL},{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL},{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL}},{{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL},{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL},{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL},{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL},{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL}},{{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL},{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL},{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL},{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL},{1L,9L,1L,0x47B4L,(-9L),0L,1L,0x0E4BL}}};
    struct S0 **l_304 = &p_1018->g_303;
    int32_t l_306[3][5][8] = {{{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L},{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L},{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L},{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L},{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L}},{{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L},{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L},{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L},{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L},{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L}},{{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L},{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L},{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L},{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L},{0x47DBB030L,(-4L),1L,0x43BF57C5L,1L,0x7CF3C3DFL,0x46414B25L,2L}}};
    int i, j, k;
    (*l_304) = func_60(func_63(l_69, (p_1018->g_56[1][1][0] , func_71(func_77(p_1018->g_83, p_46, l_69, l_84, (0xF697105BA9186717L >= ((safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((p_1018->g_56[5][0][1] > (((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(l_89.s74)).xxxyyxxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(1L, (*p_1018->g_83), 7L, 0x71L)))).wwyxyzwzxyywwyyz)).lo))).s32, ((VECTOR(int8_t, 2))(0x4EL))))), 0x00L, 0x47L)), p_47, (*p_1018->g_83), l_90[0][3][1], 0x72L, p_47, l_89.s4, 0x16L, ((VECTOR(int8_t, 4))(0x78L)), (-1L))).s2015)).wywyxyxx, ((VECTOR(uint8_t, 8))(8UL))))).s5 ^ l_89.s4)) ^ p_46), l_89.s4)) && 0x9F0035E4L), 8UL)) , p_46)), p_1018), p_46, p_47, l_89.s2, &p_1018->g_53[3], p_1018)), l_84, p_1018->g_comm_values[p_1018->tid], l_90[0][3][1], p_1018), p_47, p_1018);
    (*p_1018->g_305) = &l_84;
    return l_306[1][2][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1018->g_165.f3 p_1018->g_303
 * writes: p_1018->g_165.f3
 */
struct S0 * func_60(int32_t * p_61, int64_t  p_62, struct S3 * p_1018)
{ /* block id: 87 */
    struct S0 *l_291 = (void*)0;
    int32_t l_297 = (-2L);
    int32_t *l_302 = (void*)0;
    for (p_1018->g_165.f3 = (-16); (p_1018->g_165.f3 <= 21); p_1018->g_165.f3 = safe_add_func_int8_t_s_s(p_1018->g_165.f3, 1))
    { /* block id: 90 */
        int16_t l_292 = 6L;
        int32_t **l_301[3];
        int i;
        for (i = 0; i < 3; i++)
            l_301[i] = &p_1018->g_217;
        (1 + 1);
    }
    return p_1018->g_303;
}


/* ------------------------------------------ */
/* 
 * reads : p_1018->g_216 p_1018->g_288
 * writes: p_1018->g_217
 */
int32_t * func_63(int8_t * p_64, int64_t * p_65, uint64_t  p_66, uint32_t  p_67, int64_t  p_68, struct S3 * p_1018)
{ /* block id: 84 */
    int32_t *l_286 = &p_1018->g_262;
    (*p_1018->g_216) = l_286;
    return p_1018->g_288;
}


/* ------------------------------------------ */
/* 
 * reads : p_1018->g_9 p_1018->g_10 p_1018->g_165 p_1018->g_56 p_1018->g_136 p_1018->g_83 p_1018->g_70 p_1018->g_200 p_1018->g_3 p_1018->g_97 p_1018->g_55 p_1018->g_216 p_1018->g_257 p_1018->g_217 p_1018->g_113.f2 p_1018->g_265 p_1018->g_276 p_1018->g_278 p_1018->g_104 p_1018->g_284 p_1018->g_285
 * writes: p_1018->g_97 p_1018->g_56 p_1018->g_104 p_1018->g_10 p_1018->g_136 p_1018->g_214 p_1018->g_217 p_1018->g_70 p_1018->g_165.f1 p_1018->g_165.f7.f0 p_1018->g_262 p_1018->g_125 p_1018->g_284
 */
int64_t * func_71(int8_t * p_72, uint8_t  p_73, int64_t  p_74, int64_t  p_75, int64_t * p_76, struct S3 * p_1018)
{ /* block id: 22 */
    int64_t l_119 = (-10L);
    int16_t *l_191 = (void*)0;
    int32_t *l_240[7][9][3] = {{{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0}},{{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0}},{{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0}},{{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0}},{{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0}},{{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0}},{{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0},{&p_1018->g_56[7][0][0],(void*)0,(void*)0}}};
    uint16_t l_241 = 0x35B5L;
    struct S0 *l_250[3];
    int32_t *l_258[7][3] = {{&p_1018->g_165.f1,&p_1018->g_165.f1,&p_1018->g_165.f1},{&p_1018->g_165.f1,&p_1018->g_165.f1,&p_1018->g_165.f1},{&p_1018->g_165.f1,&p_1018->g_165.f1,&p_1018->g_165.f1},{&p_1018->g_165.f1,&p_1018->g_165.f1,&p_1018->g_165.f1},{&p_1018->g_165.f1,&p_1018->g_165.f1,&p_1018->g_165.f1},{&p_1018->g_165.f1,&p_1018->g_165.f1,&p_1018->g_165.f1},{&p_1018->g_165.f1,&p_1018->g_165.f1,&p_1018->g_165.f1}};
    uint32_t *l_261[2];
    VECTOR(int16_t, 16) l_266 = (VECTOR(int16_t, 16))(0x3D32L, (VECTOR(int16_t, 4))(0x3D32L, (VECTOR(int16_t, 2))(0x3D32L, (-1L)), (-1L)), (-1L), 0x3D32L, (-1L), (VECTOR(int16_t, 2))(0x3D32L, (-1L)), (VECTOR(int16_t, 2))(0x3D32L, (-1L)), 0x3D32L, (-1L), 0x3D32L, (-1L));
    int32_t l_267[7] = {0x62DC694FL,0x6B0F3B1CL,0x62DC694FL,0x62DC694FL,0x6B0F3B1CL,0x62DC694FL,0x62DC694FL};
    VECTOR(int64_t, 8) l_274 = (VECTOR(int64_t, 8))(0x253F2285380D9605L, (VECTOR(int64_t, 4))(0x253F2285380D9605L, (VECTOR(int64_t, 2))(0x253F2285380D9605L, (-1L)), (-1L)), (-1L), 0x253F2285380D9605L, (-1L));
    VECTOR(int64_t, 2) l_275 = (VECTOR(int64_t, 2))(0x1538F552A9BC05BFL, (-8L));
    VECTOR(uint64_t, 8) l_277 = (VECTOR(uint64_t, 8))(0xB40781749861E346L, (VECTOR(uint64_t, 4))(0xB40781749861E346L, (VECTOR(uint64_t, 2))(0xB40781749861E346L, 0x7A1B0EB0496D7EABL), 0x7A1B0EB0496D7EABL), 0x7A1B0EB0496D7EABL, 0xB40781749861E346L, 0x7A1B0EB0496D7EABL);
    int16_t *l_283[3][4][1];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_250[i] = &p_1018->g_165.f7;
    for (i = 0; i < 2; i++)
        l_261[i] = &p_1018->g_165.f7.f0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_283[i][j][k] = (void*)0;
        }
    }
    for (p_75 = (-28); (p_75 > 14); p_75 = safe_add_func_uint16_t_u_u(p_75, 6))
    { /* block id: 25 */
        VECTOR(int64_t, 8) l_105 = (VECTOR(int64_t, 8))(0x76F371BD32C47CAEL, (VECTOR(int64_t, 4))(0x76F371BD32C47CAEL, (VECTOR(int64_t, 2))(0x76F371BD32C47CAEL, (-2L)), (-2L)), (-2L), 0x76F371BD32C47CAEL, (-2L));
        VECTOR(int8_t, 4) l_112 = (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, 4L), 4L);
        VECTOR(int16_t, 4) l_117 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 6L), 6L);
        VECTOR(int16_t, 4) l_118 = (VECTOR(int16_t, 4))(0x2EB1L, (VECTOR(int16_t, 2))(0x2EB1L, 0x4CF7L), 0x4CF7L);
        int16_t *l_120 = (void*)0;
        int16_t *l_121 = &p_1018->g_50;
        int16_t *l_124 = &p_1018->g_125;
        int32_t l_134 = (-1L);
        uint8_t *l_135 = &p_1018->g_136;
        int64_t *l_141 = (void*)0;
        int64_t *l_142 = (void*)0;
        int64_t *l_143 = (void*)0;
        int64_t *l_144 = (void*)0;
        int64_t *l_145 = (void*)0;
        int64_t *l_146 = (void*)0;
        int64_t *l_147 = (void*)0;
        int64_t *l_148 = (void*)0;
        int64_t *l_149[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t *l_150 = &p_1018->g_97;
        int i;
        if (p_74)
            break;
        if ((*p_1018->g_9))
            continue;
        if ((((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 8))(p_1018->g_104.s87189e9f)).hi, ((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(l_105.s7703)), (int64_t)2L))), (int64_t)(p_1018->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1018->tid, 21))] || ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(((*p_1018->g_83) = (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_105.s3, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(0x2CL, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(l_112.wwyzzxxwxxzxyzzw)).sd5cf))), ((VECTOR(int8_t, 2))(0x76L, 4L)), 1L)).odd)).lo)), 0x67L, 0x03L)).hi)), 0x23L)))), ((VECTOR(int8_t, 16))(1L, (&p_1018->g_53[2] == &p_1018->g_53[4]), 0x35L, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 2))(0x4FL, 3L)).xxyxyxxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))((-1L), 0x22L)).xyyxxxyx, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))((-1L), (p_1018->g_113 , ((((safe_unary_minus_func_int32_t_s((((((((*l_121) |= (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))((-1L), 2L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_117.wwxxyzyw)).s13)), ((VECTOR(int16_t, 2))(0x1576L, 0x3E55L)), 7L, 0L)).s11, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_118.wzwxzyyz)).even)).lo))).odd, l_119))) ^ (safe_div_func_int16_t_s_s(((*l_124) = ((VECTOR(int16_t, 2))(0x798EL, 0x0209L)).hi), (safe_div_func_int8_t_s_s(((*l_150) ^= ((safe_lshift_func_uint16_t_u_s(((p_74 = (((safe_sub_func_int64_t_s_s(((((*p_1018->g_9) = (safe_div_func_uint8_t_u_u((++(*l_135)), p_1018->g_70))) & (((safe_add_func_uint16_t_u_u((l_112.y & l_119), p_73)) <= p_74) == p_75)) == p_1018->g_comm_values[p_1018->tid]), p_74)) , 0x0E0C1A61F3BF57D7L) | 0x709BE1A63A71FD06L)) == 0x455E09F5BEA1ABC1L), 5)) < p_1018->g_56[4][0][2])), p_73))))) == 0x02L) >= p_1018->g_55.y) , GROUP_DIVERGE(1, 1)) > l_112.y))) <= 0x08B3C05EL) , 7UL) != 5L)), l_119, 0x2AL, (*p_72), 0L, ((VECTOR(int8_t, 8))((-1L))), 0x2AL, 1L)).s8e, ((VECTOR(int8_t, 2))(0x2FL))))).xxxyxyyx))).s6771262562252462)).even))).lo)).lo))), ((VECTOR(int8_t, 2))((-10L)))))), 0x07L, 0x7DL, ((VECTOR(int8_t, 4))(0x1CL)), 0L, 0x17L, 0x5CL, (-1L), 0x07L)).s13f5))))).y, (*p_1018->g_83)))), 5)) != 0x47B12A1AL), 12)) | l_119)), (int64_t)l_105.s6))))).xxwywyzywywwywxz, ((VECTOR(int64_t, 16))(0x493AA1A88FA0A62EL))))).s1f7f))).x || FAKE_DIVERGE(p_1018->group_1_offset, get_group_id(1), 10)))
        { /* block id: 35 */
            uint32_t l_161 = 0xA85B3E65L;
            for (p_73 = 0; (p_73 < 18); p_73 = safe_add_func_int64_t_s_s(p_73, 5))
            { /* block id: 38 */
                int16_t l_164 = 0L;
                int32_t *l_170 = &p_1018->g_3;
                VECTOR(uint32_t, 8) l_177 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 7UL), 7UL), 7UL, 1UL, 7UL);
                uint8_t *l_184 = &p_1018->g_165.f9;
                int32_t l_193 = 0x2179D6CEL;
                int i;
                for (p_1018->g_97 = 18; (p_1018->g_97 != (-22)); p_1018->g_97--)
                { /* block id: 41 */
                    int32_t *l_155 = &p_1018->g_56[2][1][1];
                    if (((*l_155) = p_74))
                    { /* block id: 43 */
                        int32_t *l_156 = (void*)0;
                        int32_t *l_157 = &p_1018->g_10;
                        int32_t *l_158 = &l_134;
                        int32_t *l_159 = &p_1018->g_56[7][1][2];
                        int32_t *l_160 = &l_134;
                        --l_161;
                    }
                    else
                    { /* block id: 45 */
                        int32_t *l_171 = &p_1018->g_56[5][1][0];
                        int32_t *l_172 = &p_1018->g_10;
                        uint32_t *l_203 = &l_161;
                        VECTOR(int32_t, 4) l_204 = (VECTOR(int32_t, 4))(0x69CE2A3BL, (VECTOR(int32_t, 2))(0x69CE2A3BL, 0x28C30F78L), 0x28C30F78L);
                        int32_t *l_213 = &p_1018->g_214;
                        int i;
                        (*l_172) &= (l_164 , ((p_1018->g_165 , (((safe_unary_minus_func_int8_t_s(((!1UL) , (-3L)))) | (l_112.z < (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((p_1018->g_104.s1 = (l_170 == l_171)) || ((*l_171) ^= 8L)))), l_134)))) || (-1L))) , 1L));
                        (*l_171) = (safe_mul_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u((((VECTOR(uint32_t, 8))(l_177.s74766034)).s7 < ((((((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 2))((-8L), 0x4D60L)).xxxx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(8L, 0L)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0x767CL, (safe_add_func_int16_t_s_s(((p_74 = (((p_1018->g_104.sd , &p_1018->g_136) != l_184) < 0xF77C82EAL)) != ((((safe_add_func_int32_t_s_s(((safe_div_func_uint8_t_u_u(l_161, (*p_72))) >= (!0x783C97DCL)), (~l_161))) == ((safe_sub_func_uint64_t_u_u((l_191 == &p_1018->g_125), l_161)) , FAKE_DIVERGE(p_1018->group_2_offset, get_group_id(2), 10))) , (void*)0) != p_1018->g_192)), p_73)), p_1018->g_104.s4, (-6L), ((VECTOR(int16_t, 4))(2L)))).s21)).even, 0x72D3L, ((VECTOR(int16_t, 2))(1L)), 0x385FL, 0L)).hi, ((VECTOR(int16_t, 4))(0x637EL))))).wwyxywzxzzxwwwwy)).sc, l_193)) , (*l_172)) != 1L) == p_73) && p_74) && l_161)), GROUP_DIVERGE(2, 1))) > (-1L)), p_1018->g_136));
                        (*l_155) |= (safe_lshift_func_int8_t_s_s(((0x080480A9L == (!FAKE_DIVERGE(p_1018->local_2_offset, get_local_id(2), 10))) && (safe_mod_func_uint8_t_u_u((FAKE_DIVERGE(p_1018->group_2_offset, get_group_id(2), 10) | ((~(safe_div_func_int32_t_s_s(((*p_1018->g_83) & ((p_1018->g_200 , (FAKE_DIVERGE(p_1018->global_1_offset, get_global_id(1), 10) || (safe_add_func_uint32_t_u_u(((*l_203) |= p_75), ((VECTOR(int32_t, 8))(l_204.ywzzwxwx)).s4)))) | ((safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(0x71L, ((*l_135) = (p_75 < (*l_170))))) != ((safe_div_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(0x5DD222F7FCAB4B80L, (((*l_213) = 3L) , GROUP_DIVERGE(2, 1)))), p_1018->g_97)) != p_1018->g_10)), 1UL)) & p_1018->g_165.f7.f0))), p_1018->g_55.x))) & p_1018->g_165.f2)), p_73))), 5));
                    }
                    if ((*p_1018->g_9))
                        break;
                }
                return l_147;
            }
        }
        else
        { /* block id: 60 */
            int32_t *l_215 = &p_1018->g_10;
            (*p_1018->g_216) = l_215;
            if ((atomic_inc(&p_1018->l_atomic_input[1]) == 8))
            { /* block id: 63 */
                VECTOR(int32_t, 16) l_218 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 8L), 8L), 8L, (-4L), 8L, (VECTOR(int32_t, 2))((-4L), 8L), (VECTOR(int32_t, 2))((-4L), 8L), (-4L), 8L, (-4L), 8L);
                VECTOR(uint16_t, 16) l_219 = (VECTOR(uint16_t, 16))(0x878EL, (VECTOR(uint16_t, 4))(0x878EL, (VECTOR(uint16_t, 2))(0x878EL, 0xDAF1L), 0xDAF1L), 0xDAF1L, 0x878EL, 0xDAF1L, (VECTOR(uint16_t, 2))(0x878EL, 0xDAF1L), (VECTOR(uint16_t, 2))(0x878EL, 0xDAF1L), 0x878EL, 0xDAF1L, 0x878EL, 0xDAF1L);
                VECTOR(uint16_t, 16) l_220 = (VECTOR(uint16_t, 16))(0xBF65L, (VECTOR(uint16_t, 4))(0xBF65L, (VECTOR(uint16_t, 2))(0xBF65L, 1UL), 1UL), 1UL, 0xBF65L, 1UL, (VECTOR(uint16_t, 2))(0xBF65L, 1UL), (VECTOR(uint16_t, 2))(0xBF65L, 1UL), 0xBF65L, 1UL, 0xBF65L, 1UL);
                VECTOR(uint32_t, 16) l_221 = (VECTOR(uint32_t, 16))(0x11D1F85CL, (VECTOR(uint32_t, 4))(0x11D1F85CL, (VECTOR(uint32_t, 2))(0x11D1F85CL, 1UL), 1UL), 1UL, 0x11D1F85CL, 1UL, (VECTOR(uint32_t, 2))(0x11D1F85CL, 1UL), (VECTOR(uint32_t, 2))(0x11D1F85CL, 1UL), 0x11D1F85CL, 1UL, 0x11D1F85CL, 1UL);
                VECTOR(uint32_t, 2) l_222 = (VECTOR(uint32_t, 2))(4294967294UL, 0x47E36CFAL);
                int32_t l_223 = 1L;
                union U2 l_224 = {{1L,0x49D2ECFFL,0xD69ECFBAD7428BB2L,-1L,0xFD5DAD6D62857CCBL,0x1E9BL,0x6C75B8925916D4BFL,{7UL},0xC0L,0x56L}};/* VOLATILE GLOBAL l_224 */
                int64_t l_225 = 0L;
                int64_t l_226 = 0x658FF869411075A7L;
                VECTOR(int32_t, 2) l_227 = (VECTOR(int32_t, 2))((-1L), 0L);
                int16_t l_228 = 0x59C7L;
                VECTOR(int32_t, 4) l_229 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x2CDC6EACL), 0x2CDC6EACL);
                uint32_t l_230 = 0x9C4EFA5EL;
                struct S1 l_231 = {-3L,0x23326BAFL,18446744073709551615UL,0x06AC2539L,0x14275AC8985D2835L,-6L,0x3C31ED0AED94CEC3L,{0UL},0x4AL,255UL};/* VOLATILE GLOBAL l_231 */
                uint64_t l_232 = 2UL;
                VECTOR(int32_t, 4) l_233 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4AD92432L), 0x4AD92432L);
                VECTOR(int8_t, 4) l_234 = (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0x71L), 0x71L);
                VECTOR(int32_t, 16) l_235 = (VECTOR(int32_t, 16))(0x16602CEDL, (VECTOR(int32_t, 4))(0x16602CEDL, (VECTOR(int32_t, 2))(0x16602CEDL, 0L), 0L), 0L, 0x16602CEDL, 0L, (VECTOR(int32_t, 2))(0x16602CEDL, 0L), (VECTOR(int32_t, 2))(0x16602CEDL, 0L), 0x16602CEDL, 0L, 0x16602CEDL, 0L);
                VECTOR(int32_t, 16) l_236 = (VECTOR(int32_t, 16))(0x46CD4D1FL, (VECTOR(int32_t, 4))(0x46CD4D1FL, (VECTOR(int32_t, 2))(0x46CD4D1FL, 0x7B278D9FL), 0x7B278D9FL), 0x7B278D9FL, 0x46CD4D1FL, 0x7B278D9FL, (VECTOR(int32_t, 2))(0x46CD4D1FL, 0x7B278D9FL), (VECTOR(int32_t, 2))(0x46CD4D1FL, 0x7B278D9FL), 0x46CD4D1FL, 0x7B278D9FL, 0x46CD4D1FL, 0x7B278D9FL);
                VECTOR(int32_t, 4) l_237 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-1L)), (-1L));
                uint64_t l_238[1][4] = {{9UL,9UL,9UL,9UL}};
                uint64_t l_239 = 0x4745939E3DA630ADL;
                int i, j;
                l_239 = (l_238[0][0] = ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_218.s0f1a0b109eefadad)).sfc2f, ((VECTOR(int32_t, 16))((l_230 = ((((VECTOR(uint32_t, 8))(0x1C4F02E3L, 0x110A31BFL, (l_223 = ((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_219.sd0d5)).odd)).xxyyyyyy, ((VECTOR(uint16_t, 16))(l_220.scb6da8ddddbc35ac)).hi))).s1154727565301676)), ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(l_221.sd8)).yxyxxyxx, ((VECTOR(uint32_t, 16))(l_222.xxxxxxxxyxyxyxyx)).even))).s1057252307260257))).s7), ((VECTOR(uint32_t, 4))(4294967293UL, 0x0143FD5FL, 1UL, 0xAF693820L)), 0xB8CC1EEBL)).s7 , (l_228 ^= ((VECTOR(int32_t, 4))((l_224 , (l_226 &= l_225)), ((VECTOR(int32_t, 2))(l_227.yy)).lo, 0x672A7677L, 0x3D4B7984L)).w)) , ((VECTOR(int32_t, 8))(l_229.zwywwyww)).s6)), 0L, (l_231 , l_232), 0x2DB29C9EL, ((VECTOR(int32_t, 8))(l_233.zxzxwwxw)), (((VECTOR(int8_t, 4))(l_234.wwyw)).z , 0x1FE29DAEL), ((VECTOR(int32_t, 2))(l_235.sf3)), 0x444A0576L)).s02ec, ((VECTOR(int32_t, 8))(l_236.s81dc6f38)).odd))).odd)).yxyyxyyyyxxxyxyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_237.xzxzxzwy)).s37)).xxyyyxyxxyyxyxyx))).s0);
                unsigned int result = 0;
                result += l_218.sf;
                result += l_218.se;
                result += l_218.sd;
                result += l_218.sc;
                result += l_218.sb;
                result += l_218.sa;
                result += l_218.s9;
                result += l_218.s8;
                result += l_218.s7;
                result += l_218.s6;
                result += l_218.s5;
                result += l_218.s4;
                result += l_218.s3;
                result += l_218.s2;
                result += l_218.s1;
                result += l_218.s0;
                result += l_219.sf;
                result += l_219.se;
                result += l_219.sd;
                result += l_219.sc;
                result += l_219.sb;
                result += l_219.sa;
                result += l_219.s9;
                result += l_219.s8;
                result += l_219.s7;
                result += l_219.s6;
                result += l_219.s5;
                result += l_219.s4;
                result += l_219.s3;
                result += l_219.s2;
                result += l_219.s1;
                result += l_219.s0;
                result += l_220.sf;
                result += l_220.se;
                result += l_220.sd;
                result += l_220.sc;
                result += l_220.sb;
                result += l_220.sa;
                result += l_220.s9;
                result += l_220.s8;
                result += l_220.s7;
                result += l_220.s6;
                result += l_220.s5;
                result += l_220.s4;
                result += l_220.s3;
                result += l_220.s2;
                result += l_220.s1;
                result += l_220.s0;
                result += l_221.sf;
                result += l_221.se;
                result += l_221.sd;
                result += l_221.sc;
                result += l_221.sb;
                result += l_221.sa;
                result += l_221.s9;
                result += l_221.s8;
                result += l_221.s7;
                result += l_221.s6;
                result += l_221.s5;
                result += l_221.s4;
                result += l_221.s3;
                result += l_221.s2;
                result += l_221.s1;
                result += l_221.s0;
                result += l_222.y;
                result += l_222.x;
                result += l_223;
                result += l_224.f0.f0;
                result += l_224.f0.f1;
                result += l_224.f0.f2;
                result += l_224.f0.f3;
                result += l_224.f0.f4;
                result += l_224.f0.f5;
                result += l_224.f0.f6;
                result += l_224.f0.f7.f0;
                result += l_224.f0.f8;
                result += l_224.f0.f9;
                result += l_224.f1;
                result += l_224.f2;
                result += l_224.f3;
                result += l_224.f4;
                result += l_225;
                result += l_226;
                result += l_227.y;
                result += l_227.x;
                result += l_228;
                result += l_229.w;
                result += l_229.z;
                result += l_229.y;
                result += l_229.x;
                result += l_230;
                result += l_231.f0;
                result += l_231.f1;
                result += l_231.f2;
                result += l_231.f3;
                result += l_231.f4;
                result += l_231.f5;
                result += l_231.f6;
                result += l_231.f7.f0;
                result += l_231.f8;
                result += l_231.f9;
                result += l_232;
                result += l_233.w;
                result += l_233.z;
                result += l_233.y;
                result += l_233.x;
                result += l_234.w;
                result += l_234.z;
                result += l_234.y;
                result += l_234.x;
                result += l_235.sf;
                result += l_235.se;
                result += l_235.sd;
                result += l_235.sc;
                result += l_235.sb;
                result += l_235.sa;
                result += l_235.s9;
                result += l_235.s8;
                result += l_235.s7;
                result += l_235.s6;
                result += l_235.s5;
                result += l_235.s4;
                result += l_235.s3;
                result += l_235.s2;
                result += l_235.s1;
                result += l_235.s0;
                result += l_236.sf;
                result += l_236.se;
                result += l_236.sd;
                result += l_236.sc;
                result += l_236.sb;
                result += l_236.sa;
                result += l_236.s9;
                result += l_236.s8;
                result += l_236.s7;
                result += l_236.s6;
                result += l_236.s5;
                result += l_236.s4;
                result += l_236.s3;
                result += l_236.s2;
                result += l_236.s1;
                result += l_236.s0;
                result += l_237.w;
                result += l_237.z;
                result += l_237.y;
                result += l_237.x;
                int l_238_i0, l_238_i1;
                for (l_238_i0 = 0; l_238_i0 < 1; l_238_i0++) {
                    for (l_238_i1 = 0; l_238_i1 < 4; l_238_i1++) {
                        result += l_238[l_238_i0][l_238_i1];
                    }
                }
                result += l_239;
                atomic_add(&p_1018->l_special_values[1], result);
            }
            else
            { /* block id: 70 */
                (1 + 1);
            }
        }
    }
    l_241--;
    (*p_1018->g_217) |= (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((void*)0 != l_250[0]) || (0L == (safe_sub_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))((((safe_sub_func_uint8_t_u_u(p_73, (((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1018->g_257.yxyx)).zzxwxzyw)).s6 , ((*p_72) = ((l_240[1][7][1] = l_240[1][7][1]) != (void*)0))) , (*p_1018->g_216)) == l_258[4][2]))) != p_74) , (*p_1018->g_83)), 0x54L, 7L, 0x48L)).xwzzzzzy, ((VECTOR(int8_t, 8))(5L))))).s55)).lo, p_1018->g_56[6][1][1])) >= p_75), 0x161FFB1CL)))), p_74)), p_74)), p_1018->g_56[2][1][1]));
    p_1018->g_284 &= (safe_mod_func_uint64_t_u_u(((((p_1018->g_262 = (p_1018->g_165.f7.f0 = p_1018->g_113.f2)) > (((void*)0 == &l_240[5][3][0]) == (safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(2UL, 0x9BL)).xyxxxyxx)).even, ((VECTOR(uint8_t, 16))(p_1018->g_265.s6630617020537572)).scca1))).wyzywwxyyywzxxzx)).s2c5e, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_266.s8fee07c8)).s1316502703656635)), (int16_t)l_267[6]))).s12)))))))), 0x63C3L, (-8L), (-7L), ((VECTOR(int16_t, 16))(0x7358L, 8L, (p_1018->g_125 = (safe_div_func_int64_t_s_s((safe_div_func_int8_t_s_s((((((((246UL < (safe_add_func_int64_t_s_s((0x38C4A002CF860533L | ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(l_274.s75)).yyyxxyyxxyyxyxyy, ((VECTOR(int64_t, 8))(l_275.xxyxxxyy)).s7763346021610071))).sd5))).yxxxyyyxxxxyyyyx, ((VECTOR(uint64_t, 16))(p_1018->g_276.s4411601533660570)), ((VECTOR(uint64_t, 8))(l_277.s72462112)).s5054354562315146))).s9958)).y, 0x9A01ED204EB19E16L, ((VECTOR(uint64_t, 4))(p_1018->g_278.s2396)), 1UL, 18446744073709551612UL)).s6), (safe_sub_func_uint64_t_u_u(1UL, (safe_lshift_func_uint8_t_u_u(0x5CL, 1))))))) | p_73) ^ (*p_1018->g_83)) > (*p_1018->g_217)) , 0x0DE90066L) , 0UL) <= p_1018->g_56[5][1][0]), p_74)), 4L))), (-5L), ((VECTOR(int16_t, 8))(0x1B65L)), 0x26FEL, ((VECTOR(int16_t, 2))(1L)), 6L)).sd, 1L, (-10L))).s06, ((VECTOR(int16_t, 2))(7L))))).yyyy))), 65535UL, 1UL, 0x149CL, 8UL)).hi))).x <= p_73))))) != p_1018->g_104.sb) > (*p_1018->g_83)), p_75));
    return p_1018->g_285[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1018->g_9 p_1018->g_10 p_1018->g_56
 * writes: p_1018->g_56
 */
int8_t * func_77(int8_t * p_78, uint64_t  p_79, uint8_t * p_80, uint64_t  p_81, int64_t  p_82, struct S3 * p_1018)
{ /* block id: 18 */
    int32_t *l_91 = &p_1018->g_56[2][1][1];
    int32_t *l_92[4][7] = {{&p_1018->g_3,&p_1018->g_3,&p_1018->g_3,&p_1018->g_10,&p_1018->g_3,&p_1018->g_3,&p_1018->g_3},{&p_1018->g_3,&p_1018->g_3,&p_1018->g_3,&p_1018->g_10,&p_1018->g_3,&p_1018->g_3,&p_1018->g_3},{&p_1018->g_3,&p_1018->g_3,&p_1018->g_3,&p_1018->g_10,&p_1018->g_3,&p_1018->g_3,&p_1018->g_3},{&p_1018->g_3,&p_1018->g_3,&p_1018->g_3,&p_1018->g_10,&p_1018->g_3,&p_1018->g_3,&p_1018->g_3}};
    int64_t l_93 = (-9L);
    int16_t l_94 = 0x0D5DL;
    int32_t l_95 = 1L;
    int64_t l_96 = 1L;
    uint64_t l_98[7] = {0x2B0FFD9DDA32BF4EL,0x2B0FFD9DDA32BF4EL,0x2B0FFD9DDA32BF4EL,0x2B0FFD9DDA32BF4EL,0x2B0FFD9DDA32BF4EL,0x2B0FFD9DDA32BF4EL,0x2B0FFD9DDA32BF4EL};
    int8_t *l_101 = &p_1018->g_70;
    int i, j;
    (*l_91) |= (*p_1018->g_9);
    ++l_98[1];
    return l_101;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_comm_values[i] = 1;
    struct S3 c_1019;
    struct S3* p_1018 = &c_1019;
    struct S3 c_1020 = {
        (-5L), // p_1018->g_3
        1L, // p_1018->g_10
        &p_1018->g_10, // p_1018->g_9
        (-1L), // p_1018->g_23
        0UL, // p_1018->g_42
        1L, // p_1018->g_50
        {6L,6L,6L,6L,6L}, // p_1018->g_53
        (VECTOR(int64_t, 2))((-1L), (-7L)), // p_1018->g_55
        {{{(-1L),0x6C325DF2L,(-1L)},{(-1L),0x6C325DF2L,(-1L)}},{{(-1L),0x6C325DF2L,(-1L)},{(-1L),0x6C325DF2L,(-1L)}},{{(-1L),0x6C325DF2L,(-1L)},{(-1L),0x6C325DF2L,(-1L)}},{{(-1L),0x6C325DF2L,(-1L)},{(-1L),0x6C325DF2L,(-1L)}},{{(-1L),0x6C325DF2L,(-1L)},{(-1L),0x6C325DF2L,(-1L)}},{{(-1L),0x6C325DF2L,(-1L)},{(-1L),0x6C325DF2L,(-1L)}},{{(-1L),0x6C325DF2L,(-1L)},{(-1L),0x6C325DF2L,(-1L)}},{{(-1L),0x6C325DF2L,(-1L)},{(-1L),0x6C325DF2L,(-1L)}},{{(-1L),0x6C325DF2L,(-1L)},{(-1L),0x6C325DF2L,(-1L)}}}, // p_1018->g_56
        0UL, // p_1018->g_57
        0x15L, // p_1018->g_70
        &p_1018->g_70, // p_1018->g_83
        (-1L), // p_1018->g_97
        (VECTOR(int64_t, 16))(0x6FB746B9F5D82354L, (VECTOR(int64_t, 4))(0x6FB746B9F5D82354L, (VECTOR(int64_t, 2))(0x6FB746B9F5D82354L, 0L), 0L), 0L, 0x6FB746B9F5D82354L, 0L, (VECTOR(int64_t, 2))(0x6FB746B9F5D82354L, 0L), (VECTOR(int64_t, 2))(0x6FB746B9F5D82354L, 0L), 0x6FB746B9F5D82354L, 0L, 0x6FB746B9F5D82354L, 0L), // p_1018->g_104
        {0x22L,-3L,0UL,0x681A8B05L,18446744073709551615UL,0x7EA6L,-2L,{4294967290UL},0x4DL,253UL}, // p_1018->g_113
        1L, // p_1018->g_125
        1UL, // p_1018->g_136
        {-1L,1L,0xA783E0FBC3B89F0EL,0x02829210L,1UL,0x71E2L,-10L,{9UL},0x2DL,0x6EL}, // p_1018->g_165
        (void*)0, // p_1018->g_192
        {-8L,0x47678D6EL,18446744073709551613UL,8L,8UL,0x1595L,-9L,{0x3C0136F6L},0x19L,1UL}, // p_1018->g_200
        0x1062EF3CL, // p_1018->g_214
        &p_1018->g_165.f1, // p_1018->g_217
        &p_1018->g_217, // p_1018->g_216
        (VECTOR(int32_t, 2))(3L, 0x7684961CL), // p_1018->g_257
        0x24073B80L, // p_1018->g_262
        (VECTOR(uint8_t, 8))(0xC2L, (VECTOR(uint8_t, 4))(0xC2L, (VECTOR(uint8_t, 2))(0xC2L, 247UL), 247UL), 247UL, 0xC2L, 247UL), // p_1018->g_265
        (VECTOR(uint64_t, 8))(0x2AD04589D9BE2302L, (VECTOR(uint64_t, 4))(0x2AD04589D9BE2302L, (VECTOR(uint64_t, 2))(0x2AD04589D9BE2302L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x2AD04589D9BE2302L, 18446744073709551615UL), // p_1018->g_276
        (VECTOR(uint64_t, 16))(0xAE53849AF41FEB4BL, (VECTOR(uint64_t, 4))(0xAE53849AF41FEB4BL, (VECTOR(uint64_t, 2))(0xAE53849AF41FEB4BL, 0x25EF68E0F3748E4EL), 0x25EF68E0F3748E4EL), 0x25EF68E0F3748E4EL, 0xAE53849AF41FEB4BL, 0x25EF68E0F3748E4EL, (VECTOR(uint64_t, 2))(0xAE53849AF41FEB4BL, 0x25EF68E0F3748E4EL), (VECTOR(uint64_t, 2))(0xAE53849AF41FEB4BL, 0x25EF68E0F3748E4EL), 0xAE53849AF41FEB4BL, 0x25EF68E0F3748E4EL, 0xAE53849AF41FEB4BL, 0x25EF68E0F3748E4EL), // p_1018->g_278
        0x05E8F6FAL, // p_1018->g_284
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1018->g_285
        {{&p_1018->g_217,&p_1018->g_217,(void*)0,&p_1018->g_217,&p_1018->g_217,&p_1018->g_217,(void*)0,&p_1018->g_217,&p_1018->g_217},{&p_1018->g_217,&p_1018->g_217,(void*)0,&p_1018->g_217,&p_1018->g_217,&p_1018->g_217,(void*)0,&p_1018->g_217,&p_1018->g_217}}, // p_1018->g_287
        &p_1018->g_165.f1, // p_1018->g_288
        (VECTOR(uint8_t, 8))(0x80L, (VECTOR(uint8_t, 4))(0x80L, (VECTOR(uint8_t, 2))(0x80L, 255UL), 255UL), 255UL, 0x80L, 255UL), // p_1018->g_298
        (void*)0, // p_1018->g_303
        &p_1018->g_288, // p_1018->g_305
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2F582253L), 0x2F582253L), 0x2F582253L, 0L, 0x2F582253L), // p_1018->g_344
        &p_1018->g_165.f7, // p_1018->g_716
        4294967295UL, // p_1018->g_718
        &p_1018->g_3, // p_1018->g_724
        (VECTOR(int16_t, 8))(0x2D6DL, (VECTOR(int16_t, 4))(0x2D6DL, (VECTOR(int16_t, 2))(0x2D6DL, 0x70C9L), 0x70C9L), 0x70C9L, 0x2D6DL, 0x70C9L), // p_1018->g_725
        (void*)0, // p_1018->g_729
        &p_1018->g_83, // p_1018->g_731
        &p_1018->g_731, // p_1018->g_730
        &p_1018->g_165.f7, // p_1018->g_735
        {{{{{-1L,7L,0xB332A3C01661B1F5L,1L,0xCC90A2E410399377L,0x308AL,0x370FD743C15E3666L,{4294967295UL},0x22L,0x8FL}}},{{{-1L,7L,0xB332A3C01661B1F5L,1L,0xCC90A2E410399377L,0x308AL,0x370FD743C15E3666L,{4294967295UL},0x22L,0x8FL}}},{{{-1L,7L,0xB332A3C01661B1F5L,1L,0xCC90A2E410399377L,0x308AL,0x370FD743C15E3666L,{4294967295UL},0x22L,0x8FL}}},{{{-1L,7L,0xB332A3C01661B1F5L,1L,0xCC90A2E410399377L,0x308AL,0x370FD743C15E3666L,{4294967295UL},0x22L,0x8FL}}},{{{-1L,7L,0xB332A3C01661B1F5L,1L,0xCC90A2E410399377L,0x308AL,0x370FD743C15E3666L,{4294967295UL},0x22L,0x8FL}}},{{{-1L,7L,0xB332A3C01661B1F5L,1L,0xCC90A2E410399377L,0x308AL,0x370FD743C15E3666L,{4294967295UL},0x22L,0x8FL}}}},{{{{-1L,7L,0xB332A3C01661B1F5L,1L,0xCC90A2E410399377L,0x308AL,0x370FD743C15E3666L,{4294967295UL},0x22L,0x8FL}}},{{{-1L,7L,0xB332A3C01661B1F5L,1L,0xCC90A2E410399377L,0x308AL,0x370FD743C15E3666L,{4294967295UL},0x22L,0x8FL}}},{{{-1L,7L,0xB332A3C01661B1F5L,1L,0xCC90A2E410399377L,0x308AL,0x370FD743C15E3666L,{4294967295UL},0x22L,0x8FL}}},{{{-1L,7L,0xB332A3C01661B1F5L,1L,0xCC90A2E410399377L,0x308AL,0x370FD743C15E3666L,{4294967295UL},0x22L,0x8FL}}},{{{-1L,7L,0xB332A3C01661B1F5L,1L,0xCC90A2E410399377L,0x308AL,0x370FD743C15E3666L,{4294967295UL},0x22L,0x8FL}}},{{{-1L,7L,0xB332A3C01661B1F5L,1L,0xCC90A2E410399377L,0x308AL,0x370FD743C15E3666L,{4294967295UL},0x22L,0x8FL}}}}}, // p_1018->g_742
        (VECTOR(uint16_t, 16))(0x205BL, (VECTOR(uint16_t, 4))(0x205BL, (VECTOR(uint16_t, 2))(0x205BL, 0x6A3EL), 0x6A3EL), 0x6A3EL, 0x205BL, 0x6A3EL, (VECTOR(uint16_t, 2))(0x205BL, 0x6A3EL), (VECTOR(uint16_t, 2))(0x205BL, 0x6A3EL), 0x205BL, 0x6A3EL, 0x205BL, 0x6A3EL), // p_1018->g_754
        &p_1018->g_3, // p_1018->g_779
        (VECTOR(int64_t, 8))(0x720E146A85C57C85L, (VECTOR(int64_t, 4))(0x720E146A85C57C85L, (VECTOR(int64_t, 2))(0x720E146A85C57C85L, 0x68A31125ED1B5339L), 0x68A31125ED1B5339L), 0x68A31125ED1B5339L, 0x720E146A85C57C85L, 0x68A31125ED1B5339L), // p_1018->g_789
        {{-1L,8L,18446744073709551615UL,2L,0xD29551174EE2780AL,0L,-1L,{4294967290UL},4UL,9UL}}, // p_1018->g_790
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x3CL), 0x3CL), // p_1018->g_810
        &p_1018->g_3, // p_1018->g_842
        &p_1018->g_288, // p_1018->g_848
        (VECTOR(int16_t, 2))(0L, 0x69C5L), // p_1018->g_870
        (void*)0, // p_1018->g_873
        &p_1018->g_873, // p_1018->g_872
        &p_1018->g_872, // p_1018->g_871
        {{{-5L,0x3FB7C0DCL,1UL,0x0D2373E2L,0x7FBBF98124C1C518L,-10L,0x690EBB5DC6A2719EL,{0xA6CF6CC3L},4UL,0UL}},{{-5L,0x3FB7C0DCL,1UL,0x0D2373E2L,0x7FBBF98124C1C518L,-10L,0x690EBB5DC6A2719EL,{0xA6CF6CC3L},4UL,0UL}},{{-5L,0x3FB7C0DCL,1UL,0x0D2373E2L,0x7FBBF98124C1C518L,-10L,0x690EBB5DC6A2719EL,{0xA6CF6CC3L},4UL,0UL}}}, // p_1018->g_881
        {{{0x42L,-1L,18446744073709551615UL,3L,1UL,0x0C0BL,9L,{0x3F3233DFL},247UL,0x14L}},{{0x42L,-1L,18446744073709551615UL,3L,1UL,0x0C0BL,9L,{0x3F3233DFL},247UL,0x14L}},{{0x42L,-1L,18446744073709551615UL,3L,1UL,0x0C0BL,9L,{0x3F3233DFL},247UL,0x14L}},{{0x42L,-1L,18446744073709551615UL,3L,1UL,0x0C0BL,9L,{0x3F3233DFL},247UL,0x14L}},{{0x42L,-1L,18446744073709551615UL,3L,1UL,0x0C0BL,9L,{0x3F3233DFL},247UL,0x14L}},{{0x42L,-1L,18446744073709551615UL,3L,1UL,0x0C0BL,9L,{0x3F3233DFL},247UL,0x14L}},{{0x42L,-1L,18446744073709551615UL,3L,1UL,0x0C0BL,9L,{0x3F3233DFL},247UL,0x14L}},{{0x42L,-1L,18446744073709551615UL,3L,1UL,0x0C0BL,9L,{0x3F3233DFL},247UL,0x14L}}}, // p_1018->g_884
        {{-8L,1L,18446744073709551615UL,2L,4UL,0x52CAL,3L,{0x02905722L},5UL,1UL}}, // p_1018->g_886
        &p_1018->g_303, // p_1018->g_918
        (-6L), // p_1018->g_927
        &p_1018->g_927, // p_1018->g_926
        &p_1018->g_926, // p_1018->g_925
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), // p_1018->g_936
        0x0A2A17BBL, // p_1018->g_943
        (-1L), // p_1018->g_996
        (VECTOR(int16_t, 2))(0x4230L, 0x65FCL), // p_1018->g_1012
        {1UL}, // p_1018->g_1017
        0, // p_1018->v_collective
        sequence_input[get_global_id(0)], // p_1018->global_0_offset
        sequence_input[get_global_id(1)], // p_1018->global_1_offset
        sequence_input[get_global_id(2)], // p_1018->global_2_offset
        sequence_input[get_local_id(0)], // p_1018->local_0_offset
        sequence_input[get_local_id(1)], // p_1018->local_1_offset
        sequence_input[get_local_id(2)], // p_1018->local_2_offset
        sequence_input[get_group_id(0)], // p_1018->group_0_offset
        sequence_input[get_group_id(1)], // p_1018->group_1_offset
        sequence_input[get_group_id(2)], // p_1018->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[0][get_linear_local_id()])), // p_1018->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1019 = c_1020;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1018);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1018->g_3, "p_1018->g_3", print_hash_value);
    transparent_crc(p_1018->g_10, "p_1018->g_10", print_hash_value);
    transparent_crc(p_1018->g_23, "p_1018->g_23", print_hash_value);
    transparent_crc(p_1018->g_42, "p_1018->g_42", print_hash_value);
    transparent_crc(p_1018->g_50, "p_1018->g_50", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1018->g_53[i], "p_1018->g_53[i]", print_hash_value);

    }
    transparent_crc(p_1018->g_55.x, "p_1018->g_55.x", print_hash_value);
    transparent_crc(p_1018->g_55.y, "p_1018->g_55.y", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1018->g_56[i][j][k], "p_1018->g_56[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1018->g_57, "p_1018->g_57", print_hash_value);
    transparent_crc(p_1018->g_70, "p_1018->g_70", print_hash_value);
    transparent_crc(p_1018->g_97, "p_1018->g_97", print_hash_value);
    transparent_crc(p_1018->g_104.s0, "p_1018->g_104.s0", print_hash_value);
    transparent_crc(p_1018->g_104.s1, "p_1018->g_104.s1", print_hash_value);
    transparent_crc(p_1018->g_104.s2, "p_1018->g_104.s2", print_hash_value);
    transparent_crc(p_1018->g_104.s3, "p_1018->g_104.s3", print_hash_value);
    transparent_crc(p_1018->g_104.s4, "p_1018->g_104.s4", print_hash_value);
    transparent_crc(p_1018->g_104.s5, "p_1018->g_104.s5", print_hash_value);
    transparent_crc(p_1018->g_104.s6, "p_1018->g_104.s6", print_hash_value);
    transparent_crc(p_1018->g_104.s7, "p_1018->g_104.s7", print_hash_value);
    transparent_crc(p_1018->g_104.s8, "p_1018->g_104.s8", print_hash_value);
    transparent_crc(p_1018->g_104.s9, "p_1018->g_104.s9", print_hash_value);
    transparent_crc(p_1018->g_104.sa, "p_1018->g_104.sa", print_hash_value);
    transparent_crc(p_1018->g_104.sb, "p_1018->g_104.sb", print_hash_value);
    transparent_crc(p_1018->g_104.sc, "p_1018->g_104.sc", print_hash_value);
    transparent_crc(p_1018->g_104.sd, "p_1018->g_104.sd", print_hash_value);
    transparent_crc(p_1018->g_104.se, "p_1018->g_104.se", print_hash_value);
    transparent_crc(p_1018->g_104.sf, "p_1018->g_104.sf", print_hash_value);
    transparent_crc(p_1018->g_113.f0, "p_1018->g_113.f0", print_hash_value);
    transparent_crc(p_1018->g_113.f1, "p_1018->g_113.f1", print_hash_value);
    transparent_crc(p_1018->g_113.f2, "p_1018->g_113.f2", print_hash_value);
    transparent_crc(p_1018->g_113.f3, "p_1018->g_113.f3", print_hash_value);
    transparent_crc(p_1018->g_113.f4, "p_1018->g_113.f4", print_hash_value);
    transparent_crc(p_1018->g_113.f5, "p_1018->g_113.f5", print_hash_value);
    transparent_crc(p_1018->g_113.f6, "p_1018->g_113.f6", print_hash_value);
    transparent_crc(p_1018->g_113.f7.f0, "p_1018->g_113.f7.f0", print_hash_value);
    transparent_crc(p_1018->g_113.f8, "p_1018->g_113.f8", print_hash_value);
    transparent_crc(p_1018->g_113.f9, "p_1018->g_113.f9", print_hash_value);
    transparent_crc(p_1018->g_125, "p_1018->g_125", print_hash_value);
    transparent_crc(p_1018->g_136, "p_1018->g_136", print_hash_value);
    transparent_crc(p_1018->g_165.f0, "p_1018->g_165.f0", print_hash_value);
    transparent_crc(p_1018->g_165.f1, "p_1018->g_165.f1", print_hash_value);
    transparent_crc(p_1018->g_165.f2, "p_1018->g_165.f2", print_hash_value);
    transparent_crc(p_1018->g_165.f3, "p_1018->g_165.f3", print_hash_value);
    transparent_crc(p_1018->g_165.f4, "p_1018->g_165.f4", print_hash_value);
    transparent_crc(p_1018->g_165.f5, "p_1018->g_165.f5", print_hash_value);
    transparent_crc(p_1018->g_165.f6, "p_1018->g_165.f6", print_hash_value);
    transparent_crc(p_1018->g_165.f7.f0, "p_1018->g_165.f7.f0", print_hash_value);
    transparent_crc(p_1018->g_165.f8, "p_1018->g_165.f8", print_hash_value);
    transparent_crc(p_1018->g_165.f9, "p_1018->g_165.f9", print_hash_value);
    transparent_crc(p_1018->g_200.f0, "p_1018->g_200.f0", print_hash_value);
    transparent_crc(p_1018->g_200.f1, "p_1018->g_200.f1", print_hash_value);
    transparent_crc(p_1018->g_200.f2, "p_1018->g_200.f2", print_hash_value);
    transparent_crc(p_1018->g_200.f3, "p_1018->g_200.f3", print_hash_value);
    transparent_crc(p_1018->g_200.f4, "p_1018->g_200.f4", print_hash_value);
    transparent_crc(p_1018->g_200.f5, "p_1018->g_200.f5", print_hash_value);
    transparent_crc(p_1018->g_200.f6, "p_1018->g_200.f6", print_hash_value);
    transparent_crc(p_1018->g_200.f7.f0, "p_1018->g_200.f7.f0", print_hash_value);
    transparent_crc(p_1018->g_200.f8, "p_1018->g_200.f8", print_hash_value);
    transparent_crc(p_1018->g_200.f9, "p_1018->g_200.f9", print_hash_value);
    transparent_crc(p_1018->g_214, "p_1018->g_214", print_hash_value);
    transparent_crc(p_1018->g_257.x, "p_1018->g_257.x", print_hash_value);
    transparent_crc(p_1018->g_257.y, "p_1018->g_257.y", print_hash_value);
    transparent_crc(p_1018->g_262, "p_1018->g_262", print_hash_value);
    transparent_crc(p_1018->g_265.s0, "p_1018->g_265.s0", print_hash_value);
    transparent_crc(p_1018->g_265.s1, "p_1018->g_265.s1", print_hash_value);
    transparent_crc(p_1018->g_265.s2, "p_1018->g_265.s2", print_hash_value);
    transparent_crc(p_1018->g_265.s3, "p_1018->g_265.s3", print_hash_value);
    transparent_crc(p_1018->g_265.s4, "p_1018->g_265.s4", print_hash_value);
    transparent_crc(p_1018->g_265.s5, "p_1018->g_265.s5", print_hash_value);
    transparent_crc(p_1018->g_265.s6, "p_1018->g_265.s6", print_hash_value);
    transparent_crc(p_1018->g_265.s7, "p_1018->g_265.s7", print_hash_value);
    transparent_crc(p_1018->g_276.s0, "p_1018->g_276.s0", print_hash_value);
    transparent_crc(p_1018->g_276.s1, "p_1018->g_276.s1", print_hash_value);
    transparent_crc(p_1018->g_276.s2, "p_1018->g_276.s2", print_hash_value);
    transparent_crc(p_1018->g_276.s3, "p_1018->g_276.s3", print_hash_value);
    transparent_crc(p_1018->g_276.s4, "p_1018->g_276.s4", print_hash_value);
    transparent_crc(p_1018->g_276.s5, "p_1018->g_276.s5", print_hash_value);
    transparent_crc(p_1018->g_276.s6, "p_1018->g_276.s6", print_hash_value);
    transparent_crc(p_1018->g_276.s7, "p_1018->g_276.s7", print_hash_value);
    transparent_crc(p_1018->g_278.s0, "p_1018->g_278.s0", print_hash_value);
    transparent_crc(p_1018->g_278.s1, "p_1018->g_278.s1", print_hash_value);
    transparent_crc(p_1018->g_278.s2, "p_1018->g_278.s2", print_hash_value);
    transparent_crc(p_1018->g_278.s3, "p_1018->g_278.s3", print_hash_value);
    transparent_crc(p_1018->g_278.s4, "p_1018->g_278.s4", print_hash_value);
    transparent_crc(p_1018->g_278.s5, "p_1018->g_278.s5", print_hash_value);
    transparent_crc(p_1018->g_278.s6, "p_1018->g_278.s6", print_hash_value);
    transparent_crc(p_1018->g_278.s7, "p_1018->g_278.s7", print_hash_value);
    transparent_crc(p_1018->g_278.s8, "p_1018->g_278.s8", print_hash_value);
    transparent_crc(p_1018->g_278.s9, "p_1018->g_278.s9", print_hash_value);
    transparent_crc(p_1018->g_278.sa, "p_1018->g_278.sa", print_hash_value);
    transparent_crc(p_1018->g_278.sb, "p_1018->g_278.sb", print_hash_value);
    transparent_crc(p_1018->g_278.sc, "p_1018->g_278.sc", print_hash_value);
    transparent_crc(p_1018->g_278.sd, "p_1018->g_278.sd", print_hash_value);
    transparent_crc(p_1018->g_278.se, "p_1018->g_278.se", print_hash_value);
    transparent_crc(p_1018->g_278.sf, "p_1018->g_278.sf", print_hash_value);
    transparent_crc(p_1018->g_284, "p_1018->g_284", print_hash_value);
    transparent_crc(p_1018->g_298.s0, "p_1018->g_298.s0", print_hash_value);
    transparent_crc(p_1018->g_298.s1, "p_1018->g_298.s1", print_hash_value);
    transparent_crc(p_1018->g_298.s2, "p_1018->g_298.s2", print_hash_value);
    transparent_crc(p_1018->g_298.s3, "p_1018->g_298.s3", print_hash_value);
    transparent_crc(p_1018->g_298.s4, "p_1018->g_298.s4", print_hash_value);
    transparent_crc(p_1018->g_298.s5, "p_1018->g_298.s5", print_hash_value);
    transparent_crc(p_1018->g_298.s6, "p_1018->g_298.s6", print_hash_value);
    transparent_crc(p_1018->g_298.s7, "p_1018->g_298.s7", print_hash_value);
    transparent_crc(p_1018->g_344.s0, "p_1018->g_344.s0", print_hash_value);
    transparent_crc(p_1018->g_344.s1, "p_1018->g_344.s1", print_hash_value);
    transparent_crc(p_1018->g_344.s2, "p_1018->g_344.s2", print_hash_value);
    transparent_crc(p_1018->g_344.s3, "p_1018->g_344.s3", print_hash_value);
    transparent_crc(p_1018->g_344.s4, "p_1018->g_344.s4", print_hash_value);
    transparent_crc(p_1018->g_344.s5, "p_1018->g_344.s5", print_hash_value);
    transparent_crc(p_1018->g_344.s6, "p_1018->g_344.s6", print_hash_value);
    transparent_crc(p_1018->g_344.s7, "p_1018->g_344.s7", print_hash_value);
    transparent_crc(p_1018->g_718, "p_1018->g_718", print_hash_value);
    transparent_crc(p_1018->g_725.s0, "p_1018->g_725.s0", print_hash_value);
    transparent_crc(p_1018->g_725.s1, "p_1018->g_725.s1", print_hash_value);
    transparent_crc(p_1018->g_725.s2, "p_1018->g_725.s2", print_hash_value);
    transparent_crc(p_1018->g_725.s3, "p_1018->g_725.s3", print_hash_value);
    transparent_crc(p_1018->g_725.s4, "p_1018->g_725.s4", print_hash_value);
    transparent_crc(p_1018->g_725.s5, "p_1018->g_725.s5", print_hash_value);
    transparent_crc(p_1018->g_725.s6, "p_1018->g_725.s6", print_hash_value);
    transparent_crc(p_1018->g_725.s7, "p_1018->g_725.s7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1018->g_742[i][j][k].f0.f0, "p_1018->g_742[i][j][k].f0.f0", print_hash_value);
                transparent_crc(p_1018->g_742[i][j][k].f0.f1, "p_1018->g_742[i][j][k].f0.f1", print_hash_value);
                transparent_crc(p_1018->g_742[i][j][k].f0.f2, "p_1018->g_742[i][j][k].f0.f2", print_hash_value);
                transparent_crc(p_1018->g_742[i][j][k].f0.f3, "p_1018->g_742[i][j][k].f0.f3", print_hash_value);
                transparent_crc(p_1018->g_742[i][j][k].f0.f4, "p_1018->g_742[i][j][k].f0.f4", print_hash_value);
                transparent_crc(p_1018->g_742[i][j][k].f0.f5, "p_1018->g_742[i][j][k].f0.f5", print_hash_value);
                transparent_crc(p_1018->g_742[i][j][k].f0.f6, "p_1018->g_742[i][j][k].f0.f6", print_hash_value);
                transparent_crc(p_1018->g_742[i][j][k].f0.f7.f0, "p_1018->g_742[i][j][k].f0.f7.f0", print_hash_value);
                transparent_crc(p_1018->g_742[i][j][k].f0.f8, "p_1018->g_742[i][j][k].f0.f8", print_hash_value);
                transparent_crc(p_1018->g_742[i][j][k].f0.f9, "p_1018->g_742[i][j][k].f0.f9", print_hash_value);

            }
        }
    }
    transparent_crc(p_1018->g_754.s0, "p_1018->g_754.s0", print_hash_value);
    transparent_crc(p_1018->g_754.s1, "p_1018->g_754.s1", print_hash_value);
    transparent_crc(p_1018->g_754.s2, "p_1018->g_754.s2", print_hash_value);
    transparent_crc(p_1018->g_754.s3, "p_1018->g_754.s3", print_hash_value);
    transparent_crc(p_1018->g_754.s4, "p_1018->g_754.s4", print_hash_value);
    transparent_crc(p_1018->g_754.s5, "p_1018->g_754.s5", print_hash_value);
    transparent_crc(p_1018->g_754.s6, "p_1018->g_754.s6", print_hash_value);
    transparent_crc(p_1018->g_754.s7, "p_1018->g_754.s7", print_hash_value);
    transparent_crc(p_1018->g_754.s8, "p_1018->g_754.s8", print_hash_value);
    transparent_crc(p_1018->g_754.s9, "p_1018->g_754.s9", print_hash_value);
    transparent_crc(p_1018->g_754.sa, "p_1018->g_754.sa", print_hash_value);
    transparent_crc(p_1018->g_754.sb, "p_1018->g_754.sb", print_hash_value);
    transparent_crc(p_1018->g_754.sc, "p_1018->g_754.sc", print_hash_value);
    transparent_crc(p_1018->g_754.sd, "p_1018->g_754.sd", print_hash_value);
    transparent_crc(p_1018->g_754.se, "p_1018->g_754.se", print_hash_value);
    transparent_crc(p_1018->g_754.sf, "p_1018->g_754.sf", print_hash_value);
    transparent_crc(p_1018->g_789.s0, "p_1018->g_789.s0", print_hash_value);
    transparent_crc(p_1018->g_789.s1, "p_1018->g_789.s1", print_hash_value);
    transparent_crc(p_1018->g_789.s2, "p_1018->g_789.s2", print_hash_value);
    transparent_crc(p_1018->g_789.s3, "p_1018->g_789.s3", print_hash_value);
    transparent_crc(p_1018->g_789.s4, "p_1018->g_789.s4", print_hash_value);
    transparent_crc(p_1018->g_789.s5, "p_1018->g_789.s5", print_hash_value);
    transparent_crc(p_1018->g_789.s6, "p_1018->g_789.s6", print_hash_value);
    transparent_crc(p_1018->g_789.s7, "p_1018->g_789.s7", print_hash_value);
    transparent_crc(p_1018->g_790.f0.f0, "p_1018->g_790.f0.f0", print_hash_value);
    transparent_crc(p_1018->g_790.f0.f1, "p_1018->g_790.f0.f1", print_hash_value);
    transparent_crc(p_1018->g_790.f0.f2, "p_1018->g_790.f0.f2", print_hash_value);
    transparent_crc(p_1018->g_790.f0.f3, "p_1018->g_790.f0.f3", print_hash_value);
    transparent_crc(p_1018->g_790.f0.f4, "p_1018->g_790.f0.f4", print_hash_value);
    transparent_crc(p_1018->g_790.f0.f5, "p_1018->g_790.f0.f5", print_hash_value);
    transparent_crc(p_1018->g_790.f0.f6, "p_1018->g_790.f0.f6", print_hash_value);
    transparent_crc(p_1018->g_790.f0.f7.f0, "p_1018->g_790.f0.f7.f0", print_hash_value);
    transparent_crc(p_1018->g_790.f0.f8, "p_1018->g_790.f0.f8", print_hash_value);
    transparent_crc(p_1018->g_790.f0.f9, "p_1018->g_790.f0.f9", print_hash_value);
    transparent_crc(p_1018->g_810.x, "p_1018->g_810.x", print_hash_value);
    transparent_crc(p_1018->g_810.y, "p_1018->g_810.y", print_hash_value);
    transparent_crc(p_1018->g_810.z, "p_1018->g_810.z", print_hash_value);
    transparent_crc(p_1018->g_810.w, "p_1018->g_810.w", print_hash_value);
    transparent_crc(p_1018->g_870.x, "p_1018->g_870.x", print_hash_value);
    transparent_crc(p_1018->g_870.y, "p_1018->g_870.y", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1018->g_881[i].f0.f0, "p_1018->g_881[i].f0.f0", print_hash_value);
        transparent_crc(p_1018->g_881[i].f0.f1, "p_1018->g_881[i].f0.f1", print_hash_value);
        transparent_crc(p_1018->g_881[i].f0.f2, "p_1018->g_881[i].f0.f2", print_hash_value);
        transparent_crc(p_1018->g_881[i].f0.f3, "p_1018->g_881[i].f0.f3", print_hash_value);
        transparent_crc(p_1018->g_881[i].f0.f4, "p_1018->g_881[i].f0.f4", print_hash_value);
        transparent_crc(p_1018->g_881[i].f0.f5, "p_1018->g_881[i].f0.f5", print_hash_value);
        transparent_crc(p_1018->g_881[i].f0.f6, "p_1018->g_881[i].f0.f6", print_hash_value);
        transparent_crc(p_1018->g_881[i].f0.f7.f0, "p_1018->g_881[i].f0.f7.f0", print_hash_value);
        transparent_crc(p_1018->g_881[i].f0.f8, "p_1018->g_881[i].f0.f8", print_hash_value);
        transparent_crc(p_1018->g_881[i].f0.f9, "p_1018->g_881[i].f0.f9", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1018->g_884[i].f0.f0, "p_1018->g_884[i].f0.f0", print_hash_value);
        transparent_crc(p_1018->g_884[i].f0.f1, "p_1018->g_884[i].f0.f1", print_hash_value);
        transparent_crc(p_1018->g_884[i].f0.f2, "p_1018->g_884[i].f0.f2", print_hash_value);
        transparent_crc(p_1018->g_884[i].f0.f3, "p_1018->g_884[i].f0.f3", print_hash_value);
        transparent_crc(p_1018->g_884[i].f0.f4, "p_1018->g_884[i].f0.f4", print_hash_value);
        transparent_crc(p_1018->g_884[i].f0.f5, "p_1018->g_884[i].f0.f5", print_hash_value);
        transparent_crc(p_1018->g_884[i].f0.f6, "p_1018->g_884[i].f0.f6", print_hash_value);
        transparent_crc(p_1018->g_884[i].f0.f7.f0, "p_1018->g_884[i].f0.f7.f0", print_hash_value);
        transparent_crc(p_1018->g_884[i].f0.f8, "p_1018->g_884[i].f0.f8", print_hash_value);
        transparent_crc(p_1018->g_884[i].f0.f9, "p_1018->g_884[i].f0.f9", print_hash_value);

    }
    transparent_crc(p_1018->g_886.f0.f0, "p_1018->g_886.f0.f0", print_hash_value);
    transparent_crc(p_1018->g_886.f0.f1, "p_1018->g_886.f0.f1", print_hash_value);
    transparent_crc(p_1018->g_886.f0.f2, "p_1018->g_886.f0.f2", print_hash_value);
    transparent_crc(p_1018->g_886.f0.f3, "p_1018->g_886.f0.f3", print_hash_value);
    transparent_crc(p_1018->g_886.f0.f4, "p_1018->g_886.f0.f4", print_hash_value);
    transparent_crc(p_1018->g_886.f0.f5, "p_1018->g_886.f0.f5", print_hash_value);
    transparent_crc(p_1018->g_886.f0.f6, "p_1018->g_886.f0.f6", print_hash_value);
    transparent_crc(p_1018->g_886.f0.f7.f0, "p_1018->g_886.f0.f7.f0", print_hash_value);
    transparent_crc(p_1018->g_886.f0.f8, "p_1018->g_886.f0.f8", print_hash_value);
    transparent_crc(p_1018->g_886.f0.f9, "p_1018->g_886.f0.f9", print_hash_value);
    transparent_crc(p_1018->g_927, "p_1018->g_927", print_hash_value);
    transparent_crc(p_1018->g_936.x, "p_1018->g_936.x", print_hash_value);
    transparent_crc(p_1018->g_936.y, "p_1018->g_936.y", print_hash_value);
    transparent_crc(p_1018->g_936.z, "p_1018->g_936.z", print_hash_value);
    transparent_crc(p_1018->g_936.w, "p_1018->g_936.w", print_hash_value);
    transparent_crc(p_1018->g_943, "p_1018->g_943", print_hash_value);
    transparent_crc(p_1018->g_996, "p_1018->g_996", print_hash_value);
    transparent_crc(p_1018->g_1012.x, "p_1018->g_1012.x", print_hash_value);
    transparent_crc(p_1018->g_1012.y, "p_1018->g_1012.y", print_hash_value);
    transparent_crc(p_1018->g_1017.f0, "p_1018->g_1017.f0", print_hash_value);
    transparent_crc(p_1018->v_collective, "p_1018->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 3; i++)
            transparent_crc(p_1018->l_special_values[i], "p_1018->l_special_values[i]", print_hash_value);
    transparent_crc(p_1018->l_comm_values[get_linear_local_id()], "p_1018->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1018->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()], "p_1018->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
