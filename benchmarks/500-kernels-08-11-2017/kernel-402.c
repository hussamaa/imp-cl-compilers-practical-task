// --atomics 1 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 49,71,1 -l 7,1,1
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

__constant uint32_t permutations[10][7] = {
{4,3,1,5,2,0,6}, // permutation 0
{5,0,2,6,4,3,1}, // permutation 1
{2,3,1,4,5,6,0}, // permutation 2
{4,0,6,2,3,1,5}, // permutation 3
{1,5,4,6,3,2,0}, // permutation 4
{5,0,6,1,3,4,2}, // permutation 5
{4,6,5,1,3,0,2}, // permutation 6
{5,0,6,4,2,3,1}, // permutation 7
{1,2,0,3,6,5,4}, // permutation 8
{2,5,6,3,4,0,1} // permutation 9
};

// Seed: 43491860

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   int16_t  f1;
   int64_t  f2;
   int64_t  f3;
   volatile int32_t  f4;
};

struct S1 {
   int64_t  f0;
};

union U2 {
   int8_t * f0;
   uint64_t  f1;
};

union U3 {
   int64_t  f0;
};

struct S4 {
    int8_t g_8;
    int8_t *g_7;
    volatile VECTOR(uint16_t, 2) g_41;
    struct S1 g_53;
    int32_t g_90;
    uint32_t g_105;
    uint32_t g_107[2];
    uint32_t g_116;
    uint8_t g_129[9];
    union U3 g_149;
    uint64_t g_152;
    VECTOR(int32_t, 4) g_154;
    VECTOR(int32_t, 8) g_156;
    VECTOR(int32_t, 2) g_162;
    VECTOR(uint8_t, 8) g_167;
    VECTOR(uint8_t, 2) g_168;
    VECTOR(int32_t, 2) g_183;
    uint64_t g_228;
    volatile struct S0 g_234;
    volatile struct S0 *g_233;
    VECTOR(int8_t, 8) g_237;
    VECTOR(uint32_t, 4) g_261;
    struct S0 g_288[2];
    struct S0 g_292;
    VECTOR(uint32_t, 16) g_312;
    VECTOR(uint32_t, 8) g_338;
    int64_t *g_341;
    int16_t *g_359;
    int8_t g_388;
    uint32_t g_390;
    VECTOR(int16_t, 4) g_403;
    VECTOR(int32_t, 16) g_408;
    volatile struct S1 *g_421;
    volatile struct S1 **g_420;
    uint32_t g_427;
    VECTOR(uint8_t, 8) g_428;
    VECTOR(uint8_t, 4) g_444;
    int32_t g_448;
    int64_t **g_455;
    int64_t ***g_454;
    volatile int32_t g_461;
    volatile int32_t * volatile g_460;
    volatile int32_t g_463;
    volatile int32_t * volatile g_462;
    volatile int32_t g_465;
    volatile int32_t *g_464;
    volatile int32_t * volatile *g_459[6][4][3];
    uint32_t g_468;
    int32_t *g_477;
    uint32_t *g_484;
    volatile uint32_t g_486;
    volatile uint32_t *g_485;
    struct S0 g_514;
    volatile union U2 g_519;
    volatile union U2 *g_518;
    VECTOR(uint16_t, 2) g_550;
    volatile union U3 g_585;
    volatile union U3 *g_584;
    volatile union U3 **g_583;
    VECTOR(uint32_t, 4) g_619;
    VECTOR(uint32_t, 2) g_621;
    VECTOR(uint32_t, 16) g_622;
    VECTOR(int8_t, 8) g_626;
    VECTOR(int32_t, 2) g_636;
    struct S1 *g_668;
    struct S1 *g_671;
    VECTOR(uint16_t, 8) g_680;
    struct S1 **g_689[9][7][4];
    uint32_t g_690;
    VECTOR(uint16_t, 2) g_699;
    VECTOR(uint32_t, 4) g_716;
    int64_t g_724[7];
    VECTOR(uint16_t, 4) g_738;
    uint8_t g_794;
    VECTOR(uint32_t, 8) g_795;
    VECTOR(int32_t, 4) g_820;
    VECTOR(int32_t, 2) g_824;
    union U2 g_846;
    VECTOR(int64_t, 8) g_851;
    VECTOR(uint16_t, 16) g_894;
    VECTOR(uint16_t, 16) g_895;
    VECTOR(uint16_t, 2) g_898;
    VECTOR(int32_t, 8) g_901;
    struct S0 g_935;
    VECTOR(int64_t, 4) g_951;
    int64_t ****g_955;
    VECTOR(int64_t, 16) g_958;
    VECTOR(int16_t, 4) g_991;
    struct S0 g_999;
    VECTOR(uint8_t, 4) g_1013;
    struct S0 g_1018;
    int8_t *g_1036;
    uint8_t g_1044;
    VECTOR(uint64_t, 16) g_1049;
    VECTOR(uint64_t, 8) g_1050;
    VECTOR(int16_t, 8) g_1065;
    VECTOR(uint16_t, 8) g_1066;
    struct S0 g_1090;
    int32_t g_1107;
    VECTOR(int64_t, 16) g_1162;
    VECTOR(uint16_t, 4) g_1164;
    VECTOR(int32_t, 2) g_1174;
    VECTOR(int32_t, 2) g_1176;
    VECTOR(int32_t, 2) g_1177;
    VECTOR(uint8_t, 8) g_1182;
    VECTOR(int8_t, 2) g_1189;
    VECTOR(int16_t, 8) g_1222;
    VECTOR(int16_t, 16) g_1223;
    VECTOR(uint16_t, 16) g_1224;
    VECTOR(int32_t, 2) g_1245;
    uint32_t *g_1272;
    uint32_t * volatile *g_1271;
    VECTOR(int32_t, 2) g_1308;
    volatile uint32_t * volatile *g_1371;
    VECTOR(int32_t, 2) g_1385;
    int64_t g_1396;
    uint32_t g_1398;
    VECTOR(uint16_t, 8) g_1401;
    int32_t g_1432;
    int32_t ** volatile g_1444;
    volatile VECTOR(int32_t, 2) g_1464;
    VECTOR(int32_t, 4) g_1465;
    uint16_t *g_1479;
    union U3 *** volatile g_1493;
    union U3 *g_1496[6];
    union U3 **g_1495[2];
    union U3 *** volatile g_1494;
    VECTOR(uint8_t, 16) g_1499;
    union U2 *g_1549[5];
    volatile struct S0 g_1550;
    struct S1 ** volatile g_1551;
    volatile VECTOR(int32_t, 8) g_1553;
    int32_t ** volatile g_1560[4];
    int32_t ** volatile g_1561;
    VECTOR(uint16_t, 2) g_1585;
    VECTOR(int16_t, 8) g_1586;
    union U2 ** volatile g_1603;
    volatile struct S0 g_1609[10];
    uint16_t g_1612;
    volatile VECTOR(int32_t, 8) g_1613;
    struct S0 g_1657;
    volatile VECTOR(int32_t, 16) g_1664;
    int32_t ** volatile g_1690;
    VECTOR(uint8_t, 2) g_1702;
    volatile VECTOR(uint8_t, 8) g_1703;
    volatile VECTOR(uint64_t, 2) g_1739;
    VECTOR(uint64_t, 16) g_1741;
    volatile VECTOR(uint64_t, 2) g_1742;
    volatile uint64_t *g_1751;
    volatile uint64_t * volatile *g_1750;
    VECTOR(uint32_t, 16) g_1755;
    volatile uint16_t g_1769;
    volatile VECTOR(int64_t, 2) g_1776;
    int32_t ** volatile g_1789;
    uint32_t **g_1819;
    volatile VECTOR(int8_t, 16) g_1861;
    int32_t g_1882;
    int8_t g_1883[1];
    VECTOR(int32_t, 2) g_1888;
    VECTOR(int16_t, 4) g_1892;
    VECTOR(int16_t, 16) g_1893;
    VECTOR(uint8_t, 4) g_1901;
    int32_t ** volatile g_1928[10][3][8];
    VECTOR(uint32_t, 2) g_1943;
    volatile VECTOR(int32_t, 16) g_1952;
    int16_t * volatile *g_1955;
    int16_t * volatile ** volatile g_1954;
    volatile VECTOR(int32_t, 4) g_1971;
    union U3 ***g_1985;
    VECTOR(int64_t, 8) g_2004;
    VECTOR(int64_t, 4) g_2005;
    int32_t ** volatile g_2017;
    int32_t g_2030[9][6][3];
    int32_t ** volatile g_2059;
    volatile struct S0 * volatile *g_2091[10];
    volatile struct S0 * volatile ** volatile g_2090;
    struct S0 g_2095[2][10];
    int32_t g_2103;
    VECTOR(uint8_t, 4) g_2111;
    struct S0 g_2127[9];
    int32_t ** volatile g_2163[6][2];
    int32_t ** volatile g_2164;
    int32_t ** volatile g_2165;
    struct S0 g_2166;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S4 * p_2167);
struct S0  func_2(int8_t * p_3, int32_t  p_4, union U3  p_5, struct S1  p_6, struct S4 * p_2167);
int8_t * func_9(int32_t  p_10, struct S4 * p_2167);
int32_t  func_11(int8_t  p_12, struct S4 * p_2167);
int8_t  func_26(int8_t * p_27, int8_t * p_28, struct S4 * p_2167);
union U2  func_42(int32_t  p_43, int32_t  p_44, int64_t  p_45, union U3  p_46, struct S1  p_47, struct S4 * p_2167);
int32_t  func_48(int8_t  p_49, uint64_t  p_50, struct S4 * p_2167);
struct S1  func_51(struct S1  p_52, struct S4 * p_2167);
int32_t * func_54(int16_t  p_55, int8_t * p_56, int32_t  p_57, union U3  p_58, struct S4 * p_2167);
int16_t  func_59(int8_t * p_60, union U3  p_61, int32_t * p_62, int32_t * p_63, int32_t * p_64, struct S4 * p_2167);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2167->g_7 p_2167->g_comm_values p_2167->g_8 p_2167->g_1036 p_2167->g_388 p_2167->g_454 p_2167->g_455 p_2167->g_341 p_2167->g_292.f2 p_2167->g_448 p_2167->g_288.f3 p_2167->g_1741 p_2167->g_1943 p_2167->g_584 p_2167->g_585 p_2167->g_1952 p_2167->g_1954 p_2167->g_1955 p_2167->g_359 p_2167->g_288.f1 p_2167->g_1882 p_2167->g_1893 p_2167->g_1702 p_2167->g_1971 p_2167->g_955 p_2167->g_116 p_2167->g_1888 p_2167->g_292.f0 p_2167->g_233 p_2167->g_234 p_2167->g_1901 p_2167->g_2004 p_2167->g_2005 p_2167->g_851 p_2167->g_1224 p_2167->g_951 p_2167->g_2017 p_2167->g_1609.f2 p_2167->g_668 p_2167->g_1018.f3 p_2167->g_403 p_2167->g_1182 p_2167->g_1550.f2 p_2167->g_2059 p_2167->g_464 p_2167->g_465 p_2167->g_1385 p_2167->g_2090 p_2167->g_1090.f3 p_2167->g_2103 p_2167->g_2111 p_2167->g_1090.f0 p_2167->g_514.f2 p_2167->g_2127 p_2167->g_1164 p_2167->g_228 p_2167->g_1162 p_2167->g_2165 p_2167->g_2166
 * writes: p_2167->g_8 p_2167->g_1882 p_2167->g_1612 p_2167->g_1702 p_2167->g_455 p_2167->g_116 p_2167->g_1985 p_2167->g_1888 p_2167->g_292.f0 p_2167->g_1901 p_2167->g_288.f1 p_2167->g_477 p_2167->g_53 p_2167->g_2030 p_2167->g_1018.f3 p_2167->g_2103 p_2167->g_448 p_2167->g_1090.f0 p_2167->g_514.f2 p_2167->g_234 p_2167->g_228
 */
int16_t  func_1(struct S4 * p_2167)
{ /* block id: 4 */
    int32_t l_21[4];
    VECTOR(uint32_t, 2) l_22 = (VECTOR(uint32_t, 2))(4294967290UL, 0x05EF1355L);
    VECTOR(uint32_t, 4) l_23 = (VECTOR(uint32_t, 4))(0xD253D975L, (VECTOR(uint32_t, 2))(0xD253D975L, 0x3020F620L), 0x3020F620L);
    int8_t *l_29 = &p_2167->g_8;
    int8_t l_1930[4][6][10] = {{{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL}},{{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL}},{{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL}},{{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL},{0x6CL,(-1L),0x78L,(-1L),0x6CL,0x51L,0L,0x13L,(-1L),0x4AL}}};
    uint16_t l_1931 = 0x7E19L;
    int8_t **l_2157[2][2];
    int8_t *l_2158 = &p_2167->g_1883[0];
    union U3 l_2159 = {0x643F0FDE7FA2B54AL};
    struct S1 l_2160 = {4L};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_21[i] = 1L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_2157[i][j] = &p_2167->g_1036;
    }
    (*p_2167->g_233) = func_2(p_2167->g_7, (!((l_2158 = func_9(func_11(((*p_2167->g_7) = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(1UL, 0x12530A9BCA7B5CF1L, 1UL, 0x3D2717F4039EE491L)))))).hi)), 0xB42BE197E7C14AB6L, 18446744073709551615UL)).y != (safe_mod_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u(((p_2167->g_comm_values[p_2167->tid] != (safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(l_21[1], ((0x67L | (0x494DFD99643747C9L && ((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 8))(l_22.xxyyxxxy)), ((VECTOR(uint32_t, 2))(l_23.zw)).xyxxyxyx))).s5)) || (safe_lshift_func_int8_t_s_s(func_26(l_29, l_29, p_2167), 4))))), ((((l_22.y , (***p_2167->g_454)) && l_1930[3][1][9]) >= p_2167->g_448) | p_2167->g_288[1].f3)))) , l_23.z), l_22.x)) , l_1931) <= l_22.y), p_2167->g_1741.s5)))), p_2167), p_2167)) != (void*)0)), l_2159, l_2160, p_2167);
    return (**p_2167->g_1955);
}


/* ------------------------------------------ */
/* 
 * reads : p_2167->g_2165 p_2167->g_2166
 * writes: p_2167->g_477
 */
struct S0  func_2(int8_t * p_3, int32_t  p_4, union U3  p_5, struct S1  p_6, struct S4 * p_2167)
{ /* block id: 887 */
    int32_t *l_2161[7] = {&p_2167->g_1107,&p_2167->g_90,&p_2167->g_1107,&p_2167->g_1107,&p_2167->g_90,&p_2167->g_1107,&p_2167->g_1107};
    int32_t **l_2162 = &l_2161[6];
    int i;
    (*p_2167->g_2165) = ((*l_2162) = l_2161[6]);
    return p_2167->g_2166;
}


/* ------------------------------------------ */
/* 
 * reads : p_2167->g_2090 p_2167->g_1090.f3 p_2167->g_2103 p_2167->g_7 p_2167->g_8 p_2167->g_359 p_2167->g_288.f1 p_2167->g_448 p_2167->g_2111 p_2167->g_1090.f0 p_2167->g_514.f2 p_2167->g_2127 p_2167->g_233 p_2167->g_1954 p_2167->g_1955 p_2167->g_455 p_2167->g_341 p_2167->g_292.f2 p_2167->g_1164 p_2167->g_228 p_2167->g_1162 p_2167->g_668
 * writes: p_2167->g_2103 p_2167->g_448 p_2167->g_1090.f0 p_2167->g_514.f2 p_2167->g_234 p_2167->g_228 p_2167->g_53
 */
int8_t * func_9(int32_t  p_10, struct S4 * p_2167)
{ /* block id: 859 */
    int32_t *l_2081 = &p_2167->g_448;
    int32_t *l_2082 = (void*)0;
    int32_t *l_2083[1][2];
    int64_t l_2084[8];
    uint32_t l_2085[2];
    struct S0 *l_2094 = &p_2167->g_2095[0][0];
    struct S0 **l_2093 = &l_2094;
    struct S0 ***l_2092 = &l_2093;
    int32_t l_2100 = 0x60FEA827L;
    int32_t *l_2101 = (void*)0;
    int32_t *l_2102 = &p_2167->g_2103;
    int8_t *l_2108[8][6][1] = {{{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]}},{{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]}},{{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]}},{{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]}},{{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]}},{{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]}},{{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]}},{{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]},{&p_2167->g_1883[0]}}};
    uint32_t l_2116 = 9UL;
    int64_t l_2130 = 0x22322D9C916FF948L;
    uint32_t l_2131 = 0x27363994L;
    int64_t l_2134 = 0x2A035249E7C4A53CL;
    int8_t l_2135 = 0x62L;
    int32_t l_2136 = 3L;
    int32_t l_2137 = 1L;
    uint8_t l_2138[1];
    int64_t **l_2144[4][8][6] = {{{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341}},{{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341}},{{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341}},{{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341},{&p_2167->g_341,(void*)0,(void*)0,&p_2167->g_341,&p_2167->g_341,&p_2167->g_341}}};
    struct S1 ***l_2145 = &p_2167->g_689[6][6][3];
    union U2 l_2148 = {0};
    uint64_t *l_2152 = &p_2167->g_228;
    uint64_t **l_2151[7][6][4] = {{{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152}},{{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152}},{{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152}},{{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152}},{{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152}},{{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152}},{{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152},{&l_2152,&l_2152,(void*)0,&l_2152}}};
    uint16_t *l_2153 = (void*)0;
    uint16_t *l_2154 = (void*)0;
    union U3 l_2155 = {2L};
    struct S1 l_2156 = {-2L};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_2083[i][j] = (void*)0;
    }
    for (i = 0; i < 8; i++)
        l_2084[i] = (-5L);
    for (i = 0; i < 2; i++)
        l_2085[i] = 0x2A5E9BBFL;
    for (i = 0; i < 1; i++)
        l_2138[i] = 0xAFL;
    ++l_2085[0];
    if ((p_10 , ((safe_div_func_uint32_t_u_u((p_2167->g_2090 == l_2092), (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_2100, (((*l_2102) &= p_2167->g_1090.f3) , 1L))), ((*p_2167->g_7) == (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_10, (l_2108[5][5][0] != (void*)0))), (*p_2167->g_359)))))))) >= (*l_2081))))
    { /* block id: 862 */
        int32_t *l_2112 = (void*)0;
        int32_t l_2113 = (-1L);
        int32_t l_2114 = (-1L);
        int32_t l_2115 = 0L;
        (*l_2081) ^= (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(p_2167->g_2111.xxxxzzyzxzwwzxyx)).s9, ((((void*)0 != l_2112) , (((void*)0 == &p_2167->g_1272) || p_10)) != p_10)));
        l_2116--;
        for (p_2167->g_1090.f0 = 12; (p_2167->g_1090.f0 == 12); p_2167->g_1090.f0++)
        { /* block id: 867 */
            int8_t *l_2121[1][9];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 9; j++)
                    l_2121[i][j] = &p_2167->g_1883[0];
            }
            return l_2121[0][6];
        }
        for (p_2167->g_514.f2 = 22; (p_2167->g_514.f2 > (-6)); p_2167->g_514.f2 = safe_sub_func_int8_t_s_s(p_2167->g_514.f2, 8))
        { /* block id: 872 */
            int32_t *l_2124 = (void*)0;
            int32_t **l_2125 = &l_2124;
            int32_t **l_2126 = &l_2082;
            (*l_2126) = ((*l_2125) = l_2124);
        }
    }
    else
    { /* block id: 876 */
        int16_t l_2128 = 0x3EC1L;
        int32_t l_2129[1][6][4] = {{{0x4F8E3D72L,0x36EF9A93L,0x36EF9A93L,0x4F8E3D72L},{0x4F8E3D72L,0x36EF9A93L,0x36EF9A93L,0x4F8E3D72L},{0x4F8E3D72L,0x36EF9A93L,0x36EF9A93L,0x4F8E3D72L},{0x4F8E3D72L,0x36EF9A93L,0x36EF9A93L,0x4F8E3D72L},{0x4F8E3D72L,0x36EF9A93L,0x36EF9A93L,0x4F8E3D72L},{0x4F8E3D72L,0x36EF9A93L,0x36EF9A93L,0x4F8E3D72L}}};
        int i, j, k;
        (*p_2167->g_233) = p_2167->g_2127[7];
        l_2131++;
    }
    --l_2138[0];
    (*p_2167->g_668) = (((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 2))((-1L), 0x4F18L)).yxyxxxxy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))((((***p_2167->g_1954) | (l_2144[2][2][0] == (void*)0)) | ((~(((*l_2081) = (l_2145 != ((((*l_2152) |= (+(((safe_mod_func_int64_t_s_s(((l_2148 , (**p_2167->g_455)) < (-1L)), (safe_mod_func_int32_t_s_s(((l_2151[4][2][1] = (void*)0) == (void*)0), p_2167->g_1164.y)))) >= (*l_2081)) | (*l_2081)))) , 4294967291UL) , &p_2167->g_420))) ^ GROUP_DIVERGE(2, 1))) < (**p_2167->g_1955))), 0x3682L, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))((-10L))), (*p_2167->g_359), ((VECTOR(int16_t, 2))(0x6B2DL)), 0x3D5CL, 9L, 1L)).even, (int16_t)0x6A98L)))))))).s0)), p_2167->g_1162.sa)) , l_2155) , l_2156);
    return &p_2167->g_1883[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_2167->g_1943 p_2167->g_584 p_2167->g_585 p_2167->g_1952 p_2167->g_1954 p_2167->g_1955 p_2167->g_359 p_2167->g_288.f1 p_2167->g_1882 p_2167->g_1893 p_2167->g_1702 p_2167->g_1971 p_2167->g_955 p_2167->g_454 p_2167->g_455 p_2167->g_116 p_2167->g_1888 p_2167->g_292.f0 p_2167->g_233 p_2167->g_234 p_2167->g_1901 p_2167->g_7 p_2167->g_8 p_2167->g_2004 p_2167->g_2005 p_2167->g_851 p_2167->g_1224 p_2167->g_951 p_2167->g_2017 p_2167->g_1609.f2 p_2167->g_668 p_2167->g_1018.f3 p_2167->g_403 p_2167->g_1182 p_2167->g_1036 p_2167->g_388 p_2167->g_1550.f2 p_2167->g_2059 p_2167->g_464 p_2167->g_465 p_2167->g_1385
 * writes: p_2167->g_1882 p_2167->g_1612 p_2167->g_1702 p_2167->g_455 p_2167->g_116 p_2167->g_1985 p_2167->g_1888 p_2167->g_292.f0 p_2167->g_1901 p_2167->g_288.f1 p_2167->g_477 p_2167->g_53 p_2167->g_2030 p_2167->g_1018.f3
 */
int32_t  func_11(int8_t  p_12, struct S4 * p_2167)
{ /* block id: 798 */
    int16_t l_1932 = 0x4FC6L;
    uint64_t *l_1946 = &p_2167->g_228;
    int64_t *****l_1947[7][6][4] = {{{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0}},{{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0}},{{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0}},{{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0}},{{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0}},{{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0}},{{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0},{&p_2167->g_955,&p_2167->g_955,&p_2167->g_955,(void*)0}}};
    int32_t *l_1948 = (void*)0;
    int32_t *l_1949 = (void*)0;
    int32_t *l_1950 = &p_2167->g_1882;
    VECTOR(int32_t, 8) l_1951 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x74EA79FFL), 0x74EA79FFL), 0x74EA79FFL, (-1L), 0x74EA79FFL);
    VECTOR(uint16_t, 4) l_1953 = (VECTOR(uint16_t, 4))(0x70D8L, (VECTOR(uint16_t, 2))(0x70D8L, 0xA810L), 0xA810L);
    int16_t **l_1957 = &p_2167->g_359;
    int16_t ***l_1956 = &l_1957;
    uint32_t l_1958 = 4294967292UL;
    uint16_t *l_1959 = (void*)0;
    uint16_t *l_1960 = (void*)0;
    uint16_t *l_1961 = (void*)0;
    uint16_t *l_1962 = &p_2167->g_1612;
    int8_t l_1963[9][6] = {{1L,1L,0x3DL,0x69L,(-4L),0x69L},{1L,1L,0x3DL,0x69L,(-4L),0x69L},{1L,1L,0x3DL,0x69L,(-4L),0x69L},{1L,1L,0x3DL,0x69L,(-4L),0x69L},{1L,1L,0x3DL,0x69L,(-4L),0x69L},{1L,1L,0x3DL,0x69L,(-4L),0x69L},{1L,1L,0x3DL,0x69L,(-4L),0x69L},{1L,1L,0x3DL,0x69L,(-4L),0x69L},{1L,1L,0x3DL,0x69L,(-4L),0x69L}};
    uint8_t *l_1964[2];
    uint16_t l_1965 = 0x3241L;
    int32_t *l_1966 = (void*)0;
    int32_t *l_1967 = (void*)0;
    int32_t l_1968 = 4L;
    union U2 l_1972 = {0};
    VECTOR(uint32_t, 2) l_1977 = (VECTOR(uint32_t, 2))(1UL, 0x62994B8CL);
    union U3 ***l_1984 = &p_2167->g_1495[1];
    int8_t l_2010 = (-9L);
    int32_t l_2022 = 0x5C154CD3L;
    uint16_t l_2032 = 0xA838L;
    VECTOR(uint16_t, 8) l_2044 = (VECTOR(uint16_t, 8))(0x1C05L, (VECTOR(uint16_t, 4))(0x1C05L, (VECTOR(uint16_t, 2))(0x1C05L, 0UL), 0UL), 0UL, 0x1C05L, 0UL);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1964[i] = (void*)0;
    if ((l_1968 |= ((p_2167->g_1702.x ^= ((((l_1932 ^ ((safe_mod_func_int32_t_s_s((safe_add_func_int64_t_s_s((0x46D46651L && (safe_add_func_uint16_t_u_u(((*l_1962) = (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((VECTOR(uint32_t, 8))(0x69AD41C8L, ((VECTOR(uint32_t, 2))(p_2167->g_1943.xx)), (safe_lshift_func_int8_t_s_s(1L, (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))((((*p_2167->g_584) , l_1946) == (void*)0), 0x78E2EAF0L, 0x33A8B888L, (-4L))).lo, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((*l_1950) = ((void*)0 != l_1947[2][0][0])), ((VECTOR(int32_t, 16))(l_1951.s1206157014121637)).s1, ((VECTOR(int32_t, 4))(p_2167->g_1952.sf43d)), ((((((VECTOR(uint16_t, 4))(l_1953.xyww)).w > (p_2167->g_1954 != l_1956)) != (**p_2167->g_1955)) <= (*l_1950)) ^ GROUP_DIVERGE(2, 1)), ((VECTOR(int32_t, 8))((-7L))), 0x741C5570L)), ((VECTOR(int32_t, 16))(0x1090F2FBL))))).sf0))))).odd , (*l_1950)))), GROUP_DIVERGE(0, 1), GROUP_DIVERGE(2, 1), 4294967292UL, 0xBA4B473DL)).s4 || p_12), l_1958)), 0x38B6L))), 4UL))), p_12)), l_1963[4][5])) || 0x36B8CC40L)) <= 1UL) <= p_12) & p_2167->g_1893.sd)) > l_1965)))
    { /* block id: 803 */
        VECTOR(uint32_t, 4) l_1973 = (VECTOR(uint32_t, 4))(0x3780E4A1L, (VECTOR(uint32_t, 2))(0x3780E4A1L, 0UL), 0UL);
        VECTOR(int32_t, 2) l_1976 = (VECTOR(int32_t, 2))((-5L), 0x551DEAB5L);
        uint32_t *l_1978 = &p_2167->g_116;
        uint32_t *l_1979 = (void*)0;
        uint32_t *l_1980 = (void*)0;
        int32_t l_1981[10][10] = {{(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L},{(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L},{(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L},{(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L},{(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L},{(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L},{(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L},{(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L},{(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L},{(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L,0x6A618BF5L,(-6L),(-6L),0x6A618BF5L}};
        union U3 l_1986 = {0x605D938CDB12CA0DL};
        int32_t l_1987[2];
        VECTOR(uint8_t, 4) l_1997 = (VECTOR(uint8_t, 4))(0x8DL, (VECTOR(uint8_t, 2))(0x8DL, 247UL), 247UL);
        struct S1 l_2027 = {0L};
        int i, j;
        for (i = 0; i < 2; i++)
            l_1987[i] = 0L;
        p_2167->g_1888.y |= (((l_1987[1] ^= (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4UL, 0x4700DD48L)), 4294967287UL, 0xF7DA5F03L)).zyxyxxxwzzzzyzwx, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 16))(p_2167->g_1971.yzxxxyyzzzxwzwxz)).s91, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))((l_1972 , (((l_1973.x , (void*)0) == ((*p_2167->g_454) = (**p_2167->g_955))) >= (safe_mul_func_uint16_t_u_u(((((((VECTOR(int32_t, 2))(l_1976.yx)).even <= (l_1981[8][3] = ((*l_1978) &= ((VECTOR(uint32_t, 8))(1UL, ((VECTOR(uint32_t, 4))(l_1977.xxxy)), 0UL, 4294967295UL, 0x7650E177L)).s0))) <= (safe_mul_func_uint8_t_u_u(((p_2167->g_1985 = l_1984) != l_1984), p_12))) && (l_1986 , (p_12 , (*l_1950)))) != 0x78DCL), (*p_2167->g_359))))), ((VECTOR(int32_t, 4))(2L)), 0x3C09B54BL, 0x6CA53941L, ((VECTOR(int32_t, 4))(0x641CB402L)), ((VECTOR(int32_t, 2))(0x76B1021BL)), ((VECTOR(int32_t, 2))(3L)), 0x469828AEL)).s58, (int32_t)0L))).xyyxxyxxyyxxyyxx, ((VECTOR(int32_t, 16))((-2L))), ((VECTOR(int32_t, 16))(0x576ADC4BL))))).sac))))), ((VECTOR(uint32_t, 2))(1UL))))).yxyxyyyxxxyyxyyx))).s5d1a, ((VECTOR(uint32_t, 4))(0x425D56D3L))))).wwzzxwyxxwzxzzzy)).s9, 4294967295UL))) , 1L) , l_1981[8][3]);
        if ((safe_rshift_func_uint16_t_u_u(((*l_1962) = 65530UL), 10)))
        { /* block id: 811 */
            int64_t ****l_1992[4] = {&p_2167->g_454,&p_2167->g_454,&p_2167->g_454,&p_2167->g_454};
            int32_t l_2012[2][1][3];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_2012[i][j][k] = (-5L);
                }
            }
            for (p_2167->g_292.f0 = 0; (p_2167->g_292.f0 > 2); p_2167->g_292.f0 = safe_add_func_uint8_t_u_u(p_2167->g_292.f0, 4))
            { /* block id: 814 */
                int64_t ****l_1993 = &p_2167->g_454;
                VECTOR(int8_t, 4) l_1994 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x13L), 0x13L);
                uint8_t l_2011 = 1UL;
                int i;
                (*l_1950) |= ((((*p_2167->g_233) , (p_12 , (l_1993 = l_1992[0]))) != l_1992[0]) != (p_12 || (p_12 | ((*p_2167->g_359) = ((+((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(3L, (-1L))), (-1L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_1994.zx)), 0x56L, 0x56L)), (-1L))).s3) <= (((safe_mod_func_uint64_t_u_u((((p_2167->g_1901.x ^= ((VECTOR(uint8_t, 2))(l_1997.zx)).even) || (safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((*p_2167->g_7), 6)) , ((+p_12) ^ (((((*l_1978) = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(0x4E4C0E1AA0A40B29L, 0x1AC216379DEA74C8L, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_2167->g_2004.s6123)).wxxyywww)), 0x1CF201076E64F549L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(p_2167->g_2005.wx)))), ((VECTOR(int64_t, 2))(3L, 0x0F004773E91399ABL)), 0x70E7D68F8F4F5EA7L)).s4a31)).y , (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 2))(0x39B70552E89469D5L, 0xEA5012171F3E7F1EL)).xyyxxyyy, ((VECTOR(uint64_t, 2))(18446744073709551615UL, 0x95E53CC8A1E38021L)).yyyxyyyy))).lo)).y , (+(safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(l_2010, 0x692BAA9E2D56DB8BL)), 0UL)))))) & p_2167->g_851.s5) , l_2011) > l_1973.y))), l_2012[1][0][0])) && GROUP_DIVERGE(2, 1)), l_1994.x))) > GROUP_DIVERGE(0, 1)), p_2167->g_1224.s9)) && p_12) != p_2167->g_951.w))))));
            }
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_2167->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[(safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(255UL, 2)), 10))][(safe_mod_func_uint32_t_u_u(p_2167->tid, 7))]));
            return p_12;
        }
        else
        { /* block id: 825 */
            int32_t *l_2015[10][7] = {{&p_2167->g_1107,(void*)0,(void*)0,&l_1981[8][3],&l_1981[1][0],&l_1981[8][3],(void*)0},{&p_2167->g_1107,(void*)0,(void*)0,&l_1981[8][3],&l_1981[1][0],&l_1981[8][3],(void*)0},{&p_2167->g_1107,(void*)0,(void*)0,&l_1981[8][3],&l_1981[1][0],&l_1981[8][3],(void*)0},{&p_2167->g_1107,(void*)0,(void*)0,&l_1981[8][3],&l_1981[1][0],&l_1981[8][3],(void*)0},{&p_2167->g_1107,(void*)0,(void*)0,&l_1981[8][3],&l_1981[1][0],&l_1981[8][3],(void*)0},{&p_2167->g_1107,(void*)0,(void*)0,&l_1981[8][3],&l_1981[1][0],&l_1981[8][3],(void*)0},{&p_2167->g_1107,(void*)0,(void*)0,&l_1981[8][3],&l_1981[1][0],&l_1981[8][3],(void*)0},{&p_2167->g_1107,(void*)0,(void*)0,&l_1981[8][3],&l_1981[1][0],&l_1981[8][3],(void*)0},{&p_2167->g_1107,(void*)0,(void*)0,&l_1981[8][3],&l_1981[1][0],&l_1981[8][3],(void*)0},{&p_2167->g_1107,(void*)0,(void*)0,&l_1981[8][3],&l_1981[1][0],&l_1981[8][3],(void*)0}};
            int32_t **l_2016 = (void*)0;
            int i, j;
            (*p_2167->g_2017) = l_2015[0][1];
            p_2167->g_2030[0][1][0] = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(FAKE_DIVERGE(p_2167->global_1_offset, get_global_id(1), 10), ((*p_2167->g_359) | (l_2022 & (p_2167->g_1609[7].f2 > (safe_sub_func_uint32_t_u_u(0x0B42871CL, (safe_lshift_func_int16_t_s_u((((*p_2167->g_668) = l_2027) , ((safe_sub_func_int32_t_s_s((l_1981[7][5] = ((*l_1950) &= 1L)), 1UL)) | l_1997.z)), 5))))))))), 4));
        }
    }
    else
    { /* block id: 832 */
        int16_t l_2031 = 1L;
        int32_t l_2057 = (-9L);
        struct S1 l_2058 = {-1L};
        int32_t *l_2066 = &l_2057;
        VECTOR(uint8_t, 8) l_2078 = (VECTOR(uint8_t, 8))(0x41L, (VECTOR(uint8_t, 4))(0x41L, (VECTOR(uint8_t, 2))(0x41L, 0x19L), 0x19L), 0x19L, 0x41L, 0x19L);
        VECTOR(uint8_t, 8) l_2079 = (VECTOR(uint8_t, 8))(246UL, (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 0x42L), 0x42L), 0x42L, 246UL, 0x42L);
        int32_t **l_2080 = &p_2167->g_477;
        int i;
        (*l_1950) = l_2031;
        if (l_2032)
        { /* block id: 834 */
            uint8_t l_2035 = 0xA5L;
            uint64_t *l_2045[7] = {&p_2167->g_152,&p_2167->g_152,&p_2167->g_152,&p_2167->g_152,&p_2167->g_152,&p_2167->g_152,&p_2167->g_152};
            int32_t l_2046 = 0x34E1DD45L;
            int i;
            for (p_2167->g_1018.f3 = 3; (p_2167->g_1018.f3 == 14); p_2167->g_1018.f3 = safe_add_func_uint8_t_u_u(p_2167->g_1018.f3, 2))
            { /* block id: 837 */
                return l_2035;
            }
            l_2057 = (((*l_1950) = (safe_mod_func_uint32_t_u_u(((safe_div_func_int8_t_s_s(l_2035, l_2031)) != (safe_mul_func_uint8_t_u_u(p_2167->g_403.w, ((~((l_2046 &= (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_2044.s6243)).x, p_2167->g_1182.s7))) > (safe_mod_func_uint32_t_u_u(((*p_2167->g_233) , 4294967295UL), (safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((*p_2167->g_1036), ((safe_rshift_func_uint16_t_u_u(((void*)0 == &p_2167->g_228), p_12)) | 18446744073709551615UL))), 9UL)), 10)))))) , p_2167->g_1550.f2)))), 0x5020AAA1L))) || l_2031);
            (*p_2167->g_2059) = (l_2058 , &l_2046);
        }
        else
        { /* block id: 844 */
            uint64_t l_2075 = 0x7179BEE8F932CA32L;
            for (l_2010 = (-10); (l_2010 == (-4)); ++l_2010)
            { /* block id: 847 */
                int32_t **l_2062 = (void*)0;
                int32_t **l_2063 = (void*)0;
                int32_t **l_2064 = (void*)0;
                int32_t **l_2065 = &l_1950;
                int32_t l_2067 = 0x481C13B8L;
                int32_t *l_2068 = &p_2167->g_448;
                int32_t *l_2069 = (void*)0;
                int32_t *l_2070 = (void*)0;
                int32_t *l_2071 = (void*)0;
                int32_t *l_2072 = &l_2022;
                int32_t *l_2073 = (void*)0;
                int32_t *l_2074 = &l_2057;
                l_2066 = ((*l_2065) = (void*)0);
                ++l_2075;
            }
            return (*p_2167->g_464);
        }
        (*l_2080) = (l_2066 = ((p_2167->g_1385.y != (((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(l_2078.s1362461064420154)).s5485, ((VECTOR(uint8_t, 2))(l_2079.s50)).yyyx))).x < (*l_2066))) , &l_2057));
    }
    (*l_1950) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-10L), (-1L))), (-3L), 1L)).y;
    return p_12;
}


/* ------------------------------------------ */
/* 
 * reads : p_2167->g_8 p_2167->g_1036 p_2167->g_388
 * writes: p_2167->g_8
 */
int8_t  func_26(int8_t * p_27, int8_t * p_28, struct S4 * p_2167)
{ /* block id: 5 */
    uint16_t l_35 = 0xBEBBL;
    union U2 l_1384 = {0};
    union U3 l_1391 = {1L};
    struct S1 l_1392 = {3L};
    int64_t l_1430[3];
    int32_t l_1439 = 0x70348D8DL;
    uint32_t **l_1485[6] = {&p_2167->g_1272,(void*)0,&p_2167->g_1272,&p_2167->g_1272,(void*)0,&p_2167->g_1272};
    uint32_t ***l_1484 = &l_1485[5];
    int32_t l_1526 = 0L;
    int32_t l_1533 = 0x4952EB24L;
    int32_t l_1534 = (-3L);
    int32_t l_1535 = 0x155AE0A8L;
    int32_t l_1536[4][6] = {{0L,0x54548A9EL,(-1L),0x54548A9EL,0L,0L},{0L,0x54548A9EL,(-1L),0x54548A9EL,0L,0L},{0L,0x54548A9EL,(-1L),0x54548A9EL,0L,0L},{0L,0x54548A9EL,(-1L),0x54548A9EL,0L,0L}};
    int64_t l_1540 = (-1L);
    uint32_t l_1544[5][6] = {{0xF5F9D08AL,0xE9F63118L,0x02D7C287L,0xE9F63118L,0xF5F9D08AL,0xF5F9D08AL},{0xF5F9D08AL,0xE9F63118L,0x02D7C287L,0xE9F63118L,0xF5F9D08AL,0xF5F9D08AL},{0xF5F9D08AL,0xE9F63118L,0x02D7C287L,0xE9F63118L,0xF5F9D08AL,0xF5F9D08AL},{0xF5F9D08AL,0xE9F63118L,0x02D7C287L,0xE9F63118L,0xF5F9D08AL,0xF5F9D08AL},{0xF5F9D08AL,0xE9F63118L,0x02D7C287L,0xE9F63118L,0xF5F9D08AL,0xF5F9D08AL}};
    uint32_t *l_1593 = &p_2167->g_107[0];
    struct S1 *l_1662 = &p_2167->g_53;
    uint16_t l_1688[10][4][6] = {{{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL}},{{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL}},{{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL}},{{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL}},{{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL}},{{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL}},{{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL}},{{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL}},{{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL}},{{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL},{0xEC41L,0x32F8L,65527UL,0xE4C4L,1UL,0x55CCL}}};
    union U3 l_1689 = {0L};
    VECTOR(int32_t, 2) l_1691 = (VECTOR(int32_t, 2))(0x4CA80A67L, 0x5EDEE4B4L);
    int32_t **l_1708 = (void*)0;
    uint8_t l_1746[3][2][10] = {{{6UL,247UL,0x26L,0xA7L,0x60L,6UL,0xA7L,1UL,0xA7L,6UL},{6UL,247UL,0x26L,0xA7L,0x60L,6UL,0xA7L,1UL,0xA7L,6UL}},{{6UL,247UL,0x26L,0xA7L,0x60L,6UL,0xA7L,1UL,0xA7L,6UL},{6UL,247UL,0x26L,0xA7L,0x60L,6UL,0xA7L,1UL,0xA7L,6UL}},{{6UL,247UL,0x26L,0xA7L,0x60L,6UL,0xA7L,1UL,0xA7L,6UL},{6UL,247UL,0x26L,0xA7L,0x60L,6UL,0xA7L,1UL,0xA7L,6UL}}};
    int32_t l_1749[5][1][2];
    union U3 **l_1787[7];
    int64_t l_1835 = 0x4192D0F567D2F727L;
    uint16_t l_1846 = 0x1308L;
    VECTOR(uint16_t, 2) l_1897 = (VECTOR(uint16_t, 2))(3UL, 65535UL);
    VECTOR(uint8_t, 16) l_1902 = (VECTOR(uint8_t, 16))(0xF0L, (VECTOR(uint8_t, 4))(0xF0L, (VECTOR(uint8_t, 2))(0xF0L, 0UL), 0UL), 0UL, 0xF0L, 0UL, (VECTOR(uint8_t, 2))(0xF0L, 0UL), (VECTOR(uint8_t, 2))(0xF0L, 0UL), 0xF0L, 0UL, 0xF0L, 0UL);
    uint64_t l_1927 = 18446744073709551613UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1430[i] = 5L;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_1749[i][j][k] = 0x08537161L;
        }
    }
    for (i = 0; i < 7; i++)
        l_1787[i] = &p_2167->g_1496[5];
    for (p_2167->g_8 = 19; (p_2167->g_8 < 23); p_2167->g_8 = safe_add_func_uint8_t_u_u(p_2167->g_8, 9))
    { /* block id: 8 */
        VECTOR(uint8_t, 4) l_38 = (VECTOR(uint8_t, 4))(0xD4L, (VECTOR(uint8_t, 2))(0xD4L, 252UL), 252UL);
        VECTOR(uint16_t, 4) l_39 = (VECTOR(uint16_t, 4))(0x6FACL, (VECTOR(uint16_t, 2))(0x6FACL, 0xDF6FL), 0xDF6FL);
        int32_t l_40 = 0x2489AFFFL;
        uint32_t *l_1386 = (void*)0;
        uint32_t *l_1387 = (void*)0;
        uint32_t *l_1388 = (void*)0;
        int32_t l_1389 = 9L;
        int16_t l_1390[3];
        int32_t *l_1431[9] = {&p_2167->g_1432,&p_2167->g_1432,&p_2167->g_1432,&p_2167->g_1432,&p_2167->g_1432,&p_2167->g_1432,&p_2167->g_1432,&p_2167->g_1432,&p_2167->g_1432};
        struct S1 *l_1433 = &l_1392;
        VECTOR(uint16_t, 4) l_1438 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL);
        uint64_t *l_1455 = &p_2167->g_228;
        uint64_t **l_1454 = &l_1455;
        VECTOR(int32_t, 2) l_1463 = (VECTOR(int32_t, 2))((-4L), (-1L));
        VECTOR(int32_t, 4) l_1467 = (VECTOR(int32_t, 4))(0x3678DAE5L, (VECTOR(int32_t, 2))(0x3678DAE5L, 0x118C4920L), 0x118C4920L);
        uint16_t *l_1474 = &l_35;
        VECTOR(uint8_t, 16) l_1498 = (VECTOR(uint8_t, 16))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0UL), 0UL), 0UL, 250UL, 0UL, (VECTOR(uint8_t, 2))(250UL, 0UL), (VECTOR(uint8_t, 2))(250UL, 0UL), 250UL, 0UL, 250UL, 0UL);
        union U3 l_1513[7][3] = {{{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL}},{{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL}},{{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL}},{{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL}},{{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL}},{{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL}},{{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL},{0x6F6654ED91219B4FL}}};
        uint16_t l_1517[9][4] = {{0UL,0x3D15L,0x3D15L,0UL},{0UL,0x3D15L,0x3D15L,0UL},{0UL,0x3D15L,0x3D15L,0UL},{0UL,0x3D15L,0x3D15L,0UL},{0UL,0x3D15L,0x3D15L,0UL},{0UL,0x3D15L,0x3D15L,0UL},{0UL,0x3D15L,0x3D15L,0UL},{0UL,0x3D15L,0x3D15L,0UL},{0UL,0x3D15L,0x3D15L,0UL}};
        VECTOR(int32_t, 4) l_1547 = (VECTOR(int32_t, 4))(0x02026918L, (VECTOR(int32_t, 2))(0x02026918L, 0L), 0L);
        int8_t **l_1597 = &p_2167->g_7;
        union U2 *l_1604 = &l_1384;
        VECTOR(int32_t, 16) l_1611 = (VECTOR(int32_t, 16))(0x301A7400L, (VECTOR(int32_t, 4))(0x301A7400L, (VECTOR(int32_t, 2))(0x301A7400L, 0x2EA8E4F2L), 0x2EA8E4F2L), 0x2EA8E4F2L, 0x301A7400L, 0x2EA8E4F2L, (VECTOR(int32_t, 2))(0x301A7400L, 0x2EA8E4F2L), (VECTOR(int32_t, 2))(0x301A7400L, 0x2EA8E4F2L), 0x301A7400L, 0x2EA8E4F2L, 0x301A7400L, 0x2EA8E4F2L);
        int64_t ***l_1621 = &p_2167->g_455;
        uint32_t l_1652 = 4294967294UL;
        int64_t l_1666 = 3L;
        VECTOR(int64_t, 2) l_1732 = (VECTOR(int64_t, 2))(0x09B1F4BC3FC5E726L, 0x07329A10A3D34774L);
        int16_t l_1770 = 0x62CFL;
        VECTOR(int64_t, 2) l_1809 = (VECTOR(int64_t, 2))(8L, 0x5EC5604491D0B6BDL);
        int32_t l_1820 = 0x1B998621L;
        int32_t *l_1841 = &l_1820;
        VECTOR(int16_t, 8) l_1868 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x0282L), 0x0282L), 0x0282L, 9L, 0x0282L);
        int16_t **l_1891 = &p_2167->g_359;
        uint64_t l_1899 = 1UL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1390[i] = (-1L);
        (1 + 1);
    }
    return (*p_2167->g_1036);
}


/* ------------------------------------------ */
/* 
 * reads : p_2167->g_1398 p_2167->g_1401 p_2167->g_129 p_2167->g_1050 p_2167->g_237 p_2167->g_341 p_2167->g_292.f2 p_2167->g_738 p_2167->g_1308 p_2167->g_846
 * writes: p_2167->g_1398 p_2167->g_1401 p_2167->g_129 p_2167->g_1308
 */
union U2  func_42(int32_t  p_43, int32_t  p_44, int64_t  p_45, union U3  p_46, struct S1  p_47, struct S4 * p_2167)
{ /* block id: 606 */
    int32_t *l_1393 = (void*)0;
    int32_t *l_1394 = (void*)0;
    int32_t *l_1395[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t l_1397 = 0x127DL;
    uint8_t *l_1404 = (void*)0;
    uint8_t *l_1405 = (void*)0;
    uint8_t *l_1406 = &p_2167->g_129[3];
    VECTOR(uint32_t, 4) l_1411 = (VECTOR(uint32_t, 4))(0xF3EED1E9L, (VECTOR(uint32_t, 2))(0xF3EED1E9L, 4294967292UL), 4294967292UL);
    uint32_t **l_1416 = &p_2167->g_1272;
    union U3 l_1417 = {0x6ED1D386CE409406L};
    struct S1 l_1422 = {0L};
    int32_t l_1423 = 0L;
    int32_t l_1424 = 1L;
    int8_t l_1425 = 0x10L;
    int8_t l_1426[9] = {0x07L,0x07L,0x07L,0x07L,0x07L,0x07L,0x07L,0x07L,0x07L};
    uint8_t l_1427 = 1UL;
    int i;
    p_2167->g_1398--;
    p_2167->g_1308.x |= (p_44 = ((0x0794E45E16546B1DL == ((p_2167->g_1401.s2 &= 0x506F7C1BL) > ((safe_rshift_func_uint8_t_u_u(((*l_1406) &= p_47.f0), ((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_1411.yzwwwxzzzxwxzyyx)).s52)).xxxyxyyx)).s42)).yxyxxxxyyyyyxxxx)).sa , ((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((l_1416 == (l_1417 , &p_2167->g_1272)) == (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(4UL, 0x474AL, 65526UL, 65535UL, 0x735FL, ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))((safe_rshift_func_uint16_t_u_u(p_2167->g_1050.s2, (0x6BDE8FB4L | ((l_1422 , p_46.f0) >= p_2167->g_237.s7)))), GROUP_DIVERGE(2, 1), 255UL, 7UL)).odd, ((VECTOR(uint8_t, 2))(0x4FL))))), 0x240EL)).s4, FAKE_DIVERGE(p_2167->local_2_offset, get_local_id(2), 10)))), FAKE_DIVERGE(p_2167->local_0_offset, get_local_id(0), 10))), 1UL)) < (*p_2167->g_341))), p_47.f0)), p_2167->g_738.w)) >= 6L))) > p_46.f0))) ^ 0x0985L));
    ++l_1427;
    return p_2167->g_846;
}


/* ------------------------------------------ */
/* 
 * reads : p_2167->g_724
 * writes:
 */
int32_t  func_48(int8_t  p_49, uint64_t  p_50, struct S4 * p_2167)
{ /* block id: 604 */
    return p_2167->g_724[5];
}


/* ------------------------------------------ */
/* 
 * reads : p_2167->g_8 p_2167->g_90 p_2167->g_53.f0 p_2167->g_105 p_2167->g_116 p_2167->g_129 p_2167->l_comm_values p_2167->g_107 p_2167->g_149 p_2167->g_152 p_2167->g_154 p_2167->g_156 p_2167->g_7 p_2167->g_162 p_2167->g_167 p_2167->g_168 p_2167->g_53 p_2167->g_183 p_2167->g_233 p_2167->g_237 p_2167->g_261 p_2167->g_comm_values p_2167->g_312 p_2167->g_288.f2 p_2167->g_338 p_2167->g_341 p_2167->g_359 p_2167->g_292.f1 p_2167->g_390 p_2167->g_403 p_2167->g_408 p_2167->g_420 p_2167->g_292.f2 p_2167->g_288.f1 p_2167->g_427 p_2167->g_292.f0 p_2167->g_428 p_2167->g_421 p_2167->g_444 p_2167->g_459 p_2167->g_485 p_2167->g_477 p_2167->g_288.f3 p_2167->g_292.f3 p_2167->g_518 p_2167->g_550 p_2167->g_455 p_2167->g_514.f2 p_2167->g_583 p_2167->g_228 p_2167->g_619 p_2167->g_621 p_2167->g_622 p_2167->g_626 p_2167->g_636 p_2167->g_388 p_2167->g_690 p_2167->g_514.f3 p_2167->g_716 p_2167->g_894 p_2167->g_895 p_2167->g_898 p_2167->g_901 p_2167->g_514.f1 p_2167->g_448 p_2167->g_668 p_2167->g_680 p_2167->g_951 p_2167->g_958 p_2167->g_935.f3 p_2167->g_794 p_2167->g_935.f0 p_2167->g_991 p_2167->g_149.f0 p_2167->g_1044 p_2167->g_1049 p_2167->g_1050 p_2167->g_1036 p_2167->g_1018.f2 p_2167->g_1107 p_2167->g_1066 p_2167->g_935.f1 p_2167->g_824 p_2167->g_1162 p_2167->g_1164 p_2167->g_1174 p_2167->g_1176 p_2167->g_1177 p_2167->g_1182 p_2167->g_1189 p_2167->g_999.f0 p_2167->g_584 p_2167->g_1245 p_2167->g_1271 p_2167->g_1018.f0 p_2167->g_468 p_2167->g_1090.f1 p_2167->g_1371 p_2167->g_820 p_2167->g_1223
 * writes: p_2167->g_105 p_2167->g_116 p_2167->g_53.f0 p_2167->g_129 p_2167->g_90 p_2167->g_149 p_2167->g_152 p_2167->g_154 p_2167->g_53 p_2167->g_233 p_2167->g_288.f3 p_2167->g_288.f2 p_2167->g_292.f0 p_2167->g_288.f1 p_2167->g_292.f1 p_2167->g_390 p_2167->g_292.f2 p_2167->g_183 p_2167->g_448 p_2167->g_454 p_2167->g_468 p_2167->g_359 p_2167->g_477 p_2167->g_428 p_2167->g_484 p_2167->g_427 p_2167->g_518 p_2167->g_514.f2 p_2167->g_583 p_2167->g_228 p_2167->g_408 p_2167->g_292.f3 p_2167->g_162 p_2167->g_626 p_2167->g_388 p_2167->g_668 p_2167->g_671 p_2167->g_689 p_2167->g_716 p_2167->g_846.f1 p_2167->g_955 p_2167->g_820 p_2167->g_1036 p_2167->g_935.f3 p_2167->g_1044 p_2167->g_1049 p_2167->g_894 p_2167->g_935.f1 p_2167->g_824 p_2167->g_991 p_2167->g_1107 p_2167->g_1271 p_2167->g_1018.f0 p_2167->g_636 p_2167->g_1090.f1 p_2167->g_901
 */
struct S1  func_51(struct S1  p_52, struct S4 * p_2167)
{ /* block id: 10 */
    int8_t *l_65[8][4][2] = {{{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8}},{{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8}},{{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8}},{{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8}},{{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8}},{{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8}},{{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8}},{{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8},{&p_2167->g_8,&p_2167->g_8}}};
    union U3 l_66 = {0x59721CB4F50F898DL};
    int32_t *l_67 = (void*)0;
    int32_t **l_594 = &p_2167->g_477;
    struct S1 ***l_599 = (void*)0;
    VECTOR(uint32_t, 2) l_600 = (VECTOR(uint32_t, 2))(1UL, 8UL);
    int16_t *l_601[10];
    int32_t l_602 = 0x7BA23CF1L;
    int32_t l_612[1];
    uint8_t l_657[4][1] = {{0x59L},{0x59L},{0x59L},{0x59L}};
    int64_t ****l_665 = &p_2167->g_454;
    uint16_t l_701 = 0UL;
    uint8_t l_732 = 253UL;
    VECTOR(uint16_t, 16) l_734 = (VECTOR(uint16_t, 16))(0x7F34L, (VECTOR(uint16_t, 4))(0x7F34L, (VECTOR(uint16_t, 2))(0x7F34L, 1UL), 1UL), 1UL, 0x7F34L, 1UL, (VECTOR(uint16_t, 2))(0x7F34L, 1UL), (VECTOR(uint16_t, 2))(0x7F34L, 1UL), 0x7F34L, 1UL, 0x7F34L, 1UL);
    VECTOR(int32_t, 16) l_818 = (VECTOR(int32_t, 16))(0x4CAA0447L, (VECTOR(int32_t, 4))(0x4CAA0447L, (VECTOR(int32_t, 2))(0x4CAA0447L, 0x0758FF1DL), 0x0758FF1DL), 0x0758FF1DL, 0x4CAA0447L, 0x0758FF1DL, (VECTOR(int32_t, 2))(0x4CAA0447L, 0x0758FF1DL), (VECTOR(int32_t, 2))(0x4CAA0447L, 0x0758FF1DL), 0x4CAA0447L, 0x0758FF1DL, 0x4CAA0447L, 0x0758FF1DL);
    uint64_t *l_830 = (void*)0;
    struct S1 l_834 = {7L};
    union U2 *l_848 = &p_2167->g_846;
    union U2 **l_847 = &l_848;
    VECTOR(uint32_t, 4) l_880 = (VECTOR(uint32_t, 4))(0xDAED7619L, (VECTOR(uint32_t, 2))(0xDAED7619L, 4294967287UL), 4294967287UL);
    VECTOR(uint64_t, 8) l_912 = (VECTOR(uint64_t, 8))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0xBA24BAAAC2AA0963L), 0xBA24BAAAC2AA0963L), 0xBA24BAAAC2AA0963L, 18446744073709551608UL, 0xBA24BAAAC2AA0963L);
    VECTOR(int16_t, 8) l_941 = (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x60DAL), 0x60DAL), 0x60DAL, 5L, 0x60DAL);
    VECTOR(int8_t, 16) l_944 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x5EL), 0x5EL), 0x5EL, 0L, 0x5EL, (VECTOR(int8_t, 2))(0L, 0x5EL), (VECTOR(int8_t, 2))(0L, 0x5EL), 0L, 0x5EL, 0L, 0x5EL);
    VECTOR(int64_t, 8) l_952 = (VECTOR(int64_t, 8))(0x32E3FF8DF9FEDA4EL, (VECTOR(int64_t, 4))(0x32E3FF8DF9FEDA4EL, (VECTOR(int64_t, 2))(0x32E3FF8DF9FEDA4EL, (-1L)), (-1L)), (-1L), 0x32E3FF8DF9FEDA4EL, (-1L));
    VECTOR(int64_t, 8) l_959 = (VECTOR(int64_t, 8))(0x4F24D9759C4FE241L, (VECTOR(int64_t, 4))(0x4F24D9759C4FE241L, (VECTOR(int64_t, 2))(0x4F24D9759C4FE241L, 0L), 0L), 0L, 0x4F24D9759C4FE241L, 0L);
    struct S0 *l_998 = &p_2167->g_999;
    struct S0 **l_997 = &l_998;
    VECTOR(uint64_t, 4) l_1087 = (VECTOR(uint64_t, 4))(0xE75B65FAAE20646BL, (VECTOR(uint64_t, 2))(0xE75B65FAAE20646BL, 0xB3E1A06966335B3AL), 0xB3E1A06966335B3AL);
    struct S0 *l_1089 = &p_2167->g_1090;
    struct S0 **l_1088 = &l_1089;
    VECTOR(int16_t, 8) l_1096 = (VECTOR(int16_t, 8))(0x778CL, (VECTOR(int16_t, 4))(0x778CL, (VECTOR(int16_t, 2))(0x778CL, 0x04BCL), 0x04BCL), 0x04BCL, 0x778CL, 0x04BCL);
    uint8_t *l_1108 = (void*)0;
    uint8_t *l_1109 = &l_732;
    uint32_t *l_1110 = (void*)0;
    uint32_t *l_1111 = (void*)0;
    uint32_t *l_1112 = (void*)0;
    uint32_t *l_1113[2][3][2] = {{{&p_2167->g_105,(void*)0},{&p_2167->g_105,(void*)0},{&p_2167->g_105,(void*)0}},{{&p_2167->g_105,(void*)0},{&p_2167->g_105,(void*)0},{&p_2167->g_105,(void*)0}}};
    uint8_t l_1114[10] = {0x41L,3UL,1UL,3UL,0x41L,0x41L,3UL,1UL,3UL,0x41L};
    union U3 *l_1145 = &p_2167->g_149;
    union U3 **l_1144 = &l_1145;
    union U3 ***l_1143 = &l_1144;
    uint64_t l_1147 = 18446744073709551609UL;
    VECTOR(uint32_t, 16) l_1165 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x64883BF0L), 0x64883BF0L), 0x64883BF0L, 0UL, 0x64883BF0L, (VECTOR(uint32_t, 2))(0UL, 0x64883BF0L), (VECTOR(uint32_t, 2))(0UL, 0x64883BF0L), 0UL, 0x64883BF0L, 0UL, 0x64883BF0L);
    uint32_t *l_1193[7][10] = {{&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0]},{&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0]},{&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0]},{&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0]},{&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0]},{&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0]},{&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0],&p_2167->g_107[0]}};
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_601[i] = &p_2167->g_514.f1;
    for (i = 0; i < 1; i++)
        l_612[i] = 0x5F87C6A1L;
    (*l_594) = func_54(func_59(l_65[0][3][1], l_66, l_67, l_67, l_67, p_2167), l_65[0][3][1], p_2167->g_8, l_66, p_2167);
    if ((safe_sub_func_int8_t_s_s((-1L), (safe_sub_func_uint16_t_u_u((p_2167->g_162.y , (((VECTOR(int32_t, 2))(0x15FE4671L, 0x009BC4A4L)).even != ((VECTOR(uint32_t, 8))((!((void*)0 == l_599)), 1UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_600.xy)), 4294967290UL, 1UL)), 0x724BED41L, 0xA058415EL)).s0)), (l_602 |= (*p_2167->g_359)))))))
    { /* block id: 242 */
        int64_t l_611 = 0x2AD990605673920AL;
        int32_t l_613 = 0x3C4775D2L;
        uint16_t *l_664 = (void*)0;
        struct S1 **l_688 = &p_2167->g_668;
        int32_t l_710 = 0L;
        int32_t l_711[7] = {0x3F615AABL,0x3F615AABL,0x3F615AABL,0x3F615AABL,0x3F615AABL,0x3F615AABL,0x3F615AABL};
        int32_t l_769 = 0x4919E3DBL;
        uint8_t l_770 = 0x01L;
        struct S1 **l_778 = &p_2167->g_668;
        VECTOR(int32_t, 2) l_822 = (VECTOR(int32_t, 2))(0x6703DE16L, 0x3E4B5D0EL);
        VECTOR(int8_t, 4) l_843 = (VECTOR(int8_t, 4))(0x48L, (VECTOR(int8_t, 2))(0x48L, 0x43L), 0x43L);
        VECTOR(int64_t, 4) l_852 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x3034F114D5807611L), 0x3034F114D5807611L);
        uint64_t *l_856 = &p_2167->g_228;
        union U2 **l_907 = &l_848;
        VECTOR(uint64_t, 16) l_914 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xF98455DA7D90E521L), 0xF98455DA7D90E521L), 0xF98455DA7D90E521L, 1UL, 0xF98455DA7D90E521L, (VECTOR(uint64_t, 2))(1UL, 0xF98455DA7D90E521L), (VECTOR(uint64_t, 2))(1UL, 0xF98455DA7D90E521L), 1UL, 0xF98455DA7D90E521L, 1UL, 0xF98455DA7D90E521L);
        VECTOR(int8_t, 16) l_942 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x71L), 0x71L), 0x71L, (-1L), 0x71L, (VECTOR(int8_t, 2))((-1L), 0x71L), (VECTOR(int8_t, 2))((-1L), 0x71L), (-1L), 0x71L, (-1L), 0x71L);
        int64_t ****l_953[4][4] = {{&p_2167->g_454,&p_2167->g_454,&p_2167->g_454,&p_2167->g_454},{&p_2167->g_454,&p_2167->g_454,&p_2167->g_454,&p_2167->g_454},{&p_2167->g_454,&p_2167->g_454,&p_2167->g_454,&p_2167->g_454},{&p_2167->g_454,&p_2167->g_454,&p_2167->g_454,&p_2167->g_454}};
        union U3 l_972 = {0x1DB698B8FDF37E2EL};
        int8_t *l_973 = (void*)0;
        uint32_t *l_1001[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t *l_1003[4][3][9] = {{{(void*)0,&p_2167->g_105,(void*)0,&p_2167->g_690,(void*)0,(void*)0,&p_2167->g_690,(void*)0,&p_2167->g_690},{(void*)0,&p_2167->g_105,(void*)0,&p_2167->g_690,(void*)0,(void*)0,&p_2167->g_690,(void*)0,&p_2167->g_690},{(void*)0,&p_2167->g_105,(void*)0,&p_2167->g_690,(void*)0,(void*)0,&p_2167->g_690,(void*)0,&p_2167->g_690}},{{(void*)0,&p_2167->g_105,(void*)0,&p_2167->g_690,(void*)0,(void*)0,&p_2167->g_690,(void*)0,&p_2167->g_690},{(void*)0,&p_2167->g_105,(void*)0,&p_2167->g_690,(void*)0,(void*)0,&p_2167->g_690,(void*)0,&p_2167->g_690},{(void*)0,&p_2167->g_105,(void*)0,&p_2167->g_690,(void*)0,(void*)0,&p_2167->g_690,(void*)0,&p_2167->g_690}},{{(void*)0,&p_2167->g_105,(void*)0,&p_2167->g_690,(void*)0,(void*)0,&p_2167->g_690,(void*)0,&p_2167->g_690},{(void*)0,&p_2167->g_105,(void*)0,&p_2167->g_690,(void*)0,(void*)0,&p_2167->g_690,(void*)0,&p_2167->g_690},{(void*)0,&p_2167->g_105,(void*)0,&p_2167->g_690,(void*)0,(void*)0,&p_2167->g_690,(void*)0,&p_2167->g_690}},{{(void*)0,&p_2167->g_105,(void*)0,&p_2167->g_690,(void*)0,(void*)0,&p_2167->g_690,(void*)0,&p_2167->g_690},{(void*)0,&p_2167->g_105,(void*)0,&p_2167->g_690,(void*)0,(void*)0,&p_2167->g_690,(void*)0,&p_2167->g_690},{(void*)0,&p_2167->g_105,(void*)0,&p_2167->g_690,(void*)0,(void*)0,&p_2167->g_690,(void*)0,&p_2167->g_690}}};
        union U3 *l_1007 = (void*)0;
        VECTOR(uint32_t, 8) l_1025 = (VECTOR(uint32_t, 8))(0xF52FCF8FL, (VECTOR(uint32_t, 4))(0xF52FCF8FL, (VECTOR(uint32_t, 2))(0xF52FCF8FL, 0UL), 0UL), 0UL, 0xF52FCF8FL, 0UL);
        int32_t l_1043[8] = {9L,9L,9L,9L,9L,9L,9L,9L};
        uint8_t l_1060 = 1UL;
        int32_t *l_1070 = &l_612[0];
        int i, j, k;
        for (p_2167->g_514.f2 = 20; (p_2167->g_514.f2 <= 28); p_2167->g_514.f2 = safe_add_func_int8_t_s_s(p_2167->g_514.f2, 4))
        { /* block id: 245 */
            if (p_52.f0)
                break;
        }
        for (p_2167->g_228 = 0; (p_2167->g_228 != 4); p_2167->g_228 = safe_add_func_uint16_t_u_u(p_2167->g_228, 1))
        { /* block id: 250 */
            VECTOR(int32_t, 4) l_607 = (VECTOR(int32_t, 4))(0x1CF5F102L, (VECTOR(int32_t, 2))(0x1CF5F102L, 5L), 5L);
            uint16_t l_610 = 7UL;
            VECTOR(uint32_t, 4) l_620 = (VECTOR(uint32_t, 4))(0xFB014583L, (VECTOR(uint32_t, 2))(0xFB014583L, 8UL), 8UL);
            VECTOR(int16_t, 8) l_641 = (VECTOR(int16_t, 8))(0x5114L, (VECTOR(int16_t, 4))(0x5114L, (VECTOR(int16_t, 2))(0x5114L, 0x581AL), 0x581AL), 0x581AL, 0x5114L, 0x581AL);
            int i;
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_607.wxwy)).zwxyyxxy)).s2)
            { /* block id: 251 */
                struct S1 *l_608 = &p_2167->g_53;
                int32_t *l_609[1][4][6] = {{{&l_602,(void*)0,&l_602,&l_602,(void*)0,&l_602},{&l_602,(void*)0,&l_602,&l_602,(void*)0,&l_602},{&l_602,(void*)0,&l_602,&l_602,(void*)0,&l_602},{&l_602,(void*)0,&l_602,&l_602,(void*)0,&l_602}}};
                uint32_t l_614[1][9][4] = {{{0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L},{0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L},{0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L},{0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L},{0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L},{0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L},{0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L},{0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L},{0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L,0x26DFF4E9L}}};
                int i, j, k;
                (*l_608) = p_52;
                l_607.x = (l_610 |= ((*p_2167->g_359) || p_52.f0));
                if (p_2167->g_428.s1)
                    continue;
                l_614[0][2][0]--;
            }
            else
            { /* block id: 257 */
                uint32_t l_625 = 0x1B1C2BBDL;
                p_2167->g_408.s0 = ((l_607.z >= (safe_mul_func_int8_t_s_s(((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_2167->g_619.yy)).even, 0xAEE43060L, ((VECTOR(uint32_t, 2))(l_620.xz)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_2167->g_621.xy)).xyyx)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(8UL, 1UL)).xxxx)), ((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 8))(p_2167->g_622.s69825651)).odd))))).se != (safe_mul_func_uint8_t_u_u(0xA6L, l_625))) , ((VECTOR(int8_t, 8))(p_2167->g_626.s64044723)).s1), p_52.f0))) , p_52.f0);
                l_602 ^= (l_625 & 0x685D55CFL);
            }
            for (p_2167->g_90 = 0; (p_2167->g_90 > (-16)); p_2167->g_90 = safe_sub_func_uint8_t_u_u(p_2167->g_90, 4))
            { /* block id: 263 */
                uint64_t l_633 = 18446744073709551610UL;
                VECTOR(int64_t, 4) l_648 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x381F3F0E7862A6D2L), 0x381F3F0E7862A6D2L);
                int i;
                for (p_2167->g_292.f3 = (-13); (p_2167->g_292.f3 != 6); ++p_2167->g_292.f3)
                { /* block id: 266 */
                    int32_t *l_631[2];
                    struct S1 *l_632 = &p_2167->g_53;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_631[i] = (void*)0;
                    p_2167->g_162.y &= 0x1511B137L;
                    if (p_52.f0)
                        continue;
                    p_2167->g_154.x = ((VECTOR(int32_t, 8))(0x2311706DL, 8L, 7L, 0x6FB9CF0FL, 8L, ((VECTOR(int32_t, 2))(0x3C1808FAL, 2L)), 0L)).s2;
                    (*l_632) = (p_52.f0 , p_52);
                }
                ++l_633;
                if (p_52.f0)
                    continue;
                p_2167->g_183.y = (p_2167->g_338.s1 , ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x182D0FFEL, (-9L), 1L, ((VECTOR(int32_t, 8))(p_2167->g_636.yxyyxyyx)), 0x32E53013L, ((0L ^ (safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0x2AL, (((((p_52.f0 <= ((*p_2167->g_359) = ((VECTOR(int16_t, 16))(l_641.s6106520353376126)).sc)) < l_633) >= (l_613 |= (safe_sub_func_uint8_t_u_u((~7UL), ((safe_rshift_func_int16_t_s_s((((+(FAKE_DIVERGE(p_2167->group_1_offset, get_group_id(1), 10) , ((safe_mul_func_uint8_t_u_u(((((VECTOR(int64_t, 8))(l_648.wxyxxywy)).s4 | (safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_2167->local_0_offset, get_local_id(0), 10), ((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u((!(l_648.w == (l_657[0][0] <= (((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(((p_2167->g_626.s3 = ((((void*)0 != l_664) && p_2167->g_156.s7) == 1L)) || l_641.s1), p_52.f0)) != p_52.f0), GROUP_DIVERGE(1, 1))), p_52.f0)) == p_52.f0) | p_52.f0)))), p_2167->g_292.f3)) , p_2167->g_427), 7)), 0xC1DB5B8E3513886DL)) < p_2167->g_237.s3)))) | 0x62460F9B8CF879F2L), 0L)) != 255UL))) , (void*)0) == l_665), 14)) < p_2167->g_636.y))))) | p_52.f0) >= p_52.f0))), 14))) & 0x72A7L), 0L, 0x5EA21136L, 0x309517D6L)).s52)).yyxy, ((VECTOR(int32_t, 4))((-8L)))))).ywwyzxxzzyxyyzyw, (int32_t)l_648.x))).s6);
            }
        }
        for (p_2167->g_388 = 0; (p_2167->g_388 > (-26)); p_2167->g_388 = safe_sub_func_int32_t_s_s(p_2167->g_388, 6))
        { /* block id: 282 */
            struct S1 *l_670 = &p_2167->g_53;
            struct S1 **l_669[4];
            int32_t l_700 = (-5L);
            int32_t l_708 = 6L;
            int32_t l_713 = 0x6B3F07EEL;
            int32_t l_714[1][4] = {{0x5DE39A07L,0x5DE39A07L,0x5DE39A07L,0x5DE39A07L}};
            uint16_t l_735 = 1UL;
            VECTOR(uint16_t, 2) l_737 = (VECTOR(uint16_t, 2))(0UL, 0UL);
            struct S1 l_777 = {0x4AF890D25714C17AL};
            VECTOR(uint16_t, 8) l_798 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x2077L), 0x2077L), 0x2077L, 0UL, 0x2077L);
            union U3 l_816[1] = {{0x661405010E903563L}};
            VECTOR(int32_t, 2) l_819 = (VECTOR(int32_t, 2))(1L, 0x6D9C1B92L);
            int64_t ***l_868 = (void*)0;
            int i, j;
            for (i = 0; i < 4; i++)
                l_669[i] = &l_670;
            p_2167->g_671 = (p_2167->g_668 = &p_52);
            if (p_52.f0)
                continue;
            for (p_2167->g_90 = 22; (p_2167->g_90 < (-13)); p_2167->g_90 = safe_sub_func_uint64_t_u_u(p_2167->g_90, 1))
            { /* block id: 288 */
                int32_t l_696 = (-1L);
                int32_t l_709 = 0x396A4970L;
                VECTOR(int32_t, 2) l_712 = (VECTOR(int32_t, 2))((-3L), 0x0720D272L);
                int32_t *l_719 = &l_612[0];
                struct S1 *l_731 = &p_2167->g_53;
                VECTOR(uint16_t, 8) l_799 = (VECTOR(uint16_t, 8))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0UL), 0UL), 0UL, 65532UL, 0UL);
                VECTOR(int32_t, 2) l_821 = (VECTOR(int32_t, 2))(3L, 0x1ADD8E68L);
                VECTOR(int32_t, 16) l_823 = (VECTOR(int32_t, 16))(0x0352C680L, (VECTOR(int32_t, 4))(0x0352C680L, (VECTOR(int32_t, 2))(0x0352C680L, (-5L)), (-5L)), (-5L), 0x0352C680L, (-5L), (VECTOR(int32_t, 2))(0x0352C680L, (-5L)), (VECTOR(int32_t, 2))(0x0352C680L, (-5L)), 0x0352C680L, (-5L), 0x0352C680L, (-5L));
                VECTOR(int32_t, 16) l_825 = (VECTOR(int32_t, 16))(0x4F94A015L, (VECTOR(int32_t, 4))(0x4F94A015L, (VECTOR(int32_t, 2))(0x4F94A015L, 0x2172C167L), 0x2172C167L), 0x2172C167L, 0x4F94A015L, 0x2172C167L, (VECTOR(int32_t, 2))(0x4F94A015L, 0x2172C167L), (VECTOR(int32_t, 2))(0x4F94A015L, 0x2172C167L), 0x4F94A015L, 0x2172C167L, 0x4F94A015L, 0x2172C167L);
                uint64_t **l_855 = &l_830;
                int32_t *l_859 = (void*)0;
                int32_t *l_860 = (void*)0;
                int32_t *l_861 = &l_710;
                VECTOR(int8_t, 4) l_877 = (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0L), 0L);
                int i;
                for (p_2167->g_53.f0 = (-3); (p_2167->g_53.f0 <= (-29)); p_2167->g_53.f0--)
                { /* block id: 291 */
                    struct S1 ***l_687 = &l_669[2];
                    VECTOR(int32_t, 16) l_693 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                    int32_t *l_707[5][9] = {{(void*)0,&l_612[0],(void*)0,&l_700,(void*)0,&l_612[0],(void*)0,(void*)0,&l_612[0]},{(void*)0,&l_612[0],(void*)0,&l_700,(void*)0,&l_612[0],(void*)0,(void*)0,&l_612[0]},{(void*)0,&l_612[0],(void*)0,&l_700,(void*)0,&l_612[0],(void*)0,(void*)0,&l_612[0]},{(void*)0,&l_612[0],(void*)0,&l_700,(void*)0,&l_612[0],(void*)0,(void*)0,&l_612[0]},{(void*)0,&l_612[0],(void*)0,&l_700,(void*)0,&l_612[0],(void*)0,(void*)0,&l_612[0]}};
                    int64_t l_715 = 1L;
                    int i, j;
                    if (p_52.f0)
                    { /* block id: 292 */
                        int32_t *l_702 = &l_612[0];
                        (*l_702) &= (safe_mod_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(p_2167->g_680.s24)).hi, ((((safe_div_func_int64_t_s_s(5L, (safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((((p_52.f0 < FAKE_DIVERGE(p_2167->global_2_offset, get_global_id(2), 10)) ^ l_611) , (l_687 != &p_2167->g_420)) > ((((((p_2167->g_689[0][1][2] = l_688) == ((p_2167->g_690 || (safe_div_func_int32_t_s_s((l_602 = ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(l_693.seea6)).even))).even), (safe_sub_func_int16_t_s_s(l_696, (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(p_2167->g_699.yyxxxxxxyxyyxxyy)).sc, (&l_613 != (void*)0)))))))) , (void*)0)) > 4294967287UL) == 0x23D5EBE5L) ^ l_700) < 0x64L)), (-10L))), p_2167->g_514.f3)))) <= (*p_2167->g_7)) == p_52.f0) != p_52.f0))) < l_613) , p_52.f0) , p_52.f0), l_701));
                    }
                    else
                    { /* block id: 296 */
                        int8_t l_705 = 0x5DL;
                        int32_t *l_706[1][1][3];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_706[i][j][k] = &l_612[0];
                            }
                        }
                        p_2167->g_183.y = (safe_add_func_int8_t_s_s(l_693.s6, (l_611 , l_705)));
                        return p_52;
                    }
                    ++p_2167->g_716.z;
                    if (l_712.x)
                        continue;
                    l_696 &= 0x091B84BBL;
                }
                (*l_719) ^= (!(0x099B2EB1CAA08328L ^ l_711[0]));
            }
        }
        if ((l_66 , 0x609D9511L))
        { /* block id: 377 */
            int32_t l_891 = 0x1A9F9CC2L;
            VECTOR(uint16_t, 16) l_892 = (VECTOR(uint16_t, 16))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0x7718L), 0x7718L), 0x7718L, 65527UL, 0x7718L, (VECTOR(uint16_t, 2))(65527UL, 0x7718L), (VECTOR(uint16_t, 2))(65527UL, 0x7718L), 65527UL, 0x7718L, 65527UL, 0x7718L);
            VECTOR(uint16_t, 2) l_893 = (VECTOR(uint16_t, 2))(0xF660L, 0x259DL);
            struct S1 *l_902 = &l_834;
            int i;
            p_2167->g_448 &= ((FAKE_DIVERGE(p_2167->global_1_offset, get_global_id(1), 10) ^ (safe_mod_func_int8_t_s_s(0x7FL, (safe_add_func_int32_t_s_s((((void*)0 == &l_701) == l_891), (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 4))(l_892.sa911)).xzzxwwzyxxzyxwxy, ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(0UL, 0xCFD6L)).yyyyyyyyyxyxyyyy, ((VECTOR(uint16_t, 2))(l_893.xx)).yyxyxyxyyxxxyyxx))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(p_2167->g_894.sc0ea0fa648e2e8b6))))))).s77, ((VECTOR(uint16_t, 2))(0x2E34L, 65530UL))))), (uint16_t)((VECTOR(uint16_t, 4))(p_2167->g_895.s6600)).y))).xxyxyyxyxxyyxyxy)).s0 == (((*p_2167->g_359) <= (l_711[1] = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))((safe_mod_func_uint64_t_u_u(l_711[2], (**p_2167->g_455))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0xFFD6L, 0x12ECL)))), ((VECTOR(uint16_t, 2))(p_2167->g_898.yx)), ((VECTOR(uint16_t, 2))(0xB148L, 0x869DL)), 0xC5DCL)).s54, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x545D2C2DL, 0x282FCB55L)).odd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_2167->g_901.s02551472)).s50)), (((((VECTOR(uint16_t, 2))(8UL, 0xB790L)).even | ((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(0x57AAL, 9L)).xxxxxxyyxyxxyxxy, (int16_t)((void*)0 != &p_2167->g_388)))).sf) && 0xBDL) || p_2167->g_105), 1L, 0x16CD599BL, 1L, 7L)).s6, 0x554FBF4DL)) , 0x6DFDL), FAKE_DIVERGE(p_2167->group_1_offset, get_group_id(1), 10), 0x59E9L, FAKE_DIVERGE(p_2167->local_0_offset, get_local_id(0), 10), ((VECTOR(uint16_t, 4))(0xB086L)), 1UL, 0x0548L, p_52.f0, ((VECTOR(uint16_t, 2))(0UL)), l_893.y, 0x3F3FL, 0x4104L)).odd)).s10))).xyxyyyxxxyyyyyyx, ((VECTOR(uint16_t, 16))(65535UL))))).s05)).xyyxyyxy)).s2)) <= p_52.f0))))))) > p_2167->g_514.f1);
            (*l_902) = ((**l_688) = (**l_688));
            for (l_701 = 0; (l_701 <= 60); l_701 = safe_add_func_uint64_t_u_u(l_701, 8))
            { /* block id: 384 */
                uint8_t l_905 = 0UL;
                int32_t *l_906 = &l_711[0];
                l_769 = p_52.f0;
                (*l_906) |= l_905;
                p_52 = p_52;
                atomic_min(&p_2167->g_atomic_reduction[get_linear_group_id()], ((void*)0 == l_907));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_2167->v_collective += p_2167->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            (*l_594) = (*l_594);
        }
        else
        { /* block id: 391 */
            VECTOR(uint64_t, 4) l_913 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL);
            int32_t l_915 = 3L;
            struct S0 *l_934 = &p_2167->g_935;
            VECTOR(int8_t, 16) l_943 = (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, (-4L)), (-4L)), (-4L), 7L, (-4L), (VECTOR(int8_t, 2))(7L, (-4L)), (VECTOR(int8_t, 2))(7L, (-4L)), 7L, (-4L), 7L, (-4L));
            int32_t *l_992 = &l_602;
            int64_t *l_993 = (void*)0;
            struct S0 **l_996 = &l_934;
            struct S0 ***l_1000 = &l_997;
            uint32_t **l_1002 = &l_1001[0];
            uint32_t **l_1016 = (void*)0;
            uint32_t l_1031 = 0UL;
            union U3 l_1037 = {0x797B8D5A340B509CL};
            int32_t l_1041 = (-7L);
            int32_t l_1042[9][7][4] = {{{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)}},{{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)}},{{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)}},{{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)}},{{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)}},{{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)}},{{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)}},{{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)}},{{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)},{7L,7L,1L,(-2L)}}};
            uint64_t *l_1051 = (void*)0;
            uint32_t l_1080 = 0x838E02A8L;
            int i, j, k;
            for (l_769 = (-12); (l_769 < 16); l_769 = safe_add_func_int32_t_s_s(l_769, 2))
            { /* block id: 394 */
                VECTOR(uint64_t, 2) l_928 = (VECTOR(uint64_t, 2))(0x5847FA551717D732L, 0xD3E15D1CDD01AB36L);
                VECTOR(int16_t, 4) l_940 = (VECTOR(int16_t, 4))(0x2126L, (VECTOR(int16_t, 2))(0x2126L, 0x01BDL), 0x01BDL);
                int64_t l_964 = 0x04F17B9B746F9B1FL;
                int32_t l_965[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int64_t ***l_980 = &p_2167->g_455;
                uint64_t l_987 = 9UL;
                int64_t ***l_988 = &p_2167->g_455;
                int i;
                l_915 = (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 4))(0x50C9EC4284367C78L, 0x2C6F6DE676071339L, 0x0EC3A11DE80F56F1L, 0xE489B46D49B66ACFL)).xwyzxxwx, ((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_912.s26)).yxxx)).odd, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_913.wxzwzyzzxzzzzwwy)))).sd0))).yyxxxyyy))).s3, ((VECTOR(uint64_t, 8))(l_914.s106c0f31)).s3));
                for (p_2167->g_388 = 2; (p_2167->g_388 >= (-9)); --p_2167->g_388)
                { /* block id: 398 */
                    int64_t *l_929 = &l_611;
                    uint64_t *l_930 = &p_2167->g_152;
                    int32_t l_933 = 0x2A2E7C01L;
                    struct S0 **l_936 = &l_934;
                    int32_t *l_937 = (void*)0;
                    int32_t *l_938 = (void*)0;
                    int32_t *l_939 = &l_612[0];
                    struct S1 l_945 = {0x2256DF0976BAAD2FL};
                    VECTOR(int64_t, 8) l_950 = (VECTOR(int64_t, 8))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), (-6L)), (-6L)), (-6L), (-5L), (-6L));
                    int64_t *****l_954 = &l_665;
                    int i;
                    (*l_936) = (((l_913.w ^ ((l_933 |= ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((-1L) >= (safe_div_func_uint16_t_u_u(((*p_2167->g_7) > (safe_mod_func_int64_t_s_s(((p_2167->g_846.f1 = ((p_2167->g_680.s5 < l_843.y) == (((**p_2167->g_455) > ((VECTOR(uint64_t, 2))(l_928.xy)).even) && (p_2167->g_288[1].f3 ^ FAKE_DIVERGE(p_2167->local_0_offset, get_local_id(0), 10))))) >= (l_613 ^= ((*l_929) = l_611))), ((*l_930)--)))), (*p_2167->g_359)))), p_52.f0)), 5)), 4294967295UL)) & p_52.f0)) && l_913.w)) != (*p_2167->g_7)) , l_934);
                    (*l_939) &= l_843.z;
                    if (p_2167->g_621.x)
                        continue;
                    if (((((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_940.xw)).yxyxxxxy)), ((VECTOR(int16_t, 16))(l_941.s2402753731460717)).hi, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(2L, 6L)).xyxxxyxyyxyyxyxy)).lo, ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_942.s8a33)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(l_943.sbf65e1d7)).s0354672776512666, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_944.s1d)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((-5L), (l_945 , (safe_rshift_func_uint8_t_u_u(((-6L) != (safe_rshift_func_uint16_t_u_s((((((VECTOR(int64_t, 8))(0x6A20560D010534CCL, ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 4))(6L, ((VECTOR(int64_t, 2))(l_950.s10)), 0x192B3788D90D850DL)).hi, ((VECTOR(int64_t, 4))(p_2167->g_951.wxxz)).even, ((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 16))(l_952.s3577245547373644)).saa4c, ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((((void*)0 != &p_2167->g_584) , l_953[2][1]) != (p_2167->g_955 = ((*l_954) = l_665))), (safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_int64_t_s(p_52.f0)))), ((VECTOR(int64_t, 2))(p_2167->g_958.s63)), (-8L), ((VECTOR(int64_t, 16))(l_959.s6625070246342232)).s5, 0x64611A0398C434F5L, (safe_mul_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(p_52.f0, 8)) ^ (p_52.f0 , (*p_2167->g_359))) > p_52.f0), 0x7BL)), 0x6C6AFF327A650592L, 0x3FD0E194A4E1478FL, p_52.f0, (-8L), l_964, (-1L), 0x03219B5CDBDA4188L, 0L)).sd307)), ((VECTOR(int64_t, 4))(0x666A295DBF001BE9L)))))))).even))), ((VECTOR(int64_t, 4))(0x571035224906CAD5L)), 0x689A207DF0FA7728L)).s3 != p_52.f0) == p_52.f0) == (*p_2167->g_359)), 5))), l_611))), (-7L), (-1L))), 0x62L, ((VECTOR(int8_t, 2))(0x3BL)), (-2L))), p_52.f0, ((VECTOR(int8_t, 2))(0x42L)), ((VECTOR(int8_t, 2))(0L)), 6L))))).s5f)).xxyyyyxyxxyxyyyx, ((VECTOR(int8_t, 16))(3L))))).sd, ((VECTOR(int8_t, 4))(0x49L)), 0x4CL, 0x36L, ((VECTOR(int8_t, 2))(4L)), 0x3DL, (-4L), 0x1FL, ((VECTOR(int8_t, 4))((-1L))))), ((VECTOR(int8_t, 16))((-8L)))))).hi)).s1756676555076741)).odd)).s4, 0x45L, 0x17L, 0x23L)).s3070345352717451)).hi, ((VECTOR(uint8_t, 8))(3UL))))))))))).s20, (int16_t)0L))).odd , &p_2167->g_455) == &p_2167->g_455))
                    { /* block id: 409 */
                        (*l_939) &= p_52.f0;
                    }
                    else
                    { /* block id: 411 */
                        uint32_t l_966 = 0x7A8F78B6L;
                        int8_t **l_967[10] = {&l_65[0][3][1],&l_65[0][3][1],&l_65[0][3][1],&l_65[0][3][1],&l_65[0][3][1],&l_65[0][3][1],&l_65[0][3][1],&l_65[0][3][1],&l_65[0][3][1],&l_65[0][3][1]};
                        int i;
                        l_965[7] &= 0x13447063L;
                        (*l_594) = func_54(l_966, (l_65[0][3][1] = &p_2167->g_8), ((safe_add_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), p_2167->g_935.f3)) != 0x79881C57L), ((safe_rshift_func_int16_t_s_s(((*p_2167->g_359) = p_52.f0), p_2167->g_951.w)) , l_972), p_2167);
                        if (p_52.f0)
                            continue;
                    }
                }
                if (p_52.f0)
                    continue;
                (*l_594) = func_54(p_52.f0, l_973, p_52.f0, (((safe_div_func_int8_t_s_s(1L, (l_915 = p_52.f0))) , ((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_710 = (p_2167->g_388 = ((l_980 = (void*)0) == (l_988 = ((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((0x6E90L >= (((((*l_856) ^= ((0L > p_2167->g_794) == 65535UL)) , p_52.f0) && 0L) <= 0x10L)) >= l_987), l_965[3])), p_2167->g_935.f0)) , (void*)0))))), (*p_2167->g_7))), (*p_2167->g_359))) || 1UL)) , p_2167->g_149), p_2167);
            }
            if ((p_2167->g_154.z = (p_2167->g_820.w = (((FAKE_DIVERGE(p_2167->group_1_offset, get_group_id(1), 10) || ((safe_sub_func_int32_t_s_s(((*l_992) = ((((VECTOR(int16_t, 8))(p_2167->g_991.yzywwxxw)).s7 | p_52.f0) == l_972.f0)), ((void*)0 == l_993))) && (safe_rshift_func_uint16_t_u_u((l_996 == ((*l_1000) = l_997)), (((((l_1003[2][1][0] = ((*l_1002) = l_1001[1])) == &p_2167->g_105) , (safe_unary_minus_func_uint32_t_u(((((safe_lshift_func_int8_t_s_u(0x19L, 1)) , p_2167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2167->tid, 7))]) || l_769) <= 6UL)))) & p_52.f0) , FAKE_DIVERGE(p_2167->group_2_offset, get_group_id(2), 10)))))) || p_52.f0) >= p_52.f0))))
            { /* block id: 434 */
                union U3 **l_1008 = &l_1007;
                int32_t l_1014 = 1L;
                uint32_t **l_1015 = &p_2167->g_484;
                uint16_t *l_1022 = (void*)0;
                VECTOR(uint32_t, 8) l_1026 = (VECTOR(uint32_t, 8))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0x671C537AL), 0x671C537AL), 0x671C537AL, 4294967287UL, 0x671C537AL);
                int i;
                (*l_1008) = l_1007;
                for (l_770 = (-7); (l_770 >= 23); ++l_770)
                { /* block id: 438 */
                    struct S0 *l_1017 = &p_2167->g_1018;
                    int32_t l_1019[6] = {(-9L),9L,(-9L),(-9L),9L,(-9L)};
                    uint16_t **l_1023 = (void*)0;
                    uint16_t **l_1024 = &l_1022;
                    int i;
                    (*l_992) = ((((safe_mod_func_int8_t_s_s(1L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(0UL, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(0x13L, 255UL)), ((VECTOR(uint8_t, 16))(p_2167->g_1013.xywyzyzyzyzzxzwy)).se5))), 8UL)).hi)).even)) , l_1014) | ((((l_1015 != (p_52.f0 , (l_1016 = &p_2167->g_484))) == ((p_2167->g_233 != ((**l_1000) = l_1017)) <= l_1019[3])) , l_1014) , p_2167->g_149.f0)) ^ 0L);
                    atomic_min(&p_2167->l_atomic_reduction[0], (safe_mod_func_uint16_t_u_u(((((*l_1024) = l_1022) == (void*)0) || ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(l_1025.s6452)).lo, ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xF6308018L, 0x5D050B86L)).yxxxxyxxxxyyyyxx)).lo))).odd)).wzxwzwyx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_1026.s1475)).yxzxxzxz))))).s53))), ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 8))(4294967287UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((*l_847) == &p_2167->g_846), GROUP_DIVERGE(1, 1), 2UL, 0UL)))), 0xE8A06BFEL, 0x4F053B45L, 4294967294UL)).s6040121064404406, ((VECTOR(uint32_t, 2))(0UL, 0xC3911A89L)).yyxxyxxyxxxyxxyx))).s7, l_1019[3])) ^ 7L), 4)), 4294967291UL, l_1031, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 2))(4294967295UL, 0x9FA3CA66L)).yyxyxyxyyyyyxxxy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))((0x7AFE60C8L < (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0x32F6L, 6)), (-1L)))), ((VECTOR(uint32_t, 4))(0xAC7B4514L)), GROUP_DIVERGE(1, 1), ((VECTOR(uint32_t, 8))(4294967295UL)), 0x229F2C03L, 3UL)).s163d)).xyyxzxzzwxyzwzwy, ((VECTOR(uint32_t, 16))(3UL)), ((VECTOR(uint32_t, 16))(4294967295UL))))).s7c))), p_2167->g_228, (*l_992), ((VECTOR(uint32_t, 4))(0xF9476777L)))).s33)).xxxxxyyxyyyxxxyy))).sba, ((VECTOR(uint32_t, 2))(7UL))))).yxxx)), 4294967294UL)))), ((VECTOR(uint32_t, 8))(0x04D1B9D3L))))), ((VECTOR(uint32_t, 2))(0x1D40D9F3L)), 0x700030A3L, ((VECTOR(uint32_t, 2))(4294967293UL)), 0x0DCF929DL)).sd , 0L) || 1L)), p_52.f0)) + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_2167->v_collective += p_2167->l_atomic_reduction[0];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (p_52.f0)
                        continue;
                    (*l_594) = func_54(p_52.f0, (p_2167->g_1036 = &p_2167->g_388), p_52.f0, l_1037, p_2167);
                }
                for (p_2167->g_935.f3 = 0; (p_2167->g_935.f3 <= 8); ++p_2167->g_935.f3)
                { /* block id: 450 */
                    return p_52;
                }
                (*l_992) ^= ((*p_2167->g_7) ^ FAKE_DIVERGE(p_2167->local_2_offset, get_local_id(2), 10));
            }
            else
            { /* block id: 454 */
                int32_t *l_1040[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_1040[i] = &l_602;
                p_2167->g_1044--;
                return p_52;
            }
            (*l_992) ^= (safe_add_func_int16_t_s_s(((p_2167->g_1049.s3 = ((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 2))(p_2167->g_1049.s56)).xyxyxyxxyyyxxyxx, ((VECTOR(uint64_t, 4))(p_2167->g_1050.s7347)).zzxzyywwxxxwyzyw)))))).sa5a3, ((VECTOR(uint64_t, 4))(0x4250E982BBF2C633L, ((VECTOR(uint64_t, 2))(7UL, 0xE013AA7F6C0619EEL)), 1UL))))).z) , (*p_2167->g_359)), 0UL));
            for (p_2167->g_292.f1 = 0; (p_2167->g_292.f1 > (-17)); p_2167->g_292.f1--)
            { /* block id: 462 */
                uint64_t *l_1061 = &p_2167->g_846.f1;
                uint64_t *l_1062[8][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_1063 = 0x554610B8L;
                uint32_t l_1064 = 0UL;
                int32_t *l_1071 = (void*)0;
                int32_t *l_1072 = &l_1041;
                int32_t *l_1073 = &l_602;
                int32_t *l_1074 = &l_1042[4][6][0];
                int32_t *l_1075 = &l_1041;
                int32_t *l_1076 = (void*)0;
                int32_t *l_1077 = (void*)0;
                int32_t *l_1078 = &l_1042[2][6][3];
                int32_t *l_1079[5];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1079[i] = &p_2167->g_448;
                if (l_711[5])
                    break;
                if (((*l_992) = (!((~p_2167->g_1049.s2) ^ (safe_lshift_func_int8_t_s_u(((FAKE_DIVERGE(p_2167->group_1_offset, get_group_id(1), 10) & 0L) && (((l_1063 ^= (((l_710 &= (((*l_992) & p_2167->g_621.y) ^ (*p_2167->g_1036))) > p_2167->g_1018.f2) && (l_1025.s7 , (safe_add_func_int8_t_s_s(((*p_2167->g_1036) = p_52.f0), l_1060))))) == l_1025.s0) < GROUP_DIVERGE(2, 1))), l_1064))))))
                { /* block id: 468 */
                    (*l_992) &= ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(p_2167->g_1065.s61756643)).lo, ((VECTOR(uint16_t, 4))(p_2167->g_1066.s1426)))))))).w;
                    for (l_701 = 0; (l_701 != 21); l_701 = safe_add_func_uint64_t_u_u(l_701, 3))
                    { /* block id: 472 */
                        (*l_594) = &p_2167->g_90;
                    }
                }
                else
                { /* block id: 475 */
                    uint8_t l_1069[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1069[i] = 255UL;
                    l_1069[0] = 0x2E8F807CL;
                    p_2167->g_477 = l_1070;
                }
                ++l_1080;
                (*l_1074) |= (safe_mod_func_uint32_t_u_u(0x3A6F8BB4L, ((!(*p_2167->g_1036)) & (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(l_1087.yywz)).y, (0x307B4E6C997D8DF2L | ((*l_1061) = 18446744073709551615UL)))))));
            }
        }
    }
    else
    { /* block id: 484 */
        return p_52;
    }
    (*l_1088) = ((*l_997) = (*l_997));
    if (((safe_div_func_int16_t_s_s((p_52.f0 == (safe_add_func_int64_t_s_s(((*p_2167->g_341) = ((safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(0x0156L, ((VECTOR(int16_t, 2))(l_1096.s41)), ((l_602 &= ((((l_66 , p_52.f0) < (p_52.f0 > (safe_div_func_int32_t_s_s(((safe_div_func_uint8_t_u_u(((*l_1109) = (safe_add_func_uint8_t_u_u(((*p_2167->g_1036) <= ((((p_2167->g_288[1].f1 <= (safe_add_func_int8_t_s_s((GROUP_DIVERGE(1, 1) , (safe_sub_func_int32_t_s_s((&p_2167->g_388 != (p_2167->g_149 , (void*)0)), 0xC330FC1CL))), 1L))) == p_52.f0) != (-10L)) , p_52.f0)), p_2167->g_1107))), p_52.f0)) | p_2167->g_622.s5), p_2167->g_1066.s6)))) > p_52.f0) && p_52.f0)) , p_52.f0), p_52.f0, ((VECTOR(int16_t, 8))((-1L))), 0x5C08L, 0x4A58L, (-8L))), ((VECTOR(int16_t, 16))(0x5FDAL))))).s1)) | (*p_2167->g_1036))), FAKE_DIVERGE(p_2167->global_1_offset, get_global_id(1), 10)))), l_1114[2])) , p_2167->g_228))
    { /* block id: 492 */
        uint32_t l_1119 = 0xF8BA8C17L;
        int64_t *l_1130[3];
        int16_t l_1135 = 0x4290L;
        uint16_t *l_1136 = (void*)0;
        int32_t *l_1137 = (void*)0;
        int32_t *l_1138 = (void*)0;
        int32_t *l_1139 = (void*)0;
        int32_t *l_1140 = (void*)0;
        int32_t *l_1141 = (void*)0;
        int32_t *l_1142[5][10] = {{&l_602,(void*)0,&l_612[0],(void*)0,&l_612[0],(void*)0,&l_602,&l_602,(void*)0,(void*)0},{&l_602,(void*)0,&l_612[0],(void*)0,&l_612[0],(void*)0,&l_602,&l_602,(void*)0,(void*)0},{&l_602,(void*)0,&l_612[0],(void*)0,&l_612[0],(void*)0,&l_602,&l_602,(void*)0,(void*)0},{&l_602,(void*)0,&l_612[0],(void*)0,&l_612[0],(void*)0,&l_602,&l_602,(void*)0,(void*)0},{&l_602,(void*)0,&l_612[0],(void*)0,&l_612[0],(void*)0,&l_602,&l_602,(void*)0,(void*)0}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_1130[i] = &p_2167->g_292.f0;
        l_818.s6 = (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(0xFCF9L, p_52.f0)) != l_1119), ((safe_lshift_func_uint16_t_u_s((p_2167->g_894.s9 = ((safe_mod_func_int32_t_s_s(p_52.f0, (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((((p_2167->g_388 && (((((void*)0 != &p_2167->g_584) < (safe_mod_func_int8_t_s_s(((l_1130[1] == (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(l_1119, 0x60L)), 5)) & p_52.f0), p_52.f0, ((VECTOR(int32_t, 8))(0x609A9594L)), 0x7D41E305L, 0x41171501L, p_52.f0, ((VECTOR(int32_t, 2))(0L)), 4L)).s9e97)).x , (void*)0)) || l_1135), p_2167->g_338.s6))) | 0UL) , 0x027A107CL)) , 0x2FE3BC2D1E8C6655L) & p_52.f0) & 0x5126L), 0)), p_52.f0)))) | p_52.f0)), p_52.f0)) != l_1135)));
    }
    else
    { /* block id: 495 */
        int32_t *l_1146[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(int8_t, 8) l_1188 = (VECTOR(int8_t, 8))(0x24L, (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, 1L), 1L), 1L, 0x24L, 1L);
        union U2 **l_1313 = &l_848;
        VECTOR(uint8_t, 4) l_1366 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x13L), 0x13L);
        int64_t *l_1369 = &p_2167->g_514.f2;
        VECTOR(int16_t, 16) l_1378 = (VECTOR(int16_t, 16))(0x1D4BL, (VECTOR(int16_t, 4))(0x1D4BL, (VECTOR(int16_t, 2))(0x1D4BL, (-1L)), (-1L)), (-1L), 0x1D4BL, (-1L), (VECTOR(int16_t, 2))(0x1D4BL, (-1L)), (VECTOR(int16_t, 2))(0x1D4BL, (-1L)), 0x1D4BL, (-1L), 0x1D4BL, (-1L));
        int i;
        l_602 &= (l_1143 == &l_1144);
        (*l_594) = (*l_594);
        l_1147--;
        if (p_52.f0)
        { /* block id: 499 */
            VECTOR(int8_t, 8) l_1187 = (VECTOR(int8_t, 8))(0x1FL, (VECTOR(int8_t, 4))(0x1FL, (VECTOR(int8_t, 2))(0x1FL, 0x1FL), 0x1FL), 0x1FL, 0x1FL, 0x1FL);
            int32_t l_1194 = (-1L);
            VECTOR(uint16_t, 8) l_1225 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x8FA3L), 0x8FA3L), 0x8FA3L, 0UL, 0x8FA3L);
            uint32_t **l_1240[9] = {&l_1193[5][2],&l_1193[5][2],&l_1193[5][2],&l_1193[5][2],&l_1193[5][2],&l_1193[5][2],&l_1193[5][2],&l_1193[5][2],&l_1193[5][2]};
            int8_t *l_1247 = &p_2167->g_388;
            uint32_t l_1248 = 1UL;
            int32_t l_1252 = 0x45218A44L;
            int32_t l_1253 = 0x7498660FL;
            int32_t l_1254 = 1L;
            int32_t l_1258 = (-8L);
            int32_t l_1260 = 0x095DC4FFL;
            int32_t l_1261 = 0x107D112EL;
            VECTOR(int32_t, 8) l_1262 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x64C1FC05L), 0x64C1FC05L), 0x64C1FC05L, 1L, 0x64C1FC05L);
            struct S1 l_1275 = {0L};
            union U3 l_1294 = {0x3239D0B16D6529C5L};
            union U2 **l_1324 = &l_848;
            int i;
            for (p_2167->g_935.f1 = 22; (p_2167->g_935.f1 >= 26); ++p_2167->g_935.f1)
            { /* block id: 502 */
                return p_52;
            }
            for (p_2167->g_388 = (-5); (p_2167->g_388 < (-19)); p_2167->g_388 = safe_sub_func_uint16_t_u_u(p_2167->g_388, 5))
            { /* block id: 507 */
                VECTOR(uint16_t, 16) l_1163 = (VECTOR(uint16_t, 16))(0x4945L, (VECTOR(uint16_t, 4))(0x4945L, (VECTOR(uint16_t, 2))(0x4945L, 65529UL), 65529UL), 65529UL, 0x4945L, 65529UL, (VECTOR(uint16_t, 2))(0x4945L, 65529UL), (VECTOR(uint16_t, 2))(0x4945L, 65529UL), 0x4945L, 65529UL, 0x4945L, 65529UL);
                VECTOR(uint32_t, 4) l_1166 = (VECTOR(uint32_t, 4))(0x139FFC6DL, (VECTOR(uint32_t, 2))(0x139FFC6DL, 0xC247F365L), 0xC247F365L);
                VECTOR(int32_t, 2) l_1175 = (VECTOR(int32_t, 2))(2L, 0x5B5A101AL);
                uint32_t *l_1191 = &p_2167->g_107[0];
                int32_t *l_1198 = &l_602;
                uint32_t l_1202 = 0xAA8CD7FCL;
                union U3 *l_1227 = (void*)0;
                int32_t l_1231[8][8][1] = {{{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L}},{{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L}},{{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L}},{{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L}},{{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L}},{{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L}},{{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L}},{{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L},{0x63BAC731L}}};
                int32_t l_1266 = 0x76CE1ABCL;
                int32_t l_1267 = 0x53DADECDL;
                int8_t **l_1274 = &p_2167->g_7;
                int i, j, k;
                if (p_52.f0)
                { /* block id: 508 */
                    VECTOR(uint32_t, 4) l_1167 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x1FC22364L), 0x1FC22364L);
                    uint32_t *l_1190 = &p_2167->g_107[1];
                    int i;
                    for (p_2167->g_448 = 0; (p_2167->g_448 >= (-3)); --p_2167->g_448)
                    { /* block id: 511 */
                        uint32_t **l_1192 = (void*)0;
                        int32_t l_1195 = 1L;
                        p_2167->g_824.x &= ((void*)0 != &p_2167->g_1036);
                        l_1195 |= (l_1175.x = (safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(0x69CBL, (safe_rshift_func_int16_t_s_s((((*l_1109) &= (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))((((VECTOR(int64_t, 16))(p_2167->g_1162.sd229b62e64528182)).s9 ^ 18446744073709551609UL), 0x2F5D3B5EL, ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(0UL, 0x885EAC6FL, 4294967293UL, 0xD085BCACL)), ((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 8))(l_1163.sce22d889)), ((VECTOR(uint16_t, 16))(p_2167->g_1164.wxyzzwyyxyyxxwxw)).odd))).s7630557526335024, ((VECTOR(uint32_t, 16))(0xF0F5764AL, l_1163.s0, ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 4))(l_1165.s907c)).yywxwxyzzzwzwyxx, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(l_1166.yxzxxzzxxwwwwwyw)).s277d, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_1167.xz)).xyxxyyxxyxyxxyyx)))).s6e)).yyyx))).yzwwyywzyxyxwyxw))).s41)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(0UL, 0x3BFF33E7L, 4294967286UL, 1UL, (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 2))((-6L), 0x3C29CB13L)).xyyyyxxyyxyxyyxy))).odd, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(8UL, 4294967295UL, (safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(p_52.f0, ((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_2167->g_1174.xyxxxyyxyxyyyxyx)).odd)).s50, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1175.yy)).xxyxyxyxxyyyxyxx)))).sab, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(p_2167->g_1176.yy)), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(p_2167->g_1177.yx))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(p_2167->g_1182.s0115)).w, 1)), (safe_lshift_func_int16_t_s_u(6L, ((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_1187.s13)))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(l_1188.s2434)).wxwwzwyy, ((VECTOR(int8_t, 16))(p_2167->g_1189.xxyyyxyyxyyyxyyy)).hi))).s67, ((VECTOR(int8_t, 16))(((l_1193[6][0] = (l_1191 = l_1190)) == (void*)0), 0L, (l_1194 = p_52.f0), ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 8))(0x34L)), 0x3CL, (-1L), 1L)).s85))), 0x37L, 0x68L)), ((VECTOR(int8_t, 4))(0x48L))))).wyzyzxwwxyyxywzw, ((VECTOR(int8_t, 16))(6L))))).sb, 0x59L, 0x12L, 6L)).hi))).yyxyxyxyxyyxxxyy)).s16d1)), ((VECTOR(int8_t, 4))(1L))))).wyyxzxxzzxwxyxyx, ((VECTOR(int8_t, 16))((-1L)))))).sd, l_1187.s6)) >= p_52.f0))))) > (**p_2167->g_455)), l_1163.s0, 0x29DB36DEL, p_2167->g_999.f0, ((VECTOR(int32_t, 4))((-9L))), ((VECTOR(int32_t, 4))(0x356873A2L)), 1L, (-10L), 0x5BA4490AL, 0x03E54FCDL)).s6010)).even)))))).lo, p_52.f0)) && p_2167->g_1164.z))), p_52.f0)), 0x65813C6DL, 4294967295UL, p_52.f0, 0x5AC25AF6L, 0xCEC3116BL)).s6120326537474427)).s4d, ((VECTOR(uint32_t, 2))(0xFA64A54CL)), ((VECTOR(uint32_t, 2))(4294967286UL))))).yyxxyyyx))))).s3611012304521177)).se == p_52.f0), FAKE_DIVERGE(p_2167->group_1_offset, get_group_id(1), 10), 0x7BBE31DAL, 0x0909C77CL)).even)).even))), 4294967293UL, ((VECTOR(uint32_t, 8))(0x44DF5E99L)), p_52.f0, 0x69CF5869L, 0xCD891C97L))))).s6cfb))), 0x90A5E3BFL, 0x4153149AL)))).s0 == p_52.f0)) == 0x8DL), 4)))) != (**p_2167->g_455)), p_2167->g_824.x)));
                    }
                }
                else
                { /* block id: 520 */
                    int64_t l_1201 = (-1L);
                    VECTOR(uint16_t, 4) l_1226 = (VECTOR(uint16_t, 4))(0xA54EL, (VECTOR(uint16_t, 2))(0xA54EL, 0x0CF1L), 0x0CF1L);
                    struct S1 l_1228 = {0x1CB2A1980900E3B6L};
                    VECTOR(int32_t, 2) l_1229 = (VECTOR(int32_t, 2))((-1L), (-1L));
                    VECTOR(uint32_t, 8) l_1246 = (VECTOR(uint32_t, 8))(0x7676BBDFL, (VECTOR(uint32_t, 4))(0x7676BBDFL, (VECTOR(uint32_t, 2))(0x7676BBDFL, 0x6364DA6AL), 0x6364DA6AL), 0x6364DA6AL, 0x7676BBDFL, 0x6364DA6AL);
                    int16_t l_1259 = 1L;
                    uint32_t l_1268 = 2UL;
                    int i;
                    for (l_732 = 25; (l_732 >= 60); l_732++)
                    { /* block id: 523 */
                        VECTOR(int16_t, 2) l_1221 = (VECTOR(int16_t, 2))(0x5605L, 0x53AFL);
                        uint8_t l_1230[7][1] = {{0xB7L},{0xB7L},{0xB7L},{0xB7L},{0xB7L},{0xB7L},{0xB7L}};
                        int i, j;
                        l_1198 = &l_1194;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_2167->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((l_1201 &= (*p_2167->g_359)), (l_1202 ^= 0x3790L))), 10))][(safe_mod_func_uint32_t_u_u(p_2167->tid, 7))]));
                        l_1231[6][4][0] = (((safe_lshift_func_int8_t_s_s(((*p_2167->g_359) < (safe_mod_func_int32_t_s_s((l_1229.y = (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((((*l_1143) = (*l_1143)) != &p_2167->g_584), 4)) , ((safe_rshift_func_uint8_t_u_s((((*l_1198) |= ((safe_mul_func_int16_t_s_s((p_2167->g_991.y = ((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(0x5AF5L, 5L, (-5L), 0x4574L)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_1221.xx)).xxyyxyxx)).hi))), ((VECTOR(int16_t, 4))(p_2167->g_1222.s3067)))).s6, ((VECTOR(int16_t, 2))(p_2167->g_1223.s32)), (-2L))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(65530UL, 1UL)).yxxyyyyx))).odd, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_2167->g_1224.s62b6)).yxywzyyw)).hi, ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_1225.s67)).xyxyxxxx)).even, ((VECTOR(uint16_t, 16))(l_1226.zzxyzwyzzyyxwwyz)).sb04b))))))))))).w , ((VECTOR(uint16_t, 2))(65527UL, 65530UL)).even), ((*p_2167->g_583) == ((*l_1144) = l_1227)))) & GROUP_DIVERGE(0, 1)) <= 0xE12AAFB8D06A6A3EL), (p_52.f0 , 0x61L))) , (l_1228 , (*p_2167->g_359))), 0x40D9L)) != p_52.f0)), 1L)) && 0x5CC32A55L)) ^ p_52.f0), 2)) >= l_1228.f0)), (*p_2167->g_359)))), p_2167->g_901.s7))), 1)) , p_2167->g_149) , l_1230[3][0]);
                    }
                    p_2167->g_1107 ^= ((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((*l_1198), (safe_add_func_uint8_t_u_u(((0x00ACEE3D933E01A5L != l_1194) , ((safe_add_func_uint64_t_u_u(((l_1228.f0 , ((void*)0 != l_1240[2])) || (safe_mod_func_int16_t_s_s((((safe_add_func_int8_t_s_s(((l_1175.x = ((((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 4))((~((*p_2167->g_1036) , p_52.f0)), ((VECTOR(int32_t, 2))(p_2167->g_1245.xy)), (-1L))).xxyxzxzyzzxwwzxz))).sb7, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_1246.s2076)), (GROUP_DIVERGE(2, 1) , (l_1247 != (void*)0)), (*l_1198), 0UL, 0xC68F62C9L)).s65, ((VECTOR(uint32_t, 2))(4294967295UL))))).even < 0x31324C8BL) ^ p_2167->g_1044)) != 0x09BA0DEDL), l_1248)) & 0UL) , p_52.f0), p_52.f0))), p_52.f0)) , p_52.f0)), (*p_2167->g_1036))))), p_52.f0)) , p_52.f0);
                    for (l_1202 = (-18); (l_1202 > 9); l_1202++)
                    { /* block id: 541 */
                        int32_t l_1251 = (-6L);
                        int32_t l_1255 = 0L;
                        int32_t l_1256 = (-1L);
                        int32_t l_1257[6][5] = {{0x0E76DC7FL,(-1L),0L,0x3D9D0B9EL,0L},{0x0E76DC7FL,(-1L),0L,0x3D9D0B9EL,0L},{0x0E76DC7FL,(-1L),0L,0x3D9D0B9EL,0L},{0x0E76DC7FL,(-1L),0L,0x3D9D0B9EL,0L},{0x0E76DC7FL,(-1L),0L,0x3D9D0B9EL,0L},{0x0E76DC7FL,(-1L),0L,0x3D9D0B9EL,0L}};
                        uint8_t l_1263[10] = {0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L};
                        uint32_t * volatile **l_1273 = &p_2167->g_1271;
                        int i, j;
                        ++l_1263[7];
                        l_1268--;
                        (*l_1273) = p_2167->g_1271;
                        (*l_1198) = ((void*)0 != l_1274);
                    }
                    return l_1275;
                }
            }
            for (l_701 = 0; (l_701 > 54); l_701 = safe_add_func_int16_t_s_s(l_701, 6))
            { /* block id: 552 */
                uint64_t l_1299 = 0x9B53C1A8353A1394L;
                int32_t l_1300 = 0L;
                int32_t l_1301 = 0x0B975A64L;
                (*p_2167->g_668) = ((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_u((~((*p_2167->g_1036) |= 0L)), 1)) | (!(safe_mod_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((0x34DE7DEAL >= (safe_rshift_func_uint8_t_u_u(0x51L, 3))), l_1254)) != ((l_1300 &= (p_2167->g_149 , (safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s((l_1299 &= (((((*p_2167->g_359) = 0x3C04L) | ((((l_1294 , ((safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(p_2167->g_894.s7, p_52.f0)) != 0x15L), p_52.f0)) || GROUP_DIVERGE(2, 1))) , (void*)0) != (void*)0) >= p_52.f0)) >= p_52.f0) , p_52.f0)), l_1253)), FAKE_DIVERGE(p_2167->group_0_offset, get_group_id(0), 10))))) || 8L)), (*p_2167->g_7))))) == l_1301), 14)) , l_1275);
            }
            for (p_2167->g_1018.f0 = 4; (p_2167->g_1018.f0 == (-5)); p_2167->g_1018.f0--)
            { /* block id: 561 */
                uint32_t *l_1352[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1352[i][j] = (void*)0;
                }
                for (p_2167->g_105 = 11; (p_2167->g_105 >= 21); p_2167->g_105 = safe_add_func_uint16_t_u_u(p_2167->g_105, 7))
                { /* block id: 564 */
                    union U2 **l_1311 = (void*)0;
                    union U2 ***l_1312 = (void*)0;
                    int32_t l_1316[1];
                    int32_t l_1319 = 0x31C6A468L;
                    uint16_t *l_1320 = (void*)0;
                    uint16_t *l_1321[2];
                    uint8_t l_1354 = 0UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1316[i] = 0x2F0A8643L;
                    for (i = 0; i < 2; i++)
                        l_1321[i] = &l_701;
                    (*l_594) = (((safe_sub_func_int8_t_s_s((((VECTOR(int32_t, 8))(p_2167->g_1308.yyyxxyyx)).s7 == p_52.f0), p_2167->g_292.f3)) & 0x7FFFL) , ((safe_mul_func_int8_t_s_s(((l_1313 = l_1311) == ((safe_add_func_uint32_t_u_u(l_1316[0], ((l_1253 = (safe_rshift_func_int8_t_s_s(((*p_2167->g_1036) |= (l_1319 = (*p_2167->g_7))), 1))) == (safe_mul_func_uint16_t_u_u(p_52.f0, p_52.f0))))) , l_1324)), p_52.f0)) , (void*)0));
                    for (p_2167->g_468 = 0; (p_2167->g_468 <= 4); p_2167->g_468++)
                    { /* block id: 572 */
                        p_2167->g_820.w = 5L;
                    }
                    if ((((VECTOR(int32_t, 4))((p_52.f0 | (l_1316[0] != p_52.f0)), 0x576A18CCL, 0x6F4659E3L, 7L)).w > 0x5BA5FF82L))
                    { /* block id: 575 */
                        union U3 **l_1349 = &l_1145;
                        int32_t l_1353 = (-6L);
                        p_2167->g_636.x ^= p_52.f0;
                        atomic_add(&p_2167->l_atomic_reduction[0], ((safe_div_func_uint32_t_u_u(p_52.f0, ((safe_lshift_func_int16_t_s_u(((((*l_1088) = ((*l_997) = (*l_997))) != (void*)0) ^ ((safe_sub_func_int64_t_s_s(((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u((((safe_mod_func_uint8_t_u_u(0x7DL, (safe_add_func_int8_t_s_s(((l_1349 != (void*)0) == ((*p_2167->g_359) = (((safe_lshift_func_int8_t_s_u(((l_1352[0][2] != &p_2167->g_105) | ((p_52.f0 <= (-1L)) <= (-1L))), 5)) && p_2167->g_1174.y) <= 0L))), 0x30L)))) , l_1225.s3) == 0x2041E2718CF1400BL), l_1353)), (*p_2167->g_1036))), 0xEA8CL)), p_52.f0)), p_52.f0)), l_1353)) < l_1354), (*p_2167->g_341))) == l_1316[0])), p_52.f0)) , p_52.f0))) ^ p_52.f0));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_2167->v_collective += p_2167->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    else
                    { /* block id: 581 */
                        (*l_594) = &l_1253;
                        return p_52;
                    }
                    for (p_2167->g_1090.f1 = 0; (p_2167->g_1090.f1 <= 1); p_2167->g_1090.f1++)
                    { /* block id: 587 */
                        int32_t *l_1357 = (void*)0;
                        (*l_594) = l_1357;
                    }
                }
                p_2167->g_901.s5 |= (p_2167->g_894.s9 & ((((p_52.f0 <= 0x15L) == ((-7L) != (GROUP_DIVERGE(2, 1) >= p_52.f0))) , (p_52.f0 != (safe_sub_func_uint32_t_u_u(FAKE_DIVERGE(p_2167->group_2_offset, get_group_id(2), 10), (safe_div_func_uint8_t_u_u(((*l_1109)++), p_2167->g_898.y)))))) < p_2167->g_183.y));
            }
        }
        else
        { /* block id: 594 */
            VECTOR(uint16_t, 4) l_1364 = (VECTOR(uint16_t, 4))(0x6D43L, (VECTOR(uint16_t, 2))(0x6D43L, 0x67F6L), 0x67F6L);
            int64_t *l_1370[2];
            uint32_t ***l_1372 = (void*)0;
            uint32_t **l_1374[4];
            uint32_t ***l_1373 = &l_1374[0];
            VECTOR(int16_t, 16) l_1377 = (VECTOR(int16_t, 16))(0x1ED3L, (VECTOR(int16_t, 4))(0x1ED3L, (VECTOR(int16_t, 2))(0x1ED3L, 0x6247L), 0x6247L), 0x6247L, 0x1ED3L, 0x6247L, (VECTOR(int16_t, 2))(0x1ED3L, 0x6247L), (VECTOR(int16_t, 2))(0x1ED3L, 0x6247L), 0x1ED3L, 0x6247L, 0x1ED3L, 0x6247L);
            int32_t l_1379[6] = {5L,5L,5L,5L,5L,5L};
            int i;
            for (i = 0; i < 2; i++)
                l_1370[i] = &p_2167->g_288[1].f3;
            for (i = 0; i < 4; i++)
                l_1374[i] = &l_1113[0][1][0];
            l_818.se = (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_1364.wzxzxwyxyxwxxxyw)))).s6 & ((*p_2167->g_359) = (GROUP_DIVERGE(2, 1) , ((!(l_1364.y == ((safe_unary_minus_func_int32_t_s(0x35B811E1L)) & ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_1366.ywzw)).xyyxxxyywwxxyzxx)).s963b)).z))) | ((l_1379[5] ^= (((*l_1369) ^= (safe_lshift_func_uint16_t_u_u((((l_1369 != l_1370[0]) , ((p_2167->g_1371 != ((*l_1373) = &p_2167->g_1272)) | ((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_1377.sa5)).even, ((VECTOR(int16_t, 8))(l_1378.sc7007eec)).s2)) || 1UL))) , (((p_2167->g_820.y & (0xB8L || p_2167->g_1223.sc)) <= p_52.f0) <= l_1364.y)), p_2167->g_338.s3))) ^ l_1377.s5)) >= 0UL)))));
        }
    }
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_2167->g_90 p_2167->g_53.f0 p_2167->g_105 p_2167->g_116 p_2167->g_129 p_2167->l_comm_values p_2167->g_107 p_2167->g_8 p_2167->g_149 p_2167->g_152 p_2167->g_154 p_2167->g_156 p_2167->g_7 p_2167->g_162 p_2167->g_167 p_2167->g_168 p_2167->g_53 p_2167->g_183 p_2167->g_233 p_2167->g_237 p_2167->g_261 p_2167->g_comm_values p_2167->g_312 p_2167->g_288.f2 p_2167->g_338 p_2167->g_341 p_2167->g_359 p_2167->g_292.f1 p_2167->g_390 p_2167->g_403 p_2167->g_408 p_2167->g_420 p_2167->g_292.f2 p_2167->g_288.f1 p_2167->g_427 p_2167->g_292.f0 p_2167->g_428 p_2167->g_421 p_2167->g_444 p_2167->g_459 p_2167->g_485 p_2167->g_477 p_2167->g_288.f3 p_2167->g_292.f3 p_2167->g_518 p_2167->g_550 p_2167->g_455 p_2167->g_514.f2 p_2167->g_583
 * writes: p_2167->g_105 p_2167->g_116 p_2167->g_53.f0 p_2167->g_129 p_2167->g_90 p_2167->g_149 p_2167->g_152 p_2167->g_154 p_2167->g_53 p_2167->g_233 p_2167->g_288.f3 p_2167->g_288.f2 p_2167->g_292.f0 p_2167->g_288.f1 p_2167->g_292.f1 p_2167->g_390 p_2167->g_292.f2 p_2167->g_183 p_2167->g_448 p_2167->g_454 p_2167->g_468 p_2167->g_359 p_2167->g_477 p_2167->g_428 p_2167->g_484 p_2167->g_427 p_2167->g_518 p_2167->g_514.f2 p_2167->g_583
 */
int32_t * func_54(int16_t  p_55, int8_t * p_56, int32_t  p_57, union U3  p_58, struct S4 * p_2167)
{ /* block id: 30 */
    uint16_t l_88 = 65532UL;
    int32_t *l_103 = &p_2167->g_90;
    int32_t l_115[7] = {0L,7L,0L,0L,7L,0L,0L};
    VECTOR(uint8_t, 4) l_125 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL);
    uint64_t l_165 = 0xDD3928CDBBAE03F5L;
    VECTOR(uint8_t, 8) l_166 = (VECTOR(uint8_t, 8))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0x9AL), 0x9AL), 0x9AL, 8UL, 0x9AL);
    struct S1 l_190 = {0x1FC279311A1F4821L};
    int8_t l_223 = (-1L);
    union U3 *l_229 = (void*)0;
    struct S0 *l_291 = &p_2167->g_292;
    struct S0 **l_290 = &l_291;
    VECTOR(uint16_t, 8) l_319 = (VECTOR(uint16_t, 8))(0x7075L, (VECTOR(uint16_t, 4))(0x7075L, (VECTOR(uint16_t, 2))(0x7075L, 0x4E21L), 0x4E21L), 0x4E21L, 0x7075L, 0x4E21L);
    VECTOR(int16_t, 8) l_327 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x2179L), 0x2179L), 0x2179L, 1L, 0x2179L);
    int64_t *l_343 = (void*)0;
    VECTOR(uint8_t, 16) l_344 = (VECTOR(uint8_t, 16))(0x7BL, (VECTOR(uint8_t, 4))(0x7BL, (VECTOR(uint8_t, 2))(0x7BL, 0x43L), 0x43L), 0x43L, 0x7BL, 0x43L, (VECTOR(uint8_t, 2))(0x7BL, 0x43L), (VECTOR(uint8_t, 2))(0x7BL, 0x43L), 0x7BL, 0x43L, 0x7BL, 0x43L);
    int64_t **l_353 = (void*)0;
    int64_t l_355 = 0x75D905F723D67A6BL;
    struct S1 *l_419 = &p_2167->g_53;
    struct S1 **l_418 = &l_419;
    int16_t **l_474 = &p_2167->g_359;
    int32_t *l_475 = &p_2167->g_90;
    int32_t **l_476[5][6] = {{&l_103,&l_475,&l_103,&l_103,&l_475,&l_103},{&l_103,&l_475,&l_103,&l_103,&l_475,&l_103},{&l_103,&l_475,&l_103,&l_103,&l_475,&l_103},{&l_103,&l_475,&l_103,&l_103,&l_475,&l_103},{&l_103,&l_475,&l_103,&l_103,&l_475,&l_103}};
    uint8_t *l_482[10][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,&p_2167->g_129[7],(void*)0,&p_2167->g_129[8]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2167->g_129[7],(void*)0,&p_2167->g_129[8]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2167->g_129[7],(void*)0,&p_2167->g_129[8]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2167->g_129[7],(void*)0,&p_2167->g_129[8]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2167->g_129[7],(void*)0,&p_2167->g_129[8]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2167->g_129[7],(void*)0,&p_2167->g_129[8]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2167->g_129[7],(void*)0,&p_2167->g_129[8]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2167->g_129[7],(void*)0,&p_2167->g_129[8]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2167->g_129[7],(void*)0,&p_2167->g_129[8]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2167->g_129[7],(void*)0,&p_2167->g_129[8]}};
    uint32_t **l_483[5];
    VECTOR(int8_t, 8) l_557 = (VECTOR(int8_t, 8))(0x05L, (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, (-1L)), (-1L)), (-1L), 0x05L, (-1L));
    int64_t ****l_560 = &p_2167->g_454;
    VECTOR(uint32_t, 16) l_580 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x80A8B3DBL), 0x80A8B3DBL), 0x80A8B3DBL, 0UL, 0x80A8B3DBL, (VECTOR(uint32_t, 2))(0UL, 0x80A8B3DBL), (VECTOR(uint32_t, 2))(0UL, 0x80A8B3DBL), 0UL, 0x80A8B3DBL, 0UL, 0x80A8B3DBL);
    int i, j;
    for (i = 0; i < 5; i++)
        l_483[i] = (void*)0;
    if (l_88)
    { /* block id: 31 */
        int32_t *l_89 = &p_2167->g_90;
        int32_t **l_91 = &l_89;
        int i, j;
        (*l_91) = l_89;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_2167->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[(safe_mod_func_uint32_t_u_u((**l_91), 10))][(safe_mod_func_uint32_t_u_u(p_2167->tid, 7))]));
    }
    else
    { /* block id: 36 */
        int16_t l_102 = 0x4F1AL;
        uint32_t *l_104 = &p_2167->g_105;
        uint32_t *l_106[10][8][3] = {{{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0}},{{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0}},{{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0}},{{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0}},{{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0}},{{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0}},{{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0}},{{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0}},{{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0}},{{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0},{&p_2167->g_107[1],(void*)0,(void*)0}}};
        int32_t l_108[3][3] = {{(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L)}};
        int16_t *l_109 = &l_102;
        int32_t l_110[3];
        int32_t l_111 = (-3L);
        int32_t *l_119 = &l_111;
        struct S1 l_143[2] = {{-10L},{-10L}};
        VECTOR(int32_t, 8) l_155 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L));
        VECTOR(int64_t, 4) l_220 = (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x0B5351F7D0607FCCL), 0x0B5351F7D0607FCCL);
        VECTOR(int8_t, 8) l_238 = (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x35L), 0x35L), 0x35L, (-3L), 0x35L);
        uint64_t *l_264 = &p_2167->g_228;
        int32_t l_266 = (-1L);
        struct S0 *l_287 = &p_2167->g_288[1];
        struct S0 **l_286[10][6] = {{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287}};
        uint16_t l_293 = 0UL;
        VECTOR(uint16_t, 4) l_311 = (VECTOR(uint16_t, 4))(0x479AL, (VECTOR(uint16_t, 2))(0x479AL, 0UL), 0UL);
        VECTOR(uint8_t, 16) l_324 = (VECTOR(uint8_t, 16))(0x61L, (VECTOR(uint8_t, 4))(0x61L, (VECTOR(uint8_t, 2))(0x61L, 0xD0L), 0xD0L), 0xD0L, 0x61L, 0xD0L, (VECTOR(uint8_t, 2))(0x61L, 0xD0L), (VECTOR(uint8_t, 2))(0x61L, 0xD0L), 0x61L, 0xD0L, 0x61L, 0xD0L);
        int64_t **l_439 = &l_343;
        VECTOR(int8_t, 2) l_443 = (VECTOR(int8_t, 2))(0L, 1L);
        int32_t **l_471 = (void*)0;
        int32_t **l_472 = (void*)0;
        int32_t **l_473 = &l_119;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_110[i] = 0x5B8D8D30L;
        if ((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(4294967295UL, ((l_110[1] = ((0x6D2767F9L <= (((*l_109) = (+(safe_add_func_int8_t_s_s(0x43L, (18446744073709551608UL ^ ((l_108[2][2] |= (!(safe_add_func_uint16_t_u_u(((l_102 , ((p_58.f0 <= (&p_2167->g_90 != l_103)) <= (((*l_104) = 0xEBAD5537L) | l_102))) && p_58.f0), p_2167->g_53.f0)))) , p_2167->g_105)))))) > l_110[1])) >= 0x59L)) == l_111))), 4294967295UL)), (*l_103))))
        { /* block id: 41 */
            VECTOR(int32_t, 16) l_112 = (VECTOR(int32_t, 16))(0x05604A18L, (VECTOR(int32_t, 4))(0x05604A18L, (VECTOR(int32_t, 2))(0x05604A18L, 0x5F7132E5L), 0x5F7132E5L), 0x5F7132E5L, 0x05604A18L, 0x5F7132E5L, (VECTOR(int32_t, 2))(0x05604A18L, 0x5F7132E5L), (VECTOR(int32_t, 2))(0x05604A18L, 0x5F7132E5L), 0x05604A18L, 0x5F7132E5L, 0x05604A18L, 0x5F7132E5L);
            int32_t *l_113 = &l_111;
            int32_t *l_114[7] = {&l_110[1],(void*)0,&l_110[1],&l_110[1],(void*)0,&l_110[1],&l_110[1]};
            int32_t **l_120 = (void*)0;
            int32_t **l_121 = &l_103;
            int i;
            p_2167->g_116++;
            (*l_121) = l_119;
            for (p_2167->g_53.f0 = (-2); (p_2167->g_53.f0 != (-3)); p_2167->g_53.f0 = safe_sub_func_uint8_t_u_u(p_2167->g_53.f0, 5))
            { /* block id: 46 */
                (*l_121) = (void*)0;
            }
            (*l_113) = (*l_119);
        }
        else
        { /* block id: 50 */
            int32_t l_132 = 7L;
            uint32_t l_142 = 0x97D3C620L;
            int32_t l_144[8] = {0x1F3CFE62L,0x1F3CFE62L,0x1F3CFE62L,0x1F3CFE62L,0x1F3CFE62L,0x1F3CFE62L,0x1F3CFE62L,0x1F3CFE62L};
            int32_t l_171[7][1] = {{(-5L)},{(-5L)},{(-5L)},{(-5L)},{(-5L)},{(-5L)},{(-5L)}};
            struct S1 l_201 = {0L};
            VECTOR(int32_t, 2) l_215 = (VECTOR(int32_t, 2))(4L, 0x5579BDA6L);
            VECTOR(int64_t, 8) l_221 = (VECTOR(int64_t, 8))(0x29903A52224D5146L, (VECTOR(int64_t, 4))(0x29903A52224D5146L, (VECTOR(int64_t, 2))(0x29903A52224D5146L, 0x1A4662F551003BBAL), 0x1A4662F551003BBAL), 0x1A4662F551003BBAL, 0x29903A52224D5146L, 0x1A4662F551003BBAL);
            VECTOR(uint16_t, 2) l_230 = (VECTOR(uint16_t, 2))(0UL, 6UL);
            int8_t **l_298 = &p_2167->g_7;
            VECTOR(uint16_t, 2) l_310 = (VECTOR(uint16_t, 2))(0UL, 0UL);
            int64_t *l_320 = (void*)0;
            struct S1 *l_323 = &l_201;
            VECTOR(uint8_t, 8) l_325 = (VECTOR(uint8_t, 8))(0xB8L, (VECTOR(uint8_t, 4))(0xB8L, (VECTOR(uint8_t, 2))(0xB8L, 248UL), 248UL), 248UL, 0xB8L, 248UL);
            int64_t *l_326 = &p_2167->g_292.f0;
            VECTOR(uint16_t, 16) l_330 = (VECTOR(uint16_t, 16))(0x7222L, (VECTOR(uint16_t, 4))(0x7222L, (VECTOR(uint16_t, 2))(0x7222L, 65535UL), 65535UL), 65535UL, 0x7222L, 65535UL, (VECTOR(uint16_t, 2))(0x7222L, 65535UL), (VECTOR(uint16_t, 2))(0x7222L, 65535UL), 0x7222L, 65535UL, 0x7222L, 65535UL);
            VECTOR(int8_t, 8) l_333 = (VECTOR(int8_t, 8))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L);
            VECTOR(uint8_t, 2) l_334 = (VECTOR(uint8_t, 2))(0xFCL, 255UL);
            int8_t *l_335 = &l_223;
            int16_t *l_360 = &p_2167->g_288[1].f1;
            int64_t l_389 = 0x46CE228824994870L;
            int32_t *l_393 = (void*)0;
            uint8_t l_402 = 8UL;
            struct S0 **l_437 = &l_291;
            struct S0 ***l_438[7];
            int64_t ***l_440 = &l_353;
            uint16_t *l_447 = (void*)0;
            int64_t ****l_453[10] = {&l_440,&l_440,&l_440,&l_440,&l_440,&l_440,&l_440,&l_440,&l_440,&l_440};
            uint16_t *l_466 = (void*)0;
            uint16_t *l_467 = (void*)0;
            int i, j;
            for (i = 0; i < 7; i++)
                l_438[i] = &l_286[6][4];
            if (((*l_119) = ((VECTOR(int32_t, 2))(0x57ECED54L, 0x4DD54503L)).lo))
            { /* block id: 52 */
                int8_t l_124 = 0x77L;
                uint8_t *l_128 = &p_2167->g_129[7];
                int8_t l_145 = 0x50L;
                int64_t *l_146 = &p_2167->g_53.f0;
                VECTOR(int32_t, 4) l_153 = (VECTOR(int32_t, 4))(0x6078D04CL, (VECTOR(int32_t, 2))(0x6078D04CL, 0L), 0L);
                VECTOR(int8_t, 8) l_169 = (VECTOR(int8_t, 8))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 7L), 7L), 7L, 5L, 7L);
                uint64_t *l_210 = (void*)0;
                uint64_t *l_211[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                VECTOR(uint16_t, 16) l_212 = (VECTOR(uint16_t, 16))(0xB932L, (VECTOR(uint16_t, 4))(0xB932L, (VECTOR(uint16_t, 2))(0xB932L, 0x9E5AL), 0x9E5AL), 0x9E5AL, 0xB932L, 0x9E5AL, (VECTOR(uint16_t, 2))(0xB932L, 0x9E5AL), (VECTOR(uint16_t, 2))(0xB932L, 0x9E5AL), 0xB932L, 0x9E5AL, 0xB932L, 0x9E5AL);
                int8_t *l_213 = (void*)0;
                int8_t *l_214[5] = {&l_124,&l_124,&l_124,&l_124,&l_124};
                int32_t *l_216 = (void*)0;
                int32_t *l_217 = &l_108[2][2];
                int i;
                if (((l_124 != ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_125.wzzz)).wwzxyzxxwyywzyxz)).sf) >= ((safe_mul_func_uint8_t_u_u(((*l_128)--), l_132)) , (safe_div_func_int64_t_s_s(((*l_146) = (safe_sub_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), (((safe_sub_func_uint8_t_u_u(((l_144[2] = (safe_unary_minus_func_int16_t_s(((*l_109) &= ((~((*l_103) = 0x4A8444ACL)) < ((safe_add_func_uint16_t_u_u(p_2167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2167->tid, 7))], 0x7BB6L)) >= ((p_58.f0 = p_55) <= ((l_142 && ((p_2167->g_116 && ((((l_143[0] , l_142) , p_2167->g_129[1]) & p_57) || p_2167->g_107[0])) && 0xC2A5L)) , FAKE_DIVERGE(p_2167->group_1_offset, get_group_id(1), 10))))))))) > l_145), p_2167->g_8)) && p_55) | p_57)))), l_132)))))
                { /* block id: 59 */
                    union U3 *l_150 = &p_2167->g_149;
                    uint64_t *l_151 = &p_2167->g_152;
                    int8_t *l_159 = &l_145;
                    uint16_t *l_170[5][2][8] = {{{&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88,&l_88}},{{&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88,&l_88}},{{&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88,&l_88}},{{&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88,&l_88}},{{&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88,&l_88}}};
                    int i, j, k;
                    if ((((((VECTOR(int32_t, 8))((safe_sub_func_uint64_t_u_u((+p_55), ((*l_151) = (((*l_150) = p_2167->g_149) , l_132)))), 4L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(l_153.zxzwzzxwxwyyyxyz)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))((-1L), 0L)).yxxxyyyx, ((VECTOR(int32_t, 8))(p_2167->g_152, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(0x3E6BB753L, ((VECTOR(int32_t, 2))(0x3FEE94D8L, 0x5E8C976AL)), 8L, ((VECTOR(int32_t, 4))(p_2167->g_154.xyzx)), 0x0BE37677L, 0x6F6173B2L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_155.s63)), 0x0E39E102L, 0x1848449BL)), (-5L), 0x56F2F148L)).s3a, ((VECTOR(int32_t, 2))(0x3826E06BL, (-5L)))))).xxxy)).odd, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(p_2167->g_156.s6422343574345062)).sd9, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((-1L), ((safe_rshift_func_int8_t_s_s((*p_2167->g_7), (l_153.w ^= (l_144[2] = ((*l_159) = 0x11L))))) ^ (l_171[2][0] ^= (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_2167->g_162.xx)).xyyy)).x, (safe_lshift_func_uint8_t_u_u(l_165, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 16))(l_166.s2235401170370250)), ((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(p_2167->g_167.s40271732)).s1306507156227534, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_2167->g_168.yy)).xyyyxyyxxxyyyyyx)).hi)).s1156520365504604)).s70, (uint8_t)((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x35L, 0x09L)), (-1L), (-1L), ((VECTOR(int8_t, 2))(l_169.s71)), 1L, 0x29L)))).s5 | (0xDDL <= (*p_2167->g_7))) , p_2167->g_156.s7)))).xyxxxxxx)).s6211651226526517, ((VECTOR(uint8_t, 16))(0x37L))))).s22e0)).zzxxzwyzxyyzzzxx, ((VECTOR(uint8_t, 16))(0x38L))))))).odd, ((VECTOR(uint8_t, 8))(0x91L))))), ((VECTOR(uint8_t, 4))(0xD3L)), ((VECTOR(uint8_t, 4))(0x38L)))), ((VECTOR(uint8_t, 16))(0x22L)), ((VECTOR(uint8_t, 16))(0xA2L)))))))).hi)).s2)))))), 0x56EBF7B4L, 0x1CA70F6CL)).ywxyzzwyxwwyzzxy)).s96f6)), ((VECTOR(int32_t, 4))(0x01792AF5L))))).odd))), ((VECTOR(int32_t, 2))(0x19356403L))))).yyyxyxxxxyxxyxyy)).s1, 0x323535E1L, ((VECTOR(int32_t, 2))(0x682E6818L)), 0x4FB6B91AL, 0x4EC19F97L, 3L))))).s40)).xyxxyyyxxyyyxxxy))).s8c, ((VECTOR(int32_t, 2))(0x4B93B745L)), ((VECTOR(int32_t, 2))((-1L)))))).yxyyyyxxyyxxyxyx, ((VECTOR(int32_t, 16))(0x494F83D7L))))).se1)), p_2167->g_90, 0x38839AD8L, 0x558E0F9DL, 0x4B9365FCL)).s3 ^ p_55) , (-1L)) || 0xD9CE7F4B8DB84F2AL))
                    { /* block id: 66 */
                        return &p_2167->g_90;
                    }
                    else
                    { /* block id: 68 */
                        int32_t *l_172[2][5][9] = {{{(void*)0,(void*)0,&l_144[2],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_144[2],(void*)0},{(void*)0,(void*)0,&l_144[2],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_144[2],(void*)0},{(void*)0,(void*)0,&l_144[2],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_144[2],(void*)0},{(void*)0,(void*)0,&l_144[2],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_144[2],(void*)0},{(void*)0,(void*)0,&l_144[2],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_144[2],(void*)0}},{{(void*)0,(void*)0,&l_144[2],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_144[2],(void*)0},{(void*)0,(void*)0,&l_144[2],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_144[2],(void*)0},{(void*)0,(void*)0,&l_144[2],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_144[2],(void*)0},{(void*)0,(void*)0,&l_144[2],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_144[2],(void*)0},{(void*)0,(void*)0,&l_144[2],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_144[2],(void*)0}}};
                        int i, j, k;
                        return &p_2167->g_90;
                    }
                }
                else
                { /* block id: 71 */
                    uint32_t l_176 = 0x85DD0340L;
                    for (p_58.f0 = 0; (p_58.f0 > (-24)); p_58.f0 = safe_sub_func_uint8_t_u_u(p_58.f0, 4))
                    { /* block id: 74 */
                        VECTOR(int32_t, 2) l_175 = (VECTOR(int32_t, 2))(1L, 0x40EB3422L);
                        struct S1 *l_177 = (void*)0;
                        struct S1 *l_178 = &l_143[0];
                        uint8_t *l_188[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t *l_189[5][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                        int i, j, k;
                        l_176 &= ((VECTOR(int32_t, 2))(l_175.yx)).hi;
                        (*l_178) = p_2167->g_53;
                        p_2167->g_154.z &= ((((safe_mul_func_int8_t_s_s(0x6BL, (((((*l_146) = p_57) <= l_124) , (safe_lshift_func_uint8_t_u_u((((VECTOR(int32_t, 8))(p_2167->g_183.xxyxyyxx)).s0 || (safe_div_func_uint8_t_u_u(((*l_103) = ((safe_add_func_int16_t_s_s(((void*)0 != &p_2167->g_152), ((5UL | (-1L)) == l_176))) || ((*l_128) = (p_57 > l_171[5][0])))), (*p_2167->g_7)))), p_58.f0))) == (*l_119)))) <= p_57) ^ p_2167->g_168.y) || p_2167->g_183.y);
                        if (p_58.f0)
                            continue;
                    }
                    p_2167->g_53 = l_190;
                }
                (*l_217) &= (+(safe_add_func_int8_t_s_s((l_215.y = (safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u((p_2167->g_90 && (safe_sub_func_int16_t_s_s(p_57, (GROUP_DIVERGE(2, 1) <= (~(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x22L, 0x3CL)), 0x7FL, 0x3DL)).odd)), 0x3FL, 0x2FL)).ywyyxzwy, (int8_t)((((((l_201 , (((*l_103) , ((((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((*l_103), (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(p_2167->g_154.x, (p_2167->g_152 = p_55))), ((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 4))(l_212.sfb12)).zxxwxxzxyzzwyyxw))).sb)))), p_2167->g_116)) <= GROUP_DIVERGE(0, 1)) , (((*l_119) |= (-2L)) < 4294967290UL)) , l_145)) != p_2167->g_129[7])) ^ p_2167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2167->tid, 7))]) , p_2167->g_53.f0) <= 1L) > (*p_2167->g_7)) & p_55)))), ((VECTOR(int8_t, 8))(0x3CL))))).s3 <= p_2167->g_105)))))), 0)) != l_169.s1) > p_2167->g_90) ^ p_55), p_2167->g_154.x)), p_57))), 0xEFL)));
                for (p_2167->g_152 = 0; (p_2167->g_152 == 2); p_2167->g_152 = safe_add_func_int32_t_s_s(p_2167->g_152, 6))
                { /* block id: 91 */
                    uint64_t l_222 = 5UL;
                    l_222 &= (((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 8))(l_220.yzywywyx)).even))).w < ((VECTOR(int64_t, 4))(l_221.s3025)).y);
                }
                (*l_103) = (p_2167->g_129[0] != 1L);
            }
            else
            { /* block id: 95 */
                VECTOR(int32_t, 2) l_242 = (VECTOR(int32_t, 2))(0x373F3D56L, 0x25718F32L);
                uint32_t *l_245[6][2] = {{&p_2167->g_107[0],&p_2167->g_107[1]},{&p_2167->g_107[0],&p_2167->g_107[1]},{&p_2167->g_107[0],&p_2167->g_107[1]},{&p_2167->g_107[0],&p_2167->g_107[1]},{&p_2167->g_107[0],&p_2167->g_107[1]},{&p_2167->g_107[0],&p_2167->g_107[1]}};
                uint32_t *l_247 = &p_2167->g_107[1];
                uint64_t *l_265 = &p_2167->g_228;
                int i, j;
                if (l_223)
                { /* block id: 96 */
                    VECTOR(int16_t, 2) l_224 = (VECTOR(int16_t, 2))(0x040AL, 0x1470L);
                    uint64_t *l_227[6][2][6] = {{{(void*)0,&p_2167->g_228,(void*)0,(void*)0,&p_2167->g_228,(void*)0},{(void*)0,&p_2167->g_228,(void*)0,(void*)0,&p_2167->g_228,(void*)0}},{{(void*)0,&p_2167->g_228,(void*)0,(void*)0,&p_2167->g_228,(void*)0},{(void*)0,&p_2167->g_228,(void*)0,(void*)0,&p_2167->g_228,(void*)0}},{{(void*)0,&p_2167->g_228,(void*)0,(void*)0,&p_2167->g_228,(void*)0},{(void*)0,&p_2167->g_228,(void*)0,(void*)0,&p_2167->g_228,(void*)0}},{{(void*)0,&p_2167->g_228,(void*)0,(void*)0,&p_2167->g_228,(void*)0},{(void*)0,&p_2167->g_228,(void*)0,(void*)0,&p_2167->g_228,(void*)0}},{{(void*)0,&p_2167->g_228,(void*)0,(void*)0,&p_2167->g_228,(void*)0},{(void*)0,&p_2167->g_228,(void*)0,(void*)0,&p_2167->g_228,(void*)0}},{{(void*)0,&p_2167->g_228,(void*)0,(void*)0,&p_2167->g_228,(void*)0},{(void*)0,&p_2167->g_228,(void*)0,(void*)0,&p_2167->g_228,(void*)0}}};
                    VECTOR(uint64_t, 2) l_251 = (VECTOR(uint64_t, 2))(0xEEBF030DFCB13B14L, 0x5093E27F5B760065L);
                    int i, j, k;
                    (*l_103) |= (((VECTOR(int16_t, 4))(l_224.yxyx)).x ^ (safe_div_func_int16_t_s_s((&p_58 != (((*l_119) = 18446744073709551615UL) , l_229)), ((VECTOR(uint16_t, 16))(l_230.yyyyxxyxxyxxxxyx)).sd)));
                    for (l_223 = 0; (l_223 >= (-6)); l_223 = safe_sub_func_uint8_t_u_u(l_223, 3))
                    { /* block id: 101 */
                        uint32_t l_239[3][4] = {{4294967291UL,0xFAB115D6L,4294967291UL,4294967291UL},{4294967291UL,0xFAB115D6L,4294967291UL,4294967291UL},{4294967291UL,0xFAB115D6L,4294967291UL,4294967291UL}};
                        uint32_t **l_246 = &l_245[3][1];
                        uint32_t **l_248 = &l_106[2][7][1];
                        uint32_t *l_254 = &p_2167->g_116;
                        struct S1 *l_255 = &l_143[1];
                        int i, j;
                        p_2167->g_233 = p_2167->g_233;
                        l_215.x = (safe_div_func_int32_t_s_s(0x135BB748L, (((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_2167->g_237.s26)).yyyy)), ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_238.s5505700745717507)))).odd, (int8_t)l_239[0][1], (int8_t)(*p_2167->g_7)))).hi))), ((VECTOR(int8_t, 2))(0x5AL, 1L)).xyxx))).xzxywxyx))).s4 , (safe_sub_func_int64_t_s_s(((*l_119) , (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_242.yyxx)))).y == ((*l_254) ^= (safe_add_func_uint32_t_u_u(((*l_104) = (((*l_246) = l_245[3][1]) == ((*l_248) = (((VECTOR(int64_t, 4))(0x13F104CF704929BFL, ((VECTOR(int64_t, 2))(0L, 0L)), 0x22EA79D7E67C20CEL)).z , l_247)))), (safe_div_func_int64_t_s_s((p_2167->g_156.s4 ^ ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(18446744073709551609UL, 5UL)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 8))(l_251.yxyxxxyy)), ((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 4))((((p_2167->g_149.f0 = p_58.f0) | (safe_add_func_int16_t_s_s((*l_103), p_55))) & p_58.f0), GROUP_DIVERGE(2, 1), 0x1AA5502123F75200L, 0UL)), ((VECTOR(uint64_t, 4))(1UL))))).ywwywxzwxywzzyzx, ((VECTOR(uint64_t, 16))(0x3E4EA6253B305B96L))))).odd))).hi)).lo))), ((VECTOR(uint64_t, 8))(0xD47F7B9D4476A29BL)), 0UL, ((VECTOR(uint64_t, 4))(6UL)), 0xC5965C8278260FE3L)).se), 18446744073709551615UL))))))), 0x4584355FB1D9C952L)))));
                        (*l_255) = (l_190 = l_201);
                        (*l_119) ^= ((VECTOR(int32_t, 2))((-1L), (-5L))).even;
                    }
                }
                else
                { /* block id: 113 */
                    struct S1 *l_257 = &l_143[0];
                    struct S1 **l_256 = &l_257;
                    int32_t l_271 = 0x3112E2B9L;
                    int32_t l_281[8][8][3] = {{{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L}},{{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L}},{{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L}},{{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L}},{{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L}},{{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L}},{{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L}},{{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L},{7L,0x73E67246L,7L}}};
                    union U2 l_296 = {0};
                    volatile struct S0 **l_299 = (void*)0;
                    volatile struct S0 **l_300 = &p_2167->g_233;
                    int i, j, k;
                    (*l_256) = &p_2167->g_53;
                    if (((((*l_104) = FAKE_DIVERGE(p_2167->local_0_offset, get_local_id(0), 10)) < ((*l_119) = ((safe_sub_func_int64_t_s_s(((p_57 | (+(safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 4))(7UL, ((VECTOR(uint32_t, 2))(p_2167->g_261.yy)), 0UL)).x)))) != (safe_sub_func_int16_t_s_s((FAKE_DIVERGE(p_2167->group_2_offset, get_group_id(2), 10) <= (l_264 == l_265)), ((*l_109) ^= l_266)))), (safe_mul_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s(((p_2167->g_149 , (((*l_103) = ((*p_2167->g_7) != (0x068BCC3FL | (l_245[3][1] == l_245[3][0])))) | 0L)) == p_2167->g_168.x), p_2167->g_comm_values[p_2167->tid])) > l_230.x) != 6L), (*p_2167->g_7))))) < p_2167->g_183.y))) & l_271))
                    { /* block id: 119 */
                        int32_t *l_272 = (void*)0;
                        int32_t *l_273 = (void*)0;
                        int32_t *l_274 = &p_2167->g_90;
                        int32_t *l_275 = &l_115[1];
                        int32_t *l_276 = &l_111;
                        int32_t *l_277 = &l_108[2][2];
                        int32_t *l_278 = &l_144[3];
                        int32_t *l_279 = &l_110[2];
                        int32_t *l_280[2];
                        uint16_t l_282[9] = {1UL,0x1537L,1UL,1UL,0x1537L,1UL,1UL,0x1537L,1UL};
                        int32_t **l_285 = &l_277;
                        struct S0 ***l_289 = (void*)0;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_280[i] = &l_110[1];
                        ++l_282[1];
                        (*l_285) = &p_2167->g_90;
                        l_290 = l_286[6][4];
                        --l_293;
                    }
                    else
                    { /* block id: 124 */
                        int32_t **l_297 = &l_103;
                        (*l_297) = (l_296 , &l_111);
                    }
                    (*l_119) = (p_2167->g_154.x |= 0L);
                    (*l_300) = (((void*)0 == l_298) , p_2167->g_233);
                }
            }
            if ((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((((safe_lshift_func_int8_t_s_s(((*l_335) = (safe_unary_minus_func_int32_t_s((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 4))(0x1E595985L, ((*l_104) = ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_310.yy)).yxyy)).yyzyzyzz, ((VECTOR(uint16_t, 2))(0x0F3DL, 0xFCA0L)).yyyxyxyy))).s52, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_311.zz)), 0xC034L, 0x2153L)).hi))).even), 0x129C33CAL, 0x554B9EBDL)), ((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_2167->g_312.sbd)).xxyy)).even)).yxxyyxyxyxxyxyxx)).sed, ((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))((safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(p_58.f0, ((*l_326) = ((safe_mod_func_int64_t_s_s((p_2167->g_288[1].f2 |= (p_2167->g_288[1].f3 = (!(0x9E0CL ^ ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_319.s5002072335062311)).even)).even)).z)))), p_58.f0)) < (safe_mod_func_uint8_t_u_u((((*l_323) = p_2167->g_53) , FAKE_DIVERGE(p_2167->global_0_offset, get_global_id(0), 10)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 4))(l_324.sd217)).odd, ((VECTOR(uint8_t, 8))(l_325.s07660643)).s34))).yxyyyxyy)).odd)).y)))))), (*p_2167->g_7))), (-1L), 7L, (-1L))), ((VECTOR(int16_t, 4))(l_327.s0237))))).wxxxxzxy, (int16_t)(safe_rshift_func_uint16_t_u_u((*l_119), 0))))))).hi, ((VECTOR(int16_t, 2))(0x7DBFL, 0x41D3L)).xyyx))).zwwxwwwx, ((VECTOR(uint16_t, 4))(l_330.s492c)).ywyyxyzw))).s00))).xxxx))), ((VECTOR(uint32_t, 4))(0x607D92B2L, 0UL, 0xB04B00DEL, 1UL)))).s5303410761303015))).s7, (0x7CL > ((!((VECTOR(int8_t, 2))(0L, 2L)).lo) >= ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x01L, 0x47L)).xxyxxyyxyxxxxyxy)).se8, (int8_t)(*p_2167->g_7)))).xyyx)).odd, ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_333.s35715205)).s31)))).yxyyxxyy))).s53))).yyxy))).xxywyxxwyyxwwwzy, ((VECTOR(uint8_t, 8))(l_334.yyyxyxyy)).s0006467727367215))).s5))))))), ((*l_103) > p_58.f0))) ^ 1UL) <= 0x4C3DL), 1L)) == FAKE_DIVERGE(p_2167->group_0_offset, get_group_id(0), 10)), (*l_119))))
            { /* block id: 138 */
                int64_t **l_342[2][4][5] = {{{(void*)0,&l_320,&l_326,&l_320,&l_326},{(void*)0,&l_320,&l_326,&l_320,&l_326},{(void*)0,&l_320,&l_326,&l_320,&l_326},{(void*)0,&l_320,&l_326,&l_320,&l_326}},{{(void*)0,&l_320,&l_326,&l_320,&l_326},{(void*)0,&l_320,&l_326,&l_320,&l_326},{(void*)0,&l_320,&l_326,&l_320,&l_326},{(void*)0,&l_320,&l_326,&l_320,&l_326}}};
                int32_t l_354 = 0x75232A7DL;
                int32_t *l_356 = &l_110[2];
                int16_t *l_379 = (void*)0;
                int16_t *l_380 = (void*)0;
                int16_t *l_381 = &p_2167->g_292.f1;
                int32_t *l_382 = &l_108[2][2];
                int32_t *l_383 = &p_2167->g_90;
                int32_t *l_384 = (void*)0;
                int32_t *l_385 = &p_2167->g_90;
                int32_t *l_386 = &l_110[1];
                int32_t *l_387[5][2];
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_387[i][j] = &l_115[6];
                }
                (*l_356) |= (safe_add_func_uint8_t_u_u((p_57 < ((VECTOR(int8_t, 16))(0x72L, ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_2167->g_338.s2724)).zyzzxxzzwxzyyywy)).sa >= (safe_rshift_func_uint8_t_u_u(l_144[2], ((l_343 = p_2167->g_341) != ((((VECTOR(uint8_t, 4))(l_344.sb924)).y , l_190) , p_2167->g_341))))) != ((safe_mul_func_int8_t_s_s((((*l_103) = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((p_57 >= (((((p_2167->g_338.s2 ^ ((VECTOR(int32_t, 2))(0x42086BAEL, (-2L))).odd) & 255UL) | (&p_2167->g_341 == l_353)) >= l_354) != l_310.x)), 4)), p_2167->g_168.y)) >= p_2167->g_183.y)) < p_58.f0), l_334.y)) , (*l_119))), l_355, ((VECTOR(int8_t, 8))(0x07L)), ((VECTOR(int8_t, 4))(0x0BL)), 0x69L)).s5), p_58.f0));
                (*l_119) = (((safe_div_func_int16_t_s_s(0L, (~((l_360 = (p_58 , p_2167->g_359)) == ((l_171[2][0] > (safe_div_func_int16_t_s_s((!0x5936L), (*l_103)))) , p_2167->g_359))))) ^ (*l_356)) & ((*p_2167->g_7) | (*p_2167->g_7)));
                (*l_382) ^= (p_57 , (safe_mod_func_int8_t_s_s((((*l_381) = ((*l_109) = (safe_rshift_func_int16_t_s_s(((*p_2167->g_359) = ((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((p_2167->g_154.w = ((((safe_add_func_int16_t_s_s((-1L), p_57)) , (safe_rshift_func_uint8_t_u_u((4294967293UL == (safe_rshift_func_uint16_t_u_u(p_2167->g_292.f1, ((VECTOR(uint16_t, 2))(65529UL, 8UL)).lo))), p_55))) , l_342[0][2][1]) != (void*)0)) & ((*l_119) && l_330.s7)), (*l_356))), l_201.f0)), (*l_119))) | p_58.f0)), p_55)))) >= p_2167->g_156.s2), (*l_356))));
                p_2167->g_390--;
            }
            else
            { /* block id: 150 */
                int32_t *l_396 = &l_111;
                uint16_t *l_415 = (void*)0;
                uint16_t *l_416 = (void*)0;
                uint16_t *l_417 = &l_293;
                uint64_t *l_422 = (void*)0;
                uint64_t *l_423 = &l_165;
                uint64_t l_426[6] = {0xFA558B11A5C24F94L,0xFA558B11A5C24F94L,0xFA558B11A5C24F94L,0xFA558B11A5C24F94L,0xFA558B11A5C24F94L,0xFA558B11A5C24F94L};
                int i;
                l_393 = &l_110[1];
                for (l_102 = (-2); (l_102 == (-22)); --l_102)
                { /* block id: 154 */
                    int32_t *l_397 = (void*)0;
                    return l_397;
                }
                p_2167->g_183.x = (safe_add_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u(p_2167->g_312.s3, ((*l_396) ^= ((((l_402 ^ ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(p_2167->g_403.yxwzwyyx)).s0332020646114512, ((VECTOR(int16_t, 4))(0x0FA9L, (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((*l_393) = ((VECTOR(int32_t, 16))(p_2167->g_408.s681ffcab2dafed50)).sd), (safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s(((*l_360) ^= (safe_lshift_func_uint8_t_u_u((((((*l_323) = p_2167->g_53) , (p_58.f0 || (((VECTOR(int16_t, 2))(0L, 0x2EC7L)).odd != ((*l_417) = (p_57 , (!65535UL)))))) >= ((*p_2167->g_341) ^= (((*l_423) &= (l_418 != p_2167->g_420)) <= ((safe_lshift_func_uint8_t_u_u(1UL, 4)) | l_426[3])))) , p_2167->g_154.y), p_55))), 0x3C27L)), p_2167->g_156.s0)))), 7)), 1L, 0L)).yxwxwzxxzxzzxxww, ((VECTOR(int16_t, 16))(0x689AL))))).s52a5))).odd)).even) != p_2167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2167->tid, 7))]) && p_2167->g_427) != p_2167->g_292.f0)))) ^ p_2167->g_183.x) >= 0x487DA81C9791EA16L) > p_55), 0x51L));
            }
            (*l_119) = ((((VECTOR(uint8_t, 16))(p_2167->g_428.s3767050466456420)).s5 | ((*l_335) &= (safe_lshift_func_int8_t_s_s((*l_119), ((void*)0 == (*p_2167->g_420)))))) || ((*p_2167->g_359) > ((*l_109) = (((((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s(((((&l_291 != (l_286[8][2] = l_437)) | 0x53C3C39127B27DDEL) , (((*l_440) = ((*l_103) , l_439)) != &p_2167->g_341)) || (-4L)), (-6L))), 0x5515DEA6L)), 255UL)) , (*l_103)) >= (*l_103)) , p_55) ^ (-2L)))));
            (*l_103) = (safe_sub_func_int8_t_s_s(1L, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_443.xx)))), (-7L), 0x7CL, 0L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(6L, (-1L))))), (-6L))).s27, ((VECTOR(int8_t, 16))((((~((VECTOR(uint8_t, 16))(p_2167->g_444.zzwzwzyxyxxzzzxx)).sa) ^ (((safe_mod_func_uint64_t_u_u(((p_2167->g_448 = 0x8041L) && (p_2167->g_468 = ((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((l_171[0][0] = ((GROUP_DIVERGE(1, 1) , &l_103) != (((((p_2167->g_454 = l_440) == &l_439) && (((*p_2167->g_7) , (((*l_335) = 0x3AL) ^ (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 8))(0x62866242L)), ((VECTOR(int32_t, 4))(0x61C43F91L)), ((VECTOR(int32_t, 2))(0x0595AAC9L)), 1L)).sfa56, ((VECTOR(int32_t, 4))(0x7CA3DCA7L))))).y)), 3)))) , p_55)) != FAKE_DIVERGE(p_2167->group_1_offset, get_group_id(1), 10)) , p_2167->g_459[4][2][2]))), 4)), 0x0966L)) <= 9L), ((VECTOR(uint16_t, 2))(1UL)), 0xC1C3L, 0x62A6L, p_2167->g_261.z, 0x1D2FL, 1UL)), ((VECTOR(uint16_t, 8))(0x5E19L))))).s7)), p_57)) | p_55) < 9UL)) & p_2167->g_107[1]), ((VECTOR(int8_t, 8))(0x58L)), (-1L), ((VECTOR(int8_t, 2))(0x6FL)), (*p_2167->g_7), ((VECTOR(int8_t, 2))(0x01L)), 0x32L)).s45))).hi));
        }
        for (l_293 = (-9); (l_293 < 44); l_293++)
        { /* block id: 180 */
            if (p_2167->g_390)
                break;
        }
        (*l_473) = &p_2167->g_90;
        (**l_473) |= (-9L);
    }
    (*l_475) ^= ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))((((*l_474) = p_2167->g_359) != (void*)0), 0x27BB5B1DL, 0x188CEA49L, (-3L))).lo))).even;
    p_2167->g_477 = (p_2167->g_154.y , &l_115[4]);
    if (((p_2167->g_403.w != (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((((l_482[0][0] != l_482[0][0]) & (((*p_2167->g_341) = p_58.f0) >= p_2167->g_156.s2)) & (p_2167->g_428.s2 = (l_343 != (void*)0))) > ((p_2167->g_484 = &p_2167->g_107[0]) == p_2167->g_485)) >= p_57), p_57)), p_2167->g_152))) , 0x390F51C6L))
    { /* block id: 192 */
        uint8_t l_498[7][7][5] = {{{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL}},{{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL}},{{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL}},{{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL}},{{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL}},{{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL}},{{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL},{1UL,0x60L,250UL,247UL,0xFEL}}};
        int32_t l_510 = (-5L);
        struct S0 *l_513 = &p_2167->g_514;
        VECTOR(int16_t, 8) l_528 = (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x2337L), 0x2337L), 0x2337L, 6L, 0x2337L);
        VECTOR(int16_t, 8) l_529 = (VECTOR(int16_t, 8))(0x313DL, (VECTOR(int16_t, 4))(0x313DL, (VECTOR(int16_t, 2))(0x313DL, 0L), 0L), 0L, 0x313DL, 0L);
        VECTOR(uint16_t, 16) l_540 = (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0UL), 0UL), 0UL, 65530UL, 0UL, (VECTOR(uint16_t, 2))(65530UL, 0UL), (VECTOR(uint16_t, 2))(65530UL, 0UL), 65530UL, 0UL, 65530UL, 0UL);
        VECTOR(int16_t, 4) l_541 = (VECTOR(int16_t, 4))(0x0174L, (VECTOR(int16_t, 2))(0x0174L, 0x157EL), 0x157EL);
        union U2 l_546 = {0};
        int i, j, k;
        for (p_2167->g_292.f0 = 16; (p_2167->g_292.f0 <= (-24)); p_2167->g_292.f0--)
        { /* block id: 195 */
            struct S1 l_491 = {0L};
            VECTOR(uint32_t, 4) l_507 = (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0x3DCFFBF4L), 0x3DCFFBF4L);
            int i;
            if ((*p_2167->g_477))
                break;
            for (l_88 = (-3); (l_88 >= 24); l_88 = safe_add_func_int16_t_s_s(l_88, 5))
            { /* block id: 199 */
                struct S0 **l_515 = &l_513;
                (**l_418) = l_491;
                atomic_and(&p_2167->g_atomic_reduction[get_linear_group_id()], (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(l_498[0][6][3], (&p_2167->g_421 != &l_419))), ((safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 4))(0UL, p_2167->g_288[1].f3, 4294967290UL, 0UL)).wwzxywzzxwyzzxzx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(4294967290UL, ((safe_rshift_func_uint8_t_u_s((0x52DA981F19F4748CL || (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))((((VECTOR(uint32_t, 2))(l_507.yy)).odd | (FAKE_DIVERGE(p_2167->local_0_offset, get_local_id(0), 10) > (0x70L < (safe_lshift_func_uint16_t_u_u(l_510, 2))))), (safe_add_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), (*l_475))), 1UL, l_498[0][6][3], 65535UL, 0UL, 0x4D91L, 65535UL)).s1, 4))), 1)) , p_58.f0), p_2167->g_444.w, 0xD0C783F7L, p_2167->g_292.f3, FAKE_DIVERGE(p_2167->local_1_offset, get_local_id(1), 10), 4294967287UL, 0xB37BB336L)))))).s2421461336663614))).sb8, ((VECTOR(uint64_t, 2))(0xE83DF086F0F9B321L))))).xyyy)).w, 0x671444BBD445AFC4L)), (*p_2167->g_7))) & (*p_2167->g_7)))), l_498[0][6][3])) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_2167->v_collective += p_2167->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                (*l_515) = l_513;
            }
            for (p_2167->g_427 = 0; (p_2167->g_427 >= 8); p_2167->g_427++)
            { /* block id: 206 */
                volatile union U2 **l_520 = &p_2167->g_518;
                struct S1 l_521 = {-4L};
                (*l_520) = p_2167->g_518;
                (*l_419) = (p_2167->g_167.s3 , l_521);
            }
        }
        (*l_475) &= ((*p_2167->g_7) | ((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s(p_58.f0, 5)) , ((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_528.s5723)), ((VECTOR(int16_t, 4))(l_529.s7435)).y, (-2L), (-1L), 0x5796L)).even, ((VECTOR(int16_t, 16))((-1L), 1L, 0x03BEL, 1L, 0x207DL, (1UL == ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), (-3L))).lo, ((safe_lshift_func_int16_t_s_u(9L, 12)) & (safe_sub_func_uint8_t_u_u(p_2167->g_237.s0, (p_2167->g_428.s6++)))), ((VECTOR(int32_t, 2))(0x52CAFEA4L, 0L)), (-1L), ((VECTOR(int32_t, 4))(0x6EEAB0C5L, 0x29A56CA7L, 3L, 1L)), 0x6C291B8AL, 0x7A367F39L, (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_2167->g_152, 4)), ((VECTOR(uint16_t, 16))(l_540.s75c8675ac424181c)).s6)), 1L, 0x4795F501L, 0x5F23EA01L, 0x4263DBFBL)).s2), (-3L), 7L, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(0x525FL, 1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_541.zy)), (safe_div_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((-1L), 2)) < (((l_546 , p_2167->g_105) & 0x388AAE37004A1D17L) , (*p_2167->g_477))), 0x03B033E1L)), ((VECTOR(int16_t, 4))((-1L))), 0x24E7L)).s37)), ((VECTOR(int16_t, 2))((-10L))), 0x5A13L, 0L)).s10, ((VECTOR(int16_t, 2))(0L))))).odd, 8L, ((VECTOR(int16_t, 4))(0x2DF1L)), 0x2463L, 7L)).s573c))).yyyzyyywxwxwwwzy)).sb, 14)) <= p_55)), l_541.w)) < (*p_2167->g_477)));
    }
    else
    { /* block id: 213 */
        int64_t *l_547 = (void*)0;
        int32_t l_556 = 1L;
        uint8_t l_561 = 3UL;
        int32_t *l_571 = &p_2167->g_448;
        int32_t l_577[1];
        int32_t l_578 = 0x6B35984BL;
        int32_t l_579 = 0x1BC9EBECL;
        volatile union U3 ***l_586 = (void*)0;
        volatile union U3 ***l_587 = &p_2167->g_583;
        uint32_t l_591 = 0xCB70FBEDL;
        int i;
        for (i = 0; i < 1; i++)
            l_577[i] = 5L;
        if (((*p_2167->g_477) = (p_57 == ((((void*)0 == l_547) , (void*)0) == ((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_2167->g_550.xy)).xyyy)).x, (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(((*p_2167->g_7) | ((safe_add_func_uint8_t_u_u(((**p_2167->g_455) || ((l_556 ^ 4L) & ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_557.s4720612217122647)).odd)).s6)), (safe_rshift_func_uint8_t_u_u((((l_560 != (void*)0) != 0x58L) < p_55), 0)))) > l_561)))), (*p_2167->g_359))))) , &l_547)))))
        { /* block id: 215 */
            int32_t *l_569[9][1];
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 1; j++)
                    l_569[i][j] = (void*)0;
            }
            for (p_2167->g_514.f2 = (-14); (p_2167->g_514.f2 >= 24); p_2167->g_514.f2 = safe_add_func_uint16_t_u_u(p_2167->g_514.f2, 5))
            { /* block id: 218 */
                uint32_t l_564 = 4294967286UL;
                --l_564;
                for (p_2167->g_53.f0 = (-17); (p_2167->g_53.f0 == (-22)); p_2167->g_53.f0 = safe_sub_func_int16_t_s_s(p_2167->g_53.f0, 9))
                { /* block id: 222 */
                    int32_t *l_570 = (void*)0;
                    l_570 = l_569[2][0];
                }
                l_571 = l_569[7][0];
            }
        }
        else
        { /* block id: 227 */
            int32_t l_572 = (-2L);
            int32_t l_573 = (-1L);
            int32_t l_574 = 0x3B4C5952L;
            int32_t l_575 = 1L;
            VECTOR(int32_t, 2) l_576 = (VECTOR(int32_t, 2))(0L, (-7L));
            int i;
            --l_580.s9;
            return &p_2167->g_448;
        }
        (*l_587) = p_2167->g_583;
        for (l_561 = 25; (l_561 >= 39); l_561 = safe_add_func_int16_t_s_s(l_561, 9))
        { /* block id: 234 */
            int64_t l_590[7][10][3] = {{{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L}},{{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L}},{{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L}},{{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L}},{{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L}},{{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L}},{{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L},{0x524B654D532B7250L,(-1L),0x0BE9114DBAF86A46L}}};
            int i, j, k;
            --l_591;
            (*p_2167->g_477) = (*p_2167->g_477);
        }
    }
    return &p_2167->g_448;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_59(int8_t * p_60, union U3  p_61, int32_t * p_62, int32_t * p_63, int32_t * p_64, struct S4 * p_2167)
{ /* block id: 11 */
    struct S1 *l_85 = &p_2167->g_53;
    struct S1 **l_84 = &l_85;
    struct S1 ***l_86 = &l_84;
    int32_t l_87[4][4][7] = {{{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L},{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L},{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L},{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L}},{{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L},{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L},{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L},{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L}},{{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L},{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L},{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L},{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L}},{{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L},{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L},{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L},{1L,0x2DBCF703L,0x04D8593DL,0x2DBCF703L,1L,1L,0x2DBCF703L}}};
    int i, j, k;
    if ((atomic_inc(&p_2167->g_atomic_input[1 * get_linear_group_id() + 0]) == 0))
    { /* block id: 13 */
        int32_t l_68 = 9L;
        int8_t l_80 = (-10L);
        int8_t *l_79 = &l_80;
        int8_t **l_78 = &l_79;
        int8_t **l_81 = &l_79;
        struct S1 l_83 = {-1L};
        struct S1 *l_82[3][1][1];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_82[i][j][k] = &l_83;
            }
        }
        for (l_68 = 4; (l_68 != (-29)); l_68 = safe_sub_func_int32_t_s_s(l_68, 1))
        { /* block id: 16 */
            struct S1 l_71[2] = {{0x1F656345D18A9382L},{0x1F656345D18A9382L}};
            struct S1 l_72[6][8][3] = {{{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}}},{{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}}},{{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}}},{{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}}},{{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}}},{{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}},{{-8L},{0x0CE1F6DC3DB88773L},{0x40DD2C8CC2A30E0CL}}}};
            struct S1 l_73 = {0x05739219EC1828E3L};
            struct S1 l_74 = {1L};
            uint32_t l_75 = 0x990E41E6L;
            int i, j, k;
            l_71[1] = (l_74 = (l_73 = (l_72[5][6][1] = l_71[0])));
            l_75++;
        }
        l_81 = l_78;
        l_82[1][0][0] = (void*)0;
        unsigned int result = 0;
        result += l_68;
        result += l_80;
        result += l_83.f0;
        atomic_add(&p_2167->g_special_values[1 * get_linear_group_id() + 0], result);
    }
    else
    { /* block id: 25 */
        (1 + 1);
    }
    (*l_86) = l_84;
    return l_87[0][3][4];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_comm_values[i] = 1;
    struct S4 c_2168;
    struct S4* p_2167 = &c_2168;
    struct S4 c_2169 = {
        0x6DL, // p_2167->g_8
        &p_2167->g_8, // p_2167->g_7
        (VECTOR(uint16_t, 2))(0x6F1AL, 0UL), // p_2167->g_41
        {-8L}, // p_2167->g_53
        0x5D1EE040L, // p_2167->g_90
        4294967295UL, // p_2167->g_105
        {0x7E01DFB5L,0x7E01DFB5L}, // p_2167->g_107
        8UL, // p_2167->g_116
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_2167->g_129
        {0x2BFFA37D7A1B735CL}, // p_2167->g_149
        6UL, // p_2167->g_152
        (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0L), 0L), // p_2167->g_154
        (VECTOR(int32_t, 8))(0x1044AB52L, (VECTOR(int32_t, 4))(0x1044AB52L, (VECTOR(int32_t, 2))(0x1044AB52L, 0x66C24980L), 0x66C24980L), 0x66C24980L, 0x1044AB52L, 0x66C24980L), // p_2167->g_156
        (VECTOR(int32_t, 2))(0x036CB78AL, 0x53DD64F9L), // p_2167->g_162
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL), // p_2167->g_167
        (VECTOR(uint8_t, 2))(0x73L, 0xDBL), // p_2167->g_168
        (VECTOR(int32_t, 2))(0L, (-9L)), // p_2167->g_183
        1UL, // p_2167->g_228
        {0x527ECB843A2382E4L,-6L,0x0511937CE5ED3885L,0x625C67197F0C9424L,0x5EA537F3L}, // p_2167->g_234
        &p_2167->g_234, // p_2167->g_233
        (VECTOR(int8_t, 8))(0x69L, (VECTOR(int8_t, 4))(0x69L, (VECTOR(int8_t, 2))(0x69L, 0L), 0L), 0L, 0x69L, 0L), // p_2167->g_237
        (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0x0F30D5CEL), 0x0F30D5CEL), // p_2167->g_261
        {{0x593CA63B39A4F896L,-1L,0x49639DA54A31D818L,-1L,0L},{0x593CA63B39A4F896L,-1L,0x49639DA54A31D818L,-1L,0L}}, // p_2167->g_288
        {8L,0x6508L,1L,0L,0x554E75F3L}, // p_2167->g_292
        (VECTOR(uint32_t, 16))(0xB779AB6EL, (VECTOR(uint32_t, 4))(0xB779AB6EL, (VECTOR(uint32_t, 2))(0xB779AB6EL, 0xBB2D718FL), 0xBB2D718FL), 0xBB2D718FL, 0xB779AB6EL, 0xBB2D718FL, (VECTOR(uint32_t, 2))(0xB779AB6EL, 0xBB2D718FL), (VECTOR(uint32_t, 2))(0xB779AB6EL, 0xBB2D718FL), 0xB779AB6EL, 0xBB2D718FL, 0xB779AB6EL, 0xBB2D718FL), // p_2167->g_312
        (VECTOR(uint32_t, 8))(0xE1897AE2L, (VECTOR(uint32_t, 4))(0xE1897AE2L, (VECTOR(uint32_t, 2))(0xE1897AE2L, 0xE8383E0AL), 0xE8383E0AL), 0xE8383E0AL, 0xE1897AE2L, 0xE8383E0AL), // p_2167->g_338
        &p_2167->g_292.f2, // p_2167->g_341
        &p_2167->g_288[1].f1, // p_2167->g_359
        (-1L), // p_2167->g_388
        0xAB8A858FL, // p_2167->g_390
        (VECTOR(int16_t, 4))(0x11E9L, (VECTOR(int16_t, 2))(0x11E9L, (-1L)), (-1L)), // p_2167->g_403
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 5L), 5L), 5L, (-1L), 5L, (VECTOR(int32_t, 2))((-1L), 5L), (VECTOR(int32_t, 2))((-1L), 5L), (-1L), 5L, (-1L), 5L), // p_2167->g_408
        (void*)0, // p_2167->g_421
        &p_2167->g_421, // p_2167->g_420
        0x4B7EB845L, // p_2167->g_427
        (VECTOR(uint8_t, 8))(0x76L, (VECTOR(uint8_t, 4))(0x76L, (VECTOR(uint8_t, 2))(0x76L, 4UL), 4UL), 4UL, 0x76L, 4UL), // p_2167->g_428
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), // p_2167->g_444
        0x386D79EBL, // p_2167->g_448
        &p_2167->g_341, // p_2167->g_455
        &p_2167->g_455, // p_2167->g_454
        (-3L), // p_2167->g_461
        &p_2167->g_461, // p_2167->g_460
        (-7L), // p_2167->g_463
        &p_2167->g_463, // p_2167->g_462
        0x5A2CC3E8L, // p_2167->g_465
        &p_2167->g_465, // p_2167->g_464
        {{{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464}},{{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464}},{{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464}},{{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464}},{{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464}},{{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464},{(void*)0,&p_2167->g_462,&p_2167->g_464}}}, // p_2167->g_459
        0x71F3C838L, // p_2167->g_468
        (void*)0, // p_2167->g_477
        &p_2167->g_107[1], // p_2167->g_484
        0x78EC2E4CL, // p_2167->g_486
        &p_2167->g_486, // p_2167->g_485
        {0x75543B0F5CA092ADL,1L,-8L,0x2F0E1443D9A370D3L,2L}, // p_2167->g_514
        {0}, // p_2167->g_519
        &p_2167->g_519, // p_2167->g_518
        (VECTOR(uint16_t, 2))(0x960DL, 0UL), // p_2167->g_550
        {-1L}, // p_2167->g_585
        &p_2167->g_585, // p_2167->g_584
        &p_2167->g_584, // p_2167->g_583
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x26841BC7L), 0x26841BC7L), // p_2167->g_619
        (VECTOR(uint32_t, 2))(0x18B16A6AL, 0x3C7BB470L), // p_2167->g_621
        (VECTOR(uint32_t, 16))(0x20DECBB2L, (VECTOR(uint32_t, 4))(0x20DECBB2L, (VECTOR(uint32_t, 2))(0x20DECBB2L, 0x882A0DC4L), 0x882A0DC4L), 0x882A0DC4L, 0x20DECBB2L, 0x882A0DC4L, (VECTOR(uint32_t, 2))(0x20DECBB2L, 0x882A0DC4L), (VECTOR(uint32_t, 2))(0x20DECBB2L, 0x882A0DC4L), 0x20DECBB2L, 0x882A0DC4L, 0x20DECBB2L, 0x882A0DC4L), // p_2167->g_622
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L)), // p_2167->g_626
        (VECTOR(int32_t, 2))(1L, 1L), // p_2167->g_636
        &p_2167->g_53, // p_2167->g_668
        (void*)0, // p_2167->g_671
        (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 65530UL), 65530UL), 65530UL, 65528UL, 65530UL), // p_2167->g_680
        {{{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0}},{{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0}},{{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0}},{{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0}},{{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0}},{{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0}},{{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0}},{{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0}},{{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0},{(void*)0,&p_2167->g_671,&p_2167->g_671,(void*)0}}}, // p_2167->g_689
        7UL, // p_2167->g_690
        (VECTOR(uint16_t, 2))(0xBA77L, 65529UL), // p_2167->g_699
        (VECTOR(uint32_t, 4))(0xCC093965L, (VECTOR(uint32_t, 2))(0xCC093965L, 0xE14BC507L), 0xE14BC507L), // p_2167->g_716
        {(-10L),1L,(-10L),(-10L),1L,(-10L),(-10L)}, // p_2167->g_724
        (VECTOR(uint16_t, 4))(0xF5B9L, (VECTOR(uint16_t, 2))(0xF5B9L, 65535UL), 65535UL), // p_2167->g_738
        8UL, // p_2167->g_794
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x88EE2C90L), 0x88EE2C90L), 0x88EE2C90L, 1UL, 0x88EE2C90L), // p_2167->g_795
        (VECTOR(int32_t, 4))(0x7138FB4DL, (VECTOR(int32_t, 2))(0x7138FB4DL, 0x7F3FF3A4L), 0x7F3FF3A4L), // p_2167->g_820
        (VECTOR(int32_t, 2))(1L, 0x126CDEA7L), // p_2167->g_824
        {0}, // p_2167->g_846
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L)), // p_2167->g_851
        (VECTOR(uint16_t, 16))(0xC9E1L, (VECTOR(uint16_t, 4))(0xC9E1L, (VECTOR(uint16_t, 2))(0xC9E1L, 5UL), 5UL), 5UL, 0xC9E1L, 5UL, (VECTOR(uint16_t, 2))(0xC9E1L, 5UL), (VECTOR(uint16_t, 2))(0xC9E1L, 5UL), 0xC9E1L, 5UL, 0xC9E1L, 5UL), // p_2167->g_894
        (VECTOR(uint16_t, 16))(0xAC34L, (VECTOR(uint16_t, 4))(0xAC34L, (VECTOR(uint16_t, 2))(0xAC34L, 0xA323L), 0xA323L), 0xA323L, 0xAC34L, 0xA323L, (VECTOR(uint16_t, 2))(0xAC34L, 0xA323L), (VECTOR(uint16_t, 2))(0xAC34L, 0xA323L), 0xAC34L, 0xA323L, 0xAC34L, 0xA323L), // p_2167->g_895
        (VECTOR(uint16_t, 2))(65535UL, 65535UL), // p_2167->g_898
        (VECTOR(int32_t, 8))(0x79A6FC05L, (VECTOR(int32_t, 4))(0x79A6FC05L, (VECTOR(int32_t, 2))(0x79A6FC05L, (-3L)), (-3L)), (-3L), 0x79A6FC05L, (-3L)), // p_2167->g_901
        {1L,5L,1L,-7L,0x6D42F6DCL}, // p_2167->g_935
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x2A32DA839B926360L), 0x2A32DA839B926360L), // p_2167->g_951
        &p_2167->g_454, // p_2167->g_955
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int64_t, 2))(1L, 1L), (VECTOR(int64_t, 2))(1L, 1L), 1L, 1L, 1L, 1L), // p_2167->g_958
        (VECTOR(int16_t, 4))(0x33DEL, (VECTOR(int16_t, 2))(0x33DEL, 0x5DDAL), 0x5DDAL), // p_2167->g_991
        {0x7F4D9230C900C651L,0x1650L,0x2F5F06DD052E0F53L,0x7C82E6B8ECBB36B6L,0x76D17DEDL}, // p_2167->g_999
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 254UL), 254UL), // p_2167->g_1013
        {0x0CCD9C88410CA9E0L,0x3E37L,0x1058D33E46B5E5E4L,0x014FE031D3148C87L,-10L}, // p_2167->g_1018
        &p_2167->g_388, // p_2167->g_1036
        0x7DL, // p_2167->g_1044
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 1UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), 1UL, 18446744073709551615UL, 1UL, 18446744073709551615UL), // p_2167->g_1049
        (VECTOR(uint64_t, 8))(0x333C02F0FDFC11D6L, (VECTOR(uint64_t, 4))(0x333C02F0FDFC11D6L, (VECTOR(uint64_t, 2))(0x333C02F0FDFC11D6L, 0x18FCBC4090FD593DL), 0x18FCBC4090FD593DL), 0x18FCBC4090FD593DL, 0x333C02F0FDFC11D6L, 0x18FCBC4090FD593DL), // p_2167->g_1050
        (VECTOR(int16_t, 8))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x1945L), 0x1945L), 0x1945L, (-3L), 0x1945L), // p_2167->g_1065
        (VECTOR(uint16_t, 8))(0x6E30L, (VECTOR(uint16_t, 4))(0x6E30L, (VECTOR(uint16_t, 2))(0x6E30L, 0xBA4BL), 0xBA4BL), 0xBA4BL, 0x6E30L, 0xBA4BL), // p_2167->g_1066
        {-1L,0x6A1CL,0x52C6A2CE3341E519L,0x44DFD7C46C8A7E25L,-3L}, // p_2167->g_1090
        0x381895AAL, // p_2167->g_1107
        (VECTOR(int64_t, 16))(0x1A53B782C59FC619L, (VECTOR(int64_t, 4))(0x1A53B782C59FC619L, (VECTOR(int64_t, 2))(0x1A53B782C59FC619L, 1L), 1L), 1L, 0x1A53B782C59FC619L, 1L, (VECTOR(int64_t, 2))(0x1A53B782C59FC619L, 1L), (VECTOR(int64_t, 2))(0x1A53B782C59FC619L, 1L), 0x1A53B782C59FC619L, 1L, 0x1A53B782C59FC619L, 1L), // p_2167->g_1162
        (VECTOR(uint16_t, 4))(0xAE72L, (VECTOR(uint16_t, 2))(0xAE72L, 0UL), 0UL), // p_2167->g_1164
        (VECTOR(int32_t, 2))(1L, (-7L)), // p_2167->g_1174
        (VECTOR(int32_t, 2))(1L, (-5L)), // p_2167->g_1176
        (VECTOR(int32_t, 2))((-5L), (-1L)), // p_2167->g_1177
        (VECTOR(uint8_t, 8))(0x1FL, (VECTOR(uint8_t, 4))(0x1FL, (VECTOR(uint8_t, 2))(0x1FL, 0x5AL), 0x5AL), 0x5AL, 0x1FL, 0x5AL), // p_2167->g_1182
        (VECTOR(int8_t, 2))(0x0EL, 1L), // p_2167->g_1189
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_2167->g_1222
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x5167L), 0x5167L), 0x5167L, 0L, 0x5167L, (VECTOR(int16_t, 2))(0L, 0x5167L), (VECTOR(int16_t, 2))(0L, 0x5167L), 0L, 0x5167L, 0L, 0x5167L), // p_2167->g_1223
        (VECTOR(uint16_t, 16))(0x39A1L, (VECTOR(uint16_t, 4))(0x39A1L, (VECTOR(uint16_t, 2))(0x39A1L, 0x3625L), 0x3625L), 0x3625L, 0x39A1L, 0x3625L, (VECTOR(uint16_t, 2))(0x39A1L, 0x3625L), (VECTOR(uint16_t, 2))(0x39A1L, 0x3625L), 0x39A1L, 0x3625L, 0x39A1L, 0x3625L), // p_2167->g_1224
        (VECTOR(int32_t, 2))((-9L), 7L), // p_2167->g_1245
        (void*)0, // p_2167->g_1272
        &p_2167->g_1272, // p_2167->g_1271
        (VECTOR(int32_t, 2))(0x05E2DAB1L, 0L), // p_2167->g_1308
        (void*)0, // p_2167->g_1371
        (VECTOR(int32_t, 2))(0x1FF5BB48L, 0x3EA00D3AL), // p_2167->g_1385
        0L, // p_2167->g_1396
        0x92483245L, // p_2167->g_1398
        (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0xDAF4L), 0xDAF4L), 0xDAF4L, 65526UL, 0xDAF4L), // p_2167->g_1401
        0x330179DCL, // p_2167->g_1432
        &p_2167->g_477, // p_2167->g_1444
        (VECTOR(int32_t, 2))(0x0FCAAEEFL, 0x7B81ECF8L), // p_2167->g_1464
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 3L), 3L), // p_2167->g_1465
        (void*)0, // p_2167->g_1479
        (void*)0, // p_2167->g_1493
        {(void*)0,&p_2167->g_149,(void*)0,(void*)0,&p_2167->g_149,(void*)0}, // p_2167->g_1496
        {&p_2167->g_1496[2],&p_2167->g_1496[2]}, // p_2167->g_1495
        &p_2167->g_1495[1], // p_2167->g_1494
        (VECTOR(uint8_t, 16))(0x77L, (VECTOR(uint8_t, 4))(0x77L, (VECTOR(uint8_t, 2))(0x77L, 9UL), 9UL), 9UL, 0x77L, 9UL, (VECTOR(uint8_t, 2))(0x77L, 9UL), (VECTOR(uint8_t, 2))(0x77L, 9UL), 0x77L, 9UL, 0x77L, 9UL), // p_2167->g_1499
        {&p_2167->g_846,&p_2167->g_846,&p_2167->g_846,&p_2167->g_846,&p_2167->g_846}, // p_2167->g_1549
        {2L,-2L,0x1BCB77B791560D1EL,9L,4L}, // p_2167->g_1550
        (void*)0, // p_2167->g_1551
        (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-1L)), (-1L)), (-1L), 3L, (-1L)), // p_2167->g_1553
        {&p_2167->g_477,&p_2167->g_477,&p_2167->g_477,&p_2167->g_477}, // p_2167->g_1560
        (void*)0, // p_2167->g_1561
        (VECTOR(uint16_t, 2))(0x99C6L, 0x6836L), // p_2167->g_1585
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x41E1L), 0x41E1L), 0x41E1L, 0L, 0x41E1L), // p_2167->g_1586
        &p_2167->g_1549[2], // p_2167->g_1603
        {{0x5753E7DE07A69496L,1L,1L,5L,-8L},{0x5753E7DE07A69496L,1L,1L,5L,-8L},{0x5753E7DE07A69496L,1L,1L,5L,-8L},{0x5753E7DE07A69496L,1L,1L,5L,-8L},{0x5753E7DE07A69496L,1L,1L,5L,-8L},{0x5753E7DE07A69496L,1L,1L,5L,-8L},{0x5753E7DE07A69496L,1L,1L,5L,-8L},{0x5753E7DE07A69496L,1L,1L,5L,-8L},{0x5753E7DE07A69496L,1L,1L,5L,-8L},{0x5753E7DE07A69496L,1L,1L,5L,-8L}}, // p_2167->g_1609
        1UL, // p_2167->g_1612
        (VECTOR(int32_t, 8))(0x3C371C66L, (VECTOR(int32_t, 4))(0x3C371C66L, (VECTOR(int32_t, 2))(0x3C371C66L, 9L), 9L), 9L, 0x3C371C66L, 9L), // p_2167->g_1613
        {1L,0x1723L,-9L,1L,-1L}, // p_2167->g_1657
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x13A21563L), 0x13A21563L), 0x13A21563L, 1L, 0x13A21563L, (VECTOR(int32_t, 2))(1L, 0x13A21563L), (VECTOR(int32_t, 2))(1L, 0x13A21563L), 1L, 0x13A21563L, 1L, 0x13A21563L), // p_2167->g_1664
        &p_2167->g_477, // p_2167->g_1690
        (VECTOR(uint8_t, 2))(0xF6L, 0xBFL), // p_2167->g_1702
        (VECTOR(uint8_t, 8))(0xF6L, (VECTOR(uint8_t, 4))(0xF6L, (VECTOR(uint8_t, 2))(0xF6L, 246UL), 246UL), 246UL, 0xF6L, 246UL), // p_2167->g_1703
        (VECTOR(uint64_t, 2))(5UL, 0xE5FADD6754EFABE7L), // p_2167->g_1739
        (VECTOR(uint64_t, 16))(0xF67E175A5AAD4980L, (VECTOR(uint64_t, 4))(0xF67E175A5AAD4980L, (VECTOR(uint64_t, 2))(0xF67E175A5AAD4980L, 0x57C8CBEA0621E736L), 0x57C8CBEA0621E736L), 0x57C8CBEA0621E736L, 0xF67E175A5AAD4980L, 0x57C8CBEA0621E736L, (VECTOR(uint64_t, 2))(0xF67E175A5AAD4980L, 0x57C8CBEA0621E736L), (VECTOR(uint64_t, 2))(0xF67E175A5AAD4980L, 0x57C8CBEA0621E736L), 0xF67E175A5AAD4980L, 0x57C8CBEA0621E736L, 0xF67E175A5AAD4980L, 0x57C8CBEA0621E736L), // p_2167->g_1741
        (VECTOR(uint64_t, 2))(0UL, 18446744073709551607UL), // p_2167->g_1742
        (void*)0, // p_2167->g_1751
        &p_2167->g_1751, // p_2167->g_1750
        (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 1UL), 1UL), 1UL, 8UL, 1UL, (VECTOR(uint32_t, 2))(8UL, 1UL), (VECTOR(uint32_t, 2))(8UL, 1UL), 8UL, 1UL, 8UL, 1UL), // p_2167->g_1755
        0x19F4L, // p_2167->g_1769
        (VECTOR(int64_t, 2))(0x327DF2B39A325FB2L, 0x6A36621676F46307L), // p_2167->g_1776
        &p_2167->g_477, // p_2167->g_1789
        &p_2167->g_1272, // p_2167->g_1819
        (VECTOR(int8_t, 16))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0L), 0L), 0L, 9L, 0L, (VECTOR(int8_t, 2))(9L, 0L), (VECTOR(int8_t, 2))(9L, 0L), 9L, 0L, 9L, 0L), // p_2167->g_1861
        0x001D1818L, // p_2167->g_1882
        {0L}, // p_2167->g_1883
        (VECTOR(int32_t, 2))(0x57E4DE94L, 0x1D1CEE3CL), // p_2167->g_1888
        (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0L), 0L), // p_2167->g_1892
        (VECTOR(int16_t, 16))(0x3AF3L, (VECTOR(int16_t, 4))(0x3AF3L, (VECTOR(int16_t, 2))(0x3AF3L, 0x35EEL), 0x35EEL), 0x35EEL, 0x3AF3L, 0x35EEL, (VECTOR(int16_t, 2))(0x3AF3L, 0x35EEL), (VECTOR(int16_t, 2))(0x3AF3L, 0x35EEL), 0x3AF3L, 0x35EEL, 0x3AF3L, 0x35EEL), // p_2167->g_1893
        (VECTOR(uint8_t, 4))(0x54L, (VECTOR(uint8_t, 2))(0x54L, 1UL), 1UL), // p_2167->g_1901
        {{{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0}},{{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0}},{{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0}},{{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0}},{{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0}},{{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0}},{{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0}},{{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0}},{{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0}},{{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0},{&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,&p_2167->g_477,(void*)0,&p_2167->g_477,(void*)0}}}, // p_2167->g_1928
        (VECTOR(uint32_t, 2))(0x5E381858L, 4294967295UL), // p_2167->g_1943
        (VECTOR(int32_t, 16))(0x06BF004FL, (VECTOR(int32_t, 4))(0x06BF004FL, (VECTOR(int32_t, 2))(0x06BF004FL, (-4L)), (-4L)), (-4L), 0x06BF004FL, (-4L), (VECTOR(int32_t, 2))(0x06BF004FL, (-4L)), (VECTOR(int32_t, 2))(0x06BF004FL, (-4L)), 0x06BF004FL, (-4L), 0x06BF004FL, (-4L)), // p_2167->g_1952
        &p_2167->g_359, // p_2167->g_1955
        &p_2167->g_1955, // p_2167->g_1954
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6078210CL), 0x6078210CL), // p_2167->g_1971
        &p_2167->g_1495[1], // p_2167->g_1985
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-2L)), (-2L)), (-2L), 0L, (-2L)), // p_2167->g_2004
        (VECTOR(int64_t, 4))(0x0AC68DB5D0015765L, (VECTOR(int64_t, 2))(0x0AC68DB5D0015765L, (-8L)), (-8L)), // p_2167->g_2005
        &p_2167->g_477, // p_2167->g_2017
        {{{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L}},{{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L}},{{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L}},{{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L}},{{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L}},{{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L}},{{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L}},{{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L}},{{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L},{0L,1L,0x3C717064L}}}, // p_2167->g_2030
        &p_2167->g_477, // p_2167->g_2059
        {&p_2167->g_233,&p_2167->g_233,&p_2167->g_233,&p_2167->g_233,&p_2167->g_233,&p_2167->g_233,&p_2167->g_233,&p_2167->g_233,&p_2167->g_233,&p_2167->g_233}, // p_2167->g_2091
        &p_2167->g_2091[6], // p_2167->g_2090
        {{{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L}},{{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L},{0x2DB3B678F5A3A1EEL,0x7D16L,0x749A33E39AC6AFACL,0x02771DB6809A43D9L,0x2DD42243L}}}, // p_2167->g_2095
        0x40AC47FAL, // p_2167->g_2103
        (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0xD9L), 0xD9L), // p_2167->g_2111
        {{0x4B59149EDD9335CEL,5L,1L,-1L,0x7681C85FL},{0x334B012D960DB2EBL,0x06AEL,0x55B689FBC3DDD667L,-3L,0x5BDF44D1L},{0x4B59149EDD9335CEL,5L,1L,-1L,0x7681C85FL},{0x4B59149EDD9335CEL,5L,1L,-1L,0x7681C85FL},{0x334B012D960DB2EBL,0x06AEL,0x55B689FBC3DDD667L,-3L,0x5BDF44D1L},{0x4B59149EDD9335CEL,5L,1L,-1L,0x7681C85FL},{0x4B59149EDD9335CEL,5L,1L,-1L,0x7681C85FL},{0x334B012D960DB2EBL,0x06AEL,0x55B689FBC3DDD667L,-3L,0x5BDF44D1L},{0x4B59149EDD9335CEL,5L,1L,-1L,0x7681C85FL}}, // p_2167->g_2127
        {{&p_2167->g_477,&p_2167->g_477},{&p_2167->g_477,&p_2167->g_477},{&p_2167->g_477,&p_2167->g_477},{&p_2167->g_477,&p_2167->g_477},{&p_2167->g_477,&p_2167->g_477},{&p_2167->g_477,&p_2167->g_477}}, // p_2167->g_2163
        (void*)0, // p_2167->g_2164
        &p_2167->g_477, // p_2167->g_2165
        {-6L,-1L,1L,0x3A93F241A4C9A0DDL,0x1DFE016FL}, // p_2167->g_2166
        0, // p_2167->v_collective
        sequence_input[get_global_id(0)], // p_2167->global_0_offset
        sequence_input[get_global_id(1)], // p_2167->global_1_offset
        sequence_input[get_global_id(2)], // p_2167->global_2_offset
        sequence_input[get_local_id(0)], // p_2167->local_0_offset
        sequence_input[get_local_id(1)], // p_2167->local_1_offset
        sequence_input[get_local_id(2)], // p_2167->local_2_offset
        sequence_input[get_group_id(0)], // p_2167->group_0_offset
        sequence_input[get_group_id(1)], // p_2167->group_1_offset
        sequence_input[get_group_id(2)], // p_2167->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[0][get_linear_local_id()])), // p_2167->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_2168 = c_2169;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2167);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2167->g_8, "p_2167->g_8", print_hash_value);
    transparent_crc(p_2167->g_41.x, "p_2167->g_41.x", print_hash_value);
    transparent_crc(p_2167->g_41.y, "p_2167->g_41.y", print_hash_value);
    transparent_crc(p_2167->g_53.f0, "p_2167->g_53.f0", print_hash_value);
    transparent_crc(p_2167->g_90, "p_2167->g_90", print_hash_value);
    transparent_crc(p_2167->g_105, "p_2167->g_105", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2167->g_107[i], "p_2167->g_107[i]", print_hash_value);

    }
    transparent_crc(p_2167->g_116, "p_2167->g_116", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2167->g_129[i], "p_2167->g_129[i]", print_hash_value);

    }
    transparent_crc(p_2167->g_149.f0, "p_2167->g_149.f0", print_hash_value);
    transparent_crc(p_2167->g_152, "p_2167->g_152", print_hash_value);
    transparent_crc(p_2167->g_154.x, "p_2167->g_154.x", print_hash_value);
    transparent_crc(p_2167->g_154.y, "p_2167->g_154.y", print_hash_value);
    transparent_crc(p_2167->g_154.z, "p_2167->g_154.z", print_hash_value);
    transparent_crc(p_2167->g_154.w, "p_2167->g_154.w", print_hash_value);
    transparent_crc(p_2167->g_156.s0, "p_2167->g_156.s0", print_hash_value);
    transparent_crc(p_2167->g_156.s1, "p_2167->g_156.s1", print_hash_value);
    transparent_crc(p_2167->g_156.s2, "p_2167->g_156.s2", print_hash_value);
    transparent_crc(p_2167->g_156.s3, "p_2167->g_156.s3", print_hash_value);
    transparent_crc(p_2167->g_156.s4, "p_2167->g_156.s4", print_hash_value);
    transparent_crc(p_2167->g_156.s5, "p_2167->g_156.s5", print_hash_value);
    transparent_crc(p_2167->g_156.s6, "p_2167->g_156.s6", print_hash_value);
    transparent_crc(p_2167->g_156.s7, "p_2167->g_156.s7", print_hash_value);
    transparent_crc(p_2167->g_162.x, "p_2167->g_162.x", print_hash_value);
    transparent_crc(p_2167->g_162.y, "p_2167->g_162.y", print_hash_value);
    transparent_crc(p_2167->g_167.s0, "p_2167->g_167.s0", print_hash_value);
    transparent_crc(p_2167->g_167.s1, "p_2167->g_167.s1", print_hash_value);
    transparent_crc(p_2167->g_167.s2, "p_2167->g_167.s2", print_hash_value);
    transparent_crc(p_2167->g_167.s3, "p_2167->g_167.s3", print_hash_value);
    transparent_crc(p_2167->g_167.s4, "p_2167->g_167.s4", print_hash_value);
    transparent_crc(p_2167->g_167.s5, "p_2167->g_167.s5", print_hash_value);
    transparent_crc(p_2167->g_167.s6, "p_2167->g_167.s6", print_hash_value);
    transparent_crc(p_2167->g_167.s7, "p_2167->g_167.s7", print_hash_value);
    transparent_crc(p_2167->g_168.x, "p_2167->g_168.x", print_hash_value);
    transparent_crc(p_2167->g_168.y, "p_2167->g_168.y", print_hash_value);
    transparent_crc(p_2167->g_183.x, "p_2167->g_183.x", print_hash_value);
    transparent_crc(p_2167->g_183.y, "p_2167->g_183.y", print_hash_value);
    transparent_crc(p_2167->g_228, "p_2167->g_228", print_hash_value);
    transparent_crc(p_2167->g_234.f0, "p_2167->g_234.f0", print_hash_value);
    transparent_crc(p_2167->g_234.f1, "p_2167->g_234.f1", print_hash_value);
    transparent_crc(p_2167->g_234.f2, "p_2167->g_234.f2", print_hash_value);
    transparent_crc(p_2167->g_234.f3, "p_2167->g_234.f3", print_hash_value);
    transparent_crc(p_2167->g_234.f4, "p_2167->g_234.f4", print_hash_value);
    transparent_crc(p_2167->g_237.s0, "p_2167->g_237.s0", print_hash_value);
    transparent_crc(p_2167->g_237.s1, "p_2167->g_237.s1", print_hash_value);
    transparent_crc(p_2167->g_237.s2, "p_2167->g_237.s2", print_hash_value);
    transparent_crc(p_2167->g_237.s3, "p_2167->g_237.s3", print_hash_value);
    transparent_crc(p_2167->g_237.s4, "p_2167->g_237.s4", print_hash_value);
    transparent_crc(p_2167->g_237.s5, "p_2167->g_237.s5", print_hash_value);
    transparent_crc(p_2167->g_237.s6, "p_2167->g_237.s6", print_hash_value);
    transparent_crc(p_2167->g_237.s7, "p_2167->g_237.s7", print_hash_value);
    transparent_crc(p_2167->g_261.x, "p_2167->g_261.x", print_hash_value);
    transparent_crc(p_2167->g_261.y, "p_2167->g_261.y", print_hash_value);
    transparent_crc(p_2167->g_261.z, "p_2167->g_261.z", print_hash_value);
    transparent_crc(p_2167->g_261.w, "p_2167->g_261.w", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2167->g_288[i].f0, "p_2167->g_288[i].f0", print_hash_value);
        transparent_crc(p_2167->g_288[i].f1, "p_2167->g_288[i].f1", print_hash_value);
        transparent_crc(p_2167->g_288[i].f2, "p_2167->g_288[i].f2", print_hash_value);
        transparent_crc(p_2167->g_288[i].f3, "p_2167->g_288[i].f3", print_hash_value);
        transparent_crc(p_2167->g_288[i].f4, "p_2167->g_288[i].f4", print_hash_value);

    }
    transparent_crc(p_2167->g_292.f0, "p_2167->g_292.f0", print_hash_value);
    transparent_crc(p_2167->g_292.f1, "p_2167->g_292.f1", print_hash_value);
    transparent_crc(p_2167->g_292.f2, "p_2167->g_292.f2", print_hash_value);
    transparent_crc(p_2167->g_292.f3, "p_2167->g_292.f3", print_hash_value);
    transparent_crc(p_2167->g_292.f4, "p_2167->g_292.f4", print_hash_value);
    transparent_crc(p_2167->g_312.s0, "p_2167->g_312.s0", print_hash_value);
    transparent_crc(p_2167->g_312.s1, "p_2167->g_312.s1", print_hash_value);
    transparent_crc(p_2167->g_312.s2, "p_2167->g_312.s2", print_hash_value);
    transparent_crc(p_2167->g_312.s3, "p_2167->g_312.s3", print_hash_value);
    transparent_crc(p_2167->g_312.s4, "p_2167->g_312.s4", print_hash_value);
    transparent_crc(p_2167->g_312.s5, "p_2167->g_312.s5", print_hash_value);
    transparent_crc(p_2167->g_312.s6, "p_2167->g_312.s6", print_hash_value);
    transparent_crc(p_2167->g_312.s7, "p_2167->g_312.s7", print_hash_value);
    transparent_crc(p_2167->g_312.s8, "p_2167->g_312.s8", print_hash_value);
    transparent_crc(p_2167->g_312.s9, "p_2167->g_312.s9", print_hash_value);
    transparent_crc(p_2167->g_312.sa, "p_2167->g_312.sa", print_hash_value);
    transparent_crc(p_2167->g_312.sb, "p_2167->g_312.sb", print_hash_value);
    transparent_crc(p_2167->g_312.sc, "p_2167->g_312.sc", print_hash_value);
    transparent_crc(p_2167->g_312.sd, "p_2167->g_312.sd", print_hash_value);
    transparent_crc(p_2167->g_312.se, "p_2167->g_312.se", print_hash_value);
    transparent_crc(p_2167->g_312.sf, "p_2167->g_312.sf", print_hash_value);
    transparent_crc(p_2167->g_338.s0, "p_2167->g_338.s0", print_hash_value);
    transparent_crc(p_2167->g_338.s1, "p_2167->g_338.s1", print_hash_value);
    transparent_crc(p_2167->g_338.s2, "p_2167->g_338.s2", print_hash_value);
    transparent_crc(p_2167->g_338.s3, "p_2167->g_338.s3", print_hash_value);
    transparent_crc(p_2167->g_338.s4, "p_2167->g_338.s4", print_hash_value);
    transparent_crc(p_2167->g_338.s5, "p_2167->g_338.s5", print_hash_value);
    transparent_crc(p_2167->g_338.s6, "p_2167->g_338.s6", print_hash_value);
    transparent_crc(p_2167->g_338.s7, "p_2167->g_338.s7", print_hash_value);
    transparent_crc(p_2167->g_388, "p_2167->g_388", print_hash_value);
    transparent_crc(p_2167->g_390, "p_2167->g_390", print_hash_value);
    transparent_crc(p_2167->g_403.x, "p_2167->g_403.x", print_hash_value);
    transparent_crc(p_2167->g_403.y, "p_2167->g_403.y", print_hash_value);
    transparent_crc(p_2167->g_403.z, "p_2167->g_403.z", print_hash_value);
    transparent_crc(p_2167->g_403.w, "p_2167->g_403.w", print_hash_value);
    transparent_crc(p_2167->g_408.s0, "p_2167->g_408.s0", print_hash_value);
    transparent_crc(p_2167->g_408.s1, "p_2167->g_408.s1", print_hash_value);
    transparent_crc(p_2167->g_408.s2, "p_2167->g_408.s2", print_hash_value);
    transparent_crc(p_2167->g_408.s3, "p_2167->g_408.s3", print_hash_value);
    transparent_crc(p_2167->g_408.s4, "p_2167->g_408.s4", print_hash_value);
    transparent_crc(p_2167->g_408.s5, "p_2167->g_408.s5", print_hash_value);
    transparent_crc(p_2167->g_408.s6, "p_2167->g_408.s6", print_hash_value);
    transparent_crc(p_2167->g_408.s7, "p_2167->g_408.s7", print_hash_value);
    transparent_crc(p_2167->g_408.s8, "p_2167->g_408.s8", print_hash_value);
    transparent_crc(p_2167->g_408.s9, "p_2167->g_408.s9", print_hash_value);
    transparent_crc(p_2167->g_408.sa, "p_2167->g_408.sa", print_hash_value);
    transparent_crc(p_2167->g_408.sb, "p_2167->g_408.sb", print_hash_value);
    transparent_crc(p_2167->g_408.sc, "p_2167->g_408.sc", print_hash_value);
    transparent_crc(p_2167->g_408.sd, "p_2167->g_408.sd", print_hash_value);
    transparent_crc(p_2167->g_408.se, "p_2167->g_408.se", print_hash_value);
    transparent_crc(p_2167->g_408.sf, "p_2167->g_408.sf", print_hash_value);
    transparent_crc(p_2167->g_427, "p_2167->g_427", print_hash_value);
    transparent_crc(p_2167->g_428.s0, "p_2167->g_428.s0", print_hash_value);
    transparent_crc(p_2167->g_428.s1, "p_2167->g_428.s1", print_hash_value);
    transparent_crc(p_2167->g_428.s2, "p_2167->g_428.s2", print_hash_value);
    transparent_crc(p_2167->g_428.s3, "p_2167->g_428.s3", print_hash_value);
    transparent_crc(p_2167->g_428.s4, "p_2167->g_428.s4", print_hash_value);
    transparent_crc(p_2167->g_428.s5, "p_2167->g_428.s5", print_hash_value);
    transparent_crc(p_2167->g_428.s6, "p_2167->g_428.s6", print_hash_value);
    transparent_crc(p_2167->g_428.s7, "p_2167->g_428.s7", print_hash_value);
    transparent_crc(p_2167->g_444.x, "p_2167->g_444.x", print_hash_value);
    transparent_crc(p_2167->g_444.y, "p_2167->g_444.y", print_hash_value);
    transparent_crc(p_2167->g_444.z, "p_2167->g_444.z", print_hash_value);
    transparent_crc(p_2167->g_444.w, "p_2167->g_444.w", print_hash_value);
    transparent_crc(p_2167->g_448, "p_2167->g_448", print_hash_value);
    transparent_crc(p_2167->g_461, "p_2167->g_461", print_hash_value);
    transparent_crc(p_2167->g_463, "p_2167->g_463", print_hash_value);
    transparent_crc(p_2167->g_465, "p_2167->g_465", print_hash_value);
    transparent_crc(p_2167->g_468, "p_2167->g_468", print_hash_value);
    transparent_crc(p_2167->g_486, "p_2167->g_486", print_hash_value);
    transparent_crc(p_2167->g_514.f0, "p_2167->g_514.f0", print_hash_value);
    transparent_crc(p_2167->g_514.f1, "p_2167->g_514.f1", print_hash_value);
    transparent_crc(p_2167->g_514.f2, "p_2167->g_514.f2", print_hash_value);
    transparent_crc(p_2167->g_514.f3, "p_2167->g_514.f3", print_hash_value);
    transparent_crc(p_2167->g_514.f4, "p_2167->g_514.f4", print_hash_value);
    transparent_crc(p_2167->g_550.x, "p_2167->g_550.x", print_hash_value);
    transparent_crc(p_2167->g_550.y, "p_2167->g_550.y", print_hash_value);
    transparent_crc(p_2167->g_585.f0, "p_2167->g_585.f0", print_hash_value);
    transparent_crc(p_2167->g_619.x, "p_2167->g_619.x", print_hash_value);
    transparent_crc(p_2167->g_619.y, "p_2167->g_619.y", print_hash_value);
    transparent_crc(p_2167->g_619.z, "p_2167->g_619.z", print_hash_value);
    transparent_crc(p_2167->g_619.w, "p_2167->g_619.w", print_hash_value);
    transparent_crc(p_2167->g_621.x, "p_2167->g_621.x", print_hash_value);
    transparent_crc(p_2167->g_621.y, "p_2167->g_621.y", print_hash_value);
    transparent_crc(p_2167->g_622.s0, "p_2167->g_622.s0", print_hash_value);
    transparent_crc(p_2167->g_622.s1, "p_2167->g_622.s1", print_hash_value);
    transparent_crc(p_2167->g_622.s2, "p_2167->g_622.s2", print_hash_value);
    transparent_crc(p_2167->g_622.s3, "p_2167->g_622.s3", print_hash_value);
    transparent_crc(p_2167->g_622.s4, "p_2167->g_622.s4", print_hash_value);
    transparent_crc(p_2167->g_622.s5, "p_2167->g_622.s5", print_hash_value);
    transparent_crc(p_2167->g_622.s6, "p_2167->g_622.s6", print_hash_value);
    transparent_crc(p_2167->g_622.s7, "p_2167->g_622.s7", print_hash_value);
    transparent_crc(p_2167->g_622.s8, "p_2167->g_622.s8", print_hash_value);
    transparent_crc(p_2167->g_622.s9, "p_2167->g_622.s9", print_hash_value);
    transparent_crc(p_2167->g_622.sa, "p_2167->g_622.sa", print_hash_value);
    transparent_crc(p_2167->g_622.sb, "p_2167->g_622.sb", print_hash_value);
    transparent_crc(p_2167->g_622.sc, "p_2167->g_622.sc", print_hash_value);
    transparent_crc(p_2167->g_622.sd, "p_2167->g_622.sd", print_hash_value);
    transparent_crc(p_2167->g_622.se, "p_2167->g_622.se", print_hash_value);
    transparent_crc(p_2167->g_622.sf, "p_2167->g_622.sf", print_hash_value);
    transparent_crc(p_2167->g_626.s0, "p_2167->g_626.s0", print_hash_value);
    transparent_crc(p_2167->g_626.s1, "p_2167->g_626.s1", print_hash_value);
    transparent_crc(p_2167->g_626.s2, "p_2167->g_626.s2", print_hash_value);
    transparent_crc(p_2167->g_626.s3, "p_2167->g_626.s3", print_hash_value);
    transparent_crc(p_2167->g_626.s4, "p_2167->g_626.s4", print_hash_value);
    transparent_crc(p_2167->g_626.s5, "p_2167->g_626.s5", print_hash_value);
    transparent_crc(p_2167->g_626.s6, "p_2167->g_626.s6", print_hash_value);
    transparent_crc(p_2167->g_626.s7, "p_2167->g_626.s7", print_hash_value);
    transparent_crc(p_2167->g_636.x, "p_2167->g_636.x", print_hash_value);
    transparent_crc(p_2167->g_636.y, "p_2167->g_636.y", print_hash_value);
    transparent_crc(p_2167->g_680.s0, "p_2167->g_680.s0", print_hash_value);
    transparent_crc(p_2167->g_680.s1, "p_2167->g_680.s1", print_hash_value);
    transparent_crc(p_2167->g_680.s2, "p_2167->g_680.s2", print_hash_value);
    transparent_crc(p_2167->g_680.s3, "p_2167->g_680.s3", print_hash_value);
    transparent_crc(p_2167->g_680.s4, "p_2167->g_680.s4", print_hash_value);
    transparent_crc(p_2167->g_680.s5, "p_2167->g_680.s5", print_hash_value);
    transparent_crc(p_2167->g_680.s6, "p_2167->g_680.s6", print_hash_value);
    transparent_crc(p_2167->g_680.s7, "p_2167->g_680.s7", print_hash_value);
    transparent_crc(p_2167->g_690, "p_2167->g_690", print_hash_value);
    transparent_crc(p_2167->g_699.x, "p_2167->g_699.x", print_hash_value);
    transparent_crc(p_2167->g_699.y, "p_2167->g_699.y", print_hash_value);
    transparent_crc(p_2167->g_716.x, "p_2167->g_716.x", print_hash_value);
    transparent_crc(p_2167->g_716.y, "p_2167->g_716.y", print_hash_value);
    transparent_crc(p_2167->g_716.z, "p_2167->g_716.z", print_hash_value);
    transparent_crc(p_2167->g_716.w, "p_2167->g_716.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2167->g_724[i], "p_2167->g_724[i]", print_hash_value);

    }
    transparent_crc(p_2167->g_738.x, "p_2167->g_738.x", print_hash_value);
    transparent_crc(p_2167->g_738.y, "p_2167->g_738.y", print_hash_value);
    transparent_crc(p_2167->g_738.z, "p_2167->g_738.z", print_hash_value);
    transparent_crc(p_2167->g_738.w, "p_2167->g_738.w", print_hash_value);
    transparent_crc(p_2167->g_794, "p_2167->g_794", print_hash_value);
    transparent_crc(p_2167->g_795.s0, "p_2167->g_795.s0", print_hash_value);
    transparent_crc(p_2167->g_795.s1, "p_2167->g_795.s1", print_hash_value);
    transparent_crc(p_2167->g_795.s2, "p_2167->g_795.s2", print_hash_value);
    transparent_crc(p_2167->g_795.s3, "p_2167->g_795.s3", print_hash_value);
    transparent_crc(p_2167->g_795.s4, "p_2167->g_795.s4", print_hash_value);
    transparent_crc(p_2167->g_795.s5, "p_2167->g_795.s5", print_hash_value);
    transparent_crc(p_2167->g_795.s6, "p_2167->g_795.s6", print_hash_value);
    transparent_crc(p_2167->g_795.s7, "p_2167->g_795.s7", print_hash_value);
    transparent_crc(p_2167->g_820.x, "p_2167->g_820.x", print_hash_value);
    transparent_crc(p_2167->g_820.y, "p_2167->g_820.y", print_hash_value);
    transparent_crc(p_2167->g_820.z, "p_2167->g_820.z", print_hash_value);
    transparent_crc(p_2167->g_820.w, "p_2167->g_820.w", print_hash_value);
    transparent_crc(p_2167->g_824.x, "p_2167->g_824.x", print_hash_value);
    transparent_crc(p_2167->g_824.y, "p_2167->g_824.y", print_hash_value);
    transparent_crc(p_2167->g_851.s0, "p_2167->g_851.s0", print_hash_value);
    transparent_crc(p_2167->g_851.s1, "p_2167->g_851.s1", print_hash_value);
    transparent_crc(p_2167->g_851.s2, "p_2167->g_851.s2", print_hash_value);
    transparent_crc(p_2167->g_851.s3, "p_2167->g_851.s3", print_hash_value);
    transparent_crc(p_2167->g_851.s4, "p_2167->g_851.s4", print_hash_value);
    transparent_crc(p_2167->g_851.s5, "p_2167->g_851.s5", print_hash_value);
    transparent_crc(p_2167->g_851.s6, "p_2167->g_851.s6", print_hash_value);
    transparent_crc(p_2167->g_851.s7, "p_2167->g_851.s7", print_hash_value);
    transparent_crc(p_2167->g_894.s0, "p_2167->g_894.s0", print_hash_value);
    transparent_crc(p_2167->g_894.s1, "p_2167->g_894.s1", print_hash_value);
    transparent_crc(p_2167->g_894.s2, "p_2167->g_894.s2", print_hash_value);
    transparent_crc(p_2167->g_894.s3, "p_2167->g_894.s3", print_hash_value);
    transparent_crc(p_2167->g_894.s4, "p_2167->g_894.s4", print_hash_value);
    transparent_crc(p_2167->g_894.s5, "p_2167->g_894.s5", print_hash_value);
    transparent_crc(p_2167->g_894.s6, "p_2167->g_894.s6", print_hash_value);
    transparent_crc(p_2167->g_894.s7, "p_2167->g_894.s7", print_hash_value);
    transparent_crc(p_2167->g_894.s8, "p_2167->g_894.s8", print_hash_value);
    transparent_crc(p_2167->g_894.s9, "p_2167->g_894.s9", print_hash_value);
    transparent_crc(p_2167->g_894.sa, "p_2167->g_894.sa", print_hash_value);
    transparent_crc(p_2167->g_894.sb, "p_2167->g_894.sb", print_hash_value);
    transparent_crc(p_2167->g_894.sc, "p_2167->g_894.sc", print_hash_value);
    transparent_crc(p_2167->g_894.sd, "p_2167->g_894.sd", print_hash_value);
    transparent_crc(p_2167->g_894.se, "p_2167->g_894.se", print_hash_value);
    transparent_crc(p_2167->g_894.sf, "p_2167->g_894.sf", print_hash_value);
    transparent_crc(p_2167->g_895.s0, "p_2167->g_895.s0", print_hash_value);
    transparent_crc(p_2167->g_895.s1, "p_2167->g_895.s1", print_hash_value);
    transparent_crc(p_2167->g_895.s2, "p_2167->g_895.s2", print_hash_value);
    transparent_crc(p_2167->g_895.s3, "p_2167->g_895.s3", print_hash_value);
    transparent_crc(p_2167->g_895.s4, "p_2167->g_895.s4", print_hash_value);
    transparent_crc(p_2167->g_895.s5, "p_2167->g_895.s5", print_hash_value);
    transparent_crc(p_2167->g_895.s6, "p_2167->g_895.s6", print_hash_value);
    transparent_crc(p_2167->g_895.s7, "p_2167->g_895.s7", print_hash_value);
    transparent_crc(p_2167->g_895.s8, "p_2167->g_895.s8", print_hash_value);
    transparent_crc(p_2167->g_895.s9, "p_2167->g_895.s9", print_hash_value);
    transparent_crc(p_2167->g_895.sa, "p_2167->g_895.sa", print_hash_value);
    transparent_crc(p_2167->g_895.sb, "p_2167->g_895.sb", print_hash_value);
    transparent_crc(p_2167->g_895.sc, "p_2167->g_895.sc", print_hash_value);
    transparent_crc(p_2167->g_895.sd, "p_2167->g_895.sd", print_hash_value);
    transparent_crc(p_2167->g_895.se, "p_2167->g_895.se", print_hash_value);
    transparent_crc(p_2167->g_895.sf, "p_2167->g_895.sf", print_hash_value);
    transparent_crc(p_2167->g_898.x, "p_2167->g_898.x", print_hash_value);
    transparent_crc(p_2167->g_898.y, "p_2167->g_898.y", print_hash_value);
    transparent_crc(p_2167->g_901.s0, "p_2167->g_901.s0", print_hash_value);
    transparent_crc(p_2167->g_901.s1, "p_2167->g_901.s1", print_hash_value);
    transparent_crc(p_2167->g_901.s2, "p_2167->g_901.s2", print_hash_value);
    transparent_crc(p_2167->g_901.s3, "p_2167->g_901.s3", print_hash_value);
    transparent_crc(p_2167->g_901.s4, "p_2167->g_901.s4", print_hash_value);
    transparent_crc(p_2167->g_901.s5, "p_2167->g_901.s5", print_hash_value);
    transparent_crc(p_2167->g_901.s6, "p_2167->g_901.s6", print_hash_value);
    transparent_crc(p_2167->g_901.s7, "p_2167->g_901.s7", print_hash_value);
    transparent_crc(p_2167->g_935.f0, "p_2167->g_935.f0", print_hash_value);
    transparent_crc(p_2167->g_935.f1, "p_2167->g_935.f1", print_hash_value);
    transparent_crc(p_2167->g_935.f2, "p_2167->g_935.f2", print_hash_value);
    transparent_crc(p_2167->g_935.f3, "p_2167->g_935.f3", print_hash_value);
    transparent_crc(p_2167->g_935.f4, "p_2167->g_935.f4", print_hash_value);
    transparent_crc(p_2167->g_951.x, "p_2167->g_951.x", print_hash_value);
    transparent_crc(p_2167->g_951.y, "p_2167->g_951.y", print_hash_value);
    transparent_crc(p_2167->g_951.z, "p_2167->g_951.z", print_hash_value);
    transparent_crc(p_2167->g_951.w, "p_2167->g_951.w", print_hash_value);
    transparent_crc(p_2167->g_958.s0, "p_2167->g_958.s0", print_hash_value);
    transparent_crc(p_2167->g_958.s1, "p_2167->g_958.s1", print_hash_value);
    transparent_crc(p_2167->g_958.s2, "p_2167->g_958.s2", print_hash_value);
    transparent_crc(p_2167->g_958.s3, "p_2167->g_958.s3", print_hash_value);
    transparent_crc(p_2167->g_958.s4, "p_2167->g_958.s4", print_hash_value);
    transparent_crc(p_2167->g_958.s5, "p_2167->g_958.s5", print_hash_value);
    transparent_crc(p_2167->g_958.s6, "p_2167->g_958.s6", print_hash_value);
    transparent_crc(p_2167->g_958.s7, "p_2167->g_958.s7", print_hash_value);
    transparent_crc(p_2167->g_958.s8, "p_2167->g_958.s8", print_hash_value);
    transparent_crc(p_2167->g_958.s9, "p_2167->g_958.s9", print_hash_value);
    transparent_crc(p_2167->g_958.sa, "p_2167->g_958.sa", print_hash_value);
    transparent_crc(p_2167->g_958.sb, "p_2167->g_958.sb", print_hash_value);
    transparent_crc(p_2167->g_958.sc, "p_2167->g_958.sc", print_hash_value);
    transparent_crc(p_2167->g_958.sd, "p_2167->g_958.sd", print_hash_value);
    transparent_crc(p_2167->g_958.se, "p_2167->g_958.se", print_hash_value);
    transparent_crc(p_2167->g_958.sf, "p_2167->g_958.sf", print_hash_value);
    transparent_crc(p_2167->g_991.x, "p_2167->g_991.x", print_hash_value);
    transparent_crc(p_2167->g_991.y, "p_2167->g_991.y", print_hash_value);
    transparent_crc(p_2167->g_991.z, "p_2167->g_991.z", print_hash_value);
    transparent_crc(p_2167->g_991.w, "p_2167->g_991.w", print_hash_value);
    transparent_crc(p_2167->g_999.f0, "p_2167->g_999.f0", print_hash_value);
    transparent_crc(p_2167->g_999.f1, "p_2167->g_999.f1", print_hash_value);
    transparent_crc(p_2167->g_999.f2, "p_2167->g_999.f2", print_hash_value);
    transparent_crc(p_2167->g_999.f3, "p_2167->g_999.f3", print_hash_value);
    transparent_crc(p_2167->g_999.f4, "p_2167->g_999.f4", print_hash_value);
    transparent_crc(p_2167->g_1013.x, "p_2167->g_1013.x", print_hash_value);
    transparent_crc(p_2167->g_1013.y, "p_2167->g_1013.y", print_hash_value);
    transparent_crc(p_2167->g_1013.z, "p_2167->g_1013.z", print_hash_value);
    transparent_crc(p_2167->g_1013.w, "p_2167->g_1013.w", print_hash_value);
    transparent_crc(p_2167->g_1018.f0, "p_2167->g_1018.f0", print_hash_value);
    transparent_crc(p_2167->g_1018.f1, "p_2167->g_1018.f1", print_hash_value);
    transparent_crc(p_2167->g_1018.f2, "p_2167->g_1018.f2", print_hash_value);
    transparent_crc(p_2167->g_1018.f3, "p_2167->g_1018.f3", print_hash_value);
    transparent_crc(p_2167->g_1018.f4, "p_2167->g_1018.f4", print_hash_value);
    transparent_crc(p_2167->g_1044, "p_2167->g_1044", print_hash_value);
    transparent_crc(p_2167->g_1049.s0, "p_2167->g_1049.s0", print_hash_value);
    transparent_crc(p_2167->g_1049.s1, "p_2167->g_1049.s1", print_hash_value);
    transparent_crc(p_2167->g_1049.s2, "p_2167->g_1049.s2", print_hash_value);
    transparent_crc(p_2167->g_1049.s3, "p_2167->g_1049.s3", print_hash_value);
    transparent_crc(p_2167->g_1049.s4, "p_2167->g_1049.s4", print_hash_value);
    transparent_crc(p_2167->g_1049.s5, "p_2167->g_1049.s5", print_hash_value);
    transparent_crc(p_2167->g_1049.s6, "p_2167->g_1049.s6", print_hash_value);
    transparent_crc(p_2167->g_1049.s7, "p_2167->g_1049.s7", print_hash_value);
    transparent_crc(p_2167->g_1049.s8, "p_2167->g_1049.s8", print_hash_value);
    transparent_crc(p_2167->g_1049.s9, "p_2167->g_1049.s9", print_hash_value);
    transparent_crc(p_2167->g_1049.sa, "p_2167->g_1049.sa", print_hash_value);
    transparent_crc(p_2167->g_1049.sb, "p_2167->g_1049.sb", print_hash_value);
    transparent_crc(p_2167->g_1049.sc, "p_2167->g_1049.sc", print_hash_value);
    transparent_crc(p_2167->g_1049.sd, "p_2167->g_1049.sd", print_hash_value);
    transparent_crc(p_2167->g_1049.se, "p_2167->g_1049.se", print_hash_value);
    transparent_crc(p_2167->g_1049.sf, "p_2167->g_1049.sf", print_hash_value);
    transparent_crc(p_2167->g_1050.s0, "p_2167->g_1050.s0", print_hash_value);
    transparent_crc(p_2167->g_1050.s1, "p_2167->g_1050.s1", print_hash_value);
    transparent_crc(p_2167->g_1050.s2, "p_2167->g_1050.s2", print_hash_value);
    transparent_crc(p_2167->g_1050.s3, "p_2167->g_1050.s3", print_hash_value);
    transparent_crc(p_2167->g_1050.s4, "p_2167->g_1050.s4", print_hash_value);
    transparent_crc(p_2167->g_1050.s5, "p_2167->g_1050.s5", print_hash_value);
    transparent_crc(p_2167->g_1050.s6, "p_2167->g_1050.s6", print_hash_value);
    transparent_crc(p_2167->g_1050.s7, "p_2167->g_1050.s7", print_hash_value);
    transparent_crc(p_2167->g_1065.s0, "p_2167->g_1065.s0", print_hash_value);
    transparent_crc(p_2167->g_1065.s1, "p_2167->g_1065.s1", print_hash_value);
    transparent_crc(p_2167->g_1065.s2, "p_2167->g_1065.s2", print_hash_value);
    transparent_crc(p_2167->g_1065.s3, "p_2167->g_1065.s3", print_hash_value);
    transparent_crc(p_2167->g_1065.s4, "p_2167->g_1065.s4", print_hash_value);
    transparent_crc(p_2167->g_1065.s5, "p_2167->g_1065.s5", print_hash_value);
    transparent_crc(p_2167->g_1065.s6, "p_2167->g_1065.s6", print_hash_value);
    transparent_crc(p_2167->g_1065.s7, "p_2167->g_1065.s7", print_hash_value);
    transparent_crc(p_2167->g_1066.s0, "p_2167->g_1066.s0", print_hash_value);
    transparent_crc(p_2167->g_1066.s1, "p_2167->g_1066.s1", print_hash_value);
    transparent_crc(p_2167->g_1066.s2, "p_2167->g_1066.s2", print_hash_value);
    transparent_crc(p_2167->g_1066.s3, "p_2167->g_1066.s3", print_hash_value);
    transparent_crc(p_2167->g_1066.s4, "p_2167->g_1066.s4", print_hash_value);
    transparent_crc(p_2167->g_1066.s5, "p_2167->g_1066.s5", print_hash_value);
    transparent_crc(p_2167->g_1066.s6, "p_2167->g_1066.s6", print_hash_value);
    transparent_crc(p_2167->g_1066.s7, "p_2167->g_1066.s7", print_hash_value);
    transparent_crc(p_2167->g_1090.f0, "p_2167->g_1090.f0", print_hash_value);
    transparent_crc(p_2167->g_1090.f1, "p_2167->g_1090.f1", print_hash_value);
    transparent_crc(p_2167->g_1090.f2, "p_2167->g_1090.f2", print_hash_value);
    transparent_crc(p_2167->g_1090.f3, "p_2167->g_1090.f3", print_hash_value);
    transparent_crc(p_2167->g_1090.f4, "p_2167->g_1090.f4", print_hash_value);
    transparent_crc(p_2167->g_1107, "p_2167->g_1107", print_hash_value);
    transparent_crc(p_2167->g_1162.s0, "p_2167->g_1162.s0", print_hash_value);
    transparent_crc(p_2167->g_1162.s1, "p_2167->g_1162.s1", print_hash_value);
    transparent_crc(p_2167->g_1162.s2, "p_2167->g_1162.s2", print_hash_value);
    transparent_crc(p_2167->g_1162.s3, "p_2167->g_1162.s3", print_hash_value);
    transparent_crc(p_2167->g_1162.s4, "p_2167->g_1162.s4", print_hash_value);
    transparent_crc(p_2167->g_1162.s5, "p_2167->g_1162.s5", print_hash_value);
    transparent_crc(p_2167->g_1162.s6, "p_2167->g_1162.s6", print_hash_value);
    transparent_crc(p_2167->g_1162.s7, "p_2167->g_1162.s7", print_hash_value);
    transparent_crc(p_2167->g_1162.s8, "p_2167->g_1162.s8", print_hash_value);
    transparent_crc(p_2167->g_1162.s9, "p_2167->g_1162.s9", print_hash_value);
    transparent_crc(p_2167->g_1162.sa, "p_2167->g_1162.sa", print_hash_value);
    transparent_crc(p_2167->g_1162.sb, "p_2167->g_1162.sb", print_hash_value);
    transparent_crc(p_2167->g_1162.sc, "p_2167->g_1162.sc", print_hash_value);
    transparent_crc(p_2167->g_1162.sd, "p_2167->g_1162.sd", print_hash_value);
    transparent_crc(p_2167->g_1162.se, "p_2167->g_1162.se", print_hash_value);
    transparent_crc(p_2167->g_1162.sf, "p_2167->g_1162.sf", print_hash_value);
    transparent_crc(p_2167->g_1164.x, "p_2167->g_1164.x", print_hash_value);
    transparent_crc(p_2167->g_1164.y, "p_2167->g_1164.y", print_hash_value);
    transparent_crc(p_2167->g_1164.z, "p_2167->g_1164.z", print_hash_value);
    transparent_crc(p_2167->g_1164.w, "p_2167->g_1164.w", print_hash_value);
    transparent_crc(p_2167->g_1174.x, "p_2167->g_1174.x", print_hash_value);
    transparent_crc(p_2167->g_1174.y, "p_2167->g_1174.y", print_hash_value);
    transparent_crc(p_2167->g_1176.x, "p_2167->g_1176.x", print_hash_value);
    transparent_crc(p_2167->g_1176.y, "p_2167->g_1176.y", print_hash_value);
    transparent_crc(p_2167->g_1177.x, "p_2167->g_1177.x", print_hash_value);
    transparent_crc(p_2167->g_1177.y, "p_2167->g_1177.y", print_hash_value);
    transparent_crc(p_2167->g_1182.s0, "p_2167->g_1182.s0", print_hash_value);
    transparent_crc(p_2167->g_1182.s1, "p_2167->g_1182.s1", print_hash_value);
    transparent_crc(p_2167->g_1182.s2, "p_2167->g_1182.s2", print_hash_value);
    transparent_crc(p_2167->g_1182.s3, "p_2167->g_1182.s3", print_hash_value);
    transparent_crc(p_2167->g_1182.s4, "p_2167->g_1182.s4", print_hash_value);
    transparent_crc(p_2167->g_1182.s5, "p_2167->g_1182.s5", print_hash_value);
    transparent_crc(p_2167->g_1182.s6, "p_2167->g_1182.s6", print_hash_value);
    transparent_crc(p_2167->g_1182.s7, "p_2167->g_1182.s7", print_hash_value);
    transparent_crc(p_2167->g_1189.x, "p_2167->g_1189.x", print_hash_value);
    transparent_crc(p_2167->g_1189.y, "p_2167->g_1189.y", print_hash_value);
    transparent_crc(p_2167->g_1222.s0, "p_2167->g_1222.s0", print_hash_value);
    transparent_crc(p_2167->g_1222.s1, "p_2167->g_1222.s1", print_hash_value);
    transparent_crc(p_2167->g_1222.s2, "p_2167->g_1222.s2", print_hash_value);
    transparent_crc(p_2167->g_1222.s3, "p_2167->g_1222.s3", print_hash_value);
    transparent_crc(p_2167->g_1222.s4, "p_2167->g_1222.s4", print_hash_value);
    transparent_crc(p_2167->g_1222.s5, "p_2167->g_1222.s5", print_hash_value);
    transparent_crc(p_2167->g_1222.s6, "p_2167->g_1222.s6", print_hash_value);
    transparent_crc(p_2167->g_1222.s7, "p_2167->g_1222.s7", print_hash_value);
    transparent_crc(p_2167->g_1223.s0, "p_2167->g_1223.s0", print_hash_value);
    transparent_crc(p_2167->g_1223.s1, "p_2167->g_1223.s1", print_hash_value);
    transparent_crc(p_2167->g_1223.s2, "p_2167->g_1223.s2", print_hash_value);
    transparent_crc(p_2167->g_1223.s3, "p_2167->g_1223.s3", print_hash_value);
    transparent_crc(p_2167->g_1223.s4, "p_2167->g_1223.s4", print_hash_value);
    transparent_crc(p_2167->g_1223.s5, "p_2167->g_1223.s5", print_hash_value);
    transparent_crc(p_2167->g_1223.s6, "p_2167->g_1223.s6", print_hash_value);
    transparent_crc(p_2167->g_1223.s7, "p_2167->g_1223.s7", print_hash_value);
    transparent_crc(p_2167->g_1223.s8, "p_2167->g_1223.s8", print_hash_value);
    transparent_crc(p_2167->g_1223.s9, "p_2167->g_1223.s9", print_hash_value);
    transparent_crc(p_2167->g_1223.sa, "p_2167->g_1223.sa", print_hash_value);
    transparent_crc(p_2167->g_1223.sb, "p_2167->g_1223.sb", print_hash_value);
    transparent_crc(p_2167->g_1223.sc, "p_2167->g_1223.sc", print_hash_value);
    transparent_crc(p_2167->g_1223.sd, "p_2167->g_1223.sd", print_hash_value);
    transparent_crc(p_2167->g_1223.se, "p_2167->g_1223.se", print_hash_value);
    transparent_crc(p_2167->g_1223.sf, "p_2167->g_1223.sf", print_hash_value);
    transparent_crc(p_2167->g_1224.s0, "p_2167->g_1224.s0", print_hash_value);
    transparent_crc(p_2167->g_1224.s1, "p_2167->g_1224.s1", print_hash_value);
    transparent_crc(p_2167->g_1224.s2, "p_2167->g_1224.s2", print_hash_value);
    transparent_crc(p_2167->g_1224.s3, "p_2167->g_1224.s3", print_hash_value);
    transparent_crc(p_2167->g_1224.s4, "p_2167->g_1224.s4", print_hash_value);
    transparent_crc(p_2167->g_1224.s5, "p_2167->g_1224.s5", print_hash_value);
    transparent_crc(p_2167->g_1224.s6, "p_2167->g_1224.s6", print_hash_value);
    transparent_crc(p_2167->g_1224.s7, "p_2167->g_1224.s7", print_hash_value);
    transparent_crc(p_2167->g_1224.s8, "p_2167->g_1224.s8", print_hash_value);
    transparent_crc(p_2167->g_1224.s9, "p_2167->g_1224.s9", print_hash_value);
    transparent_crc(p_2167->g_1224.sa, "p_2167->g_1224.sa", print_hash_value);
    transparent_crc(p_2167->g_1224.sb, "p_2167->g_1224.sb", print_hash_value);
    transparent_crc(p_2167->g_1224.sc, "p_2167->g_1224.sc", print_hash_value);
    transparent_crc(p_2167->g_1224.sd, "p_2167->g_1224.sd", print_hash_value);
    transparent_crc(p_2167->g_1224.se, "p_2167->g_1224.se", print_hash_value);
    transparent_crc(p_2167->g_1224.sf, "p_2167->g_1224.sf", print_hash_value);
    transparent_crc(p_2167->g_1245.x, "p_2167->g_1245.x", print_hash_value);
    transparent_crc(p_2167->g_1245.y, "p_2167->g_1245.y", print_hash_value);
    transparent_crc(p_2167->g_1308.x, "p_2167->g_1308.x", print_hash_value);
    transparent_crc(p_2167->g_1308.y, "p_2167->g_1308.y", print_hash_value);
    transparent_crc(p_2167->g_1385.x, "p_2167->g_1385.x", print_hash_value);
    transparent_crc(p_2167->g_1385.y, "p_2167->g_1385.y", print_hash_value);
    transparent_crc(p_2167->g_1396, "p_2167->g_1396", print_hash_value);
    transparent_crc(p_2167->g_1398, "p_2167->g_1398", print_hash_value);
    transparent_crc(p_2167->g_1401.s0, "p_2167->g_1401.s0", print_hash_value);
    transparent_crc(p_2167->g_1401.s1, "p_2167->g_1401.s1", print_hash_value);
    transparent_crc(p_2167->g_1401.s2, "p_2167->g_1401.s2", print_hash_value);
    transparent_crc(p_2167->g_1401.s3, "p_2167->g_1401.s3", print_hash_value);
    transparent_crc(p_2167->g_1401.s4, "p_2167->g_1401.s4", print_hash_value);
    transparent_crc(p_2167->g_1401.s5, "p_2167->g_1401.s5", print_hash_value);
    transparent_crc(p_2167->g_1401.s6, "p_2167->g_1401.s6", print_hash_value);
    transparent_crc(p_2167->g_1401.s7, "p_2167->g_1401.s7", print_hash_value);
    transparent_crc(p_2167->g_1432, "p_2167->g_1432", print_hash_value);
    transparent_crc(p_2167->g_1464.x, "p_2167->g_1464.x", print_hash_value);
    transparent_crc(p_2167->g_1464.y, "p_2167->g_1464.y", print_hash_value);
    transparent_crc(p_2167->g_1465.x, "p_2167->g_1465.x", print_hash_value);
    transparent_crc(p_2167->g_1465.y, "p_2167->g_1465.y", print_hash_value);
    transparent_crc(p_2167->g_1465.z, "p_2167->g_1465.z", print_hash_value);
    transparent_crc(p_2167->g_1465.w, "p_2167->g_1465.w", print_hash_value);
    transparent_crc(p_2167->g_1499.s0, "p_2167->g_1499.s0", print_hash_value);
    transparent_crc(p_2167->g_1499.s1, "p_2167->g_1499.s1", print_hash_value);
    transparent_crc(p_2167->g_1499.s2, "p_2167->g_1499.s2", print_hash_value);
    transparent_crc(p_2167->g_1499.s3, "p_2167->g_1499.s3", print_hash_value);
    transparent_crc(p_2167->g_1499.s4, "p_2167->g_1499.s4", print_hash_value);
    transparent_crc(p_2167->g_1499.s5, "p_2167->g_1499.s5", print_hash_value);
    transparent_crc(p_2167->g_1499.s6, "p_2167->g_1499.s6", print_hash_value);
    transparent_crc(p_2167->g_1499.s7, "p_2167->g_1499.s7", print_hash_value);
    transparent_crc(p_2167->g_1499.s8, "p_2167->g_1499.s8", print_hash_value);
    transparent_crc(p_2167->g_1499.s9, "p_2167->g_1499.s9", print_hash_value);
    transparent_crc(p_2167->g_1499.sa, "p_2167->g_1499.sa", print_hash_value);
    transparent_crc(p_2167->g_1499.sb, "p_2167->g_1499.sb", print_hash_value);
    transparent_crc(p_2167->g_1499.sc, "p_2167->g_1499.sc", print_hash_value);
    transparent_crc(p_2167->g_1499.sd, "p_2167->g_1499.sd", print_hash_value);
    transparent_crc(p_2167->g_1499.se, "p_2167->g_1499.se", print_hash_value);
    transparent_crc(p_2167->g_1499.sf, "p_2167->g_1499.sf", print_hash_value);
    transparent_crc(p_2167->g_1550.f0, "p_2167->g_1550.f0", print_hash_value);
    transparent_crc(p_2167->g_1550.f1, "p_2167->g_1550.f1", print_hash_value);
    transparent_crc(p_2167->g_1550.f2, "p_2167->g_1550.f2", print_hash_value);
    transparent_crc(p_2167->g_1550.f3, "p_2167->g_1550.f3", print_hash_value);
    transparent_crc(p_2167->g_1550.f4, "p_2167->g_1550.f4", print_hash_value);
    transparent_crc(p_2167->g_1553.s0, "p_2167->g_1553.s0", print_hash_value);
    transparent_crc(p_2167->g_1553.s1, "p_2167->g_1553.s1", print_hash_value);
    transparent_crc(p_2167->g_1553.s2, "p_2167->g_1553.s2", print_hash_value);
    transparent_crc(p_2167->g_1553.s3, "p_2167->g_1553.s3", print_hash_value);
    transparent_crc(p_2167->g_1553.s4, "p_2167->g_1553.s4", print_hash_value);
    transparent_crc(p_2167->g_1553.s5, "p_2167->g_1553.s5", print_hash_value);
    transparent_crc(p_2167->g_1553.s6, "p_2167->g_1553.s6", print_hash_value);
    transparent_crc(p_2167->g_1553.s7, "p_2167->g_1553.s7", print_hash_value);
    transparent_crc(p_2167->g_1585.x, "p_2167->g_1585.x", print_hash_value);
    transparent_crc(p_2167->g_1585.y, "p_2167->g_1585.y", print_hash_value);
    transparent_crc(p_2167->g_1586.s0, "p_2167->g_1586.s0", print_hash_value);
    transparent_crc(p_2167->g_1586.s1, "p_2167->g_1586.s1", print_hash_value);
    transparent_crc(p_2167->g_1586.s2, "p_2167->g_1586.s2", print_hash_value);
    transparent_crc(p_2167->g_1586.s3, "p_2167->g_1586.s3", print_hash_value);
    transparent_crc(p_2167->g_1586.s4, "p_2167->g_1586.s4", print_hash_value);
    transparent_crc(p_2167->g_1586.s5, "p_2167->g_1586.s5", print_hash_value);
    transparent_crc(p_2167->g_1586.s6, "p_2167->g_1586.s6", print_hash_value);
    transparent_crc(p_2167->g_1586.s7, "p_2167->g_1586.s7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2167->g_1609[i].f0, "p_2167->g_1609[i].f0", print_hash_value);
        transparent_crc(p_2167->g_1609[i].f1, "p_2167->g_1609[i].f1", print_hash_value);
        transparent_crc(p_2167->g_1609[i].f2, "p_2167->g_1609[i].f2", print_hash_value);
        transparent_crc(p_2167->g_1609[i].f3, "p_2167->g_1609[i].f3", print_hash_value);
        transparent_crc(p_2167->g_1609[i].f4, "p_2167->g_1609[i].f4", print_hash_value);

    }
    transparent_crc(p_2167->g_1612, "p_2167->g_1612", print_hash_value);
    transparent_crc(p_2167->g_1613.s0, "p_2167->g_1613.s0", print_hash_value);
    transparent_crc(p_2167->g_1613.s1, "p_2167->g_1613.s1", print_hash_value);
    transparent_crc(p_2167->g_1613.s2, "p_2167->g_1613.s2", print_hash_value);
    transparent_crc(p_2167->g_1613.s3, "p_2167->g_1613.s3", print_hash_value);
    transparent_crc(p_2167->g_1613.s4, "p_2167->g_1613.s4", print_hash_value);
    transparent_crc(p_2167->g_1613.s5, "p_2167->g_1613.s5", print_hash_value);
    transparent_crc(p_2167->g_1613.s6, "p_2167->g_1613.s6", print_hash_value);
    transparent_crc(p_2167->g_1613.s7, "p_2167->g_1613.s7", print_hash_value);
    transparent_crc(p_2167->g_1657.f0, "p_2167->g_1657.f0", print_hash_value);
    transparent_crc(p_2167->g_1657.f1, "p_2167->g_1657.f1", print_hash_value);
    transparent_crc(p_2167->g_1657.f2, "p_2167->g_1657.f2", print_hash_value);
    transparent_crc(p_2167->g_1657.f3, "p_2167->g_1657.f3", print_hash_value);
    transparent_crc(p_2167->g_1657.f4, "p_2167->g_1657.f4", print_hash_value);
    transparent_crc(p_2167->g_1664.s0, "p_2167->g_1664.s0", print_hash_value);
    transparent_crc(p_2167->g_1664.s1, "p_2167->g_1664.s1", print_hash_value);
    transparent_crc(p_2167->g_1664.s2, "p_2167->g_1664.s2", print_hash_value);
    transparent_crc(p_2167->g_1664.s3, "p_2167->g_1664.s3", print_hash_value);
    transparent_crc(p_2167->g_1664.s4, "p_2167->g_1664.s4", print_hash_value);
    transparent_crc(p_2167->g_1664.s5, "p_2167->g_1664.s5", print_hash_value);
    transparent_crc(p_2167->g_1664.s6, "p_2167->g_1664.s6", print_hash_value);
    transparent_crc(p_2167->g_1664.s7, "p_2167->g_1664.s7", print_hash_value);
    transparent_crc(p_2167->g_1664.s8, "p_2167->g_1664.s8", print_hash_value);
    transparent_crc(p_2167->g_1664.s9, "p_2167->g_1664.s9", print_hash_value);
    transparent_crc(p_2167->g_1664.sa, "p_2167->g_1664.sa", print_hash_value);
    transparent_crc(p_2167->g_1664.sb, "p_2167->g_1664.sb", print_hash_value);
    transparent_crc(p_2167->g_1664.sc, "p_2167->g_1664.sc", print_hash_value);
    transparent_crc(p_2167->g_1664.sd, "p_2167->g_1664.sd", print_hash_value);
    transparent_crc(p_2167->g_1664.se, "p_2167->g_1664.se", print_hash_value);
    transparent_crc(p_2167->g_1664.sf, "p_2167->g_1664.sf", print_hash_value);
    transparent_crc(p_2167->g_1702.x, "p_2167->g_1702.x", print_hash_value);
    transparent_crc(p_2167->g_1702.y, "p_2167->g_1702.y", print_hash_value);
    transparent_crc(p_2167->g_1703.s0, "p_2167->g_1703.s0", print_hash_value);
    transparent_crc(p_2167->g_1703.s1, "p_2167->g_1703.s1", print_hash_value);
    transparent_crc(p_2167->g_1703.s2, "p_2167->g_1703.s2", print_hash_value);
    transparent_crc(p_2167->g_1703.s3, "p_2167->g_1703.s3", print_hash_value);
    transparent_crc(p_2167->g_1703.s4, "p_2167->g_1703.s4", print_hash_value);
    transparent_crc(p_2167->g_1703.s5, "p_2167->g_1703.s5", print_hash_value);
    transparent_crc(p_2167->g_1703.s6, "p_2167->g_1703.s6", print_hash_value);
    transparent_crc(p_2167->g_1703.s7, "p_2167->g_1703.s7", print_hash_value);
    transparent_crc(p_2167->g_1739.x, "p_2167->g_1739.x", print_hash_value);
    transparent_crc(p_2167->g_1739.y, "p_2167->g_1739.y", print_hash_value);
    transparent_crc(p_2167->g_1741.s0, "p_2167->g_1741.s0", print_hash_value);
    transparent_crc(p_2167->g_1741.s1, "p_2167->g_1741.s1", print_hash_value);
    transparent_crc(p_2167->g_1741.s2, "p_2167->g_1741.s2", print_hash_value);
    transparent_crc(p_2167->g_1741.s3, "p_2167->g_1741.s3", print_hash_value);
    transparent_crc(p_2167->g_1741.s4, "p_2167->g_1741.s4", print_hash_value);
    transparent_crc(p_2167->g_1741.s5, "p_2167->g_1741.s5", print_hash_value);
    transparent_crc(p_2167->g_1741.s6, "p_2167->g_1741.s6", print_hash_value);
    transparent_crc(p_2167->g_1741.s7, "p_2167->g_1741.s7", print_hash_value);
    transparent_crc(p_2167->g_1741.s8, "p_2167->g_1741.s8", print_hash_value);
    transparent_crc(p_2167->g_1741.s9, "p_2167->g_1741.s9", print_hash_value);
    transparent_crc(p_2167->g_1741.sa, "p_2167->g_1741.sa", print_hash_value);
    transparent_crc(p_2167->g_1741.sb, "p_2167->g_1741.sb", print_hash_value);
    transparent_crc(p_2167->g_1741.sc, "p_2167->g_1741.sc", print_hash_value);
    transparent_crc(p_2167->g_1741.sd, "p_2167->g_1741.sd", print_hash_value);
    transparent_crc(p_2167->g_1741.se, "p_2167->g_1741.se", print_hash_value);
    transparent_crc(p_2167->g_1741.sf, "p_2167->g_1741.sf", print_hash_value);
    transparent_crc(p_2167->g_1742.x, "p_2167->g_1742.x", print_hash_value);
    transparent_crc(p_2167->g_1742.y, "p_2167->g_1742.y", print_hash_value);
    transparent_crc(p_2167->g_1755.s0, "p_2167->g_1755.s0", print_hash_value);
    transparent_crc(p_2167->g_1755.s1, "p_2167->g_1755.s1", print_hash_value);
    transparent_crc(p_2167->g_1755.s2, "p_2167->g_1755.s2", print_hash_value);
    transparent_crc(p_2167->g_1755.s3, "p_2167->g_1755.s3", print_hash_value);
    transparent_crc(p_2167->g_1755.s4, "p_2167->g_1755.s4", print_hash_value);
    transparent_crc(p_2167->g_1755.s5, "p_2167->g_1755.s5", print_hash_value);
    transparent_crc(p_2167->g_1755.s6, "p_2167->g_1755.s6", print_hash_value);
    transparent_crc(p_2167->g_1755.s7, "p_2167->g_1755.s7", print_hash_value);
    transparent_crc(p_2167->g_1755.s8, "p_2167->g_1755.s8", print_hash_value);
    transparent_crc(p_2167->g_1755.s9, "p_2167->g_1755.s9", print_hash_value);
    transparent_crc(p_2167->g_1755.sa, "p_2167->g_1755.sa", print_hash_value);
    transparent_crc(p_2167->g_1755.sb, "p_2167->g_1755.sb", print_hash_value);
    transparent_crc(p_2167->g_1755.sc, "p_2167->g_1755.sc", print_hash_value);
    transparent_crc(p_2167->g_1755.sd, "p_2167->g_1755.sd", print_hash_value);
    transparent_crc(p_2167->g_1755.se, "p_2167->g_1755.se", print_hash_value);
    transparent_crc(p_2167->g_1755.sf, "p_2167->g_1755.sf", print_hash_value);
    transparent_crc(p_2167->g_1769, "p_2167->g_1769", print_hash_value);
    transparent_crc(p_2167->g_1776.x, "p_2167->g_1776.x", print_hash_value);
    transparent_crc(p_2167->g_1776.y, "p_2167->g_1776.y", print_hash_value);
    transparent_crc(p_2167->g_1861.s0, "p_2167->g_1861.s0", print_hash_value);
    transparent_crc(p_2167->g_1861.s1, "p_2167->g_1861.s1", print_hash_value);
    transparent_crc(p_2167->g_1861.s2, "p_2167->g_1861.s2", print_hash_value);
    transparent_crc(p_2167->g_1861.s3, "p_2167->g_1861.s3", print_hash_value);
    transparent_crc(p_2167->g_1861.s4, "p_2167->g_1861.s4", print_hash_value);
    transparent_crc(p_2167->g_1861.s5, "p_2167->g_1861.s5", print_hash_value);
    transparent_crc(p_2167->g_1861.s6, "p_2167->g_1861.s6", print_hash_value);
    transparent_crc(p_2167->g_1861.s7, "p_2167->g_1861.s7", print_hash_value);
    transparent_crc(p_2167->g_1861.s8, "p_2167->g_1861.s8", print_hash_value);
    transparent_crc(p_2167->g_1861.s9, "p_2167->g_1861.s9", print_hash_value);
    transparent_crc(p_2167->g_1861.sa, "p_2167->g_1861.sa", print_hash_value);
    transparent_crc(p_2167->g_1861.sb, "p_2167->g_1861.sb", print_hash_value);
    transparent_crc(p_2167->g_1861.sc, "p_2167->g_1861.sc", print_hash_value);
    transparent_crc(p_2167->g_1861.sd, "p_2167->g_1861.sd", print_hash_value);
    transparent_crc(p_2167->g_1861.se, "p_2167->g_1861.se", print_hash_value);
    transparent_crc(p_2167->g_1861.sf, "p_2167->g_1861.sf", print_hash_value);
    transparent_crc(p_2167->g_1882, "p_2167->g_1882", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_2167->g_1883[i], "p_2167->g_1883[i]", print_hash_value);

    }
    transparent_crc(p_2167->g_1888.x, "p_2167->g_1888.x", print_hash_value);
    transparent_crc(p_2167->g_1888.y, "p_2167->g_1888.y", print_hash_value);
    transparent_crc(p_2167->g_1892.x, "p_2167->g_1892.x", print_hash_value);
    transparent_crc(p_2167->g_1892.y, "p_2167->g_1892.y", print_hash_value);
    transparent_crc(p_2167->g_1892.z, "p_2167->g_1892.z", print_hash_value);
    transparent_crc(p_2167->g_1892.w, "p_2167->g_1892.w", print_hash_value);
    transparent_crc(p_2167->g_1893.s0, "p_2167->g_1893.s0", print_hash_value);
    transparent_crc(p_2167->g_1893.s1, "p_2167->g_1893.s1", print_hash_value);
    transparent_crc(p_2167->g_1893.s2, "p_2167->g_1893.s2", print_hash_value);
    transparent_crc(p_2167->g_1893.s3, "p_2167->g_1893.s3", print_hash_value);
    transparent_crc(p_2167->g_1893.s4, "p_2167->g_1893.s4", print_hash_value);
    transparent_crc(p_2167->g_1893.s5, "p_2167->g_1893.s5", print_hash_value);
    transparent_crc(p_2167->g_1893.s6, "p_2167->g_1893.s6", print_hash_value);
    transparent_crc(p_2167->g_1893.s7, "p_2167->g_1893.s7", print_hash_value);
    transparent_crc(p_2167->g_1893.s8, "p_2167->g_1893.s8", print_hash_value);
    transparent_crc(p_2167->g_1893.s9, "p_2167->g_1893.s9", print_hash_value);
    transparent_crc(p_2167->g_1893.sa, "p_2167->g_1893.sa", print_hash_value);
    transparent_crc(p_2167->g_1893.sb, "p_2167->g_1893.sb", print_hash_value);
    transparent_crc(p_2167->g_1893.sc, "p_2167->g_1893.sc", print_hash_value);
    transparent_crc(p_2167->g_1893.sd, "p_2167->g_1893.sd", print_hash_value);
    transparent_crc(p_2167->g_1893.se, "p_2167->g_1893.se", print_hash_value);
    transparent_crc(p_2167->g_1893.sf, "p_2167->g_1893.sf", print_hash_value);
    transparent_crc(p_2167->g_1901.x, "p_2167->g_1901.x", print_hash_value);
    transparent_crc(p_2167->g_1901.y, "p_2167->g_1901.y", print_hash_value);
    transparent_crc(p_2167->g_1901.z, "p_2167->g_1901.z", print_hash_value);
    transparent_crc(p_2167->g_1901.w, "p_2167->g_1901.w", print_hash_value);
    transparent_crc(p_2167->g_1943.x, "p_2167->g_1943.x", print_hash_value);
    transparent_crc(p_2167->g_1943.y, "p_2167->g_1943.y", print_hash_value);
    transparent_crc(p_2167->g_1952.s0, "p_2167->g_1952.s0", print_hash_value);
    transparent_crc(p_2167->g_1952.s1, "p_2167->g_1952.s1", print_hash_value);
    transparent_crc(p_2167->g_1952.s2, "p_2167->g_1952.s2", print_hash_value);
    transparent_crc(p_2167->g_1952.s3, "p_2167->g_1952.s3", print_hash_value);
    transparent_crc(p_2167->g_1952.s4, "p_2167->g_1952.s4", print_hash_value);
    transparent_crc(p_2167->g_1952.s5, "p_2167->g_1952.s5", print_hash_value);
    transparent_crc(p_2167->g_1952.s6, "p_2167->g_1952.s6", print_hash_value);
    transparent_crc(p_2167->g_1952.s7, "p_2167->g_1952.s7", print_hash_value);
    transparent_crc(p_2167->g_1952.s8, "p_2167->g_1952.s8", print_hash_value);
    transparent_crc(p_2167->g_1952.s9, "p_2167->g_1952.s9", print_hash_value);
    transparent_crc(p_2167->g_1952.sa, "p_2167->g_1952.sa", print_hash_value);
    transparent_crc(p_2167->g_1952.sb, "p_2167->g_1952.sb", print_hash_value);
    transparent_crc(p_2167->g_1952.sc, "p_2167->g_1952.sc", print_hash_value);
    transparent_crc(p_2167->g_1952.sd, "p_2167->g_1952.sd", print_hash_value);
    transparent_crc(p_2167->g_1952.se, "p_2167->g_1952.se", print_hash_value);
    transparent_crc(p_2167->g_1952.sf, "p_2167->g_1952.sf", print_hash_value);
    transparent_crc(p_2167->g_1971.x, "p_2167->g_1971.x", print_hash_value);
    transparent_crc(p_2167->g_1971.y, "p_2167->g_1971.y", print_hash_value);
    transparent_crc(p_2167->g_1971.z, "p_2167->g_1971.z", print_hash_value);
    transparent_crc(p_2167->g_1971.w, "p_2167->g_1971.w", print_hash_value);
    transparent_crc(p_2167->g_2004.s0, "p_2167->g_2004.s0", print_hash_value);
    transparent_crc(p_2167->g_2004.s1, "p_2167->g_2004.s1", print_hash_value);
    transparent_crc(p_2167->g_2004.s2, "p_2167->g_2004.s2", print_hash_value);
    transparent_crc(p_2167->g_2004.s3, "p_2167->g_2004.s3", print_hash_value);
    transparent_crc(p_2167->g_2004.s4, "p_2167->g_2004.s4", print_hash_value);
    transparent_crc(p_2167->g_2004.s5, "p_2167->g_2004.s5", print_hash_value);
    transparent_crc(p_2167->g_2004.s6, "p_2167->g_2004.s6", print_hash_value);
    transparent_crc(p_2167->g_2004.s7, "p_2167->g_2004.s7", print_hash_value);
    transparent_crc(p_2167->g_2005.x, "p_2167->g_2005.x", print_hash_value);
    transparent_crc(p_2167->g_2005.y, "p_2167->g_2005.y", print_hash_value);
    transparent_crc(p_2167->g_2005.z, "p_2167->g_2005.z", print_hash_value);
    transparent_crc(p_2167->g_2005.w, "p_2167->g_2005.w", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_2167->g_2030[i][j][k], "p_2167->g_2030[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_2167->g_2095[i][j].f0, "p_2167->g_2095[i][j].f0", print_hash_value);
            transparent_crc(p_2167->g_2095[i][j].f1, "p_2167->g_2095[i][j].f1", print_hash_value);
            transparent_crc(p_2167->g_2095[i][j].f2, "p_2167->g_2095[i][j].f2", print_hash_value);
            transparent_crc(p_2167->g_2095[i][j].f3, "p_2167->g_2095[i][j].f3", print_hash_value);
            transparent_crc(p_2167->g_2095[i][j].f4, "p_2167->g_2095[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(p_2167->g_2103, "p_2167->g_2103", print_hash_value);
    transparent_crc(p_2167->g_2111.x, "p_2167->g_2111.x", print_hash_value);
    transparent_crc(p_2167->g_2111.y, "p_2167->g_2111.y", print_hash_value);
    transparent_crc(p_2167->g_2111.z, "p_2167->g_2111.z", print_hash_value);
    transparent_crc(p_2167->g_2111.w, "p_2167->g_2111.w", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2167->g_2127[i].f0, "p_2167->g_2127[i].f0", print_hash_value);
        transparent_crc(p_2167->g_2127[i].f1, "p_2167->g_2127[i].f1", print_hash_value);
        transparent_crc(p_2167->g_2127[i].f2, "p_2167->g_2127[i].f2", print_hash_value);
        transparent_crc(p_2167->g_2127[i].f3, "p_2167->g_2127[i].f3", print_hash_value);
        transparent_crc(p_2167->g_2127[i].f4, "p_2167->g_2127[i].f4", print_hash_value);

    }
    transparent_crc(p_2167->g_2166.f0, "p_2167->g_2166.f0", print_hash_value);
    transparent_crc(p_2167->g_2166.f1, "p_2167->g_2166.f1", print_hash_value);
    transparent_crc(p_2167->g_2166.f2, "p_2167->g_2166.f2", print_hash_value);
    transparent_crc(p_2167->g_2166.f3, "p_2167->g_2166.f3", print_hash_value);
    transparent_crc(p_2167->g_2166.f4, "p_2167->g_2166.f4", print_hash_value);
    transparent_crc(p_2167->v_collective, "p_2167->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 1; i++)
            transparent_crc(p_2167->g_special_values[i + 1 * get_linear_group_id()], "p_2167->g_special_values[i + 1 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_2167->l_comm_values[get_linear_local_id()], "p_2167->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_2167->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()], "p_2167->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
