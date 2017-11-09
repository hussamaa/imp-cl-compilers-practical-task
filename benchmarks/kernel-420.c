// --atomics 8 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 3,29,43 -l 3,1,1
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

__constant uint32_t permutations[10][3] = {
{1,2,0}, // permutation 0
{1,2,0}, // permutation 1
{1,2,0}, // permutation 2
{2,0,1}, // permutation 3
{2,0,1}, // permutation 4
{1,2,0}, // permutation 5
{2,0,1}, // permutation 6
{2,0,1}, // permutation 7
{1,2,0}, // permutation 8
{1,2,0} // permutation 9
};

// Seed: 4004159728

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    uint32_t g_67;
    int32_t *g_206;
    int32_t ** volatile g_205;
    int32_t g_210;
    uint32_t g_213[2][10][7];
    VECTOR(uint8_t, 2) g_233;
    uint16_t g_238[5];
    volatile VECTOR(int8_t, 2) g_246;
    uint8_t *g_249;
    uint32_t *g_254;
    uint32_t ** volatile g_253[7][10][3];
    uint64_t g_257;
    int32_t g_265;
    VECTOR(uint16_t, 8) g_277;
    VECTOR(uint16_t, 2) g_278;
    int32_t g_283;
    int16_t g_289[8];
    volatile int16_t g_290;
    int16_t g_292;
    int32_t g_294;
    int16_t g_296;
    volatile uint32_t g_299;
    int32_t ** volatile g_309;
    int8_t g_310;
    int32_t g_324;
    volatile int32_t g_326;
    volatile uint64_t g_329;
    uint64_t *g_337;
    uint64_t **g_336;
    int32_t g_349;
    int8_t g_359[1];
    VECTOR(int8_t, 2) g_363;
    volatile VECTOR(int8_t, 16) g_366;
    volatile VECTOR(int16_t, 4) g_371;
    VECTOR(int64_t, 4) g_396;
    VECTOR(int64_t, 2) g_397;
    VECTOR(int64_t, 16) g_398;
    VECTOR(int64_t, 4) g_399;
    volatile VECTOR(int16_t, 16) g_411;
    VECTOR(int8_t, 8) g_414;
    VECTOR(int8_t, 16) g_415;
    int32_t ** volatile g_966;
    int32_t *g_1151;
    int64_t g_1154;
    volatile int16_t *g_1162;
    volatile int16_t **g_1161;
    volatile int64_t * volatile *g_1165[4];
    volatile uint16_t g_1171;
    uint64_t g_1174[8];
    int8_t g_1242;
    int32_t g_1271;
    uint32_t g_1273;
    volatile VECTOR(int64_t, 4) g_1292;
    int32_t *g_1294;
    volatile VECTOR(uint8_t, 4) g_1327;
    volatile VECTOR(uint8_t, 4) g_1328;
    int64_t g_1338;
    VECTOR(uint32_t, 8) g_1364;
    VECTOR(uint32_t, 2) g_1367;
    uint32_t g_1383;
    volatile VECTOR(int32_t, 2) g_1395;
    VECTOR(int8_t, 2) g_1432;
    volatile VECTOR(int32_t, 2) g_1469;
    int32_t ** volatile g_1489;
    volatile VECTOR(uint32_t, 2) g_1528;
    volatile VECTOR(uint32_t, 2) g_1562;
    VECTOR(int8_t, 16) g_1577;
    uint64_t **g_1593;
    uint64_t *** volatile g_1592;
    volatile VECTOR(uint16_t, 8) g_1600;
    int64_t g_1625;
    VECTOR(int8_t, 8) g_1634;
    VECTOR(int8_t, 4) g_1635;
    volatile VECTOR(uint64_t, 2) g_1641;
    int32_t ** volatile g_1672;
    int32_t **g_1716;
    VECTOR(int16_t, 8) g_1721;
    VECTOR(int16_t, 8) g_1722;
    VECTOR(uint64_t, 8) g_1777;
    volatile VECTOR(uint64_t, 8) g_1778;
    volatile VECTOR(uint16_t, 16) g_1821;
    uint16_t *g_1844;
    uint16_t ** volatile g_1843;
    uint16_t ** volatile * volatile g_1845;
    int8_t g_1871;
    volatile VECTOR(int32_t, 4) g_1882;
    int16_t g_1890[3];
    VECTOR(uint32_t, 4) g_1900;
    volatile VECTOR(uint32_t, 4) g_1903;
    VECTOR(uint32_t, 4) g_1904;
    VECTOR(uint16_t, 2) g_1910;
    int64_t g_1917;
    int32_t ** volatile g_1919;
    volatile VECTOR(uint16_t, 2) g_1922;
    int32_t g_1924;
    volatile VECTOR(int8_t, 2) g_1940;
    int32_t g_1951;
    volatile VECTOR(int64_t, 16) g_1974;
    VECTOR(uint8_t, 4) g_1982;
    int32_t ** volatile g_2028;
    uint16_t *g_2042;
    volatile VECTOR(int64_t, 8) g_2073;
    volatile uint64_t g_2078;
    volatile uint64_t *g_2077;
    volatile uint64_t **g_2076;
    volatile uint64_t ***g_2075;
    volatile uint64_t ****g_2074;
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
uint64_t  func_1(struct S0 * p_2081);
int64_t  func_20(uint32_t  p_21, struct S0 * p_2081);
uint32_t  func_22(int32_t * p_23, int64_t  p_24, int32_t * p_25, struct S0 * p_2081);
int32_t * func_26(int32_t * p_27, int64_t  p_28, uint64_t  p_29, int16_t  p_30, struct S0 * p_2081);
int32_t * func_31(int64_t  p_32, uint32_t  p_33, int32_t * p_34, int32_t  p_35, struct S0 * p_2081);
uint16_t  func_40(int64_t  p_41, uint32_t  p_42, int32_t  p_43, uint32_t  p_44, struct S0 * p_2081);
uint32_t  func_48(int32_t * p_49, int32_t * p_50, uint64_t  p_51, struct S0 * p_2081);
int32_t  func_55(int64_t  p_56, uint64_t  p_57, int32_t * p_58, uint32_t  p_59, uint8_t  p_60, struct S0 * p_2081);
int64_t  func_61(int64_t  p_62, struct S0 * p_2081);
int32_t  func_68(int8_t  p_69, uint8_t  p_70, int64_t * p_71, int64_t  p_72, struct S0 * p_2081);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2081->g_2 p_2081->g_comm_values p_2081->g_205 p_2081->g_213 p_2081->g_206 p_2081->g_210 p_2081->g_67 p_2081->g_246 p_2081->g_249 p_2081->g_253 p_2081->g_233 p_2081->g_257 p_2081->g_265 p_2081->g_277 p_2081->g_278 p_2081->g_238 p_2081->g_283 p_2081->g_299 p_2081->g_309 p_2081->g_310 p_2081->g_329 p_2081->g_254 p_2081->g_324 p_2081->g_349 p_2081->g_363 p_2081->g_366 p_2081->g_371 p_2081->g_396 p_2081->g_397 p_2081->g_398 p_2081->g_399 p_2081->g_411 p_2081->g_414 p_2081->g_415 p_2081->g_966 p_2081->g_292 p_2081->g_294 p_2081->g_1165 p_2081->g_1151 p_2081->g_1171 p_2081->g_359 p_2081->g_1154 p_2081->g_296 p_2081->g_1395 p_2081->g_1271 p_2081->g_1562 p_2081->g_289 p_2081->g_1294 p_2081->g_1577 p_2081->g_1273 p_2081->g_1592 p_2081->g_1600 p_2081->g_1432 p_2081->l_comm_values p_2081->g_1625 p_2081->g_1634 p_2081->g_1635 p_2081->g_1641 p_2081->g_1844 p_2081->g_1871 p_2081->g_1672 p_2081->g_1882 p_2081->g_1843 p_2081->g_1917 p_2081->g_1777 p_2081->g_1919 p_2081->g_1922 p_2081->g_1924 p_2081->g_1845 p_2081->g_290 p_2081->g_1593 p_2081->g_1367 p_2081->g_1364 p_2081->g_2028 p_2081->g_1489 p_2081->g_1890 p_2081->g_2073 p_2081->g_2074 p_2081->g_1469
 * writes: p_2081->g_2 p_2081->l_comm_values p_2081->g_67 p_2081->g_206 p_2081->g_213 p_2081->g_210 p_2081->g_233 p_2081->g_249 p_2081->g_257 p_2081->g_265 p_2081->g_283 p_2081->g_299 p_2081->g_329 p_2081->g_336 p_2081->g_349 p_2081->g_294 p_2081->g_359 p_2081->g_238 p_2081->g_289 p_2081->g_324 p_2081->g_1151 p_2081->g_292 p_2081->g_1161 p_2081->g_1174 p_2081->g_397 p_2081->g_1273 p_2081->g_1271 p_2081->g_414 p_2081->g_1593 p_2081->g_1625 p_2081->g_1634 p_2081->g_1890 p_2081->g_296 p_2081->g_1154 p_2081->g_278 p_2081->g_415 p_2081->g_1577 p_2081->g_1844 p_2081->g_2042 p_2081->g_1432 p_2081->g_1917
 */
uint64_t  func_1(struct S0 * p_2081)
{ /* block id: 4 */
    int8_t l_47 = (-8L);
    int32_t *l_52 = &p_2081->g_2;
    uint8_t l_404 = 0x1CL;
    uint32_t l_405 = 0x5288064BL;
    int8_t l_406[7] = {0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL};
    int64_t *l_1153[5][3] = {{&p_2081->g_1154,&p_2081->g_1154,(void*)0},{&p_2081->g_1154,&p_2081->g_1154,(void*)0},{&p_2081->g_1154,&p_2081->g_1154,(void*)0},{&p_2081->g_1154,&p_2081->g_1154,(void*)0},{&p_2081->g_1154,&p_2081->g_1154,(void*)0}};
    uint32_t *l_1582 = (void*)0;
    uint32_t *l_1583 = (void*)0;
    uint32_t *l_1584 = &p_2081->g_67;
    int64_t *l_1624 = &p_2081->g_1625;
    int16_t *l_1639 = &p_2081->g_289[4];
    int16_t **l_1638 = &l_1639;
    int16_t ***l_1637 = &l_1638;
    VECTOR(uint8_t, 4) l_1660 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 250UL), 250UL);
    VECTOR(uint8_t, 16) l_1662 = (VECTOR(uint8_t, 16))(0x2BL, (VECTOR(uint8_t, 4))(0x2BL, (VECTOR(uint8_t, 2))(0x2BL, 251UL), 251UL), 251UL, 0x2BL, 251UL, (VECTOR(uint8_t, 2))(0x2BL, 251UL), (VECTOR(uint8_t, 2))(0x2BL, 251UL), 0x2BL, 251UL, 0x2BL, 251UL);
    int32_t l_1677 = 3L;
    int32_t l_1681[5];
    uint8_t l_1682 = 1UL;
    int8_t l_1744 = 0x5BL;
    int32_t l_1759 = 0x37E21F8CL;
    uint8_t **l_1760 = &p_2081->g_249;
    VECTOR(uint64_t, 4) l_1775 = (VECTOR(uint64_t, 4))(0xDB34B2419D6F4F1CL, (VECTOR(uint64_t, 2))(0xDB34B2419D6F4F1CL, 18446744073709551615UL), 18446744073709551615UL);
    VECTOR(uint64_t, 16) l_1776 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
    uint32_t *l_1815 = &p_2081->g_67;
    int32_t ***l_1840 = &p_2081->g_1716;
    VECTOR(uint16_t, 16) l_1867 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xE4BBL), 0xE4BBL), 0xE4BBL, 1UL, 0xE4BBL, (VECTOR(uint16_t, 2))(1UL, 0xE4BBL), (VECTOR(uint16_t, 2))(1UL, 0xE4BBL), 1UL, 0xE4BBL, 1UL, 0xE4BBL);
    uint64_t ***l_1868 = &p_2081->g_1593;
    int64_t l_1872 = 0x196E84110BAD89E6L;
    int16_t l_1891 = 0x409EL;
    VECTOR(uint32_t, 4) l_1932 = (VECTOR(uint32_t, 4))(0xBEDB43B5L, (VECTOR(uint32_t, 2))(0xBEDB43B5L, 4294967289UL), 4294967289UL);
    VECTOR(int16_t, 16) l_1943 = (VECTOR(int16_t, 16))(0x0717L, (VECTOR(int16_t, 4))(0x0717L, (VECTOR(int16_t, 2))(0x0717L, 0x7D77L), 0x7D77L), 0x7D77L, 0x0717L, 0x7D77L, (VECTOR(int16_t, 2))(0x0717L, 0x7D77L), (VECTOR(int16_t, 2))(0x0717L, 0x7D77L), 0x0717L, 0x7D77L, 0x0717L, 0x7D77L);
    VECTOR(int16_t, 8) l_1944 = (VECTOR(int16_t, 8))(0x3E1EL, (VECTOR(int16_t, 4))(0x3E1EL, (VECTOR(int16_t, 2))(0x3E1EL, 0x02F0L), 0x02F0L), 0x02F0L, 0x3E1EL, 0x02F0L);
    int16_t l_1952 = (-10L);
    VECTOR(int16_t, 2) l_1986 = (VECTOR(int16_t, 2))(0x1D8DL, (-1L));
    int32_t l_1991 = 0x7B20295DL;
    VECTOR(uint16_t, 4) l_2043 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL);
    uint16_t l_2045 = 0x6FD9L;
    VECTOR(int8_t, 16) l_2065 = (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x03L), 0x03L), 0x03L, (-9L), 0x03L, (VECTOR(int8_t, 2))((-9L), 0x03L), (VECTOR(int8_t, 2))((-9L), 0x03L), (-9L), 0x03L, (-9L), 0x03L);
    int i, j;
    for (i = 0; i < 5; i++)
        l_1681[i] = 0x5E1144F9L;
    for (p_2081->g_2 = 0; (p_2081->g_2 <= 21); ++p_2081->g_2)
    { /* block id: 7 */
        if ((atomic_inc(&p_2081->g_atomic_input[8 * get_linear_group_id() + 1]) == 0))
        { /* block id: 9 */
            uint32_t l_5[10] = {0x2263126FL,0x2263126FL,0x2263126FL,0x2263126FL,0x2263126FL,0x2263126FL,0x2263126FL,0x2263126FL,0x2263126FL,0x2263126FL};
            int32_t l_15 = 0x0B168F92L;
            int32_t *l_14 = &l_15;
            int32_t *l_16 = &l_15;
            int i;
            ++l_5[3];
            for (l_5[3] = (-24); (l_5[3] <= 14); l_5[3] = safe_add_func_uint16_t_u_u(l_5[3], 8))
            { /* block id: 13 */
                int32_t l_11 = 0L;
                int32_t *l_10 = &l_11;
                uint32_t l_12 = 0xD069F498L;
                uint32_t l_13[6] = {0x0D68F985L,0x0D68F985L,0x0D68F985L,0x0D68F985L,0x0D68F985L,0x0D68F985L};
                int i;
                l_10 = (void*)0;
                l_13[3] |= (l_12 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(1L, 2L, 0x0F6C218EL, 1L)).wxwxzwzzwywwwzzw)).sa);
            }
            l_16 = l_14;
            unsigned int result = 0;
            int l_5_i0;
            for (l_5_i0 = 0; l_5_i0 < 10; l_5_i0++) {
                result += l_5[l_5_i0];
            }
            result += l_15;
            atomic_add(&p_2081->g_special_values[8 * get_linear_group_id() + 1], result);
        }
        else
        { /* block id: 18 */
            (1 + 1);
        }
        return p_2081->g_2;
    }
    if ((safe_mul_func_int16_t_s_s((((safe_unary_minus_func_int64_t_s(((*l_1624) &= func_20(((*l_1584) = ((*p_2081->g_254) = func_22(func_26(func_31(((*l_52) = (safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(5UL, func_40((safe_div_func_uint32_t_u_u(l_47, func_48(l_52, &p_2081->g_2, p_2081->g_comm_values[p_2081->tid], p_2081))), ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 4))(p_2081->g_396.zwzy)).wxzzzwzx))), ((1L == p_2081->g_278.y) , (((VECTOR(int64_t, 2))(1L, 0x7256A8053555F3D5L)).odd , ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 16))(p_2081->g_397.yxxyyxxyyxyyxxyx)).sf2, ((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_2081->g_398.s3b8fed2d)).lo)).zzxzxxzz, ((VECTOR(int64_t, 4))(p_2081->g_399.wyyy)).zwxzyzxy))).s54, ((VECTOR(int64_t, 2))(0x416A3E06B2863BA7L, 0x2785EC50F4389B07L))))), 0L, ((safe_sub_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(0xF661B9C6L, l_404)) || (-1L)) == p_2081->g_397.y), p_2081->g_397.x)) <= GROUP_DIVERGE(2, 1)), ((VECTOR(int64_t, 4))((-2L))))).s7447462203602022, ((VECTOR(int64_t, 16))((-1L))))))))).even)).s7)), p_2081->g_396.y, ((VECTOR(int64_t, 4))(1L)), 5L, (-1L))).sd , p_2081->g_278.y) , l_405), p_2081->g_278.y, l_406[5], p_2081))) , (*l_52)), 255UL))), p_2081->g_396.w, l_52, p_2081->g_277.s1, p_2081), l_406[3], l_405, p_2081->g_278.y, p_2081), p_2081->g_296, l_52, p_2081))), p_2081)))) <= GROUP_DIVERGE(2, 1)) & 1UL), 0x2857L)))
    { /* block id: 863 */
        (*p_2081->g_1294) &= ((0x8FBC448978653115L | ((!0UL) , p_2081->g_246.y)) <= (safe_rshift_func_uint16_t_u_s(0x0FA3L, 0)));
    }
    else
    { /* block id: 865 */
        int32_t l_1636 = 0x5A73B84EL;
        uint32_t l_1640 = 0x3A3A6074L;
        VECTOR(int64_t, 2) l_1642 = (VECTOR(int64_t, 2))((-3L), 0L);
        int8_t *l_1643 = (void*)0;
        int8_t *l_1644[7][5] = {{(void*)0,&p_2081->g_310,&p_2081->g_310,(void*)0,(void*)0},{(void*)0,&p_2081->g_310,&p_2081->g_310,(void*)0,(void*)0},{(void*)0,&p_2081->g_310,&p_2081->g_310,(void*)0,(void*)0},{(void*)0,&p_2081->g_310,&p_2081->g_310,(void*)0,(void*)0},{(void*)0,&p_2081->g_310,&p_2081->g_310,(void*)0,(void*)0},{(void*)0,&p_2081->g_310,&p_2081->g_310,(void*)0,(void*)0},{(void*)0,&p_2081->g_310,&p_2081->g_310,(void*)0,(void*)0}};
        int16_t **l_1649 = &l_1639;
        int16_t ***l_1650 = &l_1649;
        VECTOR(uint8_t, 2) l_1661 = (VECTOR(uint8_t, 2))(255UL, 247UL);
        VECTOR(int8_t, 16) l_1665 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x31L), 0x31L), 0x31L, 0L, 0x31L, (VECTOR(int8_t, 2))(0L, 0x31L), (VECTOR(int8_t, 2))(0L, 0x31L), 0L, 0x31L, 0L, 0x31L);
        uint32_t l_1669 = 4294967295UL;
        int32_t l_1678 = 0L;
        int32_t l_1679 = 7L;
        int32_t l_1680[6][1][6] = {{{(-8L),7L,(-8L),(-8L),7L,(-8L)}},{{(-8L),7L,(-8L),(-8L),7L,(-8L)}},{{(-8L),7L,(-8L),(-8L),7L,(-8L)}},{{(-8L),7L,(-8L),(-8L),7L,(-8L)}},{{(-8L),7L,(-8L),(-8L),7L,(-8L)}},{{(-8L),7L,(-8L),(-8L),7L,(-8L)}}};
        uint32_t l_1708[8] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL};
        VECTOR(int32_t, 8) l_1717 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 7L), 7L), 7L, 1L, 7L);
        uint16_t *l_1837 = (void*)0;
        uint16_t **l_1836[4];
        uint16_t ***l_1835[7] = {&l_1836[1],&l_1836[1],&l_1836[1],&l_1836[1],&l_1836[1],&l_1836[1],&l_1836[1]};
        int16_t l_1848 = 0x4F29L;
        uint64_t ***l_1861[4];
        VECTOR(int8_t, 16) l_1877 = (VECTOR(int8_t, 16))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), (-7L)), (-7L)), (-7L), (-6L), (-7L), (VECTOR(int8_t, 2))((-6L), (-7L)), (VECTOR(int8_t, 2))((-6L), (-7L)), (-6L), (-7L), (-6L), (-7L));
        VECTOR(uint32_t, 16) l_1933 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint32_t, 2))(1UL, 0UL), (VECTOR(uint32_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
        VECTOR(int16_t, 4) l_1942 = (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x285CL), 0x285CL);
        uint64_t *l_2008 = (void*)0;
        uint64_t **l_2007 = &l_2008;
        VECTOR(uint64_t, 16) l_2039 = (VECTOR(uint64_t, 16))(0xF8719566CB3554E5L, (VECTOR(uint64_t, 4))(0xF8719566CB3554E5L, (VECTOR(uint64_t, 2))(0xF8719566CB3554E5L, 0x264BA2F5D31D5B22L), 0x264BA2F5D31D5B22L), 0x264BA2F5D31D5B22L, 0xF8719566CB3554E5L, 0x264BA2F5D31D5B22L, (VECTOR(uint64_t, 2))(0xF8719566CB3554E5L, 0x264BA2F5D31D5B22L), (VECTOR(uint64_t, 2))(0xF8719566CB3554E5L, 0x264BA2F5D31D5B22L), 0xF8719566CB3554E5L, 0x264BA2F5D31D5B22L, 0xF8719566CB3554E5L, 0x264BA2F5D31D5B22L);
        VECTOR(int64_t, 8) l_2059 = (VECTOR(int64_t, 8))(0x70E967E889C1318BL, (VECTOR(int64_t, 4))(0x70E967E889C1318BL, (VECTOR(int64_t, 2))(0x70E967E889C1318BL, 1L), 1L), 1L, 0x70E967E889C1318BL, 1L);
        int32_t l_2079 = (-4L);
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1836[i] = &l_1837;
        for (i = 0; i < 4; i++)
            l_1861[i] = &p_2081->g_1593;
        if ((atomic_inc(&p_2081->g_atomic_input[8 * get_linear_group_id() + 3]) == 3))
        { /* block id: 867 */
            int32_t *l_1629 = (void*)0;
            int32_t **l_1628 = &l_1629;
            int32_t **l_1630 = &l_1629;
            uint8_t l_1631 = 0x44L;
            l_1630 = l_1628;
            l_1631 &= (-1L);
            unsigned int result = 0;
            result += l_1631;
            atomic_add(&p_2081->g_special_values[8 * get_linear_group_id() + 3], result);
        }
        else
        { /* block id: 870 */
            (1 + 1);
        }
        (*p_2081->g_1294) &= (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(p_2081->g_1634.s04102451)).s47, ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(p_2081->g_1635.ywzz)).zxwxxywy, ((VECTOR(int8_t, 16))(0x60L, ((*l_52) = (p_2081->g_289[7] , (((l_1636 <= (l_1637 == &l_1638)) || l_1640) == ((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 4))(p_2081->g_1641.xyyx)).zxyzwyyz, ((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 4))(l_1642.yyxy)).zxzxyyzy)))))).s5))), 0x5EL, p_2081->g_246.y, ((VECTOR(int8_t, 8))(0x28L, (FAKE_DIVERGE(p_2081->local_1_offset, get_local_id(1), 10) <= (safe_div_func_uint64_t_u_u((((safe_sub_func_int16_t_s_s((&p_2081->g_1162 == ((*l_1650) = ((*l_1637) = l_1649))), l_1642.x)) || 0L) , (*l_52)), l_1642.x))), l_1642.x, ((VECTOR(int8_t, 4))(0x3DL)), 4L)), ((VECTOR(int8_t, 4))(3L)))).even, ((VECTOR(int8_t, 8))((-9L)))))).s16))).yyxxyxyx)).s0, p_2081->g_414.s3));
        for (p_2081->g_265 = 20; (p_2081->g_265 >= 4); p_2081->g_265--)
        { /* block id: 879 */
            VECTOR(uint8_t, 2) l_1653 = (VECTOR(uint8_t, 2))(0x09L, 0UL);
            uint16_t l_1654[2][6][6] = {{{65527UL,65527UL,0x5753L,0x2CBEL,0x7634L,0x2CBEL},{65527UL,65527UL,0x5753L,0x2CBEL,0x7634L,0x2CBEL},{65527UL,65527UL,0x5753L,0x2CBEL,0x7634L,0x2CBEL},{65527UL,65527UL,0x5753L,0x2CBEL,0x7634L,0x2CBEL},{65527UL,65527UL,0x5753L,0x2CBEL,0x7634L,0x2CBEL},{65527UL,65527UL,0x5753L,0x2CBEL,0x7634L,0x2CBEL}},{{65527UL,65527UL,0x5753L,0x2CBEL,0x7634L,0x2CBEL},{65527UL,65527UL,0x5753L,0x2CBEL,0x7634L,0x2CBEL},{65527UL,65527UL,0x5753L,0x2CBEL,0x7634L,0x2CBEL},{65527UL,65527UL,0x5753L,0x2CBEL,0x7634L,0x2CBEL},{65527UL,65527UL,0x5753L,0x2CBEL,0x7634L,0x2CBEL},{65527UL,65527UL,0x5753L,0x2CBEL,0x7634L,0x2CBEL}}};
            VECTOR(int32_t, 8) l_1657 = (VECTOR(int32_t, 8))(0x5E9BEA5EL, (VECTOR(int32_t, 4))(0x5E9BEA5EL, (VECTOR(int32_t, 2))(0x5E9BEA5EL, 0x42B53AD3L), 0x42B53AD3L), 0x42B53AD3L, 0x5E9BEA5EL, 0x42B53AD3L);
            int32_t *l_1711 = &l_1677;
            int32_t *l_1712 = &l_1680[3][0][5];
            uint8_t *l_1774 = (void*)0;
            uint64_t l_1816[3][2] = {{0x8D818482A389715FL,18446744073709551608UL},{0x8D818482A389715FL,18446744073709551608UL},{0x8D818482A389715FL,18446744073709551608UL}};
            uint16_t *l_1834 = &p_2081->g_238[2];
            uint16_t **l_1833 = &l_1834;
            uint16_t ***l_1832 = &l_1833;
            uint64_t *l_1855 = &p_2081->g_257;
            int i, j, k;
            (1 + 1);
        }
        for (l_1848 = 0; (l_1848 <= (-19)); --l_1848)
        { /* block id: 959 */
            uint64_t l_1860 = 0x82403A89DDA4E8DDL;
            uint64_t ****l_1862 = &l_1861[2];
            int32_t l_1889 = 0x7D7F8174L;
            uint64_t *l_1967 = &p_2081->g_1174[6];
            int32_t l_2011[2][9][8] = {{{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L}},{{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L},{1L,(-1L),(-2L),1L,1L,0x42974248L,1L,0x1002F449L}}};
            uint16_t *l_2024 = &p_2081->g_238[1];
            int32_t l_2025[7] = {0x3F143A66L,0x3F143A66L,0x3F143A66L,0x3F143A66L,0x3F143A66L,0x3F143A66L,0x3F143A66L};
            int32_t *l_2067 = (void*)0;
            int16_t l_2072 = 0x3DFBL;
            int16_t l_2080 = 0L;
            int i, j, k;
            if ((safe_sub_func_int8_t_s_s((p_2081->g_1634.s7 = ((l_1860 && ((p_2081->g_1641.x , &p_2081->g_1593) == ((*l_1862) = l_1861[0]))) ^ (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((*p_2081->g_1844) ^= ((VECTOR(uint16_t, 4))(l_1867.s2e2e)).x), 3)) & p_2081->g_213[0][3][4]), (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((l_1868 != l_1868), ((VECTOR(int32_t, 4))(1L, ((((((l_1642.x <= (safe_rshift_func_int8_t_s_s(((((&p_2081->g_1844 == &p_2081->g_1844) , 254UL) ^ l_1860) == l_1680[3][0][4]), p_2081->g_1871))) || l_1848) == l_1708[7]) && l_1872) || (*p_2081->g_1294)) , (-1L)), 0x3663113FL, 0x7C3354F1L)), ((VECTOR(int32_t, 4))((-1L))), 0x0E0D35BDL, (*l_52), 0x231FFDAFL, ((VECTOR(int32_t, 4))(0x3902EDCCL)))).sf2)).hi > (*p_2081->g_1294)))))), l_1860)))
            { /* block id: 963 */
                VECTOR(int16_t, 16) l_1883 = (VECTOR(int16_t, 16))(0x5591L, (VECTOR(int16_t, 4))(0x5591L, (VECTOR(int16_t, 2))(0x5591L, 0x7021L), 0x7021L), 0x7021L, 0x5591L, 0x7021L, (VECTOR(int16_t, 2))(0x5591L, 0x7021L), (VECTOR(int16_t, 2))(0x5591L, 0x7021L), 0x5591L, 0x7021L, 0x5591L, 0x7021L);
                int32_t *l_1888 = (void*)0;
                VECTOR(uint32_t, 2) l_1905 = (VECTOR(uint32_t, 2))(0x478A4B5FL, 3UL);
                VECTOR(uint16_t, 8) l_1920 = (VECTOR(uint16_t, 8))(0xE958L, (VECTOR(uint16_t, 4))(0xE958L, (VECTOR(uint16_t, 2))(0xE958L, 0UL), 0UL), 0UL, 0xE958L, 0UL);
                int16_t ***l_1927 = &l_1649;
                int64_t *l_1934 = (void*)0;
                uint64_t l_1953 = 0x3917CBCEF6DBDFCEL;
                int32_t *l_1968[8][3] = {{&p_2081->g_1924,&p_2081->g_1924,&p_2081->g_1924},{&p_2081->g_1924,&p_2081->g_1924,&p_2081->g_1924},{&p_2081->g_1924,&p_2081->g_1924,&p_2081->g_1924},{&p_2081->g_1924,&p_2081->g_1924,&p_2081->g_1924},{&p_2081->g_1924,&p_2081->g_1924,&p_2081->g_1924},{&p_2081->g_1924,&p_2081->g_1924,&p_2081->g_1924},{&p_2081->g_1924,&p_2081->g_1924,&p_2081->g_1924},{&p_2081->g_1924,&p_2081->g_1924,&p_2081->g_1924}};
                int32_t **l_2026 = (void*)0;
                int32_t **l_2027 = (void*)0;
                int i, j;
                (*l_52) = (l_1860 & ((l_1860 > ((safe_div_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_1877.s17)), 0x23L, (-1L))).odd)).yxxxxxyyyyxyxxxy, (int8_t)((((safe_div_func_uint64_t_u_u(((p_2081->g_1890[2] = (l_1889 = (safe_add_func_int32_t_s_s(0L, ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(1L, (**p_2081->g_1672), 0x44E4BB5EL, 0x0C1B1F03L)).even, ((VECTOR(int32_t, 16))(0x107D2E57L, 0x3ECDD80EL, 0x09673FB1L, ((VECTOR(int32_t, 2))(p_2081->g_1882.zy)), (-1L), ((l_1883.se != ((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((**p_2081->g_1843) > ((void*)0 == &p_2081->g_289[7])), 1)), p_2081->g_359[0])) , (*p_2081->g_1151))) , (-1L)), (-8L), ((VECTOR(int32_t, 2))(0x12D5AD6AL)), (**p_2081->g_1672), ((VECTOR(int32_t, 2))(0x60EA8D38L)), 0x3D4DEBECL, 0x70B3C9EFL, 4L)).s26))).yyyyyxxyyxyyxyxx)).lo, ((VECTOR(int32_t, 8))(0x0C374C3AL))))), ((VECTOR(int32_t, 8))(0x0B1B64FFL))))).s7)))) , l_1891), 0x581CDE27EB2E5B56L)) & GROUP_DIVERGE(1, 1)) , 4294967295UL) ^ 0UL)))).sf, p_2081->g_265)), l_1680[3][0][4])) , 0x2E1EDEEBEF2C83A2L)) , (*p_2081->g_254)));
                for (l_1678 = 0; (l_1678 < (-10)); l_1678 = safe_sub_func_int64_t_s_s(l_1678, 7))
                { /* block id: 969 */
                    VECTOR(uint8_t, 8) l_1915 = (VECTOR(uint8_t, 8))(0x97L, (VECTOR(uint8_t, 4))(0x97L, (VECTOR(uint8_t, 2))(0x97L, 1UL), 1UL), 1UL, 0x97L, 1UL);
                    VECTOR(uint16_t, 2) l_1921 = (VECTOR(uint16_t, 2))(0x73BEL, 0x0230L);
                    int i;
                    if (l_1860)
                    { /* block id: 970 */
                        uint64_t l_1916 = 0xFAA4E4357673AD56L;
                        int32_t *l_1918 = &l_1680[0][0][1];
                        int16_t ****l_1928 = (void*)0;
                        int16_t ****l_1929 = &l_1927;
                        uint32_t **l_1930 = &l_1583;
                        uint32_t *l_1931 = &p_2081->g_1273;
                        int64_t *l_1935 = (void*)0;
                        int16_t *l_1936 = (void*)0;
                        int16_t *l_1937 = (void*)0;
                        int16_t *l_1938 = &p_2081->g_296;
                        int32_t ****l_1939 = &l_1840;
                        int32_t l_1958 = 0x2AA61FC2L;
                        (*p_2081->g_1919) = ((safe_rshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_s(((((!l_1860) , l_1642.y) , ((&p_2081->g_1161 == &p_2081->g_1161) >= ((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(0xD421172DL, ((VECTOR(uint32_t, 8))(p_2081->g_1900.wwzxzzzy)), ((((*p_2081->g_206) = (safe_mul_func_uint8_t_u_u((((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_2081->g_1903.yz)).xxxyxyyxxyxyxyxy)), ((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x21F020B4L, 0x7EB1B23CL)).xyyx)), ((VECTOR(uint32_t, 8))(p_2081->g_1904.zwywzwzz)).hi))).zzxzzyzxwyxxxxwy, ((VECTOR(uint32_t, 2))(l_1905.yx)).xyxyxyyxxyxxyyyx)))))).s5 , p_2081->g_1600.s7), ((safe_add_func_uint16_t_u_u((4294967295UL ^ (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))((-1L), 0x4BL)), (int8_t)((VECTOR(int8_t, 2))((-1L), 0x42L)).even, (int8_t)(p_2081->g_1871 |= (((*l_52) &= (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_2081->g_1910.yxyyyyyxyyxyxxyx)).lo)).s11, ((VECTOR(uint16_t, 16))((safe_rshift_func_uint8_t_u_u(p_2081->g_1174[0], (safe_rshift_func_uint8_t_u_s((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_1915.s16)).xxxxyyxy)).s5 == 1UL), 5)))), (*p_2081->g_1844), ((VECTOR(uint16_t, 4))(0xACE9L)), 0x0B15L, ((VECTOR(uint16_t, 2))(0x9408L)), 0x0CF9L, FAKE_DIVERGE(p_2081->local_1_offset, get_local_id(1), 10), GROUP_DIVERGE(2, 1), (*p_2081->g_1844), ((VECTOR(uint16_t, 2))(1UL)), 9UL)).sc8))).odd, l_1916))) < 1L))))).yxxx)))).w , l_1915.s7)), p_2081->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2081->tid, 3))])) > 0x241CBBE5L)))) != l_1916) , 0x84248D8DL), ((VECTOR(uint32_t, 2))(4UL)), 0x1300E0EEL, 0xB486E1BAL, 4294967291UL, 0UL)).sf4fc)), ((VECTOR(uint32_t, 4))(0UL)), ((VECTOR(uint32_t, 4))(3UL))))).z, GROUP_DIVERGE(2, 1))) & p_2081->g_1917))) > l_1905.y), p_2081->g_1777.s6)) || l_1905.y) , l_1916), (*p_2081->g_1844))) , l_1918);
                        atomic_and(&p_2081->g_atomic_reduction[get_linear_group_id()], ((**p_2081->g_205) = (((*l_1939) = (l_1883.se , ((p_2081->g_1154 = (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_1920.s6352503466317626)).se319)).wyzzwwzw)))).s3202203106713610, ((VECTOR(uint16_t, 16))(l_1921.yxxyyxxyxxxyyxxx))))).s8f81)), 1UL, ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 8))(p_2081->g_1922.xxyxxyxx)).s34, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))((safe_unary_minus_func_uint8_t_u(GROUP_DIVERGE(1, 1))), ((VECTOR(uint16_t, 2))(0x70D9L, 0x82BAL)), 0x3CC7L)))).lo, ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0x27E7L, ((p_2081->g_1924 , (!(((*l_1938) = ((***l_1650) = (safe_mul_func_int16_t_s_s(p_2081->g_1635.x, (((VECTOR(uint32_t, 8))(4294967295UL, (((((*l_1929) = l_1927) != (void*)0) , l_1930) != (void*)0), ((*l_1931) = l_1915.s0), ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 2))(l_1932.xx)).yxyy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_1933.sc38a)).xwzyxwxx)).lo))), 1UL)).s2 , ((((**p_2081->g_1843) | 0x288AL) , l_1934) != l_1935)))))) ^ 0x46F7L))) , l_1877.s3), 0xAF87L, 0xFC2BL)).xyxwyxwwyzzwzwzy)).s1d)), ((VECTOR(uint16_t, 2))(0xC3E6L))))).yyxy)).wwzyzzxxwwwyxwyx, (uint16_t)65527UL, (uint16_t)(**p_2081->g_1843)))).s66))), 0xDFCFL)))), ((VECTOR(uint16_t, 2))(0x89A4L)), ((VECTOR(uint16_t, 4))(1UL)), 8UL, 0x7842L)).s5 , 0x14F6A8209BDE7EAFL)) , &p_2081->g_1716))) == &p_2081->g_1716)));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_2081->v_collective += p_2081->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        (*l_52) &= ((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_2081->g_1940.xy)), (-1L), (-9L))).x > ((safe_unary_minus_func_int64_t_s(0x744BFA61D2BBFFF6L)) > 0UL)) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(1L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_1942.wyyz)), p_2081->g_1722.s3, 0x6A26L, 0x1DD8L, (-10L))), (-1L), ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(0x27D1L, ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_1943.s73e0)))).hi, ((VECTOR(int16_t, 2))(l_1944.s65)), ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 16))(((***l_1927) = 0x277FL), (-1L), 0L, (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(((*l_1918) = 0x6571422BL), 0x55E60B62L, (-10L), 1L)).z, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(0UL, (((((((safe_lshift_func_uint16_t_u_u((((*p_2081->g_254) & ((*p_2081->g_1294) = (safe_mod_func_uint8_t_u_u(p_2081->g_1951, 0xCDL)))) >= l_1952), l_1678)) , &p_2081->g_249) == (void*)0) < 0x49EDE7D8L) != p_2081->g_1600.s0) , l_1915.s3) ^ 1UL), 0UL, 4294967295UL)).zzyzxzzzzzxzxxxz)).s5)), ((VECTOR(int16_t, 4))(0L)), l_1920.s2, 1L, 0x0DBFL, 0x6A01L, l_1953, (-1L), 0x1E7FL, 8L)).sd9)))))), 0x09F6L)).lo, ((VECTOR(int16_t, 2))(0x7DA8L)), ((VECTOR(int16_t, 2))(0x26BAL))))), ((VECTOR(int16_t, 2))(0x5F96L)), 0x5DADL, 0x51D9L)).sd0, ((VECTOR(int16_t, 2))(0x74D8L))))).yyxxyyyx, ((VECTOR(int16_t, 8))((-1L)))))).s6377532365712427, ((VECTOR(int16_t, 16))(5L))))).s9d6c, ((VECTOR(int16_t, 4))(0x67BDL)), ((VECTOR(int16_t, 4))(0x0455L))))).hi)), ((VECTOR(uint16_t, 2))(65530UL))))), 0x024A8C6AL)).ywyxzxzyzyyyzywz)).s5);
                        (*l_52) = (l_1921.y | (safe_mul_func_uint16_t_u_u((**p_2081->g_1843), (p_2081->g_1154 , (!(((safe_lshift_func_uint16_t_u_u((&p_2081->g_310 == (void*)0), (l_1958 > p_2081->g_210))) , (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((*l_52) , l_1967) == (void*)0), (*l_1918))), p_2081->g_1777.s0)), p_2081->g_396.y)), p_2081->g_363.y))) | 0xE2E4ED383DE467B4L))))));
                    }
                    else
                    { /* block id: 988 */
                        if ((**p_2081->g_1672))
                            break;
                    }
                    l_1968[0][0] = &l_1678;
                }
                for (l_404 = 0; (l_404 <= 35); l_404++)
                { /* block id: 995 */
                    uint32_t l_1971 = 0xE45661C4L;
                    int32_t l_1977 = 0x0CC74BF7L;
                    int32_t **l_1992 = &p_2081->g_1151;
                    (*l_1992) = (((*l_1624) = (l_1971 ^ ((p_2081->g_359[0] = ((p_2081->g_1577.s0 = (safe_lshift_func_int8_t_s_u((((((VECTOR(int64_t, 8))(p_2081->g_1974.saa9c1c73)).s3 , (((***p_2081->g_1845) >= (safe_add_func_uint16_t_u_u((p_2081->g_278.x++), (l_1679 |= (((*l_52) <= (l_1977 = 0x2E734F12L)) > (safe_rshift_func_int16_t_s_u((((VECTOR(uint8_t, 2))(p_2081->g_1982.xw)).lo ^ ((((+(safe_lshift_func_int16_t_s_s(0x6007L, 7))) || (safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-6L), 0x4CDFL)).xyyxyyxx)).even)), ((VECTOR(int16_t, 2))(l_1986.xy)).yyxy))).y))) == 5L) || ((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_1991, (p_2081->g_415.s3 = l_1971))), (p_2081->g_396.z , l_1971))) || l_1971))), 7))))))) > p_2081->g_363.y)) , 0x2E2361AE7D512630L) <= (-1L)), p_2081->g_363.x))) , p_2081->g_1922.x)) || p_2081->g_290))) , (void*)0);
                }
                (*p_2081->g_2028) = func_31((((safe_add_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((safe_add_func_int64_t_s_s(((l_2025[0] = ((p_2081->g_278.x |= (safe_mul_func_int16_t_s_s(6L, (safe_lshift_func_uint16_t_u_u(((*l_52) = (((safe_mod_func_uint32_t_u_u(((l_2007 = ((**l_1862) = (*p_2081->g_1592))) == (void*)0), (safe_add_func_int8_t_s_s((l_2011[0][4][3] |= (l_1889 = (-2L))), (safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((*l_52), (((safe_lshift_func_int16_t_s_u(((0xCFDE0D86L != (safe_lshift_func_int8_t_s_u(((l_1669 | (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(3UL, 0x1F4E5A6583FDF714L, 0UL, 0UL)).w, (((l_2024 = &p_2081->g_238[4]) != (p_2081->g_1844 = &p_2081->g_238[2])) || p_2081->g_1924)))) && 0x8AE8L), GROUP_DIVERGE(0, 1)))) > 253UL), p_2081->g_238[2])) >= l_1665.s1) != p_2081->g_363.y))), l_1860)), p_2081->g_349)))))) | GROUP_DIVERGE(1, 1)) > p_2081->g_238[2])), 12))))) & p_2081->g_1634.s6)) != p_2081->g_1367.y), l_1708[5])) , 0xA57850C049AA43C1L), p_2081->g_1367.y)), l_1640)) < l_1860), p_2081->g_67)) , (*l_52)) == p_2081->g_396.y), p_2081->g_1364.s5, &p_2081->g_210, l_1642.x, p_2081);
            }
            else
            { /* block id: 1015 */
                int32_t *l_2029 = &p_2081->g_1924;
                int32_t **l_2030 = &p_2081->g_206;
                uint16_t *l_2041 = &p_2081->g_238[3];
                l_2029 = (*p_2081->g_1672);
                (*l_2030) = &l_1678;
                for (l_47 = 0; (l_47 != 23); l_47 = safe_add_func_int32_t_s_s(l_47, 8))
                { /* block id: 1020 */
                    (*l_2030) = (*p_2081->g_1489);
                }
                for (p_2081->g_296 = 0; (p_2081->g_296 > 13); p_2081->g_296 = safe_add_func_int64_t_s_s(p_2081->g_296, 1))
                { /* block id: 1025 */
                    int32_t l_2040 = 1L;
                    int32_t **l_2060 = &l_2029;
                    if (((((safe_div_func_uint32_t_u_u((+((((*l_52) < ((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x7DL, 0xD2L)).yxxxxxxyyyyyyyxy)).even)).s5454276663621353))).s73d7, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(0x6DL, 248UL)), (uint8_t)(((VECTOR(uint64_t, 8))(l_2039.se3089434)).s0 , l_2040)))).yyxy))).w, ((((*p_2081->g_1843) != (p_2081->g_2042 = l_2041)) , l_2040) ^ ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))(l_2043.wywwxyxx)).s15, ((VECTOR(uint16_t, 2))(2UL, 0x997AL))))).lo))) <= 0xD1L)) , l_1815) == (void*)0)), 0xCAD6C9FEL)) , p_2081->g_1890[2]) , 0x0B10L) != l_1860))
                    { /* block id: 1028 */
                        return l_2040;
                    }
                    else
                    { /* block id: 1030 */
                        uint64_t *l_2050 = (void*)0;
                        uint64_t *l_2051 = &p_2081->g_257;
                        uint8_t *l_2054 = (void*)0;
                        VECTOR(int8_t, 2) l_2066 = (VECTOR(int8_t, 2))(0x1BL, 0x43L);
                        int i;
                        l_2045++;
                        l_2067 = ((*l_2060) = func_31((safe_mod_func_uint8_t_u_u(((p_2081->g_233.x = (((++(*l_2051)) , ((**l_2030) , l_2041)) == (void*)0)) || p_2081->g_371.z), 1L)), (safe_rshift_func_uint8_t_u_u(((((VECTOR(int32_t, 8))((safe_lshift_func_int8_t_s_u((((p_2081->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2081->tid, 3))] |= ((VECTOR(int64_t, 8))(l_2059.s37337104)).s2) && ((&p_2081->g_1294 == l_2060) <= (p_2081->g_1432.y = ((safe_sub_func_int16_t_s_s(((1UL >= (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 2))(0x79L, 0x06L)).yxyyyyxy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_2065.s10d4)).even)).yyxx)).wwwzwwxy, ((VECTOR(int8_t, 2))(l_2066.yx)).yxyxyxxy))).s6, 6UL))) ^ 255UL), GROUP_DIVERGE(1, 1))) , l_1889)))) , (**l_2060)), 4)), 1L, ((VECTOR(int32_t, 2))(8L)), (*p_2081->g_206), l_1889, 0x2B0BF173L, 0x65A9D545L)).s2 | (*l_52)) | p_2081->g_283), (**l_2030))), &p_2081->g_1924, (**l_2060), p_2081));
                        (*l_2030) = (*l_2060);
                        (*l_2060) = func_31(((safe_mul_func_int8_t_s_s((**l_2060), (l_2072 ^ (((VECTOR(int64_t, 8))(p_2081->g_2073.s04001306)).s4 > (((*l_1624) = ((void*)0 != p_2081->g_2074)) , (p_2081->g_1917 = (p_2081->g_238[2] >= 18446744073709551615UL))))))) > (*p_2081->g_254)), (*l_2029), (l_2079 , (void*)0), p_2081->g_294, p_2081);
                    }
                    return l_2040;
                }
            }
            (*p_2081->g_1294) &= (l_2080 < (*p_2081->g_254));
            return p_2081->g_1469.y;
        }
    }
    return (*l_52);
}


/* ------------------------------------------ */
/* 
 * reads : p_2081->g_292 p_2081->g_1273 p_2081->g_1592 p_2081->g_1151 p_2081->g_210 p_2081->g_265 p_2081->g_294 p_2081->g_1600 p_2081->g_249 p_2081->g_1432 p_2081->g_254 p_2081->g_213 p_2081->l_comm_values p_2081->g_206
 * writes: p_2081->g_292 p_2081->g_1273 p_2081->g_1593 p_2081->g_249 p_2081->g_1271 p_2081->g_210 p_2081->g_265 p_2081->g_294
 */
int64_t  func_20(uint32_t  p_21, struct S0 * p_2081)
{ /* block id: 845 */
    VECTOR(int16_t, 2) l_1594 = (VECTOR(int16_t, 2))(0x1842L, 0x0A6BL);
    VECTOR(uint16_t, 16) l_1595 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xF361L), 0xF361L), 0xF361L, 65535UL, 0xF361L, (VECTOR(uint16_t, 2))(65535UL, 0xF361L), (VECTOR(uint16_t, 2))(65535UL, 0xF361L), 65535UL, 0xF361L, 65535UL, 0xF361L);
    uint8_t *l_1601[4][4];
    uint8_t *l_1602 = (void*)0;
    uint8_t **l_1603 = &p_2081->g_249;
    VECTOR(int32_t, 16) l_1604 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
    VECTOR(int64_t, 4) l_1613 = (VECTOR(int64_t, 4))(0x5C518357C55BB5F1L, (VECTOR(int64_t, 2))(0x5C518357C55BB5F1L, 4L), 4L);
    uint32_t *l_1616 = &p_2081->g_1273;
    int32_t *l_1617 = &p_2081->g_210;
    int32_t *l_1618 = &p_2081->g_1271;
    int32_t *l_1619 = &p_2081->g_1271;
    int32_t *l_1620[8][1][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint8_t l_1621 = 1UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_1601[i][j] = (void*)0;
    }
    for (p_2081->g_292 = (-3); (p_2081->g_292 == 10); p_2081->g_292 = safe_add_func_uint64_t_u_u(p_2081->g_292, 5))
    { /* block id: 848 */
        VECTOR(uint32_t, 16) l_1589 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967287UL), 4294967287UL), 4294967287UL, 0UL, 4294967287UL, (VECTOR(uint32_t, 2))(0UL, 4294967287UL), (VECTOR(uint32_t, 2))(0UL, 4294967287UL), 0UL, 4294967287UL, 0UL, 4294967287UL);
        uint64_t **l_1590 = (void*)0;
        int i;
        for (p_2081->g_1273 = 0; (p_2081->g_1273 != 44); p_2081->g_1273 = safe_add_func_int32_t_s_s(p_2081->g_1273, 8))
        { /* block id: 851 */
            uint64_t ***l_1591 = &l_1590;
            (*p_2081->g_1592) = (((VECTOR(uint32_t, 4))(l_1589.scf8d)).w , ((*l_1591) = l_1590));
            if ((*p_2081->g_1151))
                break;
        }
    }
    (*p_2081->g_206) = ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(l_1594.yy)).yxyyyxxx, ((VECTOR(uint16_t, 16))(l_1595.s65f0a419bc511427)).even))).s3333166470514634, ((VECTOR(int32_t, 4))((safe_add_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(p_2081->g_1600.s03707551)).s5254233702324605)).s8, (((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x53485F02L, (l_1601[3][0] != ((*l_1603) = (l_1602 = p_2081->g_249))), ((VECTOR(int32_t, 4))(l_1604.s008a)), (-2L), (-4L))).s65)).xyxx)).zzxwzyzwyxwzzzww, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(1L, (-5L))).xxxy, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(l_1604.s6, 0x5573L, ((((0x34257694L != (p_2081->g_1432.x != (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(p_2081->g_1273, (safe_rshift_func_uint16_t_u_s(0UL, 1)))), 6)))) && (p_21 >= (((VECTOR(uint8_t, 16))((((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_1613.yw)).even, (safe_mod_func_int32_t_s_s((l_1616 != l_1616), (*p_2081->g_254))))) > 7L) ^ p_21), 0xD9L, ((VECTOR(uint8_t, 2))(0xB3L)), 0x45L, 0x9EL, 255UL, FAKE_DIVERGE(p_2081->group_0_offset, get_group_id(0), 10), ((VECTOR(uint8_t, 8))(0x34L)))).sb , FAKE_DIVERGE(p_2081->global_1_offset, get_global_id(1), 10)))) == (*p_2081->g_1151)) & p_21), ((VECTOR(int16_t, 2))(0x4A7FL)), ((VECTOR(int16_t, 2))(0x6746L)), 0x590EL)).even, (int16_t)l_1604.sb, (int16_t)p_21))))).even, ((VECTOR(uint16_t, 2))(0x4ADEL))))).yyxy))).xwyywxxwzxxzzzxw))).s1 , 0x86FFL))) || p_2081->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2081->tid, 3))]) , 0x9B24L) | l_1613.w), p_21)), 1L, 0x397B90CEL, 1L)).zyyyywywwzzwxzww, ((VECTOR(int32_t, 16))((-8L)))))).sce6e, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0L))))).x;
    l_1621--;
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_2081->g_2 p_2081->g_1151 p_2081->g_210 p_2081->g_265 p_2081->g_294 p_2081->g_1395 p_2081->g_1165 p_2081->g_1271 p_2081->g_1562 p_2081->g_289 p_2081->g_398 p_2081->g_310 p_2081->g_396 p_2081->g_238 p_2081->g_1294 p_2081->g_213 p_2081->g_1577 p_2081->g_254
 * writes: p_2081->g_1174 p_2081->g_210 p_2081->g_265 p_2081->g_294 p_2081->g_397 p_2081->g_1273 p_2081->g_206 p_2081->g_1271 p_2081->g_414 p_2081->g_2
 */
uint32_t  func_22(int32_t * p_23, int64_t  p_24, int32_t * p_25, struct S0 * p_2081)
{ /* block id: 691 */
    uint32_t l_1176 = 0x2D17424CL;
    VECTOR(uint32_t, 8) l_1177 = (VECTOR(uint32_t, 8))(0x52CB3044L, (VECTOR(uint32_t, 4))(0x52CB3044L, (VECTOR(uint32_t, 2))(0x52CB3044L, 0xD0042015L), 0xD0042015L), 0xD0042015L, 0x52CB3044L, 0xD0042015L);
    int64_t *l_1183 = (void*)0;
    int64_t **l_1182 = &l_1183;
    int8_t *l_1190[9][4];
    uint64_t *l_1191 = &p_2081->g_1174[6];
    uint16_t *l_1192[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1193 = 0x6C72DB6CL;
    int16_t *l_1200 = (void*)0;
    int32_t l_1210 = 0x641147B6L;
    uint32_t *l_1228 = &p_2081->g_213[0][1][5];
    VECTOR(int16_t, 2) l_1245 = (VECTOR(int16_t, 2))(8L, (-2L));
    VECTOR(int16_t, 16) l_1248 = (VECTOR(int16_t, 16))(0x6B3FL, (VECTOR(int16_t, 4))(0x6B3FL, (VECTOR(int16_t, 2))(0x6B3FL, (-1L)), (-1L)), (-1L), 0x6B3FL, (-1L), (VECTOR(int16_t, 2))(0x6B3FL, (-1L)), (VECTOR(int16_t, 2))(0x6B3FL, (-1L)), 0x6B3FL, (-1L), 0x6B3FL, (-1L));
    VECTOR(int16_t, 8) l_1262 = (VECTOR(int16_t, 8))(0x0760L, (VECTOR(int16_t, 4))(0x0760L, (VECTOR(int16_t, 2))(0x0760L, 0x5CC1L), 0x5CC1L), 0x5CC1L, 0x0760L, 0x5CC1L);
    int32_t l_1272 = 0x5FE532F3L;
    VECTOR(int64_t, 2) l_1381 = (VECTOR(int64_t, 2))(0x6F1B6D79C3515A42L, (-9L));
    VECTOR(uint8_t, 8) l_1425 = (VECTOR(uint8_t, 8))(0x64L, (VECTOR(uint8_t, 4))(0x64L, (VECTOR(uint8_t, 2))(0x64L, 0xA0L), 0xA0L), 0xA0L, 0x64L, 0xA0L);
    VECTOR(int8_t, 4) l_1450 = (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x7EL), 0x7EL);
    uint64_t **l_1485 = &p_2081->g_337;
    int16_t l_1488 = (-1L);
    VECTOR(uint16_t, 8) l_1515 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65528UL), 65528UL), 65528UL, 1UL, 65528UL);
    int16_t **l_1529 = &l_1200;
    int32_t *l_1530 = &p_2081->g_1271;
    VECTOR(int16_t, 2) l_1532 = (VECTOR(int16_t, 2))(0x3179L, 0L);
    uint16_t **l_1558[3][2][3] = {{{&l_1192[2],(void*)0,&l_1192[2]},{&l_1192[2],(void*)0,&l_1192[2]}},{{&l_1192[2],(void*)0,&l_1192[2]},{&l_1192[2],(void*)0,&l_1192[2]}},{{&l_1192[2],(void*)0,&l_1192[2]},{&l_1192[2],(void*)0,&l_1192[2]}}};
    uint16_t ***l_1557[9];
    VECTOR(uint32_t, 2) l_1561 = (VECTOR(uint32_t, 2))(0x92E2B6F4L, 0xB2F8D6D8L);
    int64_t *l_1565[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1566 = (-1L);
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
            l_1190[i][j] = &p_2081->g_359[0];
    }
    for (i = 0; i < 9; i++)
        l_1557[i] = &l_1558[1][1][2];
    (*p_2081->g_1151) = (((l_1176 == ((VECTOR(uint32_t, 4))(l_1177.s1722)).y) , (safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((l_1193 = ((l_1182 != (void*)0) , ((!(0UL > ((safe_rshift_func_uint8_t_u_u(255UL, 5)) >= ((safe_div_func_int8_t_s_s(l_1176, (safe_sub_func_int64_t_s_s((l_1190[5][0] == (void*)0), (((*l_1191) = (p_24 , p_2081->g_2)) != 18446744073709551615UL))))) == l_1177.s1)))) & l_1177.s1))), p_24)), 7L))) , (*p_2081->g_1151));
    for (l_1176 = 0; (l_1176 > 49); l_1176 = safe_add_func_int32_t_s_s(l_1176, 1))
    { /* block id: 697 */
        uint64_t l_1198 = 0x9811A1DE4225D7D0L;
        int32_t l_1199 = 1L;
        int16_t **l_1201 = &l_1200;
        int64_t *l_1202 = (void*)0;
        int64_t *l_1203 = (void*)0;
        int16_t *l_1208 = &p_2081->g_289[7];
        int32_t l_1209 = 0x19381EA9L;
        int32_t *l_1295 = (void*)0;
        VECTOR(uint8_t, 2) l_1323 = (VECTOR(uint8_t, 2))(255UL, 0x49L);
        VECTOR(uint8_t, 4) l_1325 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x77L), 0x77L);
        VECTOR(uint8_t, 16) l_1329 = (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 4UL), 4UL), 4UL, 248UL, 4UL, (VECTOR(uint8_t, 2))(248UL, 4UL), (VECTOR(uint8_t, 2))(248UL, 4UL), 248UL, 4UL, 248UL, 4UL);
        uint8_t l_1366 = 246UL;
        VECTOR(int8_t, 16) l_1409 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int8_t, 2))((-1L), 1L), (VECTOR(int8_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
        int32_t l_1415 = 0L;
        int64_t l_1420 = 9L;
        uint8_t **l_1424 = &p_2081->g_249;
        VECTOR(uint16_t, 16) l_1428 = (VECTOR(uint16_t, 16))(0x1032L, (VECTOR(uint16_t, 4))(0x1032L, (VECTOR(uint16_t, 2))(0x1032L, 1UL), 1UL), 1UL, 0x1032L, 1UL, (VECTOR(uint16_t, 2))(0x1032L, 1UL), (VECTOR(uint16_t, 2))(0x1032L, 1UL), 0x1032L, 1UL, 0x1032L, 1UL);
        VECTOR(uint8_t, 4) l_1453 = (VECTOR(uint8_t, 4))(0x35L, (VECTOR(uint8_t, 2))(0x35L, 0x75L), 0x75L);
        VECTOR(int16_t, 8) l_1478 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x44B7L), 0x44B7L), 0x44B7L, 0L, 0x44B7L);
        uint32_t l_1507[3][4][8] = {{{0xA9595929L,0x7E771E4FL,1UL,0xED11FC02L,0x1D7E5A72L,0x48EA1399L,4UL,1UL},{0xA9595929L,0x7E771E4FL,1UL,0xED11FC02L,0x1D7E5A72L,0x48EA1399L,4UL,1UL},{0xA9595929L,0x7E771E4FL,1UL,0xED11FC02L,0x1D7E5A72L,0x48EA1399L,4UL,1UL},{0xA9595929L,0x7E771E4FL,1UL,0xED11FC02L,0x1D7E5A72L,0x48EA1399L,4UL,1UL}},{{0xA9595929L,0x7E771E4FL,1UL,0xED11FC02L,0x1D7E5A72L,0x48EA1399L,4UL,1UL},{0xA9595929L,0x7E771E4FL,1UL,0xED11FC02L,0x1D7E5A72L,0x48EA1399L,4UL,1UL},{0xA9595929L,0x7E771E4FL,1UL,0xED11FC02L,0x1D7E5A72L,0x48EA1399L,4UL,1UL},{0xA9595929L,0x7E771E4FL,1UL,0xED11FC02L,0x1D7E5A72L,0x48EA1399L,4UL,1UL}},{{0xA9595929L,0x7E771E4FL,1UL,0xED11FC02L,0x1D7E5A72L,0x48EA1399L,4UL,1UL},{0xA9595929L,0x7E771E4FL,1UL,0xED11FC02L,0x1D7E5A72L,0x48EA1399L,4UL,1UL},{0xA9595929L,0x7E771E4FL,1UL,0xED11FC02L,0x1D7E5A72L,0x48EA1399L,4UL,1UL},{0xA9595929L,0x7E771E4FL,1UL,0xED11FC02L,0x1D7E5A72L,0x48EA1399L,4UL,1UL}}};
        uint64_t **l_1510 = &p_2081->g_337;
        uint32_t *l_1516 = (void*)0;
        uint32_t *l_1517 = &p_2081->g_1273;
        VECTOR(uint32_t, 4) l_1526 = (VECTOR(uint32_t, 4))(0xA97F5CD3L, (VECTOR(uint32_t, 2))(0xA97F5CD3L, 5UL), 5UL);
        VECTOR(uint32_t, 8) l_1527 = (VECTOR(uint32_t, 8))(0x1F723148L, (VECTOR(uint32_t, 4))(0x1F723148L, (VECTOR(uint32_t, 2))(0x1F723148L, 2UL), 2UL), 2UL, 0x1F723148L, 2UL);
        int32_t **l_1531 = &p_2081->g_206;
        int i, j, k;
        l_1210 |= (((safe_lshift_func_int8_t_s_u(l_1198, (l_1199 = 255UL))) < ((l_1198 , (((p_2081->g_397.y = (((*l_1201) = l_1200) == (void*)0)) <= ((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((FAKE_DIVERGE(p_2081->global_2_offset, get_global_id(2), 10) <= ((((p_24 <= (l_1209 ^= (((((safe_rshift_func_int8_t_s_s((((*l_1208) |= (((safe_div_func_uint8_t_u_u((l_1193 ^= 0x07L), (0x2FL || ((((l_1203 != (void*)0) || 65526UL) | 7L) && 0x2462E37EE3CEB60BL)))) , 0x1B81591E4D4DEA6AL) , l_1198)) == (-1L)), 5)) && 0x74279F69L) , p_24) <= p_24) > p_24))) , 8UL) | p_2081->g_399.w) , 0x22L)) || p_24), ((VECTOR(uint8_t, 2))(0x4FL)), 255UL)).wwzxxwzw)).s1 == 1L) != 18446744073709551614UL)) , l_1191)) != l_1202)) ^ 18446744073709551613UL);
        for (l_1210 = 0; (l_1210 != (-10)); l_1210--)
        { /* block id: 707 */
            uint32_t l_1217 = 0x25F80EE7L;
            VECTOR(int32_t, 16) l_1231 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-8L)), (-8L)), (-8L), 0L, (-8L), (VECTOR(int32_t, 2))(0L, (-8L)), (VECTOR(int32_t, 2))(0L, (-8L)), 0L, (-8L), 0L, (-8L));
            int32_t *l_1277[6][7] = {{&p_2081->g_294,&p_2081->g_265,&p_2081->g_294,&p_2081->g_294,&p_2081->g_265,&p_2081->g_294,&p_2081->g_294},{&p_2081->g_294,&p_2081->g_265,&p_2081->g_294,&p_2081->g_294,&p_2081->g_265,&p_2081->g_294,&p_2081->g_294},{&p_2081->g_294,&p_2081->g_265,&p_2081->g_294,&p_2081->g_294,&p_2081->g_265,&p_2081->g_294,&p_2081->g_294},{&p_2081->g_294,&p_2081->g_265,&p_2081->g_294,&p_2081->g_294,&p_2081->g_265,&p_2081->g_294,&p_2081->g_294},{&p_2081->g_294,&p_2081->g_265,&p_2081->g_294,&p_2081->g_294,&p_2081->g_265,&p_2081->g_294,&p_2081->g_294},{&p_2081->g_294,&p_2081->g_265,&p_2081->g_294,&p_2081->g_294,&p_2081->g_265,&p_2081->g_294,&p_2081->g_294}};
            uint8_t l_1293 = 0x65L;
            int64_t l_1408[8];
            int32_t l_1486 = 0x34659A36L;
            int8_t l_1501 = 0L;
            int i, j;
            for (i = 0; i < 8; i++)
                l_1408[i] = 0x6874088C588A3542L;
            (1 + 1);
        }
        --l_1507[2][2][0];
        (*l_1531) = ((((((~((*l_1517) = ((&p_2081->g_337 == l_1510) & (safe_mul_func_int16_t_s_s(l_1325.x, ((safe_rshift_func_uint8_t_u_s(p_2081->g_1395.x, 0)) , ((VECTOR(uint16_t, 8))(l_1515.s16104221)).s2)))))) , (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(p_24, ((safe_add_func_uint32_t_u_u(p_24, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_1526.yzxy)), 0UL, 4UL, ((VECTOR(uint32_t, 4))(l_1527.s0312)), 8UL, 1UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_2081->g_1528.xx)).yyxx)))).sf)) < ((l_1201 = &l_1200) == (p_24 , l_1529))))) > FAKE_DIVERGE(p_2081->global_1_offset, get_global_id(1), 10)), l_1425.s1)), p_24))) | l_1409.s4) , p_2081->g_1165[3]) == (void*)0) , l_1530);
    }
    (*p_2081->g_1294) = (((p_24 && ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(l_1532.xyxy)).yzzzwyxz))).s6) == ((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(((((safe_add_func_int8_t_s_s((+(safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(0xEA0BDFF2L, 0xA9E60308L, ((VECTOR(uint32_t, 8))(0x1708FA13L, (safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(((7L > ((*l_1530) , (p_24 & (((safe_lshift_func_int16_t_s_s(((((safe_sub_func_int64_t_s_s(0L, ((*l_1530) = ((VECTOR(int64_t, 16))((-2L), 5L, ((safe_add_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (l_1557[7] != ((safe_lshift_func_uint16_t_u_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_1561.yxyx)).yzzwwwywxxwwxwww)).odd))), 0xBED63DB0L, p_24, GROUP_DIVERGE(1, 1), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x3168DE34L, 4294967295UL)))), ((VECTOR(uint32_t, 2))(p_2081->g_1562.yy)), 4294967295UL)).sb & (((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((*l_1530) || 0x62425525L), ((VECTOR(int16_t, 4))(0x158EL)), 1L, (-5L), 0x1739L)))).s30, ((VECTOR(int16_t, 2))(0x3D73L)), ((VECTOR(int16_t, 2))(0x14AFL))))).yyxy, ((VECTOR(int16_t, 4))(0x5B6DL))))).y, 0UL)) | p_2081->g_289[7]) < (*p_25))), 12)) , &l_1558[1][1][2])))) > p_24), 0L, 0x36A3EDF165BA131AL, 2L, (*l_1530), ((VECTOR(int64_t, 8))(0L)), 0x39107E816D280C4DL)).s2))) <= 1L) || p_2081->g_398.s4) != 2UL), 7)) | l_1566) != p_24)))) ^ p_2081->g_310), p_24)), p_2081->g_396.z)) != p_2081->g_398.se), GROUP_DIVERGE(2, 1))), 0xA74FD3DEL, ((VECTOR(uint32_t, 2))(4294967295UL)), 0x695A4E6BL, 4294967295UL, 3UL)), p_24, ((VECTOR(uint32_t, 2))(0x8613E13CL)), GROUP_DIVERGE(2, 1), 1UL, 1UL)).sc, 0x0F6C2EAEL)), GROUP_DIVERGE(0, 1))), (*p_25)))), 1L)) >= (-1L)) , 8UL) | p_2081->g_238[2]), 0x28FFB984L)), FAKE_DIVERGE(p_2081->local_1_offset, get_local_id(1), 10))) || p_2081->g_1562.x)) , 1L);
    (*p_23) = ((p_24 = (*l_1530)) , ((+((((-1L) && p_2081->g_213[0][1][5]) | (*p_25)) <= (((1L ^ (safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s((*l_1530), (safe_rshift_func_int8_t_s_s((p_2081->g_414.s5 = ((safe_div_func_int8_t_s_s(p_24, ((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 8))(p_2081->g_1577.s2eb32faf)).s1, (safe_mod_func_uint16_t_u_u((l_1193 = p_24), (safe_sub_func_uint64_t_u_u(p_2081->g_238[2], 0UL)))))) && 0x11CB30D1L))) | (*p_2081->g_1151))), 5)))) | 0xA3DF86F13866864FL), p_24))) ^ (*l_1530)) , 1L))) <= (*l_1530)));
    return (*p_2081->g_254);
}


/* ------------------------------------------ */
/* 
 * reads : p_2081->g_966 p_2081->g_206 p_2081->g_292 p_2081->g_210 p_2081->g_265 p_2081->g_294 p_2081->g_2 p_2081->g_1165 p_2081->g_1151 p_2081->g_1171 p_2081->g_397 p_2081->g_359 p_2081->g_310 p_2081->g_1154 p_2081->g_277 p_2081->g_205
 * writes: p_2081->g_206 p_2081->g_292 p_2081->g_1161 p_2081->g_2 p_2081->g_359 p_2081->g_1174 p_2081->g_210 p_2081->g_265 p_2081->g_294
 */
int32_t * func_26(int32_t * p_27, int64_t  p_28, uint64_t  p_29, int16_t  p_30, struct S0 * p_2081)
{ /* block id: 679 */
    int32_t **l_1155 = &p_2081->g_206;
    int64_t *l_1167 = (void*)0;
    int64_t **l_1166[10];
    int i;
    for (i = 0; i < 10; i++)
        l_1166[i] = &l_1167;
    (*l_1155) = (*p_2081->g_966);
    for (p_2081->g_292 = 0; (p_2081->g_292 == (-22)); p_2081->g_292--)
    { /* block id: 683 */
        int16_t *l_1160 = &p_2081->g_296;
        int16_t **l_1159 = &l_1160;
        int16_t ***l_1158[1];
        int8_t *l_1168 = &p_2081->g_359[0];
        int32_t l_1172 = 0x4A2339B8L;
        uint64_t *l_1173 = &p_2081->g_1174[6];
        int32_t *l_1175 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_1158[i] = &l_1159;
        p_2081->g_1161 = (void*)0;
        (*p_27) |= (**p_2081->g_966);
        (**p_2081->g_205) = (safe_mod_func_uint16_t_u_u(((((*l_1155) == (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 4))(0xEDA33129A784C949L, (0x71L != ((*l_1168) = (p_2081->g_1165[3] != l_1166[4]))), 6UL, 0xFE9BE1AFB24338A2L)).ywyyyyyy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))((safe_div_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (*p_2081->g_1151))), ((*l_1173) = (((((p_2081->g_1171 >= 0x58L) != ((VECTOR(uint64_t, 16))(18446744073709551610UL, ((VECTOR(uint64_t, 8))(((((void*)0 != &p_2081->g_337) || p_2081->g_397.y) == (-6L)), ((VECTOR(uint64_t, 2))(2UL)), p_28, l_1172, ((VECTOR(uint64_t, 2))(0x8BBE8BC94BCA3116L)), 0x209284A12C92327EL)).s7, ((VECTOR(uint64_t, 8))(0x3CE394C0B66479A7L)), 7UL, ((VECTOR(uint64_t, 4))(0UL)), 0UL)).s4) , p_2081->g_359[0]) < l_1172) , p_28)), l_1172, 0x68399AAF3A378E0FL, ((VECTOR(uint64_t, 2))(3UL)), 0xBA5D5D8207E90A92L, ((VECTOR(uint64_t, 2))(0x945BBD8A99E461BAL)), 18446744073709551609UL, ((VECTOR(uint64_t, 2))(0x5901737CD585C5B9L)), FAKE_DIVERGE(p_2081->global_1_offset, get_global_id(1), 10), p_2081->g_310, 18446744073709551612UL, 0x014418BB42D1A30DL)).hi)), p_2081->g_1154, 1UL, ((VECTOR(uint64_t, 4))(0xF313BB2AF0AF5AF6L)), 0xEA0CE4B51A8F921EL, 18446744073709551612UL)).se4)).xyxxyyyx))).s46)).hi , l_1175)) ^ (*p_27)) >= p_29), p_2081->g_277.s3));
    }
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_31(int64_t  p_32, uint32_t  p_33, int32_t * p_34, int32_t  p_35, struct S0 * p_2081)
{ /* block id: 677 */
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_2081->g_411 p_2081->g_414 p_2081->g_415 p_2081->g_249 p_2081->g_324 p_2081->g_205 p_2081->g_206 p_2081->g_966
 * writes: p_2081->g_210 p_2081->g_265 p_2081->g_294 p_2081->g_324 p_2081->g_206 p_2081->g_1151
 */
uint16_t  func_40(int64_t  p_41, uint32_t  p_42, int32_t  p_43, uint32_t  p_44, struct S0 * p_2081)
{ /* block id: 193 */
    uint8_t l_412 = 2UL;
    VECTOR(int8_t, 2) l_413 = (VECTOR(int8_t, 2))(1L, 3L);
    int32_t *l_824[9] = {&p_2081->g_294,&p_2081->g_294,&p_2081->g_294,&p_2081->g_294,&p_2081->g_294,&p_2081->g_294,&p_2081->g_294,&p_2081->g_294,&p_2081->g_294};
    int32_t **l_1150[9][10] = {{&l_824[2],&p_2081->g_206,&l_824[6],&p_2081->g_206,&p_2081->g_206,&p_2081->g_206,&l_824[6],&p_2081->g_206,&l_824[2],&l_824[2]},{&l_824[2],&p_2081->g_206,&l_824[6],&p_2081->g_206,&p_2081->g_206,&p_2081->g_206,&l_824[6],&p_2081->g_206,&l_824[2],&l_824[2]},{&l_824[2],&p_2081->g_206,&l_824[6],&p_2081->g_206,&p_2081->g_206,&p_2081->g_206,&l_824[6],&p_2081->g_206,&l_824[2],&l_824[2]},{&l_824[2],&p_2081->g_206,&l_824[6],&p_2081->g_206,&p_2081->g_206,&p_2081->g_206,&l_824[6],&p_2081->g_206,&l_824[2],&l_824[2]},{&l_824[2],&p_2081->g_206,&l_824[6],&p_2081->g_206,&p_2081->g_206,&p_2081->g_206,&l_824[6],&p_2081->g_206,&l_824[2],&l_824[2]},{&l_824[2],&p_2081->g_206,&l_824[6],&p_2081->g_206,&p_2081->g_206,&p_2081->g_206,&l_824[6],&p_2081->g_206,&l_824[2],&l_824[2]},{&l_824[2],&p_2081->g_206,&l_824[6],&p_2081->g_206,&p_2081->g_206,&p_2081->g_206,&l_824[6],&p_2081->g_206,&l_824[2],&l_824[2]},{&l_824[2],&p_2081->g_206,&l_824[6],&p_2081->g_206,&p_2081->g_206,&p_2081->g_206,&l_824[6],&p_2081->g_206,&l_824[2],&l_824[2]},{&l_824[2],&p_2081->g_206,&l_824[6],&p_2081->g_206,&p_2081->g_206,&p_2081->g_206,&l_824[6],&p_2081->g_206,&l_824[2],&l_824[2]}};
    int32_t l_1152 = 0x007E4A4FL;
    int i, j;
    if (((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_2081->g_411.sa26973638035ff37)).s8, 4)), l_412)) >= ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_413.yxyxxyxxyyyxxyxy)).s06cd)))).even, ((VECTOR(int8_t, 2))(p_2081->g_414.s12)), ((VECTOR(int8_t, 16))(p_2081->g_415.se04a87671a741899)).se8))).hi))
    { /* block id: 194 */
        int32_t **l_825 = (void*)0;
        int32_t *l_826 = &p_2081->g_210;
        if ((atomic_inc(&p_2081->l_atomic_input[4]) == 1))
        { /* block id: 196 */
            int16_t l_416 = (-1L);
            int8_t l_417 = 0x40L;
            VECTOR(int8_t, 8) l_418 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x0AL), 0x0AL), 0x0AL, 0L, 0x0AL);
            uint32_t l_419 = 1UL;
            VECTOR(int8_t, 2) l_420 = (VECTOR(int8_t, 2))(0L, 0x2BL);
            int64_t l_421 = 0x5F13AFF845CD436BL;
            VECTOR(int32_t, 4) l_422 = (VECTOR(int32_t, 4))(0x39FFCE45L, (VECTOR(int32_t, 2))(0x39FFCE45L, 0L), 0L);
            int64_t l_423 = 4L;
            VECTOR(int8_t, 2) l_424 = (VECTOR(int8_t, 2))(0x16L, (-1L));
            VECTOR(int8_t, 16) l_425 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x77L), 0x77L), 0x77L, (-1L), 0x77L, (VECTOR(int8_t, 2))((-1L), 0x77L), (VECTOR(int8_t, 2))((-1L), 0x77L), (-1L), 0x77L, (-1L), 0x77L);
            int8_t l_426 = 7L;
            uint64_t l_427 = 0x35F3F7A3E2A152F6L;
            VECTOR(int8_t, 8) l_428 = (VECTOR(int8_t, 8))(0x18L, (VECTOR(int8_t, 4))(0x18L, (VECTOR(int8_t, 2))(0x18L, (-9L)), (-9L)), (-9L), 0x18L, (-9L));
            VECTOR(int8_t, 16) l_429 = (VECTOR(int8_t, 16))(0x60L, (VECTOR(int8_t, 4))(0x60L, (VECTOR(int8_t, 2))(0x60L, (-9L)), (-9L)), (-9L), 0x60L, (-9L), (VECTOR(int8_t, 2))(0x60L, (-9L)), (VECTOR(int8_t, 2))(0x60L, (-9L)), 0x60L, (-9L), 0x60L, (-9L));
            VECTOR(int8_t, 2) l_430 = (VECTOR(int8_t, 2))(0x51L, 4L);
            VECTOR(int8_t, 8) l_431 = (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x1CL), 0x1CL), 0x1CL, 6L, 0x1CL);
            uint8_t l_432 = 0xF1L;
            VECTOR(uint64_t, 8) l_433 = (VECTOR(uint64_t, 8))(0xC83002A9CEC29815L, (VECTOR(uint64_t, 4))(0xC83002A9CEC29815L, (VECTOR(uint64_t, 2))(0xC83002A9CEC29815L, 0xF3E48AEC0CA38454L), 0xF3E48AEC0CA38454L), 0xF3E48AEC0CA38454L, 0xC83002A9CEC29815L, 0xF3E48AEC0CA38454L);
            uint32_t l_434 = 0x87112506L;
            VECTOR(uint64_t, 8) l_780 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
            uint8_t l_781 = 8UL;
            uint64_t l_821[3][5][1];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_821[i][j][k] = 0xAFC13DC7EADA3BFFL;
                }
            }
            if (((l_434 &= ((VECTOR(int8_t, 16))((l_417 = l_416), 0x5EL, 1L, 0x5EL, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_418.s15)).xxyxyyyx)).odd, (int8_t)(l_419 = 0x45L)))).hi, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(l_420.xx)).xyyx, ((VECTOR(int8_t, 16))(0x6AL, l_421, 0x00L, 6L, (((VECTOR(int32_t, 2))(l_422.zy)).odd , l_423), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_424.xyyyyxxx)).s2607205534727640)).s61a6)).odd)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_425.s7e)), (-10L), 0x2CL)).odd))), 0x62L, 1L)), (((VECTOR(int16_t, 8))(1L, 1L, l_426, 0x6A07L, 0x6F37L, 0L, 0x728DL, 3L)).s0 , l_427), ((VECTOR(int8_t, 2))((-1L), (-1L))), 0x06L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(l_428.s07561113)).odd, ((VECTOR(int8_t, 8))(l_429.sf50196cc)).hi, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(l_430.yy)).yyyx, ((VECTOR(int8_t, 2))(l_431.s14)).yxyx)))))), (-1L), ((VECTOR(int8_t, 2))(0x74L, 0x3FL)), ((l_432 &= ((VECTOR(uint32_t, 2))(0UL, 4294967291UL)).lo) , 0x5DL), 0x07L, 0x3AL, l_433.s2, ((VECTOR(int8_t, 4))((-9L))), 0x3BL)).hi, ((VECTOR(int8_t, 8))(1L)), ((VECTOR(int8_t, 8))((-9L)))))).s71)), 0x05L)).s88b5))).xyyzwzyywxxxxzyw)).even)).s33))), 0x37L, ((VECTOR(int8_t, 4))(0x2AL)), 3L)), 3L, 0x47L, 1L, 0x54L)).sc) , (-1L)))
            { /* block id: 201 */
                int32_t l_435 = 0x1EF33258L;
                VECTOR(int32_t, 8) l_465 = (VECTOR(int32_t, 8))(0x78DA83E8L, (VECTOR(int32_t, 4))(0x78DA83E8L, (VECTOR(int32_t, 2))(0x78DA83E8L, 0x10F41313L), 0x10F41313L), 0x10F41313L, 0x78DA83E8L, 0x10F41313L);
                VECTOR(uint64_t, 16) l_466 = (VECTOR(uint64_t, 16))(18446744073709551607UL, (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 1UL), 1UL), 1UL, 18446744073709551607UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551607UL, 1UL), 18446744073709551607UL, 1UL, 18446744073709551607UL, 1UL);
                VECTOR(uint64_t, 8) l_467 = (VECTOR(uint64_t, 8))(0xE67DE3694AA5DA6BL, (VECTOR(uint64_t, 4))(0xE67DE3694AA5DA6BL, (VECTOR(uint64_t, 2))(0xE67DE3694AA5DA6BL, 0x0CC54CA38B07EF5FL), 0x0CC54CA38B07EF5FL), 0x0CC54CA38B07EF5FL, 0xE67DE3694AA5DA6BL, 0x0CC54CA38B07EF5FL);
                VECTOR(int64_t, 8) l_468 = (VECTOR(int64_t, 8))(0x6C8E15FFD9B2D595L, (VECTOR(int64_t, 4))(0x6C8E15FFD9B2D595L, (VECTOR(int64_t, 2))(0x6C8E15FFD9B2D595L, 0x39E87A76F87DB6F2L), 0x39E87A76F87DB6F2L), 0x39E87A76F87DB6F2L, 0x6C8E15FFD9B2D595L, 0x39E87A76F87DB6F2L);
                uint32_t l_469 = 0xC7688F40L;
                int i;
                for (l_435 = 0; (l_435 == 22); l_435 = safe_add_func_int16_t_s_s(l_435, 7))
                { /* block id: 204 */
                    int32_t l_439 = 0L;
                    int32_t *l_438[10] = {&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439};
                    int32_t *l_440 = &l_439;
                    uint32_t l_441[10][7][2] = {{{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL}},{{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL}},{{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL}},{{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL}},{{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL}},{{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL}},{{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL}},{{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL}},{{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL}},{{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL},{0xC97C912FL,0xC97C912FL}}};
                    int8_t l_442 = 0x17L;
                    uint32_t l_443[10];
                    uint64_t l_444[3];
                    VECTOR(int32_t, 2) l_445 = (VECTOR(int32_t, 2))(0x07AEA02CL, (-3L));
                    int16_t l_446[10][1] = {{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)}};
                    VECTOR(int64_t, 16) l_447 = (VECTOR(int64_t, 16))(0x1EB125F053228AAFL, (VECTOR(int64_t, 4))(0x1EB125F053228AAFL, (VECTOR(int64_t, 2))(0x1EB125F053228AAFL, 0x0D7DD029A9FE3F57L), 0x0D7DD029A9FE3F57L), 0x0D7DD029A9FE3F57L, 0x1EB125F053228AAFL, 0x0D7DD029A9FE3F57L, (VECTOR(int64_t, 2))(0x1EB125F053228AAFL, 0x0D7DD029A9FE3F57L), (VECTOR(int64_t, 2))(0x1EB125F053228AAFL, 0x0D7DD029A9FE3F57L), 0x1EB125F053228AAFL, 0x0D7DD029A9FE3F57L, 0x1EB125F053228AAFL, 0x0D7DD029A9FE3F57L);
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                        l_443[i] = 0x6EA48A71L;
                    for (i = 0; i < 3; i++)
                        l_444[i] = 0xA93D07BB10A7BF99L;
                    l_440 = l_438[1];
                    if (((l_446[3][0] &= ((l_441[1][3][0] , (l_443[8] = l_442)) , (l_444[2] , ((VECTOR(int32_t, 2))(l_445.yy)).even))) , (((VECTOR(int64_t, 2))(l_447.sea)).lo , (-1L))))
                    { /* block id: 208 */
                        uint8_t l_448[1][3];
                        int8_t l_449 = (-4L);
                        int32_t l_451 = 0L;
                        int32_t *l_450 = &l_451;
                        int16_t l_452 = (-1L);
                        uint16_t *l_454 = (void*)0;
                        uint16_t **l_453 = &l_454;
                        uint16_t **l_455 = &l_454;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_448[i][j] = 0x82L;
                        }
                        l_449 ^= l_448[0][0];
                        l_450 = l_450;
                        l_455 = (l_452 , l_453);
                    }
                    else
                    { /* block id: 212 */
                        VECTOR(int32_t, 2) l_456 = (VECTOR(int32_t, 2))(0x242DD82EL, 0L);
                        int16_t l_457 = 9L;
                        uint32_t l_458[10][9] = {{4294967295UL,0xB9474084L,1UL,8UL,9UL,9UL,8UL,1UL,0xB9474084L},{4294967295UL,0xB9474084L,1UL,8UL,9UL,9UL,8UL,1UL,0xB9474084L},{4294967295UL,0xB9474084L,1UL,8UL,9UL,9UL,8UL,1UL,0xB9474084L},{4294967295UL,0xB9474084L,1UL,8UL,9UL,9UL,8UL,1UL,0xB9474084L},{4294967295UL,0xB9474084L,1UL,8UL,9UL,9UL,8UL,1UL,0xB9474084L},{4294967295UL,0xB9474084L,1UL,8UL,9UL,9UL,8UL,1UL,0xB9474084L},{4294967295UL,0xB9474084L,1UL,8UL,9UL,9UL,8UL,1UL,0xB9474084L},{4294967295UL,0xB9474084L,1UL,8UL,9UL,9UL,8UL,1UL,0xB9474084L},{4294967295UL,0xB9474084L,1UL,8UL,9UL,9UL,8UL,1UL,0xB9474084L},{4294967295UL,0xB9474084L,1UL,8UL,9UL,9UL,8UL,1UL,0xB9474084L}};
                        uint32_t l_459 = 0UL;
                        int32_t l_460 = 0x2E1E9FD6L;
                        VECTOR(uint16_t, 4) l_461 = (VECTOR(uint16_t, 4))(0x33C4L, (VECTOR(uint16_t, 2))(0x33C4L, 0x211BL), 0x211BL);
                        uint8_t l_462 = 6UL;
                        int64_t l_463 = 0L;
                        uint32_t l_464 = 0x910C9B0AL;
                        int i, j;
                        l_456.x = ((VECTOR(int32_t, 16))(l_456.yxxxyxyxxxxxxyxx)).s9;
                        (*l_440) = l_457;
                        (*l_440) |= ((l_458[1][8] = (-1L)) , ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(0x62B06D62L, 0x00654BF2L, 0x4F426840L, 0x6719E3A8L)).hi, (int32_t)l_459, (int32_t)l_460))).even);
                        (*l_440) ^= (l_461.y , ((l_463 = l_462) , l_464));
                    }
                }
                if ((((VECTOR(int32_t, 16))(l_465.s3742006110533375)).s9 , (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 8))(l_466.s4e08858f)), ((VECTOR(uint64_t, 16))(l_467.s7525262416163072)).odd))), ((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_468.s26)).xxxy)))).zwyyyzxx))))).s6 , l_469)))
                { /* block id: 221 */
                    uint32_t l_470 = 8UL;
                    if (l_470)
                    { /* block id: 222 */
                        int8_t l_471 = (-3L);
                        int16_t l_472 = 1L;
                        int8_t l_473[2];
                        int16_t l_474 = 0x4685L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_473[i] = (-7L);
                        l_474 |= (l_471 , (l_473[1] = (l_435 |= (l_422.w = l_472))));
                    }
                    else
                    { /* block id: 227 */
                        uint32_t l_475 = 2UL;
                        int8_t l_476[5][2][2] = {{{0x78L,0x6DL},{0x78L,0x6DL}},{{0x78L,0x6DL},{0x78L,0x6DL}},{{0x78L,0x6DL},{0x78L,0x6DL}},{{0x78L,0x6DL},{0x78L,0x6DL}},{{0x78L,0x6DL},{0x78L,0x6DL}}};
                        uint32_t l_477 = 4294967295UL;
                        VECTOR(int8_t, 8) l_478 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 6L), 6L), 6L, (-1L), 6L);
                        int64_t l_479 = (-5L);
                        VECTOR(int8_t, 8) l_480 = (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 7L), 7L), 7L, 3L, 7L);
                        VECTOR(int8_t, 8) l_481 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x51L), 0x51L), 0x51L, 0L, 0x51L);
                        uint32_t l_482 = 0x041A3404L;
                        VECTOR(int8_t, 8) l_483 = (VECTOR(int8_t, 8))(0x1BL, (VECTOR(int8_t, 4))(0x1BL, (VECTOR(int8_t, 2))(0x1BL, (-6L)), (-6L)), (-6L), 0x1BL, (-6L));
                        VECTOR(int8_t, 16) l_484 = (VECTOR(int8_t, 16))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L, (VECTOR(int8_t, 2))((-2L), 0L), (VECTOR(int8_t, 2))((-2L), 0L), (-2L), 0L, (-2L), 0L);
                        int32_t l_485 = (-2L);
                        VECTOR(int8_t, 4) l_486 = (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x53L), 0x53L);
                        VECTOR(int8_t, 8) l_487 = (VECTOR(int8_t, 8))(0x56L, (VECTOR(int8_t, 4))(0x56L, (VECTOR(int8_t, 2))(0x56L, 1L), 1L), 1L, 0x56L, 1L);
                        VECTOR(int8_t, 2) l_488 = (VECTOR(int8_t, 2))((-7L), 1L);
                        uint8_t l_489 = 7UL;
                        int32_t l_490 = 1L;
                        VECTOR(int8_t, 4) l_491 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x0CL), 0x0CL);
                        VECTOR(int8_t, 16) l_492 = (VECTOR(int8_t, 16))(0x28L, (VECTOR(int8_t, 4))(0x28L, (VECTOR(int8_t, 2))(0x28L, 0x20L), 0x20L), 0x20L, 0x28L, 0x20L, (VECTOR(int8_t, 2))(0x28L, 0x20L), (VECTOR(int8_t, 2))(0x28L, 0x20L), 0x28L, 0x20L, 0x28L, 0x20L);
                        int64_t l_493 = 1L;
                        VECTOR(int8_t, 16) l_494 = (VECTOR(int8_t, 16))(0x6EL, (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 0x3DL), 0x3DL), 0x3DL, 0x6EL, 0x3DL, (VECTOR(int8_t, 2))(0x6EL, 0x3DL), (VECTOR(int8_t, 2))(0x6EL, 0x3DL), 0x6EL, 0x3DL, 0x6EL, 0x3DL);
                        VECTOR(int8_t, 2) l_495 = (VECTOR(int8_t, 2))(0L, 0x6CL);
                        VECTOR(uint64_t, 2) l_496 = (VECTOR(uint64_t, 2))(0xE36EBCDC009CF3FBL, 1UL);
                        uint8_t l_497 = 0xACL;
                        uint8_t l_498[10];
                        uint32_t l_499 = 4294967293UL;
                        uint8_t l_500[6][8] = {{0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL}};
                        int16_t l_501 = 0x792BL;
                        int i, j, k;
                        for (i = 0; i < 10; i++)
                            l_498[i] = 1UL;
                        l_435 |= ((l_477 = (l_476[3][1][1] ^= l_475)) , (l_501 = ((l_468.s3 = (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(l_478.s05)).yyyx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_479, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(l_480.s46427266)).s24, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_481.s36756300)).s0652547433654677)).se7))))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))((l_480.s5 &= l_482), (-7L), ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(l_483.s20)).xyyx, (int8_t)(l_431.s5 = (-4L))))).zwwzzxxy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(l_484.s9d73)), (int8_t)(l_430.x = (l_485 , ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_486.yxyxwxwwzwxzywyw)))).even, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(l_487.s65435743)).even, ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0L, 0x45L)))).xxyyxyyy, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_488.yxyyyxxyyxxxxxyy)).even)).s2122637643463277, (int8_t)(l_490 = l_489), (int8_t)(l_431.s0 = 0L)))).s2d, ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(0x4AL, 0x44L)).xxyxxyxx, ((VECTOR(int8_t, 2))(l_491.wx)).xyxyxxxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))((-9L), ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_492.s16)).yxxx)).zyxwyywwzyyxzywz)).s6c, (int8_t)l_493, (int8_t)((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x0DL, 0x49L)))).yyyyxyyyyxxyyxyx, ((VECTOR(int8_t, 8))(l_494.s366de2bc)).s6140073267527073))))).sd))), 0x72L)), (int8_t)((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(l_495.xx)).yyyy, (int8_t)l_496.y))).w))).yxyyzyxyzzxxxyyz)).odd))).s20))).yyyyyyxy))).odd))).zwyyyyzz, ((VECTOR(int8_t, 8))(0x7AL))))).s75)).odd))))))).xyzywxwy))))).s00, ((VECTOR(int8_t, 2))(0x11L))))), l_497, 0x5AL, 0L, 0x38L)).hi, (int8_t)l_498[5]))))), ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 4))(0x73L)), ((VECTOR(int8_t, 2))(1L)), 5L)).lo)).lo))))).zyzyyyxwyzxxyyxw, ((VECTOR(int8_t, 16))(0x4DL))))))), ((VECTOR(int8_t, 16))(0x29L)), ((VECTOR(int8_t, 16))(0x71L))))).s9b8c, ((VECTOR(int8_t, 4))((-8L)))))).zzxyxyxyxywxwxyx)).sc , l_499)) , l_500[1][7])));
                    }
                }
                else
                { /* block id: 239 */
                    VECTOR(int32_t, 8) l_502 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L);
                    VECTOR(int32_t, 16) l_503 = (VECTOR(int32_t, 16))(0x44683DDEL, (VECTOR(int32_t, 4))(0x44683DDEL, (VECTOR(int32_t, 2))(0x44683DDEL, 0x3E427F4DL), 0x3E427F4DL), 0x3E427F4DL, 0x44683DDEL, 0x3E427F4DL, (VECTOR(int32_t, 2))(0x44683DDEL, 0x3E427F4DL), (VECTOR(int32_t, 2))(0x44683DDEL, 0x3E427F4DL), 0x44683DDEL, 0x3E427F4DL, 0x44683DDEL, 0x3E427F4DL);
                    VECTOR(int32_t, 2) l_504 = (VECTOR(int32_t, 2))(0x1DD43E83L, (-5L));
                    uint64_t l_505[6][9][4] = {{{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL}},{{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL}},{{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL}},{{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL}},{{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL}},{{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL},{18446744073709551612UL,0x18D8DA8A8BE92A3DL,0x48150AE814B6C8AEL,1UL}}};
                    int8_t l_506 = 0x70L;
                    int16_t l_507[5][10][2] = {{{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L}},{{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L}},{{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L}},{{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L}},{{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L},{0x0CC9L,0x0CC9L}}};
                    VECTOR(int32_t, 4) l_508 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x684AFBA4L), 0x684AFBA4L);
                    int32_t *l_562 = (void*)0;
                    int32_t *l_563 = (void*)0;
                    int i, j, k;
                    if (((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(l_502.s6300414070000115)).sf6, ((VECTOR(int32_t, 4))(l_503.s5304)).odd))).xyyx)).wzzzxxwy)).s4254323166564454)).s92fe)), (int32_t)((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_504.xxxy)).zzwxwwxz)).s5))))).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x7884ADC4L, (-8L))), 0x296E8D50L, (l_505[5][3][1] , (l_504.x &= (l_506 ^= 0x02E25721L))), l_507[2][1][1], ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_508.wwwxwzxy)))).s30)), 0x48542845L)).s34))).lo)
                    { /* block id: 242 */
                        VECTOR(int32_t, 4) l_509 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6A74A656L), 0x6A74A656L);
                        uint16_t l_510 = 0xC7ABL;
                        int32_t l_511 = 0x51120CEFL;
                        int32_t *l_512 = (void*)0;
                        int32_t *l_513 = (void*)0;
                        int i;
                        l_508.y ^= ((VECTOR(int32_t, 16))(l_509.ywywwxzxyzywxywx)).sc;
                        l_513 = (l_510 , (l_511 , (l_512 = (void*)0)));
                        l_422.w = 0x0D862036L;
                    }
                    else
                    { /* block id: 247 */
                        int32_t l_514 = 0L;
                        uint32_t l_515 = 0x96DD4881L;
                        int64_t l_518 = 8L;
                        VECTOR(int32_t, 2) l_520 = (VECTOR(int32_t, 2))(0x1E62D8AAL, 0L);
                        int32_t *l_519 = (void*)0;
                        uint32_t l_521 = 4294967294UL;
                        VECTOR(int32_t, 4) l_524 = (VECTOR(int32_t, 4))(0x6D750C72L, (VECTOR(int32_t, 2))(0x6D750C72L, 0x440735ACL), 0x440735ACL);
                        uint16_t l_525 = 65533UL;
                        VECTOR(uint64_t, 2) l_526 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x15EEB94F3CE1D341L);
                        VECTOR(int16_t, 2) l_527 = (VECTOR(int16_t, 2))((-1L), 0x705EL);
                        VECTOR(int16_t, 4) l_528 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L);
                        uint64_t l_529 = 18446744073709551615UL;
                        VECTOR(int16_t, 2) l_530 = (VECTOR(int16_t, 2))(0L, (-2L));
                        VECTOR(int16_t, 4) l_531 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x5EEAL), 0x5EEAL);
                        uint64_t l_532 = 18446744073709551612UL;
                        VECTOR(int8_t, 2) l_533 = (VECTOR(int8_t, 2))(0x39L, 0x78L);
                        VECTOR(int8_t, 8) l_534 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4CL), 0x4CL), 0x4CL, 1L, 0x4CL);
                        int16_t l_535 = (-2L);
                        uint32_t l_536 = 0UL;
                        int8_t l_537 = 0x40L;
                        uint32_t l_538 = 0x58E148C9L;
                        VECTOR(int8_t, 4) l_539 = (VECTOR(int8_t, 4))(0x47L, (VECTOR(int8_t, 2))(0x47L, 0x3AL), 0x3AL);
                        uint16_t l_540 = 65526UL;
                        int i;
                        l_515--;
                        l_519 = (l_518 , (void*)0);
                        l_521--;
                        l_508.w |= ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_524.xzyxzxzy)).odd)).zxwxwxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-6L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x7E627ACAL, 0x7AB05C6BL, 1L, 1L)).hi)), l_525, l_526.y, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(1L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(0x2786L, 0L)).xyyyxxyy, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(l_527.xxxxyxxy)), ((VECTOR(int16_t, 8))(l_528.zzwyxwzy)))))))).s11)), (-5L), 0x43E7L)).even, ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(0L, l_529, 0L, 0x7E9DL)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(l_530.yx)).yyxxxyyy, ((VECTOR(int16_t, 2))(0x0814L, 0x1EB3L)).xxyyyyyy, ((VECTOR(int16_t, 8))(l_531.xwzwxywy))))), (l_507[2][1][1] = l_532), (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_533.xxyxyyyyxyyyyyxy)).s49)), ((VECTOR(int8_t, 2))(l_534.s73))))).yyyxxyxx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0xA4L, 254UL, 0xEEL, 0x54L)), 0x67L, 7UL, 250UL, 9UL)).s34))))).xyxyxxxx))))).s3 , ((((l_536 = (l_535 = 0xA8E507901E8E8C44L)) , 0L) , l_537) , l_538)), 0x723CL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(l_539.wxyyzyyx)).hi, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0x77L, l_540, 1UL, 255UL)))).yxzzyxyw, ((VECTOR(uint8_t, 8))(0xC7L))))).even))))).wzwzwxyxxyxxzzxx)).s05)), ((VECTOR(int16_t, 2))(0x09C9L)), 0x1A0BL)).hi)).odd, ((VECTOR(int16_t, 4))(0x16BEL))))).even))).xyyx)), (-7L), (-9L), 0x4C12L)).hi, ((VECTOR(int16_t, 4))(0x34B7L))))).zwzyxwwwzwyxyzxx, ((VECTOR(int16_t, 16))(0x4116L))))).s0314, ((VECTOR(uint16_t, 4))(0xD3DDL))))).z, 0x699B8983L, (-5L))).s5367476022441124)).odd, ((VECTOR(int32_t, 8))(0x1A8B7A7EL))))).s2;
                    }
                    l_422.w ^= 0x3C4E2E0DL;
                    for (l_508.z = 0; (l_508.z >= (-8)); --l_508.z)
                    { /* block id: 259 */
                        VECTOR(int32_t, 8) l_543 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 6L), 6L), 6L, 1L, 6L);
                        int16_t l_544 = 0x385AL;
                        VECTOR(int32_t, 16) l_545 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x19923B62L), 0x19923B62L), 0x19923B62L, 1L, 0x19923B62L, (VECTOR(int32_t, 2))(1L, 0x19923B62L), (VECTOR(int32_t, 2))(1L, 0x19923B62L), 1L, 0x19923B62L, 1L, 0x19923B62L);
                        int64_t l_546[6] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
                        VECTOR(uint32_t, 4) l_547 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 5UL), 5UL);
                        uint32_t l_548 = 6UL;
                        uint16_t l_549 = 65529UL;
                        int32_t l_550 = 0x1F412388L;
                        int32_t l_551 = 0x6B200F01L;
                        VECTOR(int32_t, 16) l_552 = (VECTOR(int32_t, 16))(0x79C68149L, (VECTOR(int32_t, 4))(0x79C68149L, (VECTOR(int32_t, 2))(0x79C68149L, 0L), 0L), 0L, 0x79C68149L, 0L, (VECTOR(int32_t, 2))(0x79C68149L, 0L), (VECTOR(int32_t, 2))(0x79C68149L, 0L), 0x79C68149L, 0L, 0x79C68149L, 0L);
                        VECTOR(int32_t, 2) l_553 = (VECTOR(int32_t, 2))(8L, 8L);
                        VECTOR(int32_t, 4) l_554 = (VECTOR(int32_t, 4))(0x63E27346L, (VECTOR(int32_t, 2))(0x63E27346L, 0x6BAD18B4L), 0x6BAD18B4L);
                        VECTOR(int32_t, 4) l_555 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x20229E09L), 0x20229E09L);
                        int64_t l_556 = 1L;
                        int32_t l_557 = 2L;
                        uint16_t l_558 = 0xF155L;
                        int16_t l_559 = (-5L);
                        int16_t l_560 = (-1L);
                        uint16_t l_561 = 0xFECEL;
                        int i;
                        l_561 &= ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_543.s30)), 0L, 0x6D00766CL, 8L, l_544, 1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_545.s64b1)))).z, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x661B5F78L, ((VECTOR(int32_t, 8))(l_546[2], (l_547.x , (l_548 , l_549)), ((VECTOR(int32_t, 2))(0x36F44047L, 0x4531880FL)), l_550, 0x2094FC90L, 1L, (-1L))).s3, ((VECTOR(int32_t, 4))(0L, l_551, 0x344C3A91L, 9L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(l_552.s7c7fc866d267bd42)).sc570, ((VECTOR(int32_t, 2))(l_553.xx)).xyyx))).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(1L, 0x6D21A754L)).xyyxxxyxxxxxyxxy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_554.wxwyyywy)).s24)).yxxyyyyxxyyyxxyx))).sb3, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(l_555.xz)).yyyy, (int32_t)(l_502.s6 = 0x117472DBL), (int32_t)l_556))))).hi)), 0x78580B9FL, 0x5559B1B9L)))).even)), 7L, 0x089314B5L)))).wxyzxyyy, ((VECTOR(int32_t, 8))(2L))))).even, ((VECTOR(int32_t, 4))(0x018E85B0L))))).lo))), ((VECTOR(int32_t, 2))(0L)), l_557, l_558, 0x0568F7FDL, (-1L))).s7560416462223311)))), ((VECTOR(int32_t, 16))(0x10E3891BL))))), ((VECTOR(int32_t, 16))(1L))))).s4e)), ((VECTOR(int32_t, 2))(0x337B710FL))))).xxxy, ((VECTOR(int32_t, 4))(0x09D32B67L)), ((VECTOR(int32_t, 4))(0x5466897AL))))), ((VECTOR(int32_t, 4))((-5L)))))).even)).xyyyxxxxyyxxyyyx, ((VECTOR(int32_t, 16))(9L)), ((VECTOR(int32_t, 16))(0x0AB5B471L))))).s7b)), 0x16199712L, l_559, 0x7F4C694FL, (-4L), 0x79C12CCDL, 1L, 3L, 6L)).s1c)), ((VECTOR(int32_t, 2))(9L)), 0L, (-1L), 0x2462E102L, (-1L))).hi, ((VECTOR(int32_t, 8))(0x33043C3DL))))).odd)), (-9L), l_560, (-1L), 0x346F818CL)).hi)).zzzzzwwyyzxzzzwx, ((VECTOR(int32_t, 16))(1L))))).s3;
                        l_502.s3 = 0x0E7965FAL;
                    }
                    l_563 = l_562;
                }
            }
            else
            { /* block id: 266 */
                uint32_t l_564 = 4294967295UL;
                int32_t l_565[9] = {0L,0x0D5A16AEL,0L,0L,0x0D5A16AEL,0L,0L,0x0D5A16AEL,0L};
                int32_t l_566 = 1L;
                uint8_t l_567 = 0xD3L;
                int32_t *l_624 = &l_566;
                int32_t *l_625 = &l_566;
                int i;
                l_422.x ^= l_564;
                l_567--;
                for (l_564 = (-10); (l_564 >= 45); ++l_564)
                { /* block id: 271 */
                    int32_t l_573 = 3L;
                    int32_t *l_572 = &l_573;
                    int32_t *l_574 = &l_573;
                    uint64_t l_575 = 0x16619DAECC8CE6EFL;
                    int32_t l_576[6] = {(-6L),6L,(-6L),(-6L),6L,(-6L)};
                    VECTOR(int32_t, 8) l_586 = (VECTOR(int32_t, 8))(0x6883A3A3L, (VECTOR(int32_t, 4))(0x6883A3A3L, (VECTOR(int32_t, 2))(0x6883A3A3L, 0x4C6609F7L), 0x4C6609F7L), 0x4C6609F7L, 0x6883A3A3L, 0x4C6609F7L);
                    VECTOR(int32_t, 4) l_587 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x27895D8EL), 0x27895D8EL);
                    VECTOR(int32_t, 2) l_588 = (VECTOR(int32_t, 2))(0L, 0x0F94FF3FL);
                    VECTOR(int32_t, 2) l_589 = (VECTOR(int32_t, 2))(1L, 0x78B7ACD5L);
                    uint32_t l_590 = 0xE896D699L;
                    int16_t l_591[5][8] = {{2L,2L,2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L,2L,2L}};
                    int32_t l_592 = (-1L);
                    VECTOR(int32_t, 4) l_593 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x68B5D96AL), 0x68B5D96AL);
                    VECTOR(int32_t, 2) l_594 = (VECTOR(int32_t, 2))(0x5E45E488L, 3L);
                    VECTOR(int32_t, 2) l_595 = (VECTOR(int32_t, 2))((-10L), 0x61B04935L);
                    VECTOR(int32_t, 2) l_596 = (VECTOR(int32_t, 2))(0x5A50343FL, 0L);
                    int32_t l_597 = (-1L);
                    VECTOR(int32_t, 2) l_598 = (VECTOR(int32_t, 2))((-10L), 0L);
                    VECTOR(int32_t, 16) l_599 = (VECTOR(int32_t, 16))(0x3A9F2F39L, (VECTOR(int32_t, 4))(0x3A9F2F39L, (VECTOR(int32_t, 2))(0x3A9F2F39L, (-10L)), (-10L)), (-10L), 0x3A9F2F39L, (-10L), (VECTOR(int32_t, 2))(0x3A9F2F39L, (-10L)), (VECTOR(int32_t, 2))(0x3A9F2F39L, (-10L)), 0x3A9F2F39L, (-10L), 0x3A9F2F39L, (-10L));
                    VECTOR(int32_t, 8) l_600 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 1L), 1L), 1L, 9L, 1L);
                    VECTOR(int32_t, 4) l_601 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x43485DBDL), 0x43485DBDL);
                    VECTOR(int32_t, 2) l_602 = (VECTOR(int32_t, 2))(0x588D4A1BL, (-1L));
                    VECTOR(int32_t, 4) l_603 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x70E6C872L), 0x70E6C872L);
                    VECTOR(int32_t, 8) l_604 = (VECTOR(int32_t, 8))(0x10942820L, (VECTOR(int32_t, 4))(0x10942820L, (VECTOR(int32_t, 2))(0x10942820L, 6L), 6L), 6L, 0x10942820L, 6L);
                    uint32_t l_605 = 4294967295UL;
                    VECTOR(int32_t, 4) l_606 = (VECTOR(int32_t, 4))(0x2C7BC777L, (VECTOR(int32_t, 2))(0x2C7BC777L, (-1L)), (-1L));
                    int32_t l_607[10] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
                    uint64_t l_608 = 0x9C6BF81EA6B82B2EL;
                    uint8_t l_609 = 0x38L;
                    uint32_t l_610 = 4294967292UL;
                    int8_t l_611[5][9] = {{0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L},{0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L},{0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L},{0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L},{0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L,0x23L}};
                    int32_t l_612 = 0L;
                    int8_t l_613 = 0x72L;
                    int8_t l_614 = 0L;
                    int i, j;
                    l_572 = (l_574 = l_572);
                    l_566 = l_575;
                    if (l_576[2])
                    { /* block id: 275 */
                        VECTOR(int32_t, 8) l_577 = (VECTOR(int32_t, 8))(0x23E13D58L, (VECTOR(int32_t, 4))(0x23E13D58L, (VECTOR(int32_t, 2))(0x23E13D58L, 0x060A2740L), 0x060A2740L), 0x060A2740L, 0x23E13D58L, 0x060A2740L);
                        int8_t l_578 = (-4L);
                        uint64_t l_579 = 0x29101CE6886B22C7L;
                        uint16_t l_580 = 3UL;
                        VECTOR(uint32_t, 16) l_581 = (VECTOR(uint32_t, 16))(0x99D83587L, (VECTOR(uint32_t, 4))(0x99D83587L, (VECTOR(uint32_t, 2))(0x99D83587L, 0x42622589L), 0x42622589L), 0x42622589L, 0x99D83587L, 0x42622589L, (VECTOR(uint32_t, 2))(0x99D83587L, 0x42622589L), (VECTOR(uint32_t, 2))(0x99D83587L, 0x42622589L), 0x99D83587L, 0x42622589L, 0x99D83587L, 0x42622589L);
                        int32_t l_582 = 4L;
                        int32_t l_583 = 3L;
                        int i;
                        (*l_574) = ((VECTOR(int32_t, 8))(l_577.s76174040)).s6;
                        l_577.s4 ^= (l_579 = (l_578 = 0x174E20CFL));
                        l_583 = (l_580 , (((VECTOR(uint32_t, 4))(l_581.sf618)).z , ((*l_572) = l_582)));
                    }
                    else
                    { /* block id: 282 */
                        int32_t l_585 = 2L;
                        int32_t *l_584 = &l_585;
                        l_572 = l_584;
                        (*l_584) |= (-4L);
                        (*l_572) = ((*l_574) = 0x350BDD9DL);
                    }
                    if (((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(l_586.s5643)).ywyxzwyw, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_587.yz)).yxxxyxxxxxyyyxxx)).hi))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_588.xy)).yxyxyyxxxxxxyyxy)).even, ((VECTOR(int32_t, 2))((-1L), 0x624E9556L)).yxxyyyyy))).odd, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_589.xyyy)).odd)), 0x1FC0768BL, (l_590 , l_591[2][3]), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(0x6A331BDDL, 0x05DDBB96L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x3EDFDB1CL, 9L)).yxxxxyyy)))).odd)).even)), l_592, 0L, 0x6796DBE5L, (-1L))).s16, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(2L, 0x3915CF84L)).xyyyxxxx))).s00, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(2L, 0x4CE580DAL)), 1L, 0x62C9ECC7L)).lo))).xxyyxyxyxyyyyxxx, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_593.zz)))), ((VECTOR(int32_t, 16))(0x17057A9EL, 0x39A5AA14L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_594.xy)), (-1L), 0x15692D5DL)).xwyyxxxz)).s6026361471735527, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_595.yx)))).xyyxyyxyyyyyxyyx, ((VECTOR(int32_t, 4))(l_596.yxxy)).zwwwwzyywxwywwyy))).hi, ((VECTOR(int32_t, 2))(0x66F20512L, 1L)).xyyxxxxy))).s4605530767215662))).s02)), 0x2B372374L, 0x54E1BCFAL)))), 1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((l_597 = (l_422.y = 0x27425FFBL)), 0L, 0x12C9B994L, (-1L))).even)).xyxxyyxyxxxyyxxx, (int32_t)((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(l_598.xx)), ((VECTOR(int32_t, 16))(0x490CC646L, 0x147E7B6CL, (-1L), 0x22362B7EL, ((VECTOR(int32_t, 4))(l_599.s9371)), ((VECTOR(int32_t, 2))(0x4B88F9A4L, 0x0A46DF9EL)), (-1L), 0x01CE81E9L, ((VECTOR(int32_t, 2))(l_600.s00)), 0x5E4965F5L, (-1L))).s76))).hi))))).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_601.yz)).yxyxyyxyyyxyxyxx)).sb7f1)).xzyxxyxw))).odd)).hi, ((VECTOR(int32_t, 8))(l_602.yxxxyxxx)).s77))), 0L, 0x7BFDBC38L)).even)), ((VECTOR(int32_t, 16))(l_603.wwxwyyxzzxxwyzyy)).s7e, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(l_604.s0460)).xxyxxxwxzzzxyzxw, (int32_t)l_605, (int32_t)((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(l_606.wywwzwzx)).odd, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))((l_422.w = (l_609 = ((l_607[3] , l_608) , 1L))), (l_422.w &= l_610), l_611[0][4], l_612, l_613, l_614, 1L, 0x3DD317C1L)), ((VECTOR(int32_t, 8))(0x013DCBECL)), ((VECTOR(int32_t, 8))(0x11840EDAL))))).s1242250645434631))).s36, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))((-9L)))))).xxxy))), ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0x004AF819L))))))).odd)), 0x6BC610E7L, 0x17BF0FF0L)).x))).sde))))).yyxyxyxy)), 0x2C6022DDL)).s8c, ((VECTOR(int32_t, 2))(0x5D00E3F6L))))).xyyyxyxxxxyyyyxx))).seb, ((VECTOR(int32_t, 2))(2L)))))))), ((VECTOR(int32_t, 8))((-2L))), ((VECTOR(int32_t, 4))(0x60507189L)), (-1L), (-8L))))).s1, 1L, 0L, 0x616E7E05L)).odd)).even, ((VECTOR(int32_t, 2))((-4L)))))).yxxx, ((VECTOR(int32_t, 4))(1L))))).y)
                    { /* block id: 293 */
                        int32_t l_616 = (-3L);
                        int32_t *l_615 = &l_616;
                        l_574 = l_615;
                    }
                    else
                    { /* block id: 295 */
                        int32_t l_618 = 2L;
                        int32_t *l_617[7][6] = {{&l_618,&l_618,&l_618,&l_618,(void*)0,&l_618},{&l_618,&l_618,&l_618,&l_618,(void*)0,&l_618},{&l_618,&l_618,&l_618,&l_618,(void*)0,&l_618},{&l_618,&l_618,&l_618,&l_618,(void*)0,&l_618},{&l_618,&l_618,&l_618,&l_618,(void*)0,&l_618},{&l_618,&l_618,&l_618,&l_618,(void*)0,&l_618},{&l_618,&l_618,&l_618,&l_618,(void*)0,&l_618}};
                        int32_t l_619 = 0x2DDA73BDL;
                        int8_t l_620 = 0L;
                        uint32_t l_621 = 0x9B96CB15L;
                        int i, j;
                        l_574 = l_617[6][5];
                        l_621++;
                    }
                }
                l_625 = (l_624 = (void*)0);
            }
            for (l_416 = 0; (l_416 <= 25); ++l_416)
            { /* block id: 305 */
                int64_t l_739[9][2] = {{(-1L),0x1D73CDA9C2A700ADL},{(-1L),0x1D73CDA9C2A700ADL},{(-1L),0x1D73CDA9C2A700ADL},{(-1L),0x1D73CDA9C2A700ADL},{(-1L),0x1D73CDA9C2A700ADL},{(-1L),0x1D73CDA9C2A700ADL},{(-1L),0x1D73CDA9C2A700ADL},{(-1L),0x1D73CDA9C2A700ADL},{(-1L),0x1D73CDA9C2A700ADL}};
                int32_t l_740 = 1L;
                VECTOR(uint64_t, 4) l_741 = (VECTOR(uint64_t, 4))(0xA4AF0A74CD53E19FL, (VECTOR(uint64_t, 2))(0xA4AF0A74CD53E19FL, 1UL), 1UL);
                uint32_t l_742 = 0UL;
                int8_t l_743 = (-8L);
                int8_t l_744 = (-7L);
                VECTOR(uint64_t, 2) l_745 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551610UL);
                uint64_t l_746 = 0x7692CD91DAEC64D4L;
                uint16_t l_747[7] = {0x46E8L,6UL,0x46E8L,0x46E8L,6UL,0x46E8L,0x46E8L};
                VECTOR(uint64_t, 8) l_748 = (VECTOR(uint64_t, 8))(0x31647055C401EB2BL, (VECTOR(uint64_t, 4))(0x31647055C401EB2BL, (VECTOR(uint64_t, 2))(0x31647055C401EB2BL, 0UL), 0UL), 0UL, 0x31647055C401EB2BL, 0UL);
                VECTOR(int64_t, 2) l_749 = (VECTOR(int64_t, 2))(0x19343E67A4A81934L, 0x03AAF72551D3A0A3L);
                VECTOR(int64_t, 4) l_750 = (VECTOR(int64_t, 4))(0x16AE2EEFEF176075L, (VECTOR(int64_t, 2))(0x16AE2EEFEF176075L, 0L), 0L);
                uint32_t l_751 = 0x3077EBC3L;
                VECTOR(int64_t, 2) l_752 = (VECTOR(int64_t, 2))((-8L), (-1L));
                int16_t l_753[9][8][3] = {{{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)}},{{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)}},{{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)}},{{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)}},{{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)}},{{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)}},{{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)}},{{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)}},{{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)},{0L,0x77C6L,(-1L)}}};
                uint32_t l_754 = 0xBB3EE980L;
                int8_t l_755 = 0x7EL;
                int32_t l_756 = 0x791D8E65L;
                uint32_t l_757 = 0xD51EF24AL;
                int64_t l_758 = 0x2AF29F5510196D3CL;
                int32_t *l_759 = &l_740;
                int32_t *l_760[8][10][3] = {{{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740}},{{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740}},{{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740}},{{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740}},{{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740}},{{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740}},{{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740}},{{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740},{&l_740,&l_740,&l_740}}};
                int32_t *l_761 = &l_740;
                int i, j, k;
                if ((l_422.x = ((VECTOR(int32_t, 2))(1L, 0x7ACDD10DL)).lo))
                { /* block id: 307 */
                    int32_t l_628 = (-2L);
                    uint32_t l_647 = 1UL;
                    VECTOR(uint8_t, 8) l_650 = (VECTOR(uint8_t, 8))(0xD6L, (VECTOR(uint8_t, 4))(0xD6L, (VECTOR(uint8_t, 2))(0xD6L, 5UL), 5UL), 5UL, 0xD6L, 5UL);
                    int64_t l_651[7][2] = {{0x2777B095473081BDL,0x23E9D8F7D895E106L},{0x2777B095473081BDL,0x23E9D8F7D895E106L},{0x2777B095473081BDL,0x23E9D8F7D895E106L},{0x2777B095473081BDL,0x23E9D8F7D895E106L},{0x2777B095473081BDL,0x23E9D8F7D895E106L},{0x2777B095473081BDL,0x23E9D8F7D895E106L},{0x2777B095473081BDL,0x23E9D8F7D895E106L}};
                    int64_t l_652[1][7][4] = {{{0x557905D9EB7EF499L,0x6D06B858A28A8C89L,0x18F7C115EDC41441L,0x6D06B858A28A8C89L},{0x557905D9EB7EF499L,0x6D06B858A28A8C89L,0x18F7C115EDC41441L,0x6D06B858A28A8C89L},{0x557905D9EB7EF499L,0x6D06B858A28A8C89L,0x18F7C115EDC41441L,0x6D06B858A28A8C89L},{0x557905D9EB7EF499L,0x6D06B858A28A8C89L,0x18F7C115EDC41441L,0x6D06B858A28A8C89L},{0x557905D9EB7EF499L,0x6D06B858A28A8C89L,0x18F7C115EDC41441L,0x6D06B858A28A8C89L},{0x557905D9EB7EF499L,0x6D06B858A28A8C89L,0x18F7C115EDC41441L,0x6D06B858A28A8C89L},{0x557905D9EB7EF499L,0x6D06B858A28A8C89L,0x18F7C115EDC41441L,0x6D06B858A28A8C89L}}};
                    int16_t l_670 = (-5L);
                    int32_t l_671 = 0x0A25EA99L;
                    int i, j, k;
                    for (l_628 = 21; (l_628 >= (-5)); --l_628)
                    { /* block id: 310 */
                        int32_t l_632 = (-3L);
                        int32_t *l_631 = &l_632;
                        int32_t *l_633 = &l_632;
                        uint32_t l_634 = 0x3100BF3AL;
                        int32_t l_635 = (-2L);
                        VECTOR(int8_t, 4) l_636 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L));
                        int8_t l_637 = 0x09L;
                        int32_t l_638 = 1L;
                        VECTOR(int32_t, 8) l_639 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L), 0L, 3L, 0L);
                        int8_t l_640 = 1L;
                        int32_t l_641 = 0x642AB00BL;
                        uint32_t l_642 = 4294967290UL;
                        int32_t *l_645 = &l_635;
                        int32_t *l_646 = &l_632;
                        int i;
                        l_633 = (l_631 = (void*)0);
                        l_422.x ^= (l_634 , l_635);
                        l_642--;
                        l_646 = l_645;
                    }
                    --l_647;
                    if ((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_650.s4651)))).z , ((l_651[6][0] &= 0xF0DFC97CL) , l_652[0][4][3])))
                    { /* block id: 319 */
                        int32_t l_654 = 0x4210ED84L;
                        int32_t *l_653 = &l_654;
                        int32_t *l_655 = &l_654;
                        int32_t *l_656 = &l_654;
                        int32_t *l_657 = (void*)0;
                        int32_t *l_658 = &l_654;
                        int32_t *l_659[3][2][8] = {{{&l_654,&l_654,&l_654,&l_654,&l_654,&l_654,&l_654,(void*)0},{&l_654,&l_654,&l_654,&l_654,&l_654,&l_654,&l_654,(void*)0}},{{&l_654,&l_654,&l_654,&l_654,&l_654,&l_654,&l_654,(void*)0},{&l_654,&l_654,&l_654,&l_654,&l_654,&l_654,&l_654,(void*)0}},{{&l_654,&l_654,&l_654,&l_654,&l_654,&l_654,&l_654,(void*)0},{&l_654,&l_654,&l_654,&l_654,&l_654,&l_654,&l_654,(void*)0}}};
                        int i, j, k;
                        l_655 = l_653;
                        l_656 = (void*)0;
                        l_659[2][1][1] = (l_658 = l_657);
                    }
                    else
                    { /* block id: 324 */
                        int32_t l_661[6] = {0x38758EFAL,0x38758EFAL,0x38758EFAL,0x38758EFAL,0x38758EFAL,0x38758EFAL};
                        int32_t *l_660 = &l_661[1];
                        int32_t *l_662 = &l_661[1];
                        int64_t l_663 = 0x78D107DC8F2338DAL;
                        VECTOR(int32_t, 4) l_664 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-3L)), (-3L));
                        VECTOR(int32_t, 8) l_665 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0L), 0L), 0L, (-10L), 0L);
                        VECTOR(int32_t, 4) l_666 = (VECTOR(int32_t, 4))(0x6DDB9F02L, (VECTOR(int32_t, 2))(0x6DDB9F02L, 0L), 0L);
                        VECTOR(int32_t, 2) l_667 = (VECTOR(int32_t, 2))(0x6E7AB9A8L, 8L);
                        VECTOR(int32_t, 4) l_668 = (VECTOR(int32_t, 4))(0x79A02620L, (VECTOR(int32_t, 2))(0x79A02620L, (-4L)), (-4L));
                        VECTOR(int32_t, 16) l_669 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 2L), 2L), 2L, 1L, 2L, (VECTOR(int32_t, 2))(1L, 2L), (VECTOR(int32_t, 2))(1L, 2L), 1L, 2L, 1L, 2L);
                        int i;
                        l_662 = l_660;
                        l_422.z &= ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(0x1F05858CL, 0x59407CA3L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_663, 0x18737E6DL, 0x39845ABAL, (-5L), ((VECTOR(int32_t, 4))(l_664.yxxx)))))), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(l_665.s20245107)).s42, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x6734966FL, ((VECTOR(int32_t, 2))(l_666.wx)), 0x148FDD99L, ((VECTOR(int32_t, 8))(l_667.yyxyyxxx)), ((VECTOR(int32_t, 2))(l_668.yx)), (-9L), 0L)).s039b)).even))), (-1L), 0x5724EB6EL, (-7L), 1L))))).sb;
                        l_628 ^= 1L;
                        l_422.y |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_669.sa8)), 0L, 0x7B34D85BL)).y;
                    }
                    l_671 &= l_670;
                }
                else
                { /* block id: 331 */
                    int32_t l_672 = (-1L);
                    int64_t l_676 = (-3L);
                    uint8_t l_677 = 0x05L;
                    int8_t l_680 = 0x6CL;
                    uint8_t l_681 = 0x05L;
                    VECTOR(int32_t, 2) l_682 = (VECTOR(int32_t, 2))((-4L), 0x71808C47L);
                    VECTOR(int16_t, 4) l_683 = (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x0596L), 0x0596L);
                    VECTOR(uint16_t, 16) l_684 = (VECTOR(uint16_t, 16))(0x2830L, (VECTOR(uint16_t, 4))(0x2830L, (VECTOR(uint16_t, 2))(0x2830L, 65527UL), 65527UL), 65527UL, 0x2830L, 65527UL, (VECTOR(uint16_t, 2))(0x2830L, 65527UL), (VECTOR(uint16_t, 2))(0x2830L, 65527UL), 0x2830L, 65527UL, 0x2830L, 65527UL);
                    int32_t l_685 = (-7L);
                    VECTOR(uint8_t, 2) l_686 = (VECTOR(uint8_t, 2))(7UL, 255UL);
                    VECTOR(uint8_t, 8) l_687 = (VECTOR(uint8_t, 8))(0xA5L, (VECTOR(uint8_t, 4))(0xA5L, (VECTOR(uint8_t, 2))(0xA5L, 0x1EL), 0x1EL), 0x1EL, 0xA5L, 0x1EL);
                    VECTOR(uint8_t, 16) l_688 = (VECTOR(uint8_t, 16))(0x6AL, (VECTOR(uint8_t, 4))(0x6AL, (VECTOR(uint8_t, 2))(0x6AL, 0UL), 0UL), 0UL, 0x6AL, 0UL, (VECTOR(uint8_t, 2))(0x6AL, 0UL), (VECTOR(uint8_t, 2))(0x6AL, 0UL), 0x6AL, 0UL, 0x6AL, 0UL);
                    VECTOR(uint8_t, 4) l_689 = (VECTOR(uint8_t, 4))(0x7DL, (VECTOR(uint8_t, 2))(0x7DL, 0UL), 0UL);
                    VECTOR(uint8_t, 8) l_690 = (VECTOR(uint8_t, 8))(0x36L, (VECTOR(uint8_t, 4))(0x36L, (VECTOR(uint8_t, 2))(0x36L, 255UL), 255UL), 255UL, 0x36L, 255UL);
                    VECTOR(uint8_t, 8) l_691 = (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 250UL), 250UL), 250UL, 253UL, 250UL);
                    VECTOR(int32_t, 4) l_692 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
                    VECTOR(int32_t, 8) l_693 = (VECTOR(int32_t, 8))(0x3117A4A8L, (VECTOR(int32_t, 4))(0x3117A4A8L, (VECTOR(int32_t, 2))(0x3117A4A8L, 6L), 6L), 6L, 0x3117A4A8L, 6L);
                    VECTOR(int32_t, 8) l_694 = (VECTOR(int32_t, 8))(0x752C19E1L, (VECTOR(int32_t, 4))(0x752C19E1L, (VECTOR(int32_t, 2))(0x752C19E1L, (-6L)), (-6L)), (-6L), 0x752C19E1L, (-6L));
                    VECTOR(int32_t, 4) l_695 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x44EF69FFL), 0x44EF69FFL);
                    VECTOR(int32_t, 16) l_696 = (VECTOR(int32_t, 16))(0x025F36D9L, (VECTOR(int32_t, 4))(0x025F36D9L, (VECTOR(int32_t, 2))(0x025F36D9L, 4L), 4L), 4L, 0x025F36D9L, 4L, (VECTOR(int32_t, 2))(0x025F36D9L, 4L), (VECTOR(int32_t, 2))(0x025F36D9L, 4L), 0x025F36D9L, 4L, 0x025F36D9L, 4L);
                    VECTOR(int32_t, 8) l_697 = (VECTOR(int32_t, 8))(0x22B4C9C1L, (VECTOR(int32_t, 4))(0x22B4C9C1L, (VECTOR(int32_t, 2))(0x22B4C9C1L, (-1L)), (-1L)), (-1L), 0x22B4C9C1L, (-1L));
                    VECTOR(int32_t, 4) l_698 = (VECTOR(int32_t, 4))(0x44FA9236L, (VECTOR(int32_t, 2))(0x44FA9236L, 0x726A0319L), 0x726A0319L);
                    VECTOR(int32_t, 4) l_699 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x7EE45982L), 0x7EE45982L);
                    uint32_t l_700 = 0x6B3E2F7EL;
                    uint8_t l_701 = 255UL;
                    VECTOR(int32_t, 8) l_702 = (VECTOR(int32_t, 8))(0x1735CDE0L, (VECTOR(int32_t, 4))(0x1735CDE0L, (VECTOR(int32_t, 2))(0x1735CDE0L, 8L), 8L), 8L, 0x1735CDE0L, 8L);
                    VECTOR(int32_t, 8) l_703 = (VECTOR(int32_t, 8))(0x583835CBL, (VECTOR(int32_t, 4))(0x583835CBL, (VECTOR(int32_t, 2))(0x583835CBL, 6L), 6L), 6L, 0x583835CBL, 6L);
                    uint64_t l_704 = 18446744073709551613UL;
                    int i;
                    for (l_672 = 6; (l_672 == (-4)); l_672--)
                    { /* block id: 334 */
                        int32_t *l_675 = (void*)0;
                        l_675 = (void*)0;
                    }
                    l_422.z |= ((VECTOR(int32_t, 8))(8L, 0x4D476119L, 0x5201A265L, 1L, 0x683A712BL, ((VECTOR(int32_t, 2))(0x4D71E96BL, 0x3F23D459L)), 0L)).s1;
                    --l_677;
                    if ((l_704 = ((VECTOR(int32_t, 16))((l_681 = (l_422.w = l_680)), 0x0111B93BL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(l_682.yxxxxxxx)).s7606073274341434, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(l_683.xxwwwyxxwxwxzwww)).s1c, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 2))(l_684.sfd)).xyyyyxyyxxyxyyyy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(GROUP_DIVERGE(0, 1), 254UL, 0xDFL, 0xDCL, l_685, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_686.xyyx)).even)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_687.s4736161431174573)).sdf70)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_688.s35d586bd)).s13)), 0xBDL, 0UL, 1UL)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_689.zxyxyxww)))).s5757430540153653, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 4))(l_690.s4044)).even))))).xyxyxxyx)).lo)).zzxwywwwyxxzyzxy))).sac)).xyxyxxyx, ((VECTOR(uint8_t, 4))(l_691.s7626)).wzyywxyz))).s11)).xyyyyxyxxyyxxxyy))))).s38))).xyyxxxxxyxyyyxxy)).lo)).s5021744513262047, ((VECTOR(int32_t, 4))(l_692.yxxy)).wzxzzyyzxwxxzywz))))).sae, ((VECTOR(int32_t, 2))(l_693.s42))))), 0x0AE62995L, (-1L))), (l_422.w = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_694.s0477542641222073)).sc7)).lo, 0x497A6BF5L, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(l_695.wxwy)).zwyyyxwz, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_696.sb196)).zyzzxwwyxzxxzwxw)).s2923)).wzzwwzxw))).hi)).even)).yxxyxxxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_697.s63)).yxyy)).zxyyyxww))).odd)), ((VECTOR(int32_t, 2))(0x670141EFL, 6L)).xyyy))), (-1L), 0x3C9718C5L)).s2), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_698.xxwywwwzwwyzzyyz)).se4)), ((VECTOR(int32_t, 2))(l_699.wy)), 0x476E7F98L, 0x7280EE18L, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))((-3L), 0x3820E806L)).yxyxxxxyxyyxyxxx, ((VECTOR(int32_t, 4))((l_700 = 0x2AF6605AL), ((l_701 = (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xE8L, 255UL)))).yxyxxxxxxxyxyxxy)).s07e9)).z , 0xE28DD8A2L)) , 0L), (-4L), 0x6348E779L)).wzzyxxwzzwyzwxzy, ((VECTOR(int32_t, 4))(l_702.s7315)).wwyzzzwxwzxzwzzx))).s12, ((VECTOR(int32_t, 4))(l_703.s0233)).lo))), (-1L))).se))
                    { /* block id: 345 */
                        uint64_t l_705 = 18446744073709551615UL;
                        uint32_t l_708 = 0x701D2FCAL;
                        int32_t *l_711 = (void*)0;
                        int32_t l_713[8][10][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
                        int32_t *l_712[6] = {&l_713[2][6][0],(void*)0,&l_713[2][6][0],&l_713[2][6][0],(void*)0,&l_713[2][6][0]};
                        uint16_t l_714 = 9UL;
                        int i, j, k;
                        l_705++;
                        --l_708;
                        l_712[1] = l_711;
                        l_422.w = l_714;
                    }
                    else
                    { /* block id: 350 */
                        uint16_t l_715[4][2][8] = {{{0xC2FDL,0UL,1UL,65531UL,0UL,65531UL,1UL,0UL},{0xC2FDL,0UL,1UL,65531UL,0UL,65531UL,1UL,0UL}},{{0xC2FDL,0UL,1UL,65531UL,0UL,65531UL,1UL,0UL},{0xC2FDL,0UL,1UL,65531UL,0UL,65531UL,1UL,0UL}},{{0xC2FDL,0UL,1UL,65531UL,0UL,65531UL,1UL,0UL},{0xC2FDL,0UL,1UL,65531UL,0UL,65531UL,1UL,0UL}},{{0xC2FDL,0UL,1UL,65531UL,0UL,65531UL,1UL,0UL},{0xC2FDL,0UL,1UL,65531UL,0UL,65531UL,1UL,0UL}}};
                        VECTOR(int16_t, 2) l_716 = (VECTOR(int16_t, 2))((-1L), 0x6F40L);
                        uint16_t l_717 = 0x58F5L;
                        int8_t l_718 = 0x1EL;
                        int64_t l_719 = 0x1A23698CBCE38F31L;
                        int32_t l_720 = 1L;
                        VECTOR(uint32_t, 4) l_721 = (VECTOR(uint32_t, 4))(0x2ACB7CEDL, (VECTOR(uint32_t, 2))(0x2ACB7CEDL, 0x6A1B443BL), 0x6A1B443BL);
                        int8_t l_722[4];
                        int8_t l_723[4][7][9] = {{{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L}},{{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L}},{{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L}},{{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L},{0x05L,0x08L,(-1L),(-1L),0x2DL,0x2DL,(-1L),(-1L),0x08L}}};
                        VECTOR(int8_t, 4) l_724 = (VECTOR(int8_t, 4))(0x52L, (VECTOR(int8_t, 2))(0x52L, 0x7AL), 0x7AL);
                        int32_t l_725 = (-10L);
                        uint64_t l_726 = 0xF41F05BEA7D18329L;
                        VECTOR(int16_t, 8) l_727 = (VECTOR(int16_t, 8))(0x326AL, (VECTOR(int16_t, 4))(0x326AL, (VECTOR(int16_t, 2))(0x326AL, 4L), 4L), 4L, 0x326AL, 4L);
                        int32_t l_728 = 0x0FD7480DL;
                        int16_t l_729 = 5L;
                        int32_t l_730 = 0x68A3D27BL;
                        int32_t *l_731 = &l_728;
                        int32_t *l_732 = &l_728;
                        int32_t l_733 = 0x6F24B386L;
                        VECTOR(uint64_t, 8) l_734 = (VECTOR(uint64_t, 8))(18446744073709551613UL, (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 0xD700646AC218F3C3L), 0xD700646AC218F3C3L), 0xD700646AC218F3C3L, 18446744073709551613UL, 0xD700646AC218F3C3L);
                        int32_t *l_737 = &l_728;
                        int32_t *l_738 = &l_728;
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_722[i] = 0x6BL;
                        l_697.s7 = ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(0x03F0L, l_715[0][0][5], (l_718 &= (l_717 &= (l_683.z = ((VECTOR(int16_t, 16))(l_716.yyyxyyyyxyyyyxyy)).s1))), (l_683.y = (((VECTOR(uint32_t, 8))((l_720 = l_719), 4294967287UL, 0xF80BDD17L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_721.yz)).yxyyxxyy)).hi)), 1UL)).s2 , 0x49B3L)), (l_722[0] , 0x3B49L), ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))((l_716.x &= (l_725 = (l_724.x |= (l_683.w |= l_723[3][3][7])))), (l_726 , ((VECTOR(int16_t, 16))(l_727.s3524360741365110)).s6), 0x07B5L, 0x1667L, 0x1A1EL, 0x5E0EL, 0L, l_728, l_729, ((VECTOR(int16_t, 2))(0x5BA8L)), 1L, (-1L), 0L, 0x2FBDL, (-6L))).even, ((VECTOR(int16_t, 8))((-1L)))))).s7, l_730, 0x66E9L, ((VECTOR(int16_t, 4))(0x6100L)), ((VECTOR(int16_t, 4))(2L)))).scce8, ((VECTOR(int16_t, 4))(0L))))).zyxxxwxy, ((VECTOR(uint16_t, 8))(0x445EL))))).s0;
                        l_732 = (l_731 = (void*)0);
                        l_422.z = (l_692.y = l_733);
                        l_738 = (((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-1L), 1L)).yxyyyyyxxyxyyxxy)).se1))))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_734.s4360471557664235)).even)).s13))).xxxx, (uint64_t)(l_433.s6 = (--l_427))))).w , l_737);
                    }
                }
                l_760[7][4][2] = ((((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 16))(3UL, 1UL, 1UL, 0x6D935C6A217169FFL, l_739[6][1], l_740, 0x35B5578C9D662797L, 18446744073709551615UL, 0x93433DE9FF830FF8L, ((VECTOR(uint64_t, 2))(l_741.yx)), 0UL, l_742, ((VECTOR(uint64_t, 2))(0x06C583CB817F70D1L, 0x09BD8B5F4691C9F1L)), 0x3E65EB850F820CAFL)).hi, ((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 8))(18446744073709551608UL, l_743, ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 2))(0UL, 0x2AD2AE36C13454DFL)).yxxy, ((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 16))(FAKE_DIVERGE(p_2081->local_1_offset, get_local_id(1), 10), l_744, 0x3969F66A40B7665CL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 4))(l_745.yxxy)).hi))).xxyyxxyxyxyyxxyx)).sc1)), l_746, 0x5FC568DBF4222F1FL, l_747[0], ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_748.s00)))))).odd, ((VECTOR(uint64_t, 2))(0x3C3D621340B51F7AL, 0xC19A22D0946F2846L)), 0x7E07600297F1403DL, (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_749.yx)).xxyyyyxxyxyyxyxx)).s1dbe, ((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 4))(l_750.yzyz)).wwzzyzzzwwwyyyzz, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((l_423 = l_751), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_752.xxxyyyxxyyyyxyyx)).s2f)), 0x53EBB8039D4A6839L)).hi)).xxxyyxyxyyxyyyxy)).lo)).s3652712577202317))), ((VECTOR(int64_t, 16))(l_753[3][7][2], 0x06BCEFDEBEF41822L, 0x085D2990A8D5C319L, 0x207EB5F08E166A0CL, l_754, 0x60BB82F81CEB3AF7L, (-1L), ((VECTOR(int64_t, 2))(3L)), 6L, l_755, l_756, (-7L), ((VECTOR(int64_t, 2))(9L)), 0x2FF1959B8A43AD4FL))))).s05d6))).xzwywzwz)).s2 , l_757), 0UL, 2UL, 7UL)).odd))).even))), 18446744073709551610UL, 0x374EEB3DFC1AE88DL)).s02, ((VECTOR(uint64_t, 2))(0x0412E0CE9A468C68L))))).xxyxyyxx, ((VECTOR(uint64_t, 8))(0xEAC925D0AD11F6EDL))))).lo, ((VECTOR(uint64_t, 4))(18446744073709551612UL))))).xxwwxyyy))).s4 , l_758) , l_759);
                l_761 = (void*)0;
                for (l_744 = 0; (l_744 != 29); l_744++)
                { /* block id: 375 */
                    uint32_t l_764 = 4294967295UL;
                    int32_t l_776 = (-5L);
                    uint32_t l_777 = 0x08A7F59FL;
                    int32_t l_779 = (-1L);
                    int32_t *l_778 = &l_779;
                    if (l_764)
                    { /* block id: 376 */
                        VECTOR(int32_t, 16) l_765 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x372F178EL), 0x372F178EL), 0x372F178EL, (-1L), 0x372F178EL, (VECTOR(int32_t, 2))((-1L), 0x372F178EL), (VECTOR(int32_t, 2))((-1L), 0x372F178EL), (-1L), 0x372F178EL, (-1L), 0x372F178EL);
                        VECTOR(int32_t, 16) l_766 = (VECTOR(int32_t, 16))(0x7AFD73B4L, (VECTOR(int32_t, 4))(0x7AFD73B4L, (VECTOR(int32_t, 2))(0x7AFD73B4L, (-1L)), (-1L)), (-1L), 0x7AFD73B4L, (-1L), (VECTOR(int32_t, 2))(0x7AFD73B4L, (-1L)), (VECTOR(int32_t, 2))(0x7AFD73B4L, (-1L)), 0x7AFD73B4L, (-1L), 0x7AFD73B4L, (-1L));
                        uint8_t l_767[3][2][1] = {{{0xF0L},{0xF0L}},{{0xF0L},{0xF0L}},{{0xF0L},{0xF0L}}};
                        int i, j, k;
                        l_767[1][1][0] = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(l_765.sd9)).yxxy, ((VECTOR(int32_t, 4))(l_766.s9f1f))))).wzyzyxxywyzyyzww)).s2;
                    }
                    else
                    { /* block id: 378 */
                        int32_t l_768[4][2][4] = {{{1L,0x112AF131L,1L,1L},{1L,0x112AF131L,1L,1L}},{{1L,0x112AF131L,1L,1L},{1L,0x112AF131L,1L,1L}},{{1L,0x112AF131L,1L,1L},{1L,0x112AF131L,1L,1L}},{{1L,0x112AF131L,1L,1L},{1L,0x112AF131L,1L,1L}}};
                        VECTOR(int32_t, 8) l_769 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0L), 0L), 0L, (-6L), 0L);
                        uint64_t l_770 = 0x1286989375241DD2L;
                        int8_t l_771 = (-1L);
                        int8_t l_772 = 0x40L;
                        uint64_t l_773 = 4UL;
                        int i, j, k;
                        (*l_759) = l_768[1][1][3];
                        l_770 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_769.s20)).xxxxyxyx)).s3;
                        --l_773;
                        (*l_759) = 1L;
                    }
                    l_760[1][1][2] = (l_778 = ((l_777 = ((*l_759) = l_776)) , l_778));
                }
            }
            if ((((((VECTOR(uint64_t, 2))(l_780.s41)).hi , 0x41L) , 1L) , l_781))
            { /* block id: 390 */
                int32_t l_782 = 0x61B959FEL;
                for (l_782 = 0; (l_782 < 17); l_782 = safe_add_func_uint64_t_u_u(l_782, 1))
                { /* block id: 393 */
                    VECTOR(uint32_t, 16) l_785 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x1F13D6CFL), 0x1F13D6CFL), 0x1F13D6CFL, 1UL, 0x1F13D6CFL, (VECTOR(uint32_t, 2))(1UL, 0x1F13D6CFL), (VECTOR(uint32_t, 2))(1UL, 0x1F13D6CFL), 1UL, 0x1F13D6CFL, 1UL, 0x1F13D6CFL);
                    int32_t l_787 = 0x0B60C276L;
                    int32_t *l_786 = &l_787;
                    uint32_t l_788 = 0x6FFCBF7BL;
                    int32_t *l_791[7];
                    int32_t *l_792 = &l_787;
                    int64_t l_793 = 0x16BAD72D345A1206L;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_791[i] = &l_787;
                    l_786 = (((VECTOR(uint32_t, 16))(l_785.s22f0d9eadce9c2b6)).sc , (void*)0);
                    ++l_788;
                    l_792 = l_791[1];
                    l_422.z |= l_793;
                }
                for (l_782 = 0; (l_782 > (-12)); l_782 = safe_sub_func_uint64_t_u_u(l_782, 2))
                { /* block id: 401 */
                    uint8_t l_796 = 0UL;
                    VECTOR(int32_t, 2) l_797 = (VECTOR(int32_t, 2))(0x1D3F85E5L, 0x416D4873L);
                    VECTOR(int32_t, 2) l_798 = (VECTOR(int32_t, 2))(0L, 0x3C48465BL);
                    int32_t *l_810[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_811 = (void*)0;
                    int32_t l_812 = 0x617696E6L;
                    uint8_t l_813[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_813[i] = 1UL;
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 0x33170BEDL)))).xyxyxyyx)).s15, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(1L, (-1L))).yxxyyxyyxyxyxxyx, ((VECTOR(int32_t, 2))(0x07DC4F0EL, 0x04F3CC11L)).xyxyyxxxxxyyyyyy))).s1c40)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((-3L), l_796, ((VECTOR(int32_t, 2))(2L, (-8L))), 0x79773349L, 0x6899AC33L, 0x73BA8915L, 0x2B8DF2A1L)).s0, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_797.xxxxyyxx)).s14)).xyyx)).hi)), 0x2DC9222DL)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 1L)).xxxxxyxxyxxyxxxx)).sd6))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_798.yxxxyyyxyxyyyyyy)))).sca))), 0x6C7CDCCEL, (-4L))).z)
                    { /* block id: 402 */
                        int64_t l_799 = (-1L);
                        uint64_t l_800 = 0x28F1DE8A16CF7553L;
                        int64_t l_801 = 0x55B3430E978CABDBL;
                        uint32_t l_802[3][4] = {{0xACC09656L,5UL,0xB2E6269AL,5UL},{0xACC09656L,5UL,0xB2E6269AL,5UL},{0xACC09656L,5UL,0xB2E6269AL,5UL}};
                        uint16_t l_803 = 9UL;
                        int32_t l_805 = 0x0016266CL;
                        int32_t *l_804 = &l_805;
                        int32_t *l_806 = (void*)0;
                        int i, j;
                        l_802[1][2] |= (l_801 = (l_800 = l_799));
                        l_797.x = l_803;
                        l_806 = l_804;
                    }
                    else
                    { /* block id: 408 */
                        uint16_t l_807 = 0xE925L;
                        ++l_807;
                    }
                    l_811 = l_810[3];
                    l_813[1]++;
                }
            }
            else
            { /* block id: 414 */
                uint8_t l_816[5][5] = {{0UL,1UL,0x3AL,249UL,0x3AL},{0UL,1UL,0x3AL,249UL,0x3AL},{0UL,1UL,0x3AL,249UL,0x3AL},{0UL,1UL,0x3AL,249UL,0x3AL},{0UL,1UL,0x3AL,249UL,0x3AL}};
                int64_t l_819[3][9] = {{0x236AF13724C1AB0EL,(-1L),0x236AF13724C1AB0EL,0x236AF13724C1AB0EL,(-1L),0x236AF13724C1AB0EL,0x236AF13724C1AB0EL,(-1L),0x236AF13724C1AB0EL},{0x236AF13724C1AB0EL,(-1L),0x236AF13724C1AB0EL,0x236AF13724C1AB0EL,(-1L),0x236AF13724C1AB0EL,0x236AF13724C1AB0EL,(-1L),0x236AF13724C1AB0EL},{0x236AF13724C1AB0EL,(-1L),0x236AF13724C1AB0EL,0x236AF13724C1AB0EL,(-1L),0x236AF13724C1AB0EL,0x236AF13724C1AB0EL,(-1L),0x236AF13724C1AB0EL}};
                int8_t l_820 = 2L;
                int i, j;
                l_816[0][2]++;
                l_820 = l_819[2][0];
            }
            --l_821[0][4][0];
            unsigned int result = 0;
            result += l_416;
            result += l_417;
            result += l_418.s7;
            result += l_418.s6;
            result += l_418.s5;
            result += l_418.s4;
            result += l_418.s3;
            result += l_418.s2;
            result += l_418.s1;
            result += l_418.s0;
            result += l_419;
            result += l_420.y;
            result += l_420.x;
            result += l_421;
            result += l_422.w;
            result += l_422.z;
            result += l_422.y;
            result += l_422.x;
            result += l_423;
            result += l_424.y;
            result += l_424.x;
            result += l_425.sf;
            result += l_425.se;
            result += l_425.sd;
            result += l_425.sc;
            result += l_425.sb;
            result += l_425.sa;
            result += l_425.s9;
            result += l_425.s8;
            result += l_425.s7;
            result += l_425.s6;
            result += l_425.s5;
            result += l_425.s4;
            result += l_425.s3;
            result += l_425.s2;
            result += l_425.s1;
            result += l_425.s0;
            result += l_426;
            result += l_427;
            result += l_428.s7;
            result += l_428.s6;
            result += l_428.s5;
            result += l_428.s4;
            result += l_428.s3;
            result += l_428.s2;
            result += l_428.s1;
            result += l_428.s0;
            result += l_429.sf;
            result += l_429.se;
            result += l_429.sd;
            result += l_429.sc;
            result += l_429.sb;
            result += l_429.sa;
            result += l_429.s9;
            result += l_429.s8;
            result += l_429.s7;
            result += l_429.s6;
            result += l_429.s5;
            result += l_429.s4;
            result += l_429.s3;
            result += l_429.s2;
            result += l_429.s1;
            result += l_429.s0;
            result += l_430.y;
            result += l_430.x;
            result += l_431.s7;
            result += l_431.s6;
            result += l_431.s5;
            result += l_431.s4;
            result += l_431.s3;
            result += l_431.s2;
            result += l_431.s1;
            result += l_431.s0;
            result += l_432;
            result += l_433.s7;
            result += l_433.s6;
            result += l_433.s5;
            result += l_433.s4;
            result += l_433.s3;
            result += l_433.s2;
            result += l_433.s1;
            result += l_433.s0;
            result += l_434;
            result += l_780.s7;
            result += l_780.s6;
            result += l_780.s5;
            result += l_780.s4;
            result += l_780.s3;
            result += l_780.s2;
            result += l_780.s1;
            result += l_780.s0;
            result += l_781;
            int l_821_i0, l_821_i1, l_821_i2;
            for (l_821_i0 = 0; l_821_i0 < 3; l_821_i0++) {
                for (l_821_i1 = 0; l_821_i1 < 5; l_821_i1++) {
                    for (l_821_i2 = 0; l_821_i2 < 1; l_821_i2++) {
                        result += l_821[l_821_i0][l_821_i1][l_821_i2];
                    }
                }
            }
            atomic_add(&p_2081->l_special_values[4], result);
        }
        else
        { /* block id: 419 */
            (1 + 1);
        }
        l_826 = l_824[2];
        for (p_44 = 28; (p_44 == 17); p_44 = safe_sub_func_int8_t_s_s(p_44, 6))
        { /* block id: 425 */
            (*l_826) = (safe_sub_func_uint32_t_u_u(((&l_412 != p_2081->g_249) , p_41), (&p_2081->g_238[3] != &p_2081->g_238[2])));
        }
        if ((atomic_inc(&p_2081->l_atomic_input[5]) == 9))
        { /* block id: 429 */
            int32_t l_831[10][5][3] = {{{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L}},{{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L}},{{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L}},{{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L}},{{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L}},{{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L}},{{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L}},{{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L}},{{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L}},{{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L},{0x19E84CC7L,0x52C6A709L,0x19E84CC7L}}};
            int32_t *l_858[8][2] = {{(void*)0,&l_831[2][0][1]},{(void*)0,&l_831[2][0][1]},{(void*)0,&l_831[2][0][1]},{(void*)0,&l_831[2][0][1]},{(void*)0,&l_831[2][0][1]},{(void*)0,&l_831[2][0][1]},{(void*)0,&l_831[2][0][1]},{(void*)0,&l_831[2][0][1]}};
            int8_t l_859 = 0x61L;
            int32_t l_962 = (-7L);
            uint32_t l_963 = 0UL;
            int i, j, k;
            for (l_831[9][1][2] = 0; (l_831[9][1][2] == 6); l_831[9][1][2]++)
            { /* block id: 432 */
                VECTOR(int32_t, 8) l_834 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x5603A6DCL), 0x5603A6DCL), 0x5603A6DCL, (-3L), 0x5603A6DCL);
                int32_t l_835 = 0x6622D4FDL;
                int32_t *l_853 = &l_835;
                int32_t *l_854 = &l_835;
                VECTOR(int32_t, 4) l_855 = (VECTOR(int32_t, 4))(0x29B77457L, (VECTOR(int32_t, 2))(0x29B77457L, (-1L)), (-1L));
                int16_t l_856 = 0x17C1L;
                uint32_t l_857[3][4] = {{0xF70A583FL,0xF70A583FL,0xF70A583FL,0xF70A583FL},{0xF70A583FL,0xF70A583FL,0xF70A583FL,0xF70A583FL},{0xF70A583FL,0xF70A583FL,0xF70A583FL,0xF70A583FL}};
                int i, j;
                l_835 = ((VECTOR(int32_t, 2))(l_834.s54)).even;
                for (l_834.s3 = 0; (l_834.s3 <= 3); l_834.s3 = safe_add_func_int32_t_s_s(l_834.s3, 6))
                { /* block id: 436 */
                    int32_t l_838[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_838[i] = 0x7A0B4C38L;
                    for (l_838[2] = 0; (l_838[2] != (-14)); l_838[2] = safe_sub_func_int16_t_s_s(l_838[2], 8))
                    { /* block id: 439 */
                        uint64_t l_841 = 9UL;
                        int32_t *l_844 = (void*)0;
                        int32_t l_846 = 7L;
                        int32_t *l_845[1];
                        int8_t l_847 = 0x4BL;
                        int32_t l_848[5];
                        int32_t l_849[3][10][8] = {{{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L}},{{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L}},{{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L},{0x073A7F6CL,0x0402CFB0L,0x0A048847L,0x0402CFB0L,0x073A7F6CL,0x073A7F6CL,0x0402CFB0L,0x0A048847L}}};
                        uint32_t l_850 = 4UL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_845[i] = &l_846;
                        for (i = 0; i < 5; i++)
                            l_848[i] = (-2L);
                        l_841++;
                        l_845[0] = l_844;
                        l_850--;
                    }
                }
                l_854 = (l_853 = (void*)0);
                l_857[1][0] &= (l_856 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_855.wz)).yxxy)).w);
            }
            l_858[3][1] = l_858[3][1];
            if (l_859)
            { /* block id: 451 */
                VECTOR(int32_t, 4) l_860 = (VECTOR(int32_t, 4))(0x300D9C74L, (VECTOR(int32_t, 2))(0x300D9C74L, 0x489D2A72L), 0x489D2A72L);
                VECTOR(int32_t, 4) l_861 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
                VECTOR(int16_t, 4) l_862 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-4L)), (-4L));
                VECTOR(uint16_t, 16) l_863 = (VECTOR(uint16_t, 16))(0x169CL, (VECTOR(uint16_t, 4))(0x169CL, (VECTOR(uint16_t, 2))(0x169CL, 2UL), 2UL), 2UL, 0x169CL, 2UL, (VECTOR(uint16_t, 2))(0x169CL, 2UL), (VECTOR(uint16_t, 2))(0x169CL, 2UL), 0x169CL, 2UL, 0x169CL, 2UL);
                uint8_t l_864 = 0UL;
                uint32_t l_865 = 1UL;
                int32_t l_866 = 0x143D9178L;
                VECTOR(int32_t, 16) l_867 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L), (VECTOR(int32_t, 2))(0L, (-6L)), (VECTOR(int32_t, 2))(0L, (-6L)), 0L, (-6L), 0L, (-6L));
                VECTOR(int32_t, 16) l_868 = (VECTOR(int32_t, 16))(0x60ABAF94L, (VECTOR(int32_t, 4))(0x60ABAF94L, (VECTOR(int32_t, 2))(0x60ABAF94L, (-1L)), (-1L)), (-1L), 0x60ABAF94L, (-1L), (VECTOR(int32_t, 2))(0x60ABAF94L, (-1L)), (VECTOR(int32_t, 2))(0x60ABAF94L, (-1L)), 0x60ABAF94L, (-1L), 0x60ABAF94L, (-1L));
                int8_t l_920 = 0x13L;
                VECTOR(int16_t, 2) l_921 = (VECTOR(int16_t, 2))(0x3EECL, (-1L));
                VECTOR(int16_t, 4) l_922 = (VECTOR(int16_t, 4))(0x26DBL, (VECTOR(int16_t, 2))(0x26DBL, 1L), 1L);
                uint8_t l_923 = 0xE1L;
                int16_t l_924 = 4L;
                int8_t l_925 = 0x44L;
                VECTOR(int64_t, 2) l_926 = (VECTOR(int64_t, 2))((-3L), 0x69295FD801FF7714L);
                VECTOR(int16_t, 2) l_927 = (VECTOR(int16_t, 2))(0x5ACCL, 0x6D68L);
                VECTOR(int16_t, 4) l_928 = (VECTOR(int16_t, 4))(0x431DL, (VECTOR(int16_t, 2))(0x431DL, 0x3557L), 0x3557L);
                int32_t l_929 = 0x25A7D764L;
                int32_t l_930 = (-9L);
                int64_t l_931 = 0L;
                uint32_t l_932 = 4294967295UL;
                VECTOR(uint64_t, 16) l_933 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xFF3F3E25FD9F9D2CL), 0xFF3F3E25FD9F9D2CL), 0xFF3F3E25FD9F9D2CL, 18446744073709551615UL, 0xFF3F3E25FD9F9D2CL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xFF3F3E25FD9F9D2CL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xFF3F3E25FD9F9D2CL), 18446744073709551615UL, 0xFF3F3E25FD9F9D2CL, 18446744073709551615UL, 0xFF3F3E25FD9F9D2CL);
                VECTOR(int8_t, 16) l_934 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x60L), 0x60L), 0x60L, (-1L), 0x60L, (VECTOR(int8_t, 2))((-1L), 0x60L), (VECTOR(int8_t, 2))((-1L), 0x60L), (-1L), 0x60L, (-1L), 0x60L);
                int32_t l_935[5][1][6] = {{{6L,6L,0x4E700653L,7L,0x6940D405L,7L}},{{6L,6L,0x4E700653L,7L,0x6940D405L,7L}},{{6L,6L,0x4E700653L,7L,0x6940D405L,7L}},{{6L,6L,0x4E700653L,7L,0x6940D405L,7L}},{{6L,6L,0x4E700653L,7L,0x6940D405L,7L}}};
                uint64_t l_936[2][4] = {{0x5DDB0EDA65F3B40EL,0xF9190EEB5190745AL,0x5DDB0EDA65F3B40EL,0x5DDB0EDA65F3B40EL},{0x5DDB0EDA65F3B40EL,0xF9190EEB5190745AL,0x5DDB0EDA65F3B40EL,0x5DDB0EDA65F3B40EL}};
                int64_t l_937 = 0x7204B54051BB2712L;
                uint8_t l_938[10] = {0xF0L,0xF0L,0xF0L,0xF0L,0xF0L,0xF0L,0xF0L,0xF0L,0xF0L,0xF0L};
                int16_t l_939 = 9L;
                int64_t l_940[7][10][1] = {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}};
                int32_t *l_941 = (void*)0;
                int i, j, k;
                if (((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_860.ywzx)).y, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_861.xxxzwyzx)).s16, ((VECTOR(int32_t, 2))(0x06389387L, 0x2DD2950CL))))), 0x74900DE3L)), ((VECTOR(int32_t, 16))((l_864 = ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_862.yzxzzywz)))).s53, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_863.s4941)).xzxxwzyx)).s16))).even), 1L, (-6L), l_865, l_866, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 4L)).yxxyyxyx)).lo)), (l_860.y ^= (l_861.x |= ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x2561A860L, 0x1B43A5D7L)).yxxxyyyyxxxxyxxx)).s67)).yyyy)).wywxzxwzwyzwwxxx, ((VECTOR(int32_t, 4))(l_867.s1924)).wxzxwwwyyzyxyxwz))).s8)), ((VECTOR(int32_t, 4))(l_868.s7075)).w, 0x0E22FB3AL, 0x21D65DD8L)), 0x5C65C29DL, 0x76221271L, 0x5FE8FF7AL)).s44a1))).y)
                { /* block id: 455 */
                    uint32_t l_869 = 1UL;
                    int32_t l_870 = 0x7B223343L;
                    int8_t l_871 = 0x5AL;
                    uint64_t l_872 = 0x52E486D04A640461L;
                    VECTOR(int32_t, 4) l_873 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L));
                    int8_t l_874 = 1L;
                    uint32_t l_875 = 4294967289UL;
                    VECTOR(int32_t, 8) l_876 = (VECTOR(int32_t, 8))(0x5ADAC1C5L, (VECTOR(int32_t, 4))(0x5ADAC1C5L, (VECTOR(int32_t, 2))(0x5ADAC1C5L, (-10L)), (-10L)), (-10L), 0x5ADAC1C5L, (-10L));
                    uint32_t l_877 = 0x41EB1FA6L;
                    int64_t l_878 = 0x7BBA233A3A491B5BL;
                    uint16_t l_879 = 65535UL;
                    VECTOR(int32_t, 2) l_880 = (VECTOR(int32_t, 2))(0x0B6728CAL, 0L);
                    VECTOR(int32_t, 2) l_881 = (VECTOR(int32_t, 2))(0x226CC6FBL, (-8L));
                    int i;
                    if ((l_869 , ((((l_871 = l_870) , ((l_872 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_873.yw)).xxxy)), (l_875 = (l_874 = 1L)), ((VECTOR(int32_t, 16))(l_876.s6634401224407152)).sd, 0x4FB5A6B2L, 0x79BD5BC3L)).s6) , (l_878 = (l_877 ^= (-7L))))) , l_879) , ((VECTOR(int32_t, 8))(5L, 0x7FFB2BB8L, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(1L, 0L, 0x1C6101DFL, (-1L))).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_880.yxyxyxyxxxyyyxyy)).s64)), (-9L), (-7L))).yywzyxxyyxzzzzxw)).sd8, ((VECTOR(int32_t, 2))(l_881.yx))))), 0x0B831B2EL, (-3L), 0L, 0x34D29341L)).s5)))
                    { /* block id: 461 */
                        uint32_t l_882 = 4294967295UL;
                        int64_t l_883 = 0x643D35FE9C4D33FCL;
                        int32_t *l_884[5];
                        uint32_t l_885 = 0x3FD06290L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_884[i] = (void*)0;
                        l_883 &= (l_882 , 1L);
                        l_858[3][1] = l_884[4];
                        l_885 &= 0x51CA150EL;
                    }
                    else
                    { /* block id: 465 */
                        int32_t l_886 = 0x2FC51584L;
                        int8_t l_887[2];
                        int16_t l_888[9][4][5] = {{{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL}},{{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL}},{{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL}},{{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL}},{{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL}},{{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL}},{{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL}},{{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL}},{{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL},{0x3CB6L,3L,(-4L),0x511EL,0x12EAL}}};
                        uint8_t l_889 = 0xB3L;
                        int16_t l_890[1];
                        uint32_t l_891 = 0UL;
                        uint64_t l_892 = 1UL;
                        uint32_t l_893 = 4294967292UL;
                        VECTOR(int8_t, 2) l_894 = (VECTOR(int8_t, 2))(0x21L, (-4L));
                        int32_t *l_895 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_887[i] = 0L;
                        for (i = 0; i < 1; i++)
                            l_890[i] = 0x31BFL;
                        l_886 = ((VECTOR(int32_t, 4))(l_886, l_887[1], 1L, 0L)).z;
                        l_890[0] &= (l_889 = l_888[8][2][2]);
                        l_858[2][0] = (((l_891 , (l_893 ^= ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0x6274AA0E294DAD65L, (l_892 |= 0x14E4A987F3CEE53CL), (-2L), 0x79C40A5253826962L)))).odd)).odd)) , ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_894.xx)).xxyx)).y) , l_895);
                    }
                }
                else
                { /* block id: 473 */
                    uint64_t l_896 = 0UL;
                    uint16_t l_897 = 0UL;
                    int16_t l_898 = (-7L);
                    l_898 |= (l_897 ^= l_896);
                }
                l_858[5][1] = (void*)0;
                for (l_865 = 0; (l_865 < 37); ++l_865)
                { /* block id: 480 */
                    int32_t l_901[7] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
                    int64_t l_902 = 0x287775B3463D5B8BL;
                    int i;
                    if ((l_901[1] , l_902))
                    { /* block id: 481 */
                        int32_t l_904 = (-5L);
                        int32_t *l_903 = &l_904;
                        int32_t *l_905 = &l_904;
                        uint32_t l_906 = 0xC3287533L;
                        l_903 = (void*)0;
                        l_903 = l_905;
                        (*l_905) ^= l_906;
                    }
                    else
                    { /* block id: 485 */
                        uint64_t l_907[3][2] = {{3UL,3UL},{3UL,3UL},{3UL,3UL}};
                        VECTOR(int32_t, 8) l_908 = (VECTOR(int32_t, 8))(0x4C310272L, (VECTOR(int32_t, 4))(0x4C310272L, (VECTOR(int32_t, 2))(0x4C310272L, 0x66E68296L), 0x66E68296L), 0x66E68296L, 0x4C310272L, 0x66E68296L);
                        int32_t l_909[1];
                        uint32_t l_910[9] = {0x954551D6L,0x954551D6L,0x954551D6L,0x954551D6L,0x954551D6L,0x954551D6L,0x954551D6L,0x954551D6L,0x954551D6L};
                        uint32_t l_911 = 4294967295UL;
                        VECTOR(int32_t, 4) l_912 = (VECTOR(int32_t, 4))(0x24CEAE71L, (VECTOR(int32_t, 2))(0x24CEAE71L, (-2L)), (-2L));
                        uint32_t l_913[4][3][2] = {{{0xD789FC86L,8UL},{0xD789FC86L,8UL},{0xD789FC86L,8UL}},{{0xD789FC86L,8UL},{0xD789FC86L,8UL},{0xD789FC86L,8UL}},{{0xD789FC86L,8UL},{0xD789FC86L,8UL},{0xD789FC86L,8UL}},{{0xD789FC86L,8UL},{0xD789FC86L,8UL},{0xD789FC86L,8UL}}};
                        VECTOR(int32_t, 8) l_914 = (VECTOR(int32_t, 8))(0x4BB1AF3CL, (VECTOR(int32_t, 4))(0x4BB1AF3CL, (VECTOR(int32_t, 2))(0x4BB1AF3CL, (-10L)), (-10L)), (-10L), 0x4BB1AF3CL, (-10L));
                        int32_t *l_915 = (void*)0;
                        int64_t l_916 = 0x593AF10DA2CBE036L;
                        int32_t l_917 = 1L;
                        uint32_t l_918 = 1UL;
                        int16_t l_919 = 0x305AL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_909[i] = 1L;
                        l_915 = (((((VECTOR(uint32_t, 2))(4294967295UL, 4294967293UL)).hi , ((VECTOR(uint64_t, 2))(0xA58DD65A18F214FFL, 0xE2DD03BFDFDBD18AL)).hi) , l_907[2][1]) , ((l_912.y = ((((l_909[0] = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_908.s3556065052500243)))))).s4495)).w) , l_910[3]) , (l_902 &= l_911)) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_912.xwwz)), l_913[0][2][1], ((VECTOR(int32_t, 2))(l_914.s76)), 0x2ECB0390L)).s7)) , (void*)0));
                        l_912.y = ((l_916 , 3UL) , 0x7AB9C93BL);
                        l_917 = (-1L);
                        l_919 = l_918;
                    }
                }
                l_941 = ((((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_920, (-6L), ((VECTOR(int16_t, 4))(l_921.xxyy)), 0L, 0x4006L)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(l_922.zwyzyxxz)).odd, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0x6EA7L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_923, 0x2318L, 0x0B06L, l_924, 9L, (l_925 = (l_924 = (-7L))), (-1L), 0x58A3L)).even)).z, 0x5142L, 0L, 7L, l_926.x, 9L, 2L)).s5334021604512200)).s9479, ((VECTOR(int16_t, 8))(0x29EAL, 0x4DBCL, 0L, 1L, 0x2417L, ((VECTOR(int16_t, 2))(0x10C1L, 0x1AB9L)).lo, 9L, 0x7D49L)).even))).yzxzwzyzzxwzzyxz, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_927.xx)).yxxx)).even, ((VECTOR(int16_t, 2))(1L, (-10L)))))), (l_928.x = ((VECTOR(int16_t, 16))(0x570EL, 2L, (l_929 = ((VECTOR(int16_t, 8))(l_928.xzzyyxwx)).s0), 0x4826L, 0x30D8L, l_930, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))((-1L), ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(l_931, (l_933.sd = l_932), 0x7D2FL, (-2L))).odd, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(l_934.sa2131659cc400f33)), ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_935[3][0][0], l_936[0][3], 0UL, 255UL)).wyzxwyyy)).odd, ((VECTOR(uint8_t, 4))(4UL))))).wxywwzxzwwzyyzwz))).s122c)).lo))), ((VECTOR(int16_t, 2))(0x4608L))))), 0x4BD6L)).even)).xyyyxyyy)).s34)), 0x7AF5L, 1L, l_937, 1L, l_938[8], l_939, 0x2A82L, 0x5722L)).s2), 1L, 0x59FCL, 1L, ((VECTOR(int16_t, 8))((-4L))), 0x74AAL, 0x0515L))))).s01d4)), ((VECTOR(int16_t, 4))(0x1D52L)))).lo, ((VECTOR(int16_t, 8))(0L))))).s6 , l_940[2][1][0]) , l_941);
            }
            else
            { /* block id: 501 */
                int32_t l_942 = 0x0207F383L;
                int8_t l_960 = (-5L);
                int64_t l_961 = 1L;
                for (l_942 = 0; (l_942 >= (-18)); l_942--)
                { /* block id: 504 */
                    int32_t l_945[2][2] = {{0x55905507L,0x55905507L},{0x55905507L,0x55905507L}};
                    int i, j;
                    for (l_945[1][0] = 14; (l_945[1][0] < (-26)); l_945[1][0]--)
                    { /* block id: 507 */
                        int16_t l_948 = (-1L);
                        uint32_t l_949[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                        int i;
                        l_949[4]++;
                    }
                    l_858[3][1] = (void*)0;
                    for (l_945[1][0] = 0; (l_945[1][0] != (-24)); --l_945[1][0])
                    { /* block id: 513 */
                        uint64_t l_954 = 0x44373CC68058408BL;
                        uint32_t l_957 = 0x71E12FA2L;
                        ++l_954;
                        l_957--;
                    }
                }
                l_961 = (l_942 |= l_960);
            }
            l_963 = l_962;
            unsigned int result = 0;
            int l_831_i0, l_831_i1, l_831_i2;
            for (l_831_i0 = 0; l_831_i0 < 10; l_831_i0++) {
                for (l_831_i1 = 0; l_831_i1 < 5; l_831_i1++) {
                    for (l_831_i2 = 0; l_831_i2 < 3; l_831_i2++) {
                        result += l_831[l_831_i0][l_831_i1][l_831_i2];
                    }
                }
            }
            result += l_859;
            result += l_962;
            result += l_963;
            atomic_add(&p_2081->l_special_values[5], result);
        }
        else
        { /* block id: 522 */
            (1 + 1);
        }
    }
    else
    { /* block id: 525 */
        for (p_2081->g_324 = 8; (p_2081->g_324 == (-17)); p_2081->g_324--)
        { /* block id: 528 */
            (*p_2081->g_966) = (*p_2081->g_205);
        }
    }
    if ((atomic_inc(&p_2081->g_atomic_input[8 * get_linear_group_id() + 2]) == 0))
    { /* block id: 533 */
        int16_t l_967 = 0L;
        VECTOR(int64_t, 8) l_1144 = (VECTOR(int64_t, 8))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 4L), 4L), 4L, 4L, 4L);
        VECTOR(int64_t, 2) l_1145 = (VECTOR(int64_t, 2))(0x19648D5489E5AB38L, 0x094AC55CE812944DL);
        uint8_t l_1146 = 1UL;
        VECTOR(int64_t, 8) l_1147 = (VECTOR(int64_t, 8))(6L, (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0L), 0L), 0L, 6L, 0L);
        int32_t l_1149 = (-1L);
        int32_t *l_1148 = &l_1149;
        int i;
        if (l_967)
        { /* block id: 534 */
            VECTOR(int32_t, 8) l_968 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
            VECTOR(int32_t, 2) l_969 = (VECTOR(int32_t, 2))(0x126F464BL, 0x24F21A63L);
            uint8_t l_970 = 0x91L;
            int i;
            if ((l_970 = ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_968.s27)).yxxyyxxxyyyyyyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_969.xx)).xyxxxyxxyxxyyyxx)).sa8)).xyyyyyxxxyyyxxxy, ((VECTOR(int32_t, 2))(0L, 0L)).yxxxyxxyyxxxyyxy))).s8))
            { /* block id: 536 */
                int32_t l_971 = 0x178C6393L;
                VECTOR(int32_t, 8) l_976 = (VECTOR(int32_t, 8))(0x7D08ABDEL, (VECTOR(int32_t, 4))(0x7D08ABDEL, (VECTOR(int32_t, 2))(0x7D08ABDEL, 2L), 2L), 2L, 0x7D08ABDEL, 2L);
                int16_t l_977 = 0x703CL;
                VECTOR(int32_t, 8) l_978 = (VECTOR(int32_t, 8))(0x4CF4BA05L, (VECTOR(int32_t, 4))(0x4CF4BA05L, (VECTOR(int32_t, 2))(0x4CF4BA05L, 0x6D6617F4L), 0x6D6617F4L), 0x6D6617F4L, 0x4CF4BA05L, 0x6D6617F4L);
                VECTOR(int32_t, 8) l_979 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2911C9C0L), 0x2911C9C0L), 0x2911C9C0L, 0L, 0x2911C9C0L);
                VECTOR(int32_t, 8) l_980 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-9L)), (-9L)), (-9L), 5L, (-9L));
                int32_t l_981 = 8L;
                uint8_t l_982 = 0UL;
                VECTOR(int32_t, 4) l_983 = (VECTOR(int32_t, 4))(0x022A9F1BL, (VECTOR(int32_t, 2))(0x022A9F1BL, 2L), 2L);
                uint8_t l_984[7];
                VECTOR(int32_t, 2) l_985 = (VECTOR(int32_t, 2))(0x44B6DEB3L, (-3L));
                int32_t l_986 = 0L;
                uint16_t l_987 = 0x190FL;
                int32_t l_988[6][9] = {{1L,7L,0x377CC54DL,0x3C4E245DL,(-1L),4L,0L,0x377CC54DL,(-1L)},{1L,7L,0x377CC54DL,0x3C4E245DL,(-1L),4L,0L,0x377CC54DL,(-1L)},{1L,7L,0x377CC54DL,0x3C4E245DL,(-1L),4L,0L,0x377CC54DL,(-1L)},{1L,7L,0x377CC54DL,0x3C4E245DL,(-1L),4L,0L,0x377CC54DL,(-1L)},{1L,7L,0x377CC54DL,0x3C4E245DL,(-1L),4L,0L,0x377CC54DL,(-1L)},{1L,7L,0x377CC54DL,0x3C4E245DL,(-1L),4L,0L,0x377CC54DL,(-1L)}};
                VECTOR(int32_t, 2) l_989 = (VECTOR(int32_t, 2))(0x6C9F4362L, 0x6914818DL);
                int16_t l_990 = 0x3D9AL;
                uint16_t l_991 = 0x269FL;
                uint32_t l_992 = 0x93DD7E24L;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_984[i] = 0x8DL;
                for (l_971 = 21; (l_971 > 0); --l_971)
                { /* block id: 539 */
                    int16_t l_974 = 0x719EL;
                    uint32_t l_975 = 0UL;
                    l_969.x = (l_975 = l_974);
                }
                l_971 &= ((VECTOR(int32_t, 16))((-8L), (-1L), ((VECTOR(int32_t, 2))(l_976.s33)), l_977, ((VECTOR(int32_t, 4))(l_978.s2007)), 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x5DABF09EL, 0x6E24BFBFL)).xyxxxyyyxxyyxyxx)).s6d, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(l_979.s5437)).ywxwyzyyxxzxxyyy, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_980.s42532305)).s60)).yyxyxyxy, ((VECTOR(int32_t, 2))(0x43E320C7L, (-8L))).yyxxxyyy))).s2132322426701444, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(l_981, l_982, 1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_983.wzyzwwxwxyzwwwzz)).hi)).s6013527435520362)).sf35e)), ((VECTOR(int32_t, 2))(0x04419704L, 0x0A1B9ED2L)), l_984[0], ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_985.yx)), (-7L), 0x284DCC79L)), 0x28FDEFA4L, 0L)).s3c7f, ((VECTOR(int32_t, 2))((-1L), 0x4D3FA170L)).xyxx))).z, (l_986 , l_987), l_988[0][8], 9L, ((VECTOR(int32_t, 4))(l_989.xxyx)), l_990, 0x3D3CCEE5L, l_991, (-1L), 1L, ((VECTOR(int32_t, 2))(1L)), 1L)))))))).s5a))), l_992, (-1L), ((VECTOR(int32_t, 8))(7L)), 0L, ((VECTOR(int32_t, 2))(1L)), 0x4E1141D6L)).s7e)).yxyyyxxx, ((VECTOR(int32_t, 8))(1L))))).s34)).lo, ((VECTOR(int32_t, 2))(0x25C617B9L)), ((VECTOR(int32_t, 2))(0x26D0F64DL)), 0x40A7BFEAL)).s9;
            }
            else
            { /* block id: 544 */
                int32_t *l_993[5][2];
                int32_t l_995 = (-5L);
                int32_t *l_994 = &l_995;
                uint64_t l_1023 = 0x555288EE866E2CF2L;
                VECTOR(int16_t, 4) l_1024 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L);
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_993[i][j] = (void*)0;
                }
                l_994 = l_993[2][1];
                for (l_995 = 2; (l_995 != (-30)); l_995 = safe_sub_func_int16_t_s_s(l_995, 6))
                { /* block id: 548 */
                    VECTOR(int32_t, 8) l_998 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3FB20736L), 0x3FB20736L), 0x3FB20736L, (-1L), 0x3FB20736L);
                    int8_t l_999 = 1L;
                    int16_t l_1015 = 1L;
                    int32_t l_1016 = 0x7FB71EF3L;
                    uint8_t l_1017 = 248UL;
                    uint32_t l_1020 = 1UL;
                    int i;
                    if ((l_998.s7 = (l_999 = ((VECTOR(int32_t, 16))(l_998.s3022110401212657)).sb)))
                    { /* block id: 551 */
                        VECTOR(uint64_t, 8) l_1000 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
                        int32_t l_1001 = 0x4230840FL;
                        uint16_t l_1002[7];
                        uint8_t l_1003 = 0x97L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1002[i] = 0x16CDL;
                        l_1001 = (l_1000.s0 , (-6L));
                        l_1003 |= (l_1002[4] = 0x6DC1666FL);
                    }
                    else
                    { /* block id: 555 */
                        int32_t l_1005 = 1L;
                        int32_t *l_1004 = &l_1005;
                        uint8_t l_1006[3][5][5] = {{{5UL,5UL,250UL,247UL,0x7CL},{5UL,5UL,250UL,247UL,0x7CL},{5UL,5UL,250UL,247UL,0x7CL},{5UL,5UL,250UL,247UL,0x7CL},{5UL,5UL,250UL,247UL,0x7CL}},{{5UL,5UL,250UL,247UL,0x7CL},{5UL,5UL,250UL,247UL,0x7CL},{5UL,5UL,250UL,247UL,0x7CL},{5UL,5UL,250UL,247UL,0x7CL},{5UL,5UL,250UL,247UL,0x7CL}},{{5UL,5UL,250UL,247UL,0x7CL},{5UL,5UL,250UL,247UL,0x7CL},{5UL,5UL,250UL,247UL,0x7CL},{5UL,5UL,250UL,247UL,0x7CL},{5UL,5UL,250UL,247UL,0x7CL}}};
                        uint32_t l_1009[6][9] = {{4294967295UL,0x8C752B56L,1UL,0x8C752B56L,4294967295UL,4294967295UL,0x8C752B56L,1UL,0x8C752B56L},{4294967295UL,0x8C752B56L,1UL,0x8C752B56L,4294967295UL,4294967295UL,0x8C752B56L,1UL,0x8C752B56L},{4294967295UL,0x8C752B56L,1UL,0x8C752B56L,4294967295UL,4294967295UL,0x8C752B56L,1UL,0x8C752B56L},{4294967295UL,0x8C752B56L,1UL,0x8C752B56L,4294967295UL,4294967295UL,0x8C752B56L,1UL,0x8C752B56L},{4294967295UL,0x8C752B56L,1UL,0x8C752B56L,4294967295UL,4294967295UL,0x8C752B56L,1UL,0x8C752B56L},{4294967295UL,0x8C752B56L,1UL,0x8C752B56L,4294967295UL,4294967295UL,0x8C752B56L,1UL,0x8C752B56L}};
                        uint8_t *l_1011 = (void*)0;
                        uint8_t **l_1010 = &l_1011;
                        uint8_t **l_1012[9][6][4] = {{{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011}},{{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011}},{{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011}},{{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011}},{{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011}},{{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011}},{{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011}},{{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011}},{{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011},{&l_1011,(void*)0,&l_1011,&l_1011}}};
                        int32_t l_1013[5][4][10] = {{{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L}},{{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L}},{{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L}},{{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L}},{{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L},{0x1A30B074L,0x1DB12A4CL,0x50564461L,0x50564461L,0x1DB12A4CL,0x1A30B074L,5L,0x43779A3BL,0x2FDDF2D4L,0x3C401667L}}};
                        int32_t *l_1014[9][5] = {{(void*)0,&l_1005,&l_1005,&l_1005,(void*)0},{(void*)0,&l_1005,&l_1005,&l_1005,(void*)0},{(void*)0,&l_1005,&l_1005,&l_1005,(void*)0},{(void*)0,&l_1005,&l_1005,&l_1005,(void*)0},{(void*)0,&l_1005,&l_1005,&l_1005,(void*)0},{(void*)0,&l_1005,&l_1005,&l_1005,(void*)0},{(void*)0,&l_1005,&l_1005,&l_1005,(void*)0},{(void*)0,&l_1005,&l_1005,&l_1005,(void*)0},{(void*)0,&l_1005,&l_1005,&l_1005,(void*)0}};
                        int i, j, k;
                        l_993[2][1] = l_1004;
                        --l_1006[1][4][0];
                        l_1012[1][3][0] = (l_1010 = (l_1009[3][4] , l_1010));
                        l_993[0][1] = (l_1013[4][1][9] , l_1014[7][2]);
                    }
                    --l_1017;
                    l_1020++;
                }
                l_1024.x = (l_1023 , (l_969.x = (l_968.s2 = 0x66129879L)));
            }
            for (l_968.s4 = 0; (l_968.s4 <= 1); l_968.s4++)
            { /* block id: 571 */
                uint8_t l_1027 = 0x06L;
                l_1027--;
                for (l_1027 = 10; (l_1027 > 37); ++l_1027)
                { /* block id: 575 */
                    int32_t l_1032 = (-1L);
                    for (l_1032 = 0; (l_1032 != 20); ++l_1032)
                    { /* block id: 578 */
                        int64_t l_1035[7] = {0x68EBC9DBE391BC7EL,0x68EBC9DBE391BC7EL,0x68EBC9DBE391BC7EL,0x68EBC9DBE391BC7EL,0x68EBC9DBE391BC7EL,0x68EBC9DBE391BC7EL,0x68EBC9DBE391BC7EL};
                        uint32_t l_1036 = 0xFCA9F619L;
                        uint32_t l_1039[5] = {0UL,0UL,0UL,0UL,0UL};
                        uint32_t *l_1038 = &l_1039[0];
                        uint32_t **l_1037 = &l_1038;
                        uint32_t **l_1040 = &l_1038;
                        int i;
                        l_969.y = l_1035[1];
                        l_969.y = l_1036;
                        l_1040 = l_1037;
                    }
                }
            }
            for (l_970 = 28; (l_970 == 20); --l_970)
            { /* block id: 587 */
                uint64_t l_1043 = 0xE7036C3B729F1833L;
                if (l_1043)
                { /* block id: 588 */
                    int8_t l_1044 = 0x66L;
                    uint32_t l_1045 = 0x4CC31C42L;
                    l_1045 = l_1044;
                    for (l_1045 = 19; (l_1045 <= 11); l_1045--)
                    { /* block id: 592 */
                        VECTOR(uint64_t, 2) l_1048 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL);
                        int32_t l_1049[10][4][6] = {{{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L}},{{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L}},{{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L}},{{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L}},{{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L}},{{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L}},{{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L}},{{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L}},{{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L}},{{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L},{0x67D0379EL,1L,0x79B512D8L,0x36190AB0L,0x41772D3DL,0x0A2E5097L}}};
                        int64_t l_1052 = 0x4E4A300C6F980554L;
                        int64_t *l_1051 = &l_1052;
                        int64_t **l_1050 = &l_1051;
                        int64_t **l_1053 = &l_1051;
                        int64_t **l_1054 = &l_1051;
                        int i, j, k;
                        l_1054 = (((((VECTOR(uint64_t, 2))(l_1048.yy)).odd , 0x4B6C7DA9L) , (l_967 = l_1049[0][3][0])) , (l_1053 = l_1050));
                    }
                }
                else
                { /* block id: 597 */
                    int64_t l_1055[6][7][6] = {{{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L}},{{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L}},{{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L}},{{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L}},{{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L}},{{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L},{3L,0L,(-5L),(-1L),(-5L),0L}}};
                    int i, j, k;
                    if (l_1055[1][2][1])
                    { /* block id: 598 */
                        uint64_t **l_1056 = (void*)0;
                        uint64_t l_1059 = 1UL;
                        uint64_t *l_1058 = &l_1059;
                        uint64_t **l_1057 = &l_1058;
                        uint8_t l_1060 = 0UL;
                        int32_t l_1064 = 2L;
                        int32_t *l_1063 = &l_1064;
                        int32_t *l_1065[10] = {&l_1064,&l_1064,&l_1064,&l_1064,&l_1064,&l_1064,&l_1064,&l_1064,&l_1064,&l_1064};
                        uint64_t l_1066 = 0x243CE68B41FCF841L;
                        int i;
                        l_1057 = l_1056;
                        ++l_1060;
                        l_1065[4] = l_1063;
                        l_969.x |= l_1066;
                    }
                    else
                    { /* block id: 603 */
                        uint32_t l_1067 = 1UL;
                        uint64_t l_1068[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1068[i] = 0UL;
                        l_968.s2 &= l_1067;
                        l_968.s7 = l_1068[0];
                    }
                }
                for (l_1043 = (-7); (l_1043 <= 31); l_1043 = safe_add_func_int16_t_s_s(l_1043, 5))
                { /* block id: 610 */
                    uint16_t l_1071[7][10][3] = {{{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L}},{{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L}},{{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L}},{{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L}},{{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L}},{{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L}},{{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L},{65535UL,65535UL,0x4611L}}};
                    int i, j, k;
                    l_969.x = l_1071[0][1][2];
                    for (l_1071[1][9][2] = 3; (l_1071[1][9][2] != 29); l_1071[1][9][2] = safe_add_func_uint64_t_u_u(l_1071[1][9][2], 5))
                    { /* block id: 614 */
                        int32_t *l_1074 = (void*)0;
                        int32_t l_1076 = 3L;
                        int32_t *l_1075 = &l_1076;
                        uint32_t l_1077 = 0x3C587EB8L;
                        l_1075 = l_1074;
                        l_968.s6 |= l_1077;
                    }
                }
            }
            for (l_968.s2 = 0; (l_968.s2 == 10); l_968.s2 = safe_add_func_int16_t_s_s(l_968.s2, 3))
            { /* block id: 622 */
                VECTOR(int32_t, 16) l_1080 = (VECTOR(int32_t, 16))(0x56324050L, (VECTOR(int32_t, 4))(0x56324050L, (VECTOR(int32_t, 2))(0x56324050L, 0x7A8E52CEL), 0x7A8E52CEL), 0x7A8E52CEL, 0x56324050L, 0x7A8E52CEL, (VECTOR(int32_t, 2))(0x56324050L, 0x7A8E52CEL), (VECTOR(int32_t, 2))(0x56324050L, 0x7A8E52CEL), 0x56324050L, 0x7A8E52CEL, 0x56324050L, 0x7A8E52CEL);
                int i;
                for (l_1080.s7 = 0; (l_1080.s7 >= (-19)); l_1080.s7 = safe_sub_func_int16_t_s_s(l_1080.s7, 5))
                { /* block id: 625 */
                    int32_t l_1083 = (-6L);
                    VECTOR(int16_t, 16) l_1084 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-9L)), (-9L)), (-9L), 1L, (-9L), (VECTOR(int16_t, 2))(1L, (-9L)), (VECTOR(int16_t, 2))(1L, (-9L)), 1L, (-9L), 1L, (-9L));
                    VECTOR(int32_t, 2) l_1085 = (VECTOR(int32_t, 2))(0x439E28A1L, 0x70F9B9A8L);
                    VECTOR(int32_t, 2) l_1086 = (VECTOR(int32_t, 2))(2L, 7L);
                    int8_t l_1087 = (-9L);
                    uint8_t l_1088 = 0x07L;
                    int32_t l_1089 = 0x424BE85BL;
                    int64_t l_1090 = 1L;
                    int64_t l_1091 = 0x0219E5A7ADB0F650L;
                    int32_t l_1092 = 0x5DFDF42BL;
                    int32_t l_1093 = 0x71427B9AL;
                    int8_t l_1107 = 0x66L;
                    int i;
                    l_969.x |= l_1083;
                    if ((((VECTOR(int16_t, 2))(l_1084.s8f)).hi , (l_1089 = ((l_1091 = ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1085.yx)), 8L, 0x22C1EFF0L)).wzzyywzzyzwywyzy, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(l_1086.yyxxxyxx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((l_1086.x = l_1087), 6L, (-9L), 0x057ACD9FL, (-1L), l_1088, 0x553FE407L, 0x134F1772L)).lo)).wywzwxwz))).s42, ((VECTOR(int32_t, 8))((-1L), (l_1089 , 0x2CB7143AL), 0x40CEC8CAL, l_1090, (-8L), 0x6B2FDF90L, 0x6BA9C4EFL, 1L)).s55))).xxyyxyyxxxxxyyxx))).s3) , (l_1092 , l_1093)))))
                    { /* block id: 630 */
                        uint16_t l_1094 = 65535UL;
                        int32_t *l_1095 = (void*)0;
                        int32_t l_1097 = 0x765B2C75L;
                        int32_t *l_1096 = &l_1097;
                        int32_t *l_1098[6][2][4] = {{{&l_1097,&l_1097,&l_1097,&l_1097},{&l_1097,&l_1097,&l_1097,&l_1097}},{{&l_1097,&l_1097,&l_1097,&l_1097},{&l_1097,&l_1097,&l_1097,&l_1097}},{{&l_1097,&l_1097,&l_1097,&l_1097},{&l_1097,&l_1097,&l_1097,&l_1097}},{{&l_1097,&l_1097,&l_1097,&l_1097},{&l_1097,&l_1097,&l_1097,&l_1097}},{{&l_1097,&l_1097,&l_1097,&l_1097},{&l_1097,&l_1097,&l_1097,&l_1097}},{{&l_1097,&l_1097,&l_1097,&l_1097},{&l_1097,&l_1097,&l_1097,&l_1097}}};
                        uint16_t l_1099[9] = {65527UL,0x1238L,65527UL,65527UL,0x1238L,65527UL,65527UL,0x1238L,65527UL};
                        int32_t *l_1102 = (void*)0;
                        int32_t *l_1103 = &l_1097;
                        int i, j, k;
                        l_969.y = l_1094;
                        l_1098[1][1][1] = (l_1096 = l_1095);
                        ++l_1099[3];
                        l_1103 = l_1102;
                    }
                    else
                    { /* block id: 636 */
                        uint32_t l_1104 = 0x68743312L;
                        l_1104--;
                    }
                    l_969.x = (l_1092 = (l_1107 , 4L));
                }
                for (l_1080.s9 = 0; (l_1080.s9 < 13); ++l_1080.s9)
                { /* block id: 644 */
                    int32_t l_1111[3];
                    int32_t *l_1110 = &l_1111[1];
                    int32_t *l_1112 = &l_1111[1];
                    int32_t *l_1113[1][10] = {{&l_1111[1],&l_1111[2],&l_1111[1],&l_1111[1],&l_1111[2],&l_1111[1],&l_1111[1],&l_1111[2],&l_1111[1],&l_1111[1]}};
                    int32_t *l_1114[6][7][6] = {{{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]}},{{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]}},{{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]}},{{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]}},{{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]}},{{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]},{&l_1111[0],&l_1111[2],&l_1111[1],&l_1111[0],&l_1111[1],&l_1111[0]}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1111[i] = 0x4269292CL;
                    l_1112 = l_1110;
                    l_1114[0][5][0] = l_1113[0][4];
                    for (l_1111[0] = (-15); (l_1111[0] != 25); l_1111[0]++)
                    { /* block id: 649 */
                        uint64_t l_1117 = 0xE52A05B85BB5C9DFL;
                        VECTOR(uint32_t, 16) l_1120 = (VECTOR(uint32_t, 16))(0xCF8A3162L, (VECTOR(uint32_t, 4))(0xCF8A3162L, (VECTOR(uint32_t, 2))(0xCF8A3162L, 4294967295UL), 4294967295UL), 4294967295UL, 0xCF8A3162L, 4294967295UL, (VECTOR(uint32_t, 2))(0xCF8A3162L, 4294967295UL), (VECTOR(uint32_t, 2))(0xCF8A3162L, 4294967295UL), 0xCF8A3162L, 4294967295UL, 0xCF8A3162L, 4294967295UL);
                        VECTOR(uint32_t, 8) l_1121 = (VECTOR(uint32_t, 8))(0xE494A4EAL, (VECTOR(uint32_t, 4))(0xE494A4EAL, (VECTOR(uint32_t, 2))(0xE494A4EAL, 6UL), 6UL), 6UL, 0xE494A4EAL, 6UL);
                        VECTOR(uint32_t, 8) l_1122 = (VECTOR(uint32_t, 8))(0xC4EF8F3FL, (VECTOR(uint32_t, 4))(0xC4EF8F3FL, (VECTOR(uint32_t, 2))(0xC4EF8F3FL, 4294967295UL), 4294967295UL), 4294967295UL, 0xC4EF8F3FL, 4294967295UL);
                        uint32_t l_1123 = 4294967295UL;
                        uint32_t l_1124 = 0x0548A449L;
                        int8_t l_1125 = 1L;
                        int32_t l_1126 = 1L;
                        VECTOR(uint32_t, 16) l_1127 = (VECTOR(uint32_t, 16))(0x00D411A8L, (VECTOR(uint32_t, 4))(0x00D411A8L, (VECTOR(uint32_t, 2))(0x00D411A8L, 0xCEAC4B35L), 0xCEAC4B35L), 0xCEAC4B35L, 0x00D411A8L, 0xCEAC4B35L, (VECTOR(uint32_t, 2))(0x00D411A8L, 0xCEAC4B35L), (VECTOR(uint32_t, 2))(0x00D411A8L, 0xCEAC4B35L), 0x00D411A8L, 0xCEAC4B35L, 0x00D411A8L, 0xCEAC4B35L);
                        VECTOR(uint32_t, 8) l_1128 = (VECTOR(uint32_t, 8))(0x42EBF84CL, (VECTOR(uint32_t, 4))(0x42EBF84CL, (VECTOR(uint32_t, 2))(0x42EBF84CL, 0xA8A03469L), 0xA8A03469L), 0xA8A03469L, 0x42EBF84CL, 0xA8A03469L);
                        int32_t l_1129 = 0L;
                        int i;
                        ++l_1117;
                        l_1129 = (((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(4294967295UL, 0x077BD0DBL, 4UL, 0xAFFC20B3L)))).xxwxzzzy, ((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_1120.sd17cb50c)).even)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_1121.s47)).xyxy)))))).s1244633230516511, ((VECTOR(uint32_t, 8))(l_1122.s32741635)).s1474676473277573, ((VECTOR(uint32_t, 8))(0xD63A7A0FL, 0x67524C4AL, l_1123, 4294967295UL, ((VECTOR(uint32_t, 4))((l_1124 , (l_1126 = l_1125)), ((VECTOR(uint32_t, 2))(l_1127.sc4)), 4294967290UL)))).s3456641403564417))).hi, ((VECTOR(uint32_t, 8))(l_1128.s10410741))))).s2 , 2L);
                    }
                }
                for (l_1080.s6 = 0; (l_1080.s6 != 15); l_1080.s6++)
                { /* block id: 657 */
                    uint16_t l_1132[10] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
                    uint64_t l_1133 = 0UL;
                    uint8_t l_1134 = 249UL;
                    int32_t l_1135 = 5L;
                    int i;
                    l_969.y = l_1132[3];
                    l_969.y &= l_1133;
                    l_969.x = l_1134;
                    l_969.x = l_1135;
                }
            }
        }
        else
        { /* block id: 664 */
            uint8_t l_1136 = 0x7FL;
            VECTOR(uint16_t, 4) l_1139 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 6UL), 6UL);
            int32_t l_1140 = 2L;
            uint32_t l_1141 = 0x622C3D8CL;
            uint64_t l_1142 = 0x406EDDC7466A6351L;
            uint64_t l_1143 = 0x3EF5FB20E5548AC0L;
            int i;
            --l_1136;
            l_1143 = ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(0x04D2L, (-1L))).xyxx, ((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(l_1139.zwxz)).zyyzyxwzwzxzzxyw, (uint16_t)((l_1141 = l_1140) , l_1142)))).se5f8))).w;
        }
        l_1148 = ((((VECTOR(int64_t, 16))(0x1FDE40E9EA2328BAL, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(l_1144.s07)).yxxyyxxxxyxxxxxy, ((VECTOR(int64_t, 4))(l_1145.xyxx)).yzzzwzyxzxzxzyxx))).s13)).yxyx)), l_1146, 1L, ((VECTOR(int64_t, 8))(l_1147.s56066125)), 0x7E2F72B853A9BAF2L)).s6 , 1L) , l_1148);
        unsigned int result = 0;
        result += l_967;
        result += l_1144.s7;
        result += l_1144.s6;
        result += l_1144.s5;
        result += l_1144.s4;
        result += l_1144.s3;
        result += l_1144.s2;
        result += l_1144.s1;
        result += l_1144.s0;
        result += l_1145.y;
        result += l_1145.x;
        result += l_1146;
        result += l_1147.s7;
        result += l_1147.s6;
        result += l_1147.s5;
        result += l_1147.s4;
        result += l_1147.s3;
        result += l_1147.s2;
        result += l_1147.s1;
        result += l_1147.s0;
        result += l_1149;
        atomic_add(&p_2081->g_special_values[8 * get_linear_group_id() + 2], result);
    }
    else
    { /* block id: 670 */
        (1 + 1);
    }
    p_2081->g_1151 = ((*p_2081->g_205) = l_824[7]);
    return l_1152;
}


/* ------------------------------------------ */
/* 
 * reads : p_2081->g_2 p_2081->g_comm_values p_2081->g_205 p_2081->g_213 p_2081->g_206 p_2081->g_210 p_2081->g_67 p_2081->g_246 p_2081->g_249 p_2081->g_253 p_2081->g_233 p_2081->g_257 p_2081->g_265 p_2081->g_277 p_2081->g_278 p_2081->g_238 p_2081->g_283 p_2081->g_299 p_2081->g_309 p_2081->g_310 p_2081->g_329 p_2081->g_254 p_2081->g_324 p_2081->g_349 p_2081->g_363 p_2081->g_366 p_2081->g_371
 * writes: p_2081->g_2 p_2081->l_comm_values p_2081->g_67 p_2081->g_206 p_2081->g_213 p_2081->g_210 p_2081->g_233 p_2081->g_249 p_2081->g_257 p_2081->g_265 p_2081->g_283 p_2081->g_299 p_2081->g_329 p_2081->g_336 p_2081->g_349 p_2081->g_294 p_2081->g_359 p_2081->g_238 p_2081->g_289
 */
uint32_t  func_48(int32_t * p_49, int32_t * p_50, uint64_t  p_51, struct S0 * p_2081)
{ /* block id: 23 */
    uint32_t l_198[4][8] = {{4294967293UL,1UL,0x74A0215CL,1UL,4294967293UL,4294967293UL,1UL,0x74A0215CL},{4294967293UL,1UL,0x74A0215CL,1UL,4294967293UL,4294967293UL,1UL,0x74A0215CL},{4294967293UL,1UL,0x74A0215CL,1UL,4294967293UL,4294967293UL,1UL,0x74A0215CL},{4294967293UL,1UL,0x74A0215CL,1UL,4294967293UL,4294967293UL,1UL,0x74A0215CL}};
    uint16_t l_338[5];
    VECTOR(uint8_t, 16) l_360 = (VECTOR(uint8_t, 16))(0xF7L, (VECTOR(uint8_t, 4))(0xF7L, (VECTOR(uint8_t, 2))(0xF7L, 2UL), 2UL), 2UL, 0xF7L, 2UL, (VECTOR(uint8_t, 2))(0xF7L, 2UL), (VECTOR(uint8_t, 2))(0xF7L, 2UL), 0xF7L, 2UL, 0xF7L, 2UL);
    VECTOR(int8_t, 4) l_361 = (VECTOR(int8_t, 4))(0x33L, (VECTOR(int8_t, 2))(0x33L, 0x2CL), 0x2CL);
    VECTOR(int8_t, 4) l_362 = (VECTOR(int8_t, 4))(0x12L, (VECTOR(int8_t, 2))(0x12L, (-1L)), (-1L));
    VECTOR(int8_t, 16) l_364 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int8_t, 2))(1L, 0L), (VECTOR(int8_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
    VECTOR(int8_t, 8) l_365 = (VECTOR(int8_t, 8))(0x7FL, (VECTOR(int8_t, 4))(0x7FL, (VECTOR(int8_t, 2))(0x7FL, 5L), 5L), 5L, 0x7FL, 5L);
    uint8_t *l_372 = (void*)0;
    uint8_t *l_373 = (void*)0;
    int32_t l_374[6] = {0x01897BB5L,0x01897BB5L,0x01897BB5L,0x01897BB5L,0x01897BB5L,0x01897BB5L};
    uint8_t *l_375 = (void*)0;
    uint8_t *l_376 = (void*)0;
    uint8_t *l_377 = (void*)0;
    uint8_t *l_378 = (void*)0;
    uint8_t *l_379 = (void*)0;
    uint8_t *l_380 = (void*)0;
    uint8_t *l_381 = (void*)0;
    uint8_t *l_382 = (void*)0;
    uint8_t *l_383 = (void*)0;
    uint8_t *l_384[8];
    uint16_t *l_387 = (void*)0;
    uint16_t *l_388 = &p_2081->g_238[2];
    int32_t l_393 = 0x58FB8444L;
    int16_t *l_394 = (void*)0;
    int16_t *l_395 = &p_2081->g_289[7];
    int i, j;
    for (i = 0; i < 5; i++)
        l_338[i] = 0x0AC4L;
    for (i = 0; i < 8; i++)
        l_384[i] = (void*)0;
    for (p_2081->g_2 = (-25); (p_2081->g_2 == (-30)); p_2081->g_2 = safe_sub_func_int32_t_s_s(p_2081->g_2, 8))
    { /* block id: 26 */
        int64_t *l_63 = (void*)0;
        int32_t *l_199 = &p_2081->g_2;
        VECTOR(int16_t, 16) l_358 = (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x2A41L), 0x2A41L), 0x2A41L, (-6L), 0x2A41L, (VECTOR(int16_t, 2))((-6L), 0x2A41L), (VECTOR(int16_t, 2))((-6L), 0x2A41L), (-6L), 0x2A41L, (-6L), 0x2A41L);
        int i;
        if (func_55(func_61((p_2081->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2081->tid, 3))] = (~p_51)), p_2081), (l_198[3][5] , p_2081->g_2), l_199, (safe_mul_func_uint16_t_u_u((FAKE_DIVERGE(p_2081->group_1_offset, get_group_id(1), 10) != (1L > p_51)), (0x5ADF492DL | ((((0xBA42434B2B7A4138L && p_2081->g_2) , p_51) , 0x1C30B81585BA16F0L) && p_2081->g_2)))), p_2081->g_2, p_2081))
        { /* block id: 172 */
            uint64_t **l_335 = (void*)0;
            int32_t **l_339 = &l_199;
            p_2081->g_336 = l_335;
            (*l_339) = ((l_338[4] , (*l_199)) , l_199);
            (*l_339) = (*p_2081->g_309);
        }
        else
        { /* block id: 176 */
            uint32_t **l_348 = &p_2081->g_254;
            int64_t *l_350[7][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_351 = (-1L);
            int32_t *l_353 = &p_2081->g_210;
            int32_t *l_354 = (void*)0;
            int32_t *l_355 = &p_2081->g_294;
            int i, j;
            (*l_355) = (p_2081->g_246.x || (1L ^ ((safe_mod_func_uint16_t_u_u(p_2081->g_299, (safe_lshift_func_int16_t_s_u(1L, ((safe_add_func_uint16_t_u_u(((((*l_353) |= ((safe_add_func_int32_t_s_s((((0x34060D448F3110DDL && (l_351 |= (0x2EC177AAECDD5121L < (p_2081->g_349 = (l_348 != &p_2081->g_254))))) ^ (~(safe_unary_minus_func_uint8_t_u((p_51 ^ 0L))))) || p_2081->g_278.y), 0x3F166873L)) | (*p_2081->g_254))) ^ 2UL) , GROUP_DIVERGE(0, 1)), p_51)) , p_2081->g_324))))) != 0xC3C018DCL)));
            l_358.s0 = (l_338[4] | (safe_rshift_func_int16_t_s_s((p_51 || (p_2081->g_349 , ((VECTOR(int32_t, 4))(8L, (*p_49), 2L, 1L)).x)), 8)));
            if ((*p_49))
                break;
        }
        return p_51;
    }
    (*p_49) &= ((p_2081->g_359[0] = 18446744073709551615UL) ^ (((p_51 & ((VECTOR(uint8_t, 8))(l_360.s48c472a4)).s2) | ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 8))(7L, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_361.yy)).xyxxxyyx)).s35, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(l_362.zy)).xyxx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(p_2081->g_363.xyyx)).lo, ((VECTOR(int8_t, 4))(l_364.s93ad)).hi))))).xxxx))))).lo)).yxxyxxyx, ((VECTOR(int8_t, 4))(l_365.s5224)).xzzwwzyx))).s61, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_2081->g_366.sdf)).xyyy)).lo, (int8_t)(safe_lshift_func_int16_t_s_u(((*l_395) = (safe_sub_func_uint16_t_u_u(((*l_388) &= ((p_51 ^ (((VECTOR(int16_t, 2))(p_2081->g_371.yy)).hi >= ((p_51 <= (--p_2081->g_233.y)) , ((~65526UL) & l_198[2][1])))) < 0x3C661F5DA5AEA254L)), (((((((*p_2081->g_254) = (p_51 != (safe_lshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((-1L), GROUP_DIVERGE(0, 1))) && l_365.s7), l_374[2])))) || l_393) , 0UL) < p_51) == l_362.w) > l_362.z)))), p_51)))))))), ((VECTOR(int8_t, 2))(0L))))).xyyyxxyxyyyxxyyy)).se0, ((VECTOR(int8_t, 2))(0x20L))))).xxxxyyxy)).s70, ((VECTOR(int8_t, 2))(0x7EL))))), ((VECTOR(int8_t, 2))(0L))))), (-9L), ((VECTOR(int8_t, 2))((-6L))), 0x12L, (-1L))).s07, (int8_t)p_51, (int8_t)p_51))).lo) & l_360.sc));
    return l_362.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_2081->g_205 p_2081->g_213 p_2081->g_comm_values p_2081->g_2 p_2081->g_206 p_2081->g_210 p_2081->g_67 p_2081->g_246 p_2081->g_249 p_2081->g_253 p_2081->g_233 p_2081->g_257 p_2081->g_265 p_2081->g_277 p_2081->g_278 p_2081->g_238 p_2081->g_283 p_2081->g_299 p_2081->g_309 p_2081->g_310 p_2081->g_329
 * writes: p_2081->g_206 p_2081->g_213 p_2081->g_210 p_2081->g_233 p_2081->g_249 p_2081->g_257 p_2081->g_265 p_2081->g_283 p_2081->g_299 p_2081->g_329
 */
int32_t  func_55(int64_t  p_56, uint64_t  p_57, int32_t * p_58, uint32_t  p_59, uint8_t  p_60, struct S0 * p_2081)
{ /* block id: 100 */
    int64_t l_216 = 0x62EFF3B490FC01C5L;
    uint16_t *l_259 = &p_2081->g_238[2];
    uint16_t **l_258[9][4] = {{&l_259,&l_259,&l_259,&l_259},{&l_259,&l_259,&l_259,&l_259},{&l_259,&l_259,&l_259,&l_259},{&l_259,&l_259,&l_259,&l_259},{&l_259,&l_259,&l_259,&l_259},{&l_259,&l_259,&l_259,&l_259},{&l_259,&l_259,&l_259,&l_259},{&l_259,&l_259,&l_259,&l_259},{&l_259,&l_259,&l_259,&l_259}};
    int64_t l_281 = 8L;
    int32_t l_284 = (-10L);
    int32_t l_321 = 1L;
    int32_t l_325 = 0x5F6DF15AL;
    int32_t l_327 = (-1L);
    int32_t l_334 = (-5L);
    int i, j;
    for (p_57 = 6; (p_57 <= 27); p_57++)
    { /* block id: 103 */
        int32_t **l_204 = (void*)0;
        (*p_2081->g_205) = &p_2081->g_2;
    }
    for (p_59 = 16; (p_59 <= 58); p_59 = safe_add_func_int32_t_s_s(p_59, 5))
    { /* block id: 108 */
        int32_t *l_209 = &p_2081->g_210;
        int32_t *l_211 = &p_2081->g_210;
        int32_t *l_212[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j;
        --p_2081->g_213[0][1][5];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_2081->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[(safe_mod_func_uint32_t_u_u((p_2081->g_comm_values[p_2081->tid] ^ ((*l_211) = 0x2464E92AL)), 10))][(safe_mod_func_uint32_t_u_u(p_2081->tid, 3))]));
        if ((*p_58))
            continue;
    }
    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-9L), 0x102855B8L)))).hi)
    { /* block id: 116 */
        return l_216;
    }
    else
    { /* block id: 118 */
        VECTOR(int16_t, 16) l_218 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-4L)), (-4L)), (-4L), (-1L), (-4L), (VECTOR(int16_t, 2))((-1L), (-4L)), (VECTOR(int16_t, 2))((-1L), (-4L)), (-1L), (-4L), (-1L), (-4L));
        int32_t l_240 = 0x1AC1A0D1L;
        uint16_t l_241 = 0x181AL;
        uint32_t *l_251 = &p_2081->g_213[0][1][5];
        int64_t *l_276 = &l_216;
        int32_t l_298 = 0L;
        int32_t l_316 = (-10L);
        int32_t l_317 = 0x2ABF6E8AL;
        int32_t l_318 = 0x752FAC16L;
        int32_t l_319[6] = {(-7L),0L,(-7L),(-7L),0L,(-7L)};
        int i;
        if ((0xF8A4L == (safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 8))(l_218.s1ab18a52)).s1))))
        { /* block id: 119 */
            uint32_t *l_221 = &p_2081->g_213[0][1][5];
            uint8_t *l_232[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_236 = 0x4ED354C9L;
            uint16_t *l_237[9][2][7] = {{{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]},{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]}},{{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]},{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]}},{{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]},{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]}},{{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]},{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]}},{{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]},{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]}},{{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]},{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]}},{{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]},{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]}},{{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]},{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]}},{{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]},{(void*)0,&p_2081->g_238[3],&p_2081->g_238[2],&p_2081->g_238[2],&p_2081->g_238[2],(void*)0,&p_2081->g_238[2]}}};
            int32_t l_239[3];
            uint8_t **l_250 = &p_2081->g_249;
            uint8_t *l_252 = (void*)0;
            uint16_t l_255 = 0x14B4L;
            uint64_t *l_256 = &p_2081->g_257;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_239[i] = 0x32C7C98FL;
            l_241 &= ((safe_div_func_int16_t_s_s(((((*l_221) = p_2081->g_2) , (safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((l_240 ^= (l_239[0] |= (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(0x66AA0FA1L, ((safe_div_func_uint32_t_u_u(((p_2081->g_233.x = p_56) <= ((safe_add_func_int8_t_s_s(0x41L, (l_236 , (18446744073709551615UL | FAKE_DIVERGE(p_2081->global_0_offset, get_global_id(0), 10))))) | (((((*p_2081->g_206) & ((p_2081->g_comm_values[p_2081->tid] , &p_2081->g_206) != &p_58)) <= p_2081->g_213[0][5][0]) < l_236) ^ p_2081->g_210))), 1L)) | l_236))), p_56)))), p_59)), l_236))) <= 1UL), l_218.sa)) == p_2081->g_67);
            (*p_2081->g_205) = (((*l_256) ^= (((safe_lshift_func_int8_t_s_u((GROUP_DIVERGE(1, 1) , ((((((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 16))(l_216, (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_2081->g_246.yyxyxyxxxyyyxxxx)).s39d5)).w, l_241)), (((safe_rshift_func_uint8_t_u_s(((l_218.s6 , ((*l_250) = p_2081->g_249)) != ((&p_2081->g_213[0][7][2] != (l_251 = &p_2081->g_213[1][9][4])) , l_252)), 2)) && (((p_2081->g_253[4][8][2] == &l_221) , p_58) != (void*)0)) , 5UL), ((VECTOR(uint32_t, 4))(0xA89F3676L)), 0x6BECDB6FL, ((VECTOR(uint32_t, 4))(0xE3335B6DL)), 0x2A97E7C0L, 0x8D422A02L, 0UL, 0UL)).odd, ((VECTOR(uint32_t, 8))(0x551FEE5FL))))).s7 > l_255) > 0x5B230814L) && l_216) || p_57)), p_2081->g_233.x)) == p_57) >= l_216)) , (void*)0);
        }
        else
        { /* block id: 129 */
            uint16_t ***l_260 = &l_258[3][3];
            VECTOR(uint8_t, 16) l_270 = (VECTOR(uint8_t, 16))(0xB8L, (VECTOR(uint8_t, 4))(0xB8L, (VECTOR(uint8_t, 2))(0xB8L, 255UL), 255UL), 255UL, 0xB8L, 255UL, (VECTOR(uint8_t, 2))(0xB8L, 255UL), (VECTOR(uint8_t, 2))(0xB8L, 255UL), 0xB8L, 255UL, 0xB8L, 255UL);
            int64_t *l_280 = &l_216;
            int32_t l_297 = 0x78EDB4FBL;
            int32_t l_320 = 0x4E6C2287L;
            int32_t l_323 = 5L;
            int i;
            (*l_260) = l_258[6][0];
            for (l_240 = 0; (l_240 <= 16); l_240 = safe_add_func_uint16_t_u_u(l_240, 6))
            { /* block id: 133 */
                uint8_t *l_266 = (void*)0;
                uint8_t *l_267 = (void*)0;
                uint8_t *l_268 = (void*)0;
                uint8_t *l_269 = (void*)0;
                int32_t l_271 = 0x41B61811L;
                int64_t *l_272 = (void*)0;
                int64_t **l_273 = (void*)0;
                int64_t **l_274 = (void*)0;
                int64_t **l_275 = &l_272;
                VECTOR(uint16_t, 8) l_279 = (VECTOR(uint16_t, 8))(0x6FC5L, (VECTOR(uint16_t, 4))(0x6FC5L, (VECTOR(uint16_t, 2))(0x6FC5L, 65526UL), 65526UL), 65526UL, 0x6FC5L, 65526UL);
                int16_t *l_282[9][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                int32_t l_291 = 0x6FEEB153L;
                int32_t l_293 = 0x53943D29L;
                int32_t l_295 = 1L;
                int i, j, k;
                if ((safe_sub_func_uint8_t_u_u((!(p_60 , (p_2081->g_233.y = (p_2081->g_265 &= (p_2081->g_233.y | 0x4DL))))), (p_57 >= (p_60 && (l_284 = (p_2081->g_283 &= (((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(l_270.se175a34f)).s33, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(0x76L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(255UL, 247UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(0x73L, 0UL, (l_271 <= ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))((((*l_275) = l_272) == l_276), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0UL, 2UL)).xxyy)).wywyxxyy)), 2UL, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 4))(p_2081->g_277.s7425)).hi, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0x407BL, ((VECTOR(uint16_t, 8))(p_2081->g_278.yxxxxxxy)).s0, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(l_279.s6271661765174713)).sbfc3, (uint16_t)(((l_276 == (void*)0) , (*l_275)) != l_280)))), p_57, ((VECTOR(uint16_t, 2))(0xF403L)), ((VECTOR(uint16_t, 4))(65532UL)), GROUP_DIVERGE(0, 1), 1UL, 0xCA71L)).s8a)), l_279.s7, l_218.s3, 1UL, 7UL, 0xF3ABL, 0UL)))).s00, ((VECTOR(uint16_t, 2))(0x8782L))))).yxxyyyyx)).odd, (uint16_t)p_56, (uint16_t)p_2081->g_277.s3))), 1UL, 1UL)))).s1, 0xEA96L, 0UL, 1UL)).y | 0x616FL) | l_271)), 0UL, ((VECTOR(uint8_t, 4))(0xA4L)))).hi)), ((VECTOR(uint8_t, 8))(0x65L)), 0UL, 255UL)).sec)), 0x8CL)).odd, ((VECTOR(uint8_t, 2))(0xE6L)))))))).xyyyxyxyyxxyyxxx, ((VECTOR(uint16_t, 16))(4UL)), ((VECTOR(uint16_t, 16))(0x5ACFL))))).s06, ((VECTOR(uint16_t, 2))(0x11A5L))))), 8UL, 0xB676L))))).odd)), 8UL, 0UL)).z <= p_2081->g_238[2]) <= l_281) , 8L))))))))
                { /* block id: 139 */
                    int32_t *l_285 = &l_271;
                    int32_t *l_286 = &p_2081->g_210;
                    int32_t *l_287 = (void*)0;
                    int32_t *l_288[6] = {&p_2081->g_210,&p_2081->g_210,&p_2081->g_210,&p_2081->g_210,&p_2081->g_210,&p_2081->g_210};
                    int i;
                    p_2081->g_299--;
                    if ((atomic_inc(&p_2081->l_atomic_input[0]) == 0))
                    { /* block id: 142 */
                        int16_t l_302 = 1L;
                        uint8_t l_303 = 246UL;
                        int32_t l_306 = (-2L);
                        int64_t l_307 = 0x021AD2A60849B00EL;
                        l_303++;
                        l_307 = (l_306 = 3L);
                        unsigned int result = 0;
                        result += l_302;
                        result += l_303;
                        result += l_306;
                        result += l_307;
                        atomic_add(&p_2081->l_special_values[0], result);
                    }
                    else
                    { /* block id: 146 */
                        (1 + 1);
                    }
                    return (**p_2081->g_205);
                }
                else
                { /* block id: 150 */
                    int32_t *l_308 = &l_297;
                    int32_t l_315 = 0L;
                    int32_t l_322 = (-1L);
                    (*l_308) = ((VECTOR(int32_t, 2))((-1L), 0x362B28E3L)).hi;
                    (*p_2081->g_309) = (*p_2081->g_205);
                    if (l_241)
                    { /* block id: 153 */
                        return (**p_2081->g_309);
                    }
                    else
                    { /* block id: 155 */
                        uint32_t *l_311 = &p_2081->g_213[0][6][1];
                        (*l_308) |= (((void*)0 == &p_2081->g_206) && p_2081->g_310);
                        l_295 = ((void*)0 != l_311);
                    }
                    for (l_241 = 15; (l_241 != 28); ++l_241)
                    { /* block id: 161 */
                        int32_t *l_314[9][2][8] = {{{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294},{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294}},{{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294},{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294}},{{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294},{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294}},{{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294},{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294}},{{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294},{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294}},{{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294},{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294}},{{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294},{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294}},{{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294},{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294}},{{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294},{&l_295,&l_295,&l_284,&p_2081->g_265,&l_240,&l_293,&l_240,&p_2081->g_294}}};
                        int32_t l_328 = 1L;
                        int i, j, k;
                        p_2081->g_329++;
                        (*l_308) ^= (safe_rshift_func_int16_t_s_u((GROUP_DIVERGE(0, 1) <= 0x3DB87A49L), (18446744073709551615UL < 18446744073709551615UL)));
                        if ((*l_308))
                            continue;
                        (*p_2081->g_309) = p_58;
                    }
                }
            }
        }
    }
    return l_334;
}


/* ------------------------------------------ */
/* 
 * reads : p_2081->g_2 p_2081->g_comm_values
 * writes: p_2081->g_67
 */
int64_t  func_61(int64_t  p_62, struct S0 * p_2081)
{ /* block id: 28 */
    uint32_t *l_66 = &p_2081->g_67;
    uint32_t **l_73 = &l_66;
    int32_t l_74 = 0x12CD0AB8L;
    int64_t *l_75[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_2081->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((((*l_66) = (p_62 <= p_62)) && (+(func_68((((*l_73) = l_66) == (void*)0), l_74, l_75[0], p_62, p_2081) , p_62))), 1)), 10))][(safe_mod_func_uint32_t_u_u(p_2081->tid, 3))]));
    if ((atomic_inc(&p_2081->l_atomic_input[6]) == 9))
    { /* block id: 37 */
        VECTOR(uint8_t, 16) l_76 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x51L), 0x51L), 0x51L, 255UL, 0x51L, (VECTOR(uint8_t, 2))(255UL, 0x51L), (VECTOR(uint8_t, 2))(255UL, 0x51L), 255UL, 0x51L, 255UL, 0x51L);
        int32_t l_77 = (-7L);
        uint64_t l_78 = 0xF2EC28784865E5ABL;
        int i;
        l_78 ^= (((VECTOR(uint8_t, 8))(l_76.s04e0bbe0)).s6 , l_77);
        for (l_78 = (-5); (l_78 == 26); l_78++)
        { /* block id: 41 */
            VECTOR(int16_t, 4) l_81 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L));
            int32_t *l_82 = (void*)0;
            int32_t l_83 = 0L;
            int32_t l_84[5] = {(-7L),(-7L),(-7L),(-7L),(-7L)};
            uint32_t l_85 = 0x29B05364L;
            int i;
            l_81.x = (-10L);
            l_82 = (void*)0;
            l_85 &= (l_84[4] = l_83);
            for (l_81.x = 0; (l_81.x > (-4)); l_81.x = safe_sub_func_int64_t_s_s(l_81.x, 8))
            { /* block id: 48 */
                int32_t l_88 = (-4L);
                for (l_88 = 0; (l_88 <= 0); l_88 = safe_add_func_int16_t_s_s(l_88, 7))
                { /* block id: 51 */
                    VECTOR(int32_t, 4) l_91 = (VECTOR(int32_t, 4))(0x5E570971L, (VECTOR(int32_t, 2))(0x5E570971L, 0x7D07A125L), 0x7D07A125L);
                    VECTOR(int32_t, 2) l_92 = (VECTOR(int32_t, 2))(0x375F08A7L, 0x5EE2CBD0L);
                    VECTOR(int8_t, 2) l_93 = (VECTOR(int8_t, 2))(0x76L, 0x16L);
                    VECTOR(uint8_t, 16) l_94 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
                    VECTOR(uint8_t, 16) l_95 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
                    VECTOR(uint8_t, 4) l_96 = (VECTOR(uint8_t, 4))(0xC6L, (VECTOR(uint8_t, 2))(0xC6L, 0xB0L), 0xB0L);
                    VECTOR(uint8_t, 8) l_97 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 4UL), 4UL), 4UL, 0UL, 4UL);
                    VECTOR(uint8_t, 4) l_98 = (VECTOR(uint8_t, 4))(0xCAL, (VECTOR(uint8_t, 2))(0xCAL, 0x7FL), 0x7FL);
                    VECTOR(uint8_t, 8) l_99 = (VECTOR(uint8_t, 8))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0xA8L), 0xA8L), 0xA8L, 2UL, 0xA8L);
                    VECTOR(uint8_t, 4) l_100 = (VECTOR(uint8_t, 4))(0x6AL, (VECTOR(uint8_t, 2))(0x6AL, 255UL), 255UL);
                    VECTOR(uint8_t, 4) l_101 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 252UL), 252UL);
                    VECTOR(uint8_t, 4) l_102 = (VECTOR(uint8_t, 4))(0xD4L, (VECTOR(uint8_t, 2))(0xD4L, 4UL), 4UL);
                    VECTOR(uint8_t, 4) l_103 = (VECTOR(uint8_t, 4))(0xB5L, (VECTOR(uint8_t, 2))(0xB5L, 0UL), 0UL);
                    int64_t l_104 = 0x5ECA68EB2A14D58FL;
                    VECTOR(uint8_t, 2) l_105 = (VECTOR(uint8_t, 2))(1UL, 0xFEL);
                    uint16_t l_106 = 0UL;
                    VECTOR(int16_t, 4) l_107 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L));
                    uint64_t l_108 = 18446744073709551615UL;
                    VECTOR(uint16_t, 4) l_109 = (VECTOR(uint16_t, 4))(0x48AAL, (VECTOR(uint16_t, 2))(0x48AAL, 0x0F33L), 0x0F33L);
                    VECTOR(uint8_t, 4) l_110 = (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0x73L), 0x73L);
                    VECTOR(int8_t, 16) l_111 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int8_t, 2))(1L, 1L), (VECTOR(int8_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                    VECTOR(int16_t, 2) l_112 = (VECTOR(int16_t, 2))(0x2991L, 0x25F0L);
                    VECTOR(uint16_t, 16) l_113 = (VECTOR(uint16_t, 16))(0x0CEAL, (VECTOR(uint16_t, 4))(0x0CEAL, (VECTOR(uint16_t, 2))(0x0CEAL, 0UL), 0UL), 0UL, 0x0CEAL, 0UL, (VECTOR(uint16_t, 2))(0x0CEAL, 0UL), (VECTOR(uint16_t, 2))(0x0CEAL, 0UL), 0x0CEAL, 0UL, 0x0CEAL, 0UL);
                    uint32_t l_114 = 0x6490BB39L;
                    uint64_t l_115 = 0x01CF63C109E68FEEL;
                    VECTOR(int8_t, 16) l_116 = (VECTOR(int8_t, 16))(0x5CL, (VECTOR(int8_t, 4))(0x5CL, (VECTOR(int8_t, 2))(0x5CL, (-8L)), (-8L)), (-8L), 0x5CL, (-8L), (VECTOR(int8_t, 2))(0x5CL, (-8L)), (VECTOR(int8_t, 2))(0x5CL, (-8L)), 0x5CL, (-8L), 0x5CL, (-8L));
                    VECTOR(int8_t, 8) l_117 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x6DL), 0x6DL), 0x6DL, 1L, 0x6DL);
                    uint64_t l_118 = 8UL;
                    int32_t l_119 = 0x29AA74C4L;
                    VECTOR(int8_t, 4) l_120 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x22L), 0x22L);
                    int32_t l_121[9][8][3] = {{{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L}},{{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L}},{{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L}},{{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L}},{{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L}},{{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L}},{{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L}},{{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L}},{{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L},{0x319732ECL,(-1L),4L}}};
                    VECTOR(int8_t, 16) l_122 = (VECTOR(int8_t, 16))(0x76L, (VECTOR(int8_t, 4))(0x76L, (VECTOR(int8_t, 2))(0x76L, (-4L)), (-4L)), (-4L), 0x76L, (-4L), (VECTOR(int8_t, 2))(0x76L, (-4L)), (VECTOR(int8_t, 2))(0x76L, (-4L)), 0x76L, (-4L), 0x76L, (-4L));
                    uint32_t l_123 = 0x50E3CEE9L;
                    int32_t l_124 = 0L;
                    int32_t l_125 = 0x47D366BAL;
                    VECTOR(uint16_t, 2) l_126 = (VECTOR(uint16_t, 2))(8UL, 0x3BF6L);
                    int32_t l_127 = 0x7DF4E952L;
                    uint8_t l_128 = 0xD2L;
                    int32_t *l_129 = (void*)0;
                    int32_t *l_130 = &l_119;
                    int i, j, k;
                    l_82 = ((l_128 = ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 8))(l_91.wzyzwzwz)).hi, ((VECTOR(int32_t, 16))(l_92.yyxxyyyyyyxxxxxy)).s4bc0))).even)).yxxx)).zxxyyyxzwyxxxxzw, ((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 2))(l_93.xx)).yyyy, ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(l_94.s9e)).xyxx, ((VECTOR(uint8_t, 4))(l_95.s944d)), ((VECTOR(uint8_t, 2))(l_96.xz)).xxyy))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_97.s24)).yyxx)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 4))(l_98.xxxz)).wzzywywx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(l_99.s64444310)).s24, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(l_100.zzww)), ((VECTOR(uint8_t, 2))(l_101.zx)).yyyy))), ((VECTOR(uint8_t, 8))(l_102.wyxxxzzx)).odd))).lo))).yyyyyxyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_103.wx)).xyxxxxyxxyxyyyyx)).even))).s5517147635743601)))).hi))).even)).wwzyzywxwxwyyxwy)).lo)).even, ((VECTOR(uint8_t, 4))(l_104, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_105.xy)))), 0x66L))))), l_106, 255UL, 0x03L, 0x43L)).s14)).xyyy)))))), ((VECTOR(int16_t, 2))(l_107.ww)).yyyy))).wwyxzyxwwyxwyzzy)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0x5611L, ((VECTOR(uint16_t, 8))(l_108, ((VECTOR(uint16_t, 4))(l_109.ywzx)), ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x9577L, 0x7E4EL)).yyyxxxxx)).s4400223653756513, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_110.zzww)))).wzwxzywz)).s64)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))((-7L), 0x57L)).yyxy, ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((-4L), ((VECTOR(int8_t, 2))(l_111.s32)), 0L)))).hi, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x57L, l_112.x, 0x2CL, ((((VECTOR(uint16_t, 16))(l_113.s67607bbc662c8753)).s8 , l_114) , l_115), 0x48L, 0x7DL, (-1L), 0x63L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(l_116.s6aab)).xzyyywzz, ((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(l_117.s3241057452646762)).s3d, (int8_t)(l_119 = l_118)))).xxyyyxyx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_120.zx)))).yyxyyxyyyxyyyxyx)).even))), ((VECTOR(int8_t, 16))((-8L), l_121[5][5][2], 4L, 0x0BL, ((VECTOR(int8_t, 4))(l_122.s7e5b)), 0x55L, (l_123 , l_124), (-3L), 1L, 1L, l_125, (-8L), 0L)).even))).s40)), ((VECTOR(int8_t, 2))(0x77L)), ((VECTOR(int8_t, 2))(0x79L)), (-1L), 0x03L)).s40)).yyyx)).hi)).yyxy)).hi))).yyxyxyyyxyxyyxyx)), ((VECTOR(int8_t, 16))((-7L))), ((VECTOR(int8_t, 16))(1L))))).even, ((VECTOR(int8_t, 8))(0x3CL))))).odd))).even, ((VECTOR(int8_t, 2))(1L))))).yyxyxyyy)).s36, ((VECTOR(uint8_t, 2))(5UL))))))), ((VECTOR(uint8_t, 2))(5UL)), GROUP_DIVERGE(2, 1), l_126.x, l_127, 0x9CL, 0x06L, 0xF1L, 246UL, 1UL, 0x41L, ((VECTOR(uint8_t, 2))(1UL)), 0x6BL)), ((VECTOR(uint8_t, 16))(0x75L))))).sd022, ((VECTOR(uint8_t, 4))(0xC7L))))).ywyzxxzwwwxyyywx)), ((VECTOR(uint16_t, 16))(0xDDDDL))))).sef, ((VECTOR(uint16_t, 2))(0UL))))), 0x15CAL)), ((VECTOR(uint16_t, 2))(5UL)), 65532UL, 0x13A5L, 0x20E9L, 65527UL, 0xCA46L)).hi)).s56)).yxxxyyyxyyyyxyxx)))))).s0f02)).x) , (void*)0);
                    l_83 |= 0L;
                    l_130 = (l_129 = (l_82 = l_129));
                }
                for (l_88 = 1; (l_88 == 3); ++l_88)
                { /* block id: 62 */
                    int32_t l_134 = 0x276E4515L;
                    int32_t *l_133[6][5][8] = {{{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134}},{{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134}},{{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134}},{{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134}},{{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134}},{{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134},{&l_134,&l_134,(void*)0,&l_134,&l_134,(void*)0,(void*)0,&l_134}}};
                    int32_t *l_135 = &l_134;
                    uint32_t l_136[3][6][10] = {{{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL}},{{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL}},{{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL},{3UL,0xCE9429D6L,0x29FBB944L,0xCE9429D6L,3UL,0UL,4294967295UL,0x3EB6FFE1L,0UL,0x640BF3ECL}}};
                    uint32_t l_139 = 0UL;
                    VECTOR(int64_t, 4) l_142 = (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 8L), 8L);
                    uint64_t l_143 = 0x8BE2EB9B0FDDEAC1L;
                    int i, j, k;
                    l_135 = l_133[5][1][1];
                    ++l_136[1][1][5];
                    l_139++;
                    l_143 = l_142.w;
                }
                for (l_88 = 23; (l_88 >= 28); l_88 = safe_add_func_uint32_t_u_u(l_88, 7))
                { /* block id: 70 */
                    int32_t l_146 = 0x677F79E9L;
                    int32_t *l_151 = &l_146;
                    int32_t *l_152[4];
                    int32_t *l_153 = &l_146;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_152[i] = &l_146;
                    for (l_146 = (-19); (l_146 < 1); ++l_146)
                    { /* block id: 73 */
                        int32_t l_150 = (-1L);
                        int32_t *l_149[6][2][2] = {{{&l_150,&l_150},{&l_150,&l_150}},{{&l_150,&l_150},{&l_150,&l_150}},{{&l_150,&l_150},{&l_150,&l_150}},{{&l_150,&l_150},{&l_150,&l_150}},{{&l_150,&l_150},{&l_150,&l_150}},{{&l_150,&l_150},{&l_150,&l_150}}};
                        int i, j, k;
                        l_82 = l_149[1][0][1];
                    }
                    l_153 = (l_152[3] = (l_82 = l_151));
                }
                for (l_88 = 0; (l_88 > (-4)); l_88 = safe_sub_func_uint32_t_u_u(l_88, 1))
                { /* block id: 82 */
                    int32_t l_156[6][10][4] = {{{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L}},{{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L}},{{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L}},{{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L}},{{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L}},{{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L},{0L,(-7L),3L,0x7537B090L}}};
                    int i, j, k;
                    for (l_156[4][4][2] = 3; (l_156[4][4][2] < 20); l_156[4][4][2] = safe_add_func_int16_t_s_s(l_156[4][4][2], 6))
                    { /* block id: 85 */
                        uint8_t l_159 = 0x2EL;
                        VECTOR(int64_t, 2) l_162 = (VECTOR(int64_t, 2))(1L, (-1L));
                        int32_t l_163 = (-10L);
                        int8_t l_164 = 1L;
                        VECTOR(int32_t, 8) l_165 = (VECTOR(int32_t, 8))(0x3F034180L, (VECTOR(int32_t, 4))(0x3F034180L, (VECTOR(int32_t, 2))(0x3F034180L, 0x454160E1L), 0x454160E1L), 0x454160E1L, 0x3F034180L, 0x454160E1L);
                        VECTOR(int32_t, 2) l_166 = (VECTOR(int32_t, 2))(0x5C8FD093L, 0x0600BE36L);
                        VECTOR(uint8_t, 8) l_167 = (VECTOR(uint8_t, 8))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0x27L), 0x27L), 0x27L, 4UL, 0x27L);
                        VECTOR(uint8_t, 4) l_168 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x11L), 0x11L);
                        int64_t l_169[8] = {0x0FA55F2295907062L,0x0FA55F2295907062L,0x0FA55F2295907062L,0x0FA55F2295907062L,0x0FA55F2295907062L,0x0FA55F2295907062L,0x0FA55F2295907062L,0x0FA55F2295907062L};
                        uint8_t l_170 = 1UL;
                        VECTOR(uint16_t, 2) l_171 = (VECTOR(uint16_t, 2))(2UL, 0xE669L);
                        VECTOR(int32_t, 16) l_172 = (VECTOR(int32_t, 16))(0x1EC3E9C7L, (VECTOR(int32_t, 4))(0x1EC3E9C7L, (VECTOR(int32_t, 2))(0x1EC3E9C7L, 8L), 8L), 8L, 0x1EC3E9C7L, 8L, (VECTOR(int32_t, 2))(0x1EC3E9C7L, 8L), (VECTOR(int32_t, 2))(0x1EC3E9C7L, 8L), 0x1EC3E9C7L, 8L, 0x1EC3E9C7L, 8L);
                        uint64_t l_173 = 8UL;
                        uint32_t l_174[8] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                        VECTOR(int32_t, 2) l_175 = (VECTOR(int32_t, 2))((-5L), (-5L));
                        VECTOR(int32_t, 8) l_176 = (VECTOR(int32_t, 8))(0x5399AF9CL, (VECTOR(int32_t, 4))(0x5399AF9CL, (VECTOR(int32_t, 2))(0x5399AF9CL, (-4L)), (-4L)), (-4L), 0x5399AF9CL, (-4L));
                        VECTOR(int32_t, 4) l_177 = (VECTOR(int32_t, 4))(0x2192DAD5L, (VECTOR(int32_t, 2))(0x2192DAD5L, (-1L)), (-1L));
                        uint64_t l_178 = 0UL;
                        int16_t l_179[8][10][3] = {{{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)}},{{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)}},{{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)}},{{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)}},{{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)}},{{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)}},{{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)}},{{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)},{0x6DFDL,(-5L),(-5L)}}};
                        VECTOR(int32_t, 8) l_180 = (VECTOR(int32_t, 8))(0x3A0CDF28L, (VECTOR(int32_t, 4))(0x3A0CDF28L, (VECTOR(int32_t, 2))(0x3A0CDF28L, 1L), 1L), 1L, 0x3A0CDF28L, 1L);
                        VECTOR(int32_t, 16) l_181 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5E9098E0L), 0x5E9098E0L), 0x5E9098E0L, (-1L), 0x5E9098E0L, (VECTOR(int32_t, 2))((-1L), 0x5E9098E0L), (VECTOR(int32_t, 2))((-1L), 0x5E9098E0L), (-1L), 0x5E9098E0L, (-1L), 0x5E9098E0L);
                        VECTOR(int32_t, 16) l_182 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x15D045B5L), 0x15D045B5L), 0x15D045B5L, (-2L), 0x15D045B5L, (VECTOR(int32_t, 2))((-2L), 0x15D045B5L), (VECTOR(int32_t, 2))((-2L), 0x15D045B5L), (-2L), 0x15D045B5L, (-2L), 0x15D045B5L);
                        VECTOR(int32_t, 16) l_183 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x57E574C6L), 0x57E574C6L), 0x57E574C6L, (-1L), 0x57E574C6L, (VECTOR(int32_t, 2))((-1L), 0x57E574C6L), (VECTOR(int32_t, 2))((-1L), 0x57E574C6L), (-1L), 0x57E574C6L, (-1L), 0x57E574C6L);
                        int64_t l_184 = 3L;
                        VECTOR(int32_t, 8) l_185 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x6DBBD370L), 0x6DBBD370L), 0x6DBBD370L, 8L, 0x6DBBD370L);
                        VECTOR(int32_t, 8) l_186 = (VECTOR(int32_t, 8))(0x216A1009L, (VECTOR(int32_t, 4))(0x216A1009L, (VECTOR(int32_t, 2))(0x216A1009L, (-1L)), (-1L)), (-1L), 0x216A1009L, (-1L));
                        VECTOR(int32_t, 2) l_187 = (VECTOR(int32_t, 2))(1L, 0x147E1C72L);
                        VECTOR(int32_t, 16) l_188 = (VECTOR(int32_t, 16))(0x2200C977L, (VECTOR(int32_t, 4))(0x2200C977L, (VECTOR(int32_t, 2))(0x2200C977L, 0x395D9890L), 0x395D9890L), 0x395D9890L, 0x2200C977L, 0x395D9890L, (VECTOR(int32_t, 2))(0x2200C977L, 0x395D9890L), (VECTOR(int32_t, 2))(0x2200C977L, 0x395D9890L), 0x2200C977L, 0x395D9890L, 0x2200C977L, 0x395D9890L);
                        VECTOR(int32_t, 16) l_189 = (VECTOR(int32_t, 16))(0x4B3B7618L, (VECTOR(int32_t, 4))(0x4B3B7618L, (VECTOR(int32_t, 2))(0x4B3B7618L, 0L), 0L), 0L, 0x4B3B7618L, 0L, (VECTOR(int32_t, 2))(0x4B3B7618L, 0L), (VECTOR(int32_t, 2))(0x4B3B7618L, 0L), 0x4B3B7618L, 0L, 0x4B3B7618L, 0L);
                        VECTOR(int32_t, 8) l_190 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        VECTOR(int32_t, 2) l_191 = (VECTOR(int32_t, 2))(0x383DFED9L, (-2L));
                        VECTOR(int32_t, 4) l_192 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1C98CFF1L), 0x1C98CFF1L);
                        VECTOR(int32_t, 2) l_193 = (VECTOR(int32_t, 2))(0x6AA5562FL, (-1L));
                        int16_t l_194 = (-1L);
                        uint8_t l_195[8] = {0x50L,0x50L,0x50L,0x50L,0x50L,0x50L,0x50L,0x50L};
                        uint16_t l_196 = 0x4D65L;
                        int32_t l_197 = 0x4CBC2A9CL;
                        int i, j, k;
                        --l_159;
                        l_83 = ((l_164 = (l_163 &= ((VECTOR(int64_t, 4))(l_162.xxxy)).w)) , ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_165.s7122775736510661)).s59, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_166.yxxy)))).even, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(0x2FL, 0x72L)), ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(l_167.s27)).xxxyyyxyyxyxxyyy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_168.ywywyyww)).hi)).even)).xxyxyyxxyxyyyyyx))).s08))).yxyxxxxyyyxxxyxx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x8C96L, 0x12E8L)), (l_169[7] , 0UL), 0UL, 65534UL, l_170, 0x9957L, 65535UL)).s2575373545542440, ((VECTOR(uint16_t, 4))(l_171.yyxx)).ywyxxzzxywwzwyxz))))))).s22)).xxxyxxxxxyxxxyxy))).s1b, ((VECTOR(int32_t, 16))(l_172.sfde07d20d79f787d)).sa6))).xyxxyxyy)).s71, ((VECTOR(int32_t, 8))(0x09B60EE2L, ((VECTOR(int32_t, 4))((-1L), l_173, 7L, (-1L))), l_174[1], 0x3F7CD451L, (-1L))).s25))), ((VECTOR(int32_t, 4))(l_175.yyyx)), (-7L), 8L)).s24, ((VECTOR(int32_t, 16))(l_176.s2604104013407273)).s42, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x39A275D8L, 0x3158159EL)).xyyyyyxxyyxyxyxx)).s9b)))))).xyxyyxyx))).s0);
                        l_189.s3 = (((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(l_177.ww)).xyyyyyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 1L)).yxyyyxyx))))).odd, (int32_t)(l_178 , l_179[5][7][1])))))).even, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_180.s46)).yyyyyyyyxxxyyxxy)).s83)).yyyyxxyy, ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(6L, (-1L))), 0x3FA448F8L, 1L)).ywwwzzyyyxyzxwwx, (int32_t)((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x17998434L, ((VECTOR(int32_t, 2))(1L, (-9L))), 1L)).xzyzxzww)).s13)).even, (-9L), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_181.s9d77)).xywyxyywwwyxzzxx)).s5657, ((VECTOR(int32_t, 16))(l_182.sdb38199b3750e86c)).s6b0a, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_183.sd2)), 0x37AD52E6L, 0x3A9F67F9L)), ((VECTOR(int32_t, 16))(l_184, ((VECTOR(int32_t, 2))(l_185.s21)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_186.s04216377)).s7152434316632403)).sac57)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(0L, 0x1F16EABEL)), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))((-6L), ((VECTOR(int32_t, 2))(0x7A897B05L, 0L)), (-9L))), ((VECTOR(int32_t, 8))(l_187.xyxyyyxy)).even, ((VECTOR(int32_t, 16))(l_188.sb11c7d0813b3eb5e)).s6da3))), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_189.s9c7636394302581f)).s7334, ((VECTOR(int32_t, 16))(l_190.s1703016617630471)).s08fa)))))).lo))), (l_83 &= 0L), 0x6F0A7560L, (-1L), ((VECTOR(int32_t, 4))(l_191.xyyx)).z, (-1L), 2L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_192.ywzzzywyxzzyyzxz)).even)))).sbdc2))).yzzwyyxzwxzzxwxz)).s8de9))).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_193.yxyxyxxyyyxxxxxx)))).s8d))).yyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_194, l_195[0], l_196, 0x4784CF4EL, 0x41D616B5L, ((VECTOR(int32_t, 2))(0x1972E8BEL)), 0x40DDB9D4L)).s66)).xyyx, ((VECTOR(int32_t, 4))(0x466B716DL))))))), 0x2876F923L, ((VECTOR(int32_t, 8))(1L)))).sd1f3, ((VECTOR(int32_t, 4))((-2L))))))))), 0x537F6ACFL, 0x3596953CL)).s43, ((VECTOR(int32_t, 2))(4L))))).yxxyyyyxxyyxxxyx)).s2, (int32_t)0x1F7803BEL))).hi))).s70, ((VECTOR(int32_t, 2))(0x55B06E9FL))))).even , l_197);
                    }
                }
            }
        }
        unsigned int result = 0;
        result += l_76.sf;
        result += l_76.se;
        result += l_76.sd;
        result += l_76.sc;
        result += l_76.sb;
        result += l_76.sa;
        result += l_76.s9;
        result += l_76.s8;
        result += l_76.s7;
        result += l_76.s6;
        result += l_76.s5;
        result += l_76.s4;
        result += l_76.s3;
        result += l_76.s2;
        result += l_76.s1;
        result += l_76.s0;
        result += l_77;
        result += l_78;
        atomic_add(&p_2081->l_special_values[6], result);
    }
    else
    { /* block id: 96 */
        (1 + 1);
    }
    return p_2081->g_comm_values[p_2081->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_2081->g_2
 * writes:
 */
int32_t  func_68(int8_t  p_69, uint8_t  p_70, int64_t * p_71, int64_t  p_72, struct S0 * p_2081)
{ /* block id: 31 */
    return p_2081->g_2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[8];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 8; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[8];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 8; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_comm_values[i] = 1;
    struct S0 c_2082;
    struct S0* p_2081 = &c_2082;
    struct S0 c_2083 = {
        0x4B13638EL, // p_2081->g_2
        0x4D7E3C23L, // p_2081->g_67
        &p_2081->g_2, // p_2081->g_206
        &p_2081->g_206, // p_2081->g_205
        0x7DB875ECL, // p_2081->g_210
        {{{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL}},{{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL},{3UL,0UL,3UL,3UL,0UL,3UL,3UL}}}, // p_2081->g_213
        (VECTOR(uint8_t, 2))(8UL, 0x56L), // p_2081->g_233
        {0x366CL,0x366CL,0x366CL,0x366CL,0x366CL}, // p_2081->g_238
        (VECTOR(int8_t, 2))(1L, 1L), // p_2081->g_246
        (void*)0, // p_2081->g_249
        &p_2081->g_213[0][1][5], // p_2081->g_254
        {{{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254}},{{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254}},{{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254}},{{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254}},{{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254}},{{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254}},{{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254},{&p_2081->g_254,&p_2081->g_254,&p_2081->g_254}}}, // p_2081->g_253
        0x2083D566D08C7653L, // p_2081->g_257
        (-1L), // p_2081->g_265
        (VECTOR(uint16_t, 8))(0x174EL, (VECTOR(uint16_t, 4))(0x174EL, (VECTOR(uint16_t, 2))(0x174EL, 0UL), 0UL), 0UL, 0x174EL, 0UL), // p_2081->g_277
        (VECTOR(uint16_t, 2))(1UL, 65529UL), // p_2081->g_278
        0x7A5839F4L, // p_2081->g_283
        {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}, // p_2081->g_289
        1L, // p_2081->g_290
        0x206EL, // p_2081->g_292
        0x192F1295L, // p_2081->g_294
        (-10L), // p_2081->g_296
        1UL, // p_2081->g_299
        &p_2081->g_206, // p_2081->g_309
        0x3FL, // p_2081->g_310
        (-6L), // p_2081->g_324
        3L, // p_2081->g_326
        1UL, // p_2081->g_329
        (void*)0, // p_2081->g_337
        &p_2081->g_337, // p_2081->g_336
        0x79286D6DL, // p_2081->g_349
        {(-1L)}, // p_2081->g_359
        (VECTOR(int8_t, 2))(0x41L, (-6L)), // p_2081->g_363
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int8_t, 2))(0L, 0L), (VECTOR(int8_t, 2))(0L, 0L), 0L, 0L, 0L, 0L), // p_2081->g_366
        (VECTOR(int16_t, 4))(0x5C1CL, (VECTOR(int16_t, 2))(0x5C1CL, 0x6B0EL), 0x6B0EL), // p_2081->g_371
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x3D644DE8BFD0AA50L), 0x3D644DE8BFD0AA50L), // p_2081->g_396
        (VECTOR(int64_t, 2))(0x3FEE8AA8F1E1F361L, 6L), // p_2081->g_397
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int64_t, 2))(0L, (-1L)), (VECTOR(int64_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L)), // p_2081->g_398
        (VECTOR(int64_t, 4))(0x0B0039A606B94084L, (VECTOR(int64_t, 2))(0x0B0039A606B94084L, (-4L)), (-4L)), // p_2081->g_399
        (VECTOR(int16_t, 16))(0x7981L, (VECTOR(int16_t, 4))(0x7981L, (VECTOR(int16_t, 2))(0x7981L, 0x6C03L), 0x6C03L), 0x6C03L, 0x7981L, 0x6C03L, (VECTOR(int16_t, 2))(0x7981L, 0x6C03L), (VECTOR(int16_t, 2))(0x7981L, 0x6C03L), 0x7981L, 0x6C03L, 0x7981L, 0x6C03L), // p_2081->g_411
        (VECTOR(int8_t, 8))(0x5FL, (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, 0x30L), 0x30L), 0x30L, 0x5FL, 0x30L), // p_2081->g_414
        (VECTOR(int8_t, 16))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x74L), 0x74L), 0x74L, (-2L), 0x74L, (VECTOR(int8_t, 2))((-2L), 0x74L), (VECTOR(int8_t, 2))((-2L), 0x74L), (-2L), 0x74L, (-2L), 0x74L), // p_2081->g_415
        &p_2081->g_206, // p_2081->g_966
        &p_2081->g_210, // p_2081->g_1151
        0x6984C35D0D6C050CL, // p_2081->g_1154
        (void*)0, // p_2081->g_1162
        &p_2081->g_1162, // p_2081->g_1161
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_2081->g_1165
        0x1CFBL, // p_2081->g_1171
        {0xF00EA0BBAAB87A11L,0xF00EA0BBAAB87A11L,0xF00EA0BBAAB87A11L,0xF00EA0BBAAB87A11L,0xF00EA0BBAAB87A11L,0xF00EA0BBAAB87A11L,0xF00EA0BBAAB87A11L,0xF00EA0BBAAB87A11L}, // p_2081->g_1174
        (-1L), // p_2081->g_1242
        (-1L), // p_2081->g_1271
        0x240647DBL, // p_2081->g_1273
        (VECTOR(int64_t, 4))(0x085D6CD2CEA4543DL, (VECTOR(int64_t, 2))(0x085D6CD2CEA4543DL, 0x4C10ADE71341E446L), 0x4C10ADE71341E446L), // p_2081->g_1292
        &p_2081->g_294, // p_2081->g_1294
        (VECTOR(uint8_t, 4))(0x96L, (VECTOR(uint8_t, 2))(0x96L, 0x8CL), 0x8CL), // p_2081->g_1327
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x3CL), 0x3CL), // p_2081->g_1328
        (-1L), // p_2081->g_1338
        (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 3UL), 3UL), 3UL, 4294967288UL, 3UL), // p_2081->g_1364
        (VECTOR(uint32_t, 2))(0x1BB886B9L, 0UL), // p_2081->g_1367
        0xEAFA80B6L, // p_2081->g_1383
        (VECTOR(int32_t, 2))((-1L), 2L), // p_2081->g_1395
        (VECTOR(int8_t, 2))((-1L), 0x30L), // p_2081->g_1432
        (VECTOR(int32_t, 2))(0L, 0x4256EF19L), // p_2081->g_1469
        &p_2081->g_206, // p_2081->g_1489
        (VECTOR(uint32_t, 2))(0xC6527CC1L, 0x4E29648BL), // p_2081->g_1528
        (VECTOR(uint32_t, 2))(0x3E4E4FB6L, 0UL), // p_2081->g_1562
        (VECTOR(int8_t, 16))(0x14L, (VECTOR(int8_t, 4))(0x14L, (VECTOR(int8_t, 2))(0x14L, 0x4AL), 0x4AL), 0x4AL, 0x14L, 0x4AL, (VECTOR(int8_t, 2))(0x14L, 0x4AL), (VECTOR(int8_t, 2))(0x14L, 0x4AL), 0x14L, 0x4AL, 0x14L, 0x4AL), // p_2081->g_1577
        (void*)0, // p_2081->g_1593
        &p_2081->g_1593, // p_2081->g_1592
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65530UL), 65530UL), 65530UL, 65535UL, 65530UL), // p_2081->g_1600
        (-9L), // p_2081->g_1625
        (VECTOR(int8_t, 8))(0x05L, (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, 1L), 1L), 1L, 0x05L, 1L), // p_2081->g_1634
        (VECTOR(int8_t, 4))(0x45L, (VECTOR(int8_t, 2))(0x45L, 0x37L), 0x37L), // p_2081->g_1635
        (VECTOR(uint64_t, 2))(1UL, 18446744073709551606UL), // p_2081->g_1641
        &p_2081->g_1294, // p_2081->g_1672
        (void*)0, // p_2081->g_1716
        (VECTOR(int16_t, 8))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 6L), 6L), 6L, 4L, 6L), // p_2081->g_1721
        (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x2503L), 0x2503L), 0x2503L, (-6L), 0x2503L), // p_2081->g_1722
        (VECTOR(uint64_t, 8))(18446744073709551607UL, (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 0xC2B654B80908573CL), 0xC2B654B80908573CL), 0xC2B654B80908573CL, 18446744073709551607UL, 0xC2B654B80908573CL), // p_2081->g_1777
        (VECTOR(uint64_t, 8))(0xB594D7F7FAD3939EL, (VECTOR(uint64_t, 4))(0xB594D7F7FAD3939EL, (VECTOR(uint64_t, 2))(0xB594D7F7FAD3939EL, 0UL), 0UL), 0UL, 0xB594D7F7FAD3939EL, 0UL), // p_2081->g_1778
        (VECTOR(uint16_t, 16))(0x7A23L, (VECTOR(uint16_t, 4))(0x7A23L, (VECTOR(uint16_t, 2))(0x7A23L, 0x6E2BL), 0x6E2BL), 0x6E2BL, 0x7A23L, 0x6E2BL, (VECTOR(uint16_t, 2))(0x7A23L, 0x6E2BL), (VECTOR(uint16_t, 2))(0x7A23L, 0x6E2BL), 0x7A23L, 0x6E2BL, 0x7A23L, 0x6E2BL), // p_2081->g_1821
        &p_2081->g_238[1], // p_2081->g_1844
        &p_2081->g_1844, // p_2081->g_1843
        &p_2081->g_1843, // p_2081->g_1845
        1L, // p_2081->g_1871
        (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-3L)), (-3L)), // p_2081->g_1882
        {0x204CL,0x204CL,0x204CL}, // p_2081->g_1890
        (VECTOR(uint32_t, 4))(0xF411DD65L, (VECTOR(uint32_t, 2))(0xF411DD65L, 1UL), 1UL), // p_2081->g_1900
        (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL), // p_2081->g_1903
        (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 4294967290UL), 4294967290UL), // p_2081->g_1904
        (VECTOR(uint16_t, 2))(65534UL, 65535UL), // p_2081->g_1910
        0x4251F90960435A9CL, // p_2081->g_1917
        &p_2081->g_1151, // p_2081->g_1919
        (VECTOR(uint16_t, 2))(0x9662L, 2UL), // p_2081->g_1922
        0x3D46B01DL, // p_2081->g_1924
        (VECTOR(int8_t, 2))(0x1BL, 0x33L), // p_2081->g_1940
        0L, // p_2081->g_1951
        (VECTOR(int64_t, 16))(0x6B94592404E5477AL, (VECTOR(int64_t, 4))(0x6B94592404E5477AL, (VECTOR(int64_t, 2))(0x6B94592404E5477AL, 5L), 5L), 5L, 0x6B94592404E5477AL, 5L, (VECTOR(int64_t, 2))(0x6B94592404E5477AL, 5L), (VECTOR(int64_t, 2))(0x6B94592404E5477AL, 5L), 0x6B94592404E5477AL, 5L, 0x6B94592404E5477AL, 5L), // p_2081->g_1974
        (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0xFCL), 0xFCL), // p_2081->g_1982
        &p_2081->g_206, // p_2081->g_2028
        &p_2081->g_238[0], // p_2081->g_2042
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x6F06635C2736A973L), 0x6F06635C2736A973L), 0x6F06635C2736A973L, 0L, 0x6F06635C2736A973L), // p_2081->g_2073
        0UL, // p_2081->g_2078
        &p_2081->g_2078, // p_2081->g_2077
        &p_2081->g_2077, // p_2081->g_2076
        &p_2081->g_2076, // p_2081->g_2075
        &p_2081->g_2075, // p_2081->g_2074
        0, // p_2081->v_collective
        sequence_input[get_global_id(0)], // p_2081->global_0_offset
        sequence_input[get_global_id(1)], // p_2081->global_1_offset
        sequence_input[get_global_id(2)], // p_2081->global_2_offset
        sequence_input[get_local_id(0)], // p_2081->local_0_offset
        sequence_input[get_local_id(1)], // p_2081->local_1_offset
        sequence_input[get_local_id(2)], // p_2081->local_2_offset
        sequence_input[get_group_id(0)], // p_2081->group_0_offset
        sequence_input[get_group_id(1)], // p_2081->group_1_offset
        sequence_input[get_group_id(2)], // p_2081->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[0][get_linear_local_id()])), // p_2081->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_2082 = c_2083;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2081);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2081->g_2, "p_2081->g_2", print_hash_value);
    transparent_crc(p_2081->g_67, "p_2081->g_67", print_hash_value);
    transparent_crc(p_2081->g_210, "p_2081->g_210", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_2081->g_213[i][j][k], "p_2081->g_213[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2081->g_233.x, "p_2081->g_233.x", print_hash_value);
    transparent_crc(p_2081->g_233.y, "p_2081->g_233.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2081->g_238[i], "p_2081->g_238[i]", print_hash_value);

    }
    transparent_crc(p_2081->g_246.x, "p_2081->g_246.x", print_hash_value);
    transparent_crc(p_2081->g_246.y, "p_2081->g_246.y", print_hash_value);
    transparent_crc(p_2081->g_257, "p_2081->g_257", print_hash_value);
    transparent_crc(p_2081->g_265, "p_2081->g_265", print_hash_value);
    transparent_crc(p_2081->g_277.s0, "p_2081->g_277.s0", print_hash_value);
    transparent_crc(p_2081->g_277.s1, "p_2081->g_277.s1", print_hash_value);
    transparent_crc(p_2081->g_277.s2, "p_2081->g_277.s2", print_hash_value);
    transparent_crc(p_2081->g_277.s3, "p_2081->g_277.s3", print_hash_value);
    transparent_crc(p_2081->g_277.s4, "p_2081->g_277.s4", print_hash_value);
    transparent_crc(p_2081->g_277.s5, "p_2081->g_277.s5", print_hash_value);
    transparent_crc(p_2081->g_277.s6, "p_2081->g_277.s6", print_hash_value);
    transparent_crc(p_2081->g_277.s7, "p_2081->g_277.s7", print_hash_value);
    transparent_crc(p_2081->g_278.x, "p_2081->g_278.x", print_hash_value);
    transparent_crc(p_2081->g_278.y, "p_2081->g_278.y", print_hash_value);
    transparent_crc(p_2081->g_283, "p_2081->g_283", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2081->g_289[i], "p_2081->g_289[i]", print_hash_value);

    }
    transparent_crc(p_2081->g_290, "p_2081->g_290", print_hash_value);
    transparent_crc(p_2081->g_292, "p_2081->g_292", print_hash_value);
    transparent_crc(p_2081->g_294, "p_2081->g_294", print_hash_value);
    transparent_crc(p_2081->g_296, "p_2081->g_296", print_hash_value);
    transparent_crc(p_2081->g_299, "p_2081->g_299", print_hash_value);
    transparent_crc(p_2081->g_310, "p_2081->g_310", print_hash_value);
    transparent_crc(p_2081->g_324, "p_2081->g_324", print_hash_value);
    transparent_crc(p_2081->g_326, "p_2081->g_326", print_hash_value);
    transparent_crc(p_2081->g_329, "p_2081->g_329", print_hash_value);
    transparent_crc(p_2081->g_349, "p_2081->g_349", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_2081->g_359[i], "p_2081->g_359[i]", print_hash_value);

    }
    transparent_crc(p_2081->g_363.x, "p_2081->g_363.x", print_hash_value);
    transparent_crc(p_2081->g_363.y, "p_2081->g_363.y", print_hash_value);
    transparent_crc(p_2081->g_366.s0, "p_2081->g_366.s0", print_hash_value);
    transparent_crc(p_2081->g_366.s1, "p_2081->g_366.s1", print_hash_value);
    transparent_crc(p_2081->g_366.s2, "p_2081->g_366.s2", print_hash_value);
    transparent_crc(p_2081->g_366.s3, "p_2081->g_366.s3", print_hash_value);
    transparent_crc(p_2081->g_366.s4, "p_2081->g_366.s4", print_hash_value);
    transparent_crc(p_2081->g_366.s5, "p_2081->g_366.s5", print_hash_value);
    transparent_crc(p_2081->g_366.s6, "p_2081->g_366.s6", print_hash_value);
    transparent_crc(p_2081->g_366.s7, "p_2081->g_366.s7", print_hash_value);
    transparent_crc(p_2081->g_366.s8, "p_2081->g_366.s8", print_hash_value);
    transparent_crc(p_2081->g_366.s9, "p_2081->g_366.s9", print_hash_value);
    transparent_crc(p_2081->g_366.sa, "p_2081->g_366.sa", print_hash_value);
    transparent_crc(p_2081->g_366.sb, "p_2081->g_366.sb", print_hash_value);
    transparent_crc(p_2081->g_366.sc, "p_2081->g_366.sc", print_hash_value);
    transparent_crc(p_2081->g_366.sd, "p_2081->g_366.sd", print_hash_value);
    transparent_crc(p_2081->g_366.se, "p_2081->g_366.se", print_hash_value);
    transparent_crc(p_2081->g_366.sf, "p_2081->g_366.sf", print_hash_value);
    transparent_crc(p_2081->g_371.x, "p_2081->g_371.x", print_hash_value);
    transparent_crc(p_2081->g_371.y, "p_2081->g_371.y", print_hash_value);
    transparent_crc(p_2081->g_371.z, "p_2081->g_371.z", print_hash_value);
    transparent_crc(p_2081->g_371.w, "p_2081->g_371.w", print_hash_value);
    transparent_crc(p_2081->g_396.x, "p_2081->g_396.x", print_hash_value);
    transparent_crc(p_2081->g_396.y, "p_2081->g_396.y", print_hash_value);
    transparent_crc(p_2081->g_396.z, "p_2081->g_396.z", print_hash_value);
    transparent_crc(p_2081->g_396.w, "p_2081->g_396.w", print_hash_value);
    transparent_crc(p_2081->g_397.x, "p_2081->g_397.x", print_hash_value);
    transparent_crc(p_2081->g_397.y, "p_2081->g_397.y", print_hash_value);
    transparent_crc(p_2081->g_398.s0, "p_2081->g_398.s0", print_hash_value);
    transparent_crc(p_2081->g_398.s1, "p_2081->g_398.s1", print_hash_value);
    transparent_crc(p_2081->g_398.s2, "p_2081->g_398.s2", print_hash_value);
    transparent_crc(p_2081->g_398.s3, "p_2081->g_398.s3", print_hash_value);
    transparent_crc(p_2081->g_398.s4, "p_2081->g_398.s4", print_hash_value);
    transparent_crc(p_2081->g_398.s5, "p_2081->g_398.s5", print_hash_value);
    transparent_crc(p_2081->g_398.s6, "p_2081->g_398.s6", print_hash_value);
    transparent_crc(p_2081->g_398.s7, "p_2081->g_398.s7", print_hash_value);
    transparent_crc(p_2081->g_398.s8, "p_2081->g_398.s8", print_hash_value);
    transparent_crc(p_2081->g_398.s9, "p_2081->g_398.s9", print_hash_value);
    transparent_crc(p_2081->g_398.sa, "p_2081->g_398.sa", print_hash_value);
    transparent_crc(p_2081->g_398.sb, "p_2081->g_398.sb", print_hash_value);
    transparent_crc(p_2081->g_398.sc, "p_2081->g_398.sc", print_hash_value);
    transparent_crc(p_2081->g_398.sd, "p_2081->g_398.sd", print_hash_value);
    transparent_crc(p_2081->g_398.se, "p_2081->g_398.se", print_hash_value);
    transparent_crc(p_2081->g_398.sf, "p_2081->g_398.sf", print_hash_value);
    transparent_crc(p_2081->g_399.x, "p_2081->g_399.x", print_hash_value);
    transparent_crc(p_2081->g_399.y, "p_2081->g_399.y", print_hash_value);
    transparent_crc(p_2081->g_399.z, "p_2081->g_399.z", print_hash_value);
    transparent_crc(p_2081->g_399.w, "p_2081->g_399.w", print_hash_value);
    transparent_crc(p_2081->g_411.s0, "p_2081->g_411.s0", print_hash_value);
    transparent_crc(p_2081->g_411.s1, "p_2081->g_411.s1", print_hash_value);
    transparent_crc(p_2081->g_411.s2, "p_2081->g_411.s2", print_hash_value);
    transparent_crc(p_2081->g_411.s3, "p_2081->g_411.s3", print_hash_value);
    transparent_crc(p_2081->g_411.s4, "p_2081->g_411.s4", print_hash_value);
    transparent_crc(p_2081->g_411.s5, "p_2081->g_411.s5", print_hash_value);
    transparent_crc(p_2081->g_411.s6, "p_2081->g_411.s6", print_hash_value);
    transparent_crc(p_2081->g_411.s7, "p_2081->g_411.s7", print_hash_value);
    transparent_crc(p_2081->g_411.s8, "p_2081->g_411.s8", print_hash_value);
    transparent_crc(p_2081->g_411.s9, "p_2081->g_411.s9", print_hash_value);
    transparent_crc(p_2081->g_411.sa, "p_2081->g_411.sa", print_hash_value);
    transparent_crc(p_2081->g_411.sb, "p_2081->g_411.sb", print_hash_value);
    transparent_crc(p_2081->g_411.sc, "p_2081->g_411.sc", print_hash_value);
    transparent_crc(p_2081->g_411.sd, "p_2081->g_411.sd", print_hash_value);
    transparent_crc(p_2081->g_411.se, "p_2081->g_411.se", print_hash_value);
    transparent_crc(p_2081->g_411.sf, "p_2081->g_411.sf", print_hash_value);
    transparent_crc(p_2081->g_414.s0, "p_2081->g_414.s0", print_hash_value);
    transparent_crc(p_2081->g_414.s1, "p_2081->g_414.s1", print_hash_value);
    transparent_crc(p_2081->g_414.s2, "p_2081->g_414.s2", print_hash_value);
    transparent_crc(p_2081->g_414.s3, "p_2081->g_414.s3", print_hash_value);
    transparent_crc(p_2081->g_414.s4, "p_2081->g_414.s4", print_hash_value);
    transparent_crc(p_2081->g_414.s5, "p_2081->g_414.s5", print_hash_value);
    transparent_crc(p_2081->g_414.s6, "p_2081->g_414.s6", print_hash_value);
    transparent_crc(p_2081->g_414.s7, "p_2081->g_414.s7", print_hash_value);
    transparent_crc(p_2081->g_415.s0, "p_2081->g_415.s0", print_hash_value);
    transparent_crc(p_2081->g_415.s1, "p_2081->g_415.s1", print_hash_value);
    transparent_crc(p_2081->g_415.s2, "p_2081->g_415.s2", print_hash_value);
    transparent_crc(p_2081->g_415.s3, "p_2081->g_415.s3", print_hash_value);
    transparent_crc(p_2081->g_415.s4, "p_2081->g_415.s4", print_hash_value);
    transparent_crc(p_2081->g_415.s5, "p_2081->g_415.s5", print_hash_value);
    transparent_crc(p_2081->g_415.s6, "p_2081->g_415.s6", print_hash_value);
    transparent_crc(p_2081->g_415.s7, "p_2081->g_415.s7", print_hash_value);
    transparent_crc(p_2081->g_415.s8, "p_2081->g_415.s8", print_hash_value);
    transparent_crc(p_2081->g_415.s9, "p_2081->g_415.s9", print_hash_value);
    transparent_crc(p_2081->g_415.sa, "p_2081->g_415.sa", print_hash_value);
    transparent_crc(p_2081->g_415.sb, "p_2081->g_415.sb", print_hash_value);
    transparent_crc(p_2081->g_415.sc, "p_2081->g_415.sc", print_hash_value);
    transparent_crc(p_2081->g_415.sd, "p_2081->g_415.sd", print_hash_value);
    transparent_crc(p_2081->g_415.se, "p_2081->g_415.se", print_hash_value);
    transparent_crc(p_2081->g_415.sf, "p_2081->g_415.sf", print_hash_value);
    transparent_crc(p_2081->g_1154, "p_2081->g_1154", print_hash_value);
    transparent_crc(p_2081->g_1171, "p_2081->g_1171", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2081->g_1174[i], "p_2081->g_1174[i]", print_hash_value);

    }
    transparent_crc(p_2081->g_1242, "p_2081->g_1242", print_hash_value);
    transparent_crc(p_2081->g_1271, "p_2081->g_1271", print_hash_value);
    transparent_crc(p_2081->g_1273, "p_2081->g_1273", print_hash_value);
    transparent_crc(p_2081->g_1292.x, "p_2081->g_1292.x", print_hash_value);
    transparent_crc(p_2081->g_1292.y, "p_2081->g_1292.y", print_hash_value);
    transparent_crc(p_2081->g_1292.z, "p_2081->g_1292.z", print_hash_value);
    transparent_crc(p_2081->g_1292.w, "p_2081->g_1292.w", print_hash_value);
    transparent_crc(p_2081->g_1327.x, "p_2081->g_1327.x", print_hash_value);
    transparent_crc(p_2081->g_1327.y, "p_2081->g_1327.y", print_hash_value);
    transparent_crc(p_2081->g_1327.z, "p_2081->g_1327.z", print_hash_value);
    transparent_crc(p_2081->g_1327.w, "p_2081->g_1327.w", print_hash_value);
    transparent_crc(p_2081->g_1328.x, "p_2081->g_1328.x", print_hash_value);
    transparent_crc(p_2081->g_1328.y, "p_2081->g_1328.y", print_hash_value);
    transparent_crc(p_2081->g_1328.z, "p_2081->g_1328.z", print_hash_value);
    transparent_crc(p_2081->g_1328.w, "p_2081->g_1328.w", print_hash_value);
    transparent_crc(p_2081->g_1338, "p_2081->g_1338", print_hash_value);
    transparent_crc(p_2081->g_1364.s0, "p_2081->g_1364.s0", print_hash_value);
    transparent_crc(p_2081->g_1364.s1, "p_2081->g_1364.s1", print_hash_value);
    transparent_crc(p_2081->g_1364.s2, "p_2081->g_1364.s2", print_hash_value);
    transparent_crc(p_2081->g_1364.s3, "p_2081->g_1364.s3", print_hash_value);
    transparent_crc(p_2081->g_1364.s4, "p_2081->g_1364.s4", print_hash_value);
    transparent_crc(p_2081->g_1364.s5, "p_2081->g_1364.s5", print_hash_value);
    transparent_crc(p_2081->g_1364.s6, "p_2081->g_1364.s6", print_hash_value);
    transparent_crc(p_2081->g_1364.s7, "p_2081->g_1364.s7", print_hash_value);
    transparent_crc(p_2081->g_1367.x, "p_2081->g_1367.x", print_hash_value);
    transparent_crc(p_2081->g_1367.y, "p_2081->g_1367.y", print_hash_value);
    transparent_crc(p_2081->g_1383, "p_2081->g_1383", print_hash_value);
    transparent_crc(p_2081->g_1395.x, "p_2081->g_1395.x", print_hash_value);
    transparent_crc(p_2081->g_1395.y, "p_2081->g_1395.y", print_hash_value);
    transparent_crc(p_2081->g_1432.x, "p_2081->g_1432.x", print_hash_value);
    transparent_crc(p_2081->g_1432.y, "p_2081->g_1432.y", print_hash_value);
    transparent_crc(p_2081->g_1469.x, "p_2081->g_1469.x", print_hash_value);
    transparent_crc(p_2081->g_1469.y, "p_2081->g_1469.y", print_hash_value);
    transparent_crc(p_2081->g_1528.x, "p_2081->g_1528.x", print_hash_value);
    transparent_crc(p_2081->g_1528.y, "p_2081->g_1528.y", print_hash_value);
    transparent_crc(p_2081->g_1562.x, "p_2081->g_1562.x", print_hash_value);
    transparent_crc(p_2081->g_1562.y, "p_2081->g_1562.y", print_hash_value);
    transparent_crc(p_2081->g_1577.s0, "p_2081->g_1577.s0", print_hash_value);
    transparent_crc(p_2081->g_1577.s1, "p_2081->g_1577.s1", print_hash_value);
    transparent_crc(p_2081->g_1577.s2, "p_2081->g_1577.s2", print_hash_value);
    transparent_crc(p_2081->g_1577.s3, "p_2081->g_1577.s3", print_hash_value);
    transparent_crc(p_2081->g_1577.s4, "p_2081->g_1577.s4", print_hash_value);
    transparent_crc(p_2081->g_1577.s5, "p_2081->g_1577.s5", print_hash_value);
    transparent_crc(p_2081->g_1577.s6, "p_2081->g_1577.s6", print_hash_value);
    transparent_crc(p_2081->g_1577.s7, "p_2081->g_1577.s7", print_hash_value);
    transparent_crc(p_2081->g_1577.s8, "p_2081->g_1577.s8", print_hash_value);
    transparent_crc(p_2081->g_1577.s9, "p_2081->g_1577.s9", print_hash_value);
    transparent_crc(p_2081->g_1577.sa, "p_2081->g_1577.sa", print_hash_value);
    transparent_crc(p_2081->g_1577.sb, "p_2081->g_1577.sb", print_hash_value);
    transparent_crc(p_2081->g_1577.sc, "p_2081->g_1577.sc", print_hash_value);
    transparent_crc(p_2081->g_1577.sd, "p_2081->g_1577.sd", print_hash_value);
    transparent_crc(p_2081->g_1577.se, "p_2081->g_1577.se", print_hash_value);
    transparent_crc(p_2081->g_1577.sf, "p_2081->g_1577.sf", print_hash_value);
    transparent_crc(p_2081->g_1600.s0, "p_2081->g_1600.s0", print_hash_value);
    transparent_crc(p_2081->g_1600.s1, "p_2081->g_1600.s1", print_hash_value);
    transparent_crc(p_2081->g_1600.s2, "p_2081->g_1600.s2", print_hash_value);
    transparent_crc(p_2081->g_1600.s3, "p_2081->g_1600.s3", print_hash_value);
    transparent_crc(p_2081->g_1600.s4, "p_2081->g_1600.s4", print_hash_value);
    transparent_crc(p_2081->g_1600.s5, "p_2081->g_1600.s5", print_hash_value);
    transparent_crc(p_2081->g_1600.s6, "p_2081->g_1600.s6", print_hash_value);
    transparent_crc(p_2081->g_1600.s7, "p_2081->g_1600.s7", print_hash_value);
    transparent_crc(p_2081->g_1625, "p_2081->g_1625", print_hash_value);
    transparent_crc(p_2081->g_1634.s0, "p_2081->g_1634.s0", print_hash_value);
    transparent_crc(p_2081->g_1634.s1, "p_2081->g_1634.s1", print_hash_value);
    transparent_crc(p_2081->g_1634.s2, "p_2081->g_1634.s2", print_hash_value);
    transparent_crc(p_2081->g_1634.s3, "p_2081->g_1634.s3", print_hash_value);
    transparent_crc(p_2081->g_1634.s4, "p_2081->g_1634.s4", print_hash_value);
    transparent_crc(p_2081->g_1634.s5, "p_2081->g_1634.s5", print_hash_value);
    transparent_crc(p_2081->g_1634.s6, "p_2081->g_1634.s6", print_hash_value);
    transparent_crc(p_2081->g_1634.s7, "p_2081->g_1634.s7", print_hash_value);
    transparent_crc(p_2081->g_1635.x, "p_2081->g_1635.x", print_hash_value);
    transparent_crc(p_2081->g_1635.y, "p_2081->g_1635.y", print_hash_value);
    transparent_crc(p_2081->g_1635.z, "p_2081->g_1635.z", print_hash_value);
    transparent_crc(p_2081->g_1635.w, "p_2081->g_1635.w", print_hash_value);
    transparent_crc(p_2081->g_1641.x, "p_2081->g_1641.x", print_hash_value);
    transparent_crc(p_2081->g_1641.y, "p_2081->g_1641.y", print_hash_value);
    transparent_crc(p_2081->g_1721.s0, "p_2081->g_1721.s0", print_hash_value);
    transparent_crc(p_2081->g_1721.s1, "p_2081->g_1721.s1", print_hash_value);
    transparent_crc(p_2081->g_1721.s2, "p_2081->g_1721.s2", print_hash_value);
    transparent_crc(p_2081->g_1721.s3, "p_2081->g_1721.s3", print_hash_value);
    transparent_crc(p_2081->g_1721.s4, "p_2081->g_1721.s4", print_hash_value);
    transparent_crc(p_2081->g_1721.s5, "p_2081->g_1721.s5", print_hash_value);
    transparent_crc(p_2081->g_1721.s6, "p_2081->g_1721.s6", print_hash_value);
    transparent_crc(p_2081->g_1721.s7, "p_2081->g_1721.s7", print_hash_value);
    transparent_crc(p_2081->g_1722.s0, "p_2081->g_1722.s0", print_hash_value);
    transparent_crc(p_2081->g_1722.s1, "p_2081->g_1722.s1", print_hash_value);
    transparent_crc(p_2081->g_1722.s2, "p_2081->g_1722.s2", print_hash_value);
    transparent_crc(p_2081->g_1722.s3, "p_2081->g_1722.s3", print_hash_value);
    transparent_crc(p_2081->g_1722.s4, "p_2081->g_1722.s4", print_hash_value);
    transparent_crc(p_2081->g_1722.s5, "p_2081->g_1722.s5", print_hash_value);
    transparent_crc(p_2081->g_1722.s6, "p_2081->g_1722.s6", print_hash_value);
    transparent_crc(p_2081->g_1722.s7, "p_2081->g_1722.s7", print_hash_value);
    transparent_crc(p_2081->g_1777.s0, "p_2081->g_1777.s0", print_hash_value);
    transparent_crc(p_2081->g_1777.s1, "p_2081->g_1777.s1", print_hash_value);
    transparent_crc(p_2081->g_1777.s2, "p_2081->g_1777.s2", print_hash_value);
    transparent_crc(p_2081->g_1777.s3, "p_2081->g_1777.s3", print_hash_value);
    transparent_crc(p_2081->g_1777.s4, "p_2081->g_1777.s4", print_hash_value);
    transparent_crc(p_2081->g_1777.s5, "p_2081->g_1777.s5", print_hash_value);
    transparent_crc(p_2081->g_1777.s6, "p_2081->g_1777.s6", print_hash_value);
    transparent_crc(p_2081->g_1777.s7, "p_2081->g_1777.s7", print_hash_value);
    transparent_crc(p_2081->g_1778.s0, "p_2081->g_1778.s0", print_hash_value);
    transparent_crc(p_2081->g_1778.s1, "p_2081->g_1778.s1", print_hash_value);
    transparent_crc(p_2081->g_1778.s2, "p_2081->g_1778.s2", print_hash_value);
    transparent_crc(p_2081->g_1778.s3, "p_2081->g_1778.s3", print_hash_value);
    transparent_crc(p_2081->g_1778.s4, "p_2081->g_1778.s4", print_hash_value);
    transparent_crc(p_2081->g_1778.s5, "p_2081->g_1778.s5", print_hash_value);
    transparent_crc(p_2081->g_1778.s6, "p_2081->g_1778.s6", print_hash_value);
    transparent_crc(p_2081->g_1778.s7, "p_2081->g_1778.s7", print_hash_value);
    transparent_crc(p_2081->g_1821.s0, "p_2081->g_1821.s0", print_hash_value);
    transparent_crc(p_2081->g_1821.s1, "p_2081->g_1821.s1", print_hash_value);
    transparent_crc(p_2081->g_1821.s2, "p_2081->g_1821.s2", print_hash_value);
    transparent_crc(p_2081->g_1821.s3, "p_2081->g_1821.s3", print_hash_value);
    transparent_crc(p_2081->g_1821.s4, "p_2081->g_1821.s4", print_hash_value);
    transparent_crc(p_2081->g_1821.s5, "p_2081->g_1821.s5", print_hash_value);
    transparent_crc(p_2081->g_1821.s6, "p_2081->g_1821.s6", print_hash_value);
    transparent_crc(p_2081->g_1821.s7, "p_2081->g_1821.s7", print_hash_value);
    transparent_crc(p_2081->g_1821.s8, "p_2081->g_1821.s8", print_hash_value);
    transparent_crc(p_2081->g_1821.s9, "p_2081->g_1821.s9", print_hash_value);
    transparent_crc(p_2081->g_1821.sa, "p_2081->g_1821.sa", print_hash_value);
    transparent_crc(p_2081->g_1821.sb, "p_2081->g_1821.sb", print_hash_value);
    transparent_crc(p_2081->g_1821.sc, "p_2081->g_1821.sc", print_hash_value);
    transparent_crc(p_2081->g_1821.sd, "p_2081->g_1821.sd", print_hash_value);
    transparent_crc(p_2081->g_1821.se, "p_2081->g_1821.se", print_hash_value);
    transparent_crc(p_2081->g_1821.sf, "p_2081->g_1821.sf", print_hash_value);
    transparent_crc(p_2081->g_1871, "p_2081->g_1871", print_hash_value);
    transparent_crc(p_2081->g_1882.x, "p_2081->g_1882.x", print_hash_value);
    transparent_crc(p_2081->g_1882.y, "p_2081->g_1882.y", print_hash_value);
    transparent_crc(p_2081->g_1882.z, "p_2081->g_1882.z", print_hash_value);
    transparent_crc(p_2081->g_1882.w, "p_2081->g_1882.w", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2081->g_1890[i], "p_2081->g_1890[i]", print_hash_value);

    }
    transparent_crc(p_2081->g_1900.x, "p_2081->g_1900.x", print_hash_value);
    transparent_crc(p_2081->g_1900.y, "p_2081->g_1900.y", print_hash_value);
    transparent_crc(p_2081->g_1900.z, "p_2081->g_1900.z", print_hash_value);
    transparent_crc(p_2081->g_1900.w, "p_2081->g_1900.w", print_hash_value);
    transparent_crc(p_2081->g_1903.x, "p_2081->g_1903.x", print_hash_value);
    transparent_crc(p_2081->g_1903.y, "p_2081->g_1903.y", print_hash_value);
    transparent_crc(p_2081->g_1903.z, "p_2081->g_1903.z", print_hash_value);
    transparent_crc(p_2081->g_1903.w, "p_2081->g_1903.w", print_hash_value);
    transparent_crc(p_2081->g_1904.x, "p_2081->g_1904.x", print_hash_value);
    transparent_crc(p_2081->g_1904.y, "p_2081->g_1904.y", print_hash_value);
    transparent_crc(p_2081->g_1904.z, "p_2081->g_1904.z", print_hash_value);
    transparent_crc(p_2081->g_1904.w, "p_2081->g_1904.w", print_hash_value);
    transparent_crc(p_2081->g_1910.x, "p_2081->g_1910.x", print_hash_value);
    transparent_crc(p_2081->g_1910.y, "p_2081->g_1910.y", print_hash_value);
    transparent_crc(p_2081->g_1917, "p_2081->g_1917", print_hash_value);
    transparent_crc(p_2081->g_1922.x, "p_2081->g_1922.x", print_hash_value);
    transparent_crc(p_2081->g_1922.y, "p_2081->g_1922.y", print_hash_value);
    transparent_crc(p_2081->g_1924, "p_2081->g_1924", print_hash_value);
    transparent_crc(p_2081->g_1940.x, "p_2081->g_1940.x", print_hash_value);
    transparent_crc(p_2081->g_1940.y, "p_2081->g_1940.y", print_hash_value);
    transparent_crc(p_2081->g_1951, "p_2081->g_1951", print_hash_value);
    transparent_crc(p_2081->g_1974.s0, "p_2081->g_1974.s0", print_hash_value);
    transparent_crc(p_2081->g_1974.s1, "p_2081->g_1974.s1", print_hash_value);
    transparent_crc(p_2081->g_1974.s2, "p_2081->g_1974.s2", print_hash_value);
    transparent_crc(p_2081->g_1974.s3, "p_2081->g_1974.s3", print_hash_value);
    transparent_crc(p_2081->g_1974.s4, "p_2081->g_1974.s4", print_hash_value);
    transparent_crc(p_2081->g_1974.s5, "p_2081->g_1974.s5", print_hash_value);
    transparent_crc(p_2081->g_1974.s6, "p_2081->g_1974.s6", print_hash_value);
    transparent_crc(p_2081->g_1974.s7, "p_2081->g_1974.s7", print_hash_value);
    transparent_crc(p_2081->g_1974.s8, "p_2081->g_1974.s8", print_hash_value);
    transparent_crc(p_2081->g_1974.s9, "p_2081->g_1974.s9", print_hash_value);
    transparent_crc(p_2081->g_1974.sa, "p_2081->g_1974.sa", print_hash_value);
    transparent_crc(p_2081->g_1974.sb, "p_2081->g_1974.sb", print_hash_value);
    transparent_crc(p_2081->g_1974.sc, "p_2081->g_1974.sc", print_hash_value);
    transparent_crc(p_2081->g_1974.sd, "p_2081->g_1974.sd", print_hash_value);
    transparent_crc(p_2081->g_1974.se, "p_2081->g_1974.se", print_hash_value);
    transparent_crc(p_2081->g_1974.sf, "p_2081->g_1974.sf", print_hash_value);
    transparent_crc(p_2081->g_1982.x, "p_2081->g_1982.x", print_hash_value);
    transparent_crc(p_2081->g_1982.y, "p_2081->g_1982.y", print_hash_value);
    transparent_crc(p_2081->g_1982.z, "p_2081->g_1982.z", print_hash_value);
    transparent_crc(p_2081->g_1982.w, "p_2081->g_1982.w", print_hash_value);
    transparent_crc(p_2081->g_2073.s0, "p_2081->g_2073.s0", print_hash_value);
    transparent_crc(p_2081->g_2073.s1, "p_2081->g_2073.s1", print_hash_value);
    transparent_crc(p_2081->g_2073.s2, "p_2081->g_2073.s2", print_hash_value);
    transparent_crc(p_2081->g_2073.s3, "p_2081->g_2073.s3", print_hash_value);
    transparent_crc(p_2081->g_2073.s4, "p_2081->g_2073.s4", print_hash_value);
    transparent_crc(p_2081->g_2073.s5, "p_2081->g_2073.s5", print_hash_value);
    transparent_crc(p_2081->g_2073.s6, "p_2081->g_2073.s6", print_hash_value);
    transparent_crc(p_2081->g_2073.s7, "p_2081->g_2073.s7", print_hash_value);
    transparent_crc(p_2081->g_2078, "p_2081->g_2078", print_hash_value);
    transparent_crc(p_2081->v_collective, "p_2081->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 8; i++)
            transparent_crc(p_2081->g_special_values[i + 8 * get_linear_group_id()], "p_2081->g_special_values[i + 8 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 8; i++)
            transparent_crc(p_2081->l_special_values[i], "p_2081->l_special_values[i]", print_hash_value);
    transparent_crc(p_2081->l_comm_values[get_linear_local_id()], "p_2081->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_2081->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()], "p_2081->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
