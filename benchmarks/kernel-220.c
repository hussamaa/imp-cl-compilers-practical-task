// --atomics 63 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 7,29,46 -l 7,1,2
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

__constant uint32_t permutations[10][14] = {
{8,0,1,12,9,7,13,3,6,10,11,5,2,4}, // permutation 0
{1,0,10,8,9,12,13,11,6,4,2,7,3,5}, // permutation 1
{12,6,13,9,2,8,11,5,10,3,7,0,4,1}, // permutation 2
{5,4,11,2,0,9,8,1,12,3,10,6,13,7}, // permutation 3
{7,5,0,11,1,9,4,8,6,2,12,10,13,3}, // permutation 4
{6,11,10,2,1,3,4,5,12,0,9,7,8,13}, // permutation 5
{4,6,2,12,3,8,0,9,11,7,10,5,13,1}, // permutation 6
{12,7,4,1,9,10,8,2,3,13,0,6,11,5}, // permutation 7
{11,4,9,6,12,5,3,1,2,10,13,7,0,8}, // permutation 8
{10,3,11,4,2,7,5,13,8,0,12,9,1,6} // permutation 9
};

// Seed: 469709824

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    uint32_t g_34;
    uint32_t g_44;
    uint32_t *g_43;
    uint32_t g_45;
    VECTOR(int32_t, 8) g_60;
    uint16_t g_79;
    int64_t g_84[3];
    int32_t * volatile g_90;
    uint64_t g_123[1][5][10];
    volatile VECTOR(uint64_t, 16) g_136;
    uint32_t g_155;
    VECTOR(uint8_t, 4) g_160;
    uint32_t g_167;
    int32_t * volatile g_168;
    int32_t * volatile g_169;
    int32_t * volatile g_170[6];
    int32_t * volatile g_171;
    int32_t * volatile g_173;
    int32_t * volatile g_174[6][5];
    int32_t * volatile g_175[4];
    int16_t g_187;
    uint16_t *g_221;
    VECTOR(int64_t, 16) g_222;
    VECTOR(int64_t, 2) g_223;
    volatile VECTOR(uint8_t, 16) g_252;
    int16_t g_262;
    VECTOR(int16_t, 16) g_270;
    volatile VECTOR(uint16_t, 4) g_273;
    volatile VECTOR(uint16_t, 4) g_277;
    int32_t * volatile g_304;
    int32_t * volatile g_305;
    int32_t * volatile g_306[8][8][3];
    uint8_t *g_309;
    uint8_t ** volatile g_308;
    VECTOR(int32_t, 4) g_316;
    uint64_t g_321[2][4][1];
    uint64_t g_323;
    volatile VECTOR(int8_t, 8) g_331;
    volatile VECTOR(int8_t, 8) g_332;
    VECTOR(int8_t, 4) g_333;
    uint8_t **g_335[9][6][4];
    VECTOR(int32_t, 8) g_337;
    volatile VECTOR(int64_t, 2) g_346;
    VECTOR(uint64_t, 8) g_361;
    int32_t * volatile g_363;
    VECTOR(uint32_t, 8) g_365;
    int32_t * volatile g_366;
    int32_t *g_377;
    int32_t ** volatile g_376;
    int32_t * volatile g_381;
    int32_t * volatile g_382;
    int32_t * volatile g_383;
    int32_t * volatile g_384;
    volatile int16_t g_392[5][8];
    volatile int16_t * volatile g_391;
    volatile int16_t * volatile *g_390[3];
    volatile int16_t * volatile ** volatile g_393;
    volatile VECTOR(int32_t, 8) g_421;
    volatile VECTOR(int16_t, 4) g_428;
    int32_t ** volatile g_435;
    uint32_t g_503;
    int16_t g_508;
    uint8_t g_535;
    VECTOR(int8_t, 2) g_540;
    int32_t * volatile g_547;
    uint64_t g_569;
    volatile uint8_t * volatile *g_577;
    volatile uint8_t * volatile * volatile *g_576;
    int32_t ** volatile g_606;
    int32_t * volatile g_608[8];
    int32_t ** volatile g_620;
    int32_t g_633[2];
    int32_t ** volatile g_645;
    VECTOR(int32_t, 16) g_656;
    volatile uint64_t g_671;
    VECTOR(int64_t, 8) g_720;
    uint64_t *g_746;
    volatile VECTOR(uint64_t, 16) g_766;
    VECTOR(uint64_t, 2) g_767;
    int32_t ** volatile g_782;
    int32_t ** volatile g_786;
    VECTOR(uint64_t, 2) g_793;
    VECTOR(uint8_t, 8) g_802;
    volatile VECTOR(uint8_t, 16) g_803;
    VECTOR(uint8_t, 16) g_804;
    uint64_t g_811;
    VECTOR(uint64_t, 2) g_815;
    int32_t * volatile g_816;
    int32_t * volatile g_817;
    int32_t * volatile g_820[10][2];
    volatile int64_t *g_926[1][8];
    volatile int64_t * volatile * volatile g_925;
    VECTOR(int8_t, 8) g_960;
    int32_t ** volatile g_966;
    VECTOR(uint64_t, 8) g_973;
    int64_t *g_975[8][2][8];
    int64_t **g_974;
    int32_t ** volatile g_1016[9][9][3];
    int32_t ** volatile g_1017;
    volatile VECTOR(uint64_t, 4) g_1018;
    VECTOR(int32_t, 16) g_1019;
    VECTOR(uint32_t, 2) g_1026;
    VECTOR(int8_t, 16) g_1109;
    VECTOR(int8_t, 8) g_1110;
    VECTOR(int8_t, 8) g_1112;
    int32_t *g_1117[1];
    VECTOR(int8_t, 2) g_1144;
    volatile VECTOR(int16_t, 4) g_1183;
    volatile int32_t g_1208;
    VECTOR(int32_t, 8) g_1223;
    VECTOR(int64_t, 2) g_1230;
    VECTOR(int32_t, 8) g_1234;
    int32_t * volatile g_1255;
    volatile int64_t g_1264;
    VECTOR(uint8_t, 4) g_1270;
    VECTOR(uint8_t, 4) g_1271;
    int16_t **g_1284;
    int16_t ***g_1283;
    int32_t **g_1293;
    int32_t *** volatile g_1292[8][3];
    int32_t *** volatile g_1294;
    VECTOR(uint32_t, 8) g_1306;
    int32_t * volatile g_1344;
    volatile VECTOR(int16_t, 4) g_1373;
    volatile VECTOR(int16_t, 8) g_1378;
    VECTOR(uint16_t, 8) g_1401;
    volatile VECTOR(uint32_t, 2) g_1446;
    volatile VECTOR(int16_t, 8) g_1478;
    uint16_t g_1530;
    volatile VECTOR(int16_t, 2) g_1543;
    VECTOR(int16_t, 4) g_1544;
    volatile VECTOR(int64_t, 2) g_1604;
    VECTOR(uint32_t, 8) g_1611;
    VECTOR(int32_t, 4) g_1612;
    VECTOR(uint8_t, 16) g_1615;
    int32_t ** volatile g_1673;
    int32_t * volatile g_1701;
    volatile VECTOR(int16_t, 16) g_1710;
    int64_t g_1725;
    VECTOR(uint64_t, 2) g_1758;
    VECTOR(int16_t, 8) g_1768;
    VECTOR(uint64_t, 16) g_1838;
    int32_t * volatile g_1846;
    int32_t * volatile g_1848;
    volatile int32_t * volatile *g_1854;
    volatile int32_t * volatile **g_1853;
    volatile VECTOR(uint8_t, 2) g_1887;
    int32_t * volatile g_1888;
    uint16_t g_1984;
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
uint32_t  func_1(struct S0 * p_1986);
int32_t * func_7(int32_t * p_8, struct S0 * p_1986);
int64_t  func_19(int32_t * p_20, int32_t * p_21, struct S0 * p_1986);
int32_t * func_23(uint64_t  p_24, int32_t * p_25, int32_t * p_26, struct S0 * p_1986);
int32_t * func_27(uint32_t  p_28, uint32_t  p_29, uint32_t  p_30, uint32_t  p_31, int64_t  p_32, struct S0 * p_1986);
uint8_t  func_62(uint16_t  p_63, int32_t  p_64, uint32_t * p_65, struct S0 * p_1986);
int16_t  func_70(int32_t * p_71, int16_t  p_72, int64_t  p_73, uint32_t  p_74, int32_t  p_75, struct S0 * p_1986);
uint16_t * func_103(int64_t  p_104, struct S0 * p_1986);
uint16_t  func_128(uint32_t  p_129, uint32_t * p_130, uint32_t  p_131, int64_t  p_132, uint32_t  p_133, struct S0 * p_1986);
uint32_t * func_138(uint64_t * p_139, struct S0 * p_1986);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1986->g_4 p_1986->g_746 p_1986->g_123 p_1986->g_221 p_1986->g_79 p_1986->g_316 p_1986->g_1293 p_1986->g_377 p_1986->g_1887 p_1986->g_428 p_1986->g_1984
 * writes: p_1986->g_4 p_1986->g_123 p_1986->g_187 p_1986->g_746 p_1986->g_84
 */
uint32_t  func_1(struct S0 * p_1986)
{ /* block id: 4 */
    int32_t l_1855 = 0x59E57AD9L;
    VECTOR(int32_t, 8) l_1856 = (VECTOR(int32_t, 8))(0x222E974AL, (VECTOR(int32_t, 4))(0x222E974AL, (VECTOR(int32_t, 2))(0x222E974AL, 0x274952F3L), 0x274952F3L), 0x274952F3L, 0x222E974AL, 0x274952F3L);
    uint8_t l_1865 = 0x6DL;
    VECTOR(int32_t, 4) l_1866 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1C91930EL), 0x1C91930EL);
    uint64_t *l_1867 = (void*)0;
    VECTOR(uint16_t, 16) l_1890 = (VECTOR(uint16_t, 16))(0x47F2L, (VECTOR(uint16_t, 4))(0x47F2L, (VECTOR(uint16_t, 2))(0x47F2L, 65534UL), 65534UL), 65534UL, 0x47F2L, 65534UL, (VECTOR(uint16_t, 2))(0x47F2L, 65534UL), (VECTOR(uint16_t, 2))(0x47F2L, 65534UL), 0x47F2L, 65534UL, 0x47F2L, 65534UL);
    uint16_t l_1982[5][1];
    int64_t l_1985 = 0x3AE82E7F0242437FL;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1982[i][j] = 65534UL;
    }
    for (p_1986->g_4 = (-10); (p_1986->g_4 == 4); p_1986->g_4++)
    { /* block id: 7 */
        int32_t *l_9[10][7][3] = {{{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4}},{{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4}},{{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4}},{{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4}},{{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4}},{{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4}},{{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4}},{{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4}},{{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4}},{{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4}}};
        int32_t **l_1852 = &p_1986->g_377;
        int64_t l_1857 = (-1L);
        uint64_t l_1858 = 1UL;
        int i, j, k;
        (1 + 1);
    }
    if ((((safe_mod_func_int32_t_s_s(((((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(0xBC79A46BB218AD38L, 0x3970C0F3ADCFEC76L)).lo, ((*p_1986->g_746) &= (l_1865 >= l_1855)))) & ((VECTOR(int32_t, 8))(l_1866.xxwzwyzz)).s5) > (((l_1856.s2 , l_1867) == &p_1986->g_321[0][0][0]) > (safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_1856.s1 > l_1866.y), (safe_mod_func_uint64_t_u_u((!GROUP_DIVERGE(2, 1)), (safe_rshift_func_uint16_t_u_u((!((l_1856.s3 >= l_1866.z) | 65533UL)), (*p_1986->g_221))))))), l_1855)), l_1866.w)), 0x59B76FC491750551L)))) , 0L), 4L)) ^ 0x77F595C9828A5DA0L) || l_1866.w))
    { /* block id: 751 */
        return p_1986->g_316.y;
    }
    else
    { /* block id: 753 */
        uint64_t **l_1880 = &p_1986->g_746;
        uint64_t **l_1881 = (void*)0;
        uint64_t **l_1882[4] = {&l_1867,&l_1867,&l_1867,&l_1867};
        int32_t l_1883 = 0x6DA73889L;
        int64_t *l_1884 = (void*)0;
        int64_t *l_1885 = &p_1986->g_84[2];
        int32_t l_1886 = 0L;
        int32_t *l_1889[6];
        int64_t l_1983 = 1L;
        int i;
        for (i = 0; i < 6; i++)
            l_1889[i] = &p_1986->g_4;
        l_1890.s3 = (~((((GROUP_DIVERGE(0, 1) >= (p_1986->g_187 = ((*p_1986->g_1293) != (void*)0))) , ((*l_1885) = (l_1883 |= (((*l_1880) = &p_1986->g_123[0][2][4]) != (l_1867 = &p_1986->g_321[1][2][0]))))) ^ l_1886) < (((VECTOR(uint8_t, 2))(p_1986->g_1887.xy)).even ^ GROUP_DIVERGE(2, 1))));
        if ((atomic_inc(&p_1986->g_atomic_input[63 * get_linear_group_id() + 12]) == 3))
        { /* block id: 761 */
            VECTOR(int32_t, 16) l_1891 = (VECTOR(int32_t, 16))(0x700C75B8L, (VECTOR(int32_t, 4))(0x700C75B8L, (VECTOR(int32_t, 2))(0x700C75B8L, 0x7B3B6DF6L), 0x7B3B6DF6L), 0x7B3B6DF6L, 0x700C75B8L, 0x7B3B6DF6L, (VECTOR(int32_t, 2))(0x700C75B8L, 0x7B3B6DF6L), (VECTOR(int32_t, 2))(0x700C75B8L, 0x7B3B6DF6L), 0x700C75B8L, 0x7B3B6DF6L, 0x700C75B8L, 0x7B3B6DF6L);
            uint8_t l_1971[10] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL};
            uint8_t l_1974 = 0xB5L;
            int32_t l_1975 = 0x1426F250L;
            uint8_t l_1976 = 0x87L;
            int i;
            for (l_1891.s4 = 0; (l_1891.s4 < 18); l_1891.s4 = safe_add_func_int16_t_s_s(l_1891.s4, 2))
            { /* block id: 764 */
                int32_t l_1894 = 0x0DD0D489L;
                int8_t l_1919 = 0x30L;
                uint64_t l_1920 = 0x93D43457D5AD653CL;
                uint32_t l_1921[1][4][2] = {{{0x82D308AEL,0x82D308AEL},{0x82D308AEL,0x82D308AEL},{0x82D308AEL,0x82D308AEL},{0x82D308AEL,0x82D308AEL}}};
                int i, j, k;
                for (l_1894 = 0; (l_1894 >= (-25)); l_1894 = safe_sub_func_int16_t_s_s(l_1894, 4))
                { /* block id: 767 */
                    uint32_t l_1897 = 3UL;
                    VECTOR(int32_t, 16) l_1900 = (VECTOR(int32_t, 16))(0x1A6D6C57L, (VECTOR(int32_t, 4))(0x1A6D6C57L, (VECTOR(int32_t, 2))(0x1A6D6C57L, 0x3F785D6CL), 0x3F785D6CL), 0x3F785D6CL, 0x1A6D6C57L, 0x3F785D6CL, (VECTOR(int32_t, 2))(0x1A6D6C57L, 0x3F785D6CL), (VECTOR(int32_t, 2))(0x1A6D6C57L, 0x3F785D6CL), 0x1A6D6C57L, 0x3F785D6CL, 0x1A6D6C57L, 0x3F785D6CL);
                    int16_t l_1901 = 0x79BFL;
                    int i;
                    ++l_1897;
                    if ((l_1901 = ((VECTOR(int32_t, 8))(l_1900.sf981355d)).s2))
                    { /* block id: 770 */
                        int32_t l_1903 = 0x63E797ADL;
                        int32_t *l_1902 = &l_1903;
                        int32_t *l_1904 = &l_1903;
                        int32_t *l_1905 = (void*)0;
                        int32_t *l_1906 = &l_1903;
                        int32_t *l_1907 = &l_1903;
                        uint8_t l_1908 = 0UL;
                        int32_t *l_1909[10][7] = {{&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903},{&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903},{&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903},{&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903},{&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903},{&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903},{&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903},{&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903},{&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903},{&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903,&l_1903}};
                        int32_t *l_1910 = &l_1903;
                        int i, j;
                        l_1907 = (l_1906 = (l_1905 = (l_1904 = l_1902)));
                        l_1910 = ((l_1908 = 0xA4L) , l_1909[7][2]);
                        l_1900.sd = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-5L), (-1L))))).odd;
                        l_1900.sc |= 0x3DE39F74L;
                    }
                    else
                    { /* block id: 779 */
                        int64_t l_1911[1];
                        uint32_t l_1912[7][10][3] = {{{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL}},{{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL}},{{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL}},{{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL}},{{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL}},{{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL}},{{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL},{0x2ED0B757L,0xFF4F2967L,1UL}}};
                        int32_t *l_1915 = (void*)0;
                        int32_t l_1917[8][8] = {{(-1L),(-7L),0x7ED55587L,0x2E722093L,(-7L),0x3A17D067L,0x1CB2EE1CL,0x7ED55587L},{(-1L),(-7L),0x7ED55587L,0x2E722093L,(-7L),0x3A17D067L,0x1CB2EE1CL,0x7ED55587L},{(-1L),(-7L),0x7ED55587L,0x2E722093L,(-7L),0x3A17D067L,0x1CB2EE1CL,0x7ED55587L},{(-1L),(-7L),0x7ED55587L,0x2E722093L,(-7L),0x3A17D067L,0x1CB2EE1CL,0x7ED55587L},{(-1L),(-7L),0x7ED55587L,0x2E722093L,(-7L),0x3A17D067L,0x1CB2EE1CL,0x7ED55587L},{(-1L),(-7L),0x7ED55587L,0x2E722093L,(-7L),0x3A17D067L,0x1CB2EE1CL,0x7ED55587L},{(-1L),(-7L),0x7ED55587L,0x2E722093L,(-7L),0x3A17D067L,0x1CB2EE1CL,0x7ED55587L},{(-1L),(-7L),0x7ED55587L,0x2E722093L,(-7L),0x3A17D067L,0x1CB2EE1CL,0x7ED55587L}};
                        int32_t *l_1916[4][4] = {{&l_1917[7][6],&l_1917[7][6],&l_1917[7][6],&l_1917[7][6]},{&l_1917[7][6],&l_1917[7][6],&l_1917[7][6],&l_1917[7][6]},{&l_1917[7][6],&l_1917[7][6],&l_1917[7][6],&l_1917[7][6]},{&l_1917[7][6],&l_1917[7][6],&l_1917[7][6],&l_1917[7][6]}};
                        int32_t *l_1918 = &l_1917[7][6];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_1911[i] = (-1L);
                        l_1900.sb |= l_1911[0];
                        l_1912[3][5][2]--;
                        l_1916[2][0] = l_1915;
                        l_1918 = (void*)0;
                    }
                }
                l_1921[0][2][1] |= ((l_1919 = 248UL) , l_1920);
                for (l_1894 = 6; (l_1894 != (-22)); --l_1894)
                { /* block id: 790 */
                    uint16_t l_1924 = 4UL;
                    int64_t l_1925 = 0x09C4FFD0F064999BL;
                    l_1925 = l_1924;
                }
                for (l_1919 = 0; (l_1919 != 8); l_1919 = safe_add_func_uint16_t_u_u(l_1919, 3))
                { /* block id: 795 */
                    int32_t l_1928 = (-1L);
                    uint16_t l_1934 = 1UL;
                    int32_t *l_1935 = &l_1928;
                    int32_t *l_1936 = &l_1928;
                    int32_t *l_1937 = &l_1928;
                    int32_t *l_1938[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_1939 = &l_1928;
                    int8_t l_1940[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1940[i] = 0x44L;
                    for (l_1928 = 0; (l_1928 >= 16); l_1928 = safe_add_func_int64_t_s_s(l_1928, 4))
                    { /* block id: 798 */
                        uint16_t l_1931 = 0xE425L;
                        l_1894 = 0x73F1ECA2L;
                        l_1931++;
                    }
                    l_1939 = (l_1938[3] = (l_1937 = ((l_1934 ^= (l_1921[0][2][1] ^= 1UL)) , (l_1936 = ((l_1921[0][2][1] = FAKE_DIVERGE(p_1986->local_1_offset, get_local_id(1), 10)) , l_1935)))));
                    if (l_1940[2])
                    { /* block id: 809 */
                        VECTOR(int32_t, 8) l_1941 = (VECTOR(int32_t, 8))(0x5DC6D73AL, (VECTOR(int32_t, 4))(0x5DC6D73AL, (VECTOR(int32_t, 2))(0x5DC6D73AL, 0L), 0L), 0L, 0x5DC6D73AL, 0L);
                        VECTOR(int32_t, 16) l_1942 = (VECTOR(int32_t, 16))(0x01CBC849L, (VECTOR(int32_t, 4))(0x01CBC849L, (VECTOR(int32_t, 2))(0x01CBC849L, 0L), 0L), 0L, 0x01CBC849L, 0L, (VECTOR(int32_t, 2))(0x01CBC849L, 0L), (VECTOR(int32_t, 2))(0x01CBC849L, 0L), 0x01CBC849L, 0L, 0x01CBC849L, 0L);
                        VECTOR(int32_t, 8) l_1943 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                        VECTOR(int16_t, 8) l_1944 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0854L), 0x0854L), 0x0854L, (-1L), 0x0854L);
                        VECTOR(uint16_t, 4) l_1945 = (VECTOR(uint16_t, 4))(0x9881L, (VECTOR(uint16_t, 2))(0x9881L, 0x1956L), 0x1956L);
                        VECTOR(int32_t, 2) l_1946 = (VECTOR(int32_t, 2))((-10L), 0x6D89A753L);
                        VECTOR(int32_t, 8) l_1947 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x03B90B52L), 0x03B90B52L), 0x03B90B52L, 0L, 0x03B90B52L);
                        VECTOR(int32_t, 4) l_1948 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
                        VECTOR(int32_t, 4) l_1949 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 8L), 8L);
                        uint8_t l_1950[2];
                        int32_t l_1951 = (-3L);
                        int8_t l_1952 = (-1L);
                        int64_t l_1953 = 0L;
                        uint16_t l_1954 = 0xF612L;
                        VECTOR(int32_t, 2) l_1955 = (VECTOR(int32_t, 2))(1L, (-6L));
                        int32_t l_1956 = 0L;
                        uint32_t l_1957 = 1UL;
                        int64_t l_1958 = 0x20F8F325711A9680L;
                        int8_t l_1959 = 0x61L;
                        uint8_t l_1960 = 250UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1950[i] = 0UL;
                        l_1942.sd = ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_1941.s27553155)).lo, ((VECTOR(int32_t, 8))(l_1942.sfa017c95)).lo, ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(0x795B3893L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1943.s1766575256246624)).s9c)), 0x78AA32F2L, 0x6F3D6048L)).x, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_1944.s47)), ((VECTOR(uint16_t, 16))(l_1945.xwyyywzzywzyyxzw)).s6a))), ((VECTOR(int32_t, 4))(0x29E6D616L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(l_1946.xxxx))))).wwzywyxxxwwzwzzy, ((VECTOR(int32_t, 16))(l_1947.s3771242115223256)), ((VECTOR(int32_t, 4))(l_1948.ywwy)).zzzwwxxxxwyzzywy))).s8329, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1949.yy)).yxyy))))).hi)), 0x7AA8C2C0L)).lo))), 0L, (-1L), 0x6EF34DD4L, (-1L), 4L, (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0x3B6114672487D748L, 0x178CD30398AC174BL)).xxxyxyxx)).s6 , (l_1950[0] , (l_1951 , l_1952))), ((VECTOR(int32_t, 2))(4L, 0x072C40EAL)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((l_1953 , 0x2A1069F5L), ((VECTOR(int32_t, 4))(l_1954, (-4L), 0x7A6F6E39L, 1L)), (-1L), ((VECTOR(int32_t, 2))(l_1955.xy)), l_1956, 0x137C7680L, 0x4BA7C8BBL, 0x56D6AB55L, (-4L), (-1L), 0x149B903AL, 0x6BFB3F18L)).s4a)).xyxxxxyx, ((VECTOR(int32_t, 16))(1L, ((l_1957 , l_1958) , l_1959), (-9L), 0x10AB4F1EL, 0x690F11B2L, l_1960, 0x40B985C4L, 0x423372F7L, ((VECTOR(int32_t, 8))(0L)))).odd))).odd)))), ((VECTOR(int32_t, 16))((-1L))), ((VECTOR(int32_t, 16))(0x04CBFAB0L))))).s5a58))).z;
                    }
                    else
                    { /* block id: 811 */
                        uint32_t l_1961 = 1UL;
                        int32_t l_1963 = 0x7B1AFB42L;
                        int32_t *l_1962 = &l_1963;
                        int32_t l_1964 = 0L;
                        int32_t l_1965 = 0x37B54A59L;
                        int32_t l_1966[7][9][3] = {{{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L}},{{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L}},{{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L}},{{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L}},{{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L}},{{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L}},{{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L},{0x14C8FF1DL,(-1L),1L}}};
                        VECTOR(int8_t, 4) l_1967 = (VECTOR(int8_t, 4))(0x76L, (VECTOR(int8_t, 2))(0x76L, 0x34L), 0x34L);
                        uint32_t l_1968 = 4294967286UL;
                        int i, j, k;
                        (*l_1935) ^= (l_1961 , 0x4E9B0027L);
                        l_1935 = l_1962;
                        l_1965 = l_1964;
                        --l_1968;
                    }
                }
            }
            l_1971[9]++;
            l_1976 = (l_1975 = l_1974);
            unsigned int result = 0;
            result += l_1891.sf;
            result += l_1891.se;
            result += l_1891.sd;
            result += l_1891.sc;
            result += l_1891.sb;
            result += l_1891.sa;
            result += l_1891.s9;
            result += l_1891.s8;
            result += l_1891.s7;
            result += l_1891.s6;
            result += l_1891.s5;
            result += l_1891.s4;
            result += l_1891.s3;
            result += l_1891.s2;
            result += l_1891.s1;
            result += l_1891.s0;
            int l_1971_i0;
            for (l_1971_i0 = 0; l_1971_i0 < 10; l_1971_i0++) {
                result += l_1971[l_1971_i0];
            }
            result += l_1974;
            result += l_1975;
            result += l_1976;
            atomic_add(&p_1986->g_special_values[63 * get_linear_group_id() + 12], result);
        }
        else
        { /* block id: 822 */
            (1 + 1);
        }
        for (l_1883 = 14; (l_1883 <= 27); l_1883++)
        { /* block id: 827 */
            int32_t l_1981 = 0x1025D35FL;
            for (l_1865 = 0; (l_1865 != 28); ++l_1865)
            { /* block id: 830 */
                if (l_1866.z)
                    break;
                return p_1986->g_428.z;
            }
            l_1981 = (-7L);
            l_1983 = l_1982[2][0];
        }
        atomic_sub(&p_1986->l_atomic_reduction[0], (p_1986->g_1984 | ((void*)0 != &p_1986->g_926[0][7])));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1986->v_collective += p_1986->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    return l_1985;
}


/* ------------------------------------------ */
/* 
 * reads : p_1986->g_4 p_1986->g_34 p_1986->g_43 p_1986->g_45 p_1986->g_308 p_1986->g_155 p_1986->g_316 p_1986->g_123 p_1986->g_321 p_1986->g_331 p_1986->g_332 p_1986->g_333 p_1986->g_262 p_1986->g_337 p_1986->g_346 p_1986->g_273 p_1986->g_187 p_1986->g_361 p_1986->g_365 p_1986->g_376 p_1986->g_44 p_1986->g_390 p_1986->g_393 p_1986->g_421 p_1986->g_428 p_1986->g_391 p_1986->g_392 p_1986->g_222 p_1986->g_377 p_1986->g_435 p_1986->g_84 p_1986->g_503 p_1986->g_508 p_1986->g_270 p_1986->g_60 p_1986->g_576 p_1986->g_136 p_1986->g_252 p_1986->g_606 p_1986->g_comm_values p_1986->g_645 p_1986->g_656 p_1986->g_569 p_1986->g_671 p_1986->g_540 p_1986->g_720 p_1986->g_167 p_1986->g_633 p_1986->g_223 p_1986->g_2 p_1986->g_766 p_1986->g_767 p_1986->g_746 p_1986->g_79 p_1986->g_782 p_1986->g_786 p_1986->g_535 p_1986->g_925 p_1986->g_966 p_1986->g_974 p_1986->g_811 p_1986->g_221 p_1986->g_815 p_1986->l_comm_values p_1986->g_1017 p_1986->g_160 p_1986->g_1144 p_1986->g_1112 p_1986->g_1019 p_1986->g_1294 p_1986->g_1026 p_1986->g_1446 p_1986->g_1306 p_1986->g_1530 p_1986->g_323 p_1986->g_1604 p_1986->g_1611 p_1986->g_1612 p_1986->g_1615 p_1986->g_1264 p_1986->g_1673 p_1986->g_1378 p_1986->g_1270 p_1986->g_1710 p_1986->g_1725 p_1986->g_1543 p_1986->g_1758 p_1986->g_1768 p_1986->g_1478 p_1986->g_1109 p_1986->g_1544 p_1986->g_1283 p_1986->g_1284 p_1986->g_1838 p_1986->g_973
 * writes: p_1986->g_34 p_1986->g_45 p_1986->g_308 p_1986->g_155 p_1986->g_60 p_1986->g_123 p_1986->g_321 p_1986->g_323 p_1986->g_335 p_1986->g_316 p_1986->g_187 p_1986->g_262 p_1986->g_377 p_1986->g_44 p_1986->g_390 p_1986->g_84 p_1986->g_270 p_1986->g_633 p_1986->g_569 p_1986->g_746 p_1986->g_337 p_1986->g_535 p_1986->g_221 p_1986->g_811 p_1986->g_365 p_1986->g_43 p_1986->g_167 p_1986->g_1112 p_1986->g_1019 p_1986->g_1293 p_1986->g_1026 p_1986->g_503 p_1986->g_1306 p_1986->g_540 p_1986->g_508 p_1986->g_79 p_1986->g_1283 p_1986->g_1725 p_1986->g_1530 p_1986->g_1284
 */
int32_t * func_7(int32_t * p_8, struct S0 * p_1986)
{ /* block id: 8 */
    int64_t l_14[3];
    int32_t *l_22 = &p_1986->g_4;
    uint32_t *l_33 = &p_1986->g_34;
    uint16_t l_46 = 65529UL;
    uint16_t *l_1400 = (void*)0;
    uint16_t *l_1402 = (void*)0;
    uint16_t *l_1403 = (void*)0;
    uint16_t *l_1404 = (void*)0;
    uint16_t *l_1405[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1406 = 0x14AC7A15L;
    VECTOR(int32_t, 8) l_1408 = (VECTOR(int32_t, 8))(0x5ACE7681L, (VECTOR(int32_t, 4))(0x5ACE7681L, (VECTOR(int32_t, 2))(0x5ACE7681L, 0x4F1CEA47L), 0x4F1CEA47L), 0x4F1CEA47L, 0x5ACE7681L, 0x4F1CEA47L);
    int32_t **l_1410 = &p_1986->g_1117[0];
    int32_t ***l_1409 = &l_1410;
    VECTOR(int32_t, 16) l_1412 = (VECTOR(int32_t, 16))(0x36B32591L, (VECTOR(int32_t, 4))(0x36B32591L, (VECTOR(int32_t, 2))(0x36B32591L, (-1L)), (-1L)), (-1L), 0x36B32591L, (-1L), (VECTOR(int32_t, 2))(0x36B32591L, (-1L)), (VECTOR(int32_t, 2))(0x36B32591L, (-1L)), 0x36B32591L, (-1L), 0x36B32591L, (-1L));
    VECTOR(int32_t, 2) l_1413 = (VECTOR(int32_t, 2))(0x21F3AE1CL, 0L);
    int8_t l_1432 = (-3L);
    int32_t l_1438[3][2][2] = {{{0x1B44F4C6L,0x1B44F4C6L},{0x1B44F4C6L,0x1B44F4C6L}},{{0x1B44F4C6L,0x1B44F4C6L},{0x1B44F4C6L,0x1B44F4C6L}},{{0x1B44F4C6L,0x1B44F4C6L},{0x1B44F4C6L,0x1B44F4C6L}}};
    VECTOR(uint32_t, 4) l_1444 = (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 4294967293UL), 4294967293UL);
    VECTOR(uint8_t, 2) l_1451 = (VECTOR(uint8_t, 2))(251UL, 0x65L);
    uint32_t **l_1593 = &p_1986->g_43;
    uint32_t ***l_1592 = &l_1593;
    int32_t l_1633 = (-2L);
    uint16_t l_1670 = 0x3C47L;
    VECTOR(int64_t, 2) l_1683 = (VECTOR(int64_t, 2))(0x44C497E164805EABL, 7L);
    int32_t ***l_1684 = &p_1986->g_1293;
    uint16_t l_1705 = 0x3ECFL;
    VECTOR(int8_t, 8) l_1730 = (VECTOR(int8_t, 8))(0x40L, (VECTOR(int8_t, 4))(0x40L, (VECTOR(int8_t, 2))(0x40L, 0L), 0L), 0L, 0x40L, 0L);
    VECTOR(int32_t, 2) l_1770 = (VECTOR(int32_t, 2))(1L, 2L);
    VECTOR(int32_t, 4) l_1772 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0BC14FBBL), 0x0BC14FBBL);
    int16_t *l_1834[10] = {(void*)0,&p_1986->g_262,&p_1986->g_187,&p_1986->g_262,(void*)0,(void*)0,&p_1986->g_262,&p_1986->g_187,&p_1986->g_262,(void*)0};
    int16_t **l_1833[5][1] = {{&l_1834[5]},{&l_1834[5]},{&l_1834[5]},{&l_1834[5]},{&l_1834[5]}};
    VECTOR(uint64_t, 16) l_1837 = (VECTOR(uint64_t, 16))(0x363E19584B6E33A9L, (VECTOR(uint64_t, 4))(0x363E19584B6E33A9L, (VECTOR(uint64_t, 2))(0x363E19584B6E33A9L, 0xE9AA4C3FBD0B9469L), 0xE9AA4C3FBD0B9469L), 0xE9AA4C3FBD0B9469L, 0x363E19584B6E33A9L, 0xE9AA4C3FBD0B9469L, (VECTOR(uint64_t, 2))(0x363E19584B6E33A9L, 0xE9AA4C3FBD0B9469L), (VECTOR(uint64_t, 2))(0x363E19584B6E33A9L, 0xE9AA4C3FBD0B9469L), 0x363E19584B6E33A9L, 0xE9AA4C3FBD0B9469L, 0x363E19584B6E33A9L, 0xE9AA4C3FBD0B9469L);
    VECTOR(uint32_t, 16) l_1839 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967289UL), 4294967289UL), 4294967289UL, 4294967295UL, 4294967289UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967289UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967289UL), 4294967295UL, 4294967289UL, 4294967295UL, 4294967289UL);
    VECTOR(uint32_t, 8) l_1840 = (VECTOR(uint32_t, 8))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 1UL), 1UL), 1UL, 4294967293UL, 1UL);
    VECTOR(uint32_t, 2) l_1841 = (VECTOR(uint32_t, 2))(0x3B813E71L, 0xE901F015L);
    VECTOR(uint32_t, 16) l_1842 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x7E835B10L), 0x7E835B10L), 0x7E835B10L, 1UL, 0x7E835B10L, (VECTOR(uint32_t, 2))(1UL, 0x7E835B10L), (VECTOR(uint32_t, 2))(1UL, 0x7E835B10L), 1UL, 0x7E835B10L, 1UL, 0x7E835B10L);
    uint64_t *l_1843 = &p_1986->g_569;
    int32_t *l_1847 = (void*)0;
    int32_t *l_1849 = (void*)0;
    int32_t *l_1850 = &l_1633;
    int32_t *l_1851 = &l_1633;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_14[i] = 0L;
    if ((safe_div_func_uint64_t_u_u(0UL, (safe_div_func_uint16_t_u_u(l_14[1], (l_1406 &= (((safe_mod_func_int32_t_s_s((~0x2F3F6085L), l_14[1])) , ((safe_div_func_int64_t_s_s(l_14[1], func_19(l_22, (p_8 = func_23((*l_22), p_8, func_27((++(*l_33)), ((safe_sub_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((p_1986->g_43 == &p_1986->g_44), 0x723D37F4A1D2DAFFL)) & (*l_22)), (*l_22))) > (*l_22)), (*l_22))) <= (*l_22)), p_1986->g_45, p_1986->g_4, l_46, p_1986), p_1986)), p_1986))) | 0x1A65L)) < 5UL)))))))
    { /* block id: 582 */
        return p_8;
    }
    else
    { /* block id: 584 */
        uint64_t l_1407 = 0x6DA9BE9618C2A929L;
        int32_t ***l_1411 = &l_1410;
        VECTOR(int32_t, 16) l_1414 = (VECTOR(int32_t, 16))(0x44C39F14L, (VECTOR(int32_t, 4))(0x44C39F14L, (VECTOR(int32_t, 2))(0x44C39F14L, 0x2A5A7522L), 0x2A5A7522L), 0x2A5A7522L, 0x44C39F14L, 0x2A5A7522L, (VECTOR(int32_t, 2))(0x44C39F14L, 0x2A5A7522L), (VECTOR(int32_t, 2))(0x44C39F14L, 0x2A5A7522L), 0x44C39F14L, 0x2A5A7522L, 0x44C39F14L, 0x2A5A7522L);
        uint32_t *l_1417[2][3];
        int64_t *l_1420 = (void*)0;
        int64_t *l_1421 = (void*)0;
        int64_t *l_1422 = &p_1986->g_84[2];
        int64_t *l_1423[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_1433 = &l_1406;
        int32_t l_1439[10][5][5] = {{{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL}},{{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL}},{{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL}},{{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL}},{{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL}},{{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL}},{{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL}},{{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL}},{{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL}},{{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL},{(-10L),0x2C6D6F7CL,(-9L),0x6232AE5DL,0x63D5650DL}}};
        VECTOR(uint32_t, 16) l_1445 = (VECTOR(uint32_t, 16))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 1UL), 1UL), 1UL, 3UL, 1UL, (VECTOR(uint32_t, 2))(3UL, 1UL), (VECTOR(uint32_t, 2))(3UL, 1UL), 3UL, 1UL, 3UL, 1UL);
        uint64_t *l_1457[10][8][2] = {{{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569}},{{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569}},{{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569}},{{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569}},{{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569}},{{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569}},{{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569}},{{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569}},{{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569}},{{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569},{&p_1986->g_569,&p_1986->g_569}}};
        uint64_t **l_1456 = &l_1457[9][5][1];
        uint32_t *l_1458 = &p_1986->g_503;
        uint32_t **l_1566 = &p_1986->g_43;
        uint32_t ***l_1565[5];
        uint8_t l_1585[6][5][7] = {{{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL}},{{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL}},{{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL}},{{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL}},{{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL}},{{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL}}};
        uint16_t **l_1599 = (void*)0;
        VECTOR(int64_t, 16) l_1603 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x606E2602BA3ADED1L), 0x606E2602BA3ADED1L), 0x606E2602BA3ADED1L, 1L, 0x606E2602BA3ADED1L, (VECTOR(int64_t, 2))(1L, 0x606E2602BA3ADED1L), (VECTOR(int64_t, 2))(1L, 0x606E2602BA3ADED1L), 1L, 0x606E2602BA3ADED1L, 1L, 0x606E2602BA3ADED1L);
        VECTOR(int16_t, 4) l_1676 = (VECTOR(int16_t, 4))(0x6FC2L, (VECTOR(int16_t, 2))(0x6FC2L, 0x4D13L), 0x4D13L);
        VECTOR(int16_t, 8) l_1720 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
        VECTOR(int8_t, 16) l_1721 = (VECTOR(int8_t, 16))(0x59L, (VECTOR(int8_t, 4))(0x59L, (VECTOR(int8_t, 2))(0x59L, 5L), 5L), 5L, 0x59L, 5L, (VECTOR(int8_t, 2))(0x59L, 5L), (VECTOR(int8_t, 2))(0x59L, 5L), 0x59L, 5L, 0x59L, 5L);
        int8_t l_1782 = 0x04L;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_1417[i][j] = &p_1986->g_155;
        }
        for (i = 0; i < 5; i++)
            l_1565[i] = &l_1566;
        (*l_1433) |= ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(0x582A45BAL, l_1407, ((VECTOR(int32_t, 8))(0x5509EC88L, (*l_22), 0L, (*l_22), (-9L), ((VECTOR(int32_t, 2))(1L, (-1L))), (-1L))), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(l_1408.s13421775)).odd, (int32_t)(l_1409 == l_1411)))), 0x528F3CB7L, 0x14B74BE4L)).sedaf, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x27775E62L, 0x443CA08EL)).xyxxxxyxyyyyyyyx)).even, ((VECTOR(int32_t, 2))(0x0C882AC9L, 0x3572D927L)).yxxyxxyx, ((VECTOR(int32_t, 8))(l_1412.s7ad41b01))))))).s41)).xyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1413.xxyx)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x1DD020E3L, (-5L))).yyxyyyyxxxyyyyyx)).s0887, ((VECTOR(int32_t, 8))(l_1414.sa3142695)).hi))).yxzywwwz)), (-8L), (-4L), 0x2A685335L, (-10L))).sa929, ((VECTOR(int32_t, 4))(9L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(0L, (-1L))), (int32_t)((safe_add_func_int32_t_s_s((!((l_1414.s2 = ((*l_1422) = ((p_1986->g_365.s5++) | l_1407))) == (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((*p_1986->g_746) > ((((VECTOR(uint64_t, 16))(0x62CB7F0E37848E82L, 0xD9E7E05D104B680FL, 0x1CEC1C2820EFC8F0L, (safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1407, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((*l_22), 5L, 0x5F0CB303L, (*l_22), l_1432, ((VECTOR(int32_t, 2))(6L)), (*l_22), (-3L), 0x61AAD06DL, ((VECTOR(int32_t, 2))(1L)), 0L, 7L, 1L, (-5L))))).s4b08)), 1L, 0x20D3980CL, 0L, ((VECTOR(int32_t, 2))(0L)), 0x2DF521D0L, 3L, ((VECTOR(int32_t, 4))((-1L))))).odd)).s3, l_1407)) , l_1407), l_1407)), 0x1C443E9F5302F72EL, 1UL, ((VECTOR(uint64_t, 4))(0x12111AEC5D59F5CBL)), 0x9953AAF02DF3E2B6L, l_1407, l_1407, (*l_22), 1UL, 1UL)).s8 , FAKE_DIVERGE(p_1986->global_0_offset, get_global_id(0), 10)) ^ (*l_22))) , l_1407), 3)), 4)))), 1UL)) > 1UL), (int32_t)(*l_22)))), ((VECTOR(int32_t, 2))(0x1FE2DB7EL)), ((VECTOR(int32_t, 2))(0x45288643L))))))), (-2L)))))).hi)).yxyy))), (int32_t)(*l_22)))).x;
        if (((((safe_div_func_uint32_t_u_u((((0x535DL || (safe_lshift_func_uint8_t_u_s(l_1438[2][1][0], (((*l_22) & l_1439[1][0][3]) <= ((safe_sub_func_int32_t_s_s((((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 8))(l_1444.xyzzzxxw)).s43, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 16))((*l_22), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_1445.s229326b2)))), p_1986->g_365.s4, ((VECTOR(uint32_t, 4))(p_1986->g_1446.yxyy)), 4294967293UL, 4294967287UL)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((*l_1458) = (((((VECTOR(uint64_t, 16))(GROUP_DIVERGE(2, 1), (((safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(0x34L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_1451.yyyyyxyx)).s57)), (safe_lshift_func_uint8_t_u_u((*l_1433), 4)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(1UL, 0UL)).yyyx)))))).s6, (safe_sub_func_uint8_t_u_u((&p_1986->g_569 != ((*l_1456) = l_1422)), (*l_22))))), (*l_1433))) >= 1UL) , (*l_22)), ((VECTOR(uint64_t, 4))(18446744073709551615UL)), 0x3B17CA5A45E80C5BL, 0xD78AC9F86C587ACDL, (*l_1433), 0x878320415DD5A5CBL, 0UL, 18446744073709551615UL, 0x8802599C32D2E50FL, FAKE_DIVERGE(p_1986->group_1_offset, get_group_id(1), 10), 1UL, 0xDC053D4B50110E43L)).s4 , p_8) == l_1433) || (*l_1433))), ((VECTOR(uint32_t, 2))(0xF1E17594L)), 0UL)).zzyzzxxwxzywzyxx)).s9b3c)).zxyyxwyxxzyzyyyx))).lo, ((VECTOR(uint32_t, 8))(0x6D9A7086L))))).odd, ((VECTOR(uint32_t, 4))(0x28FF71F6L))))), ((VECTOR(uint32_t, 4))(7UL))))).wxzwzzyw, ((VECTOR(uint32_t, 8))(0xE408463DL)), ((VECTOR(uint32_t, 8))(4294967294UL))))))).s5043161324574754)).s55))))).hi, (*p_1986->g_746))) ^ p_1986->g_720.s6) == 0xDF4DD33D795FCA1BL), (*l_22))) | (*p_1986->g_746)))))) < p_1986->g_656.sf) <= (*l_22)), (*l_22))) < (*l_22)) , (*l_22)) <= 0xA2751484L))
        { /* block id: 591 */
            uint8_t l_1479 = 1UL;
            VECTOR(uint64_t, 2) l_1539 = (VECTOR(uint64_t, 2))(0x39361AC28EAA6A30L, 2UL);
            uint8_t l_1545 = 0xACL;
            uint8_t *l_1560 = &l_1479;
            int8_t *l_1561 = (void*)0;
            int8_t *l_1562 = &l_1432;
            VECTOR(int32_t, 2) l_1569 = (VECTOR(int32_t, 2))((-1L), (-1L));
            uint8_t *l_1582 = &p_1986->g_535;
            int32_t *l_1586 = (void*)0;
            int32_t *l_1587 = (void*)0;
            int32_t *l_1588 = &l_1439[1][0][3];
            int32_t *l_1589 = (void*)0;
            int32_t *l_1590 = (void*)0;
            int32_t *l_1591 = &l_1438[1][0][1];
            VECTOR(int8_t, 4) l_1616 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-10L)), (-10L));
            int64_t l_1617 = 0x165E04CA7EF0BC6BL;
            uint64_t l_1618 = 0xEB953B54C9B1C6AFL;
            int i;
            for (p_1986->g_535 = 27; (p_1986->g_535 != 22); p_1986->g_535--)
            { /* block id: 594 */
                int32_t l_1467 = 4L;
                VECTOR(uint32_t, 2) l_1528 = (VECTOR(uint32_t, 2))(0x165D641AL, 0UL);
                int32_t l_1529 = 1L;
                VECTOR(uint64_t, 16) l_1540 = (VECTOR(uint64_t, 16))(0xC9A30C71F5A9F649L, (VECTOR(uint64_t, 4))(0xC9A30C71F5A9F649L, (VECTOR(uint64_t, 2))(0xC9A30C71F5A9F649L, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 0xC9A30C71F5A9F649L, 18446744073709551608UL, (VECTOR(uint64_t, 2))(0xC9A30C71F5A9F649L, 18446744073709551608UL), (VECTOR(uint64_t, 2))(0xC9A30C71F5A9F649L, 18446744073709551608UL), 0xC9A30C71F5A9F649L, 18446744073709551608UL, 0xC9A30C71F5A9F649L, 18446744073709551608UL);
                int32_t *l_1548 = (void*)0;
                int i;
                for (p_1986->g_155 = (-13); (p_1986->g_155 > 46); p_1986->g_155 = safe_add_func_uint8_t_u_u(p_1986->g_155, 8))
                { /* block id: 597 */
                    int16_t l_1489 = (-1L);
                    uint32_t l_1506 = 1UL;
                    int32_t l_1534 = (-5L);
                    l_1467 = (safe_sub_func_uint32_t_u_u((--p_1986->g_1306.s2), p_1986->g_365.s5));
                    if ((atomic_inc(&p_1986->g_atomic_input[63 * get_linear_group_id() + 4]) == 8))
                    { /* block id: 601 */
                        int32_t l_1469 = (-8L);
                        int32_t *l_1468[7][9] = {{&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469},{&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469},{&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469},{&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469},{&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469},{&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469},{&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469,&l_1469}};
                        int i, j;
                        l_1468[5][6] = (void*)0;
                        unsigned int result = 0;
                        result += l_1469;
                        atomic_add(&p_1986->g_special_values[63 * get_linear_group_id() + 4], result);
                    }
                    else
                    { /* block id: 603 */
                        (1 + 1);
                    }
                    for (p_1986->g_569 = (-8); (p_1986->g_569 <= 4); p_1986->g_569++)
                    { /* block id: 608 */
                        int32_t l_1472 = 0x1846F19FL;
                        int16_t *l_1480 = &p_1986->g_262;
                        VECTOR(uint16_t, 8) l_1498 = (VECTOR(uint16_t, 8))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0xA16FL), 0xA16FL), 0xA16FL, 65532UL, 0xA16FL);
                        VECTOR(uint16_t, 8) l_1499 = (VECTOR(uint16_t, 8))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 65529UL), 65529UL), 65529UL, 65532UL, 65529UL);
                        uint8_t *l_1507 = (void*)0;
                        uint8_t *l_1508[1];
                        uint64_t l_1511 = 0xA1B3104FB2103D2FL;
                        int32_t *l_1512 = &l_1439[1][0][3];
                        int32_t *l_1513 = (void*)0;
                        int32_t *l_1514 = (void*)0;
                        int32_t *l_1515 = (void*)0;
                        int32_t *l_1516 = (void*)0;
                        int32_t *l_1517 = (void*)0;
                        int32_t *l_1518[7][5][3] = {{{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0}},{{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0}},{{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0}},{{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0}},{{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0}},{{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0}},{{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0},{(void*)0,&l_1438[2][1][0],(void*)0}}};
                        int32_t l_1519 = 0x71845E10L;
                        int8_t *l_1531 = (void*)0;
                        int8_t *l_1532 = (void*)0;
                        int8_t *l_1533[9];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_1508[i] = (void*)0;
                        for (i = 0; i < 9; i++)
                            l_1533[i] = (void*)0;
                        l_1472 |= (*l_1433);
                        l_1534 = (safe_unary_minus_func_int64_t_s(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 8))(p_1986->g_1478.s21544741)).s7, ((*l_1480) = l_1479))) || (p_1986->g_540.y = (((safe_mod_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_1489, (+((safe_sub_func_int8_t_s_s(((FAKE_DIVERGE(p_1986->global_1_offset, get_global_id(1), 10) , &p_1986->g_43) != &p_1986->g_43), (safe_lshift_func_uint16_t_u_s((~((safe_lshift_func_uint16_t_u_s((l_1529 = ((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xDDL, 255UL)), (((VECTOR(uint16_t, 16))(0x8F8AL, (p_1986->g_1401.s3++), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(l_1498.s33)).xyxxyxxyyyyyyxxy, ((VECTOR(uint16_t, 16))(l_1499.s3663147032073444))))).s01)), ((VECTOR(uint16_t, 2))(65535UL, 6UL)), ((safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((*l_1422) = (safe_sub_func_uint8_t_u_u(((*l_1433) = l_1506), (safe_mod_func_int32_t_s_s((l_1519 |= ((*l_1512) = l_1511)), (safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), 0xC6F7F512727EE5BAL))))))), ((((*l_1480) = (safe_mul_func_int16_t_s_s((***p_1986->g_393), (safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((((*l_22) <= l_1528.x) > 0x9BCF9F7EL), l_1528.y)), (*p_1986->g_746)))))) | l_1506) >= l_1506))), l_1479)) && 0x51L), FAKE_DIVERGE(p_1986->global_1_offset, get_global_id(1), 10), ((VECTOR(uint16_t, 8))(0x4361L)))).s3 || (*l_1433)), 0x59L, 0UL, 0xBCL, 0x87L, 0UL)).s4 , (*l_22)) , (*l_22))), 10)) , l_1506)), p_1986->g_815.y)))) & l_1479)))), 0)), 14)) < 1UL) , p_1986->g_332.s7) & l_1528.y), (*l_22))) , (*l_22)) == p_1986->g_1530))), (*l_22))) >= l_1506)));
                        (*l_1512) ^= (safe_mod_func_int64_t_s_s(((*l_1422) ^= (((safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), 5)) , (((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_1539.yx)), 0xB96BBC4424074E52L, 0xEA66B4680436C072L)).odd)))).hi, 0UL, 9UL, 6UL)).xywzzyxxyxwzyyww, ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 2))(1UL, 0xE02D4C0EEE2BF80CL)).xxxy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 2))(l_1540.s49)).yyyy))), ((l_1539.y , (((p_1986->g_123[0][3][0] , 0L) && (((*l_1433) != (safe_sub_func_uint16_t_u_u(((l_1411 == (void*)0) != ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(p_1986->g_1543.xxxxyxxxyyyyxxyx)).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(p_1986->g_1544.wx)).yxyyxxyx, (int16_t)(((-2L) <= (((((&l_1529 == &l_1529) == 0x277EL) || 1L) >= 0L) >= (*l_22))) , 1L)))).s4551443557731047)).even, ((VECTOR(int16_t, 8))(0x785EL))))).s7), l_1545))) == l_1534)) | 0x9C258D69L)) == p_1986->g_1270.z), 0x750C674EBF4A0A24L, 0xFF5B13720CF4B213L, 0x8C853983D346B165L)).s6146020134035466, ((VECTOR(uint64_t, 16))(1UL))))).s9d))), 0x9966C045D6001D40L, 0x882D6F69680EB308L))))).yxyyyxwzzxyzzwxy))).se6)).xyyx, ((VECTOR(uint64_t, 4))(0x12DE9B1CDFA15BD4L))))).z > 2L)) > 255UL)), l_1506));
                        (*l_1433) = (safe_div_func_uint8_t_u_u(0x94L, (-5L)));
                    }
                    l_1548 = p_8;
                }
                if ((*l_22))
                    continue;
            }
            (*l_1433) = ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((safe_mul_func_uint8_t_u_u(((*l_22) > (safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 8))((safe_rshift_func_int16_t_s_u((((*l_1562) &= (safe_unary_minus_func_int16_t_s((safe_sub_func_uint8_t_u_u(((*l_1560) |= 247UL), (l_1539.x & 0x8AL)))))) ^ ((*l_1433) <= (l_1565[0] != ((safe_sub_func_int64_t_s_s((~((l_1569.y = p_1986->g_323) >= (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(l_1539.x, (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((--(*l_1582)), (((*l_1591) = ((*l_1588) ^= l_1585[5][3][0])) , (*l_1433)))), 1L)))), 3L)) ^ GROUP_DIVERGE(1, 1)), 0)), p_1986->g_321[0][0][0])))), 18446744073709551615UL)) , l_1592)))), (*l_22))), (*l_22), ((VECTOR(int64_t, 4))((-1L))), 1L, 0x50E67D5A71FEDA91L)).hi, ((VECTOR(int64_t, 4))(0x1482FFE36E21788BL))))), ((VECTOR(int64_t, 2))((-3L))), 4L, 0L)).s4 > 0x28696C3FCBAF0457L), (*l_22))), (-4L)))), (*l_22))), ((VECTOR(int32_t, 4))(0x33AE9D63L)), ((VECTOR(int32_t, 2))(0L)), 0L)).odd)).xwxwywyywyzwxzzz)).sed87)).wxxwyyzywwwyzwxy, ((VECTOR(int32_t, 16))(0x6651048EL))))).sc;
            (*l_1433) |= 0x40C0FE72L;
            (*l_1591) = ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((((safe_mod_func_int16_t_s_s((0x42C94D1BL == (safe_unary_minus_func_uint64_t_u((((*p_1986->g_746) ^ ((VECTOR(int64_t, 2))(0x5DD3B49A0D612313L, 0x084C222553CC8C89L)).odd) < (safe_mul_func_uint16_t_u_u((l_1599 != &p_1986->g_221), (safe_unary_minus_func_int32_t_s((*l_1433))))))))), (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 4))(l_1603.sf1a3)).hi, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(p_1986->g_1604.xyyx)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((*l_1560) = (((safe_sub_func_int32_t_s_s(0x468F7D87L, ((*l_1588) = (((VECTOR(uint32_t, 4))(p_1986->g_1611.s3041)).w & ((VECTOR(uint32_t, 4))((~((((VECTOR(int32_t, 4))(p_1986->g_1612.zyzy)).y || (safe_mul_func_int16_t_s_s(0x6A19L, (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(p_1986->g_1615.s92ffccc7d09c09d3)))).s7 & 0x52L)))) == ((VECTOR(int8_t, 4))(l_1616.zxww)).x)), 0x2BF72B94L, 0x639E9F3FL, 4294967286UL)).x)))) > 0xD64AL) , 252UL)), 7)) >= (-5L)), 9)), (*l_1433), 0x696BF1F657BDA31FL, 0x43C5A46606F2B357L)).ywwwzxyz)).s23)).xxxx))).lo, ((VECTOR(int64_t, 2))(0x20010A9FFF35EF1BL)))))))))).odd, (*l_22))))) , l_1617) || l_1618), 0x0AF45691L, ((VECTOR(int32_t, 4))(0x28616021L)), ((VECTOR(int32_t, 2))((-1L))), (*l_1433), (-5L), 0x04BE517CL, (-1L), 0x43EE8B3DL, (*l_1433), 0x42650908L, 0x69C289E4L)).scb63)).even)).xxxy, ((VECTOR(int32_t, 4))((-3L))), ((VECTOR(int32_t, 4))((-7L)))))).w;
        }
        else
        { /* block id: 639 */
            int32_t l_1625 = 1L;
            int32_t l_1630 = 1L;
            VECTOR(int16_t, 4) l_1634 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L);
            int32_t *l_1635 = (void*)0;
            int16_t ***l_1661 = &p_1986->g_1284;
            int32_t l_1669 = 0x6AB6468DL;
            VECTOR(int8_t, 2) l_1685 = (VECTOR(int8_t, 2))(1L, 0x1EL);
            int i;
            l_1439[9][2][4] ^= (safe_add_func_int64_t_s_s((*l_1433), (safe_div_func_uint16_t_u_u((((((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 16))(65535UL, 65530UL, 0xE0CDL, ((*l_22) == ((*l_1422) = 0x2BCEDC95D7350C92L)), (((*l_22) || ((*l_22) < ((((((safe_mod_func_int64_t_s_s((l_1625 = (*l_1433)), (safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((!(l_1630 &= (*l_22))), 14)), ((*l_22) && (((safe_add_func_int16_t_s_s((-2L), 1L)) <= (*l_1433)) | l_1633)))))) && l_1630) && p_1986->g_1264) , (*l_22)) != (*l_1433)) <= 1UL))) ^ l_1634.w), ((VECTOR(uint16_t, 8))(65535UL)), ((VECTOR(uint16_t, 2))(0x2043L)), 0x6FEDL)).hi, ((VECTOR(uint16_t, 8))(0x0EF9L)), ((VECTOR(uint16_t, 8))(0xA3FBL))))).s4 ^ (*l_1433)) <= FAKE_DIVERGE(p_1986->global_2_offset, get_global_id(2), 10)) > l_1634.y), (*l_1433)))));
            for (p_1986->g_508 = 2; (p_1986->g_508 < 19); p_1986->g_508 = safe_add_func_uint64_t_u_u(p_1986->g_508, 1))
            { /* block id: 646 */
                int64_t l_1652 = (-1L);
                int16_t ***l_1666[8] = {&p_1986->g_1284,&p_1986->g_1284,&p_1986->g_1284,&p_1986->g_1284,&p_1986->g_1284,&p_1986->g_1284,&p_1986->g_1284,&p_1986->g_1284};
                VECTOR(int32_t, 2) l_1672 = (VECTOR(int32_t, 2))(1L, 0x5CC98710L);
                uint32_t l_1700 = 1UL;
                int i;
                for (p_1986->g_79 = 0; (p_1986->g_79 > 9); p_1986->g_79++)
                { /* block id: 649 */
                    uint8_t l_1667 = 0UL;
                    int32_t *l_1668[4][3] = {{&l_1630,(void*)0,(void*)0},{&l_1630,(void*)0,(void*)0},{&l_1630,(void*)0,(void*)0},{&l_1630,(void*)0,(void*)0}};
                    int8_t *l_1671[2][3][2] = {{{&l_1432,&l_1432},{&l_1432,&l_1432},{&l_1432,&l_1432}},{{&l_1432,&l_1432},{&l_1432,&l_1432},{&l_1432,&l_1432}}};
                    int i, j, k;
                    l_1413.y |= (safe_rshift_func_int16_t_s_u(((l_1672.x = (safe_sub_func_int64_t_s_s(((safe_add_func_uint32_t_u_u(((((safe_mod_func_int8_t_s_s((((0L > ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(l_1652, (l_1669 &= (safe_mod_func_int16_t_s_s(((&p_1986->g_155 != (void*)0) && (safe_mul_func_uint16_t_u_u(0x8076L, 65531UL))), ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((*l_1433), (((l_1661 != ((safe_mod_func_uint32_t_u_u((p_1986->g_365.s6 &= ((((safe_div_func_int32_t_s_s((*l_22), l_1630)) , 0x5C46C456L) ^ (*l_1433)) > 8UL)), FAKE_DIVERGE(p_1986->local_2_offset, get_local_id(2), 10))) , l_1666[7])) < (*l_1433)) & 7L))), 8)) , l_1667)))))), 2)) , GROUP_DIVERGE(2, 1))) < l_1670) > p_1986->g_767.y), (*l_1433))) | 0x4D26L) >= 2L) > (*p_1986->g_746)), 0x6C648FA7L)) | (*l_1433)), 0x177C3A10A59F21D1L))) && (*l_1433)), 6));
                }
                (*p_1986->g_1673) = p_8;
                l_1412.s7 = ((*l_1433) = ((*l_22) <= (safe_rshift_func_int8_t_s_s((((((VECTOR(int16_t, 2))(l_1676.wy)).odd > ((safe_sub_func_int8_t_s_s((((((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0x698E7DC7126EE1E5L)).lo, ((VECTOR(int64_t, 16))(l_1683.xyxxxxxyxyyyyyxx)).se)) || ((void*)0 != l_1684)) & 0x6674718DL) < (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_1685.xyxy)))).xxwxywxz)).even)).z <= ((safe_mul_func_int16_t_s_s(((l_1439[0][4][2] |= ((safe_rshift_func_int8_t_s_u(p_1986->g_1378.s3, (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), 5)) != ((((*l_1433) < ((&p_1986->g_974 != (void*)0) != (safe_add_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))((p_1986->g_767.y | (*l_22)), p_1986->g_1270.w, ((VECTOR(uint32_t, 4))(0xEF1608FDL)), 0xA1BCF8F0L, 0x971E5D81L)))).s7 , &p_1986->g_390[1]) != (void*)0) >= l_1700), GROUP_DIVERGE(0, 1))), 18446744073709551611UL)))) | 1L) < p_1986->g_60.s4)), 0x2DL)))) || (-4L))) < l_1634.z), l_1672.y)) , 0x88L))) & 0x15D18DBA1CFD55CBL), l_1700)) == l_1672.x)) && (*l_1433)) , (-1L)), 6))));
            }
            return p_8;
        }
        for (p_1986->g_34 = (-19); (p_1986->g_34 >= 43); p_1986->g_34++)
        { /* block id: 664 */
            int32_t *l_1704[1];
            int16_t ***l_1715 = &p_1986->g_1284;
            int32_t l_1740[5][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
            int64_t **l_1741[10] = {&l_1421,&l_1421,&l_1421,&l_1421,&l_1421,&l_1421,&l_1421,&l_1421,&l_1421,&l_1421};
            VECTOR(uint32_t, 4) l_1773 = (VECTOR(uint32_t, 4))(0x19F64811L, (VECTOR(uint32_t, 2))(0x19F64811L, 0xDBE045CAL), 0xDBE045CAL);
            uint32_t ***l_1776 = (void*)0;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1704[i] = (void*)0;
            l_1705 ^= ((*l_1433) = (l_1439[1][0][3] &= (*l_1433)));
            if ((*l_1433))
                continue;
            for (p_1986->g_508 = 0; (p_1986->g_508 > (-1)); p_1986->g_508 = safe_sub_func_uint64_t_u_u(p_1986->g_508, 1))
            { /* block id: 671 */
                int16_t ****l_1716 = (void*)0;
                int16_t ****l_1717 = (void*)0;
                int16_t ****l_1718 = (void*)0;
                int16_t ****l_1719 = &p_1986->g_1283;
                int64_t *l_1724 = &p_1986->g_1725;
                int32_t l_1735 = (-1L);
                int8_t *l_1736 = (void*)0;
                int8_t *l_1737 = (void*)0;
                int8_t *l_1738 = (void*)0;
                int8_t *l_1739 = &l_1432;
                VECTOR(int32_t, 16) l_1771 = (VECTOR(int32_t, 16))(0x024D3291L, (VECTOR(int32_t, 4))(0x024D3291L, (VECTOR(int32_t, 2))(0x024D3291L, 0x2CB9EFB9L), 0x2CB9EFB9L), 0x2CB9EFB9L, 0x024D3291L, 0x2CB9EFB9L, (VECTOR(int32_t, 2))(0x024D3291L, 0x2CB9EFB9L), (VECTOR(int32_t, 2))(0x024D3291L, 0x2CB9EFB9L), 0x024D3291L, 0x2CB9EFB9L, 0x024D3291L, 0x2CB9EFB9L);
                VECTOR(uint32_t, 8) l_1775 = (VECTOR(uint32_t, 8))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x90C53CFAL), 0x90C53CFAL), 0x90C53CFAL, 4294967289UL, 0x90C53CFAL);
                int i;
                p_1986->g_1019.sf ^= ((*l_1433) = (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(p_1986->g_1710.sb56f06d2)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((((p_1986->g_270.s0 = (safe_rshift_func_uint8_t_u_s((((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))((safe_mod_func_uint16_t_u_u((l_1715 == ((*l_1719) = (void*)0)), ((VECTOR(int16_t, 8))(l_1720.s35742255)).s0)), 0x49L, 1L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_1721.sdacf2e8679ca63ea)))).sf4)), 0L, (-4L))), 0L)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((((*l_22) != (((safe_rshift_func_uint8_t_u_s(((~((*l_1724) ^= (*l_22))) , (*l_1433)), 6)) && (safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(3L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_1730.s46232305)).s62)).hi)), (((safe_mul_func_int8_t_s_s(p_1986->g_222.s6, (safe_mod_func_uint8_t_u_u((((*l_1739) = l_1735) == (0x31BD7AB5L != l_1740[4][0])), 8UL)))) , l_1741[6]) == (void*)0)))) == l_1735)) >= (-1L)), p_1986->g_1543.x, 0x62L, (-5L))).wxyxzwwy))))).s14, ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(0x49L))))), 0x17L, (-7L))), ((VECTOR(int8_t, 4))(1L))))).xwywwyxy, ((VECTOR(int8_t, 8))(0L))))).s04)).yyxyxyxy))).s6 <= 0UL), 4))) >= (*l_1433)) == GROUP_DIVERGE(0, 1)), 0x3868L, 0x5356L, 0x6A8BL, (*p_1986->g_391), ((VECTOR(int16_t, 2))(0x2A4BL)), 0x4EA9L)).s63)).xyyyxyxx)))))).s4244450367224360)).s5cd3)).z, (*l_1433))));
                for (l_46 = 20; (l_46 < 31); ++l_46)
                { /* block id: 680 */
                    int32_t l_1767[4];
                    VECTOR(uint16_t, 16) l_1769 = (VECTOR(uint16_t, 16))(0x3A6DL, (VECTOR(uint16_t, 4))(0x3A6DL, (VECTOR(uint16_t, 2))(0x3A6DL, 0xEF56L), 0xEF56L), 0xEF56L, 0x3A6DL, 0xEF56L, (VECTOR(uint16_t, 2))(0x3A6DL, 0xEF56L), (VECTOR(uint16_t, 2))(0x3A6DL, 0xEF56L), 0x3A6DL, 0xEF56L, 0x3A6DL, 0xEF56L);
                    VECTOR(uint32_t, 4) l_1774 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xC62CACBAL), 0xC62CACBAL);
                    uint8_t *l_1777 = (void*)0;
                    uint8_t *l_1778 = (void*)0;
                    uint8_t *l_1779 = (void*)0;
                    uint8_t *l_1780 = &p_1986->g_535;
                    uint8_t *l_1781 = &l_1585[5][2][5];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1767[i] = 0L;
                    l_1782 |= (safe_lshift_func_uint8_t_u_s(((*l_1781) |= ((safe_rshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((*l_1433), (safe_div_func_uint64_t_u_u(((p_1986->g_1530 ^= (safe_div_func_uint8_t_u_u(((*l_1780) = (safe_sub_func_uint32_t_u_u((*l_1433), ((FAKE_DIVERGE(p_1986->global_0_offset, get_global_id(0), 10) ^ (((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 2))(0xFB7398F360A51F49L, 4UL))))).yxyy, ((VECTOR(uint64_t, 16))(p_1986->g_1758.yyyyxxyyyyxyxyxx)).s9638))).y && ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((l_1735 = (safe_lshift_func_int16_t_s_s(((*l_1433) && (*l_22)), (safe_lshift_func_uint16_t_u_u(l_1767[0], 3))))) && ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_1986->g_1768.s33401674)).s35)).xyyxyyxx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_1769.sc63a)))).yxwxwwxw))).s16)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1770.yyxx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-5L), 0x4B826965L)), 0x367A40B2L, 0L)), ((VECTOR(int32_t, 8))(9L, 0x04F8971CL, (-2L), 0x7E7DC54FL, (((l_1767[0] = (*l_1433)) == ((VECTOR(int32_t, 8))(l_1771.s6115e277)).s0) > 0x0CAFA1B3L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1772.zxxy)).even)))), 0L)))))).s64))))).xyyy, ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 2))(l_1773.yy)).yxyxxyyxyxyyxyyy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(4294967288UL, 4294967288UL)), ((VECTOR(uint32_t, 4))(l_1774.zwzx)).even))).yyxxyxyy)).s55, ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 8))(9UL, ((VECTOR(uint32_t, 2))(l_1775.s42)), ((void*)0 == l_1776), 0x711C50A3L, 0x2BE69A20L, 4UL, 4294967286UL)).lo, ((VECTOR(uint32_t, 4))(0UL))))).even))).xxxyyxyx, (uint32_t)p_1986->g_1478.s5))).s70, ((VECTOR(uint32_t, 2))(0UL))))), 4294967289UL, 0x43F2AFECL)).ywwzyzwxxyxyzzwx))).s4bb1))).xyzzyxzxxyzywwzw, ((VECTOR(uint32_t, 16))(0UL)), ((VECTOR(uint32_t, 16))(0x8CF07552L))))).even, (uint32_t)p_1986->g_1109.s0))).s6510341435144152)).s9b6c, (uint32_t)0x786B6D5EL))).x), l_1774.x)), 4)) <= (*l_1433)))) , (-9L))))), 0x16L))) , (*p_1986->g_746)), (*l_1433))))), GROUP_DIVERGE(2, 1))), 5)) || 0x5EBD6603C2843082L)), 7));
                    return p_8;
                }
                return p_8;
            }
        }
    }
    for (p_1986->g_811 = 0; (p_1986->g_811 >= 9); p_1986->g_811 = safe_add_func_uint64_t_u_u(p_1986->g_811, 1))
    { /* block id: 695 */
        if ((atomic_inc(&p_1986->g_atomic_input[63 * get_linear_group_id() + 55]) == 9))
        { /* block id: 697 */
            int32_t l_1785 = 0x69322B49L;
            for (l_1785 = 0; (l_1785 > 3); l_1785 = safe_add_func_uint8_t_u_u(l_1785, 1))
            { /* block id: 700 */
                int64_t l_1788 = 0x704ADD4AD97181E8L;
                if (l_1788)
                { /* block id: 701 */
                    int16_t l_1789 = (-5L);
                    int32_t l_1790 = 0x0D6ABEC4L;
                    l_1790 &= l_1789;
                }
                else
                { /* block id: 703 */
                    uint16_t l_1791 = 1UL;
                    int64_t l_1801 = 7L;
                    uint32_t l_1802 = 4294967295UL;
                    l_1791++;
                    for (l_1791 = 6; (l_1791 == 54); ++l_1791)
                    { /* block id: 707 */
                        uint64_t l_1796 = 0xB940C4F5603AE218L;
                        int32_t l_1798 = 0x40B434C1L;
                        int32_t *l_1797 = &l_1798;
                        int32_t *l_1799 = (void*)0;
                        int32_t *l_1800 = &l_1798;
                        l_1800 = (l_1799 = (l_1796 , l_1797));
                    }
                    if ((l_1802 &= l_1801))
                    { /* block id: 712 */
                        uint32_t l_1803 = 0x73827E58L;
                        VECTOR(int16_t, 16) l_1804 = (VECTOR(int16_t, 16))(0x5A2DL, (VECTOR(int16_t, 4))(0x5A2DL, (VECTOR(int16_t, 2))(0x5A2DL, 0x4B3EL), 0x4B3EL), 0x4B3EL, 0x5A2DL, 0x4B3EL, (VECTOR(int16_t, 2))(0x5A2DL, 0x4B3EL), (VECTOR(int16_t, 2))(0x5A2DL, 0x4B3EL), 0x5A2DL, 0x4B3EL, 0x5A2DL, 0x4B3EL);
                        uint32_t l_1805 = 0xBFEFBA02L;
                        int32_t l_1806 = 0x7186654FL;
                        uint8_t l_1807 = 0x8AL;
                        int i;
                        l_1804.s8 = l_1803;
                        l_1805 = (GROUP_DIVERGE(0, 1) , 0x39F6266BL);
                        l_1807 = l_1806;
                    }
                    else
                    { /* block id: 716 */
                        int32_t l_1809 = (-2L);
                        int32_t *l_1808 = &l_1809;
                        int16_t l_1810 = 0x16A4L;
                        int32_t l_1811 = (-1L);
                        uint8_t l_1812[10];
                        uint32_t l_1813 = 4294967295UL;
                        uint32_t l_1816 = 0x341934EEL;
                        int8_t l_1817 = 0x13L;
                        uint64_t l_1818[10][10] = {{0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL},{0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL},{0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL},{0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL},{0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL},{0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL},{0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL},{0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL},{0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL},{0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL,0x84332618EF08220CL}};
                        int16_t l_1819 = (-1L);
                        VECTOR(int32_t, 8) l_1820 = (VECTOR(int32_t, 8))(0x68422DE4L, (VECTOR(int32_t, 4))(0x68422DE4L, (VECTOR(int32_t, 2))(0x68422DE4L, 0x53926571L), 0x53926571L), 0x53926571L, 0x68422DE4L, 0x53926571L);
                        int16_t l_1821 = 0x5C98L;
                        int8_t l_1822 = 0x2BL;
                        uint32_t l_1823 = 4294967293UL;
                        int i, j;
                        for (i = 0; i < 10; i++)
                            l_1812[i] = 1UL;
                        l_1808 = (void*)0;
                        l_1818[3][8] &= (((l_1810 , (((VECTOR(uint32_t, 2))(0x51320A32L, 4294967286UL)).odd , ((l_1812[0] = l_1811) , 0UL))) , (l_1816 |= (++l_1813))) , l_1817);
                        l_1821 ^= (l_1820.s1 |= l_1819);
                        l_1823++;
                    }
                    for (l_1801 = 21; (l_1801 >= (-8)); --l_1801)
                    { /* block id: 728 */
                        int32_t l_1829 = 0x43C8591BL;
                        int32_t *l_1828[7];
                        int32_t *l_1830 = &l_1829;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1828[i] = &l_1829;
                        l_1830 = l_1828[0];
                    }
                }
            }
            unsigned int result = 0;
            result += l_1785;
            atomic_add(&p_1986->g_special_values[63 * get_linear_group_id() + 55], result);
        }
        else
        { /* block id: 733 */
            (1 + 1);
        }
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1986->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 14)), permutations[(safe_mod_func_uint32_t_u_u(((***p_1986->g_393) & (p_1986->g_1544.w < GROUP_DIVERGE(2, 1))), 10))][(safe_mod_func_uint32_t_u_u(p_1986->tid, 14))]));
    (*l_1850) = (safe_lshift_func_int8_t_s_s(((((*p_1986->g_1283) = (*p_1986->g_1283)) != l_1833[1][0]) < (safe_mod_func_int32_t_s_s(((((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 2))(l_1837.s8c))))).yyyyxyxx, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(p_1986->g_1838.sfb)), 18446744073709551612UL, ((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_1839.sb384)).ywxyxyxz)).s4163750614271316, ((VECTOR(uint32_t, 16))(l_1840.s7671260611545245))))), ((VECTOR(uint32_t, 16))(l_1841.yyxyxyyyyxyyyxxy))))), ((VECTOR(uint32_t, 16))(l_1842.sd7c925351a78b4d5))))).s3833)), ((VECTOR(uint64_t, 16))((*l_22), (((--(*l_1843)) , (0x9530487DL >= (((*l_22) <= (+((p_1986->g_540.x || (p_1986->g_270.sf = p_1986->g_815.y)) != ((*l_22) , (p_1986->g_973.s3 != 0x7FL))))) , p_1986->g_79))) < (*l_22)), 0x3B37EDF9CAA3CDCAL, (*l_22), ((VECTOR(uint64_t, 8))(9UL)), 7UL, ((VECTOR(uint64_t, 2))(0x07B196CFE5D2413BL)), 18446744073709551615UL)).s5ce0, ((VECTOR(uint64_t, 4))(0xB62B8E885020AECDL))))), (*p_1986->g_746), 0x51C4EF52C64519A0L, 0xC034ED29AF26FA20L, ((VECTOR(uint64_t, 2))(0xC0206CBCD583E7F1L)), ((VECTOR(uint64_t, 2))(0x197AD4F45FB8CB64L)), 1UL, 18446744073709551610UL)), ((VECTOR(uint64_t, 16))(0x0F530378090DB501L))))).even))))).s7 <= (*l_22)) , (*l_22)), (*l_22)))), (*l_22)));
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1986->g_421 p_1986->g_746 p_1986->g_123 p_1986->g_925 p_1986->g_60 p_1986->g_720 p_1986->g_34 p_1986->g_966 p_1986->g_974 p_1986->g_391 p_1986->g_392 p_1986->g_811 p_1986->g_221 p_1986->g_337 p_1986->g_365 p_1986->g_155 p_1986->g_656 p_1986->g_766 p_1986->g_815 p_1986->l_comm_values p_1986->g_1017 p_1986->g_671 p_1986->g_187 p_1986->g_79 p_1986->g_160 p_1986->g_comm_values p_1986->g_1144 p_1986->g_1112 p_1986->g_316 p_1986->g_44 p_1986->g_84 p_1986->g_136 p_1986->g_1019 p_1986->g_1294 p_1986->g_1026 p_1986->g_393 p_1986->g_390
 * writes: p_1986->g_535 p_1986->g_123 p_1986->g_262 p_1986->g_60 p_1986->g_377 p_1986->g_221 p_1986->g_811 p_1986->g_365 p_1986->g_155 p_1986->g_84 p_1986->g_337 p_1986->g_34 p_1986->g_187 p_1986->g_43 p_1986->g_44 p_1986->g_167 p_1986->g_1112 p_1986->g_1019 p_1986->g_1293 p_1986->g_1026
 */
int64_t  func_19(int32_t * p_20, int32_t * p_21, struct S0 * p_1986)
{ /* block id: 578 */
    uint32_t l_1396 = 4294967295UL;
    int32_t *l_1397[6] = {&p_1986->g_4,(void*)0,&p_1986->g_4,&p_1986->g_4,(void*)0,&p_1986->g_4};
    int32_t **l_1398 = (void*)0;
    int32_t l_1399 = (-1L);
    int i;
    p_20 = func_23(l_1396, p_21, l_1397[1], p_1986);
    return l_1399;
}


/* ------------------------------------------ */
/* 
 * reads : p_1986->g_535 p_1986->g_421 p_1986->g_746 p_1986->g_123 p_1986->g_925 p_1986->g_60 p_1986->g_720 p_1986->g_34 p_1986->g_966 p_1986->g_974 p_1986->g_391 p_1986->g_392 p_1986->g_811 p_1986->g_221 p_1986->g_337 p_1986->g_365 p_1986->g_155 p_1986->g_656 p_1986->g_766 p_1986->g_815 p_1986->l_comm_values p_1986->g_1017 p_1986->g_671 p_1986->g_187 p_1986->g_1144 p_1986->g_1112 p_1986->g_79 p_1986->g_160 p_1986->g_comm_values p_1986->g_316 p_1986->g_44 p_1986->g_84 p_1986->g_136 p_1986->g_1019 p_1986->g_1294 p_1986->g_1026 p_1986->g_393 p_1986->g_390
 * writes: p_1986->g_535 p_1986->g_123 p_1986->g_262 p_1986->g_60 p_1986->g_377 p_1986->g_221 p_1986->g_811 p_1986->g_365 p_1986->g_155 p_1986->g_84 p_1986->g_337 p_1986->g_34 p_1986->g_187 p_1986->g_43 p_1986->g_44 p_1986->g_1112 p_1986->g_167 p_1986->g_1019 p_1986->g_1293 p_1986->g_1026
 */
int32_t * func_23(uint64_t  p_24, int32_t * p_25, int32_t * p_26, struct S0 * p_1986)
{ /* block id: 337 */
    uint16_t l_801[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    int64_t *l_812 = &p_1986->g_84[2];
    uint16_t l_833 = 0x6ABDL;
    int32_t l_929 = 0x3C1530B5L;
    int32_t l_1032 = (-1L);
    int32_t l_1034 = (-1L);
    int32_t l_1036 = 5L;
    int32_t l_1038 = 0L;
    int32_t l_1039[10] = {0x25CC76A7L,0x25CC76A7L,0x25CC76A7L,0x25CC76A7L,0x25CC76A7L,0x25CC76A7L,0x25CC76A7L,0x25CC76A7L,0x25CC76A7L,0x25CC76A7L};
    uint64_t l_1040 = 0x62F05FB7DE6668E7L;
    uint32_t **l_1067[4][10] = {{&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43},{&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43},{&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43},{&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43,&p_1986->g_43}};
    uint32_t ***l_1066 = &l_1067[1][8];
    uint32_t l_1093 = 0xD7C147F6L;
    VECTOR(int8_t, 2) l_1108 = (VECTOR(int8_t, 2))(0L, 0x39L);
    VECTOR(int64_t, 8) l_1228 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
    VECTOR(uint8_t, 8) l_1269 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xF2L), 0xF2L), 0xF2L, 1UL, 0xF2L);
    int64_t l_1291 = 0L;
    VECTOR(uint16_t, 16) l_1309 = (VECTOR(uint16_t, 16))(0x3E58L, (VECTOR(uint16_t, 4))(0x3E58L, (VECTOR(uint16_t, 2))(0x3E58L, 0x24A7L), 0x24A7L), 0x24A7L, 0x3E58L, 0x24A7L, (VECTOR(uint16_t, 2))(0x3E58L, 0x24A7L), (VECTOR(uint16_t, 2))(0x3E58L, 0x24A7L), 0x3E58L, 0x24A7L, 0x3E58L, 0x24A7L);
    VECTOR(int16_t, 8) l_1372 = (VECTOR(int16_t, 8))(0x2D62L, (VECTOR(int16_t, 4))(0x2D62L, (VECTOR(int16_t, 2))(0x2D62L, 0x1F0FL), 0x1F0FL), 0x1F0FL, 0x2D62L, 0x1F0FL);
    int8_t *l_1389 = (void*)0;
    int32_t *l_1395 = &l_1038;
    int i, j;
    for (p_1986->g_535 = 0; (p_1986->g_535 <= 46); ++p_1986->g_535)
    { /* block id: 340 */
        uint8_t l_794 = 0xE7L;
        int8_t *l_795 = (void*)0;
        int8_t *l_796 = (void*)0;
        int32_t l_797[7] = {0x4FE6BB9FL,(-1L),0x4FE6BB9FL,0x4FE6BB9FL,(-1L),0x4FE6BB9FL,0x4FE6BB9FL};
        int64_t *l_808 = &p_1986->g_84[2];
        int64_t **l_807 = &l_808;
        int32_t l_813 = 0x703A6EAEL;
        uint8_t **l_824 = &p_1986->g_309;
        int16_t *l_1059 = &p_1986->g_187;
        uint32_t *l_1084[6] = {&p_1986->g_44,&p_1986->g_44,&p_1986->g_44,&p_1986->g_44,&p_1986->g_44,&p_1986->g_44};
        int32_t **l_1091 = &p_1986->g_377;
        VECTOR(int64_t, 8) l_1120 = (VECTOR(int64_t, 8))(0x4B2A9003B9569BCDL, (VECTOR(int64_t, 4))(0x4B2A9003B9569BCDL, (VECTOR(int64_t, 2))(0x4B2A9003B9569BCDL, 0x20320C8C1FEFD2B8L), 0x20320C8C1FEFD2B8L), 0x20320C8C1FEFD2B8L, 0x4B2A9003B9569BCDL, 0x20320C8C1FEFD2B8L);
        uint32_t ***l_1163 = (void*)0;
        VECTOR(int32_t, 8) l_1165 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7DACD2EDL), 0x7DACD2EDL), 0x7DACD2EDL, 1L, 0x7DACD2EDL);
        VECTOR(uint16_t, 4) l_1219 = (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 1UL), 1UL);
        uint8_t l_1253 = 1UL;
        int32_t l_1342 = 0L;
        uint16_t l_1349[5][7] = {{0UL,0UL,0UL,0UL,3UL,65528UL,65528UL},{0UL,0UL,0UL,0UL,3UL,65528UL,65528UL},{0UL,0UL,0UL,0UL,3UL,65528UL,65528UL},{0UL,0UL,0UL,0UL,3UL,65528UL,65528UL},{0UL,0UL,0UL,0UL,3UL,65528UL,65528UL}};
        VECTOR(int32_t, 16) l_1358 = (VECTOR(int32_t, 16))(0x524A94C4L, (VECTOR(int32_t, 4))(0x524A94C4L, (VECTOR(int32_t, 2))(0x524A94C4L, 0x11D13888L), 0x11D13888L), 0x11D13888L, 0x524A94C4L, 0x11D13888L, (VECTOR(int32_t, 2))(0x524A94C4L, 0x11D13888L), (VECTOR(int32_t, 2))(0x524A94C4L, 0x11D13888L), 0x524A94C4L, 0x11D13888L, 0x524A94C4L, 0x11D13888L);
        VECTOR(int16_t, 4) l_1379 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-4L)), (-4L));
        int i, j;
        if (((((l_797[3] &= (((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(0x03165502A60CCD37L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0xF9A6DF249B8E5278L, 0xF5132E5EB19BB693L)).yyyyxyyxxxxxxxxx)).s73)), 18446744073709551607UL, 0x4A06E0CA7B302233L, 0x79B5E47AA7851625L, 0UL, 0xE481B5FAB3251C28L)).lo)).zxxzwzwy)).s62, ((VECTOR(uint64_t, 16))(p_1986->g_793.xyyxxyxxyxyxxyxx)).s5a))).odd , l_794)) ^ (safe_div_func_int32_t_s_s((((+((safe_unary_minus_func_uint8_t_u((l_801[5] , ((VECTOR(uint8_t, 8))(8UL, 0UL, ((VECTOR(uint8_t, 4))(p_1986->g_802.s7272)).x, 0xC9L, 0x8FL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_1986->g_803.s92fe1fee84c9515f)).s59)), 0x89L)).s1))) >= (FAKE_DIVERGE(p_1986->group_1_offset, get_group_id(1), 10) || l_794))) > (((GROUP_DIVERGE(0, 1) && ((((l_813 = (~((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(p_1986->g_804.s6d8c49e5)).hi, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(0xB0L, 8UL)), (uint8_t)(safe_lshift_func_uint8_t_u_u((p_1986->g_223.x == 0L), ((p_24 , ((*l_807) = &p_1986->g_84[2])) != (p_24 , (((safe_mul_func_uint16_t_u_u(p_1986->g_811, l_801[5])) <= l_794) , l_812)))))))).yxxy, ((VECTOR(uint8_t, 4))(255UL))))).w)) == l_801[5]) >= 246UL) , l_801[5])) > l_794) > 0UL)) < 0x7A96L), 0xBB665CF7L))) , p_1986->g_421.s7) >= (*p_1986->g_746)))
        { /* block id: 344 */
            int32_t *l_818 = (void*)0;
            int32_t *l_819 = (void*)0;
            int32_t *l_821 = &l_813;
            int64_t **l_923 = (void*)0;
            uint8_t *l_944 = &p_1986->g_535;
            VECTOR(uint32_t, 2) l_1005 = (VECTOR(uint32_t, 2))(0x467B52AFL, 1UL);
            int32_t l_1031[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            VECTOR(uint32_t, 2) l_1056 = (VECTOR(uint32_t, 2))(4294967295UL, 1UL);
            int i;
            (*l_821) = (safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 2))(p_1986->g_815.xy)).even));
            (*l_821) ^= (-1L);
            if ((((*p_1986->g_746)--) && (((VECTOR(int8_t, 16))(0x1AL, (p_24 > (((((*l_808) |= (0xB018L || ((l_824 = l_824) == (void*)0))) > (*p_1986->g_746)) | (*l_821)) , (safe_add_func_int64_t_s_s(p_24, 0x591B35E2A232BBC2L)))), (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_797[4], 0L, 0x19L, (-6L))).xxwyyzxzzwxywxzz)).s8, p_24)) && (-1L)), (-1L))), l_797[3])), 0L, l_794, 1L, l_833, p_24, p_1986->g_270.s3, (-5L), 0x4AL, (-5L), p_1986->g_392[1][0], 0x39L, 7L, 0x32L)).sa >= (-4L))))
            { /* block id: 350 */
                int64_t ***l_924 = &l_807;
                int32_t l_936 = 1L;
                int32_t l_945 = 0x136C11C5L;
                int32_t l_946[6][7][2] = {{{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)}},{{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)}},{{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)}},{{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)}},{{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)}},{{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)},{0x302C57ABL,(-5L)}}};
                VECTOR(int8_t, 4) l_961 = (VECTOR(int8_t, 4))(0x5AL, (VECTOR(int8_t, 2))(0x5AL, 0x32L), 0x32L);
                uint16_t *l_976 = &l_801[1];
                uint16_t **l_977[6] = {&l_976,&l_976,&l_976,&l_976,&l_976,&l_976};
                uint64_t *l_978 = (void*)0;
                uint64_t *l_979 = &p_1986->g_811;
                uint16_t l_1010 = 3UL;
                int i, j, k;
                if ((atomic_inc(&p_1986->g_atomic_input[63 * get_linear_group_id() + 45]) == 7))
                { /* block id: 352 */
                    uint32_t l_834 = 4294967289UL;
                    int64_t l_837 = (-7L);
                    uint32_t l_838 = 0x6A360AA4L;
                    uint16_t l_906 = 65535UL;
                    int32_t l_907 = 0x0B97E113L;
                    uint32_t l_908 = 4294967295UL;
                    uint32_t l_909 = 0xCE2BF05FL;
                    uint32_t l_910 = 0x6A5879D7L;
                    ++l_834;
                    if ((l_838 &= l_837))
                    { /* block id: 355 */
                        int32_t l_840 = 0x4B0C35CFL;
                        int32_t *l_839 = &l_840;
                        int32_t *l_841 = &l_840;
                        int32_t *l_842[7][10] = {{&l_840,(void*)0,&l_840,&l_840,&l_840,&l_840,&l_840,(void*)0,&l_840,&l_840},{&l_840,(void*)0,&l_840,&l_840,&l_840,&l_840,&l_840,(void*)0,&l_840,&l_840},{&l_840,(void*)0,&l_840,&l_840,&l_840,&l_840,&l_840,(void*)0,&l_840,&l_840},{&l_840,(void*)0,&l_840,&l_840,&l_840,&l_840,&l_840,(void*)0,&l_840,&l_840},{&l_840,(void*)0,&l_840,&l_840,&l_840,&l_840,&l_840,(void*)0,&l_840,&l_840},{&l_840,(void*)0,&l_840,&l_840,&l_840,&l_840,&l_840,(void*)0,&l_840,&l_840},{&l_840,(void*)0,&l_840,&l_840,&l_840,&l_840,&l_840,(void*)0,&l_840,&l_840}};
                        VECTOR(uint32_t, 2) l_843 = (VECTOR(uint32_t, 2))(0x125578CAL, 0x9A9A1388L);
                        VECTOR(uint32_t, 8) l_844 = (VECTOR(uint32_t, 8))(0xB20D142AL, (VECTOR(uint32_t, 4))(0xB20D142AL, (VECTOR(uint32_t, 2))(0xB20D142AL, 4294967294UL), 4294967294UL), 4294967294UL, 0xB20D142AL, 4294967294UL);
                        VECTOR(uint32_t, 16) l_845 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x4386CE66L), 0x4386CE66L), 0x4386CE66L, 1UL, 0x4386CE66L, (VECTOR(uint32_t, 2))(1UL, 0x4386CE66L), (VECTOR(uint32_t, 2))(1UL, 0x4386CE66L), 1UL, 0x4386CE66L, 1UL, 0x4386CE66L);
                        VECTOR(uint32_t, 8) l_846 = (VECTOR(uint32_t, 8))(0xCD801A01L, (VECTOR(uint32_t, 4))(0xCD801A01L, (VECTOR(uint32_t, 2))(0xCD801A01L, 1UL), 1UL), 1UL, 0xCD801A01L, 1UL);
                        int32_t l_847 = 0x5CF1D1DCL;
                        int64_t l_848 = 0L;
                        VECTOR(int32_t, 8) l_849 = (VECTOR(int32_t, 8))(0x5B2AC470L, (VECTOR(int32_t, 4))(0x5B2AC470L, (VECTOR(int32_t, 2))(0x5B2AC470L, (-7L)), (-7L)), (-7L), 0x5B2AC470L, (-7L));
                        VECTOR(int32_t, 2) l_850 = (VECTOR(int32_t, 2))(0x5C7604E0L, 0x21F2C8B9L);
                        int8_t l_851 = 1L;
                        VECTOR(int16_t, 2) l_852 = (VECTOR(int16_t, 2))(0x54EDL, 0x15DBL);
                        VECTOR(int8_t, 8) l_853 = (VECTOR(int8_t, 8))(0x5BL, (VECTOR(int8_t, 4))(0x5BL, (VECTOR(int8_t, 2))(0x5BL, 0x79L), 0x79L), 0x79L, 0x5BL, 0x79L);
                        VECTOR(uint8_t, 2) l_854 = (VECTOR(uint8_t, 2))(1UL, 1UL);
                        VECTOR(int16_t, 2) l_855 = (VECTOR(int16_t, 2))(0x41A4L, (-5L));
                        VECTOR(int16_t, 16) l_856 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L, (VECTOR(int16_t, 2))((-4L), 0L), (VECTOR(int16_t, 2))((-4L), 0L), (-4L), 0L, (-4L), 0L);
                        uint64_t l_857 = 0xD5252494D2A9CEE3L;
                        int64_t l_858 = 0L;
                        int8_t l_859 = 0x52L;
                        uint16_t l_860 = 65527UL;
                        int32_t *l_861 = &l_840;
                        int32_t *l_862[4];
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_862[i] = &l_840;
                        l_839 = l_839;
                        l_842[1][9] = (l_841 = (void*)0);
                        l_861 = (l_839 = (l_862[0] = (((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 4))(0xDC116082L, 1UL, 1UL, 0xE1E58BEFL)).yyzywxzz, ((VECTOR(uint32_t, 8))(l_843.yyxyxyyx))))), ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(l_844.s76250250)).s04, ((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(0xFDBA55A1L, 0x4D87C188L)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_845.s46986d98cad646ad)).s36db)).odd))).yyyy, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL)).xxxyxyxy)).s65, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(0x9AA392ECL, 7UL, 4294967291UL, 0x1393C5B5L)).even, (uint32_t)((VECTOR(uint32_t, 16))(4294967294UL, ((VECTOR(uint32_t, 8))(l_846.s21103440)).s1, l_847, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 8))(l_848, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(l_849.s37)).yyyy, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(8L, (-6L))).xyyyyyxxyxyxyyxx, ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 2))(l_850.xy)), 0L, l_851, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_852.yxxx)).y, 0x6077L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(l_853.s2534)).yyyywyyy, ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(0x7AL, 1UL)).xyxxxxxxyyyxxyyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_854.yx)), 0xCAL, 0x7DL)).zwyzzxxzyxxzzxxx))))).odd))).s14)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_855.xyyyyxxx)).hi)).odd, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_856.s0d)), 0L, 0x5E98L)).hi))), (int16_t)((l_857 , (l_859 = l_858)) , (-3L))))))), ((VECTOR(int16_t, 4))(0x704AL)))), ((VECTOR(int16_t, 8))(0x6B64L))))), (-2L), 0L, 0x2E1DL, ((VECTOR(int16_t, 2))(0x332AL)), ((VECTOR(int16_t, 2))(0x32C1L)), 0x53A5L)).hi))).s2052656465474716, ((VECTOR(uint16_t, 16))(0x773AL))))).even)), 0x213BFB69L, 0x18957045L, 0x3CDFD603L)), ((VECTOR(int32_t, 16))(0L))))).sd83e))), 0x042CD2A1L, 0x07A5AE09L, 0x273ECEF4L)).s5642315765041542, ((VECTOR(int32_t, 16))(8L))))).s83)).odd, 0x937DAAE4L, 1UL, l_860, ((VECTOR(uint32_t, 8))(0x0755C7EAL)), 0UL)).s1))), 4294967295UL, 4294967295UL)).even))).yxyy))), ((VECTOR(uint32_t, 4))(0xB742BB7FL))))).yzxywxwx))).s34))).xxxyyyxy))).s1 , l_861)));
                    }
                    else
                    { /* block id: 363 */
                        VECTOR(int32_t, 8) l_863 = (VECTOR(int32_t, 8))(0x2EFD1863L, (VECTOR(int32_t, 4))(0x2EFD1863L, (VECTOR(int32_t, 2))(0x2EFD1863L, 0x1959429DL), 0x1959429DL), 0x1959429DL, 0x2EFD1863L, 0x1959429DL);
                        int32_t *l_864 = (void*)0;
                        int32_t *l_865 = (void*)0;
                        VECTOR(int32_t, 16) l_866 = (VECTOR(int32_t, 16))(0x713E77ECL, (VECTOR(int32_t, 4))(0x713E77ECL, (VECTOR(int32_t, 2))(0x713E77ECL, 0L), 0L), 0L, 0x713E77ECL, 0L, (VECTOR(int32_t, 2))(0x713E77ECL, 0L), (VECTOR(int32_t, 2))(0x713E77ECL, 0L), 0x713E77ECL, 0L, 0x713E77ECL, 0L);
                        VECTOR(int32_t, 16) l_867 = (VECTOR(int32_t, 16))(0x7FC2E069L, (VECTOR(int32_t, 4))(0x7FC2E069L, (VECTOR(int32_t, 2))(0x7FC2E069L, 0x39371FEEL), 0x39371FEEL), 0x39371FEEL, 0x7FC2E069L, 0x39371FEEL, (VECTOR(int32_t, 2))(0x7FC2E069L, 0x39371FEEL), (VECTOR(int32_t, 2))(0x7FC2E069L, 0x39371FEEL), 0x7FC2E069L, 0x39371FEEL, 0x7FC2E069L, 0x39371FEEL);
                        VECTOR(int32_t, 2) l_868 = (VECTOR(int32_t, 2))((-1L), 2L);
                        VECTOR(int32_t, 2) l_869 = (VECTOR(int32_t, 2))(0L, 0x25ED55FAL);
                        VECTOR(int32_t, 2) l_870 = (VECTOR(int32_t, 2))(0L, (-1L));
                        VECTOR(int32_t, 8) l_871 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x14C82DADL), 0x14C82DADL), 0x14C82DADL, (-3L), 0x14C82DADL);
                        VECTOR(int32_t, 2) l_872 = (VECTOR(int32_t, 2))((-6L), (-6L));
                        VECTOR(int32_t, 4) l_873 = (VECTOR(int32_t, 4))(0x1E1628CAL, (VECTOR(int32_t, 2))(0x1E1628CAL, 1L), 1L);
                        VECTOR(int32_t, 2) l_874 = (VECTOR(int32_t, 2))((-4L), 0x07F642E5L);
                        VECTOR(int32_t, 16) l_875 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 5L), 5L), 5L, 0L, 5L, (VECTOR(int32_t, 2))(0L, 5L), (VECTOR(int32_t, 2))(0L, 5L), 0L, 5L, 0L, 5L);
                        VECTOR(int16_t, 16) l_876 = (VECTOR(int16_t, 16))(0x217AL, (VECTOR(int16_t, 4))(0x217AL, (VECTOR(int16_t, 2))(0x217AL, 0x5C4CL), 0x5C4CL), 0x5C4CL, 0x217AL, 0x5C4CL, (VECTOR(int16_t, 2))(0x217AL, 0x5C4CL), (VECTOR(int16_t, 2))(0x217AL, 0x5C4CL), 0x217AL, 0x5C4CL, 0x217AL, 0x5C4CL);
                        VECTOR(int16_t, 16) l_877 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0FDBL), 0x0FDBL), 0x0FDBL, (-1L), 0x0FDBL, (VECTOR(int16_t, 2))((-1L), 0x0FDBL), (VECTOR(int16_t, 2))((-1L), 0x0FDBL), (-1L), 0x0FDBL, (-1L), 0x0FDBL);
                        uint64_t l_878[6][8] = {{3UL,1UL,0UL,0x59028314FBB7A3B6L,0x34A40D0F62D44262L,3UL,0x59028314FBB7A3B6L,18446744073709551615UL},{3UL,1UL,0UL,0x59028314FBB7A3B6L,0x34A40D0F62D44262L,3UL,0x59028314FBB7A3B6L,18446744073709551615UL},{3UL,1UL,0UL,0x59028314FBB7A3B6L,0x34A40D0F62D44262L,3UL,0x59028314FBB7A3B6L,18446744073709551615UL},{3UL,1UL,0UL,0x59028314FBB7A3B6L,0x34A40D0F62D44262L,3UL,0x59028314FBB7A3B6L,18446744073709551615UL},{3UL,1UL,0UL,0x59028314FBB7A3B6L,0x34A40D0F62D44262L,3UL,0x59028314FBB7A3B6L,18446744073709551615UL},{3UL,1UL,0UL,0x59028314FBB7A3B6L,0x34A40D0F62D44262L,3UL,0x59028314FBB7A3B6L,18446744073709551615UL}};
                        VECTOR(int16_t, 16) l_879 = (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), (-5L)), (-5L)), (-5L), (-10L), (-5L), (VECTOR(int16_t, 2))((-10L), (-5L)), (VECTOR(int16_t, 2))((-10L), (-5L)), (-10L), (-5L), (-10L), (-5L));
                        VECTOR(uint16_t, 8) l_880 = (VECTOR(uint16_t, 8))(0xFAACL, (VECTOR(uint16_t, 4))(0xFAACL, (VECTOR(uint16_t, 2))(0xFAACL, 0x6E0AL), 0x6E0AL), 0x6E0AL, 0xFAACL, 0x6E0AL);
                        VECTOR(int32_t, 16) l_881 = (VECTOR(int32_t, 16))(0x1EC328DCL, (VECTOR(int32_t, 4))(0x1EC328DCL, (VECTOR(int32_t, 2))(0x1EC328DCL, 0x76FA8E9AL), 0x76FA8E9AL), 0x76FA8E9AL, 0x1EC328DCL, 0x76FA8E9AL, (VECTOR(int32_t, 2))(0x1EC328DCL, 0x76FA8E9AL), (VECTOR(int32_t, 2))(0x1EC328DCL, 0x76FA8E9AL), 0x1EC328DCL, 0x76FA8E9AL, 0x1EC328DCL, 0x76FA8E9AL);
                        VECTOR(int32_t, 2) l_882 = (VECTOR(int32_t, 2))(1L, 0x56C1162DL);
                        int32_t l_883 = (-1L);
                        uint16_t l_884 = 65535UL;
                        int16_t l_885 = 0x070CL;
                        uint64_t l_886 = 0xDA337F294946B00AL;
                        int32_t l_887 = 0x1D97246DL;
                        VECTOR(int32_t, 2) l_888 = (VECTOR(int32_t, 2))(0L, 0x2A4368BEL);
                        VECTOR(int32_t, 16) l_889 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 1L), 1L), 1L, 8L, 1L, (VECTOR(int32_t, 2))(8L, 1L), (VECTOR(int32_t, 2))(8L, 1L), 8L, 1L, 8L, 1L);
                        VECTOR(int32_t, 2) l_890 = (VECTOR(int32_t, 2))((-3L), 0x4C9EA92EL);
                        VECTOR(int32_t, 4) l_891 = (VECTOR(int32_t, 4))(0x5B0971DDL, (VECTOR(int32_t, 2))(0x5B0971DDL, (-1L)), (-1L));
                        VECTOR(int32_t, 4) l_892 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x33BBA336L), 0x33BBA336L);
                        VECTOR(int32_t, 2) l_893 = (VECTOR(int32_t, 2))(0x38CE74C8L, (-2L));
                        VECTOR(int32_t, 16) l_894 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L, (VECTOR(int32_t, 2))((-8L), 0L), (VECTOR(int32_t, 2))((-8L), 0L), (-8L), 0L, (-8L), 0L);
                        VECTOR(int32_t, 2) l_895 = (VECTOR(int32_t, 2))(0x28A43374L, 0L);
                        VECTOR(int64_t, 4) l_896 = (VECTOR(int64_t, 4))(0x62E2453454E910B3L, (VECTOR(int64_t, 2))(0x62E2453454E910B3L, 3L), 3L);
                        uint64_t l_897 = 18446744073709551607UL;
                        int64_t l_898 = (-1L);
                        VECTOR(int32_t, 8) l_899 = (VECTOR(int32_t, 8))(0x061F6229L, (VECTOR(int32_t, 4))(0x061F6229L, (VECTOR(int32_t, 2))(0x061F6229L, 0x3278DF86L), 0x3278DF86L), 0x3278DF86L, 0x061F6229L, 0x3278DF86L);
                        uint32_t l_900[3];
                        uint8_t l_901 = 0x51L;
                        uint64_t l_902 = 0x2833C446F88EDB5EL;
                        int64_t l_903 = 0x6BDE495FB6E84B7DL;
                        int32_t *l_904 = (void*)0;
                        int32_t *l_905[10][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_900[i] = 4294967287UL;
                        l_863.s5 = ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_863.s0627424537506210)).odd)).s77))).lo;
                        l_864 = (l_865 = l_864);
                        l_902 = ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_866.s02de4cba))))))).s64)), 0x736591A6L, 0x7B55595CL)), 0x792EB43EL, ((VECTOR(int32_t, 2))(0x3015AB99L, 0L)), 0x5996DD6DL)), (int32_t)((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_867.s826e383fb274f479)).s05)).yxyyxyxx, ((VECTOR(int32_t, 16))(l_868.xxxxyxxxyxyxxyxx)).hi, ((VECTOR(int32_t, 8))((-2L), 0x5F5A736AL, ((VECTOR(int32_t, 2))(l_869.xx)), ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_870.yxyyyxxx)).hi)).hi)).xyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_871.s30261626)))).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_872.xxyx)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_873.yyyzxyxwxxzxxxxy)).sdf, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0L, 4L, 1L, 4L)), ((VECTOR(int32_t, 4))(l_874.yyyx)))).s0632776134407271, (int32_t)0x464CE19DL))).sc6, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_875.sceb5d303)).s27, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(0x4045L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_876.sa351)).zxxyxyzx)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_877.sb497)).lo)).lo, 0x2EA1L, l_878[2][3], ((VECTOR(int16_t, 4))(l_879.sbb2c)))), ((VECTOR(uint16_t, 2))(l_880.s16)).yyyxxxyxyxyxxxxy))))).scc))))))), 0x38781BF0L, 0x0452E7F6L)).lo)).xyyy, ((VECTOR(int32_t, 2))((-1L), 0x595E57EFL)).xxxx))).even))).yxyyyyyy)).s71)), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(l_881.s2c920ac4626f95f3)).hi, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(l_882.yy)).yxxyyxxyxyyxxyyx, (int32_t)(l_885 &= (l_883 , l_884))))), (int32_t)(l_887 = l_886)))).sfd2c, ((VECTOR(int32_t, 2))(l_888.xx)).yxyy))).xywzwzwyxywwyzxz)).lo)).s10, ((VECTOR(int32_t, 4))(5L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x5723FD05L, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_889.s41)).yxyxyyyx)).s13, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_890.xyxx)).zyywxwwy)).s75))), 0L)).lo)))), 1L, 0x609CDB76L))))).yxxwxwyzwyxyxxwx, ((VECTOR(int32_t, 4))(l_891.zwyz)).zzxzyzwywxzzzyww, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(l_892.zxxx)), ((VECTOR(int32_t, 2))(l_893.xy)), 0x63922A68L)))).s5726531617271254))).s4e)), 0L)).even))).xyxxxyyx))).s11))), ((VECTOR(int32_t, 8))(l_894.s3069042b)), 0x09038E1FL, (-6L))).s1ce9)))))))).s6605704412052010, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0x61B5D02BL)).yxyy)), ((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_895.yy)), 2L, 5L)), (-2L), 1L, 0x78D3BC0AL)).s1, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((l_896.w , (l_897 , l_898)), (-6L), 0L, 0x032A50ABL)).odd)), (-8L))).lo)).odd)).xxxyxyyxxxxyxyxx))).s2412)).lo, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_899.s74)).yxxyyyyyxxxxxyyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x682D2F5FL, 0x2CC0AE73L)))).yxyxyyxy, ((VECTOR(int32_t, 16))(l_900[1], ((VECTOR(int32_t, 4))((-2L))), 9L, 0x70021D3EL, ((VECTOR(int32_t, 4))((-6L))), ((VECTOR(int32_t, 2))((-9L))), 0x767EB600L, 0x30EB0501L, 1L)).even))).even, (int32_t)l_901))).wyyzxywywyzwyzyx)).se907)).wywzwywxzwzzxzzy, ((VECTOR(int32_t, 16))(1L))))).sd1, ((VECTOR(int32_t, 2))(0x4C887BB1L)))))))).yxxy)).even)).xyyxyyyy, ((VECTOR(int32_t, 8))(3L))))).s3))).s0;
                        l_905[2][8][1] = (l_903 , (l_904 = (void*)0));
                    }
                    l_909 ^= ((l_907 = l_906) , l_908);
                    if (l_910)
                    { /* block id: 375 */
                        int16_t l_911[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                        VECTOR(int32_t, 8) l_912 = (VECTOR(int32_t, 8))(0x1F7C2887L, (VECTOR(int32_t, 4))(0x1F7C2887L, (VECTOR(int32_t, 2))(0x1F7C2887L, 0x143FA45EL), 0x143FA45EL), 0x143FA45EL, 0x1F7C2887L, 0x143FA45EL);
                        uint64_t l_915 = 18446744073709551615UL;
                        uint64_t *l_914[5][10] = {{&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915},{&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915},{&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915},{&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915},{&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915,&l_915}};
                        uint64_t **l_913 = &l_914[3][9];
                        uint64_t **l_916 = &l_914[3][9];
                        int i, j;
                        l_912.s7 |= (l_907 = l_911[9]);
                        l_916 = l_913;
                    }
                    else
                    { /* block id: 379 */
                        VECTOR(int32_t, 2) l_917 = (VECTOR(int32_t, 2))(0x539D5AE0L, (-4L));
                        int32_t *l_918[1];
                        int32_t *l_919[6][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                        VECTOR(int32_t, 16) l_920 = (VECTOR(int32_t, 16))(0x5E883E5AL, (VECTOR(int32_t, 4))(0x5E883E5AL, (VECTOR(int32_t, 2))(0x5E883E5AL, 0x0F492737L), 0x0F492737L), 0x0F492737L, 0x5E883E5AL, 0x0F492737L, (VECTOR(int32_t, 2))(0x5E883E5AL, 0x0F492737L), (VECTOR(int32_t, 2))(0x5E883E5AL, 0x0F492737L), 0x5E883E5AL, 0x0F492737L, 0x5E883E5AL, 0x0F492737L);
                        VECTOR(int32_t, 2) l_921 = (VECTOR(int32_t, 2))(0x0B627BD6L, 0x1060CC91L);
                        uint8_t l_922 = 0xC3L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_918[i] = (void*)0;
                        l_907 = ((VECTOR(int32_t, 8))(l_917.xxyyyxyx)).s0;
                        l_919[5][3][0] = l_918[0];
                        l_907 &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_920.se6d60935)))).s27, ((VECTOR(int32_t, 2))(l_921.yx))))).xxxxxyyyxyxxxxyy)).se;
                        l_907 ^= l_922;
                    }
                    unsigned int result = 0;
                    result += l_834;
                    result += l_837;
                    result += l_838;
                    result += l_906;
                    result += l_907;
                    result += l_908;
                    result += l_909;
                    result += l_910;
                    atomic_add(&p_1986->g_special_values[63 * get_linear_group_id() + 45], result);
                }
                else
                { /* block id: 385 */
                    (1 + 1);
                }
                if ((+(((*l_924) = l_923) != p_1986->g_925)))
                { /* block id: 389 */
                    (*l_821) = l_797[3];
                    (*l_821) ^= l_801[5];
                    return p_26;
                }
                else
                { /* block id: 393 */
                    uint16_t l_927 = 0xC26FL;
                    int32_t *l_928[1][7];
                    uint16_t *l_933 = &p_1986->g_79;
                    int16_t *l_937 = &p_1986->g_262;
                    VECTOR(int8_t, 16) l_962 = (VECTOR(int8_t, 16))(0x0FL, (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, (-1L)), (-1L)), (-1L), 0x0FL, (-1L), (VECTOR(int8_t, 2))(0x0FL, (-1L)), (VECTOR(int8_t, 2))(0x0FL, (-1L)), 0x0FL, (-1L), 0x0FL, (-1L));
                    int8_t *l_963 = (void*)0;
                    int8_t *l_964 = (void*)0;
                    int8_t *l_965 = (void*)0;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_928[i][j] = (void*)0;
                    }
                    l_929 = ((*l_821) = l_927);
                    (*l_821) = ((VECTOR(int32_t, 4))((((safe_unary_minus_func_int64_t_s((safe_mod_func_uint16_t_u_u(((*l_933)--), (p_24 | ((((~((p_1986->g_155 > ((((*l_937) &= ((*l_821) && l_936)) >= (safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s((((safe_lshift_func_int8_t_s_u((l_946[3][5][1] ^= (((void*)0 == l_944) ^ (9UL == (((p_1986->g_123[0][3][0] , (l_945 >= 0xEE290596L)) || l_929) < p_24)))), 0)) , l_797[3]) <= l_833), (-9L))), l_813))) < l_801[6])) || l_929)) & p_1986->g_766.s9) ^ FAKE_DIVERGE(p_1986->local_0_offset, get_local_id(0), 10)) >= GROUP_DIVERGE(0, 1))))))) == p_24) <= (*p_1986->g_746)), ((VECTOR(int32_t, 2))(0x6A004FDAL)), 0x675AC75DL)).x;
                    (*l_821) = (safe_mod_func_int16_t_s_s((p_26 == p_26), ((*l_937) = (safe_div_func_uint64_t_u_u(l_797[3], (safe_mul_func_int16_t_s_s(((l_929 &= 4294967295UL) < (safe_lshift_func_uint16_t_u_s(l_801[4], ((((safe_rshift_func_int8_t_s_s((((p_1986->g_60.s6 , (safe_sub_func_uint8_t_u_u((~0xBDL), ((safe_unary_minus_func_int32_t_s((((((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(p_1986->g_960.s0023)).hi, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(l_961.zwwyyzxy)).s66, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 8))(l_962.s10a0b12f)).s5401051370214465, (int8_t)p_1986->g_comm_values[p_1986->tid], (int8_t)(l_946[2][4][1] = 0x52L)))).lo, (int8_t)p_24))).s07, ((VECTOR(int8_t, 2))(0L)))))))).even <= 255UL) && 9L) != p_24))) | l_801[5])))) & 0x7A4189705EB0E454L) & p_24), p_1986->g_720.s2)) >= p_24) , p_24) || l_801[5])))), 65530UL)))))));
                    (*p_1986->g_966) = func_138(&p_24, p_1986);
                }
                if ((safe_mul_func_uint16_t_u_u(0x7BA0L, (((+((*p_1986->g_746) ^= 18446744073709551608UL)) < l_813) <= ((safe_add_func_int8_t_s_s((((*l_979) &= ((((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(p_1986->g_973.s1375)).x, (((*l_924) = p_1986->g_974) == (void*)0))) , (p_24 , &l_808)) != (void*)0) != ((((p_1986->g_221 = l_976) == (void*)0) > (*p_1986->g_391)) | 1L))) >= l_794), p_24)) , 0x1A98L)))))
                { /* block id: 410 */
                    int32_t l_984 = 0x107FACF9L;
                    VECTOR(uint16_t, 2) l_1001 = (VECTOR(uint16_t, 2))(65535UL, 3UL);
                    int64_t **l_1009 = &l_812;
                    int32_t *l_1015 = &l_945;
                    int32_t l_1033 = 2L;
                    int32_t l_1035[10] = {1L,0x042B49B8L,1L,1L,0x042B49B8L,1L,1L,0x042B49B8L,1L,1L};
                    int i;
                    (*l_821) = (safe_add_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((((((0x1DDA4221237770EFL != l_984) || (+((safe_mod_func_uint32_t_u_u(p_24, (l_813 , ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 16))((safe_lshift_func_uint16_t_u_u(((l_813 >= (((void*)0 == &l_808) & ((!(safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((((*p_1986->g_221) = l_929) ^ ((GROUP_DIVERGE(2, 1) | (p_24 <= l_984)) >= p_1986->g_155)) < p_24) || 1L), 8)), p_24))) , 1UL))) > (*p_1986->g_746)), l_797[2])), 4294967287UL, 0UL, ((VECTOR(uint32_t, 2))(0xCD767EE5L)), 0x280606ACL, 0x2223D0F8L, p_1986->g_671, ((VECTOR(uint32_t, 2))(0xDF5C2ECFL)), p_24, ((VECTOR(uint32_t, 2))(0xE757CC3CL)), 4294967289UL, 0x505D892AL, 0UL)), (uint32_t)l_794))).s2))) , 65528UL))) , 0x3D16L) && (*p_1986->g_221)) > p_24), GROUP_DIVERGE(1, 1))) < (*p_1986->g_746)), 7L));
                    if (l_801[0])
                    { /* block id: 413 */
                        int64_t l_1004 = 0L;
                        uint32_t *l_1006 = &p_1986->g_155;
                        uint64_t *l_1011[3];
                        int32_t l_1012 = (-5L);
                        int16_t *l_1013[1][3][7] = {{{&p_1986->g_187,&p_1986->g_508,&p_1986->g_508,&p_1986->g_187,&p_1986->g_187,&p_1986->g_508,&p_1986->g_508},{&p_1986->g_187,&p_1986->g_508,&p_1986->g_508,&p_1986->g_187,&p_1986->g_187,&p_1986->g_508,&p_1986->g_508},{&p_1986->g_187,&p_1986->g_508,&p_1986->g_508,&p_1986->g_187,&p_1986->g_187,&p_1986->g_508,&p_1986->g_508}}};
                        int32_t l_1014 = 0x32CF69E2L;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_1011[i] = &p_1986->g_569;
                        (*l_821) = (safe_sub_func_int16_t_s_s((+(p_24 , ((l_1014 ^= ((l_1012 = (l_945 = (safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(((safe_div_func_int16_t_s_s(0L, ((VECTOR(uint16_t, 8))(l_1001.xxyyyxxy)).s4)) && ((((248UL | (p_1986->g_337.s3 , ((((**l_1009) = (((*l_1006) ^= ((p_1986->g_365.s0 &= (p_1986->g_720.s0 && (safe_rshift_func_uint8_t_u_u(l_961.x, l_1004)))) == ((VECTOR(uint32_t, 16))(l_1005.yyxxyxyxxxyyxyxx)).s2)) & (GROUP_DIVERGE(2, 1) || (safe_rshift_func_int16_t_s_u((l_1009 != (void*)0), l_1010))))) || (*p_1986->g_746)) ^ p_1986->g_656.sa))) , p_1986->g_766.s3) , p_24) & (*p_1986->g_221))), p_1986->g_815.y)), l_1001.x)))) , l_1001.y)) ^ p_24))), p_1986->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1986->tid, 14))]));
                        (*p_1986->g_1017) = l_1015;
                        (*l_821) |= ((p_25 == l_818) ^ (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 8))(p_1986->g_1018.yxzwzxxz)), (uint64_t)((void*)0 != &p_1986->g_155), (uint64_t)((VECTOR(uint64_t, 8))((((((VECTOR(int32_t, 2))(0x40332285L, 0x63DF0759L)).even > 0x4C6E7822L) < ((l_1012 = ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1986->g_1019.s47))))))).odd) == (safe_div_func_int8_t_s_s(((p_24 , ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((((*l_979) &= 18446744073709551615UL) , (l_946[3][5][1] < ((VECTOR(uint32_t, 16))(p_1986->g_1026.xxyxxxxyyxyxyyxy)).s0)), 9)) != ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((*p_1986->g_746) & FAKE_DIVERGE(p_1986->global_1_offset, get_global_id(1), 10)), 0xD3L, ((VECTOR(uint8_t, 2))(250UL)), (*l_1015), 250UL, 0x31L, 0x3FL)).lo)), ((VECTOR(uint8_t, 4))(254UL))))))).y), 7)) , 0xEDL)) , l_794), 5UL)))) && p_24), (*p_1986->g_746), p_24, ((VECTOR(uint64_t, 4))(5UL)), 0UL)).s5))), (uint64_t)l_801[2]))).s41, ((VECTOR(uint64_t, 2))(0xAF43770AAB5BDAA4L)), ((VECTOR(uint64_t, 2))(0x60540BFED07A2A61L))))), 18446744073709551607UL, 0xF91BFAD976AC297CL, 0x7131205C869AF3AAL, 0x6778B221D7AA9EFDL, 1UL, 1UL, p_24, ((VECTOR(uint64_t, 4))(0x20CD38E3E593F346L)), p_24, 0UL, 18446744073709551613UL)).hi, ((VECTOR(uint64_t, 8))(0x51792848163D61BBL))))).lo)).wzyyywwz)).s4 < 1L));
                    }
                    else
                    { /* block id: 425 */
                        int32_t *l_1027 = (void*)0;
                        int32_t *l_1028 = &l_946[5][0][0];
                        int32_t *l_1029 = &l_946[2][1][0];
                        int32_t *l_1030[7][2] = {{&l_945,&l_929},{&l_945,&l_929},{&l_945,&l_929},{&l_945,&l_929},{&l_945,&l_929},{&l_945,&l_929},{&l_945,&l_929}};
                        int32_t l_1037 = 0x3A3B0F7DL;
                        int i, j;
                        atomic_and(&p_1986->l_atomic_reduction[0], (-2L));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1986->v_collective += p_1986->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        l_1040--;
                    }
                    return p_26;
                }
                else
                { /* block id: 430 */
                    return p_26;
                }
            }
            else
            { /* block id: 433 */
                uint32_t *l_1060 = (void*)0;
                uint32_t *l_1061 = &p_1986->g_34;
                int32_t l_1062 = 0x553E81F1L;
                l_1062 = (safe_mod_func_uint16_t_u_u((l_797[3] & ((!(safe_add_func_uint16_t_u_u((FAKE_DIVERGE(p_1986->global_2_offset, get_global_id(2), 10) < p_24), GROUP_DIVERGE(2, 1)))) != (p_1986->g_671 , p_24))), (((safe_unary_minus_func_uint8_t_u((p_24 , FAKE_DIVERGE(p_1986->group_0_offset, get_group_id(0), 10)))) ^ (l_929 , (safe_rshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((((*l_1061) = (safe_sub_func_int8_t_s_s(0x13L, (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x63L, 0x24L)))).odd < (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_1056.yy)).xyxy)).y == (p_1986->g_337.s5 = ((*l_821) = (safe_div_func_uint16_t_u_u(((&p_1986->g_187 == l_1059) == p_24), p_24))))))))) , l_1040), (*p_1986->g_746))), p_24)))) , l_797[3])));
                if ((atomic_inc(&p_1986->g_atomic_input[63 * get_linear_group_id() + 6]) == 8))
                { /* block id: 439 */
                    uint32_t l_1063 = 4294967294UL;
                    int32_t l_1064 = 1L;
                    int64_t l_1065 = 0x76761369273ACBB0L;
                    l_1065 &= (l_1064 = (l_1063 , (-1L)));
                    unsigned int result = 0;
                    result += l_1063;
                    result += l_1064;
                    result += l_1065;
                    atomic_add(&p_1986->g_special_values[63 * get_linear_group_id() + 6], result);
                }
                else
                { /* block id: 442 */
                    (1 + 1);
                }
                return p_25;
            }
        }
        else
        { /* block id: 447 */
            uint32_t ***l_1068 = (void*)0;
            int32_t l_1075 = 9L;
            uint32_t l_1083 = 0x6CE93226L;
            VECTOR(uint32_t, 2) l_1119 = (VECTOR(uint32_t, 2))(0x2536A88CL, 1UL);
            int8_t l_1156 = 0x54L;
            VECTOR(int32_t, 16) l_1164 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-9L)), (-9L)), (-9L), (-4L), (-9L), (VECTOR(int32_t, 2))((-4L), (-9L)), (VECTOR(int32_t, 2))((-4L), (-9L)), (-4L), (-9L), (-4L), (-9L));
            VECTOR(int32_t, 2) l_1232 = (VECTOR(int32_t, 2))(0x166D8F0FL, 0x4CF783A6L);
            VECTOR(uint8_t, 16) l_1273 = (VECTOR(uint8_t, 16))(0x31L, (VECTOR(uint8_t, 4))(0x31L, (VECTOR(uint8_t, 2))(0x31L, 253UL), 253UL), 253UL, 0x31L, 253UL, (VECTOR(uint8_t, 2))(0x31L, 253UL), (VECTOR(uint8_t, 2))(0x31L, 253UL), 0x31L, 253UL, 0x31L, 253UL);
            int32_t **l_1327 = &p_1986->g_1117[0];
            int32_t ***l_1326 = &l_1327;
            int32_t **l_1328 = &p_1986->g_1117[0];
            int32_t **l_1333 = &p_1986->g_377;
            int i;
            if (((l_813 = (((*l_1059) &= 0x2C71L) | (0UL >= ((l_1066 != l_1068) ^ 8UL)))) && (0xDE5C536515F209D2L ^ (safe_lshift_func_int8_t_s_u((~(safe_sub_func_int8_t_s_s(0x1EL, (l_1075 = (safe_rshift_func_int8_t_s_u(p_1986->g_815.y, 7)))))), 4)))))
            { /* block id: 451 */
                uint32_t l_1080[1];
                VECTOR(int8_t, 8) l_1111 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x3BL), 0x3BL), 0x3BL, (-1L), 0x3BL);
                int8_t l_1168 = 0x2EL;
                int i;
                for (i = 0; i < 1; i++)
                    l_1080[i] = 0x30EFFBDCL;
                for (l_794 = (-8); (l_794 != 49); l_794++)
                { /* block id: 454 */
                    uint32_t l_1092 = 0x2FE0D069L;
                    int32_t *l_1094 = &l_797[1];
                    uint64_t l_1102 = 0UL;
                    VECTOR(int8_t, 4) l_1107 = (VECTOR(int8_t, 4))(0x35L, (VECTOR(int8_t, 2))(0x35L, (-2L)), (-2L));
                    VECTOR(int32_t, 4) l_1118 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x73B5AD26L), 0x73B5AD26L);
                    uint64_t **l_1129[6][3] = {{&p_1986->g_746,(void*)0,(void*)0},{&p_1986->g_746,(void*)0,(void*)0},{&p_1986->g_746,(void*)0,(void*)0},{&p_1986->g_746,(void*)0,(void*)0},{&p_1986->g_746,(void*)0,(void*)0},{&p_1986->g_746,(void*)0,(void*)0}};
                    int i, j;
                    if (((*l_1094) ^= (safe_add_func_int32_t_s_s(l_1080[0], (((l_1075 > (safe_sub_func_int64_t_s_s((p_1986->g_123[0][3][0] && ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(0L, ((l_1083 ^ ((l_1084[3] = (p_1986->g_43 = (p_24 , (void*)0))) == p_26)) ^ ((safe_mod_func_int16_t_s_s(((((VECTOR(uint32_t, 4))((safe_add_func_uint8_t_u_u((&p_1986->g_175[3] == ((safe_add_func_uint64_t_u_u((((l_813 <= p_24) >= l_1080[0]) , 1UL), 0x794153C2DA43B8CCL)) , l_1091)), 0xC5L)), ((VECTOR(uint32_t, 2))(1UL)), 0xE1993233L)).x , l_1075) <= l_1092), (***p_1986->g_393))) < FAKE_DIVERGE(p_1986->group_2_offset, get_group_id(2), 10))), p_1986->g_503, 4L, ((VECTOR(int8_t, 2))(0x48L)), 0x0CL, ((VECTOR(int8_t, 4))(0x6BL)), ((VECTOR(int8_t, 4))((-9L))), 8L)).lo, ((VECTOR(int8_t, 8))((-1L))), ((VECTOR(int8_t, 8))(0x32L))))).odd)).lo)).yxxxyxxyyxxxyxyx)).se7a4))).hi, ((VECTOR(int8_t, 2))(0x77L))))).xyxyxxyxxyyyxyxx)).s8), p_24))) >= p_24) > l_1093)))))
                    { /* block id: 458 */
                        uint32_t *l_1095 = &p_1986->g_44;
                        int32_t l_1096 = 0x488906C3L;
                        (*l_1091) = p_26;
                        (*l_1094) = (&p_1986->g_44 == (p_1986->g_43 = (l_1095 = p_26)));
                        (*l_1094) = (l_1039[1] = ((void*)0 == &p_1986->g_390[1]));
                        if (l_1096)
                            continue;
                    }
                    else
                    { /* block id: 466 */
                        int32_t *l_1097 = &l_1036;
                        int32_t *l_1098 = &l_1075;
                        int32_t *l_1099 = &l_1036;
                        int32_t *l_1100 = &l_929;
                        int32_t *l_1101[1][4] = {{&l_813,&l_813,&l_813,&l_813}};
                        int32_t *l_1116[9];
                        int32_t **l_1115[1];
                        uint8_t *l_1123 = (void*)0;
                        uint8_t *l_1124 = (void*)0;
                        uint8_t *l_1125 = (void*)0;
                        uint8_t *l_1126 = (void*)0;
                        uint8_t *l_1127 = (void*)0;
                        uint8_t *l_1128[1];
                        int i, j;
                        for (i = 0; i < 9; i++)
                            l_1116[i] = (void*)0;
                        for (i = 0; i < 1; i++)
                            l_1115[i] = &l_1116[3];
                        for (i = 0; i < 1; i++)
                            l_1128[i] = (void*)0;
                        l_1102++;
                        (*l_1098) = (safe_rshift_func_uint16_t_u_s((((((p_24 & ((((VECTOR(int8_t, 4))((-1L), ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(2L, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(l_1107.yzxzyzxw)).s20, ((VECTOR(int8_t, 2))(l_1108.xy)), ((VECTOR(int8_t, 4))(p_1986->g_1109.sfe56)).odd))), 0x5CL)).yzyxywyx)).s44, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_1986->g_1110.s7106560772305743)).lo)).s64, ((VECTOR(int8_t, 16))(l_1111.s6630530155755736)).s23))), 0x4EL)).z && ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(0x68L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1986->g_1112.s30)).yyyy)).odd)), 0L, 0x62L)).y, 7L, (safe_mul_func_int8_t_s_s((p_24 != ((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(0x089FL, 0x8FCAL)).yyyxyyyxyyyyxxyx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(1UL, 65531UL)))).yxxxxxyxxxyxxxyx, ((VECTOR(uint16_t, 4))(((p_1986->g_1117[0] = p_25) == (void*)0), 0x59BCL, 65527UL, 65529UL)).yzzzywyxwwyxwwwz))).s4), 0L)), ((VECTOR(int8_t, 2))(0x78L, 0L)), (p_1986->g_656.sc & (l_797[4] = ((+(+(((((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(l_1118.ww)).yyyxyyyx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_1119.xyxyyxyxxyyxxxxy)))))).odd))))).s5 , (*l_1094)) < 1UL) != ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_1120.s3300)).yzwyyxzy)).s6))) , ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))((safe_add_func_int8_t_s_s(p_1986->g_333.w, (*l_1098))), 5UL, 0x06L, 1UL, ((VECTOR(uint8_t, 2))(251UL)), (*l_1097), ((VECTOR(uint8_t, 4))(0UL)), 0xECL, 0xD7L, l_833, 0x73L, 8UL)).even)).s15, ((VECTOR(uint8_t, 2))(1UL))))), 0xF8L, ((VECTOR(uint8_t, 4))(1UL)), 0x19L)).s4))), ((VECTOR(int8_t, 8))(0x66L)), 0x05L)), ((VECTOR(int8_t, 16))(1L))))).sc) & l_1075)) ^ l_1080[0]) <= 0x5F52L) , &p_1986->g_746) == l_1129[3][1]), 2));
                    }
                    for (p_1986->g_44 = (-17); (p_1986->g_44 < 34); ++p_1986->g_44)
                    { /* block id: 474 */
                        int64_t l_1155 = 0x0633F22FFF09C6EFL;
                        int32_t *l_1166 = &l_1039[5];
                        int16_t **l_1167 = &l_1059;
                        int i, j;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1986->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 14)), permutations[(safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((((((safe_sub_func_int32_t_s_s(1L, (safe_lshift_func_uint8_t_u_u(p_24, 4)))) ^ 1L) < (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 8))(p_1986->g_1144.yyxxyyyx)).s0, (safe_rshift_func_int16_t_s_u((!(safe_mul_func_int8_t_s_s((p_1986->g_1112.s6 &= ((safe_add_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(p_1986->g_337.s5, (((p_24 <= (safe_mul_func_uint16_t_u_u(((0xFD907DE1L != (((((l_1155 > 1L) >= (*p_1986->g_391)) < p_24) ^ l_833) != l_1075)) , 65530UL), 0x53B6L))) <= l_1080[0]) > p_24))) & 9L), l_1111.s6)) || 0UL)), 0x1DL))), l_1156)))), 13))) ^ 8L) , 0x25L) & p_24), 0)), 1UL)) ^ p_24), 10))][(safe_mod_func_uint32_t_u_u(p_1986->tid, 14))]));
                        (*l_1094) &= (l_1156 <= 0x7C43L);
                        l_1168 = (safe_add_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((4294967295UL != ((l_1163 != (void*)0) <= (((*l_1167) = func_103((((((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0L, 0x37D44595L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_1164.sdffc)).lo, ((VECTOR(int32_t, 4))(0x75D6CD43L, ((VECTOR(int32_t, 2))((-1L), 1L)), 0x3E17450CL)).odd))).yyyy)).even, ((VECTOR(int32_t, 16))(l_1165.s7431663767623030)).s98))).hi , ((*l_1166) &= (*l_1094))) | ((((p_24 & (FAKE_DIVERGE(p_1986->global_1_offset, get_global_id(1), 10) >= ((*p_1986->g_746) = (((*l_1094) >= 4UL) <= p_24)))) || 0x251EA397L) | (-6L)) && 0x2934L)) , l_801[5]), p_1986)) == &p_1986->g_262))) ^ GROUP_DIVERGE(1, 1)), 0x5EL)), l_1093));
                        (*l_1091) = &l_1039[5];
                    }
                    (*l_1094) = (safe_mul_func_uint16_t_u_u(0x8A44L, (p_1986->g_316.x <= (-5L))));
                    if (l_1080[0])
                        break;
                }
            }
            else
            { /* block id: 489 */
                uint64_t **l_1174 = &p_1986->g_746;
                int32_t l_1201 = 0x6C1D4E18L;
                int32_t l_1254 = 0L;
                uint16_t **l_1263[5][2];
                VECTOR(uint8_t, 2) l_1265 = (VECTOR(uint8_t, 2))(6UL, 0x1EL);
                VECTOR(uint8_t, 4) l_1268 = (VECTOR(uint8_t, 4))(0xB9L, (VECTOR(uint8_t, 2))(0xB9L, 0xCDL), 0xCDL);
                VECTOR(uint8_t, 4) l_1274 = (VECTOR(uint8_t, 4))(0x3AL, (VECTOR(uint8_t, 2))(0x3AL, 1UL), 1UL);
                uint32_t *l_1320 = (void*)0;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1263[i][j] = &p_1986->g_221;
                }
                for (p_1986->g_262 = 10; (p_1986->g_262 <= 23); p_1986->g_262++)
                { /* block id: 492 */
                    uint8_t l_1184[2];
                    int32_t l_1209 = 0x0F76C88EL;
                    uint8_t l_1210 = 248UL;
                    VECTOR(int64_t, 2) l_1227 = (VECTOR(int64_t, 2))(0x5F7D72CDA3340A2FL, (-1L));
                    VECTOR(int32_t, 2) l_1233 = (VECTOR(int32_t, 2))(0x5E95F36CL, 1L);
                    VECTOR(uint64_t, 16) l_1242 = (VECTOR(uint64_t, 16))(0x88F79FBB798E76BDL, (VECTOR(uint64_t, 4))(0x88F79FBB798E76BDL, (VECTOR(uint64_t, 2))(0x88F79FBB798E76BDL, 0UL), 0UL), 0UL, 0x88F79FBB798E76BDL, 0UL, (VECTOR(uint64_t, 2))(0x88F79FBB798E76BDL, 0UL), (VECTOR(uint64_t, 2))(0x88F79FBB798E76BDL, 0UL), 0x88F79FBB798E76BDL, 0UL, 0x88F79FBB798E76BDL, 0UL);
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1184[i] = 253UL;
                    if (l_1164.sc)
                    { /* block id: 493 */
                        int32_t *l_1173 = &l_813;
                        uint16_t l_1195[3];
                        uint16_t *l_1196 = (void*)0;
                        uint16_t *l_1197 = &l_833;
                        VECTOR(uint64_t, 2) l_1200 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL);
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1195[i] = 0x603AL;
                        (*l_1173) = 0x43DA1DC6L;
                        (*l_1173) |= (((void*)0 != l_1174) >= GROUP_DIVERGE(0, 1));
                        (*l_1173) ^= ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(5L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_1986->g_1183.wxzzxxwzywwwxxxz)).s36d1)).yzyyxzxy)).s1)), 6)) >= l_1184[1]), (l_1201 = (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(0x62L, (((p_1986->g_187 ^= p_1986->g_44) < l_1184[1]) || (((*l_808) &= (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((l_1039[5] || (safe_mod_func_uint16_t_u_u((GROUP_DIVERGE(1, 1) , ((*l_1197) = l_1195[1])), 0x1609L))), (((safe_sub_func_int16_t_s_s(p_24, p_24)) | p_24) , 0xF1L))), l_1200.x))) && l_1075)))), p_24))))), 14)) , l_1119.x);
                    }
                    else
                    { /* block id: 501 */
                        int32_t *l_1202 = &l_1032;
                        int32_t *l_1203 = &l_797[3];
                        int32_t *l_1204 = &l_1039[1];
                        int32_t *l_1205 = &l_1075;
                        int32_t *l_1206 = (void*)0;
                        int32_t *l_1207[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1207[i] = &l_797[3];
                        --l_1210;
                    }
                    for (p_1986->g_811 = 0; (p_1986->g_811 != 26); p_1986->g_811 = safe_add_func_int8_t_s_s(p_1986->g_811, 8))
                    { /* block id: 506 */
                        VECTOR(int64_t, 16) l_1226 = (VECTOR(int64_t, 16))(0x02344281A3CDBCEBL, (VECTOR(int64_t, 4))(0x02344281A3CDBCEBL, (VECTOR(int64_t, 2))(0x02344281A3CDBCEBL, (-7L)), (-7L)), (-7L), 0x02344281A3CDBCEBL, (-7L), (VECTOR(int64_t, 2))(0x02344281A3CDBCEBL, (-7L)), (VECTOR(int64_t, 2))(0x02344281A3CDBCEBL, (-7L)), 0x02344281A3CDBCEBL, (-7L), 0x02344281A3CDBCEBL, (-7L));
                        VECTOR(int64_t, 2) l_1229 = (VECTOR(int64_t, 2))(0x51388E2610B7749AL, 4L);
                        VECTOR(int64_t, 16) l_1231 = (VECTOR(int64_t, 16))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 1L), 1L), 1L, 4L, 1L, (VECTOR(int64_t, 2))(4L, 1L), (VECTOR(int64_t, 2))(4L, 1L), 4L, 1L, 4L, 1L);
                        int64_t l_1235 = (-1L);
                        int32_t *l_1236 = (void*)0;
                        int32_t *l_1237 = &l_1034;
                        int8_t *l_1251[1][9][1];
                        uint32_t *l_1252[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t *l_1256 = &l_797[3];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 9; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1251[i][j][k] = (void*)0;
                            }
                        }
                        (*l_1256) = (p_1986->g_1019.s3 &= ((GROUP_DIVERGE(1, 1) | (safe_rshift_func_int8_t_s_s(((l_1201 = (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_1219.wz)).odd, (+(l_1184[0] >= ((safe_sub_func_int32_t_s_s(6L, (p_1986->g_136.s4 == ((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 16))(p_1986->g_1223.s5203173000711157)).sd)) && (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(l_1226.s2a)).yxyx, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_1227.yyyx)), ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(l_1228.s1012314301750262)).s6f, ((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_1229.xxxxxxyy)))).s66)), 0x42038F078252F1E5L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(p_1986->g_1230.xy)).yyyyxyxx)).hi)), 0x717047B01B0E707DL)).lo, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 16))(l_1231.s95ea323492f852ce))))).hi)), (int64_t)((((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(l_1232.yyyxxxyy)), ((VECTOR(int32_t, 8))(0x6C4A6D69L, ((VECTOR(int32_t, 8))(l_1233.yxyyyxyy)).s7, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1986->g_1234.s4371)).hi)), (-3L), (-1L))), 0x7BCFDC3EL, 0x6AC94959L))))).s0041412135513146, (int32_t)((*l_1237) = l_1235)))).s5 | (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 4))(((l_1075 = (((p_24 , (safe_div_func_int16_t_s_s((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_1242.s2552a0b563a0a371)))).s3 > ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x7E924131B820AB2AL, (-1L))).yyyyyxxy)).s2), ((p_24 && l_1184[0]) | (((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(1L, (p_1986->g_1144.y = (safe_mul_func_uint16_t_u_u(((((((**l_807) |= (0x26L > l_1232.x)) | p_24) > 0x16L) & 0x2B31785EL) < p_24), p_1986->g_804.s7))))), p_24)) , 9L) >= p_1986->g_960.s4))))) > p_24) && p_1986->g_720.s4)) > p_1986->g_960.s3), l_1253, 0x5EL, 1UL)).wxzzwzyzwyxzzwwx, ((VECTOR(uint8_t, 16))(0xE5L)), ((VECTOR(uint8_t, 16))(8UL))))).even)).s24)).xxxyxxxxxyyyyyyx)).sbb))).xyyx, ((VECTOR(uint8_t, 4))(255UL))))).zyzxxzxw)).s7, p_1986->g_34))) , 0L), (int64_t)l_1201))).lo))))))))).odd)).yxyyyyxyyxxxyyyy, ((VECTOR(int64_t, 16))(0x4BFBB1851196B51BL))))).s3f))).yxyy, ((VECTOR(int64_t, 4))(1L))))))).odd, ((VECTOR(int64_t, 4))(0x3689E3BCD54D7CA4L))))).lo, ((VECTOR(int64_t, 2))(0x1DA52285C61C8EE5L))))).xyyy, ((VECTOR(int64_t, 4))((-2L)))))).x, 0x054CF92788F4BA3CL)))))) != l_1201)))))) ^ l_1254), l_1254))) >= 6UL));
                        if ((*l_1237))
                            break;
                    }
                    (*l_1091) = func_138(&p_24, p_1986);
                    if (l_1038)
                        break;
                }
                for (l_1201 = (-28); (l_1201 > (-21)); l_1201 = safe_add_func_uint32_t_u_u(l_1201, 7))
                { /* block id: 521 */
                    VECTOR(uint8_t, 8) l_1272 = (VECTOR(uint8_t, 8))(0x9AL, (VECTOR(uint8_t, 4))(0x9AL, (VECTOR(uint8_t, 2))(0x9AL, 0UL), 0UL), 0UL, 0x9AL, 0UL);
                    int16_t ***l_1285 = &p_1986->g_1284;
                    int8_t *l_1286 = (void*)0;
                    int8_t *l_1287[4][10] = {{(void*)0,(void*)0,(void*)0,&l_1156,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1156,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1156,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1156,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_1288[5];
                    uint8_t *l_1289 = (void*)0;
                    int16_t l_1290 = 0x2B78L;
                    uint32_t *l_1301 = (void*)0;
                    uint32_t *l_1302 = &p_1986->g_155;
                    uint32_t *l_1321 = (void*)0;
                    uint32_t *l_1322[4][5][3] = {{{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0}},{{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0}},{{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0}},{{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0},{(void*)0,&l_1093,(void*)0}}};
                    int32_t l_1323 = (-8L);
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_1288[i] = 0x72351220L;
                    (*p_1986->g_1294) = ((safe_mul_func_int8_t_s_s((0xEDD677E5L <= (((VECTOR(int8_t, 4))(((safe_lshift_func_int8_t_s_s(((p_24 != l_1228.s3) ^ p_1986->g_815.x), 1)) || (l_1263[3][1] != ((1UL <= (p_1986->g_1264 , (((((((((VECTOR(uint8_t, 8))(l_1265.xxyyxxxx)).s0 == (((!(safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_1268.wzww)))), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_1269.s66)).yyyxyxyxyyyyyxxx)).s2a, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(p_1986->g_1270.wwzzxxyx)).even)).zywyxxzw)).s65))).xxyxyxyy)), 0x33L, ((VECTOR(uint8_t, 2))(p_1986->g_1271.yw)), 0xC3L)))).lo, ((VECTOR(uint8_t, 16))(l_1272.s7272220112005206)).odd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_1273.s35057cd6558a5533)).even))))).s7336663762230005, ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_1274.zx)))).xxyx, ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))((safe_lshift_func_uint8_t_u_u((l_1164.sb |= (~(safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))((((safe_rshift_func_int8_t_s_s((l_1288[4] = (safe_div_func_uint16_t_u_u((((((VECTOR(int8_t, 8))((&p_1986->g_390[1] != (l_1285 = p_1986->g_1283)), p_1986->g_633[0], p_24, ((VECTOR(int8_t, 4))(0x20L)), 5L)).s7 | l_1272.s3) || 0xB097A41DL) >= 0L), p_24))), 7)) ^ l_1272.s7) > 1UL), ((VECTOR(int32_t, 8))((-1L))), 0L, ((VECTOR(int32_t, 4))((-1L))), 3L, 1L)).s2, 0x49A40714L)))), FAKE_DIVERGE(p_1986->global_2_offset, get_global_id(2), 10))), ((VECTOR(uint8_t, 2))(2UL)), l_1290, ((VECTOR(uint8_t, 8))(0xF9L)), l_833, ((VECTOR(uint8_t, 2))(0xECL)), 0x52L)).sb0fc, ((VECTOR(uint8_t, 4))(0x3FL)))))))).wwzxywyyzzxyzyxx))).sb, p_24))) && 0x0DL) >= p_24)) <= 0xD572L) >= l_1268.w) , l_1228.s1) , 0UL) , p_1986->g_3) >= 1L))) , (void*)0))), l_1291, 0x3DL, (-2L))).y | l_1273.s8)), 246UL)) , &p_25);
                    if ((atomic_inc(&p_1986->l_atomic_input[52]) == 7))
                    { /* block id: 527 */
                        VECTOR(int64_t, 2) l_1295 = (VECTOR(int64_t, 2))((-5L), 3L);
                        int32_t l_1297 = (-1L);
                        int32_t *l_1296 = &l_1297;
                        int32_t *l_1298 = (void*)0;
                        int i;
                        l_1298 = ((((VECTOR(int32_t, 4))(0x359019ADL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x725FEDC3L)))), (-6L))).z , ((VECTOR(int64_t, 16))(l_1295.xxyyyxyxyyxxyxyx)).sa) , l_1296);
                        unsigned int result = 0;
                        result += l_1295.y;
                        result += l_1295.x;
                        result += l_1297;
                        atomic_add(&p_1986->l_special_values[52], result);
                    }
                    else
                    { /* block id: 529 */
                        (1 + 1);
                    }
                    l_1323 = (safe_rshift_func_uint16_t_u_u(((((*l_1302)++) , (*p_1986->g_746)) <= ((p_1986->g_1026.y |= (((((safe_unary_minus_func_int16_t_s((((-5L) <= ((VECTOR(uint32_t, 4))(p_1986->g_1306.s6755)).z) > (l_1288[0] = ((0x4B2834AFL | (safe_rshift_func_int16_t_s_u((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x9BL, 0xB9L)), 255UL, 0xD0L)).x ^ (l_1119.y ^ (l_1164.sb = 0L))), ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(l_1309.s87f2d86e0f02e1e4)).seb3f, (uint16_t)(0x56L < (safe_mod_func_int8_t_s_s(p_24, (safe_add_func_int16_t_s_s(((0x189CL < (((safe_div_func_int64_t_s_s(((safe_add_func_uint64_t_u_u(((safe_div_func_int8_t_s_s(((&p_1986->g_43 == &p_1986->g_43) | p_24), l_1272.s5)) == (*p_1986->g_746)), l_1269.s4)) < l_1309.sc), p_24)) , (void*)0) != l_1320)) , l_1228.s7), p_24)))))))).w))) && l_1288[3]))))) < p_24) ^ l_1272.s7) <= p_24) == 0x3682C26690B714D2L)) , FAKE_DIVERGE(p_1986->local_0_offset, get_local_id(0), 10))), 7));
                }
            }
            for (l_1032 = (-7); (l_1032 >= (-5)); ++l_1032)
            { /* block id: 541 */
                (*p_1986->g_966) = (void*)0;
            }
            if (l_1228.s6)
                break;
            if (((((*l_1326) = &p_1986->g_1117[0]) != l_1328) ^ ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((void*)0 != l_1333), (((p_24 >= (-3L)) != (((+(safe_mul_func_int16_t_s_s(((*p_1986->g_746) ^ (*p_1986->g_746)), ((l_1038 = ((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((+l_797[3]), l_1269.s2)) <= l_794), (***p_1986->g_393))), l_1342)) >= p_24)) != 0x546EL)))) & l_1034) < (-1L))) , p_24))), p_24)) || 0xE5L)))
            { /* block id: 547 */
                uint16_t l_1343 = 65534UL;
                int32_t *l_1345 = &l_1034;
                (*l_1345) ^= l_1343;
            }
            else
            { /* block id: 549 */
                int32_t *l_1346 = &l_1032;
                int32_t *l_1347 = &l_1039[5];
                int32_t *l_1348[9][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                VECTOR(int8_t, 16) l_1354 = (VECTOR(int8_t, 16))(0x2EL, (VECTOR(int8_t, 4))(0x2EL, (VECTOR(int8_t, 2))(0x2EL, 0x6FL), 0x6FL), 0x6FL, 0x2EL, 0x6FL, (VECTOR(int8_t, 2))(0x2EL, 0x6FL), (VECTOR(int8_t, 2))(0x2EL, 0x6FL), 0x2EL, 0x6FL, 0x2EL, 0x6FL);
                int8_t *l_1355 = &l_1156;
                int i, j;
                ++l_1349[4][1];
                (*l_1346) = l_1273.s1;
                (*l_1347) = (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 8))(l_1354.sfb2c3a73)).s5, ((*l_1355) = p_24)));
                if (l_1309.s8)
                    continue;
            }
        }
        if (l_1093)
            continue;
        for (l_813 = (-2); (l_813 == (-17)); --l_813)
        { /* block id: 560 */
            int64_t l_1363[6] = {0x5D69FE50AC03EA61L,0x5D69FE50AC03EA61L,0x5D69FE50AC03EA61L,0x5D69FE50AC03EA61L,0x5D69FE50AC03EA61L,0x5D69FE50AC03EA61L};
            int64_t **l_1366 = &p_1986->g_975[0][1][1];
            int64_t ***l_1367 = &l_807;
            uint16_t *l_1374[3];
            int32_t l_1375[7][9][4] = {{{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L}},{{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L}},{{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L}},{{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L}},{{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L}},{{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L}},{{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L},{0x6CFF79D5L,0x3EF6D390L,0L,0x6CFF79D5L}}};
            uint8_t ***l_1380[4][4] = {{&l_824,&l_824,&l_824,&l_824},{&l_824,&l_824,&l_824,&l_824},{&l_824,&l_824,&l_824,&l_824},{&l_824,&l_824,&l_824,&l_824}};
            uint64_t *l_1390 = &p_1986->g_569;
            VECTOR(int32_t, 4) l_1394 = (VECTOR(int32_t, 4))(0x5FB19A1FL, (VECTOR(int32_t, 2))(0x5FB19A1FL, 0x33966087L), 0x33966087L);
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1374[i] = &l_833;
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1358.saf)), ((((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((~0x1BL), 2)) || l_1363[1]), ((0x64E9L < (&p_1986->g_926[0][7] == ((*l_1367) = l_1366))) | (((safe_mul_func_uint16_t_u_u(1UL, 0x3E93L)) ^ (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 2))(l_1372.s20)), ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(p_1986->g_1373.zwxw)).wyyyxwwxwxwxyzww))).sca))).lo, 3))) || GROUP_DIVERGE(0, 1))))) & (++p_1986->g_79)) , ((~(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_1986->g_1378.s3474)).lo)).xxyyyxxyyyxxxyyx)).s9 < ((VECTOR(int16_t, 16))(l_1379.xzxwxzzyywzwxxwx)).sd)) , (*p_1986->g_576))) != (l_824 = &p_1986->g_309)), 0x3C9A45ABL, l_1269.s6, l_1228.s6, 0x6EAF8774L, 6L)).s5)
            { /* block id: 564 */
                l_1032 = l_1093;
            }
            else
            { /* block id: 566 */
                int64_t l_1383 = 4L;
                int32_t *l_1384[10][6][4] = {{{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]}},{{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]}},{{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]}},{{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]}},{{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]}},{{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]}},{{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]}},{{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]}},{{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]}},{{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]},{(void*)0,&l_1375[4][8][0],&l_1039[9],&l_1039[4]}}};
                uint8_t l_1393 = 5UL;
                int i, j, k;
                l_1394.z = (safe_mul_func_int8_t_s_s(((l_1165.s3 &= l_1383) == (1UL & (l_1375[2][5][2] = (p_24 & (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((((((l_1389 == l_1389) , l_1390) != (void*)0) & ((safe_lshift_func_int8_t_s_u(((l_929 = (0x3542L && 0x9A46L)) ^ 0x2DL), 4)) , l_1358.s9)) , 5L) != (-6L)), 6)) && l_1393), GROUP_DIVERGE(0, 1))))))), GROUP_DIVERGE(0, 1)));
            }
            (*l_1091) = (void*)0;
        }
    }
    l_1039[5] = l_801[5];
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_1986->g_308 p_1986->g_155 p_1986->g_34 p_1986->g_316 p_1986->g_123 p_1986->g_321 p_1986->g_331 p_1986->g_332 p_1986->g_333 p_1986->g_262 p_1986->g_337 p_1986->g_346 p_1986->g_273 p_1986->g_4 p_1986->g_187 p_1986->g_361 p_1986->g_365 p_1986->g_376 p_1986->g_44 p_1986->g_390 p_1986->g_393 p_1986->g_421 p_1986->g_428 p_1986->g_391 p_1986->g_392 p_1986->g_222 p_1986->g_377 p_1986->g_435 p_1986->g_84 p_1986->g_503 p_1986->g_508 p_1986->g_270 p_1986->g_60 p_1986->g_576 p_1986->g_136 p_1986->g_252 p_1986->g_606 p_1986->g_comm_values p_1986->g_645 p_1986->g_656 p_1986->g_569 p_1986->g_671 p_1986->g_540 p_1986->g_720 p_1986->g_167 p_1986->g_633 p_1986->g_223 p_1986->g_2 p_1986->g_766 p_1986->g_767 p_1986->g_746 p_1986->g_79 p_1986->g_782 p_1986->g_786
 * writes: p_1986->g_45 p_1986->g_308 p_1986->g_155 p_1986->g_60 p_1986->g_123 p_1986->g_321 p_1986->g_323 p_1986->g_335 p_1986->g_316 p_1986->g_187 p_1986->g_262 p_1986->g_377 p_1986->g_44 p_1986->g_390 p_1986->g_84 p_1986->g_270 p_1986->g_633 p_1986->g_569 p_1986->g_746 p_1986->g_337
 */
int32_t * func_27(uint32_t  p_28, uint32_t  p_29, uint32_t  p_30, uint32_t  p_31, int64_t  p_32, struct S0 * p_1986)
{ /* block id: 10 */
    VECTOR(int32_t, 4) l_59 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-8L)), (-8L));
    uint32_t *l_61 = &p_1986->g_44;
    VECTOR(int16_t, 8) l_69 = (VECTOR(int16_t, 8))(0x71C2L, (VECTOR(int16_t, 4))(0x71C2L, (VECTOR(int16_t, 2))(0x71C2L, 1L), 1L), 1L, 0x71C2L, 1L);
    uint8_t l_330[4];
    VECTOR(int64_t, 2) l_352 = (VECTOR(int64_t, 2))(0x3D6B79A99503C98CL, 0x735146A9DD226A06L);
    uint8_t ***l_355 = &p_1986->g_335[3][4][3];
    VECTOR(int64_t, 4) l_360 = (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), (-6L)), (-6L));
    VECTOR(int32_t, 16) l_423 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x4633036BL), 0x4633036BL), 0x4633036BL, (-2L), 0x4633036BL, (VECTOR(int32_t, 2))((-2L), 0x4633036BL), (VECTOR(int32_t, 2))((-2L), 0x4633036BL), (-2L), 0x4633036BL, (-2L), 0x4633036BL);
    VECTOR(uint16_t, 4) l_530 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x642FL), 0x642FL);
    uint16_t *l_545[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_549[3];
    uint8_t **l_572 = (void*)0;
    int64_t l_638 = 0x15B93647AE461EE9L;
    uint32_t l_642 = 0x946E00E3L;
    uint64_t l_667 = 6UL;
    uint8_t *l_679 = (void*)0;
    uint8_t *l_680[9][8] = {{&p_1986->g_535,&p_1986->g_535,&l_330[1],(void*)0,&l_330[3],&p_1986->g_535,&p_1986->g_535,(void*)0},{&p_1986->g_535,&p_1986->g_535,&l_330[1],(void*)0,&l_330[3],&p_1986->g_535,&p_1986->g_535,(void*)0},{&p_1986->g_535,&p_1986->g_535,&l_330[1],(void*)0,&l_330[3],&p_1986->g_535,&p_1986->g_535,(void*)0},{&p_1986->g_535,&p_1986->g_535,&l_330[1],(void*)0,&l_330[3],&p_1986->g_535,&p_1986->g_535,(void*)0},{&p_1986->g_535,&p_1986->g_535,&l_330[1],(void*)0,&l_330[3],&p_1986->g_535,&p_1986->g_535,(void*)0},{&p_1986->g_535,&p_1986->g_535,&l_330[1],(void*)0,&l_330[3],&p_1986->g_535,&p_1986->g_535,(void*)0},{&p_1986->g_535,&p_1986->g_535,&l_330[1],(void*)0,&l_330[3],&p_1986->g_535,&p_1986->g_535,(void*)0},{&p_1986->g_535,&p_1986->g_535,&l_330[1],(void*)0,&l_330[3],&p_1986->g_535,&p_1986->g_535,(void*)0},{&p_1986->g_535,&p_1986->g_535,&l_330[1],(void*)0,&l_330[3],&p_1986->g_535,&p_1986->g_535,(void*)0}};
    int16_t l_681 = 1L;
    int16_t l_682 = 0x45DAL;
    int8_t l_683[9][10][2] = {{{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL}},{{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL}},{{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL}},{{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL}},{{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL}},{{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL}},{{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL}},{{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL}},{{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL},{0x1EL,0x6FL}}};
    int16_t l_684 = 0x33A2L;
    uint8_t l_685 = 0UL;
    VECTOR(int32_t, 4) l_688 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x27E3B6A7L), 0x27E3B6A7L);
    VECTOR(int32_t, 8) l_689 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x431DF2C5L), 0x431DF2C5L), 0x431DF2C5L, 2L, 0x431DF2C5L);
    VECTOR(int32_t, 8) l_690 = (VECTOR(int32_t, 8))(0x77F46250L, (VECTOR(int32_t, 4))(0x77F46250L, (VECTOR(int32_t, 2))(0x77F46250L, 0x406FF13AL), 0x406FF13AL), 0x406FF13AL, 0x77F46250L, 0x406FF13AL);
    VECTOR(uint64_t, 4) l_691 = (VECTOR(uint64_t, 4))(0xE763D909BFD5E1DAL, (VECTOR(uint64_t, 2))(0xE763D909BFD5E1DAL, 0xE21BE79ABE8670ADL), 0xE21BE79ABE8670ADL);
    uint32_t *l_694 = &p_1986->g_155;
    VECTOR(uint8_t, 2) l_702 = (VECTOR(uint8_t, 2))(1UL, 0x1EL);
    VECTOR(int8_t, 16) l_703 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int8_t, 2))((-1L), 0L), (VECTOR(int8_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
    VECTOR(int8_t, 8) l_704 = (VECTOR(int8_t, 8))(0x14L, (VECTOR(int8_t, 4))(0x14L, (VECTOR(int8_t, 2))(0x14L, 1L), 1L), 1L, 0x14L, 1L);
    VECTOR(int8_t, 16) l_705 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 4L), 4L), 4L, 0L, 4L, (VECTOR(int8_t, 2))(0L, 4L), (VECTOR(int8_t, 2))(0L, 4L), 0L, 4L, 0L, 4L);
    VECTOR(uint8_t, 4) l_710 = (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 255UL), 255UL);
    VECTOR(uint8_t, 2) l_711 = (VECTOR(uint8_t, 2))(0x67L, 0x4AL);
    VECTOR(int8_t, 16) l_712 = (VECTOR(int8_t, 16))(0x20L, (VECTOR(int8_t, 4))(0x20L, (VECTOR(int8_t, 2))(0x20L, 1L), 1L), 1L, 0x20L, 1L, (VECTOR(int8_t, 2))(0x20L, 1L), (VECTOR(int8_t, 2))(0x20L, 1L), 0x20L, 1L, 0x20L, 1L);
    VECTOR(int8_t, 4) l_713 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x6AL), 0x6AL);
    VECTOR(int8_t, 4) l_714 = (VECTOR(int8_t, 4))(0x35L, (VECTOR(int8_t, 2))(0x35L, (-7L)), (-7L));
    VECTOR(int8_t, 4) l_715 = (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, (-5L)), (-5L));
    int16_t l_727[3];
    uint16_t l_728 = 0xD209L;
    int32_t l_729 = (-1L);
    int32_t l_730[10][1][8] = {{{0L,1L,0x38F029ADL,0x225A26BEL,1L,1L,0x225A26BEL,0x38F029ADL}},{{0L,1L,0x38F029ADL,0x225A26BEL,1L,1L,0x225A26BEL,0x38F029ADL}},{{0L,1L,0x38F029ADL,0x225A26BEL,1L,1L,0x225A26BEL,0x38F029ADL}},{{0L,1L,0x38F029ADL,0x225A26BEL,1L,1L,0x225A26BEL,0x38F029ADL}},{{0L,1L,0x38F029ADL,0x225A26BEL,1L,1L,0x225A26BEL,0x38F029ADL}},{{0L,1L,0x38F029ADL,0x225A26BEL,1L,1L,0x225A26BEL,0x38F029ADL}},{{0L,1L,0x38F029ADL,0x225A26BEL,1L,1L,0x225A26BEL,0x38F029ADL}},{{0L,1L,0x38F029ADL,0x225A26BEL,1L,1L,0x225A26BEL,0x38F029ADL}},{{0L,1L,0x38F029ADL,0x225A26BEL,1L,1L,0x225A26BEL,0x38F029ADL}},{{0L,1L,0x38F029ADL,0x225A26BEL,1L,1L,0x225A26BEL,0x38F029ADL}}};
    int32_t *l_731 = (void*)0;
    int32_t *l_732 = (void*)0;
    int32_t *l_733 = (void*)0;
    int32_t *l_734 = (void*)0;
    uint64_t l_735[6][8];
    uint64_t *l_736 = &p_1986->g_569;
    VECTOR(uint32_t, 16) l_762 = (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0UL), 0UL), 0UL, 4UL, 0UL, (VECTOR(uint32_t, 2))(4UL, 0UL), (VECTOR(uint32_t, 2))(4UL, 0UL), 4UL, 0UL, 4UL, 0UL);
    VECTOR(uint64_t, 8) l_765 = (VECTOR(uint64_t, 8))(0x284F245924EE33B6L, (VECTOR(uint64_t, 4))(0x284F245924EE33B6L, (VECTOR(uint64_t, 2))(0x284F245924EE33B6L, 6UL), 6UL), 6UL, 0x284F245924EE33B6L, 6UL);
    int64_t **l_783[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_789 = &l_730[4][0][4];
    int32_t *l_790 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_330[i] = 249UL;
    for (i = 0; i < 3; i++)
        l_549[i] = (-6L);
    for (i = 0; i < 3; i++)
        l_727[i] = 0x334BL;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
            l_735[i][j] = 0x12856FE30B5722FDL;
    }
    for (p_29 = (-12); (p_29 >= 35); p_29 = safe_add_func_uint32_t_u_u(p_29, 9))
    { /* block id: 13 */
        int32_t l_307 = 0x418B5EDEL;
        uint8_t ** volatile *l_310 = &p_1986->g_308;
        for (p_1986->g_45 = 0; (p_1986->g_45 >= 37); p_1986->g_45++)
        { /* block id: 16 */
            uint16_t *l_78 = &p_1986->g_79;
            int32_t l_301 = 0x43E30754L;
            int32_t l_302 = 0x2DC97727L;
            int32_t *l_303 = (void*)0;
            l_307 = (((safe_lshift_func_int16_t_s_u(p_32, 14)) , ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((safe_mod_func_int8_t_s_s((l_302 ^= ((0x3BL || (safe_div_func_int16_t_s_s((!p_1986->g_45), (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(l_59.xwyxzxyz)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_1986->g_60.s73115012)).s4, ((l_61 != &p_1986->g_34) && func_62((safe_unary_minus_func_uint64_t_u(FAKE_DIVERGE(p_1986->global_2_offset, get_global_id(2), 10))), (((0x20F0C0ED6D23037DL == p_1986->g_45) != (((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(l_69.s5647616743172237)).sff9b, ((VECTOR(int16_t, 4))(1L, func_70(&p_1986->g_4, (safe_mul_func_uint16_t_u_u(((*l_78)++), p_1986->g_3)), p_1986->g_60.s0, p_1986->g_60.s5, p_30, p_1986), 9L, 1L))))).even)).even, p_28)) , l_61) == &p_1986->g_34)) , p_1986->g_123[0][3][0]), l_61, p_1986)), 0x6271EE97L, ((VECTOR(int32_t, 4))(0x7471B374L)), (-1L)))))).s0, l_301))))) < 0x47BC6D4CL)), (-3L))) || p_1986->g_136.sc), 1UL, 252UL, ((VECTOR(uint8_t, 4))(0x16L)), 246UL)))).s27)).yxxxxxxyyyxxxxyx, ((VECTOR(uint8_t, 16))(0xB1L))))).sd) >= 0x7EL);
        }
        (*l_310) = p_1986->g_308;
    }
    for (p_1986->g_155 = (-23); (p_1986->g_155 == 49); p_1986->g_155 = safe_add_func_int32_t_s_s(p_1986->g_155, 7))
    { /* block id: 116 */
        uint64_t *l_313[8];
        int32_t *l_315 = &p_1986->g_4;
        int32_t **l_314 = &l_315;
        int i;
        for (i = 0; i < 8; i++)
            l_313[i] = &p_1986->g_123[0][1][8];
        (*l_314) = func_138(l_313[5], p_1986);
    }
    if (l_59.w)
    { /* block id: 119 */
        uint64_t *l_317 = &p_1986->g_123[0][2][2];
        uint64_t *l_320 = &p_1986->g_321[0][0][0];
        uint64_t *l_322 = &p_1986->g_323;
        uint8_t **l_334 = &p_1986->g_309;
        int32_t *l_336[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        VECTOR(int32_t, 2) l_338 = (VECTOR(int32_t, 2))((-1L), 0x382A8CA7L);
        VECTOR(uint16_t, 2) l_349 = (VECTOR(uint16_t, 2))(0UL, 65535UL);
        int i, j;
        l_59.y = ((((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(p_1986->g_316.yzzwzywwwzwxyyzz)).even, ((VECTOR(int32_t, 2))((-6L), (-5L))).xyyyyyyy))).s0 == (((*l_322) = ((*l_320) |= (++(*l_317)))) != (l_59.z , (18446744073709551615UL || (((VECTOR(uint16_t, 4))(0xDE3CL, (safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_330[3], p_29)), (-1L))), (((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(0x2CL, 8L)).xxxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1986->g_331.s1750366167663153)))).odd)).hi))), ((VECTOR(int8_t, 16))(p_1986->g_332.s7777425314352175)).scd40, ((VECTOR(int8_t, 8))(p_1986->g_333.wywxxyzw)).hi))).y | p_1986->g_262))), 65531UL, 0xCF0BL)).x & (((p_28 , (((p_1986->g_335[0][4][0] = l_334) == (void*)0) | p_1986->g_155)) && 0xA2L) | p_28)))))) < 0UL);
        p_1986->g_316.z ^= ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(p_1986->g_337.s00426316)).hi, ((VECTOR(int32_t, 8))(l_338.xyyxxyyx)).lo, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(((+((void*)0 == &p_1986->g_84[2])) && (l_59.w >= (l_330[3] || (((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u((((((safe_sub_func_int32_t_s_s(l_69.s2, (((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(p_1986->g_346.xy)).yxyx))).w || (p_1986->g_273.x , (safe_add_func_uint16_t_u_u(l_330[2], ((VECTOR(uint16_t, 8))(l_349.yyyyyyxx)).s2)))))) ^ (((*l_322) = l_330[3]) || (safe_mod_func_int32_t_s_s((GROUP_DIVERGE(1, 1) == (((((VECTOR(int64_t, 4))(l_352.yyxx)).y <= (safe_rshift_func_int16_t_s_s((((((l_69.s7 >= FAKE_DIVERGE(p_1986->global_2_offset, get_global_id(2), 10)) != p_1986->g_4) || GROUP_DIVERGE(1, 1)) == l_352.x) , 1L), 11))) != p_30) & p_31)), p_29)))) , l_352.x) < 1L) < p_32), p_29)) , l_355) != &p_1986->g_335[0][4][0]), 0)))) != l_330[0]) , 0x2AL)))), ((VECTOR(int16_t, 2))((-10L))), 3L)).xyyxxwxzxwyxzxzx, ((VECTOR(uint16_t, 16))(6UL))))).scd, ((VECTOR(int32_t, 2))(1L))))).yyyx))), ((VECTOR(int32_t, 4))(7L)))), ((VECTOR(int32_t, 8))(0x6642A461L)), ((VECTOR(int32_t, 8))((-8L)))))).s7;
    }
    else
    { /* block id: 127 */
        uint32_t l_364 = 2UL;
        int32_t l_404 = 0L;
        int32_t l_410 = 0x18F471FAL;
        int32_t l_411 = (-5L);
        int32_t l_412 = 8L;
        VECTOR(int32_t, 8) l_422 = (VECTOR(int32_t, 8))(0x04AD875EL, (VECTOR(int32_t, 4))(0x04AD875EL, (VECTOR(int32_t, 2))(0x04AD875EL, 2L), 2L), 2L, 0x04AD875EL, 2L);
        uint16_t **l_425 = &p_1986->g_221;
        VECTOR(int16_t, 8) l_426 = (VECTOR(int16_t, 8))(0x0765L, (VECTOR(int16_t, 4))(0x0765L, (VECTOR(int16_t, 2))(0x0765L, (-8L)), (-8L)), (-8L), 0x0765L, (-8L));
        int32_t l_465 = 1L;
        int16_t l_556 = 0x2B8BL;
        uint32_t **l_592[9] = {&l_61,&l_61,&l_61,&l_61,&l_61,&l_61,&l_61,&l_61,&l_61};
        VECTOR(int16_t, 4) l_612 = (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x2089L), 0x2089L);
        uint32_t ***l_653 = &l_592[5];
        uint64_t l_672 = 3UL;
        int i;
        for (p_1986->g_187 = 21; (p_1986->g_187 == 6); --p_1986->g_187)
        { /* block id: 130 */
            int32_t *l_362 = (void*)0;
            for (p_1986->g_262 = (-13); (p_1986->g_262 == 15); ++p_1986->g_262)
            { /* block id: 133 */
                if (p_32)
                    break;
            }
            l_364 = (~(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_360.zxwx)).wzzywwwy)).s2 == ((VECTOR(uint64_t, 4))(p_1986->g_361.s0237)).y));
        }
        l_59.x &= (((VECTOR(uint32_t, 16))(p_1986->g_365.s3736033727163423)).s8 || 0xE05330B8L);
        if ((safe_add_func_uint8_t_u_u(p_28, p_1986->g_331.s1)))
        { /* block id: 139 */
            uint64_t *l_375 = &p_1986->g_123[0][4][1];
            VECTOR(int32_t, 16) l_401 = (VECTOR(int32_t, 16))(0x59CE9069L, (VECTOR(int32_t, 4))(0x59CE9069L, (VECTOR(int32_t, 2))(0x59CE9069L, (-1L)), (-1L)), (-1L), 0x59CE9069L, (-1L), (VECTOR(int32_t, 2))(0x59CE9069L, (-1L)), (VECTOR(int32_t, 2))(0x59CE9069L, (-1L)), 0x59CE9069L, (-1L), 0x59CE9069L, (-1L));
            int32_t *l_405 = &l_404;
            int32_t *l_406 = &l_404;
            int32_t *l_407 = &l_404;
            int32_t *l_408 = (void*)0;
            int32_t *l_409[4];
            uint8_t l_413 = 251UL;
            int i;
            for (i = 0; i < 4; i++)
                l_409[i] = (void*)0;
            for (p_30 = 6; (p_30 > 55); p_30 = safe_add_func_uint32_t_u_u(p_30, 1))
            { /* block id: 142 */
                uint32_t l_396 = 0xA52866C1L;
                int32_t l_402 = 0x2016EAE0L;
                VECTOR(int32_t, 16) l_403 = (VECTOR(int32_t, 16))(0x380001A5L, (VECTOR(int32_t, 4))(0x380001A5L, (VECTOR(int32_t, 2))(0x380001A5L, 0L), 0L), 0L, 0x380001A5L, 0L, (VECTOR(int32_t, 2))(0x380001A5L, 0L), (VECTOR(int32_t, 2))(0x380001A5L, 0L), 0x380001A5L, 0L, 0x380001A5L, 0L);
                int i;
                for (l_364 = 0; (l_364 == 40); ++l_364)
                { /* block id: 145 */
                    int32_t *l_374 = (void*)0;
                    int32_t **l_373 = &l_374;
                    (*l_373) = l_61;
                }
                (*p_1986->g_376) = func_138(l_375, p_1986);
                for (p_32 = 0; (p_32 == 10); p_32++)
                { /* block id: 151 */
                    int32_t *l_380 = (void*)0;
                    int32_t *l_385 = (void*)0;
                    int32_t *l_386 = (void*)0;
                    int32_t l_387 = (-5L);
                    int32_t *l_394 = (void*)0;
                    int32_t *l_395 = (void*)0;
                    l_387 = p_30;
                    for (p_1986->g_44 = (-8); (p_1986->g_44 >= 40); p_1986->g_44 = safe_add_func_int64_t_s_s(p_1986->g_44, 4))
                    { /* block id: 155 */
                        (*p_1986->g_393) = p_1986->g_390[1];
                        return l_394;
                    }
                    l_396 ^= (l_59.z = p_28);
                    l_404 = (safe_sub_func_int16_t_s_s(5L, (safe_mod_func_int32_t_s_s((l_402 ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_401.s830da3ab)).s3552411436443723)).s52)).lo), ((VECTOR(int32_t, 4))(l_403.sda16)).x))));
                }
            }
            --l_413;
        }
        else
        { /* block id: 166 */
            int16_t l_427 = 0x480CL;
            int32_t l_489 = 5L;
            int32_t l_490 = 0x52F81D00L;
            int32_t l_491 = 0x73292DC9L;
            int32_t l_492 = 0x756DD31CL;
            int32_t l_493 = 0x507B776CL;
            uint16_t **l_544 = &p_1986->g_221;
            int32_t l_546 = 0L;
            int32_t *l_609[3][7][7] = {{{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410}},{{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410}},{{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410},{&l_492,&p_1986->g_4,&l_465,&l_412,&p_1986->g_4,&l_492,&l_410}}};
            int64_t l_670 = 0x6BD911483B5B8816L;
            int i, j, k;
            for (p_1986->g_262 = 0; (p_1986->g_262 >= 2); p_1986->g_262 = safe_add_func_uint8_t_u_u(p_1986->g_262, 6))
            { /* block id: 169 */
                int32_t l_424 = (-1L);
                int32_t *l_433 = (void*)0;
                int32_t *l_434 = (void*)0;
                l_411 |= ((p_32 , (safe_unary_minus_func_int8_t_s((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))(0x213ECC9EL, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(p_1986->g_421.s1102123170271560)).s3a, ((VECTOR(int32_t, 2))(0x4F50FF82L, 0x61E82716L))))), ((VECTOR(int32_t, 8))(l_422.s32737605)), (-1L), 0x6BC6C22DL, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_423.s0db3)).lo)), (int32_t)((l_424 , ((((l_425 = l_425) == &p_1986->g_221) || p_28) <= ((((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0L, 0x6602L)), 0L, (!((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(1L, 0x3FEDL)).yxxyxyxxxyyyxxxy)).se), ((VECTOR(int16_t, 2))(l_426.s24)), ((VECTOR(int16_t, 8))((-1L), p_29, l_427, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(p_1986->g_428.yxyz)).zwzxzwzx, (int16_t)(*p_1986->g_391)))).s72)), ((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0x74L, l_360.z, 0x73L, 0x65L)), 1L, (-1L), 0x34L, (-1L), 0x69L, 0x4AL, ((VECTOR(int8_t, 2))((-5L))), ((VECTOR(int8_t, 4))((-9L))))), ((VECTOR(uint8_t, 16))(0x36L))))).lo, ((VECTOR(int16_t, 8))((-1L))), ((VECTOR(int16_t, 8))(0x4206L))))).s3, p_28)), l_427)) ^ (-1L)), 1L, 0x67B5L)), 0x7A7FL, 0x76B3L)).odd)).s54, ((VECTOR(int16_t, 2))(0x2EFDL)), ((VECTOR(int16_t, 2))((-1L)))))).lo ^ 0x4C35L) >= p_1986->g_222.sf))) && l_69.s5)))), 0x40E0A47CL)).s6, p_1986->g_123[0][3][0]))))) & p_1986->g_222.s3);
                if (p_30)
                    continue;
                (*p_1986->g_435) = (*p_1986->g_376);
            }
            for (l_427 = 0; (l_427 != 1); l_427 = safe_add_func_int16_t_s_s(l_427, 4))
            { /* block id: 177 */
                uint32_t *l_455 = &l_364;
                int32_t l_466 = 0L;
                uint64_t *l_471 = (void*)0;
                int32_t l_472 = (-9L);
                uint8_t *l_507 = &l_330[3];
                VECTOR(int16_t, 2) l_523 = (VECTOR(int16_t, 2))(0x4711L, (-1L));
                VECTOR(uint8_t, 16) l_574 = (VECTOR(uint8_t, 16))(0xA9L, (VECTOR(uint8_t, 4))(0xA9L, (VECTOR(uint8_t, 2))(0xA9L, 0xEDL), 0xEDL), 0xEDL, 0xA9L, 0xEDL, (VECTOR(uint8_t, 2))(0xA9L, 0xEDL), (VECTOR(uint8_t, 2))(0xA9L, 0xEDL), 0xA9L, 0xEDL, 0xA9L, 0xEDL);
                int16_t l_607 = 0x1477L;
                int i;
                if ((atomic_inc(&p_1986->g_atomic_input[63 * get_linear_group_id() + 49]) == 1))
                { /* block id: 179 */
                    VECTOR(int32_t, 16) l_438 = (VECTOR(int32_t, 16))(0x77C68C20L, (VECTOR(int32_t, 4))(0x77C68C20L, (VECTOR(int32_t, 2))(0x77C68C20L, 0x792FC901L), 0x792FC901L), 0x792FC901L, 0x77C68C20L, 0x792FC901L, (VECTOR(int32_t, 2))(0x77C68C20L, 0x792FC901L), (VECTOR(int32_t, 2))(0x77C68C20L, 0x792FC901L), 0x77C68C20L, 0x792FC901L, 0x77C68C20L, 0x792FC901L);
                    VECTOR(int32_t, 8) l_439 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7AAD68A6L), 0x7AAD68A6L), 0x7AAD68A6L, 1L, 0x7AAD68A6L);
                    VECTOR(int32_t, 4) l_440 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
                    VECTOR(int32_t, 4) l_441 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4DB7E52BL), 0x4DB7E52BL);
                    uint32_t l_442 = 0x7DD79B27L;
                    uint32_t l_450 = 0x85D347A7L;
                    uint32_t l_453 = 4294967289UL;
                    uint8_t l_454 = 249UL;
                    int i;
                    l_442 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_438.s1604b60d)), 5L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_439.s1375416476405756)))).s2a60, ((VECTOR(int32_t, 2))(l_440.wy)).xyyx))), ((VECTOR(int32_t, 4))(0L, 1L, (-1L), (-5L)))))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_441.wz)), 0x254E828DL, 0x3C6A34EAL)).odd)))), 0x75B7E220L)).sd;
                    for (l_440.x = 0; (l_440.x != 14); l_440.x++)
                    { /* block id: 183 */
                        uint8_t l_445 = 0UL;
                        int32_t *l_448 = (void*)0;
                        uint8_t l_449 = 1UL;
                        l_445--;
                        l_448 = (void*)0;
                        l_439.s4 &= (l_441.w |= l_449);
                    }
                    ++l_450;
                    l_454 = l_453;
                    unsigned int result = 0;
                    result += l_438.sf;
                    result += l_438.se;
                    result += l_438.sd;
                    result += l_438.sc;
                    result += l_438.sb;
                    result += l_438.sa;
                    result += l_438.s9;
                    result += l_438.s8;
                    result += l_438.s7;
                    result += l_438.s6;
                    result += l_438.s5;
                    result += l_438.s4;
                    result += l_438.s3;
                    result += l_438.s2;
                    result += l_438.s1;
                    result += l_438.s0;
                    result += l_439.s7;
                    result += l_439.s6;
                    result += l_439.s5;
                    result += l_439.s4;
                    result += l_439.s3;
                    result += l_439.s2;
                    result += l_439.s1;
                    result += l_439.s0;
                    result += l_440.w;
                    result += l_440.z;
                    result += l_440.y;
                    result += l_440.x;
                    result += l_441.w;
                    result += l_441.z;
                    result += l_441.y;
                    result += l_441.x;
                    result += l_442;
                    result += l_450;
                    result += l_453;
                    result += l_454;
                    atomic_add(&p_1986->g_special_values[63 * get_linear_group_id() + 49], result);
                }
                else
                { /* block id: 191 */
                    (1 + 1);
                }
                if ((((*l_455) = p_1986->g_262) ^ 0UL))
                { /* block id: 195 */
                    uint16_t l_458[8] = {65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL};
                    int32_t l_477[4][5][8];
                    int32_t *l_517 = (void*)0;
                    int32_t *l_518 = &l_477[3][4][1];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 5; j++)
                        {
                            for (k = 0; k < 8; k++)
                                l_477[i][j][k] = 0x2943A9FCL;
                        }
                    }
                    if (((safe_mul_func_uint8_t_u_u((l_458[7] >= (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((l_410 < (((~(((safe_add_func_int8_t_s_s(((+l_465) , (l_466 , p_28)), (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(65529UL, 2)), 4)))) != (l_466 | (l_472 ^= ((void*)0 == l_471)))) | l_427)) && 1L) , 1L)), 13)), 0x0BL))), 0x7AL)) >= p_1986->g_84[2]))
                    { /* block id: 197 */
                        int32_t *l_473 = &l_404;
                        (*l_473) = (FAKE_DIVERGE(p_1986->local_2_offset, get_local_id(2), 10) ^ 1L);
                    }
                    else
                    { /* block id: 199 */
                        int32_t **l_474 = &p_1986->g_377;
                        (*l_474) = (void*)0;
                        return (*p_1986->g_435);
                    }
                    for (l_465 = 0; (l_465 == 1); l_465 = safe_add_func_int32_t_s_s(l_465, 8))
                    { /* block id: 205 */
                        int32_t *l_478 = &l_472;
                        int32_t *l_479 = &l_410;
                        int32_t *l_480 = &l_477[0][4][6];
                        int32_t *l_481 = (void*)0;
                        int32_t *l_482 = &l_477[2][2][5];
                        int32_t *l_483 = (void*)0;
                        int32_t *l_484 = &l_410;
                        int32_t *l_485 = (void*)0;
                        int32_t *l_486 = &l_404;
                        int32_t *l_487 = (void*)0;
                        int32_t *l_488[3][3][7] = {{{&l_411,&l_477[3][4][1],&l_477[3][4][1],&l_411,&l_477[0][3][3],(void*)0,&l_477[3][4][0]},{&l_411,&l_477[3][4][1],&l_477[3][4][1],&l_411,&l_477[0][3][3],(void*)0,&l_477[3][4][0]},{&l_411,&l_477[3][4][1],&l_477[3][4][1],&l_411,&l_477[0][3][3],(void*)0,&l_477[3][4][0]}},{{&l_411,&l_477[3][4][1],&l_477[3][4][1],&l_411,&l_477[0][3][3],(void*)0,&l_477[3][4][0]},{&l_411,&l_477[3][4][1],&l_477[3][4][1],&l_411,&l_477[0][3][3],(void*)0,&l_477[3][4][0]},{&l_411,&l_477[3][4][1],&l_477[3][4][1],&l_411,&l_477[0][3][3],(void*)0,&l_477[3][4][0]}},{{&l_411,&l_477[3][4][1],&l_477[3][4][1],&l_411,&l_477[0][3][3],(void*)0,&l_477[3][4][0]},{&l_411,&l_477[3][4][1],&l_477[3][4][1],&l_411,&l_477[0][3][3],(void*)0,&l_477[3][4][0]},{&l_411,&l_477[3][4][1],&l_477[3][4][1],&l_411,&l_477[0][3][3],(void*)0,&l_477[3][4][0]}}};
                        uint32_t l_494 = 4294967286UL;
                        int16_t *l_504 = &p_1986->g_187;
                        int i, j, k;
                        (*l_478) = (l_477[0][3][3] |= l_458[0]);
                        if (l_427)
                            continue;
                        l_494--;
                        (*l_478) = ((((safe_sub_func_int16_t_s_s(0x62F2L, (safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((*p_1986->g_391), (p_29 >= ((void*)0 == &p_1986->g_43)))), 4)))) != (p_1986->g_503 ^ ((((*l_504) ^= 0x7D19L) <= (safe_rshift_func_uint8_t_u_u(((l_507 == &l_330[2]) | (-7L)), p_1986->g_508))) , 0x64L))) , 0x5AL) && p_32);
                    }
                    for (p_1986->g_187 = (-28); (p_1986->g_187 < (-24)); p_1986->g_187++)
                    { /* block id: 215 */
                        int32_t l_511 = 0x0829DF67L;
                        int32_t *l_512 = &l_466;
                        (*l_512) = l_511;
                    }
                    (*l_518) |= (safe_mul_func_int8_t_s_s(p_1986->g_337.s1, (safe_mod_func_uint16_t_u_u(l_472, FAKE_DIVERGE(p_1986->local_1_offset, get_local_id(1), 10)))));
                }
                else
                { /* block id: 219 */
                    int32_t l_528 = (-1L);
                    int8_t *l_529 = (void*)0;
                    int8_t *l_531 = (void*)0;
                    int8_t *l_532 = (void*)0;
                    int8_t *l_533 = (void*)0;
                    int8_t *l_534[6][6][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                    uint16_t **l_543 = &p_1986->g_221;
                    uint8_t ***l_575[7];
                    int32_t l_600 = 0x461D6EBAL;
                    int32_t l_601 = 0x7FAB41C9L;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_575[i] = (void*)0;
                    if ((!((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_523.xyxy)).lo)), 0x69B5L, (-1L))))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))((-6L), ((((safe_mul_func_int8_t_s_s((p_1986->g_535 = (p_1986->g_333.x ^= ((safe_mul_func_int8_t_s_s(0x2BL, (l_523.y != (0xE8L != (l_493 = (l_528 = l_411)))))) >= ((VECTOR(uint16_t, 4))(l_530.zzzz)).x))), (((VECTOR(uint64_t, 2))(18446744073709551613UL, 0x54A1BF913048D2A2L)).lo >= (safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((0L >= (***p_1986->g_393)), 1)) , (p_1986->g_540.x = ((VECTOR(int8_t, 16))(p_1986->g_540.yxxyxyyyxyyyyxyx)).s9)), p_29))))) , (l_423.sd = (((safe_sub_func_int32_t_s_s((l_543 == l_544), p_30)) , l_545[2]) != &p_1986->g_79))) & p_30) ^ 0x47FD85FB8E5D72F2L), 0x5E9CL, 0x4FC9L, ((VECTOR(int16_t, 4))(0x23EFL)), ((VECTOR(int16_t, 8))((-1L))))).lo)).odd))).y, p_1986->g_361.s5)), p_1986->g_155)) , l_528)))
                    { /* block id: 226 */
                        int32_t *l_548 = &l_466;
                        VECTOR(uint32_t, 16) l_559 = (VECTOR(uint32_t, 16))(0x2E1EBCDDL, (VECTOR(uint32_t, 4))(0x2E1EBCDDL, (VECTOR(uint32_t, 2))(0x2E1EBCDDL, 0x754FCFA5L), 0x754FCFA5L), 0x754FCFA5L, 0x2E1EBCDDL, 0x754FCFA5L, (VECTOR(uint32_t, 2))(0x2E1EBCDDL, 0x754FCFA5L), (VECTOR(uint32_t, 2))(0x2E1EBCDDL, 0x754FCFA5L), 0x2E1EBCDDL, 0x754FCFA5L, 0x2E1EBCDDL, 0x754FCFA5L);
                        uint64_t *l_568 = &p_1986->g_569;
                        uint32_t l_573 = 2UL;
                        int i;
                        (*l_548) = l_546;
                        (*l_548) = l_528;
                        if (l_549[1])
                            break;
                        (*l_548) |= ((l_528 <= ((((safe_lshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(0x3CEF9050L, (((((safe_mod_func_int64_t_s_s((((((l_556 > (safe_rshift_func_int8_t_s_s((((*l_455) = FAKE_DIVERGE(p_1986->global_2_offset, get_global_id(2), 10)) && ((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_559.s86)).yyxxyxyyyxxyyxyx)), (uint32_t)((safe_sub_func_uint64_t_u_u(0xB52E8D2751DF8B25L, (safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_1986->g_333.w, (((-1L) >= ((p_1986->g_273.w < (((((++(*l_568)) , (void*)0) != (l_572 = ((*l_355) = &p_1986->g_309))) , p_30) || p_1986->g_187)) > FAKE_DIVERGE(p_1986->group_1_offset, get_group_id(1), 10))) & l_426.s5))), 3UL)), 12)))) && l_573), (uint32_t)l_472))).s9), 3))) <= p_1986->g_270.s6) && l_574.s9) != p_1986->g_60.s5) & 9UL), p_1986->g_316.y)) > l_523.x) != 0x5CL) != (-4L)) <= p_1986->g_361.s6))) ^ p_32), 3)) , l_575[1]) == p_1986->g_576) | 4L)) , l_528);
                    }
                    else
                    { /* block id: 235 */
                        int32_t **l_578 = &p_1986->g_377;
                        int64_t *l_599 = &p_1986->g_84[2];
                        (*l_578) = (void*)0;
                        l_601 |= (~((safe_unary_minus_func_int32_t_s(((safe_sub_func_int64_t_s_s((+(safe_add_func_int32_t_s_s((l_491 ^= (p_30 != (safe_mod_func_uint16_t_u_u(((l_528 = ((p_1986->g_136.s3 , (((((0x0469L | (safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((p_1986->g_222.s9 || ((l_523.y , l_592[5]) == ((((((*l_599) = ((safe_lshift_func_int16_t_s_s((p_1986->g_270.sd , p_29), 9)) ^ (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((p_30 | p_29), l_364)), FAKE_DIVERGE(p_1986->global_2_offset, get_global_id(2), 10))))) || p_1986->g_252.s3) != (-8L)) > l_492) , &p_1986->g_43))) && l_546), 18446744073709551615UL)), 7))) , 18446744073709551608UL) , 0x71AFC1C25D0F7E54L) >= 1UL) != 0x2EL)) ^ p_1986->g_270.sf)) | p_31), l_523.x)))), l_600))), 0x6D8F18960604CCA5L)) & FAKE_DIVERGE(p_1986->global_0_offset, get_global_id(0), 10)))) || p_1986->g_136.s0));
                        (*p_1986->g_435) = func_138(l_599, p_1986);
                    }
                    (*p_1986->g_435) = &l_410;
                    for (l_466 = (-29); (l_466 == (-16)); l_466 = safe_add_func_uint32_t_u_u(l_466, 3))
                    { /* block id: 246 */
                        (*p_1986->g_377) ^= 0x685D6354L;
                        if (l_600)
                            continue;
                    }
                    for (p_28 = (-3); (p_28 >= 3); ++p_28)
                    { /* block id: 252 */
                        (*p_1986->g_606) = func_138(&p_1986->g_123[0][3][9], p_1986);
                    }
                }
                if (l_523.x)
                    break;
                l_607 ^= ((VECTOR(int32_t, 2))((-1L), 0x7902C49AL)).odd;
            }
            l_465 ^= l_490;
            for (l_492 = 0; (l_492 >= 7); l_492++)
            { /* block id: 262 */
                int16_t *l_615[3];
                int32_t l_643[3];
                VECTOR(int32_t, 8) l_646 = (VECTOR(int32_t, 8))(0x344A26ABL, (VECTOR(int32_t, 4))(0x344A26ABL, (VECTOR(int32_t, 2))(0x344A26ABL, 6L), 6L), 6L, 0x344A26ABL, 6L);
                VECTOR(int32_t, 2) l_657 = (VECTOR(int32_t, 2))(0L, (-6L));
                int i;
                for (i = 0; i < 3; i++)
                    l_615[i] = (void*)0;
                for (i = 0; i < 3; i++)
                    l_643[i] = 0x0193C501L;
                l_423.s1 ^= ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_612.zy)).xyyx)).zzzxywwwxwwzwwwz)), ((VECTOR(int16_t, 16))((0x6E520A80L <= ((((p_29 < (l_59.x ^ 0x88F6FF0BL)) , (safe_div_func_int16_t_s_s((p_1986->g_270.s3 = 0x5E59L), 1UL))) & ((((&p_1986->g_308 == (void*)0) , 0x5AEF35CA4DF84EEFL) ^ 0x0008BBB5BAA3335AL) >= p_1986->g_comm_values[p_1986->tid])) | p_1986->g_503)), ((VECTOR(int16_t, 2))((-1L))), p_30, 0x7BCEL, ((VECTOR(int16_t, 4))(0x3259L)), 0L, ((VECTOR(int16_t, 2))(0L)), 1L, ((VECTOR(int16_t, 2))(0L)), 0x783BL)), ((VECTOR(int16_t, 16))(3L))))).s26d4, ((VECTOR(uint16_t, 4))(0x0D83L))))).w;
                if ((safe_lshift_func_uint16_t_u_u(0x1059L, 13)))
                { /* block id: 265 */
                    uint32_t l_639[10] = {0x8F9AA5D3L,0x8F9AA5D3L,0x8F9AA5D3L,0x8F9AA5D3L,0x8F9AA5D3L,0x8F9AA5D3L,0x8F9AA5D3L,0x8F9AA5D3L,0x8F9AA5D3L,0x8F9AA5D3L};
                    int i;
                    if ((atomic_inc(&p_1986->l_atomic_input[51]) == 7))
                    { /* block id: 267 */
                        uint32_t l_618 = 4294967287UL;
                        l_618 = 0x4FA535F6L;
                        unsigned int result = 0;
                        result += l_618;
                        atomic_add(&p_1986->l_special_values[51], result);
                    }
                    else
                    { /* block id: 269 */
                        (1 + 1);
                    }
                    if (p_32)
                    { /* block id: 272 */
                        int32_t **l_619 = (void*)0;
                        int32_t **l_621 = &l_609[2][4][0];
                        int32_t *l_632[2];
                        uint64_t *l_640 = (void*)0;
                        uint64_t *l_641[9][8][3] = {{{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]}},{{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]}},{{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]}},{{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]}},{{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]}},{{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]}},{{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]}},{{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]}},{{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]},{&p_1986->g_323,&p_1986->g_323,&p_1986->g_321[0][0][0]}}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_632[i] = &p_1986->g_633[0];
                        (*l_621) = func_138(&p_1986->g_321[0][0][0], p_1986);
                        l_643[1] ^= (safe_add_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s(5L, p_1986->g_316.z)) || (p_31 < l_69.s7)), (((safe_sub_func_int16_t_s_s((*p_1986->g_391), (~p_1986->g_361.s6))) ^ ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))((safe_sub_func_int32_t_s_s(0x72B7DCA7L, ((l_642 = ((((safe_div_func_int32_t_s_s((((VECTOR(int32_t, 4))((p_1986->g_633[0] = 0x4E1C77CFL), 0x1E65FF44L, 0x5C427F78L, 7L)).y , (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0x4605L, 1UL)).odd, 2)) > FAKE_DIVERGE(p_1986->local_0_offset, get_local_id(0), 10)), (GROUP_DIVERGE(0, 1) & (((+(0xC5978E08L ^ 0UL)) & p_1986->g_123[0][3][0]) || l_638))))), p_32)) >= GROUP_DIVERGE(0, 1)) != l_639[9]) , 3UL)) <= p_1986->g_316.x))), 0x70L, 0x1FL, (-8L))), ((VECTOR(uint8_t, 4))(1UL))))).y) & 0L)));
                    }
                    else
                    { /* block id: 277 */
                        if (p_31)
                            break;
                    }
                }
                else
                { /* block id: 280 */
                    uint64_t *l_644 = &p_1986->g_123[0][3][0];
                    int16_t **l_648 = &l_615[0];
                    int32_t l_666 = 0L;
                    (*p_1986->g_645) = func_138(l_644, p_1986);
                    l_646.s1 = ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_646.s2606)), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(0x77FA1E04L, ((VECTOR(int32_t, 4))(0x515C17D7L, 0x7971DED4L, 0x45B7A3E0L, 0x2B2B6C44L)), 0x017FDECBL, 0x146FDB3AL, 0x172D6D4AL)).odd, (int32_t)((safe_unary_minus_func_uint8_t_u((&l_615[2] == l_648))) != ((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((p_1986->g_331.s2 , (l_653 == (void*)0)), l_69.s5)), (safe_div_func_uint32_t_u_u((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_1986->g_656.sf7dd7ed7062bb935)).s5a)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_657.xyxx)).lo))))), l_643[1], 0x394B2935L, (((((safe_sub_func_int16_t_s_s((((((safe_div_func_uint32_t_u_u(FAKE_DIVERGE(p_1986->global_1_offset, get_global_id(1), 10), (p_1986->g_60.s2 = 0x308FCDFCL))) | (safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((l_666 ^= (l_657.x ^= (((((void*)0 == &p_1986->g_43) >= 65535UL) <= p_31) , 0x5713L))), 0x6F56L)), p_29))) && 0x05L) , l_646.s0) , l_643[1]), GROUP_DIVERGE(1, 1))) ^ GROUP_DIVERGE(0, 1)) ^ p_29) >= p_1986->g_84[2]) , 0x34721F66L), ((VECTOR(int32_t, 2))(0x01004D1EL)), (-3L))))).s1 || 0x9BFCA650L), 7UL)))) != 5UL)), (int32_t)l_667))))).even)).even)).xxyyxxxx, (int32_t)l_666))).s1;
                }
                for (p_1986->g_569 = 0; (p_1986->g_569 == 57); p_1986->g_569 = safe_add_func_uint8_t_u_u(p_1986->g_569, 6))
                { /* block id: 289 */
                    l_670 ^= l_422.s4;
                    if (p_1986->g_671)
                        break;
                    if (l_59.z)
                        continue;
                }
                l_672 |= (l_646.s0 ^= (p_1986->g_540.y != ((void*)0 == &p_1986->g_221)));
            }
        }
        for (l_411 = (-14); (l_411 >= 26); l_411++)
        { /* block id: 300 */
            if (l_423.s2)
                break;
        }
    }
    if ((safe_mul_func_int16_t_s_s((((((l_735[0][5] = (l_689.s5 = (safe_lshift_func_uint8_t_u_u((l_685--), (((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x6F03A460L, (-9L))))).xyxxxyyxxyxyxyyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(l_688.wzyywyyz)), ((VECTOR(int32_t, 16))(l_689.s4143603037307422)).hi))).s6625414270761644))))).s9 == (((VECTOR(int32_t, 2))(l_690.s21)).hi ^ ((l_352.x & ((((VECTOR(uint64_t, 8))(0x49AD231450B0BD43L, ((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 2))(l_691.ww)).xxxy))), (safe_div_func_uint32_t_u_u((--(*l_694)), (l_730[4][0][4] ^= (safe_add_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((safe_lshift_func_uint8_t_u_s((l_729 |= (l_728 = ((((p_29 < p_29) , p_32) , l_683[2][0][0]) > (((((VECTOR(uint8_t, 4))(255UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_702.xxyxyyyyyyyxyxxx)).sbb)), 0xFDL)).y < ((VECTOR(int8_t, 8))(l_703.s8c2c3fd1)).s0) > (((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(l_704.s3414)), ((VECTOR(int8_t, 16))((l_423.s5 = 0x7CL), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x5CL, 0L)))), 7L, 0x74L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_705.sd992)))), ((safe_add_func_int64_t_s_s((safe_div_func_uint64_t_u_u(((((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(l_710.wxwxwwyyxwwywywy)).hi, ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(l_711.yy)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(1UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(0x54L, ((VECTOR(int8_t, 2))(l_712.s64)), 0x7CL)).xywyzyww, ((VECTOR(int8_t, 16))(l_713.zywyxwywxyzyzyzy)).even, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))((-8L), 0L)), 0L)).yzwxyzzwzyxxwxzw, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_714.yzzx)).xxwzwzzxwwxzyyxz)), ((VECTOR(int8_t, 8))(l_715.zzwyxxzx)).s7256255541334416, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0x1DL, 1L, 0x1DL, 0x63L)).xywzxxxx)).s0633413772612013))))))).s18, ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))((l_59.z = ((((safe_mul_func_int16_t_s_s(p_32, ((((safe_sub_func_uint64_t_u_u(((l_423.se ^= ((VECTOR(int64_t, 16))(p_1986->g_720.s3721522107240025)).s8) & (safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(((((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(9L, (-1L))).hi, 14)) , l_694) != (void*)0) || l_549[0]), l_710.w, p_1986->g_656.sb, (-5L), 0x5BL, 3L, p_31, 0x5AL, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 4))(0x66L)), 0x35L, (-2L))), ((VECTOR(int8_t, 16))(7L))))).saf)).odd, 5)) , l_715.z), p_1986->g_167))), l_530.y)) ^ l_69.s0) >= p_31) < p_1986->g_333.z))) > 249UL) || (***p_1986->g_393)) != l_727[2])), ((VECTOR(int8_t, 2))(0x26L)), 0x17L, p_31, 9L, ((VECTOR(int8_t, 4))(0x2FL)), ((VECTOR(int8_t, 2))(0L)), p_1986->g_633[0], 1L, 0x05L, 0x64L)))))).s33)), ((VECTOR(int8_t, 2))(0L))))).xyxy)).even)).yxxxxxxxxyxyyxyx, ((VECTOR(int8_t, 16))(1L))))).even, ((VECTOR(int8_t, 8))(0x15L))))).s57))).xxxxyyyyyxxxxxxx))).odd, ((VECTOR(int8_t, 8))((-8L))))))))).odd))), ((VECTOR(uint8_t, 4))(0x08L)))))).s6, 253UL, 8UL)).zwyxwxyz, ((VECTOR(uint8_t, 8))(2UL))))).s60)), ((VECTOR(uint8_t, 2))(1UL))))).xyyxyyxy, ((VECTOR(uint8_t, 8))(250UL))))).hi)).xxyzywxxzzyzzxww))).even))).s3 || p_29) != l_710.w), l_330[3])), p_1986->g_167)) != p_1986->g_223.x), ((VECTOR(int8_t, 2))(0x35L)), p_1986->g_123[0][0][8], p_1986->g_2, (-1L), 0x68L)).sf263))), 0x14L, p_31, ((VECTOR(int8_t, 8))((-1L))), (-1L), (-1L))), ((VECTOR(int8_t, 16))((-1L)))))).even, ((VECTOR(int8_t, 8))((-9L)))))).s5 & l_705.sb)) && l_352.x)))), 7)))), 9UL))))), 6UL, 0xD74DE0537CAAA797L)).s6 <= 0x44A86113D2427FAEL) | p_31)) > l_705.sb))))))) < p_1986->g_720.s4) , &p_1986->g_569) != l_736) > p_29), p_1986->g_270.s8)))
    { /* block id: 314 */
        int16_t *l_738 = &p_1986->g_508;
        int16_t **l_737 = &l_738;
        uint64_t *l_745 = &p_1986->g_123[0][3][0];
        uint64_t *l_748 = (void*)0;
        uint64_t **l_747[2][10] = {{&l_748,&l_748,&l_748,&l_748,&l_748,&l_748,&l_748,&l_748,&l_748,&l_748},{&l_748,&l_748,&l_748,&l_748,&l_748,&l_748,&l_748,&l_748,&l_748,&l_748}};
        uint64_t *l_749 = &p_1986->g_321[0][0][0];
        int32_t l_750 = 0x7EFE41B5L;
        int8_t *l_760 = (void*)0;
        int8_t *l_761 = &l_549[1];
        int32_t l_772[6][4] = {{0x4D0805DDL,0x4D0805DDL,1L,0x65D967ACL},{0x4D0805DDL,0x4D0805DDL,1L,0x65D967ACL},{0x4D0805DDL,0x4D0805DDL,1L,0x65D967ACL},{0x4D0805DDL,0x4D0805DDL,1L,0x65D967ACL},{0x4D0805DDL,0x4D0805DDL,1L,0x65D967ACL},{0x4D0805DDL,0x4D0805DDL,1L,0x65D967ACL}};
        int32_t l_781 = 0x34260D53L;
        int i, j;
        p_1986->g_337.s1 ^= ((((p_32 , ((*l_737) = &p_1986->g_262)) != &l_727[2]) , (((((safe_rshift_func_int8_t_s_u(((0x63L <= (((p_1986->g_746 = l_745) != (l_749 = &l_735[3][3])) != ((void*)0 != &l_549[2]))) <= (65532UL < l_750)), 7)) , (void*)0) == &p_1986->g_221) > p_1986->g_60.s4) >= (***p_1986->g_393))) <= GROUP_DIVERGE(2, 1));
        for (p_28 = 0; (p_28 > 9); p_28++)
        { /* block id: 321 */
            int32_t *l_753 = (void*)0;
            if (p_30)
                break;
            return l_753;
        }
        l_772[5][1] = (safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))((((((0xC6L & (((((l_750 = ((*l_761) = ((*l_737) == (void*)0))) <= ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_762.sde336d0fd118e346)).s75)), 0x67C90AA8L, 1UL)).x , (((*l_694) = (safe_rshift_func_int16_t_s_u(0x55A1L, ((((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 16))(l_765.s6160330270146332)).odd, ((VECTOR(uint64_t, 16))(p_1986->g_766.s7679b60132cd3596)).even, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_1986->g_767.xxyy)).even)).yxyyyyyy))).s3 , ((safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s(l_772[0][1], (*p_1986->g_746))), (safe_mod_func_int16_t_s_s(6L, ((VECTOR(uint16_t, 2))(0UL, 0xD624L)).even)))) < (safe_mul_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_772[0][1], ((l_781 = l_772[0][1]) || 18446744073709551614UL))), p_31)) , 0x763CL) , p_1986->g_79), p_1986->g_346.x)))) != 0x2444L)))) & 0xF55B2F88L)) > p_30)) & l_772[0][1]) < (*p_1986->g_746)) && p_32)) | 0x04E9L) & 4294967295UL) , 1L) > p_29), ((VECTOR(int64_t, 4))(0L)), 0x7A79F065190A5DBAL, ((VECTOR(int64_t, 8))(0L)), 0x33C30F41797BED21L, 0x571ED123BA5515D9L)).s8a35, ((VECTOR(int64_t, 4))((-9L))), ((VECTOR(int64_t, 4))(0x6EC3C1578FC8BDBFL))))).w, 5UL)), p_29)), 0x73AEL));
        (*p_1986->g_782) = func_138(&l_735[0][5], p_1986);
    }
    else
    { /* block id: 331 */
        int64_t ***l_784 = &l_783[1][2];
        int32_t *l_785[8] = {&l_730[4][0][4],&l_730[0][0][3],&l_730[4][0][4],&l_730[4][0][4],&l_730[0][0][3],&l_730[4][0][4],&l_730[4][0][4],&l_730[0][0][3]};
        int32_t **l_787 = (void*)0;
        int32_t **l_788[10] = {&l_734,&l_785[3],(void*)0,&l_785[3],&l_734,&l_734,&l_785[3],(void*)0,&l_785[3],&l_734};
        int i;
        (*l_784) = l_783[1][2];
        (*p_1986->g_786) = l_785[7];
        l_732 = (*p_1986->g_606);
    }
    return l_790;
}


/* ------------------------------------------ */
/* 
 * reads : p_1986->g_252 p_1986->g_160 p_1986->l_comm_values p_1986->g_60 p_1986->g_270 p_1986->g_273 p_1986->g_277 p_1986->g_84 p_1986->g_44 p_1986->g_155 p_1986->g_79 p_1986->g_262 p_1986->g_43 p_1986->g_222
 * writes: p_1986->g_187 p_1986->g_262 p_1986->g_60 p_1986->g_155
 */
uint8_t  func_62(uint16_t  p_63, int32_t  p_64, uint32_t * p_65, struct S0 * p_1986)
{ /* block id: 85 */
    int32_t *l_246 = (void*)0;
    int32_t **l_247 = &l_246;
    VECTOR(uint16_t, 2) l_271 = (VECTOR(uint16_t, 2))(65532UL, 0x99B2L);
    VECTOR(uint16_t, 2) l_272 = (VECTOR(uint16_t, 2))(65535UL, 65533UL);
    int32_t l_276[4][5] = {{0x27C93727L,0x27C93727L,(-1L),8L,9L},{0x27C93727L,0x27C93727L,(-1L),8L,9L},{0x27C93727L,0x27C93727L,(-1L),8L,9L},{0x27C93727L,0x27C93727L,(-1L),8L,9L}};
    uint32_t **l_287 = &p_1986->g_43;
    int i, j;
    (*l_247) = l_246;
    for (p_64 = 25; (p_64 > (-28)); p_64--)
    { /* block id: 89 */
        uint64_t l_255 = 0x9092F00DD55F4550L;
        int16_t *l_260 = &p_1986->g_187;
        int16_t *l_261 = &p_1986->g_262;
        int32_t *l_263 = (void*)0;
        int32_t *l_264 = (void*)0;
        int32_t *l_265 = (void*)0;
        int32_t *l_266 = (void*)0;
        int32_t *l_267 = (void*)0;
        int32_t *l_268 = (void*)0;
        int32_t l_269 = 1L;
        VECTOR(int64_t, 4) l_278 = (VECTOR(int64_t, 4))(0x69850E9C8482E40AL, (VECTOR(int64_t, 2))(0x69850E9C8482E40AL, 0L), 0L);
        VECTOR(int64_t, 16) l_285 = (VECTOR(int64_t, 16))(0x16CA5DC35F61777CL, (VECTOR(int64_t, 4))(0x16CA5DC35F61777CL, (VECTOR(int64_t, 2))(0x16CA5DC35F61777CL, 2L), 2L), 2L, 0x16CA5DC35F61777CL, 2L, (VECTOR(int64_t, 2))(0x16CA5DC35F61777CL, 2L), (VECTOR(int64_t, 2))(0x16CA5DC35F61777CL, 2L), 0x16CA5DC35F61777CL, 2L, 0x16CA5DC35F61777CL, 2L);
        uint32_t **l_286 = &p_1986->g_43;
        uint32_t ***l_288 = &l_286;
        uint64_t *l_294 = &l_255;
        uint32_t *l_295 = &p_1986->g_155;
        int32_t *l_296 = &l_269;
        int i;
        p_1986->g_60.s2 |= (l_269 = (safe_lshift_func_int16_t_s_u(((((1UL < (0x023EAC5FL > (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(p_1986->g_252.s926f0e8b)).odd)).w || (((*l_261) = ((*l_260) = ((safe_add_func_uint64_t_u_u(((p_64 && l_255) , p_1986->g_252.sa), GROUP_DIVERGE(0, 1))) > (safe_mul_func_uint8_t_u_u(l_255, (safe_add_func_uint32_t_u_u(((void*)0 != l_260), p_63))))))) && 0x5B41L)))) & p_1986->g_160.y) ^ 0x29L) && p_1986->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1986->tid, 14))]), p_63)));
        l_269 &= ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))((-1L), (-8L))).xxyyyyxx, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(p_1986->g_270.s3e)).yxyxxyyyyyxyyxxx, ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(l_271.xy)).yxyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_272.xyyy)))), ((VECTOR(uint16_t, 2))(p_1986->g_273.zy)).yxxy))).wzwxxyxwxwyzxyyw))).s2b7d)), ((4294967287UL != p_63) , (p_1986->g_60.s2 &= ((safe_add_func_uint32_t_u_u(4294967295UL, l_276[0][1])) == ((VECTOR(uint16_t, 2))(p_1986->g_277.xw)).even))), 0x1884D231L, 0x3BFB1276L, 0x46F29274L)))).even, (int32_t)(((VECTOR(int64_t, 8))(l_278.yzwzxwzw)).s1 , (-1L))))).yxxzxwyy))).s3;
        (*l_296) ^= (safe_rshift_func_uint16_t_u_u((((*l_295) |= (safe_add_func_uint8_t_u_u(((p_64 , p_64) > p_1986->g_273.w), (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_285.sca)).hi, ((((*l_288) = (l_287 = l_286)) == (void*)0) , ((*l_294) ^= (safe_add_func_uint64_t_u_u(((((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(((p_63 && 9UL) < p_64))), p_1986->g_84[2])) > p_64) > p_1986->g_44) != p_64), (-4L)))))))))) > p_1986->g_79), GROUP_DIVERGE(0, 1)));
    }
    for (p_1986->g_262 = 18; (p_1986->g_262 > 20); ++p_1986->g_262)
    { /* block id: 104 */
        uint32_t *l_299 = &p_1986->g_34;
        int32_t *l_300 = &l_276[3][2];
        if (p_64)
            break;
        (*l_300) = (l_299 != (*l_287));
    }
    return p_1986->g_222.s8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1986->g_84 p_1986->g_4 p_1986->g_79 p_1986->g_44 p_1986->g_136 p_1986->g_34 p_1986->g_160 p_1986->g_60 p_1986->g_comm_values p_1986->g_187 p_1986->l_comm_values p_1986->g_167 p_1986->g_222 p_1986->g_223 p_1986->g_3
 * writes: p_1986->g_79 p_1986->g_43 p_1986->g_123 p_1986->g_60 p_1986->g_155 p_1986->g_167 p_1986->g_160 p_1986->g_187 p_1986->g_221
 */
int16_t  func_70(int32_t * p_71, int16_t  p_72, int64_t  p_73, uint32_t  p_74, int32_t  p_75, struct S0 * p_1986)
{ /* block id: 18 */
    int32_t l_86 = 1L;
    int32_t l_102 = 5L;
    uint16_t *l_181 = (void*)0;
    int32_t l_212 = 0x335BF821L;
    uint16_t **l_220[10][2] = {{&l_181,&l_181},{&l_181,&l_181},{&l_181,&l_181},{&l_181,&l_181},{&l_181,&l_181},{&l_181,&l_181},{&l_181,&l_181},{&l_181,&l_181},{&l_181,&l_181},{&l_181,&l_181}};
    VECTOR(int64_t, 2) l_224 = (VECTOR(int64_t, 2))(0x1BD201EBDC434A21L, 0x48C0B1116317C229L);
    int64_t *l_227[7];
    VECTOR(uint64_t, 4) l_232 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xC1A50624BA6F3B49L), 0xC1A50624BA6F3B49L);
    uint64_t *l_233[7][9][4] = {{{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0}},{{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0}},{{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0}},{{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0}},{{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0}},{{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0}},{{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0},{&p_1986->g_123[0][0][4],(void*)0,&p_1986->g_123[0][3][0],(void*)0}}};
    int32_t l_234 = 1L;
    int32_t *l_235 = &l_212;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_227[i] = (void*)0;
    for (p_75 = 0; (p_75 >= (-17)); --p_75)
    { /* block id: 21 */
        int8_t l_85 = 1L;
        l_86 = (l_85 = p_1986->g_84[2]);
        if ((*p_71))
            break;
        for (p_1986->g_79 = 0; (p_1986->g_79 < 2); ++p_1986->g_79)
        { /* block id: 27 */
            uint32_t l_89 = 0xFB8AAA84L;
            int32_t l_91 = 0x43A54D8FL;
            l_91 ^= l_89;
        }
    }
    for (p_75 = (-10); (p_75 < (-9)); p_75 = safe_add_func_uint8_t_u_u(p_75, 5))
    { /* block id: 33 */
        VECTOR(uint8_t, 16) l_96 = (VECTOR(uint8_t, 16))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0xE6L), 0xE6L), 0xE6L, 247UL, 0xE6L, (VECTOR(uint8_t, 2))(247UL, 0xE6L), (VECTOR(uint8_t, 2))(247UL, 0xE6L), 247UL, 0xE6L, 247UL, 0xE6L);
        uint16_t **l_182 = &l_181;
        uint8_t *l_183[10][2][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int16_t *l_186 = &p_1986->g_187;
        uint32_t *l_189 = &p_1986->g_44;
        uint32_t **l_188 = &l_189;
        int32_t l_196 = (-1L);
        int32_t l_209 = 8L;
        int32_t l_210 = 0L;
        int32_t l_211[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int32_t *l_217 = &l_212;
        int32_t **l_216[5][9][2] = {{{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0}},{{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0}},{{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0}},{{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0}},{{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0},{&l_217,(void*)0}}};
        int i, j, k;
        if (((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))((((p_1986->g_44 , ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_96.sd5)), 0UL, 6UL)), ((safe_mod_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((((safe_unary_minus_func_int8_t_s(0x34L)) , (((p_1986->g_160.z = (((l_102 = 0x2EA20016L) , func_103(p_1986->g_84[2], p_1986)) != ((*l_182) = l_181))) ^ (((safe_rshift_func_int16_t_s_s(((*l_186) |= p_74), 11)) & p_1986->g_34) < (l_188 != &l_189))) | (*p_71))) && l_86), FAKE_DIVERGE(p_1986->global_1_offset, get_global_id(1), 10))) | 0x4D8EL), p_75)) , p_73), l_86, 7UL, 255UL)).hi)), 8UL, 0x12L, 255UL, 247UL)).s5, 8UL)) & (-1L))) , 2UL) , 0x00EAL), ((VECTOR(int16_t, 2))(0x18C8L)), 0L)), ((VECTOR(uint16_t, 4))(0xA73CL))))).z)
        { /* block id: 56 */
            return p_1986->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1986->tid, 14))];
        }
        else
        { /* block id: 58 */
            int32_t l_197 = 7L;
            VECTOR(int32_t, 2) l_208 = (VECTOR(int32_t, 2))(1L, 0x29B3D71BL);
            uint32_t l_213 = 0xDAFFF069L;
            int i;
            for (p_72 = 0; (p_72 > 20); p_72 = safe_add_func_uint16_t_u_u(p_72, 5))
            { /* block id: 61 */
                uint64_t *l_198 = &p_1986->g_123[0][1][8];
                int32_t l_202 = 0x17905CFCL;
                int32_t l_205 = 0x488E89D4L;
                int32_t l_206 = 0x50D81AABL;
                int32_t l_207[5] = {(-8L),(-8L),(-8L),(-8L),(-8L)};
                int i;
                for (p_1986->g_167 = 0; (p_1986->g_167 != 49); p_1986->g_167 = safe_add_func_uint32_t_u_u(p_1986->g_167, 5))
                { /* block id: 64 */
                    int32_t *l_200 = (void*)0;
                    int32_t **l_199 = &l_200;
                    int32_t *l_201 = &l_102;
                    int32_t *l_203 = &l_202;
                    int32_t *l_204[5][1] = {{&l_102},{&l_102},{&l_102},{&l_102},{&l_102}};
                    int i, j;
                    (*l_199) = func_138((((l_196 = ((safe_lshift_func_int16_t_s_u((&p_1986->g_79 != (void*)0), 8)) & ((VECTOR(uint64_t, 2))(0xFA00B79E957A56D6L, 1UL)).hi)) & l_197) , l_198), p_1986);
                    l_213--;
                }
            }
        }
        p_71 = &l_209;
        return p_1986->g_60.s1;
    }
    (*l_235) = (safe_rshift_func_int16_t_s_s((0x70185C4AL ^ (((&p_1986->g_79 == (p_1986->g_221 = l_181)) > p_73) , (*p_71))), (0x79L && (!(((VECTOR(int64_t, 8))(p_1986->g_222.sdbf7e247)).s3 > ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(p_1986->g_223.xxyyxxyx)).s15)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_224.xyxy)))).lo, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((~(safe_div_func_int32_t_s_s(((l_227[4] != (void*)0) == (((safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 16))(l_232.zyxzyyzyyzwyzxwz)).hi, (uint64_t)(p_1986->g_123[0][4][5] = FAKE_DIVERGE(p_1986->local_0_offset, get_local_id(0), 10))))).s2 | FAKE_DIVERGE(p_1986->group_1_offset, get_group_id(1), 10)) || l_234), 1UL)), p_72)) | l_232.x) ^ p_75)), p_73))) , l_224.y), ((VECTOR(int64_t, 2))(1L)), 0L)))).odd))).xxxy)).lo))).yxxy, ((VECTOR(int64_t, 4))(0x5BAB2BB56A64D3B0L))))).y)))));
    if ((atomic_inc(&p_1986->l_atomic_input[20]) == 2))
    { /* block id: 78 */
        uint32_t l_236 = 0xF087F3A9L;
        int32_t l_239[10];
        int64_t l_240 = (-3L);
        int32_t l_241[10] = {0x6DC81BBDL,0L,(-1L),0L,0x6DC81BBDL,0x6DC81BBDL,0L,(-1L),0L,0x6DC81BBDL};
        int16_t l_242 = 0x6304L;
        uint16_t l_243 = 1UL;
        int i;
        for (i = 0; i < 10; i++)
            l_239[i] = 0x1B247C13L;
        --l_236;
        ++l_243;
        unsigned int result = 0;
        result += l_236;
        int l_239_i0;
        for (l_239_i0 = 0; l_239_i0 < 10; l_239_i0++) {
            result += l_239[l_239_i0];
        }
        result += l_240;
        int l_241_i0;
        for (l_241_i0 = 0; l_241_i0 < 10; l_241_i0++) {
            result += l_241[l_241_i0];
        }
        result += l_242;
        result += l_243;
        atomic_add(&p_1986->l_special_values[20], result);
    }
    else
    { /* block id: 81 */
        (1 + 1);
    }
    return p_1986->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1986->g_136 p_1986->g_34 p_1986->g_79 p_1986->g_160 p_1986->g_60 p_1986->g_comm_values
 * writes: p_1986->g_43 p_1986->g_123 p_1986->g_60 p_1986->g_155 p_1986->g_167
 */
uint16_t * func_103(int64_t  p_104, struct S0 * p_1986)
{ /* block id: 35 */
    int32_t *l_105 = (void*)0;
    int32_t *l_106 = (void*)0;
    int32_t *l_107 = (void*)0;
    int32_t *l_108 = (void*)0;
    int32_t *l_109 = (void*)0;
    int32_t *l_110 = (void*)0;
    int32_t *l_111 = (void*)0;
    int32_t *l_112 = (void*)0;
    int32_t *l_113 = (void*)0;
    int32_t *l_114 = (void*)0;
    int32_t l_115[10][10] = {{0L,0L,1L,0L,0x29FB7A8BL,0L,1L,0L,0L,1L},{0L,0L,1L,0L,0x29FB7A8BL,0L,1L,0L,0L,1L},{0L,0L,1L,0L,0x29FB7A8BL,0L,1L,0L,0L,1L},{0L,0L,1L,0L,0x29FB7A8BL,0L,1L,0L,0L,1L},{0L,0L,1L,0L,0x29FB7A8BL,0L,1L,0L,0L,1L},{0L,0L,1L,0L,0x29FB7A8BL,0L,1L,0L,0L,1L},{0L,0L,1L,0L,0x29FB7A8BL,0L,1L,0L,0L,1L},{0L,0L,1L,0L,0x29FB7A8BL,0L,1L,0L,0L,1L},{0L,0L,1L,0L,0x29FB7A8BL,0L,1L,0L,0L,1L},{0L,0L,1L,0L,0x29FB7A8BL,0L,1L,0L,0L,1L}};
    int32_t *l_116[8][4][4] = {{{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]}},{{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]}},{{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]}},{{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]}},{{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]}},{{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]}},{{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]}},{{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]},{&p_1986->g_4,(void*)0,&p_1986->g_4,&l_115[7][4]}}};
    uint32_t l_117 = 1UL;
    uint32_t **l_120 = &p_1986->g_43;
    uint32_t l_121 = 0x3508C96FL;
    uint64_t *l_122 = &p_1986->g_123[0][3][0];
    int8_t l_149 = (-1L);
    int32_t l_179 = 0x5D7AA1D1L;
    uint16_t *l_180 = &p_1986->g_79;
    int i, j, k;
    l_117++;
    l_179 = ((((((*l_120) = (void*)0) == &p_1986->g_34) <= ((*l_122) = l_121)) && (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(func_128((safe_add_func_int32_t_s_s(p_104, (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(p_1986->g_136.sb4bd6b4620fe39eb)).sddf9)).x || ((*l_122) = (safe_unary_minus_func_int16_t_s(p_104)))))), func_138(l_122, p_1986), p_104, (safe_sub_func_uint32_t_u_u(p_1986->g_79, 0x531248EFL)), l_149, p_1986), 9)), GROUP_DIVERGE(0, 1)))) < p_1986->g_comm_values[p_1986->tid]);
    return l_180;
}


/* ------------------------------------------ */
/* 
 * reads : p_1986->g_79 p_1986->g_160 p_1986->g_60
 * writes: p_1986->g_155 p_1986->g_167
 */
uint16_t  func_128(uint32_t  p_129, uint32_t * p_130, uint32_t  p_131, int64_t  p_132, uint32_t  p_133, struct S0 * p_1986)
{ /* block id: 44 */
    uint64_t *l_152 = &p_1986->g_123[0][4][9];
    uint32_t *l_153 = (void*)0;
    uint32_t *l_154 = &p_1986->g_155;
    int32_t l_165 = (-1L);
    int64_t *l_166 = (void*)0;
    int32_t *l_172 = (void*)0;
    int32_t *l_176 = (void*)0;
    int32_t *l_177[7] = {&p_1986->g_4,&p_1986->g_4,&p_1986->g_4,&p_1986->g_4,&p_1986->g_4,&p_1986->g_4,&p_1986->g_4};
    uint16_t l_178 = 0xFAFFL;
    int i;
    atomic_max(&p_1986->g_atomic_reduction[get_linear_group_id()], p_129);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1986->v_collective += p_1986->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    l_178 ^= ((p_1986->g_167 = (((safe_add_func_int64_t_s_s((p_131 , (!((void*)0 != l_152))), (l_165 = (((((*l_154) = p_1986->g_79) & (+(safe_rshift_func_uint16_t_u_u(p_131, (safe_sub_func_uint16_t_u_u(65535UL, GROUP_DIVERGE(0, 1))))))) >= p_132) <= ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 2))(p_1986->g_160.xw)).xyyyyxyx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))((safe_add_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(p_131, 1UL)) || p_133), p_133)), (-9L), ((VECTOR(int8_t, 4))(0x5DL)), (-1L), 0L)).odd))).hi)).xyyxyxxy))).s6362234214605046, ((VECTOR(uint8_t, 16))(0x2DL)), ((VECTOR(uint8_t, 16))(0xFBL))))).odd, (uint8_t)l_165))).s3142661440517003, ((VECTOR(uint8_t, 16))(1UL))))).s68, ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 2))(0xE6L))))), 0xF6L, 7UL)).zyxyxxyy))))).s5)))) , p_1986->g_160.y) == 0xA3BFL)) , l_165);
    return p_1986->g_60.s0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1986->g_34
 * writes: p_1986->g_60
 */
uint32_t * func_138(uint64_t * p_139, struct S0 * p_1986)
{ /* block id: 40 */
    uint32_t l_140 = 0UL;
    int32_t *l_141 = (void*)0;
    int32_t *l_142 = (void*)0;
    int32_t *l_143 = (void*)0;
    int32_t *l_144 = (void*)0;
    int32_t *l_145 = (void*)0;
    int32_t *l_146[10][7][1] = {{{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4}},{{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4}},{{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4}},{{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4}},{{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4}},{{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4}},{{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4}},{{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4}},{{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4}},{{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4},{&p_1986->g_4}}};
    int i, j, k;
    l_140 = p_1986->g_34;
    p_1986->g_60.s4 = 0x1F20BB84L;
    return l_141;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[63];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 63; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[63];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 63; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[14];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 14; i++)
            l_comm_values[i] = 1;
    struct S0 c_1987;
    struct S0* p_1986 = &c_1987;
    struct S0 c_1988 = {
        0x439BEB06L, // p_1986->g_2
        0x44B4E126L, // p_1986->g_3
        0L, // p_1986->g_4
        6UL, // p_1986->g_34
        1UL, // p_1986->g_44
        &p_1986->g_44, // p_1986->g_43
        0xBF81606DL, // p_1986->g_45
        (VECTOR(int32_t, 8))(0x142FAFECL, (VECTOR(int32_t, 4))(0x142FAFECL, (VECTOR(int32_t, 2))(0x142FAFECL, 0L), 0L), 0L, 0x142FAFECL, 0L), // p_1986->g_60
        0x22E3L, // p_1986->g_79
        {(-1L),(-1L),(-1L)}, // p_1986->g_84
        (void*)0, // p_1986->g_90
        {{{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}}}, // p_1986->g_123
        (VECTOR(uint64_t, 16))(0x256DA865B3CABD61L, (VECTOR(uint64_t, 4))(0x256DA865B3CABD61L, (VECTOR(uint64_t, 2))(0x256DA865B3CABD61L, 0x4F691D68C9157731L), 0x4F691D68C9157731L), 0x4F691D68C9157731L, 0x256DA865B3CABD61L, 0x4F691D68C9157731L, (VECTOR(uint64_t, 2))(0x256DA865B3CABD61L, 0x4F691D68C9157731L), (VECTOR(uint64_t, 2))(0x256DA865B3CABD61L, 0x4F691D68C9157731L), 0x256DA865B3CABD61L, 0x4F691D68C9157731L, 0x256DA865B3CABD61L, 0x4F691D68C9157731L), // p_1986->g_136
        0xC0B3D1FDL, // p_1986->g_155
        (VECTOR(uint8_t, 4))(0x8BL, (VECTOR(uint8_t, 2))(0x8BL, 252UL), 252UL), // p_1986->g_160
        0x1E1C95C5L, // p_1986->g_167
        (void*)0, // p_1986->g_168
        (void*)0, // p_1986->g_169
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1986->g_170
        (void*)0, // p_1986->g_171
        (void*)0, // p_1986->g_173
        {{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,&p_1986->g_4,&p_1986->g_4,(void*)0,&p_1986->g_4}}, // p_1986->g_174
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1986->g_175
        9L, // p_1986->g_187
        &p_1986->g_79, // p_1986->g_221
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int64_t, 2))((-1L), 1L), (VECTOR(int64_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_1986->g_222
        (VECTOR(int64_t, 2))(1L, 0x7BCE47EAB302B97FL), // p_1986->g_223
        (VECTOR(uint8_t, 16))(0x78L, (VECTOR(uint8_t, 4))(0x78L, (VECTOR(uint8_t, 2))(0x78L, 0x72L), 0x72L), 0x72L, 0x78L, 0x72L, (VECTOR(uint8_t, 2))(0x78L, 0x72L), (VECTOR(uint8_t, 2))(0x78L, 0x72L), 0x78L, 0x72L, 0x78L, 0x72L), // p_1986->g_252
        0x2FCEL, // p_1986->g_262
        (VECTOR(int16_t, 16))(0x616EL, (VECTOR(int16_t, 4))(0x616EL, (VECTOR(int16_t, 2))(0x616EL, 7L), 7L), 7L, 0x616EL, 7L, (VECTOR(int16_t, 2))(0x616EL, 7L), (VECTOR(int16_t, 2))(0x616EL, 7L), 0x616EL, 7L, 0x616EL, 7L), // p_1986->g_270
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 2UL), 2UL), // p_1986->g_273
        (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0xD74EL), 0xD74EL), // p_1986->g_277
        (void*)0, // p_1986->g_304
        (void*)0, // p_1986->g_305
        {{{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4}},{{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4}},{{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4}},{{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4}},{{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4}},{{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4}},{{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4}},{{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4},{&p_1986->g_4,(void*)0,&p_1986->g_4}}}, // p_1986->g_306
        (void*)0, // p_1986->g_309
        &p_1986->g_309, // p_1986->g_308
        (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x0F8D0A34L), 0x0F8D0A34L), // p_1986->g_316
        {{{0x82977ADD14C6972DL},{0x82977ADD14C6972DL},{0x82977ADD14C6972DL},{0x82977ADD14C6972DL}},{{0x82977ADD14C6972DL},{0x82977ADD14C6972DL},{0x82977ADD14C6972DL},{0x82977ADD14C6972DL}}}, // p_1986->g_321
        0UL, // p_1986->g_323
        (VECTOR(int8_t, 8))(0x79L, (VECTOR(int8_t, 4))(0x79L, (VECTOR(int8_t, 2))(0x79L, 0x52L), 0x52L), 0x52L, 0x79L, 0x52L), // p_1986->g_331
        (VECTOR(int8_t, 8))(0x28L, (VECTOR(int8_t, 4))(0x28L, (VECTOR(int8_t, 2))(0x28L, 0x4CL), 0x4CL), 0x4CL, 0x28L, 0x4CL), // p_1986->g_332
        (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 1L), 1L), // p_1986->g_333
        {{{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0}},{{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0}},{{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0}},{{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0}},{{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0}},{{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0}},{{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0}},{{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0}},{{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0},{&p_1986->g_309,&p_1986->g_309,(void*)0,(void*)0}}}, // p_1986->g_335
        (VECTOR(int32_t, 8))(0x51187817L, (VECTOR(int32_t, 4))(0x51187817L, (VECTOR(int32_t, 2))(0x51187817L, 0x4FD4E2F4L), 0x4FD4E2F4L), 0x4FD4E2F4L, 0x51187817L, 0x4FD4E2F4L), // p_1986->g_337
        (VECTOR(int64_t, 2))(7L, 0x156FA1C930436C59L), // p_1986->g_346
        (VECTOR(uint64_t, 8))(0x55D9A9F4F744FA6FL, (VECTOR(uint64_t, 4))(0x55D9A9F4F744FA6FL, (VECTOR(uint64_t, 2))(0x55D9A9F4F744FA6FL, 0xF3D84D2C887AEE3BL), 0xF3D84D2C887AEE3BL), 0xF3D84D2C887AEE3BL, 0x55D9A9F4F744FA6FL, 0xF3D84D2C887AEE3BL), // p_1986->g_361
        (void*)0, // p_1986->g_363
        (VECTOR(uint32_t, 8))(0x4E8433C7L, (VECTOR(uint32_t, 4))(0x4E8433C7L, (VECTOR(uint32_t, 2))(0x4E8433C7L, 0xE5FE70CDL), 0xE5FE70CDL), 0xE5FE70CDL, 0x4E8433C7L, 0xE5FE70CDL), // p_1986->g_365
        (void*)0, // p_1986->g_366
        (void*)0, // p_1986->g_377
        &p_1986->g_377, // p_1986->g_376
        (void*)0, // p_1986->g_381
        (void*)0, // p_1986->g_382
        (void*)0, // p_1986->g_383
        (void*)0, // p_1986->g_384
        {{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L}}, // p_1986->g_392
        &p_1986->g_392[3][1], // p_1986->g_391
        {&p_1986->g_391,&p_1986->g_391,&p_1986->g_391}, // p_1986->g_390
        &p_1986->g_390[2], // p_1986->g_393
        (VECTOR(int32_t, 8))(0x1443B901L, (VECTOR(int32_t, 4))(0x1443B901L, (VECTOR(int32_t, 2))(0x1443B901L, 3L), 3L), 3L, 0x1443B901L, 3L), // p_1986->g_421
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x4021L), 0x4021L), // p_1986->g_428
        &p_1986->g_377, // p_1986->g_435
        0x6069987CL, // p_1986->g_503
        1L, // p_1986->g_508
        0xB5L, // p_1986->g_535
        (VECTOR(int8_t, 2))(1L, 0L), // p_1986->g_540
        (void*)0, // p_1986->g_547
        0x3BAD36AAE43666D1L, // p_1986->g_569
        (void*)0, // p_1986->g_577
        &p_1986->g_577, // p_1986->g_576
        &p_1986->g_377, // p_1986->g_606
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1986->g_608
        (void*)0, // p_1986->g_620
        {0x3F149A44L,0x3F149A44L}, // p_1986->g_633
        &p_1986->g_377, // p_1986->g_645
        (VECTOR(int32_t, 16))(0x0CB16F90L, (VECTOR(int32_t, 4))(0x0CB16F90L, (VECTOR(int32_t, 2))(0x0CB16F90L, 0x68A74B97L), 0x68A74B97L), 0x68A74B97L, 0x0CB16F90L, 0x68A74B97L, (VECTOR(int32_t, 2))(0x0CB16F90L, 0x68A74B97L), (VECTOR(int32_t, 2))(0x0CB16F90L, 0x68A74B97L), 0x0CB16F90L, 0x68A74B97L, 0x0CB16F90L, 0x68A74B97L), // p_1986->g_656
        0x7C0B120A014E3709L, // p_1986->g_671
        (VECTOR(int64_t, 8))(0x59CC387AD42A5D46L, (VECTOR(int64_t, 4))(0x59CC387AD42A5D46L, (VECTOR(int64_t, 2))(0x59CC387AD42A5D46L, 0x2861A68599B29CBBL), 0x2861A68599B29CBBL), 0x2861A68599B29CBBL, 0x59CC387AD42A5D46L, 0x2861A68599B29CBBL), // p_1986->g_720
        &p_1986->g_123[0][4][8], // p_1986->g_746
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xEE84967500610DB0L), 0xEE84967500610DB0L), 0xEE84967500610DB0L, 18446744073709551615UL, 0xEE84967500610DB0L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xEE84967500610DB0L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xEE84967500610DB0L), 18446744073709551615UL, 0xEE84967500610DB0L, 18446744073709551615UL, 0xEE84967500610DB0L), // p_1986->g_766
        (VECTOR(uint64_t, 2))(0x9506ED7C771D480DL, 18446744073709551615UL), // p_1986->g_767
        &p_1986->g_377, // p_1986->g_782
        &p_1986->g_377, // p_1986->g_786
        (VECTOR(uint64_t, 2))(0xD3B4F07357D53F3FL, 1UL), // p_1986->g_793
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 2UL), 2UL), 2UL, 255UL, 2UL), // p_1986->g_802
        (VECTOR(uint8_t, 16))(0xC7L, (VECTOR(uint8_t, 4))(0xC7L, (VECTOR(uint8_t, 2))(0xC7L, 0x49L), 0x49L), 0x49L, 0xC7L, 0x49L, (VECTOR(uint8_t, 2))(0xC7L, 0x49L), (VECTOR(uint8_t, 2))(0xC7L, 0x49L), 0xC7L, 0x49L, 0xC7L, 0x49L), // p_1986->g_803
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL, (VECTOR(uint8_t, 2))(0UL, 255UL), (VECTOR(uint8_t, 2))(0UL, 255UL), 0UL, 255UL, 0UL, 255UL), // p_1986->g_804
        0xB4992FF7A0795602L, // p_1986->g_811
        (VECTOR(uint64_t, 2))(0x48C4371DCB9CF581L, 6UL), // p_1986->g_815
        (void*)0, // p_1986->g_816
        (void*)0, // p_1986->g_817
        {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}, // p_1986->g_820
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1986->g_926
        &p_1986->g_926[0][7], // p_1986->g_925
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x77L), 0x77L), 0x77L, 1L, 0x77L), // p_1986->g_960
        &p_1986->g_377, // p_1986->g_966
        (VECTOR(uint64_t, 8))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x9D94EA4E5D1B482FL), 0x9D94EA4E5D1B482FL), 0x9D94EA4E5D1B482FL, 18446744073709551614UL, 0x9D94EA4E5D1B482FL), // p_1986->g_973
        {{{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0},{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0}},{{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0},{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0}},{{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0},{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0}},{{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0},{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0}},{{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0},{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0}},{{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0},{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0}},{{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0},{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0}},{{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0},{&p_1986->g_84[1],&p_1986->g_84[0],(void*)0,(void*)0,(void*)0,(void*)0,&p_1986->g_84[2],(void*)0}}}, // p_1986->g_975
        &p_1986->g_975[6][0][3], // p_1986->g_974
        {{{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377}},{{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377}},{{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377}},{{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377}},{{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377}},{{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377}},{{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377}},{{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377}},{{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377},{(void*)0,(void*)0,&p_1986->g_377}}}, // p_1986->g_1016
        &p_1986->g_377, // p_1986->g_1017
        (VECTOR(uint64_t, 4))(0x6636C486A8DBBD9DL, (VECTOR(uint64_t, 2))(0x6636C486A8DBBD9DL, 1UL), 1UL), // p_1986->g_1018
        (VECTOR(int32_t, 16))(0x555678C8L, (VECTOR(int32_t, 4))(0x555678C8L, (VECTOR(int32_t, 2))(0x555678C8L, (-10L)), (-10L)), (-10L), 0x555678C8L, (-10L), (VECTOR(int32_t, 2))(0x555678C8L, (-10L)), (VECTOR(int32_t, 2))(0x555678C8L, (-10L)), 0x555678C8L, (-10L), 0x555678C8L, (-10L)), // p_1986->g_1019
        (VECTOR(uint32_t, 2))(0xE6707DF5L, 0x63E1EC60L), // p_1986->g_1026
        (VECTOR(int8_t, 16))(0x4FL, (VECTOR(int8_t, 4))(0x4FL, (VECTOR(int8_t, 2))(0x4FL, (-8L)), (-8L)), (-8L), 0x4FL, (-8L), (VECTOR(int8_t, 2))(0x4FL, (-8L)), (VECTOR(int8_t, 2))(0x4FL, (-8L)), 0x4FL, (-8L), 0x4FL, (-8L)), // p_1986->g_1109
        (VECTOR(int8_t, 8))(0x5FL, (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, 0L), 0L), 0L, 0x5FL, 0L), // p_1986->g_1110
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x29L), 0x29L), 0x29L, 1L, 0x29L), // p_1986->g_1112
        {&p_1986->g_633[0]}, // p_1986->g_1117
        (VECTOR(int8_t, 2))(1L, (-5L)), // p_1986->g_1144
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), // p_1986->g_1183
        0x7D20822EL, // p_1986->g_1208
        (VECTOR(int32_t, 8))(0x3BB82892L, (VECTOR(int32_t, 4))(0x3BB82892L, (VECTOR(int32_t, 2))(0x3BB82892L, (-1L)), (-1L)), (-1L), 0x3BB82892L, (-1L)), // p_1986->g_1223
        (VECTOR(int64_t, 2))(0x363969B4EA29E0BEL, 7L), // p_1986->g_1230
        (VECTOR(int32_t, 8))(0x6B5A41D7L, (VECTOR(int32_t, 4))(0x6B5A41D7L, (VECTOR(int32_t, 2))(0x6B5A41D7L, 1L), 1L), 1L, 0x6B5A41D7L, 1L), // p_1986->g_1234
        (void*)0, // p_1986->g_1255
        1L, // p_1986->g_1264
        (VECTOR(uint8_t, 4))(0xBEL, (VECTOR(uint8_t, 2))(0xBEL, 0UL), 0UL), // p_1986->g_1270
        (VECTOR(uint8_t, 4))(0x10L, (VECTOR(uint8_t, 2))(0x10L, 1UL), 1UL), // p_1986->g_1271
        (void*)0, // p_1986->g_1284
        &p_1986->g_1284, // p_1986->g_1283
        &p_1986->g_377, // p_1986->g_1293
        {{&p_1986->g_1293,&p_1986->g_1293,&p_1986->g_1293},{&p_1986->g_1293,&p_1986->g_1293,&p_1986->g_1293},{&p_1986->g_1293,&p_1986->g_1293,&p_1986->g_1293},{&p_1986->g_1293,&p_1986->g_1293,&p_1986->g_1293},{&p_1986->g_1293,&p_1986->g_1293,&p_1986->g_1293},{&p_1986->g_1293,&p_1986->g_1293,&p_1986->g_1293},{&p_1986->g_1293,&p_1986->g_1293,&p_1986->g_1293},{&p_1986->g_1293,&p_1986->g_1293,&p_1986->g_1293}}, // p_1986->g_1292
        &p_1986->g_1293, // p_1986->g_1294
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xA24B1DADL), 0xA24B1DADL), 0xA24B1DADL, 4294967295UL, 0xA24B1DADL), // p_1986->g_1306
        (void*)0, // p_1986->g_1344
        (VECTOR(int16_t, 4))(0x2009L, (VECTOR(int16_t, 2))(0x2009L, 0x3AB9L), 0x3AB9L), // p_1986->g_1373
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x7ACAL), 0x7ACAL), 0x7ACAL, 0L, 0x7ACAL), // p_1986->g_1378
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x3A8EL), 0x3A8EL), 0x3A8EL, 65535UL, 0x3A8EL), // p_1986->g_1401
        (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), // p_1986->g_1446
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0A46L), 0x0A46L), 0x0A46L, 0L, 0x0A46L), // p_1986->g_1478
        0xDAB6L, // p_1986->g_1530
        (VECTOR(int16_t, 2))(0x07BEL, 0L), // p_1986->g_1543
        (VECTOR(int16_t, 4))(0x1C2DL, (VECTOR(int16_t, 2))(0x1C2DL, 0L), 0L), // p_1986->g_1544
        (VECTOR(int64_t, 2))(0x47FC136CE8CE8419L, 0x7FA74053A67D119CL), // p_1986->g_1604
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL), // p_1986->g_1611
        (VECTOR(int32_t, 4))(0x0159A117L, (VECTOR(int32_t, 2))(0x0159A117L, (-4L)), (-4L)), // p_1986->g_1612
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xFAL), 0xFAL), 0xFAL, 0UL, 0xFAL, (VECTOR(uint8_t, 2))(0UL, 0xFAL), (VECTOR(uint8_t, 2))(0UL, 0xFAL), 0UL, 0xFAL, 0UL, 0xFAL), // p_1986->g_1615
        &p_1986->g_377, // p_1986->g_1673
        (void*)0, // p_1986->g_1701
        (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x1DA9L), 0x1DA9L), 0x1DA9L, (-6L), 0x1DA9L, (VECTOR(int16_t, 2))((-6L), 0x1DA9L), (VECTOR(int16_t, 2))((-6L), 0x1DA9L), (-6L), 0x1DA9L, (-6L), 0x1DA9L), // p_1986->g_1710
        1L, // p_1986->g_1725
        (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x15A9B64F729428B6L), // p_1986->g_1758
        (VECTOR(int16_t, 8))(0x4131L, (VECTOR(int16_t, 4))(0x4131L, (VECTOR(int16_t, 2))(0x4131L, 0x0BC4L), 0x0BC4L), 0x0BC4L, 0x4131L, 0x0BC4L), // p_1986->g_1768
        (VECTOR(uint64_t, 16))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 1UL), 1UL), 1UL, 18446744073709551610UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551610UL, 1UL), 18446744073709551610UL, 1UL, 18446744073709551610UL, 1UL), // p_1986->g_1838
        (void*)0, // p_1986->g_1846
        (void*)0, // p_1986->g_1848
        (void*)0, // p_1986->g_1854
        &p_1986->g_1854, // p_1986->g_1853
        (VECTOR(uint8_t, 2))(0x17L, 0xFAL), // p_1986->g_1887
        (void*)0, // p_1986->g_1888
        1UL, // p_1986->g_1984
        0, // p_1986->v_collective
        sequence_input[get_global_id(0)], // p_1986->global_0_offset
        sequence_input[get_global_id(1)], // p_1986->global_1_offset
        sequence_input[get_global_id(2)], // p_1986->global_2_offset
        sequence_input[get_local_id(0)], // p_1986->local_0_offset
        sequence_input[get_local_id(1)], // p_1986->local_1_offset
        sequence_input[get_local_id(2)], // p_1986->local_2_offset
        sequence_input[get_group_id(0)], // p_1986->group_0_offset
        sequence_input[get_group_id(1)], // p_1986->group_1_offset
        sequence_input[get_group_id(2)], // p_1986->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 14)), permutations[0][get_linear_local_id()])), // p_1986->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1987 = c_1988;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1986);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1986->g_2, "p_1986->g_2", print_hash_value);
    transparent_crc(p_1986->g_3, "p_1986->g_3", print_hash_value);
    transparent_crc(p_1986->g_4, "p_1986->g_4", print_hash_value);
    transparent_crc(p_1986->g_34, "p_1986->g_34", print_hash_value);
    transparent_crc(p_1986->g_44, "p_1986->g_44", print_hash_value);
    transparent_crc(p_1986->g_45, "p_1986->g_45", print_hash_value);
    transparent_crc(p_1986->g_60.s0, "p_1986->g_60.s0", print_hash_value);
    transparent_crc(p_1986->g_60.s1, "p_1986->g_60.s1", print_hash_value);
    transparent_crc(p_1986->g_60.s2, "p_1986->g_60.s2", print_hash_value);
    transparent_crc(p_1986->g_60.s3, "p_1986->g_60.s3", print_hash_value);
    transparent_crc(p_1986->g_60.s4, "p_1986->g_60.s4", print_hash_value);
    transparent_crc(p_1986->g_60.s5, "p_1986->g_60.s5", print_hash_value);
    transparent_crc(p_1986->g_60.s6, "p_1986->g_60.s6", print_hash_value);
    transparent_crc(p_1986->g_60.s7, "p_1986->g_60.s7", print_hash_value);
    transparent_crc(p_1986->g_79, "p_1986->g_79", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1986->g_84[i], "p_1986->g_84[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_1986->g_123[i][j][k], "p_1986->g_123[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1986->g_136.s0, "p_1986->g_136.s0", print_hash_value);
    transparent_crc(p_1986->g_136.s1, "p_1986->g_136.s1", print_hash_value);
    transparent_crc(p_1986->g_136.s2, "p_1986->g_136.s2", print_hash_value);
    transparent_crc(p_1986->g_136.s3, "p_1986->g_136.s3", print_hash_value);
    transparent_crc(p_1986->g_136.s4, "p_1986->g_136.s4", print_hash_value);
    transparent_crc(p_1986->g_136.s5, "p_1986->g_136.s5", print_hash_value);
    transparent_crc(p_1986->g_136.s6, "p_1986->g_136.s6", print_hash_value);
    transparent_crc(p_1986->g_136.s7, "p_1986->g_136.s7", print_hash_value);
    transparent_crc(p_1986->g_136.s8, "p_1986->g_136.s8", print_hash_value);
    transparent_crc(p_1986->g_136.s9, "p_1986->g_136.s9", print_hash_value);
    transparent_crc(p_1986->g_136.sa, "p_1986->g_136.sa", print_hash_value);
    transparent_crc(p_1986->g_136.sb, "p_1986->g_136.sb", print_hash_value);
    transparent_crc(p_1986->g_136.sc, "p_1986->g_136.sc", print_hash_value);
    transparent_crc(p_1986->g_136.sd, "p_1986->g_136.sd", print_hash_value);
    transparent_crc(p_1986->g_136.se, "p_1986->g_136.se", print_hash_value);
    transparent_crc(p_1986->g_136.sf, "p_1986->g_136.sf", print_hash_value);
    transparent_crc(p_1986->g_155, "p_1986->g_155", print_hash_value);
    transparent_crc(p_1986->g_160.x, "p_1986->g_160.x", print_hash_value);
    transparent_crc(p_1986->g_160.y, "p_1986->g_160.y", print_hash_value);
    transparent_crc(p_1986->g_160.z, "p_1986->g_160.z", print_hash_value);
    transparent_crc(p_1986->g_160.w, "p_1986->g_160.w", print_hash_value);
    transparent_crc(p_1986->g_167, "p_1986->g_167", print_hash_value);
    transparent_crc(p_1986->g_187, "p_1986->g_187", print_hash_value);
    transparent_crc(p_1986->g_222.s0, "p_1986->g_222.s0", print_hash_value);
    transparent_crc(p_1986->g_222.s1, "p_1986->g_222.s1", print_hash_value);
    transparent_crc(p_1986->g_222.s2, "p_1986->g_222.s2", print_hash_value);
    transparent_crc(p_1986->g_222.s3, "p_1986->g_222.s3", print_hash_value);
    transparent_crc(p_1986->g_222.s4, "p_1986->g_222.s4", print_hash_value);
    transparent_crc(p_1986->g_222.s5, "p_1986->g_222.s5", print_hash_value);
    transparent_crc(p_1986->g_222.s6, "p_1986->g_222.s6", print_hash_value);
    transparent_crc(p_1986->g_222.s7, "p_1986->g_222.s7", print_hash_value);
    transparent_crc(p_1986->g_222.s8, "p_1986->g_222.s8", print_hash_value);
    transparent_crc(p_1986->g_222.s9, "p_1986->g_222.s9", print_hash_value);
    transparent_crc(p_1986->g_222.sa, "p_1986->g_222.sa", print_hash_value);
    transparent_crc(p_1986->g_222.sb, "p_1986->g_222.sb", print_hash_value);
    transparent_crc(p_1986->g_222.sc, "p_1986->g_222.sc", print_hash_value);
    transparent_crc(p_1986->g_222.sd, "p_1986->g_222.sd", print_hash_value);
    transparent_crc(p_1986->g_222.se, "p_1986->g_222.se", print_hash_value);
    transparent_crc(p_1986->g_222.sf, "p_1986->g_222.sf", print_hash_value);
    transparent_crc(p_1986->g_223.x, "p_1986->g_223.x", print_hash_value);
    transparent_crc(p_1986->g_223.y, "p_1986->g_223.y", print_hash_value);
    transparent_crc(p_1986->g_252.s0, "p_1986->g_252.s0", print_hash_value);
    transparent_crc(p_1986->g_252.s1, "p_1986->g_252.s1", print_hash_value);
    transparent_crc(p_1986->g_252.s2, "p_1986->g_252.s2", print_hash_value);
    transparent_crc(p_1986->g_252.s3, "p_1986->g_252.s3", print_hash_value);
    transparent_crc(p_1986->g_252.s4, "p_1986->g_252.s4", print_hash_value);
    transparent_crc(p_1986->g_252.s5, "p_1986->g_252.s5", print_hash_value);
    transparent_crc(p_1986->g_252.s6, "p_1986->g_252.s6", print_hash_value);
    transparent_crc(p_1986->g_252.s7, "p_1986->g_252.s7", print_hash_value);
    transparent_crc(p_1986->g_252.s8, "p_1986->g_252.s8", print_hash_value);
    transparent_crc(p_1986->g_252.s9, "p_1986->g_252.s9", print_hash_value);
    transparent_crc(p_1986->g_252.sa, "p_1986->g_252.sa", print_hash_value);
    transparent_crc(p_1986->g_252.sb, "p_1986->g_252.sb", print_hash_value);
    transparent_crc(p_1986->g_252.sc, "p_1986->g_252.sc", print_hash_value);
    transparent_crc(p_1986->g_252.sd, "p_1986->g_252.sd", print_hash_value);
    transparent_crc(p_1986->g_252.se, "p_1986->g_252.se", print_hash_value);
    transparent_crc(p_1986->g_252.sf, "p_1986->g_252.sf", print_hash_value);
    transparent_crc(p_1986->g_262, "p_1986->g_262", print_hash_value);
    transparent_crc(p_1986->g_270.s0, "p_1986->g_270.s0", print_hash_value);
    transparent_crc(p_1986->g_270.s1, "p_1986->g_270.s1", print_hash_value);
    transparent_crc(p_1986->g_270.s2, "p_1986->g_270.s2", print_hash_value);
    transparent_crc(p_1986->g_270.s3, "p_1986->g_270.s3", print_hash_value);
    transparent_crc(p_1986->g_270.s4, "p_1986->g_270.s4", print_hash_value);
    transparent_crc(p_1986->g_270.s5, "p_1986->g_270.s5", print_hash_value);
    transparent_crc(p_1986->g_270.s6, "p_1986->g_270.s6", print_hash_value);
    transparent_crc(p_1986->g_270.s7, "p_1986->g_270.s7", print_hash_value);
    transparent_crc(p_1986->g_270.s8, "p_1986->g_270.s8", print_hash_value);
    transparent_crc(p_1986->g_270.s9, "p_1986->g_270.s9", print_hash_value);
    transparent_crc(p_1986->g_270.sa, "p_1986->g_270.sa", print_hash_value);
    transparent_crc(p_1986->g_270.sb, "p_1986->g_270.sb", print_hash_value);
    transparent_crc(p_1986->g_270.sc, "p_1986->g_270.sc", print_hash_value);
    transparent_crc(p_1986->g_270.sd, "p_1986->g_270.sd", print_hash_value);
    transparent_crc(p_1986->g_270.se, "p_1986->g_270.se", print_hash_value);
    transparent_crc(p_1986->g_270.sf, "p_1986->g_270.sf", print_hash_value);
    transparent_crc(p_1986->g_273.x, "p_1986->g_273.x", print_hash_value);
    transparent_crc(p_1986->g_273.y, "p_1986->g_273.y", print_hash_value);
    transparent_crc(p_1986->g_273.z, "p_1986->g_273.z", print_hash_value);
    transparent_crc(p_1986->g_273.w, "p_1986->g_273.w", print_hash_value);
    transparent_crc(p_1986->g_277.x, "p_1986->g_277.x", print_hash_value);
    transparent_crc(p_1986->g_277.y, "p_1986->g_277.y", print_hash_value);
    transparent_crc(p_1986->g_277.z, "p_1986->g_277.z", print_hash_value);
    transparent_crc(p_1986->g_277.w, "p_1986->g_277.w", print_hash_value);
    transparent_crc(p_1986->g_316.x, "p_1986->g_316.x", print_hash_value);
    transparent_crc(p_1986->g_316.y, "p_1986->g_316.y", print_hash_value);
    transparent_crc(p_1986->g_316.z, "p_1986->g_316.z", print_hash_value);
    transparent_crc(p_1986->g_316.w, "p_1986->g_316.w", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1986->g_321[i][j][k], "p_1986->g_321[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1986->g_323, "p_1986->g_323", print_hash_value);
    transparent_crc(p_1986->g_331.s0, "p_1986->g_331.s0", print_hash_value);
    transparent_crc(p_1986->g_331.s1, "p_1986->g_331.s1", print_hash_value);
    transparent_crc(p_1986->g_331.s2, "p_1986->g_331.s2", print_hash_value);
    transparent_crc(p_1986->g_331.s3, "p_1986->g_331.s3", print_hash_value);
    transparent_crc(p_1986->g_331.s4, "p_1986->g_331.s4", print_hash_value);
    transparent_crc(p_1986->g_331.s5, "p_1986->g_331.s5", print_hash_value);
    transparent_crc(p_1986->g_331.s6, "p_1986->g_331.s6", print_hash_value);
    transparent_crc(p_1986->g_331.s7, "p_1986->g_331.s7", print_hash_value);
    transparent_crc(p_1986->g_332.s0, "p_1986->g_332.s0", print_hash_value);
    transparent_crc(p_1986->g_332.s1, "p_1986->g_332.s1", print_hash_value);
    transparent_crc(p_1986->g_332.s2, "p_1986->g_332.s2", print_hash_value);
    transparent_crc(p_1986->g_332.s3, "p_1986->g_332.s3", print_hash_value);
    transparent_crc(p_1986->g_332.s4, "p_1986->g_332.s4", print_hash_value);
    transparent_crc(p_1986->g_332.s5, "p_1986->g_332.s5", print_hash_value);
    transparent_crc(p_1986->g_332.s6, "p_1986->g_332.s6", print_hash_value);
    transparent_crc(p_1986->g_332.s7, "p_1986->g_332.s7", print_hash_value);
    transparent_crc(p_1986->g_333.x, "p_1986->g_333.x", print_hash_value);
    transparent_crc(p_1986->g_333.y, "p_1986->g_333.y", print_hash_value);
    transparent_crc(p_1986->g_333.z, "p_1986->g_333.z", print_hash_value);
    transparent_crc(p_1986->g_333.w, "p_1986->g_333.w", print_hash_value);
    transparent_crc(p_1986->g_337.s0, "p_1986->g_337.s0", print_hash_value);
    transparent_crc(p_1986->g_337.s1, "p_1986->g_337.s1", print_hash_value);
    transparent_crc(p_1986->g_337.s2, "p_1986->g_337.s2", print_hash_value);
    transparent_crc(p_1986->g_337.s3, "p_1986->g_337.s3", print_hash_value);
    transparent_crc(p_1986->g_337.s4, "p_1986->g_337.s4", print_hash_value);
    transparent_crc(p_1986->g_337.s5, "p_1986->g_337.s5", print_hash_value);
    transparent_crc(p_1986->g_337.s6, "p_1986->g_337.s6", print_hash_value);
    transparent_crc(p_1986->g_337.s7, "p_1986->g_337.s7", print_hash_value);
    transparent_crc(p_1986->g_346.x, "p_1986->g_346.x", print_hash_value);
    transparent_crc(p_1986->g_346.y, "p_1986->g_346.y", print_hash_value);
    transparent_crc(p_1986->g_361.s0, "p_1986->g_361.s0", print_hash_value);
    transparent_crc(p_1986->g_361.s1, "p_1986->g_361.s1", print_hash_value);
    transparent_crc(p_1986->g_361.s2, "p_1986->g_361.s2", print_hash_value);
    transparent_crc(p_1986->g_361.s3, "p_1986->g_361.s3", print_hash_value);
    transparent_crc(p_1986->g_361.s4, "p_1986->g_361.s4", print_hash_value);
    transparent_crc(p_1986->g_361.s5, "p_1986->g_361.s5", print_hash_value);
    transparent_crc(p_1986->g_361.s6, "p_1986->g_361.s6", print_hash_value);
    transparent_crc(p_1986->g_361.s7, "p_1986->g_361.s7", print_hash_value);
    transparent_crc(p_1986->g_365.s0, "p_1986->g_365.s0", print_hash_value);
    transparent_crc(p_1986->g_365.s1, "p_1986->g_365.s1", print_hash_value);
    transparent_crc(p_1986->g_365.s2, "p_1986->g_365.s2", print_hash_value);
    transparent_crc(p_1986->g_365.s3, "p_1986->g_365.s3", print_hash_value);
    transparent_crc(p_1986->g_365.s4, "p_1986->g_365.s4", print_hash_value);
    transparent_crc(p_1986->g_365.s5, "p_1986->g_365.s5", print_hash_value);
    transparent_crc(p_1986->g_365.s6, "p_1986->g_365.s6", print_hash_value);
    transparent_crc(p_1986->g_365.s7, "p_1986->g_365.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1986->g_392[i][j], "p_1986->g_392[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1986->g_421.s0, "p_1986->g_421.s0", print_hash_value);
    transparent_crc(p_1986->g_421.s1, "p_1986->g_421.s1", print_hash_value);
    transparent_crc(p_1986->g_421.s2, "p_1986->g_421.s2", print_hash_value);
    transparent_crc(p_1986->g_421.s3, "p_1986->g_421.s3", print_hash_value);
    transparent_crc(p_1986->g_421.s4, "p_1986->g_421.s4", print_hash_value);
    transparent_crc(p_1986->g_421.s5, "p_1986->g_421.s5", print_hash_value);
    transparent_crc(p_1986->g_421.s6, "p_1986->g_421.s6", print_hash_value);
    transparent_crc(p_1986->g_421.s7, "p_1986->g_421.s7", print_hash_value);
    transparent_crc(p_1986->g_428.x, "p_1986->g_428.x", print_hash_value);
    transparent_crc(p_1986->g_428.y, "p_1986->g_428.y", print_hash_value);
    transparent_crc(p_1986->g_428.z, "p_1986->g_428.z", print_hash_value);
    transparent_crc(p_1986->g_428.w, "p_1986->g_428.w", print_hash_value);
    transparent_crc(p_1986->g_503, "p_1986->g_503", print_hash_value);
    transparent_crc(p_1986->g_508, "p_1986->g_508", print_hash_value);
    transparent_crc(p_1986->g_535, "p_1986->g_535", print_hash_value);
    transparent_crc(p_1986->g_540.x, "p_1986->g_540.x", print_hash_value);
    transparent_crc(p_1986->g_540.y, "p_1986->g_540.y", print_hash_value);
    transparent_crc(p_1986->g_569, "p_1986->g_569", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1986->g_633[i], "p_1986->g_633[i]", print_hash_value);

    }
    transparent_crc(p_1986->g_656.s0, "p_1986->g_656.s0", print_hash_value);
    transparent_crc(p_1986->g_656.s1, "p_1986->g_656.s1", print_hash_value);
    transparent_crc(p_1986->g_656.s2, "p_1986->g_656.s2", print_hash_value);
    transparent_crc(p_1986->g_656.s3, "p_1986->g_656.s3", print_hash_value);
    transparent_crc(p_1986->g_656.s4, "p_1986->g_656.s4", print_hash_value);
    transparent_crc(p_1986->g_656.s5, "p_1986->g_656.s5", print_hash_value);
    transparent_crc(p_1986->g_656.s6, "p_1986->g_656.s6", print_hash_value);
    transparent_crc(p_1986->g_656.s7, "p_1986->g_656.s7", print_hash_value);
    transparent_crc(p_1986->g_656.s8, "p_1986->g_656.s8", print_hash_value);
    transparent_crc(p_1986->g_656.s9, "p_1986->g_656.s9", print_hash_value);
    transparent_crc(p_1986->g_656.sa, "p_1986->g_656.sa", print_hash_value);
    transparent_crc(p_1986->g_656.sb, "p_1986->g_656.sb", print_hash_value);
    transparent_crc(p_1986->g_656.sc, "p_1986->g_656.sc", print_hash_value);
    transparent_crc(p_1986->g_656.sd, "p_1986->g_656.sd", print_hash_value);
    transparent_crc(p_1986->g_656.se, "p_1986->g_656.se", print_hash_value);
    transparent_crc(p_1986->g_656.sf, "p_1986->g_656.sf", print_hash_value);
    transparent_crc(p_1986->g_671, "p_1986->g_671", print_hash_value);
    transparent_crc(p_1986->g_720.s0, "p_1986->g_720.s0", print_hash_value);
    transparent_crc(p_1986->g_720.s1, "p_1986->g_720.s1", print_hash_value);
    transparent_crc(p_1986->g_720.s2, "p_1986->g_720.s2", print_hash_value);
    transparent_crc(p_1986->g_720.s3, "p_1986->g_720.s3", print_hash_value);
    transparent_crc(p_1986->g_720.s4, "p_1986->g_720.s4", print_hash_value);
    transparent_crc(p_1986->g_720.s5, "p_1986->g_720.s5", print_hash_value);
    transparent_crc(p_1986->g_720.s6, "p_1986->g_720.s6", print_hash_value);
    transparent_crc(p_1986->g_720.s7, "p_1986->g_720.s7", print_hash_value);
    transparent_crc(p_1986->g_766.s0, "p_1986->g_766.s0", print_hash_value);
    transparent_crc(p_1986->g_766.s1, "p_1986->g_766.s1", print_hash_value);
    transparent_crc(p_1986->g_766.s2, "p_1986->g_766.s2", print_hash_value);
    transparent_crc(p_1986->g_766.s3, "p_1986->g_766.s3", print_hash_value);
    transparent_crc(p_1986->g_766.s4, "p_1986->g_766.s4", print_hash_value);
    transparent_crc(p_1986->g_766.s5, "p_1986->g_766.s5", print_hash_value);
    transparent_crc(p_1986->g_766.s6, "p_1986->g_766.s6", print_hash_value);
    transparent_crc(p_1986->g_766.s7, "p_1986->g_766.s7", print_hash_value);
    transparent_crc(p_1986->g_766.s8, "p_1986->g_766.s8", print_hash_value);
    transparent_crc(p_1986->g_766.s9, "p_1986->g_766.s9", print_hash_value);
    transparent_crc(p_1986->g_766.sa, "p_1986->g_766.sa", print_hash_value);
    transparent_crc(p_1986->g_766.sb, "p_1986->g_766.sb", print_hash_value);
    transparent_crc(p_1986->g_766.sc, "p_1986->g_766.sc", print_hash_value);
    transparent_crc(p_1986->g_766.sd, "p_1986->g_766.sd", print_hash_value);
    transparent_crc(p_1986->g_766.se, "p_1986->g_766.se", print_hash_value);
    transparent_crc(p_1986->g_766.sf, "p_1986->g_766.sf", print_hash_value);
    transparent_crc(p_1986->g_767.x, "p_1986->g_767.x", print_hash_value);
    transparent_crc(p_1986->g_767.y, "p_1986->g_767.y", print_hash_value);
    transparent_crc(p_1986->g_793.x, "p_1986->g_793.x", print_hash_value);
    transparent_crc(p_1986->g_793.y, "p_1986->g_793.y", print_hash_value);
    transparent_crc(p_1986->g_802.s0, "p_1986->g_802.s0", print_hash_value);
    transparent_crc(p_1986->g_802.s1, "p_1986->g_802.s1", print_hash_value);
    transparent_crc(p_1986->g_802.s2, "p_1986->g_802.s2", print_hash_value);
    transparent_crc(p_1986->g_802.s3, "p_1986->g_802.s3", print_hash_value);
    transparent_crc(p_1986->g_802.s4, "p_1986->g_802.s4", print_hash_value);
    transparent_crc(p_1986->g_802.s5, "p_1986->g_802.s5", print_hash_value);
    transparent_crc(p_1986->g_802.s6, "p_1986->g_802.s6", print_hash_value);
    transparent_crc(p_1986->g_802.s7, "p_1986->g_802.s7", print_hash_value);
    transparent_crc(p_1986->g_803.s0, "p_1986->g_803.s0", print_hash_value);
    transparent_crc(p_1986->g_803.s1, "p_1986->g_803.s1", print_hash_value);
    transparent_crc(p_1986->g_803.s2, "p_1986->g_803.s2", print_hash_value);
    transparent_crc(p_1986->g_803.s3, "p_1986->g_803.s3", print_hash_value);
    transparent_crc(p_1986->g_803.s4, "p_1986->g_803.s4", print_hash_value);
    transparent_crc(p_1986->g_803.s5, "p_1986->g_803.s5", print_hash_value);
    transparent_crc(p_1986->g_803.s6, "p_1986->g_803.s6", print_hash_value);
    transparent_crc(p_1986->g_803.s7, "p_1986->g_803.s7", print_hash_value);
    transparent_crc(p_1986->g_803.s8, "p_1986->g_803.s8", print_hash_value);
    transparent_crc(p_1986->g_803.s9, "p_1986->g_803.s9", print_hash_value);
    transparent_crc(p_1986->g_803.sa, "p_1986->g_803.sa", print_hash_value);
    transparent_crc(p_1986->g_803.sb, "p_1986->g_803.sb", print_hash_value);
    transparent_crc(p_1986->g_803.sc, "p_1986->g_803.sc", print_hash_value);
    transparent_crc(p_1986->g_803.sd, "p_1986->g_803.sd", print_hash_value);
    transparent_crc(p_1986->g_803.se, "p_1986->g_803.se", print_hash_value);
    transparent_crc(p_1986->g_803.sf, "p_1986->g_803.sf", print_hash_value);
    transparent_crc(p_1986->g_804.s0, "p_1986->g_804.s0", print_hash_value);
    transparent_crc(p_1986->g_804.s1, "p_1986->g_804.s1", print_hash_value);
    transparent_crc(p_1986->g_804.s2, "p_1986->g_804.s2", print_hash_value);
    transparent_crc(p_1986->g_804.s3, "p_1986->g_804.s3", print_hash_value);
    transparent_crc(p_1986->g_804.s4, "p_1986->g_804.s4", print_hash_value);
    transparent_crc(p_1986->g_804.s5, "p_1986->g_804.s5", print_hash_value);
    transparent_crc(p_1986->g_804.s6, "p_1986->g_804.s6", print_hash_value);
    transparent_crc(p_1986->g_804.s7, "p_1986->g_804.s7", print_hash_value);
    transparent_crc(p_1986->g_804.s8, "p_1986->g_804.s8", print_hash_value);
    transparent_crc(p_1986->g_804.s9, "p_1986->g_804.s9", print_hash_value);
    transparent_crc(p_1986->g_804.sa, "p_1986->g_804.sa", print_hash_value);
    transparent_crc(p_1986->g_804.sb, "p_1986->g_804.sb", print_hash_value);
    transparent_crc(p_1986->g_804.sc, "p_1986->g_804.sc", print_hash_value);
    transparent_crc(p_1986->g_804.sd, "p_1986->g_804.sd", print_hash_value);
    transparent_crc(p_1986->g_804.se, "p_1986->g_804.se", print_hash_value);
    transparent_crc(p_1986->g_804.sf, "p_1986->g_804.sf", print_hash_value);
    transparent_crc(p_1986->g_811, "p_1986->g_811", print_hash_value);
    transparent_crc(p_1986->g_815.x, "p_1986->g_815.x", print_hash_value);
    transparent_crc(p_1986->g_815.y, "p_1986->g_815.y", print_hash_value);
    transparent_crc(p_1986->g_960.s0, "p_1986->g_960.s0", print_hash_value);
    transparent_crc(p_1986->g_960.s1, "p_1986->g_960.s1", print_hash_value);
    transparent_crc(p_1986->g_960.s2, "p_1986->g_960.s2", print_hash_value);
    transparent_crc(p_1986->g_960.s3, "p_1986->g_960.s3", print_hash_value);
    transparent_crc(p_1986->g_960.s4, "p_1986->g_960.s4", print_hash_value);
    transparent_crc(p_1986->g_960.s5, "p_1986->g_960.s5", print_hash_value);
    transparent_crc(p_1986->g_960.s6, "p_1986->g_960.s6", print_hash_value);
    transparent_crc(p_1986->g_960.s7, "p_1986->g_960.s7", print_hash_value);
    transparent_crc(p_1986->g_973.s0, "p_1986->g_973.s0", print_hash_value);
    transparent_crc(p_1986->g_973.s1, "p_1986->g_973.s1", print_hash_value);
    transparent_crc(p_1986->g_973.s2, "p_1986->g_973.s2", print_hash_value);
    transparent_crc(p_1986->g_973.s3, "p_1986->g_973.s3", print_hash_value);
    transparent_crc(p_1986->g_973.s4, "p_1986->g_973.s4", print_hash_value);
    transparent_crc(p_1986->g_973.s5, "p_1986->g_973.s5", print_hash_value);
    transparent_crc(p_1986->g_973.s6, "p_1986->g_973.s6", print_hash_value);
    transparent_crc(p_1986->g_973.s7, "p_1986->g_973.s7", print_hash_value);
    transparent_crc(p_1986->g_1018.x, "p_1986->g_1018.x", print_hash_value);
    transparent_crc(p_1986->g_1018.y, "p_1986->g_1018.y", print_hash_value);
    transparent_crc(p_1986->g_1018.z, "p_1986->g_1018.z", print_hash_value);
    transparent_crc(p_1986->g_1018.w, "p_1986->g_1018.w", print_hash_value);
    transparent_crc(p_1986->g_1019.s0, "p_1986->g_1019.s0", print_hash_value);
    transparent_crc(p_1986->g_1019.s1, "p_1986->g_1019.s1", print_hash_value);
    transparent_crc(p_1986->g_1019.s2, "p_1986->g_1019.s2", print_hash_value);
    transparent_crc(p_1986->g_1019.s3, "p_1986->g_1019.s3", print_hash_value);
    transparent_crc(p_1986->g_1019.s4, "p_1986->g_1019.s4", print_hash_value);
    transparent_crc(p_1986->g_1019.s5, "p_1986->g_1019.s5", print_hash_value);
    transparent_crc(p_1986->g_1019.s6, "p_1986->g_1019.s6", print_hash_value);
    transparent_crc(p_1986->g_1019.s7, "p_1986->g_1019.s7", print_hash_value);
    transparent_crc(p_1986->g_1019.s8, "p_1986->g_1019.s8", print_hash_value);
    transparent_crc(p_1986->g_1019.s9, "p_1986->g_1019.s9", print_hash_value);
    transparent_crc(p_1986->g_1019.sa, "p_1986->g_1019.sa", print_hash_value);
    transparent_crc(p_1986->g_1019.sb, "p_1986->g_1019.sb", print_hash_value);
    transparent_crc(p_1986->g_1019.sc, "p_1986->g_1019.sc", print_hash_value);
    transparent_crc(p_1986->g_1019.sd, "p_1986->g_1019.sd", print_hash_value);
    transparent_crc(p_1986->g_1019.se, "p_1986->g_1019.se", print_hash_value);
    transparent_crc(p_1986->g_1019.sf, "p_1986->g_1019.sf", print_hash_value);
    transparent_crc(p_1986->g_1026.x, "p_1986->g_1026.x", print_hash_value);
    transparent_crc(p_1986->g_1026.y, "p_1986->g_1026.y", print_hash_value);
    transparent_crc(p_1986->g_1109.s0, "p_1986->g_1109.s0", print_hash_value);
    transparent_crc(p_1986->g_1109.s1, "p_1986->g_1109.s1", print_hash_value);
    transparent_crc(p_1986->g_1109.s2, "p_1986->g_1109.s2", print_hash_value);
    transparent_crc(p_1986->g_1109.s3, "p_1986->g_1109.s3", print_hash_value);
    transparent_crc(p_1986->g_1109.s4, "p_1986->g_1109.s4", print_hash_value);
    transparent_crc(p_1986->g_1109.s5, "p_1986->g_1109.s5", print_hash_value);
    transparent_crc(p_1986->g_1109.s6, "p_1986->g_1109.s6", print_hash_value);
    transparent_crc(p_1986->g_1109.s7, "p_1986->g_1109.s7", print_hash_value);
    transparent_crc(p_1986->g_1109.s8, "p_1986->g_1109.s8", print_hash_value);
    transparent_crc(p_1986->g_1109.s9, "p_1986->g_1109.s9", print_hash_value);
    transparent_crc(p_1986->g_1109.sa, "p_1986->g_1109.sa", print_hash_value);
    transparent_crc(p_1986->g_1109.sb, "p_1986->g_1109.sb", print_hash_value);
    transparent_crc(p_1986->g_1109.sc, "p_1986->g_1109.sc", print_hash_value);
    transparent_crc(p_1986->g_1109.sd, "p_1986->g_1109.sd", print_hash_value);
    transparent_crc(p_1986->g_1109.se, "p_1986->g_1109.se", print_hash_value);
    transparent_crc(p_1986->g_1109.sf, "p_1986->g_1109.sf", print_hash_value);
    transparent_crc(p_1986->g_1110.s0, "p_1986->g_1110.s0", print_hash_value);
    transparent_crc(p_1986->g_1110.s1, "p_1986->g_1110.s1", print_hash_value);
    transparent_crc(p_1986->g_1110.s2, "p_1986->g_1110.s2", print_hash_value);
    transparent_crc(p_1986->g_1110.s3, "p_1986->g_1110.s3", print_hash_value);
    transparent_crc(p_1986->g_1110.s4, "p_1986->g_1110.s4", print_hash_value);
    transparent_crc(p_1986->g_1110.s5, "p_1986->g_1110.s5", print_hash_value);
    transparent_crc(p_1986->g_1110.s6, "p_1986->g_1110.s6", print_hash_value);
    transparent_crc(p_1986->g_1110.s7, "p_1986->g_1110.s7", print_hash_value);
    transparent_crc(p_1986->g_1112.s0, "p_1986->g_1112.s0", print_hash_value);
    transparent_crc(p_1986->g_1112.s1, "p_1986->g_1112.s1", print_hash_value);
    transparent_crc(p_1986->g_1112.s2, "p_1986->g_1112.s2", print_hash_value);
    transparent_crc(p_1986->g_1112.s3, "p_1986->g_1112.s3", print_hash_value);
    transparent_crc(p_1986->g_1112.s4, "p_1986->g_1112.s4", print_hash_value);
    transparent_crc(p_1986->g_1112.s5, "p_1986->g_1112.s5", print_hash_value);
    transparent_crc(p_1986->g_1112.s6, "p_1986->g_1112.s6", print_hash_value);
    transparent_crc(p_1986->g_1112.s7, "p_1986->g_1112.s7", print_hash_value);
    transparent_crc(p_1986->g_1144.x, "p_1986->g_1144.x", print_hash_value);
    transparent_crc(p_1986->g_1144.y, "p_1986->g_1144.y", print_hash_value);
    transparent_crc(p_1986->g_1183.x, "p_1986->g_1183.x", print_hash_value);
    transparent_crc(p_1986->g_1183.y, "p_1986->g_1183.y", print_hash_value);
    transparent_crc(p_1986->g_1183.z, "p_1986->g_1183.z", print_hash_value);
    transparent_crc(p_1986->g_1183.w, "p_1986->g_1183.w", print_hash_value);
    transparent_crc(p_1986->g_1208, "p_1986->g_1208", print_hash_value);
    transparent_crc(p_1986->g_1223.s0, "p_1986->g_1223.s0", print_hash_value);
    transparent_crc(p_1986->g_1223.s1, "p_1986->g_1223.s1", print_hash_value);
    transparent_crc(p_1986->g_1223.s2, "p_1986->g_1223.s2", print_hash_value);
    transparent_crc(p_1986->g_1223.s3, "p_1986->g_1223.s3", print_hash_value);
    transparent_crc(p_1986->g_1223.s4, "p_1986->g_1223.s4", print_hash_value);
    transparent_crc(p_1986->g_1223.s5, "p_1986->g_1223.s5", print_hash_value);
    transparent_crc(p_1986->g_1223.s6, "p_1986->g_1223.s6", print_hash_value);
    transparent_crc(p_1986->g_1223.s7, "p_1986->g_1223.s7", print_hash_value);
    transparent_crc(p_1986->g_1230.x, "p_1986->g_1230.x", print_hash_value);
    transparent_crc(p_1986->g_1230.y, "p_1986->g_1230.y", print_hash_value);
    transparent_crc(p_1986->g_1234.s0, "p_1986->g_1234.s0", print_hash_value);
    transparent_crc(p_1986->g_1234.s1, "p_1986->g_1234.s1", print_hash_value);
    transparent_crc(p_1986->g_1234.s2, "p_1986->g_1234.s2", print_hash_value);
    transparent_crc(p_1986->g_1234.s3, "p_1986->g_1234.s3", print_hash_value);
    transparent_crc(p_1986->g_1234.s4, "p_1986->g_1234.s4", print_hash_value);
    transparent_crc(p_1986->g_1234.s5, "p_1986->g_1234.s5", print_hash_value);
    transparent_crc(p_1986->g_1234.s6, "p_1986->g_1234.s6", print_hash_value);
    transparent_crc(p_1986->g_1234.s7, "p_1986->g_1234.s7", print_hash_value);
    transparent_crc(p_1986->g_1264, "p_1986->g_1264", print_hash_value);
    transparent_crc(p_1986->g_1270.x, "p_1986->g_1270.x", print_hash_value);
    transparent_crc(p_1986->g_1270.y, "p_1986->g_1270.y", print_hash_value);
    transparent_crc(p_1986->g_1270.z, "p_1986->g_1270.z", print_hash_value);
    transparent_crc(p_1986->g_1270.w, "p_1986->g_1270.w", print_hash_value);
    transparent_crc(p_1986->g_1271.x, "p_1986->g_1271.x", print_hash_value);
    transparent_crc(p_1986->g_1271.y, "p_1986->g_1271.y", print_hash_value);
    transparent_crc(p_1986->g_1271.z, "p_1986->g_1271.z", print_hash_value);
    transparent_crc(p_1986->g_1271.w, "p_1986->g_1271.w", print_hash_value);
    transparent_crc(p_1986->g_1306.s0, "p_1986->g_1306.s0", print_hash_value);
    transparent_crc(p_1986->g_1306.s1, "p_1986->g_1306.s1", print_hash_value);
    transparent_crc(p_1986->g_1306.s2, "p_1986->g_1306.s2", print_hash_value);
    transparent_crc(p_1986->g_1306.s3, "p_1986->g_1306.s3", print_hash_value);
    transparent_crc(p_1986->g_1306.s4, "p_1986->g_1306.s4", print_hash_value);
    transparent_crc(p_1986->g_1306.s5, "p_1986->g_1306.s5", print_hash_value);
    transparent_crc(p_1986->g_1306.s6, "p_1986->g_1306.s6", print_hash_value);
    transparent_crc(p_1986->g_1306.s7, "p_1986->g_1306.s7", print_hash_value);
    transparent_crc(p_1986->g_1373.x, "p_1986->g_1373.x", print_hash_value);
    transparent_crc(p_1986->g_1373.y, "p_1986->g_1373.y", print_hash_value);
    transparent_crc(p_1986->g_1373.z, "p_1986->g_1373.z", print_hash_value);
    transparent_crc(p_1986->g_1373.w, "p_1986->g_1373.w", print_hash_value);
    transparent_crc(p_1986->g_1378.s0, "p_1986->g_1378.s0", print_hash_value);
    transparent_crc(p_1986->g_1378.s1, "p_1986->g_1378.s1", print_hash_value);
    transparent_crc(p_1986->g_1378.s2, "p_1986->g_1378.s2", print_hash_value);
    transparent_crc(p_1986->g_1378.s3, "p_1986->g_1378.s3", print_hash_value);
    transparent_crc(p_1986->g_1378.s4, "p_1986->g_1378.s4", print_hash_value);
    transparent_crc(p_1986->g_1378.s5, "p_1986->g_1378.s5", print_hash_value);
    transparent_crc(p_1986->g_1378.s6, "p_1986->g_1378.s6", print_hash_value);
    transparent_crc(p_1986->g_1378.s7, "p_1986->g_1378.s7", print_hash_value);
    transparent_crc(p_1986->g_1401.s0, "p_1986->g_1401.s0", print_hash_value);
    transparent_crc(p_1986->g_1401.s1, "p_1986->g_1401.s1", print_hash_value);
    transparent_crc(p_1986->g_1401.s2, "p_1986->g_1401.s2", print_hash_value);
    transparent_crc(p_1986->g_1401.s3, "p_1986->g_1401.s3", print_hash_value);
    transparent_crc(p_1986->g_1401.s4, "p_1986->g_1401.s4", print_hash_value);
    transparent_crc(p_1986->g_1401.s5, "p_1986->g_1401.s5", print_hash_value);
    transparent_crc(p_1986->g_1401.s6, "p_1986->g_1401.s6", print_hash_value);
    transparent_crc(p_1986->g_1401.s7, "p_1986->g_1401.s7", print_hash_value);
    transparent_crc(p_1986->g_1446.x, "p_1986->g_1446.x", print_hash_value);
    transparent_crc(p_1986->g_1446.y, "p_1986->g_1446.y", print_hash_value);
    transparent_crc(p_1986->g_1478.s0, "p_1986->g_1478.s0", print_hash_value);
    transparent_crc(p_1986->g_1478.s1, "p_1986->g_1478.s1", print_hash_value);
    transparent_crc(p_1986->g_1478.s2, "p_1986->g_1478.s2", print_hash_value);
    transparent_crc(p_1986->g_1478.s3, "p_1986->g_1478.s3", print_hash_value);
    transparent_crc(p_1986->g_1478.s4, "p_1986->g_1478.s4", print_hash_value);
    transparent_crc(p_1986->g_1478.s5, "p_1986->g_1478.s5", print_hash_value);
    transparent_crc(p_1986->g_1478.s6, "p_1986->g_1478.s6", print_hash_value);
    transparent_crc(p_1986->g_1478.s7, "p_1986->g_1478.s7", print_hash_value);
    transparent_crc(p_1986->g_1530, "p_1986->g_1530", print_hash_value);
    transparent_crc(p_1986->g_1543.x, "p_1986->g_1543.x", print_hash_value);
    transparent_crc(p_1986->g_1543.y, "p_1986->g_1543.y", print_hash_value);
    transparent_crc(p_1986->g_1544.x, "p_1986->g_1544.x", print_hash_value);
    transparent_crc(p_1986->g_1544.y, "p_1986->g_1544.y", print_hash_value);
    transparent_crc(p_1986->g_1544.z, "p_1986->g_1544.z", print_hash_value);
    transparent_crc(p_1986->g_1544.w, "p_1986->g_1544.w", print_hash_value);
    transparent_crc(p_1986->g_1604.x, "p_1986->g_1604.x", print_hash_value);
    transparent_crc(p_1986->g_1604.y, "p_1986->g_1604.y", print_hash_value);
    transparent_crc(p_1986->g_1611.s0, "p_1986->g_1611.s0", print_hash_value);
    transparent_crc(p_1986->g_1611.s1, "p_1986->g_1611.s1", print_hash_value);
    transparent_crc(p_1986->g_1611.s2, "p_1986->g_1611.s2", print_hash_value);
    transparent_crc(p_1986->g_1611.s3, "p_1986->g_1611.s3", print_hash_value);
    transparent_crc(p_1986->g_1611.s4, "p_1986->g_1611.s4", print_hash_value);
    transparent_crc(p_1986->g_1611.s5, "p_1986->g_1611.s5", print_hash_value);
    transparent_crc(p_1986->g_1611.s6, "p_1986->g_1611.s6", print_hash_value);
    transparent_crc(p_1986->g_1611.s7, "p_1986->g_1611.s7", print_hash_value);
    transparent_crc(p_1986->g_1612.x, "p_1986->g_1612.x", print_hash_value);
    transparent_crc(p_1986->g_1612.y, "p_1986->g_1612.y", print_hash_value);
    transparent_crc(p_1986->g_1612.z, "p_1986->g_1612.z", print_hash_value);
    transparent_crc(p_1986->g_1612.w, "p_1986->g_1612.w", print_hash_value);
    transparent_crc(p_1986->g_1615.s0, "p_1986->g_1615.s0", print_hash_value);
    transparent_crc(p_1986->g_1615.s1, "p_1986->g_1615.s1", print_hash_value);
    transparent_crc(p_1986->g_1615.s2, "p_1986->g_1615.s2", print_hash_value);
    transparent_crc(p_1986->g_1615.s3, "p_1986->g_1615.s3", print_hash_value);
    transparent_crc(p_1986->g_1615.s4, "p_1986->g_1615.s4", print_hash_value);
    transparent_crc(p_1986->g_1615.s5, "p_1986->g_1615.s5", print_hash_value);
    transparent_crc(p_1986->g_1615.s6, "p_1986->g_1615.s6", print_hash_value);
    transparent_crc(p_1986->g_1615.s7, "p_1986->g_1615.s7", print_hash_value);
    transparent_crc(p_1986->g_1615.s8, "p_1986->g_1615.s8", print_hash_value);
    transparent_crc(p_1986->g_1615.s9, "p_1986->g_1615.s9", print_hash_value);
    transparent_crc(p_1986->g_1615.sa, "p_1986->g_1615.sa", print_hash_value);
    transparent_crc(p_1986->g_1615.sb, "p_1986->g_1615.sb", print_hash_value);
    transparent_crc(p_1986->g_1615.sc, "p_1986->g_1615.sc", print_hash_value);
    transparent_crc(p_1986->g_1615.sd, "p_1986->g_1615.sd", print_hash_value);
    transparent_crc(p_1986->g_1615.se, "p_1986->g_1615.se", print_hash_value);
    transparent_crc(p_1986->g_1615.sf, "p_1986->g_1615.sf", print_hash_value);
    transparent_crc(p_1986->g_1710.s0, "p_1986->g_1710.s0", print_hash_value);
    transparent_crc(p_1986->g_1710.s1, "p_1986->g_1710.s1", print_hash_value);
    transparent_crc(p_1986->g_1710.s2, "p_1986->g_1710.s2", print_hash_value);
    transparent_crc(p_1986->g_1710.s3, "p_1986->g_1710.s3", print_hash_value);
    transparent_crc(p_1986->g_1710.s4, "p_1986->g_1710.s4", print_hash_value);
    transparent_crc(p_1986->g_1710.s5, "p_1986->g_1710.s5", print_hash_value);
    transparent_crc(p_1986->g_1710.s6, "p_1986->g_1710.s6", print_hash_value);
    transparent_crc(p_1986->g_1710.s7, "p_1986->g_1710.s7", print_hash_value);
    transparent_crc(p_1986->g_1710.s8, "p_1986->g_1710.s8", print_hash_value);
    transparent_crc(p_1986->g_1710.s9, "p_1986->g_1710.s9", print_hash_value);
    transparent_crc(p_1986->g_1710.sa, "p_1986->g_1710.sa", print_hash_value);
    transparent_crc(p_1986->g_1710.sb, "p_1986->g_1710.sb", print_hash_value);
    transparent_crc(p_1986->g_1710.sc, "p_1986->g_1710.sc", print_hash_value);
    transparent_crc(p_1986->g_1710.sd, "p_1986->g_1710.sd", print_hash_value);
    transparent_crc(p_1986->g_1710.se, "p_1986->g_1710.se", print_hash_value);
    transparent_crc(p_1986->g_1710.sf, "p_1986->g_1710.sf", print_hash_value);
    transparent_crc(p_1986->g_1725, "p_1986->g_1725", print_hash_value);
    transparent_crc(p_1986->g_1758.x, "p_1986->g_1758.x", print_hash_value);
    transparent_crc(p_1986->g_1758.y, "p_1986->g_1758.y", print_hash_value);
    transparent_crc(p_1986->g_1768.s0, "p_1986->g_1768.s0", print_hash_value);
    transparent_crc(p_1986->g_1768.s1, "p_1986->g_1768.s1", print_hash_value);
    transparent_crc(p_1986->g_1768.s2, "p_1986->g_1768.s2", print_hash_value);
    transparent_crc(p_1986->g_1768.s3, "p_1986->g_1768.s3", print_hash_value);
    transparent_crc(p_1986->g_1768.s4, "p_1986->g_1768.s4", print_hash_value);
    transparent_crc(p_1986->g_1768.s5, "p_1986->g_1768.s5", print_hash_value);
    transparent_crc(p_1986->g_1768.s6, "p_1986->g_1768.s6", print_hash_value);
    transparent_crc(p_1986->g_1768.s7, "p_1986->g_1768.s7", print_hash_value);
    transparent_crc(p_1986->g_1838.s0, "p_1986->g_1838.s0", print_hash_value);
    transparent_crc(p_1986->g_1838.s1, "p_1986->g_1838.s1", print_hash_value);
    transparent_crc(p_1986->g_1838.s2, "p_1986->g_1838.s2", print_hash_value);
    transparent_crc(p_1986->g_1838.s3, "p_1986->g_1838.s3", print_hash_value);
    transparent_crc(p_1986->g_1838.s4, "p_1986->g_1838.s4", print_hash_value);
    transparent_crc(p_1986->g_1838.s5, "p_1986->g_1838.s5", print_hash_value);
    transparent_crc(p_1986->g_1838.s6, "p_1986->g_1838.s6", print_hash_value);
    transparent_crc(p_1986->g_1838.s7, "p_1986->g_1838.s7", print_hash_value);
    transparent_crc(p_1986->g_1838.s8, "p_1986->g_1838.s8", print_hash_value);
    transparent_crc(p_1986->g_1838.s9, "p_1986->g_1838.s9", print_hash_value);
    transparent_crc(p_1986->g_1838.sa, "p_1986->g_1838.sa", print_hash_value);
    transparent_crc(p_1986->g_1838.sb, "p_1986->g_1838.sb", print_hash_value);
    transparent_crc(p_1986->g_1838.sc, "p_1986->g_1838.sc", print_hash_value);
    transparent_crc(p_1986->g_1838.sd, "p_1986->g_1838.sd", print_hash_value);
    transparent_crc(p_1986->g_1838.se, "p_1986->g_1838.se", print_hash_value);
    transparent_crc(p_1986->g_1838.sf, "p_1986->g_1838.sf", print_hash_value);
    transparent_crc(p_1986->g_1887.x, "p_1986->g_1887.x", print_hash_value);
    transparent_crc(p_1986->g_1887.y, "p_1986->g_1887.y", print_hash_value);
    transparent_crc(p_1986->g_1984, "p_1986->g_1984", print_hash_value);
    transparent_crc(p_1986->v_collective, "p_1986->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 63; i++)
            transparent_crc(p_1986->g_special_values[i + 63 * get_linear_group_id()], "p_1986->g_special_values[i + 63 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 63; i++)
            transparent_crc(p_1986->l_special_values[i], "p_1986->l_special_values[i]", print_hash_value);
    transparent_crc(p_1986->l_comm_values[get_linear_local_id()], "p_1986->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1986->g_comm_values[get_linear_group_id() * 14 + get_linear_local_id()], "p_1986->g_comm_values[get_linear_group_id() * 14 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
