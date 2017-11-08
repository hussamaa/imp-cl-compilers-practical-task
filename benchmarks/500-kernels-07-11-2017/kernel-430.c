// -g 71,21,5 -l 71,1,1
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


// Seed: 1572750432

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint8_t  f1;
   int32_t  f2;
   uint32_t  f3;
   int32_t  f4;
   uint16_t  f5;
   uint32_t  f6;
   uint64_t  f7;
};

union U1 {
   int8_t  f0;
   int8_t  f1;
   volatile int64_t  f2;
   struct S0  f3;
   volatile uint32_t  f4;
};

struct S2 {
    int16_t g_12[10];
    int32_t g_14;
    int32_t g_15;
    uint32_t g_16;
    volatile int8_t g_21;
    volatile uint32_t g_22;
    int32_t ***g_31;
    uint64_t g_35;
    int32_t *g_70[7];
    int32_t **g_69[8][10];
    struct S0 g_92;
    struct S0 *g_91;
    volatile int32_t g_124;
    volatile int32_t * volatile g_123;
    volatile int32_t g_126;
    volatile int32_t * volatile g_125;
    volatile int32_t g_128;
    volatile int32_t * volatile g_127;
    volatile int32_t g_130;
    volatile int32_t *g_129;
    volatile int32_t * volatile *g_122[10][10][1];
    volatile int32_t * volatile **g_121;
    volatile int32_t * volatile ***g_120;
    int8_t g_197;
    uint16_t *g_206;
    int16_t g_232;
    int16_t g_236;
    int64_t g_238;
    int32_t g_285[4][9];
    int64_t g_307;
    uint16_t g_321;
    volatile uint8_t g_366;
    volatile uint8_t g_367[9];
    volatile uint8_t g_368[7][7][3];
    volatile uint8_t g_369;
    volatile uint8_t * volatile g_365[7][10];
    volatile uint8_t * volatile *g_364;
    uint8_t *g_379;
    struct S0 g_381;
    uint32_t g_424;
    int32_t * volatile *g_456[2][2][10];
    int32_t * volatile **g_455[8];
    int32_t * volatile ***g_454;
    int32_t * volatile ****g_453[6];
    int32_t * volatile *****g_452;
    volatile uint32_t g_483;
    volatile uint32_t *g_482;
    volatile uint32_t **g_481;
    int64_t *g_492[7];
    int64_t **g_491[9][10];
    uint16_t g_563[5][7][2];
    int32_t ****g_620;
    uint32_t g_676;
    int16_t *g_739[8];
    int16_t **g_738;
    uint64_t *g_758;
    int8_t g_760;
    volatile uint32_t g_792;
    volatile uint32_t *g_791;
    volatile uint32_t * volatile *g_790;
    uint8_t g_811;
    uint64_t g_813;
    int32_t g_859;
    int8_t g_872[6][4];
    union U1 g_937;
    volatile int16_t * volatile **g_975;
    volatile int16_t * volatile ** volatile *g_974;
    int32_t *g_1007;
    int64_t g_1014;
    int32_t *g_1017;
    uint16_t g_1018;
    uint32_t *g_1022;
    uint32_t **g_1021;
    int32_t **g_1024[9];
    int16_t g_1096;
    uint32_t g_1203;
    uint32_t *g_1210;
    uint32_t **g_1209;
    struct S0 * volatile g_1216[1][7][6];
    volatile int8_t g_1235;
    volatile uint16_t g_1296;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S2 * p_1305);
uint64_t  func_4(uint16_t  p_5, uint16_t  p_6, int8_t  p_7, int16_t  p_8, int64_t  p_9, struct S2 * p_1305);
uint16_t  func_10(int64_t  p_11, struct S2 * p_1305);
int32_t ** func_28(int32_t *** p_29, int32_t ** p_30, struct S2 * p_1305);
int32_t * func_36(int32_t  p_37, int32_t * p_38, int32_t * p_39, int32_t ** p_40, struct S2 * p_1305);
int32_t * func_44(struct S0  p_45, int32_t ** p_46, uint64_t  p_47, int32_t  p_48, uint64_t  p_49, struct S2 * p_1305);
struct S0  func_50(int32_t *** p_51, uint64_t  p_52, int64_t  p_53, int32_t ** p_54, int32_t  p_55, struct S2 * p_1305);
int32_t *** func_56(int32_t * p_57, uint32_t  p_58, struct S2 * p_1305);
int32_t * func_59(int64_t  p_60, int32_t ** p_61, int32_t  p_62, int32_t * p_63, struct S2 * p_1305);
int32_t ** func_71(int32_t * p_72, int16_t  p_73, uint8_t  p_74, struct S0  p_75, struct S2 * p_1305);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1305->g_12 p_1305->g_16 p_1305->g_22 p_1305->g_31 p_1305->g_14 p_1305->g_35 p_1305->g_381.f7 p_1305->g_91 p_1305->g_92 p_1305->g_481 p_1305->g_482 p_1305->g_197 p_1305->g_491 p_1305->g_381.f6 p_1305->g_285 p_1305->g_381.f5 p_1305->g_236 p_1305->g_424 p_1305->g_379 p_1305->g_381.f2 p_1305->g_307 p_1305->g_563 p_1305->g_69 p_1305->g_232 p_1305->g_381.f0 p_1305->g_381.f1 p_1305->g_483 p_1305->g_872 p_1305->g_129 p_1305->g_130 p_1305->g_321 p_1305->g_127 p_1305->g_128 p_1305->g_123 p_1305->g_811 p_1305->g_974 p_1305->g_364 p_1305->g_365 p_1305->g_369 p_1305->g_368 p_1305->g_367 p_1305->g_366 p_1305->g_452 p_1305->g_453 p_1305->g_381 p_1305->g_937.f3.f6 p_1305->g_937 p_1305->g_1018 p_1305->g_1024 p_1305->g_676 p_1305->g_760 p_1305->g_1022 p_1305->g_813 p_1305->g_790 p_1305->g_791 p_1305->g_1007 p_1305->g_859 p_1305->g_124 p_1305->g_1209 p_1305->g_238 p_1305->g_792 p_1305->g_1014 p_1305->g_1235 p_1305->g_937.f3.f1 p_1305->g_1296
 * writes: p_1305->g_16 p_1305->g_22 p_1305->g_14 p_1305->g_35 p_1305->g_381.f7 p_1305->g_92 p_1305->g_307 p_1305->g_381.f5 p_1305->g_381.f6 p_1305->g_381.f0 p_1305->g_197 p_1305->g_381.f2 p_1305->g_232 p_1305->g_236 p_1305->g_620 p_1305->g_69 p_1305->g_859 p_1305->g_760 p_1305->g_872 p_1305->g_321 p_1305->g_124 p_1305->g_811 p_1305->g_130 p_1305->g_937.f3.f6 p_1305->g_1007 p_1305->g_1017 p_1305->g_1021 p_1305->g_676 p_1305->g_238 p_1305->g_91 p_1305->g_738 p_1305->g_758 p_1305->g_381 p_1305->g_563 p_1305->g_492 p_1305->g_1014 p_1305->g_70 p_1305->g_937.f3.f7 p_1305->g_12 p_1305->g_937.f1 p_1305->g_1203 p_1305->g_128 p_1305->g_1209 p_1305->g_379 p_1305->g_813 p_1305->g_937.f3.f1 p_1305->g_1296
 */
int32_t  func_1(struct S2 * p_1305)
{ /* block id: 4 */
    uint64_t l_25 = 1UL;
    int32_t **l_27 = (void*)0;
    int32_t ***l_26 = &l_27;
    int32_t *l_33 = &p_1305->g_14;
    int32_t **l_32 = &l_33;
    int32_t ***l_852 = &p_1305->g_69[5][6];
    uint16_t *l_855 = &p_1305->g_321;
    int32_t l_856 = 1L;
    int32_t l_857[3];
    int32_t *l_858 = &p_1305->g_859;
    int8_t *l_860 = &p_1305->g_760;
    int8_t *l_871 = &p_1305->g_872[2][2];
    uint64_t l_873[8];
    uint32_t *l_875 = (void*)0;
    uint32_t **l_874 = &l_875;
    int32_t *****l_925 = &p_1305->g_620;
    int32_t ******l_924 = &l_925;
    struct S0 *l_930 = &p_1305->g_381;
    int32_t l_951 = (-1L);
    int32_t l_952 = 0x10AA2179L;
    int32_t l_953[3];
    uint32_t l_954 = 4294967295UL;
    uint8_t **l_969 = (void*)0;
    uint8_t *l_971 = &p_1305->g_92.f1;
    uint8_t **l_970 = &l_971;
    int16_t l_976 = 0x5F98L;
    uint32_t *l_1020 = (void*)0;
    uint32_t **l_1019 = &l_1020;
    int32_t *l_1027 = &p_1305->g_15;
    int32_t **l_1026 = &l_1027;
    int32_t ***l_1025 = &l_1026;
    uint32_t *l_1032 = (void*)0;
    int16_t l_1033 = 8L;
    int16_t l_1042 = (-1L);
    int32_t l_1043 = 0x6F22B52CL;
    uint16_t l_1046 = 0UL;
    uint64_t *l_1047 = (void*)0;
    uint64_t *l_1048 = &p_1305->g_35;
    int32_t l_1063 = 0x10C292FCL;
    uint32_t l_1104[3];
    int64_t l_1197 = 0x6F61D9211C85E395L;
    int32_t l_1200 = (-1L);
    uint64_t l_1204[10][7][3] = {{{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL}},{{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL}},{{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL}},{{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL}},{{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL}},{{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL}},{{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL}},{{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL}},{{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL}},{{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL},{18446744073709551615UL,18446744073709551615UL,0x7B8D3659BC785DAAL}}};
    uint32_t l_1214 = 4294967295UL;
    int8_t l_1242 = 0x64L;
    uint8_t l_1292 = 0x01L;
    int8_t l_1295 = (-8L);
    int32_t *l_1299 = &l_1043;
    int32_t *l_1300 = &p_1305->g_92.f2;
    int32_t *l_1301[6];
    uint16_t l_1302[1][7][6] = {{{0xD985L,0xD985L,0x2BA0L,1UL,0xCF92L,0UL},{0xD985L,0xD985L,0x2BA0L,1UL,0xCF92L,0UL},{0xD985L,0xD985L,0x2BA0L,1UL,0xCF92L,0UL},{0xD985L,0xD985L,0x2BA0L,1UL,0xCF92L,0UL},{0xD985L,0xD985L,0x2BA0L,1UL,0xCF92L,0UL},{0xD985L,0xD985L,0x2BA0L,1UL,0xCF92L,0UL},{0xD985L,0xD985L,0x2BA0L,1UL,0xCF92L,0UL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_857[i] = 0x56B391B8L;
    for (i = 0; i < 8; i++)
        l_873[i] = 0x7332ABB2B2C193D3L;
    for (i = 0; i < 3; i++)
        l_953[i] = (-10L);
    for (i = 0; i < 3; i++)
        l_1104[i] = 4294967291UL;
    for (i = 0; i < 6; i++)
        l_1301[i] = &p_1305->g_92.f2;
    if ((safe_add_func_int8_t_s_s(((*l_871) ^= ((func_4(func_10(p_1305->g_12[3], p_1305), l_25, (((*l_26) = (void*)0) != ((*l_852) = func_28(p_1305->g_31, l_32, p_1305))), (((((*l_860) = ((((*l_858) = (safe_add_func_int16_t_s_s((((&p_1305->g_563[0][2][0] != (l_855 = (void*)0)) < l_856) < 8UL), l_857[1]))) , (-3L)) != 0x2926F253D1C0EBE3L)) , 1UL) & 0xA4311A14L) != 1L), l_856, p_1305) && p_1305->g_285[0][1]) >= 0x525CEC73L)), l_873[2])))
    { /* block id: 453 */
        uint32_t **l_876 = &l_875;
        struct S0 l_878 = {0x041DC2A6L,0x83L,0x08937DAAL,4294967295UL,0x738B0AD6L,6UL,4294967289UL,18446744073709551615UL};
        int32_t l_901 = 0x75359028L;
        int32_t l_927[6] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
        int16_t l_934 = 0x6B54L;
        int32_t l_945[10][1] = {{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L}};
        int i, j;
        if (((l_874 == (l_876 = &l_875)) , (*p_1305->g_129)))
        { /* block id: 455 */
            int32_t *l_877 = &p_1305->g_14;
            (*l_32) = l_877;
            (*p_1305->g_91) = l_878;
        }
        else
        { /* block id: 458 */
            uint64_t l_892[6][4][5] = {{{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL}},{{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL}},{{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL}},{{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL}},{{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL}},{{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL},{0x74CA00889DF3ED5EL,0x55595C5DF92EB43EL,0UL,0xD55FA8ACDCB44D46L,1UL}}};
            uint64_t l_903[2];
            uint16_t *l_907 = &p_1305->g_92.f5;
            int64_t l_923[7][3][5] = {{{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L}},{{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L}},{{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L}},{{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L}},{{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L}},{{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L}},{{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L},{0x682D2F5FECACC0AEL,0x33C1AC9FFCCC3BD1L,0x33C1AC9FFCCC3BD1L,0x682D2F5FECACC0AEL,0x2123196F33D875C1L}}};
            int8_t *l_926 = (void*)0;
            uint16_t l_928 = 3UL;
            int16_t *l_931 = &p_1305->g_236;
            int32_t **l_938 = (void*)0;
            int32_t l_939 = (-5L);
            struct S0 **l_941[2][3];
            struct S0 ***l_940[2];
            int32_t **l_942 = &l_33;
            int16_t ***l_943 = &p_1305->g_738;
            int16_t ****l_944 = &l_943;
            int32_t *l_946 = (void*)0;
            int32_t *l_947 = &l_939;
            int32_t *l_948 = &l_945[8][0];
            int32_t *l_949 = &l_939;
            int32_t *l_950[3][1];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_903[i] = 0xEEEC163F177BF120L;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_941[i][j] = &p_1305->g_91;
            }
            for (i = 0; i < 2; i++)
                l_940[i] = &l_941[1][0];
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_950[i][j] = &l_878.f2;
            }
            for (p_1305->g_321 = 0; (p_1305->g_321 != 14); p_1305->g_321++)
            { /* block id: 461 */
                uint32_t *l_887 = &l_878.f6;
                int32_t *l_898 = &p_1305->g_15;
                int32_t **l_897 = &l_898;
                int32_t l_902 = 0x2AC6E6E0L;
                uint16_t **l_908 = &l_907;
                int8_t l_929 = 0x70L;
                (*p_1305->g_91) = (*p_1305->g_91);
                if ((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(0x3A61L, (safe_sub_func_int32_t_s_s((((++(*l_887)) >= ((((*p_1305->g_379) = (*p_1305->g_379)) && (safe_div_func_int64_t_s_s((!l_892[5][0][2]), ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((((*l_897) = &p_1305->g_15) == (void*)0), ((safe_mul_func_int16_t_s_s(l_901, (((((0x5FL >= (((void*)0 != &p_1305->g_35) < l_902)) <= l_901) , p_1305->g_35) & l_878.f2) >= l_902))) , p_1305->g_92.f1))), l_903[0])) | 1L)))) != l_903[0])) , (-1L)), 0xB6974E3FL)))), l_878.f5)) > l_903[1]) , 4L))
                { /* block id: 466 */
                    l_878.f2 = (p_1305->g_381.f1 , (~(*p_1305->g_127)));
                }
                else
                { /* block id: 468 */
                    uint8_t l_904 = 0xB0L;
                    --l_904;
                }
                l_929 ^= ((**p_1305->g_481) , (((&p_1305->g_321 != (l_901 , ((*l_908) = l_907))) & ((0x05AE59E7L || (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u((((*p_1305->g_379) = ((safe_lshift_func_int16_t_s_s(l_902, (safe_add_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((((((65535UL == (safe_mod_func_uint32_t_u_u(l_892[5][1][3], (((safe_add_func_int16_t_s_s((l_901 == l_903[0]), 0UL)) | (**p_1305->g_481)) & (-1L))))) >= l_878.f3) , l_923[1][0][3]) , l_924) != (void*)0) ^ (*p_1305->g_379)), 255UL)) , l_926) == l_860), l_878.f0)))) & (-7L))) <= l_901), 2)) > p_1305->g_321), l_902))) , l_927[0])) && l_928));
            }
            (*p_1305->g_91) = l_878;
            (*p_1305->g_123) = (l_939 = ((&p_1305->g_738 == ((*l_944) = l_943)) , (l_878.f2 = (*p_1305->g_129))));
            l_954--;
        }
    }
    else
    { /* block id: 484 */
        int32_t *l_957 = &l_953[2];
        uint32_t l_961[7][10] = {{4294967294UL,4294967295UL,9UL,0xC9BCBCA4L,9UL,4294967295UL,4294967294UL,0x871A8114L,0xAE179365L,0x731B55F6L},{4294967294UL,4294967295UL,9UL,0xC9BCBCA4L,9UL,4294967295UL,4294967294UL,0x871A8114L,0xAE179365L,0x731B55F6L},{4294967294UL,4294967295UL,9UL,0xC9BCBCA4L,9UL,4294967295UL,4294967294UL,0x871A8114L,0xAE179365L,0x731B55F6L},{4294967294UL,4294967295UL,9UL,0xC9BCBCA4L,9UL,4294967295UL,4294967294UL,0x871A8114L,0xAE179365L,0x731B55F6L},{4294967294UL,4294967295UL,9UL,0xC9BCBCA4L,9UL,4294967295UL,4294967294UL,0x871A8114L,0xAE179365L,0x731B55F6L},{4294967294UL,4294967295UL,9UL,0xC9BCBCA4L,9UL,4294967295UL,4294967294UL,0x871A8114L,0xAE179365L,0x731B55F6L},{4294967294UL,4294967295UL,9UL,0xC9BCBCA4L,9UL,4294967295UL,4294967294UL,0x871A8114L,0xAE179365L,0x731B55F6L}};
        uint8_t *l_962 = &p_1305->g_811;
        int64_t l_989 = 0x749B23760E449E74L;
        int32_t l_1016 = 0x25159AC2L;
        int i, j;
        l_957 = (*l_32);
        for (p_1305->g_307 = 0; (p_1305->g_307 <= 8); p_1305->g_307 = safe_add_func_int16_t_s_s(p_1305->g_307, 1))
        { /* block id: 488 */
            int32_t l_960 = (-1L);
            return l_960;
        }
        if ((l_961[3][3] , (l_976 ^= ((+(-1L)) , ((((*l_962) |= (*p_1305->g_379)) >= ((p_1305->g_381.f0 < (safe_mul_func_int8_t_s_s((4294967292UL >= ((safe_mul_func_int16_t_s_s(((l_969 != (l_970 = &p_1305->g_379)) <= (-1L)), ((safe_lshift_func_uint8_t_u_s(((p_1305->g_974 != &p_1305->g_975) < (**p_1305->g_364)), p_1305->g_563[2][5][0])) , p_1305->g_12[5]))) >= p_1305->g_381.f2)), (*p_1305->g_379)))) | p_1305->g_92.f1)) < 4294967295UL)))))
        { /* block id: 494 */
            int32_t *****l_983 = &p_1305->g_620;
            struct S0 *l_988 = &p_1305->g_92;
            int16_t l_990 = 0x0327L;
            int32_t l_991 = 1L;
            (*p_1305->g_129) |= 7L;
            l_991 |= (~(safe_lshift_func_int16_t_s_s((((l_957 != l_957) <= 0L) , ((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s((l_983 == (*p_1305->g_452)), (safe_mul_func_uint16_t_u_u(((**p_1305->g_481) ^ ((((safe_rshift_func_int8_t_s_u(p_1305->g_14, 1)) , (*l_930)) , &p_1305->g_92) != l_988)), 0x28BFL)))), l_989)) | 0x66BDA521L)), l_990)));
            for (p_1305->g_937.f3.f6 = 17; (p_1305->g_937.f3.f6 != 60); ++p_1305->g_937.f3.f6)
            { /* block id: 499 */
                int32_t *l_994 = &p_1305->g_92.f2;
                int32_t **l_1006[8][9][1] = {{{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858}},{{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858}},{{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858}},{{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858}},{{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858}},{{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858}},{{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858}},{{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858},{&l_858}}};
                int32_t l_1012 = 2L;
                int64_t *l_1013[7] = {&p_1305->g_307,&p_1305->g_307,&p_1305->g_307,&p_1305->g_307,&p_1305->g_307,&p_1305->g_307,&p_1305->g_307};
                int16_t *l_1015[10] = {(void*)0,&l_990,(void*)0,(void*)0,&l_990,(void*)0,(void*)0,&l_990,(void*)0,(void*)0};
                int i, j, k;
                (*l_32) = l_994;
                (**l_32) = (&p_1305->g_35 != ((safe_add_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u(((safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((((((p_1305->g_937 , ((*p_1305->g_481) != (void*)0)) & (((safe_mul_func_int8_t_s_s((((p_1305->g_1007 = &p_1305->g_859) != (p_1305->g_1017 = l_875)) > p_1305->g_381.f6), p_1305->g_1018)) , 0L) == (*l_994))) > (*l_994)) , 0x78L) <= l_991), (*p_1305->g_379))), 0x19A315EB8CD7701CL)) & (-1L)))) , 5L), (*l_994))) , (void*)0));
                if ((*l_994))
                    break;
            }
        }
        else
        { /* block id: 509 */
            int32_t *l_1023 = &l_953[1];
            (*p_1305->g_129) = (-5L);
            l_1023 = func_36((~((l_961[3][8] || ((void*)0 != &p_1305->g_321)) > (&p_1305->g_482 == (p_1305->g_1021 = l_1019)))), l_1023, l_1023, p_1305->g_1024[3], p_1305);
        }
    }
    (*l_1025) = (void*)0;
    if ((safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(((l_1032 == (*l_874)) == l_1033), ((~((*l_860) = ((safe_sub_func_uint64_t_u_u(((*l_1048) = ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u(((((*p_1305->g_1022) = (((void*)0 != &p_1305->g_758) && l_1042)) & l_1043) == (safe_mod_func_int8_t_s_s((!(+p_1305->g_128)), (*p_1305->g_379)))), p_1305->g_381.f1)) <= 0x5C2ECF719568265EL) > l_1046) != (-1L)), 3)), 1UL)) ^ 0x03D16A25FF7879F2L)), (-10L))) || l_976))) , 0x1EC65144L))) & l_953[1]), 1L)))
    { /* block id: 519 */
        struct S0 l_1049 = {2UL,255UL,-1L,1UL,0L,0x18B8L,0xFE3C2836L,0xF6891D8AC1959C6CL};
        uint64_t l_1058 = 0UL;
        uint16_t *l_1064 = &p_1305->g_563[3][2][0];
        uint16_t *l_1065 = &p_1305->g_321;
        int64_t *l_1071 = (void*)0;
        int32_t *l_1094 = &p_1305->g_381.f2;
        int8_t l_1095 = 0x63L;
        uint64_t **l_1117 = (void*)0;
        (*l_930) = l_1049;
        if ((safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u((*p_1305->g_482), (l_1049.f0 , (+((*l_930) , (safe_sub_func_uint32_t_u_u(((l_1058 = p_1305->g_381.f5) < (l_1049.f4 <= ((*l_1065) |= ((*l_1064) ^= (((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(p_1305->g_1018, (p_1305->g_813 | ((l_1049.f0 , l_1049.f2) , 0x5DB71C29C66F7D88L)))), l_1049.f0)) , 0xE9C098B3L) , l_1063))))), (*p_1305->g_1022)))))))), 0UL)))
        { /* block id: 524 */
            int32_t *l_1069 = &l_1043;
            int32_t *l_1070[8] = {&l_1043,&l_1043,&l_1043,&l_1043,&l_1043,&l_1043,&l_1043,&l_1043};
            int64_t **l_1072 = &p_1305->g_492[1];
            int64_t *l_1073[7] = {&p_1305->g_238,&p_1305->g_238,&p_1305->g_238,&p_1305->g_238,&p_1305->g_238,&p_1305->g_238,&p_1305->g_238};
            int32_t ****l_1074 = &p_1305->g_31;
            int32_t ****l_1075 = (void*)0;
            int i;
            for (l_976 = (-12); (l_976 != (-22)); l_976 = safe_sub_func_int16_t_s_s(l_976, 9))
            { /* block id: 527 */
                int32_t *l_1068 = &p_1305->g_14;
                l_1070[3] = (l_1069 = l_1068);
            }
            l_1049.f2 = (((((((*l_1072) = l_1071) == l_1073[1]) || ((*l_1064) |= l_1049.f0)) < (l_1074 != l_1075)) || (*p_1305->g_379)) , (safe_mod_func_int16_t_s_s((-2L), l_1049.f4)));
        }
        else
        { /* block id: 534 */
            uint32_t l_1078 = 4294967290UL;
            --l_1078;
            return p_1305->g_92.f1;
        }
        for (p_1305->g_760 = (-13); (p_1305->g_760 <= (-2)); p_1305->g_760 = safe_add_func_int64_t_s_s(p_1305->g_760, 3))
        { /* block id: 540 */
            int8_t l_1085 = 0x17L;
            int32_t *l_1087 = &p_1305->g_14;
            int8_t l_1119 = 0x05L;
            int32_t l_1142 = 0x2CD50F0FL;
            uint8_t l_1181[3];
            int32_t *l_1184[9][6][4] = {{{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859}},{{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859}},{{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859}},{{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859}},{{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859}},{{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859}},{{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859}},{{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859}},{{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859},{&p_1305->g_859,&p_1305->g_859,&p_1305->g_859,&p_1305->g_859}}};
            uint64_t *l_1227[4][5] = {{&p_1305->g_813,&p_1305->g_813,&p_1305->g_813,&p_1305->g_813,&p_1305->g_813},{&p_1305->g_813,&p_1305->g_813,&p_1305->g_813,&p_1305->g_813,&p_1305->g_813},{&p_1305->g_813,&p_1305->g_813,&p_1305->g_813,&p_1305->g_813,&p_1305->g_813},{&p_1305->g_813,&p_1305->g_813,&p_1305->g_813,&p_1305->g_813,&p_1305->g_813}};
            uint16_t l_1229 = 0x085DL;
            uint32_t l_1232 = 4294967295UL;
            uint8_t *l_1236 = &p_1305->g_92.f1;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1181[i] = 9UL;
            for (p_1305->g_1014 = 0; (p_1305->g_1014 <= (-3)); p_1305->g_1014 = safe_sub_func_int16_t_s_s(p_1305->g_1014, 1))
            { /* block id: 543 */
                int32_t **l_1086 = &p_1305->g_70[2];
                int32_t l_1116 = 0x02AF036FL;
                int32_t l_1141 = 0x3A9BC134L;
                int32_t ******l_1165 = &l_925;
                (*l_32) = l_1087;
                (*l_32) = ((0x3E1EL | 0x06D4L) , (void*)0);
                if ((((safe_div_func_uint8_t_u_u((**p_1305->g_364), ((~(-5L)) & (((safe_lshift_func_uint8_t_u_u(0UL, l_1058)) <= (((((p_1305->g_872[5][0] , (void*)0) != (*p_1305->g_452)) && (((*l_1048)--) ^ (((*l_1087) , &p_1305->g_492[1]) != &p_1305->g_492[0]))) > 7L) & 0UL)) && 0x29L)))) && (*l_1087)) | p_1305->g_92.f3))
                { /* block id: 547 */
                    int32_t *l_1097 = &l_1049.f2;
                    int32_t *l_1098 = (void*)0;
                    int32_t *l_1099 = &p_1305->g_14;
                    int32_t *l_1100 = &p_1305->g_92.f2;
                    int32_t *l_1101 = &p_1305->g_14;
                    int32_t *l_1102[7][9] = {{(void*)0,&l_951,&l_952,(void*)0,&p_1305->g_92.f2,&l_1043,&l_953[1],&l_952,&l_952},{(void*)0,&l_951,&l_952,(void*)0,&p_1305->g_92.f2,&l_1043,&l_953[1],&l_952,&l_952},{(void*)0,&l_951,&l_952,(void*)0,&p_1305->g_92.f2,&l_1043,&l_953[1],&l_952,&l_952},{(void*)0,&l_951,&l_952,(void*)0,&p_1305->g_92.f2,&l_1043,&l_953[1],&l_952,&l_952},{(void*)0,&l_951,&l_952,(void*)0,&p_1305->g_92.f2,&l_1043,&l_953[1],&l_952,&l_952},{(void*)0,&l_951,&l_952,(void*)0,&p_1305->g_92.f2,&l_1043,&l_953[1],&l_952,&l_952},{(void*)0,&l_951,&l_952,(void*)0,&p_1305->g_92.f2,&l_1043,&l_953[1],&l_952,&l_952}};
                    int16_t l_1103 = (-1L);
                    int i, j;
                    (*l_1086) = l_1094;
                    ++l_1104[2];
                }
                else
                { /* block id: 550 */
                    uint32_t l_1118 = 0xCDE9062FL;
                    int32_t l_1120 = 0x0D30D33DL;
                    int8_t l_1140 = 0x67L;
                    int32_t l_1167 = (-10L);
                    int32_t l_1168 = (-2L);
                    l_1120 = (((~((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((void*)0 != (*p_1305->g_790)), (((((*l_871) = (*l_1094)) & ((p_1305->g_937.f3.f7 = (safe_div_func_int8_t_s_s(0x6BL, 0x7FL))) | (safe_unary_minus_func_uint16_t_u(((*l_1065) = (p_1305->g_381.f7 , ((((l_1116 && ((void*)0 != l_1117)) > (*l_1094)) < (*p_1305->g_482)) != l_1118))))))) , l_1119) || p_1305->g_307))), 0x43EBL)) || (*l_1094))) >= (*l_1094)) > (*p_1305->g_379));
                    if ((*l_1087))
                    { /* block id: 555 */
                        int8_t *l_1135 = &p_1305->g_197;
                        int32_t l_1138 = 3L;
                        uint32_t l_1139 = 0x624C3BD4L;
                        uint16_t **l_1164 = &l_1065;
                        uint16_t ***l_1163 = &l_1164;
                        int16_t *l_1166 = &p_1305->g_12[3];
                        int32_t *l_1169 = &l_951;
                        int32_t *l_1170 = (void*)0;
                        int32_t *l_1171 = &p_1305->g_937.f3.f2;
                        int32_t *l_1172 = &l_1043;
                        int32_t *l_1173 = &p_1305->g_14;
                        int32_t *l_1174 = &l_1138;
                        int32_t *l_1175 = &l_1063;
                        int32_t *l_1176 = &l_1063;
                        int32_t *l_1177[1][8] = {{&l_1043,&l_1168,&l_1043,&l_1043,&l_1168,&l_1043,&l_1043,&l_1168}};
                        uint64_t l_1178 = 0x30DEAC9019945191L;
                        int i, j;
                        l_1142 |= (((safe_rshift_func_int16_t_s_u(((++(*p_1305->g_1022)) <= ((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((l_1118 == l_1118), l_1120)) & (p_1305->g_872[4][1] = p_1305->g_12[1])), (*p_1305->g_379))) < (((l_1118 >= (*l_1094)) <= (safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(((*l_1135) = p_1305->g_381.f0), ((safe_div_func_int32_t_s_s((((((l_1138 | l_1139) < (**p_1305->g_364)) != p_1305->g_232) , l_1118) | (*l_1094)), l_1140)) | l_1139))), 1))) <= (*l_1094)))), 11)) , l_1141) , (*l_1087));
                        l_1168 = ((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((((*p_1305->g_482) == (*l_1087)) && (safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((--(*l_971)) & ((*l_1087) |= 0xEBL)), (((l_1167 = (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((((((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((((((void*)0 != &p_1305->g_482) > ((safe_mod_func_int16_t_s_s(((*l_1166) ^= ((l_1120 = (p_1305->g_381.f1 = (!(((*l_1163) = &p_1305->g_206) == &p_1305->g_206)))) <= (((l_1165 == (void*)0) , (*l_1094)) , 0x02L))), (-7L))) , 0x59BE47FEAE3803FAL)) <= (*p_1305->g_127)) && l_1138), 7L)), (*l_1094))) ^ l_1138) <= 0x10AF7B92L) , l_1118) != l_1138) , p_1305->g_368[0][5][0]), p_1305->g_236)), 0x288EL))) | (-1L)) ^ p_1305->g_92.f5))) > p_1305->g_16), (*l_1094)))), 0x5585L)), 0x0F31D55CC959D826L)) , (*l_1087));
                        l_1178--;
                        l_1181[0]++;
                    }
                    else
                    { /* block id: 570 */
                        int8_t *l_1198[10];
                        int16_t *l_1199 = &p_1305->g_12[4];
                        int32_t l_1201 = 0x698F5B20L;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1198[i] = &l_1085;
                        l_1120 ^= (((*p_1305->g_1022) = (+(l_1020 == ((*p_1305->g_1007) , l_1184[5][5][3])))) ^ (+(((((**p_1305->g_481) <= (safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(0x461AL, ((safe_add_func_uint16_t_u_u(((*l_1065) = ((*l_1064) = (l_1200 ^= (0x68E2L | (safe_rshift_func_int8_t_s_u(((((*l_1199) ^= (((p_1305->g_197 = ((*l_871) = 0x25L)) ^ (p_1305->g_937.f1 = (l_1168 ^= (((*l_1087) < (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(7L, l_1197)), 1))) == (*l_1094))))) || (*l_1094))) > 0x41C7L) , 0x1DL), (*p_1305->g_379))))))), (*l_1094))) || l_1201))), l_1167))) ^ 0UL) != l_1140) | l_1118)));
                    }
                }
                if ((*p_1305->g_127))
                { /* block id: 583 */
                    uint32_t *l_1202 = &p_1305->g_1203;
                    (*l_1087) &= (*p_1305->g_129);
                    (*p_1305->g_127) = ((((*l_1202) = p_1305->g_16) , l_1204[5][6][2]) && (*p_1305->g_123));
                }
                else
                { /* block id: 587 */
                    uint32_t ***l_1211[10];
                    int32_t l_1215 = 5L;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1211[i] = &p_1305->g_1209;
                    if ((safe_lshift_func_uint8_t_u_u((((*l_1087) = 0x32CF8E3939BD1949L) ^ (p_1305->g_92.f0 , ((safe_sub_func_uint32_t_u_u(((p_1305->g_1209 = p_1305->g_1209) != (l_874 = ((safe_mul_func_uint8_t_u_u((((*l_1064) = p_1305->g_238) < (-9L)), (18446744073709551615UL < (((((l_1214 = 0x0374L) & p_1305->g_92.f4) > ((p_1305->g_937 , l_1215) != (*l_1094))) & (*p_1305->g_1022)) && (**p_1305->g_364))))) , (void*)0))), 0x56D08437L)) | p_1305->g_92.f2))), l_1142)))
                    { /* block id: 593 */
                        return (*l_1087);
                    }
                    else
                    { /* block id: 595 */
                        struct S0 *l_1217 = (void*)0;
                        struct S0 *l_1218 = &l_1049;
                        (*l_1218) = ((*l_930) = (*l_930));
                        if ((*l_1094))
                            break;
                        return p_1305->g_792;
                    }
                }
            }
            (*p_1305->g_129) = ((((p_1305->g_937.f3.f1 = ((*l_1236) ^= ((((safe_lshift_func_uint8_t_u_s(((((((*l_1087) = (safe_sub_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(1UL, ((p_1305->g_813 = (((*l_970) = &p_1305->g_811) != (p_1305->g_1014 , (void*)0))) , (safe_unary_minus_func_int64_t_s((((*l_1087) && (l_1229 , (+(-1L)))) , (((safe_mod_func_uint8_t_u_u(l_1232, (((safe_mul_func_uint8_t_u_u(0xD7L, 0x61L)) && (*l_1094)) , (**p_1305->g_364)))) , &p_1305->g_859) != l_1087))))))) <= (*l_1094)), p_1305->g_872[3][1]))) || 0x4E3859BDL) || p_1305->g_1235) <= 0L) | l_1085), 7)) <= (*l_1094)) != (*p_1305->g_1022)) <= 18446744073709551608UL))) == (*l_1094)) , 0L) ^ (*l_1094));
            if ((*l_1094))
                continue;
            return p_1305->g_368[0][5][0];
        }
    }
    else
    { /* block id: 612 */
        uint8_t l_1239[9][2][1] = {{{0x1BL},{0x1BL}},{{0x1BL},{0x1BL}},{{0x1BL},{0x1BL}},{{0x1BL},{0x1BL}},{{0x1BL},{0x1BL}},{{0x1BL},{0x1BL}},{{0x1BL},{0x1BL}},{{0x1BL},{0x1BL}},{{0x1BL},{0x1BL}}};
        int32_t *l_1247 = &p_1305->g_92.f4;
        int32_t *l_1289[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1289[i] = &l_952;
        for (p_1305->g_937.f3.f1 = (-20); (p_1305->g_937.f3.f1 >= 6); p_1305->g_937.f3.f1++)
        { /* block id: 615 */
            uint32_t l_1248 = 4294967295UL;
            int8_t l_1249 = 0L;
            int16_t l_1250 = 0x358BL;
            struct S0 l_1264 = {4294967295UL,0x24L,0x7F3E2FE9L,4294967289UL,0x46F7FB0CL,65528UL,9UL,2UL};
            (*l_32) = (void*)0;
            l_1250 ^= (l_1239[7][1][0] , (l_1242 <= ((1UL | p_1305->g_236) <= (~(safe_div_func_int32_t_s_s(l_1239[6][0][0], ((safe_lshift_func_uint16_t_u_s((3UL | (l_1247 != (void*)0)), ((((l_1239[1][1][0] || l_1248) ^ (-1L)) < l_1249) <= 0x56ED6C25L))) && l_1239[7][1][0])))))));
            for (l_1043 = 27; (l_1043 == 23); l_1043 = safe_sub_func_uint16_t_u_u(l_1043, 8))
            { /* block id: 620 */
                uint32_t l_1269 = 0UL;
                struct S0 l_1280 = {8UL,0x92L,0x225D20B9L,0xB088F191L,3L,65528UL,0xB8A3C017L,0x8D7271282344281AL};
                int32_t **l_1281 = (void*)0;
                int16_t ***l_1288 = &p_1305->g_738;
                int32_t l_1290 = 0x69F708EDL;
                int32_t l_1291 = 0L;
                for (p_1305->g_92.f7 = 5; (p_1305->g_92.f7 < 10); ++p_1305->g_92.f7)
                { /* block id: 623 */
                    struct S0 l_1278[3] = {{1UL,255UL,0x47CB4C7EL,7UL,-2L,65535UL,4294967295UL,0x619337959EC2953FL},{1UL,255UL,0x47CB4C7EL,7UL,-2L,65535UL,4294967295UL,0x619337959EC2953FL},{1UL,255UL,0x47CB4C7EL,7UL,-2L,65535UL,4294967295UL,0x619337959EC2953FL}};
                    int32_t *l_1279 = &l_953[2];
                    int i;
                    for (l_954 = (-2); (l_954 == 21); ++l_954)
                    { /* block id: 626 */
                        int8_t l_1257 = (-3L);
                        int64_t *l_1262 = (void*)0;
                        int32_t l_1263[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1263[i] = 0L;
                        l_1257 |= l_1239[4][1][0];
                        (*p_1305->g_127) ^= (0x591F10FE8AD98D48L && (safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s((l_1263[0] |= l_1257), ((*l_1048) = l_1239[0][0][0]))), l_1239[0][1][0])));
                        if (l_1250)
                            continue;
                    }
                    (*l_1279) &= ((l_1264 , ((((*p_1305->g_1022) = (safe_rshift_func_uint8_t_u_s((0x4A3FL <= (((safe_add_func_uint16_t_u_u(l_1269, (l_1264.f7 & (**p_1305->g_481)))) == (18446744073709551611UL & (safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((~l_1250), (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((((((p_1305->g_813 , ((l_1278[2] , l_1278[2].f2) ^ l_1239[7][1][0])) , 6UL) , l_1269) ^ l_1278[2].f5) , 0x7C381A90L) , l_1269), l_1269)), 3)) < l_1278[2].f1) && (*p_1305->g_379)))), l_1269)))) && 0x2FL)), 2))) && 0x3B740357L) & l_1264.f6)) >= l_1269);
                    l_1289[1] = func_44(l_1280, l_1281, l_1239[2][1][0], ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((*l_1279), (safe_mod_func_int32_t_s_s((*l_1279), 0x1388E261L)))), 3)) , ((void*)0 == l_1288)), p_1305->g_792, p_1305);
                }
                --l_1292;
                (*l_930) = l_1264;
            }
        }
        p_1305->g_1296++;
    }
    --l_1302[0][1][0];
    return p_1305->g_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1305->g_481 p_1305->g_482 p_1305->g_483 p_1305->g_381.f2
 * writes:
 */
uint64_t  func_4(uint16_t  p_5, uint16_t  p_6, int8_t  p_7, int16_t  p_8, int64_t  p_9, struct S2 * p_1305)
{ /* block id: 446 */
    int64_t l_863 = 0x1E5C144B0180E33EL;
    int16_t l_864[3][9][1] = {{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}}};
    int32_t *l_865 = &p_1305->g_381.f2;
    int32_t *l_866[6] = {&p_1305->g_92.f2,&p_1305->g_92.f2,&p_1305->g_92.f2,&p_1305->g_92.f2,&p_1305->g_92.f2,&p_1305->g_92.f2};
    int32_t l_867[6][8] = {{0x7C40E1E5L,0x3EF1569FL,0x7C40E1E5L,0x7C40E1E5L,0x3EF1569FL,0x7C40E1E5L,0x7C40E1E5L,0x3EF1569FL},{0x7C40E1E5L,0x3EF1569FL,0x7C40E1E5L,0x7C40E1E5L,0x3EF1569FL,0x7C40E1E5L,0x7C40E1E5L,0x3EF1569FL},{0x7C40E1E5L,0x3EF1569FL,0x7C40E1E5L,0x7C40E1E5L,0x3EF1569FL,0x7C40E1E5L,0x7C40E1E5L,0x3EF1569FL},{0x7C40E1E5L,0x3EF1569FL,0x7C40E1E5L,0x7C40E1E5L,0x3EF1569FL,0x7C40E1E5L,0x7C40E1E5L,0x3EF1569FL},{0x7C40E1E5L,0x3EF1569FL,0x7C40E1E5L,0x7C40E1E5L,0x3EF1569FL,0x7C40E1E5L,0x7C40E1E5L,0x3EF1569FL},{0x7C40E1E5L,0x3EF1569FL,0x7C40E1E5L,0x7C40E1E5L,0x3EF1569FL,0x7C40E1E5L,0x7C40E1E5L,0x3EF1569FL}};
    uint8_t l_868 = 0x57L;
    int i, j, k;
    l_864[2][8][0] |= ((p_9 |= (~(safe_add_func_uint32_t_u_u((**p_1305->g_481), l_863)))) || l_863);
    l_866[0] = l_865;
    l_868++;
    return (*l_865);
}


/* ------------------------------------------ */
/* 
 * reads : p_1305->g_16 p_1305->g_22
 * writes: p_1305->g_16 p_1305->g_22
 */
uint16_t  func_10(int64_t  p_11, struct S2 * p_1305)
{ /* block id: 5 */
    int32_t *l_13[4] = {&p_1305->g_14,&p_1305->g_14,&p_1305->g_14,&p_1305->g_14};
    int32_t **l_19[5] = {&l_13[0],&l_13[0],&l_13[0],&l_13[0],&l_13[0]};
    int32_t *l_20 = &p_1305->g_14;
    int i;
    --p_1305->g_16;
    l_20 = (void*)0;
    p_1305->g_22++;
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_1305->g_14 p_1305->g_35 p_1305->g_381.f7 p_1305->g_91 p_1305->g_92 p_1305->g_481 p_1305->g_482 p_1305->g_197 p_1305->g_491 p_1305->g_381.f6 p_1305->g_12 p_1305->g_285 p_1305->g_381.f5 p_1305->g_236 p_1305->g_424 p_1305->g_379 p_1305->g_381.f2 p_1305->g_307 p_1305->g_563 p_1305->g_69 p_1305->g_232 p_1305->g_381.f0 p_1305->g_381.f1
 * writes: p_1305->g_14 p_1305->g_35 p_1305->g_381.f7 p_1305->g_92 p_1305->g_307 p_1305->g_381.f5 p_1305->g_381.f6 p_1305->g_381.f0 p_1305->g_197 p_1305->g_381.f2 p_1305->g_232 p_1305->g_236 p_1305->g_620
 */
int32_t ** func_28(int32_t *** p_29, int32_t ** p_30, struct S2 * p_1305)
{ /* block id: 11 */
    uint8_t l_34[8] = {3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL};
    int32_t l_43[7];
    int32_t *l_76 = &p_1305->g_14;
    struct S0 l_77 = {0xEFF443A5L,0xD8L,-1L,0xC1A33FE8L,0x1E0EF155L,0x2618L,0x08949E3BL,1UL};
    uint16_t l_851 = 65526UL;
    int i;
    for (i = 0; i < 7; i++)
        l_43[i] = 1L;
    for (p_1305->g_14 = 0; (p_1305->g_14 <= 7); p_1305->g_14 += 1)
    { /* block id: 14 */
        int32_t **l_68 = (void*)0;
        struct S0 l_662[9] = {{4294967295UL,0xF5L,4L,4UL,-1L,0x8EBEL,2UL,0UL},{4294967295UL,0xF5L,4L,4UL,-1L,0x8EBEL,2UL,0UL},{4294967295UL,0xF5L,4L,4UL,-1L,0x8EBEL,2UL,0UL},{4294967295UL,0xF5L,4L,4UL,-1L,0x8EBEL,2UL,0UL},{4294967295UL,0xF5L,4L,4UL,-1L,0x8EBEL,2UL,0UL},{4294967295UL,0xF5L,4L,4UL,-1L,0x8EBEL,2UL,0UL},{4294967295UL,0xF5L,4L,4UL,-1L,0x8EBEL,2UL,0UL},{4294967295UL,0xF5L,4L,4UL,-1L,0x8EBEL,2UL,0UL},{4294967295UL,0xF5L,4L,4UL,-1L,0x8EBEL,2UL,0UL}};
        int32_t *l_664[1];
        int i;
        for (i = 0; i < 1; i++)
            l_664[i] = &p_1305->g_14;
        p_1305->g_35 ^= l_34[p_1305->g_14];
    }
    for (p_1305->g_381.f7 = 0; (p_1305->g_381.f7 <= 1); p_1305->g_381.f7 += 1)
    { /* block id: 401 */
        int32_t *l_788[1][9];
        struct S0 l_789 = {0UL,0x0BL,6L,9UL,-1L,0x7DD3L,0UL,0xCFB7B7DA896F647FL};
        uint32_t l_795 = 0UL;
        uint8_t l_844 = 8UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 9; j++)
                l_788[i][j] = &p_1305->g_14;
        }
        (1 + 1);
    }
    (*p_1305->g_91) = func_50(func_56(((*p_30) = (void*)0), (1UL | (*l_76)), p_1305), ((safe_mul_func_int16_t_s_s((1UL <= (-6L)), (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((*p_1305->g_91) , (*p_1305->g_481)) != l_76), (*l_76))), p_1305->g_14)))) , 0x251DD3BCB861F042L), (*l_76), &l_76, (*l_76), p_1305);
    (*p_30) = (*p_30);
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_1305->g_92.f7 p_1305->g_321 p_1305->g_92.f5 p_1305->g_676 p_1305->g_92.f2 p_1305->g_92.f4 p_1305->g_14 p_1305->g_381.f5 p_1305->g_232 p_1305->g_197 p_1305->g_379 p_1305->g_92.f1 p_1305->g_381.f1 p_1305->g_760 p_1305->g_92.f0 p_1305->g_381.f2
 * writes: p_1305->g_92.f7 p_1305->g_92.f5 p_1305->g_676 p_1305->g_197 p_1305->g_238 p_1305->g_381.f2 p_1305->g_91 p_1305->g_381.f5 p_1305->g_232 p_1305->g_321 p_1305->g_92.f1 p_1305->g_738 p_1305->g_758 p_1305->g_760 p_1305->g_92.f2
 */
int32_t * func_36(int32_t  p_37, int32_t * p_38, int32_t * p_39, int32_t ** p_40, struct S2 * p_1305)
{ /* block id: 324 */
    uint64_t l_669 = 1UL;
    int32_t l_675 = (-1L);
    int64_t l_693[5][6][5] = {{{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L}},{{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L}},{{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L}},{{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L}},{{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L},{0x16F276D3C2543BB8L,0x6AB8B68A3EE49AD2L,0x224E6A5C14A78F61L,0x0472ABDEBC651A41L,0L}}};
    int32_t l_694 = (-1L);
    int32_t l_695 = 0x7309B020L;
    struct S0 **l_732[10][4] = {{(void*)0,&p_1305->g_91,(void*)0,&p_1305->g_91},{(void*)0,&p_1305->g_91,(void*)0,&p_1305->g_91},{(void*)0,&p_1305->g_91,(void*)0,&p_1305->g_91},{(void*)0,&p_1305->g_91,(void*)0,&p_1305->g_91},{(void*)0,&p_1305->g_91,(void*)0,&p_1305->g_91},{(void*)0,&p_1305->g_91,(void*)0,&p_1305->g_91},{(void*)0,&p_1305->g_91,(void*)0,&p_1305->g_91},{(void*)0,&p_1305->g_91,(void*)0,&p_1305->g_91},{(void*)0,&p_1305->g_91,(void*)0,&p_1305->g_91},{(void*)0,&p_1305->g_91,(void*)0,&p_1305->g_91}};
    uint8_t l_743 = 0xB0L;
    int32_t *****l_750 = &p_1305->g_620;
    int32_t *l_753 = (void*)0;
    int i, j, k;
    for (p_1305->g_92.f7 = 0; (p_1305->g_92.f7 != 47); p_1305->g_92.f7 = safe_add_func_int64_t_s_s(p_1305->g_92.f7, 6))
    { /* block id: 327 */
        struct S0 l_667 = {1UL,252UL,0L,0x845CFE99L,-1L,0xA892L,4294967287UL,1UL};
        int32_t **l_668[9];
        uint16_t *l_672 = &p_1305->g_92.f5;
        int32_t l_691 = 0L;
        int16_t *l_736 = (void*)0;
        int16_t **l_735 = &l_736;
        int i;
        for (i = 0; i < 9; i++)
            l_668[i] = &p_1305->g_70[2];
        p_38 = func_44(l_667, &p_38, p_37, p_1305->g_321, p_37, p_1305);
        p_1305->g_676 &= (l_669 >= (safe_rshift_func_uint16_t_u_u((l_675 |= (++(*l_672))), 14)));
        for (p_1305->g_197 = (-15); (p_1305->g_197 < (-30)); p_1305->g_197 = safe_sub_func_int16_t_s_s(p_1305->g_197, 1))
        { /* block id: 334 */
            uint64_t l_681 = 0x473E1694B197C5FBL;
            uint32_t l_702 = 0x1833E57BL;
            int32_t l_729 = (-7L);
            int32_t l_740 = (-1L);
            int32_t l_741[6] = {9L,9L,9L,9L,9L,9L};
            int32_t *****l_749[3][3] = {{&p_1305->g_620,&p_1305->g_620,&p_1305->g_620},{&p_1305->g_620,&p_1305->g_620,&p_1305->g_620},{&p_1305->g_620,&p_1305->g_620,&p_1305->g_620}};
            int32_t *l_754 = &l_675;
            uint64_t l_783 = 8UL;
            uint64_t l_784 = 0UL;
            int i, j;
            for (p_1305->g_238 = 6; (p_1305->g_238 >= 0); p_1305->g_238 -= 1)
            { /* block id: 337 */
                int32_t l_679 = 1L;
                int32_t l_696 = 2L;
                int32_t l_697[6][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
                struct S0 **l_734 = &p_1305->g_91;
                uint64_t *l_763 = &l_669;
                int i, j;
                for (p_1305->g_381.f2 = 0; (p_1305->g_381.f2 <= 8); p_1305->g_381.f2 += 1)
                { /* block id: 340 */
                    int32_t l_680 = (-6L);
                    struct S0 l_685 = {0UL,1UL,0x4BF58A97L,4294967287UL,-1L,0xA8C7L,4294967294UL,6UL};
                    int32_t l_698 = (-1L);
                    int i, j;
                    l_675 ^= (*p_38);
                    l_681++;
                    if ((p_37 & ((65528UL > ((-1L) && l_675)) || p_1305->g_92.f4)))
                    { /* block id: 343 */
                        struct S0 l_684 = {0xD1EBEE0FL,255UL,7L,4294967288UL,-8L,0x2A66L,1UL,0x7318061EC9244D27L};
                        struct S0 *l_686 = &l_684;
                        struct S0 **l_687 = (void*)0;
                        struct S0 **l_688[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_688[i] = &l_686;
                        (*l_686) = (l_685 = l_684);
                        if ((*p_38))
                            continue;
                        if (l_679)
                            break;
                        p_1305->g_91 = &l_667;
                    }
                    else
                    { /* block id: 349 */
                        int64_t l_692 = 0L;
                        uint16_t l_699 = 0UL;
                        l_691 |= (safe_lshift_func_int8_t_s_s(0x63L, 5));
                        --l_699;
                    }
                }
                if ((*p_39))
                { /* block id: 354 */
                    int16_t ***l_737[2];
                    int32_t l_742 = 0x422FD28EL;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_737[i] = &l_735;
                    l_702--;
                    for (l_667.f2 = 8; (l_667.f2 >= 2); l_667.f2 -= 1)
                    { /* block id: 358 */
                        uint64_t *l_711 = &l_669;
                        uint64_t **l_712 = &l_711;
                        uint64_t *l_714 = &l_669;
                        uint64_t **l_713 = &l_714;
                        uint16_t *l_717[9][2][1] = {{{&p_1305->g_381.f5},{&p_1305->g_381.f5}},{{&p_1305->g_381.f5},{&p_1305->g_381.f5}},{{&p_1305->g_381.f5},{&p_1305->g_381.f5}},{{&p_1305->g_381.f5},{&p_1305->g_381.f5}},{{&p_1305->g_381.f5},{&p_1305->g_381.f5}},{{&p_1305->g_381.f5},{&p_1305->g_381.f5}},{{&p_1305->g_381.f5},{&p_1305->g_381.f5}},{{&p_1305->g_381.f5},{&p_1305->g_381.f5}},{{&p_1305->g_381.f5},{&p_1305->g_381.f5}}};
                        int16_t *l_720 = &p_1305->g_232;
                        uint8_t l_730 = 0xBFL;
                        int64_t l_731[5] = {0L,0L,0L,0L,0L};
                        struct S0 ***l_733[9] = {&l_732[6][1],&l_732[6][1],&l_732[6][1],&l_732[6][1],&l_732[6][1],&l_732[6][1],&l_732[6][1],&l_732[6][1],&l_732[6][1]};
                        int i, j, k;
                        l_734 = (((safe_lshift_func_uint16_t_u_s(((*l_672)--), 12)) >= (((safe_sub_func_int16_t_s_s((((*l_712) = l_711) != ((*l_713) = &l_669)), (safe_mod_func_uint16_t_u_u((p_37 == (!(p_1305->g_381.f5++))), ((*l_720) = (+l_669)))))) , (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_731[4] = (((((p_37 , ((((*p_1305->g_379) ^= (((safe_add_func_uint16_t_u_u((p_1305->g_321 = l_669), 0L)) , ((**l_712) |= ((safe_sub_func_int16_t_s_s(((*l_720) &= l_729), p_1305->g_321)) && p_1305->g_197))) >= 0UL)) >= p_37) == p_37)) == l_730) && p_37) , p_37) ^ p_1305->g_381.f1)), 1)), 0xCFAEL))) != p_37)) , l_732[0][3]);
                    }
                    p_1305->g_738 = l_735;
                    ++l_743;
                }
                else
                { /* block id: 373 */
                    int32_t *l_746 = &l_679;
                    uint64_t *l_757 = &p_1305->g_381.f7;
                    int8_t *l_759 = &p_1305->g_760;
                    p_39 = (l_746 = p_39);
                    (*l_754) |= (((*l_759) |= ((safe_lshift_func_int8_t_s_u((((*p_1305->g_379) = ((l_749[1][2] != l_750) & (*p_1305->g_379))) >= (((safe_sub_func_uint32_t_u_u(p_1305->g_92.f2, (p_1305->g_676 < (l_753 != l_754)))) >= 0x062BL) | (safe_sub_func_uint32_t_u_u(((p_1305->g_758 = l_757) == &p_1305->g_35), (*p_38))))), 7)) , p_1305->g_92.f1)) == p_37);
                    if ((*p_39))
                        continue;
                }
                if ((safe_div_func_int8_t_s_s((((*l_763) = p_1305->g_92.f0) == ((((safe_sub_func_int64_t_s_s(0x7081FDA056ED5FFCL, ((*l_754) == (p_37 && (((safe_add_func_uint8_t_u_u(6UL, (((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_37, ((*p_38) = ((((safe_mul_func_uint8_t_u_u(((*p_1305->g_379) = (safe_add_func_uint64_t_u_u(p_1305->g_92.f1, ((safe_lshift_func_uint8_t_u_s(1UL, ((safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u(((safe_div_func_int32_t_s_s((+(*p_38)), (*p_39))) <= 0x227FADD9L))), p_37)) & (*p_39)))) >= (-1L))))), p_37)) > p_37) & l_783) , (*p_39))))), l_784)) == 0x2B10L) | p_37))) >= 1UL) > p_37))))) <= p_37) != (-1L)) < p_1305->g_381.f2)), 0x6FL)))
                { /* block id: 385 */
                    uint64_t l_785 = 8UL;
                    --l_785;
                    if ((*p_39))
                        continue;
                    if ((*p_38))
                        break;
                }
                else
                { /* block id: 389 */
                    (*l_754) = (-1L);
                }
            }
            if ((*p_39))
                break;
        }
    }
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_44(struct S0  p_45, int32_t ** p_46, uint64_t  p_47, int32_t  p_48, uint64_t  p_49, struct S2 * p_1305)
{ /* block id: 322 */
    int32_t *l_663 = &p_1305->g_92.f2;
    return l_663;
}


/* ------------------------------------------ */
/* 
 * reads : p_1305->g_91 p_1305->g_92 p_1305->g_197 p_1305->g_481 p_1305->g_491 p_1305->g_381.f6 p_1305->g_12 p_1305->g_285 p_1305->g_381.f5 p_1305->g_236 p_1305->g_424 p_1305->g_379 p_1305->g_381.f2 p_1305->g_381.f7 p_1305->g_307 p_1305->g_35 p_1305->g_563 p_1305->g_69 p_1305->g_232 p_1305->g_381.f0 p_1305->g_381.f1
 * writes: p_1305->g_92 p_1305->g_307 p_1305->g_381.f5 p_1305->g_381.f6 p_1305->g_381.f0 p_1305->g_197 p_1305->g_35 p_1305->g_381.f2 p_1305->g_232 p_1305->g_236 p_1305->g_620
 */
struct S0  func_50(int32_t *** p_51, uint64_t  p_52, int64_t  p_53, int32_t ** p_54, int32_t  p_55, struct S2 * p_1305)
{ /* block id: 220 */
    struct S0 l_473 = {0xB4FC4D13L,0x80L,1L,4294967289UL,9L,2UL,0x3D3A7DFDL,9UL};
    int32_t ***l_476 = &p_1305->g_69[5][6];
    uint32_t *l_486 = &p_1305->g_381.f6;
    uint32_t **l_485 = &l_486;
    int8_t *l_489 = (void*)0;
    uint8_t l_502[6][4][7] = {{{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL}},{{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL}},{{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL}},{{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL}},{{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL}},{{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL},{1UL,1UL,255UL,250UL,255UL,255UL,255UL}}};
    uint32_t l_508 = 0x1232260CL;
    int32_t *l_565 = &p_1305->g_92.f2;
    int16_t l_633 = (-7L);
    int32_t l_639 = 0x558CFC5EL;
    int32_t l_643 = 0x60737D3BL;
    int32_t l_644 = 0x107F499DL;
    int i, j, k;
    l_473 = ((*p_1305->g_91) = (*p_1305->g_91));
    for (p_53 = 0; (p_53 != (-30)); p_53--)
    { /* block id: 225 */
        int32_t ****l_477 = &l_476;
        uint32_t *l_478 = &p_1305->g_92.f6;
        uint64_t *l_484 = &p_1305->g_35;
        int64_t *l_490 = &p_1305->g_307;
        int64_t l_499 = (-1L);
        uint16_t *l_503 = &p_1305->g_381.f5;
        int32_t *****l_510 = (void*)0;
        int32_t ******l_509 = &l_510;
        struct S0 l_511[3][2][8] = {{{{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0x13F37508L,0xDDL,0x200CFA1DL,0x413C57EDL,1L,1UL,0x176A3CE8L,0x6ADFA972A1D78CFFL},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0x13F37508L,0xDDL,0x200CFA1DL,0x413C57EDL,1L,1UL,0x176A3CE8L,0x6ADFA972A1D78CFFL}},{{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0x13F37508L,0xDDL,0x200CFA1DL,0x413C57EDL,1L,1UL,0x176A3CE8L,0x6ADFA972A1D78CFFL},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0x13F37508L,0xDDL,0x200CFA1DL,0x413C57EDL,1L,1UL,0x176A3CE8L,0x6ADFA972A1D78CFFL}}},{{{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0x13F37508L,0xDDL,0x200CFA1DL,0x413C57EDL,1L,1UL,0x176A3CE8L,0x6ADFA972A1D78CFFL},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0x13F37508L,0xDDL,0x200CFA1DL,0x413C57EDL,1L,1UL,0x176A3CE8L,0x6ADFA972A1D78CFFL}},{{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0x13F37508L,0xDDL,0x200CFA1DL,0x413C57EDL,1L,1UL,0x176A3CE8L,0x6ADFA972A1D78CFFL},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0x13F37508L,0xDDL,0x200CFA1DL,0x413C57EDL,1L,1UL,0x176A3CE8L,0x6ADFA972A1D78CFFL}}},{{{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0x13F37508L,0xDDL,0x200CFA1DL,0x413C57EDL,1L,1UL,0x176A3CE8L,0x6ADFA972A1D78CFFL},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0x13F37508L,0xDDL,0x200CFA1DL,0x413C57EDL,1L,1UL,0x176A3CE8L,0x6ADFA972A1D78CFFL}},{{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0x13F37508L,0xDDL,0x200CFA1DL,0x413C57EDL,1L,1UL,0x176A3CE8L,0x6ADFA972A1D78CFFL},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xA2B5CAFCL,0x14L,7L,0UL,-1L,0x8BD9L,0x3C2ED7B5L,0x48782385E07FFA91L},{0xD99A8467L,1UL,0L,4294967294UL,2L,0x0414L,4UL,0x711FBCB5F8A5F3DDL},{0x13F37508L,0xDDL,0x200CFA1DL,0x413C57EDL,1L,1UL,0x176A3CE8L,0x6ADFA972A1D78CFFL}}}};
        uint16_t l_562[5][9] = {{65535UL,65535UL,1UL,0UL,0x77CFL,0UL,1UL,65535UL,65535UL},{65535UL,65535UL,1UL,0UL,0x77CFL,0UL,1UL,65535UL,65535UL},{65535UL,65535UL,1UL,0UL,0x77CFL,0UL,1UL,65535UL,65535UL},{65535UL,65535UL,1UL,0UL,0x77CFL,0UL,1UL,65535UL,65535UL},{65535UL,65535UL,1UL,0UL,0x77CFL,0UL,1UL,65535UL,65535UL}};
        int16_t l_594[5][7] = {{(-5L),1L,(-5L),(-5L),1L,(-5L),(-5L)},{(-5L),1L,(-5L),(-5L),1L,(-5L),(-5L)},{(-5L),1L,(-5L),(-5L),1L,(-5L),(-5L)},{(-5L),1L,(-5L),(-5L),1L,(-5L),(-5L)},{(-5L),1L,(-5L),(-5L),1L,(-5L),(-5L)}};
        int64_t l_596 = (-1L);
        int32_t l_600[3][8] = {{0x6CE631CFL,0x10479B2CL,0L,0x10479B2CL,0x6CE631CFL,0x6CE631CFL,0x10479B2CL,0L},{0x6CE631CFL,0x10479B2CL,0L,0x10479B2CL,0x6CE631CFL,0x6CE631CFL,0x10479B2CL,0L},{0x6CE631CFL,0x10479B2CL,0L,0x10479B2CL,0x6CE631CFL,0x6CE631CFL,0x10479B2CL,0L}};
        uint8_t l_625 = 0x5AL;
        int32_t l_638 = 0x42BC2AACL;
        int32_t l_640 = 5L;
        int32_t l_641 = 9L;
        int32_t l_642 = 0x0E30D02AL;
        uint8_t *l_650[10][6][2] = {{{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1}},{{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1}},{{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1}},{{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1}},{{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1}},{{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1}},{{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1}},{{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1}},{{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1}},{{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1},{&p_1305->g_92.f1,&p_1305->g_92.f1}}};
        uint32_t l_651 = 1UL;
        int i, j, k;
        (*p_54) = ((((p_1305->g_197 , (~((((*l_490) = (((*l_478) |= (((*l_477) = l_476) != (void*)0)) | ((safe_div_func_uint64_t_u_u(((p_52 , p_1305->g_481) != ((+((void*)0 == l_484)) , l_485)), ((safe_add_func_uint32_t_u_u((l_489 == (void*)0), l_473.f2)) | 0x61026A58FD17BA15L))) || 0x2A0AFEF24524DB42L))) , p_55) | l_473.f4))) , (void*)0) == p_1305->g_491[6][6]) , l_486);
        if (((**p_54) = (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(l_499, 13)) <= (safe_mod_func_int32_t_s_s((**p_54), 0x195AA8F2L))) && (p_1305->g_12[2] != (0x4024L & l_502[5][2][6]))), p_1305->g_285[2][6])), (((*l_503)++) < (safe_mul_func_int16_t_s_s((((*l_478) |= l_508) ^ ((l_509 != (void*)0) , 0x007D700CL)), p_55)))))))
        { /* block id: 233 */
            uint16_t l_516 = 0x2DE6L;
            uint64_t l_521[6][2][7] = {{{0UL,0xD712F3771AFC1C25L,0xD8F18960604CCA58L,0xCDC86EF94410AC82L,1UL,0UL,0xCDC86EF94410AC82L},{0UL,0xD712F3771AFC1C25L,0xD8F18960604CCA58L,0xCDC86EF94410AC82L,1UL,0UL,0xCDC86EF94410AC82L}},{{0UL,0xD712F3771AFC1C25L,0xD8F18960604CCA58L,0xCDC86EF94410AC82L,1UL,0UL,0xCDC86EF94410AC82L},{0UL,0xD712F3771AFC1C25L,0xD8F18960604CCA58L,0xCDC86EF94410AC82L,1UL,0UL,0xCDC86EF94410AC82L}},{{0UL,0xD712F3771AFC1C25L,0xD8F18960604CCA58L,0xCDC86EF94410AC82L,1UL,0UL,0xCDC86EF94410AC82L},{0UL,0xD712F3771AFC1C25L,0xD8F18960604CCA58L,0xCDC86EF94410AC82L,1UL,0UL,0xCDC86EF94410AC82L}},{{0UL,0xD712F3771AFC1C25L,0xD8F18960604CCA58L,0xCDC86EF94410AC82L,1UL,0UL,0xCDC86EF94410AC82L},{0UL,0xD712F3771AFC1C25L,0xD8F18960604CCA58L,0xCDC86EF94410AC82L,1UL,0UL,0xCDC86EF94410AC82L}},{{0UL,0xD712F3771AFC1C25L,0xD8F18960604CCA58L,0xCDC86EF94410AC82L,1UL,0UL,0xCDC86EF94410AC82L},{0UL,0xD712F3771AFC1C25L,0xD8F18960604CCA58L,0xCDC86EF94410AC82L,1UL,0UL,0xCDC86EF94410AC82L}},{{0UL,0xD712F3771AFC1C25L,0xD8F18960604CCA58L,0xCDC86EF94410AC82L,1UL,0UL,0xCDC86EF94410AC82L},{0UL,0xD712F3771AFC1C25L,0xD8F18960604CCA58L,0xCDC86EF94410AC82L,1UL,0UL,0xCDC86EF94410AC82L}}};
            int i, j, k;
            (*p_1305->g_91) = l_511[1][1][1];
            l_511[1][1][1].f2 = ((**p_54) ^= ((0x62488582324C7C1EL >= (safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_516, (p_53 , (p_1305->g_236 < (safe_div_func_uint8_t_u_u((((void*)0 != &p_1305->g_232) != (0x1FB0L > (safe_sub_func_int64_t_s_s((((void*)0 == &l_499) & l_516), p_1305->g_424)))), (*p_1305->g_379))))))), l_521[0][1][3]))) ^ 0x2DCEDC0EL));
        }
        else
        { /* block id: 237 */
            uint64_t l_522[1];
            int8_t *l_523 = &p_1305->g_197;
            int8_t *l_525[3][3][1] = {{{&p_1305->g_197},{&p_1305->g_197},{&p_1305->g_197}},{{&p_1305->g_197},{&p_1305->g_197},{&p_1305->g_197}},{{&p_1305->g_197},{&p_1305->g_197},{&p_1305->g_197}}};
            int32_t l_547 = 0x4F484DB9L;
            struct S0 *l_548 = &l_511[1][1][1];
            uint16_t *l_628 = &l_562[4][2];
            int32_t *l_634 = (void*)0;
            int32_t *l_635 = (void*)0;
            int32_t *l_636 = &p_1305->g_381.f2;
            int32_t *l_637[6] = {&l_473.f2,&l_473.f2,&l_473.f2,&l_473.f2,&l_473.f2,&l_473.f2};
            uint32_t l_645 = 1UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_522[i] = 0x6EDCD7F4FFB2FA34L;
            for (p_1305->g_381.f5 = 0; (p_1305->g_381.f5 <= 7); p_1305->g_381.f5 += 1)
            { /* block id: 240 */
                uint32_t *l_524 = &p_1305->g_381.f0;
                int32_t l_546[8];
                struct S0 **l_549 = (void*)0;
                struct S0 **l_550 = &l_548;
                int8_t *l_561[2];
                int32_t l_598[1][3][2] = {{{0L,1L},{0L,1L},{0L,1L}}};
                uint32_t l_612 = 4294967290UL;
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_546[i] = 0x7DE0AA22L;
                for (i = 0; i < 2; i++)
                    l_561[i] = &p_1305->g_197;
                l_522[0] = l_511[1][1][1].f1;
                (*l_550) = (((l_523 == (((*l_524) = 4294967295UL) , l_525[1][2][0])) != (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((p_52 != ((((((!(-8L)) ^ p_1305->g_236) ^ (safe_lshift_func_uint8_t_u_u((((*l_523) = (safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((-1L), (!((p_53 || ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((((!((*p_1305->g_379) |= p_53)) ^ l_546[2]) | l_522[0]), l_547)), p_1305->g_381.f5)) < p_53)) != p_52)))), 8)) , p_1305->g_381.f2), p_1305->g_381.f7)) <= p_1305->g_92.f0), p_1305->g_307)), p_1305->g_381.f5))) != l_522[0]), p_1305->g_307))) != (**p_54)) && 0x7AECL) >= 250UL)) | p_52), p_53)), 14))) , l_548);
                if ((((*l_523) = (((0x5BE2L | (((++(*l_484)) < ((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((((((p_53 >= ((*l_490) |= p_53)) | (((safe_lshift_func_int16_t_s_s(p_52, 13)) , p_1305->g_424) , p_55)) >= p_52) >= 6UL) & (l_489 != l_561[1])) | p_1305->g_12[3]), p_1305->g_236)) >= (*p_1305->g_379)), l_562[2][8])), p_53)) && 251UL)) == p_1305->g_563[2][5][0])) >= 0L) > p_52)) <= 4L))
                { /* block id: 249 */
                    struct S0 l_566 = {0xCF1206F3L,0xCBL,1L,0xAF1AD3B7L,0x50C429ECL,0xD7B2L,8UL,1UL};
                    int16_t *l_595 = &p_1305->g_232;
                    uint16_t *l_597 = &l_562[2][8];
                    int16_t *l_599 = &p_1305->g_236;
                    if ((**p_54))
                    { /* block id: 250 */
                        int32_t *l_564 = &p_1305->g_381.f2;
                        (*p_54) = (*p_54);
                        (**l_550) = l_511[0][1][3];
                        (*l_564) |= (**p_54);
                        l_565 = l_564;
                    }
                    else
                    { /* block id: 255 */
                        int32_t l_571 = (-1L);
                        (*l_565) &= (**p_54);
                        (**p_54) |= (-4L);
                        (*p_1305->g_91) = l_566;
                        l_571 ^= ((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(l_566.f0, (0x449F81CEDA5108CBL | (((*l_565) > (((**p_54) == (((void*)0 == (*p_51)) | 9L)) & p_55)) == 1UL)))), l_566.f2)) & 2L);
                    }
                    if ((safe_lshift_func_int16_t_s_u((((((~(l_522[0] && (l_522[0] , 0xD506L))) <= (p_55 <= ((*p_1305->g_379) = (((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(l_547, (++(**l_485)))), 10)) < 255UL) | (!(l_522[0] >= (safe_mul_func_uint16_t_u_u(((((((*l_599) = ((((safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((((*l_597) ^= ((((((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((*p_1305->g_379) ^ (safe_add_func_int16_t_s_s(((*l_595) &= (((p_53 <= 0x49L) | 0x01DBBE6E4EDCA022L) > l_594[3][3])), l_596))), (-1L))), (-1L))), p_1305->g_236)) > p_1305->g_236) , 1L) < p_1305->g_381.f0) , l_566.f1) > l_566.f6)) > 0x5460L), l_598[0][0][1])) || p_55), 0x39400B5AL)) <= p_52) & p_1305->g_92.f2) || l_522[0])) != l_600[1][7]) != 0x1641BF96E43F4300L) <= p_1305->g_197) , 0x5FD8L), p_55)))))))) , &p_1305->g_482) == (void*)0) , 1L), p_1305->g_92.f6)))
                    { /* block id: 266 */
                        uint32_t **l_605 = &l_524;
                        int32_t l_613 = (-1L);
                        l_613 = (p_55 | (((safe_div_func_int32_t_s_s(l_522[0], ((((safe_rshift_func_uint16_t_u_s(((*l_565) || ((p_52 >= (&p_1305->g_424 != ((*l_605) = &p_1305->g_424))) < p_53)), 3)) >= ((*l_490) = ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(((((0L != ((safe_sub_func_uint8_t_u_u((*p_1305->g_379), 0x03L)) && p_1305->g_197)) < (-1L)) && l_612) ^ p_1305->g_236), (**p_54))), p_1305->g_12[9])) > 1UL))) , p_1305->g_381.f2) | (*p_1305->g_379)))) >= l_566.f1) , p_55));
                        return (*p_1305->g_91);
                    }
                    else
                    { /* block id: 271 */
                        int32_t *l_614 = &l_473.f2;
                        struct S0 *l_618 = (void*)0;
                        (*p_54) = l_614;
                        (**p_54) &= (safe_add_func_uint16_t_u_u(((p_53 < ((*l_484) = ((l_618 = ((safe_unary_minus_func_uint32_t_u(((void*)0 == &p_1305->g_92))) , &l_473)) == &p_1305->g_381))) , ((((*p_1305->g_379) = 0UL) >= (l_566.f7 | 65530UL)) > (safe_unary_minus_func_uint32_t_u(p_1305->g_381.f1)))), 7UL));
                        (*l_614) = (**p_54);
                    }
                    (**p_54) ^= ((!((p_52 , (void*)0) == (p_1305->g_620 = &p_1305->g_31))) != (((*l_565) < 1L) == (safe_rshift_func_uint16_t_u_s(p_52, 1))));
                }
                else
                { /* block id: 281 */
                    int64_t **l_629 = &l_490;
                    struct S0 l_632 = {0xDC26CFB2L,0x83L,-6L,1UL,-1L,1UL,5UL,0x10C817106F8E9C30L};
                    (*p_1305->g_91) = l_511[0][1][5];
                    for (p_1305->g_381.f0 = 0; (p_1305->g_381.f0 <= 16); ++p_1305->g_381.f0)
                    { /* block id: 285 */
                        if ((**p_54))
                            break;
                        if (l_625)
                            break;
                    }
                    (*l_565) ^= (safe_sub_func_uint64_t_u_u((&p_1305->g_482 != ((&p_1305->g_563[2][2][0] != l_628) , &l_486)), (&p_1305->g_492[1] == l_629)));
                    for (p_1305->g_232 = 14; (p_1305->g_232 < 8); p_1305->g_232--)
                    { /* block id: 292 */
                        return l_632;
                    }
                }
                if (l_633)
                    continue;
            }
            ++l_645;
            (*p_1305->g_91) = l_473;
        }
        (*l_565) ^= ((**p_54) = (safe_sub_func_uint8_t_u_u((p_1305->g_12[9] , (*p_1305->g_379)), (--l_651))));
    }
    for (l_473.f6 = 0; (l_473.f6 != 50); ++l_473.f6)
    { /* block id: 307 */
        int64_t l_658 = 0x1F310CD2325235C9L;
        for (l_473.f7 = 23; (l_473.f7 < 22); --l_473.f7)
        { /* block id: 310 */
            uint32_t l_659[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            int i;
            ++l_659[1];
            for (l_633 = 6; (l_633 >= 0); l_633 -= 1)
            { /* block id: 314 */
                (*p_1305->g_91) = l_473;
                return (*p_1305->g_91);
            }
        }
    }
    return (*p_1305->g_91);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t *** func_56(int32_t * p_57, uint32_t  p_58, struct S2 * p_1305)
{ /* block id: 216 */
    int32_t *l_462 = (void*)0;
    int32_t *l_463 = &p_1305->g_381.f2;
    int32_t *l_464 = (void*)0;
    int32_t l_465[5][6] = {{(-1L),0x0A38368AL,0x5DECCE43L,0L,0x5DECCE43L,0x0A38368AL},{(-1L),0x0A38368AL,0x5DECCE43L,0L,0x5DECCE43L,0x0A38368AL},{(-1L),0x0A38368AL,0x5DECCE43L,0L,0x5DECCE43L,0x0A38368AL},{(-1L),0x0A38368AL,0x5DECCE43L,0L,0x5DECCE43L,0x0A38368AL},{(-1L),0x0A38368AL,0x5DECCE43L,0L,0x5DECCE43L,0x0A38368AL}};
    int32_t *l_466 = &p_1305->g_381.f2;
    int32_t *l_467 = &p_1305->g_381.f2;
    int32_t *l_468[1][3];
    uint32_t l_469 = 0xEDADC7C3L;
    int32_t **l_472 = &l_468[0][2];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_468[i][j] = (void*)0;
    }
    --l_469;
    (*l_472) = (void*)0;
    return &p_1305->g_69[5][6];
}


/* ------------------------------------------ */
/* 
 * reads : p_1305->g_321 p_1305->g_92.f5 p_1305->g_379 p_1305->g_92.f1 p_1305->g_424 p_1305->g_381.f6 p_1305->g_12 p_1305->g_92.f2 p_1305->g_92.f0 p_1305->g_35 p_1305->g_14 p_1305->g_238 p_1305->g_92.f7 p_1305->g_452 p_1305->g_381.f2 p_1305->g_232
 * writes: p_1305->g_321 p_1305->g_381.f5 p_1305->g_35 p_1305->g_92.f2 p_1305->g_238 p_1305->g_92.f7
 */
int32_t * func_59(int64_t  p_60, int32_t ** p_61, int32_t  p_62, int32_t * p_63, struct S2 * p_1305)
{ /* block id: 190 */
    int32_t *l_395 = &p_1305->g_92.f2;
    int32_t *l_396 = (void*)0;
    int32_t *l_397[10][6] = {{&p_1305->g_381.f2,&p_1305->g_381.f2,&p_1305->g_14,&p_1305->g_381.f2,&p_1305->g_92.f2,&p_1305->g_92.f2},{&p_1305->g_381.f2,&p_1305->g_381.f2,&p_1305->g_14,&p_1305->g_381.f2,&p_1305->g_92.f2,&p_1305->g_92.f2},{&p_1305->g_381.f2,&p_1305->g_381.f2,&p_1305->g_14,&p_1305->g_381.f2,&p_1305->g_92.f2,&p_1305->g_92.f2},{&p_1305->g_381.f2,&p_1305->g_381.f2,&p_1305->g_14,&p_1305->g_381.f2,&p_1305->g_92.f2,&p_1305->g_92.f2},{&p_1305->g_381.f2,&p_1305->g_381.f2,&p_1305->g_14,&p_1305->g_381.f2,&p_1305->g_92.f2,&p_1305->g_92.f2},{&p_1305->g_381.f2,&p_1305->g_381.f2,&p_1305->g_14,&p_1305->g_381.f2,&p_1305->g_92.f2,&p_1305->g_92.f2},{&p_1305->g_381.f2,&p_1305->g_381.f2,&p_1305->g_14,&p_1305->g_381.f2,&p_1305->g_92.f2,&p_1305->g_92.f2},{&p_1305->g_381.f2,&p_1305->g_381.f2,&p_1305->g_14,&p_1305->g_381.f2,&p_1305->g_92.f2,&p_1305->g_92.f2},{&p_1305->g_381.f2,&p_1305->g_381.f2,&p_1305->g_14,&p_1305->g_381.f2,&p_1305->g_92.f2,&p_1305->g_92.f2},{&p_1305->g_381.f2,&p_1305->g_381.f2,&p_1305->g_14,&p_1305->g_381.f2,&p_1305->g_92.f2,&p_1305->g_92.f2}};
    uint16_t l_398[5];
    int64_t *l_405 = &p_1305->g_238;
    uint16_t *l_408 = &p_1305->g_321;
    uint32_t l_419 = 4294967290UL;
    uint16_t *l_427 = &p_1305->g_381.f5;
    uint16_t *l_428 = (void*)0;
    uint16_t *l_429 = (void*)0;
    uint16_t *l_430 = &l_398[2];
    int32_t l_449 = 1L;
    int32_t ****l_459 = &p_1305->g_31;
    int32_t *****l_458 = &l_459;
    int32_t ******l_457 = &l_458;
    int32_t l_460 = 0x60386294L;
    int32_t l_461[1];
    int i, j;
    for (i = 0; i < 5; i++)
        l_398[i] = 65526UL;
    for (i = 0; i < 1; i++)
        l_461[i] = 1L;
    l_398[3]--;
    if (((safe_div_func_int16_t_s_s((safe_div_func_uint8_t_u_u((l_405 != (((safe_mul_func_uint16_t_u_u((++(*l_408)), (((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((p_1305->g_92.f5 & (safe_add_func_int16_t_s_s(p_60, (safe_lshift_func_uint8_t_u_s((*p_1305->g_379), (l_419 != (safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_1305->g_424, ((safe_lshift_func_int16_t_s_u((p_1305->g_381.f6 != (((*l_427) = p_60) < ((*l_430) |= (((~((void*)0 == &p_1305->g_92)) == 8L) | p_1305->g_12[3])))), p_62)) & (*l_395)))), p_1305->g_92.f0)))))))) != 1UL), 1UL)), (*p_1305->g_379))) > 65534UL) != p_62))) | 0x4AE16D2DC129E017L) , (void*)0)), (*l_395))), p_1305->g_35)) , (*l_395)))
    { /* block id: 195 */
        int32_t *l_431 = &p_1305->g_381.f2;
        return l_431;
    }
    else
    { /* block id: 197 */
        int32_t *l_434 = &p_1305->g_14;
        for (p_1305->g_35 = (-28); (p_1305->g_35 > 50); p_1305->g_35 = safe_add_func_int32_t_s_s(p_1305->g_35, 7))
        { /* block id: 200 */
            (*l_395) = (1L >= ((p_62 < (1UL | (*p_63))) < 0UL));
            for (p_1305->g_238 = 6; (p_1305->g_238 >= 2); p_1305->g_238 -= 1)
            { /* block id: 204 */
                int i, j;
                p_63 = l_434;
            }
            for (p_1305->g_92.f7 = 20; (p_1305->g_92.f7 == 28); p_1305->g_92.f7 = safe_add_func_int8_t_s_s(p_1305->g_92.f7, 2))
            { /* block id: 209 */
                return l_434;
            }
        }
    }
    l_461[0] |= (safe_div_func_uint16_t_u_u(((*l_395) | (safe_mod_func_uint32_t_u_u((p_60 || ((safe_sub_func_int16_t_s_s(0x2E57L, ((p_62 & (*l_395)) > (((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_449, ((((safe_add_func_uint32_t_u_u((p_1305->g_452 != l_457), ((p_60 > 0x3209L) || 0xAFL))) < 0UL) , 0x0F3FABB4L) , 0x99L))), l_460)) < p_60) == p_1305->g_381.f2)))) > 0UL)), p_1305->g_232))), p_1305->g_92.f0));
    return p_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_1305->g_70 p_1305->g_91 p_1305->g_12 p_1305->g_92.f6 p_1305->g_92.f7 p_1305->g_15 p_1305->g_14 p_1305->g_92.f5 p_1305->g_120 p_1305->g_31 p_1305->g_69 p_1305->g_92.f4 p_1305->g_92.f2 p_1305->g_92.f0 p_1305->g_92 p_1305->g_35 p_1305->g_206
 * writes: p_1305->g_70 p_1305->g_31 p_1305->g_35 p_1305->g_92.f7 p_1305->g_92.f6 p_1305->g_92.f2 p_1305->g_92.f4 p_1305->g_197 p_1305->g_92.f5
 */
int32_t ** func_71(int32_t * p_72, int16_t  p_73, uint8_t  p_74, struct S0  p_75, struct S2 * p_1305)
{ /* block id: 17 */
    int32_t **l_84 = (void*)0;
    int32_t l_147 = 0x775CB63EL;
    int32_t l_160[5] = {0x181B1BC7L,0x181B1BC7L,0x181B1BC7L,0x181B1BC7L,0x181B1BC7L};
    uint32_t l_163 = 0xC09D1445L;
    uint64_t *l_169 = &p_1305->g_35;
    int32_t *l_190 = &p_1305->g_15;
    uint32_t *l_218 = &p_1305->g_92.f6;
    uint32_t **l_217 = &l_218;
    uint32_t *l_220[3][4][4] = {{{(void*)0,(void*)0,(void*)0,&p_1305->g_92.f6},{(void*)0,(void*)0,(void*)0,&p_1305->g_92.f6},{(void*)0,(void*)0,(void*)0,&p_1305->g_92.f6},{(void*)0,(void*)0,(void*)0,&p_1305->g_92.f6}},{{(void*)0,(void*)0,(void*)0,&p_1305->g_92.f6},{(void*)0,(void*)0,(void*)0,&p_1305->g_92.f6},{(void*)0,(void*)0,(void*)0,&p_1305->g_92.f6},{(void*)0,(void*)0,(void*)0,&p_1305->g_92.f6}},{{(void*)0,(void*)0,(void*)0,&p_1305->g_92.f6},{(void*)0,(void*)0,(void*)0,&p_1305->g_92.f6},{(void*)0,(void*)0,(void*)0,&p_1305->g_92.f6},{(void*)0,(void*)0,(void*)0,&p_1305->g_92.f6}}};
    uint32_t **l_219 = &l_220[2][2][1];
    uint16_t *l_225 = &p_1305->g_92.f5;
    int16_t l_230[8][4][7] = {{{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)}},{{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)}},{{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)}},{{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)}},{{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)}},{{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)}},{{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)}},{{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)},{0x46B0L,0x1DD3L,0L,0x0561L,0x353CL,1L,(-2L)}}};
    int32_t l_234[10] = {0x0A9D4CCEL,0x3E293BD1L,0x0A9D4CCEL,0x0A9D4CCEL,0x3E293BD1L,0x0A9D4CCEL,0x0A9D4CCEL,0x3E293BD1L,0x0A9D4CCEL,0x0A9D4CCEL};
    uint32_t l_277 = 4294967295UL;
    int16_t l_363[2][10] = {{0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L},{0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L,0x7AD2L}};
    uint32_t l_377 = 4294967291UL;
    int32_t *l_382 = &p_1305->g_381.f2;
    int32_t **l_392 = &l_382;
    int32_t **l_393 = &l_382;
    int32_t **l_394 = &p_1305->g_70[2];
    int i, j, k;
    for (p_75.f2 = 23; (p_75.f2 >= (-1)); p_75.f2--)
    { /* block id: 20 */
        int16_t l_105 = (-1L);
        int32_t ***l_113 = &p_1305->g_69[5][6];
        int32_t *l_115 = &p_1305->g_92.f2;
        int32_t l_132 = 0x593A861CL;
        int32_t l_133[6][9] = {{1L,1L,0L,0x791DEB0AL,0x4EBE310AL,0x791DEB0AL,0L,1L,1L},{1L,1L,0L,0x791DEB0AL,0x4EBE310AL,0x791DEB0AL,0L,1L,1L},{1L,1L,0L,0x791DEB0AL,0x4EBE310AL,0x791DEB0AL,0L,1L,1L},{1L,1L,0L,0x791DEB0AL,0x4EBE310AL,0x791DEB0AL,0L,1L,1L},{1L,1L,0L,0x791DEB0AL,0x4EBE310AL,0x791DEB0AL,0L,1L,1L},{1L,1L,0L,0x791DEB0AL,0x4EBE310AL,0x791DEB0AL,0L,1L,1L}};
        int64_t l_161 = (-1L);
        uint64_t *l_170 = &p_1305->g_92.f7;
        uint32_t *l_183 = (void*)0;
        uint32_t *l_184 = &p_1305->g_92.f6;
        uint16_t l_189 = 65533UL;
        uint16_t *l_191 = (void*)0;
        uint16_t *l_192 = &l_189;
        int i, j;
        for (p_75.f0 = (-16); (p_75.f0 > 29); ++p_75.f0)
        { /* block id: 23 */
            int32_t *l_87 = (void*)0;
            struct S0 l_90 = {4294967295UL,0x42L,0L,8UL,0x45D07927L,0xD6E0L,0x24876030L,0xEE2C543511282808L};
            int32_t l_106 = 0x703B65DDL;
            int32_t ***l_114 = &p_1305->g_69[5][6];
            int32_t l_162[3][9][6] = {{{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L}},{{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L}},{{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L},{1L,8L,0x00BC6D34L,(-3L),0x7EFF8C83L,1L}}};
            int i, j, k;
            for (p_75.f3 = 0; (p_75.f3 < 53); p_75.f3++)
            { /* block id: 26 */
                return l_84;
            }
            for (p_73 = 5; (p_73 >= 0); p_73 -= 1)
            { /* block id: 31 */
                int i;
                p_1305->g_70[(p_73 + 1)] = p_1305->g_70[p_73];
            }
            for (p_75.f7 = 0; (p_75.f7 != 37); p_75.f7 = safe_add_func_int16_t_s_s(p_75.f7, 9))
            { /* block id: 36 */
                int32_t **l_88[7][7];
                struct S0 *l_89 = (void*)0;
                int32_t ****l_96 = &p_1305->g_31;
                uint64_t *l_103 = &p_1305->g_35;
                uint64_t *l_104 = &p_1305->g_92.f7;
                int32_t l_131 = 0x0A606355L;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_88[i][j] = &p_1305->g_70[0];
                }
                p_72 = l_87;
                l_89 = (void*)0;
                if ((((((l_90 , p_1305->g_91) == (void*)0) & ((l_106 ^= (!(safe_rshift_func_int16_t_s_u(0L, (((safe_unary_minus_func_uint16_t_u(((&p_1305->g_69[5][6] != ((((*l_96) = &l_84) == (void*)0) , (void*)0)) < ((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((((((*l_104) &= (safe_div_func_uint64_t_u_u(((*l_103) = ((0xC87BL > 1UL) != p_1305->g_12[3])), p_1305->g_92.f6))) && l_105) < p_73) <= 0x22DE5CCAL) == p_75.f3), (-9L))), p_75.f2)) , 0x6AE3L)))) & p_73) == p_75.f6))))) >= p_75.f7)) || 0UL) , p_75.f4))
                { /* block id: 43 */
                    uint32_t *l_116 = &p_1305->g_92.f6;
                    int32_t l_117 = 0x723DC045L;
                    int32_t ****l_119 = &l_114;
                    int32_t *****l_118 = &l_119;
                    if ((0x5BF1637FL >= (5L != ((safe_add_func_uint16_t_u_u((p_1305->g_15 , (((safe_rshift_func_int16_t_s_s((((*l_96) = l_113) == l_114), 3)) | (((*l_118) = ((p_1305->g_92.f6 , (p_72 == (l_115 = p_72))) , (((((*l_116) = p_1305->g_14) != l_117) || p_1305->g_92.f5) , (void*)0))) == p_1305->g_120)) & p_75.f0)), p_1305->g_12[3])) == p_1305->g_12[6]))))
                    { /* block id: 48 */
                        uint32_t l_134 = 0xD9D43CF3L;
                        l_134++;
                        return (*p_1305->g_31);
                    }
                    else
                    { /* block id: 51 */
                        return (**l_96);
                    }
                }
                else
                { /* block id: 54 */
                    uint32_t *l_137 = &l_90.f6;
                    int32_t l_138[2];
                    uint32_t l_145 = 4294967295UL;
                    uint8_t *l_146 = &l_90.f1;
                    int32_t *l_158 = &p_1305->g_92.f4;
                    int32_t l_159 = 0x57EFDBF3L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_138[i] = 0x6A01D589L;
                    l_147 &= (((*l_146) ^= ((((*l_137) = p_1305->g_92.f4) <= (l_138[0] & 0x932AA67735A7C04AL)) ^ (((*l_115) , ((safe_lshift_func_int8_t_s_u(p_75.f4, (((safe_sub_func_uint8_t_u_u((p_75.f6 , (safe_mod_func_uint16_t_u_u((((*l_115) = l_138[1]) > (p_75.f0 , l_145)), 3UL))), 0x04L)) & 0x84L) && (-1L)))) ^ p_75.f6)) == 0x47L))) , (*l_115));
                    l_159 &= (p_1305->g_15 < (((p_1305->g_92.f0 >= l_138[1]) || ((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s(p_1305->g_92.f2, 1)) && (safe_rshift_func_int16_t_s_s(((p_72 != (void*)0) , (l_145 && (~(p_75.f0 && (safe_rshift_func_uint16_t_u_u((((*l_158) = ((((((((*p_1305->g_91) , 255UL) > 0x71L) && p_1305->g_92.f5) > 0x6E04L) , p_73) <= p_1305->g_92.f0) >= 18446744073709551615UL)) , p_1305->g_12[3]), l_138[0])))))), p_75.f1))) , (void*)0) != (void*)0), p_75.f1)), 0L)) >= 0xD486CFEEL)) || 0x90L));
                    --l_163;
                }
            }
        }
        l_133[5][5] ^= ((p_1305->g_92.f4 && (0x53L < ((p_1305->g_92.f7 & (safe_unary_minus_func_int16_t_s((((((safe_mod_func_int64_t_s_s((l_169 == l_170), (safe_add_func_int8_t_s_s((-1L), 1UL)))) , (safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u((((p_73 | (safe_mul_func_uint16_t_u_u(p_1305->g_92.f2, p_75.f2))) ^ 0x2ED0E2EEL) , p_74), 5UL)), p_75.f2))) < 0x2EL) || (*l_115)) == p_75.f7)))) || (-5L)))) , 0x52E987CDL);
        if ((1UL <= ((*l_192) = (((safe_add_func_uint16_t_u_u(((246UL >= ((((safe_sub_func_uint32_t_u_u(((*l_184) = p_1305->g_92.f5), ((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_189, 0x47L)), (p_72 != l_190))) | p_75.f1))) < ((p_75.f7 != p_1305->g_92.f0) && p_75.f1)) < 0x6D2B076EL) && l_163)) ^ 18446744073709551609UL), (*l_115))) <= 0UL) , p_75.f1))))
        { /* block id: 68 */
            int32_t **l_193 = &p_1305->g_70[2];
            (*l_193) = p_72;
        }
        else
        { /* block id: 70 */
            int32_t **l_208 = &l_115;
            for (p_1305->g_35 = 0; (p_1305->g_35 <= 4); p_1305->g_35 += 1)
            { /* block id: 73 */
                int8_t *l_196 = &p_1305->g_197;
                uint16_t **l_207[5];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_207[i] = (void*)0;
                l_160[p_1305->g_35] = ((!((*l_184) = (safe_rshift_func_int8_t_s_u(((*l_196) = l_133[(p_1305->g_35 + 1)][(p_1305->g_35 + 3)]), (l_160[p_1305->g_35] != ((*l_170) = (0x43B9L >= (safe_rshift_func_uint16_t_u_s((((--p_75.f1) < (safe_rshift_func_uint16_t_u_u(l_133[(p_1305->g_35 + 1)][(p_1305->g_35 + 3)], 3))) > (~((((*p_1305->g_91) , &l_189) != (l_192 = p_1305->g_206)) && p_75.f7))), 0))))))))) && (((p_75.f0 | (-6L)) && 0x527C613937DDB646L) > 1L));
                (*l_115) = l_133[(p_1305->g_35 + 1)][(p_1305->g_35 + 3)];
            }
            (*l_208) = p_72;
        }
    }
    l_160[2] ^= ((p_75.f2 <= ((((safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((((safe_sub_func_uint8_t_u_u(p_73, ((void*)0 != p_72))) ^ (((*l_219) = ((*l_217) = p_72)) != (void*)0)) != ((safe_mod_func_int32_t_s_s((p_73 || (((*l_225) &= (safe_div_func_uint64_t_u_u((~((p_75.f5 >= p_1305->g_14) & p_1305->g_92.f1)), p_74))) && p_74)), p_75.f6)) , (-1L))) > (-3L)) ^ (-3L)), l_163)), p_75.f0)) >= p_1305->g_14) , 0UL) || p_75.f5)) < 0L);
    for (p_1305->g_92.f6 = (-4); (p_1305->g_92.f6 == 10); p_1305->g_92.f6 = safe_add_func_int64_t_s_s(p_1305->g_92.f6, 3))
    { /* block id: 91 */
        int16_t *l_231 = &p_1305->g_232;
        int32_t l_233 = (-1L);
        int16_t *l_235 = &p_1305->g_236;
        int64_t *l_237 = &p_1305->g_238;
        uint8_t l_247 = 0xB4L;
        uint32_t *l_249 = &p_1305->g_92.f6;
        int64_t l_273 = (-9L);
        int32_t *l_278[5][3] = {{&l_234[3],(void*)0,&l_234[3]},{&l_234[3],(void*)0,&l_234[3]},{&l_234[3],(void*)0,&l_234[3]},{&l_234[3],(void*)0,&l_234[3]},{&l_234[3],(void*)0,&l_234[3]}};
        int i, j;
        (1 + 1);
    }
    for (p_1305->g_92.f4 = 8; (p_1305->g_92.f4 < (-17)); p_1305->g_92.f4 = safe_sub_func_int16_t_s_s(p_1305->g_92.f4, 3))
    { /* block id: 186 */
        int32_t **l_391[6] = {&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2]};
        int i;
        return l_391[4];
    }
    return l_394;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1306;
    struct S2* p_1305 = &c_1306;
    struct S2 c_1307 = {
        {0x17C1L,0x17C1L,0x17C1L,0x17C1L,0x17C1L,0x17C1L,0x17C1L,0x17C1L,0x17C1L,0x17C1L}, // p_1305->g_12
        0x07E4A906L, // p_1305->g_14
        1L, // p_1305->g_15
        0x30B91EE4L, // p_1305->g_16
        0x33L, // p_1305->g_21
        9UL, // p_1305->g_22
        (void*)0, // p_1305->g_31
        0x59F32F520A048C84L, // p_1305->g_35
        {&p_1305->g_14,&p_1305->g_14,&p_1305->g_14,&p_1305->g_14,&p_1305->g_14,&p_1305->g_14,&p_1305->g_14}, // p_1305->g_70
        {{&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2]},{&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2]},{&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2]},{&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2]},{&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2]},{&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2]},{&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2]},{&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],(void*)0,&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2],&p_1305->g_70[2]}}, // p_1305->g_69
        {1UL,246UL,0L,4294967295UL,0x5E99E236L,0UL,0xA4D29FB7L,0UL}, // p_1305->g_92
        &p_1305->g_92, // p_1305->g_91
        0x4E0FF389L, // p_1305->g_124
        &p_1305->g_124, // p_1305->g_123
        0L, // p_1305->g_126
        &p_1305->g_126, // p_1305->g_125
        (-9L), // p_1305->g_128
        &p_1305->g_128, // p_1305->g_127
        1L, // p_1305->g_130
        &p_1305->g_130, // p_1305->g_129
        {{{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129}},{{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129}},{{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129}},{{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129}},{{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129}},{{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129}},{{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129}},{{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129}},{{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129}},{{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129},{&p_1305->g_129}}}, // p_1305->g_122
        &p_1305->g_122[5][6][0], // p_1305->g_121
        &p_1305->g_121, // p_1305->g_120
        (-6L), // p_1305->g_197
        (void*)0, // p_1305->g_206
        3L, // p_1305->g_232
        0x7E01L, // p_1305->g_236
        0x50078BCC88130779L, // p_1305->g_238
        {{0x2893EFECL,0x78A595CDL,0x4D8D3760L,0L,0x78A595CDL,0L,0x4D8D3760L,0x78A595CDL,0x2893EFECL},{0x2893EFECL,0x78A595CDL,0x4D8D3760L,0L,0x78A595CDL,0L,0x4D8D3760L,0x78A595CDL,0x2893EFECL},{0x2893EFECL,0x78A595CDL,0x4D8D3760L,0L,0x78A595CDL,0L,0x4D8D3760L,0x78A595CDL,0x2893EFECL},{0x2893EFECL,0x78A595CDL,0x4D8D3760L,0L,0x78A595CDL,0L,0x4D8D3760L,0x78A595CDL,0x2893EFECL}}, // p_1305->g_285
        0x637AB950D48E6E6EL, // p_1305->g_307
        0xD8E8L, // p_1305->g_321
        0x82L, // p_1305->g_366
        {0x75L,0x75L,0x75L,0x75L,0x75L,0x75L,0x75L,0x75L,0x75L}, // p_1305->g_367
        {{{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL}},{{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL}},{{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL}},{{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL}},{{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL}},{{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL}},{{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL},{4UL,4UL,1UL}}}, // p_1305->g_368
        1UL, // p_1305->g_369
        {{&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366},{&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366},{&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366},{&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366},{&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366},{&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366},{&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366,&p_1305->g_366}}, // p_1305->g_365
        &p_1305->g_365[6][6], // p_1305->g_364
        &p_1305->g_92.f1, // p_1305->g_379
        {4294967295UL,0x3AL,0x0C3FC633L,0x36B0DB3FL,1L,0x9B5EL,4294967295UL,0x0375822D8EBAD7CEL}, // p_1305->g_381
        4294967295UL, // p_1305->g_424
        {{{&p_1305->g_70[5],&p_1305->g_70[2],&p_1305->g_70[4],(void*)0,&p_1305->g_70[4],&p_1305->g_70[5],(void*)0,(void*)0,(void*)0,&p_1305->g_70[5]},{&p_1305->g_70[5],&p_1305->g_70[2],&p_1305->g_70[4],(void*)0,&p_1305->g_70[4],&p_1305->g_70[5],(void*)0,(void*)0,(void*)0,&p_1305->g_70[5]}},{{&p_1305->g_70[5],&p_1305->g_70[2],&p_1305->g_70[4],(void*)0,&p_1305->g_70[4],&p_1305->g_70[5],(void*)0,(void*)0,(void*)0,&p_1305->g_70[5]},{&p_1305->g_70[5],&p_1305->g_70[2],&p_1305->g_70[4],(void*)0,&p_1305->g_70[4],&p_1305->g_70[5],(void*)0,(void*)0,(void*)0,&p_1305->g_70[5]}}}, // p_1305->g_456
        {&p_1305->g_456[0][0][7],&p_1305->g_456[0][0][7],&p_1305->g_456[0][0][7],&p_1305->g_456[0][0][7],&p_1305->g_456[0][0][7],&p_1305->g_456[0][0][7],&p_1305->g_456[0][0][7],&p_1305->g_456[0][0][7]}, // p_1305->g_455
        &p_1305->g_455[7], // p_1305->g_454
        {&p_1305->g_454,&p_1305->g_454,&p_1305->g_454,&p_1305->g_454,&p_1305->g_454,&p_1305->g_454}, // p_1305->g_453
        &p_1305->g_453[3], // p_1305->g_452
        0xC4D97326L, // p_1305->g_483
        &p_1305->g_483, // p_1305->g_482
        &p_1305->g_482, // p_1305->g_481
        {&p_1305->g_238,&p_1305->g_238,&p_1305->g_238,&p_1305->g_238,&p_1305->g_238,&p_1305->g_238,&p_1305->g_238}, // p_1305->g_492
        {{&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1]},{&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1]},{&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1]},{&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1]},{&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1]},{&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1]},{&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1]},{&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1]},{&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1],&p_1305->g_492[1]}}, // p_1305->g_491
        {{{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL}},{{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL}},{{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL}},{{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL}},{{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL},{0x1976L,0x97BBL}}}, // p_1305->g_563
        &p_1305->g_31, // p_1305->g_620
        0UL, // p_1305->g_676
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1305->g_739
        &p_1305->g_739[5], // p_1305->g_738
        (void*)0, // p_1305->g_758
        1L, // p_1305->g_760
        0x61086968L, // p_1305->g_792
        &p_1305->g_792, // p_1305->g_791
        &p_1305->g_791, // p_1305->g_790
        1UL, // p_1305->g_811
        0x9B4FCAE142133E4AL, // p_1305->g_813
        0x7E9FE1E6L, // p_1305->g_859
        {{0x36L,6L,0x36L,0x36L},{0x36L,6L,0x36L,0x36L},{0x36L,6L,0x36L,0x36L},{0x36L,6L,0x36L,0x36L},{0x36L,6L,0x36L,0x36L},{0x36L,6L,0x36L,0x36L}}, // p_1305->g_872
        {1L}, // p_1305->g_937
        (void*)0, // p_1305->g_975
        &p_1305->g_975, // p_1305->g_974
        &p_1305->g_859, // p_1305->g_1007
        0x6A3AD01BE5D0AB7BL, // p_1305->g_1014
        &p_1305->g_859, // p_1305->g_1017
        0xCF73L, // p_1305->g_1018
        &p_1305->g_92.f6, // p_1305->g_1022
        &p_1305->g_1022, // p_1305->g_1021
        {&p_1305->g_70[6],&p_1305->g_70[6],&p_1305->g_70[6],&p_1305->g_70[6],&p_1305->g_70[6],&p_1305->g_70[6],&p_1305->g_70[6],&p_1305->g_70[6],&p_1305->g_70[6]}, // p_1305->g_1024
        (-5L), // p_1305->g_1096
        0x639D9299L, // p_1305->g_1203
        (void*)0, // p_1305->g_1210
        &p_1305->g_1210, // p_1305->g_1209
        {{{&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92},{&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92},{&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92},{&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92},{&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92},{&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92},{&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92,&p_1305->g_92}}}, // p_1305->g_1216
        0L, // p_1305->g_1235
        65535UL, // p_1305->g_1296
    };
    c_1306 = c_1307;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1305);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1305->g_12[i], "p_1305->g_12[i]", print_hash_value);

    }
    transparent_crc(p_1305->g_14, "p_1305->g_14", print_hash_value);
    transparent_crc(p_1305->g_15, "p_1305->g_15", print_hash_value);
    transparent_crc(p_1305->g_16, "p_1305->g_16", print_hash_value);
    transparent_crc(p_1305->g_21, "p_1305->g_21", print_hash_value);
    transparent_crc(p_1305->g_22, "p_1305->g_22", print_hash_value);
    transparent_crc(p_1305->g_35, "p_1305->g_35", print_hash_value);
    transparent_crc(p_1305->g_92.f0, "p_1305->g_92.f0", print_hash_value);
    transparent_crc(p_1305->g_92.f1, "p_1305->g_92.f1", print_hash_value);
    transparent_crc(p_1305->g_92.f2, "p_1305->g_92.f2", print_hash_value);
    transparent_crc(p_1305->g_92.f3, "p_1305->g_92.f3", print_hash_value);
    transparent_crc(p_1305->g_92.f4, "p_1305->g_92.f4", print_hash_value);
    transparent_crc(p_1305->g_92.f5, "p_1305->g_92.f5", print_hash_value);
    transparent_crc(p_1305->g_92.f6, "p_1305->g_92.f6", print_hash_value);
    transparent_crc(p_1305->g_92.f7, "p_1305->g_92.f7", print_hash_value);
    transparent_crc(p_1305->g_124, "p_1305->g_124", print_hash_value);
    transparent_crc(p_1305->g_126, "p_1305->g_126", print_hash_value);
    transparent_crc(p_1305->g_128, "p_1305->g_128", print_hash_value);
    transparent_crc(p_1305->g_130, "p_1305->g_130", print_hash_value);
    transparent_crc(p_1305->g_197, "p_1305->g_197", print_hash_value);
    transparent_crc(p_1305->g_232, "p_1305->g_232", print_hash_value);
    transparent_crc(p_1305->g_236, "p_1305->g_236", print_hash_value);
    transparent_crc(p_1305->g_238, "p_1305->g_238", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1305->g_285[i][j], "p_1305->g_285[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1305->g_307, "p_1305->g_307", print_hash_value);
    transparent_crc(p_1305->g_321, "p_1305->g_321", print_hash_value);
    transparent_crc(p_1305->g_366, "p_1305->g_366", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1305->g_367[i], "p_1305->g_367[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1305->g_368[i][j][k], "p_1305->g_368[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1305->g_369, "p_1305->g_369", print_hash_value);
    transparent_crc(p_1305->g_381.f0, "p_1305->g_381.f0", print_hash_value);
    transparent_crc(p_1305->g_381.f1, "p_1305->g_381.f1", print_hash_value);
    transparent_crc(p_1305->g_381.f2, "p_1305->g_381.f2", print_hash_value);
    transparent_crc(p_1305->g_381.f3, "p_1305->g_381.f3", print_hash_value);
    transparent_crc(p_1305->g_381.f4, "p_1305->g_381.f4", print_hash_value);
    transparent_crc(p_1305->g_381.f5, "p_1305->g_381.f5", print_hash_value);
    transparent_crc(p_1305->g_381.f6, "p_1305->g_381.f6", print_hash_value);
    transparent_crc(p_1305->g_381.f7, "p_1305->g_381.f7", print_hash_value);
    transparent_crc(p_1305->g_424, "p_1305->g_424", print_hash_value);
    transparent_crc(p_1305->g_483, "p_1305->g_483", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1305->g_563[i][j][k], "p_1305->g_563[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1305->g_676, "p_1305->g_676", print_hash_value);
    transparent_crc(p_1305->g_760, "p_1305->g_760", print_hash_value);
    transparent_crc(p_1305->g_792, "p_1305->g_792", print_hash_value);
    transparent_crc(p_1305->g_811, "p_1305->g_811", print_hash_value);
    transparent_crc(p_1305->g_813, "p_1305->g_813", print_hash_value);
    transparent_crc(p_1305->g_859, "p_1305->g_859", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1305->g_872[i][j], "p_1305->g_872[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1305->g_1014, "p_1305->g_1014", print_hash_value);
    transparent_crc(p_1305->g_1018, "p_1305->g_1018", print_hash_value);
    transparent_crc(p_1305->g_1096, "p_1305->g_1096", print_hash_value);
    transparent_crc(p_1305->g_1203, "p_1305->g_1203", print_hash_value);
    transparent_crc(p_1305->g_1235, "p_1305->g_1235", print_hash_value);
    transparent_crc(p_1305->g_1296, "p_1305->g_1296", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
