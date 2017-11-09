// --atomics 7 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 77,99,1 -l 11,3,1
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

__constant uint32_t permutations[10][33] = {
{21,18,19,11,30,29,25,32,7,16,14,9,4,1,23,20,31,5,3,27,17,13,2,24,15,0,26,28,22,6,10,8,12}, // permutation 0
{23,11,24,22,0,7,6,13,25,31,30,19,26,4,27,18,15,5,16,32,20,1,28,9,29,3,21,12,10,14,2,8,17}, // permutation 1
{20,24,7,30,11,13,4,22,0,28,1,5,14,32,18,3,9,2,31,10,23,27,21,19,26,25,6,17,29,16,8,12,15}, // permutation 2
{19,20,31,28,3,7,9,13,4,22,12,5,16,27,6,14,21,17,10,1,29,2,15,26,32,23,11,30,0,24,18,8,25}, // permutation 3
{15,22,9,21,12,27,31,24,25,30,19,1,14,20,6,10,26,0,8,4,17,3,23,13,2,5,11,28,7,32,29,18,16}, // permutation 4
{18,30,26,2,29,15,27,14,23,4,28,11,13,16,3,32,10,17,22,20,7,12,0,1,6,19,31,25,9,5,8,21,24}, // permutation 5
{19,12,27,32,4,22,11,30,7,23,21,14,24,6,13,29,20,28,3,17,8,2,16,25,31,1,26,9,5,0,10,18,15}, // permutation 6
{11,0,7,23,14,4,9,29,3,10,1,19,27,12,32,8,17,25,2,6,13,20,24,26,22,16,21,15,30,28,18,31,5}, // permutation 7
{24,23,12,10,15,19,25,8,16,2,26,28,14,11,20,32,29,27,21,17,5,18,6,30,7,31,3,13,22,1,4,9,0}, // permutation 8
{19,28,15,31,18,24,12,16,2,10,1,13,27,26,20,9,6,14,17,7,4,8,21,25,23,3,29,32,0,22,5,30,11} // permutation 9
};

// Seed: 4016537036

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2[7];
    int32_t g_5;
    int32_t g_8;
    VECTOR(int32_t, 4) g_12;
    uint8_t g_35[7];
    volatile int32_t g_45;
    int32_t g_46;
    volatile int32_t g_49;
    volatile int32_t g_50;
    volatile int32_t g_51;
    volatile VECTOR(int32_t, 8) g_52;
    int32_t g_53;
    volatile VECTOR(uint64_t, 2) g_64;
    VECTOR(int64_t, 2) g_65;
    uint64_t g_126;
    uint64_t g_137;
    uint32_t g_142;
    int32_t *g_156;
    int32_t **g_155;
    uint64_t *g_158;
    uint64_t **g_157;
    VECTOR(int16_t, 2) g_170;
    VECTOR(int16_t, 4) g_171;
    int64_t g_176[8][2];
    int32_t g_180[3][4];
    VECTOR(uint32_t, 16) g_225;
    uint16_t g_235;
    VECTOR(int32_t, 16) g_259;
    VECTOR(int64_t, 16) g_274;
    VECTOR(uint32_t, 4) g_284;
    VECTOR(uint32_t, 8) g_290;
    VECTOR(uint32_t, 8) g_291;
    VECTOR(int32_t, 2) g_304;
    VECTOR(int32_t, 16) g_309;
    VECTOR(int32_t, 8) g_311;
    VECTOR(int32_t, 16) g_324;
    VECTOR(int32_t, 16) g_326;
    uint64_t g_332;
    VECTOR(uint64_t, 8) g_463;
    volatile VECTOR(int8_t, 8) g_464;
    uint64_t g_498;
    VECTOR(uint16_t, 8) g_532;
    VECTOR(uint32_t, 8) g_543;
    int8_t g_569;
    VECTOR(int8_t, 4) g_577;
    uint64_t ***g_655;
    int8_t **g_663;
    volatile VECTOR(int32_t, 2) g_680;
    VECTOR(uint64_t, 2) g_688;
    int32_t * volatile g_726;
    int32_t g_739[4];
    uint64_t *g_749;
    uint64_t *g_750;
    uint64_t *g_751;
    volatile VECTOR(int32_t, 16) g_758;
    VECTOR(int8_t, 4) g_780;
    volatile VECTOR(uint32_t, 16) g_790;
    VECTOR(int64_t, 16) g_793;
    VECTOR(uint64_t, 4) g_796;
    uint16_t **g_811;
    uint16_t *** volatile g_810;
    uint16_t g_855[4][9];
    volatile uint32_t *g_866;
    volatile uint32_t * volatile *g_865;
    volatile VECTOR(int16_t, 2) g_875;
    int64_t g_878;
    VECTOR(int8_t, 8) g_881;
    uint8_t **g_929;
    volatile VECTOR(int32_t, 16) g_965;
    volatile int32_t g_1036;
    uint16_t ***g_1050;
    VECTOR(uint64_t, 4) g_1100;
    uint32_t g_1102[4];
    volatile VECTOR(int16_t, 2) g_1105;
    VECTOR(int16_t, 2) g_1108;
    volatile VECTOR(int16_t, 8) g_1110;
    VECTOR(uint16_t, 16) g_1133;
    int32_t g_1154[3];
    volatile int16_t * volatile g_1175;
    int32_t * volatile g_1185;
    int32_t *g_1186[8][6];
    VECTOR(uint16_t, 8) g_1210;
    int64_t g_1219;
    int32_t * volatile g_1223;
    int32_t * volatile g_1224;
    VECTOR(int64_t, 8) g_1246;
    int64_t g_1258[6][10][4];
    int64_t *g_1257[2][6];
    uint32_t g_1265;
    int32_t * volatile g_1275;
    int64_t **g_1329[8];
    VECTOR(int8_t, 4) g_1337;
    uint32_t g_1352;
    volatile int8_t g_1374[5];
    volatile VECTOR(int16_t, 16) g_1382;
    uint64_t g_1396;
    volatile VECTOR(uint64_t, 16) g_1398;
    VECTOR(int8_t, 4) g_1403;
    volatile VECTOR(int8_t, 4) g_1406;
    VECTOR(int32_t, 2) g_1435;
    volatile VECTOR(int32_t, 16) g_1436;
    int8_t g_1468;
    VECTOR(int32_t, 2) g_1480;
    volatile VECTOR(int32_t, 2) g_1486;
    volatile VECTOR(uint64_t, 16) g_1494;
    VECTOR(int64_t, 4) g_1553;
    volatile VECTOR(int8_t, 2) g_1571;
    VECTOR(int8_t, 2) g_1573;
    volatile VECTOR(uint8_t, 16) g_1606;
    VECTOR(uint64_t, 2) g_1607;
    VECTOR(int8_t, 16) g_1608;
    VECTOR(int8_t, 8) g_1611;
    uint8_t g_1618;
    VECTOR(int16_t, 8) g_1646;
    volatile VECTOR(int32_t, 4) g_1732;
    uint16_t ****g_1776;
    uint16_t *****g_1775;
    uint8_t g_1777[4][8][1];
    uint8_t g_1793;
    volatile int64_t *g_1807;
    volatile int64_t ** volatile g_1806;
    VECTOR(int32_t, 8) g_1898;
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
int32_t  func_1(struct S0 * p_1906);
int64_t  func_38(int32_t * p_39, struct S0 * p_1906);
int32_t * func_40(int32_t * p_41, struct S0 * p_1906);
int32_t  func_56(int32_t * p_57, int16_t  p_58, int32_t  p_59, struct S0 * p_1906);
int32_t * func_60(int64_t  p_61, struct S0 * p_1906);
int8_t  func_112(uint32_t  p_113, uint64_t  p_114, uint8_t  p_115, struct S0 * p_1906);
int8_t  func_118(int32_t  p_119, int32_t * p_120, int32_t * p_121, struct S0 * p_1906);
int32_t * func_122(uint64_t  p_123, int32_t * p_124, struct S0 * p_1906);
int32_t * func_127(int8_t  p_128, int8_t  p_129, struct S0 * p_1906);
int8_t  func_130(uint64_t * p_131, uint32_t  p_132, int64_t  p_133, uint64_t  p_134, struct S0 * p_1906);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1906->g_2 p_1906->g_5 p_1906->g_35 p_1906->g_156 p_1906->g_64
 * writes: p_1906->g_2 p_1906->g_5 p_1906->g_8 p_1906->g_35 p_1906->g_46
 */
int32_t  func_1(struct S0 * p_1906)
{ /* block id: 4 */
    int32_t l_24[10] = {0L,1L,0L,0L,1L,0L,0L,1L,0L,0L};
    int32_t *l_42[7] = {&l_24[3],&l_24[3],&l_24[3],&l_24[3],&l_24[3],&l_24[3],&l_24[3]};
    VECTOR(int8_t, 4) l_1897 = (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x42L), 0x42L);
    uint8_t *l_1900 = &p_1906->g_1618;
    VECTOR(int32_t, 4) l_1905 = (VECTOR(int32_t, 4))(0x6981B57BL, (VECTOR(int32_t, 2))(0x6981B57BL, 0x6F1E1A57L), 0x6F1E1A57L);
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1906->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[(safe_mod_func_uint32_t_u_u(0x1F94964AL, 10))][(safe_mod_func_uint32_t_u_u(p_1906->tid, 33))]));
    for (p_1906->g_2[6] = 0; (p_1906->g_2[6] < 18); p_1906->g_2[6]++)
    { /* block id: 10 */
        int8_t l_20[2][9] = {{0x5FL,0x07L,1L,0x07L,0x5FL,0x5FL,0x07L,1L,0x07L},{0x5FL,0x07L,1L,0x07L,0x5FL,0x5FL,0x07L,1L,0x07L}};
        int32_t l_21 = (-9L);
        int32_t l_23 = 1L;
        int32_t l_26 = 0x548A24E2L;
        int64_t l_29 = 0x1DD571B4D09D52FFL;
        int32_t l_32 = 0x1E808E27L;
        int64_t l_33 = 0x0B2365B212F019D4L;
        int i, j;
        for (p_1906->g_5 = (-15); (p_1906->g_5 >= (-23)); --p_1906->g_5)
        { /* block id: 13 */
            int32_t l_18 = 5L;
            int32_t l_19 = 0x509B9552L;
            int32_t l_22 = (-1L);
            int32_t l_25 = 1L;
            int32_t l_27 = 1L;
            int32_t l_30[8];
            int16_t l_34 = (-9L);
            uint32_t l_1899 = 0x7B1BD9B2L;
            uint8_t *l_1901 = &p_1906->g_35[0];
            int64_t *l_1902 = &l_33;
            int i, j;
            for (i = 0; i < 8; i++)
                l_30[i] = 0x20F96394L;
            for (p_1906->g_8 = 3; (p_1906->g_8 <= 21); p_1906->g_8++)
            { /* block id: 16 */
                int32_t *l_11 = (void*)0;
                int32_t *l_13 = (void*)0;
                int32_t *l_14 = (void*)0;
                int32_t *l_15 = (void*)0;
                int32_t *l_16 = (void*)0;
                int32_t *l_17[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_28 = 0x1ECBC59AL;
                int32_t l_31 = (-3L);
                int i, j;
                p_1906->g_35[5]--;
            }
        }
        (*p_1906->g_156) = l_26;
    }
    return p_1906->g_64.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1906->g_1374 p_1906->g_225 p_1906->g_180 p_1906->g_5 p_1906->g_1382 p_1906->g_532 p_1906->g_1185 p_1906->g_51 p_1906->g_1396 p_1906->g_793 p_1906->g_170 p_1906->g_1258 p_1906->g_796 p_1906->g_1398 p_1906->g_1403 p_1906->g_52 p_1906->g_1406 p_1906->g_1100 p_1906->g_274 p_1906->g_577 p_1906->g_881 p_1906->g_1108 p_1906->g_comm_values p_1906->g_332 p_1906->g_1435 p_1906->g_1436 p_1906->g_35 p_1906->g_663 p_1906->g_156 p_1906->g_726 p_1906->g_126 p_1906->g_810 p_1906->g_811 p_1906->g_1050 p_1906->g_1480 p_1906->g_1486 p_1906->g_1154 p_1906->g_155 p_1906->g_65 p_1906->g_326 p_1906->g_304 p_1906->g_1133 p_1906->g_1175 p_1906->g_1732 p_1906->g_878 p_1906->g_290 p_1906->g_311 p_1906->g_1468 p_1906->g_1105 p_1906->g_1775 p_1906->g_1777 p_1906->g_1793 p_1906->g_1806 p_1906->g_235 p_1906->g_1219
 * writes: p_1906->g_180 p_1906->g_1108 p_1906->g_780 p_1906->g_881 p_1906->g_577 p_1906->g_1337 p_1906->g_176 p_1906->g_1219 p_1906->g_291 p_1906->g_332 p_1906->g_35 p_1906->g_126 p_1906->g_811 p_1906->g_170 p_1906->g_156 p_1906->g_1468 p_1906->g_1793 p_1906->g_235
 */
int64_t  func_38(int32_t * p_39, struct S0 * p_1906)
{ /* block id: 538 */
    uint32_t l_1356 = 4294967287UL;
    VECTOR(int64_t, 8) l_1363 = (VECTOR(int64_t, 8))(0x762D1F38A88B90B2L, (VECTOR(int64_t, 4))(0x762D1F38A88B90B2L, (VECTOR(int64_t, 2))(0x762D1F38A88B90B2L, 0L), 0L), 0L, 0x762D1F38A88B90B2L, 0L);
    uint16_t ****l_1366 = (void*)0;
    uint16_t *****l_1367 = &l_1366;
    int32_t *l_1372 = (void*)0;
    int32_t *l_1373 = &p_1906->g_180[0][0];
    int16_t *l_1375[1][4];
    int32_t *l_1376[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t l_1377 = 1L;
    uint32_t *l_1379[1];
    uint32_t **l_1378[5];
    int8_t *l_1389 = (void*)0;
    int8_t *l_1390[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint64_t, 2) l_1397 = (VECTOR(uint64_t, 2))(3UL, 5UL);
    VECTOR(int8_t, 8) l_1404 = (VECTOR(int8_t, 8))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 1L), 1L), 1L, 0x64L, 1L);
    uint32_t l_1405[2][6] = {{0xC39D476AL,0xC39D476AL,0xC39D476AL,0xC39D476AL,0xC39D476AL,0xC39D476AL},{0xC39D476AL,0xC39D476AL,0xC39D476AL,0xC39D476AL,0xC39D476AL,0xC39D476AL}};
    VECTOR(int8_t, 16) l_1407 = (VECTOR(int8_t, 16))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 0x37L), 0x37L), 0x37L, 0x64L, 0x37L, (VECTOR(int8_t, 2))(0x64L, 0x37L), (VECTOR(int8_t, 2))(0x64L, 0x37L), 0x64L, 0x37L, 0x64L, 0x37L);
    VECTOR(int8_t, 2) l_1408 = (VECTOR(int8_t, 2))(0x38L, 0x45L);
    uint64_t ***l_1409 = (void*)0;
    VECTOR(int64_t, 4) l_1410 = (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, (-10L)), (-10L));
    VECTOR(int64_t, 4) l_1415 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-4L)), (-4L));
    int8_t l_1430 = 0L;
    uint64_t *l_1431 = &p_1906->g_332;
    VECTOR(uint32_t, 8) l_1439 = (VECTOR(uint32_t, 8))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0x1AD21027L), 0x1AD21027L), 0x1AD21027L, 2UL, 0x1AD21027L);
    int32_t l_1469[6];
    int16_t l_1490[7] = {0x4BABL,(-1L),0x4BABL,0x4BABL,(-1L),0x4BABL,0x4BABL};
    VECTOR(uint64_t, 16) l_1493 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 18446744073709551615UL, 18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551613UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551613UL), 18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL, 18446744073709551613UL);
    VECTOR(int64_t, 4) l_1547 = (VECTOR(int64_t, 4))(0x5F1270BBFC9AE932L, (VECTOR(int64_t, 2))(0x5F1270BBFC9AE932L, 0L), 0L);
    VECTOR(int8_t, 8) l_1572 = (VECTOR(int8_t, 8))(0x1EL, (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 7L), 7L), 7L, 0x1EL, 7L);
    uint8_t l_1587 = 0UL;
    int64_t l_1722 = 0x14CAEE60E9F98BAAL;
    int64_t l_1723[8][7][2] = {{{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL}},{{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL}},{{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL}},{{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL}},{{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL}},{{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL}},{{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL}},{{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL},{0x3FE56DC6F9F0330BL,0x651CE037DA79FD8FL}}};
    uint64_t l_1724 = 0x7F93FC17C6A0DFD9L;
    VECTOR(uint16_t, 2) l_1731 = (VECTOR(uint16_t, 2))(0x25A0L, 0UL);
    uint16_t l_1744 = 65535UL;
    VECTOR(int16_t, 2) l_1754 = (VECTOR(int16_t, 2))(0x68A7L, 9L);
    VECTOR(uint16_t, 8) l_1759 = (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0UL), 0UL), 0UL, 65528UL, 0UL);
    uint32_t l_1764 = 0x489EDC00L;
    VECTOR(uint32_t, 2) l_1788 = (VECTOR(uint32_t, 2))(0xEB5DA8ADL, 0x553109CBL);
    uint64_t l_1892 = 0x374899312A2FD130L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_1375[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
        l_1379[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_1378[i] = &l_1379[0];
    for (i = 0; i < 6; i++)
        l_1469[i] = 0x4F33FE0BL;
    l_1377 &= (((((safe_mul_func_int16_t_s_s(((l_1356 > l_1356) == (p_1906->g_1108.x = (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((l_1356 <= ((((VECTOR(int64_t, 8))(l_1363.s73721341)).s3 || GROUP_DIVERGE(2, 1)) && ((safe_mul_func_int8_t_s_s(l_1356, l_1356)) | (((*l_1367) = l_1366) == (l_1363.s4 , (void*)0))))) == (safe_div_func_int16_t_s_s(((((VECTOR(int16_t, 8))((((*l_1373) = (safe_add_func_uint8_t_u_u((l_1363.s2 , l_1363.s4), 0x95L))) == p_1906->g_1374[3]), 0x4DF8L, ((VECTOR(int16_t, 4))(0L)), 1L, 0x3F26L)).s6 & p_1906->g_225.s1) ^ l_1363.s2), (-4L)))), l_1363.s2)) , (*l_1373)), 0UL)), 15)))), 65535UL)) < 65535UL) | l_1363.s6) != 0x3EL) ^ (*p_39));
    (*l_1373) = ((((void*)0 == l_1378[2]) && ((*l_1373) | (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x5E55L, 6L, ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_1906->g_1382.s8eea)))).lo, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((((*l_1373) , 0x1622E6DBL) <= (safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((p_1906->g_881.s0 = (p_1906->g_780.x = p_1906->g_532.s3)), (safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((*p_1906->g_1185))) || (p_1906->g_51 >= (p_1906->g_1337.x = (p_1906->g_577.z = (0xBCL & p_1906->g_1396))))), p_1906->g_793.s6)), 0x27EC3E35L)))), p_1906->g_532.s2)), 18446744073709551615UL))), p_1906->g_170.y, (*l_1373), (-1L), 0x1627L, 0x6CC9L, 0x71EBL, (-9L))))).lo)), ((VECTOR(int16_t, 4))(0x30E7L))))).odd, ((VECTOR(int16_t, 2))(0x61B3L))))))).yyxyyxxx, ((VECTOR(int16_t, 8))((-1L))), ((VECTOR(int16_t, 8))((-1L)))))).s2, 1L, (-1L), p_1906->g_1258[0][6][1], ((VECTOR(int16_t, 4))(0x5C6EL)), p_1906->g_796.z, (*l_1373), 0x7044L, (*l_1373), 0x3A91L, 0x6740L)).hi)).s5, 12)))) , 0x16C135FDL);
    if (((((VECTOR(uint64_t, 16))(0UL, ((VECTOR(uint64_t, 4))(l_1397.xyxy)), ((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 2))(p_1906->g_1398.s60)).xxxxyxxy, (uint64_t)((*l_1431) ^= ((((safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((p_1906->g_291.s0 = ((((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1906->g_1403.xx)).xxyx)), ((VECTOR(int8_t, 8))((-9L), p_1906->g_180[2][3], 0x6EL, ((VECTOR(int8_t, 4))(l_1404.s7613)), (-8L))).odd))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 0x56L)).yyxxyxxxxxyyxyyx)).s6, 0x71L, 0x63L, 0L, l_1405[0][2], ((VECTOR(int8_t, 4))(9L, 1L, 0x75L, 0x13L)), 7L, (-7L), (-3L))), ((VECTOR(int8_t, 8))(0x74L, p_1906->g_52.s2, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0L, 0x23L)).xxyy)).xwxyzxxx)).s12)), ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(p_1906->g_1406.wxxzyywz)).hi, ((VECTOR(int8_t, 16))(l_1407.s2c17413c0a9f9838)).sd238))).odd))), (-1L), 0x34L)).s6271433005503745, ((VECTOR(int8_t, 4))(l_1408.yxyy)).xzzzxzzxzxwzzyxw))).s7 >= ((((l_1409 = l_1409) == ((p_1906->g_176[5][1] = ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_1410.yyyywxww)))).s2) , ((safe_rshift_func_uint16_t_u_u(4UL, (safe_rshift_func_uint16_t_u_u((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))((-1L), (-4L))), p_1906->g_1100.z, 0x0F6CD8BB4B2F787EL, (*l_1373), 0x2E78931C77B4D23EL, (-1L), 1L)).s2010206766224701)).s8 >= ((VECTOR(int64_t, 8))(l_1415.yxyywyyw)).s0), 4)))) , ((safe_rshift_func_uint16_t_u_u(((((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 4))((p_1906->g_1219 = (safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s(0x44L, ((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x30L, (safe_rshift_func_uint16_t_u_s((((((safe_div_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (safe_add_func_int64_t_s_s(p_1906->g_274.s3, p_1906->g_577.x)))) , (*l_1373)) , (*l_1373)) | 18446744073709551615UL) >= 9UL), 5)), 0L, ((VECTOR(int8_t, 4))(0L)), 5L, ((VECTOR(int8_t, 4))((-1L))), 0x72L, ((VECTOR(int8_t, 2))(0x4AL)), 0L)).sf6)).xxxyxyxyyyyyxyyy)), ((VECTOR(int8_t, 16))(0x35L))))).se)) && GROUP_DIVERGE(1, 1)), p_1906->g_881.s0)), (-1L)))), 0x6EBBD157B8EABFAAL, (-6L), 0x0348C4F5E58E936FL)).odd, ((VECTOR(int64_t, 2))(0x0FF0E673798170DEL))))).lo || p_1906->g_532.s7) == l_1430), p_1906->g_1108.x)) , (void*)0)))) , l_1372) != &p_1906->g_1154[2])) < (*l_1373))) ^ (*l_1373)), 0xC2975988FBAA118FL)), (*l_1373))) , (*l_1373)) , p_1906->g_comm_values[p_1906->tid]) & 1L)), (uint64_t)(*l_1373)))), ((VECTOR(uint64_t, 2))(18446744073709551611UL)), 0x1FB6F934533FE832L)).s9 && (*l_1373)) > FAKE_DIVERGE(p_1906->global_1_offset, get_global_id(1), 10)))
    { /* block id: 553 */
        VECTOR(int32_t, 2) l_1434 = (VECTOR(int32_t, 2))((-6L), 0x05B48947L);
        uint32_t l_1470[6][8];
        VECTOR(int16_t, 16) l_1478 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int16_t, 2))(0L, 1L), (VECTOR(int16_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
        VECTOR(uint16_t, 16) l_1479 = (VECTOR(uint16_t, 16))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 8UL), 8UL), 8UL, 65534UL, 8UL, (VECTOR(uint16_t, 2))(65534UL, 8UL), (VECTOR(uint16_t, 2))(65534UL, 8UL), 65534UL, 8UL, 65534UL, 8UL);
        uint16_t *l_1487[6][9][1] = {{{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]}},{{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]}},{{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]}},{{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]}},{{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]}},{{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]},{&p_1906->g_855[2][3]}}};
        VECTOR(uint32_t, 8) l_1529 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL);
        uint64_t *l_1556 = (void*)0;
        uint32_t l_1558 = 4294967295UL;
        int32_t *l_1560 = (void*)0;
        uint64_t **l_1591 = (void*)0;
        uint64_t ****l_1610 = (void*)0;
        int8_t l_1669[5] = {0x48L,0x48L,0x48L,0x48L,0x48L};
        int32_t l_1677[8][5][2] = {{{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL}},{{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL}},{{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL}},{{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL}},{{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL}},{{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL}},{{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL}},{{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL},{0x7061432BL,0x7061432BL}}};
        uint8_t l_1700 = 0x6EL;
        VECTOR(uint8_t, 4) l_1711 = (VECTOR(uint8_t, 4))(0xE6L, (VECTOR(uint8_t, 2))(0xE6L, 255UL), 255UL);
        VECTOR(uint64_t, 8) l_1714 = (VECTOR(uint64_t, 8))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 0x3D23A61F472E2B52L), 0x3D23A61F472E2B52L), 0x3D23A61F472E2B52L, 5UL, 0x3D23A61F472E2B52L);
        int64_t l_1719[2];
        int32_t l_1721[7][7][5] = {{{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL}},{{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL}},{{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL}},{{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL}},{{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL}},{{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL}},{{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL},{0L,0x5805A53DL,0L,0L,0x5805A53DL}}};
        int32_t l_1746 = 1L;
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 8; j++)
                l_1470[i][j] = 0x5AE518E8L;
        }
        for (i = 0; i < 2; i++)
            l_1719[i] = (-3L);
        for (l_1377 = 0; (l_1377 != 3); l_1377++)
        { /* block id: 556 */
            uint8_t *l_1444 = &p_1906->g_35[5];
            int32_t l_1449 = 6L;
            VECTOR(int8_t, 16) l_1460 = (VECTOR(int8_t, 16))(0x0CL, (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 0x05L), 0x05L), 0x05L, 0x0CL, 0x05L, (VECTOR(int8_t, 2))(0x0CL, 0x05L), (VECTOR(int8_t, 2))(0x0CL, 0x05L), 0x0CL, 0x05L, 0x0CL, 0x05L);
            uint16_t *l_1462 = &p_1906->g_855[2][2];
            uint16_t **l_1461 = &l_1462;
            int8_t l_1463 = 0x01L;
            int32_t l_1464 = 0x0314E8E6L;
            int32_t l_1465 = 0x6A9909C8L;
            int32_t l_1466 = 0x22C70676L;
            int32_t l_1467[7] = {0x632D2878L,(-1L),0x632D2878L,0x632D2878L,(-1L),0x632D2878L,0x632D2878L};
            int i;
            l_1463 = (l_1449 = (((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(l_1434.xxyyxxxx)).s01, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(0x24FC4C39L, 0x15B19C39L)).yyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(p_1906->g_1435.yyyxyxyy)).s3717533130720243, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1906->g_1436.sa628cb3d)).s3, ((*l_1373) = ((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), 0)) , ((*p_39) > ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_1439.s5164115626530747)).s9c)).hi == 0xD73BF86CL) , (+((safe_mod_func_int64_t_s_s(p_1906->g_881.s2, (((safe_sub_func_uint32_t_u_u(((((*l_1444)--) , (safe_mul_func_int16_t_s_s((((((l_1449 | 0x33346E64FCA5DC1EL) ^ (--(*l_1431))) < (&l_1390[3] == p_1906->g_663)) , (((safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((*l_1373), (safe_mod_func_int16_t_s_s(((((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x0CL, (-8L))).yxxy)).xyxxzyyw, ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(l_1460.s0306b8084d67603f))))).even))).s3 < ((void*)0 == l_1461)) , 0x21AFL), l_1460.s4)))) == 1UL), p_1906->g_532.s6)) <= l_1460.s4) ^ 8L)) , l_1449), (*l_1373)))) != 9UL), FAKE_DIVERGE(p_1906->local_0_offset, get_local_id(0), 10))) || l_1460.s8) , l_1434.y))) , (*p_1906->g_156))))))), 0x54123D53L, (-8L))).wywzzyzxzyxzxyxx, ((VECTOR(int32_t, 16))(0x0DD50135L))))).odd)), ((VECTOR(int32_t, 8))(9L))))).s37, ((VECTOR(int32_t, 2))((-1L)))))).yyxyyyyyyxxxyxyx, ((VECTOR(int32_t, 16))(0x43ED6503L)), ((VECTOR(int32_t, 16))((-1L))))))))))).sf2a2))))).lo))), 0x67A33556L)).z , (*p_1906->g_726)));
            if (l_1434.x)
                continue;
            ++l_1470[0][0];
        }
        if ((*p_39))
        { /* block id: 565 */
            uint32_t l_1489 = 0xD37EC7F0L;
            int32_t l_1491 = 0x5B112CA2L;
            VECTOR(uint64_t, 8) l_1496 = (VECTOR(uint64_t, 8))(0x13281CC5D9DA9BD0L, (VECTOR(uint64_t, 4))(0x13281CC5D9DA9BD0L, (VECTOR(uint64_t, 2))(0x13281CC5D9DA9BD0L, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 0x13281CC5D9DA9BD0L, 18446744073709551614UL);
            int16_t l_1544[6] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
            int16_t l_1555 = 0x1BA4L;
            int32_t l_1592 = 0x0139CD67L;
            int64_t *l_1599 = (void*)0;
            VECTOR(int8_t, 4) l_1612 = (VECTOR(int8_t, 4))(0x13L, (VECTOR(int8_t, 2))(0x13L, (-2L)), (-2L));
            int32_t l_1619 = 0x0C6E2208L;
            int8_t l_1641 = 0x5FL;
            uint64_t **l_1648 = &l_1556;
            int32_t ***l_1665 = &p_1906->g_155;
            int64_t **l_1674 = &p_1906->g_1257[0][1];
            VECTOR(uint16_t, 2) l_1678 = (VECTOR(uint16_t, 2))(4UL, 1UL);
            int64_t *l_1697 = (void*)0;
            int64_t **l_1698 = &l_1697;
            uint32_t l_1699 = 0UL;
            uint64_t l_1701 = 18446744073709551615UL;
            int i;
            for (p_1906->g_126 = 0; (p_1906->g_126 > 2); ++p_1906->g_126)
            { /* block id: 568 */
                uint16_t *l_1476 = &p_1906->g_855[0][1];
                uint16_t **l_1475 = &l_1476;
                uint16_t ***l_1477 = &l_1475;
                int32_t ***l_1485[9][9] = {{(void*)0,(void*)0,&p_1906->g_155,(void*)0,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155},{(void*)0,(void*)0,&p_1906->g_155,(void*)0,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155},{(void*)0,(void*)0,&p_1906->g_155,(void*)0,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155},{(void*)0,(void*)0,&p_1906->g_155,(void*)0,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155},{(void*)0,(void*)0,&p_1906->g_155,(void*)0,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155},{(void*)0,(void*)0,&p_1906->g_155,(void*)0,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155},{(void*)0,(void*)0,&p_1906->g_155,(void*)0,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155},{(void*)0,(void*)0,&p_1906->g_155,(void*)0,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155},{(void*)0,(void*)0,&p_1906->g_155,(void*)0,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155,&p_1906->g_155}};
                uint8_t *l_1488 = &p_1906->g_35[4];
                int16_t l_1492[8] = {0x2BD2L,0x2BD2L,0x2BD2L,0x2BD2L,0x2BD2L,0x2BD2L,0x2BD2L,0x2BD2L};
                VECTOR(uint64_t, 2) l_1495 = (VECTOR(uint64_t, 2))(0x03C3C54E001F4187L, 18446744073709551607UL);
                int64_t *l_1497 = (void*)0;
                int64_t *l_1498 = &l_1377;
                int32_t l_1510 = 0x59D7C8C8L;
                VECTOR(int32_t, 2) l_1535 = (VECTOR(int32_t, 2))(0x198C5A01L, 8L);
                VECTOR(uint64_t, 8) l_1554 = (VECTOR(uint64_t, 8))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 1UL), 1UL), 1UL, 2UL, 1UL);
                int32_t l_1557 = 0x6821B2ABL;
                uint64_t l_1670 = 18446744073709551615UL;
                int64_t ***l_1673 = &p_1906->g_1329[0];
                int i, j;
                atomic_add(&p_1906->g_atomic_reduction[get_linear_group_id()], ((*l_1373) &= ((((*p_1906->g_1050) = (*p_1906->g_810)) == ((*l_1477) = l_1475)) , ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(l_1478.s58a842dc)).odd, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(0xC89CL, ((VECTOR(uint16_t, 2))(l_1479.s7a)), 1UL, 1UL, ((VECTOR(uint16_t, 2))(0UL, 0x071CL)), 0x9B1EL)).odd)).odd)).yyyx))).odd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(p_1906->g_1480.xxxxyxyxxxxyyxxx)).s04d5))), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(1L, 0x36439673L)), ((VECTOR(int32_t, 4))((safe_div_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((l_1485[7][4] != (l_1434.y , &p_1906->g_155)), (~(l_1491 = (((((((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(0L, 0x329F7F7BL)).yxxyxxyyyxxyxyyy, ((VECTOR(int32_t, 2))(p_1906->g_1486.xx)).yyyxyxxyxyxxxxxy))).s8 <= (-1L)) || ((*l_1488) &= ((l_1434.x , l_1487[2][7][0]) == (*l_1475)))) , l_1489) , l_1490[4]) != p_1906->g_1154[0]))))) & GROUP_DIVERGE(2, 1)), 0x51CBA20DL)), (-1L), (-1L), 0L)).odd, ((VECTOR(int32_t, 2))(4L))))).xyyy, ((VECTOR(int32_t, 4))(0x0C2B5FE5L))))).lo)))), ((VECTOR(int32_t, 2))(0x2572BA46L))))).hi)));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1906->v_collective += p_1906->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            p_39 = (void*)0;
            if (((((***l_1665) & ((+((VECTOR(uint64_t, 4))((0x48L == (***l_1665)), 1UL, 1UL, 0xA5763B7FB8D3EAEFL)).w) >= ((((l_1677[3][0][1] & ((VECTOR(uint16_t, 2))(l_1678.yx)).odd) && (p_1906->g_170.y = ((safe_add_func_int64_t_s_s((((l_1434.x |= (safe_mod_func_int32_t_s_s((*p_1906->g_1185), (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_u(((((((((safe_sub_func_uint32_t_u_u(((p_1906->g_35[5] != (l_1491 &= (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((l_1699 &= (safe_sub_func_int64_t_s_s((~0x73B922C6308B7AD6L), (safe_mul_func_int8_t_s_s((&p_1906->g_176[5][1] == ((*l_1698) = l_1697)), p_1906->g_126))))), p_1906->g_65.x)), 0)))) == 65535UL), (**p_1906->g_155))) , l_1700) && (***l_1665)) <= p_1906->g_326.s2) != 0xB0L) ^ 1UL) & 0xE4L) != (*p_1906->g_156)), FAKE_DIVERGE(p_1906->local_1_offset, get_local_id(1), 10))) || p_1906->g_304.x) | (-6L)), 10))))) | (**p_1906->g_155)) | GROUP_DIVERGE(2, 1)), (-5L))) , p_1906->g_1133.s0))) == (***l_1665)) >= GROUP_DIVERGE(2, 1)))) , (***l_1665)) != (***l_1665)))
            { /* block id: 666 */
                l_1701++;
            }
            else
            { /* block id: 668 */
                uint64_t l_1706 = 18446744073709551607UL;
                (*p_1906->g_155) = p_39;
                l_1491 ^= ((*l_1373) = ((safe_div_func_int32_t_s_s((1L | l_1706), ((safe_div_func_int8_t_s_s((~(safe_add_func_uint8_t_u_u(p_1906->g_1382.sf, ((VECTOR(uint8_t, 4))(l_1711.xwwx)).y))), l_1529.s0)) || ((void*)0 != p_1906->g_1175)))) , ((safe_add_func_uint8_t_u_u(l_1706, (((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_1714.s1264403305374563)).lo)), (uint64_t)l_1706))).s3 , l_1706))) ^ l_1706)));
            }
        }
        else
        { /* block id: 673 */
            uint32_t l_1715 = 0UL;
            VECTOR(int32_t, 2) l_1720 = (VECTOR(int32_t, 2))((-1L), (-1L));
            int32_t l_1743 = 0x7008E913L;
            int8_t l_1745 = 0x04L;
            int i;
            if ((l_1715 = (~0L)))
            { /* block id: 675 */
                (*p_1906->g_155) = p_39;
            }
            else
            { /* block id: 677 */
                int32_t l_1718[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1718[i] = 0x0980389CL;
                l_1719[1] = (0x5293139AD069E6F4L < (~((safe_sub_func_uint8_t_u_u(l_1718[5], 3UL)) >= l_1715)));
            }
            l_1724--;
            (*l_1373) = ((safe_mod_func_int32_t_s_s((l_1746 &= ((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_1731.yx)), (((+(*l_1373)) | ((VECTOR(int32_t, 8))(p_1906->g_1732.zxywxwzy)).s2) != ((~(safe_lshift_func_int16_t_s_s((+(safe_mul_func_uint16_t_u_u((((*p_39) ^ (safe_lshift_func_int8_t_s_s((0xF7L ^ 0L), ((((l_1720.y != 0xAEB4AEB32656BF90L) < (((l_1743 = ((+(safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((-9L), ((*p_39) , (l_1720.y || l_1715)))), l_1715))) > 1L)) <= p_1906->g_796.z) <= 1L)) , l_1744) <= l_1745)))) >= p_1906->g_878), p_1906->g_290.s6))), p_1906->g_1108.y))) > 0x45L)), l_1745, ((VECTOR(uint16_t, 8))(0x7F07L)), 0x6A79L, 0x26A9L, 0x2D0FL, 0x26B7L)), ((VECTOR(uint16_t, 16))(0x9A08L))))).s9, (*l_1373))) , l_1745)), (*p_39))) < p_1906->g_311.s7);
        }
        return p_1906->g_1382.sa;
    }
    else
    { /* block id: 686 */
        for (p_1906->g_1468 = 0; (p_1906->g_1468 > 3); ++p_1906->g_1468)
        { /* block id: 689 */
            uint32_t l_1749 = 0x8FDDCF80L;
            l_1749 &= (*l_1373);
            return p_1906->g_1105.y;
        }
    }
    if ((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((((*l_1373) && p_1906->g_881.s5) != ((VECTOR(int16_t, 8))(l_1754.xxyxxyyy)).s7), 1)), 0)) <= (((p_1906->g_291.s6 = ((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 4))(l_1759.s4730)).yyyyyxzy, ((VECTOR(uint16_t, 16))(0x3527L, (safe_add_func_int16_t_s_s((*l_1373), 0x9FAFL)), 65531UL, 0x8CD7L, (safe_mul_func_int8_t_s_s(l_1764, (safe_sub_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), ((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(p_1906->g_1435.y, (*l_1373))), (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(0L, 0x05DDL)).even, ((l_1367 = p_1906->g_1775) == (void*)0))), 3)))) != (*l_1373)))))), 1UL, (*l_1373), 65529UL, (*l_1373), ((VECTOR(uint16_t, 4))(2UL)), 65530UL, 0xC7CBL, 0x24DBL)).odd, ((VECTOR(uint16_t, 8))(0x4A37L))))), 0UL, 0xE924L, 65535UL, ((VECTOR(uint16_t, 2))(0UL)), GROUP_DIVERGE(2, 1), 0x6429L, 0xB69CL)).sd, (*l_1373))), (*l_1373))) && 0xFE39BE7F56FE1B7EL)) >= (*l_1373)) >= 0x4C80L)) == p_1906->g_1777[2][3][0]))
    { /* block id: 696 */
        uint16_t l_1778[8];
        VECTOR(int8_t, 2) l_1796 = (VECTOR(int8_t, 2))(0L, 1L);
        VECTOR(int32_t, 8) l_1808 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0L), 0L), 0L, (-3L), 0L);
        int32_t l_1809[4] = {0x60F181E2L,0x60F181E2L,0x60F181E2L,0x60F181E2L};
        int i;
        for (i = 0; i < 8; i++)
            l_1778[i] = 65527UL;
        l_1778[1] |= 0L;
        l_1809[2] &= (((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((void*)0 == &l_1389), l_1778[1])), (safe_unary_minus_func_uint64_t_u(((*l_1431)++))))) && ((VECTOR(uint32_t, 4))(l_1788.yyxx)).x) <= ((*l_1373) = ((safe_sub_func_uint16_t_u_u((0x03L || (safe_mod_func_int8_t_s_s((((VECTOR(uint32_t, 4))((p_1906->g_1793++), ((VECTOR(uint32_t, 2))(0x55E00FE1L, 0x2961C0F8L)), 0x7E307B5CL)).z , l_1778[4]), (-1L)))), (FAKE_DIVERGE(p_1906->group_1_offset, get_group_id(1), 10) == (((VECTOR(int8_t, 4))(0x16L, ((VECTOR(int8_t, 2))(l_1796.xx)), 0x6EL)).z == ((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0UL, (safe_sub_func_uint8_t_u_u((l_1808.s2 |= ((((l_1796.y , (void*)0) != p_1906->g_1806) || l_1796.y) != 0x4CB44179L)), 250UL)))), 9)) ^ (*l_1373)))), 0)) , l_1796.x))))) == l_1778[0])));
    }
    else
    { /* block id: 703 */
        if ((atomic_inc(&p_1906->l_atomic_input[5]) == 4))
        { /* block id: 705 */
            VECTOR(int32_t, 2) l_1810 = (VECTOR(int32_t, 2))(0x7B41CE09L, (-1L));
            int32_t *l_1885 = (void*)0;
            int i;
            if (((VECTOR(int32_t, 4))(l_1810.yxyy)).y)
            { /* block id: 706 */
                int32_t l_1833 = 8L;
                VECTOR(uint8_t, 4) l_1834 = (VECTOR(uint8_t, 4))(0x5DL, (VECTOR(uint8_t, 2))(0x5DL, 0UL), 0UL);
                int64_t l_1835 = (-6L);
                int i;
                l_1810.x |= 0x06DE1F17L;
                if ((l_1810.x = 0x2EA381E1L))
                { /* block id: 709 */
                    int32_t l_1811 = (-6L);
                    int8_t l_1812 = 1L;
                    int32_t l_1813 = 0x4F5774D2L;
                    l_1813 = (l_1812 = (l_1810.y = l_1811));
                    for (l_1813 = 0; (l_1813 <= 7); l_1813 = safe_add_func_int8_t_s_s(l_1813, 1))
                    { /* block id: 715 */
                        int32_t l_1816 = 0x23EBEF27L;
                        l_1810.y ^= l_1816;
                    }
                }
                else
                { /* block id: 718 */
                    VECTOR(int32_t, 2) l_1817 = (VECTOR(int32_t, 2))(0L, 0x63B8B2EFL);
                    int16_t l_1818 = 0x2F10L;
                    int32_t *l_1831 = (void*)0;
                    int32_t *l_1832 = (void*)0;
                    int i;
                    l_1818 &= ((VECTOR(int32_t, 2))(l_1817.yx)).hi;
                    for (l_1818 = 0; (l_1818 != (-30)); l_1818--)
                    { /* block id: 722 */
                        int8_t l_1821 = 0x1BL;
                        uint32_t l_1822 = 0UL;
                        int32_t l_1823 = (-3L);
                        VECTOR(int32_t, 8) l_1824 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x1B6AF4A9L), 0x1B6AF4A9L), 0x1B6AF4A9L, 3L, 0x1B6AF4A9L);
                        int8_t l_1825[7][4][8] = {{{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L}},{{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L}},{{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L}},{{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L}},{{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L}},{{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L}},{{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L},{0x7DL,1L,0x22L,6L,0x2FL,0x5EL,(-10L),0x27L}}};
                        uint8_t l_1826 = 0xA6L;
                        int8_t l_1829 = 0x75L;
                        uint8_t l_1830 = 0xD4L;
                        int i, j, k;
                        l_1810.y = l_1821;
                        l_1810.y |= (l_1825[6][0][4] = (l_1817.x = (l_1822 , (l_1823 , ((VECTOR(int32_t, 8))(l_1824.s30364324)).s3))));
                        ++l_1826;
                        l_1824.s6 ^= (l_1830 &= l_1829);
                    }
                    l_1832 = l_1831;
                }
                l_1834.y |= (l_1810.x = l_1833);
                l_1810.x = (l_1835 , 0x6FA5B362L);
            }
            else
            { /* block id: 736 */
                int32_t l_1836 = 0x59FD67D0L;
                uint32_t l_1837 = 0xB2271DC8L;
                l_1837++;
                for (l_1837 = 27; (l_1837 == 17); --l_1837)
                { /* block id: 740 */
                    int32_t l_1842 = 1L;
                    uint8_t l_1843 = 0x14L;
                    int64_t l_1858 = 1L;
                    int64_t *l_1857[6] = {&l_1858,&l_1858,&l_1858,&l_1858,&l_1858,&l_1858};
                    int64_t **l_1856 = &l_1857[0];
                    int64_t **l_1859 = &l_1857[0];
                    int64_t **l_1860 = (void*)0;
                    int i;
                    if ((l_1842 , l_1843))
                    { /* block id: 741 */
                        uint64_t l_1844 = 8UL;
                        uint8_t l_1845 = 1UL;
                        uint32_t l_1846[4] = {0xCAB5D99DL,0xCAB5D99DL,0xCAB5D99DL,0xCAB5D99DL};
                        uint32_t l_1847 = 1UL;
                        VECTOR(int32_t, 16) l_1848 = (VECTOR(int32_t, 16))(0x30988C8CL, (VECTOR(int32_t, 4))(0x30988C8CL, (VECTOR(int32_t, 2))(0x30988C8CL, (-10L)), (-10L)), (-10L), 0x30988C8CL, (-10L), (VECTOR(int32_t, 2))(0x30988C8CL, (-10L)), (VECTOR(int32_t, 2))(0x30988C8CL, (-10L)), 0x30988C8CL, (-10L), 0x30988C8CL, (-10L));
                        VECTOR(int32_t, 2) l_1849 = (VECTOR(int32_t, 2))(6L, (-2L));
                        uint16_t l_1850 = 65535UL;
                        int32_t *l_1851 = (void*)0;
                        int i;
                        l_1810.x = (l_1842 = ((l_1847 = (l_1844 , (l_1845 , l_1846[3]))) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_1848.sda2f)), ((VECTOR(int32_t, 16))(l_1849.xyxyyyxyxxxxyyyy)).sed34))))).y));
                        l_1810.x = (l_1836 |= (l_1849.y ^= l_1850));
                        l_1851 = (void*)0;
                        l_1842 ^= (l_1836 = (-3L));
                    }
                    else
                    { /* block id: 751 */
                        int16_t l_1852 = 0x64A1L;
                        VECTOR(int16_t, 4) l_1853 = (VECTOR(int16_t, 4))(0x0328L, (VECTOR(int16_t, 2))(0x0328L, 0L), 0L);
                        uint32_t l_1854 = 4294967295UL;
                        int32_t l_1855 = 0x26EDC457L;
                        int i;
                        l_1810.y = l_1852;
                        l_1842 &= (((VECTOR(int16_t, 8))(l_1853.xyzywzww)).s1 , (l_1810.x = (l_1855 ^= (l_1836 |= l_1854))));
                    }
                    l_1860 = (l_1859 = l_1856);
                }
                for (l_1836 = (-20); (l_1836 > (-20)); l_1836 = safe_add_func_int16_t_s_s(l_1836, 8))
                { /* block id: 763 */
                    VECTOR(int64_t, 4) l_1863 = (VECTOR(int64_t, 4))(0x4F3CB375AFA80DD4L, (VECTOR(int64_t, 2))(0x4F3CB375AFA80DD4L, 0x7F68F1F7CC5E97E1L), 0x7F68F1F7CC5E97E1L);
                    int32_t l_1864 = 0L;
                    uint8_t l_1865 = 0x84L;
                    uint32_t l_1866[3];
                    uint16_t l_1873 = 6UL;
                    int32_t l_1876 = 0x14B258E7L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1866[i] = 4294967288UL;
                    l_1866[0] &= (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_1863.xy)).yyyyyxxy)).s0 , (l_1864 , l_1865));
                    for (l_1865 = (-21); (l_1865 < 53); l_1865 = safe_add_func_uint8_t_u_u(l_1865, 1))
                    { /* block id: 767 */
                        uint64_t l_1869[2];
                        int32_t l_1870 = 0x0CE2261CL;
                        int32_t l_1871 = 1L;
                        uint32_t l_1872[4] = {1UL,1UL,1UL,1UL};
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1869[i] = 0x61DE5BB510901DBAL;
                        l_1870 = ((l_1871 = (l_1869[1] , l_1870)) , l_1872[2]);
                    }
                    l_1873--;
                    if (l_1876)
                    { /* block id: 772 */
                        int32_t l_1878 = 0x66BBB0B7L;
                        int32_t *l_1877 = &l_1878;
                        l_1877 = (void*)0;
                    }
                    else
                    { /* block id: 774 */
                        uint16_t l_1879 = 1UL;
                        int64_t l_1880 = 1L;
                        int32_t l_1881 = 0x10D5BE42L;
                        uint64_t l_1882[4][5][8] = {{{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL}},{{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL}},{{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL}},{{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL},{0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x08EF1BB21A5A11BAL,18446744073709551612UL,18446744073709551612UL,0x08EF1BB21A5A11BAL}}};
                        int i, j, k;
                        l_1876 = l_1879;
                        l_1882[1][1][3]++;
                    }
                }
            }
            l_1885 = (void*)0;
            unsigned int result = 0;
            result += l_1810.y;
            result += l_1810.x;
            atomic_add(&p_1906->l_special_values[5], result);
        }
        else
        { /* block id: 781 */
            (1 + 1);
        }
        for (p_1906->g_235 = (-5); (p_1906->g_235 > 52); p_1906->g_235 = safe_add_func_uint16_t_u_u(p_1906->g_235, 6))
        { /* block id: 786 */
            int8_t l_1891 = 0x6EL;
            for (p_1906->g_1219 = (-4); (p_1906->g_1219 >= (-18)); --p_1906->g_1219)
            { /* block id: 789 */
                uint32_t l_1890 = 0x834B12E9L;
                if ((*p_39))
                    break;
                l_1891 |= (l_1890 = (*p_1906->g_156));
            }
        }
    }
    return l_1892;
}


/* ------------------------------------------ */
/* 
 * reads : p_1906->g_8 p_1906->g_155 p_1906->g_156
 * writes: p_1906->g_8 p_1906->g_46
 */
int32_t * func_40(int32_t * p_41, struct S0 * p_1906)
{ /* block id: 19 */
    int32_t l_1307 = (-2L);
    int32_t l_1308 = 1L;
    int64_t **l_1326 = &p_1906->g_1257[0][4];
    VECTOR(int8_t, 16) l_1338 = (VECTOR(int8_t, 16))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 0x5CL), 0x5CL), 0x5CL, 0x64L, 0x5CL, (VECTOR(int8_t, 2))(0x64L, 0x5CL), (VECTOR(int8_t, 2))(0x64L, 0x5CL), 0x64L, 0x5CL, 0x64L, 0x5CL);
    uint64_t ***l_1339 = &p_1906->g_157;
    VECTOR(int8_t, 8) l_1340 = (VECTOR(int8_t, 8))(0x0BL, (VECTOR(int8_t, 4))(0x0BL, (VECTOR(int8_t, 2))(0x0BL, (-3L)), (-3L)), (-3L), 0x0BL, (-3L));
    int i;
    for (p_1906->g_8 = 0; (p_1906->g_8 <= 24); p_1906->g_8 = safe_add_func_uint16_t_u_u(p_1906->g_8, 3))
    { /* block id: 22 */
        int16_t l_1187 = 0x16B1L;
        int32_t l_1274 = (-1L);
        uint16_t ***l_1291 = &p_1906->g_811;
        VECTOR(uint16_t, 16) l_1292 = (VECTOR(uint16_t, 16))(0x3516L, (VECTOR(uint16_t, 4))(0x3516L, (VECTOR(uint16_t, 2))(0x3516L, 65535UL), 65535UL), 65535UL, 0x3516L, 65535UL, (VECTOR(uint16_t, 2))(0x3516L, 65535UL), (VECTOR(uint16_t, 2))(0x3516L, 65535UL), 0x3516L, 65535UL, 0x3516L, 65535UL);
        int32_t l_1300 = (-1L);
        int16_t l_1303 = 0x468BL;
        VECTOR(uint8_t, 4) l_1318 = (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0x01L), 0x01L);
        VECTOR(int8_t, 4) l_1325 = (VECTOR(int8_t, 4))(0x10L, (VECTOR(int8_t, 2))(0x10L, 0x18L), 0x18L);
        int64_t **l_1328[1];
        int64_t ***l_1327[1];
        VECTOR(uint8_t, 2) l_1334 = (VECTOR(uint8_t, 2))(255UL, 0x99L);
        VECTOR(uint8_t, 2) l_1335 = (VECTOR(uint8_t, 2))(0x51L, 251UL);
        VECTOR(int8_t, 2) l_1336 = (VECTOR(int8_t, 2))(1L, (-2L));
        uint8_t *l_1347 = (void*)0;
        uint8_t *l_1348 = (void*)0;
        uint8_t *l_1349 = (void*)0;
        uint8_t *l_1350 = (void*)0;
        uint64_t l_1351 = 8UL;
        uint32_t *l_1353[6][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1328[i] = &p_1906->g_1257[0][1];
        for (i = 0; i < 1; i++)
            l_1327[i] = &l_1328[0];
        for (p_1906->g_46 = (-11); (p_1906->g_46 != 15); p_1906->g_46++)
        { /* block id: 25 */
            uint32_t l_67 = 0UL;
            int32_t *l_1279[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int16_t *l_1297 = (void*)0;
            int16_t *l_1298 = (void*)0;
            int16_t *l_1299[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint16_t ****l_1304 = &l_1291;
            uint16_t *****l_1305 = (void*)0;
            uint16_t *****l_1306 = &l_1304;
            int8_t *l_1309 = (void*)0;
            int8_t *l_1310 = (void*)0;
            int8_t *l_1311 = (void*)0;
            int8_t *l_1312 = (void*)0;
            int i;
            (1 + 1);
        }
        if ((atomic_inc(&p_1906->g_atomic_input[7 * get_linear_group_id() + 1]) == 1))
        { /* block id: 523 */
            int32_t l_1314 = 6L;
            int32_t *l_1313 = &l_1314;
            int32_t *l_1315 = &l_1314;
            l_1315 = l_1313;
            unsigned int result = 0;
            result += l_1314;
            atomic_add(&p_1906->g_special_values[7 * get_linear_group_id() + 1], result);
        }
        else
        { /* block id: 525 */
            (1 + 1);
        }
        (**p_1906->g_155) = (-1L);
        (**p_1906->g_155) = ((l_1274 ^= (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(l_1318.wxwxzzxzyyyxyxzx)).s5b, (uint8_t)(p_1906->g_1352 = (safe_rshift_func_uint8_t_u_u((0xBC8FL ^ ((l_1308 = ((safe_div_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_1325.yxzwxyyzwwzwyzxz)).sf, (l_1326 == (p_1906->g_1329[7] = (void*)0)))) , (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((p_1906->g_35[5] = ((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(l_1334.xxyyyxxx)).odd, ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(255UL, ((VECTOR(uint8_t, 2))(l_1335.yx)), 1UL)).xxzzzxzxxzwwwzyw, ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(l_1336.yy)), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(p_1906->g_1337.xyxzzwxwwxyyxwxw)).s5f, ((VECTOR(int8_t, 4))(l_1338.sabd9)).odd)))))), ((VECTOR(int8_t, 8))((((void*)0 != l_1339) , ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 2))(l_1340.s02)).xxyy, (int8_t)((safe_sub_func_uint16_t_u_u(l_1336.y, ((l_1340.s7 | 1L) < ((safe_div_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((((p_41 != (*p_1906->g_865)) , l_1325.w) >= GROUP_DIVERGE(2, 1)), 2)) < 0x6CL) ^ GROUP_DIVERGE(1, 1)), l_1338.sd)) & 65535UL)))) && l_1308), (int8_t)l_1303))).xxxyyyzy, ((VECTOR(int8_t, 8))(1L))))).s5), ((VECTOR(int8_t, 4))((-1L))), (-1L), 5L, 0x74L)).s10))).yxyxxxyyxxxxyxxx))).sb5be))).z), l_1325.z)), l_1340.s0))), l_1351)) ^ 0x0B3913D19CC495C0L)) , l_1335.y)), 1)))))).odd, l_1303))) > 4294967295UL);
    }
    return p_41;
}


/* ------------------------------------------ */
/* 
 * reads : p_1906->g_171 p_1906->g_751 p_1906->g_1210 p_1906->g_1219 p_1906->g_1224 p_1906->g_1246 p_1906->g_1185 p_1906->g_180 p_1906->g_35 p_1906->g_749 p_1906->g_780 p_1906->g_1265
 * writes: p_1906->g_180 p_1906->g_35 p_1906->g_1257
 */
int32_t  func_56(int32_t * p_57, int16_t  p_58, int32_t  p_59, struct S0 * p_1906)
{ /* block id: 478 */
    uint64_t l_1196 = 18446744073709551615UL;
    uint8_t *l_1211[6][6] = {{&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5]},{&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5]},{&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5]},{&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5]},{&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5]},{&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5],&p_1906->g_35[5]}};
    int32_t l_1212 = 7L;
    int8_t *l_1221 = (void*)0;
    int8_t **l_1220 = &l_1221;
    int32_t l_1222 = 0x2D6A6922L;
    VECTOR(int8_t, 2) l_1227 = (VECTOR(int8_t, 2))(0x63L, (-1L));
    int32_t l_1251 = 0L;
    int32_t l_1252 = 0x4B2E8529L;
    int64_t *l_1256[2];
    int64_t **l_1255[7] = {&l_1256[0],&l_1256[0],&l_1256[0],&l_1256[0],&l_1256[0],&l_1256[0],&l_1256[0]};
    uint16_t ***l_1259[9];
    uint16_t ****l_1260 = &l_1259[3];
    int64_t *l_1261 = (void*)0;
    int32_t *l_1262 = (void*)0;
    int32_t *l_1263 = (void*)0;
    int32_t *l_1264 = &l_1252;
    int32_t *l_1266 = (void*)0;
    int32_t *l_1267[7][4];
    uint16_t l_1268 = 0xB2B3L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1256[i] = (void*)0;
    for (i = 0; i < 9; i++)
        l_1259[i] = &p_1906->g_811;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
            l_1267[i][j] = (void*)0;
    }
    (*p_1906->g_1224) = (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1906->local_0_offset, get_local_id(0), 10), 7)) == (l_1222 = (safe_rshift_func_uint8_t_u_s((l_1196 ^ ((safe_mod_func_uint64_t_u_u(((safe_div_func_int8_t_s_s((p_1906->g_171.z && ((((safe_div_func_uint8_t_u_u((((safe_unary_minus_func_uint8_t_u((p_1906->g_751 != p_1906->g_751))) != ((((safe_mul_func_int16_t_s_s(l_1196, 0x6989L)) | ((safe_rshift_func_uint8_t_u_s((l_1212 &= (safe_add_func_uint16_t_u_u((((VECTOR(uint16_t, 4))(p_1906->g_1210.s6655)).x && l_1196), (!l_1196)))), 6)) , ((safe_mul_func_uint16_t_u_u((~((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_59, GROUP_DIVERGE(2, 1))), l_1196)) <= p_1906->g_1219)), l_1196)) < 0x11L))) , (void*)0) == l_1220)) & 0UL), p_59)) ^ l_1196) & l_1196) && 0x7A74L)), p_58)) | 0x0E2F7683FDAB3050L), 2UL)) == l_1196)), p_59)))), l_1196)), p_59));
    l_1268 |= (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_1227.yxxxxyxy)), 0x15L, ((VECTOR(int8_t, 4))((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((l_1212 &= ((VECTOR(uint8_t, 4))(0x84L, 0xB3L, 0x80L, 248UL)).z), (l_1222 | (safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 2))(p_1906->g_1246.s51)).xxyxxxxyxxxyyxxx))).s7 , l_1227.x), (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 2))(0x664BAC7E50CE111CL, 18446744073709551611UL)).xxxyxxyx))).s4, (safe_sub_func_int32_t_s_s((l_1251 = (*p_1906->g_1185)), FAKE_DIVERGE(p_1906->local_2_offset, get_local_id(2), 10))))))), ((++p_1906->g_35[0]) == (GROUP_DIVERGE(2, 1) > ((p_1906->g_1257[0][1] = p_1906->g_749) == &p_1906->g_1258[5][0][2]))))), (((*l_1260) = l_1259[3]) == ((~((p_1906->g_780.z , (+((((*l_1264) = (&p_1906->g_1258[2][3][3] != (FAKE_DIVERGE(p_1906->group_0_offset, get_group_id(0), 10) , ((p_58 , 4294967295UL) , l_1261)))) >= p_58) <= p_58))) , (-1L))) , &p_1906->g_811)))), p_59)), p_1906->g_1265))))), p_59)), p_59)), p_58)), 0L, 0x5CL, 0x0DL)), (-10L), 0x31L, 0x0BL)).se7, ((VECTOR(int8_t, 2))(0x4BL)), ((VECTOR(int8_t, 2))(6L))))).even, p_59));
    return (*p_1906->g_1185);
}


/* ------------------------------------------ */
/* 
 * reads : p_1906->g_5 p_1906->g_137 p_1906->g_142 p_1906->g_155 p_1906->g_156 p_1906->g_46 p_1906->g_35 p_1906->g_2 p_1906->g_680 p_1906->g_726 p_1906->g_8 p_1906->g_655 p_1906->g_157 p_1906->g_64 p_1906->g_235 p_1906->g_326 p_1906->g_170 p_1906->g_739 p_1906->g_309 p_1906->g_180 p_1906->g_758 p_1906->g_65 p_1906->g_53 p_1906->g_780 p_1906->g_688 p_1906->l_comm_values p_1906->g_810 p_1906->g_865 p_1906->g_875 p_1906->g_881 p_1906->g_569 p_1906->g_291 p_1906->g_158 p_1906->g_176 p_1906->g_126 p_1906->g_929 p_1906->g_52 p_1906->g_463 p_1906->g_311 p_1906->g_1036 p_1906->g_332 p_1906->g_284 p_1906->g_790 p_1906->g_1175 p_1906->g_1185 p_1906->g_1186
 * writes: p_1906->g_137 p_1906->g_142 p_1906->g_35 p_1906->g_180 p_1906->g_235 p_1906->g_309 p_1906->g_749 p_1906->g_750 p_1906->g_751 p_1906->g_156 p_1906->g_569 p_1906->g_811 p_1906->g_878 p_1906->g_176 p_1906->g_881 p_1906->g_929 p_1906->g_855 p_1906->g_311 p_1906->g_291 p_1906->g_1050 p_1906->g_332
 */
int32_t * func_60(int64_t  p_61, struct S0 * p_1906)
{ /* block id: 31 */
    int32_t *l_70 = &p_1906->g_5;
    int32_t *l_71 = &p_1906->g_5;
    VECTOR(int64_t, 16) l_72 = (VECTOR(int64_t, 16))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x5926F2DC12F6744EL), 0x5926F2DC12F6744EL), 0x5926F2DC12F6744EL, 3L, 0x5926F2DC12F6744EL, (VECTOR(int64_t, 2))(3L, 0x5926F2DC12F6744EL), (VECTOR(int64_t, 2))(3L, 0x5926F2DC12F6744EL), 3L, 0x5926F2DC12F6744EL, 3L, 0x5926F2DC12F6744EL);
    uint16_t l_101 = 65535UL;
    uint64_t *l_136 = &p_1906->g_137;
    uint64_t **l_553[4];
    int32_t l_593 = 0x4622A03EL;
    int32_t l_594 = (-1L);
    int32_t l_597[2][7][4] = {{{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L},{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L},{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L},{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L},{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L},{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L},{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L}},{{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L},{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L},{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L},{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L},{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L},{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L},{(-3L),(-3L),0x1AAC8C6BL,0x02D878E9L}}};
    uint8_t *l_633 = &p_1906->g_35[5];
    uint64_t ***l_653 = &p_1906->g_157;
    int32_t *l_668 = &p_1906->g_8;
    uint8_t l_689 = 252UL;
    int16_t *l_727 = (void*)0;
    VECTOR(int32_t, 8) l_741 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 4L), 4L), 4L, 5L, 4L);
    VECTOR(uint16_t, 16) l_760 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint16_t, 2))(0UL, 1UL), (VECTOR(uint16_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
    uint64_t *l_770 = &p_1906->g_498;
    uint64_t **l_769[9] = {&l_770,&l_770,&l_770,&l_770,&l_770,&l_770,&l_770,&l_770,&l_770};
    int16_t l_801 = 0x590EL;
    VECTOR(uint8_t, 8) l_817 = (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0x73L), 0x73L), 0x73L, 3UL, 0x73L);
    int32_t l_838 = 0L;
    uint32_t l_839 = 4294967292UL;
    VECTOR(int16_t, 2) l_876 = (VECTOR(int16_t, 2))(1L, (-1L));
    VECTOR(int16_t, 16) l_877 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x5F04L), 0x5F04L), 0x5F04L, 0L, 0x5F04L, (VECTOR(int16_t, 2))(0L, 0x5F04L), (VECTOR(int16_t, 2))(0L, 0x5F04L), 0L, 0x5F04L, 0L, 0x5F04L);
    VECTOR(uint8_t, 16) l_889 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL, (VECTOR(uint8_t, 2))(1UL, 255UL), (VECTOR(uint8_t, 2))(1UL, 255UL), 1UL, 255UL, 1UL, 255UL);
    VECTOR(uint8_t, 2) l_890 = (VECTOR(uint8_t, 2))(0x34L, 0xB1L);
    VECTOR(int8_t, 16) l_910 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x3FL), 0x3FL), 0x3FL, (-1L), 0x3FL, (VECTOR(int8_t, 2))((-1L), 0x3FL), (VECTOR(int8_t, 2))((-1L), 0x3FL), (-1L), 0x3FL, (-1L), 0x3FL);
    uint64_t l_922 = 6UL;
    int8_t *l_1021 = (void*)0;
    int8_t **l_1020 = &l_1021;
    VECTOR(uint64_t, 16) l_1024 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xE0A18E6982A61E42L), 0xE0A18E6982A61E42L), 0xE0A18E6982A61E42L, 1UL, 0xE0A18E6982A61E42L, (VECTOR(uint64_t, 2))(1UL, 0xE0A18E6982A61E42L), (VECTOR(uint64_t, 2))(1UL, 0xE0A18E6982A61E42L), 1UL, 0xE0A18E6982A61E42L, 1UL, 0xE0A18E6982A61E42L);
    int32_t l_1041 = 9L;
    int8_t l_1054 = 0x45L;
    int16_t **l_1060 = &l_727;
    VECTOR(int32_t, 2) l_1062 = (VECTOR(int32_t, 2))((-2L), 0x13BC32ABL);
    int16_t l_1081 = 6L;
    VECTOR(uint32_t, 8) l_1138 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL);
    uint16_t *l_1152 = (void*)0;
    uint16_t **l_1151 = &l_1152;
    uint32_t l_1165 = 0x0F8D6AAFL;
    int32_t *l_1184 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_553[i] = &l_136;
    atomic_or(&p_1906->g_atomic_reduction[get_linear_group_id()], ((safe_unary_minus_func_uint8_t_u(((safe_unary_minus_func_int32_t_s((((l_70 != (void*)0) , ((void*)0 == l_71)) || (*l_70)))) && 0xEAD213B74EAE5124L))) ^ ((VECTOR(int64_t, 8))(l_72.sd4c97a61)).s0) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1906->v_collective += p_1906->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if ((atomic_inc(&p_1906->l_atomic_input[4]) == 9))
    { /* block id: 34 */
        int32_t l_74 = (-1L);
        int32_t *l_73 = &l_74;
        int64_t l_75 = 0x0F805AAA48D7F838L;
        uint32_t l_76 = 0xE99C33BCL;
        VECTOR(int32_t, 2) l_77 = (VECTOR(int32_t, 2))((-2L), (-1L));
        VECTOR(int32_t, 16) l_78 = (VECTOR(int32_t, 16))(0x54FF34EAL, (VECTOR(int32_t, 4))(0x54FF34EAL, (VECTOR(int32_t, 2))(0x54FF34EAL, 0x35D179A9L), 0x35D179A9L), 0x35D179A9L, 0x54FF34EAL, 0x35D179A9L, (VECTOR(int32_t, 2))(0x54FF34EAL, 0x35D179A9L), (VECTOR(int32_t, 2))(0x54FF34EAL, 0x35D179A9L), 0x54FF34EAL, 0x35D179A9L, 0x54FF34EAL, 0x35D179A9L);
        VECTOR(int32_t, 4) l_79 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x41B3DFEAL), 0x41B3DFEAL);
        uint8_t l_80 = 0x1BL;
        VECTOR(int32_t, 4) l_81 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-4L)), (-4L));
        VECTOR(int32_t, 2) l_82 = (VECTOR(int32_t, 2))((-2L), (-1L));
        VECTOR(int32_t, 4) l_83 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x518219F0L), 0x518219F0L);
        VECTOR(int32_t, 4) l_84 = (VECTOR(int32_t, 4))(0x7A6358B8L, (VECTOR(int32_t, 2))(0x7A6358B8L, (-1L)), (-1L));
        uint32_t l_85 = 0UL;
        int8_t l_86 = 0x11L;
        VECTOR(int32_t, 4) l_87 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1924C0CEL), 0x1924C0CEL);
        uint32_t l_88 = 2UL;
        VECTOR(int32_t, 2) l_89 = (VECTOR(int32_t, 2))(1L, 0x78769263L);
        VECTOR(int32_t, 16) l_90 = (VECTOR(int32_t, 16))(0x138A0512L, (VECTOR(int32_t, 4))(0x138A0512L, (VECTOR(int32_t, 2))(0x138A0512L, 1L), 1L), 1L, 0x138A0512L, 1L, (VECTOR(int32_t, 2))(0x138A0512L, 1L), (VECTOR(int32_t, 2))(0x138A0512L, 1L), 0x138A0512L, 1L, 0x138A0512L, 1L);
        uint32_t l_91 = 4294967295UL;
        uint32_t l_92 = 4294967289UL;
        uint32_t l_93 = 0UL;
        int64_t l_94 = 0L;
        int16_t l_95 = 0x2773L;
        uint16_t l_96 = 6UL;
        uint16_t l_97 = 0xD60AL;
        int32_t *l_98 = (void*)0;
        int i;
        l_73 = l_73;
        l_98 = ((l_97 &= ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((*l_73) = (l_76 ^= ((VECTOR(int32_t, 4))(0x36627CDBL, l_75, 1L, 0x4B199FC8L)).x)), 1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_77.xxyxyxyyxyxyyyxx)).sdd9e)).wyywxyyy)), 0x438E4B99L, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(l_78.s34)), ((VECTOR(int32_t, 4))(l_79.yxwy)).hi))), (l_80 , 0x385723E8L), 4L, (-1L))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_81.zyyx)).even)).yyyyxyyyyxyyyyxx))).sb2, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_82.yyyyyxyyxxyxxxxy)).sb8d9)), ((VECTOR(int32_t, 16))(0x1D249FF5L, ((VECTOR(int32_t, 2))(l_83.xw)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_84.zxzywzyw)).s10)).hi, l_85, l_86, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(0x7D3AFC3CL, 0x6906189FL, (-10L), (-1L))).lo, ((VECTOR(int32_t, 4))(l_87.wyyx)).hi))).yxxx)), (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(0x6B367289L, l_88, 0x2464987AL, (-4L))).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_89.yyxx)).yyxwywwz)).s14, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_90.s83)), l_91, l_92, l_93, ((VECTOR(int32_t, 2))(0L)), 1L)), 0x473838C2L, (-9L), l_94, ((VECTOR(int32_t, 4))(0x0CEC1B3EL)), 0L)))).sd1))).xyyyxyyyyyxxxxxy)).s3 , l_95), l_96, 0x286A6E12L, ((VECTOR(int32_t, 2))(9L)), 0x0BF106CFL)).s207f))).lo))).yxxxxyyx, ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 8))(0x5DF05FF3L))))).s4) , (void*)0);
        for (l_83.w = 0; (l_83.w == 10); l_83.w = safe_add_func_int16_t_s_s(l_83.w, 5))
        { /* block id: 42 */
            l_73 = (void*)0;
        }
        unsigned int result = 0;
        result += l_74;
        result += l_75;
        result += l_76;
        result += l_77.y;
        result += l_77.x;
        result += l_78.sf;
        result += l_78.se;
        result += l_78.sd;
        result += l_78.sc;
        result += l_78.sb;
        result += l_78.sa;
        result += l_78.s9;
        result += l_78.s8;
        result += l_78.s7;
        result += l_78.s6;
        result += l_78.s5;
        result += l_78.s4;
        result += l_78.s3;
        result += l_78.s2;
        result += l_78.s1;
        result += l_78.s0;
        result += l_79.w;
        result += l_79.z;
        result += l_79.y;
        result += l_79.x;
        result += l_80;
        result += l_81.w;
        result += l_81.z;
        result += l_81.y;
        result += l_81.x;
        result += l_82.y;
        result += l_82.x;
        result += l_83.w;
        result += l_83.z;
        result += l_83.y;
        result += l_83.x;
        result += l_84.w;
        result += l_84.z;
        result += l_84.y;
        result += l_84.x;
        result += l_85;
        result += l_86;
        result += l_87.w;
        result += l_87.z;
        result += l_87.y;
        result += l_87.x;
        result += l_88;
        result += l_89.y;
        result += l_89.x;
        result += l_90.sf;
        result += l_90.se;
        result += l_90.sd;
        result += l_90.sc;
        result += l_90.sb;
        result += l_90.sa;
        result += l_90.s9;
        result += l_90.s8;
        result += l_90.s7;
        result += l_90.s6;
        result += l_90.s5;
        result += l_90.s4;
        result += l_90.s3;
        result += l_90.s2;
        result += l_90.s1;
        result += l_90.s0;
        result += l_91;
        result += l_92;
        result += l_93;
        result += l_94;
        result += l_95;
        result += l_96;
        result += l_97;
        atomic_add(&p_1906->l_special_values[4], result);
    }
    else
    { /* block id: 45 */
        (1 + 1);
    }
    if (l_101)
    { /* block id: 48 */
        uint32_t l_536[4];
        int8_t l_575 = 0x1AL;
        int32_t l_582 = 0L;
        int32_t l_587[8];
        int8_t l_589 = 9L;
        int32_t l_604 = 0x143F12D1L;
        int8_t l_606 = 0x3BL;
        int16_t l_607 = 0x1E1DL;
        uint64_t ***l_654 = &p_1906->g_157;
        int8_t *l_662 = &l_589;
        int32_t *l_667 = (void*)0;
        int32_t l_697 = 0x67742791L;
        VECTOR(int16_t, 8) l_738 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x3B4CL), 0x3B4CL), 0x3B4CL, (-1L), 0x3B4CL);
        int32_t *l_740[1][2];
        VECTOR(uint16_t, 16) l_742 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x226FL), 0x226FL), 0x226FL, 0UL, 0x226FL, (VECTOR(uint16_t, 2))(0UL, 0x226FL), (VECTOR(uint16_t, 2))(0UL, 0x226FL), 0UL, 0x226FL, 0UL, 0x226FL);
        VECTOR(int32_t, 2) l_743 = (VECTOR(int32_t, 2))((-6L), 0x17A5F6B3L);
        VECTOR(int32_t, 4) l_744 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
        VECTOR(int32_t, 16) l_745 = (VECTOR(int32_t, 16))(0x2EDFA925L, (VECTOR(int32_t, 4))(0x2EDFA925L, (VECTOR(int32_t, 2))(0x2EDFA925L, 0x75B63E9CL), 0x75B63E9CL), 0x75B63E9CL, 0x2EDFA925L, 0x75B63E9CL, (VECTOR(int32_t, 2))(0x2EDFA925L, 0x75B63E9CL), (VECTOR(int32_t, 2))(0x2EDFA925L, 0x75B63E9CL), 0x2EDFA925L, 0x75B63E9CL, 0x2EDFA925L, 0x75B63E9CL);
        VECTOR(int32_t, 4) l_746 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 9L), 9L);
        uint64_t *l_747 = &p_1906->g_498;
        uint64_t **l_748[4];
        VECTOR(uint16_t, 4) l_765 = (VECTOR(uint16_t, 4))(0xB6A1L, (VECTOR(uint16_t, 2))(0xB6A1L, 0x45BBL), 0x45BBL);
        uint64_t l_766 = 1UL;
        int64_t l_781 = 0x4003BEC314BBD98BL;
        uint16_t *l_809 = &p_1906->g_235;
        uint16_t **l_808[4][4] = {{&l_809,&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809,&l_809}};
        VECTOR(int32_t, 8) l_867 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        int i, j;
        for (i = 0; i < 4; i++)
            l_536[i] = 0xE1D37EA1L;
        for (i = 0; i < 8; i++)
            l_587[i] = 0L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_740[i][j] = (void*)0;
        }
        for (i = 0; i < 4; i++)
            l_748[i] = &l_747;
        for (l_101 = 24; (l_101 <= 39); l_101 = safe_add_func_uint8_t_u_u(l_101, 5))
        { /* block id: 51 */
            int32_t **l_104 = (void*)0;
            int32_t **l_105 = &l_71;
            VECTOR(uint64_t, 16) l_552 = (VECTOR(uint64_t, 16))(0x8D427448175EF37BL, (VECTOR(uint64_t, 4))(0x8D427448175EF37BL, (VECTOR(uint64_t, 2))(0x8D427448175EF37BL, 0x9CE1620FE6A10C12L), 0x9CE1620FE6A10C12L), 0x9CE1620FE6A10C12L, 0x8D427448175EF37BL, 0x9CE1620FE6A10C12L, (VECTOR(uint64_t, 2))(0x8D427448175EF37BL, 0x9CE1620FE6A10C12L), (VECTOR(uint64_t, 2))(0x8D427448175EF37BL, 0x9CE1620FE6A10C12L), 0x8D427448175EF37BL, 0x9CE1620FE6A10C12L, 0x8D427448175EF37BL, 0x9CE1620FE6A10C12L);
            VECTOR(uint32_t, 4) l_554 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x40D5BDC5L), 0x40D5BDC5L);
            VECTOR(int16_t, 4) l_559 = (VECTOR(int16_t, 4))(0x07C7L, (VECTOR(int16_t, 2))(0x07C7L, 0x74E6L), 0x74E6L);
            int32_t l_564 = 0x6E280CE2L;
            int32_t l_585 = (-1L);
            int32_t l_586 = 1L;
            int32_t l_590[6] = {1L,1L,1L,1L,1L,1L};
            int8_t l_602 = 0x60L;
            uint64_t l_609 = 0UL;
            VECTOR(uint32_t, 4) l_612 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x6F5824F9L), 0x6F5824F9L);
            VECTOR(uint64_t, 8) l_634 = (VECTOR(uint64_t, 8))(0x2F128B38D11BE8E9L, (VECTOR(uint64_t, 4))(0x2F128B38D11BE8E9L, (VECTOR(uint64_t, 2))(0x2F128B38D11BE8E9L, 1UL), 1UL), 1UL, 0x2F128B38D11BE8E9L, 1UL);
            VECTOR(uint64_t, 2) l_675 = (VECTOR(uint64_t, 2))(0x6FE595443FD9F6A3L, 18446744073709551615UL);
            VECTOR(int8_t, 4) l_683 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x75L), 0x75L);
            uint64_t ***l_692 = (void*)0;
            uint8_t *l_693 = &p_1906->g_35[5];
            int32_t l_698 = (-1L);
            uint32_t l_699 = 4294967295UL;
            int i;
            (*l_105) = (void*)0;
            for (p_61 = 0; (p_61 < (-25)); p_61--)
            { /* block id: 55 */
                uint64_t *l_125 = &p_1906->g_126;
                uint64_t **l_135 = (void*)0;
                int32_t l_140 = 1L;
                uint32_t *l_141 = &p_1906->g_142;
                uint32_t *l_542 = (void*)0;
                uint32_t **l_541 = &l_542;
                int32_t **l_544 = &p_1906->g_156;
                VECTOR(uint16_t, 8) l_558 = (VECTOR(uint16_t, 8))(0x3684L, (VECTOR(uint16_t, 4))(0x3684L, (VECTOR(uint16_t, 2))(0x3684L, 0x2142L), 0x2142L), 0x2142L, 0x3684L, 0x2142L);
                uint16_t *l_576 = (void*)0;
                int32_t l_583 = 2L;
                int32_t l_591 = 0x01C65793L;
                int32_t l_592 = 0L;
                int32_t l_595 = 6L;
                int32_t l_596 = 0x2424E334L;
                int32_t l_598 = 0x5C063DC2L;
                int32_t l_599 = 0L;
                int32_t l_600 = 9L;
                int32_t l_601 = 1L;
                VECTOR(int32_t, 16) l_603 = (VECTOR(int32_t, 16))(0x0B761212L, (VECTOR(int32_t, 4))(0x0B761212L, (VECTOR(int32_t, 2))(0x0B761212L, 3L), 3L), 3L, 0x0B761212L, 3L, (VECTOR(int32_t, 2))(0x0B761212L, 3L), (VECTOR(int32_t, 2))(0x0B761212L, 3L), 0x0B761212L, 3L, 0x0B761212L, 3L);
                VECTOR(int32_t, 2) l_605 = (VECTOR(int32_t, 2))(0x27D67E54L, 1L);
                VECTOR(int16_t, 2) l_627 = (VECTOR(int16_t, 2))(0x0416L, 1L);
                int8_t *l_665[10][2];
                int8_t **l_664 = &l_665[3][1];
                int i, j;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_665[i][j] = &l_602;
                }
                (1 + 1);
            }
            for (p_1906->g_137 = 18; (p_1906->g_137 <= 11); p_1906->g_137 = safe_sub_func_uint64_t_u_u(p_1906->g_137, 7))
            { /* block id: 284 */
                uint8_t l_710 = 3UL;
                int32_t *l_713 = &p_1906->g_53;
                for (p_1906->g_142 = 0; (p_1906->g_142 != 54); ++p_1906->g_142)
                { /* block id: 287 */
                    int32_t *l_706 = &l_594;
                    uint8_t *l_707 = &p_1906->g_35[5];
                    int32_t *l_708 = (void*)0;
                    int32_t *l_709[2][2][5] = {{{&l_697,(void*)0,&l_697,&l_697,(void*)0},{&l_697,(void*)0,&l_697,&l_697,(void*)0}},{{&l_697,(void*)0,&l_697,&l_697,(void*)0},{&l_697,(void*)0,&l_697,&l_697,(void*)0}}};
                    int i, j, k;
                    (*l_706) = 0L;
                    (*l_706) = ((void*)0 == l_707);
                    l_710++;
                }
                if ((**p_1906->g_155))
                    continue;
                return l_713;
            }
            if (p_61)
                break;
        }
        (*p_1906->g_726) = (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0x6174766EL, ((--(*l_633)) <= (p_1906->g_2[4] != (p_61 >= 0x8242L))))), (((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), p_61)), 5)) == ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x22EEEDC6L, 0L, (((((*l_136) ^= (safe_mod_func_uint64_t_u_u((7L <= ((*p_1906->g_156) >= (**p_1906->g_155))), FAKE_DIVERGE(p_1906->local_0_offset, get_local_id(0), 10)))) | (-1L)) >= 1L) && (*l_70)), p_61, 0x312A88B4L, ((VECTOR(int32_t, 4))(1L)), 0x4F99C988L, ((VECTOR(int32_t, 4))(0x7CBF1BACL)), 0x7DFC75D0L, (-10L))))).s8) < p_1906->g_680.y)));
        p_1906->g_309.sd ^= (((void*)0 != l_727) < (safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), ((((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((*l_668), ((void*)0 != (*p_1906->g_655)))), (p_1906->g_64.x && ((p_1906->g_235++) < ((((p_1906->g_326.s2 ^ (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(l_738.s22367503)).s1, p_1906->g_170.x))) > ((*l_662) |= p_61)) >= p_61) >= (*l_668)))))) & 0L) == p_1906->g_739[0]) == GROUP_DIVERGE(1, 1)))));
        if (((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_741.s3463152000575437)).lo, ((VECTOR(int32_t, 8))((p_61 | 0x0AL), ((*p_1906->g_726) &= (((VECTOR(uint16_t, 16))(l_742.s498902a3660804f2)).s9 || ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 4))(0UL, 1UL, 65535UL, 0xF2CDL)).even))).xxxyxyxxyxxxxyyy)).sf)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_743.yy)))), ((VECTOR(int32_t, 4))(0x32BD45F8L, ((VECTOR(int32_t, 2))((-9L), 0x121298D7L)), 1L)).odd))), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_744.yw)))), ((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(l_745.sb05f03d5)).odd, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(l_746.zw)).yxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x53EB7C11L, 0x45E0602BL)).yxxx)), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((p_1906->g_751 = (p_1906->g_750 = (p_1906->g_749 = l_747))) != (((((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((0x5358L > (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(p_1906->g_758.s0b)).even, (**p_1906->g_155)))), (safe_unary_minus_func_int32_t_s(0x6636D22AL)))), ((VECTOR(uint16_t, 2))(l_760.s83)).lo)) < (((safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((VECTOR(uint16_t, 16))(l_765.yywzzywywzyxyzww)).sc <= 0x6CA0L), l_766)), 1)) , ((safe_lshift_func_int16_t_s_u((*l_668), 9)) || p_1906->g_65.x)) < 0x67L)) , (void*)0) == l_769[7]) , (void*)0)), ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 8))(0x5B494DAFL)), 0x0E82DD68L, (-1L), 0x079149F5L)).s84, (int32_t)(*l_668)))).yyxy))).xzyxywyz)).even))).xwxxxzzy, (int32_t)0x199C47EEL, (int32_t)p_61))).lo, ((VECTOR(int32_t, 4))(0x1B4CE2F4L))))).ywzzxwzw)).s16))), p_61, 0x1577BECCL, 0x5F32EE3EL, 0x58E752F0L, 0x7F3F9E8AL)).s10))), 0x56334EC5L, 1L))))).s4)
        { /* block id: 307 */
            uint16_t l_773 = 0UL;
            int32_t l_782 = 0L;
            l_782 ^= (0xBF4D8205L && (safe_rshift_func_int16_t_s_s(l_773, ((p_1906->g_53 && (((safe_mod_func_uint64_t_u_u(((((*l_662) = ((safe_add_func_int16_t_s_s((((VECTOR(int8_t, 16))(p_1906->g_780.zxxzwwyxyxzywwyy)).sb < ((void*)0 == l_654)), (((((0xDCL <= (l_773 & 0L)) , p_61) , &l_582) != (void*)0) ^ p_61))) > p_61)) | p_61) & l_781), GROUP_DIVERGE(0, 1))) & l_773) < 0x550D3599L)) , l_773))));
        }
        else
        { /* block id: 310 */
            uint8_t l_812 = 255UL;
            int32_t *l_814[3];
            VECTOR(int16_t, 2) l_874 = (VECTOR(int16_t, 2))(1L, (-6L));
            VECTOR(int8_t, 2) l_882 = (VECTOR(int8_t, 2))(0L, 5L);
            int64_t *l_893 = &p_1906->g_176[5][1];
            int i, j;
            for (i = 0; i < 3; i++)
                l_814[i] = &l_597[0][5][0];
            for (l_575 = 26; (l_575 >= 23); --l_575)
            { /* block id: 313 */
                int64_t *l_799 = (void*)0;
                int64_t *l_800 = &l_781;
                int32_t l_802 = 0x7AAE7FDFL;
                int16_t *l_824 = (void*)0;
                uint64_t **l_843 = (void*)0;
                uint64_t ****l_852 = &p_1906->g_655;
                uint64_t ****l_853 = &p_1906->g_655;
                l_802 = (((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 16))(0xB7B7523CF9AD284FL, 18446744073709551615UL, 18446744073709551615UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0x3632157365BB4902L, 0x42AD8F86C7E795B0L)))).xyyy)), 18446744073709551606UL, p_61, 7UL, (safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 4))(p_1906->g_790.s04bb)).ywxzyyxz, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))(p_1906->g_498, ((VECTOR(uint32_t, 2))(0x1E3F40A0L, 1UL)), 8UL)).yyxywwywxywyxxyz, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(4294967289UL, 4294967294UL, 0x3536A4C1L, (+((safe_div_func_int16_t_s_s((+(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(p_1906->g_793.sd09e4100)), (int64_t)(&l_587[6] != ((safe_sub_func_uint64_t_u_u((((VECTOR(uint64_t, 8))(p_1906->g_796.yxzwzyyw)).s0 <= 0x0A7164385E2BDBF9L), ((1UL | (safe_mod_func_int64_t_s_s(((*l_800) = p_1906->g_532.s4), (p_61 | p_61)))) > (-3L)))) , (void*)0))))).s7 & l_801)), p_1906->g_45)) , 0xFB96343AL)), 0x670A0CA5L, ((VECTOR(uint32_t, 8))(1UL)), ((VECTOR(uint32_t, 2))(0x0D16B974L)), 0x358B92B8L)).s70)).xxxyxyxxxxxxxxyy, ((VECTOR(uint32_t, 16))(0UL))))).s4d1f)).zzywxxyz, ((VECTOR(uint32_t, 8))(1UL))))).s16, ((VECTOR(uint32_t, 2))(4294967295UL))))).xyyy)).y)), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(18446744073709551615UL)))).s79ef, ((VECTOR(uint64_t, 4))(4UL))))).x, p_61)), 0)) ^ p_1906->g_688.x) && p_1906->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1906->tid, 33))]);
                for (l_589 = (-4); (l_589 == (-2)); l_589 = safe_add_func_uint16_t_u_u(l_589, 1))
                { /* block id: 318 */
                    int32_t **l_805 = &l_740[0][0];
                    (*l_805) = ((*p_1906->g_155) = (void*)0);
                    for (p_1906->g_569 = 6; (p_1906->g_569 != (-8)); p_1906->g_569--)
                    { /* block id: 323 */
                        if (l_802)
                            break;
                        (*p_1906->g_810) = l_808[2][2];
                    }
                }
            }
            if (p_61)
            { /* block id: 360 */
                return (*p_1906->g_155);
            }
            else
            { /* block id: 362 */
                uint8_t *l_860 = &l_812;
                uint8_t **l_861 = &l_633;
                uint32_t *l_862 = &l_536[1];
                l_597[0][5][0] = ((+((*l_862) = (((*l_861) = l_860) != &p_1906->g_35[5]))) ^ (safe_div_func_uint8_t_u_u((p_1906->g_865 != &p_1906->g_866), p_1906->g_2[6])));
                (*p_1906->g_726) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_867.s2644)).yzyyxyyzxyyyywxz)).sb;
            }
            (*p_1906->g_155) = &l_593;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1906->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[(safe_mod_func_uint32_t_u_u((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-9L), 1L)), 0L, 1L, (safe_add_func_int64_t_s_s((0x7B7AL == (p_1906->g_878 = ((safe_rshift_func_int8_t_s_u(p_1906->g_2[1], 3)) < ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(l_874.yyxyyxyxyxxyyyyx)), ((VECTOR(int16_t, 8))(p_1906->g_875.yyxyxyxx)).s4040541236571455))))).sc2, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(l_876.yyxyyyxx)).hi, ((VECTOR(int16_t, 16))(l_877.s9a14c1f4e1e7309f)).s77e4))).even))).xyyyyxyyxyxxxxxx)).s07)))).hi))), ((safe_rshift_func_int16_t_s_s((p_61 < ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(p_1906->g_881.s1443513660644623)).sa2, ((VECTOR(int8_t, 8))(l_882.xyyxxyyy)).s30))).odd), 12)) > ((*l_633) = (p_61 & ((*l_893) = ((p_61 != 8UL) , (safe_rshift_func_int16_t_s_s((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))((safe_lshift_func_int8_t_s_s(((p_61 <= ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(l_889.s765aa0e6)).s66, ((VECTOR(uint8_t, 16))(l_890.yyyyxyyyxxyxyxyy)).s40))).odd, 0x39L)) <= (safe_rshift_func_uint8_t_u_s((~p_1906->g_569), 4)))) != p_61), 2)), 1L, (-3L), (-7L), (-1L), ((VECTOR(int16_t, 4))(0x0C15L)), (-1L), 1L, (-9L), (*l_70), p_61, (-7L), 0L)).s32)), ((VECTOR(int16_t, 4))(0x1374L)), ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 2))(0L)), p_1906->g_291.s0, ((VECTOR(int16_t, 2))((-1L))), 6L)).s3e)).yyyyxyyy)).even))), p_61, 5L, 1L, (-1L))).s6 == p_61), p_61))))))))), 1L, ((VECTOR(int64_t, 4))(0L)), ((VECTOR(int64_t, 2))(0L)), (-6L), p_61, 0x026B6DC032A0C0C9L, (-1L))).s6 , p_61), 10))][(safe_mod_func_uint32_t_u_u(p_1906->tid, 33))]));
        }
    }
    else
    { /* block id: 376 */
        uint8_t *l_896[8];
        int8_t *l_897 = &p_1906->g_569;
        int8_t *l_906 = (void*)0;
        int8_t *l_907 = (void*)0;
        int32_t l_908 = 0x1550F2F2L;
        VECTOR(int8_t, 4) l_909 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x57L), 0x57L);
        int32_t l_917 = 0x4B6E129BL;
        int8_t *l_918 = (void*)0;
        uint64_t l_962 = 0x9965A5774033E2C8L;
        uint64_t l_989 = 0x66771CA7F233613BL;
        int32_t l_1052 = 0L;
        uint64_t ****l_1053 = &p_1906->g_655;
        int32_t **l_1055 = (void*)0;
        int32_t *l_1085 = &p_1906->g_180[2][3];
        VECTOR(int16_t, 2) l_1109 = (VECTOR(int16_t, 2))(0x3697L, 6L);
        uint16_t *l_1123[2];
        VECTOR(int64_t, 8) l_1181 = (VECTOR(int64_t, 8))(0x7C12F3203EAC2C77L, (VECTOR(int64_t, 4))(0x7C12F3203EAC2C77L, (VECTOR(int64_t, 2))(0x7C12F3203EAC2C77L, 0L), 0L), 0L, 0x7C12F3203EAC2C77L, 0L);
        int i;
        for (i = 0; i < 8; i++)
            l_896[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_1123[i] = (void*)0;
        if (((safe_lshift_func_int8_t_s_u(((*l_897) = (l_896[4] != &l_689)), 7)) < (p_1906->g_881.s1 = ((safe_mod_func_int64_t_s_s((*l_71), (safe_mod_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(0x7BL, 1)) <= ((*l_633) = (0x14F5L | (safe_add_func_uint32_t_u_u(((l_908 = (-6L)) > ((VECTOR(int8_t, 8))(0x6BL, (-3L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_909.zw)))), ((VECTOR(int8_t, 2))(l_910.sef)), 0x50L, (-3L))).s1), (l_917 &= (safe_sub_func_int64_t_s_s(((*l_71) , ((&l_593 != ((safe_mod_func_int64_t_s_s(p_61, p_1906->g_170.x)) , (void*)0)) == 0L)), l_909.z)))))))) >= p_61), (-10L))))) <= 0x68L))))
        { /* block id: 382 */
            int32_t *l_921[4][7] = {{&p_1906->g_5,(void*)0,(void*)0,&p_1906->g_180[2][3],(void*)0,&p_1906->g_180[2][3],(void*)0},{&p_1906->g_5,(void*)0,(void*)0,&p_1906->g_180[2][3],(void*)0,&p_1906->g_180[2][3],(void*)0},{&p_1906->g_5,(void*)0,(void*)0,&p_1906->g_180[2][3],(void*)0,&p_1906->g_180[2][3],(void*)0},{&p_1906->g_5,(void*)0,(void*)0,&p_1906->g_180[2][3],(void*)0,&p_1906->g_180[2][3],(void*)0}};
            int32_t l_959 = 0x2B5C1BB2L;
            int16_t l_988 = 0x7C14L;
            VECTOR(uint32_t, 16) l_999 = (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x1F701064L), 0x1F701064L), 0x1F701064L, 4294967290UL, 0x1F701064L, (VECTOR(uint32_t, 2))(4294967290UL, 0x1F701064L), (VECTOR(uint32_t, 2))(4294967290UL, 0x1F701064L), 4294967290UL, 0x1F701064L, 4294967290UL, 0x1F701064L);
            int8_t l_1059 = 0x1EL;
            uint64_t *l_1076 = (void*)0;
            int32_t *l_1180 = &l_593;
            int i, j;
            if ((((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(249UL, 253UL)).yyxy)))).y || (safe_lshift_func_int8_t_s_u(0x47L, 5))) , GROUP_DIVERGE(0, 1)) , (l_922 = (*l_71))))
            { /* block id: 384 */
                uint16_t *l_944[9][9][3] = {{{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101}},{{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101}},{{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101}},{{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101}},{{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101}},{{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101}},{{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101}},{{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101}},{{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101},{&p_1906->g_855[2][3],&p_1906->g_855[2][3],&l_101}}};
                int64_t l_945 = 0x68D00B5F003C2F52L;
                uint8_t l_946 = 255UL;
                int32_t l_960 = 7L;
                int32_t l_961 = 1L;
                uint16_t ***l_971 = (void*)0;
                uint64_t l_986 = 0UL;
                int8_t **l_1012 = &l_906;
                VECTOR(uint8_t, 4) l_1075 = (VECTOR(uint8_t, 4))(0x53L, (VECTOR(uint8_t, 2))(0x53L, 0xA8L), 0xA8L);
                VECTOR(uint64_t, 16) l_1101 = (VECTOR(uint64_t, 16))(0xBFA35EAA35D9C039L, (VECTOR(uint64_t, 4))(0xBFA35EAA35D9C039L, (VECTOR(uint64_t, 2))(0xBFA35EAA35D9C039L, 0xF22A21BFE8C6AF64L), 0xF22A21BFE8C6AF64L), 0xF22A21BFE8C6AF64L, 0xBFA35EAA35D9C039L, 0xF22A21BFE8C6AF64L, (VECTOR(uint64_t, 2))(0xBFA35EAA35D9C039L, 0xF22A21BFE8C6AF64L), (VECTOR(uint64_t, 2))(0xBFA35EAA35D9C039L, 0xF22A21BFE8C6AF64L), 0xBFA35EAA35D9C039L, 0xF22A21BFE8C6AF64L, 0xBFA35EAA35D9C039L, 0xF22A21BFE8C6AF64L);
                VECTOR(int16_t, 2) l_1106 = (VECTOR(int16_t, 2))((-1L), 0L);
                VECTOR(int16_t, 2) l_1107 = (VECTOR(int16_t, 2))(0x6BDAL, 0x7878L);
                int i, j, k;
                l_908 |= 0x08D37173L;
                if ((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((((*p_1906->g_726) = (((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), ((((GROUP_DIVERGE(0, 1) , (**p_1906->g_655)) == (**l_653)) , &p_1906->g_35[4]) == &p_1906->g_35[5]))) , &l_633) == (p_1906->g_929 = &l_633))) >= ((l_917 &= ((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((((VECTOR(int16_t, 4))(((safe_lshift_func_int16_t_s_u(1L, (p_1906->g_855[2][0] = (safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_1906->g_137, 7)), (safe_rshift_func_int16_t_s_u((-1L), p_61))))))) != (-7L)), (-7L), 0x266FL, (-2L))).w | p_1906->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1906->tid, 33))]), p_61)) >= 0x78L), l_945)) < p_61), p_1906->g_65.y)) >= 0L)) != p_61)) == l_946), p_1906->g_176[5][1])), p_1906->g_126)))
                { /* block id: 390 */
                    l_741.s2 = (((((((void*)0 == &p_1906->g_751) | ((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_1906->local_0_offset, get_local_id(0), 10), GROUP_DIVERGE(0, 1))) , (-5L))) ^ p_61) ^ (+0x65L)) >= ((&p_1906->g_750 != (void*)0) | (((safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((+(safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((l_908 = l_909.y), (safe_div_func_uint32_t_u_u((p_1906->g_739[0] , p_61), 0x2AC663E2L)))), l_959))) != 0x6EL), 1UL)), 0x17A358887AC4D89DL)) == 0L) < p_61))) ^ p_61);
                    l_962--;
                }
                else
                { /* block id: 394 */
                    VECTOR(int16_t, 16) l_970 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-5L)), (-5L)), (-5L), 1L, (-5L), (VECTOR(int16_t, 2))(1L, (-5L)), (VECTOR(int16_t, 2))(1L, (-5L)), 1L, (-5L), 1L, (-5L));
                    uint32_t *l_984 = (void*)0;
                    uint32_t *l_985 = &p_1906->g_142;
                    int32_t l_987 = (-5L);
                    int32_t *l_990 = &l_908;
                    uint64_t ****l_1011[9][2][5] = {{{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655},{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655}},{{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655},{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655}},{{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655},{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655}},{{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655},{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655}},{{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655},{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655}},{{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655},{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655}},{{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655},{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655}},{{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655},{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655}},{{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655},{&p_1906->g_655,&l_653,&p_1906->g_655,&l_653,&p_1906->g_655}}};
                    uint16_t ***l_1047 = &p_1906->g_811;
                    int i, j, k;
                    l_990 = &l_960;
                    if ((l_909.y , ((((-9L) || (p_61 || ((*p_1906->g_156) & (((safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((-1L), (((**p_1906->g_929) & ((safe_add_func_uint16_t_u_u(l_909.y, (safe_mul_func_uint16_t_u_u((*l_990), (((((((VECTOR(uint32_t, 8))(l_999.s8240c5ed)).s4 <= ((safe_add_func_uint8_t_u_u((**p_1906->g_929), p_61)) & p_61)) || (*l_71)) && l_946) > l_961) >= (*l_71)))))) | l_961)) , p_1906->g_52.s6))), 0x21CB47B5L)) != l_946) | GROUP_DIVERGE(1, 1))))) <= p_61) ^ 0x65FCB6BA2C848163L)))
                    { /* block id: 400 */
                        int32_t l_1004 = 0L;
                        int32_t l_1010 = 0x1D759FB8L;
                        int32_t l_1019 = 0L;
                        int64_t *l_1035[1][8][5] = {{{(void*)0,&p_1906->g_176[5][1],(void*)0,(void*)0,&p_1906->g_176[5][1]},{(void*)0,&p_1906->g_176[5][1],(void*)0,(void*)0,&p_1906->g_176[5][1]},{(void*)0,&p_1906->g_176[5][1],(void*)0,(void*)0,&p_1906->g_176[5][1]},{(void*)0,&p_1906->g_176[5][1],(void*)0,(void*)0,&p_1906->g_176[5][1]},{(void*)0,&p_1906->g_176[5][1],(void*)0,(void*)0,&p_1906->g_176[5][1]},{(void*)0,&p_1906->g_176[5][1],(void*)0,(void*)0,&p_1906->g_176[5][1]},{(void*)0,&p_1906->g_176[5][1],(void*)0,(void*)0,&p_1906->g_176[5][1]},{(void*)0,&p_1906->g_176[5][1],(void*)0,(void*)0,&p_1906->g_176[5][1]}}};
                        int i, j, k;
                        p_1906->g_311.s1 ^= (safe_sub_func_int8_t_s_s(l_1004, ((!(safe_div_func_int8_t_s_s((l_1004 , (0xCDL | (**p_1906->g_929))), (((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0x8690L, 0xB503L)).even, (((l_1010 = (safe_unary_minus_func_uint32_t_u(p_61))) & ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((+(((l_1011[3][0][1] == &p_1906->g_655) >= ((l_1012 == ((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((~(safe_mul_func_int8_t_s_s(((l_1019 = ((((&p_1906->g_655 == &p_1906->g_655) < (*p_1906->g_726)) > (*l_70)) >= 4L)) == 0xBFL), 0UL))), (*l_990))) || (*p_1906->g_726)), 4294967295UL)) , l_1020)) || FAKE_DIVERGE(p_1906->group_0_offset, get_group_id(0), 10))) | GROUP_DIVERGE(2, 1))), 0x33E09D92D80F1A96L, 0x13CB8DE4DFBF248AL, ((VECTOR(int64_t, 2))((-9L))), 0x0DF15B220D6B01E0L, ((VECTOR(int64_t, 4))(1L)), p_1906->g_688.y, 0x55225B807BE5310BL, ((VECTOR(int64_t, 4))(0x68A8A81B2084DD33L)))).sb0)))).even > p_61) , (*l_990))) ^ (*p_1906->g_156)))) , (-7L)) | 1UL)))) | p_1906->g_463.s0)));
                        l_921[1][0] = &l_961;
                        (*l_990) = ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(l_1024.s6b)).hi, ((safe_div_func_uint8_t_u_u((0xF377L ^ 0x49EAL), ((p_61 >= ((l_962 , (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((--p_1906->g_291.s5), (FAKE_DIVERGE(p_1906->global_2_offset, get_global_id(2), 10) && p_61))), (**p_1906->g_929)))) ^ (l_961 < (((safe_lshift_func_uint16_t_u_u(((l_770 != (p_61 , l_1035[0][7][4])) == FAKE_DIVERGE(p_1906->global_2_offset, get_global_id(2), 10)), p_61)) , 0x190DL) || p_61)))) | (*l_70)))) | p_1906->g_1036))) , p_61);
                    }
                    else
                    { /* block id: 407 */
                        int16_t *l_1042 = (void*)0;
                        int16_t *l_1043 = (void*)0;
                        int16_t *l_1044 = (void*)0;
                        int16_t *l_1045 = (void*)0;
                        int16_t *l_1046[2];
                        uint16_t ****l_1048 = (void*)0;
                        uint16_t ****l_1049[1][3];
                        int32_t l_1051 = 1L;
                        int32_t ***l_1056 = &p_1906->g_155;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1046[i] = &l_801;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_1049[i][j] = (void*)0;
                        }
                        l_1052 ^= ((p_61 && ((p_61 , ((safe_lshift_func_int16_t_s_s(0x7AE4L, ((((*l_990) = (!(p_61 != (safe_add_func_uint16_t_u_u(l_1041, (l_908 = ((VECTOR(int16_t, 2))(7L, 0x08DBL)).even)))))) == (l_1047 == (p_1906->g_1050 = (void*)0))) & (((*l_633) = (**p_1906->g_929)) > (0x0904E1E3769E83A1L ^ l_1051))))) ^ (-1L))) || 5L)) == l_917);
                        (*p_1906->g_155) = &l_987;
                        (**p_1906->g_155) = (*p_1906->g_726);
                    }
                    if (((*l_990) < ((safe_div_func_int64_t_s_s((0x6C16E284L >= p_61), p_61)) <= p_1906->g_758.s9)))
                    { /* block id: 417 */
                        int32_t *l_1061[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1061[i] = &p_1906->g_5;
                        (*l_990) = (l_1059 >= 0x43L);
                        l_1060 = &l_727;
                        (*p_1906->g_155) = l_1061[0];
                        l_1081 &= ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_61, (-8L), 7L, (-1L))), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))((!p_61), ((VECTOR(int32_t, 8))(0x579AFD8FL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1062.yyyy)).zxwzxxyywzzzyywy)).s9b19)), 2L, 1L, 0x5FEEE08FL)), (((((safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((l_960 |= ((p_61 & (0UL >= (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_1075.wxyzzxxz)).s2, 4)), (((void*)0 == l_1076) < p_61))), (safe_rshift_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((&l_727 != (void*)0), 8L)) > 1L), 3)))))) , p_61)), l_961)), (*p_1906->g_156))), p_61)) >= p_61) && 0x6E2DL) , (-4L)) < 0x5C75L), p_61, 0x279FAE91L, (-3L), ((VECTOR(int32_t, 2))((-1L))), 0x5B7A9CFAL)).saccd, ((VECTOR(int32_t, 4))((-6L)))))), ((VECTOR(int32_t, 8))(0L)), 0x6057E834L, 0x728EB53EL, 0x3B4D6269L, 4L)).odd)).lo, ((VECTOR(int32_t, 4))((-5L)))))), ((VECTOR(int32_t, 2))(0x6B3D29F7L)), 0x71F99CC7L, 0x34C2282EL, ((VECTOR(int32_t, 2))((-8L))), 0x48698978L, 0x0C0901D0L)).lo, (int32_t)(*l_70)))).s4;
                    }
                    else
                    { /* block id: 423 */
                        int32_t *l_1082 = &l_1041;
                        int32_t *l_1083[4] = {&l_1041,&l_1041,&l_1041,&l_1041};
                        int32_t *l_1084 = &l_1041;
                        int i;
                        return l_1085;
                    }
                }
                for (p_1906->g_332 = 0; (p_1906->g_332 >= 17); p_1906->g_332 = safe_add_func_uint32_t_u_u(p_1906->g_332, 3))
                { /* block id: 429 */
                    uint32_t *l_1115 = &p_1906->g_142;
                    int16_t *l_1116 = &l_988;
                    int32_t l_1117 = (-1L);
                    (1 + 1);
                }
                (*p_1906->g_726) ^= (!(-1L));
            }
            else
            { /* block id: 458 */
                uint16_t l_1160 = 65529UL;
                int32_t l_1168 = 0x421165AFL;
                int32_t l_1169 = 0x456FA276L;
                int32_t l_1170 = 3L;
                int32_t l_1171[4][8] = {{(-1L),1L,0x282225F2L,0L,1L,0L,0x282225F2L,1L},{(-1L),1L,0x282225F2L,0L,1L,0L,0x282225F2L,1L},{(-1L),1L,0x282225F2L,0L,1L,0L,0x282225F2L,1L},{(-1L),1L,0x282225F2L,0L,1L,0L,0x282225F2L,1L}};
                uint8_t l_1172 = 249UL;
                int i, j;
                (*l_1085) = ((safe_lshift_func_int16_t_s_s((l_1160 || (safe_rshift_func_int16_t_s_u((((p_61 || (((safe_lshift_func_uint16_t_u_s(FAKE_DIVERGE(p_1906->global_2_offset, get_global_id(2), 10), (&l_653 == ((0x30L > ((&l_1160 != (void*)0) == ((*l_136) &= l_1165))) , &l_653)))) || (safe_rshift_func_uint16_t_u_u(p_61, (*l_70)))) || p_1906->g_284.w)) | l_1160) , p_61), 10))), p_1906->g_790.sf)) > p_61);
                l_1052 = (l_1168 = ((*l_1085) = (*p_1906->g_156)));
                l_1172--;
                (*l_1085) &= (*l_71);
            }
            (*p_1906->g_155) = func_122(((p_61 , ((*l_1060) = &l_988)) != ((&p_1906->g_157 == &p_1906->g_157) , p_1906->g_1175)), ((*p_1906->g_155) = l_1180), p_1906);
        }
        else
        { /* block id: 471 */
            (*l_1085) = (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_1181.s65613200)).s03)).lo , 1L);
        }
    }
    (*p_1906->g_1185) = (safe_sub_func_int16_t_s_s(8L, 0x72ACL));
    return p_1906->g_1186[0][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1906->g_142 p_1906->g_180 p_1906->g_155 p_1906->g_156 p_1906->g_311 p_1906->g_46 p_1906->g_259 p_1906->g_170 p_1906->g_304 p_1906->g_290 p_1906->g_326 p_1906->g_274 p_1906->g_52 p_1906->g_65 p_1906->g_291 p_1906->g_463 p_1906->g_464 p_1906->g_5 p_1906->g_53 p_1906->g_12 p_1906->g_126 p_1906->g_45 p_1906->g_532 p_1906->g_309
 * writes: p_1906->g_142 p_1906->g_156 p_1906->g_235 p_1906->g_35 p_1906->g_180 p_1906->g_155 p_1906->g_498 p_1906->g_170 p_1906->g_309 p_1906->g_126
 */
int8_t  func_112(uint32_t  p_113, uint64_t  p_114, uint8_t  p_115, struct S0 * p_1906)
{ /* block id: 163 */
    uint64_t l_370 = 0UL;
    uint32_t l_374 = 0x93D8928EL;
    uint32_t *l_404 = &p_1906->g_142;
    int32_t l_411[9] = {(-1L),(-10L),(-1L),(-1L),(-10L),(-1L),(-1L),(-10L),(-1L)};
    uint8_t *l_460 = &p_1906->g_35[4];
    int32_t **l_477 = &p_1906->g_156;
    int32_t ***l_478 = &l_477;
    int32_t **l_479 = &p_1906->g_156;
    int32_t l_492 = 1L;
    uint64_t *l_497[8][9][1] = {{{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498}},{{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498}},{{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498}},{{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498}},{{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498}},{{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498}},{{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498}},{{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498},{&p_1906->g_498}}};
    int16_t *l_499 = (void*)0;
    int32_t l_500 = 0x40CDC40AL;
    VECTOR(int64_t, 2) l_517 = (VECTOR(int64_t, 2))(0x10EEA8E05967D65AL, (-5L));
    int i, j, k;
    for (p_1906->g_142 = 23; (p_1906->g_142 >= 43); ++p_1906->g_142)
    { /* block id: 166 */
        int32_t *l_373 = &p_1906->g_180[2][0];
        uint8_t *l_379[5];
        int64_t *l_403 = (void*)0;
        int32_t l_410 = 0x0E32D842L;
        int32_t l_413 = 0x43A2DC47L;
        uint16_t l_461 = 0x80E8L;
        int i;
        for (i = 0; i < 5; i++)
            l_379[i] = (void*)0;
        if ((((safe_mod_func_uint8_t_u_u(((l_370 != (safe_sub_func_uint64_t_u_u((l_373 == (p_113 , ((*p_1906->g_155) = func_122((*l_373), ((*p_1906->g_155) = func_122(l_374, (*p_1906->g_155), p_1906)), p_1906)))), ((safe_sub_func_int16_t_s_s((+(safe_rshift_func_uint8_t_u_s((p_115 = p_1906->g_259.s3), 1))), p_1906->g_170.x)) < 0x05L)))) >= (*l_373)), p_1906->g_304.x)) , 0xA7L) > p_1906->g_290.s7))
        { /* block id: 170 */
            if (p_113)
                break;
        }
        else
        { /* block id: 172 */
            uint16_t *l_394 = &p_1906->g_235;
            uint32_t *l_405 = (void*)0;
            int32_t l_406 = 0x5CF6FDD0L;
            uint64_t ***l_407 = (void*)0;
            int32_t l_412 = 0x36DA1E71L;
            int64_t *l_458 = (void*)0;
            int64_t *l_459[6];
            int32_t *l_462 = &l_413;
            int i;
            for (i = 0; i < 6; i++)
                l_459[i] = (void*)0;
            (*l_373) = (safe_mul_func_uint8_t_u_u((l_406 = (safe_mul_func_uint8_t_u_u((*l_373), ((safe_mul_func_int16_t_s_s(p_1906->g_326.sd, (safe_rshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((~((((safe_add_func_uint16_t_u_u(0x555BL, (~(safe_sub_func_uint16_t_u_u(((*l_394) = 0x8A4EL), (safe_add_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), 4294967295UL))))))) || (safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((p_1906->g_35[6] = (p_115 = p_1906->g_311.s6)), ((((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(1UL, 0UL)).yyyyxyyxyxyyyyyx)).hi)))).s3 >= (((safe_rshift_func_int8_t_s_u(p_114, (l_403 != &p_1906->g_176[1][1]))) , l_374) > p_1906->g_290.s1)) || p_113) , 0x5B8ABC3AD13291E2L) & (*l_373)))), 0x1D7BL))) || p_1906->g_274.s9) >= p_113)), 0x1389L, 0x1753L, ((VECTOR(int16_t, 2))((-1L))), 0x29BDL, 0x6EDEL, 0x7D4CL)).s03)), ((VECTOR(int16_t, 2))(0x5E15L)), ((VECTOR(int16_t, 2))(0x7A8EL))))).odd, p_114)) , l_404) == l_405), l_406)))) , 0x02L)))), p_1906->g_311.s7));
            if (((*l_373) = (+(&p_1906->g_157 != l_407))))
            { /* block id: 179 */
                (*p_1906->g_155) = (*p_1906->g_155);
            }
            else
            { /* block id: 181 */
                int32_t l_408 = 0x0DCC7CE0L;
                int32_t *l_409[6][8][3] = {{{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0}},{{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0}},{{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0}},{{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0}},{{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0}},{{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0},{&l_406,&l_406,(void*)0}}};
                uint8_t l_414 = 0xAFL;
                int i, j, k;
                l_414--;
                if ((atomic_inc(&p_1906->l_atomic_input[2]) == 8))
                { /* block id: 184 */
                    int64_t l_417 = 0x32522DAC08E1C68EL;
                    VECTOR(int32_t, 4) l_418 = (VECTOR(int32_t, 4))(0x53C51363L, (VECTOR(int32_t, 2))(0x53C51363L, 1L), 1L);
                    int64_t l_448 = 0x6624F9B19E215A96L;
                    uint64_t l_449 = 0xEBC63731AD531985L;
                    int i;
                    l_417 |= 0x02289A06L;
                    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_418.zzyxyywwzwxxywzy)).even)).s5)
                    { /* block id: 186 */
                        int32_t l_420 = 0x6664A99CL;
                        int32_t *l_419 = &l_420;
                        int32_t *l_421[1][9] = {{(void*)0,&l_420,(void*)0,(void*)0,&l_420,(void*)0,(void*)0,&l_420,(void*)0}};
                        int32_t *l_422 = (void*)0;
                        int16_t l_423 = 1L;
                        int32_t l_424[10][7] = {{0x019FC1B8L,0x0FB40FC7L,0x62A44E82L,0x635677C2L,0x0FB40FC7L,0x635677C2L,0x62A44E82L},{0x019FC1B8L,0x0FB40FC7L,0x62A44E82L,0x635677C2L,0x0FB40FC7L,0x635677C2L,0x62A44E82L},{0x019FC1B8L,0x0FB40FC7L,0x62A44E82L,0x635677C2L,0x0FB40FC7L,0x635677C2L,0x62A44E82L},{0x019FC1B8L,0x0FB40FC7L,0x62A44E82L,0x635677C2L,0x0FB40FC7L,0x635677C2L,0x62A44E82L},{0x019FC1B8L,0x0FB40FC7L,0x62A44E82L,0x635677C2L,0x0FB40FC7L,0x635677C2L,0x62A44E82L},{0x019FC1B8L,0x0FB40FC7L,0x62A44E82L,0x635677C2L,0x0FB40FC7L,0x635677C2L,0x62A44E82L},{0x019FC1B8L,0x0FB40FC7L,0x62A44E82L,0x635677C2L,0x0FB40FC7L,0x635677C2L,0x62A44E82L},{0x019FC1B8L,0x0FB40FC7L,0x62A44E82L,0x635677C2L,0x0FB40FC7L,0x635677C2L,0x62A44E82L},{0x019FC1B8L,0x0FB40FC7L,0x62A44E82L,0x635677C2L,0x0FB40FC7L,0x635677C2L,0x62A44E82L},{0x019FC1B8L,0x0FB40FC7L,0x62A44E82L,0x635677C2L,0x0FB40FC7L,0x635677C2L,0x62A44E82L}};
                        uint32_t l_425 = 0UL;
                        uint64_t l_428 = 0xE2BA3294184E6240L;
                        int64_t l_429 = 0x4F6669DC975D2CA3L;
                        int64_t l_430[1][3][4] = {{{0x135A7155AAA0CE58L,1L,0x135A7155AAA0CE58L,0x135A7155AAA0CE58L},{0x135A7155AAA0CE58L,1L,0x135A7155AAA0CE58L,0x135A7155AAA0CE58L},{0x135A7155AAA0CE58L,1L,0x135A7155AAA0CE58L,0x135A7155AAA0CE58L}}};
                        int32_t *l_431 = &l_424[5][6];
                        int32_t *l_432 = &l_420;
                        uint64_t l_433 = 0x0A2CD494C50F03CCL;
                        uint16_t l_434 = 7UL;
                        int i, j, k;
                        l_422 = (l_421[0][0] = l_419);
                        l_425++;
                        l_432 = ((l_430[0][1][3] = (l_428 , l_429)) , l_431);
                        l_434 = l_433;
                    }
                    else
                    { /* block id: 193 */
                        uint8_t l_435[9][9] = {{255UL,0x42L,0xC0L,0x2BL,0x42L,0x2BL,0xC0L,0x42L,255UL},{255UL,0x42L,0xC0L,0x2BL,0x42L,0x2BL,0xC0L,0x42L,255UL},{255UL,0x42L,0xC0L,0x2BL,0x42L,0x2BL,0xC0L,0x42L,255UL},{255UL,0x42L,0xC0L,0x2BL,0x42L,0x2BL,0xC0L,0x42L,255UL},{255UL,0x42L,0xC0L,0x2BL,0x42L,0x2BL,0xC0L,0x42L,255UL},{255UL,0x42L,0xC0L,0x2BL,0x42L,0x2BL,0xC0L,0x42L,255UL},{255UL,0x42L,0xC0L,0x2BL,0x42L,0x2BL,0xC0L,0x42L,255UL},{255UL,0x42L,0xC0L,0x2BL,0x42L,0x2BL,0xC0L,0x42L,255UL},{255UL,0x42L,0xC0L,0x2BL,0x42L,0x2BL,0xC0L,0x42L,255UL}};
                        VECTOR(uint16_t, 8) l_438 = (VECTOR(uint16_t, 8))(0xAF2BL, (VECTOR(uint16_t, 4))(0xAF2BL, (VECTOR(uint16_t, 2))(0xAF2BL, 0UL), 0UL), 0UL, 0xAF2BL, 0UL);
                        uint16_t l_439 = 3UL;
                        VECTOR(uint8_t, 4) l_440 = (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 0xB7L), 0xB7L);
                        int16_t l_441 = 0x16E8L;
                        int i, j;
                        l_435[4][6]++;
                        l_441 = (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_438.s30671063)).even)).z , (l_439 , (l_418.z = l_440.z)));
                    }
                    for (l_417 = (-14); (l_417 == 8); ++l_417)
                    { /* block id: 200 */
                        int32_t l_445 = 0x43B9196EL;
                        int32_t *l_444[10];
                        int32_t *l_446 = &l_445;
                        int32_t *l_447 = &l_445;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_444[i] = &l_445;
                        l_447 = (l_446 = l_444[8]);
                    }
                    l_449 &= l_448;
                    unsigned int result = 0;
                    result += l_417;
                    result += l_418.w;
                    result += l_418.z;
                    result += l_418.y;
                    result += l_418.x;
                    result += l_448;
                    result += l_449;
                    atomic_add(&p_1906->l_special_values[2], result);
                }
                else
                { /* block id: 205 */
                    (1 + 1);
                }
            }
            (*l_462) |= (safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((*p_1906->g_156) == ((safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((p_115 , ((((((p_1906->g_274.s4 <= (p_115 = 0x41L)) != p_1906->g_52.s2) <= ((l_411[7] = (&p_113 == &p_1906->g_142)) != (GROUP_DIVERGE(0, 1) ^ ((l_460 == (void*)0) ^ p_1906->g_326.s7)))) ^ 0xE8AA3B91L) >= 1UL) < 0x02L)), l_406)) != l_461), p_1906->g_65.y)) , (*p_1906->g_156))) != p_1906->g_291.s3), (*l_373))), 6));
        }
        (*l_373) |= ((void*)0 != &l_411[2]);
        (*p_1906->g_155) = (*p_1906->g_155);
    }
    l_411[1] = (p_1906->g_259.sd > ((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 4))(p_113, 18446744073709551609UL, 1UL, 0UL)).wywwwyxz, ((VECTOR(uint64_t, 2))(p_1906->g_463.s06)).yxyxxxxx))).s0);
    if ((((VECTOR(int8_t, 16))(p_1906->g_464.s7637014103641472)).se | (((*l_404) &= GROUP_DIVERGE(1, 1)) && (safe_div_func_int64_t_s_s(((((safe_sub_func_uint64_t_u_u((l_500 = (+(safe_rshift_func_int16_t_s_u((p_1906->g_170.x = (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s((1UL >= (&l_404 == &l_404)), ((((p_1906->g_155 = ((*l_478) = l_477)) == l_479) == (GROUP_DIVERGE(2, 1) ^ ((safe_rshift_func_uint8_t_u_s(((*l_460) = (safe_mod_func_uint16_t_u_u(0xB2DAL, (safe_rshift_func_int16_t_s_s(0x1067L, 10))))), ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((p_1906->g_498 = (l_492 || (safe_div_func_uint64_t_u_u((((GROUP_DIVERGE(2, 1) , (+(safe_sub_func_uint32_t_u_u((0UL > (**l_479)), p_115)))) ^ 0xF6DAL) && p_1906->g_304.x), p_1906->g_274.sb)))) , 2UL), 0xC7L)), p_115)), 1)) <= (**l_479)))) ^ p_1906->g_46))) > p_113))) , p_114), 0)), 15))), p_1906->g_5)))), 1L)) && (**l_479)) & 0UL) , p_1906->g_53), 0x57FA2A7A50744A4FL)))))
    { /* block id: 224 */
        uint32_t l_501 = 0xF5795069L;
        int32_t l_502 = 0x07790016L;
        int32_t *l_505 = &p_1906->g_180[2][3];
        VECTOR(int8_t, 2) l_510 = (VECTOR(int8_t, 2))(1L, 0x66L);
        int i;
        l_502 = l_501;
        l_502 &= (((***l_478) <= (((*l_478) == (void*)0) == ((((*l_505) = l_501) , (*l_505)) > (safe_div_func_uint64_t_u_u((safe_div_func_int64_t_s_s((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_510.xx)).yxyxyxyy)).s43, (int8_t)((!(safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_517.xyyy)).wxxyxwxyyxxzzwww)).sf <= ((safe_rshift_func_uint16_t_u_s(p_1906->g_12.z, 5)) == p_1906->g_126)), 14)) , (safe_div_func_int32_t_s_s((-3L), (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((p_115 , 0L) <= FAKE_DIVERGE(p_1906->local_0_offset, get_local_id(0), 10)), p_1906->g_259.s6)), 0x09L)), 8)), 10)) > p_114) && p_1906->g_45)))), 3L)) != p_1906->g_326.s7), p_115))) < 1UL)))).yxyy)).z == p_1906->g_463.s7), (**l_477))), 0x036AAA67C812C656L))))) ^ GROUP_DIVERGE(0, 1));
    }
    else
    { /* block id: 228 */
        p_1906->g_309.s3 &= (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(p_1906->g_532.s5606747604036537)).sd, 0));
    }
    for (p_1906->g_126 = (-10); (p_1906->g_126 == 15); ++p_1906->g_126)
    { /* block id: 233 */
        int8_t l_535 = (-10L);
        return l_535;
    }
    return p_113;
}


/* ------------------------------------------ */
/* 
 * reads : p_1906->g_155 p_1906->g_156 p_1906->g_46 p_1906->g_170 p_1906->g_176 p_1906->g_274 p_1906->g_284 p_1906->g_157 p_1906->g_158 p_1906->l_comm_values p_1906->g_290 p_1906->g_291 p_1906->g_225 p_1906->g_304 p_1906->g_35 p_1906->g_309 p_1906->g_311 p_1906->g_324 p_1906->g_326 p_1906->g_137 p_1906->g_332
 * writes: p_1906->g_332 p_1906->g_274 p_1906->g_180 p_1906->g_304 p_1906->g_156
 */
int8_t  func_118(int32_t  p_119, int32_t * p_120, int32_t * p_121, struct S0 * p_1906)
{ /* block id: 158 */
    int32_t ***l_349 = &p_1906->g_155;
    uint64_t *l_356 = &p_1906->g_332;
    int64_t *l_363 = (void*)0;
    int64_t *l_364 = (void*)0;
    int64_t *l_365 = (void*)0;
    (**l_349) = func_127((safe_mod_func_int64_t_s_s(((l_349 == l_349) , 0L), (safe_mul_func_int8_t_s_s(((((*l_356) = (GROUP_DIVERGE(2, 1) & (safe_div_func_int16_t_s_s((***l_349), (safe_lshift_func_uint8_t_u_u((p_119 < p_1906->g_170.x), 1)))))) != (safe_lshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(((safe_div_func_uint8_t_u_u(((p_1906->g_274.sb ^= p_1906->g_176[5][1]) == p_119), (***l_349))) | 4294967291UL), p_1906->g_284.y)), 7))) >= (***l_349)), (***l_349))))), (***l_349), p_1906);
    return p_1906->g_326.s8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1906->g_311 p_1906->g_46
 * writes:
 */
int32_t * func_122(uint64_t  p_123, int32_t * p_124, struct S0 * p_1906)
{ /* block id: 154 */
    int64_t l_337 = 0x22D324052EEA0C97L;
    int32_t l_338 = 0L;
    int32_t *l_339 = (void*)0;
    int32_t *l_340 = (void*)0;
    int32_t *l_341 = (void*)0;
    int32_t *l_342 = (void*)0;
    int32_t *l_343[1][2][5] = {{{&p_1906->g_180[2][0],&p_1906->g_180[2][0],&p_1906->g_180[2][0],&p_1906->g_180[2][0],&p_1906->g_180[2][0]},{&p_1906->g_180[2][0],&p_1906->g_180[2][0],&p_1906->g_180[2][0],&p_1906->g_180[2][0],&p_1906->g_180[2][0]}}};
    uint32_t l_344 = 0xA2ED9F7EL;
    int i, j, k;
    l_337 |= ((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((-3L), 4)), p_1906->g_311.s4)) == ((+2UL) > p_1906->g_46));
    ++l_344;
    return p_124;
}


/* ------------------------------------------ */
/* 
 * reads : p_1906->g_157 p_1906->g_158 p_1906->g_284 p_1906->l_comm_values p_1906->g_290 p_1906->g_291 p_1906->g_225 p_1906->g_304 p_1906->g_155 p_1906->g_156 p_1906->g_46 p_1906->g_35 p_1906->g_309 p_1906->g_311 p_1906->g_324 p_1906->g_326 p_1906->g_137 p_1906->g_332
 * writes: p_1906->g_180 p_1906->g_304
 */
int32_t * func_127(int8_t  p_128, int8_t  p_129, struct S0 * p_1906)
{ /* block id: 144 */
    uint64_t *l_285[6][3] = {{&p_1906->g_137,&p_1906->g_137,&p_1906->g_137},{&p_1906->g_137,&p_1906->g_137,&p_1906->g_137},{&p_1906->g_137,&p_1906->g_137,&p_1906->g_137},{&p_1906->g_137,&p_1906->g_137,&p_1906->g_137},{&p_1906->g_137,&p_1906->g_137,&p_1906->g_137},{&p_1906->g_137,&p_1906->g_137,&p_1906->g_137}};
    VECTOR(uint16_t, 4) l_292 = (VECTOR(uint16_t, 4))(0xC691L, (VECTOR(uint16_t, 2))(0xC691L, 0x7A7DL), 0x7A7DL);
    uint32_t *l_293 = &p_1906->g_142;
    int32_t ***l_298 = &p_1906->g_155;
    int32_t *l_299 = (void*)0;
    int32_t *l_300 = (void*)0;
    int32_t l_301 = 1L;
    VECTOR(int32_t, 4) l_305 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x72A7677EL), 0x72A7677EL);
    VECTOR(int16_t, 4) l_308 = (VECTOR(int16_t, 4))(0x3FACL, (VECTOR(int16_t, 2))(0x3FACL, 0L), 0L);
    VECTOR(int32_t, 16) l_310 = (VECTOR(int32_t, 16))(0x714AEFDDL, (VECTOR(int32_t, 4))(0x714AEFDDL, (VECTOR(int32_t, 2))(0x714AEFDDL, 0x2248AD68L), 0x2248AD68L), 0x2248AD68L, 0x714AEFDDL, 0x2248AD68L, (VECTOR(int32_t, 2))(0x714AEFDDL, 0x2248AD68L), (VECTOR(int32_t, 2))(0x714AEFDDL, 0x2248AD68L), 0x714AEFDDL, 0x2248AD68L, 0x714AEFDDL, 0x2248AD68L);
    VECTOR(int32_t, 2) l_312 = (VECTOR(int32_t, 2))(9L, 0x27D5859FL);
    int32_t **l_314 = (void*)0;
    int32_t ***l_313 = &l_314;
    int32_t *l_315 = (void*)0;
    int32_t *l_316 = &p_1906->g_180[2][3];
    int16_t *l_321[10][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    VECTOR(uint16_t, 4) l_325 = (VECTOR(uint16_t, 4))(0x1E51L, (VECTOR(uint16_t, 2))(0x1E51L, 0x1BFAL), 0x1BFAL);
    int32_t l_327 = 0x1A2368AEL;
    int16_t l_328 = (-1L);
    VECTOR(uint8_t, 4) l_329 = (VECTOR(uint8_t, 4))(0x18L, (VECTOR(uint8_t, 2))(0x18L, 0x0EL), 0x0EL);
    int i, j;
    l_301 = (((*p_1906->g_157) != (((VECTOR(uint32_t, 4))(p_1906->g_284.xxyx)).z , (l_285[3][2] = (void*)0))) | ((safe_add_func_int8_t_s_s(p_1906->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1906->tid, 33))], ((safe_mod_func_int16_t_s_s((((((+((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 8))(p_1906->g_290.s37520603)), ((VECTOR(uint32_t, 16))(p_1906->g_291.s2110231371052066)).hi))).s3) < (~p_1906->g_291.s4)) < (&p_1906->g_176[7][1] != (void*)0)) & (~((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_292.zywx)))), ((l_293 == l_293) & (safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s((-1L), 0x72602DF7147C9C75L)), 7))), ((VECTOR(uint16_t, 2))(0UL)), 65528UL)))).s1 , l_298) == l_298))) , 0x32BAL), p_1906->g_284.y)) >= p_1906->g_225.sa))) , (-1L)));
    (*l_316) = ((safe_mul_func_uint8_t_u_u(p_128, 0L)) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1906->g_304.xxxy)).odd)), 0x01FED1F2L, 0x58DE58FFL)), (**p_1906->g_155), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(p_129, ((VECTOR(int32_t, 2))(l_305.yw)), (safe_rshift_func_uint8_t_u_s((((p_128 == (((VECTOR(int16_t, 16))(l_308.wzyzywzzzzwwyzxy)).se , (p_1906->g_35[5] | ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(p_1906->g_309.sc31e)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_310.s52)).xyyy)).even)), 0x74CD234EL, (-1L)))))))))).ywxxwyxw, ((VECTOR(int32_t, 16))(p_1906->g_311.s0425321416532670)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_312.yxyyyyyyyyyyyxxy)).even)).s17, (int32_t)((*l_298) != ((*l_313) = (*l_298))), (int32_t)((**l_314) & (-10L))))), (-8L), 1L)).wwxyyxyy))).s13)), ((VECTOR(int32_t, 2))(0x6EFE5E05L)), ((VECTOR(int32_t, 2))((-1L)))))).yyyxyxyxxxxxxxyy)).sb))) < p_129) > GROUP_DIVERGE(1, 1)), p_128)), ((VECTOR(int32_t, 2))(0x1DE974F8L)), 0x32574745L, 8L)).s35, (int32_t)0x0A76134BL, (int32_t)(*p_1906->g_156)))), ((VECTOR(int32_t, 2))(0x42CC62D4L)), 0x2BFB4D23L, (***l_313), ((VECTOR(int32_t, 2))(0x30A5ECD7L)), 6L, (-6L), (-1L))))).hi)).s1);
    p_1906->g_304.y |= (safe_lshift_func_uint8_t_u_s((((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 16))(0xEBL, 0x92L, 0xC9L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(1UL, (safe_mod_func_int32_t_s_s(((**l_314) || ((*l_316) = ((*p_1906->g_155) != (*l_314)))), p_129)), 248UL, 7UL)))), (((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(p_1906->g_324.s7320)).w, (l_327 = (((VECTOR(uint16_t, 2))(l_325.zw)).even , ((VECTOR(int32_t, 8))(p_1906->g_326.sbc626a04)).s1)))) , p_128) >= l_328), (((l_329.x , ((p_129 == ((*l_316) = (safe_sub_func_uint8_t_u_u(p_1906->g_137, 0x51L)))) == 1L)) > (-1L)) == p_129), ((VECTOR(uint8_t, 2))(0UL)), 0x24L, 0UL, p_1906->g_290.s3, 1UL, 0xA5L)).s1aaa, ((VECTOR(uint8_t, 4))(0x43L))))).z > p_1906->g_332), (***l_298)));
    return (**l_313);
}


/* ------------------------------------------ */
/* 
 * reads : p_1906->g_155 p_1906->g_157 p_1906->g_170 p_1906->g_171 p_1906->g_12 p_1906->g_137 p_1906->g_2 p_1906->g_180 p_1906->g_225 p_1906->g_156 p_1906->g_46 p_1906->g_235 p_1906->g_comm_values p_1906->g_259 p_1906->l_comm_values p_1906->g_142 p_1906->g_274 p_1906->g_5
 * writes: p_1906->g_35 p_1906->g_157 p_1906->g_176 p_1906->g_180 p_1906->g_235
 */
int8_t  func_130(uint64_t * p_131, uint32_t  p_132, int64_t  p_133, uint64_t  p_134, struct S0 * p_1906)
{ /* block id: 59 */
    int32_t l_177 = 0L;
    int32_t l_179 = 0L;
    int8_t l_236 = 0x2DL;
    int64_t l_251 = 0x2D6AA5246AA7BCFCL;
    int32_t l_252 = 0x5FAE3B17L;
    int32_t l_253 = 1L;
    int32_t l_254 = 0x312A1AFCL;
    int32_t l_255[7][5] = {{2L,2L,0L,0x71A2D92CL,0x35F79306L},{2L,2L,0L,0x71A2D92CL,0x35F79306L},{2L,2L,0L,0x71A2D92CL,0x35F79306L},{2L,2L,0L,0x71A2D92CL,0x35F79306L},{2L,2L,0L,0x71A2D92CL,0x35F79306L},{2L,2L,0L,0x71A2D92CL,0x35F79306L},{2L,2L,0L,0x71A2D92CL,0x35F79306L}};
    uint64_t l_256[4] = {0x03B375900326E57CL,0x03B375900326E57CL,0x03B375900326E57CL,0x03B375900326E57CL};
    int32_t *l_260 = &p_1906->g_180[0][2];
    VECTOR(uint8_t, 4) l_270 = (VECTOR(uint8_t, 4))(0x92L, (VECTOR(uint8_t, 2))(0x92L, 0UL), 0UL);
    VECTOR(int64_t, 4) l_272 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x33F60CF77D2F1C11L), 0x33F60CF77D2F1C11L);
    VECTOR(int64_t, 2) l_273 = (VECTOR(int64_t, 2))(0x79090C8C004BFBC9L, 0x60E397699D0BD61AL);
    int32_t l_281[3][9][9] = {{{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L}},{{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L}},{{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L},{1L,(-8L),3L,(-1L),7L,0x0A64CC76L,0x0BDDCC80L,0L,0x0BDDCC80L}}};
    VECTOR(int32_t, 4) l_283 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5222F7FCL), 0x5222F7FCL);
    int i, j, k;
    for (p_133 = 0; (p_133 < 10); p_133 = safe_add_func_int16_t_s_s(p_133, 1))
    { /* block id: 62 */
        uint64_t l_181 = 1UL;
        int64_t l_242 = 0x34B55F375361B7BBL;
        int32_t l_245 = (-1L);
        int32_t l_249[2];
        int32_t l_250 = (-9L);
        int i;
        for (i = 0; i < 2; i++)
            l_249[i] = 0L;
        for (p_132 = 0; (p_132 <= 51); p_132 = safe_add_func_uint16_t_u_u(p_132, 8))
        { /* block id: 65 */
            uint64_t ***l_159[6][7][4] = {{{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157}},{{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157}},{{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157}},{{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157}},{{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157}},{{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157},{&p_1906->g_157,(void*)0,&p_1906->g_157,&p_1906->g_157}}};
            int64_t l_160 = 0x61F64F3EF624C376L;
            int32_t **l_165[8] = {&p_1906->g_156,&p_1906->g_156,&p_1906->g_156,&p_1906->g_156,&p_1906->g_156,&p_1906->g_156,&p_1906->g_156,&p_1906->g_156};
            int32_t ***l_164 = &l_165[7];
            int64_t *l_178[5][8][6] = {{{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160}},{{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160}},{{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160}},{{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160}},{{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160},{(void*)0,(void*)0,(void*)0,&l_160,&l_160,&l_160}}};
            VECTOR(uint32_t, 4) l_226 = (VECTOR(uint32_t, 4))(0x039A174FL, (VECTOR(uint32_t, 2))(0x039A174FL, 4294967295UL), 4294967295UL);
            uint16_t l_241 = 4UL;
            int i, j, k;
            atomic_max(&p_1906->g_atomic_reduction[get_linear_group_id()], ((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_1906->group_1_offset, get_group_id(1), 10), (((p_1906->g_35[6] = ((void*)0 == p_1906->g_155)) && ((p_1906->g_157 = p_1906->g_157) != (((l_160 , ((safe_unary_minus_func_uint8_t_u(253UL)) , ((p_1906->g_180[2][3] &= ((safe_mod_func_int32_t_s_s((((*l_164) = &p_1906->g_156) != (void*)0), (+((l_177 = (((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(p_1906->g_170.yxxx)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_1906->g_171.wy)).xyxyyxxyxyyxyxyy)).s836a))).w, (((((p_1906->g_12.x >= (p_1906->g_176[5][1] = ((safe_add_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((((-4L) > 0x2C95L) , p_1906->g_12.w), p_1906->g_12.z)) , p_133), 0x187CFA7979A64F93L)) >= p_1906->g_137))) , 65535UL) | l_177) >= l_160) , p_1906->g_2[6]))), 65534UL)) == p_1906->g_170.y) , p_133)) != l_179)))) && 0UL)) && 0x64CF3F2C5E0AD077L))) | l_179) , (void*)0))) ^ 0xC906F29BL))) || p_1906->g_170.x) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1906->v_collective += p_1906->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            l_181 = (-10L);
            if ((atomic_inc(&p_1906->g_atomic_input[7 * get_linear_group_id() + 3]) == 1))
            { /* block id: 75 */
                uint64_t l_182 = 18446744073709551615UL;
                int32_t l_183 = 0x353F1D64L;
                int32_t l_205 = 0x3EC07951L;
                int64_t l_206[1];
                int8_t l_207 = 0x46L;
                int i;
                for (i = 0; i < 1; i++)
                    l_206[i] = 5L;
                l_183 = l_182;
                for (l_182 = 26; (l_182 >= 56); l_182 = safe_add_func_uint64_t_u_u(l_182, 6))
                { /* block id: 79 */
                    int32_t l_186 = 0L;
                    VECTOR(int32_t, 2) l_204 = (VECTOR(int32_t, 2))(0x2936F0B8L, 0x4EFB7757L);
                    int i;
                    for (l_186 = 0; (l_186 < (-18)); l_186--)
                    { /* block id: 82 */
                        int32_t l_189 = 0L;
                        int32_t l_190 = 8L;
                        int32_t l_191 = (-9L);
                        VECTOR(uint16_t, 16) l_192 = (VECTOR(uint16_t, 16))(0x66C8L, (VECTOR(uint16_t, 4))(0x66C8L, (VECTOR(uint16_t, 2))(0x66C8L, 0xAC35L), 0xAC35L), 0xAC35L, 0x66C8L, 0xAC35L, (VECTOR(uint16_t, 2))(0x66C8L, 0xAC35L), (VECTOR(uint16_t, 2))(0x66C8L, 0xAC35L), 0x66C8L, 0xAC35L, 0x66C8L, 0xAC35L);
                        int32_t *l_193[4] = {&l_189,&l_189,&l_189,&l_189};
                        int32_t *l_194 = &l_189;
                        int32_t *l_195 = &l_189;
                        int32_t *l_196 = (void*)0;
                        int32_t *l_197 = &l_190;
                        VECTOR(uint16_t, 16) l_198 = (VECTOR(uint16_t, 16))(0x79C5L, (VECTOR(uint16_t, 4))(0x79C5L, (VECTOR(uint16_t, 2))(0x79C5L, 0xEDB8L), 0xEDB8L), 0xEDB8L, 0x79C5L, 0xEDB8L, (VECTOR(uint16_t, 2))(0x79C5L, 0xEDB8L), (VECTOR(uint16_t, 2))(0x79C5L, 0xEDB8L), 0x79C5L, 0xEDB8L, 0x79C5L, 0xEDB8L);
                        int i;
                        l_195 = (l_194 = (l_193[2] = ((((l_190 = l_189) , (l_191 |= 1UL)) , l_192.sb) , (void*)0)));
                        l_197 = (l_196 = (void*)0);
                        l_183 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(0x4B6CL, 0x4D48L)).xyxyyyyyxxyyxxyx, ((VECTOR(uint16_t, 16))(l_198.se35fdd6db04eda8f))))).sa7)).yyyx)).w;
                    }
                    for (l_186 = 0; (l_186 <= 1); ++l_186)
                    { /* block id: 94 */
                        uint32_t **l_201 = (void*)0;
                        uint32_t *l_203 = (void*)0;
                        uint32_t **l_202 = &l_203;
                        l_202 = l_201;
                    }
                    l_183 ^= ((VECTOR(int32_t, 4))(l_204.xyxy)).w;
                }
                l_207 = (l_206[0] = l_205);
                for (l_206[0] = (-18); (l_206[0] != (-21)); --l_206[0])
                { /* block id: 103 */
                    int32_t l_210 = 1L;
                    uint32_t l_211 = 0UL;
                    uint16_t l_214[10][2][6] = {{{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L},{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L}},{{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L},{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L}},{{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L},{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L}},{{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L},{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L}},{{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L},{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L}},{{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L},{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L}},{{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L},{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L}},{{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L},{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L}},{{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L},{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L}},{{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L},{0x3833L,0x9D74L,1UL,0x9D74L,0x3833L,0x3833L}}};
                    uint8_t l_215 = 1UL;
                    int i, j, k;
                    l_183 = (-1L);
                    l_183 = (l_210 , 0x46B9F5D8L);
                    l_183 = ((l_214[1][1][1] &= (l_211++)) , l_215);
                    for (l_211 = 0; (l_211 <= 58); l_211++)
                    { /* block id: 111 */
                        uint64_t l_220 = 0UL;
                        uint64_t *l_219[1];
                        uint64_t **l_218 = &l_219[0];
                        uint64_t **l_221 = &l_219[0];
                        uint16_t l_222 = 0UL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_219[i] = &l_220;
                        l_221 = l_218;
                        l_183 &= l_222;
                    }
                }
                unsigned int result = 0;
                result += l_182;
                result += l_183;
                result += l_205;
                int l_206_i0;
                for (l_206_i0 = 0; l_206_i0 < 1; l_206_i0++) {
                    result += l_206[l_206_i0];
                }
                result += l_207;
                atomic_add(&p_1906->g_special_values[7 * get_linear_group_id() + 3], result);
            }
            else
            { /* block id: 116 */
                (1 + 1);
            }
            p_1906->g_180[2][3] &= (l_177 = ((((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 8))(p_1906->g_225.seebe92da)), ((VECTOR(uint32_t, 16))(l_226.wwyyxxwyzywzwzwx)).hi))).s1 >= ((~(l_177 >= (((p_1906->g_12.w & (((safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((l_179 = 0x14D78732L), (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(3L, 0L)).lo, (l_236 = ((~(p_1906->g_235 &= (safe_add_func_uint8_t_u_u((***l_164), p_132)))) || p_1906->g_comm_values[p_1906->tid])))))), (((l_177 | ((((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((1UL || l_241), 4)), p_133)) ^ p_132) | p_134) , p_133)) <= p_132) <= p_134))) , l_181) || 0xFD03CFEF64EFBD56L)) < l_242) || FAKE_DIVERGE(p_1906->global_0_offset, get_global_id(0), 10)))) >= p_134)) , (**p_1906->g_155)));
        }
        for (l_242 = 0; (l_242 > 2); ++l_242)
        { /* block id: 127 */
            int32_t *l_246 = &l_177;
            int32_t *l_247 = &l_245;
            int32_t *l_248[10][4] = {{&l_245,&l_177,&l_177,&l_245},{&l_245,&l_177,&l_177,&l_245},{&l_245,&l_177,&l_177,&l_245},{&l_245,&l_177,&l_177,&l_245},{&l_245,&l_177,&l_177,&l_245},{&l_245,&l_177,&l_177,&l_245},{&l_245,&l_177,&l_177,&l_245},{&l_245,&l_177,&l_177,&l_245},{&l_245,&l_177,&l_177,&l_245},{&l_245,&l_177,&l_177,&l_245}};
            int i, j;
            l_245 = l_242;
            --l_256[0];
        }
        if (p_132)
            break;
    }
    (*l_260) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_1906->g_259.sa2c0140f)).s1137515051654670)).s4;
    for (l_177 = (-7); (l_177 > (-4)); ++l_177)
    { /* block id: 136 */
        int8_t l_265 = 0L;
        int16_t l_271 = 0x51E7L;
        int64_t *l_282 = &l_251;
        (*l_260) = (safe_mul_func_uint8_t_u_u(l_265, (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), 0)), ((VECTOR(uint8_t, 8))(l_270.xzwyzzwx)).s4))));
        (*l_260) = ((((p_132 | ((*l_282) |= (l_271 <= (p_1906->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1906->tid, 33))] , ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))(l_272.xx)).yyyy, ((VECTOR(int64_t, 8))(((*l_260) , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(p_1906->g_142, ((VECTOR(int64_t, 4))(l_273.yyxx)), ((VECTOR(int64_t, 2))(0x32A6592A202F784CL, 1L)), 0L)))).s2474153456006074, ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(p_1906->g_274.s22)), 6L, (((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((((l_271 >= ((VECTOR(uint8_t, 8))((((p_1906->g_5 == p_1906->g_2[5]) && (safe_mod_func_int16_t_s_s(((l_281[0][1][4] < 0L) > (*l_260)), p_134))) == p_1906->g_170.x), (*l_260), ((VECTOR(uint8_t, 4))(0UL)), 2UL, 0xC3L)).s5) < p_1906->g_259.s2) > 3L), p_1906->g_235)) , p_1906->g_171.z), p_132)) & p_1906->g_2[6]) ^ l_265), 0x1E952AF1B3B3F82FL, 0x3FB895A39968E064L, (-1L), (-1L))).odd, ((VECTOR(int64_t, 4))(0x7DCAAD0FF3DFD6F5L))))).lo, ((VECTOR(int64_t, 2))(0x46947678D6E3BB35L))))).xyyxyyyyyxxyxyxx))).s136f)).zzyyyxwy))).s2512250510152344)).s2), ((VECTOR(int64_t, 2))(0x1B0BE5CBDDB987CAL)), p_133, ((VECTOR(int64_t, 4))(0x70E0FF55728C40FEL)))).hi))).even)).xyyx))), (-8L), ((VECTOR(int64_t, 2))(1L)), 0x2393E918DBAE1EF9L)).s3105614622335120)).sc30f)).wxywzzwx, ((VECTOR(int64_t, 8))(0x4C21128C3E5849BDL))))).hi)).odd)).lo)))) <= (*l_260)) , l_265) & p_132);
        (*l_260) = ((VECTOR(int32_t, 4))(l_283.zwxw)).x;
    }
    (*l_260) ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 9L)).yxyx)).zxyxzzxxzxyywwwx))).s00)).xyxy)).x;
    return p_133;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_comm_values[i] = 1;
    struct S0 c_1907;
    struct S0* p_1906 = &c_1907;
    struct S0 c_1908 = {
        {0x1AC70C30L,0x1AC70C30L,0x1AC70C30L,0x1AC70C30L,0x1AC70C30L,0x1AC70C30L,0x1AC70C30L}, // p_1906->g_2
        0x3C662A2BL, // p_1906->g_5
        0L, // p_1906->g_8
        (VECTOR(int32_t, 4))(0x0566A927L, (VECTOR(int32_t, 2))(0x0566A927L, 0x6C752F67L), 0x6C752F67L), // p_1906->g_12
        {0x40L,0x85L,0x40L,0x40L,0x85L,0x40L,0x40L}, // p_1906->g_35
        (-5L), // p_1906->g_45
        1L, // p_1906->g_46
        0x2FD598C5L, // p_1906->g_49
        0x0DA2B3C2L, // p_1906->g_50
        0x49887233L, // p_1906->g_51
        (VECTOR(int32_t, 8))(0x056BCC6BL, (VECTOR(int32_t, 4))(0x056BCC6BL, (VECTOR(int32_t, 2))(0x056BCC6BL, 0x5CE9E3C4L), 0x5CE9E3C4L), 0x5CE9E3C4L, 0x056BCC6BL, 0x5CE9E3C4L), // p_1906->g_52
        0x1BF70E0EL, // p_1906->g_53
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551614UL), // p_1906->g_64
        (VECTOR(int64_t, 2))(0x15C7436F42B88B27L, (-3L)), // p_1906->g_65
        1UL, // p_1906->g_126
        1UL, // p_1906->g_137
        0x0C7C7AF3L, // p_1906->g_142
        &p_1906->g_46, // p_1906->g_156
        &p_1906->g_156, // p_1906->g_155
        (void*)0, // p_1906->g_158
        &p_1906->g_158, // p_1906->g_157
        (VECTOR(int16_t, 2))((-3L), 1L), // p_1906->g_170
        (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x0D5DL), 0x0D5DL), // p_1906->g_171
        {{2L,0x4D3951EFE91F0B04L},{2L,0x4D3951EFE91F0B04L},{2L,0x4D3951EFE91F0B04L},{2L,0x4D3951EFE91F0B04L},{2L,0x4D3951EFE91F0B04L},{2L,0x4D3951EFE91F0B04L},{2L,0x4D3951EFE91F0B04L},{2L,0x4D3951EFE91F0B04L}}, // p_1906->g_176
        {{0x660C2B27L,0x6C75788DL,0x660C2B27L,0x660C2B27L},{0x660C2B27L,0x6C75788DL,0x660C2B27L,0x660C2B27L},{0x660C2B27L,0x6C75788DL,0x660C2B27L,0x660C2B27L}}, // p_1906->g_180
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x23BEAF90L), 0x23BEAF90L), 0x23BEAF90L, 0UL, 0x23BEAF90L, (VECTOR(uint32_t, 2))(0UL, 0x23BEAF90L), (VECTOR(uint32_t, 2))(0UL, 0x23BEAF90L), 0UL, 0x23BEAF90L, 0UL, 0x23BEAF90L), // p_1906->g_225
        0x5796L, // p_1906->g_235
        (VECTOR(int32_t, 16))(0x7A0411A2L, (VECTOR(int32_t, 4))(0x7A0411A2L, (VECTOR(int32_t, 2))(0x7A0411A2L, 0x520E8FBAL), 0x520E8FBAL), 0x520E8FBAL, 0x7A0411A2L, 0x520E8FBAL, (VECTOR(int32_t, 2))(0x7A0411A2L, 0x520E8FBAL), (VECTOR(int32_t, 2))(0x7A0411A2L, 0x520E8FBAL), 0x7A0411A2L, 0x520E8FBAL, 0x7A0411A2L, 0x520E8FBAL), // p_1906->g_259
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x505137F1E0DD7978L), 0x505137F1E0DD7978L), 0x505137F1E0DD7978L, 1L, 0x505137F1E0DD7978L, (VECTOR(int64_t, 2))(1L, 0x505137F1E0DD7978L), (VECTOR(int64_t, 2))(1L, 0x505137F1E0DD7978L), 1L, 0x505137F1E0DD7978L, 1L, 0x505137F1E0DD7978L), // p_1906->g_274
        (VECTOR(uint32_t, 4))(0xF852F596L, (VECTOR(uint32_t, 2))(0xF852F596L, 0x6FD94D4FL), 0x6FD94D4FL), // p_1906->g_284
        (VECTOR(uint32_t, 8))(0xFBD01539L, (VECTOR(uint32_t, 4))(0xFBD01539L, (VECTOR(uint32_t, 2))(0xFBD01539L, 4294967295UL), 4294967295UL), 4294967295UL, 0xFBD01539L, 4294967295UL), // p_1906->g_290
        (VECTOR(uint32_t, 8))(0xEE21C4F0L, (VECTOR(uint32_t, 4))(0xEE21C4F0L, (VECTOR(uint32_t, 2))(0xEE21C4F0L, 1UL), 1UL), 1UL, 0xEE21C4F0L, 1UL), // p_1906->g_291
        (VECTOR(int32_t, 2))(3L, 0x03561549L), // p_1906->g_304
        (VECTOR(int32_t, 16))(0x05D28358L, (VECTOR(int32_t, 4))(0x05D28358L, (VECTOR(int32_t, 2))(0x05D28358L, 1L), 1L), 1L, 0x05D28358L, 1L, (VECTOR(int32_t, 2))(0x05D28358L, 1L), (VECTOR(int32_t, 2))(0x05D28358L, 1L), 0x05D28358L, 1L, 0x05D28358L, 1L), // p_1906->g_309
        (VECTOR(int32_t, 8))(0x11D21E9CL, (VECTOR(int32_t, 4))(0x11D21E9CL, (VECTOR(int32_t, 2))(0x11D21E9CL, 0x08E3D818L), 0x08E3D818L), 0x08E3D818L, 0x11D21E9CL, 0x08E3D818L), // p_1906->g_311
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x094342D3L), 0x094342D3L), 0x094342D3L, 1L, 0x094342D3L, (VECTOR(int32_t, 2))(1L, 0x094342D3L), (VECTOR(int32_t, 2))(1L, 0x094342D3L), 1L, 0x094342D3L, 1L, 0x094342D3L), // p_1906->g_324
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1AC98F05L), 0x1AC98F05L), 0x1AC98F05L, 1L, 0x1AC98F05L, (VECTOR(int32_t, 2))(1L, 0x1AC98F05L), (VECTOR(int32_t, 2))(1L, 0x1AC98F05L), 1L, 0x1AC98F05L, 1L, 0x1AC98F05L), // p_1906->g_326
        0UL, // p_1906->g_332
        (VECTOR(uint64_t, 8))(7UL, (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 7UL, 18446744073709551615UL), // p_1906->g_463
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_1906->g_464
        1UL, // p_1906->g_498
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL), // p_1906->g_532
        (VECTOR(uint32_t, 8))(0xD9B1438AL, (VECTOR(uint32_t, 4))(0xD9B1438AL, (VECTOR(uint32_t, 2))(0xD9B1438AL, 4294967289UL), 4294967289UL), 4294967289UL, 0xD9B1438AL, 4294967289UL), // p_1906->g_543
        (-1L), // p_1906->g_569
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x56L), 0x56L), // p_1906->g_577
        &p_1906->g_157, // p_1906->g_655
        (void*)0, // p_1906->g_663
        (VECTOR(int32_t, 2))(0x5C6570E8L, (-7L)), // p_1906->g_680
        (VECTOR(uint64_t, 2))(8UL, 18446744073709551615UL), // p_1906->g_688
        &p_1906->g_180[2][3], // p_1906->g_726
        {0L,0L,0L,0L}, // p_1906->g_739
        &p_1906->g_498, // p_1906->g_749
        &p_1906->g_498, // p_1906->g_750
        &p_1906->g_498, // p_1906->g_751
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L)), // p_1906->g_758
        (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 0x71L), 0x71L), // p_1906->g_780
        (VECTOR(uint32_t, 16))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0xE289A63DL), 0xE289A63DL), 0xE289A63DL, 4294967294UL, 0xE289A63DL, (VECTOR(uint32_t, 2))(4294967294UL, 0xE289A63DL), (VECTOR(uint32_t, 2))(4294967294UL, 0xE289A63DL), 4294967294UL, 0xE289A63DL, 4294967294UL, 0xE289A63DL), // p_1906->g_790
        (VECTOR(int64_t, 16))(0x52396CE87E3FF722L, (VECTOR(int64_t, 4))(0x52396CE87E3FF722L, (VECTOR(int64_t, 2))(0x52396CE87E3FF722L, 0x10D1358FE983A9E5L), 0x10D1358FE983A9E5L), 0x10D1358FE983A9E5L, 0x52396CE87E3FF722L, 0x10D1358FE983A9E5L, (VECTOR(int64_t, 2))(0x52396CE87E3FF722L, 0x10D1358FE983A9E5L), (VECTOR(int64_t, 2))(0x52396CE87E3FF722L, 0x10D1358FE983A9E5L), 0x52396CE87E3FF722L, 0x10D1358FE983A9E5L, 0x52396CE87E3FF722L, 0x10D1358FE983A9E5L), // p_1906->g_793
        (VECTOR(uint64_t, 4))(0x3F7B2B286FB82C16L, (VECTOR(uint64_t, 2))(0x3F7B2B286FB82C16L, 0x4B360046A2B95FCDL), 0x4B360046A2B95FCDL), // p_1906->g_796
        (void*)0, // p_1906->g_811
        &p_1906->g_811, // p_1906->g_810
        {{0xC237L,0xAE70L,0UL,0xAE70L,0xC237L,0xC237L,0xAE70L,0UL,0xAE70L},{0xC237L,0xAE70L,0UL,0xAE70L,0xC237L,0xC237L,0xAE70L,0UL,0xAE70L},{0xC237L,0xAE70L,0UL,0xAE70L,0xC237L,0xC237L,0xAE70L,0UL,0xAE70L},{0xC237L,0xAE70L,0UL,0xAE70L,0xC237L,0xC237L,0xAE70L,0UL,0xAE70L}}, // p_1906->g_855
        (void*)0, // p_1906->g_866
        &p_1906->g_866, // p_1906->g_865
        (VECTOR(int16_t, 2))(0x60A6L, 0x6CC3L), // p_1906->g_875
        (-1L), // p_1906->g_878
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x22L), 0x22L), 0x22L, (-1L), 0x22L), // p_1906->g_881
        (void*)0, // p_1906->g_929
        (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L), 0L, 3L, 0L, (VECTOR(int32_t, 2))(3L, 0L), (VECTOR(int32_t, 2))(3L, 0L), 3L, 0L, 3L, 0L), // p_1906->g_965
        (-1L), // p_1906->g_1036
        &p_1906->g_811, // p_1906->g_1050
        (VECTOR(uint64_t, 4))(0xDFB88E88FB0D12DDL, (VECTOR(uint64_t, 2))(0xDFB88E88FB0D12DDL, 0UL), 0UL), // p_1906->g_1100
        {0x9A6CBE7AL,0x9A6CBE7AL,0x9A6CBE7AL,0x9A6CBE7AL}, // p_1906->g_1102
        (VECTOR(int16_t, 2))(1L, 0x0A36L), // p_1906->g_1105
        (VECTOR(int16_t, 2))(0x34D6L, 0x6B29L), // p_1906->g_1108
        (VECTOR(int16_t, 8))(0x4AF8L, (VECTOR(int16_t, 4))(0x4AF8L, (VECTOR(int16_t, 2))(0x4AF8L, (-3L)), (-3L)), (-3L), 0x4AF8L, (-3L)), // p_1906->g_1110
        (VECTOR(uint16_t, 16))(0x3794L, (VECTOR(uint16_t, 4))(0x3794L, (VECTOR(uint16_t, 2))(0x3794L, 0x3CAEL), 0x3CAEL), 0x3CAEL, 0x3794L, 0x3CAEL, (VECTOR(uint16_t, 2))(0x3794L, 0x3CAEL), (VECTOR(uint16_t, 2))(0x3794L, 0x3CAEL), 0x3794L, 0x3CAEL, 0x3794L, 0x3CAEL), // p_1906->g_1133
        {0x17D47569L,0x17D47569L,0x17D47569L}, // p_1906->g_1154
        (void*)0, // p_1906->g_1175
        &p_1906->g_180[2][3], // p_1906->g_1185
        {{&p_1906->g_2[6],(void*)0,(void*)0,&p_1906->g_2[6],&p_1906->g_2[6],&p_1906->g_2[6]},{&p_1906->g_2[6],(void*)0,(void*)0,&p_1906->g_2[6],&p_1906->g_2[6],&p_1906->g_2[6]},{&p_1906->g_2[6],(void*)0,(void*)0,&p_1906->g_2[6],&p_1906->g_2[6],&p_1906->g_2[6]},{&p_1906->g_2[6],(void*)0,(void*)0,&p_1906->g_2[6],&p_1906->g_2[6],&p_1906->g_2[6]},{&p_1906->g_2[6],(void*)0,(void*)0,&p_1906->g_2[6],&p_1906->g_2[6],&p_1906->g_2[6]},{&p_1906->g_2[6],(void*)0,(void*)0,&p_1906->g_2[6],&p_1906->g_2[6],&p_1906->g_2[6]},{&p_1906->g_2[6],(void*)0,(void*)0,&p_1906->g_2[6],&p_1906->g_2[6],&p_1906->g_2[6]},{&p_1906->g_2[6],(void*)0,(void*)0,&p_1906->g_2[6],&p_1906->g_2[6],&p_1906->g_2[6]}}, // p_1906->g_1186
        (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 5UL), 5UL), 5UL, 8UL, 5UL), // p_1906->g_1210
        0L, // p_1906->g_1219
        (void*)0, // p_1906->g_1223
        &p_1906->g_180[1][2], // p_1906->g_1224
        (VECTOR(int64_t, 8))(0x38190BB68D7507ADL, (VECTOR(int64_t, 4))(0x38190BB68D7507ADL, (VECTOR(int64_t, 2))(0x38190BB68D7507ADL, 0L), 0L), 0L, 0x38190BB68D7507ADL, 0L), // p_1906->g_1246
        {{{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL}},{{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL}},{{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL}},{{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL}},{{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL}},{{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL},{0x3040A48672199384L,0x3040A48672199384L,0L,0x35A2DBBCA32983BCL}}}, // p_1906->g_1258
        {{&p_1906->g_1258[5][0][2],&p_1906->g_1258[5][0][2],&p_1906->g_1258[5][0][2],&p_1906->g_1258[5][0][2],&p_1906->g_1258[5][0][2],&p_1906->g_1258[5][0][2]},{&p_1906->g_1258[5][0][2],&p_1906->g_1258[5][0][2],&p_1906->g_1258[5][0][2],&p_1906->g_1258[5][0][2],&p_1906->g_1258[5][0][2],&p_1906->g_1258[5][0][2]}}, // p_1906->g_1257
        0x786FF01DL, // p_1906->g_1265
        (void*)0, // p_1906->g_1275
        {&p_1906->g_1257[0][5],&p_1906->g_1257[0][5],&p_1906->g_1257[0][5],&p_1906->g_1257[0][5],&p_1906->g_1257[0][5],&p_1906->g_1257[0][5],&p_1906->g_1257[0][5],&p_1906->g_1257[0][5]}, // p_1906->g_1329
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-10L)), (-10L)), // p_1906->g_1337
        0xEDFF8657L, // p_1906->g_1352
        {2L,2L,2L,2L,2L}, // p_1906->g_1374
        (VECTOR(int16_t, 16))(0x6800L, (VECTOR(int16_t, 4))(0x6800L, (VECTOR(int16_t, 2))(0x6800L, 0x5AE3L), 0x5AE3L), 0x5AE3L, 0x6800L, 0x5AE3L, (VECTOR(int16_t, 2))(0x6800L, 0x5AE3L), (VECTOR(int16_t, 2))(0x6800L, 0x5AE3L), 0x6800L, 0x5AE3L, 0x6800L, 0x5AE3L), // p_1906->g_1382
        0UL, // p_1906->g_1396
        (VECTOR(uint64_t, 16))(0x218CF4690D0B3A44L, (VECTOR(uint64_t, 4))(0x218CF4690D0B3A44L, (VECTOR(uint64_t, 2))(0x218CF4690D0B3A44L, 0x264D778941EDB5DDL), 0x264D778941EDB5DDL), 0x264D778941EDB5DDL, 0x218CF4690D0B3A44L, 0x264D778941EDB5DDL, (VECTOR(uint64_t, 2))(0x218CF4690D0B3A44L, 0x264D778941EDB5DDL), (VECTOR(uint64_t, 2))(0x218CF4690D0B3A44L, 0x264D778941EDB5DDL), 0x218CF4690D0B3A44L, 0x264D778941EDB5DDL, 0x218CF4690D0B3A44L, 0x264D778941EDB5DDL), // p_1906->g_1398
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-2L)), (-2L)), // p_1906->g_1403
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x31L), 0x31L), // p_1906->g_1406
        (VECTOR(int32_t, 2))(0x66B9D49EL, 9L), // p_1906->g_1435
        (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x46CD6782L), 0x46CD6782L), 0x46CD6782L, 4L, 0x46CD6782L, (VECTOR(int32_t, 2))(4L, 0x46CD6782L), (VECTOR(int32_t, 2))(4L, 0x46CD6782L), 4L, 0x46CD6782L, 4L, 0x46CD6782L), // p_1906->g_1436
        5L, // p_1906->g_1468
        (VECTOR(int32_t, 2))((-1L), (-1L)), // p_1906->g_1480
        (VECTOR(int32_t, 2))(0x78588203L, 0x2DB92DBBL), // p_1906->g_1486
        (VECTOR(uint64_t, 16))(0xE49A71E8530EBC5AL, (VECTOR(uint64_t, 4))(0xE49A71E8530EBC5AL, (VECTOR(uint64_t, 2))(0xE49A71E8530EBC5AL, 0x133C36B4FE7D4240L), 0x133C36B4FE7D4240L), 0x133C36B4FE7D4240L, 0xE49A71E8530EBC5AL, 0x133C36B4FE7D4240L, (VECTOR(uint64_t, 2))(0xE49A71E8530EBC5AL, 0x133C36B4FE7D4240L), (VECTOR(uint64_t, 2))(0xE49A71E8530EBC5AL, 0x133C36B4FE7D4240L), 0xE49A71E8530EBC5AL, 0x133C36B4FE7D4240L, 0xE49A71E8530EBC5AL, 0x133C36B4FE7D4240L), // p_1906->g_1494
        (VECTOR(int64_t, 4))(0x221C19E857952BE9L, (VECTOR(int64_t, 2))(0x221C19E857952BE9L, 0x79DD2BBD5939F17FL), 0x79DD2BBD5939F17FL), // p_1906->g_1553
        (VECTOR(int8_t, 2))(0x36L, 0x50L), // p_1906->g_1571
        (VECTOR(int8_t, 2))(0x24L, 0x08L), // p_1906->g_1573
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 7UL), 7UL), 7UL, 1UL, 7UL, (VECTOR(uint8_t, 2))(1UL, 7UL), (VECTOR(uint8_t, 2))(1UL, 7UL), 1UL, 7UL, 1UL, 7UL), // p_1906->g_1606
        (VECTOR(uint64_t, 2))(0UL, 3UL), // p_1906->g_1607
        (VECTOR(int8_t, 16))(0x0DL, (VECTOR(int8_t, 4))(0x0DL, (VECTOR(int8_t, 2))(0x0DL, 0x32L), 0x32L), 0x32L, 0x0DL, 0x32L, (VECTOR(int8_t, 2))(0x0DL, 0x32L), (VECTOR(int8_t, 2))(0x0DL, 0x32L), 0x0DL, 0x32L, 0x0DL, 0x32L), // p_1906->g_1608
        (VECTOR(int8_t, 8))(0x61L, (VECTOR(int8_t, 4))(0x61L, (VECTOR(int8_t, 2))(0x61L, 0x36L), 0x36L), 0x36L, 0x61L, 0x36L), // p_1906->g_1611
        255UL, // p_1906->g_1618
        (VECTOR(int16_t, 8))(0x5AD7L, (VECTOR(int16_t, 4))(0x5AD7L, (VECTOR(int16_t, 2))(0x5AD7L, 1L), 1L), 1L, 0x5AD7L, 1L), // p_1906->g_1646
        (VECTOR(int32_t, 4))(0x08BB5E21L, (VECTOR(int32_t, 2))(0x08BB5E21L, 0x6CF3E4F4L), 0x6CF3E4F4L), // p_1906->g_1732
        &p_1906->g_1050, // p_1906->g_1776
        &p_1906->g_1776, // p_1906->g_1775
        {{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}},{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}},{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}},{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}}}, // p_1906->g_1777
        0x87L, // p_1906->g_1793
        (void*)0, // p_1906->g_1807
        &p_1906->g_1807, // p_1906->g_1806
        (VECTOR(int32_t, 8))(0x3E01F0FAL, (VECTOR(int32_t, 4))(0x3E01F0FAL, (VECTOR(int32_t, 2))(0x3E01F0FAL, 1L), 1L), 1L, 0x3E01F0FAL, 1L), // p_1906->g_1898
        0, // p_1906->v_collective
        sequence_input[get_global_id(0)], // p_1906->global_0_offset
        sequence_input[get_global_id(1)], // p_1906->global_1_offset
        sequence_input[get_global_id(2)], // p_1906->global_2_offset
        sequence_input[get_local_id(0)], // p_1906->local_0_offset
        sequence_input[get_local_id(1)], // p_1906->local_1_offset
        sequence_input[get_local_id(2)], // p_1906->local_2_offset
        sequence_input[get_group_id(0)], // p_1906->group_0_offset
        sequence_input[get_group_id(1)], // p_1906->group_1_offset
        sequence_input[get_group_id(2)], // p_1906->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[0][get_linear_local_id()])), // p_1906->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1907 = c_1908;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1906);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1906->g_2[i], "p_1906->g_2[i]", print_hash_value);

    }
    transparent_crc(p_1906->g_5, "p_1906->g_5", print_hash_value);
    transparent_crc(p_1906->g_8, "p_1906->g_8", print_hash_value);
    transparent_crc(p_1906->g_12.x, "p_1906->g_12.x", print_hash_value);
    transparent_crc(p_1906->g_12.y, "p_1906->g_12.y", print_hash_value);
    transparent_crc(p_1906->g_12.z, "p_1906->g_12.z", print_hash_value);
    transparent_crc(p_1906->g_12.w, "p_1906->g_12.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1906->g_35[i], "p_1906->g_35[i]", print_hash_value);

    }
    transparent_crc(p_1906->g_45, "p_1906->g_45", print_hash_value);
    transparent_crc(p_1906->g_46, "p_1906->g_46", print_hash_value);
    transparent_crc(p_1906->g_49, "p_1906->g_49", print_hash_value);
    transparent_crc(p_1906->g_50, "p_1906->g_50", print_hash_value);
    transparent_crc(p_1906->g_51, "p_1906->g_51", print_hash_value);
    transparent_crc(p_1906->g_52.s0, "p_1906->g_52.s0", print_hash_value);
    transparent_crc(p_1906->g_52.s1, "p_1906->g_52.s1", print_hash_value);
    transparent_crc(p_1906->g_52.s2, "p_1906->g_52.s2", print_hash_value);
    transparent_crc(p_1906->g_52.s3, "p_1906->g_52.s3", print_hash_value);
    transparent_crc(p_1906->g_52.s4, "p_1906->g_52.s4", print_hash_value);
    transparent_crc(p_1906->g_52.s5, "p_1906->g_52.s5", print_hash_value);
    transparent_crc(p_1906->g_52.s6, "p_1906->g_52.s6", print_hash_value);
    transparent_crc(p_1906->g_52.s7, "p_1906->g_52.s7", print_hash_value);
    transparent_crc(p_1906->g_53, "p_1906->g_53", print_hash_value);
    transparent_crc(p_1906->g_64.x, "p_1906->g_64.x", print_hash_value);
    transparent_crc(p_1906->g_64.y, "p_1906->g_64.y", print_hash_value);
    transparent_crc(p_1906->g_65.x, "p_1906->g_65.x", print_hash_value);
    transparent_crc(p_1906->g_65.y, "p_1906->g_65.y", print_hash_value);
    transparent_crc(p_1906->g_126, "p_1906->g_126", print_hash_value);
    transparent_crc(p_1906->g_137, "p_1906->g_137", print_hash_value);
    transparent_crc(p_1906->g_142, "p_1906->g_142", print_hash_value);
    transparent_crc(p_1906->g_170.x, "p_1906->g_170.x", print_hash_value);
    transparent_crc(p_1906->g_170.y, "p_1906->g_170.y", print_hash_value);
    transparent_crc(p_1906->g_171.x, "p_1906->g_171.x", print_hash_value);
    transparent_crc(p_1906->g_171.y, "p_1906->g_171.y", print_hash_value);
    transparent_crc(p_1906->g_171.z, "p_1906->g_171.z", print_hash_value);
    transparent_crc(p_1906->g_171.w, "p_1906->g_171.w", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1906->g_176[i][j], "p_1906->g_176[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1906->g_180[i][j], "p_1906->g_180[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1906->g_225.s0, "p_1906->g_225.s0", print_hash_value);
    transparent_crc(p_1906->g_225.s1, "p_1906->g_225.s1", print_hash_value);
    transparent_crc(p_1906->g_225.s2, "p_1906->g_225.s2", print_hash_value);
    transparent_crc(p_1906->g_225.s3, "p_1906->g_225.s3", print_hash_value);
    transparent_crc(p_1906->g_225.s4, "p_1906->g_225.s4", print_hash_value);
    transparent_crc(p_1906->g_225.s5, "p_1906->g_225.s5", print_hash_value);
    transparent_crc(p_1906->g_225.s6, "p_1906->g_225.s6", print_hash_value);
    transparent_crc(p_1906->g_225.s7, "p_1906->g_225.s7", print_hash_value);
    transparent_crc(p_1906->g_225.s8, "p_1906->g_225.s8", print_hash_value);
    transparent_crc(p_1906->g_225.s9, "p_1906->g_225.s9", print_hash_value);
    transparent_crc(p_1906->g_225.sa, "p_1906->g_225.sa", print_hash_value);
    transparent_crc(p_1906->g_225.sb, "p_1906->g_225.sb", print_hash_value);
    transparent_crc(p_1906->g_225.sc, "p_1906->g_225.sc", print_hash_value);
    transparent_crc(p_1906->g_225.sd, "p_1906->g_225.sd", print_hash_value);
    transparent_crc(p_1906->g_225.se, "p_1906->g_225.se", print_hash_value);
    transparent_crc(p_1906->g_225.sf, "p_1906->g_225.sf", print_hash_value);
    transparent_crc(p_1906->g_235, "p_1906->g_235", print_hash_value);
    transparent_crc(p_1906->g_259.s0, "p_1906->g_259.s0", print_hash_value);
    transparent_crc(p_1906->g_259.s1, "p_1906->g_259.s1", print_hash_value);
    transparent_crc(p_1906->g_259.s2, "p_1906->g_259.s2", print_hash_value);
    transparent_crc(p_1906->g_259.s3, "p_1906->g_259.s3", print_hash_value);
    transparent_crc(p_1906->g_259.s4, "p_1906->g_259.s4", print_hash_value);
    transparent_crc(p_1906->g_259.s5, "p_1906->g_259.s5", print_hash_value);
    transparent_crc(p_1906->g_259.s6, "p_1906->g_259.s6", print_hash_value);
    transparent_crc(p_1906->g_259.s7, "p_1906->g_259.s7", print_hash_value);
    transparent_crc(p_1906->g_259.s8, "p_1906->g_259.s8", print_hash_value);
    transparent_crc(p_1906->g_259.s9, "p_1906->g_259.s9", print_hash_value);
    transparent_crc(p_1906->g_259.sa, "p_1906->g_259.sa", print_hash_value);
    transparent_crc(p_1906->g_259.sb, "p_1906->g_259.sb", print_hash_value);
    transparent_crc(p_1906->g_259.sc, "p_1906->g_259.sc", print_hash_value);
    transparent_crc(p_1906->g_259.sd, "p_1906->g_259.sd", print_hash_value);
    transparent_crc(p_1906->g_259.se, "p_1906->g_259.se", print_hash_value);
    transparent_crc(p_1906->g_259.sf, "p_1906->g_259.sf", print_hash_value);
    transparent_crc(p_1906->g_274.s0, "p_1906->g_274.s0", print_hash_value);
    transparent_crc(p_1906->g_274.s1, "p_1906->g_274.s1", print_hash_value);
    transparent_crc(p_1906->g_274.s2, "p_1906->g_274.s2", print_hash_value);
    transparent_crc(p_1906->g_274.s3, "p_1906->g_274.s3", print_hash_value);
    transparent_crc(p_1906->g_274.s4, "p_1906->g_274.s4", print_hash_value);
    transparent_crc(p_1906->g_274.s5, "p_1906->g_274.s5", print_hash_value);
    transparent_crc(p_1906->g_274.s6, "p_1906->g_274.s6", print_hash_value);
    transparent_crc(p_1906->g_274.s7, "p_1906->g_274.s7", print_hash_value);
    transparent_crc(p_1906->g_274.s8, "p_1906->g_274.s8", print_hash_value);
    transparent_crc(p_1906->g_274.s9, "p_1906->g_274.s9", print_hash_value);
    transparent_crc(p_1906->g_274.sa, "p_1906->g_274.sa", print_hash_value);
    transparent_crc(p_1906->g_274.sb, "p_1906->g_274.sb", print_hash_value);
    transparent_crc(p_1906->g_274.sc, "p_1906->g_274.sc", print_hash_value);
    transparent_crc(p_1906->g_274.sd, "p_1906->g_274.sd", print_hash_value);
    transparent_crc(p_1906->g_274.se, "p_1906->g_274.se", print_hash_value);
    transparent_crc(p_1906->g_274.sf, "p_1906->g_274.sf", print_hash_value);
    transparent_crc(p_1906->g_284.x, "p_1906->g_284.x", print_hash_value);
    transparent_crc(p_1906->g_284.y, "p_1906->g_284.y", print_hash_value);
    transparent_crc(p_1906->g_284.z, "p_1906->g_284.z", print_hash_value);
    transparent_crc(p_1906->g_284.w, "p_1906->g_284.w", print_hash_value);
    transparent_crc(p_1906->g_290.s0, "p_1906->g_290.s0", print_hash_value);
    transparent_crc(p_1906->g_290.s1, "p_1906->g_290.s1", print_hash_value);
    transparent_crc(p_1906->g_290.s2, "p_1906->g_290.s2", print_hash_value);
    transparent_crc(p_1906->g_290.s3, "p_1906->g_290.s3", print_hash_value);
    transparent_crc(p_1906->g_290.s4, "p_1906->g_290.s4", print_hash_value);
    transparent_crc(p_1906->g_290.s5, "p_1906->g_290.s5", print_hash_value);
    transparent_crc(p_1906->g_290.s6, "p_1906->g_290.s6", print_hash_value);
    transparent_crc(p_1906->g_290.s7, "p_1906->g_290.s7", print_hash_value);
    transparent_crc(p_1906->g_291.s0, "p_1906->g_291.s0", print_hash_value);
    transparent_crc(p_1906->g_291.s1, "p_1906->g_291.s1", print_hash_value);
    transparent_crc(p_1906->g_291.s2, "p_1906->g_291.s2", print_hash_value);
    transparent_crc(p_1906->g_291.s3, "p_1906->g_291.s3", print_hash_value);
    transparent_crc(p_1906->g_291.s4, "p_1906->g_291.s4", print_hash_value);
    transparent_crc(p_1906->g_291.s5, "p_1906->g_291.s5", print_hash_value);
    transparent_crc(p_1906->g_291.s6, "p_1906->g_291.s6", print_hash_value);
    transparent_crc(p_1906->g_291.s7, "p_1906->g_291.s7", print_hash_value);
    transparent_crc(p_1906->g_304.x, "p_1906->g_304.x", print_hash_value);
    transparent_crc(p_1906->g_304.y, "p_1906->g_304.y", print_hash_value);
    transparent_crc(p_1906->g_309.s0, "p_1906->g_309.s0", print_hash_value);
    transparent_crc(p_1906->g_309.s1, "p_1906->g_309.s1", print_hash_value);
    transparent_crc(p_1906->g_309.s2, "p_1906->g_309.s2", print_hash_value);
    transparent_crc(p_1906->g_309.s3, "p_1906->g_309.s3", print_hash_value);
    transparent_crc(p_1906->g_309.s4, "p_1906->g_309.s4", print_hash_value);
    transparent_crc(p_1906->g_309.s5, "p_1906->g_309.s5", print_hash_value);
    transparent_crc(p_1906->g_309.s6, "p_1906->g_309.s6", print_hash_value);
    transparent_crc(p_1906->g_309.s7, "p_1906->g_309.s7", print_hash_value);
    transparent_crc(p_1906->g_309.s8, "p_1906->g_309.s8", print_hash_value);
    transparent_crc(p_1906->g_309.s9, "p_1906->g_309.s9", print_hash_value);
    transparent_crc(p_1906->g_309.sa, "p_1906->g_309.sa", print_hash_value);
    transparent_crc(p_1906->g_309.sb, "p_1906->g_309.sb", print_hash_value);
    transparent_crc(p_1906->g_309.sc, "p_1906->g_309.sc", print_hash_value);
    transparent_crc(p_1906->g_309.sd, "p_1906->g_309.sd", print_hash_value);
    transparent_crc(p_1906->g_309.se, "p_1906->g_309.se", print_hash_value);
    transparent_crc(p_1906->g_309.sf, "p_1906->g_309.sf", print_hash_value);
    transparent_crc(p_1906->g_311.s0, "p_1906->g_311.s0", print_hash_value);
    transparent_crc(p_1906->g_311.s1, "p_1906->g_311.s1", print_hash_value);
    transparent_crc(p_1906->g_311.s2, "p_1906->g_311.s2", print_hash_value);
    transparent_crc(p_1906->g_311.s3, "p_1906->g_311.s3", print_hash_value);
    transparent_crc(p_1906->g_311.s4, "p_1906->g_311.s4", print_hash_value);
    transparent_crc(p_1906->g_311.s5, "p_1906->g_311.s5", print_hash_value);
    transparent_crc(p_1906->g_311.s6, "p_1906->g_311.s6", print_hash_value);
    transparent_crc(p_1906->g_311.s7, "p_1906->g_311.s7", print_hash_value);
    transparent_crc(p_1906->g_324.s0, "p_1906->g_324.s0", print_hash_value);
    transparent_crc(p_1906->g_324.s1, "p_1906->g_324.s1", print_hash_value);
    transparent_crc(p_1906->g_324.s2, "p_1906->g_324.s2", print_hash_value);
    transparent_crc(p_1906->g_324.s3, "p_1906->g_324.s3", print_hash_value);
    transparent_crc(p_1906->g_324.s4, "p_1906->g_324.s4", print_hash_value);
    transparent_crc(p_1906->g_324.s5, "p_1906->g_324.s5", print_hash_value);
    transparent_crc(p_1906->g_324.s6, "p_1906->g_324.s6", print_hash_value);
    transparent_crc(p_1906->g_324.s7, "p_1906->g_324.s7", print_hash_value);
    transparent_crc(p_1906->g_324.s8, "p_1906->g_324.s8", print_hash_value);
    transparent_crc(p_1906->g_324.s9, "p_1906->g_324.s9", print_hash_value);
    transparent_crc(p_1906->g_324.sa, "p_1906->g_324.sa", print_hash_value);
    transparent_crc(p_1906->g_324.sb, "p_1906->g_324.sb", print_hash_value);
    transparent_crc(p_1906->g_324.sc, "p_1906->g_324.sc", print_hash_value);
    transparent_crc(p_1906->g_324.sd, "p_1906->g_324.sd", print_hash_value);
    transparent_crc(p_1906->g_324.se, "p_1906->g_324.se", print_hash_value);
    transparent_crc(p_1906->g_324.sf, "p_1906->g_324.sf", print_hash_value);
    transparent_crc(p_1906->g_326.s0, "p_1906->g_326.s0", print_hash_value);
    transparent_crc(p_1906->g_326.s1, "p_1906->g_326.s1", print_hash_value);
    transparent_crc(p_1906->g_326.s2, "p_1906->g_326.s2", print_hash_value);
    transparent_crc(p_1906->g_326.s3, "p_1906->g_326.s3", print_hash_value);
    transparent_crc(p_1906->g_326.s4, "p_1906->g_326.s4", print_hash_value);
    transparent_crc(p_1906->g_326.s5, "p_1906->g_326.s5", print_hash_value);
    transparent_crc(p_1906->g_326.s6, "p_1906->g_326.s6", print_hash_value);
    transparent_crc(p_1906->g_326.s7, "p_1906->g_326.s7", print_hash_value);
    transparent_crc(p_1906->g_326.s8, "p_1906->g_326.s8", print_hash_value);
    transparent_crc(p_1906->g_326.s9, "p_1906->g_326.s9", print_hash_value);
    transparent_crc(p_1906->g_326.sa, "p_1906->g_326.sa", print_hash_value);
    transparent_crc(p_1906->g_326.sb, "p_1906->g_326.sb", print_hash_value);
    transparent_crc(p_1906->g_326.sc, "p_1906->g_326.sc", print_hash_value);
    transparent_crc(p_1906->g_326.sd, "p_1906->g_326.sd", print_hash_value);
    transparent_crc(p_1906->g_326.se, "p_1906->g_326.se", print_hash_value);
    transparent_crc(p_1906->g_326.sf, "p_1906->g_326.sf", print_hash_value);
    transparent_crc(p_1906->g_332, "p_1906->g_332", print_hash_value);
    transparent_crc(p_1906->g_463.s0, "p_1906->g_463.s0", print_hash_value);
    transparent_crc(p_1906->g_463.s1, "p_1906->g_463.s1", print_hash_value);
    transparent_crc(p_1906->g_463.s2, "p_1906->g_463.s2", print_hash_value);
    transparent_crc(p_1906->g_463.s3, "p_1906->g_463.s3", print_hash_value);
    transparent_crc(p_1906->g_463.s4, "p_1906->g_463.s4", print_hash_value);
    transparent_crc(p_1906->g_463.s5, "p_1906->g_463.s5", print_hash_value);
    transparent_crc(p_1906->g_463.s6, "p_1906->g_463.s6", print_hash_value);
    transparent_crc(p_1906->g_463.s7, "p_1906->g_463.s7", print_hash_value);
    transparent_crc(p_1906->g_464.s0, "p_1906->g_464.s0", print_hash_value);
    transparent_crc(p_1906->g_464.s1, "p_1906->g_464.s1", print_hash_value);
    transparent_crc(p_1906->g_464.s2, "p_1906->g_464.s2", print_hash_value);
    transparent_crc(p_1906->g_464.s3, "p_1906->g_464.s3", print_hash_value);
    transparent_crc(p_1906->g_464.s4, "p_1906->g_464.s4", print_hash_value);
    transparent_crc(p_1906->g_464.s5, "p_1906->g_464.s5", print_hash_value);
    transparent_crc(p_1906->g_464.s6, "p_1906->g_464.s6", print_hash_value);
    transparent_crc(p_1906->g_464.s7, "p_1906->g_464.s7", print_hash_value);
    transparent_crc(p_1906->g_498, "p_1906->g_498", print_hash_value);
    transparent_crc(p_1906->g_532.s0, "p_1906->g_532.s0", print_hash_value);
    transparent_crc(p_1906->g_532.s1, "p_1906->g_532.s1", print_hash_value);
    transparent_crc(p_1906->g_532.s2, "p_1906->g_532.s2", print_hash_value);
    transparent_crc(p_1906->g_532.s3, "p_1906->g_532.s3", print_hash_value);
    transparent_crc(p_1906->g_532.s4, "p_1906->g_532.s4", print_hash_value);
    transparent_crc(p_1906->g_532.s5, "p_1906->g_532.s5", print_hash_value);
    transparent_crc(p_1906->g_532.s6, "p_1906->g_532.s6", print_hash_value);
    transparent_crc(p_1906->g_532.s7, "p_1906->g_532.s7", print_hash_value);
    transparent_crc(p_1906->g_543.s0, "p_1906->g_543.s0", print_hash_value);
    transparent_crc(p_1906->g_543.s1, "p_1906->g_543.s1", print_hash_value);
    transparent_crc(p_1906->g_543.s2, "p_1906->g_543.s2", print_hash_value);
    transparent_crc(p_1906->g_543.s3, "p_1906->g_543.s3", print_hash_value);
    transparent_crc(p_1906->g_543.s4, "p_1906->g_543.s4", print_hash_value);
    transparent_crc(p_1906->g_543.s5, "p_1906->g_543.s5", print_hash_value);
    transparent_crc(p_1906->g_543.s6, "p_1906->g_543.s6", print_hash_value);
    transparent_crc(p_1906->g_543.s7, "p_1906->g_543.s7", print_hash_value);
    transparent_crc(p_1906->g_569, "p_1906->g_569", print_hash_value);
    transparent_crc(p_1906->g_577.x, "p_1906->g_577.x", print_hash_value);
    transparent_crc(p_1906->g_577.y, "p_1906->g_577.y", print_hash_value);
    transparent_crc(p_1906->g_577.z, "p_1906->g_577.z", print_hash_value);
    transparent_crc(p_1906->g_577.w, "p_1906->g_577.w", print_hash_value);
    transparent_crc(p_1906->g_680.x, "p_1906->g_680.x", print_hash_value);
    transparent_crc(p_1906->g_680.y, "p_1906->g_680.y", print_hash_value);
    transparent_crc(p_1906->g_688.x, "p_1906->g_688.x", print_hash_value);
    transparent_crc(p_1906->g_688.y, "p_1906->g_688.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1906->g_739[i], "p_1906->g_739[i]", print_hash_value);

    }
    transparent_crc(p_1906->g_758.s0, "p_1906->g_758.s0", print_hash_value);
    transparent_crc(p_1906->g_758.s1, "p_1906->g_758.s1", print_hash_value);
    transparent_crc(p_1906->g_758.s2, "p_1906->g_758.s2", print_hash_value);
    transparent_crc(p_1906->g_758.s3, "p_1906->g_758.s3", print_hash_value);
    transparent_crc(p_1906->g_758.s4, "p_1906->g_758.s4", print_hash_value);
    transparent_crc(p_1906->g_758.s5, "p_1906->g_758.s5", print_hash_value);
    transparent_crc(p_1906->g_758.s6, "p_1906->g_758.s6", print_hash_value);
    transparent_crc(p_1906->g_758.s7, "p_1906->g_758.s7", print_hash_value);
    transparent_crc(p_1906->g_758.s8, "p_1906->g_758.s8", print_hash_value);
    transparent_crc(p_1906->g_758.s9, "p_1906->g_758.s9", print_hash_value);
    transparent_crc(p_1906->g_758.sa, "p_1906->g_758.sa", print_hash_value);
    transparent_crc(p_1906->g_758.sb, "p_1906->g_758.sb", print_hash_value);
    transparent_crc(p_1906->g_758.sc, "p_1906->g_758.sc", print_hash_value);
    transparent_crc(p_1906->g_758.sd, "p_1906->g_758.sd", print_hash_value);
    transparent_crc(p_1906->g_758.se, "p_1906->g_758.se", print_hash_value);
    transparent_crc(p_1906->g_758.sf, "p_1906->g_758.sf", print_hash_value);
    transparent_crc(p_1906->g_780.x, "p_1906->g_780.x", print_hash_value);
    transparent_crc(p_1906->g_780.y, "p_1906->g_780.y", print_hash_value);
    transparent_crc(p_1906->g_780.z, "p_1906->g_780.z", print_hash_value);
    transparent_crc(p_1906->g_780.w, "p_1906->g_780.w", print_hash_value);
    transparent_crc(p_1906->g_790.s0, "p_1906->g_790.s0", print_hash_value);
    transparent_crc(p_1906->g_790.s1, "p_1906->g_790.s1", print_hash_value);
    transparent_crc(p_1906->g_790.s2, "p_1906->g_790.s2", print_hash_value);
    transparent_crc(p_1906->g_790.s3, "p_1906->g_790.s3", print_hash_value);
    transparent_crc(p_1906->g_790.s4, "p_1906->g_790.s4", print_hash_value);
    transparent_crc(p_1906->g_790.s5, "p_1906->g_790.s5", print_hash_value);
    transparent_crc(p_1906->g_790.s6, "p_1906->g_790.s6", print_hash_value);
    transparent_crc(p_1906->g_790.s7, "p_1906->g_790.s7", print_hash_value);
    transparent_crc(p_1906->g_790.s8, "p_1906->g_790.s8", print_hash_value);
    transparent_crc(p_1906->g_790.s9, "p_1906->g_790.s9", print_hash_value);
    transparent_crc(p_1906->g_790.sa, "p_1906->g_790.sa", print_hash_value);
    transparent_crc(p_1906->g_790.sb, "p_1906->g_790.sb", print_hash_value);
    transparent_crc(p_1906->g_790.sc, "p_1906->g_790.sc", print_hash_value);
    transparent_crc(p_1906->g_790.sd, "p_1906->g_790.sd", print_hash_value);
    transparent_crc(p_1906->g_790.se, "p_1906->g_790.se", print_hash_value);
    transparent_crc(p_1906->g_790.sf, "p_1906->g_790.sf", print_hash_value);
    transparent_crc(p_1906->g_793.s0, "p_1906->g_793.s0", print_hash_value);
    transparent_crc(p_1906->g_793.s1, "p_1906->g_793.s1", print_hash_value);
    transparent_crc(p_1906->g_793.s2, "p_1906->g_793.s2", print_hash_value);
    transparent_crc(p_1906->g_793.s3, "p_1906->g_793.s3", print_hash_value);
    transparent_crc(p_1906->g_793.s4, "p_1906->g_793.s4", print_hash_value);
    transparent_crc(p_1906->g_793.s5, "p_1906->g_793.s5", print_hash_value);
    transparent_crc(p_1906->g_793.s6, "p_1906->g_793.s6", print_hash_value);
    transparent_crc(p_1906->g_793.s7, "p_1906->g_793.s7", print_hash_value);
    transparent_crc(p_1906->g_793.s8, "p_1906->g_793.s8", print_hash_value);
    transparent_crc(p_1906->g_793.s9, "p_1906->g_793.s9", print_hash_value);
    transparent_crc(p_1906->g_793.sa, "p_1906->g_793.sa", print_hash_value);
    transparent_crc(p_1906->g_793.sb, "p_1906->g_793.sb", print_hash_value);
    transparent_crc(p_1906->g_793.sc, "p_1906->g_793.sc", print_hash_value);
    transparent_crc(p_1906->g_793.sd, "p_1906->g_793.sd", print_hash_value);
    transparent_crc(p_1906->g_793.se, "p_1906->g_793.se", print_hash_value);
    transparent_crc(p_1906->g_793.sf, "p_1906->g_793.sf", print_hash_value);
    transparent_crc(p_1906->g_796.x, "p_1906->g_796.x", print_hash_value);
    transparent_crc(p_1906->g_796.y, "p_1906->g_796.y", print_hash_value);
    transparent_crc(p_1906->g_796.z, "p_1906->g_796.z", print_hash_value);
    transparent_crc(p_1906->g_796.w, "p_1906->g_796.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1906->g_855[i][j], "p_1906->g_855[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1906->g_875.x, "p_1906->g_875.x", print_hash_value);
    transparent_crc(p_1906->g_875.y, "p_1906->g_875.y", print_hash_value);
    transparent_crc(p_1906->g_878, "p_1906->g_878", print_hash_value);
    transparent_crc(p_1906->g_881.s0, "p_1906->g_881.s0", print_hash_value);
    transparent_crc(p_1906->g_881.s1, "p_1906->g_881.s1", print_hash_value);
    transparent_crc(p_1906->g_881.s2, "p_1906->g_881.s2", print_hash_value);
    transparent_crc(p_1906->g_881.s3, "p_1906->g_881.s3", print_hash_value);
    transparent_crc(p_1906->g_881.s4, "p_1906->g_881.s4", print_hash_value);
    transparent_crc(p_1906->g_881.s5, "p_1906->g_881.s5", print_hash_value);
    transparent_crc(p_1906->g_881.s6, "p_1906->g_881.s6", print_hash_value);
    transparent_crc(p_1906->g_881.s7, "p_1906->g_881.s7", print_hash_value);
    transparent_crc(p_1906->g_965.s0, "p_1906->g_965.s0", print_hash_value);
    transparent_crc(p_1906->g_965.s1, "p_1906->g_965.s1", print_hash_value);
    transparent_crc(p_1906->g_965.s2, "p_1906->g_965.s2", print_hash_value);
    transparent_crc(p_1906->g_965.s3, "p_1906->g_965.s3", print_hash_value);
    transparent_crc(p_1906->g_965.s4, "p_1906->g_965.s4", print_hash_value);
    transparent_crc(p_1906->g_965.s5, "p_1906->g_965.s5", print_hash_value);
    transparent_crc(p_1906->g_965.s6, "p_1906->g_965.s6", print_hash_value);
    transparent_crc(p_1906->g_965.s7, "p_1906->g_965.s7", print_hash_value);
    transparent_crc(p_1906->g_965.s8, "p_1906->g_965.s8", print_hash_value);
    transparent_crc(p_1906->g_965.s9, "p_1906->g_965.s9", print_hash_value);
    transparent_crc(p_1906->g_965.sa, "p_1906->g_965.sa", print_hash_value);
    transparent_crc(p_1906->g_965.sb, "p_1906->g_965.sb", print_hash_value);
    transparent_crc(p_1906->g_965.sc, "p_1906->g_965.sc", print_hash_value);
    transparent_crc(p_1906->g_965.sd, "p_1906->g_965.sd", print_hash_value);
    transparent_crc(p_1906->g_965.se, "p_1906->g_965.se", print_hash_value);
    transparent_crc(p_1906->g_965.sf, "p_1906->g_965.sf", print_hash_value);
    transparent_crc(p_1906->g_1036, "p_1906->g_1036", print_hash_value);
    transparent_crc(p_1906->g_1100.x, "p_1906->g_1100.x", print_hash_value);
    transparent_crc(p_1906->g_1100.y, "p_1906->g_1100.y", print_hash_value);
    transparent_crc(p_1906->g_1100.z, "p_1906->g_1100.z", print_hash_value);
    transparent_crc(p_1906->g_1100.w, "p_1906->g_1100.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1906->g_1102[i], "p_1906->g_1102[i]", print_hash_value);

    }
    transparent_crc(p_1906->g_1105.x, "p_1906->g_1105.x", print_hash_value);
    transparent_crc(p_1906->g_1105.y, "p_1906->g_1105.y", print_hash_value);
    transparent_crc(p_1906->g_1108.x, "p_1906->g_1108.x", print_hash_value);
    transparent_crc(p_1906->g_1108.y, "p_1906->g_1108.y", print_hash_value);
    transparent_crc(p_1906->g_1110.s0, "p_1906->g_1110.s0", print_hash_value);
    transparent_crc(p_1906->g_1110.s1, "p_1906->g_1110.s1", print_hash_value);
    transparent_crc(p_1906->g_1110.s2, "p_1906->g_1110.s2", print_hash_value);
    transparent_crc(p_1906->g_1110.s3, "p_1906->g_1110.s3", print_hash_value);
    transparent_crc(p_1906->g_1110.s4, "p_1906->g_1110.s4", print_hash_value);
    transparent_crc(p_1906->g_1110.s5, "p_1906->g_1110.s5", print_hash_value);
    transparent_crc(p_1906->g_1110.s6, "p_1906->g_1110.s6", print_hash_value);
    transparent_crc(p_1906->g_1110.s7, "p_1906->g_1110.s7", print_hash_value);
    transparent_crc(p_1906->g_1133.s0, "p_1906->g_1133.s0", print_hash_value);
    transparent_crc(p_1906->g_1133.s1, "p_1906->g_1133.s1", print_hash_value);
    transparent_crc(p_1906->g_1133.s2, "p_1906->g_1133.s2", print_hash_value);
    transparent_crc(p_1906->g_1133.s3, "p_1906->g_1133.s3", print_hash_value);
    transparent_crc(p_1906->g_1133.s4, "p_1906->g_1133.s4", print_hash_value);
    transparent_crc(p_1906->g_1133.s5, "p_1906->g_1133.s5", print_hash_value);
    transparent_crc(p_1906->g_1133.s6, "p_1906->g_1133.s6", print_hash_value);
    transparent_crc(p_1906->g_1133.s7, "p_1906->g_1133.s7", print_hash_value);
    transparent_crc(p_1906->g_1133.s8, "p_1906->g_1133.s8", print_hash_value);
    transparent_crc(p_1906->g_1133.s9, "p_1906->g_1133.s9", print_hash_value);
    transparent_crc(p_1906->g_1133.sa, "p_1906->g_1133.sa", print_hash_value);
    transparent_crc(p_1906->g_1133.sb, "p_1906->g_1133.sb", print_hash_value);
    transparent_crc(p_1906->g_1133.sc, "p_1906->g_1133.sc", print_hash_value);
    transparent_crc(p_1906->g_1133.sd, "p_1906->g_1133.sd", print_hash_value);
    transparent_crc(p_1906->g_1133.se, "p_1906->g_1133.se", print_hash_value);
    transparent_crc(p_1906->g_1133.sf, "p_1906->g_1133.sf", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1906->g_1154[i], "p_1906->g_1154[i]", print_hash_value);

    }
    transparent_crc(p_1906->g_1210.s0, "p_1906->g_1210.s0", print_hash_value);
    transparent_crc(p_1906->g_1210.s1, "p_1906->g_1210.s1", print_hash_value);
    transparent_crc(p_1906->g_1210.s2, "p_1906->g_1210.s2", print_hash_value);
    transparent_crc(p_1906->g_1210.s3, "p_1906->g_1210.s3", print_hash_value);
    transparent_crc(p_1906->g_1210.s4, "p_1906->g_1210.s4", print_hash_value);
    transparent_crc(p_1906->g_1210.s5, "p_1906->g_1210.s5", print_hash_value);
    transparent_crc(p_1906->g_1210.s6, "p_1906->g_1210.s6", print_hash_value);
    transparent_crc(p_1906->g_1210.s7, "p_1906->g_1210.s7", print_hash_value);
    transparent_crc(p_1906->g_1219, "p_1906->g_1219", print_hash_value);
    transparent_crc(p_1906->g_1246.s0, "p_1906->g_1246.s0", print_hash_value);
    transparent_crc(p_1906->g_1246.s1, "p_1906->g_1246.s1", print_hash_value);
    transparent_crc(p_1906->g_1246.s2, "p_1906->g_1246.s2", print_hash_value);
    transparent_crc(p_1906->g_1246.s3, "p_1906->g_1246.s3", print_hash_value);
    transparent_crc(p_1906->g_1246.s4, "p_1906->g_1246.s4", print_hash_value);
    transparent_crc(p_1906->g_1246.s5, "p_1906->g_1246.s5", print_hash_value);
    transparent_crc(p_1906->g_1246.s6, "p_1906->g_1246.s6", print_hash_value);
    transparent_crc(p_1906->g_1246.s7, "p_1906->g_1246.s7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1906->g_1258[i][j][k], "p_1906->g_1258[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1906->g_1265, "p_1906->g_1265", print_hash_value);
    transparent_crc(p_1906->g_1337.x, "p_1906->g_1337.x", print_hash_value);
    transparent_crc(p_1906->g_1337.y, "p_1906->g_1337.y", print_hash_value);
    transparent_crc(p_1906->g_1337.z, "p_1906->g_1337.z", print_hash_value);
    transparent_crc(p_1906->g_1337.w, "p_1906->g_1337.w", print_hash_value);
    transparent_crc(p_1906->g_1352, "p_1906->g_1352", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1906->g_1374[i], "p_1906->g_1374[i]", print_hash_value);

    }
    transparent_crc(p_1906->g_1382.s0, "p_1906->g_1382.s0", print_hash_value);
    transparent_crc(p_1906->g_1382.s1, "p_1906->g_1382.s1", print_hash_value);
    transparent_crc(p_1906->g_1382.s2, "p_1906->g_1382.s2", print_hash_value);
    transparent_crc(p_1906->g_1382.s3, "p_1906->g_1382.s3", print_hash_value);
    transparent_crc(p_1906->g_1382.s4, "p_1906->g_1382.s4", print_hash_value);
    transparent_crc(p_1906->g_1382.s5, "p_1906->g_1382.s5", print_hash_value);
    transparent_crc(p_1906->g_1382.s6, "p_1906->g_1382.s6", print_hash_value);
    transparent_crc(p_1906->g_1382.s7, "p_1906->g_1382.s7", print_hash_value);
    transparent_crc(p_1906->g_1382.s8, "p_1906->g_1382.s8", print_hash_value);
    transparent_crc(p_1906->g_1382.s9, "p_1906->g_1382.s9", print_hash_value);
    transparent_crc(p_1906->g_1382.sa, "p_1906->g_1382.sa", print_hash_value);
    transparent_crc(p_1906->g_1382.sb, "p_1906->g_1382.sb", print_hash_value);
    transparent_crc(p_1906->g_1382.sc, "p_1906->g_1382.sc", print_hash_value);
    transparent_crc(p_1906->g_1382.sd, "p_1906->g_1382.sd", print_hash_value);
    transparent_crc(p_1906->g_1382.se, "p_1906->g_1382.se", print_hash_value);
    transparent_crc(p_1906->g_1382.sf, "p_1906->g_1382.sf", print_hash_value);
    transparent_crc(p_1906->g_1396, "p_1906->g_1396", print_hash_value);
    transparent_crc(p_1906->g_1398.s0, "p_1906->g_1398.s0", print_hash_value);
    transparent_crc(p_1906->g_1398.s1, "p_1906->g_1398.s1", print_hash_value);
    transparent_crc(p_1906->g_1398.s2, "p_1906->g_1398.s2", print_hash_value);
    transparent_crc(p_1906->g_1398.s3, "p_1906->g_1398.s3", print_hash_value);
    transparent_crc(p_1906->g_1398.s4, "p_1906->g_1398.s4", print_hash_value);
    transparent_crc(p_1906->g_1398.s5, "p_1906->g_1398.s5", print_hash_value);
    transparent_crc(p_1906->g_1398.s6, "p_1906->g_1398.s6", print_hash_value);
    transparent_crc(p_1906->g_1398.s7, "p_1906->g_1398.s7", print_hash_value);
    transparent_crc(p_1906->g_1398.s8, "p_1906->g_1398.s8", print_hash_value);
    transparent_crc(p_1906->g_1398.s9, "p_1906->g_1398.s9", print_hash_value);
    transparent_crc(p_1906->g_1398.sa, "p_1906->g_1398.sa", print_hash_value);
    transparent_crc(p_1906->g_1398.sb, "p_1906->g_1398.sb", print_hash_value);
    transparent_crc(p_1906->g_1398.sc, "p_1906->g_1398.sc", print_hash_value);
    transparent_crc(p_1906->g_1398.sd, "p_1906->g_1398.sd", print_hash_value);
    transparent_crc(p_1906->g_1398.se, "p_1906->g_1398.se", print_hash_value);
    transparent_crc(p_1906->g_1398.sf, "p_1906->g_1398.sf", print_hash_value);
    transparent_crc(p_1906->g_1403.x, "p_1906->g_1403.x", print_hash_value);
    transparent_crc(p_1906->g_1403.y, "p_1906->g_1403.y", print_hash_value);
    transparent_crc(p_1906->g_1403.z, "p_1906->g_1403.z", print_hash_value);
    transparent_crc(p_1906->g_1403.w, "p_1906->g_1403.w", print_hash_value);
    transparent_crc(p_1906->g_1406.x, "p_1906->g_1406.x", print_hash_value);
    transparent_crc(p_1906->g_1406.y, "p_1906->g_1406.y", print_hash_value);
    transparent_crc(p_1906->g_1406.z, "p_1906->g_1406.z", print_hash_value);
    transparent_crc(p_1906->g_1406.w, "p_1906->g_1406.w", print_hash_value);
    transparent_crc(p_1906->g_1435.x, "p_1906->g_1435.x", print_hash_value);
    transparent_crc(p_1906->g_1435.y, "p_1906->g_1435.y", print_hash_value);
    transparent_crc(p_1906->g_1436.s0, "p_1906->g_1436.s0", print_hash_value);
    transparent_crc(p_1906->g_1436.s1, "p_1906->g_1436.s1", print_hash_value);
    transparent_crc(p_1906->g_1436.s2, "p_1906->g_1436.s2", print_hash_value);
    transparent_crc(p_1906->g_1436.s3, "p_1906->g_1436.s3", print_hash_value);
    transparent_crc(p_1906->g_1436.s4, "p_1906->g_1436.s4", print_hash_value);
    transparent_crc(p_1906->g_1436.s5, "p_1906->g_1436.s5", print_hash_value);
    transparent_crc(p_1906->g_1436.s6, "p_1906->g_1436.s6", print_hash_value);
    transparent_crc(p_1906->g_1436.s7, "p_1906->g_1436.s7", print_hash_value);
    transparent_crc(p_1906->g_1436.s8, "p_1906->g_1436.s8", print_hash_value);
    transparent_crc(p_1906->g_1436.s9, "p_1906->g_1436.s9", print_hash_value);
    transparent_crc(p_1906->g_1436.sa, "p_1906->g_1436.sa", print_hash_value);
    transparent_crc(p_1906->g_1436.sb, "p_1906->g_1436.sb", print_hash_value);
    transparent_crc(p_1906->g_1436.sc, "p_1906->g_1436.sc", print_hash_value);
    transparent_crc(p_1906->g_1436.sd, "p_1906->g_1436.sd", print_hash_value);
    transparent_crc(p_1906->g_1436.se, "p_1906->g_1436.se", print_hash_value);
    transparent_crc(p_1906->g_1436.sf, "p_1906->g_1436.sf", print_hash_value);
    transparent_crc(p_1906->g_1468, "p_1906->g_1468", print_hash_value);
    transparent_crc(p_1906->g_1480.x, "p_1906->g_1480.x", print_hash_value);
    transparent_crc(p_1906->g_1480.y, "p_1906->g_1480.y", print_hash_value);
    transparent_crc(p_1906->g_1486.x, "p_1906->g_1486.x", print_hash_value);
    transparent_crc(p_1906->g_1486.y, "p_1906->g_1486.y", print_hash_value);
    transparent_crc(p_1906->g_1494.s0, "p_1906->g_1494.s0", print_hash_value);
    transparent_crc(p_1906->g_1494.s1, "p_1906->g_1494.s1", print_hash_value);
    transparent_crc(p_1906->g_1494.s2, "p_1906->g_1494.s2", print_hash_value);
    transparent_crc(p_1906->g_1494.s3, "p_1906->g_1494.s3", print_hash_value);
    transparent_crc(p_1906->g_1494.s4, "p_1906->g_1494.s4", print_hash_value);
    transparent_crc(p_1906->g_1494.s5, "p_1906->g_1494.s5", print_hash_value);
    transparent_crc(p_1906->g_1494.s6, "p_1906->g_1494.s6", print_hash_value);
    transparent_crc(p_1906->g_1494.s7, "p_1906->g_1494.s7", print_hash_value);
    transparent_crc(p_1906->g_1494.s8, "p_1906->g_1494.s8", print_hash_value);
    transparent_crc(p_1906->g_1494.s9, "p_1906->g_1494.s9", print_hash_value);
    transparent_crc(p_1906->g_1494.sa, "p_1906->g_1494.sa", print_hash_value);
    transparent_crc(p_1906->g_1494.sb, "p_1906->g_1494.sb", print_hash_value);
    transparent_crc(p_1906->g_1494.sc, "p_1906->g_1494.sc", print_hash_value);
    transparent_crc(p_1906->g_1494.sd, "p_1906->g_1494.sd", print_hash_value);
    transparent_crc(p_1906->g_1494.se, "p_1906->g_1494.se", print_hash_value);
    transparent_crc(p_1906->g_1494.sf, "p_1906->g_1494.sf", print_hash_value);
    transparent_crc(p_1906->g_1553.x, "p_1906->g_1553.x", print_hash_value);
    transparent_crc(p_1906->g_1553.y, "p_1906->g_1553.y", print_hash_value);
    transparent_crc(p_1906->g_1553.z, "p_1906->g_1553.z", print_hash_value);
    transparent_crc(p_1906->g_1553.w, "p_1906->g_1553.w", print_hash_value);
    transparent_crc(p_1906->g_1571.x, "p_1906->g_1571.x", print_hash_value);
    transparent_crc(p_1906->g_1571.y, "p_1906->g_1571.y", print_hash_value);
    transparent_crc(p_1906->g_1573.x, "p_1906->g_1573.x", print_hash_value);
    transparent_crc(p_1906->g_1573.y, "p_1906->g_1573.y", print_hash_value);
    transparent_crc(p_1906->g_1606.s0, "p_1906->g_1606.s0", print_hash_value);
    transparent_crc(p_1906->g_1606.s1, "p_1906->g_1606.s1", print_hash_value);
    transparent_crc(p_1906->g_1606.s2, "p_1906->g_1606.s2", print_hash_value);
    transparent_crc(p_1906->g_1606.s3, "p_1906->g_1606.s3", print_hash_value);
    transparent_crc(p_1906->g_1606.s4, "p_1906->g_1606.s4", print_hash_value);
    transparent_crc(p_1906->g_1606.s5, "p_1906->g_1606.s5", print_hash_value);
    transparent_crc(p_1906->g_1606.s6, "p_1906->g_1606.s6", print_hash_value);
    transparent_crc(p_1906->g_1606.s7, "p_1906->g_1606.s7", print_hash_value);
    transparent_crc(p_1906->g_1606.s8, "p_1906->g_1606.s8", print_hash_value);
    transparent_crc(p_1906->g_1606.s9, "p_1906->g_1606.s9", print_hash_value);
    transparent_crc(p_1906->g_1606.sa, "p_1906->g_1606.sa", print_hash_value);
    transparent_crc(p_1906->g_1606.sb, "p_1906->g_1606.sb", print_hash_value);
    transparent_crc(p_1906->g_1606.sc, "p_1906->g_1606.sc", print_hash_value);
    transparent_crc(p_1906->g_1606.sd, "p_1906->g_1606.sd", print_hash_value);
    transparent_crc(p_1906->g_1606.se, "p_1906->g_1606.se", print_hash_value);
    transparent_crc(p_1906->g_1606.sf, "p_1906->g_1606.sf", print_hash_value);
    transparent_crc(p_1906->g_1607.x, "p_1906->g_1607.x", print_hash_value);
    transparent_crc(p_1906->g_1607.y, "p_1906->g_1607.y", print_hash_value);
    transparent_crc(p_1906->g_1608.s0, "p_1906->g_1608.s0", print_hash_value);
    transparent_crc(p_1906->g_1608.s1, "p_1906->g_1608.s1", print_hash_value);
    transparent_crc(p_1906->g_1608.s2, "p_1906->g_1608.s2", print_hash_value);
    transparent_crc(p_1906->g_1608.s3, "p_1906->g_1608.s3", print_hash_value);
    transparent_crc(p_1906->g_1608.s4, "p_1906->g_1608.s4", print_hash_value);
    transparent_crc(p_1906->g_1608.s5, "p_1906->g_1608.s5", print_hash_value);
    transparent_crc(p_1906->g_1608.s6, "p_1906->g_1608.s6", print_hash_value);
    transparent_crc(p_1906->g_1608.s7, "p_1906->g_1608.s7", print_hash_value);
    transparent_crc(p_1906->g_1608.s8, "p_1906->g_1608.s8", print_hash_value);
    transparent_crc(p_1906->g_1608.s9, "p_1906->g_1608.s9", print_hash_value);
    transparent_crc(p_1906->g_1608.sa, "p_1906->g_1608.sa", print_hash_value);
    transparent_crc(p_1906->g_1608.sb, "p_1906->g_1608.sb", print_hash_value);
    transparent_crc(p_1906->g_1608.sc, "p_1906->g_1608.sc", print_hash_value);
    transparent_crc(p_1906->g_1608.sd, "p_1906->g_1608.sd", print_hash_value);
    transparent_crc(p_1906->g_1608.se, "p_1906->g_1608.se", print_hash_value);
    transparent_crc(p_1906->g_1608.sf, "p_1906->g_1608.sf", print_hash_value);
    transparent_crc(p_1906->g_1611.s0, "p_1906->g_1611.s0", print_hash_value);
    transparent_crc(p_1906->g_1611.s1, "p_1906->g_1611.s1", print_hash_value);
    transparent_crc(p_1906->g_1611.s2, "p_1906->g_1611.s2", print_hash_value);
    transparent_crc(p_1906->g_1611.s3, "p_1906->g_1611.s3", print_hash_value);
    transparent_crc(p_1906->g_1611.s4, "p_1906->g_1611.s4", print_hash_value);
    transparent_crc(p_1906->g_1611.s5, "p_1906->g_1611.s5", print_hash_value);
    transparent_crc(p_1906->g_1611.s6, "p_1906->g_1611.s6", print_hash_value);
    transparent_crc(p_1906->g_1611.s7, "p_1906->g_1611.s7", print_hash_value);
    transparent_crc(p_1906->g_1618, "p_1906->g_1618", print_hash_value);
    transparent_crc(p_1906->g_1646.s0, "p_1906->g_1646.s0", print_hash_value);
    transparent_crc(p_1906->g_1646.s1, "p_1906->g_1646.s1", print_hash_value);
    transparent_crc(p_1906->g_1646.s2, "p_1906->g_1646.s2", print_hash_value);
    transparent_crc(p_1906->g_1646.s3, "p_1906->g_1646.s3", print_hash_value);
    transparent_crc(p_1906->g_1646.s4, "p_1906->g_1646.s4", print_hash_value);
    transparent_crc(p_1906->g_1646.s5, "p_1906->g_1646.s5", print_hash_value);
    transparent_crc(p_1906->g_1646.s6, "p_1906->g_1646.s6", print_hash_value);
    transparent_crc(p_1906->g_1646.s7, "p_1906->g_1646.s7", print_hash_value);
    transparent_crc(p_1906->g_1732.x, "p_1906->g_1732.x", print_hash_value);
    transparent_crc(p_1906->g_1732.y, "p_1906->g_1732.y", print_hash_value);
    transparent_crc(p_1906->g_1732.z, "p_1906->g_1732.z", print_hash_value);
    transparent_crc(p_1906->g_1732.w, "p_1906->g_1732.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1906->g_1777[i][j][k], "p_1906->g_1777[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1906->g_1793, "p_1906->g_1793", print_hash_value);
    transparent_crc(p_1906->g_1898.s0, "p_1906->g_1898.s0", print_hash_value);
    transparent_crc(p_1906->g_1898.s1, "p_1906->g_1898.s1", print_hash_value);
    transparent_crc(p_1906->g_1898.s2, "p_1906->g_1898.s2", print_hash_value);
    transparent_crc(p_1906->g_1898.s3, "p_1906->g_1898.s3", print_hash_value);
    transparent_crc(p_1906->g_1898.s4, "p_1906->g_1898.s4", print_hash_value);
    transparent_crc(p_1906->g_1898.s5, "p_1906->g_1898.s5", print_hash_value);
    transparent_crc(p_1906->g_1898.s6, "p_1906->g_1898.s6", print_hash_value);
    transparent_crc(p_1906->g_1898.s7, "p_1906->g_1898.s7", print_hash_value);
    transparent_crc(p_1906->v_collective, "p_1906->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 7; i++)
            transparent_crc(p_1906->g_special_values[i + 7 * get_linear_group_id()], "p_1906->g_special_values[i + 7 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 7; i++)
            transparent_crc(p_1906->l_special_values[i], "p_1906->l_special_values[i]", print_hash_value);
    transparent_crc(p_1906->l_comm_values[get_linear_local_id()], "p_1906->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1906->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()], "p_1906->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
