// -g 71,68,2 -l 1,17,2
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


// Seed: 2507948333

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint64_t  f0;
   int16_t  f1;
   volatile uint64_t  f2;
};

union U1 {
   struct S0  f0;
   uint64_t  f1;
};

union U2 {
   uint32_t  f0;
   volatile uint64_t  f1;
   int32_t  f2;
   volatile uint16_t  f3;
   int64_t  f4;
};

struct S3 {
    int32_t g_3;
    int32_t g_11;
    int16_t g_12;
    volatile int64_t g_13;
    uint8_t g_14;
    uint64_t g_89;
    union U1 g_93[10];
    int32_t g_95;
    struct S0 *g_96;
    uint8_t g_104;
    uint16_t g_113;
    uint16_t g_115[1];
    uint64_t g_125;
    volatile int8_t g_148[6];
    volatile int8_t *g_147;
    uint32_t g_149;
    int16_t *** volatile g_151;
    int16_t *** volatile g_152[4];
    int16_t *g_155;
    int16_t **g_154;
    int16_t *** volatile g_153;
    int32_t ** volatile g_159;
    volatile int8_t g_162;
    int64_t g_163;
    int32_t *g_168;
    int32_t **g_167[4];
    volatile union U2 g_180[5];
    volatile union U2 g_208;
    volatile uint32_t * volatile g_212;
    volatile uint32_t * volatile *g_211;
    int8_t g_228;
    uint8_t *g_255;
    uint8_t *g_256;
    volatile struct S0 g_310;
    uint32_t g_318;
    struct S0 g_373;
    int32_t *g_379;
    int32_t **g_378;
    int64_t g_386[5][8];
    union U2 g_389;
    uint64_t g_405;
    int32_t g_410;
    int32_t ** volatile g_413;
    uint8_t g_478;
    uint8_t **g_487;
    uint8_t **g_490;
    uint16_t *g_504;
    int32_t ** volatile g_540;
    int32_t ** volatile g_549;
    volatile union U2 g_555;
    int32_t g_558;
    int32_t ** volatile g_590[4][3][2];
    int32_t ** volatile g_600;
    struct S0 g_601;
    int32_t g_630[5][1];
    uint16_t g_636[9];
    uint64_t g_661;
    volatile union U1 g_672;
    int32_t ** volatile g_766;
    volatile union U2 ** volatile g_768;
    int32_t g_802;
    struct S0 g_804;
    uint32_t g_821;
    union U2 *g_824;
    union U2 **g_823;
    int32_t ** volatile g_855;
    volatile struct S0 g_863;
    uint8_t * volatile * volatile g_864[9][1];
    volatile struct S0 g_881;
    uint16_t **g_891;
    uint16_t ***g_890;
    int32_t ** volatile g_906;
    union U1 ** volatile g_912;
    union U1 *g_913;
    int8_t g_976;
    volatile union U2 g_987;
    uint64_t *g_991;
    uint64_t * volatile *g_990;
    union U2 ** volatile g_1005;
};


/* --- FORWARD DECLARATIONS --- */
uint8_t  func_1(struct S3 * p_1017);
int32_t  func_17(uint64_t  p_18, int64_t  p_19, struct S3 * p_1017);
int64_t  func_20(int32_t * p_21, uint16_t  p_22, int32_t * p_23, struct S3 * p_1017);
int32_t * func_24(int64_t  p_25, struct S3 * p_1017);
int8_t  func_34(int32_t  p_35, uint32_t  p_36, int32_t  p_37, int64_t  p_38, struct S3 * p_1017);
struct S0  func_43(uint32_t  p_44, int32_t  p_45, uint32_t  p_46, uint32_t  p_47, uint64_t  p_48, struct S3 * p_1017);
int64_t  func_53(uint64_t  p_54, uint32_t  p_55, uint32_t  p_56, int32_t * p_57, int16_t  p_58, struct S3 * p_1017);
uint16_t  func_65(int32_t * p_66, uint64_t  p_67, int64_t  p_68, int16_t  p_69, uint32_t  p_70, struct S3 * p_1017);
union U2  func_71(struct S0 * p_72, struct S3 * p_1017);
struct S0 * func_73(uint16_t  p_74, int32_t  p_75, struct S0 * p_76, struct S3 * p_1017);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1017->g_14 p_1017->g_3
 * writes: p_1017->g_14
 */
uint8_t  func_1(struct S3 * p_1017)
{ /* block id: 4 */
    int32_t *l_2 = &p_1017->g_3;
    int32_t *l_4 = &p_1017->g_3;
    int32_t *l_5 = &p_1017->g_3;
    int32_t *l_6 = &p_1017->g_3;
    int32_t *l_7 = &p_1017->g_3;
    int32_t *l_8 = &p_1017->g_3;
    int32_t *l_9 = &p_1017->g_3;
    int32_t *l_10[5];
    int32_t l_633[4] = {0x18AF60E4L,0x18AF60E4L,0x18AF60E4L,0x18AF60E4L};
    struct S0 **l_673[4][8] = {{&p_1017->g_96,&p_1017->g_96,&p_1017->g_96,&p_1017->g_96,(void*)0,&p_1017->g_96,&p_1017->g_96,&p_1017->g_96},{&p_1017->g_96,&p_1017->g_96,&p_1017->g_96,&p_1017->g_96,(void*)0,&p_1017->g_96,&p_1017->g_96,&p_1017->g_96},{&p_1017->g_96,&p_1017->g_96,&p_1017->g_96,&p_1017->g_96,(void*)0,&p_1017->g_96,&p_1017->g_96,&p_1017->g_96},{&p_1017->g_96,&p_1017->g_96,&p_1017->g_96,&p_1017->g_96,(void*)0,&p_1017->g_96,&p_1017->g_96,&p_1017->g_96}};
    int32_t l_698 = (-6L);
    uint8_t ***l_731 = &p_1017->g_487;
    int16_t l_734 = (-1L);
    int64_t l_747 = (-9L);
    int32_t ***l_753 = &p_1017->g_378;
    uint32_t l_756 = 0x35AB7C1FL;
    int32_t l_757 = 0x04D10D09L;
    int32_t l_758 = 0x6F214A4BL;
    int16_t l_759 = (-1L);
    int16_t **l_872 = (void*)0;
    uint64_t l_905[5][8] = {{0xF58A7F8F89E5F82EL,18446744073709551607UL,0xF392A97CEB9A5700L,18446744073709551607UL,18446744073709551613UL,18446744073709551613UL,18446744073709551607UL,0xF392A97CEB9A5700L},{0xF58A7F8F89E5F82EL,18446744073709551607UL,0xF392A97CEB9A5700L,18446744073709551607UL,18446744073709551613UL,18446744073709551613UL,18446744073709551607UL,0xF392A97CEB9A5700L},{0xF58A7F8F89E5F82EL,18446744073709551607UL,0xF392A97CEB9A5700L,18446744073709551607UL,18446744073709551613UL,18446744073709551613UL,18446744073709551607UL,0xF392A97CEB9A5700L},{0xF58A7F8F89E5F82EL,18446744073709551607UL,0xF392A97CEB9A5700L,18446744073709551607UL,18446744073709551613UL,18446744073709551613UL,18446744073709551607UL,0xF392A97CEB9A5700L},{0xF58A7F8F89E5F82EL,18446744073709551607UL,0xF392A97CEB9A5700L,18446744073709551607UL,18446744073709551613UL,18446744073709551613UL,18446744073709551607UL,0xF392A97CEB9A5700L}};
    uint64_t l_908 = 0x0A021B4BC97AA421L;
    int32_t l_955 = 3L;
    uint64_t **l_994 = (void*)0;
    uint8_t l_1011 = 0xEEL;
    uint8_t l_1016 = 0UL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_10[i] = (void*)0;
    p_1017->g_14--;
    return (*l_8);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_17(uint64_t  p_18, int64_t  p_19, struct S3 * p_1017)
{ /* block id: 315 */
    int32_t *l_665 = &p_1017->g_3;
    int32_t **l_666 = &l_665;
    (*l_666) = l_665;
    return p_18;
}


/* ------------------------------------------ */
/* 
 * reads : p_1017->g_389.f0 p_1017->g_661 p_1017->g_14 p_1017->g_540 p_1017->g_168 p_1017->g_95 p_1017->g_3 p_1017->g_155 p_1017->g_12 p_1017->g_154 p_1017->g_256 p_1017->g_600
 * writes: p_1017->g_410 p_1017->g_661 p_1017->g_14 p_1017->g_12 p_1017->g_104 p_1017->g_168
 */
int64_t  func_20(int32_t * p_21, uint16_t  p_22, int32_t * p_23, struct S3 * p_1017)
{ /* block id: 307 */
    int32_t *l_648 = &p_1017->g_95;
    int32_t *l_649 = &p_1017->g_410;
    int32_t *l_650 = &p_1017->g_95;
    int32_t *l_651 = &p_1017->g_410;
    int32_t *l_652 = &p_1017->g_410;
    int32_t *l_653 = &p_1017->g_410;
    int32_t *l_654 = &p_1017->g_95;
    int32_t *l_655 = (void*)0;
    int32_t *l_656[3];
    int8_t l_657 = 0x14L;
    uint32_t l_658 = 0xA12724C6L;
    int32_t **l_662[5][6][8] = {{{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648}},{{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648}},{{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648}},{{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648}},{{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648},{&l_652,&l_651,&l_650,&l_653,&p_1017->g_168,&l_655,&l_656[2],&l_648}}};
    int32_t *l_663 = &p_1017->g_95;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_656[i] = &p_1017->g_95;
    l_658--;
    (*l_651) = 0x364BDF6EL;
    l_663 = ((*p_1017->g_600) = func_24((p_1017->g_661 ^= p_1017->g_389.f0), p_1017));
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1017->g_14 p_1017->g_540 p_1017->g_168 p_1017->g_95 p_1017->g_3 p_1017->g_155 p_1017->g_12 p_1017->g_154 p_1017->g_256 p_1017->g_600
 * writes: p_1017->g_14 p_1017->g_12 p_1017->g_104
 */
int32_t * func_24(int64_t  p_25, struct S3 * p_1017)
{ /* block id: 292 */
    int32_t *l_640 = &p_1017->g_95;
    int32_t l_645 = (-1L);
    int32_t l_646 = 6L;
    for (p_1017->g_14 = 0; (p_1017->g_14 <= 5); ++p_1017->g_14)
    { /* block id: 295 */
        int32_t l_643 = 0x215ABE25L;
        int64_t l_644[2];
        int32_t *l_647 = &l_645;
        int i;
        for (i = 0; i < 2; i++)
            l_644[i] = (-10L);
        l_640 = (void*)0;
        if ((**p_1017->g_540))
            break;
        l_646 = (l_645 |= (safe_lshift_func_uint8_t_u_u(((*p_1017->g_256) = ((-10L) < ((**p_1017->g_154) = (*p_1017->g_155)))), (l_644[1] = l_643))));
        return (*p_1017->g_540);
    }
    l_640 = (*p_1017->g_600);
    return (*p_1017->g_540);
}


/* ------------------------------------------ */
/* 
 * reads : p_1017->g_379 p_1017->g_11 p_1017->g_104 p_1017->g_558 p_1017->g_600 p_1017->g_601 p_1017->g_96 p_1017->g_168 p_1017->g_95 p_1017->g_93.f0 p_1017->g_389.f0 p_1017->g_228 p_1017->g_487 p_1017->g_255 p_1017->g_504 p_1017->g_113
 * writes: p_1017->g_163 p_1017->g_168 p_1017->g_93.f0 p_1017->g_601 p_1017->g_630 p_1017->g_228 p_1017->g_95
 */
int8_t  func_34(int32_t  p_35, uint32_t  p_36, int32_t  p_37, int64_t  p_38, struct S3 * p_1017)
{ /* block id: 7 */
    int16_t l_598[1];
    uint32_t *l_611 = (void*)0;
    int32_t l_632 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_598[i] = (-7L);
    for (p_35 = 0; (p_35 < (-8)); p_35--)
    { /* block id: 10 */
        int64_t *l_597 = &p_1017->g_163;
        struct S0 *l_602 = &p_1017->g_601;
        uint32_t **l_612 = (void*)0;
        uint32_t *l_614 = &p_1017->g_149;
        uint32_t **l_613 = &l_614;
        int32_t l_625 = 0x13D5D782L;
        uint32_t l_628 = 0xF7776368L;
        int32_t *l_629 = &p_1017->g_630[3][0];
        int8_t *l_631[2][9] = {{&p_1017->g_228,&p_1017->g_228,(void*)0,&p_1017->g_228,&p_1017->g_228,&p_1017->g_228,(void*)0,&p_1017->g_228,&p_1017->g_228},{&p_1017->g_228,&p_1017->g_228,(void*)0,&p_1017->g_228,&p_1017->g_228,&p_1017->g_228,(void*)0,&p_1017->g_228,&p_1017->g_228}};
        int i, j;
        (*p_1017->g_96) = func_43((safe_add_func_uint8_t_u_u((safe_div_func_int64_t_s_s(func_53(p_36, p_35, p_38, &p_1017->g_3, (&p_1017->g_3 != &p_1017->g_3), p_1017), (l_598[0] = ((*l_597) = (safe_lshift_func_uint8_t_u_s(0xC1L, 6)))))), 0x0CL)), (*p_1017->g_379), p_1017->g_104, p_38, p_1017->g_558, p_1017);
        if ((**p_1017->g_600))
            continue;
        (*l_602) = (*p_1017->g_96);
        l_632 = ((*p_1017->g_168) = (safe_sub_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u(((((!((p_1017->g_228 |= (safe_div_func_int64_t_s_s((safe_div_func_int16_t_s_s((l_611 != ((*l_613) = &p_1017->g_149)), p_36)), (safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(l_598[0], (~(((*l_629) = (safe_sub_func_uint32_t_u_u(p_36, ((((safe_sub_func_uint8_t_u_u((l_625 <= 9L), (l_628 = (safe_mul_func_int16_t_s_s(((18446744073709551615UL & p_1017->g_389.f0) || 6UL), l_598[0]))))) > p_35) , p_1017->g_95) <= p_35)))) , l_598[0])))), p_37)), (-2L)))))) && (**p_1017->g_487))) <= l_598[0]) | (*p_1017->g_255)) || 0L), l_625)) == (*p_1017->g_504)) , 0x85C6730D8A3D08F8L) > p_35), (*p_1017->g_504))));
    }
    return l_632;
}


/* ------------------------------------------ */
/* 
 * reads : p_1017->g_600 p_1017->g_601
 * writes: p_1017->g_168
 */
struct S0  func_43(uint32_t  p_44, int32_t  p_45, uint32_t  p_46, uint32_t  p_47, uint64_t  p_48, struct S3 * p_1017)
{ /* block id: 277 */
    int32_t *l_599 = &p_1017->g_95;
    (*p_1017->g_600) = l_599;
    return p_1017->g_601;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_53(uint64_t  p_54, uint32_t  p_55, uint32_t  p_56, int32_t * p_57, int16_t  p_58, struct S3 * p_1017)
{ /* block id: 11 */
    int32_t l_84 = 1L;
    int32_t l_86 = 0x02D15FFEL;
    struct S0 *l_91 = (void*)0;
    uint16_t l_391 = 0x926AL;
    int64_t l_446[10];
    uint8_t **l_488[8];
    int32_t l_524 = 0L;
    int32_t l_526 = 0x30BA164EL;
    int32_t l_532[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t *l_537[10] = {&l_84,&p_1017->g_410,&l_84,&p_1017->g_410,&l_84,&l_84,&p_1017->g_410,&l_84,&p_1017->g_410,&l_84};
    uint32_t l_550 = 0xD8FE94F1L;
    uint64_t l_592 = 0xDE932B9E6A8B8DCCL;
    int i;
    for (i = 0; i < 10; i++)
        l_446[i] = 1L;
    for (i = 0; i < 8; i++)
        l_488[i] = (void*)0;
    for (p_56 = 0; (p_56 >= 52); p_56 = safe_add_func_uint32_t_u_u(p_56, 1))
    { /* block id: 14 */
        uint16_t l_79 = 0x5E7CL;
        int8_t *l_85 = (void*)0;
        uint64_t *l_87 = (void*)0;
        uint64_t *l_88 = &p_1017->g_89;
        int32_t l_90 = 0x2BA4A7E2L;
        uint64_t *l_390 = &p_1017->g_93[9].f1;
        struct S0 *l_411 = &p_1017->g_373;
        int32_t **l_412 = (void*)0;
        int32_t l_452 = (-1L);
        int32_t l_453 = 0x569C1DC5L;
        int32_t l_454[8];
        uint32_t l_553[4] = {1UL,1UL,1UL,1UL};
        uint16_t l_554[10] = {0x058CL,0UL,0x1906L,0UL,0x058CL,0x058CL,0UL,0x1906L,0UL,0x058CL};
        uint8_t **l_574 = &p_1017->g_255;
        int i;
        for (i = 0; i < 8; i++)
            l_454[i] = 0x73944D38L;
        (1 + 1);
    }
    l_537[1] = &l_532[3];
    --l_592;
    return p_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_1017->g_147 p_1017->g_148 p_1017->g_95 p_1017->g_410 p_1017->g_115
 * writes: p_1017->g_89 p_1017->g_125 p_1017->g_95 p_1017->g_386 p_1017->g_410
 */
uint16_t  func_65(int32_t * p_66, uint64_t  p_67, int64_t  p_68, int16_t  p_69, uint32_t  p_70, struct S3 * p_1017)
{ /* block id: 166 */
    int16_t **l_394 = &p_1017->g_155;
    uint64_t *l_397 = &p_1017->g_89;
    uint64_t *l_400 = &p_1017->g_125;
    int32_t l_403 = 3L;
    uint64_t *l_404 = &p_1017->g_405;
    int32_t *l_406 = &p_1017->g_95;
    int64_t *l_407 = &p_1017->g_386[2][5];
    int64_t *l_408[1];
    int32_t *l_409 = &p_1017->g_410;
    int i;
    for (i = 0; i < 1; i++)
        l_408[i] = &p_1017->g_163;
    (*l_409) &= (safe_sub_func_int64_t_s_s(((l_394 == ((safe_mul_func_int8_t_s_s((((~(((*l_397) = p_70) > ((*l_400) = (safe_rshift_func_int16_t_s_s(0x1CD3L, 1))))) == ((p_68 |= ((*l_407) = (safe_add_func_uint32_t_u_u(l_403, (((l_403 , (l_397 != (void*)0)) < 0xD8L) , ((*l_406) = ((void*)0 != l_404))))))) ^ p_69)) , p_69), (*p_1017->g_147))) , (void*)0)) , (*l_406)), p_67));
    (*l_406) = 5L;
    return p_1017->g_115[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1017->g_104 p_1017->g_89 p_1017->g_96 p_1017->g_11 p_1017->g_95 p_1017->g_93.f0.f0 p_1017->g_13 p_1017->g_113 p_1017->g_115 p_1017->g_93.f0.f1 p_1017->g_3 p_1017->g_14 p_1017->g_125 p_1017->g_12 p_1017->g_147 p_1017->g_149 p_1017->g_153 p_1017->g_148 p_1017->g_93 p_1017->g_93.f0 p_1017->g_167 p_1017->g_155 p_1017->g_212 p_1017->g_208.f0 p_1017->g_373.f1 p_1017->g_386 p_1017->g_318 p_1017->g_389
 * writes: p_1017->g_113 p_1017->g_95 p_1017->g_115 p_1017->g_125 p_1017->g_12 p_1017->g_93.f0.f1 p_1017->g_149 p_1017->g_154 p_1017->g_89 p_1017->g_104
 */
union U2  func_71(struct S0 * p_72, struct S3 * p_1017)
{ /* block id: 21 */
    uint16_t l_99 = 0x3B6BL;
    struct S0 *l_109 = &p_1017->g_93[9].f0;
    uint16_t *l_112 = &p_1017->g_113;
    int32_t *l_114[5];
    uint16_t l_116 = 65535UL;
    int8_t *l_123 = (void*)0;
    uint64_t *l_124 = &p_1017->g_125;
    uint32_t l_126 = 7UL;
    uint32_t *l_127 = &l_126;
    uint16_t l_131 = 0xB3A0L;
    uint32_t **l_213[7][2][7] = {{{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127}},{{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127}},{{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127}},{{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127}},{{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127}},{{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127}},{{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127,&l_127,&l_127,&l_127}}};
    uint32_t l_230 = 0x766C8836L;
    uint8_t *l_253 = (void*)0;
    int32_t l_301 = 0x5DD031ECL;
    int64_t l_362 = 0x7AD1099014910825L;
    int32_t *l_375 = &p_1017->g_11;
    int32_t **l_374 = &l_375;
    int16_t **l_385 = &p_1017->g_155;
    int64_t l_388 = 3L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_114[i] = &p_1017->g_95;
    p_1017->g_115[0] = (!(p_1017->g_95 = ((safe_mul_func_uint8_t_u_u((l_99 < ((*l_112) ^= (((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((0L & ((p_1017->g_104 >= p_1017->g_89) || (~((l_99 ^ (((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((p_1017->g_96 == l_109), p_1017->g_89)), (safe_mul_func_uint8_t_u_u(252UL, p_1017->g_11)))) && 0x393649196E2F7064L) == l_99)) , p_1017->g_95)))), 6UL)), p_1017->g_93[9].f0.f0)) && p_1017->g_13) != 0x36811180L))), 0x54L)) || (-4L))));
    ++l_116;
    if ((p_1017->g_115[0] < (((p_1017->g_93[9].f0.f1 | (safe_div_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((+p_1017->g_13), p_1017->g_3)) < ((*l_127) = (((((&l_116 == &l_99) , ((l_114[3] != &p_1017->g_3) , (((*l_124) &= ((((((((((l_123 != l_123) & p_1017->g_104) > p_1017->g_14) && 0x28F31C0784580679L) ^ 0x5CL) , p_1017->g_89) != p_1017->g_104) , p_1017->g_115[0]) , p_1017->g_113) && 1UL)) || 0x7E3AE0F9FDB8F82DL))) >= l_126) , p_1017->g_11) == p_1017->g_93[9].f0.f1))) , 247UL), p_1017->g_89))) , p_1017->g_104) , p_1017->g_93[9].f0.f1)))
    { /* block id: 28 */
        uint16_t l_128 = 0xC4CFL;
        struct S0 **l_134 = &l_109;
        int16_t *l_145 = &p_1017->g_12;
        int16_t *l_146[10][1][4] = {{{(void*)0,&p_1017->g_93[9].f0.f1,(void*)0,&p_1017->g_93[9].f0.f1}},{{(void*)0,&p_1017->g_93[9].f0.f1,(void*)0,&p_1017->g_93[9].f0.f1}},{{(void*)0,&p_1017->g_93[9].f0.f1,(void*)0,&p_1017->g_93[9].f0.f1}},{{(void*)0,&p_1017->g_93[9].f0.f1,(void*)0,&p_1017->g_93[9].f0.f1}},{{(void*)0,&p_1017->g_93[9].f0.f1,(void*)0,&p_1017->g_93[9].f0.f1}},{{(void*)0,&p_1017->g_93[9].f0.f1,(void*)0,&p_1017->g_93[9].f0.f1}},{{(void*)0,&p_1017->g_93[9].f0.f1,(void*)0,&p_1017->g_93[9].f0.f1}},{{(void*)0,&p_1017->g_93[9].f0.f1,(void*)0,&p_1017->g_93[9].f0.f1}},{{(void*)0,&p_1017->g_93[9].f0.f1,(void*)0,&p_1017->g_93[9].f0.f1}},{{(void*)0,&p_1017->g_93[9].f0.f1,(void*)0,&p_1017->g_93[9].f0.f1}}};
        int32_t l_150 = 0x0A0F7388L;
        int i, j, k;
        l_128 = 0L;
        l_150 ^= (safe_rshift_func_int16_t_s_s(((l_128 | ((p_1017->g_12 , l_131) && (safe_sub_func_uint64_t_u_u(p_1017->g_95, ((((*l_134) = p_1017->g_96) == (void*)0) || (l_128 || (p_1017->g_149 |= (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_123 == ((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((p_1017->g_93[9].f0.f1 = ((*l_145) = (safe_mul_func_uint16_t_u_u(l_128, 0x3317L)))), l_128)), p_1017->g_113)) , p_1017->g_147)), (-9L))), p_1017->g_89))))))))) , p_1017->g_125), p_1017->g_104));
        (*p_1017->g_153) = &l_146[1][0][2];
    }
    else
    { /* block id: 36 */
        int32_t l_161 = (-1L);
        uint32_t *l_183[7] = {&p_1017->g_149,&p_1017->g_149,&p_1017->g_149,&p_1017->g_149,&p_1017->g_149,&p_1017->g_149,&p_1017->g_149};
        int32_t l_197 = 0x55C39C69L;
        int32_t l_234 = 3L;
        int32_t l_235 = 0x61ADDDA1L;
        int32_t l_238 = 0x0974CCA5L;
        int32_t l_239 = 8L;
        int32_t l_240 = 0x7DB97C64L;
        int32_t l_242 = (-1L);
        int32_t l_243 = 0x7FCC7442L;
        int64_t l_250[3][3][8] = {{{0x5662893A887020AEL,1L,0x3A36C04856745701L,2L,0x7EB27B658D47F543L,2L,0x3A36C04856745701L,1L},{0x5662893A887020AEL,1L,0x3A36C04856745701L,2L,0x7EB27B658D47F543L,2L,0x3A36C04856745701L,1L},{0x5662893A887020AEL,1L,0x3A36C04856745701L,2L,0x7EB27B658D47F543L,2L,0x3A36C04856745701L,1L}},{{0x5662893A887020AEL,1L,0x3A36C04856745701L,2L,0x7EB27B658D47F543L,2L,0x3A36C04856745701L,1L},{0x5662893A887020AEL,1L,0x3A36C04856745701L,2L,0x7EB27B658D47F543L,2L,0x3A36C04856745701L,1L},{0x5662893A887020AEL,1L,0x3A36C04856745701L,2L,0x7EB27B658D47F543L,2L,0x3A36C04856745701L,1L}},{{0x5662893A887020AEL,1L,0x3A36C04856745701L,2L,0x7EB27B658D47F543L,2L,0x3A36C04856745701L,1L},{0x5662893A887020AEL,1L,0x3A36C04856745701L,2L,0x7EB27B658D47F543L,2L,0x3A36C04856745701L,1L},{0x5662893A887020AEL,1L,0x3A36C04856745701L,2L,0x7EB27B658D47F543L,2L,0x3A36C04856745701L,1L}}};
        int32_t *l_259 = &l_242;
        int16_t **l_280 = &p_1017->g_155;
        int32_t l_303 = 0L;
        uint16_t l_307 = 0UL;
        int32_t l_365 = 0x797873ECL;
        uint64_t **l_369 = &l_124;
        int i, j, k;
        for (l_99 = 0; (l_99 <= 3); l_99 += 1)
        { /* block id: 39 */
            uint32_t l_156 = 4294967295UL;
            uint8_t l_164 = 0x1BL;
            int32_t l_171[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            uint32_t *l_196 = &p_1017->g_149;
            uint8_t l_332 = 0x3EL;
            int32_t l_342 = 0x7C4655FFL;
            int32_t **l_377[4][7][6] = {{{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375}},{{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375}},{{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375}},{{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375}}};
            int i, j, k;
            for (l_126 = 1; (l_126 <= 9); l_126 += 1)
            { /* block id: 42 */
                int32_t **l_160 = &l_114[3];
                int32_t ***l_169 = &l_160;
                int32_t *l_170[7][4] = {{&p_1017->g_11,&p_1017->g_11,&p_1017->g_11,&p_1017->g_11},{&p_1017->g_11,&p_1017->g_11,&p_1017->g_11,&p_1017->g_11},{&p_1017->g_11,&p_1017->g_11,&p_1017->g_11,&p_1017->g_11},{&p_1017->g_11,&p_1017->g_11,&p_1017->g_11,&p_1017->g_11},{&p_1017->g_11,&p_1017->g_11,&p_1017->g_11,&p_1017->g_11},{&p_1017->g_11,&p_1017->g_11,&p_1017->g_11,&p_1017->g_11},{&p_1017->g_11,&p_1017->g_11,&p_1017->g_11,&p_1017->g_11}};
                int32_t l_176 = (-1L);
                int i, j;
                l_156--;
                (*l_160) = l_127;
                for (p_1017->g_89 = 0; (p_1017->g_89 <= 9); p_1017->g_89 += 1)
                { /* block id: 47 */
                    for (p_1017->g_125 = 0; (p_1017->g_125 <= 3); p_1017->g_125 += 1)
                    { /* block id: 50 */
                        int i;
                        l_161 = 0x764F569BL;
                        p_72 = (void*)0;
                        if (p_1017->g_148[(p_1017->g_125 + 1)])
                            continue;
                    }
                    --l_164;
                    (*l_160) = l_114[0];
                }
                l_176 = ((l_171[6] = (((p_1017->g_93[l_126] , p_1017->g_93[l_126].f0) , (((*l_169) = p_1017->g_167[2]) != (void*)0)) >= 0UL)) , ((((*p_1017->g_155) ^= ((p_1017->g_115[0] = p_1017->g_148[l_99]) ^ ((*l_112) = (safe_sub_func_uint8_t_u_u((p_1017->g_11 <= (!l_161)), (safe_div_func_uint32_t_u_u((((l_171[8] &= l_164) & p_1017->g_125) , 1UL), 4294967295UL))))))) | 0UL) ^ l_156));
            }
        }
        (*l_259) = (safe_mul_func_uint16_t_u_u(0xA8EDL, 7UL));
        (*l_259) = (((void*)0 == &l_250[1][0][1]) != (*p_1017->g_212));
        for (p_1017->g_104 = 1; (p_1017->g_104 <= 4); p_1017->g_104 += 1)
        { /* block id: 158 */
            int32_t l_387[8] = {0x5EFFD051L,0x5EFFD051L,0x5EFFD051L,0x5EFFD051L,0x5EFFD051L,0x5EFFD051L,0x5EFFD051L,0x5EFFD051L};
            int i;
            (*l_259) |= ((void*)0 == l_114[p_1017->g_104]);
            (*l_259) = ((safe_add_func_int64_t_s_s((l_385 != l_280), (((p_1017->g_11 , (((*l_259) != ((*l_259) ^ (((p_1017->g_373.f1 < p_1017->g_93[9].f0.f0) || p_1017->g_3) < ((p_1017->g_386[2][5] >= p_1017->g_386[2][5]) <= l_387[2])))) == p_1017->g_318)) | 7UL) > 0x4CDFL))) != (*l_259));
        }
    }
    l_388 |= (-2L);
    return p_1017->g_389;
}


/* ------------------------------------------ */
/* 
 * reads : p_1017->g_93 p_1017->g_95 p_1017->g_96
 * writes: p_1017->g_95
 */
struct S0 * func_73(uint16_t  p_74, int32_t  p_75, struct S0 * p_76, struct S3 * p_1017)
{ /* block id: 18 */
    struct S0 *l_92 = (void*)0;
    int32_t *l_94 = &p_1017->g_95;
    (*l_94) ^= (l_92 == (p_1017->g_93[9] , l_92));
    return p_1017->g_96;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S3 c_1018;
    struct S3* p_1017 = &c_1018;
    struct S3 c_1019 = {
        0x2F14C90DL, // p_1017->g_3
        0x7D2038E8L, // p_1017->g_11
        0x589FL, // p_1017->g_12
        0x123D4A1CF0415773L, // p_1017->g_13
        0xF7L, // p_1017->g_14
        0x70C497A14F829999L, // p_1017->g_89
        {{{0x72D3BEAFE2AE0ADFL,0x26F4L,5UL}},{{0x72D3BEAFE2AE0ADFL,0x26F4L,5UL}},{{0x72D3BEAFE2AE0ADFL,0x26F4L,5UL}},{{0x72D3BEAFE2AE0ADFL,0x26F4L,5UL}},{{0x72D3BEAFE2AE0ADFL,0x26F4L,5UL}},{{0x72D3BEAFE2AE0ADFL,0x26F4L,5UL}},{{0x72D3BEAFE2AE0ADFL,0x26F4L,5UL}},{{0x72D3BEAFE2AE0ADFL,0x26F4L,5UL}},{{0x72D3BEAFE2AE0ADFL,0x26F4L,5UL}},{{0x72D3BEAFE2AE0ADFL,0x26F4L,5UL}}}, // p_1017->g_93
        (-1L), // p_1017->g_95
        &p_1017->g_93[9].f0, // p_1017->g_96
        0x5DL, // p_1017->g_104
        0UL, // p_1017->g_113
        {0x3C6BL}, // p_1017->g_115
        0xA12FBA81857D46BBL, // p_1017->g_125
        {1L,1L,1L,1L,1L,1L}, // p_1017->g_148
        &p_1017->g_148[1], // p_1017->g_147
        0x8F8D5673L, // p_1017->g_149
        (void*)0, // p_1017->g_151
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1017->g_152
        &p_1017->g_12, // p_1017->g_155
        &p_1017->g_155, // p_1017->g_154
        &p_1017->g_154, // p_1017->g_153
        (void*)0, // p_1017->g_159
        (-7L), // p_1017->g_162
        0x5C3078386D6A5671L, // p_1017->g_163
        &p_1017->g_3, // p_1017->g_168
        {&p_1017->g_168,&p_1017->g_168,&p_1017->g_168,&p_1017->g_168}, // p_1017->g_167
        {{9UL},{9UL},{9UL},{9UL},{9UL}}, // p_1017->g_180
        {0x0ECF60C1L}, // p_1017->g_208
        &p_1017->g_208.f0, // p_1017->g_212
        &p_1017->g_212, // p_1017->g_211
        0L, // p_1017->g_228
        &p_1017->g_104, // p_1017->g_255
        &p_1017->g_104, // p_1017->g_256
        {0x0D7356911E72491DL,2L,1UL}, // p_1017->g_310
        4294967288UL, // p_1017->g_318
        {18446744073709551611UL,0x4DF7L,0UL}, // p_1017->g_373
        &p_1017->g_11, // p_1017->g_379
        &p_1017->g_379, // p_1017->g_378
        {{1L,0x58226C8784A21CFFL,1L,1L,0x58226C8784A21CFFL,1L,1L,0x58226C8784A21CFFL},{1L,0x58226C8784A21CFFL,1L,1L,0x58226C8784A21CFFL,1L,1L,0x58226C8784A21CFFL},{1L,0x58226C8784A21CFFL,1L,1L,0x58226C8784A21CFFL,1L,1L,0x58226C8784A21CFFL},{1L,0x58226C8784A21CFFL,1L,1L,0x58226C8784A21CFFL,1L,1L,0x58226C8784A21CFFL},{1L,0x58226C8784A21CFFL,1L,1L,0x58226C8784A21CFFL,1L,1L,0x58226C8784A21CFFL}}, // p_1017->g_386
        {0UL}, // p_1017->g_389
        18446744073709551612UL, // p_1017->g_405
        0x46CE3A1DL, // p_1017->g_410
        &p_1017->g_168, // p_1017->g_413
        0x25L, // p_1017->g_478
        &p_1017->g_255, // p_1017->g_487
        (void*)0, // p_1017->g_490
        &p_1017->g_113, // p_1017->g_504
        &p_1017->g_168, // p_1017->g_540
        &p_1017->g_168, // p_1017->g_549
        {1UL}, // p_1017->g_555
        (-6L), // p_1017->g_558
        {{{&p_1017->g_168,&p_1017->g_168},{&p_1017->g_168,&p_1017->g_168},{&p_1017->g_168,&p_1017->g_168}},{{&p_1017->g_168,&p_1017->g_168},{&p_1017->g_168,&p_1017->g_168},{&p_1017->g_168,&p_1017->g_168}},{{&p_1017->g_168,&p_1017->g_168},{&p_1017->g_168,&p_1017->g_168},{&p_1017->g_168,&p_1017->g_168}},{{&p_1017->g_168,&p_1017->g_168},{&p_1017->g_168,&p_1017->g_168},{&p_1017->g_168,&p_1017->g_168}}}, // p_1017->g_590
        &p_1017->g_168, // p_1017->g_600
        {1UL,0x3C09L,18446744073709551615UL}, // p_1017->g_601
        {{0L},{0L},{0L},{0L},{0L}}, // p_1017->g_630
        {0xA700L,0xA700L,0xA700L,0xA700L,0xA700L,0xA700L,0xA700L,0xA700L,0xA700L}, // p_1017->g_636
        0x6885B75D4052C2EEL, // p_1017->g_661
        {{0x80DF6B7CDED12F01L,5L,0x9A7A2D62BFD81E23L}}, // p_1017->g_672
        &p_1017->g_168, // p_1017->g_766
        (void*)0, // p_1017->g_768
        (-9L), // p_1017->g_802
        {0x9CFCCFB3C1BBDBF9L,0x5820L,0x672FFFB1933743EEL}, // p_1017->g_804
        4294967295UL, // p_1017->g_821
        &p_1017->g_389, // p_1017->g_824
        &p_1017->g_824, // p_1017->g_823
        &p_1017->g_168, // p_1017->g_855
        {8UL,0x63DDL,18446744073709551615UL}, // p_1017->g_863
        {{&p_1017->g_255},{&p_1017->g_255},{&p_1017->g_255},{&p_1017->g_255},{&p_1017->g_255},{&p_1017->g_255},{&p_1017->g_255},{&p_1017->g_255},{&p_1017->g_255}}, // p_1017->g_864
        {6UL,0x6A6DL,0xF461C07B47D043F4L}, // p_1017->g_881
        (void*)0, // p_1017->g_891
        &p_1017->g_891, // p_1017->g_890
        &p_1017->g_168, // p_1017->g_906
        (void*)0, // p_1017->g_912
        &p_1017->g_93[9], // p_1017->g_913
        4L, // p_1017->g_976
        {0x1EBC0140L}, // p_1017->g_987
        (void*)0, // p_1017->g_991
        &p_1017->g_991, // p_1017->g_990
        &p_1017->g_824, // p_1017->g_1005
    };
    c_1018 = c_1019;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1017);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1017->g_3, "p_1017->g_3", print_hash_value);
    transparent_crc(p_1017->g_11, "p_1017->g_11", print_hash_value);
    transparent_crc(p_1017->g_12, "p_1017->g_12", print_hash_value);
    transparent_crc(p_1017->g_13, "p_1017->g_13", print_hash_value);
    transparent_crc(p_1017->g_14, "p_1017->g_14", print_hash_value);
    transparent_crc(p_1017->g_89, "p_1017->g_89", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1017->g_93[i].f0.f0, "p_1017->g_93[i].f0.f0", print_hash_value);
        transparent_crc(p_1017->g_93[i].f0.f1, "p_1017->g_93[i].f0.f1", print_hash_value);
        transparent_crc(p_1017->g_93[i].f0.f2, "p_1017->g_93[i].f0.f2", print_hash_value);

    }
    transparent_crc(p_1017->g_95, "p_1017->g_95", print_hash_value);
    transparent_crc(p_1017->g_104, "p_1017->g_104", print_hash_value);
    transparent_crc(p_1017->g_113, "p_1017->g_113", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1017->g_115[i], "p_1017->g_115[i]", print_hash_value);

    }
    transparent_crc(p_1017->g_125, "p_1017->g_125", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1017->g_148[i], "p_1017->g_148[i]", print_hash_value);

    }
    transparent_crc(p_1017->g_149, "p_1017->g_149", print_hash_value);
    transparent_crc(p_1017->g_162, "p_1017->g_162", print_hash_value);
    transparent_crc(p_1017->g_163, "p_1017->g_163", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1017->g_180[i].f0, "p_1017->g_180[i].f0", print_hash_value);

    }
    transparent_crc(p_1017->g_208.f0, "p_1017->g_208.f0", print_hash_value);
    transparent_crc(p_1017->g_228, "p_1017->g_228", print_hash_value);
    transparent_crc(p_1017->g_310.f0, "p_1017->g_310.f0", print_hash_value);
    transparent_crc(p_1017->g_310.f1, "p_1017->g_310.f1", print_hash_value);
    transparent_crc(p_1017->g_310.f2, "p_1017->g_310.f2", print_hash_value);
    transparent_crc(p_1017->g_318, "p_1017->g_318", print_hash_value);
    transparent_crc(p_1017->g_373.f0, "p_1017->g_373.f0", print_hash_value);
    transparent_crc(p_1017->g_373.f1, "p_1017->g_373.f1", print_hash_value);
    transparent_crc(p_1017->g_373.f2, "p_1017->g_373.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1017->g_386[i][j], "p_1017->g_386[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1017->g_389.f0, "p_1017->g_389.f0", print_hash_value);
    transparent_crc(p_1017->g_405, "p_1017->g_405", print_hash_value);
    transparent_crc(p_1017->g_410, "p_1017->g_410", print_hash_value);
    transparent_crc(p_1017->g_478, "p_1017->g_478", print_hash_value);
    transparent_crc(p_1017->g_555.f0, "p_1017->g_555.f0", print_hash_value);
    transparent_crc(p_1017->g_558, "p_1017->g_558", print_hash_value);
    transparent_crc(p_1017->g_601.f0, "p_1017->g_601.f0", print_hash_value);
    transparent_crc(p_1017->g_601.f1, "p_1017->g_601.f1", print_hash_value);
    transparent_crc(p_1017->g_601.f2, "p_1017->g_601.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1017->g_630[i][j], "p_1017->g_630[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1017->g_636[i], "p_1017->g_636[i]", print_hash_value);

    }
    transparent_crc(p_1017->g_661, "p_1017->g_661", print_hash_value);
    transparent_crc(p_1017->g_672.f0.f0, "p_1017->g_672.f0.f0", print_hash_value);
    transparent_crc(p_1017->g_672.f0.f1, "p_1017->g_672.f0.f1", print_hash_value);
    transparent_crc(p_1017->g_672.f0.f2, "p_1017->g_672.f0.f2", print_hash_value);
    transparent_crc(p_1017->g_802, "p_1017->g_802", print_hash_value);
    transparent_crc(p_1017->g_804.f0, "p_1017->g_804.f0", print_hash_value);
    transparent_crc(p_1017->g_804.f1, "p_1017->g_804.f1", print_hash_value);
    transparent_crc(p_1017->g_804.f2, "p_1017->g_804.f2", print_hash_value);
    transparent_crc(p_1017->g_821, "p_1017->g_821", print_hash_value);
    transparent_crc(p_1017->g_863.f0, "p_1017->g_863.f0", print_hash_value);
    transparent_crc(p_1017->g_863.f1, "p_1017->g_863.f1", print_hash_value);
    transparent_crc(p_1017->g_863.f2, "p_1017->g_863.f2", print_hash_value);
    transparent_crc(p_1017->g_881.f0, "p_1017->g_881.f0", print_hash_value);
    transparent_crc(p_1017->g_881.f1, "p_1017->g_881.f1", print_hash_value);
    transparent_crc(p_1017->g_881.f2, "p_1017->g_881.f2", print_hash_value);
    transparent_crc(p_1017->g_976, "p_1017->g_976", print_hash_value);
    transparent_crc(p_1017->g_987.f0, "p_1017->g_987.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
