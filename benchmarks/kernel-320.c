// --atomics 65 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 22,88,5 -l 1,11,5
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
{52,29,47,44,32,33,21,28,4,11,49,36,15,5,43,34,10,37,24,35,39,27,42,0,46,20,12,51,50,30,45,16,41,54,22,6,3,19,7,48,2,9,26,17,25,23,13,14,31,38,8,1,40,18,53}, // permutation 0
{48,33,25,37,0,36,10,41,18,40,44,29,49,20,50,4,7,8,35,24,54,16,9,32,5,46,1,27,15,14,34,47,42,38,31,3,12,51,28,39,19,45,53,22,23,17,11,43,21,2,52,6,30,13,26}, // permutation 1
{4,44,43,35,53,29,3,41,32,2,38,54,9,0,12,50,26,1,46,28,6,40,22,17,33,51,8,11,13,14,45,10,30,18,19,34,27,39,48,7,25,31,47,36,20,5,21,49,24,42,15,23,16,52,37}, // permutation 2
{12,15,35,49,13,40,43,6,38,27,20,0,53,37,8,32,28,7,46,51,21,9,30,25,4,10,18,14,3,1,24,48,54,47,17,41,23,34,26,19,50,39,52,31,2,33,16,44,45,36,22,29,5,42,11}, // permutation 3
{9,24,5,53,44,13,19,0,18,32,30,17,36,52,40,45,25,1,10,31,33,51,29,39,46,41,11,26,7,4,20,42,3,15,14,34,6,23,49,47,12,54,27,48,43,28,21,38,37,50,22,8,35,16,2}, // permutation 4
{31,54,5,16,23,8,3,49,15,7,1,29,37,35,43,52,30,22,39,21,48,17,42,47,51,28,25,12,38,45,4,34,2,11,44,40,33,50,13,6,36,46,53,19,10,32,18,0,14,9,41,27,26,24,20}, // permutation 5
{31,16,45,33,18,52,49,0,34,38,9,46,6,48,21,2,8,23,28,43,22,39,40,51,14,47,25,12,54,27,5,24,17,41,15,37,53,13,3,35,4,50,10,26,32,44,29,42,1,19,11,7,30,36,20}, // permutation 6
{40,29,21,42,47,17,5,39,51,2,7,32,38,36,13,8,54,45,9,34,0,41,44,12,30,16,6,15,52,24,18,23,10,27,25,1,35,48,50,49,53,22,4,28,20,43,46,31,33,26,19,37,11,14,3}, // permutation 7
{25,15,6,42,40,35,50,39,19,1,14,31,54,17,52,37,4,30,49,47,33,29,53,41,2,11,8,22,44,18,7,34,0,13,10,5,27,24,38,46,16,32,9,26,43,23,20,12,21,28,36,45,48,51,3}, // permutation 8
{34,23,48,8,4,17,31,11,52,12,14,43,30,51,10,41,26,44,25,33,5,21,37,22,7,35,46,36,1,18,20,15,16,50,49,45,13,9,3,54,0,2,38,24,32,19,42,6,29,28,27,53,39,47,40} // permutation 9
};

// Seed: 657310278

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   int32_t  f1;
   int64_t  f2;
   int32_t  f3;
   uint32_t  f4;
   uint32_t  f5;
   volatile uint64_t  f6;
   uint16_t  f7;
};

struct S1 {
   volatile int32_t  f0;
   uint32_t  f1;
   volatile int16_t  f2;
   volatile uint64_t  f3;
   int32_t  f4;
   volatile uint64_t  f5;
   uint32_t  f6;
   int64_t  f7;
   int64_t  f8;
   volatile int32_t  f9;
};

union U2 {
   volatile int8_t  f0;
   struct S1  f1;
};

struct S3 {
    uint32_t g_3;
    int32_t g_7;
    int32_t * volatile g_6;
    uint64_t g_27;
    uint32_t g_45[4][4][8];
    volatile int32_t g_68;
    uint32_t g_69;
    volatile union U2 g_79[6];
    volatile VECTOR(uint8_t, 16) g_84;
    uint16_t g_89;
    uint16_t g_92;
    volatile VECTOR(uint32_t, 16) g_98;
    int16_t g_111;
    uint16_t g_114;
    volatile struct S1 g_115;
    VECTOR(int8_t, 2) g_121;
    struct S1 g_125;
    uint8_t g_134[10];
    int64_t g_142;
    struct S0 g_148;
    int32_t *g_169;
    int32_t ** volatile g_168;
    uint64_t g_191[2];
    uint16_t *g_203;
    uint16_t **g_202;
    uint16_t *** volatile g_201[9][10];
    VECTOR(int16_t, 4) g_223;
    VECTOR(uint16_t, 4) g_225;
    volatile struct S0 g_231;
    int32_t ** volatile g_254;
    volatile struct S1 *g_256;
    volatile struct S1 ** volatile g_255;
    struct S1 *g_271;
    struct S1 **g_270[2][5][4];
    struct S0 g_288[2];
    struct S0 g_290[4];
    struct S0 *g_289;
    struct S1 g_309;
    int32_t ** volatile g_315;
    volatile int64_t g_338;
    volatile uint8_t g_339;
    int32_t ** volatile g_342;
    volatile int64_t g_351;
    volatile int64_t g_352;
    volatile int64_t g_353;
    volatile int64_t g_354;
    volatile int64_t g_355;
    volatile int64_t g_356;
    volatile int64_t g_357;
    volatile int64_t g_358;
    volatile VECTOR(int64_t, 16) g_359;
    volatile int64_t g_360;
    volatile int64_t g_361;
    volatile int64_t g_362;
    volatile int64_t g_363;
    volatile int64_t g_364;
    volatile int64_t g_365;
    volatile int64_t *g_350[3][5][2];
    int32_t g_375;
    volatile struct S0 g_384;
    uint32_t *g_402;
    uint32_t **g_401[5];
    VECTOR(int32_t, 8) g_425;
    union U2 g_427;
    VECTOR(uint16_t, 16) g_436;
    volatile VECTOR(uint64_t, 2) g_446;
    int32_t ** volatile g_470[7];
    int32_t ** volatile g_471[1];
    int32_t ** volatile g_472;
    volatile struct S1 g_473;
    volatile struct S1 g_474;
    int32_t ** volatile g_485;
    volatile struct S0 g_526;
    int8_t *g_535[4];
    volatile union U2 g_577;
    volatile struct S0 *g_581[10];
    volatile struct S0 ** volatile g_580;
    volatile struct S0 g_591;
    VECTOR(uint32_t, 2) g_592;
    volatile union U2 *g_611;
    volatile union U2 ** volatile g_610;
    volatile struct S0 g_614;
    volatile VECTOR(uint8_t, 4) g_620;
    volatile struct S0 g_628;
    int32_t ** volatile g_630[2];
    int32_t ** volatile g_641;
    VECTOR(int8_t, 8) g_650;
    volatile VECTOR(uint8_t, 4) g_653;
    VECTOR(int32_t, 4) g_694;
    volatile union U2 g_722;
    volatile struct S1 g_733;
    int16_t * volatile g_758;
    VECTOR(int8_t, 8) g_762;
    uint8_t g_767;
    union U2 *g_783;
    union U2 **g_782;
    struct S0 g_831;
    int32_t *g_850;
    int32_t ** volatile g_849;
    volatile struct S0 ** volatile g_851;
    VECTOR(int32_t, 4) g_852;
    struct S0 g_853;
    struct S0 g_854;
    VECTOR(uint64_t, 8) g_865;
    volatile struct S0 g_872;
    volatile struct S0 g_873;
    uint8_t *g_875;
    uint8_t **g_874[5];
    struct S1 ***g_889;
    struct S1 * volatile *g_892;
    struct S1 * volatile **g_891;
    struct S1 * volatile ***g_890[4][7];
    volatile VECTOR(int64_t, 8) g_903;
    VECTOR(int16_t, 8) g_910;
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
int8_t  func_1(struct S3 * p_922);
int64_t  func_8(uint32_t  p_9, int32_t * p_10, int64_t  p_11, int32_t * p_12, int32_t * p_13, struct S3 * p_922);
uint32_t  func_16(int8_t  p_17, uint32_t  p_18, int64_t  p_19, int32_t * p_20, int32_t * p_21, struct S3 * p_922);
union U2  func_24(uint64_t  p_25, int32_t * p_26, struct S3 * p_922);
int32_t * func_28(int32_t * p_29, struct S3 * p_922);
int32_t * func_30(int32_t * p_31, int32_t * p_32, int32_t * p_33, uint32_t  p_34, struct S3 * p_922);
int32_t * func_35(int32_t * p_36, int32_t * p_37, int32_t * p_38, struct S3 * p_922);
int32_t * func_39(int32_t * p_40, int32_t * p_41, int8_t  p_42, int64_t  p_43, struct S3 * p_922);
int64_t  func_46(int8_t  p_47, uint16_t  p_48, struct S3 * p_922);
uint8_t  func_49(int32_t * p_50, int32_t  p_51, uint32_t  p_52, struct S3 * p_922);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_922->g_3 p_922->g_6 p_922->g_27 p_922->g_7 p_922->g_68 p_922->g_69 p_922->g_79 p_922->g_84 p_922->g_92 p_922->g_89 p_922->g_114 p_922->g_115 p_922->g_134 p_922->g_191 p_922->g_125.f4 p_922->g_125.f1 p_922->g_148.f2 p_922->g_125.f8 p_922->g_142 p_922->g_79.f0 p_922->g_223 p_922->g_225 p_922->g_231 p_922->g_148.f4 p_922->g_168 p_922->g_169 p_922->g_254 p_922->g_255 p_922->g_270 p_922->g_121 p_922->g_202 p_922->g_203 p_922->g_289 p_922->g_288.f2 p_922->g_290.f7 p_922->g_290.f2 p_922->g_309 p_922->g_256 p_922->g_315 p_922->g_339 p_922->g_342 p_922->g_350 p_922->g_290.f3 p_922->g_125 p_922->g_384 p_922->g_402 p_922->g_290.f5 p_922->g_290.f1 p_922->g_427 p_922->g_288.f1 p_922->g_288.f5 p_922->g_290.f4 p_922->g_288.f7 p_922->g_472 p_922->g_473 p_922->g_485 p_922->g_526 p_922->g_535 p_922->g_577 p_922->g_580 p_922->g_591 p_922->g_592 p_922->g_610 p_922->g_614 p_922->g_620 p_922->g_581 p_922->g_611 p_922->g_436 p_922->g_641 p_922->g_148.f3 p_922->g_288.f4 p_922->g_722 permutations p_922->g_733 p_922->g_758 p_922->g_148.f7 p_922->g_425 p_922->g_782 p_922->g_831 p_922->g_849 p_922->g_851 p_922->g_852 p_922->g_853 p_922->g_854.f5 p_922->g_850 p_922->g_865 p_922->g_872 p_922->g_873 p_922->g_874 p_922->g_890 p_922->g_903 p_922->g_910 p_922->g_45 p_922->g_875
 * writes: p_922->g_3 p_922->g_7 p_922->g_45 p_922->g_69 p_922->g_89 p_922->g_92 p_922->g_114 p_922->g_115 p_922->g_191 p_922->g_125.f4 p_922->g_125.f1 p_922->g_148.f2 p_922->g_202 p_922->g_169 p_922->g_231 p_922->g_148.f4 p_922->g_270 p_922->g_339 p_922->g_375 p_922->g_309.f6 p_922->g_401 p_922->g_288.f5 p_922->g_290.f1 p_922->g_148.f7 p_922->g_288.f7 p_922->g_474 p_922->g_427.f1.f1 p_922->g_comm_values p_922->g_111 p_922->g_288.f1 p_922->g_223 p_922->g_581 p_922->g_611 p_922->g_309.f8 p_922->g_290 p_922->g_628 p_922->g_125.f6 p_922->g_134 p_922->g_782 p_922->g_289 p_922->g_767 p_922->g_831.f0 p_922->g_850 p_922->g_854 p_922->g_831.f1 p_922->g_889
 */
int8_t  func_1(struct S3 * p_922)
{ /* block id: 4 */
    int32_t *l_44 = &p_922->g_7;
    int8_t l_59 = 0x2AL;
    int32_t **l_609 = &l_44;
    int32_t *l_632[5][8][2] = {{{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1}},{{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1}},{{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1}},{{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1}},{{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1},{&p_922->g_309.f4,&p_922->g_148.f1}}};
    int32_t l_843 = 0L;
    uint64_t l_844 = 0x9A0E44FFBD7719D1L;
    uint16_t l_857 = 65535UL;
    union U2 **l_864 = &p_922->g_783;
    uint32_t l_871 = 4294967292UL;
    struct S1 ***l_887 = &p_922->g_270[0][4][2];
    uint8_t l_917 = 0xBBL;
    int16_t l_921 = (-10L);
    int i, j, k;
    (*p_922->g_6) = (safe_unary_minus_func_uint32_t_u((p_922->g_3++)));
    p_922->g_854 = (func_8((safe_mod_func_int8_t_s_s((func_16((safe_mul_func_uint8_t_u_u((func_24(p_922->g_27, func_28(func_30(((*l_609) = func_35(func_39(l_44, (((p_922->g_45[2][0][1] = FAKE_DIVERGE(p_922->global_0_offset, get_global_id(0), 10)) != func_46(p_922->g_7, (func_49(l_44, (safe_sub_func_uint64_t_u_u(1UL, (safe_mul_func_int16_t_s_s((((p_922->g_3 == (safe_mul_func_int16_t_s_s(p_922->g_27, p_922->g_27))) > 0L) <= 0xF8F643D9D76C132DL), 65535UL)))), l_59, p_922) || 0xE4L), p_922)) , l_44), p_922->g_125.f8, p_922->g_142, p_922), l_44, l_44, p_922)), p_922->g_402, p_922->g_402, l_59, p_922), p_922), p_922) , p_922->g_614.f3), p_922->g_436.s7)), l_59, p_922->g_592.x, p_922->g_402, l_632[0][2][0], p_922) , l_843), l_844)), p_922->g_402, p_922->g_125.f8, p_922->g_402, p_922->g_402, p_922) , p_922->g_853);
    (*l_609) = (*l_609);
    if ((safe_rshift_func_int8_t_s_u(l_857, 2)))
    { /* block id: 317 */
        VECTOR(int64_t, 2) l_868 = (VECTOR(int64_t, 2))(0x0BAF841716C2D691L, 0x6B60AC5B7D0CCD29L);
        uint64_t l_880 = 0UL;
        int i;
        for (l_843 = 0; (l_843 > 19); l_843 = safe_add_func_uint64_t_u_u(l_843, 4))
        { /* block id: 320 */
            int8_t l_862 = (-9L);
            uint16_t l_863 = 65535UL;
            for (p_922->g_854.f5 = 9; (p_922->g_854.f5 >= 5); p_922->g_854.f5 = safe_sub_func_uint16_t_u_u(p_922->g_854.f5, 3))
            { /* block id: 323 */
                int8_t *l_876 = &l_59;
                int64_t l_877 = 7L;
                l_877 = (((*p_922->g_850) = l_862) >= ((+((l_863 , l_864) != (void*)0)) >= ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(p_922->g_865.s07150676)))).lo, (uint64_t)FAKE_DIVERGE(p_922->group_2_offset, get_group_id(2), 10), (uint64_t)(safe_mod_func_int8_t_s_s((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_868.yy)))).xxxyyyxy)).s3 , ((VECTOR(int8_t, 2))((-1L), 0x06L)).odd), ((*l_876) = ((((**p_922->g_255) , (safe_mul_func_int16_t_s_s((l_871 & 0x40L), ((((p_922->g_872 , p_922->g_873) , (void*)0) == p_922->g_874[0]) , l_868.x)))) <= l_862) , l_868.x))))))).odd, ((VECTOR(uint64_t, 2))(0x8495E4ACC0292088L))))).hi));
            }
            (*p_922->g_850) = ((safe_div_func_uint32_t_u_u(l_880, l_868.x)) && l_862);
        }
    }
    else
    { /* block id: 330 */
        struct S1 ****l_888[4] = {&l_887,&l_887,&l_887,&l_887};
        int8_t *l_893 = (void*)0;
        int8_t *l_894[8][3][5] = {{{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59}},{{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59}},{{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59}},{{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59}},{{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59}},{{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59}},{{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59}},{{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59},{&l_59,&l_59,(void*)0,&l_59,&l_59}}};
        int32_t l_895 = 0x1B251AE0L;
        int32_t l_898 = 0L;
        int32_t l_918 = 0L;
        int32_t l_919 = 1L;
        uint16_t *l_920 = &p_922->g_288[0].f7;
        int i, j, k;
        (*p_922->g_6) = (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(8UL, (((p_922->g_889 = l_887) == &p_922->g_270[0][0][3]) <= (l_895 = ((void*)0 == p_922->g_890[2][4]))))), ((*l_920) = (safe_mod_func_uint32_t_u_u(l_898, ((((safe_mod_func_int32_t_s_s(((*p_922->g_850) = (((VECTOR(int64_t, 16))(p_922->g_903.s0123414230037143)).s2 >= ((p_922->g_290[3].f1 &= (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(0UL, 4294967295UL, ((((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((l_918 ^= (l_898 , (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 16))(p_922->g_910.s3453041726706625)).sf4))), (safe_rshift_func_uint16_t_u_s(((+(safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(l_898, 0x6DL)) , 0xD6L) | l_898), l_898))) && 0xD802L), 2)), 0x2A6AL, l_917, ((VECTOR(int16_t, 2))(2L)), 0x1528L, 0L, ((VECTOR(int16_t, 4))((-4L))), (-1L), (-5L), 0x4C1FL)).s5, p_922->g_45[2][3][2])))), FAKE_DIVERGE(p_922->global_2_offset, get_global_id(2), 10))), 6)) , p_922->g_114) , l_898) & (*p_922->g_875)), l_918, 4294967294UL, ((VECTOR(uint32_t, 4))(0xBF0FAECCL)), 9UL, l_918, ((VECTOR(uint32_t, 2))(0x6F1F41EDL)), (*p_922->g_402), 0x4FD10985L, 1UL)))).s4bfa, (uint32_t)l_918))), ((VECTOR(uint32_t, 2))(4294967287UL)), 9UL, 0xE0F6B2CAL)).s4 != (*p_922->g_402))) < (*p_922->g_402)))), l_898)) >= p_922->g_831.f0) , l_919) , l_918)))))), l_919));
    }
    return l_921;
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_831.f0 p_922->g_315 p_922->g_849 p_922->g_580 p_922->g_581 p_922->g_851 p_922->g_852
 * writes: p_922->g_831.f0 p_922->g_169 p_922->g_850 p_922->g_581 p_922->g_288.f5
 */
int64_t  func_8(uint32_t  p_9, int32_t * p_10, int64_t  p_11, int32_t * p_12, int32_t * p_13, struct S3 * p_922)
{ /* block id: 304 */
    for (p_922->g_831.f0 = 7; (p_922->g_831.f0 != 44); ++p_922->g_831.f0)
    { /* block id: 307 */
        int32_t *l_848[6][6][2] = {{{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1}},{{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1}},{{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1}},{{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1}},{{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1}},{{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1},{&p_922->g_7,&p_922->g_288[0].f1}}};
        int32_t **l_847 = &l_848[4][5][1];
        int i, j, k;
        (*p_922->g_849) = ((*l_847) = ((*p_922->g_315) = p_12));
        (*p_922->g_851) = (*p_922->g_580);
        (*p_12) = ((VECTOR(int32_t, 4))(p_922->g_852.xzzw)).z;
    }
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_641 p_922->g_125.f6 p_922->g_148.f3 p_922->g_169 p_922->g_288.f4 p_922->g_288.f5 p_922->g_290.f7 p_922->g_402 p_922->g_722 permutations p_922->g_733 p_922->g_134 p_922->g_758 p_922->g_290.f3 p_922->g_148.f7 p_922->g_425 p_922->g_27 p_922->g_782 p_922->g_309.f3 p_922->g_309.f4 p_922->g_831
 * writes: p_922->g_288.f5 p_922->g_169 p_922->g_125.f6 p_922->g_148.f7 p_922->g_191 p_922->g_290.f7 p_922->g_134 p_922->g_223 p_922->g_782 p_922->g_7 p_922->g_309.f6 p_922->g_290.f1 p_922->g_289 p_922->g_767 p_922->g_111
 */
uint32_t  func_16(int8_t  p_17, uint32_t  p_18, int64_t  p_19, int32_t * p_20, int32_t * p_21, struct S3 * p_922)
{ /* block id: 239 */
    uint16_t **l_635 = (void*)0;
    uint16_t ***l_636 = &l_635;
    uint16_t **l_637 = &p_922->g_203;
    int32_t l_640 = 0x3C1E89D5L;
    VECTOR(int8_t, 8) l_652 = (VECTOR(int8_t, 8))(0x38L, (VECTOR(int8_t, 4))(0x38L, (VECTOR(int8_t, 2))(0x38L, 3L), 3L), 3L, 0x38L, 3L);
    int32_t l_673[4] = {0x333B97D8L,0x333B97D8L,0x333B97D8L,0x333B97D8L};
    int64_t l_689 = 0x2F5E27639274AEDDL;
    int16_t l_721 = 0x770AL;
    int32_t **l_734 = &p_922->g_169;
    VECTOR(uint32_t, 8) l_751 = (VECTOR(uint32_t, 8))(0x81ECA318L, (VECTOR(uint32_t, 4))(0x81ECA318L, (VECTOR(uint32_t, 2))(0x81ECA318L, 0UL), 0UL), 0UL, 0x81ECA318L, 0UL);
    VECTOR(int16_t, 8) l_786 = (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L);
    struct S0 *l_816 = (void*)0;
    int i;
    (*p_20) = (safe_add_func_int16_t_s_s((((*l_636) = l_635) == l_637), (safe_add_func_uint32_t_u_u(l_640, l_640))));
    (*p_922->g_641) = &l_640;
    for (p_922->g_125.f6 = 0; (p_922->g_125.f6 < 34); p_922->g_125.f6 = safe_add_func_uint16_t_u_u(p_922->g_125.f6, 3))
    { /* block id: 245 */
        VECTOR(int8_t, 2) l_651 = (VECTOR(int8_t, 2))((-8L), 0x3FL);
        int32_t l_666 = 0x178A777FL;
        int32_t l_674 = (-9L);
        int32_t l_675 = 0x102EBF23L;
        int32_t l_676 = 0x1DF74DBEL;
        int32_t l_677 = 1L;
        int32_t l_678 = 0x795FF212L;
        int32_t l_679 = 0x513F6C90L;
        int32_t l_680 = (-5L);
        int32_t l_681 = 0x6F9F73C6L;
        int32_t l_682 = 0L;
        int32_t l_683[1];
        int32_t l_684[1];
        VECTOR(uint32_t, 2) l_686 = (VECTOR(uint32_t, 2))(0x0500708CL, 1UL);
        VECTOR(uint64_t, 8) l_707 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL);
        VECTOR(uint32_t, 8) l_750 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL);
        int16_t *l_759 = &p_922->g_111;
        uint16_t l_792 = 0xEECAL;
        uint32_t l_807 = 0xF03ECEF8L;
        VECTOR(int16_t, 4) l_840 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-5L)), (-5L));
        int i;
        for (i = 0; i < 1; i++)
            l_683[i] = 4L;
        for (i = 0; i < 1; i++)
            l_684[i] = 0x398BDA71L;
        (*p_922->g_169) &= (safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(p_922->g_650.s1305)).wwwwzwxyzyyzxzyx, ((VECTOR(int8_t, 2))(l_651.yy)).yyyyxyxyxxxxxxyx))).s1, (GROUP_DIVERGE(1, 1) != p_922->g_148.f3))), ((VECTOR(int8_t, 2))(0x42L, 0x15L)).lo)), ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(l_652.s01076366)), ((VECTOR(uint8_t, 16))(p_922->g_653.zyxxzwzxzzxxxwyy)).hi))).s5));
        if (((safe_div_func_int16_t_s_s(l_651.x, l_652.s4)) , 0x57D3D962L))
        { /* block id: 247 */
            int32_t *l_656 = &p_922->g_125.f4;
            int32_t *l_657 = &p_922->g_427.f1.f4;
            int32_t *l_658 = &p_922->g_309.f4;
            int32_t *l_659 = &p_922->g_427.f1.f4;
            int32_t *l_660 = &p_922->g_288[0].f1;
            int32_t *l_661 = (void*)0;
            int32_t l_662[9] = {0x25EC8461L,1L,0x25EC8461L,0x25EC8461L,1L,0x25EC8461L,0x25EC8461L,1L,0x25EC8461L};
            int32_t *l_663 = (void*)0;
            int32_t *l_664 = &p_922->g_125.f4;
            int32_t *l_665 = &l_640;
            int32_t *l_667 = (void*)0;
            int32_t *l_668 = &p_922->g_290[3].f1;
            int32_t *l_669 = &l_640;
            int32_t *l_670 = &l_662[2];
            int32_t *l_671 = &l_666;
            int32_t *l_672[9][1] = {{&p_922->g_375},{&p_922->g_375},{&p_922->g_375},{&p_922->g_375},{&p_922->g_375},{&p_922->g_375},{&p_922->g_375},{&p_922->g_375},{&p_922->g_375}};
            int8_t l_685 = 0x33L;
            uint8_t l_690 = 0xC4L;
            VECTOR(uint64_t, 4) l_693 = (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0UL), 0UL);
            int i, j;
            ++l_686.y;
            --l_690;
            (*l_665) |= (p_922->g_288[0].f4 != ((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 16))(l_693.xywwzxwxwzzzyyxx))))).s6);
        }
        else
        { /* block id: 251 */
            int16_t l_710 = 0x4BC6L;
            int32_t l_720 = 0L;
            VECTOR(int16_t, 4) l_730 = (VECTOR(int16_t, 4))(0x2B6FL, (VECTOR(int16_t, 2))(0x2B6FL, 0L), 0L);
            uint32_t **l_742 = (void*)0;
            uint8_t *l_766 = &p_922->g_767;
            uint8_t *l_773 = &p_922->g_767;
            uint64_t l_785 = 0x043E1269664084F8L;
            int i;
            (*p_20) ^= ((VECTOR(int32_t, 4))(p_922->g_694.yxzy)).z;
            for (p_922->g_148.f7 = 0; (p_922->g_148.f7 > 34); ++p_922->g_148.f7)
            { /* block id: 255 */
                int32_t l_699 = 0x0C096010L;
                uint64_t *l_700 = &p_922->g_191[0];
                int32_t l_713 = (-4L);
                uint16_t *l_714 = &p_922->g_290[3].f7;
                int16_t *l_719 = &l_710;
                int16_t **l_727 = &l_719;
                uint32_t ***l_739 = (void*)0;
                uint32_t ***l_740 = &p_922->g_401[0];
                uint32_t ***l_741 = &p_922->g_401[0];
                uint8_t *l_745 = &p_922->g_134[3];
                VECTOR(uint8_t, 2) l_763 = (VECTOR(uint8_t, 2))(9UL, 0x69L);
                uint8_t **l_768 = &l_766;
                int8_t *l_769 = (void*)0;
                int8_t *l_770 = (void*)0;
                int8_t *l_771 = (void*)0;
                int8_t *l_772 = (void*)0;
                union U2 ***l_784 = &p_922->g_782;
                VECTOR(int8_t, 2) l_789 = (VECTOR(int8_t, 2))((-1L), 0x51L);
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_922->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[(safe_mod_func_uint32_t_u_u((l_720 = (safe_mul_func_int8_t_s_s((((+((*l_700) = l_699)) <= (safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))((-1L), ((*l_719) = ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_707.s21)).yyxx)).z, (FAKE_DIVERGE(p_922->global_1_offset, get_global_id(1), 10) && (p_19 > (0x0D0CEAF3L && (safe_rshift_func_uint16_t_u_u(l_710, 4))))))) | ((p_17 != ((p_18 || (++(*l_714))) & ((*p_922->g_402) = 0UL))) <= ((((safe_add_func_int16_t_s_s(p_19, l_652.s4)) || l_640) , &p_922->g_402) == (void*)0)))), (-1L), 0x109EL, 0x7500L, ((VECTOR(int16_t, 2))(2L)), 0x4656L)), ((VECTOR(int16_t, 8))((-4L)))))).s3, l_720)), 4))) < l_721), 0x29L))), 10))][(safe_mod_func_uint32_t_u_u(p_922->tid, 55))]));
                (*p_20) &= (p_922->g_722 , ((*p_922->g_169) &= (p_17 , (safe_mod_func_int32_t_s_s((((safe_mod_func_uint64_t_u_u((((*l_727) = &p_922->g_111) == &l_721), ((safe_lshift_func_int16_t_s_s(permutations[(safe_mod_func_uint32_t_u_u((l_720 = (safe_mul_func_int8_t_s_s((((+((*l_700) = l_699)) <= (safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))((-1L), ((*l_719) = ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_707.s21)).yyxx)).z, (FAKE_DIVERGE(p_922->global_1_offset, get_global_id(1), 10) && (p_19 > (0x0D0CEAF3L && (safe_rshift_func_uint16_t_u_u(l_710, 4))))))) | ((p_17 != ((p_18 || (++(*l_714))) & ((*p_922->g_402) = 0UL))) <= ((((safe_add_func_int16_t_s_s(p_19, l_652.s4)) || l_640) , &p_922->g_402) == (void*)0)))), (-1L), 0x109EL, 0x7500L, ((VECTOR(int16_t, 2))(2L)), 0x4656L)), ((VECTOR(int16_t, 8))((-4L)))))).s3, l_720)), 4))) < l_721), 0x29L))), 10))][(safe_mod_func_uint32_t_u_u(p_922->tid, 55))], ((VECTOR(int16_t, 16))(l_730.xwzwzzyyywyywzyw)).se)) || (((safe_rshift_func_uint16_t_u_s((p_922->g_733 , p_17), ((l_734 == &p_922->g_169) , p_19))) != l_730.x) < GROUP_DIVERGE(1, 1))))) > 0x510588B0B9ED5DF6L) != 0x8C6FL), l_674)))));
                (**l_734) = (((safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(l_713, ((l_742 = &p_922->g_402) != (void*)0))), ((safe_lshift_func_uint8_t_u_s((++(*l_745)), (safe_div_func_uint16_t_u_u(((((-7L) && (**l_734)) || (p_922->g_223.w = p_18)) ^ (((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 4))(l_750.s1200)).odd, ((VECTOR(uint32_t, 16))(l_751.s0203160451455726)).s4f))).even || ((*p_20) = (((safe_sub_func_uint64_t_u_u((l_682 = (safe_lshift_func_uint8_t_u_s((((!(GROUP_DIVERGE(1, 1) != (safe_sub_func_uint8_t_u_u((p_922->g_758 != ((*l_727) = l_759)), (p_17 = (safe_mod_func_uint32_t_u_u((((VECTOR(int8_t, 2))(p_922->g_762.s06)).odd == ((VECTOR(uint8_t, 16))(l_763.yxxxyyxxyyyyyxyy)).sd), (safe_sub_func_uint8_t_u_u(((((*l_768) = l_766) == &p_922->g_767) == p_922->g_290[3].f3), p_922->g_148.f7))))))))) >= p_922->g_425.s3) == (*p_20)), p_18))), 0UL)) > l_677) == l_730.y)))), 1UL)))) >= p_922->g_27))) , &p_922->g_339) == l_773);
                (*p_20) ^= ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((&p_922->g_611 != ((*l_784) = p_922->g_782)), l_785)), GROUP_DIVERGE(0, 1))), ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(1L, (-1L))).yxxy, ((VECTOR(int16_t, 8))(0x787FL, ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(l_786.s4700177050020006)).s5e, ((VECTOR(int16_t, 4))((-2L), ((**l_734) && ((safe_add_func_uint32_t_u_u(((((*l_700) = ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(1UL, 18446744073709551609UL, 0xF3EB4B64885C2584L, 0x12050A81EC3339A4L)))).w) ^ p_19) == (!(((VECTOR(int8_t, 16))(l_789.yxxxyyxxxxyxyyxx)).s7 >= (((*p_922->g_256) , (**p_922->g_315)) ^ l_730.w)))), (l_763.y | l_699))) || l_681)), 0x3C85L, (-1L))).hi))), (-6L), ((VECTOR(int16_t, 4))(0x6204L)))).hi, ((VECTOR(int16_t, 4))(0x35BFL))))).z)), (**l_734))) >= (**l_734));
            }
            for (p_922->g_7 = 0; (p_922->g_7 > 7); p_922->g_7 = safe_add_func_int32_t_s_s(p_922->g_7, 3))
            { /* block id: 282 */
                uint32_t l_810 = 0x22800F74L;
                (*p_20) = (**l_734);
                (*p_20) = (l_792 <= p_922->g_309.f3);
                for (p_922->g_309.f6 = 0; (p_922->g_309.f6 > 10); p_922->g_309.f6 = safe_add_func_uint64_t_u_u(p_922->g_309.f6, 2))
                { /* block id: 287 */
                    int32_t l_795 = 4L;
                    int32_t *l_796 = &p_922->g_148.f1;
                    int32_t *l_797 = &p_922->g_148.f1;
                    int32_t *l_798 = &p_922->g_309.f4;
                    int32_t *l_799 = &l_673[2];
                    int32_t l_800 = 2L;
                    int32_t *l_801 = &p_922->g_309.f4;
                    int32_t *l_802 = &l_677;
                    int32_t *l_803 = &p_922->g_290[3].f1;
                    int32_t *l_804 = &l_720;
                    int32_t *l_805 = (void*)0;
                    int32_t *l_806[7][8] = {{&l_674,&l_674,(void*)0,&l_674,&l_679,(void*)0,(void*)0,&l_679},{&l_674,&l_674,(void*)0,&l_674,&l_679,(void*)0,(void*)0,&l_679},{&l_674,&l_674,(void*)0,&l_674,&l_679,(void*)0,(void*)0,&l_679},{&l_674,&l_674,(void*)0,&l_674,&l_679,(void*)0,(void*)0,&l_679},{&l_674,&l_674,(void*)0,&l_674,&l_679,(void*)0,(void*)0,&l_679},{&l_674,&l_674,(void*)0,&l_674,&l_679,(void*)0,(void*)0,&l_679},{&l_674,&l_674,(void*)0,&l_674,&l_679,(void*)0,(void*)0,&l_679}};
                    int8_t *l_813[3][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    struct S0 **l_817 = &p_922->g_289;
                    VECTOR(uint32_t, 4) l_826 = (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 7UL), 7UL);
                    int i, j;
                    ++l_807;
                    if ((*l_798))
                        break;
                    (*l_799) ^= ((+l_810) || ((safe_mod_func_int8_t_s_s(((*l_803) = p_17), (safe_sub_func_uint16_t_u_u((l_730.w , GROUP_DIVERGE(0, 1)), (l_816 == ((*l_817) = &p_922->g_288[1])))))) != ((((*l_804) = l_683[0]) == (l_681 = (safe_div_func_int32_t_s_s(((*p_20) = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_750.s6, ((((((VECTOR(uint32_t, 4))(l_826.yzww)).y <= 0L) >= 8UL) , p_19) , p_17))), 1UL))), p_19)))) , 0xE7A3281CL)));
                }
            }
            atomic_add(&p_922->l_atomic_reduction[0], (safe_add_func_int32_t_s_s(((((safe_sub_func_uint32_t_u_u((*p_922->g_402), 0x0F5309B8L)) , p_17) , p_922->g_831) , (((**l_734) != ((*l_759) = (safe_mul_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((p_18 >= ((((safe_rshift_func_uint16_t_u_s((((((*l_766) = l_682) == (safe_div_func_int32_t_s_s((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_840.wywwzyyw)).s76)).odd >= p_19), (safe_div_func_uint64_t_u_u(l_785, p_922->g_125.f6))))) > p_922->g_309.f3) , 65530UL), (**l_734))) >= p_17) , (void*)0) != &p_922->g_202)), 0x20L)) & p_17) && p_19), p_922->g_425.s5)))) & l_792)), (**l_734))));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_922->v_collective += p_922->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
    }
    return p_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_611 p_922->g_577
 * writes:
 */
union U2  func_24(uint64_t  p_25, int32_t * p_26, struct S3 * p_922)
{ /* block id: 236 */
    int32_t **l_629 = (void*)0;
    int32_t *l_631 = &p_922->g_309.f4;
    l_631 = p_26;
    return (*p_922->g_611);
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_620 p_922->g_580 p_922->g_581 p_922->g_384 p_922->g_526
 * writes: p_922->g_169 p_922->g_89 p_922->g_288.f1 p_922->g_288.f5 p_922->g_628
 */
int32_t * func_28(int32_t * p_29, struct S3 * p_922)
{ /* block id: 224 */
    int32_t **l_619 = &p_922->g_169;
    int32_t l_621 = 3L;
    VECTOR(int64_t, 4) l_624 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x1DBA5BA72A7F3C63L), 0x1DBA5BA72A7F3C63L);
    struct S0 **l_625[10] = {&p_922->g_289,&p_922->g_289,&p_922->g_289,&p_922->g_289,&p_922->g_289,&p_922->g_289,&p_922->g_289,&p_922->g_289,&p_922->g_289,&p_922->g_289};
    uint16_t *l_626 = (void*)0;
    uint16_t *l_627 = &p_922->g_89;
    int i;
    if ((atomic_inc(&p_922->l_atomic_input[18]) == 8))
    { /* block id: 226 */
        union U2 l_617 = {-9L};/* VOLATILE GLOBAL l_617 */
        union U2 *l_616 = &l_617;
        union U2 *l_618[3];
        int i;
        for (i = 0; i < 3; i++)
            l_618[i] = &l_617;
        l_618[0] = l_616;
        unsigned int result = 0;
        result += l_617.f0;
        result += l_617.f1.f0;
        result += l_617.f1.f1;
        result += l_617.f1.f2;
        result += l_617.f1.f3;
        result += l_617.f1.f4;
        result += l_617.f1.f5;
        result += l_617.f1.f6;
        result += l_617.f1.f7;
        result += l_617.f1.f8;
        result += l_617.f1.f9;
        atomic_add(&p_922->l_special_values[18], result);
    }
    else
    { /* block id: 228 */
        (1 + 1);
    }
    (*l_619) = (void*)0;
    (*p_29) = (((VECTOR(uint8_t, 16))(p_922->g_620.wwyyzxyxzzzwxwww)).s1 <= ((l_621 < (((l_621 != l_621) == l_621) , ((*l_627) = (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_624.xw)).odd, (l_625[2] != l_625[2])))))) < ((VECTOR(int16_t, 2))(0L, 3L)).lo));
    p_922->g_628 = (**p_922->g_580);
    return p_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_610 p_922->g_309.f8 p_922->g_614 p_922->g_289
 * writes: p_922->g_611 p_922->g_309.f8 p_922->g_290
 */
int32_t * func_30(int32_t * p_31, int32_t * p_32, int32_t * p_33, uint32_t  p_34, struct S3 * p_922)
{ /* block id: 215 */
    (*p_922->g_610) = &p_922->g_577;
    for (p_922->g_309.f8 = 0; (p_922->g_309.f8 == (-27)); --p_922->g_309.f8)
    { /* block id: 219 */
        int32_t *l_615 = &p_922->g_288[0].f1;
        (*p_922->g_289) = p_922->g_614;
        return l_615;
    }
    return p_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_89 p_922->g_7 p_922->g_168 p_922->g_169 p_922->g_427 p_922->g_288.f1 p_922->g_402 p_922->g_288.f5 p_922->g_309.f8 p_922->g_290.f4 p_922->g_288.f7 p_922->g_125.f4 p_922->g_315 p_922->g_472 p_922->g_473 p_922->g_485 p_922->g_526 p_922->g_535 p_922->g_191 p_922->g_231.f1 p_922->g_223 p_922->g_231.f0 p_922->g_577 p_922->g_580 p_922->g_591 p_922->g_592 p_922->g_114
 * writes: p_922->g_89 p_922->g_148.f7 p_922->g_3 p_922->g_169 p_922->g_288.f5 p_922->g_288.f7 p_922->g_125.f4 p_922->g_474 p_922->g_427.f1.f1 p_922->g_comm_values p_922->g_114 p_922->g_111 p_922->g_288.f1 p_922->g_223 p_922->g_581
 */
int32_t * func_35(int32_t * p_36, int32_t * p_37, int32_t * p_38, struct S3 * p_922)
{ /* block id: 128 */
    int8_t l_463 = 0x2DL;
    int64_t l_465 = 0x0B7027E7A8C18716L;
    int32_t l_496 = 0x6C0B6B4CL;
    int32_t l_502[1];
    int32_t *l_554 = &p_922->g_288[0].f1;
    VECTOR(uint16_t, 16) l_566 = (VECTOR(uint16_t, 16))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0x7A57L), 0x7A57L), 0x7A57L, 65528UL, 0x7A57L, (VECTOR(uint16_t, 2))(65528UL, 0x7A57L), (VECTOR(uint16_t, 2))(65528UL, 0x7A57L), 65528UL, 0x7A57L, 65528UL, 0x7A57L);
    int32_t l_575 = 0x4F58B35EL;
    int i;
    for (i = 0; i < 1; i++)
        l_502[i] = 0x275274DFL;
    for (p_922->g_89 = 0; (p_922->g_89 != 31); p_922->g_89 = safe_add_func_int8_t_s_s(p_922->g_89, 3))
    { /* block id: 131 */
        int16_t l_444 = (-1L);
        int32_t l_497 = 0x5C79E485L;
        int32_t l_498 = 0x74B41BA9L;
        int32_t l_499 = (-9L);
        int32_t l_501 = (-7L);
        int32_t l_503 = 0x30AB9D75L;
        int32_t l_504 = (-4L);
        int32_t l_505 = 0x32829D8DL;
        int32_t l_506 = 0x094B8953L;
        int8_t l_507 = 0x04L;
        int8_t l_508 = 1L;
        VECTOR(int16_t, 8) l_552 = (VECTOR(int16_t, 8))(0x44B9L, (VECTOR(int16_t, 4))(0x44B9L, (VECTOR(int16_t, 2))(0x44B9L, 0x19CAL), 0x19CAL), 0x19CAL, 0x44B9L, 0x19CAL);
        int64_t *l_563 = &p_922->g_290[3].f2;
        int i;
        for (p_922->g_148.f7 = 28; (p_922->g_148.f7 < 22); p_922->g_148.f7--)
        { /* block id: 134 */
            int8_t l_413 = (-3L);
            VECTOR(int8_t, 4) l_414 = (VECTOR(int8_t, 4))(0x3BL, (VECTOR(int8_t, 2))(0x3BL, 0x4CL), 0x4CL);
            struct S0 *l_415 = &p_922->g_148;
            uint8_t l_416[3];
            VECTOR(uint8_t, 16) l_482 = (VECTOR(uint8_t, 16))(0x75L, (VECTOR(uint8_t, 4))(0x75L, (VECTOR(uint8_t, 2))(0x75L, 0xAFL), 0xAFL), 0xAFL, 0x75L, 0xAFL, (VECTOR(uint8_t, 2))(0x75L, 0xAFL), (VECTOR(uint8_t, 2))(0x75L, 0xAFL), 0x75L, 0xAFL, 0x75L, 0xAFL);
            int32_t l_487[5] = {3L,3L,3L,3L,3L};
            uint8_t l_509 = 0xBAL;
            VECTOR(uint32_t, 8) l_532 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x26603A6CL), 0x26603A6CL), 0x26603A6CL, 4294967295UL, 0x26603A6CL);
            int i;
            for (i = 0; i < 3; i++)
                l_416[i] = 251UL;
            if ((*p_38))
            { /* block id: 135 */
                uint64_t l_426 = 0x5F43BBEFD0C1335BL;
                VECTOR(uint64_t, 8) l_483 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x55E92BDA4137EC87L), 0x55E92BDA4137EC87L), 0x55E92BDA4137EC87L, 18446744073709551615UL, 0x55E92BDA4137EC87L);
                int32_t l_500[10][7] = {{0x2FA29A35L,1L,1L,(-5L),1L,1L,0x2FA29A35L},{0x2FA29A35L,1L,1L,(-5L),1L,1L,0x2FA29A35L},{0x2FA29A35L,1L,1L,(-5L),1L,1L,0x2FA29A35L},{0x2FA29A35L,1L,1L,(-5L),1L,1L,0x2FA29A35L},{0x2FA29A35L,1L,1L,(-5L),1L,1L,0x2FA29A35L},{0x2FA29A35L,1L,1L,(-5L),1L,1L,0x2FA29A35L},{0x2FA29A35L,1L,1L,(-5L),1L,1L,0x2FA29A35L},{0x2FA29A35L,1L,1L,(-5L),1L,1L,0x2FA29A35L},{0x2FA29A35L,1L,1L,(-5L),1L,1L,0x2FA29A35L},{0x2FA29A35L,1L,1L,(-5L),1L,1L,0x2FA29A35L}};
                int8_t l_521 = 0x3DL;
                VECTOR(uint16_t, 4) l_522 = (VECTOR(uint16_t, 4))(0x7361L, (VECTOR(uint16_t, 2))(0x7361L, 65535UL), 65535UL);
                VECTOR(uint16_t, 16) l_523 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x7DBAL), 0x7DBAL), 0x7DBAL, 1UL, 0x7DBAL, (VECTOR(uint16_t, 2))(1UL, 0x7DBAL), (VECTOR(uint16_t, 2))(1UL, 0x7DBAL), 1UL, 0x7DBAL, 1UL, 0x7DBAL);
                int16_t *l_531 = &l_444;
                uint16_t *l_536 = (void*)0;
                uint16_t *l_537 = (void*)0;
                uint16_t *l_538 = &p_922->g_114;
                int i, j;
                for (p_922->g_3 = 0; (p_922->g_3 > 58); p_922->g_3 = safe_add_func_int8_t_s_s(p_922->g_3, 8))
                { /* block id: 138 */
                    uint32_t l_417 = 0x10F0F183L;
                    VECTOR(uint16_t, 16) l_437 = (VECTOR(uint16_t, 16))(0x4A3AL, (VECTOR(uint16_t, 4))(0x4A3AL, (VECTOR(uint16_t, 2))(0x4A3AL, 0x1061L), 0x1061L), 0x1061L, 0x4A3AL, 0x1061L, (VECTOR(uint16_t, 2))(0x4A3AL, 0x1061L), (VECTOR(uint16_t, 2))(0x4A3AL, 0x1061L), 0x4A3AL, 0x1061L, 0x4A3AL, 0x1061L);
                    int i;
                    if ((l_413 , ((((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 4))(l_414.xwyz)).wzwwzxyywyzxwwww, ((VECTOR(int8_t, 2))(0x24L, 0x1EL)).yyxyyxxyyyxxyxyy))).s6 || (!((void*)0 != l_415))) , l_416[2])))
                    { /* block id: 139 */
                        int32_t **l_418 = &p_922->g_169;
                        VECTOR(uint32_t, 16) l_449 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 0UL, 4294967295UL, 0UL, 4294967295UL);
                        int16_t *l_464 = (void*)0;
                        uint8_t *l_466 = &l_416[0];
                        uint16_t *l_467 = (void*)0;
                        uint16_t *l_468 = &p_922->g_288[0].f7;
                        int32_t *l_469 = &p_922->g_125.f4;
                        int i;
                        if ((*p_38))
                            break;
                        (*l_418) = (*p_922->g_168);
                        (*l_469) |= (safe_sub_func_uint16_t_u_u(((*l_468) ^= ((((safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))(p_922->g_425.s0757033137207545)).s7, l_426)) != (p_922->g_427 , (safe_mul_func_uint8_t_u_u(((*l_466) = (safe_mul_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 2))(65535UL, 0x49C1L)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(p_922->g_436.sc5d473e6)).s05)), ((VECTOR(uint16_t, 4))(l_437.s4e7c)).even))).lo, (&p_36 != (void*)0))) >= (safe_add_func_int64_t_s_s((((*p_922->g_402) &= (((**l_418) > (**l_418)) && 0xE68345FEL)) & ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0xF77BL, 65535UL)).odd, ((l_444 ^ (safe_unary_minus_func_int16_t_s((((VECTOR(uint64_t, 4))(18446744073709551612UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_922->g_446.xyxxyyxy)).s47)), 0x25D37FD57B4ADD87L)).y != (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 16))(l_449.s8dfb29dd61b1f790)).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((p_922->g_223.z = (safe_unary_minus_func_uint32_t_u(((((safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u((p_922->g_134[2] = l_416[2]), 2)) || l_414.z) >= l_414.z), l_444)), (**l_418))) , 0x5FB31B78L) != l_417) | l_426), l_444)) > (-1L)) , l_463) == p_922->g_290[3].f4)))), l_463)), l_426)) <= (**l_418)), ((VECTOR(uint32_t, 8))(0x74B58C6AL)), ((VECTOR(uint32_t, 4))(0xDA3F8A03L)), ((VECTOR(uint32_t, 2))(5UL)), 0xB489A144L)).seb37)).wyxzxzzw)), ((VECTOR(uint32_t, 8))(0xAAB6FD1AL))))).s2, l_465)))))) && 0L))), l_444)) >= (-1L))), 18446744073709551608UL))), p_922->g_309.f8)) != l_416[2]), 252UL))), p_922->g_290[3].f4)))), 0x20L)) && 0x90BFL) , FAKE_DIVERGE(p_922->local_0_offset, get_local_id(0), 10)) && l_444)), (-4L)));
                    }
                    else
                    { /* block id: 148 */
                        (*p_922->g_472) = (*p_922->g_315);
                        p_922->g_474 = p_922->g_473;
                        return p_36;
                    }
                    if (l_414.w)
                        break;
                }
                for (p_922->g_427.f1.f1 = 20; (p_922->g_427.f1.f1 != 23); p_922->g_427.f1.f1++)
                { /* block id: 157 */
                    int32_t l_479 = 1L;
                    uint64_t *l_484 = &p_922->g_191[1];
                    int32_t *l_486 = &p_922->g_125.f4;
                    int32_t *l_488 = &p_922->g_309.f4;
                    int32_t *l_489 = &p_922->g_290[3].f1;
                    int32_t *l_490 = &p_922->g_125.f4;
                    int32_t *l_491 = &p_922->g_125.f4;
                    int32_t *l_492 = &p_922->g_375;
                    int32_t *l_493 = &p_922->g_148.f1;
                    int32_t *l_494 = &p_922->g_7;
                    int32_t *l_495[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_495[i] = &l_487[0];
                    (*p_922->g_485) = p_38;
                    ++l_509;
                }
                l_502[0] = ((safe_mul_func_int8_t_s_s(((((*l_538) = (8L >= (safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((l_502[0] | (safe_mul_func_uint16_t_u_u((~l_521), ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 2))(l_522.yx)).yyyxxyyxyxxyxyxx, ((VECTOR(uint16_t, 4))(l_523.s6878)).zzwyxxzyzyxyxyxw))).s5))), ((safe_sub_func_int64_t_s_s((p_922->g_526 , (p_922->g_comm_values[p_922->tid] = (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((((*l_531) = l_521) >= ((((VECTOR(uint32_t, 4))(l_532.s5224)).y | (l_465 >= ((l_502[0] || ((safe_lshift_func_uint8_t_u_s((!(0x0F60B1D3L && ((*p_922->g_402) ^= ((p_922->g_535[3] != (void*)0) | l_499)))), l_507)) & p_922->g_191[0])) ^ 1UL))) == 0x8CL)), p_922->g_231.f1)) | 0x7365L), l_504)))), l_523.s2)) != 0x56L))), 11)))))) != l_506) & p_922->g_223.z), l_522.y)) != 0x7035L);
            }
            else
            { /* block id: 167 */
                int32_t **l_539 = &p_922->g_169;
                int8_t *l_553 = &l_508;
                int64_t *l_565 = &p_922->g_288[0].f2;
                (*l_539) = &l_487[0];
                (*l_539) = l_554;
                for (p_922->g_111 = 0; (p_922->g_111 <= (-4)); p_922->g_111--)
                { /* block id: 174 */
                    int64_t **l_559 = (void*)0;
                    int64_t **l_560 = (void*)0;
                    int64_t *l_562 = (void*)0;
                    int64_t **l_561 = &l_562;
                    int64_t **l_564 = (void*)0;
                    int16_t *l_571 = (void*)0;
                    int16_t *l_572 = &l_444;
                    int16_t *l_573 = (void*)0;
                    int16_t *l_574 = (void*)0;
                    int32_t l_576 = (-1L);
                    volatile struct S0 **l_578 = (void*)0;
                    volatile struct S0 **l_579 = (void*)0;
                    int i, j;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_922->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[(safe_mod_func_uint32_t_u_u(((*p_922->g_402) &= (safe_mul_func_uint16_t_u_u((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(0xD6BDL, 0x8BF4L, ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))((((*l_561) = &p_922->g_142) != (l_565 = l_563)), 0xEE0BL, ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 2))(l_566.sd7)).xyxyyyyyxyxxyyyx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((safe_mul_func_int8_t_s_s((**l_539), (**l_539))), ((VECTOR(uint16_t, 2))(0x4201L, 2UL)), ((VECTOR(uint16_t, 4))((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0UL, 7UL)).odd, ((VECTOR(int16_t, 8))(0L, (p_922->g_223.z |= ((((void*)0 != l_563) <= FAKE_DIVERGE(p_922->global_1_offset, get_global_id(1), 10)) , ((*l_554) = ((*l_572) = p_922->g_231.f0)))), (-1L), l_575, ((VECTOR(int16_t, 4))(0x644CL)))).s5)), 3UL, 65535UL, 0x96C3L)), 65533UL)), ((VECTOR(uint16_t, 8))(0xA65AL)))).even)).s0706307654705764, ((VECTOR(uint16_t, 16))(3UL))))).s67)).xxyxxyxx)).s4520044551266262)).s01)))), ((VECTOR(uint16_t, 2))(0UL))))), 0UL, (**l_539), 0x6FE2L, 0xEDAFL))))), 65529UL, 0x3AB0L, 0UL, l_576, 9UL, 0xDFACL)).s8a0b)).y || 0x6A65L), l_576))), 10))][(safe_mod_func_uint32_t_u_u(p_922->tid, 55))]));
                    if ((*p_38))
                        continue;
                    (*p_922->g_580) = (p_922->g_577 , &p_922->g_384);
                }
            }
            for (l_465 = 5; (l_465 < 7); l_465++)
            { /* block id: 190 */
                uint32_t l_590 = 0x14BFAD1BL;
                int32_t *l_593 = &l_498;
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_922->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[(safe_mod_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(l_590, 7)), (+(((p_922->g_591 , &p_922->g_169) == ((l_482.s2 | (l_590 , ((l_487[0] = ((l_590 && (((VECTOR(uint32_t, 8))(0x8C63894BL, 0x1D805087L, ((VECTOR(uint32_t, 4))(p_922->g_592.xxxy)), 0x8C6283C4L, 4294967287UL)).s2 | ((*l_593) |= (*p_922->g_169)))) > (p_922->g_125.f4 &= (safe_div_func_uint16_t_u_u(l_532.s3, p_922->g_114))))) > l_414.x))) , &p_922->g_169)) , 0x5EA8L)))), (-3L))) == l_414.z), 10))][(safe_mod_func_uint32_t_u_u(p_922->tid, 55))]));
                if ((atomic_inc(&p_922->l_atomic_input[43]) == 6))
                { /* block id: 198 */
                    uint8_t l_596 = 0xB2L;
                    uint32_t l_597 = 4294967286UL;
                    struct S1 l_599 = {0x03078762L,4294967286UL,1L,0x10E0E2FB38577A0BL,1L,1UL,0x4F90CC80L,2L,1L,0x23E007E2L};/* VOLATILE GLOBAL l_599 */
                    struct S1 *l_598 = &l_599;
                    l_597 ^= l_596;
                    l_598 = l_598;
                    for (l_599.f6 = 0; (l_599.f6 >= 10); l_599.f6 = safe_add_func_uint32_t_u_u(l_599.f6, 8))
                    { /* block id: 203 */
                        VECTOR(uint8_t, 4) l_602 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xAEL), 0xAEL);
                        VECTOR(uint8_t, 16) l_603 = (VECTOR(uint8_t, 16))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0x06L), 0x06L), 0x06L, 247UL, 0x06L, (VECTOR(uint8_t, 2))(247UL, 0x06L), (VECTOR(uint8_t, 2))(247UL, 0x06L), 247UL, 0x06L, 247UL, 0x06L);
                        VECTOR(uint8_t, 4) l_604 = (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0UL), 0UL);
                        VECTOR(uint8_t, 16) l_605 = (VECTOR(uint8_t, 16))(0xAEL, (VECTOR(uint8_t, 4))(0xAEL, (VECTOR(uint8_t, 2))(0xAEL, 2UL), 2UL), 2UL, 0xAEL, 2UL, (VECTOR(uint8_t, 2))(0xAEL, 2UL), (VECTOR(uint8_t, 2))(0xAEL, 2UL), 0xAEL, 2UL, 0xAEL, 2UL);
                        VECTOR(uint8_t, 16) l_606 = (VECTOR(uint8_t, 16))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0UL), 0UL), 0UL, 249UL, 0UL, (VECTOR(uint8_t, 2))(249UL, 0UL), (VECTOR(uint8_t, 2))(249UL, 0UL), 249UL, 0UL, 249UL, 0UL);
                        uint16_t l_607 = 0UL;
                        uint32_t l_608 = 0xC7FB5959L;
                        int i;
                        l_608 = (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xA2L, 0UL)), ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(l_602.xyww)).even, ((VECTOR(uint8_t, 4))(251UL, ((VECTOR(uint8_t, 2))(1UL, 0x38L)), 0UL)).lo, ((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 8))(l_603.sf4c6965a)).s7031530216603566, ((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(l_604.wz)).xxxxxxyxxxxxyyyy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_605.s76a3a933f2e6c3c1)).hi)).s3050214217604734))))).sd9ca, ((VECTOR(uint8_t, 8))(l_606.s27d1e0ce)).lo))).even))).yyyyxyyyyxxxxxxy))).sf2))), ((VECTOR(uint8_t, 2))(0x30L, 0x39L)), 0x6EL, 1UL)).s1 , l_607);
                    }
                    unsigned int result = 0;
                    result += l_596;
                    result += l_597;
                    result += l_599.f0;
                    result += l_599.f1;
                    result += l_599.f2;
                    result += l_599.f3;
                    result += l_599.f4;
                    result += l_599.f5;
                    result += l_599.f6;
                    result += l_599.f7;
                    result += l_599.f8;
                    result += l_599.f9;
                    atomic_add(&p_922->l_special_values[43], result);
                }
                else
                { /* block id: 206 */
                    (1 + 1);
                }
                if ((**p_922->g_168))
                    break;
            }
        }
    }
    return p_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_6 p_922->g_7 p_922->g_79.f0 p_922->g_223 p_922->g_225 p_922->g_148.f2 p_922->g_231 p_922->g_148.f4 p_922->g_69 p_922->g_168 p_922->g_169 p_922->g_125.f4 p_922->g_254 p_922->g_255 p_922->g_115.f4 p_922->g_270 p_922->g_121 p_922->g_84 p_922->g_125.f1 p_922->g_202 p_922->g_203 p_922->g_289 p_922->g_288.f2 p_922->g_290.f7 p_922->g_290.f2 p_922->g_309 p_922->g_256 p_922->g_315 p_922->g_339 p_922->g_342 p_922->g_350 p_922->g_290.f3 p_922->g_92 p_922->g_125 p_922->g_384 p_922->g_3 p_922->g_402 p_922->g_290.f5 p_922->g_290.f1
 * writes: p_922->g_202 p_922->g_169 p_922->g_148.f2 p_922->g_231 p_922->g_148.f4 p_922->g_69 p_922->g_125.f4 p_922->g_7 p_922->g_270 p_922->g_191 p_922->g_125.f1 p_922->g_115 p_922->g_339 p_922->g_375 p_922->g_309.f6 p_922->g_401 p_922->g_288.f5 p_922->g_290.f1
 */
int32_t * func_39(int32_t * p_40, int32_t * p_41, int8_t  p_42, int64_t  p_43, struct S3 * p_922)
{ /* block id: 58 */
    struct S1 *l_199 = &p_922->g_125;
    struct S1 **l_198 = &l_199;
    uint16_t **l_200 = (void*)0;
    int32_t l_220 = 0L;
    VECTOR(uint16_t, 2) l_221 = (VECTOR(uint16_t, 2))(65535UL, 0x4AD1L);
    VECTOR(uint16_t, 2) l_224 = (VECTOR(uint16_t, 2))(0x06D7L, 65529UL);
    int32_t l_242 = 0x66463C70L;
    int32_t l_243 = 0x45CCEBF2L;
    int32_t l_248 = 0x641796EBL;
    VECTOR(int16_t, 2) l_258 = (VECTOR(int16_t, 2))(0L, (-3L));
    VECTOR(uint8_t, 2) l_261 = (VECTOR(uint8_t, 2))(0x5EL, 250UL);
    uint64_t l_281 = 18446744073709551610UL;
    VECTOR(uint16_t, 16) l_312 = (VECTOR(uint16_t, 16))(0x82E0L, (VECTOR(uint16_t, 4))(0x82E0L, (VECTOR(uint16_t, 2))(0x82E0L, 7UL), 7UL), 7UL, 0x82E0L, 7UL, (VECTOR(uint16_t, 2))(0x82E0L, 7UL), (VECTOR(uint16_t, 2))(0x82E0L, 7UL), 0x82E0L, 7UL, 0x82E0L, 7UL);
    int32_t l_336 = 1L;
    int32_t l_337[4][5][2] = {{{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)}},{{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)}},{{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)}},{{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)},{0x2E55C1E3L,(-10L)}}};
    int64_t *l_366 = (void*)0;
    int32_t l_376 = (-1L);
    uint32_t *l_400 = &p_922->g_288[0].f5;
    uint32_t **l_399 = &l_400;
    int32_t *l_405 = (void*)0;
    int32_t *l_406[3][9][4] = {{{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0}},{{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0}},{{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0},{(void*)0,&l_337[1][1][0],(void*)0,(void*)0}}};
    int i, j, k;
    (*l_198) = &p_922->g_125;
    if ((*p_922->g_6))
    { /* block id: 60 */
        uint16_t ***l_204 = &p_922->g_202;
        int32_t l_207 = 1L;
        int8_t *l_208 = (void*)0;
        int8_t *l_209 = (void*)0;
        int8_t *l_210 = (void*)0;
        int8_t *l_211 = (void*)0;
        int8_t *l_212 = (void*)0;
        int8_t *l_213 = (void*)0;
        int8_t *l_214 = (void*)0;
        int8_t *l_215[2];
        VECTOR(uint64_t, 2) l_218 = (VECTOR(uint64_t, 2))(0xCEA2D98C8301FE27L, 0x06A75C1B21CF6594L);
        VECTOR(uint64_t, 8) l_219 = (VECTOR(uint64_t, 8))(0x3D268E0CB7C3AA31L, (VECTOR(uint64_t, 4))(0x3D268E0CB7C3AA31L, (VECTOR(uint64_t, 2))(0x3D268E0CB7C3AA31L, 0xE27C55D314EDC10BL), 0xE27C55D314EDC10BL), 0xE27C55D314EDC10BL, 0x3D268E0CB7C3AA31L, 0xE27C55D314EDC10BL);
        VECTOR(int16_t, 4) l_222 = (VECTOR(int16_t, 4))(0x656EL, (VECTOR(int16_t, 2))(0x656EL, 0x0995L), 0x0995L);
        int32_t **l_228 = &p_922->g_169;
        int32_t l_240 = 0x3B8A7C78L;
        int32_t l_241 = 0x72520D24L;
        int32_t l_244 = (-1L);
        int32_t l_245 = 0x6048124EL;
        int32_t l_246 = (-4L);
        VECTOR(int8_t, 2) l_247 = (VECTOR(int8_t, 2))(0L, 1L);
        int32_t l_249[1][4][7] = {{{(-1L),0x469024ADL,(-1L),(-1L),0x469024ADL,(-1L),(-1L)},{(-1L),0x469024ADL,(-1L),(-1L),0x469024ADL,(-1L),(-1L)},{(-1L),0x469024ADL,(-1L),(-1L),0x469024ADL,(-1L),(-1L)},{(-1L),0x469024ADL,(-1L),(-1L),0x469024ADL,(-1L),(-1L)}}};
        uint32_t l_250 = 0x8F53773BL;
        int32_t *l_253 = (void*)0;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_215[i] = (void*)0;
        (*l_204) = l_200;
        (*l_228) = (((safe_lshift_func_int8_t_s_s((p_42 = (p_922->g_79[0].f0 , (l_207 , p_43))), ((safe_div_func_int32_t_s_s((FAKE_DIVERGE(p_922->group_1_offset, get_group_id(1), 10) < (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 8))(l_218.xyxxxxxy)).s3634605063512004, ((VECTOR(uint64_t, 8))(l_219.s03530062)).s7464304666431133))).lo)))).s1 | (0UL <= 4UL))), l_220)) || ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 4))(l_221.yxxy)).hi, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 8))(l_222.xwzyxzyz)).s20, ((VECTOR(int16_t, 8))(p_922->g_223.xyzzyyxw)).s11))).xyxx, ((VECTOR(uint16_t, 8))(l_224.yxyxxxxy)).lo))).even, ((VECTOR(uint16_t, 4))(p_922->g_225.wxyw)).even))).hi))) > (safe_rshift_func_uint8_t_u_u(l_224.x, 5))) , p_41);
        for (p_922->g_148.f2 = 27; (p_922->g_148.f2 == (-5)); p_922->g_148.f2--)
        { /* block id: 66 */
            volatile struct S0 *l_232 = &p_922->g_231;
            (*l_232) = p_922->g_231;
        }
        for (p_922->g_148.f4 = (-4); (p_922->g_148.f4 <= 12); p_922->g_148.f4 = safe_add_func_int32_t_s_s(p_922->g_148.f4, 7))
        { /* block id: 71 */
            int32_t *l_239[2][7][7] = {{{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4},{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4},{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4},{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4},{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4},{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4},{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4}},{{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4},{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4},{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4},{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4},{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4},{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4},{&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_125.f4,&p_922->g_7,&l_207,&l_207,&p_922->g_125.f4}}};
            int i, j, k;
            for (p_922->g_69 = (-8); (p_922->g_69 >= 59); p_922->g_69++)
            { /* block id: 74 */
                (*l_228) = (*p_922->g_168);
                for (p_922->g_125.f4 = 0; (p_922->g_125.f4 == 19); p_922->g_125.f4++)
                { /* block id: 78 */
                    (**p_922->g_168) &= 0x0DD6D275L;
                }
            }
            (*l_228) = (*p_922->g_168);
            l_250++;
            return l_253;
        }
    }
    else
    { /* block id: 86 */
        VECTOR(uint64_t, 16) l_257 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x82309ADF986D55AEL), 0x82309ADF986D55AEL), 0x82309ADF986D55AEL, 0UL, 0x82309ADF986D55AEL, (VECTOR(uint64_t, 2))(0UL, 0x82309ADF986D55AEL), (VECTOR(uint64_t, 2))(0UL, 0x82309ADF986D55AEL), 0UL, 0x82309ADF986D55AEL, 0UL, 0x82309ADF986D55AEL);
        VECTOR(uint8_t, 16) l_262 = (VECTOR(uint8_t, 16))(0x9FL, (VECTOR(uint8_t, 4))(0x9FL, (VECTOR(uint8_t, 2))(0x9FL, 0x90L), 0x90L), 0x90L, 0x9FL, 0x90L, (VECTOR(uint8_t, 2))(0x9FL, 0x90L), (VECTOR(uint8_t, 2))(0x9FL, 0x90L), 0x9FL, 0x90L, 0x9FL, 0x90L);
        struct S1 ***l_272 = &p_922->g_270[1][3][0];
        uint64_t *l_273 = &p_922->g_191[0];
        uint64_t *l_274 = (void*)0;
        uint64_t *l_275 = (void*)0;
        uint64_t *l_276 = (void*)0;
        uint64_t *l_277[4][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        struct S0 *l_287 = &p_922->g_288[0];
        int32_t l_319 = (-1L);
        int32_t l_321 = 0x59A0E590L;
        int32_t l_324 = 0x3799410EL;
        uint32_t l_327[3];
        VECTOR(int32_t, 8) l_335 = (VECTOR(int32_t, 8))(0x4442291AL, (VECTOR(int32_t, 4))(0x4442291AL, (VECTOR(int32_t, 2))(0x4442291AL, 0x48320A03L), 0x48320A03L), 0x48320A03L, 0x4442291AL, 0x48320A03L);
        uint32_t l_345 = 0xDE846531L;
        uint32_t *l_374 = &p_922->g_288[0].f5;
        uint32_t **l_373 = &l_374;
        uint32_t *l_377 = &p_922->g_309.f6;
        VECTOR(int64_t, 16) l_380 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x02334DCD79D700DFL), 0x02334DCD79D700DFL), 0x02334DCD79D700DFL, (-1L), 0x02334DCD79D700DFL, (VECTOR(int64_t, 2))((-1L), 0x02334DCD79D700DFL), (VECTOR(int64_t, 2))((-1L), 0x02334DCD79D700DFL), (-1L), 0x02334DCD79D700DFL, (-1L), 0x02334DCD79D700DFL);
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_327[i] = 0x685B3335L;
        (*p_922->g_254) = p_40;
        if ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x1D1EL, ((p_922->g_255 != &p_922->g_256) == ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_257.s62f8367f430b1467)).odd)).s5), 9L, 4L)), 0x31FCL, ((VECTOR(int16_t, 2))(l_258.yx)), 1L)).s4 , (safe_mul_func_uint8_t_u_u((l_248 |= ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(l_261.xxxy)), ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_262.s8f4f)).hi)).xyyy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))((safe_sub_func_int64_t_s_s(((p_922->g_115.f4 < GROUP_DIVERGE(2, 1)) == (0x39L > p_43)), (((safe_unary_minus_func_uint64_t_u((l_242 = ((*l_273) = (safe_mul_func_int8_t_s_s(((l_257.s0 == p_922->g_225.w) == (safe_rshift_func_int16_t_s_s((&p_922->g_256 == ((*l_272) = p_922->g_270[0][0][3])), 8))), 0x61L)))))) , p_922->g_121.y) < l_220))), p_922->g_84.s0, 0x6BL, 0x40L)), ((VECTOR(uint8_t, 4))(1UL)))))))))), ((VECTOR(uint8_t, 4))(0x75L)))))))), ((VECTOR(uint8_t, 4))(250UL))))).zzzyxyyx, ((VECTOR(uint8_t, 8))(0xE2L))))).s3), p_43))))
        { /* block id: 92 */
            int64_t l_316 = (-1L);
            int32_t l_323[4] = {0x1798669FL,0x1798669FL,0x1798669FL,0x1798669FL};
            int32_t *l_330 = &l_323[0];
            int32_t *l_331 = &l_242;
            int32_t *l_332 = (void*)0;
            int32_t *l_333 = &p_922->g_148.f1;
            int32_t *l_334[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (p_922->g_125.f1 = 0; (p_922->g_125.f1 == 16); p_922->g_125.f1 = safe_add_func_uint64_t_u_u(p_922->g_125.f1, 8))
            { /* block id: 95 */
                int32_t *l_280[8][5][5] = {{{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4}},{{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4}},{{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4}},{{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4}},{{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4}},{{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4}},{{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4}},{{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4},{&p_922->g_7,&l_248,&p_922->g_125.f4,(void*)0,&p_922->g_125.f4}}};
                int32_t l_297 = 0L;
                int32_t l_306 = 0L;
                int i, j, k;
                (*p_922->g_168) = (((void*)0 != (*p_922->g_202)) , p_40);
                l_281++;
                if ((*p_41))
                { /* block id: 98 */
                    int32_t **l_284 = &l_280[1][0][4];
                    uint16_t *l_295 = (void*)0;
                    uint16_t *l_296[9] = {&p_922->g_148.f7,&p_922->g_148.f7,&p_922->g_148.f7,&p_922->g_148.f7,&p_922->g_148.f7,&p_922->g_148.f7,&p_922->g_148.f7,&p_922->g_148.f7,&p_922->g_148.f7};
                    uint64_t *l_307 = &p_922->g_27;
                    uint64_t **l_308 = &l_307;
                    int i;
                    (*p_40) = ((((*l_284) = ((*p_922->g_254) = (*p_922->g_168))) == p_41) > (safe_lshift_func_uint16_t_u_u(((l_287 == p_922->g_289) , ((((*l_308) = ((safe_rshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(((l_297 = l_243) >= p_42), ((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(p_42, ((p_922->g_288[0].f2 , (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(l_224.y, 7)), p_42))) | p_43))) > p_922->g_290[3].f7), l_306)) , p_922->g_290[3].f2))) <= p_43), 1)) , l_307)) != (void*)0) == l_306)), 15)));
                }
                else
                { /* block id: 104 */
                    int64_t l_313 = 0x15230D3935D64598L;
                    struct S1 ****l_314 = &l_272;
                    int32_t l_317 = 0x59579A83L;
                    int32_t l_318 = 0x53889C08L;
                    int32_t l_320 = 0x67F8176EL;
                    int32_t l_322 = 0L;
                    int32_t l_325 = 0x3173CB9FL;
                    int32_t l_326 = 0x50ACB21DL;
                    (*p_922->g_256) = p_922->g_309;
                    (*p_40) &= (safe_sub_func_uint16_t_u_u((l_313 = ((VECTOR(uint16_t, 2))(l_312.s1f)).hi), (((*l_314) = &p_922->g_270[0][0][3]) != &p_922->g_270[0][2][2])));
                    (*p_922->g_315) = (*p_922->g_254);
                    --l_327[2];
                }
            }
            p_922->g_339--;
        }
        else
        { /* block id: 114 */
            (*p_922->g_342) = p_41;
        }
        (*p_40) &= ((((safe_div_func_uint64_t_u_u(((p_922->g_309.f2 | (l_345 > ((0x1AD8759CF608735EL < (((*l_273) = (((*l_377) = (safe_sub_func_uint32_t_u_u((p_922->g_350[1][2][1] != l_366), (((safe_lshift_func_int8_t_s_u(p_43, 7)) && (safe_sub_func_uint16_t_u_u(((p_922->g_148.f2 , ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xE25F3A32L, 9UL)), 0x07ED7A64L, 0x0589256AL)).lo)).yxyxyyyyyxyyyxyx)).sd) , (safe_rshift_func_int16_t_s_s((p_922->g_375 = ((((*l_373) = &p_922->g_3) == &p_922->g_3) || 0x21B4L)), 14))), 0UL))) , l_376)))) , GROUP_DIVERGE(1, 1))) > 18446744073709551615UL)) , p_922->g_290[3].f3))) >= 0L), (-1L))) | l_262.s3) <= p_42) == p_922->g_92);
        (*p_41) |= (safe_div_func_uint8_t_u_u((((VECTOR(int64_t, 8))(l_380.s9d8a0178)).s6 & ((safe_unary_minus_func_uint16_t_u(l_243)) | ((*l_199) , ((safe_sub_func_uint8_t_u_u(((p_922->g_384 , (p_42 && 0x3B01L)) <= 3L), ((safe_lshift_func_uint16_t_u_s(0x0245L, (((p_922->g_125.f1 ^ 1UL) , p_922->g_148.f2) != p_922->g_290[3].f7))) & p_922->g_3))) <= p_43)))), p_43));
    }
    p_922->g_290[3].f1 ^= (+(safe_rshift_func_int8_t_s_s((((*p_922->g_402) = (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(0x3EC201F3L, 0x58258C44L)), 1L, (-2L), l_224.y, (-6L), 0x414A8013L)).s4067227134014110, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((-2L) != (safe_lshift_func_int8_t_s_u(l_312.s1, ((p_42 , ((&l_337[1][1][0] == &l_336) == (safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(l_337[1][1][0], 5)) >= (safe_add_func_uint16_t_u_u((((p_922->g_401[0] = l_399) == ((((safe_rshift_func_uint16_t_u_s(1UL, 4)) , p_42) , (*l_199)) , &l_400)) && 0x713DL), p_922->g_125.f7))), l_243)), 0UL)))) | l_258.x)))), 0x04DBL, ((VECTOR(int16_t, 4))(1L)), 0x747EL, 0x3E29L)).s27)), ((VECTOR(uint16_t, 2))(65535UL))))), 0L, (*p_41), 8L, ((VECTOR(int32_t, 2))((-10L))), 0x3624F4D2L, 0x04FD8D2CL, (**p_922->g_342), (*p_922->g_6), (*p_41), (*p_922->g_6), ((VECTOR(int32_t, 2))(8L)), 1L))))))).s1d)).even | (*p_40))) > l_243), p_922->g_290[3].f5)));
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_134 p_922->g_191 p_922->g_125.f4 p_922->g_125.f1 p_922->g_148.f2 p_922->g_115.f1 p_922->g_89
 * writes: p_922->g_191 p_922->g_125.f4 p_922->g_125.f1 p_922->g_148.f2
 */
int64_t  func_46(int8_t  p_47, uint16_t  p_48, struct S3 * p_922)
{ /* block id: 44 */
    uint64_t l_174 = 0x0F99A31C92298D2EL;
    VECTOR(int16_t, 8) l_183 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
    int16_t *l_186 = (void*)0;
    int16_t *l_187 = (void*)0;
    int16_t *l_188 = (void*)0;
    int32_t l_189 = (-7L);
    uint64_t *l_190 = &p_922->g_191[0];
    int16_t l_192 = 0x014FL;
    int32_t *l_193 = &p_922->g_125.f4;
    int i;
    (*l_193) &= (safe_div_func_uint16_t_u_u((l_174 >= ((((*l_190) &= (safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((p_48 ^ (safe_rshift_func_uint8_t_u_s(p_47, p_48))), ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))(l_183.s0773560512407406)), (int16_t)(8UL <= p_47), (int16_t)((+((+(safe_mul_func_int16_t_s_s((l_189 = ((+((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0xCAE6DAE2C023DFF7L, 1UL)))).lo) > l_183.s0)), (+p_47)))) < p_47)) | p_48)))).s5)) , GROUP_DIVERGE(2, 1)), 8UL)), p_922->g_134[3]))) , &p_48) != l_187)), l_192));
    for (p_922->g_125.f1 = 1; (p_922->g_125.f1 >= 23); p_922->g_125.f1++)
    { /* block id: 50 */
        for (p_922->g_148.f2 = 0; (p_922->g_148.f2 < 18); p_922->g_148.f2 = safe_add_func_uint16_t_u_u(p_922->g_148.f2, 6))
        { /* block id: 53 */
            return p_922->g_115.f1;
        }
    }
    return p_922->g_89;
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_68 p_922->g_6 p_922->g_7 p_922->g_69 p_922->g_79 p_922->g_84 p_922->g_92 p_922->g_89 p_922->g_114 p_922->g_115
 * writes: p_922->g_69 p_922->g_89 p_922->g_92 p_922->g_114 p_922->g_115
 */
uint8_t  func_49(int32_t * p_50, int32_t  p_51, uint32_t  p_52, struct S3 * p_922)
{ /* block id: 8 */
    uint8_t l_62 = 250UL;
    int32_t *l_63 = &p_922->g_7;
    VECTOR(int16_t, 8) l_74 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
    uint32_t l_87[4];
    uint16_t *l_88 = &p_922->g_89;
    VECTOR(int16_t, 8) l_97 = (VECTOR(int16_t, 8))(0x1977L, (VECTOR(int16_t, 4))(0x1977L, (VECTOR(int16_t, 2))(0x1977L, (-7L)), (-7L)), (-7L), 0x1977L, (-7L));
    VECTOR(uint32_t, 16) l_99 = (VECTOR(uint32_t, 16))(0x050BF12BL, (VECTOR(uint32_t, 4))(0x050BF12BL, (VECTOR(uint32_t, 2))(0x050BF12BL, 0xD6E721E4L), 0xD6E721E4L), 0xD6E721E4L, 0x050BF12BL, 0xD6E721E4L, (VECTOR(uint32_t, 2))(0x050BF12BL, 0xD6E721E4L), (VECTOR(uint32_t, 2))(0x050BF12BL, 0xD6E721E4L), 0x050BF12BL, 0xD6E721E4L, 0x050BF12BL, 0xD6E721E4L);
    VECTOR(uint32_t, 4) l_101 = (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0x0AF62140L), 0x0AF62140L);
    VECTOR(uint32_t, 16) l_102 = (VECTOR(uint32_t, 16))(0xE09DF947L, (VECTOR(uint32_t, 4))(0xE09DF947L, (VECTOR(uint32_t, 2))(0xE09DF947L, 1UL), 1UL), 1UL, 0xE09DF947L, 1UL, (VECTOR(uint32_t, 2))(0xE09DF947L, 1UL), (VECTOR(uint32_t, 2))(0xE09DF947L, 1UL), 0xE09DF947L, 1UL, 0xE09DF947L, 1UL);
    VECTOR(uint32_t, 8) l_103 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967291UL), 4294967291UL), 4294967291UL, 0UL, 4294967291UL);
    VECTOR(uint32_t, 2) l_104 = (VECTOR(uint32_t, 2))(0x2D400D3BL, 0UL);
    uint16_t l_112 = 0x54EAL;
    VECTOR(int8_t, 16) l_122 = (VECTOR(int8_t, 16))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x29L), 0x29L), 0x29L, (-6L), 0x29L, (VECTOR(int8_t, 2))((-6L), 0x29L), (VECTOR(int8_t, 2))((-6L), 0x29L), (-6L), 0x29L, (-6L), 0x29L);
    uint8_t l_140 = 0UL;
    VECTOR(int16_t, 8) l_145 = (VECTOR(int16_t, 8))(0x291BL, (VECTOR(int16_t, 4))(0x291BL, (VECTOR(int16_t, 2))(0x291BL, (-1L)), (-1L)), (-1L), 0x291BL, (-1L));
    int64_t *l_155 = &p_922->g_148.f2;
    int32_t l_164 = 4L;
    int16_t l_167 = 0x1CDFL;
    int i;
    for (i = 0; i < 4; i++)
        l_87[i] = 0UL;
    p_922->g_69 ^= (((((safe_div_func_int32_t_s_s(((((((l_62 , l_62) == (((void*)0 != l_63) <= (safe_mul_func_int8_t_s_s(((void*)0 != &p_51), (safe_mul_func_uint8_t_u_u(1UL, 0xAFL)))))) == 65535UL) < 1UL) , (void*)0) == (void*)0), 4294967288UL)) , &p_51) == &p_922->g_7) == p_922->g_68) , (*p_922->g_6));
    p_922->g_92 &= (safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_74.s11)).even, ((safe_mul_func_uint8_t_u_u(p_51, (safe_sub_func_int16_t_s_s((&p_51 == (void*)0), ((!((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))((p_922->g_79[0] , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(0UL, (p_51 > (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(p_922->g_84.s3578)).y, (safe_rshift_func_uint16_t_u_s(((*l_88) = l_87[3]), 14)))) != (safe_add_func_uint8_t_u_u(0x55L, 0x35L))), 7))), ((VECTOR(uint64_t, 8))((&p_51 == &p_51), p_922->g_68, FAKE_DIVERGE(p_922->group_1_offset, get_group_id(1), 10), GROUP_DIVERGE(2, 1), 0UL, ((VECTOR(uint64_t, 2))(0xCC76B58F18CA9A6AL)), 0xC26CF9C76A8768DDL)), 18446744073709551608UL, 1UL, ((VECTOR(uint64_t, 4))(0x1C666DF6EF7D18C3L)))).s6e20)))).z), p_922->g_68, ((VECTOR(uint64_t, 4))(2UL)), 0xA5961B9AEE731193L, 0UL)).s5214660500665020)).lo, ((VECTOR(uint64_t, 8))(18446744073709551608UL))))).s1014301301547016, ((VECTOR(uint64_t, 16))(18446744073709551612UL))))).se432)).z) <= p_52))))) != FAKE_DIVERGE(p_922->local_1_offset, get_local_id(1), 10)))) , p_922->g_84.s7), (*l_63)));
    for (p_922->g_89 = 14; (p_922->g_89 > 10); --p_922->g_89)
    { /* block id: 14 */
        VECTOR(uint32_t, 8) l_100 = (VECTOR(uint32_t, 8))(0x43F78960L, (VECTOR(uint32_t, 4))(0x43F78960L, (VECTOR(uint32_t, 2))(0x43F78960L, 7UL), 7UL), 7UL, 0x43F78960L, 7UL);
        uint16_t l_107 = 0xE172L;
        uint32_t *l_108 = &l_87[1];
        int16_t *l_109 = (void*)0;
        int16_t *l_110[6];
        uint64_t l_113 = 18446744073709551615UL;
        volatile struct S1 *l_116 = &p_922->g_115;
        VECTOR(int8_t, 8) l_123 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x16L), 0x16L), 0x16L, 1L, 0x16L);
        struct S1 *l_124 = &p_922->g_125;
        VECTOR(int64_t, 8) l_128 = (VECTOR(int64_t, 8))(0x37C9420149EDFFE6L, (VECTOR(int64_t, 4))(0x37C9420149EDFFE6L, (VECTOR(int64_t, 2))(0x37C9420149EDFFE6L, (-4L)), (-4L)), (-4L), 0x37C9420149EDFFE6L, (-4L));
        uint64_t *l_133[1];
        int64_t *l_139[1][9] = {{&p_922->g_125.f8,&p_922->g_125.f8,&p_922->g_125.f8,&p_922->g_125.f8,&p_922->g_125.f8,&p_922->g_125.f8,&p_922->g_125.f8,&p_922->g_125.f8,&p_922->g_125.f8}};
        int64_t *l_141 = &p_922->g_142;
        int16_t l_143 = 0L;
        uint64_t l_163 = 0xAFB25AEB332806D6L;
        int32_t l_166 = 0x1C9919D5L;
        VECTOR(int32_t, 8) l_170 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
        int i, j;
        for (i = 0; i < 6; i++)
            l_110[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_133[i] = &l_113;
        p_922->g_114 ^= (((void*)0 != &p_922->g_7) & (((safe_div_func_int8_t_s_s((-1L), (*l_63))) > ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))((-1L), p_922->g_comm_values[p_922->tid], ((VECTOR(int16_t, 4))(l_97.s7672)), 0x4D3BL, 1L)).hi)))), (int16_t)((*l_63) || (((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(p_922->g_98.s6ec4ae7c4fe17dd5)).s9e71, ((VECTOR(uint32_t, 2))(l_99.s50)).yxxy))), ((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(l_100.s31)).xyyyxyyx, ((VECTOR(uint32_t, 16))(0x128C1896L, 4294967295UL, ((VECTOR(uint32_t, 4))(l_101.xyxx)), 4294967295UL, ((VECTOR(uint32_t, 8))(l_102.sf223cdc6)), 4294967292UL)).lo, ((VECTOR(uint32_t, 8))(l_103.s01350263))))), ((VECTOR(uint32_t, 8))(l_104.xxxxyxxy)))).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))((FAKE_DIVERGE(p_922->global_0_offset, get_global_id(0), 10) == ((safe_sub_func_int16_t_s_s((p_922->g_111 = ((p_52 && (((((*l_108) = ((((*l_63) >= 0x30EDL) > p_51) < l_107)) > 0x343B4210L) < (*l_63)) >= 4294967295UL)) <= p_922->g_92)), l_112)) == (*l_63))), FAKE_DIVERGE(p_922->group_1_offset, get_group_id(1), 10), 6UL, 1UL)).ywywyzyx)))).odd)).ywwwywzzzwxzxxyy)).even))).s5032770407122142, ((VECTOR(uint32_t, 16))(0xC3218605L))))).sc96c))).odd)).xyxxxxyyyxxyxxyy, ((VECTOR(uint32_t, 16))(0xC23E70AEL)), ((VECTOR(uint32_t, 16))(0x978AFB31L))))).sa && p_52)), (int16_t)l_113))).z) > 6UL));
        (*l_116) = p_922->g_115;
    }
    return p_52;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[65];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 65; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[65];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 65; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_comm_values[i] = 1;
    struct S3 c_923;
    struct S3* p_922 = &c_923;
    struct S3 c_924 = {
        4294967295UL, // p_922->g_3
        (-7L), // p_922->g_7
        &p_922->g_7, // p_922->g_6
        1UL, // p_922->g_27
        {{{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL},{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL},{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL},{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL}},{{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL},{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL},{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL},{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL}},{{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL},{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL},{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL},{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL}},{{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL},{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL},{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL},{1UL,0UL,1UL,0x4F2D8918L,0x457720F8L,0x4F2D8918L,1UL,0UL}}}, // p_922->g_45
        (-1L), // p_922->g_68
        2UL, // p_922->g_69
        {{-4L},{-4L},{-4L},{-4L},{-4L},{-4L}}, // p_922->g_79
        (VECTOR(uint8_t, 16))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 3UL), 3UL), 3UL, 4UL, 3UL, (VECTOR(uint8_t, 2))(4UL, 3UL), (VECTOR(uint8_t, 2))(4UL, 3UL), 4UL, 3UL, 4UL, 3UL), // p_922->g_84
        65535UL, // p_922->g_89
        0x7E17L, // p_922->g_92
        (VECTOR(uint32_t, 16))(0x64248A5EL, (VECTOR(uint32_t, 4))(0x64248A5EL, (VECTOR(uint32_t, 2))(0x64248A5EL, 1UL), 1UL), 1UL, 0x64248A5EL, 1UL, (VECTOR(uint32_t, 2))(0x64248A5EL, 1UL), (VECTOR(uint32_t, 2))(0x64248A5EL, 1UL), 0x64248A5EL, 1UL, 0x64248A5EL, 1UL), // p_922->g_98
        0x04D6L, // p_922->g_111
        0x52A0L, // p_922->g_114
        {0x7A4CD60AL,9UL,0x15BAL,6UL,-1L,0UL,0UL,0x06B18C049E589B78L,0x3D77F32F3F1EC4A5L,0x42DF10F9L}, // p_922->g_115
        (VECTOR(int8_t, 2))(9L, 0L), // p_922->g_121
        {0x07F5898AL,7UL,7L,0x37E9AE4E8F995CB7L,-1L,1UL,0x985D356EL,3L,0x0E91C3CDCB43784CL,1L}, // p_922->g_125
        {0xD6L,0xD6L,0xD6L,0xD6L,0xD6L,0xD6L,0xD6L,0xD6L,0xD6L,0xD6L}, // p_922->g_134
        0x090B747BEB803190L, // p_922->g_142
        {4294967295UL,0x20AAEB0DL,0L,6L,0x320F675BL,0x75AD3DD4L,18446744073709551615UL,1UL}, // p_922->g_148
        (void*)0, // p_922->g_169
        &p_922->g_169, // p_922->g_168
        {0x0D4C6C70B2367802L,0x0D4C6C70B2367802L}, // p_922->g_191
        (void*)0, // p_922->g_203
        &p_922->g_203, // p_922->g_202
        {{&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202,&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202},{&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202,&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202},{&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202,&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202},{&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202,&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202},{&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202,&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202},{&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202,&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202},{&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202,&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202},{&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202,&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202},{&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202,&p_922->g_202,(void*)0,&p_922->g_202,(void*)0,&p_922->g_202}}, // p_922->g_201
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 3L), 3L), // p_922->g_223
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 9UL), 9UL), // p_922->g_225
        {1UL,3L,0x0FE3B47060A9B02AL,1L,1UL,0x0C4DDB9AL,0x83487E90FEDD67E6L,65535UL}, // p_922->g_231
        &p_922->g_169, // p_922->g_254
        &p_922->g_115, // p_922->g_256
        &p_922->g_256, // p_922->g_255
        (void*)0, // p_922->g_271
        {{{&p_922->g_271,(void*)0,&p_922->g_271,&p_922->g_271},{&p_922->g_271,(void*)0,&p_922->g_271,&p_922->g_271},{&p_922->g_271,(void*)0,&p_922->g_271,&p_922->g_271},{&p_922->g_271,(void*)0,&p_922->g_271,&p_922->g_271},{&p_922->g_271,(void*)0,&p_922->g_271,&p_922->g_271}},{{&p_922->g_271,(void*)0,&p_922->g_271,&p_922->g_271},{&p_922->g_271,(void*)0,&p_922->g_271,&p_922->g_271},{&p_922->g_271,(void*)0,&p_922->g_271,&p_922->g_271},{&p_922->g_271,(void*)0,&p_922->g_271,&p_922->g_271},{&p_922->g_271,(void*)0,&p_922->g_271,&p_922->g_271}}}, // p_922->g_270
        {{4294967295UL,0x0548AEABL,1L,-5L,4294967287UL,0x590239DEL,0x58419561D516A57FL,0x4490L},{4294967295UL,0x0548AEABL,1L,-5L,4294967287UL,0x590239DEL,0x58419561D516A57FL,0x4490L}}, // p_922->g_288
        {{0xDF465272L,0x1AE2821CL,-9L,0x4E96F79EL,5UL,4294967291UL,0x148E990CB8604469L,0x8621L},{0xDF465272L,0x1AE2821CL,-9L,0x4E96F79EL,5UL,4294967291UL,0x148E990CB8604469L,0x8621L},{0xDF465272L,0x1AE2821CL,-9L,0x4E96F79EL,5UL,4294967291UL,0x148E990CB8604469L,0x8621L},{0xDF465272L,0x1AE2821CL,-9L,0x4E96F79EL,5UL,4294967291UL,0x148E990CB8604469L,0x8621L}}, // p_922->g_290
        &p_922->g_290[3], // p_922->g_289
        {0x0CE56365L,0x493292E9L,1L,0xEDC74811CE01D770L,-10L,0xB8F3C7403A069C42L,4294967295UL,0x50BB2A901A7BE7A5L,0x36BF2AB1E9F3B934L,-10L}, // p_922->g_309
        &p_922->g_169, // p_922->g_315
        (-7L), // p_922->g_338
        0x89L, // p_922->g_339
        &p_922->g_169, // p_922->g_342
        0x081AFF97837FA248L, // p_922->g_351
        4L, // p_922->g_352
        0x2264113C6A15DF48L, // p_922->g_353
        1L, // p_922->g_354
        0x3FEDDA966ECBB81FL, // p_922->g_355
        1L, // p_922->g_356
        0x75AAC8FB9A0D7941L, // p_922->g_357
        0x19C9E09A5F6F0DBFL, // p_922->g_358
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x5DE7A03B80FDBBE2L), 0x5DE7A03B80FDBBE2L), 0x5DE7A03B80FDBBE2L, 1L, 0x5DE7A03B80FDBBE2L, (VECTOR(int64_t, 2))(1L, 0x5DE7A03B80FDBBE2L), (VECTOR(int64_t, 2))(1L, 0x5DE7A03B80FDBBE2L), 1L, 0x5DE7A03B80FDBBE2L, 1L, 0x5DE7A03B80FDBBE2L), // p_922->g_359
        0L, // p_922->g_360
        1L, // p_922->g_361
        (-9L), // p_922->g_362
        (-9L), // p_922->g_363
        0x6352B67117026767L, // p_922->g_364
        0L, // p_922->g_365
        {{{&p_922->g_360,&p_922->g_360},{&p_922->g_360,&p_922->g_360},{&p_922->g_360,&p_922->g_360},{&p_922->g_360,&p_922->g_360},{&p_922->g_360,&p_922->g_360}},{{&p_922->g_360,&p_922->g_360},{&p_922->g_360,&p_922->g_360},{&p_922->g_360,&p_922->g_360},{&p_922->g_360,&p_922->g_360},{&p_922->g_360,&p_922->g_360}},{{&p_922->g_360,&p_922->g_360},{&p_922->g_360,&p_922->g_360},{&p_922->g_360,&p_922->g_360},{&p_922->g_360,&p_922->g_360},{&p_922->g_360,&p_922->g_360}}}, // p_922->g_350
        (-2L), // p_922->g_375
        {0x5F4D9917L,0L,-1L,0x7FAB7BF4L,0x02175CD8L,4294967289UL,0xFD180341F62EF876L,65529UL}, // p_922->g_384
        &p_922->g_288[0].f5, // p_922->g_402
        {&p_922->g_402,&p_922->g_402,&p_922->g_402,&p_922->g_402,&p_922->g_402}, // p_922->g_401
        (VECTOR(int32_t, 8))(0x4F4DD243L, (VECTOR(int32_t, 4))(0x4F4DD243L, (VECTOR(int32_t, 2))(0x4F4DD243L, 0x60D388D1L), 0x60D388D1L), 0x60D388D1L, 0x4F4DD243L, 0x60D388D1L), // p_922->g_425
        {0L}, // p_922->g_427
        (VECTOR(uint16_t, 16))(0xEA79L, (VECTOR(uint16_t, 4))(0xEA79L, (VECTOR(uint16_t, 2))(0xEA79L, 0UL), 0UL), 0UL, 0xEA79L, 0UL, (VECTOR(uint16_t, 2))(0xEA79L, 0UL), (VECTOR(uint16_t, 2))(0xEA79L, 0UL), 0xEA79L, 0UL, 0xEA79L, 0UL), // p_922->g_436
        (VECTOR(uint64_t, 2))(0x9AC6619DF08DD822L, 18446744073709551606UL), // p_922->g_446
        {&p_922->g_169,&p_922->g_169,&p_922->g_169,&p_922->g_169,&p_922->g_169,&p_922->g_169,&p_922->g_169}, // p_922->g_470
        {&p_922->g_169}, // p_922->g_471
        &p_922->g_169, // p_922->g_472
        {0x60312A20L,1UL,6L,18446744073709551609UL,0x3F2911B1L,0xB04E2E9FDBB58068L,0UL,0x3483DF40FD9A0FDAL,0x10B3CC909A490E3CL,0x15F5926DL}, // p_922->g_473
        {-1L,7UL,-1L,18446744073709551608UL,0x4316DECFL,0x41DE323673B68E7CL,4294967295UL,0x28CDBD0A2C06CC02L,0x798CB993A75E1136L,0x41B9751CL}, // p_922->g_474
        &p_922->g_169, // p_922->g_485
        {4294967295UL,-1L,2L,0L,4294967295UL,0x5B50080DL,18446744073709551611UL,2UL}, // p_922->g_526
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_922->g_535
        {1L}, // p_922->g_577
        {&p_922->g_526,&p_922->g_526,&p_922->g_526,&p_922->g_526,&p_922->g_526,&p_922->g_526,&p_922->g_526,&p_922->g_526,&p_922->g_526,&p_922->g_526}, // p_922->g_581
        &p_922->g_581[1], // p_922->g_580
        {0x48C9EA99L,0L,0x5E88238B15420EAFL,0x548897BCL,0x58803067L,0x8FA5AE83L,5UL,0xD8C1L}, // p_922->g_591
        (VECTOR(uint32_t, 2))(1UL, 0x8E373E9CL), // p_922->g_592
        &p_922->g_79[0], // p_922->g_611
        &p_922->g_611, // p_922->g_610
        {1UL,1L,9L,-1L,0x9EE21551L,0UL,0xBE96D8ADAB649DC8L,9UL}, // p_922->g_614
        (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 1UL), 1UL), // p_922->g_620
        {4294967292UL,0x36BF95D5L,7L,0x3DD35508L,0x098D2E2EL,1UL,0x7A876C0083C60E6EL,0UL}, // p_922->g_628
        {&p_922->g_169,&p_922->g_169}, // p_922->g_630
        &p_922->g_169, // p_922->g_641
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x44L), 0x44L), 0x44L, 1L, 0x44L), // p_922->g_650
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 8UL), 8UL), // p_922->g_653
        (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), (-1L)), (-1L)), // p_922->g_694
        {0x31L}, // p_922->g_722
        {0x587F0B99L,0xAA0FFCD8L,0x342FL,0UL,0x6732EA70L,18446744073709551611UL,4294967295UL,1L,0x78D02707E368407DL,0x1F457EEDL}, // p_922->g_733
        &p_922->g_111, // p_922->g_758
        (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L)), // p_922->g_762
        0UL, // p_922->g_767
        &p_922->g_427, // p_922->g_783
        &p_922->g_783, // p_922->g_782
        {4294967293UL,0x74BA7AB8L,8L,2L,4294967289UL,0xE43A86F5L,0x87828D1651412343L,3UL}, // p_922->g_831
        &p_922->g_831.f1, // p_922->g_850
        &p_922->g_850, // p_922->g_849
        &p_922->g_581[3], // p_922->g_851
        (VECTOR(int32_t, 4))(0x2CD662D2L, (VECTOR(int32_t, 2))(0x2CD662D2L, 0x0EC2616AL), 0x0EC2616AL), // p_922->g_852
        {0xDA9EDC75L,0L,0x5F040A83FE727D29L,0x04F38DDAL,0x7E4602CAL,0x251AD37FL,0xA5462884301535C4L,0x4E4DL}, // p_922->g_853
        {4294967290UL,-2L,-7L,0x7119757DL,0x124D4ED7L,0x9B866DC3L,4UL,0xEC83L}, // p_922->g_854
        (VECTOR(uint64_t, 8))(0x38E1F4E4CD0BC0E9L, (VECTOR(uint64_t, 4))(0x38E1F4E4CD0BC0E9L, (VECTOR(uint64_t, 2))(0x38E1F4E4CD0BC0E9L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x38E1F4E4CD0BC0E9L, 18446744073709551615UL), // p_922->g_865
        {0x01C63CAFL,-1L,4L,-1L,0x68062007L,0x14ADF6A4L,0UL,0x48F3L}, // p_922->g_872
        {0xB42C0A56L,0L,3L,0x3C36A143L,0xA4E6C574L,4294967295UL,0UL,65534UL}, // p_922->g_873
        &p_922->g_134[3], // p_922->g_875
        {&p_922->g_875,&p_922->g_875,&p_922->g_875,&p_922->g_875,&p_922->g_875}, // p_922->g_874
        &p_922->g_270[0][0][2], // p_922->g_889
        &p_922->g_271, // p_922->g_892
        &p_922->g_892, // p_922->g_891
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_922->g_890
        (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L), // p_922->g_903
        (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x2E3CL), 0x2E3CL), 0x2E3CL, (-2L), 0x2E3CL), // p_922->g_910
        0, // p_922->v_collective
        sequence_input[get_global_id(0)], // p_922->global_0_offset
        sequence_input[get_global_id(1)], // p_922->global_1_offset
        sequence_input[get_global_id(2)], // p_922->global_2_offset
        sequence_input[get_local_id(0)], // p_922->local_0_offset
        sequence_input[get_local_id(1)], // p_922->local_1_offset
        sequence_input[get_local_id(2)], // p_922->local_2_offset
        sequence_input[get_group_id(0)], // p_922->group_0_offset
        sequence_input[get_group_id(1)], // p_922->group_1_offset
        sequence_input[get_group_id(2)], // p_922->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[0][get_linear_local_id()])), // p_922->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_923 = c_924;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_922);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_922->g_3, "p_922->g_3", print_hash_value);
    transparent_crc(p_922->g_7, "p_922->g_7", print_hash_value);
    transparent_crc(p_922->g_27, "p_922->g_27", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_922->g_45[i][j][k], "p_922->g_45[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_922->g_68, "p_922->g_68", print_hash_value);
    transparent_crc(p_922->g_69, "p_922->g_69", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_922->g_79[i].f0, "p_922->g_79[i].f0", print_hash_value);

    }
    transparent_crc(p_922->g_84.s0, "p_922->g_84.s0", print_hash_value);
    transparent_crc(p_922->g_84.s1, "p_922->g_84.s1", print_hash_value);
    transparent_crc(p_922->g_84.s2, "p_922->g_84.s2", print_hash_value);
    transparent_crc(p_922->g_84.s3, "p_922->g_84.s3", print_hash_value);
    transparent_crc(p_922->g_84.s4, "p_922->g_84.s4", print_hash_value);
    transparent_crc(p_922->g_84.s5, "p_922->g_84.s5", print_hash_value);
    transparent_crc(p_922->g_84.s6, "p_922->g_84.s6", print_hash_value);
    transparent_crc(p_922->g_84.s7, "p_922->g_84.s7", print_hash_value);
    transparent_crc(p_922->g_84.s8, "p_922->g_84.s8", print_hash_value);
    transparent_crc(p_922->g_84.s9, "p_922->g_84.s9", print_hash_value);
    transparent_crc(p_922->g_84.sa, "p_922->g_84.sa", print_hash_value);
    transparent_crc(p_922->g_84.sb, "p_922->g_84.sb", print_hash_value);
    transparent_crc(p_922->g_84.sc, "p_922->g_84.sc", print_hash_value);
    transparent_crc(p_922->g_84.sd, "p_922->g_84.sd", print_hash_value);
    transparent_crc(p_922->g_84.se, "p_922->g_84.se", print_hash_value);
    transparent_crc(p_922->g_84.sf, "p_922->g_84.sf", print_hash_value);
    transparent_crc(p_922->g_89, "p_922->g_89", print_hash_value);
    transparent_crc(p_922->g_92, "p_922->g_92", print_hash_value);
    transparent_crc(p_922->g_98.s0, "p_922->g_98.s0", print_hash_value);
    transparent_crc(p_922->g_98.s1, "p_922->g_98.s1", print_hash_value);
    transparent_crc(p_922->g_98.s2, "p_922->g_98.s2", print_hash_value);
    transparent_crc(p_922->g_98.s3, "p_922->g_98.s3", print_hash_value);
    transparent_crc(p_922->g_98.s4, "p_922->g_98.s4", print_hash_value);
    transparent_crc(p_922->g_98.s5, "p_922->g_98.s5", print_hash_value);
    transparent_crc(p_922->g_98.s6, "p_922->g_98.s6", print_hash_value);
    transparent_crc(p_922->g_98.s7, "p_922->g_98.s7", print_hash_value);
    transparent_crc(p_922->g_98.s8, "p_922->g_98.s8", print_hash_value);
    transparent_crc(p_922->g_98.s9, "p_922->g_98.s9", print_hash_value);
    transparent_crc(p_922->g_98.sa, "p_922->g_98.sa", print_hash_value);
    transparent_crc(p_922->g_98.sb, "p_922->g_98.sb", print_hash_value);
    transparent_crc(p_922->g_98.sc, "p_922->g_98.sc", print_hash_value);
    transparent_crc(p_922->g_98.sd, "p_922->g_98.sd", print_hash_value);
    transparent_crc(p_922->g_98.se, "p_922->g_98.se", print_hash_value);
    transparent_crc(p_922->g_98.sf, "p_922->g_98.sf", print_hash_value);
    transparent_crc(p_922->g_111, "p_922->g_111", print_hash_value);
    transparent_crc(p_922->g_114, "p_922->g_114", print_hash_value);
    transparent_crc(p_922->g_115.f0, "p_922->g_115.f0", print_hash_value);
    transparent_crc(p_922->g_115.f1, "p_922->g_115.f1", print_hash_value);
    transparent_crc(p_922->g_115.f2, "p_922->g_115.f2", print_hash_value);
    transparent_crc(p_922->g_115.f3, "p_922->g_115.f3", print_hash_value);
    transparent_crc(p_922->g_115.f4, "p_922->g_115.f4", print_hash_value);
    transparent_crc(p_922->g_115.f5, "p_922->g_115.f5", print_hash_value);
    transparent_crc(p_922->g_115.f6, "p_922->g_115.f6", print_hash_value);
    transparent_crc(p_922->g_115.f7, "p_922->g_115.f7", print_hash_value);
    transparent_crc(p_922->g_115.f8, "p_922->g_115.f8", print_hash_value);
    transparent_crc(p_922->g_115.f9, "p_922->g_115.f9", print_hash_value);
    transparent_crc(p_922->g_121.x, "p_922->g_121.x", print_hash_value);
    transparent_crc(p_922->g_121.y, "p_922->g_121.y", print_hash_value);
    transparent_crc(p_922->g_125.f0, "p_922->g_125.f0", print_hash_value);
    transparent_crc(p_922->g_125.f1, "p_922->g_125.f1", print_hash_value);
    transparent_crc(p_922->g_125.f2, "p_922->g_125.f2", print_hash_value);
    transparent_crc(p_922->g_125.f3, "p_922->g_125.f3", print_hash_value);
    transparent_crc(p_922->g_125.f4, "p_922->g_125.f4", print_hash_value);
    transparent_crc(p_922->g_125.f5, "p_922->g_125.f5", print_hash_value);
    transparent_crc(p_922->g_125.f6, "p_922->g_125.f6", print_hash_value);
    transparent_crc(p_922->g_125.f7, "p_922->g_125.f7", print_hash_value);
    transparent_crc(p_922->g_125.f8, "p_922->g_125.f8", print_hash_value);
    transparent_crc(p_922->g_125.f9, "p_922->g_125.f9", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_922->g_134[i], "p_922->g_134[i]", print_hash_value);

    }
    transparent_crc(p_922->g_142, "p_922->g_142", print_hash_value);
    transparent_crc(p_922->g_148.f0, "p_922->g_148.f0", print_hash_value);
    transparent_crc(p_922->g_148.f1, "p_922->g_148.f1", print_hash_value);
    transparent_crc(p_922->g_148.f2, "p_922->g_148.f2", print_hash_value);
    transparent_crc(p_922->g_148.f3, "p_922->g_148.f3", print_hash_value);
    transparent_crc(p_922->g_148.f4, "p_922->g_148.f4", print_hash_value);
    transparent_crc(p_922->g_148.f5, "p_922->g_148.f5", print_hash_value);
    transparent_crc(p_922->g_148.f6, "p_922->g_148.f6", print_hash_value);
    transparent_crc(p_922->g_148.f7, "p_922->g_148.f7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_922->g_191[i], "p_922->g_191[i]", print_hash_value);

    }
    transparent_crc(p_922->g_223.x, "p_922->g_223.x", print_hash_value);
    transparent_crc(p_922->g_223.y, "p_922->g_223.y", print_hash_value);
    transparent_crc(p_922->g_223.z, "p_922->g_223.z", print_hash_value);
    transparent_crc(p_922->g_223.w, "p_922->g_223.w", print_hash_value);
    transparent_crc(p_922->g_225.x, "p_922->g_225.x", print_hash_value);
    transparent_crc(p_922->g_225.y, "p_922->g_225.y", print_hash_value);
    transparent_crc(p_922->g_225.z, "p_922->g_225.z", print_hash_value);
    transparent_crc(p_922->g_225.w, "p_922->g_225.w", print_hash_value);
    transparent_crc(p_922->g_231.f0, "p_922->g_231.f0", print_hash_value);
    transparent_crc(p_922->g_231.f1, "p_922->g_231.f1", print_hash_value);
    transparent_crc(p_922->g_231.f2, "p_922->g_231.f2", print_hash_value);
    transparent_crc(p_922->g_231.f3, "p_922->g_231.f3", print_hash_value);
    transparent_crc(p_922->g_231.f4, "p_922->g_231.f4", print_hash_value);
    transparent_crc(p_922->g_231.f5, "p_922->g_231.f5", print_hash_value);
    transparent_crc(p_922->g_231.f6, "p_922->g_231.f6", print_hash_value);
    transparent_crc(p_922->g_231.f7, "p_922->g_231.f7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_922->g_288[i].f0, "p_922->g_288[i].f0", print_hash_value);
        transparent_crc(p_922->g_288[i].f1, "p_922->g_288[i].f1", print_hash_value);
        transparent_crc(p_922->g_288[i].f2, "p_922->g_288[i].f2", print_hash_value);
        transparent_crc(p_922->g_288[i].f3, "p_922->g_288[i].f3", print_hash_value);
        transparent_crc(p_922->g_288[i].f4, "p_922->g_288[i].f4", print_hash_value);
        transparent_crc(p_922->g_288[i].f5, "p_922->g_288[i].f5", print_hash_value);
        transparent_crc(p_922->g_288[i].f6, "p_922->g_288[i].f6", print_hash_value);
        transparent_crc(p_922->g_288[i].f7, "p_922->g_288[i].f7", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_922->g_290[i].f0, "p_922->g_290[i].f0", print_hash_value);
        transparent_crc(p_922->g_290[i].f1, "p_922->g_290[i].f1", print_hash_value);
        transparent_crc(p_922->g_290[i].f2, "p_922->g_290[i].f2", print_hash_value);
        transparent_crc(p_922->g_290[i].f3, "p_922->g_290[i].f3", print_hash_value);
        transparent_crc(p_922->g_290[i].f4, "p_922->g_290[i].f4", print_hash_value);
        transparent_crc(p_922->g_290[i].f5, "p_922->g_290[i].f5", print_hash_value);
        transparent_crc(p_922->g_290[i].f6, "p_922->g_290[i].f6", print_hash_value);
        transparent_crc(p_922->g_290[i].f7, "p_922->g_290[i].f7", print_hash_value);

    }
    transparent_crc(p_922->g_309.f0, "p_922->g_309.f0", print_hash_value);
    transparent_crc(p_922->g_309.f1, "p_922->g_309.f1", print_hash_value);
    transparent_crc(p_922->g_309.f2, "p_922->g_309.f2", print_hash_value);
    transparent_crc(p_922->g_309.f3, "p_922->g_309.f3", print_hash_value);
    transparent_crc(p_922->g_309.f4, "p_922->g_309.f4", print_hash_value);
    transparent_crc(p_922->g_309.f5, "p_922->g_309.f5", print_hash_value);
    transparent_crc(p_922->g_309.f6, "p_922->g_309.f6", print_hash_value);
    transparent_crc(p_922->g_309.f7, "p_922->g_309.f7", print_hash_value);
    transparent_crc(p_922->g_309.f8, "p_922->g_309.f8", print_hash_value);
    transparent_crc(p_922->g_309.f9, "p_922->g_309.f9", print_hash_value);
    transparent_crc(p_922->g_338, "p_922->g_338", print_hash_value);
    transparent_crc(p_922->g_339, "p_922->g_339", print_hash_value);
    transparent_crc(p_922->g_351, "p_922->g_351", print_hash_value);
    transparent_crc(p_922->g_352, "p_922->g_352", print_hash_value);
    transparent_crc(p_922->g_353, "p_922->g_353", print_hash_value);
    transparent_crc(p_922->g_354, "p_922->g_354", print_hash_value);
    transparent_crc(p_922->g_355, "p_922->g_355", print_hash_value);
    transparent_crc(p_922->g_356, "p_922->g_356", print_hash_value);
    transparent_crc(p_922->g_357, "p_922->g_357", print_hash_value);
    transparent_crc(p_922->g_358, "p_922->g_358", print_hash_value);
    transparent_crc(p_922->g_359.s0, "p_922->g_359.s0", print_hash_value);
    transparent_crc(p_922->g_359.s1, "p_922->g_359.s1", print_hash_value);
    transparent_crc(p_922->g_359.s2, "p_922->g_359.s2", print_hash_value);
    transparent_crc(p_922->g_359.s3, "p_922->g_359.s3", print_hash_value);
    transparent_crc(p_922->g_359.s4, "p_922->g_359.s4", print_hash_value);
    transparent_crc(p_922->g_359.s5, "p_922->g_359.s5", print_hash_value);
    transparent_crc(p_922->g_359.s6, "p_922->g_359.s6", print_hash_value);
    transparent_crc(p_922->g_359.s7, "p_922->g_359.s7", print_hash_value);
    transparent_crc(p_922->g_359.s8, "p_922->g_359.s8", print_hash_value);
    transparent_crc(p_922->g_359.s9, "p_922->g_359.s9", print_hash_value);
    transparent_crc(p_922->g_359.sa, "p_922->g_359.sa", print_hash_value);
    transparent_crc(p_922->g_359.sb, "p_922->g_359.sb", print_hash_value);
    transparent_crc(p_922->g_359.sc, "p_922->g_359.sc", print_hash_value);
    transparent_crc(p_922->g_359.sd, "p_922->g_359.sd", print_hash_value);
    transparent_crc(p_922->g_359.se, "p_922->g_359.se", print_hash_value);
    transparent_crc(p_922->g_359.sf, "p_922->g_359.sf", print_hash_value);
    transparent_crc(p_922->g_360, "p_922->g_360", print_hash_value);
    transparent_crc(p_922->g_361, "p_922->g_361", print_hash_value);
    transparent_crc(p_922->g_362, "p_922->g_362", print_hash_value);
    transparent_crc(p_922->g_363, "p_922->g_363", print_hash_value);
    transparent_crc(p_922->g_364, "p_922->g_364", print_hash_value);
    transparent_crc(p_922->g_365, "p_922->g_365", print_hash_value);
    transparent_crc(p_922->g_375, "p_922->g_375", print_hash_value);
    transparent_crc(p_922->g_384.f0, "p_922->g_384.f0", print_hash_value);
    transparent_crc(p_922->g_384.f1, "p_922->g_384.f1", print_hash_value);
    transparent_crc(p_922->g_384.f2, "p_922->g_384.f2", print_hash_value);
    transparent_crc(p_922->g_384.f3, "p_922->g_384.f3", print_hash_value);
    transparent_crc(p_922->g_384.f4, "p_922->g_384.f4", print_hash_value);
    transparent_crc(p_922->g_384.f5, "p_922->g_384.f5", print_hash_value);
    transparent_crc(p_922->g_384.f6, "p_922->g_384.f6", print_hash_value);
    transparent_crc(p_922->g_384.f7, "p_922->g_384.f7", print_hash_value);
    transparent_crc(p_922->g_425.s0, "p_922->g_425.s0", print_hash_value);
    transparent_crc(p_922->g_425.s1, "p_922->g_425.s1", print_hash_value);
    transparent_crc(p_922->g_425.s2, "p_922->g_425.s2", print_hash_value);
    transparent_crc(p_922->g_425.s3, "p_922->g_425.s3", print_hash_value);
    transparent_crc(p_922->g_425.s4, "p_922->g_425.s4", print_hash_value);
    transparent_crc(p_922->g_425.s5, "p_922->g_425.s5", print_hash_value);
    transparent_crc(p_922->g_425.s6, "p_922->g_425.s6", print_hash_value);
    transparent_crc(p_922->g_425.s7, "p_922->g_425.s7", print_hash_value);
    transparent_crc(p_922->g_427.f0, "p_922->g_427.f0", print_hash_value);
    transparent_crc(p_922->g_436.s0, "p_922->g_436.s0", print_hash_value);
    transparent_crc(p_922->g_436.s1, "p_922->g_436.s1", print_hash_value);
    transparent_crc(p_922->g_436.s2, "p_922->g_436.s2", print_hash_value);
    transparent_crc(p_922->g_436.s3, "p_922->g_436.s3", print_hash_value);
    transparent_crc(p_922->g_436.s4, "p_922->g_436.s4", print_hash_value);
    transparent_crc(p_922->g_436.s5, "p_922->g_436.s5", print_hash_value);
    transparent_crc(p_922->g_436.s6, "p_922->g_436.s6", print_hash_value);
    transparent_crc(p_922->g_436.s7, "p_922->g_436.s7", print_hash_value);
    transparent_crc(p_922->g_436.s8, "p_922->g_436.s8", print_hash_value);
    transparent_crc(p_922->g_436.s9, "p_922->g_436.s9", print_hash_value);
    transparent_crc(p_922->g_436.sa, "p_922->g_436.sa", print_hash_value);
    transparent_crc(p_922->g_436.sb, "p_922->g_436.sb", print_hash_value);
    transparent_crc(p_922->g_436.sc, "p_922->g_436.sc", print_hash_value);
    transparent_crc(p_922->g_436.sd, "p_922->g_436.sd", print_hash_value);
    transparent_crc(p_922->g_436.se, "p_922->g_436.se", print_hash_value);
    transparent_crc(p_922->g_436.sf, "p_922->g_436.sf", print_hash_value);
    transparent_crc(p_922->g_446.x, "p_922->g_446.x", print_hash_value);
    transparent_crc(p_922->g_446.y, "p_922->g_446.y", print_hash_value);
    transparent_crc(p_922->g_473.f0, "p_922->g_473.f0", print_hash_value);
    transparent_crc(p_922->g_473.f1, "p_922->g_473.f1", print_hash_value);
    transparent_crc(p_922->g_473.f2, "p_922->g_473.f2", print_hash_value);
    transparent_crc(p_922->g_473.f3, "p_922->g_473.f3", print_hash_value);
    transparent_crc(p_922->g_473.f4, "p_922->g_473.f4", print_hash_value);
    transparent_crc(p_922->g_473.f5, "p_922->g_473.f5", print_hash_value);
    transparent_crc(p_922->g_473.f6, "p_922->g_473.f6", print_hash_value);
    transparent_crc(p_922->g_473.f7, "p_922->g_473.f7", print_hash_value);
    transparent_crc(p_922->g_473.f8, "p_922->g_473.f8", print_hash_value);
    transparent_crc(p_922->g_473.f9, "p_922->g_473.f9", print_hash_value);
    transparent_crc(p_922->g_474.f0, "p_922->g_474.f0", print_hash_value);
    transparent_crc(p_922->g_474.f1, "p_922->g_474.f1", print_hash_value);
    transparent_crc(p_922->g_474.f2, "p_922->g_474.f2", print_hash_value);
    transparent_crc(p_922->g_474.f3, "p_922->g_474.f3", print_hash_value);
    transparent_crc(p_922->g_474.f4, "p_922->g_474.f4", print_hash_value);
    transparent_crc(p_922->g_474.f5, "p_922->g_474.f5", print_hash_value);
    transparent_crc(p_922->g_474.f6, "p_922->g_474.f6", print_hash_value);
    transparent_crc(p_922->g_474.f7, "p_922->g_474.f7", print_hash_value);
    transparent_crc(p_922->g_474.f8, "p_922->g_474.f8", print_hash_value);
    transparent_crc(p_922->g_474.f9, "p_922->g_474.f9", print_hash_value);
    transparent_crc(p_922->g_526.f0, "p_922->g_526.f0", print_hash_value);
    transparent_crc(p_922->g_526.f1, "p_922->g_526.f1", print_hash_value);
    transparent_crc(p_922->g_526.f2, "p_922->g_526.f2", print_hash_value);
    transparent_crc(p_922->g_526.f3, "p_922->g_526.f3", print_hash_value);
    transparent_crc(p_922->g_526.f4, "p_922->g_526.f4", print_hash_value);
    transparent_crc(p_922->g_526.f5, "p_922->g_526.f5", print_hash_value);
    transparent_crc(p_922->g_526.f6, "p_922->g_526.f6", print_hash_value);
    transparent_crc(p_922->g_526.f7, "p_922->g_526.f7", print_hash_value);
    transparent_crc(p_922->g_577.f0, "p_922->g_577.f0", print_hash_value);
    transparent_crc(p_922->g_591.f0, "p_922->g_591.f0", print_hash_value);
    transparent_crc(p_922->g_591.f1, "p_922->g_591.f1", print_hash_value);
    transparent_crc(p_922->g_591.f2, "p_922->g_591.f2", print_hash_value);
    transparent_crc(p_922->g_591.f3, "p_922->g_591.f3", print_hash_value);
    transparent_crc(p_922->g_591.f4, "p_922->g_591.f4", print_hash_value);
    transparent_crc(p_922->g_591.f5, "p_922->g_591.f5", print_hash_value);
    transparent_crc(p_922->g_591.f6, "p_922->g_591.f6", print_hash_value);
    transparent_crc(p_922->g_591.f7, "p_922->g_591.f7", print_hash_value);
    transparent_crc(p_922->g_592.x, "p_922->g_592.x", print_hash_value);
    transparent_crc(p_922->g_592.y, "p_922->g_592.y", print_hash_value);
    transparent_crc(p_922->g_614.f0, "p_922->g_614.f0", print_hash_value);
    transparent_crc(p_922->g_614.f1, "p_922->g_614.f1", print_hash_value);
    transparent_crc(p_922->g_614.f2, "p_922->g_614.f2", print_hash_value);
    transparent_crc(p_922->g_614.f3, "p_922->g_614.f3", print_hash_value);
    transparent_crc(p_922->g_614.f4, "p_922->g_614.f4", print_hash_value);
    transparent_crc(p_922->g_614.f5, "p_922->g_614.f5", print_hash_value);
    transparent_crc(p_922->g_614.f6, "p_922->g_614.f6", print_hash_value);
    transparent_crc(p_922->g_614.f7, "p_922->g_614.f7", print_hash_value);
    transparent_crc(p_922->g_620.x, "p_922->g_620.x", print_hash_value);
    transparent_crc(p_922->g_620.y, "p_922->g_620.y", print_hash_value);
    transparent_crc(p_922->g_620.z, "p_922->g_620.z", print_hash_value);
    transparent_crc(p_922->g_620.w, "p_922->g_620.w", print_hash_value);
    transparent_crc(p_922->g_628.f0, "p_922->g_628.f0", print_hash_value);
    transparent_crc(p_922->g_628.f1, "p_922->g_628.f1", print_hash_value);
    transparent_crc(p_922->g_628.f2, "p_922->g_628.f2", print_hash_value);
    transparent_crc(p_922->g_628.f3, "p_922->g_628.f3", print_hash_value);
    transparent_crc(p_922->g_628.f4, "p_922->g_628.f4", print_hash_value);
    transparent_crc(p_922->g_628.f5, "p_922->g_628.f5", print_hash_value);
    transparent_crc(p_922->g_628.f6, "p_922->g_628.f6", print_hash_value);
    transparent_crc(p_922->g_628.f7, "p_922->g_628.f7", print_hash_value);
    transparent_crc(p_922->g_650.s0, "p_922->g_650.s0", print_hash_value);
    transparent_crc(p_922->g_650.s1, "p_922->g_650.s1", print_hash_value);
    transparent_crc(p_922->g_650.s2, "p_922->g_650.s2", print_hash_value);
    transparent_crc(p_922->g_650.s3, "p_922->g_650.s3", print_hash_value);
    transparent_crc(p_922->g_650.s4, "p_922->g_650.s4", print_hash_value);
    transparent_crc(p_922->g_650.s5, "p_922->g_650.s5", print_hash_value);
    transparent_crc(p_922->g_650.s6, "p_922->g_650.s6", print_hash_value);
    transparent_crc(p_922->g_650.s7, "p_922->g_650.s7", print_hash_value);
    transparent_crc(p_922->g_653.x, "p_922->g_653.x", print_hash_value);
    transparent_crc(p_922->g_653.y, "p_922->g_653.y", print_hash_value);
    transparent_crc(p_922->g_653.z, "p_922->g_653.z", print_hash_value);
    transparent_crc(p_922->g_653.w, "p_922->g_653.w", print_hash_value);
    transparent_crc(p_922->g_694.x, "p_922->g_694.x", print_hash_value);
    transparent_crc(p_922->g_694.y, "p_922->g_694.y", print_hash_value);
    transparent_crc(p_922->g_694.z, "p_922->g_694.z", print_hash_value);
    transparent_crc(p_922->g_694.w, "p_922->g_694.w", print_hash_value);
    transparent_crc(p_922->g_722.f0, "p_922->g_722.f0", print_hash_value);
    transparent_crc(p_922->g_733.f0, "p_922->g_733.f0", print_hash_value);
    transparent_crc(p_922->g_733.f1, "p_922->g_733.f1", print_hash_value);
    transparent_crc(p_922->g_733.f2, "p_922->g_733.f2", print_hash_value);
    transparent_crc(p_922->g_733.f3, "p_922->g_733.f3", print_hash_value);
    transparent_crc(p_922->g_733.f4, "p_922->g_733.f4", print_hash_value);
    transparent_crc(p_922->g_733.f5, "p_922->g_733.f5", print_hash_value);
    transparent_crc(p_922->g_733.f6, "p_922->g_733.f6", print_hash_value);
    transparent_crc(p_922->g_733.f7, "p_922->g_733.f7", print_hash_value);
    transparent_crc(p_922->g_733.f8, "p_922->g_733.f8", print_hash_value);
    transparent_crc(p_922->g_733.f9, "p_922->g_733.f9", print_hash_value);
    transparent_crc(p_922->g_762.s0, "p_922->g_762.s0", print_hash_value);
    transparent_crc(p_922->g_762.s1, "p_922->g_762.s1", print_hash_value);
    transparent_crc(p_922->g_762.s2, "p_922->g_762.s2", print_hash_value);
    transparent_crc(p_922->g_762.s3, "p_922->g_762.s3", print_hash_value);
    transparent_crc(p_922->g_762.s4, "p_922->g_762.s4", print_hash_value);
    transparent_crc(p_922->g_762.s5, "p_922->g_762.s5", print_hash_value);
    transparent_crc(p_922->g_762.s6, "p_922->g_762.s6", print_hash_value);
    transparent_crc(p_922->g_762.s7, "p_922->g_762.s7", print_hash_value);
    transparent_crc(p_922->g_767, "p_922->g_767", print_hash_value);
    transparent_crc(p_922->g_831.f0, "p_922->g_831.f0", print_hash_value);
    transparent_crc(p_922->g_831.f1, "p_922->g_831.f1", print_hash_value);
    transparent_crc(p_922->g_831.f2, "p_922->g_831.f2", print_hash_value);
    transparent_crc(p_922->g_831.f3, "p_922->g_831.f3", print_hash_value);
    transparent_crc(p_922->g_831.f4, "p_922->g_831.f4", print_hash_value);
    transparent_crc(p_922->g_831.f5, "p_922->g_831.f5", print_hash_value);
    transparent_crc(p_922->g_831.f6, "p_922->g_831.f6", print_hash_value);
    transparent_crc(p_922->g_831.f7, "p_922->g_831.f7", print_hash_value);
    transparent_crc(p_922->g_852.x, "p_922->g_852.x", print_hash_value);
    transparent_crc(p_922->g_852.y, "p_922->g_852.y", print_hash_value);
    transparent_crc(p_922->g_852.z, "p_922->g_852.z", print_hash_value);
    transparent_crc(p_922->g_852.w, "p_922->g_852.w", print_hash_value);
    transparent_crc(p_922->g_853.f0, "p_922->g_853.f0", print_hash_value);
    transparent_crc(p_922->g_853.f1, "p_922->g_853.f1", print_hash_value);
    transparent_crc(p_922->g_853.f2, "p_922->g_853.f2", print_hash_value);
    transparent_crc(p_922->g_853.f3, "p_922->g_853.f3", print_hash_value);
    transparent_crc(p_922->g_853.f4, "p_922->g_853.f4", print_hash_value);
    transparent_crc(p_922->g_853.f5, "p_922->g_853.f5", print_hash_value);
    transparent_crc(p_922->g_853.f6, "p_922->g_853.f6", print_hash_value);
    transparent_crc(p_922->g_853.f7, "p_922->g_853.f7", print_hash_value);
    transparent_crc(p_922->g_854.f0, "p_922->g_854.f0", print_hash_value);
    transparent_crc(p_922->g_854.f1, "p_922->g_854.f1", print_hash_value);
    transparent_crc(p_922->g_854.f2, "p_922->g_854.f2", print_hash_value);
    transparent_crc(p_922->g_854.f3, "p_922->g_854.f3", print_hash_value);
    transparent_crc(p_922->g_854.f4, "p_922->g_854.f4", print_hash_value);
    transparent_crc(p_922->g_854.f5, "p_922->g_854.f5", print_hash_value);
    transparent_crc(p_922->g_854.f6, "p_922->g_854.f6", print_hash_value);
    transparent_crc(p_922->g_854.f7, "p_922->g_854.f7", print_hash_value);
    transparent_crc(p_922->g_865.s0, "p_922->g_865.s0", print_hash_value);
    transparent_crc(p_922->g_865.s1, "p_922->g_865.s1", print_hash_value);
    transparent_crc(p_922->g_865.s2, "p_922->g_865.s2", print_hash_value);
    transparent_crc(p_922->g_865.s3, "p_922->g_865.s3", print_hash_value);
    transparent_crc(p_922->g_865.s4, "p_922->g_865.s4", print_hash_value);
    transparent_crc(p_922->g_865.s5, "p_922->g_865.s5", print_hash_value);
    transparent_crc(p_922->g_865.s6, "p_922->g_865.s6", print_hash_value);
    transparent_crc(p_922->g_865.s7, "p_922->g_865.s7", print_hash_value);
    transparent_crc(p_922->g_872.f0, "p_922->g_872.f0", print_hash_value);
    transparent_crc(p_922->g_872.f1, "p_922->g_872.f1", print_hash_value);
    transparent_crc(p_922->g_872.f2, "p_922->g_872.f2", print_hash_value);
    transparent_crc(p_922->g_872.f3, "p_922->g_872.f3", print_hash_value);
    transparent_crc(p_922->g_872.f4, "p_922->g_872.f4", print_hash_value);
    transparent_crc(p_922->g_872.f5, "p_922->g_872.f5", print_hash_value);
    transparent_crc(p_922->g_872.f6, "p_922->g_872.f6", print_hash_value);
    transparent_crc(p_922->g_872.f7, "p_922->g_872.f7", print_hash_value);
    transparent_crc(p_922->g_873.f0, "p_922->g_873.f0", print_hash_value);
    transparent_crc(p_922->g_873.f1, "p_922->g_873.f1", print_hash_value);
    transparent_crc(p_922->g_873.f2, "p_922->g_873.f2", print_hash_value);
    transparent_crc(p_922->g_873.f3, "p_922->g_873.f3", print_hash_value);
    transparent_crc(p_922->g_873.f4, "p_922->g_873.f4", print_hash_value);
    transparent_crc(p_922->g_873.f5, "p_922->g_873.f5", print_hash_value);
    transparent_crc(p_922->g_873.f6, "p_922->g_873.f6", print_hash_value);
    transparent_crc(p_922->g_873.f7, "p_922->g_873.f7", print_hash_value);
    transparent_crc(p_922->g_903.s0, "p_922->g_903.s0", print_hash_value);
    transparent_crc(p_922->g_903.s1, "p_922->g_903.s1", print_hash_value);
    transparent_crc(p_922->g_903.s2, "p_922->g_903.s2", print_hash_value);
    transparent_crc(p_922->g_903.s3, "p_922->g_903.s3", print_hash_value);
    transparent_crc(p_922->g_903.s4, "p_922->g_903.s4", print_hash_value);
    transparent_crc(p_922->g_903.s5, "p_922->g_903.s5", print_hash_value);
    transparent_crc(p_922->g_903.s6, "p_922->g_903.s6", print_hash_value);
    transparent_crc(p_922->g_903.s7, "p_922->g_903.s7", print_hash_value);
    transparent_crc(p_922->g_910.s0, "p_922->g_910.s0", print_hash_value);
    transparent_crc(p_922->g_910.s1, "p_922->g_910.s1", print_hash_value);
    transparent_crc(p_922->g_910.s2, "p_922->g_910.s2", print_hash_value);
    transparent_crc(p_922->g_910.s3, "p_922->g_910.s3", print_hash_value);
    transparent_crc(p_922->g_910.s4, "p_922->g_910.s4", print_hash_value);
    transparent_crc(p_922->g_910.s5, "p_922->g_910.s5", print_hash_value);
    transparent_crc(p_922->g_910.s6, "p_922->g_910.s6", print_hash_value);
    transparent_crc(p_922->g_910.s7, "p_922->g_910.s7", print_hash_value);
    transparent_crc(p_922->v_collective, "p_922->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 65; i++)
            transparent_crc(p_922->l_special_values[i], "p_922->l_special_values[i]", print_hash_value);
    transparent_crc(p_922->l_comm_values[get_linear_local_id()], "p_922->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_922->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()], "p_922->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
