// --atomics 20 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 97,27,2 -l 97,1,1
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

__constant uint32_t permutations[10][97] = {
{47,27,29,25,31,95,62,91,52,4,64,89,87,7,11,34,92,6,33,13,61,24,74,18,45,88,5,14,66,84,77,19,21,76,60,15,82,90,8,44,2,40,72,80,16,79,41,58,0,53,94,48,36,67,35,96,69,3,54,46,68,39,75,26,85,83,63,28,50,12,49,23,93,71,30,9,57,17,86,59,10,81,55,22,20,1,38,51,43,65,70,37,32,56,78,42,73}, // permutation 0
{60,40,5,96,33,68,7,71,25,78,88,67,6,10,20,94,64,54,8,84,41,87,82,74,83,44,45,95,52,85,75,27,90,17,26,92,48,9,2,53,61,21,0,46,55,62,65,76,31,69,15,91,70,16,80,39,34,36,14,49,81,4,28,24,43,12,30,73,57,35,22,58,79,42,19,38,3,63,29,1,66,23,72,93,86,89,59,47,77,13,50,18,32,37,56,51,11}, // permutation 1
{18,89,47,58,31,4,37,28,45,34,64,38,60,21,73,48,70,72,8,43,81,3,42,32,5,93,10,94,9,52,19,88,33,26,12,40,51,11,44,91,57,50,82,6,65,36,27,59,1,23,62,76,35,83,90,24,74,87,22,95,46,67,63,77,71,78,14,84,20,86,2,29,66,75,0,79,54,13,92,39,25,17,80,30,16,68,7,55,49,69,53,56,15,85,96,41,61}, // permutation 2
{46,55,17,62,77,60,13,73,2,53,92,81,42,26,4,12,18,59,22,70,83,21,75,66,51,29,23,14,88,0,87,25,39,31,85,19,33,43,61,63,8,20,80,38,68,64,95,67,65,35,57,56,45,36,78,15,86,48,50,91,37,69,28,44,47,74,27,54,84,40,79,58,30,72,1,9,94,6,93,7,49,90,10,71,41,96,82,34,32,89,76,3,16,52,24,5,11}, // permutation 3
{95,10,34,60,31,14,39,89,38,37,17,26,35,65,75,71,83,61,41,57,63,55,33,74,68,73,16,40,48,91,82,93,76,54,22,32,94,4,15,44,86,84,25,11,6,12,92,45,0,1,66,81,78,23,62,50,3,19,27,69,7,46,77,80,51,67,72,13,70,90,56,64,5,36,79,47,20,88,87,52,9,30,28,53,29,42,96,85,58,8,18,21,24,49,43,59,2}, // permutation 4
{36,40,95,55,4,34,54,16,69,64,27,57,29,21,24,63,18,65,72,35,31,76,60,61,85,2,9,52,39,78,51,91,38,58,74,86,90,1,93,67,53,82,87,3,84,41,47,5,13,77,17,32,83,11,75,73,79,0,56,30,89,94,12,81,33,14,43,15,59,7,44,25,22,10,23,28,92,70,45,48,42,8,62,37,6,71,19,20,66,26,68,96,49,50,80,46,88}, // permutation 5
{53,59,86,95,67,29,60,10,89,55,28,38,76,25,34,46,30,4,80,74,73,15,82,75,2,36,19,54,9,45,79,17,11,42,31,12,0,1,85,91,92,65,81,96,88,48,68,66,70,94,52,63,40,37,22,69,7,24,41,18,39,61,77,57,51,6,56,16,47,44,35,26,84,62,90,50,49,27,58,14,21,33,20,8,87,72,43,71,13,3,78,64,83,93,32,5,23}, // permutation 6
{25,87,94,30,5,22,58,0,84,73,4,77,85,16,1,14,68,72,40,51,83,65,93,55,27,47,19,89,21,39,82,28,91,38,9,35,61,42,64,57,63,17,67,49,53,95,34,81,32,86,37,59,23,60,15,56,45,33,88,7,74,50,8,66,20,44,41,2,11,78,92,36,3,26,29,43,76,90,10,69,24,18,6,31,75,79,13,96,52,48,62,46,54,71,70,12,80}, // permutation 7
{92,90,59,85,91,40,70,80,87,23,27,44,5,6,86,60,32,38,47,17,11,34,67,30,46,39,12,49,82,68,16,58,19,83,33,25,64,55,2,48,74,78,50,29,65,8,42,72,62,84,45,43,76,41,57,9,15,75,61,71,37,94,79,31,28,18,73,88,26,51,13,4,93,0,96,63,95,3,53,7,1,66,54,22,89,21,35,52,81,24,56,36,20,69,77,10,14}, // permutation 8
{65,74,57,36,69,17,35,43,22,12,6,8,85,29,15,19,25,77,0,24,55,59,64,54,66,40,46,79,70,20,94,14,45,75,44,71,32,78,3,11,21,51,33,4,67,5,73,34,86,58,9,82,68,37,16,60,62,30,13,23,26,52,76,88,63,2,31,89,81,47,10,83,96,27,90,84,41,18,38,61,50,49,48,95,93,1,92,72,87,80,53,28,39,56,91,42,7} // permutation 9
};

// Seed: 2258151268

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    volatile VECTOR(uint16_t, 16) g_14;
    VECTOR(uint16_t, 4) g_15;
    VECTOR(int32_t, 8) g_35;
    uint32_t g_49;
    uint32_t *g_48;
    VECTOR(int8_t, 8) g_67;
    uint64_t g_75;
    VECTOR(int16_t, 8) g_83;
    uint8_t g_88;
    uint16_t g_92;
    VECTOR(uint16_t, 2) g_128;
    volatile VECTOR(int32_t, 4) g_137;
    volatile int32_t *g_136;
    volatile int32_t **g_135[9][6][4];
    int32_t g_146;
    int32_t g_149;
    uint32_t g_151;
    int8_t g_157;
    uint32_t g_158;
    volatile uint64_t **g_194;
    int32_t g_205;
    uint8_t g_206;
    VECTOR(int64_t, 16) g_247;
    VECTOR(uint32_t, 4) g_251;
    uint64_t g_266;
    int16_t g_306;
    uint32_t g_307;
    VECTOR(int16_t, 2) g_321;
    VECTOR(int32_t, 16) g_323;
    uint16_t *g_335;
    uint16_t **g_334;
    VECTOR(int8_t, 8) g_340;
    volatile int8_t g_399[7];
    volatile int8_t *g_398;
    volatile int8_t **g_397;
    uint64_t g_447[8];
    uint16_t ***g_450[7][2];
    VECTOR(int32_t, 8) g_479;
    VECTOR(int32_t, 4) g_480;
    int64_t *g_503;
    uint8_t g_592;
    VECTOR(uint8_t, 16) g_613;
    VECTOR(uint8_t, 8) g_615;
    VECTOR(uint16_t, 2) g_616;
    int32_t *g_650[8];
    uint16_t g_671;
    VECTOR(uint16_t, 8) g_889;
    VECTOR(int8_t, 2) g_893;
    VECTOR(int16_t, 2) g_894;
    VECTOR(uint64_t, 16) g_942;
    int32_t g_954;
    uint64_t g_964;
    VECTOR(uint8_t, 8) g_975;
    VECTOR(uint8_t, 4) g_986;
    int64_t g_1001;
    int16_t g_1002;
    VECTOR(int16_t, 2) g_1017;
    volatile uint8_t g_1024;
    volatile uint8_t g_1025;
    volatile uint8_t g_1026;
    volatile uint8_t g_1027;
    volatile uint8_t g_1028;
    volatile uint8_t g_1029;
    volatile uint8_t *g_1023[5][5];
    volatile uint8_t * volatile *g_1022;
    int8_t g_1109;
    int32_t *g_1133;
    VECTOR(uint16_t, 16) g_1139;
    VECTOR(uint16_t, 8) g_1140;
    int16_t g_1169;
    VECTOR(uint16_t, 2) g_1190;
    uint64_t *g_1214;
    uint64_t **g_1213;
    VECTOR(int32_t, 2) g_1365;
    VECTOR(int32_t, 16) g_1410;
    VECTOR(uint64_t, 4) g_1432;
    VECTOR(uint64_t, 4) g_1433;
    VECTOR(uint16_t, 16) g_1446;
    VECTOR(int16_t, 8) g_1490;
    VECTOR(uint8_t, 2) g_1496;
    VECTOR(uint64_t, 4) g_1504;
    int8_t ** volatile **g_1541;
    VECTOR(int8_t, 4) g_1567;
    VECTOR(int8_t, 2) g_1569;
    VECTOR(int8_t, 2) g_1570;
    int16_t *g_1575;
    int16_t **g_1574;
    VECTOR(int16_t, 4) g_1611;
    VECTOR(int8_t, 4) g_1668;
    VECTOR(uint16_t, 2) g_1685;
    VECTOR(uint16_t, 16) g_1711;
    VECTOR(uint16_t, 16) g_1727;
    VECTOR(int16_t, 16) g_1737;
    int8_t *g_1766;
    int8_t **g_1765;
    int8_t ***g_1764;
    VECTOR(int16_t, 8) g_1770;
    VECTOR(int16_t, 4) g_1807;
    VECTOR(uint16_t, 16) g_1829;
    int32_t *g_1830[2][9][3];
    VECTOR(uint32_t, 16) g_1845;
    int32_t g_1874[3];
    int16_t g_1903;
    volatile int64_t g_1909;
    volatile int64_t *g_1908;
    volatile int64_t * volatile * volatile g_1907;
    volatile int64_t * volatile * volatile *g_1906;
    VECTOR(uint16_t, 2) g_1937;
    VECTOR(uint16_t, 16) g_1938;
    VECTOR(uint32_t, 16) g_1961;
    volatile VECTOR(uint32_t, 2) g_1963;
    volatile VECTOR(uint32_t, 2) g_1966;
    VECTOR(uint32_t, 8) g_1968;
    VECTOR(uint32_t, 8) g_1970;
    int32_t g_1984;
    volatile VECTOR(int32_t, 2) g_1985;
    volatile VECTOR(int32_t, 2) g_1987;
    VECTOR(int32_t, 4) g_1988;
    volatile VECTOR(int64_t, 2) g_1995;
    volatile VECTOR(int8_t, 4) g_2021;
    uint16_t g_2022;
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
int32_t  func_1(struct S0 * p_2023);
uint16_t  func_9(uint64_t  p_10, int64_t  p_11, struct S0 * p_2023);
int16_t  func_27(uint64_t  p_28, uint32_t * p_29, struct S0 * p_2023);
int64_t  func_42(uint32_t * p_43, uint32_t * p_44, int32_t  p_45, uint32_t * p_46, uint32_t * p_47, struct S0 * p_2023);
uint32_t * func_50(int16_t  p_51, int32_t  p_52, int64_t  p_53, uint32_t  p_54, uint32_t  p_55, struct S0 * p_2023);
int8_t  func_58(uint32_t * p_59, uint32_t * p_60, uint64_t  p_61, struct S0 * p_2023);
uint32_t * func_62(uint32_t  p_63, struct S0 * p_2023);
int32_t * func_95(int64_t  p_96, uint64_t  p_97, struct S0 * p_2023);
uint8_t  func_104(uint8_t * p_105, struct S0 * p_2023);
uint8_t * func_106(int8_t  p_107, int64_t  p_108, uint8_t * p_109, uint64_t  p_110, struct S0 * p_2023);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2023->g_4 p_2023->g_1504 p_2023->g_1570 p_2023->g_1002 p_2023->g_335 p_2023->g_92 p_2023->g_1937 p_2023->g_1938 p_2023->g_48 p_2023->g_49 p_2023->g_1961 p_2023->g_1963 p_2023->g_1966 p_2023->g_1968 p_2023->g_1970 p_2023->g_671 p_2023->g_1984 p_2023->g_1985 p_2023->g_1987 p_2023->g_1988 p_2023->g_1995 p_2023->g_334 p_2023->g_1766 p_2023->g_1109 p_2023->g_398 p_2023->g_399 p_2023->g_1611 p_2023->g_75 p_2023->l_comm_values p_2023->g_15 p_2023->g_comm_values p_2023->g_135 p_2023->g_151 p_2023->g_206 p_2023->g_266 p_2023->g_307 p_2023->g_306 p_2023->g_128 p_2023->g_88 p_2023->g_251 p_2023->g_397 p_2023->g_247 p_2023->g_447 p_2023->g_35 p_2023->g_321 p_2023->g_67 p_2023->g_149 p_2023->g_205 p_2023->g_323 p_2023->g_479 p_2023->g_592 p_2023->g_340 p_2023->g_2021 p_2023->g_1764 p_2023->g_1765 p_2023->g_2022
 * writes: p_2023->g_4 p_2023->g_1504 p_2023->g_1002 p_2023->g_92 p_2023->g_671 p_2023->g_266 p_2023->g_306 p_2023->g_1984 p_2023->g_1017 p_2023->g_1611 p_2023->g_49 p_2023->g_151 p_2023->g_206 p_2023->g_307 p_2023->g_149 p_2023->g_447 p_2023->g_450 p_2023->g_205 p_2023->g_158 p_2023->g_67 p_2023->g_323 p_2023->g_592 p_2023->g_88 p_2023->g_650
 */
int32_t  func_1(struct S0 * p_2023)
{ /* block id: 4 */
    VECTOR(uint32_t, 16) l_18 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xE4D8D955L), 0xE4D8D955L), 0xE4D8D955L, 0UL, 0xE4D8D955L, (VECTOR(uint32_t, 2))(0UL, 0xE4D8D955L), (VECTOR(uint32_t, 2))(0UL, 0xE4D8D955L), 0UL, 0xE4D8D955L, 0UL, 0xE4D8D955L);
    VECTOR(uint32_t, 2) l_19 = (VECTOR(uint32_t, 2))(1UL, 0xDC14C38DL);
    int32_t l_26 = 8L;
    VECTOR(int64_t, 8) l_34 = (VECTOR(int64_t, 8))(0x777FC3FE767E7924L, (VECTOR(int64_t, 4))(0x777FC3FE767E7924L, (VECTOR(int64_t, 2))(0x777FC3FE767E7924L, 2L), 2L), 2L, 0x777FC3FE767E7924L, 2L);
    VECTOR(uint32_t, 16) l_37 = (VECTOR(uint32_t, 16))(0xB5B4C0DDL, (VECTOR(uint32_t, 4))(0xB5B4C0DDL, (VECTOR(uint32_t, 2))(0xB5B4C0DDL, 7UL), 7UL), 7UL, 0xB5B4C0DDL, 7UL, (VECTOR(uint32_t, 2))(0xB5B4C0DDL, 7UL), (VECTOR(uint32_t, 2))(0xB5B4C0DDL, 7UL), 0xB5B4C0DDL, 7UL, 0xB5B4C0DDL, 7UL);
    uint64_t l_1910 = 0x92CC73F918541443L;
    VECTOR(uint64_t, 4) l_1989 = (VECTOR(uint64_t, 4))(0xE3788C7B8C27CB54L, (VECTOR(uint64_t, 2))(0xE3788C7B8C27CB54L, 18446744073709551609UL), 18446744073709551609UL);
    VECTOR(int64_t, 16) l_1994 = (VECTOR(int64_t, 16))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 1L), 1L), 1L, 9L, 1L, (VECTOR(int64_t, 2))(9L, 1L), (VECTOR(int64_t, 2))(9L, 1L), 9L, 1L, 9L, 1L);
    int32_t l_2008 = 0x0A74C2F7L;
    VECTOR(int64_t, 4) l_2018 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L));
    int i;
    for (p_2023->g_4 = 27; (p_2023->g_4 == 6); p_2023->g_4--)
    { /* block id: 7 */
        int64_t l_20 = 4L;
        VECTOR(uint32_t, 16) l_21 = (VECTOR(uint32_t, 16))(0x8A87EA82L, (VECTOR(uint32_t, 4))(0x8A87EA82L, (VECTOR(uint32_t, 2))(0x8A87EA82L, 0x90638325L), 0x90638325L), 0x90638325L, 0x8A87EA82L, 0x90638325L, (VECTOR(uint32_t, 2))(0x8A87EA82L, 0x90638325L), (VECTOR(uint32_t, 2))(0x8A87EA82L, 0x90638325L), 0x8A87EA82L, 0x90638325L, 0x8A87EA82L, 0x90638325L);
        uint32_t *l_22 = (void*)0;
        uint32_t *l_23 = (void*)0;
        uint32_t *l_24 = (void*)0;
        uint32_t *l_25[2][7];
        VECTOR(int32_t, 8) l_36 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L));
        VECTOR(int8_t, 4) l_66 = (VECTOR(int8_t, 4))(0x53L, (VECTOR(int8_t, 2))(0x53L, 6L), 6L);
        uint64_t *l_1911 = (void*)0;
        uint64_t *l_1912 = (void*)0;
        int32_t *l_1982 = (void*)0;
        int32_t *l_1983[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        VECTOR(int32_t, 8) l_1986 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x38F4179AL), 0x38F4179AL), 0x38F4179AL, 1L, 0x38F4179AL);
        uint8_t l_1998[4];
        int16_t *l_1999[5];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
                l_25[i][j] = (void*)0;
        }
        for (i = 0; i < 4; i++)
            l_1998[i] = 0xD2L;
        for (i = 0; i < 5; i++)
            l_1999[i] = &p_2023->g_1002;
        p_2023->g_1984 |= (safe_rshift_func_uint16_t_u_s(func_9((p_2023->g_1504.w &= ((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 2))(0xCBA86BA47C9D5FACL, 0x265E3EDFA831EB23L)).yyxyxxyxxyxxxxyx, ((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0L, (-6L))), (-1L), (-4L))))).lo))), (safe_lshift_func_uint16_t_u_s((((((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(0x3CB5L, 0x9F7CL)), ((VECTOR(uint16_t, 2))(p_2023->g_14.s36))))).yyyxyxyx, ((VECTOR(uint16_t, 8))(p_2023->g_15.xxzyxxzz))))).s7 | (safe_div_func_uint32_t_u_u((l_26 = (1L <= ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_18.sa61940c9ba5b0420)).s41)).xxxxyxxyyyxyxyxy, ((VECTOR(uint32_t, 2))(7UL, 4294967288UL)).xyxyyxyxyyyyyxxy))).even, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 2))(l_19.xy)), (uint32_t)l_20, (uint32_t)l_20))).yyyyyxyy, ((VECTOR(uint32_t, 4))(l_21.s423b)).yyyxxxxw))).s3)), (func_27(((p_2023->g_15.x != (safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_34.s74127326)).s0255020420100651)).s6035)).zyxxzxzy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(p_2023->g_35.s32322772)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0x57069838L)), 0x53144D99L, 0x5709C591L)).zwwzwzxw)).odd, ((VECTOR(int32_t, 8))(l_36.s66062066)).odd))).even))))).xxyyxxyy, ((VECTOR(uint32_t, 8))(l_37.s71f6e690))))))), ((VECTOR(int64_t, 4))((p_2023->g_1727.s7 ^= (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((func_42(p_2023->g_48, func_50((safe_div_func_int8_t_s_s(func_58(func_62((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(l_66.xwxxwxwy)), ((VECTOR(int8_t, 8))(p_2023->g_67.s45056035))))).s5, 6)), p_2023), p_2023->g_48, l_19.y, p_2023), 1L)), l_34.s1, l_34.s5, l_36.s0, p_2023->g_1139.s2, p_2023), p_2023->g_1017.y, l_22, p_2023->g_48, p_2023) | (-9L)), l_19.y)), 0x67199FAEL))), ((VECTOR(int64_t, 2))(0L)), 8L)).xxwwzxyz))).s35)), ((VECTOR(int64_t, 2))(2L))))).even, p_2023->g_251.z)), l_36.s4))) , p_2023->g_447[2]), p_2023->g_48, p_2023) , l_36.s2)))) && l_18.s2) & l_18.s5), l_1910)), ((VECTOR(int64_t, 4))(0L)), ((VECTOR(int64_t, 8))(1L)), 0x468226855CD5D447L)).s40b6, ((VECTOR(int64_t, 4))((-5L)))))).wyyzwyzwzxyzyxww))).sf), p_2023->g_1570.x, p_2023), l_18.s5));
        l_2008 |= (((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(p_2023->g_1985.xxyyxyyxxyxxxyxy)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(0x634C5CBDL, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1986.s35)))).yxyyyyyy, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(p_2023->g_1987.yyxyyyyxxyyyyyxy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_2023->g_1988.wyzyyxwz)))).s5742016451520334)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((((VECTOR(uint64_t, 2))(l_1989.yx)).lo && (safe_mul_func_uint8_t_u_u(l_19.y, (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(4294967295UL, 0x1BBB9A0AL)))).odd, (((1L && (~((VECTOR(uint64_t, 4))(0x8596D4A4D033237FL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(1UL, ((VECTOR(uint64_t, 2))(1UL, 1UL)), 0x7C9473C999DDE4B0L)).hi)), 18446744073709551608UL)).z)) > ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_1994.s87c41504bf91c618)).s410e)))).even, ((VECTOR(int64_t, 8))(p_2023->g_1995.xyyxyxyx)).s70))).xxyyxxxyxyyxxxxy)).se) , ((safe_sub_func_int8_t_s_s(((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xF9E3L, 0xAAC9L)), 0x52ACL, 9UL)).y & ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))((-1L), 0L)).xxyxxxyx, ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(1L, 0x293BL)), 2L, 0x3E39L)).odd, (int16_t)l_1994.sc, (int16_t)(p_2023->g_1017.x = l_1998[3])))).xxxyyyyx)).s10, (int16_t)(safe_lshift_func_uint16_t_u_s(((**p_2023->g_334) = (l_1989.w <= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_26 = GROUP_DIVERGE(1, 1)), l_18.s6)), l_19.y)))), (safe_sub_func_uint32_t_u_u(((*p_2023->g_334) == (void*)0), (*p_2023->g_48)))))))).yxyxxyyx)), ((VECTOR(int16_t, 8))((-3L))))))))), ((VECTOR(int16_t, 8))((-10L))), ((VECTOR(int16_t, 8))(0x317DL))))).s67, ((VECTOR(int16_t, 2))(0x0B4EL))))).yyyxyyyyxxxxxyyy, (int16_t)0x0196L))).lo)).s41)))), 0x74E2L, 0x5D5FL)).hi)), ((VECTOR(int16_t, 2))(0x7E79L))))).xyyxyyyyyyxxyxxy, ((VECTOR(int16_t, 16))(2L))))).s75)), 0L, ((VECTOR(int16_t, 2))(0x708FL)), 0x3EF9L, (-9L), 0x17A0L)).s1) , (*p_2023->g_1766)), (*p_2023->g_398))) | l_1910))))))) , l_1994.s5), 0x3CFED869L, 0x00C6C1C0L, l_19.x, 0x4ADAEC62L, ((VECTOR(int32_t, 2))((-10L))), (-1L))).s0375611777422521)).lo, ((VECTOR(int32_t, 8))(9L)), ((VECTOR(int32_t, 8))((-2L)))))).s5170156474107513, ((VECTOR(int32_t, 16))(0x10629CAEL))))).lo)).odd, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0x01F739EDL))))), ((VECTOR(int32_t, 4))(0x3E1E89DBL)), l_18.se, l_18.s1, l_1989.z, 0L, l_19.x, ((VECTOR(int32_t, 2))(0L)), (-2L)))))).hi))), l_37.s4, ((VECTOR(int32_t, 4))((-6L))), 0x74D69570L, (-9L))).sc93e, ((VECTOR(int32_t, 4))(3L))))).zzxzyyyzywwwzzxw)).hi, ((VECTOR(int32_t, 8))(0x4F24E265L))))).s1 > l_19.y);
    }
    l_26 = 0x19DD60C8L;
    for (p_2023->g_1002 = 0; (p_2023->g_1002 == 6); ++p_2023->g_1002)
    { /* block id: 852 */
        int32_t *l_2011[8][9] = {{&p_2023->g_205,&p_2023->g_205,&p_2023->g_205,&p_2023->g_4,&l_2008,&p_2023->g_1984,&p_2023->g_1984,(void*)0,&p_2023->g_1984},{&p_2023->g_205,&p_2023->g_205,&p_2023->g_205,&p_2023->g_4,&l_2008,&p_2023->g_1984,&p_2023->g_1984,(void*)0,&p_2023->g_1984},{&p_2023->g_205,&p_2023->g_205,&p_2023->g_205,&p_2023->g_4,&l_2008,&p_2023->g_1984,&p_2023->g_1984,(void*)0,&p_2023->g_1984},{&p_2023->g_205,&p_2023->g_205,&p_2023->g_205,&p_2023->g_4,&l_2008,&p_2023->g_1984,&p_2023->g_1984,(void*)0,&p_2023->g_1984},{&p_2023->g_205,&p_2023->g_205,&p_2023->g_205,&p_2023->g_4,&l_2008,&p_2023->g_1984,&p_2023->g_1984,(void*)0,&p_2023->g_1984},{&p_2023->g_205,&p_2023->g_205,&p_2023->g_205,&p_2023->g_4,&l_2008,&p_2023->g_1984,&p_2023->g_1984,(void*)0,&p_2023->g_1984},{&p_2023->g_205,&p_2023->g_205,&p_2023->g_205,&p_2023->g_4,&l_2008,&p_2023->g_1984,&p_2023->g_1984,(void*)0,&p_2023->g_1984},{&p_2023->g_205,&p_2023->g_205,&p_2023->g_205,&p_2023->g_4,&l_2008,&p_2023->g_1984,&p_2023->g_1984,(void*)0,&p_2023->g_1984}};
        uint32_t l_2012 = 0xC13C451FL;
        int16_t *l_2015[2][7] = {{&p_2023->g_1903,&p_2023->g_1903,&p_2023->g_1903,&p_2023->g_1903,&p_2023->g_1903,&p_2023->g_1903,&p_2023->g_1903},{&p_2023->g_1903,&p_2023->g_1903,&p_2023->g_1903,&p_2023->g_1903,&p_2023->g_1903,&p_2023->g_1903,&p_2023->g_1903}};
        int32_t **l_2016 = &l_2011[5][6];
        int i, j;
        --l_2012;
        (*l_2016) = func_62((p_2023->g_1995.x > (l_19.x | (p_2023->g_1611.z |= l_37.sb))), p_2023);
    }
    l_26 &= (((-1L) || (safe_unary_minus_func_int32_t_s((l_1989.y && ((VECTOR(int64_t, 8))(l_2018.xxyywwwx)).s2)))) ^ (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))((-6L), 0L)).hi, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_2023->g_2021.wxyx)))), 0x15L, (***p_2023->g_1764), 1L, (-9L))).s1)));
    return p_2023->g_2022;
}


/* ------------------------------------------ */
/* 
 * reads : p_2023->g_1002 p_2023->g_335 p_2023->g_92 p_2023->g_1937 p_2023->g_1938 p_2023->g_48 p_2023->g_49 p_2023->g_1961 p_2023->g_1963 p_2023->g_1966 p_2023->g_1968 p_2023->g_1970 p_2023->g_671
 * writes: p_2023->g_1002 p_2023->g_92 p_2023->g_671 p_2023->g_266 p_2023->g_306
 */
uint16_t  func_9(uint64_t  p_10, int64_t  p_11, struct S0 * p_2023)
{ /* block id: 827 */
    int32_t *l_1913[1][10][5];
    VECTOR(int32_t, 8) l_1930 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x3A405008L), 0x3A405008L), 0x3A405008L, 6L, 0x3A405008L);
    VECTOR(uint32_t, 4) l_1936 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x5ADCFF9AL), 0x5ADCFF9AL);
    uint32_t l_1942 = 0xF5BE0A86L;
    VECTOR(uint16_t, 4) l_1962 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65526UL), 65526UL);
    VECTOR(uint32_t, 2) l_1964 = (VECTOR(uint32_t, 2))(0x16431FDBL, 8UL);
    VECTOR(uint32_t, 4) l_1967 = (VECTOR(uint32_t, 4))(0xE30AF529L, (VECTOR(uint32_t, 2))(0xE30AF529L, 0x54B99910L), 0x54B99910L);
    VECTOR(uint32_t, 8) l_1969 = (VECTOR(uint32_t, 8))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x3248AE52L), 0x3248AE52L), 0x3248AE52L, 5UL, 0x3248AE52L);
    uint32_t l_1979 = 4294967295UL;
    uint8_t l_1980 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
                l_1913[i][j][k] = &p_2023->g_149;
        }
    }
    l_1913[0][5][0] = l_1913[0][3][2];
    for (p_2023->g_1002 = (-15); (p_2023->g_1002 > (-15)); p_2023->g_1002 = safe_add_func_int16_t_s_s(p_2023->g_1002, 5))
    { /* block id: 831 */
        uint16_t *l_1921 = (void*)0;
        uint16_t *l_1922 = (void*)0;
        uint16_t *l_1923 = (void*)0;
        uint16_t *l_1924 = &p_2023->g_671;
        int32_t l_1929 = 0x39120BB8L;
        VECTOR(uint32_t, 8) l_1935 = (VECTOR(uint32_t, 8))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0x8923EF68L), 0x8923EF68L), 0x8923EF68L, 7UL, 0x8923EF68L);
        uint8_t l_1939 = 1UL;
        int32_t l_1940 = 0x2A5B20C7L;
        VECTOR(int32_t, 8) l_1941 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x78949FBDL), 0x78949FBDL), 0x78949FBDL, 5L, 0x78949FBDL);
        uint64_t *l_1951 = (void*)0;
        uint64_t *l_1952[2];
        VECTOR(uint32_t, 4) l_1965 = (VECTOR(uint32_t, 4))(0x3E9008C8L, (VECTOR(uint32_t, 2))(0x3E9008C8L, 0xB6EF0C4DL), 0xB6EF0C4DL);
        int16_t *l_1975 = (void*)0;
        int16_t *l_1976 = &p_2023->g_306;
        uint16_t l_1981[9][9][3] = {{{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L}},{{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L}},{{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L}},{{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L}},{{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L}},{{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L}},{{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L}},{{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L}},{{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L},{0x0916L,0x9775L,0x29C1L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1952[i] = &p_2023->g_75;
        l_1940 ^= ((p_2023->g_266 = (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((((*l_1924) = ((*p_2023->g_335)--)) == (((safe_mul_func_uint8_t_u_u(((void*)0 == l_1924), p_10)) || (((safe_add_func_uint64_t_u_u((l_1929 < p_11), l_1929)) , ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 8))(l_1930.s53513321)).s3413115213103763, (int32_t)((void*)0 != &p_2023->g_1022), (int32_t)(safe_lshift_func_uint16_t_u_s(((safe_div_func_int16_t_s_s((((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 2))(l_1935.s62)), ((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(l_1936.wzzwxyxyzwzyxxyw)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(p_2023->g_1937.xy)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_2023->g_1938.s47)), l_1935.s3, ((VECTOR(uint16_t, 4))(0x604CL)), 0UL)).s72, ((VECTOR(uint16_t, 2))(65535UL))))).xyxy, ((VECTOR(uint16_t, 4))(1UL))))).yzyxyxxz)).s4011246465115071, ((VECTOR(uint16_t, 16))(5UL))))).s6c, (uint32_t)4294967288UL, (uint32_t)(*p_2023->g_48)))).yxyxxxyxxxxyxyxy))))).s3f))).odd , l_1935.s0), l_1935.s7)) , GROUP_DIVERGE(0, 1)), 3))))).sc) == l_1929)) || p_10)) >= p_10))), l_1939))) && 18446744073709551608UL);
        l_1942++;
        l_1940 = (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))((safe_add_func_uint32_t_u_u((*p_2023->g_48), (safe_rshift_func_int8_t_s_u((((p_10 = 18446744073709551615UL) | (safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((((((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 2))(p_2023->g_1961.sd7)).xyxyyyyxxxxxxxxy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 4))(l_1962.zxxx)).xxwzwwzz, (uint16_t)GROUP_DIVERGE(1, 1)))), ((VECTOR(uint16_t, 4))(((void*)0 != &p_2023->g_1575), 65526UL, 0UL, 0xAE2FL)).wwyxyzxw))).s12)).xxxyyyxyxxxxxyxy, ((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 2))(p_2023->g_1963.yx)).yxyyxxxxyxyxxyxx)))))).s99, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(l_1964.yyxyxxyy)).s60, ((VECTOR(uint32_t, 16))(l_1965.yxxxyxzwzywwxwww)).s00)))))).yxxxxyxx, ((VECTOR(uint32_t, 8))(p_2023->g_1966.xxxyxxxx)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_1967.zwxzzxxzwxxzxwxz)).sb8)).yyyyyyxx))).s32, ((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 4))(p_2023->g_1968.s2454)).zxyywzyz, ((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_1969.s2071)).even)), ((VECTOR(uint32_t, 4))(p_2023->g_1970.s3324)), 1UL, 0xDFB2B749L)).s0053153203513405)))).hi, ((VECTOR(uint32_t, 4))((((safe_div_func_uint32_t_u_u(FAKE_DIVERGE(p_2023->local_1_offset, get_local_id(1), 10), (safe_mul_func_int16_t_s_s(((*l_1976) = (l_1941.s1 &= 1L)), 0x6379L)))) , (!l_1940)) & ((((safe_rshift_func_uint8_t_u_s((((*p_2023->g_48) >= p_11) > (-1L)), 6)) && l_1979) , p_11) >= 0xE7L)), l_1980, 0x867FCCA2L, 0xE692073EL)).zyzyzwxz))).s1527605520035124)), ((VECTOR(uint32_t, 16))(0xB5FC595CL))))).odd))), FAKE_DIVERGE(p_2023->global_1_offset, get_global_id(1), 10), 0UL, 4294967295UL, ((VECTOR(uint32_t, 4))(0xB3FF0BADL)), 0xFC735E53L))))).s96))).lo | p_11) < 0x21A66ECC7CBBD14AL) , p_11) >= (-3L)), 1L)), 0xFCL)), p_11)) < 255UL), l_1935.s0))) , p_11), p_2023->g_671)))), l_1981[3][0][1], 0x26L, 1UL)).z, FAKE_DIVERGE(p_2023->global_1_offset, get_global_id(1), 10)));
    }
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_2023->g_1213 p_2023->g_1214 p_2023->g_1737 p_2023->g_158 p_2023->g_1764 p_2023->g_503 p_2023->g_48 p_2023->g_49 p_2023->g_88 p_2023->g_1770 p_2023->g_335 p_2023->g_92 p_2023->g_205 p_2023->g_1765 p_2023->g_1766 p_2023->g_1109 p_2023->g_447 p_2023->g_942 p_2023->g_323 p_2023->g_1711 p_2023->g_954 p_2023->g_334 p_2023->g_128 p_2023->g_340 p_2023->g_1829 p_2023->g_1001 p_2023->g_1410 p_2023->g_1845 p_2023->g_671 p_2023->g_986 p_2023->g_1874 p_2023->g_307 p_2023->g_1446 p_2023->g_266 p_2023->g_1903 p_2023->g_1906
 * writes: p_2023->g_306 p_2023->g_205 p_2023->g_158 p_2023->g_88 p_2023->g_1764 p_2023->g_92 p_2023->g_266 p_2023->g_650 p_2023->g_954 p_2023->g_1830 p_2023->g_1001 p_2023->g_671 p_2023->g_986 p_2023->g_1109
 */
int16_t  func_27(uint64_t  p_28, uint32_t * p_29, struct S0 * p_2023)
{ /* block id: 757 */
    uint64_t *l_1730 = (void*)0;
    uint64_t **l_1731 = &l_1730;
    VECTOR(int16_t, 2) l_1736 = (VECTOR(int16_t, 2))((-1L), 0x3CAAL);
    uint64_t *l_1746 = (void*)0;
    uint32_t l_1747 = 4294967286UL;
    int32_t l_1748[4][9] = {{0x2E3B25C7L,0L,0x401B84ADL,1L,0x401B84ADL,0L,0x2E3B25C7L,6L,0x31E7A055L},{0x2E3B25C7L,0L,0x401B84ADL,1L,0x401B84ADL,0L,0x2E3B25C7L,6L,0x31E7A055L},{0x2E3B25C7L,0L,0x401B84ADL,1L,0x401B84ADL,0L,0x2E3B25C7L,6L,0x31E7A055L},{0x2E3B25C7L,0L,0x401B84ADL,1L,0x401B84ADL,0L,0x2E3B25C7L,6L,0x31E7A055L}};
    int16_t *l_1749 = (void*)0;
    int16_t *l_1750 = &p_2023->g_306;
    VECTOR(int64_t, 2) l_1796 = (VECTOR(int64_t, 2))(0x024D045A8A27A4ACL, 0x789248EBC6F51960L);
    VECTOR(int64_t, 4) l_1802 = (VECTOR(int64_t, 4))(0x1E79D2E58EDC9BABL, (VECTOR(int64_t, 2))(0x1E79D2E58EDC9BABL, 0x4A1F5A51AABAF57AL), 0x4A1F5A51AABAF57AL);
    VECTOR(uint8_t, 2) l_1838 = (VECTOR(uint8_t, 2))(0x90L, 0xB2L);
    VECTOR(uint8_t, 8) l_1865 = (VECTOR(uint8_t, 8))(0xC6L, (VECTOR(uint8_t, 4))(0xC6L, (VECTOR(uint8_t, 2))(0xC6L, 0x52L), 0x52L), 0x52L, 0xC6L, 0x52L);
    int8_t ****l_1870 = (void*)0;
    int32_t l_1873 = 1L;
    int32_t **l_1875 = &p_2023->g_1830[1][6][2];
    int32_t l_1879 = (-10L);
    VECTOR(uint64_t, 2) l_1895 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x2C45C1CA509578A6L);
    int i, j;
    if ((0x3ECFL & ((safe_mul_func_uint16_t_u_u(((*p_2023->g_1213) == ((*l_1731) = l_1730)), ((VECTOR(int16_t, 16))(2L, 0x37A2L, 0x7982L, ((void*)0 != p_29), (-7L), 0x0639L, 0x72A9L, (((safe_mod_func_int32_t_s_s(0x620C60E0L, (safe_lshift_func_int16_t_s_u(((*l_1750) = ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(l_1736.xxxyyxxy)).s5404063160324647, ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_2023->g_1737.s1917ad1a)).odd)).hi, (int16_t)(safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_1736.y, (((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_1746 == (*p_2023->g_1213)), 0)), l_1747)) , (void*)0) != p_29))), l_1748[1][6])), (int16_t)p_28))), 0x5F2CL, 0L)).xywyywxy, ((VECTOR(int16_t, 8))(0x3DDBL))))).s2407661422075446, ((VECTOR(int16_t, 16))((-1L)))))).s6), GROUP_DIVERGE(2, 1))))) || p_28) != 0x3479BB350B415086L), 0x2CA5L, l_1748[1][6], ((VECTOR(int16_t, 4))(3L)), (-1L), 0L)).s9)) > 0x283DL)))
    { /* block id: 760 */
        int32_t *l_1751 = (void*)0;
        int32_t *l_1752 = &p_2023->g_205;
        int64_t *l_1798[3][5] = {{&p_2023->g_1001,(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{&p_2023->g_1001,(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{&p_2023->g_1001,(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001}};
        int16_t *l_1819 = &p_2023->g_1002;
        int8_t ***l_1826 = &p_2023->g_1765;
        int i, j;
        (*l_1752) = p_28;
        for (p_2023->g_158 = 18; (p_2023->g_158 != 46); p_2023->g_158++)
        { /* block id: 764 */
            int64_t *l_1757[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1758 = 1L;
            int32_t l_1759 = (-5L);
            uint8_t *l_1762 = (void*)0;
            uint8_t *l_1763[3][10][3] = {{{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0}},{{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0}},{{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0},{&p_2023->g_88,(void*)0,(void*)0}}};
            int8_t ****l_1767 = &p_2023->g_1764;
            int32_t *l_1820 = &l_1758;
            int i, j, k;
            if ((0x4783L ^ (l_1736.y <= (safe_sub_func_int64_t_s_s((l_1759 = (l_1758 = (-1L))), (safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_2023->global_1_offset, get_global_id(1), 10), (((((((p_2023->g_88 = 0x5EL) | (-6L)) , (void*)0) == ((*l_1767) = p_2023->g_1764)) & ((((((void*)0 == p_2023->g_503) != l_1736.x) || p_28) && (-1L)) , l_1748[0][4])) >= (*p_2023->g_48)) , l_1736.x))))))))
            { /* block id: 769 */
                uint16_t l_1789 = 6UL;
                uint64_t l_1791[8][7] = {{0x1FBDD0C63BB008EFL,9UL,0x91C5CD59AA4AEA47L,18446744073709551607UL,0xC170E7092897FA85L,0x1FBDD0C63BB008EFL,18446744073709551607UL},{0x1FBDD0C63BB008EFL,9UL,0x91C5CD59AA4AEA47L,18446744073709551607UL,0xC170E7092897FA85L,0x1FBDD0C63BB008EFL,18446744073709551607UL},{0x1FBDD0C63BB008EFL,9UL,0x91C5CD59AA4AEA47L,18446744073709551607UL,0xC170E7092897FA85L,0x1FBDD0C63BB008EFL,18446744073709551607UL},{0x1FBDD0C63BB008EFL,9UL,0x91C5CD59AA4AEA47L,18446744073709551607UL,0xC170E7092897FA85L,0x1FBDD0C63BB008EFL,18446744073709551607UL},{0x1FBDD0C63BB008EFL,9UL,0x91C5CD59AA4AEA47L,18446744073709551607UL,0xC170E7092897FA85L,0x1FBDD0C63BB008EFL,18446744073709551607UL},{0x1FBDD0C63BB008EFL,9UL,0x91C5CD59AA4AEA47L,18446744073709551607UL,0xC170E7092897FA85L,0x1FBDD0C63BB008EFL,18446744073709551607UL},{0x1FBDD0C63BB008EFL,9UL,0x91C5CD59AA4AEA47L,18446744073709551607UL,0xC170E7092897FA85L,0x1FBDD0C63BB008EFL,18446744073709551607UL},{0x1FBDD0C63BB008EFL,9UL,0x91C5CD59AA4AEA47L,18446744073709551607UL,0xC170E7092897FA85L,0x1FBDD0C63BB008EFL,18446744073709551607UL}};
                int i, j;
                for (p_2023->g_88 = 0; (p_2023->g_88 >= 58); ++p_2023->g_88)
                { /* block id: 772 */
                    int8_t l_1775[1][6][5] = {{{0L,0L,(-7L),(-1L),0x3BL},{0L,0L,(-7L),(-1L),0x3BL},{0L,0L,(-7L),(-1L),0x3BL},{0L,0L,(-7L),(-1L),0x3BL},{0L,0L,(-7L),(-1L),0x3BL},{0L,0L,(-7L),(-1L),0x3BL}}};
                    uint16_t *l_1782[10][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    int32_t *l_1787 = (void*)0;
                    int32_t *l_1788 = &l_1748[1][7];
                    int32_t **l_1790 = &p_2023->g_650[7];
                    int i, j, k;
                    (*l_1752) = (0x6DF4L < ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(p_2023->g_1770.s22)).xyyyyxyyyyyxxxxy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(8L, (safe_div_func_int64_t_s_s(0L, ((safe_div_func_int16_t_s_s(((l_1775[0][2][4] &= p_28) != (safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_uint16_t_u_u((l_1758 = (++(*p_2023->g_335))), (0x24F7ABD17671A5D6L < p_28))) , ((*l_1788) = ((0UL && (&p_2023->g_1023[4][4] != &l_1763[1][6][1])) , (((((safe_mod_func_uint16_t_u_u(FAKE_DIVERGE(p_2023->local_1_offset, get_local_id(1), 10), (safe_mul_func_int16_t_s_s((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((FAKE_DIVERGE(p_2023->local_0_offset, get_local_id(0), 10) >= 6UL) && 0x70667E7BL), (*l_1752), (*p_29), ((VECTOR(uint32_t, 4))(0x5124129DL)), ((VECTOR(uint32_t, 4))(4294967287UL)), 0x340D8D0BL, (*p_2023->g_48), FAKE_DIVERGE(p_2023->group_0_offset, get_group_id(0), 10), 0UL, 0UL)).s19)).hi > FAKE_DIVERGE(p_2023->local_2_offset, get_local_id(2), 10)), p_28)))) && l_1758) | p_28) == (**p_2023->g_1765)) & (-7L))))) , l_1789) != p_2023->g_447[6]), 5))), p_28)) , (*l_1752)))), 0x2B1AL, ((VECTOR(int16_t, 4))(0x30B4L)), ((VECTOR(int16_t, 4))(0x1075L)), 0x6D9CL, 0x745DL, 1L, (-9L), 0x71E3L)).s4f5f)).wxyzyzwwyzyyyxzy))).sb);
                    (*l_1790) = func_95(l_1775[0][2][4], p_2023->g_942.sb, p_2023);
                    atomic_add(&p_2023->g_atomic_reduction[get_linear_group_id()], p_28 + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_2023->v_collective += p_2023->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    (*l_1790) = p_29;
                }
                p_2023->g_650[1] = func_95(p_2023->g_1711.sc, l_1791[6][0], p_2023);
            }
            else
            { /* block id: 783 */
                int64_t *l_1797 = (void*)0;
                VECTOR(int32_t, 16) l_1803 = (VECTOR(int32_t, 16))(0x52CBB6E4L, (VECTOR(int32_t, 4))(0x52CBB6E4L, (VECTOR(int32_t, 2))(0x52CBB6E4L, 0L), 0L), 0L, 0x52CBB6E4L, 0L, (VECTOR(int32_t, 2))(0x52CBB6E4L, 0L), (VECTOR(int32_t, 2))(0x52CBB6E4L, 0L), 0x52CBB6E4L, 0L, 0x52CBB6E4L, 0L);
                int i;
                for (p_2023->g_954 = 0; (p_2023->g_954 != 26); p_2023->g_954++)
                { /* block id: 786 */
                    int8_t l_1799 = 1L;
                    VECTOR(int32_t, 16) l_1806 = (VECTOR(int32_t, 16))(0x17C20C85L, (VECTOR(int32_t, 4))(0x17C20C85L, (VECTOR(int32_t, 2))(0x17C20C85L, 9L), 9L), 9L, 0x17C20C85L, 9L, (VECTOR(int32_t, 2))(0x17C20C85L, 9L), (VECTOR(int32_t, 2))(0x17C20C85L, 9L), 0x17C20C85L, 9L, 0x17C20C85L, 9L);
                    int i;
                    if ((safe_add_func_int64_t_s_s((l_1799 = ((((VECTOR(int64_t, 4))(l_1796.yxxy)).x , l_1797) == l_1798[0][1])), (safe_div_func_int16_t_s_s((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_1802.wwyzwzywwzxzzzwz)).sea)).hi , (((((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x6C2B17DEL, ((VECTOR(int32_t, 2))(6L, 0L)), ((VECTOR(int32_t, 2))(l_1803.s39)), 0L, (-2L), 0x0DACA27DL)).s13)).hi , (0x3519L == (**p_2023->g_334))) | p_2023->g_128.y) == ((p_28 & (safe_add_func_uint8_t_u_u(p_28, l_1806.s9))) < (((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(p_2023->g_1807.zyxyyywyxyxwywxz)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))((((VECTOR(uint32_t, 16))(l_1758, 0x2E0CF572L, FAKE_DIVERGE(p_2023->local_2_offset, get_local_id(2), 10), ((VECTOR(uint32_t, 8))(0UL)), 0x37831E42L, 4294967295UL, 0xACCBAD86L, 0x2D8CB4C2L, 0xFC371865L)).s4 > 1UL), ((VECTOR(uint16_t, 4))(0x0374L)), ((VECTOR(uint16_t, 4))(0xF5AFL)), l_1806.s8, ((VECTOR(uint16_t, 4))(0UL)), 65532UL, 0xA3A9L)).s2bd4)).zxzxxyzz)).s26)).yyyyyxxyyyxxxxyy))).s647c, ((VECTOR(int32_t, 4))((-1L)))))), (-1L), l_1758, 0x2BDB979CL, 0x29B3A00DL)).s0675557051223024, ((VECTOR(int32_t, 16))(1L)), ((VECTOR(int32_t, 16))(0x6E4C20F7L))))).s4 , p_2023->g_340.s2))) , p_28) , l_1806.s3)), 0x3526L)))))
                    { /* block id: 788 */
                        return l_1748[3][6];
                    }
                    else
                    { /* block id: 790 */
                        int32_t l_1814 = 0x1808ADC7L;
                        l_1820 = func_95((((*p_2023->g_335)++) , (safe_mod_func_uint16_t_u_u((((((safe_add_func_int32_t_s_s(((((*l_1750) = 5L) > (l_1806.s8 | 0x366E52324067BC62L)) & 0x40A7L), l_1814)) <= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((p_28 || (0xD4DAED0FL == 0x7BCAE26EL)) ^ ((void*)0 != l_1819)), 0)), FAKE_DIVERGE(p_2023->local_2_offset, get_local_id(2), 10)))) == l_1758) ^ 0x3D3D38E20B458450L) != p_28), l_1814))), (*l_1752), p_2023);
                    }
                }
            }
            for (p_28 = 0; (p_28 > 6); p_28 = safe_add_func_int16_t_s_s(p_28, 4))
            { /* block id: 799 */
                int8_t ***l_1823 = &p_2023->g_1765;
                p_2023->g_1830[1][8][2] = func_95((((((((void*)0 != l_1823) > (safe_div_func_int8_t_s_s(((((*l_1767) = l_1826) != (void*)0) > (*p_2023->g_48)), p_28))) , (((safe_mul_func_int8_t_s_s(((l_1826 != ((*l_1767) = &p_2023->g_1765)) == ((VECTOR(uint16_t, 16))(p_2023->g_1829.s07e8793eb104b5bc)).s6), (18446744073709551610UL | 18446744073709551615UL))) , p_28) , (*p_29))) ^ 0x5B59559CL) , l_1802.y) | l_1796.x), p_2023->g_1737.s0, p_2023);
                for (p_2023->g_1001 = 0; (p_2023->g_1001 != 29); ++p_2023->g_1001)
                { /* block id: 805 */
                    uint64_t l_1833 = 0xC0652A1FB9D331F8L;
                    return l_1833;
                }
            }
            atomic_sub(&p_2023->g_atomic_reduction[get_linear_group_id()], (safe_sub_func_uint8_t_u_u(p_2023->g_1410.s0, (((safe_mul_func_int8_t_s_s((0x6FL | ((VECTOR(uint8_t, 4))(l_1838.xxxy)).z), ((VECTOR(int8_t, 2))(0L, 0x69L)).lo)) > (safe_rshift_func_int16_t_s_s(0L, 13))) == 0UL))) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_2023->v_collective += p_2023->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
    }
    else
    { /* block id: 811 */
        int64_t *l_1844[4][9][4] = {{{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001}},{{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001}},{{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001}},{{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001},{(void*)0,&p_2023->g_1001,(void*)0,&p_2023->g_1001}}};
        int64_t **l_1843 = &l_1844[3][6][0];
        int32_t l_1850 = (-1L);
        int32_t l_1859[2];
        uint16_t *l_1860 = &p_2023->g_671;
        VECTOR(uint8_t, 8) l_1866 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x06L), 0x06L), 0x06L, 0UL, 0x06L);
        uint64_t l_1869 = 18446744073709551611UL;
        int16_t *l_1871 = (void*)0;
        int16_t *l_1872[4];
        uint16_t *l_1876 = (void*)0;
        uint16_t *l_1877 = (void*)0;
        uint16_t *l_1878[1];
        int32_t *l_1880 = &p_2023->g_205;
        uint64_t *l_1902 = &p_2023->g_266;
        int32_t *l_1904 = (void*)0;
        int32_t *l_1905[7] = {(void*)0,&l_1879,(void*)0,(void*)0,&l_1879,(void*)0,(void*)0};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1859[i] = 0x2204FE41L;
        for (i = 0; i < 4; i++)
            l_1872[i] = &p_2023->g_1002;
        for (i = 0; i < 1; i++)
            l_1878[i] = (void*)0;
        (*l_1880) &= (((**p_2023->g_1765) |= (safe_sub_func_int16_t_s_s(((*l_1750) = ((void*)0 == l_1843)), (l_1796.x >= ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_2023->g_1845.s6bd6)), ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(7UL, 0xEB95E994L)), 0x74E5B049L, 4294967295UL)).zyyyzzzy, (uint32_t)((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(0xD0F9L, 0x72CCL)).xxyyxyxy, ((VECTOR(uint16_t, 4))((safe_mod_func_uint32_t_u_u((((**p_2023->g_334) != (l_1879 &= (safe_sub_func_int32_t_s_s(l_1850, ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 16))(0L, 0x775FC544848B2A49L, ((safe_rshift_func_uint16_t_u_u(0xF44EL, (safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((((l_1873 = ((((((safe_lshift_func_int8_t_s_u(((((*l_1860)++) > ((p_2023->g_986.y++) | (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 8))(l_1865.s61346431)), ((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_1866.s34560617)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_28, 249UL, 246UL, 9UL)), 0UL, 7UL, 255UL, 0x4BL)).s53)), 0x81L, 252UL, 255UL, (safe_mul_func_uint8_t_u_u(l_1869, 0x05L)), 247UL, 0xA5L)).s47))).yxxxxxxy))).s2, 0x2DEAL, 0x0B69L, 5UL)).x | p_28))) ^ l_1747), 6)) != l_1869) != GROUP_DIVERGE(0, 1)) || l_1859[0]) , l_1870) == l_1870)) > p_2023->g_1874[1]) , &p_2023->g_1830[1][8][2]) == l_1875) <= p_28), p_28)), (-1L))))) != l_1866.s2), 1L, ((VECTOR(int64_t, 2))(0x27DF4BEBBDCB9720L)), p_28, 0x7504BC89C4ABD77EL, ((VECTOR(int64_t, 8))(0x6DD76C8E410D93E5L)))).even, ((VECTOR(int64_t, 8))(0x0BE8948E2C0BE236L))))).s44)).even | (-2L)) || p_28))))) > 0L), 0x04801D3CL)), p_28, 1UL, 0xFCDCL)).xyyzzzxw))).s4, (uint32_t)(*p_29)))).s67, ((VECTOR(uint32_t, 2))(0xCF6FB23EL)), ((VECTOR(uint32_t, 2))(4294967295UL))))), 1UL, 0xB3B5FD34L)).s1)))) != GROUP_DIVERGE(0, 1));
        l_1879 &= (1UL >= ((l_1859[1] = (((VECTOR(int8_t, 16))((-1L), (((*l_1902) &= ((((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(((void*)0 != l_1749), 8)), ((*l_1880) > ((*l_1880) , (safe_lshift_func_uint8_t_u_s(p_2023->g_307, 4)))))) || (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x4497L, 1UL)).yyxx)), (safe_rshift_func_int16_t_s_u((FAKE_DIVERGE(p_2023->global_2_offset, get_global_id(2), 10) & ((safe_mod_func_int32_t_s_s((((***p_2023->g_1764) | (((VECTOR(uint64_t, 8))(l_1895.xxyxxxxx)).s4 | ((*l_1880) = ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))((-5L), 0x32ABFE3370E5BB39L, (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(((void*)0 == &p_2023->g_49), FAKE_DIVERGE(p_2023->global_1_offset, get_global_id(1), 10))) && 0xC2L) >= p_2023->g_1446.sd) <= (*l_1880)), 6)), 2)), ((VECTOR(int64_t, 4))(0x4BD725CBBC646FADL)), 0x39CB312F1B771C4AL)))).s64, ((VECTOR(int64_t, 2))(0x2671F2C1B0FF881DL))))).xyyxyyxy)).s6))) >= l_1866.s0), 0x4EA1F162L)) & p_28)), l_1873)), ((VECTOR(uint16_t, 2))(0x40EEL)), 0x5956L)).s3 <= 0x8735L), (*p_2023->g_335))), FAKE_DIVERGE(p_2023->group_1_offset, get_group_id(1), 10)))) , (***p_2023->g_1764)) || p_28)) , (*l_1880)), 0x1AL, (*l_1880), (***p_2023->g_1764), 0x03L, p_28, 1L, ((VECTOR(int8_t, 4))(0x3FL)), ((VECTOR(int8_t, 2))(1L)), 0x32L, 0x42L)).s6 ^ p_2023->g_1903)) , p_28));
        (*l_1880) ^= (FAKE_DIVERGE(p_2023->local_2_offset, get_local_id(2), 10) || (((void*)0 != p_2023->g_1906) & p_28));
    }
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_2023->g_205 p_2023->g_1169 p_2023->g_1001 p_2023->g_135 p_2023->g_151 p_2023->g_206 p_2023->g_1567 p_2023->g_1569 p_2023->g_1570 p_2023->g_1574 p_2023->g_1109 p_2023->g_1575 p_2023->g_306 p_2023->g_1611 p_2023->g_146 p_2023->g_48 p_2023->g_49 p_2023->g_149 p_2023->g_1017 p_2023->g_1433 p_2023->g_266 p_2023->g_1668 p_2023->g_592 p_2023->g_1685 p_2023->g_1711 p_2023->g_671 p_2023->g_1214
 * writes: p_2023->g_650 p_2023->g_205 p_2023->g_1169 p_2023->g_1001 p_2023->g_151 p_2023->g_206 p_2023->g_1109 p_2023->g_306 p_2023->g_1017 p_2023->g_146 p_2023->g_592 p_2023->g_149 p_2023->g_1433 p_2023->g_75 p_2023->g_266 p_2023->g_88 p_2023->g_comm_values p_2023->g_1567 p_2023->g_49
 */
int64_t  func_42(uint32_t * p_43, uint32_t * p_44, int32_t  p_45, uint32_t * p_46, uint32_t * p_47, struct S0 * p_2023)
{ /* block id: 689 */
    int32_t **l_1546 = &p_2023->g_650[7];
    VECTOR(int32_t, 2) l_1547 = (VECTOR(int32_t, 2))(0x0AE61C6CL, (-1L));
    int32_t *l_1548 = &p_2023->g_205;
    uint8_t *l_1561 = &p_2023->g_592;
    int16_t *l_1573 = &p_2023->g_306;
    int16_t **l_1572 = &l_1573;
    int64_t l_1576 = 0x3D81D8A7FD4413F4L;
    int8_t l_1581 = 9L;
    uint8_t l_1584[2][3] = {{0x9AL,0xFAL,0x9AL},{0x9AL,0xFAL,0x9AL}};
    int8_t l_1589 = 0L;
    VECTOR(int8_t, 8) l_1612 = (VECTOR(int8_t, 8))(0x02L, (VECTOR(int8_t, 4))(0x02L, (VECTOR(int8_t, 2))(0x02L, 0x50L), 0x50L), 0x50L, 0x02L, 0x50L);
    VECTOR(uint8_t, 8) l_1613 = (VECTOR(uint8_t, 8))(0x91L, (VECTOR(uint8_t, 4))(0x91L, (VECTOR(uint8_t, 2))(0x91L, 255UL), 255UL), 255UL, 0x91L, 255UL);
    int8_t *l_1621 = &p_2023->g_1109;
    int8_t **l_1620[10][4][6] = {{{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621}},{{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621}},{{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621}},{{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621}},{{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621}},{{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621}},{{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621}},{{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621}},{{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621}},{{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621},{&l_1621,&l_1621,&l_1621,&l_1621,&l_1621,&l_1621}}};
    int8_t ***l_1619 = &l_1620[0][0][3];
    VECTOR(int8_t, 8) l_1632 = (VECTOR(int8_t, 8))(0x0AL, (VECTOR(int8_t, 4))(0x0AL, (VECTOR(int8_t, 2))(0x0AL, 0x3CL), 0x3CL), 0x3CL, 0x0AL, 0x3CL);
    VECTOR(int32_t, 16) l_1639 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7689F933L), 0x7689F933L), 0x7689F933L, 0L, 0x7689F933L, (VECTOR(int32_t, 2))(0L, 0x7689F933L), (VECTOR(int32_t, 2))(0L, 0x7689F933L), 0L, 0x7689F933L, 0L, 0x7689F933L);
    VECTOR(int32_t, 4) l_1645 = (VECTOR(int32_t, 4))(0x725B284FL, (VECTOR(int32_t, 2))(0x725B284FL, 5L), 5L);
    VECTOR(uint8_t, 8) l_1653 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 9UL), 9UL), 9UL, 255UL, 9UL);
    int32_t *l_1683 = &p_2023->g_954;
    int32_t **l_1682 = &l_1683;
    int32_t ***l_1681 = &l_1682;
    VECTOR(uint32_t, 8) l_1694 = (VECTOR(uint32_t, 8))(0xB33C3148L, (VECTOR(uint32_t, 4))(0xB33C3148L, (VECTOR(uint32_t, 2))(0xB33C3148L, 0x71171A84L), 0x71171A84L), 0x71171A84L, 0xB33C3148L, 0x71171A84L);
    int8_t l_1697 = (-4L);
    VECTOR(uint32_t, 8) l_1709 = (VECTOR(uint32_t, 8))(0x14C2EAB1L, (VECTOR(uint32_t, 4))(0x14C2EAB1L, (VECTOR(uint32_t, 2))(0x14C2EAB1L, 1UL), 1UL), 1UL, 0x14C2EAB1L, 1UL);
    VECTOR(uint16_t, 16) l_1710 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint16_t, 2))(1UL, 0UL), (VECTOR(uint16_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
    uint16_t l_1724 = 1UL;
    int i, j, k;
    (*l_1546) = p_46;
    (*l_1548) &= ((VECTOR(int32_t, 4))(l_1547.yyyx)).x;
    for (p_2023->g_1169 = 29; (p_2023->g_1169 <= 18); p_2023->g_1169--)
    { /* block id: 694 */
        uint64_t l_1559 = 0x9C8C012449383173L;
        int8_t *l_1564 = &p_2023->g_157;
        VECTOR(int8_t, 8) l_1568 = (VECTOR(int8_t, 8))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), (-1L)), (-1L)), (-1L), (-9L), (-1L));
        int8_t l_1571 = 0x4DL;
        int32_t *l_1577 = &p_2023->g_149;
        int32_t *l_1578 = &p_2023->g_149;
        int32_t *l_1579 = (void*)0;
        int32_t *l_1580[9][3][2] = {{{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149}}};
        int8_t l_1582 = 1L;
        int32_t l_1583 = (-5L);
        int i, j, k;
        for (p_2023->g_1001 = 16; (p_2023->g_1001 >= (-20)); --p_2023->g_1001)
        { /* block id: 697 */
            int32_t *l_1557 = &p_2023->g_146;
            uint32_t *l_1558[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1560 = 0x3EED0F3CL;
            int8_t *l_1563 = (void*)0;
            int8_t **l_1562 = &l_1563;
            int i;
            (*l_1548) = (((((*l_1562) = func_106((safe_div_func_int32_t_s_s((l_1557 == (p_45 , &p_45)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x0AA56C71L, 0x663DDE82L)).yyxy)).w)), l_1560, l_1561, l_1559, p_2023)) == l_1564) ^ ((((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(p_2023->g_1567.xywxxzyxwzwywzyz)).s4c, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(l_1568.s1460)).xxyzwxyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_2023->g_1569.yyyxxxyy)))).s7737113767645176, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_2023->g_1570.xyxy)), 0x74L, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))((-9L), ((VECTOR(int8_t, 4))(0x78L, 0x79L, 2L, 1L)), 1L, ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(l_1571, p_45, 0x50L, 0x5FL, 0x06L, ((VECTOR(int8_t, 2))(0L)), (-1L))), ((VECTOR(int8_t, 8))(0L))))), (-1L), 0x4FL)).sb509))))).hi, ((VECTOR(int8_t, 2))((-6L))), ((VECTOR(int8_t, 2))(0x18L))))), 0L)).s3546761261526643, ((VECTOR(int8_t, 16))((-1L)))))).s00)).xxyyxyyx))).odd, ((VECTOR(int8_t, 4))(0x77L))))))))).lo)).yyyyxxxy)).s33))), (-3L), 9L)), (-1L), 0x4DL, 0x00L, ((VECTOR(int8_t, 8))(0x16L)), (-2L))).odd)), ((VECTOR(int8_t, 8))(4L))))).s60)).hi, 4)) , l_1572) == p_2023->g_1574) == p_45)) , (*l_1548));
        }
        l_1584[1][2]--;
        (*l_1548) = p_45;
    }
    for (p_2023->g_1109 = 11; (p_2023->g_1109 > (-8)); p_2023->g_1109--)
    { /* block id: 707 */
        VECTOR(int16_t, 2) l_1592 = (VECTOR(int16_t, 2))((-3L), 1L);
        int8_t *l_1600 = (void*)0;
        int8_t *l_1601 = (void*)0;
        VECTOR(int16_t, 16) l_1608 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L), (VECTOR(int16_t, 2))((-1L), (-8L)), (VECTOR(int16_t, 2))((-1L), (-8L)), (-1L), (-8L), (-1L), (-8L));
        uint32_t l_1609 = 0xAD97FD4FL;
        VECTOR(int16_t, 8) l_1610 = (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x7C62L), 0x7C62L), 0x7C62L, 3L, 0x7C62L);
        int32_t l_1614 = 0x284843A6L;
        int16_t *l_1615[9][6] = {{&p_2023->g_1169,(void*)0,&p_2023->g_1169,&p_2023->g_1002,&p_2023->g_1169,(void*)0},{&p_2023->g_1169,(void*)0,&p_2023->g_1169,&p_2023->g_1002,&p_2023->g_1169,(void*)0},{&p_2023->g_1169,(void*)0,&p_2023->g_1169,&p_2023->g_1002,&p_2023->g_1169,(void*)0},{&p_2023->g_1169,(void*)0,&p_2023->g_1169,&p_2023->g_1002,&p_2023->g_1169,(void*)0},{&p_2023->g_1169,(void*)0,&p_2023->g_1169,&p_2023->g_1002,&p_2023->g_1169,(void*)0},{&p_2023->g_1169,(void*)0,&p_2023->g_1169,&p_2023->g_1002,&p_2023->g_1169,(void*)0},{&p_2023->g_1169,(void*)0,&p_2023->g_1169,&p_2023->g_1002,&p_2023->g_1169,(void*)0},{&p_2023->g_1169,(void*)0,&p_2023->g_1169,&p_2023->g_1002,&p_2023->g_1169,(void*)0},{&p_2023->g_1169,(void*)0,&p_2023->g_1169,&p_2023->g_1002,&p_2023->g_1169,(void*)0}};
        int32_t l_1616 = (-1L);
        VECTOR(uint64_t, 4) l_1651 = (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551615UL), 18446744073709551615UL);
        int8_t ***l_1652 = &l_1620[0][0][3];
        VECTOR(uint32_t, 16) l_1662 = (VECTOR(uint32_t, 16))(0xCCA72A8CL, (VECTOR(uint32_t, 4))(0xCCA72A8CL, (VECTOR(uint32_t, 2))(0xCCA72A8CL, 0x11DD2AE8L), 0x11DD2AE8L), 0x11DD2AE8L, 0xCCA72A8CL, 0x11DD2AE8L, (VECTOR(uint32_t, 2))(0xCCA72A8CL, 0x11DD2AE8L), (VECTOR(uint32_t, 2))(0xCCA72A8CL, 0x11DD2AE8L), 0xCCA72A8CL, 0x11DD2AE8L, 0xCCA72A8CL, 0x11DD2AE8L);
        int64_t *l_1689 = &p_2023->g_1001;
        int64_t **l_1688 = &l_1689;
        int8_t ****l_1693 = (void*)0;
        int32_t l_1700 = 0x23227156L;
        uint16_t **l_1714 = &p_2023->g_335;
        int32_t *l_1717 = &l_1614;
        int32_t *l_1718 = (void*)0;
        int32_t *l_1719 = (void*)0;
        int32_t *l_1720 = (void*)0;
        int32_t *l_1721 = &p_2023->g_149;
        int32_t *l_1722 = (void*)0;
        int32_t *l_1723[10][4] = {{(void*)0,(void*)0,&p_2023->g_4,&l_1614},{(void*)0,(void*)0,&p_2023->g_4,&l_1614},{(void*)0,(void*)0,&p_2023->g_4,&l_1614},{(void*)0,(void*)0,&p_2023->g_4,&l_1614},{(void*)0,(void*)0,&p_2023->g_4,&l_1614},{(void*)0,(void*)0,&p_2023->g_4,&l_1614},{(void*)0,(void*)0,&p_2023->g_4,&l_1614},{(void*)0,(void*)0,&p_2023->g_4,&l_1614},{(void*)0,(void*)0,&p_2023->g_4,&l_1614},{(void*)0,(void*)0,&p_2023->g_4,&l_1614}};
        int i, j;
        if ((((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_1589, 8L, 0x6043L, 1L)).hi)), 0x404BL, 0x32FDL)).hi, (int16_t)(p_2023->g_1017.x = (l_1616 = ((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_1592.xxyxyxyyyxyyxxyx)).s2, (safe_unary_minus_func_int16_t_s((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((*l_1548) = (FAKE_DIVERGE(p_2023->local_1_offset, get_local_id(1), 10) & ((void*)0 != (*p_2023->g_1574)))), (safe_rshift_func_int16_t_s_u((l_1614 = ((safe_div_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_1608.s42)).yxyxxyyy)).s6 != (((*l_1573) |= (l_1609 == p_45)) , p_45)) , (p_45 && ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(l_1610.s04523313)).s6352166610176642))).odd, ((VECTOR(int16_t, 2))((-1L), 0x3F19L)).yxxyyxyy))).s7222555117301660)).seb, ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_2023->g_1611.zxzxxxxx)).s52)).xyyxyxyxyyxyyxxx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(l_1612.s62)), ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_1613.s4476)), (p_45 && p_45), ((VECTOR(uint8_t, 2))(8UL)), 0xEEL)).lo, ((VECTOR(uint8_t, 4))(0UL))))).odd))))), 0x23F2L, 0x1C9CL, 5L, p_45, 8L, 7L)).s74)).yyxxyyxxxxyyyyyx, ((VECTOR(int16_t, 16))(1L))))).s33))).hi)), 6L)), (-2L))) != 65532UL)), p_45)))), p_45)))))) > (-1L))))))).yxxyyxxx, ((VECTOR(int16_t, 8))(0x4EAEL)), ((VECTOR(int16_t, 8))(0x1753L))))).s5142616543523262, ((VECTOR(int16_t, 16))(0x53ADL))))).sf == 0xF0BEL))
        { /* block id: 713 */
            int32_t l_1630[7][1];
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1630[i][j] = (-1L);
            }
            for (p_2023->g_146 = 0; (p_2023->g_146 != (-27)); --p_2023->g_146)
            { /* block id: 716 */
                int8_t ***l_1622 = &l_1620[6][2][2];
                int8_t ****l_1623 = &l_1622;
                VECTOR(int32_t, 2) l_1626 = (VECTOR(int32_t, 2))((-1L), (-7L));
                int32_t *l_1627 = (void*)0;
                int32_t *l_1628 = (void*)0;
                int32_t *l_1629 = &l_1614;
                int32_t *l_1631 = &p_2023->g_149;
                int i;
                (*l_1631) |= (l_1630[4][0] |= ((*l_1629) = (((*p_2023->g_48) , 0x10B0AA055AA3E3FBL) & ((l_1619 == ((*l_1623) = l_1622)) || ((*l_1561) = (((*l_1573) = (!(safe_sub_func_uint16_t_u_u((p_45 > (p_45 > (~((*l_1548) = l_1610.s3)))), l_1626.y)))) >= (p_45 , p_45)))))));
            }
        }
        else
        { /* block id: 725 */
            VECTOR(int32_t, 4) l_1644 = (VECTOR(int32_t, 4))(0x43780FEDL, (VECTOR(int32_t, 2))(0x43780FEDL, (-1L)), (-1L));
            uint64_t *l_1646[1][9][2] = {{{&p_2023->g_447[3],&p_2023->g_447[3]},{&p_2023->g_447[3],&p_2023->g_447[3]},{&p_2023->g_447[3],&p_2023->g_447[3]},{&p_2023->g_447[3],&p_2023->g_447[3]},{&p_2023->g_447[3],&p_2023->g_447[3]},{&p_2023->g_447[3],&p_2023->g_447[3]},{&p_2023->g_447[3],&p_2023->g_447[3]},{&p_2023->g_447[3],&p_2023->g_447[3]},{&p_2023->g_447[3],&p_2023->g_447[3]}}};
            VECTOR(int8_t, 16) l_1667 = (VECTOR(int8_t, 16))(0x30L, (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 1L), 1L), 1L, 0x30L, 1L, (VECTOR(int8_t, 2))(0x30L, 1L), (VECTOR(int8_t, 2))(0x30L, 1L), 0x30L, 1L, 0x30L, 1L);
            uint32_t l_1669 = 0x207CA2B2L;
            uint8_t *l_1670 = &p_2023->g_88;
            int32_t *l_1671 = (void*)0;
            VECTOR(int32_t, 2) l_1676 = (VECTOR(int32_t, 2))(0x7AACC5BDL, 0x3E407ABAL);
            int32_t **l_1680 = (void*)0;
            int32_t ***l_1679 = &l_1680;
            int32_t ***l_1684[5] = {&l_1682,&l_1682,&l_1682,&l_1682,&l_1682};
            int64_t *l_1692[7][1] = {{&l_1576},{&l_1576},{&l_1576},{&l_1576},{&l_1576},{&l_1576},{&l_1576}};
            int i, j, k;
            (*l_1548) = (((VECTOR(int8_t, 2))(l_1632.s21)).even || (safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((p_45 || (p_2023->g_1017.x , ((safe_add_func_int32_t_s_s((l_1644.y = ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1639.s589c)), 0L, 0x45DC9F0FL, (safe_mod_func_int16_t_s_s(1L, (safe_mod_func_uint32_t_u_u(0x30A74C72L, (*l_1548))))), ((VECTOR(int32_t, 4))(l_1644.wwyz)), 0x46537A66L, (((*l_1573) = 0x6E00L) , p_45), 0x43608245L, 4L, (-5L))).sc7e2)).zxywzxyzwywzxxxz, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(7L, 0L)))), l_1644.y, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1645.xwzwyxzywyxwxxyw)).lo)).even)), 7L)).s2560316657773444, ((VECTOR(int32_t, 4))((((*l_1561) = p_45) ^ l_1592.y), 0x48A1209CL, 0x607CB2EDL, (-1L))).wxzwxyywyyyxxwwy))).se), 0L)) ^ FAKE_DIVERGE(p_2023->local_1_offset, get_local_id(1), 10)))), p_45)), 2)));
            (*l_1548) &= (((p_2023->g_1433.y++) > ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(0UL, 0x758DDC8B78DEFCF4L, ((VECTOR(uint64_t, 2))(l_1651.wx)), (&l_1620[0][0][3] == l_1652), 0x9C03D904EAEA189CL, 18446744073709551612UL, 0xBCD7DCC26FD10CB4L)))).s0, 1L)) | l_1644.z)) ^ (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_1653.s3527)))))).w , p_45));
            (*l_1546) = (((l_1614 = (((*p_47) & l_1609) || (safe_add_func_uint32_t_u_u(((p_2023->g_75 = FAKE_DIVERGE(p_2023->group_1_offset, get_group_id(1), 10)) == FAKE_DIVERGE(p_2023->global_0_offset, get_global_id(0), 10)), (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_1610.s7 ^ p_45), ((*l_1670) = ((((safe_mul_func_uint16_t_u_u((l_1644.z = ((GROUP_DIVERGE(2, 1) , (GROUP_DIVERGE(2, 1) , (((*p_2023->g_48) & ((VECTOR(uint32_t, 2))(l_1662.s52)).lo) & (((**l_1572) = (safe_add_func_uint64_t_u_u((p_2023->g_266 &= p_45), (safe_add_func_uint8_t_u_u(l_1610.s0, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(l_1667.s840f2e07)).s32, ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(0x08L, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(0x54L, l_1644.w, ((VECTOR(int8_t, 2))(2L, (-3L))), 0x45L, 0x75L, 0x11L, 0x4BL)).even, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_2023->g_1668.wx)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((((*l_1561) |= 255UL) , 3L), p_45, 0L, 0x23L)).even)).odd, 0x70L, p_45, p_45, 0x40L, 0x6CL)))).odd))))).odd, ((VECTOR(int8_t, 2))(9L))))), 1L)).odd, ((VECTOR(int8_t, 2))((-1L)))))).xyxyyyyxyyyyxyyy))).s7c))).hi))))) , l_1669)))) , 3UL)), 0UL)) ^ l_1614) | FAKE_DIVERGE(p_2023->local_0_offset, get_local_id(0), 10)) , p_45)))), 6)))))) ^ p_45) , l_1671);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_2023->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 97)), permutations[(safe_mod_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((((((safe_div_func_uint32_t_u_u(0x08A557FCL, ((VECTOR(int32_t, 2))(l_1676.xy)).even)) > (((~(safe_sub_func_int64_t_s_s((p_2023->g_comm_values[p_2023->tid] = (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x0B3435DF98792334L, 1L)).xxyy)))), (l_1679 != (l_1684[2] = l_1681)), (-1L), 0L, 0x4D27F22CCFF36DAAL)).s6 > (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_2023->g_1685.yy)).yyyxxxxx)).s7 == ((safe_add_func_uint16_t_u_u(((void*)0 == l_1688), (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x4CL, 1L)).odd, 6)))) , 0L)))), ((l_1693 == &l_1619) <= (((((((VECTOR(uint32_t, 8))(l_1694.s11775565)).s4 , (safe_mod_func_int16_t_s_s(((**l_1572) = p_45), 0x2220L))) ^ p_45) == p_45) >= p_45) , p_45))))) , (void*)0) == &l_1652)) & p_45) , l_1610.s7) > p_45) <= l_1697), p_45)), 10))][(safe_mod_func_uint32_t_u_u(p_2023->tid, 97))]));
        }
        (*l_1548) ^= (safe_mul_func_int16_t_s_s(((*l_1573) = l_1700), ((((safe_mul_func_int16_t_s_s(p_45, ((safe_add_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s(p_45, ((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 4))(l_1709.s1651)).xxywzxzx, ((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_1710.sb6dfdf7b)), ((VECTOR(uint16_t, 2))(p_2023->g_1711.saf)), (((((*l_1688) = &p_2023->g_1001) != &p_2023->g_1001) >= (((((*p_2023->g_48) = (safe_mod_func_int8_t_s_s((l_1714 != ((+((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x62CE12FCL, 0x7D27BEEFL)).yyxy)).x) , l_1714)), (p_2023->g_1567.y = p_45)))) > ((safe_mod_func_uint32_t_u_u(p_2023->g_671, 1UL)) & p_45)) ^ p_2023->g_1017.x) ^ 0x2FB0268ECD0DFEF6L)) == p_2023->g_1001), ((VECTOR(uint16_t, 2))(65526UL)), 0x18DDL, 0x0452L, 65530UL)).lo, ((VECTOR(uint16_t, 8))(65532UL)))))))).s5, 6UL)) ^ 0UL))) , 1UL) , p_2023->g_1214) == p_2023->g_1214), p_45)) == 0x5C30L))) , 0L) , 0x174FAF61L) , l_1616)));
        if (p_45)
            break;
        l_1724--;
    }
    return p_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_2023->g_149 p_2023->g_128 p_2023->g_323 p_2023->g_479 p_2023->g_67 p_2023->g_35 p_2023->g_1213 p_2023->g_335 p_2023->g_92 p_2023->g_151 p_2023->g_48 p_2023->g_49 p_2023->g_447 p_2023->g_205 p_2023->g_964 p_2023->g_1365 p_2023->g_comm_values p_2023->g_894 p_2023->g_334 p_2023->l_comm_values p_2023->g_75 p_2023->g_889 p_2023->g_1139 p_2023->g_615 p_2023->g_480 p_2023->g_15 p_2023->g_135 p_2023->g_206 p_2023->g_266 p_2023->g_307 p_2023->g_306 p_2023->g_88 p_2023->g_251 p_2023->g_397 p_2023->g_247 p_2023->g_321 p_2023->g_592 p_2023->g_340 p_2023->g_671 p_2023->g_4 p_2023->g_83 p_2023->g_986 p_2023->g_1109 p_2023->g_398 p_2023->g_157 p_2023->g_1541 p_2023->g_1446 p_2023->g_893
 * writes: p_2023->g_149 p_2023->g_266 p_2023->g_1133 p_2023->g_1213 p_2023->g_92 p_2023->g_1109 p_2023->g_1001 p_2023->g_321 p_2023->g_247 p_2023->g_964 p_2023->g_comm_values p_2023->g_88 p_2023->g_340 p_2023->g_49 p_2023->g_151 p_2023->g_206 p_2023->g_307 p_2023->g_447 p_2023->g_450 p_2023->g_205 p_2023->g_158 p_2023->g_67 p_2023->g_323 p_2023->g_592 p_2023->g_306 p_2023->g_650 p_2023->g_671 p_2023->g_75 p_2023->g_1002 p_2023->g_157
 */
uint32_t * func_50(int16_t  p_51, int32_t  p_52, int64_t  p_53, uint32_t  p_54, uint32_t  p_55, struct S0 * p_2023)
{ /* block id: 526 */
    int32_t *l_1187 = &p_2023->g_954;
    int32_t **l_1186 = &l_1187;
    VECTOR(int32_t, 2) l_1197 = (VECTOR(int32_t, 2))(1L, (-2L));
    uint32_t l_1198 = 0x3909FCD2L;
    uint32_t l_1199 = 0x0CFD5B21L;
    int32_t l_1200 = 7L;
    int64_t *l_1203 = &p_2023->g_1001;
    int64_t **l_1204 = &l_1203;
    uint64_t ***l_1215 = (void*)0;
    uint64_t ***l_1216 = (void*)0;
    uint64_t ***l_1217 = &p_2023->g_1213;
    VECTOR(int32_t, 8) l_1218 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-10L)), (-10L)), (-10L), 0L, (-10L));
    int32_t **l_1228 = &p_2023->g_650[6];
    int32_t ***l_1229[3][6] = {{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228,&l_1228}};
    int32_t **l_1230 = &p_2023->g_650[6];
    int8_t *l_1231 = &p_2023->g_1109;
    int64_t *l_1232 = &p_2023->g_1001;
    int16_t *l_1233[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t *l_1234 = (void*)0;
    int64_t *l_1235 = (void*)0;
    int64_t *l_1236 = (void*)0;
    int64_t *l_1237 = (void*)0;
    int64_t *l_1238[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
    uint8_t l_1341 = 3UL;
    int8_t l_1362 = (-1L);
    VECTOR(int32_t, 8) l_1364 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x332B6CB9L), 0x332B6CB9L), 0x332B6CB9L, 0L, 0x332B6CB9L);
    VECTOR(int8_t, 16) l_1380 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x7CL), 0x7CL), 0x7CL, (-1L), 0x7CL, (VECTOR(int8_t, 2))((-1L), 0x7CL), (VECTOR(int8_t, 2))((-1L), 0x7CL), (-1L), 0x7CL, (-1L), 0x7CL);
    uint16_t **l_1387 = &p_2023->g_335;
    uint16_t l_1389 = 65533UL;
    VECTOR(int64_t, 16) l_1430 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L), (VECTOR(int64_t, 2))((-1L), (-2L)), (VECTOR(int64_t, 2))((-1L), (-2L)), (-1L), (-2L), (-1L), (-2L));
    VECTOR(int32_t, 4) l_1435 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 4L), 4L);
    int8_t l_1521 = 0x7DL;
    int8_t ***l_1540 = (void*)0;
    int8_t ****l_1539 = &l_1540;
    int32_t l_1544 = (-1L);
    int32_t l_1545 = 0x46BB5EF3L;
    int i, j;
    for (p_2023->g_149 = 0; (p_2023->g_149 <= 5); ++p_2023->g_149)
    { /* block id: 529 */
        int32_t l_1177 = 0x78F73D9EL;
        int32_t **l_1191 = &p_2023->g_650[6];
        int32_t **l_1192[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1192[i] = (void*)0;
        l_1200 ^= (((((l_1177 & (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((0x22B99BA9L && (((safe_rshift_func_int16_t_s_s(p_54, (safe_mul_func_int16_t_s_s((p_2023->g_128.x <= ((p_2023->g_1133 = func_95((l_1186 != (p_53 , &l_1187)), (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(p_2023->g_1190.yxyx)).y, 2)), p_2023)) == ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((~p_2023->g_479.s2), l_1197.y)), p_54)) , l_1187))), p_55)))) && 0x4BA2DD37L) > l_1198)), 65533UL)), l_1199))) , p_2023->g_67.s6) && p_55) >= p_2023->g_35.s1) & 255UL);
    }
    if ((((0x32L == ((p_2023->g_247.s6 = ((safe_add_func_uint16_t_u_u((((*l_1204) = l_1203) != (void*)0), ((VECTOR(int16_t, 8))(0x6AC7L, 0x0EF5L, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))((p_2023->g_321.y = ((!(safe_mul_func_int16_t_s_s((!l_1198), (safe_div_func_int16_t_s_s(((p_53 & ((+(((*l_1232) = (safe_mul_func_int8_t_s_s(((*l_1231) = ((safe_sub_func_uint16_t_u_u((((*l_1217) = p_2023->g_1213) != (((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_1218.s15)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0L, ((((safe_sub_func_int8_t_s_s(p_55, (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(((((*p_2023->g_335)--) | (safe_sub_func_int8_t_s_s(p_51, ((l_1230 = l_1228) == &p_2023->g_650[3])))) != 0x62L))), p_2023->g_151)))) , (*p_2023->g_48)) & p_52) < 0x50711B9BL), ((VECTOR(int32_t, 2))(0x03D39C52L)), 9L, (-1L), 0x7DA6061FL, 0x13AFE028L)), 0x28565C3AL, 1L, 0x17BA970BL, 0L, p_51, ((VECTOR(int32_t, 2))(0x7F650E3CL)), 0L)).hi)).s47, ((VECTOR(int32_t, 2))((-3L)))))).odd , &p_2023->g_1214)), 65528UL)) ^ p_54)), p_2023->g_447[7]))) , 0x6A32L)) && p_54)) > (*p_2023->g_48)), 4L))))) && p_2023->g_35.s1)), ((VECTOR(int16_t, 4))(1L)), p_53, 8L, 0x7E63L)).even, (int16_t)p_51))), (-8L), (-2L))).s6)) , p_51)) , p_2023->g_205)) & (*p_2023->g_48)) == p_55))
    { /* block id: 541 */
        int64_t **l_1338 = &l_1238[0][0];
        int64_t ***l_1337 = &l_1338;
        int32_t **l_1342[3];
        VECTOR(uint32_t, 4) l_1358 = (VECTOR(uint32_t, 4))(0x4F18F651L, (VECTOR(uint32_t, 2))(0x4F18F651L, 6UL), 6UL);
        int32_t *l_1363 = &p_2023->g_954;
        VECTOR(uint16_t, 4) l_1366 = (VECTOR(uint16_t, 4))(0xFE02L, (VECTOR(uint16_t, 2))(0xFE02L, 0x503FL), 0x503FL);
        uint8_t *l_1379 = &p_2023->g_88;
        int32_t l_1383 = 1L;
        int i;
        for (i = 0; i < 3; i++)
            l_1342[i] = &p_2023->g_650[2];
        if ((atomic_inc(&p_2023->l_atomic_input[18]) == 7))
        { /* block id: 543 */
            uint64_t l_1239 = 5UL;
            if (l_1239)
            { /* block id: 544 */
                int64_t l_1240 = (-1L);
                int64_t l_1241 = 0x54F78EFE958B5158L;
                int8_t l_1242 = 3L;
                int8_t l_1243 = 0x14L;
                int8_t l_1244 = (-1L);
                uint16_t l_1245 = 0UL;
                ++l_1245;
                for (l_1244 = (-13); (l_1244 != (-28)); l_1244--)
                { /* block id: 548 */
                    int32_t l_1250 = 0L;
                    int32_t *l_1261 = &l_1250;
                    int32_t *l_1262[5][2][9] = {{{&l_1250,&l_1250,(void*)0,(void*)0,&l_1250,(void*)0,(void*)0,&l_1250,&l_1250},{&l_1250,&l_1250,(void*)0,(void*)0,&l_1250,(void*)0,(void*)0,&l_1250,&l_1250}},{{&l_1250,&l_1250,(void*)0,(void*)0,&l_1250,(void*)0,(void*)0,&l_1250,&l_1250},{&l_1250,&l_1250,(void*)0,(void*)0,&l_1250,(void*)0,(void*)0,&l_1250,&l_1250}},{{&l_1250,&l_1250,(void*)0,(void*)0,&l_1250,(void*)0,(void*)0,&l_1250,&l_1250},{&l_1250,&l_1250,(void*)0,(void*)0,&l_1250,(void*)0,(void*)0,&l_1250,&l_1250}},{{&l_1250,&l_1250,(void*)0,(void*)0,&l_1250,(void*)0,(void*)0,&l_1250,&l_1250},{&l_1250,&l_1250,(void*)0,(void*)0,&l_1250,(void*)0,(void*)0,&l_1250,&l_1250}},{{&l_1250,&l_1250,(void*)0,(void*)0,&l_1250,(void*)0,(void*)0,&l_1250,&l_1250},{&l_1250,&l_1250,(void*)0,(void*)0,&l_1250,(void*)0,(void*)0,&l_1250,&l_1250}}};
                    int i, j, k;
                    if (l_1250)
                    { /* block id: 549 */
                        int8_t l_1251 = 0x32L;
                        uint16_t l_1252 = 65533UL;
                        int32_t l_1255[7][1][1] = {{{(-1L)}},{{(-1L)}},{{(-1L)}},{{(-1L)}},{{(-1L)}},{{(-1L)}},{{(-1L)}}};
                        uint32_t l_1256 = 0UL;
                        uint8_t l_1257 = 1UL;
                        int i, j, k;
                        --l_1252;
                        l_1250 = l_1255[6][0][0];
                        l_1250 &= l_1256;
                        l_1250 = l_1257;
                    }
                    else
                    { /* block id: 554 */
                        int32_t l_1259 = 0x3A7D6845L;
                        int32_t *l_1258 = &l_1259;
                        int32_t *l_1260 = &l_1259;
                        l_1260 = l_1258;
                    }
                    l_1262[0][0][1] = l_1261;
                }
            }
            else
            { /* block id: 559 */
                uint64_t l_1263 = 0UL;
                uint32_t l_1334 = 4294967290UL;
                int32_t *l_1335 = (void*)0;
                int32_t *l_1336 = (void*)0;
                l_1263 |= 0x31E6F888L;
                for (l_1263 = 0; (l_1263 < 26); l_1263 = safe_add_func_uint64_t_u_u(l_1263, 8))
                { /* block id: 563 */
                    int32_t l_1266 = (-2L);
                    for (l_1266 = 0; (l_1266 < 28); ++l_1266)
                    { /* block id: 566 */
                        int16_t l_1269 = 3L;
                        uint32_t l_1270 = 0xC08DFE84L;
                        ++l_1270;
                    }
                    for (l_1266 = 1; (l_1266 == (-22)); l_1266--)
                    { /* block id: 571 */
                        VECTOR(int32_t, 4) l_1275 = (VECTOR(int32_t, 4))(0x145B0284L, (VECTOR(int32_t, 2))(0x145B0284L, 8L), 8L);
                        int32_t l_1276 = 1L;
                        VECTOR(int32_t, 8) l_1277 = (VECTOR(int32_t, 8))(0x0E09CA37L, (VECTOR(int32_t, 4))(0x0E09CA37L, (VECTOR(int32_t, 2))(0x0E09CA37L, 8L), 8L), 8L, 0x0E09CA37L, 8L);
                        VECTOR(int32_t, 8) l_1278 = (VECTOR(int32_t, 8))(0x49582D10L, (VECTOR(int32_t, 4))(0x49582D10L, (VECTOR(int32_t, 2))(0x49582D10L, 1L), 1L), 1L, 0x49582D10L, 1L);
                        VECTOR(int32_t, 8) l_1279 = (VECTOR(int32_t, 8))(0x47B2FEAAL, (VECTOR(int32_t, 4))(0x47B2FEAAL, (VECTOR(int32_t, 2))(0x47B2FEAAL, (-1L)), (-1L)), (-1L), 0x47B2FEAAL, (-1L));
                        VECTOR(int16_t, 4) l_1280 = (VECTOR(int16_t, 4))(0x375CL, (VECTOR(int16_t, 2))(0x375CL, 0x44E2L), 0x44E2L);
                        VECTOR(uint16_t, 2) l_1281 = (VECTOR(uint16_t, 2))(65535UL, 0xFFD2L);
                        VECTOR(int16_t, 4) l_1282 = (VECTOR(int16_t, 4))(0x0B92L, (VECTOR(int16_t, 2))(0x0B92L, 0x6899L), 0x6899L);
                        VECTOR(int16_t, 16) l_1283 = (VECTOR(int16_t, 16))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x4BE1L), 0x4BE1L), 0x4BE1L, (-5L), 0x4BE1L, (VECTOR(int16_t, 2))((-5L), 0x4BE1L), (VECTOR(int16_t, 2))((-5L), 0x4BE1L), (-5L), 0x4BE1L, (-5L), 0x4BE1L);
                        VECTOR(int16_t, 4) l_1284 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L);
                        int32_t l_1285 = 0x475FE439L;
                        uint8_t l_1286[3][4][1];
                        VECTOR(int16_t, 8) l_1287 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x4530L), 0x4530L), 0x4530L, (-1L), 0x4530L);
                        VECTOR(int16_t, 4) l_1288 = (VECTOR(int16_t, 4))(0x4DD7L, (VECTOR(int16_t, 2))(0x4DD7L, (-3L)), (-3L));
                        VECTOR(int16_t, 8) l_1289 = (VECTOR(int16_t, 8))(0x39E1L, (VECTOR(int16_t, 4))(0x39E1L, (VECTOR(int16_t, 2))(0x39E1L, 0x1685L), 0x1685L), 0x1685L, 0x39E1L, 0x1685L);
                        VECTOR(int16_t, 16) l_1290 = (VECTOR(int16_t, 16))(0x4F89L, (VECTOR(int16_t, 4))(0x4F89L, (VECTOR(int16_t, 2))(0x4F89L, 0x6386L), 0x6386L), 0x6386L, 0x4F89L, 0x6386L, (VECTOR(int16_t, 2))(0x4F89L, 0x6386L), (VECTOR(int16_t, 2))(0x4F89L, 0x6386L), 0x4F89L, 0x6386L, 0x4F89L, 0x6386L);
                        uint32_t l_1291 = 4294967293UL;
                        VECTOR(int16_t, 4) l_1292 = (VECTOR(int16_t, 4))(0x5D5EL, (VECTOR(int16_t, 2))(0x5D5EL, (-10L)), (-10L));
                        VECTOR(int16_t, 16) l_1293 = (VECTOR(int16_t, 16))(0x66E1L, (VECTOR(int16_t, 4))(0x66E1L, (VECTOR(int16_t, 2))(0x66E1L, 0x224CL), 0x224CL), 0x224CL, 0x66E1L, 0x224CL, (VECTOR(int16_t, 2))(0x66E1L, 0x224CL), (VECTOR(int16_t, 2))(0x66E1L, 0x224CL), 0x66E1L, 0x224CL, 0x66E1L, 0x224CL);
                        int64_t l_1294 = (-1L);
                        VECTOR(int16_t, 8) l_1295 = (VECTOR(int16_t, 8))(0x32ADL, (VECTOR(int16_t, 4))(0x32ADL, (VECTOR(int16_t, 2))(0x32ADL, 0x70B9L), 0x70B9L), 0x70B9L, 0x32ADL, 0x70B9L);
                        int32_t l_1296 = 0x0D9FC914L;
                        int32_t l_1297 = 0x4FA622F5L;
                        int16_t l_1298 = 0x571AL;
                        VECTOR(int32_t, 16) l_1299 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-1L)), (-1L)), (-1L), 7L, (-1L), (VECTOR(int32_t, 2))(7L, (-1L)), (VECTOR(int32_t, 2))(7L, (-1L)), 7L, (-1L), 7L, (-1L));
                        VECTOR(int32_t, 16) l_1300 = (VECTOR(int32_t, 16))(0x531522A9L, (VECTOR(int32_t, 4))(0x531522A9L, (VECTOR(int32_t, 2))(0x531522A9L, 0L), 0L), 0L, 0x531522A9L, 0L, (VECTOR(int32_t, 2))(0x531522A9L, 0L), (VECTOR(int32_t, 2))(0x531522A9L, 0L), 0x531522A9L, 0L, 0x531522A9L, 0L);
                        uint8_t l_1301 = 1UL;
                        VECTOR(int32_t, 16) l_1302 = (VECTOR(int32_t, 16))(0x274F1932L, (VECTOR(int32_t, 4))(0x274F1932L, (VECTOR(int32_t, 2))(0x274F1932L, 1L), 1L), 1L, 0x274F1932L, 1L, (VECTOR(int32_t, 2))(0x274F1932L, 1L), (VECTOR(int32_t, 2))(0x274F1932L, 1L), 0x274F1932L, 1L, 0x274F1932L, 1L);
                        VECTOR(int32_t, 4) l_1303 = (VECTOR(int32_t, 4))(0x0FC41072L, (VECTOR(int32_t, 2))(0x0FC41072L, 0x3DA20C8BL), 0x3DA20C8BL);
                        VECTOR(int32_t, 8) l_1304 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-1L)), (-1L)), (-1L), (-6L), (-1L));
                        int32_t l_1305 = (-4L);
                        uint32_t l_1306[1];
                        int32_t l_1307 = 0x0F21A121L;
                        VECTOR(int16_t, 16) l_1308 = (VECTOR(int16_t, 16))(0x628DL, (VECTOR(int16_t, 4))(0x628DL, (VECTOR(int16_t, 2))(0x628DL, 0x45FFL), 0x45FFL), 0x45FFL, 0x628DL, 0x45FFL, (VECTOR(int16_t, 2))(0x628DL, 0x45FFL), (VECTOR(int16_t, 2))(0x628DL, 0x45FFL), 0x628DL, 0x45FFL, 0x628DL, 0x45FFL);
                        VECTOR(int16_t, 8) l_1309 = (VECTOR(int16_t, 8))(0x14E9L, (VECTOR(int16_t, 4))(0x14E9L, (VECTOR(int16_t, 2))(0x14E9L, (-9L)), (-9L)), (-9L), 0x14E9L, (-9L));
                        VECTOR(int16_t, 16) l_1310 = (VECTOR(int16_t, 16))(0x20C6L, (VECTOR(int16_t, 4))(0x20C6L, (VECTOR(int16_t, 2))(0x20C6L, 0x3FBAL), 0x3FBAL), 0x3FBAL, 0x20C6L, 0x3FBAL, (VECTOR(int16_t, 2))(0x20C6L, 0x3FBAL), (VECTOR(int16_t, 2))(0x20C6L, 0x3FBAL), 0x20C6L, 0x3FBAL, 0x20C6L, 0x3FBAL);
                        uint16_t l_1311 = 1UL;
                        int32_t l_1312[4][2];
                        VECTOR(int16_t, 4) l_1313 = (VECTOR(int16_t, 4))(0x6831L, (VECTOR(int16_t, 2))(0x6831L, 0x6C71L), 0x6C71L);
                        VECTOR(int16_t, 2) l_1314 = (VECTOR(int16_t, 2))(0x3DDBL, 0x33B5L);
                        VECTOR(int16_t, 2) l_1315 = (VECTOR(int16_t, 2))(0x4F7CL, 1L);
                        VECTOR(int16_t, 2) l_1316 = (VECTOR(int16_t, 2))(0x5103L, 7L);
                        uint32_t l_1317 = 4294967290UL;
                        uint64_t l_1318 = 18446744073709551615UL;
                        int64_t l_1319[3];
                        uint32_t l_1320 = 0x85A0F1ECL;
                        uint32_t l_1321 = 0x02472F6EL;
                        int32_t l_1322 = 0L;
                        uint8_t l_1323 = 255UL;
                        int16_t l_1324 = 0x455BL;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 4; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1286[i][j][k] = 0xF3L;
                            }
                        }
                        for (i = 0; i < 1; i++)
                            l_1306[i] = 1UL;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1312[i][j] = 0x36831C23L;
                        }
                        for (i = 0; i < 3; i++)
                            l_1319[i] = (-9L);
                        l_1276 ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1275.yxwwywyw)).s25)).lo;
                        l_1275.z &= ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(l_1277.s0356)).zzxzxzywxwwzxwxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(l_1278.s14036711)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1279.s71075415)), 0x1DE4C6A8L, (-1L), (-1L), (-6L), ((VECTOR(int32_t, 4))(0x154D9F65L, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(0x383122A9L, 0L, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(l_1280.yxwyyyzz)), ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(l_1281.xx)), (uint16_t)(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_1282.yyzzzzxx)), ((VECTOR(int16_t, 2))(l_1283.s46)), ((VECTOR(int16_t, 4))(l_1284.zxxy)), 1L, (-3L))).s4, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))((l_1286[0][1][0] = l_1285), 0x77ACL, 0L, 0x7E41L)), ((VECTOR(int16_t, 16))(l_1287.s2162373116737473)).s0232))), ((VECTOR(int16_t, 8))(l_1288.wywwwwzw)), ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))((-8L), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_1289.s3527)).wzxyyzxxxywzzyyy)).s9, 0x1745L, 0x7F0EL)).odd, ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_1290.se8b301b2)).s7063760321007032)), (int16_t)l_1291))).sfc)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(1L, (-1L))), 1L, (-6L))).lo))), ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(1L, 4L, 0x6FF3L, 1L)).zywzywzxxyxxxwxy, ((VECTOR(int16_t, 4))(l_1292.xywy)).yzzyzzyywwwzzyzz, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_1293.s0e34)).xwyxwwxy)).s4630415225636507))).se469, (int16_t)l_1294))).lo))), 0x0B32L)).sc , 65535UL)))).xyyxxxxxyxxxxyyx)).s11)).xxyyyyyy)))))).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_1295.s1114)))).zzyxwwwz)).s60, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xBBB8L, 7UL)).xyyx)).hi))).xxyyyxxyyxxyxxyy, (int32_t)(l_1298 ^= (l_1297 |= l_1296))))).hi)).s10)).yxyy, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1299.s2eae)).xyzxyxzz)).s4365056341351222)))).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-2L), 0x68EFA3E7L)), 5L, 0x744E35ECL)).lo)).yyyyxxxy))).lo))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1300.s17c54ad2cdea3122)).odd)), 0x13CAC5E6L, 0x3CDE7D60L)).s51, ((VECTOR(int32_t, 2))(0x4DC76AC7L, 1L))))), 0L)).z, l_1301, 1L, 0x56ACC12FL)))).odd))))), ((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_1302.se52b)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))((-8L), 0x7E7F7744L)), ((VECTOR(int32_t, 16))(l_1303.zyyyzwxzzyxzzxzz)).seb))).yxxxxxxxyxyxyxxy)).s49))).odd, ((VECTOR(int32_t, 4))(l_1304.s0505)), 1L, 2L)))).sb8)).xyxx)).xxwxwywywxwxzzzz))).s9;
                        l_1324 = (((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))((FAKE_DIVERGE(p_2023->local_0_offset, get_local_id(0), 10) , (l_1305 , (l_1307 = l_1306[0]))), 7L, 0x4831L, 2L)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x40F0L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_1308.s87d165741e7d9368)).s5, ((VECTOR(int16_t, 2))(l_1309.s32)), 0x5992L)).lo)))), 0x19D6L)).odd)), ((VECTOR(int16_t, 2))(l_1310.sa6)), (l_1312[2][1] = (l_1311 , 0x1D6FL)), 8L, 0x01D1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_1313.yzwwyxwyzwzwxxyx)).s57)))).even, 0x5F3AL, (-7L), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_1314.yyyy)), 0x1DEAL, 0x1B9DL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(l_1315.xyxx)).xyywyzzx, ((VECTOR(int16_t, 8))(l_1316.yyxxxxyx))))).even)), l_1317, 0L, 0L, ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((-1L), l_1318, (l_1320 = l_1319[0]), l_1321, 0x01B7L, ((VECTOR(int16_t, 2))(0L)), 1L)).s40)), 0x18F5L, 0x585EL)).hi))), (-7L))), (int16_t)0x295FL))))).s1, 0x13C8L, l_1322, ((VECTOR(int16_t, 2))(0x18F1L)), (-4L))).s448f))).w , l_1323);
                    }
                }
                for (l_1263 = 5; (l_1263 <= 21); l_1263++)
                { /* block id: 585 */
                    int32_t l_1328[5] = {0x4E8E584EL,0x4E8E584EL,0x4E8E584EL,0x4E8E584EL,0x4E8E584EL};
                    int32_t *l_1327 = &l_1328[4];
                    int32_t *l_1329 = &l_1328[4];
                    int8_t l_1330 = 0x4FL;
                    int32_t l_1331[2];
                    int16_t l_1332[9] = {0x79E2L,0x79E2L,0x79E2L,0x79E2L,0x79E2L,0x79E2L,0x79E2L,0x79E2L,0x79E2L};
                    uint32_t l_1333 = 4294967295UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1331[i] = 1L;
                    l_1329 = l_1327;
                    l_1331[0] = l_1330;
                    l_1333 ^= l_1332[1];
                }
                l_1336 = ((l_1334 , 0x58L) , l_1335);
            }
            unsigned int result = 0;
            result += l_1239;
            atomic_add(&p_2023->l_special_values[18], result);
        }
        else
        { /* block id: 592 */
            (1 + 1);
        }
        (*l_1337) = &l_1236;
        for (p_2023->g_964 = 1; (p_2023->g_964 <= 9); p_2023->g_964++)
        { /* block id: 598 */
            uint32_t l_1343[4] = {0x5450A30DL,0x5450A30DL,0x5450A30DL,0x5450A30DL};
            int32_t l_1344 = 0x3D0C41DAL;
            int32_t l_1345 = (-6L);
            int32_t l_1346 = 0x097C4CFAL;
            int32_t l_1347[8][2] = {{0x05A17D7BL,1L},{0x05A17D7BL,1L},{0x05A17D7BL,1L},{0x05A17D7BL,1L},{0x05A17D7BL,1L},{0x05A17D7BL,1L},{0x05A17D7BL,1L},{0x05A17D7BL,1L}};
            int16_t l_1348 = (-1L);
            uint32_t l_1349[10] = {0x4D81922CL,0x4D81922CL,0x4D81922CL,0x4D81922CL,0x4D81922CL,0x4D81922CL,0x4D81922CL,0x4D81922CL,0x4D81922CL,0x4D81922CL};
            int i, j;
            l_1341 &= p_54;
            l_1343[2] |= ((void*)0 != l_1342[0]);
            l_1349[4]++;
            l_1346 = (l_1345 | (((safe_div_func_uint8_t_u_u(0x5DL, (safe_lshift_func_uint8_t_u_s(p_54, ((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(l_1358.zwyzywzyyzwxxwzw)).s4, ((VECTOR(int32_t, 8))(((safe_mul_func_uint16_t_u_u((~(((void*)0 == &l_1234) & 0x0C96AF90479C8831L)), (**p_2023->g_334))) ^ p_2023->g_889.s0), (-9L), 0x6D66204DL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(9L, (((*l_1186) = (((safe_unary_minus_func_int64_t_s(l_1362)) || 0x03L) , (void*)0)) != l_1363), (-1L), (-1L))))), 1L)).s6)) , p_2023->g_149))))) >= l_1349[0]) == p_54));
        }
        l_1383 = (((((*l_1231) = (((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_1364.s50571754)), ((VECTOR(int32_t, 16))(p_2023->g_1365.yyxxxxxyyxyyyxyy)).odd, ((VECTOR(int32_t, 8))(p_51, ((((VECTOR(uint16_t, 2))(l_1366.yw)).hi > ((p_53 == ((p_2023->g_comm_values[p_2023->tid] &= (safe_mod_func_uint32_t_u_u(4294967295UL, 0x87623E84L))) < (((safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(p_52, ((safe_mod_func_uint8_t_u_u(((*l_1379) = p_51), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_1380.s9335f441)))).s0)) <= (safe_rshift_func_uint8_t_u_u((0L & (p_2023->g_894.y >= (**p_2023->g_334))), p_51))))), 0x022A965BL)), p_51)) >= p_51) && p_2023->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2023->tid, 97))]))) < 0x2DBE5B12470E3A8FL)) | p_2023->g_75), 1L, p_55, ((VECTOR(int32_t, 4))(0x272E8AFBL))))))).s5 || p_51)) , p_2023->g_889.s6) || 8UL) == p_53);
    }
    else
    { /* block id: 609 */
        int16_t *l_1388 = &p_2023->g_1002;
        VECTOR(uint16_t, 16) l_1395 = (VECTOR(uint16_t, 16))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0xD170L), 0xD170L), 0xD170L, 9UL, 0xD170L, (VECTOR(uint16_t, 2))(9UL, 0xD170L), (VECTOR(uint16_t, 2))(9UL, 0xD170L), 9UL, 0xD170L, 9UL, 0xD170L);
        uint16_t **l_1396[7][2];
        int32_t l_1397 = 0x36C6316EL;
        VECTOR(uint64_t, 2) l_1429 = (VECTOR(uint64_t, 2))(18446744073709551608UL, 0UL);
        VECTOR(uint64_t, 2) l_1434 = (VECTOR(uint64_t, 2))(0UL, 1UL);
        VECTOR(uint16_t, 16) l_1445 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint16_t, 2))(1UL, 0UL), (VECTOR(uint16_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
        VECTOR(uint16_t, 16) l_1448 = (VECTOR(uint16_t, 16))(0xF8D1L, (VECTOR(uint16_t, 4))(0xF8D1L, (VECTOR(uint16_t, 2))(0xF8D1L, 65535UL), 65535UL), 65535UL, 0xF8D1L, 65535UL, (VECTOR(uint16_t, 2))(0xF8D1L, 65535UL), (VECTOR(uint16_t, 2))(0xF8D1L, 65535UL), 0xF8D1L, 65535UL, 0xF8D1L, 65535UL);
        VECTOR(uint16_t, 4) l_1449 = (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 1UL), 1UL);
        int8_t l_1507 = 1L;
        VECTOR(uint8_t, 2) l_1513 = (VECTOR(uint8_t, 2))(0x1BL, 0xD4L);
        int8_t ***l_1520 = (void*)0;
        int32_t l_1522 = (-1L);
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
                l_1396[i][j] = &p_2023->g_335;
        }
        l_1397 = (+((((safe_unary_minus_func_uint64_t_u((p_2023->g_1139.s0 & p_2023->g_615.s5))) | (p_2023->g_247.s7 = (safe_add_func_int8_t_s_s((p_2023->g_340.s3 = ((l_1387 == ((p_55 || ((((l_1389 = (!(l_1388 == &p_2023->g_1002))) , (safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_uint8_t_u(0x0FL)) >= (safe_add_func_int8_t_s_s((((VECTOR(uint16_t, 2))(l_1395.sa6)).odd <= ((&p_2023->g_88 == (p_51 , (void*)0)) & p_55)), 253UL))), l_1395.sb))) || 0x7031CC0AL) < p_2023->g_480.y)) , l_1396[3][0])) , 0x4BL)), l_1395.sb)))) , 0x5C99754E6A345FD8L) | 1L));
        (*l_1228) = func_62(l_1395.s1, p_2023);
        for (p_2023->g_266 = 0; (p_2023->g_266 >= 34); ++p_2023->g_266)
        { /* block id: 617 */
            int32_t l_1408 = 0x263E84B8L;
            VECTOR(int32_t, 4) l_1422 = (VECTOR(int32_t, 4))(0x523EF2D5L, (VECTOR(int32_t, 2))(0x523EF2D5L, 0x63C8E8D1L), 0x63C8E8D1L);
            uint32_t *l_1425 = (void*)0;
            VECTOR(uint16_t, 8) l_1447 = (VECTOR(uint16_t, 8))(0xFC67L, (VECTOR(uint16_t, 4))(0xFC67L, (VECTOR(uint16_t, 2))(0xFC67L, 0xA2CCL), 0xA2CCL), 0xA2CCL, 0xFC67L, 0xA2CCL);
            int64_t *l_1459 = (void*)0;
            VECTOR(int16_t, 2) l_1491 = (VECTOR(int16_t, 2))(0x3F72L, 0x0559L);
            VECTOR(uint8_t, 4) l_1497 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x27L), 0x27L);
            int8_t **l_1518 = &l_1231;
            int8_t ***l_1517[8][6][5] = {{{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518}},{{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518}},{{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518}},{{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518}},{{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518}},{{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518}},{{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518}},{{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518},{&l_1518,&l_1518,(void*)0,&l_1518,&l_1518}}};
            int i, j, k;
            if (p_51)
            { /* block id: 618 */
                int32_t *l_1400 = &l_1397;
                VECTOR(uint8_t, 16) l_1407 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL, (VECTOR(uint8_t, 2))(0UL, 255UL), (VECTOR(uint8_t, 2))(0UL, 255UL), 0UL, 255UL, 0UL, 255UL);
                uint8_t *l_1431 = &l_1341;
                int32_t l_1439 = 0x00678C88L;
                VECTOR(uint16_t, 2) l_1444 = (VECTOR(uint16_t, 2))(0x5C58L, 0x1E65L);
                VECTOR(int64_t, 2) l_1452 = (VECTOR(int64_t, 2))(5L, (-4L));
                VECTOR(int16_t, 16) l_1465 = (VECTOR(int16_t, 16))(0x1BC0L, (VECTOR(int16_t, 4))(0x1BC0L, (VECTOR(int16_t, 2))(0x1BC0L, 1L), 1L), 1L, 0x1BC0L, 1L, (VECTOR(int16_t, 2))(0x1BC0L, 1L), (VECTOR(int16_t, 2))(0x1BC0L, 1L), 0x1BC0L, 1L, 0x1BC0L, 1L);
                int i;
                (*l_1230) = l_1400;
                l_1400 = (void*)0;
                for (p_2023->g_149 = 25; (p_2023->g_149 == 4); --p_2023->g_149)
                { /* block id: 623 */
                    uint8_t l_1409 = 0xB6L;
                    uint32_t *l_1427 = &l_1198;
                    uint32_t **l_1426 = &l_1427;
                    VECTOR(uint64_t, 4) l_1428 = (VECTOR(uint64_t, 4))(0x35B1FFD7CB64E87FL, (VECTOR(uint64_t, 2))(0x35B1FFD7CB64E87FL, 0x63E4A3652BE03182L), 0x63E4A3652BE03182L);
                    int i;
                    l_1422.z = (safe_rshift_func_int16_t_s_u(((((*p_2023->g_48) = (safe_add_func_uint32_t_u_u((*p_2023->g_48), (l_1408 = (0L <= ((VECTOR(uint8_t, 2))(l_1407.s41)).lo))))) || (l_1409 ^ ((VECTOR(int32_t, 16))(p_2023->g_1410.sb7babcffa1448946)).se)) < (((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 16))(1UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 2))(0xC24F0480B1A14A5FL, 0x3F4BBCA23F354D3CL)).yxyyyyyxyyxyxyxy, ((VECTOR(uint64_t, 2))(0x4D4507CFFDFC3504L, 18446744073709551610UL)).xyyxxyyyyyxyyyyx, ((VECTOR(uint64_t, 2))(0xCE3554245C21210AL, 1UL)).yxyyxxyyxxyyxxyy))).s3bb9)), 18446744073709551615UL, (safe_div_func_int16_t_s_s((GROUP_DIVERGE(0, 1) , (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_u((-5L), p_2023->g_479.s5)))), (l_1422.y , (safe_rshift_func_uint16_t_u_u((l_1425 == ((*l_1426) = l_1425)), FAKE_DIVERGE(p_2023->global_2_offset, get_global_id(2), 10)))))), p_55))), p_52)), ((VECTOR(uint64_t, 2))(0UL)), GROUP_DIVERGE(0, 1), GROUP_DIVERGE(0, 1), 1UL, ((VECTOR(uint64_t, 2))(0UL)), 0x1D810FDBA60233B7L, 18446744073709551615UL)).even))).s1, l_1422.y)) ^ p_2023->g_35.s0) <= 0UL)), 10));
                    (*l_1230) = (void*)0;
                    l_1439 ^= ((65535UL | l_1409) == ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_1428.yw)).xyxxxxxyyyxyxxxx)))).s92, ((VECTOR(uint64_t, 16))(0x2E487F9F8C444984L, 18446744073709551614UL, 6UL, 18446744073709551610UL, ((VECTOR(uint64_t, 4))(l_1429.yxyx)), ((((VECTOR(int64_t, 4))(l_1430.s8f1c)).z , (l_1431 == &l_1341)) , (((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 16))(p_2023->g_1432.zyxzxwxzywzwzxwx)).s0933, ((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(p_2023->g_1433.yw)).yyxyxxyyxxyxyxyx)).se, ((VECTOR(uint64_t, 2))(l_1434.yy)), (0x0A5EFFF0L < ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_1435.wzwz)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(0x22EF6AFCL, (-4L), 0L, 0x69462AACL)).xyzywywy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(3L)) ^ p_2023->g_83.s5), (l_1400 != (void*)0))), ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 2))((-1L))), (-5L), 0x1CFC274CL, ((VECTOR(int32_t, 2))((-1L))), l_1395.sc, ((VECTOR(int32_t, 2))(1L)), 0x09D9ED6BL, 0x6356073CL)).even)), 7L, ((VECTOR(int32_t, 2))(0x3BCDF38DL)), (-3L), l_1408, l_1395.s5, 6L, (-6L))).lo))).s70)).yxxy))).xzzzyzzx, (int32_t)p_55))).s4), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 18446744073709551615UL, p_53, ((VECTOR(uint64_t, 4))(18446744073709551615UL)), ((VECTOR(uint64_t, 4))(0xDD950BBEE9D90766L)))), ((VECTOR(uint64_t, 16))(0UL)), ((VECTOR(uint64_t, 16))(0xB47A710A2F801851L))))).s7f77, ((VECTOR(uint64_t, 4))(0UL))))).w , l_1408)), 0x39BE69A46D020180L, ((VECTOR(uint64_t, 2))(0x91CDF16FCB73794FL)), FAKE_DIVERGE(p_2023->global_1_offset, get_global_id(1), 10), p_53, 0xBE6E69AA36FF1122L, 0UL)).s7a))).xyxx, (uint64_t)p_51))).wxwzzxwy, ((VECTOR(uint64_t, 8))(18446744073709551610UL))))).s1613212270325224)).s9475, ((VECTOR(uint64_t, 4))(18446744073709551609UL))))).x);
                }
                for (p_2023->g_75 = (-25); (p_2023->g_75 > 31); p_2023->g_75 = safe_add_func_int16_t_s_s(p_2023->g_75, 5))
                { /* block id: 633 */
                    int64_t l_1464 = (-9L);
                    if ((+((safe_add_func_int16_t_s_s((l_1400 != l_1400), ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 2))(l_1444.xx)).yyxxyyyyxyxxyyxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 4))(l_1445.s35e5)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xA2A6L, 0UL)), 65531UL, 0UL)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 4))(p_2023->g_1446.s20c5)).lo, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_1447.s27616434)).s0011212435275100)).s6d, ((VECTOR(uint16_t, 16))(l_1448.s8fec7f35a74bf6d5)).s96))).yyyxyxyxyxyxxxyy)).sa986))), 0xB7BBL, 0x9E47L, 1UL, 0x7979L)).s2307312513753222))).sae7e, ((VECTOR(uint16_t, 16))(l_1449.xwxyzxzxyzwwywzy)).sb7db))).x)) , (safe_add_func_uint8_t_u_u(((!((VECTOR(int64_t, 4))(l_1452.yyyy)).w) & p_53), (safe_add_func_uint8_t_u_u(p_51, (((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((void*)0 != l_1459), ((p_51 , (safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(l_1464, ((VECTOR(int16_t, 8))(l_1465.s62c15df0)).s3)), (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x049CB68AL, 0x47078ED6L)).yyxy)).x , (safe_lshift_func_uint8_t_u_s(((0xE1D3BEC6L & 0x029CE7B8L) >= 18446744073709551610UL), 6)))))) , (*p_2023->g_335)))), 1)) | p_2023->g_83.s1) , p_54))))))))
                    { /* block id: 634 */
                        return &p_2023->g_49;
                    }
                    else
                    { /* block id: 636 */
                        if (p_52)
                            break;
                        return &p_2023->g_49;
                    }
                }
            }
            else
            { /* block id: 641 */
                VECTOR(int16_t, 16) l_1489 = (VECTOR(int16_t, 16))(0x363EL, (VECTOR(int16_t, 4))(0x363EL, (VECTOR(int16_t, 2))(0x363EL, 0x456EL), 0x456EL), 0x456EL, 0x363EL, 0x456EL, (VECTOR(int16_t, 2))(0x363EL, 0x456EL), (VECTOR(int16_t, 2))(0x363EL, 0x456EL), 0x363EL, 0x456EL, 0x363EL, 0x456EL);
                int8_t *l_1506 = &p_2023->g_157;
                int64_t *l_1508 = &p_2023->g_1001;
                int i;
                for (p_2023->g_671 = 0; (p_2023->g_671 <= 41); p_2023->g_671 = safe_add_func_uint8_t_u_u(p_2023->g_671, 7))
                { /* block id: 644 */
                    if ((atomic_inc(&p_2023->l_atomic_input[1]) == 1))
                    { /* block id: 646 */
                        uint16_t l_1470 = 65535UL;
                        int32_t l_1471 = (-4L);
                        int8_t l_1472 = (-6L);
                        uint16_t l_1473 = 0x2586L;
                        uint64_t l_1476 = 1UL;
                        uint16_t l_1477 = 1UL;
                        int64_t l_1478 = 3L;
                        int8_t l_1479 = 3L;
                        l_1471 |= l_1470;
                        --l_1473;
                        l_1477 &= (l_1476 = 0x3CAE9360L);
                        l_1479 ^= l_1478;
                        unsigned int result = 0;
                        result += l_1470;
                        result += l_1471;
                        result += l_1472;
                        result += l_1473;
                        result += l_1476;
                        result += l_1477;
                        result += l_1478;
                        result += l_1479;
                        atomic_add(&p_2023->l_special_values[1], result);
                    }
                    else
                    { /* block id: 652 */
                        (1 + 1);
                    }
                }
                if (l_1429.x)
                    continue;
                l_1397 &= (safe_lshift_func_int8_t_s_u((((*l_1388) = (((safe_mul_func_uint8_t_u_u((0L & (p_52 || (safe_unary_minus_func_int32_t_s(p_53)))), p_2023->g_986.z)) != (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-10L), (-1L))), 0x52A3L, ((VECTOR(int16_t, 2))(l_1489.sd1)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_2023->g_1490.s40)))), 0x653EL)).lo, ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(l_1491.xyyy)).xywyyxzzywwywxzz))).s2902))).x, (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0UL, 65535UL)).yxxx)).w, p_55)))), 7))) != ((p_2023->g_986.y != (safe_add_func_int8_t_s_s((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(8L, ((VECTOR(int32_t, 4))(0x2968143AL, 0x6BD7279EL, 0x425CC304L, (-1L))), 0x1AC3002DL, (-1L), (-7L))))).s1 < p_53), ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 2))(p_2023->g_1496.yy)).yyyxyyyyxyxyxxyy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_1497.ywzz)).lo)).yxyyyyxyxxyxxyxy))).s8e, ((VECTOR(uint8_t, 2))(0xC5L, 0x8BL)), ((VECTOR(uint8_t, 2))(8UL, 0xDFL))))).hi))) < ((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((p_2023->g_1109 &= ((!18446744073709551607UL) & ((VECTOR(uint64_t, 2))(p_2023->g_1504.zw)).even)), GROUP_DIVERGE(2, 1))) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x11A0D926L, 0x24027B89L)).xxyyyxxy)).s0), ((((safe_unary_minus_func_int64_t_s(((((l_1506 == (*p_2023->g_397)) | (-1L)) ^ p_55) != l_1507))) > FAKE_DIVERGE(p_2023->group_0_offset, get_group_id(0), 10)) & 0x60L) , p_51))), l_1447.s7)) <= 1L)))) | p_55), 4));
                l_1397 &= ((void*)0 == l_1508);
            }
            (*l_1230) = &l_1397;
            for (l_1397 = 0; (l_1397 == 11); l_1397++)
            { /* block id: 665 */
                int32_t l_1514 = 0x5B799B17L;
                int8_t ****l_1519[8][2][3] = {{{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]},{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]}},{{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]},{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]}},{{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]},{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]}},{{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]},{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]}},{{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]},{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]}},{{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]},{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]}},{{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]},{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]}},{{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]},{&l_1517[5][0][1],&l_1517[7][2][1],&l_1517[1][2][4]}}};
                int i, j, k;
                l_1514 |= (safe_sub_func_uint64_t_u_u((((VECTOR(uint8_t, 4))(l_1513.yyyx)).y || (&l_1397 == l_1425)), FAKE_DIVERGE(p_2023->global_2_offset, get_global_id(2), 10)));
                for (p_2023->g_157 = 0; (p_2023->g_157 != (-19)); p_2023->g_157 = safe_sub_func_int8_t_s_s(p_2023->g_157, 5))
                { /* block id: 669 */
                    if (p_52)
                        break;
                    if (p_53)
                        continue;
                }
                l_1422.w ^= ((l_1520 = l_1517[1][2][4]) == &p_2023->g_397);
                l_1522 = ((l_1521 = (0x22L != (0x4A0327C1L & 0L))) || 18446744073709551608UL);
            }
        }
    }
    for (p_2023->g_157 = (-24); (p_2023->g_157 <= (-9)); p_2023->g_157++)
    { /* block id: 682 */
        volatile uint8_t ***l_1525 = (void*)0;
        volatile uint8_t **l_1527 = &p_2023->g_1023[3][0];
        volatile uint8_t ***l_1526 = &l_1527;
        int32_t *l_1528 = (void*)0;
        (*l_1526) = &p_2023->g_1023[4][1];
        (*l_1230) = l_1528;
    }
    l_1545 ^= (p_52 == (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(5UL, 0xDEDCECA374FC3104L)), 0x0D43CA3A1ADFABD6L, 0x563DA41FCA781638L)).y >= (safe_mul_func_int16_t_s_s(((((((safe_div_func_uint32_t_u_u(((p_55 & p_53) & (safe_sub_func_int32_t_s_s((p_52 , p_54), ((p_2023->g_247.s9 = ((l_1539 == p_2023->g_1541) , (safe_add_func_int16_t_s_s(p_2023->g_1446.s9, (p_2023->g_1446.s7 | l_1544))))) < p_2023->g_893.x)))), 8L)) == p_52) != p_52) || p_54) == 0x6FL) ^ p_54), p_55))), p_55)), p_51)));
    return l_1187;
}


/* ------------------------------------------ */
/* 
 * reads : p_2023->g_158 p_2023->g_205 p_2023->g_340 p_2023->g_307 p_2023->g_321 p_2023->g_335 p_2023->g_92 p_2023->g_894 p_2023->g_48 p_2023->g_49 p_2023->g_942 p_2023->g_613 p_2023->g_616 p_2023->g_157 p_2023->g_334 p_2023->g_964 p_2023->g_15 p_2023->g_266 p_2023->g_128 p_2023->g_1001 p_2023->g_83 p_2023->g_1002 p_2023->g_135 p_2023->g_151 p_2023->g_206 p_2023->g_893 p_2023->g_1017 p_2023->g_323 p_2023->g_247 p_2023->g_1022 p_2023->g_671 p_2023->g_954 p_2023->g_149 p_2023->g_1109
 * writes: p_2023->g_158 p_2023->g_650 p_2023->g_894 p_2023->g_83 p_2023->g_205 p_2023->g_92 p_2023->g_306 p_2023->g_321 p_2023->g_1001 p_2023->g_151 p_2023->g_206 p_2023->g_266 p_2023->g_964 p_2023->g_986 p_2023->g_comm_values p_2023->g_149 p_2023->g_954 p_2023->g_1133 p_2023->g_1109
 */
int8_t  func_58(uint32_t * p_59, uint32_t * p_60, uint64_t  p_61, struct S0 * p_2023)
{ /* block id: 398 */
    uint64_t **l_858 = (void*)0;
    int32_t l_868 = 0x6487B93CL;
    int8_t *l_873 = (void*)0;
    int8_t **l_872 = &l_873;
    int16_t *l_876[3][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    VECTOR(int32_t, 2) l_898 = (VECTOR(int32_t, 2))(0x5D4FB73EL, (-1L));
    uint32_t l_902[2];
    uint16_t ***l_914[9] = {&p_2023->g_334,&p_2023->g_334,&p_2023->g_334,&p_2023->g_334,&p_2023->g_334,&p_2023->g_334,&p_2023->g_334,&p_2023->g_334,&p_2023->g_334};
    VECTOR(uint16_t, 4) l_933 = (VECTOR(uint16_t, 4))(0x2B57L, (VECTOR(uint16_t, 2))(0x2B57L, 0xDD95L), 0xDD95L);
    VECTOR(int64_t, 16) l_968 = (VECTOR(int64_t, 16))(0x481A90E4C84C0E09L, (VECTOR(int64_t, 4))(0x481A90E4C84C0E09L, (VECTOR(int64_t, 2))(0x481A90E4C84C0E09L, 0x0ED94B1992013788L), 0x0ED94B1992013788L), 0x0ED94B1992013788L, 0x481A90E4C84C0E09L, 0x0ED94B1992013788L, (VECTOR(int64_t, 2))(0x481A90E4C84C0E09L, 0x0ED94B1992013788L), (VECTOR(int64_t, 2))(0x481A90E4C84C0E09L, 0x0ED94B1992013788L), 0x481A90E4C84C0E09L, 0x0ED94B1992013788L, 0x481A90E4C84C0E09L, 0x0ED94B1992013788L);
    int32_t **l_970 = &p_2023->g_650[4];
    VECTOR(uint64_t, 2) l_973 = (VECTOR(uint64_t, 2))(1UL, 2UL);
    int32_t *l_980 = (void*)0;
    int8_t l_999 = 0x2EL;
    uint32_t l_1030 = 0x12906571L;
    VECTOR(uint16_t, 16) l_1048 = (VECTOR(uint16_t, 16))(0x72D1L, (VECTOR(uint16_t, 4))(0x72D1L, (VECTOR(uint16_t, 2))(0x72D1L, 0x5422L), 0x5422L), 0x5422L, 0x72D1L, 0x5422L, (VECTOR(uint16_t, 2))(0x72D1L, 0x5422L), (VECTOR(uint16_t, 2))(0x72D1L, 0x5422L), 0x72D1L, 0x5422L, 0x72D1L, 0x5422L);
    uint32_t l_1085 = 0xB7C9DE99L;
    uint32_t *l_1105[10];
    uint32_t **l_1104[10][5] = {{&l_1105[9],&l_1105[0],&l_1105[9],&l_1105[9],&l_1105[0]},{&l_1105[9],&l_1105[0],&l_1105[9],&l_1105[9],&l_1105[0]},{&l_1105[9],&l_1105[0],&l_1105[9],&l_1105[9],&l_1105[0]},{&l_1105[9],&l_1105[0],&l_1105[9],&l_1105[9],&l_1105[0]},{&l_1105[9],&l_1105[0],&l_1105[9],&l_1105[9],&l_1105[0]},{&l_1105[9],&l_1105[0],&l_1105[9],&l_1105[9],&l_1105[0]},{&l_1105[9],&l_1105[0],&l_1105[9],&l_1105[9],&l_1105[0]},{&l_1105[9],&l_1105[0],&l_1105[9],&l_1105[9],&l_1105[0]},{&l_1105[9],&l_1105[0],&l_1105[9],&l_1105[9],&l_1105[0]},{&l_1105[9],&l_1105[0],&l_1105[9],&l_1105[9],&l_1105[0]}};
    int64_t *l_1117 = (void*)0;
    uint32_t l_1119 = 0x0D42892CL;
    VECTOR(uint64_t, 8) l_1151 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 6UL), 6UL), 6UL, 1UL, 6UL);
    int32_t *l_1164 = &l_868;
    int16_t l_1170[2];
    int i, j;
    for (i = 0; i < 2; i++)
        l_902[i] = 0x79F313FCL;
    for (i = 0; i < 10; i++)
        l_1105[i] = &l_1030;
    for (i = 0; i < 2; i++)
        l_1170[i] = 1L;
    for (p_2023->g_158 = 0; (p_2023->g_158 <= 46); p_2023->g_158++)
    { /* block id: 401 */
        uint32_t l_859 = 4294967295UL;
        int8_t *l_860 = (void*)0;
        int8_t *l_861 = (void*)0;
        int8_t *l_862 = (void*)0;
        uint32_t l_865 = 0x0447D739L;
        VECTOR(int16_t, 16) l_869 = (VECTOR(int16_t, 16))(0x00D5L, (VECTOR(int16_t, 4))(0x00D5L, (VECTOR(int16_t, 2))(0x00D5L, 0x3CE0L), 0x3CE0L), 0x3CE0L, 0x00D5L, 0x3CE0L, (VECTOR(int16_t, 2))(0x00D5L, 0x3CE0L), (VECTOR(int16_t, 2))(0x00D5L, 0x3CE0L), 0x00D5L, 0x3CE0L, 0x00D5L, 0x3CE0L);
        uint64_t *l_874 = &p_2023->g_447[2];
        int8_t l_875[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
        int32_t l_888 = (-1L);
        VECTOR(int32_t, 16) l_901 = (VECTOR(int32_t, 16))(0x692A7502L, (VECTOR(int32_t, 4))(0x692A7502L, (VECTOR(int32_t, 2))(0x692A7502L, (-1L)), (-1L)), (-1L), 0x692A7502L, (-1L), (VECTOR(int32_t, 2))(0x692A7502L, (-1L)), (VECTOR(int32_t, 2))(0x692A7502L, (-1L)), 0x692A7502L, (-1L), 0x692A7502L, (-1L));
        VECTOR(int8_t, 8) l_909 = (VECTOR(int8_t, 8))(0x2BL, (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, 1L), 1L), 1L, 0x2BL, 1L);
        int16_t l_919[6] = {0L,1L,0L,0L,1L,0L};
        int32_t **l_945 = &p_2023->g_650[6];
        uint16_t **l_962 = &p_2023->g_335;
        VECTOR(int16_t, 8) l_988 = (VECTOR(int16_t, 8))(0x12D5L, (VECTOR(int16_t, 4))(0x12D5L, (VECTOR(int16_t, 2))(0x12D5L, 0L), 0L), 0L, 0x12D5L, 0L);
        VECTOR(int16_t, 8) l_1016 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x19C9L), 0x19C9L), 0x19C9L, 1L, 0x19C9L);
        int32_t **l_1018 = &p_2023->g_650[6];
        int32_t *l_1019 = &l_868;
        int32_t *l_1020 = &l_868;
        VECTOR(int8_t, 8) l_1021 = (VECTOR(int8_t, 8))(0x0FL, (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, 0x68L), 0x68L), 0x68L, 0x0FL, 0x68L);
        int32_t l_1053 = 0x661B8DD6L;
        VECTOR(int16_t, 8) l_1103 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        uint32_t **l_1106 = &l_1105[0];
        VECTOR(uint16_t, 16) l_1138 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x70EDL), 0x70EDL), 0x70EDL, 0UL, 0x70EDL, (VECTOR(uint16_t, 2))(0UL, 0x70EDL), (VECTOR(uint16_t, 2))(0UL, 0x70EDL), 0UL, 0x70EDL, 0UL, 0x70EDL);
        VECTOR(uint16_t, 4) l_1141 = (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0x02D6L), 0x02D6L);
        uint32_t *l_1152 = &l_1119;
        uint64_t l_1161 = 0xF727ECC57D6116F0L;
        int i;
        if ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x601F4D7FL, 0x7CE5DDC5L, 0x1EC0A831L, 0x3513908AL, (safe_lshift_func_uint8_t_u_s((p_2023->g_157 , 248UL), (((safe_rshift_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(p_61, (safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((l_858 != (void*)0), (p_2023->g_340.s4 = l_859))), ((((safe_div_func_uint32_t_u_u(((*p_2023->g_48) = ((l_865 != (((safe_mod_func_int16_t_s_s(l_868, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_869.s660bb7e0)))).s7306732251244051)).s4a19, (int16_t)((safe_mod_func_uint64_t_u_u(((((l_872 == &l_873) , (void*)0) != p_2023->g_194) < p_61), GROUP_DIVERGE(0, 1))) || p_61)))).z)) , (void*)0) == l_874)) ^ l_875[2])), p_2023->g_480.y)) , (void*)0) != l_876[2][3]) <= 0x1ABD9222A6F48998L))))), p_61)), p_61)) > p_2023->g_615.s0) , p_61))), 0x27E54189L, 0x03CCE34AL, 1L)))).s4 , l_875[2]))
        { /* block id: 404 */
            int32_t *l_877 = &p_2023->g_205;
            int32_t **l_878 = &p_2023->g_650[6];
            VECTOR(uint16_t, 2) l_885 = (VECTOR(uint16_t, 2))(0x0D64L, 0xDA53L);
            int64_t *l_892 = (void*)0;
            VECTOR(int16_t, 16) l_895 = (VECTOR(int16_t, 16))(0x7DB0L, (VECTOR(int16_t, 4))(0x7DB0L, (VECTOR(int16_t, 2))(0x7DB0L, 0x41BCL), 0x41BCL), 0x41BCL, 0x7DB0L, 0x41BCL, (VECTOR(int16_t, 2))(0x7DB0L, 0x41BCL), (VECTOR(int16_t, 2))(0x7DB0L, 0x41BCL), 0x7DB0L, 0x41BCL, 0x7DB0L, 0x41BCL);
            VECTOR(int32_t, 16) l_899 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x14B8C0C6L), 0x14B8C0C6L), 0x14B8C0C6L, (-1L), 0x14B8C0C6L, (VECTOR(int32_t, 2))((-1L), 0x14B8C0C6L), (VECTOR(int32_t, 2))((-1L), 0x14B8C0C6L), (-1L), 0x14B8C0C6L, (-1L), 0x14B8C0C6L);
            int8_t ***l_900 = &l_872;
            int32_t *l_903 = &l_868;
            int i;
            (*l_878) = l_877;
            (*l_903) ^= (((*l_877) = (safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s((((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_885.xyxxyyxy)).lo)).yxwyzwzzxzwwxyyy)).s1 , (((safe_sub_func_int8_t_s_s((l_888 = (*l_877)), (GROUP_DIVERGE(0, 1) >= (((VECTOR(uint16_t, 16))(p_2023->g_889.s6637247145172740)).s7 == ((safe_rshift_func_int16_t_s_u((p_2023->g_83.s2 = (p_61 > ((((l_892 == l_874) == ((((VECTOR(int8_t, 2))(p_2023->g_893.yy)).hi >= (l_901.s9 = (((p_2023->g_894.y = (0UL ^ ((VECTOR(int16_t, 2))(p_2023->g_894.xx)).even)) >= ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 2))(l_895.sfe)).xxxyxxyxyxxxyyxy, (int16_t)((VECTOR(int16_t, 2))(0x050DL, (-1L))).lo, (int16_t)(p_61 < (-9L))))).s31)).odd) < (safe_div_func_uint32_t_u_u(4294967295UL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 4))(0x652C668BL, ((VECTOR(int32_t, 2))(l_898.xx)), 0x3D3F71D4L)), 0x65D9EA03L, ((VECTOR(int32_t, 4))(0x22B19913L, (-5L), 0x3412FDD6L, (-1L))), 9L, ((VECTOR(int32_t, 2))(l_899.sf5)), (((((((void*)0 != l_900) & (*p_2023->g_48)) >= p_2023->g_889.s2) | p_61) ^ (*p_2023->g_48)) && l_865), 0x1A71289EL, 1L)).s75)).yyxxxxxy)).s3))))) || l_898.y)) != GROUP_DIVERGE(2, 1)) > GROUP_DIVERGE(1, 1)))), 6)) == p_2023->g_340.s5))))) ^ p_61) < p_61)) , l_902[1]) && l_898.y), p_61)), l_875[7])), l_869.s5))) & 0UL);
        }
        else
        { /* block id: 412 */
            int32_t *l_906 = &l_888;
            VECTOR(uint16_t, 4) l_915 = (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0x8107L), 0x8107L);
            VECTOR(uint64_t, 16) l_916 = (VECTOR(uint64_t, 16))(18446744073709551607UL, (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 1UL), 1UL), 1UL, 18446744073709551607UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551607UL, 1UL), 18446744073709551607UL, 1UL, 18446744073709551607UL, 1UL);
            VECTOR(uint8_t, 2) l_987 = (VECTOR(uint8_t, 2))(0x4EL, 255UL);
            VECTOR(int16_t, 16) l_989 = (VECTOR(int16_t, 16))(0x6BF7L, (VECTOR(int16_t, 4))(0x6BF7L, (VECTOR(int16_t, 2))(0x6BF7L, 3L), 3L), 3L, 0x6BF7L, 3L, (VECTOR(int16_t, 2))(0x6BF7L, 3L), (VECTOR(int16_t, 2))(0x6BF7L, 3L), 0x6BF7L, 3L, 0x6BF7L, 3L);
            int32_t **l_996 = &l_906;
            int32_t *l_997 = (void*)0;
            int32_t *l_998 = &p_2023->g_205;
            int64_t *l_1000 = &p_2023->g_1001;
            uint8_t *l_1004[6][7] = {{(void*)0,&p_2023->g_592,&p_2023->g_592,(void*)0,(void*)0,&p_2023->g_592,&p_2023->g_592},{(void*)0,&p_2023->g_592,&p_2023->g_592,(void*)0,(void*)0,&p_2023->g_592,&p_2023->g_592},{(void*)0,&p_2023->g_592,&p_2023->g_592,(void*)0,(void*)0,&p_2023->g_592,&p_2023->g_592},{(void*)0,&p_2023->g_592,&p_2023->g_592,(void*)0,(void*)0,&p_2023->g_592,&p_2023->g_592},{(void*)0,&p_2023->g_592,&p_2023->g_592,(void*)0,(void*)0,&p_2023->g_592,&p_2023->g_592},{(void*)0,&p_2023->g_592,&p_2023->g_592,(void*)0,(void*)0,&p_2023->g_592,&p_2023->g_592}};
            uint8_t **l_1003 = &l_1004[5][3];
            int i, j;
            (*l_906) ^= (safe_mul_func_int16_t_s_s(0x308DL, 0xBF15L));
            if (((VECTOR(int32_t, 8))((safe_div_func_int32_t_s_s(((*l_906) ^= p_61), ((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0L, ((*p_2023->g_335) > p_61), 0x18L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_909.s07637321)).hi)), ((VECTOR(int8_t, 4))((-1L), ((p_2023->g_306 ^= (l_901.se ^= (((*l_874) = (((safe_sub_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((((void*)0 == l_914[6]) > ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_915.wyzy)).zxyxxwyw)).even)).lo)).even), ((**p_2023->g_334) = ((VECTOR(uint16_t, 2))(65529UL, 1UL)).lo))) , (l_898.x = ((VECTOR(uint64_t, 8))(l_916.s53b5935b)).s2)) < 0x207F03E0E0DF6031L), p_2023->g_88)) , l_902[0]) , ((safe_add_func_uint64_t_u_u(p_2023->g_4, l_919[3])) , 0xF26953E1030757BFL))) > 1UL))) == p_61), 0L, 5L)), ((VECTOR(int8_t, 2))(0x62L)), 0x2AL, 0x71L, (-5L))).s1c)))).yxxyyxxy, ((VECTOR(int8_t, 8))(0x30L))))).s41)).hi , GROUP_DIVERGE(1, 1)) , l_859))), l_869.s6, p_61, ((VECTOR(int32_t, 4))(9L)), (-9L))).s3)
            { /* block id: 420 */
                uint32_t l_928 = 1UL;
                int i, j;
                for (l_859 = 9; (l_859 >= 3); l_859--)
                { /* block id: 423 */
                    uint8_t l_935 = 246UL;
                    l_901.s6 ^= ((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((((l_928 = p_2023->g_307) >= (safe_sub_func_int64_t_s_s((*l_906), (safe_div_func_int16_t_s_s(p_2023->g_321.x, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(0xC997L, 4UL)).xxyy, ((VECTOR(uint16_t, 2))(l_933.yw)).yxyy))).w))))) == 0x7E3BE3F5L) && ((((safe_unary_minus_func_uint8_t_u((0L > l_935))) || (*p_2023->g_335)) == p_2023->g_894.x) && (((VECTOR(uint64_t, 4))(18446744073709551615UL, 0xE005DFB6C73D3B1BL, 18446744073709551615UL, 2UL)).x , p_2023->g_205))), 1)), 0x5FL)), 1UL)) < 4294967295UL);
                    (*l_906) = p_61;
                    (*l_906) = (safe_unary_minus_func_int8_t_s(0x3FL));
                }
                if (p_61)
                    break;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_2023->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 97)), permutations[(safe_mod_func_uint32_t_u_u(((*p_2023->g_48) && (l_928 > (safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_int32_t_s(((((void*)0 == &p_2023->g_151) <= ((GROUP_DIVERGE(2, 1) , &l_906) != ((p_61 > (safe_sub_func_uint8_t_u_u((+(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),uint64_t,((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_2023->g_942.s42)), 1UL, 18446744073709551615UL)))).yxzwxyxzwyzyywwy)), (uint64_t)0xBA77C51AB841884EL, (uint64_t)(l_898.x , (safe_rshift_func_uint8_t_u_u(p_2023->g_613.s7, 3)))))).s7 , GROUP_DIVERGE(1, 1))), 0xE3L))) , l_945))) != p_2023->g_616.y))) | p_2023->g_157), 8)))), 10))][(safe_mod_func_uint32_t_u_u(p_2023->tid, 97))]));
            }
            else
            { /* block id: 433 */
                uint32_t *l_955 = (void*)0;
                uint32_t *l_956 = &l_865;
                uint16_t **l_961[8] = {&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,&p_2023->g_335};
                int32_t l_963[9][7][4] = {{{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL}},{{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL}},{{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL}},{{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL}},{{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL}},{{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL}},{{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL}},{{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL}},{{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL},{0x55AE1BFCL,(-1L),(-1L),0x0DCF4B7AL}}};
                VECTOR(int64_t, 16) l_969 = (VECTOR(int64_t, 16))(0x42A69F4570174E17L, (VECTOR(int64_t, 4))(0x42A69F4570174E17L, (VECTOR(int64_t, 2))(0x42A69F4570174E17L, 0L), 0L), 0L, 0x42A69F4570174E17L, 0L, (VECTOR(int64_t, 2))(0x42A69F4570174E17L, 0L), (VECTOR(int64_t, 2))(0x42A69F4570174E17L, 0L), 0x42A69F4570174E17L, 0L, 0x42A69F4570174E17L, 0L);
                int32_t *l_974 = &p_2023->g_954;
                int8_t *l_976 = (void*)0;
                int8_t *l_977 = (void*)0;
                int8_t *l_978 = (void*)0;
                int8_t *l_979 = &p_2023->g_157;
                int32_t **l_981 = &l_906;
                int i, j, k;
                (*l_906) |= ((safe_sub_func_int64_t_s_s((0x6D0D4AE1L ^ (((safe_lshift_func_uint16_t_u_u((((((l_898.y &= (p_2023->g_321.x = (((p_2023->g_306 = (safe_sub_func_int32_t_s_s(((*p_60) == (safe_sub_func_uint32_t_u_u(((*l_956)--), (((safe_div_func_int64_t_s_s((l_961[3] != l_962), 0x1EFD14312258C0E1L)) == 0xA2C55C89L) && (((**p_2023->g_334) = (p_2023->g_321.y , FAKE_DIVERGE(p_2023->local_0_offset, get_local_id(0), 10))) > p_61))))), l_963[7][4][0]))) , 0x16L) || p_2023->g_964))) || 65535UL) != 0x39084B3E706B8D04L) || l_868) > (-3L)), p_61)) , (void*)0) == &p_2023->g_307)), (-9L))) && p_2023->g_15.w);
                (*l_906) ^= ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x75423D95L, 0L, ((VECTOR(int32_t, 2))(0L, 0L)), ((VECTOR(int32_t, 2))(0x0A48A8EDL, 0x3F460AA2L)), 4L, 0L)).s4077510164111713)).s2 && (safe_mod_func_int64_t_s_s((safe_unary_minus_func_int16_t_s((((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 2))(0x540FF88F6A56D0A9L, 0x326028E3764DC78DL)), ((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(l_968.sf0)).xyxxxyxxyxyxxyxy, ((VECTOR(int64_t, 8))(l_969.s82c36789)).s4007171723426673, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 4))((l_970 == ((((safe_lshift_func_int16_t_s_s((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_973.yy)), 2UL, 0x7841823A3BAA17A4L)), ((VECTOR(uint64_t, 2))(0x119EB54D90286EB8L, 0xBE35AD5085F47C33L)).yxxx))).xywyxwwxxzyxywwy, ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 16))((l_963[3][3][3] != (p_59 != (((*l_974) = p_2023->g_307) , &l_868))), p_2023->g_88, (((((*p_2023->g_335) = (p_61 && (+((VECTOR(uint8_t, 8))(p_2023->g_975.s03010100)).s0))) > (&p_2023->g_146 != (((*l_979) &= 0x5CL) , l_980))) , (void*)0) == p_2023->g_194), ((VECTOR(uint64_t, 4))(0x940D9DAE303549CEL)), ((VECTOR(uint64_t, 4))(0UL)), 0x5286F606B065587DL, ((VECTOR(uint64_t, 4))(18446744073709551615UL)))).s0a, ((VECTOR(uint64_t, 2))(0UL)), ((VECTOR(uint64_t, 2))(0x6897F43E24F97399L))))).xxyyyyxxxyyyxyxx))).sf4c8)).y || l_969.s2), p_2023->g_964)) , 0x13L) , p_61) , l_981)), ((VECTOR(int32_t, 2))(0L)), 0x45230AB9L)).hi, ((VECTOR(uint32_t, 2))(0x9C95CA1CL))))).yxxyyyyx)).s0762237534466726))).s1c))).lo > p_61))), p_2023->g_266))) || 0x1D29D186L);
            }
            (*l_998) = (p_61 | ((l_898.y &= (((((safe_rshift_func_uint16_t_u_u(0UL, ((safe_div_func_int16_t_s_s(p_2023->g_128.y, ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(7UL, ((VECTOR(uint8_t, 2))(p_2023->g_986.xx)), 255UL)).wxywzwyxxxwzxyxz, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_987.xx)))), 0x05L, 0xEAL)))))).even)).xyyyxxyyxyxxxyxx))).s8)) == (((((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(l_988.s7571)), ((VECTOR(int16_t, 2))(l_989.s59)).yxyy))).w , ((*l_1003) = func_106(p_61, ((*p_2023->g_48) != (*p_2023->g_48)), &p_2023->g_88, (p_61 >= (((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((((*l_1000) &= ((((~FAKE_DIVERGE(p_2023->local_0_offset, get_local_id(0), 10)) || (((*l_998) ^= (((*l_996) = p_60) != l_997)) < l_999)) || 0x53L) ^ p_61)) , 0UL) < 1L), p_61)), 0x0A8DL)), p_61)) < p_2023->g_83.s5) , p_2023->g_1002)), p_2023))) != &p_2023->g_592) == 0x57C1L)))) , (void*)0) == &l_962) < 1L) == 0x5D463C8D0B469F2EL)) , (*p_2023->g_48)));
        }
        l_888 = ((*l_1020) = (p_61 | ((*p_2023->g_48) != ((((p_61 , &p_2023->g_398) == ((((p_61 > (safe_unary_minus_func_uint8_t_u((p_2023->g_893.x >= (+((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s((~p_2023->g_893.y), ((l_1019 = func_95((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_61, 8)), 3)), (safe_mul_func_int16_t_s_s(((((VECTOR(int16_t, 16))(5L, ((VECTOR(int16_t, 2))(l_1016.s21)), 0x55B1L, 0x7BEDL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_2023->g_1017.yyyxyxxxxyxxxxyx)).s358b)).wzxyzzxzzyyzzwyy)).s81)).yyyx)), 1L, p_2023->g_206, 0x62F2L, (-10L), (-8L), 0x374EL, 0x5538L)).s1 ^ p_61) <= p_2023->g_1017.y), p_61)), p_2023)) != l_1020))) && p_2023->g_247.sa), p_61)) < 0x4AD8L)))))) != (*l_1020)) && p_61) , (void*)0)) >= p_61) , 0x1CB6D552L))));
        l_868 &= ((l_1030 = ((p_61 & ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_1021.s2473)).hi)).hi) , ((void*)0 == p_2023->g_1022))) <= 0xDB71733AL);
        for (p_2023->g_206 = 0; (p_2023->g_206 >= 7); p_2023->g_206 = safe_add_func_uint16_t_u_u(p_2023->g_206, 4))
        { /* block id: 459 */
            VECTOR(int32_t, 4) l_1033 = (VECTOR(int32_t, 4))(0x17A2A59FL, (VECTOR(int32_t, 2))(0x17A2A59FL, 1L), 1L);
            VECTOR(int32_t, 4) l_1034 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 2L), 2L);
            uint16_t **l_1044[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint16_t **l_1045[7][3][9] = {{{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0}},{{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0}},{{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0}},{{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0}},{{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0}},{{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0}},{{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0},{&p_2023->g_335,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,&p_2023->g_335,(void*)0,&p_2023->g_335,(void*)0}}};
            int8_t **l_1062 = (void*)0;
            VECTOR(uint16_t, 2) l_1093 = (VECTOR(uint16_t, 2))(0UL, 0UL);
            int64_t *l_1118 = (void*)0;
            int i, j, k;
            if (((VECTOR(int32_t, 16))(p_61, 0x0FE677D1L, ((VECTOR(int32_t, 8))(l_1033.ywywxwxz)), 0x51BAAAC4L, ((VECTOR(int32_t, 4))(l_1034.wwwy)), (-9L))).sd)
            { /* block id: 460 */
                uint16_t l_1037 = 1UL;
                VECTOR(uint64_t, 16) l_1065 = (VECTOR(uint64_t, 16))(0xBF8D4E2F225294A8L, (VECTOR(uint64_t, 4))(0xBF8D4E2F225294A8L, (VECTOR(uint64_t, 2))(0xBF8D4E2F225294A8L, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0xBF8D4E2F225294A8L, 18446744073709551606UL, (VECTOR(uint64_t, 2))(0xBF8D4E2F225294A8L, 18446744073709551606UL), (VECTOR(uint64_t, 2))(0xBF8D4E2F225294A8L, 18446744073709551606UL), 0xBF8D4E2F225294A8L, 18446744073709551606UL, 0xBF8D4E2F225294A8L, 18446744073709551606UL);
                VECTOR(uint32_t, 8) l_1068 = (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0x02F6AD90L), 0x02F6AD90L), 0x02F6AD90L, 4294967294UL, 0x02F6AD90L);
                int32_t **l_1080 = &l_980;
                int16_t *l_1090 = (void*)0;
                uint8_t l_1099[9] = {0x61L,0x61L,0x61L,0x61L,0x61L,0x61L,0x61L,0x61L,0x61L};
                int8_t l_1102[5];
                int32_t l_1110 = (-9L);
                int32_t l_1111[7];
                int i;
                for (i = 0; i < 5; i++)
                    l_1102[i] = (-10L);
                for (i = 0; i < 7; i++)
                    l_1111[i] = 9L;
                for (p_2023->g_964 = 0; (p_2023->g_964 < 56); p_2023->g_964 = safe_add_func_int64_t_s_s(p_2023->g_964, 6))
                { /* block id: 463 */
                    VECTOR(int64_t, 8) l_1038 = (VECTOR(int64_t, 8))(0x70CBC21D72232877L, (VECTOR(int64_t, 4))(0x70CBC21D72232877L, (VECTOR(int64_t, 2))(0x70CBC21D72232877L, 6L), 6L), 6L, 0x70CBC21D72232877L, 6L);
                    uint16_t **l_1043 = &p_2023->g_335;
                    int8_t ***l_1063 = &l_872;
                    int32_t l_1064 = 0x3C6E411FL;
                    uint8_t *l_1079 = (void*)0;
                    int16_t *l_1088 = (void*)0;
                    VECTOR(uint16_t, 8) l_1091 = (VECTOR(uint16_t, 8))(0xB99EL, (VECTOR(uint16_t, 4))(0xB99EL, (VECTOR(uint16_t, 2))(0xB99EL, 0x6955L), 0x6955L), 0x6955L, 0xB99EL, 0x6955L);
                    VECTOR(uint16_t, 4) l_1092 = (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0xA0D7L), 0xA0D7L);
                    int32_t *l_1107 = &p_2023->g_149;
                    int32_t *l_1108[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    uint8_t l_1112[2][7] = {{255UL,0x12L,255UL,255UL,0x12L,255UL,255UL},{255UL,0x12L,255UL,255UL,0x12L,255UL,255UL}};
                    int i, j;
                    (*l_1020) = (l_1037 > ((!((VECTOR(int64_t, 4))(l_1038.s6560)).x) & (safe_mod_func_int32_t_s_s((((safe_add_func_int8_t_s_s(p_61, l_1037)) && GROUP_DIVERGE(0, 1)) >= (((l_1045[5][0][1] = (l_1044[0] = l_1043)) != ((p_61 && (((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(l_1048.sbc7183157d824566)).s3, (safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_2023->global_0_offset, get_global_id(0), 10), (safe_lshift_func_uint16_t_u_s((6L & (*p_2023->g_48)), ((p_61 || l_1053) , (-3L)))))))) > 0xDB55L) <= p_61)) , (void*)0)) >= GROUP_DIVERGE(2, 1))), GROUP_DIVERGE(2, 1)))));
                    if (((*l_1020) = (((-2L) >= (+(p_2023->g_986.w = 0UL))) , (safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(2L, (l_1033.z = (((safe_rshift_func_int16_t_s_u((((*l_1063) = l_1062) == (l_1064 , (void*)0)), 7)) && ((VECTOR(uint64_t, 2))(l_1065.s91)).odd) > (safe_div_func_int16_t_s_s(((((((VECTOR(uint32_t, 2))(l_1068.s72)).hi , 0L) > (l_1033.x < (((*p_2023->g_335) = ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((l_1034.z |= (safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(p_61, l_1033.w)) != 8L), p_61)), l_1033.y))), p_2023->g_671)), l_1038.s7)) != p_61)) && l_1038.s3))) | 0xD8E48ABBL) & 0L), l_1065.se)))))) ^ p_61), GROUP_DIVERGE(2, 1))) < 0L), p_61)))))
                    { /* block id: 473 */
                        return l_1033.x;
                    }
                    else
                    { /* block id: 475 */
                        int32_t ***l_1081 = (void*)0;
                        int32_t **l_1082 = &l_980;
                        int32_t *l_1083 = (void*)0;
                        int32_t *l_1084[7];
                        int16_t **l_1089[5][7] = {{&l_876[2][3],(void*)0,&l_876[2][3],&l_876[2][3],(void*)0,&l_876[2][3],&l_876[2][3]},{&l_876[2][3],(void*)0,&l_876[2][3],&l_876[2][3],(void*)0,&l_876[2][3],&l_876[2][3]},{&l_876[2][3],(void*)0,&l_876[2][3],&l_876[2][3],(void*)0,&l_876[2][3],&l_876[2][3]},{&l_876[2][3],(void*)0,&l_876[2][3],&l_876[2][3],(void*)0,&l_876[2][3],&l_876[2][3]},{&l_876[2][3],(void*)0,&l_876[2][3],&l_876[2][3],(void*)0,&l_876[2][3],&l_876[2][3]}};
                        int i, j;
                        for (i = 0; i < 7; i++)
                            l_1084[i] = &l_888;
                        l_1082 = l_1080;
                        l_1085 |= (*l_1020);
                        (*l_1020) = (((safe_lshift_func_int16_t_s_u((p_61 >= (&p_2023->g_1002 != (l_1090 = l_1088))), 5)) != ((p_2023->g_comm_values[p_2023->tid] = ((((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 16))(l_1034.w, 0x0A16L, 0xB40FL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 2))(l_1091.s40)), ((VECTOR(uint16_t, 2))(l_1092.yz))))), 0UL, 0xDE05L, l_1091.s0, ((VECTOR(uint16_t, 2))(l_1093.xx)), 0xA796L)).even)), (safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((safe_unary_minus_func_int64_t_s(p_2023->g_205)) , p_61), p_61)), 1UL)), (**p_2023->g_334), 65534UL, 0UL, ((VECTOR(uint16_t, 4))(0x4C80L)), 0xA2F9L)).s5a02))).xzyzywxz)), 1UL, 65529UL, 7UL, p_61, 0x2049L, ((VECTOR(uint16_t, 2))(0xA906L)), 0UL)).even, ((VECTOR(uint16_t, 8))(65532UL))))).s5377721275606652, ((VECTOR(uint16_t, 16))(0x4563L))))).lo, (uint16_t)0UL, (uint16_t)65535UL))).s1 != 0x0496L) , p_61)) || l_1099[2])) == p_61);
                        (*l_970) = func_95(p_61, (safe_div_func_int64_t_s_s(l_1102[3], ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-1L), 6L)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_1103.s1171501667054142)).s1c)))), (GROUP_DIVERGE(1, 1) < 0L), ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0xCC46E4A1L, 0xD8EDA4ECL)))).xyxxxxxy)).s7 && (l_1104[7][3] != (((l_1038.s1 , l_1064) <= p_61) , (p_2023->g_83.s2 , l_1106)))) > p_2023->g_83.s1), 0x78C3L, 0x598DL)).odd, ((VECTOR(int16_t, 4))(3L))))), l_1037, 0L, ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 4))(0x2FE6L)), 1L, 0x6187L)).s91, ((VECTOR(uint16_t, 2))(1UL))))).yxxyyxyyxyyxxyxy)).sf , l_1034.w) || 0xEBL))), p_2023);
                    }
                    ++l_1112[1][5];
                    (*l_1107) ^= (safe_div_func_int8_t_s_s(p_2023->g_954, 0x08L));
                }
                if (p_61)
                    break;
                l_1119 = ((l_1117 = l_874) == l_1118);
            }
            else
            { /* block id: 489 */
                VECTOR(int8_t, 16) l_1155 = (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x44L), 0x44L), 0x44L, (-10L), 0x44L, (VECTOR(int8_t, 2))((-10L), 0x44L), (VECTOR(int8_t, 2))((-10L), 0x44L), (-10L), 0x44L, (-10L), 0x44L);
                int i;
                for (p_2023->g_954 = 0; (p_2023->g_954 >= 28); p_2023->g_954 = safe_add_func_uint32_t_u_u(p_2023->g_954, 1))
                { /* block id: 492 */
                    uint64_t l_1130 = 0xE882A847333F9FAFL;
                    uint64_t *l_1158 = (void*)0;
                    uint64_t *l_1159 = &p_2023->g_266;
                    int32_t l_1160 = 0x520F8181L;
                    for (l_1053 = 0; (l_1053 <= (-21)); l_1053 = safe_sub_func_uint64_t_u_u(l_1053, 9))
                    { /* block id: 495 */
                        int32_t *l_1124 = &p_2023->g_205;
                        int32_t l_1125 = 0x6E7D00D6L;
                        int32_t *l_1126 = (void*)0;
                        int32_t *l_1127 = (void*)0;
                        int32_t *l_1128 = &p_2023->g_149;
                        int32_t *l_1129[6][7] = {{&p_2023->g_205,(void*)0,(void*)0,&p_2023->g_205,&p_2023->g_205,(void*)0,(void*)0},{&p_2023->g_205,(void*)0,(void*)0,&p_2023->g_205,&p_2023->g_205,(void*)0,(void*)0},{&p_2023->g_205,(void*)0,(void*)0,&p_2023->g_205,&p_2023->g_205,(void*)0,(void*)0},{&p_2023->g_205,(void*)0,(void*)0,&p_2023->g_205,&p_2023->g_205,(void*)0,(void*)0},{&p_2023->g_205,(void*)0,(void*)0,&p_2023->g_205,&p_2023->g_205,(void*)0,(void*)0},{&p_2023->g_205,(void*)0,(void*)0,&p_2023->g_205,&p_2023->g_205,(void*)0,(void*)0}};
                        int i, j;
                        (*l_1018) = p_59;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_2023->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 97)), permutations[(safe_mod_func_uint32_t_u_u((*p_2023->g_48), 10))][(safe_mod_func_uint32_t_u_u(p_2023->tid, 97))]));
                        if (p_61)
                            continue;
                        --l_1130;
                    }
                    p_2023->g_1133 = ((*l_970) = &p_2023->g_149);
                    l_1160 &= ((*l_1020) ^= (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(0x9E7BL, ((VECTOR(uint16_t, 8))((((*p_2023->g_335) = ((&p_2023->g_136 == &p_2023->g_1133) , GROUP_DIVERGE(0, 1))) <= ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_1138.sd216b78b)).s4467336153467205)).s9), ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_2023->g_1139.s04)).xyxyyyxy)))).s33, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_2023->g_1140.s6716567370767507)).s3f1c)), ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_1141.wzyz)).odd)), 0xB8F2L, 0UL)).hi, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))((safe_unary_minus_func_int16_t_s((safe_mod_func_uint64_t_u_u((p_61 != (safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((*l_874) = ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_1151.s1752)).xyyzzxxz)).s5), ((p_59 != l_1152) < 0UL))), ((((*l_1159) = ((safe_mul_func_int16_t_s_s((((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(l_1155.s0173a9d8ffba3151)).odd, ((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((safe_sub_func_int8_t_s_s(((p_61 < (p_2023->g_67.s5 = (-7L))) | 4UL), p_2023->g_83.s6)), (-1L), 0x30L, (-1L))).xzxyxxwwwzzxzxxw)).s16, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0x3CL))))), (-9L), ((VECTOR(int8_t, 2))(0x36L)), p_61, 1L, 0x5FL, 0x03L, p_2023->g_146, ((VECTOR(int8_t, 4))(0x59L)), 5L, 1L)))))), ((VECTOR(int8_t, 16))(0x4EL))))).hi))).s0 ^ 0x6FL), p_61)) , p_2023->g_479.s1)) > FAKE_DIVERGE(p_2023->global_1_offset, get_global_id(1), 10)) < p_61))) & (-10L)), p_61))), l_1130)))), l_1130, 0xCD8DL, 0xCC18L, 0x20B6L, ((VECTOR(uint16_t, 2))(7UL)), ((VECTOR(uint16_t, 2))(0x8BF3L)), ((VECTOR(uint16_t, 4))(0x6AF0L)), 6UL, 0xF405L, 7UL)).lo)).s26))), ((VECTOR(uint16_t, 2))(0x0DCBL)), 65532UL, 0x09B4L, 0xF40CL, ((VECTOR(uint16_t, 2))(0xDD24L)), ((VECTOR(uint16_t, 2))(0x7E89L)), 1UL)).s99)), 0x6920L, 0x6DBFL)).xwxxzwxy))).s7726425443501744)).sdf))), 65535UL, 1UL, ((VECTOR(uint16_t, 2))(0UL)), 0xD5ABL)).s4)), p_61)));
                }
            }
            if (l_1161)
                break;
        }
    }
    (*l_1164) |= ((safe_lshift_func_uint16_t_u_u(p_61, 9)) && l_1151.s1);
    for (p_2023->g_1109 = 0; (p_2023->g_1109 == (-29)); p_2023->g_1109 = safe_sub_func_uint8_t_u_u(p_2023->g_1109, 4))
    { /* block id: 519 */
        int32_t **l_1167 = (void*)0;
        int32_t **l_1168[5][4] = {{&l_1164,&p_2023->g_1133,&l_1164,&l_1164},{&l_1164,&p_2023->g_1133,&l_1164,&l_1164},{&l_1164,&p_2023->g_1133,&l_1164,&l_1164},{&l_1164,&p_2023->g_1133,&l_1164,&l_1164},{&l_1164,&p_2023->g_1133,&l_1164,&l_1164}};
        uint32_t l_1171[6];
        int32_t l_1174 = (-9L);
        int i, j;
        for (i = 0; i < 6; i++)
            l_1171[i] = 0UL;
        p_2023->g_1133 = ((*l_970) = (void*)0);
        --l_1171[5];
        (*l_1164) = l_1174;
    }
    return p_61;
}


/* ------------------------------------------ */
/* 
 * reads : p_2023->g_49 p_2023->g_75 p_2023->g_83 p_2023->g_35 p_2023->l_comm_values p_2023->g_15 p_2023->g_92 p_2023->g_comm_values p_2023->g_128 p_2023->g_67 p_2023->g_135 p_2023->g_151 p_2023->g_206 p_2023->g_205 p_2023->g_247 p_2023->g_251 p_2023->g_88 p_2023->g_266 p_2023->g_307 p_2023->g_306 p_2023->g_321 p_2023->g_323 p_2023->g_149 p_2023->g_334 p_2023->g_340 p_2023->g_335 p_2023->g_158 p_2023->g_48 p_2023->g_397 p_2023->g_447 p_2023->g_479 p_2023->g_480 p_2023->g_503 p_2023->g_146 p_2023->g_4 p_2023->g_592 p_2023->g_194 p_2023->g_613 p_2023->g_615 p_2023->g_616 p_2023->g_671
 * writes: p_2023->g_49 p_2023->g_88 p_2023->g_92 p_2023->g_151 p_2023->g_206 p_2023->g_266 p_2023->g_307 p_2023->g_149 p_2023->g_447 p_2023->g_450 p_2023->g_205 p_2023->g_158 p_2023->g_67 p_2023->g_323 p_2023->g_306 p_2023->g_321 p_2023->g_75 p_2023->g_592 p_2023->g_83 p_2023->g_650 p_2023->g_671 p_2023->g_247 p_2023->l_comm_values p_2023->g_comm_values
 */
uint32_t * func_62(uint32_t  p_63, struct S0 * p_2023)
{ /* block id: 9 */
    uint8_t l_70 = 5UL;
    VECTOR(int16_t, 4) l_80 = (VECTOR(int16_t, 4))(0x33ECL, (VECTOR(int16_t, 2))(0x33ECL, 0x6624L), 0x6624L);
    int16_t l_132[1];
    int32_t *l_801 = &p_2023->g_149;
    VECTOR(int16_t, 4) l_806 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x2FA8L), 0x2FA8L);
    int32_t l_825[7] = {0L,0x2F5B5444L,0L,0L,0x2F5B5444L,0L,0L};
    VECTOR(int64_t, 2) l_835 = (VECTOR(int64_t, 2))(0L, (-3L));
    int i;
    for (i = 0; i < 1; i++)
        l_132[i] = 0x1F44L;
    for (p_2023->g_49 = 25; (p_2023->g_49 <= 51); ++p_2023->g_49)
    { /* block id: 12 */
        VECTOR(int16_t, 16) l_81 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x2916L), 0x2916L), 0x2916L, 5L, 0x2916L, (VECTOR(int16_t, 2))(5L, 0x2916L), (VECTOR(int16_t, 2))(5L, 0x2916L), 5L, 0x2916L, 5L, 0x2916L);
        VECTOR(int16_t, 8) l_82 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
        VECTOR(int16_t, 4) l_84 = (VECTOR(int16_t, 4))(0x53B6L, (VECTOR(int16_t, 2))(0x53B6L, 1L), 1L);
        uint8_t *l_87 = (void*)0;
        uint32_t *l_89 = &p_2023->g_49;
        int32_t l_90 = 0x26A1DE06L;
        int32_t *l_122 = &l_90;
        uint16_t *l_821[3];
        uint16_t *l_822 = (void*)0;
        int32_t l_824[10][3][8] = {{{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L}},{{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L}},{{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L}},{{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L}},{{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L}},{{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L}},{{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L}},{{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L}},{{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L}},{{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L},{0x4DABBC6DL,0x5CFF1924L,0x36519B12L,0x1C9F451EL,0x7144A84CL,0x5CC66120L,2L,0x36519B12L}}};
        int8_t *l_828[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t **l_827[9] = {&l_828[2],&l_828[2],&l_828[2],&l_828[2],&l_828[2],&l_828[2],&l_828[2],&l_828[2],&l_828[2]};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_821[i] = (void*)0;
        if ((l_70 != (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((p_2023->g_75 , p_63), (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))((safe_mul_func_uint8_t_u_u(1UL, p_63)), 9L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_80.xz)).xxyy)), ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_81.s490a)).xzwxzwzy)), ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_82.s3275)).yxwxwyzyzywwzywy)).seb, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(0x6482L, (-2L), ((VECTOR(int16_t, 2))(0x1341L, (-1L))), ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(p_2023->g_83.s3424)), ((VECTOR(int16_t, 8))(l_84.ywwzyzxw)).lo))))).s47, ((VECTOR(int16_t, 16))((-1L), p_2023->g_35.s3, 0x7E19L, (+(((safe_sub_func_uint16_t_u_u(((p_2023->g_88 = 0UL) && (-7L)), (((void*)0 == l_89) ^ 255UL))) <= 0x2B0EL) >= 0UL)), 0x615CL, 0x5589L, 0x3D48L, p_2023->g_49, 0x02D4L, 0L, 2L, ((VECTOR(int16_t, 4))((-2L))), 7L)).s3d, ((VECTOR(int16_t, 2))(0x1765L))))), ((VECTOR(int16_t, 2))((-8L)))))).yyyx, ((VECTOR(int16_t, 4))(1L))))).odd))).yyxy, ((VECTOR(int16_t, 4))((-4L)))))).xwyyzxzz, ((VECTOR(int16_t, 8))(0x3E90L))))), 0x6343L, 0x5AF4L)).s79)).xxyy, ((VECTOR(int16_t, 4))((-9L)))))).yyzwxzxy)).s6414457260457760)).s18a9)).yyzxxxzz, (int16_t)l_90))), ((VECTOR(int16_t, 8))(0x25DDL))))), ((VECTOR(int16_t, 8))(0x71A1L)), ((VECTOR(int16_t, 8))((-9L)))))).hi)).z, p_2023->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2023->tid, 97))])))), p_2023->g_15.y))))
        { /* block id: 14 */
            int32_t *l_91 = &l_90;
            ++p_2023->g_92;
        }
        else
        { /* block id: 16 */
            VECTOR(int8_t, 4) l_113 = (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, 0x71L), 0x71L);
            int32_t *l_120[6][7] = {{&p_2023->g_4,&p_2023->g_4,&p_2023->g_4,&l_90,&p_2023->g_4,&l_90,&p_2023->g_4},{&p_2023->g_4,&p_2023->g_4,&p_2023->g_4,&l_90,&p_2023->g_4,&l_90,&p_2023->g_4},{&p_2023->g_4,&p_2023->g_4,&p_2023->g_4,&l_90,&p_2023->g_4,&l_90,&p_2023->g_4},{&p_2023->g_4,&p_2023->g_4,&p_2023->g_4,&l_90,&p_2023->g_4,&l_90,&p_2023->g_4},{&p_2023->g_4,&p_2023->g_4,&p_2023->g_4,&l_90,&p_2023->g_4,&l_90,&p_2023->g_4},{&p_2023->g_4,&p_2023->g_4,&p_2023->g_4,&l_90,&p_2023->g_4,&l_90,&p_2023->g_4}};
            int32_t **l_121[8][10][3] = {{{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]}},{{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]}},{{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]}},{{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]}},{{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]}},{{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]}},{{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]}},{{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]},{&l_120[1][4],&l_120[2][2],&l_120[1][4]}}};
            uint16_t *l_131 = &p_2023->g_92;
            int64_t *l_809 = (void*)0;
            int64_t *l_810 = (void*)0;
            int64_t *l_811 = (void*)0;
            int64_t *l_812 = (void*)0;
            int64_t *l_813 = (void*)0;
            int64_t *l_814[8][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
            uint16_t **l_823 = (void*)0;
            VECTOR(int32_t, 8) l_826 = (VECTOR(int32_t, 8))(0x6FF8FC1AL, (VECTOR(int32_t, 4))(0x6FF8FC1AL, (VECTOR(int32_t, 2))(0x6FF8FC1AL, 4L), 4L), 4L, 0x6FF8FC1AL, 4L);
            VECTOR(int8_t, 16) l_838 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x6CL), 0x6CL), 0x6CL, 1L, 0x6CL, (VECTOR(int8_t, 2))(1L, 0x6CL), (VECTOR(int8_t, 2))(1L, 0x6CL), 1L, 0x6CL, 1L, 0x6CL);
            int i, j, k;
            l_801 = func_95(l_80.x, (safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(func_104(func_106(((safe_lshift_func_uint8_t_u_u(l_82.s0, 7)) , ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(l_113.xyywxyxywxxzxwzz)), (int8_t)(safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((&p_2023->g_4 != (l_122 = l_120[1][4])), ((*l_131) = (safe_rshift_func_uint8_t_u_u(p_63, (p_2023->g_83.s2 == ((safe_rshift_func_uint8_t_u_s(l_80.y, (safe_unary_minus_func_int32_t_s(p_2023->g_comm_values[p_2023->tid])))) , ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 16))(p_2023->g_128.yxxyxxxxxyxyxxxx)).s6829, ((VECTOR(uint16_t, 4))((safe_mod_func_uint8_t_u_u(p_2023->g_67.s2, p_2023->g_comm_values[p_2023->tid])), 0x7258L, 6UL, 9UL)), ((VECTOR(uint16_t, 4))(6UL))))).y))))))), p_2023->g_128.y)), GROUP_DIVERGE(2, 1)))))).s9e, (int8_t)2L))).xyyx)).z), p_2023->g_comm_values[p_2023->tid], &l_70, l_132[0], p_2023), p_2023), p_2023->g_15.w)) && p_63), l_80.w)), 4)), p_2023);
            l_825[1] = (safe_rshift_func_int16_t_s_u((((1UL != ((safe_rshift_func_int8_t_s_s((*l_122), 0)) < ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(l_806.zxyx)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(0xDA88L, ((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))((safe_mod_func_uint16_t_u_u((p_63 >= ((p_2023->g_comm_values[p_2023->tid] = (p_2023->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2023->tid, 97))] = (p_2023->g_247.sa = p_63))) > (safe_lshift_func_uint8_t_u_s((p_63 , ((p_63 != ((((safe_lshift_func_uint16_t_u_s(((**p_2023->g_334) = p_63), 14)) , l_821[2]) != (l_131 = (l_822 = l_821[2]))) < p_63)) ^ p_63)), p_63)))), GROUP_DIVERGE(1, 1))), 0x33A5L, (-1L), ((VECTOR(int16_t, 2))(0L)), l_824[2][2][4], 1L, 1L)).hi, ((VECTOR(int16_t, 4))(0x1994L)), ((VECTOR(int16_t, 4))(0x6CBBL)))))))), ((VECTOR(uint16_t, 2))(0xC698L)), 0x57E0L)).even))))).even, ((VECTOR(int32_t, 2))((-2L)))))).lo)) && p_63) != 1UL), 5));
            l_825[1] ^= ((*l_801) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_826.s64)).xyxyyyyx, ((VECTOR(int32_t, 8))(((void*)0 != l_827[0]), ((VECTOR(int32_t, 2))(0x36744B60L, 0L)), ((p_2023->g_205 != p_2023->g_75) <= 4L), (l_90 = ((+((safe_mod_func_uint8_t_u_u(0xD4L, ((((safe_mul_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((((VECTOR(int64_t, 16))(l_835.yyxxyxxyxyyyxxyy)).s1 , 0x58142E46FCCB69A1L), ((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_838.sc0c2)).y, 2)) || (safe_lshift_func_uint8_t_u_s((p_63 , p_2023->g_15.x), 3))))) ^ p_63), 4UL)) & p_63) | 0x1138675ADAD6AA25L) , p_63))) ^ 0x66L)) | p_2023->g_479.s3)), 0x17E5B7B7L, (-1L), 0x71849EF3L)), ((VECTOR(int32_t, 8))(0L))))).s03)).even);
        }
        if ((safe_mul_func_uint8_t_u_u((*l_801), (p_63 ^ (-1L)))))
        { /* block id: 391 */
            return l_89;
        }
        else
        { /* block id: 393 */
            uint32_t *l_843 = (void*)0;
            return l_843;
        }
    }
    return l_801;
}


/* ------------------------------------------ */
/* 
 * reads : p_2023->g_323
 * writes: p_2023->g_266
 */
int32_t * func_95(int64_t  p_96, uint64_t  p_97, struct S0 * p_2023)
{ /* block id: 375 */
    int32_t *l_792[7][10][3] = {{{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205}},{{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205}},{{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205}},{{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205}},{{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205}},{{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205}},{{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205},{(void*)0,&p_2023->g_4,&p_2023->g_205}}};
    uint64_t *l_799 = &p_2023->g_266;
    int32_t l_800 = 0x324CFCF0L;
    int i, j, k;
    l_792[6][5][2] = (void*)0;
    l_800 = (safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s(0x4BC894F573628D85L, ((*l_799) = (safe_add_func_uint64_t_u_u(18446744073709551615UL, p_2023->g_323.s1))))), p_2023->g_323.s6));
    return &p_2023->g_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_2023->g_35 p_2023->g_205 p_2023->g_151 p_2023->g_92 p_2023->g_128 p_2023->g_247 p_2023->g_251 p_2023->g_88 p_2023->g_49 p_2023->g_206 p_2023->g_266 p_2023->g_307 p_2023->g_306 p_2023->g_321 p_2023->g_323 p_2023->g_149 p_2023->g_334 p_2023->g_340 p_2023->g_335 p_2023->g_158 p_2023->g_67 p_2023->g_48 p_2023->g_397 p_2023->g_447 p_2023->g_479 p_2023->g_480 p_2023->g_75 p_2023->g_503 p_2023->g_146 p_2023->g_4 p_2023->g_592 p_2023->g_194 p_2023->g_613 p_2023->g_615 p_2023->g_616 p_2023->g_comm_values p_2023->g_671
 * writes: p_2023->g_151 p_2023->g_92 p_2023->g_266 p_2023->g_307 p_2023->g_88 p_2023->g_149 p_2023->g_447 p_2023->g_450 p_2023->g_205 p_2023->g_158 p_2023->g_67 p_2023->g_323 p_2023->g_306 p_2023->g_321 p_2023->g_75 p_2023->g_592 p_2023->g_83 p_2023->g_650 p_2023->g_671
 */
uint8_t  func_104(uint8_t * p_105, struct S0 * p_2023)
{ /* block id: 52 */
    uint8_t l_212 = 1UL;
    VECTOR(uint8_t, 16) l_217 = (VECTOR(uint8_t, 16))(0x76L, (VECTOR(uint8_t, 4))(0x76L, (VECTOR(uint8_t, 2))(0x76L, 0x23L), 0x23L), 0x23L, 0x76L, 0x23L, (VECTOR(uint8_t, 2))(0x76L, 0x23L), (VECTOR(uint8_t, 2))(0x76L, 0x23L), 0x76L, 0x23L, 0x76L, 0x23L);
    uint32_t *l_228[8][2][10] = {{{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151},{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151}},{{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151},{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151}},{{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151},{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151}},{{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151},{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151}},{{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151},{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151}},{{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151},{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151}},{{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151},{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151}},{{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151},{&p_2023->g_151,(void*)0,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151,&p_2023->g_151}}};
    int32_t l_239 = 0L;
    int32_t l_242 = 0x5F6EF4A8L;
    VECTOR(uint8_t, 16) l_245 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x4CL), 0x4CL), 0x4CL, 1UL, 0x4CL, (VECTOR(uint8_t, 2))(1UL, 0x4CL), (VECTOR(uint8_t, 2))(1UL, 0x4CL), 1UL, 0x4CL, 1UL, 0x4CL);
    VECTOR(uint8_t, 4) l_246 = (VECTOR(uint8_t, 4))(0x1DL, (VECTOR(uint8_t, 2))(0x1DL, 0x73L), 0x73L);
    VECTOR(uint32_t, 8) l_262 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xFD2305C2L), 0xFD2305C2L), 0xFD2305C2L, 0UL, 0xFD2305C2L);
    VECTOR(int32_t, 4) l_319 = (VECTOR(int32_t, 4))(0x4B3F0954L, (VECTOR(int32_t, 2))(0x4B3F0954L, 0x5FAAABA1L), 0x5FAAABA1L);
    uint64_t l_416 = 8UL;
    uint16_t ***l_467 = &p_2023->g_334;
    int32_t *l_472 = &p_2023->g_205;
    int16_t *l_491 = (void*)0;
    int16_t l_628[3][10][4] = {{{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L}},{{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L}},{{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L},{7L,1L,0x721AL,0L}}};
    int32_t *l_666 = &p_2023->g_149;
    int32_t *l_667 = (void*)0;
    int32_t *l_668 = &l_239;
    int32_t *l_669 = &l_239;
    int32_t *l_670[3][5] = {{&l_242,(void*)0,&l_242,&l_242,(void*)0},{&l_242,(void*)0,&l_242,&l_242,(void*)0},{&l_242,(void*)0,&l_242,&l_242,(void*)0}};
    int32_t **l_674 = &p_2023->g_650[0];
    int i, j, k;
    if ((safe_lshift_func_int16_t_s_u((0x1495489CL | l_212), 11)))
    { /* block id: 53 */
        int16_t l_226[2][3] = {{0x74ACL,7L,0x74ACL},{0x74ACL,7L,0x74ACL}};
        uint32_t *l_227 = &p_2023->g_151;
        uint16_t *l_229 = (void*)0;
        uint16_t *l_230 = (void*)0;
        uint16_t *l_231 = (void*)0;
        uint16_t *l_232 = (void*)0;
        uint16_t *l_233 = &p_2023->g_92;
        int8_t *l_238[2][1];
        int32_t l_240 = (-1L);
        int32_t *l_241[8][3][5] = {{{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149}},{{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149},{&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_238[i][j] = &p_2023->g_157;
        }
        l_242 = (safe_div_func_int32_t_s_s(l_212, (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_217.s65cf4bae)))).s7726354227256163, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(1UL, ((safe_div_func_uint16_t_u_u(0x34C5L, ((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(0xD9EE29C0L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(0xAF5F1EEAL, ((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))((safe_sub_func_int32_t_s_s(l_226[1][1], (p_2023->g_35.s0 && (0UL > ((((l_239 = (((*l_227) &= p_2023->g_205) , (l_228[6][0][7] == (((((*l_233)--) == (l_217.s8 > (((safe_lshift_func_uint16_t_u_u(l_226[1][1], l_212)) , FAKE_DIVERGE(p_2023->group_1_offset, get_group_id(1), 10)) , 9L))) <= l_226[0][0]) , (void*)0)))) != 0xABL) , l_226[1][2]) ^ 0x053F9871L))))), ((VECTOR(uint32_t, 2))(0x74D8D94FL)), 0x65C31099L, ((VECTOR(uint32_t, 4))(1UL)))).s66)), ((VECTOR(uint32_t, 2))(4294967295UL))))), ((VECTOR(uint32_t, 2))(0x0BC5584FL))))), 0x850F5D75L)).y, 4294967295UL, ((VECTOR(uint32_t, 2))(1UL)), 4294967294UL, 0x6C2EC38DL, ((VECTOR(uint32_t, 4))(0xBF46D65BL)), l_217.sd, ((VECTOR(uint32_t, 2))(7UL)), 0x62DBF7B1L, 0x3004D836L, 0xEBBC57ADL)).s62f6)).wywyxzwyyzwwzywy)).s33fc)), ((VECTOR(uint32_t, 2))(0x9AFE3BE9L)), 0x69C0D2D9L)).s3, p_2023->g_128.y)), l_217.sa)) | 0x57887CD7L))) | l_226[1][1]), ((VECTOR(uint8_t, 2))(0x21L)), ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 8))(255UL)))).s72, (uint8_t)l_217.s7))).yyxyyyyyxyxyxxyy, ((VECTOR(uint8_t, 16))(0x52L))))).se, ((VECTOR(uint8_t, 4))(0xA9L)), l_239, ((VECTOR(uint8_t, 2))(1UL)), 246UL, 3UL, l_240, 0UL, 0x93L, ((VECTOR(uint8_t, 2))(0UL)), 1UL)).s7, ((VECTOR(uint8_t, 2))(249UL)), 1UL, ((VECTOR(uint8_t, 2))(0x1FL)), 0x36L, 0xE9L)).s1, l_212))));
    }
    else
    { /* block id: 58 */
        VECTOR(int32_t, 2) l_250 = (VECTOR(int32_t, 2))(7L, 0L);
        VECTOR(uint32_t, 4) l_252 = (VECTOR(uint32_t, 4))(0xC2AB02FDL, (VECTOR(uint32_t, 2))(0xC2AB02FDL, 1UL), 1UL);
        uint64_t *l_261 = &p_2023->g_75;
        int16_t *l_263 = (void*)0;
        VECTOR(int32_t, 2) l_316 = (VECTOR(int32_t, 2))(1L, 0x0C0522CEL);
        uint16_t **l_336 = &p_2023->g_335;
        int32_t l_414 = 0x3D90F636L;
        int32_t *l_434 = &l_239;
        uint16_t l_464 = 0x51C2L;
        uint32_t **l_469 = (void*)0;
        VECTOR(int32_t, 16) l_473 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 1L), 1L), 1L, (-8L), 1L, (VECTOR(int32_t, 2))((-8L), 1L), (VECTOR(int32_t, 2))((-8L), 1L), (-8L), 1L, (-8L), 1L);
        VECTOR(int32_t, 16) l_478 = (VECTOR(int32_t, 16))(0x6199C532L, (VECTOR(int32_t, 4))(0x6199C532L, (VECTOR(int32_t, 2))(0x6199C532L, 0x62CEB302L), 0x62CEB302L), 0x62CEB302L, 0x6199C532L, 0x62CEB302L, (VECTOR(int32_t, 2))(0x6199C532L, 0x62CEB302L), (VECTOR(int32_t, 2))(0x6199C532L, 0x62CEB302L), 0x6199C532L, 0x62CEB302L, 0x6199C532L, 0x62CEB302L);
        VECTOR(int32_t, 4) l_496 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
        uint32_t l_506 = 0x84AE915FL;
        int i;
        if (((0x7F28E239A327664DL < (0x077623B5L ^ (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x74L, 0x33L)).yxxxyxyyxxyyyyyx)).hi, ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_245.sa189)).wxywzxwywwyywyzw)).s2f, ((VECTOR(uint8_t, 4))(l_246.xwwy)).odd))).xyxyxyxx))).s3, l_239)))) || ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_2023->g_247.sd644)).wzxzzzzy)).lo)), ((VECTOR(int64_t, 16))(((safe_sub_func_uint64_t_u_u(((((0x36C0DD6EL & (((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_250.yxxyxxyyyxxxxxyx)).s64)))).yyyxxyxy, ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 8))(p_2023->g_251.xwwxwyzw)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(0UL, 0xCB78F745L, 0xA5CE4E5EL, 0xD1CE3DAEL)).hi)).even, ((VECTOR(uint32_t, 2))(l_252.zz)), ((VECTOR(uint32_t, 2))(4294967295UL, 1UL)), 0x75CB8927L, 4294967292UL, 0xFFB300FBL)).s22)).xxyyxyyy, ((VECTOR(uint32_t, 4))(1UL, 0x1DEA1295L, 3UL, 0UL)).xwyyyyxw)))))).s3 < 18446744073709551612UL)) >= (l_242 &= (((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 4))((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(0xA8E6F8E1L, (l_252.y , (+(safe_mul_func_uint8_t_u_u(0xACL, (safe_add_func_int16_t_s_s(((((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 8))(((((void*)0 == l_261) || 7UL) < l_252.x), l_212, l_262.s0, l_217.s1, 1UL, ((VECTOR(uint32_t, 2))(1UL)), 0xE8F5AF06L)), ((VECTOR(uint32_t, 8))(0x5A6B3991L))))).s2 <= l_217.s1) > l_252.x), l_250.y)))))))) , (*p_105)), p_2023->g_49)), ((VECTOR(int32_t, 2))(0x780DFEFBL)), 1L)).even, ((VECTOR(uint32_t, 2))(0x70267409L))))).xxxx)).zxzzzxwwzwzzyxxz, ((VECTOR(int64_t, 16))(0x14620883238A8426L)), ((VECTOR(int64_t, 16))(0x799884CA143310F7L))))).sc & 0x644F534FA682BD60L))) >= p_2023->g_49) && 1UL), 1L)) <= p_2023->g_88), p_2023->g_206, 0x4CB4F853981C0F86L, 0L, l_250.y, 0x7EF89A33DC61EB57L, 3L, l_250.y, p_2023->g_35.s1, p_2023->g_35.s5, (-1L), ((VECTOR(int64_t, 2))(0x5D7C60817985A66BL)), l_250.x, 0x5FED3E9F78595F27L, 0L)).s7a44))), (-3L), ((VECTOR(int64_t, 2))(0L)), 0x2C2ECB7F358BD54BL)).s5))
        { /* block id: 60 */
            int32_t *l_264 = &l_239;
            int32_t *l_265[10][10][2] = {{{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205}},{{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205}},{{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205}},{{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205}},{{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205}},{{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205}},{{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205}},{{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205}},{{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205}},{{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205},{&l_242,&p_2023->g_205}}};
            VECTOR(uint32_t, 8) l_314 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL);
            uint8_t *l_396[10] = {&p_2023->g_88,&p_2023->g_88,&p_2023->g_88,&p_2023->g_88,&p_2023->g_88,&p_2023->g_88,&p_2023->g_88,&p_2023->g_88,&p_2023->g_88,&p_2023->g_88};
            VECTOR(int8_t, 4) l_501 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x2CL), 0x2CL);
            int i, j, k;
            p_2023->g_266--;
            if (l_239)
            { /* block id: 62 */
                int32_t l_320 = 9L;
                VECTOR(uint16_t, 2) l_322 = (VECTOR(uint16_t, 2))(0x695FL, 0x32DFL);
                uint16_t ***l_337 = &l_336;
                uint32_t *l_338 = &p_2023->g_151;
                uint32_t **l_339 = &l_228[7][0][8];
                int32_t l_422 = (-1L);
                int32_t l_423 = 0L;
                int32_t l_424 = 0L;
                int16_t l_425 = 0L;
                int32_t l_426 = (-3L);
                int32_t l_427 = 0L;
                int32_t l_428[10][7] = {{(-2L),0x4D42F064L,2L,0x159186C4L,2L,0x4D42F064L,(-2L)},{(-2L),0x4D42F064L,2L,0x159186C4L,2L,0x4D42F064L,(-2L)},{(-2L),0x4D42F064L,2L,0x159186C4L,2L,0x4D42F064L,(-2L)},{(-2L),0x4D42F064L,2L,0x159186C4L,2L,0x4D42F064L,(-2L)},{(-2L),0x4D42F064L,2L,0x159186C4L,2L,0x4D42F064L,(-2L)},{(-2L),0x4D42F064L,2L,0x159186C4L,2L,0x4D42F064L,(-2L)},{(-2L),0x4D42F064L,2L,0x159186C4L,2L,0x4D42F064L,(-2L)},{(-2L),0x4D42F064L,2L,0x159186C4L,2L,0x4D42F064L,(-2L)},{(-2L),0x4D42F064L,2L,0x159186C4L,2L,0x4D42F064L,(-2L)},{(-2L),0x4D42F064L,2L,0x159186C4L,2L,0x4D42F064L,(-2L)}};
                int i, j;
                if ((atomic_inc(&p_2023->g_atomic_input[20 * get_linear_group_id() + 7]) == 8))
                { /* block id: 64 */
                    int16_t l_269[1][9][2] = {{{0x6C93L,0x475FL},{0x6C93L,0x475FL},{0x6C93L,0x475FL},{0x6C93L,0x475FL},{0x6C93L,0x475FL},{0x6C93L,0x475FL},{0x6C93L,0x475FL},{0x6C93L,0x475FL},{0x6C93L,0x475FL}}};
                    uint64_t l_270 = 0x701E8A4B41EB152DL;
                    VECTOR(uint32_t, 4) l_271 = (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0x1485D5FDL), 0x1485D5FDL);
                    int32_t l_286 = 0x0B6AEAC0L;
                    uint32_t l_287 = 3UL;
                    int64_t l_290 = 1L;
                    VECTOR(int32_t, 16) l_291 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                    int i, j, k;
                    if (((l_270 |= (l_269[0][6][1] = (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(1UL, 0xC1L)).xxxxyyxx)).s6 , 0x05CA28C209DBF3CCL))) , (((VECTOR(uint32_t, 4))(l_271.xwwx)).x , ((VECTOR(int32_t, 2))(1L, 0x64CCA4B3L)).hi)))
                    { /* block id: 67 */
                        uint16_t l_272 = 0x9143L;
                        uint32_t l_273[9] = {8UL,0xCBD6C7DCL,8UL,8UL,0xCBD6C7DCL,8UL,8UL,0xCBD6C7DCL,8UL};
                        uint64_t l_274[4] = {0x69B8EB79CD1F5E80L,0x69B8EB79CD1F5E80L,0x69B8EB79CD1F5E80L,0x69B8EB79CD1F5E80L};
                        int i;
                        l_274[0] = (l_273[2] ^= l_272);
                    }
                    else
                    { /* block id: 70 */
                        VECTOR(int32_t, 4) l_275 = (VECTOR(int32_t, 4))(0x0BCEAF36L, (VECTOR(int32_t, 2))(0x0BCEAF36L, 0L), 0L);
                        uint16_t l_276 = 0x0872L;
                        uint64_t l_277 = 0x8E4A434ABC96BD9CL;
                        int16_t l_280[7];
                        uint32_t l_281[10][1][8] = {{{0x999978F1L,0x999978F1L,4294967295UL,4UL,0UL,4UL,4294967295UL,0x999978F1L}},{{0x999978F1L,0x999978F1L,4294967295UL,4UL,0UL,4UL,4294967295UL,0x999978F1L}},{{0x999978F1L,0x999978F1L,4294967295UL,4UL,0UL,4UL,4294967295UL,0x999978F1L}},{{0x999978F1L,0x999978F1L,4294967295UL,4UL,0UL,4UL,4294967295UL,0x999978F1L}},{{0x999978F1L,0x999978F1L,4294967295UL,4UL,0UL,4UL,4294967295UL,0x999978F1L}},{{0x999978F1L,0x999978F1L,4294967295UL,4UL,0UL,4UL,4294967295UL,0x999978F1L}},{{0x999978F1L,0x999978F1L,4294967295UL,4UL,0UL,4UL,4294967295UL,0x999978F1L}},{{0x999978F1L,0x999978F1L,4294967295UL,4UL,0UL,4UL,4294967295UL,0x999978F1L}},{{0x999978F1L,0x999978F1L,4294967295UL,4UL,0UL,4UL,4294967295UL,0x999978F1L}},{{0x999978F1L,0x999978F1L,4294967295UL,4UL,0UL,4UL,4294967295UL,0x999978F1L}}};
                        uint8_t l_284 = 0x8BL;
                        uint64_t l_285 = 0x4341685A0F50867CL;
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                            l_280[i] = (-1L);
                        l_276 = ((VECTOR(int32_t, 8))(l_275.wywwyxyz)).s4;
                        l_277++;
                        l_281[3][0][3]--;
                        l_285 &= l_284;
                    }
                    ++l_287;
                    if (((VECTOR(int32_t, 4))(l_290, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_291.sdcd0fb91b11fe966)).sb25f)).hi)))).hi, 0x77488DAAL, (-1L))).z)
                    { /* block id: 77 */
                        int32_t l_294 = 7L;
                        int32_t *l_293 = &l_294;
                        int32_t **l_292 = &l_293;
                        int32_t **l_295 = &l_293;
                        uint32_t l_296 = 0xA8B76930L;
                        int32_t *l_297 = (void*)0;
                        VECTOR(int32_t, 8) l_298 = (VECTOR(int32_t, 8))(0x78908CF1L, (VECTOR(int32_t, 4))(0x78908CF1L, (VECTOR(int32_t, 2))(0x78908CF1L, 0x105EE874L), 0x105EE874L), 0x105EE874L, 0x78908CF1L, 0x105EE874L);
                        int32_t *l_299 = &l_294;
                        int i;
                        l_295 = l_292;
                        l_291.s7 = l_296;
                        l_297 = ((*l_292) = (void*)0);
                        l_299 = (((VECTOR(int32_t, 4))(l_298.s0345)).w , (void*)0);
                    }
                    else
                    { /* block id: 83 */
                        uint32_t l_300[5];
                        int16_t l_301[1];
                        uint8_t l_302 = 249UL;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_300[i] = 1UL;
                        for (i = 0; i < 1; i++)
                            l_301[i] = 0x3FF1L;
                        l_301[0] = (l_291.s4 = l_300[0]);
                        l_291.sa = l_302;
                    }
                    unsigned int result = 0;
                    int l_269_i0, l_269_i1, l_269_i2;
                    for (l_269_i0 = 0; l_269_i0 < 1; l_269_i0++) {
                        for (l_269_i1 = 0; l_269_i1 < 9; l_269_i1++) {
                            for (l_269_i2 = 0; l_269_i2 < 2; l_269_i2++) {
                                result += l_269[l_269_i0][l_269_i1][l_269_i2];
                            }
                        }
                    }
                    result += l_270;
                    result += l_271.w;
                    result += l_271.z;
                    result += l_271.y;
                    result += l_271.x;
                    result += l_286;
                    result += l_287;
                    result += l_290;
                    result += l_291.sf;
                    result += l_291.se;
                    result += l_291.sd;
                    result += l_291.sc;
                    result += l_291.sb;
                    result += l_291.sa;
                    result += l_291.s9;
                    result += l_291.s8;
                    result += l_291.s7;
                    result += l_291.s6;
                    result += l_291.s5;
                    result += l_291.s4;
                    result += l_291.s3;
                    result += l_291.s2;
                    result += l_291.s1;
                    result += l_291.s0;
                    atomic_add(&p_2023->g_special_values[20 * get_linear_group_id() + 7], result);
                }
                else
                { /* block id: 88 */
                    (1 + 1);
                }
                for (p_2023->g_151 = 14; (p_2023->g_151 < 44); p_2023->g_151 = safe_add_func_int32_t_s_s(p_2023->g_151, 1))
                { /* block id: 93 */
                    int8_t l_305 = 0L;
                    int32_t *l_315 = &p_2023->g_4;
                    ++p_2023->g_307;
                    p_2023->g_149 = ((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_314.s4204)).ywxxwyxwwyzywyyy)).lo)).s5 != p_2023->g_306), 4)), ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(0x17L, 1L)).xyyxxyxxyyyxxyyx, (int8_t)(l_265[4][4][0] == l_315)))).s3)) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_316.xx)), (((*p_105)++) == p_2023->g_206), 0x5F128289L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_319.zx)), 0x41B9189EL, 0x064A0E39L)).hi)).yxxyyyxy)).s2, (-1L), ((VECTOR(int32_t, 4))(l_320, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(p_2023->g_321.yx)), ((VECTOR(uint16_t, 16))(l_322.xyxxxyxxxxxxxxxx)).s90))), 0x67B709EFL)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(p_2023->g_323.sd0)).yxxx, ((VECTOR(int32_t, 8))((safe_mul_func_int16_t_s_s(0x2FD9L, (((l_212 , 7UL) >= GROUP_DIVERGE(2, 1)) , 0xC1BDL))), l_217.sa, 8L, p_2023->g_149, (-9L), (-5L), 0x7808EC6FL, 0L)).lo))))), 0x15DDFB32L, 0x3F49FC18L, 0x4F6D8214L, p_2023->g_205, 0x4FADB962L, 0x3DF68D6BL)).s1c4b)), ((VECTOR(int32_t, 4))(0x0B2A8E6DL)), 1L, 0x02D7C8C6L, 0x37BFBE90L, (-4L))).lo)).s4);
                }
                if (((safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0x557EL, ((**p_2023->g_334) &= ((safe_mul_func_int8_t_s_s((p_2023->g_334 == ((*l_337) = l_336)), ((((*l_339) = l_338) != (((0UL & ((VECTOR(int8_t, 4))(p_2023->g_340.s4222)).x) >= 0x261207DE155A0394L) , &p_2023->g_151)) ^ ((-9L) ^ ((safe_lshift_func_uint16_t_u_s(((((p_2023->g_49 , l_322.x) & l_252.y) & 0x6EL) | 0UL), 4)) || l_322.x))))) && l_239)))), 0x5CL)), l_252.x)) <= GROUP_DIVERGE(1, 1)))
                { /* block id: 101 */
                    if ((atomic_inc(&p_2023->g_atomic_input[20 * get_linear_group_id() + 8]) == 0))
                    { /* block id: 103 */
                        int64_t l_343 = 0x098DAF1AD423761DL;
                        uint16_t l_344[10] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
                        VECTOR(int64_t, 16) l_345 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int64_t, 2))(0L, 0L), (VECTOR(int64_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
                        VECTOR(int32_t, 2) l_346 = (VECTOR(int32_t, 2))(0x483F3594L, (-5L));
                        int32_t l_347 = 0L;
                        VECTOR(int8_t, 8) l_348 = (VECTOR(int8_t, 8))(0x4EL, (VECTOR(int8_t, 4))(0x4EL, (VECTOR(int8_t, 2))(0x4EL, 0x1FL), 0x1FL), 0x1FL, 0x4EL, 0x1FL);
                        int16_t l_349[1];
                        int16_t l_350 = 0x3F5BL;
                        uint64_t l_351 = 18446744073709551607UL;
                        uint64_t l_354 = 0UL;
                        uint16_t l_355 = 0x5488L;
                        uint8_t l_356 = 1UL;
                        VECTOR(uint32_t, 4) l_357 = (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 1UL), 1UL);
                        VECTOR(uint16_t, 2) l_358 = (VECTOR(uint16_t, 2))(0x739AL, 1UL);
                        VECTOR(uint16_t, 4) l_359 = (VECTOR(uint16_t, 4))(0xEC42L, (VECTOR(uint16_t, 2))(0xEC42L, 1UL), 1UL);
                        VECTOR(uint16_t, 8) l_360 = (VECTOR(uint16_t, 8))(0xC6DFL, (VECTOR(uint16_t, 4))(0xC6DFL, (VECTOR(uint16_t, 2))(0xC6DFL, 0x487EL), 0x487EL), 0x487EL, 0xC6DFL, 0x487EL);
                        int8_t l_361 = 0x65L;
                        int32_t l_362[9] = {0x651E5AF4L,0x651E5AF4L,0x651E5AF4L,0x651E5AF4L,0x651E5AF4L,0x651E5AF4L,0x651E5AF4L,0x651E5AF4L,0x651E5AF4L};
                        uint64_t l_363 = 0x3A098A3ABFD04F17L;
                        VECTOR(int32_t, 4) l_364 = (VECTOR(int32_t, 4))(0x10F93FCFL, (VECTOR(int32_t, 2))(0x10F93FCFL, 0x2FC66C44L), 0x2FC66C44L);
                        int32_t *l_365 = (void*)0;
                        int32_t *l_366 = (void*)0;
                        int32_t *l_367 = &l_347;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_349[i] = 0x00F8L;
                        l_345.s2 &= (l_344[5] = l_343);
                        l_347 |= ((VECTOR(int32_t, 2))(l_346.yy)).even;
                        l_365 = (((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 16))((((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(l_348.s55)).yxyy, ((VECTOR(int8_t, 16))(l_349[0], (l_363 = ((++l_351) , (((l_354 , ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_355, 2UL, 0UL, 4294967295UL, 0xA6C8538BL, 4294967295UL, 4UL, l_356, ((VECTOR(uint32_t, 2))(0x51BEF540L, 0x7C14EB8AL)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_357.yx)).yyyx)).xwzxxyzyxwzwxzzx)).s7, 1UL, ((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_358.xxyyyyyyyyxxyxyy)))).s034a, ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 2))(l_359.zz)).yyyyxxxy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_360.s2262)))).yywwyyzy)))))).odd))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(l_361, 65533UL, 1UL, ((VECTOR(uint16_t, 4))(0xD51AL)), 0x051CL)).even, ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 4))(0x6200L))))).xxxywywywzxzwxwy)).sd9f1))), ((VECTOR(uint16_t, 4))(0UL))))))))))).s4) , 1UL) , l_362[3]))), ((VECTOR(int8_t, 8))(0x57L)), ((VECTOR(int8_t, 4))(0x3CL)), 0x72L, 1L)).s6a89))).y , 0x42035C2BL), l_364.w, ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 2))(0x69F560C1L)), 4294967290UL, 4294967295UL, 0x2025E4ABL, 0x5E8EE7C5L, 0x6C9739BEL, 0x6D3929B7L, ((VECTOR(uint32_t, 4))(0xDFA88ACEL)))).s81a6, ((VECTOR(uint32_t, 4))(0x374C5442L))))).z , (void*)0);
                        l_367 = l_366;
                        unsigned int result = 0;
                        result += l_343;
                        int l_344_i0;
                        for (l_344_i0 = 0; l_344_i0 < 10; l_344_i0++) {
                            result += l_344[l_344_i0];
                        }
                        result += l_345.sf;
                        result += l_345.se;
                        result += l_345.sd;
                        result += l_345.sc;
                        result += l_345.sb;
                        result += l_345.sa;
                        result += l_345.s9;
                        result += l_345.s8;
                        result += l_345.s7;
                        result += l_345.s6;
                        result += l_345.s5;
                        result += l_345.s4;
                        result += l_345.s3;
                        result += l_345.s2;
                        result += l_345.s1;
                        result += l_345.s0;
                        result += l_346.y;
                        result += l_346.x;
                        result += l_347;
                        result += l_348.s7;
                        result += l_348.s6;
                        result += l_348.s5;
                        result += l_348.s4;
                        result += l_348.s3;
                        result += l_348.s2;
                        result += l_348.s1;
                        result += l_348.s0;
                        int l_349_i0;
                        for (l_349_i0 = 0; l_349_i0 < 1; l_349_i0++) {
                            result += l_349[l_349_i0];
                        }
                        result += l_350;
                        result += l_351;
                        result += l_354;
                        result += l_355;
                        result += l_356;
                        result += l_357.w;
                        result += l_357.z;
                        result += l_357.y;
                        result += l_357.x;
                        result += l_358.y;
                        result += l_358.x;
                        result += l_359.w;
                        result += l_359.z;
                        result += l_359.y;
                        result += l_359.x;
                        result += l_360.s7;
                        result += l_360.s6;
                        result += l_360.s5;
                        result += l_360.s4;
                        result += l_360.s3;
                        result += l_360.s2;
                        result += l_360.s1;
                        result += l_360.s0;
                        result += l_361;
                        int l_362_i0;
                        for (l_362_i0 = 0; l_362_i0 < 9; l_362_i0++) {
                            result += l_362[l_362_i0];
                        }
                        result += l_363;
                        result += l_364.w;
                        result += l_364.z;
                        result += l_364.y;
                        result += l_364.x;
                        atomic_add(&p_2023->g_special_values[20 * get_linear_group_id() + 8], result);
                    }
                    else
                    { /* block id: 111 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 114 */
                    uint64_t l_369[2];
                    volatile int8_t **l_401 = &p_2023->g_398;
                    int32_t **l_402 = &l_264;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_369[i] = 0xE9C2F8F8DFE0A9B8L;
                    (*l_264) = ((1UL > (safe_unary_minus_func_uint64_t_u((&l_336 != (void*)0)))) >= l_369[1]);
                    for (p_2023->g_149 = (-2); (p_2023->g_149 >= 5); p_2023->g_149 = safe_add_func_uint8_t_u_u(p_2023->g_149, 9))
                    { /* block id: 118 */
                        uint16_t l_372 = 65532UL;
                        int64_t *l_389 = (void*)0;
                        int64_t *l_390 = (void*)0;
                        int64_t *l_391 = (void*)0;
                        int64_t *l_392 = (void*)0;
                        int64_t *l_393 = (void*)0;
                        if (l_372)
                            break;
                        if (l_242)
                            break;
                        (*l_264) &= (safe_div_func_int32_t_s_s(((+p_2023->g_128.x) || (((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_246.z || ((VECTOR(uint64_t, 8))(0x2C1FF58AC76A57F8L, ((safe_rshift_func_int8_t_s_s(p_2023->g_128.y, ((((safe_mul_func_uint16_t_u_u(((8UL >= p_2023->g_158) > (safe_rshift_func_int8_t_s_u(0x2DL, 4))), 0x1348L)) | (2L < (safe_div_func_uint16_t_u_u(((l_242 = ((void*)0 == (*p_2023->g_334))) | l_252.z), p_2023->g_67.s5)))) , &l_228[6][0][7]) != (void*)0))) , 0x47CC8E6A1F4056B0L), 0xA707F6E1AB24ACBFL, GROUP_DIVERGE(0, 1), ((VECTOR(uint64_t, 2))(0x3A2CD0A928B4CB26L)), 0xC693CCDD7182D5CAL, 0xADA7264B72D0E557L)).s4), p_2023->g_206)), (*p_105))) , l_250.x) & (*p_2023->g_48))), 0x20F5035BL));
                    }
                    for (p_2023->g_149 = 0; (p_2023->g_149 > 22); p_2023->g_149 = safe_add_func_uint32_t_u_u(p_2023->g_149, 6))
                    { /* block id: 126 */
                        volatile int8_t ***l_400 = (void*)0;
                        (*l_264) |= ((l_396[2] != (void*)0) & p_2023->g_251.y);
                        l_401 = p_2023->g_397;
                    }
                    (*l_402) = l_265[4][4][0];
                }
                for (l_242 = (-23); (l_242 == (-22)); l_242 = safe_add_func_int64_t_s_s(l_242, 3))
                { /* block id: 134 */
                    int8_t l_413[3];
                    int32_t l_415[7] = {0x3A0B12DCL,0x3A0B12DCL,0x3A0B12DCL,0x3A0B12DCL,0x3A0B12DCL,0x3A0B12DCL,0x3A0B12DCL};
                    uint32_t l_429 = 0UL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_413[i] = 0x2CL;
                    if ((atomic_inc(&p_2023->l_atomic_input[5]) == 0))
                    { /* block id: 136 */
                        uint16_t l_405 = 0xC12AL;
                        uint16_t l_406 = 1UL;
                        int16_t l_407 = 0x73E8L;
                        uint32_t l_408 = 4294967295UL;
                        VECTOR(uint64_t, 4) l_409 = (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 9UL), 9UL);
                        uint16_t l_410 = 0x4AECL;
                        int64_t l_411 = 1L;
                        int8_t l_412 = (-10L);
                        int i;
                        l_405 &= 0x4505EC51L;
                        l_412 ^= (l_406 , ((l_407 , l_408) , (l_411 = (l_409.x , l_410))));
                        unsigned int result = 0;
                        result += l_405;
                        result += l_406;
                        result += l_407;
                        result += l_408;
                        result += l_409.w;
                        result += l_409.z;
                        result += l_409.y;
                        result += l_409.x;
                        result += l_410;
                        result += l_411;
                        result += l_412;
                        atomic_add(&p_2023->l_special_values[5], result);
                    }
                    else
                    { /* block id: 140 */
                        (1 + 1);
                    }
                    if ((l_316.y = p_2023->g_247.sa))
                    { /* block id: 144 */
                        int16_t l_419 = 9L;
                        int32_t l_420 = (-9L);
                        int32_t l_421[9][9] = {{0x0D6864CFL,0L,(-2L),(-1L),(-2L),0L,0x0D6864CFL,0x0C16DC95L,0x09EF3BACL},{0x0D6864CFL,0L,(-2L),(-1L),(-2L),0L,0x0D6864CFL,0x0C16DC95L,0x09EF3BACL},{0x0D6864CFL,0L,(-2L),(-1L),(-2L),0L,0x0D6864CFL,0x0C16DC95L,0x09EF3BACL},{0x0D6864CFL,0L,(-2L),(-1L),(-2L),0L,0x0D6864CFL,0x0C16DC95L,0x09EF3BACL},{0x0D6864CFL,0L,(-2L),(-1L),(-2L),0L,0x0D6864CFL,0x0C16DC95L,0x09EF3BACL},{0x0D6864CFL,0L,(-2L),(-1L),(-2L),0L,0x0D6864CFL,0x0C16DC95L,0x09EF3BACL},{0x0D6864CFL,0L,(-2L),(-1L),(-2L),0L,0x0D6864CFL,0x0C16DC95L,0x09EF3BACL},{0x0D6864CFL,0L,(-2L),(-1L),(-2L),0L,0x0D6864CFL,0x0C16DC95L,0x09EF3BACL},{0x0D6864CFL,0L,(-2L),(-1L),(-2L),0L,0x0D6864CFL,0x0C16DC95L,0x09EF3BACL}};
                        int i, j;
                        l_416++;
                        l_429++;
                    }
                    else
                    { /* block id: 147 */
                        l_239 = l_252.w;
                    }
                }
            }
            else
            { /* block id: 151 */
                int32_t l_432 = 0x49C004E1L;
                int32_t l_439 = 0x3D07C3D5L;
                int32_t l_440 = 0x6D68D491L;
                int32_t l_441 = 2L;
                int32_t l_443[5][5] = {{0x7C67DE4FL,0L,0L,0x7C67DE4FL,0x7C67DE4FL},{0x7C67DE4FL,0L,0L,0x7C67DE4FL,0x7C67DE4FL},{0x7C67DE4FL,0L,0L,0x7C67DE4FL,0x7C67DE4FL},{0x7C67DE4FL,0L,0L,0x7C67DE4FL,0x7C67DE4FL},{0x7C67DE4FL,0L,0L,0x7C67DE4FL,0x7C67DE4FL}};
                int32_t *l_460 = &l_443[4][2];
                uint16_t ***l_468 = &p_2023->g_334;
                int i, j;
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_432, ((VECTOR(int32_t, 2))(0L, 0x073501F0L)), 0x2A8F4F69L)).zyyxwzxyyxywwwwx)).se)
                { /* block id: 152 */
                    uint32_t l_433 = 4294967288UL;
                    int32_t l_442 = 0x212C2B83L;
                    int32_t l_446 = 0L;
                    int32_t l_454 = 0x071675AEL;
                    uint32_t l_455[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                    int32_t **l_458 = (void*)0;
                    int32_t **l_459[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_459[i] = (void*)0;
                    if (l_433)
                    { /* block id: 153 */
                        uint32_t l_435 = 0x9EEFB5CAL;
                        int32_t l_438 = (-1L);
                        int32_t l_444 = 0x5E1F897BL;
                        VECTOR(int32_t, 16) l_445 = (VECTOR(int32_t, 16))(0x50F462C6L, (VECTOR(int32_t, 4))(0x50F462C6L, (VECTOR(int32_t, 2))(0x50F462C6L, 0L), 0L), 0L, 0x50F462C6L, 0L, (VECTOR(int32_t, 2))(0x50F462C6L, 0L), (VECTOR(int32_t, 2))(0x50F462C6L, 0L), 0x50F462C6L, 0L, 0x50F462C6L, 0L);
                        int i;
                        l_434 = l_265[0][8][0];
                        --l_435;
                        p_2023->g_447[2]--;
                    }
                    else
                    { /* block id: 157 */
                        uint32_t l_451[6][8];
                        int32_t *l_452 = &l_439;
                        int32_t **l_453 = &l_265[4][4][0];
                        int i, j;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_451[i][j] = 0x74505D1FL;
                        }
                        (*l_264) = (l_451[5][5] = (p_2023->g_205 = ((p_2023->g_450[5][1] = (void*)0) != &p_2023->g_334)));
                        (*l_453) = l_452;
                        (*l_434) = l_246.x;
                    }
                    ++l_455[3];
                    l_460 = (void*)0;
                }
                else
                { /* block id: 167 */
                    int32_t **l_461 = &l_434;
                    (*l_461) = (void*)0;
                    for (l_416 = 8; (l_416 <= 35); l_416 = safe_add_func_uint16_t_u_u(l_416, 8))
                    { /* block id: 171 */
                        p_2023->g_149 &= ((l_464 ^= (&l_265[4][4][0] == &p_2023->g_136)) & (((*p_2023->g_48) == ((*l_264) &= (safe_mod_func_int8_t_s_s((((l_467 != (p_2023->g_35.s3 , l_468)) , l_469) != (void*)0), (p_2023->g_67.s0 |= ((p_2023->g_158 = ((safe_lshift_func_int8_t_s_u((*l_460), p_2023->g_35.s2)) <= p_2023->g_321.y)) ^ (*l_460))))))) < 0UL));
                        l_472 = l_472;
                        p_2023->g_323.sc ^= ((p_2023->g_447[6] == (*l_472)) , ((*l_460) = ((VECTOR(int32_t, 4))(l_473.s763f)).w));
                    }
                }
                for (l_432 = 22; (l_432 < (-4)); l_432 = safe_sub_func_int8_t_s_s(l_432, 3))
                { /* block id: 184 */
                    int16_t *l_492 = (void*)0;
                    int32_t l_504 = 0L;
                    int32_t l_505 = 1L;
                    for (l_439 = (-9); (l_439 <= 27); l_439++)
                    { /* block id: 187 */
                        int16_t *l_487 = (void*)0;
                        int16_t *l_488 = &p_2023->g_306;
                        uint64_t *l_493 = &p_2023->g_447[0];
                        uint64_t *l_494[9][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                        int32_t l_502 = 0x773DBD37L;
                        int i, j, k;
                        (*l_472) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x55B0D86EL, 0x244EDECBL)).xxyyyyyxxxxyxxxy)).hi, ((VECTOR(int32_t, 4))(l_478.sd3e2)).wywwxxwx, ((VECTOR(int32_t, 16))(p_2023->g_479.s0244663346143425)).lo))).s41, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(9L, 0L, (-3L), 0x15A8L)).hi, ((VECTOR(uint16_t, 2))(0UL, 0x6D43L))))).xyxxxxyy)).s40)), ((VECTOR(int32_t, 16))(1L, (-1L), 0x6C12E6F7L, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_2023->g_480.wxxxywyzwxxwxyww)))).s17)), ((VECTOR(int32_t, 4))(3L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((l_505 |= (safe_div_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((p_2023->g_321.y = ((*l_488) = l_478.s4)), (**p_2023->g_334))), FAKE_DIVERGE(p_2023->local_0_offset, get_local_id(0), 10))) & ((safe_mod_func_uint32_t_u_u((l_491 == l_492), (((((p_2023->g_266 |= ((*l_493) = ((*l_261) &= 18446744073709551615UL))) , ((((safe_unary_minus_func_int64_t_s(((*l_336) != (void*)0))) && ((((((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(l_496.ywwwywxzwxzwyywz)).sa5, (int32_t)(safe_mod_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_501.zxxw)).xzwzxwwwwwzwwzww)).s9, (*p_105))) ^ (*l_472)), p_2023->g_149)), (int32_t)p_2023->g_340.s2))), ((VECTOR(int32_t, 2))(0x05108127L))))).hi ^ l_502) || p_2023->g_251.y) , 7UL) , (*p_105))) , p_2023->g_503) == p_2023->g_503)) , l_504) & 0x7E0C1978A6306044L) , p_2023->g_35.s2))) | p_2023->g_146)) && p_2023->g_321.x) | l_504), l_502))), ((VECTOR(int32_t, 2))((-1L))), p_2023->g_480.z, p_2023->g_251.w, 0x1614266DL, l_505, 0x6EB88F19L, (-1L), ((VECTOR(int32_t, 4))(6L)), 1L, 0x4E4D7395L, (-1L))).s65)), 0x2EFFBE8AL)), 0x53954C75L, 0x661F1DE8L)).hi)), ((VECTOR(int32_t, 4))(0x3A664CC4L))))), p_2023->g_4, 0x68DEFB1AL, 1L, 0x74E29D92L, ((VECTOR(int32_t, 2))(0L)), (*l_472), 2L, 0L)).sfa))), ((VECTOR(int32_t, 4))(0x519C488DL)), 0x46DCD87DL, 0x29B4CFFDL)).s5;
                        --l_506;
                        (*l_264) = ((*l_472) = 0x3A3600A2L);
                    }
                    return p_2023->g_251.x;
                }
                if ((atomic_inc(&p_2023->g_atomic_input[20 * get_linear_group_id() + 4]) == 5))
                { /* block id: 202 */
                    int32_t l_509 = 5L;
                    int32_t l_510 = 0L;
                    l_510 ^= (l_509 = l_509);
                    unsigned int result = 0;
                    result += l_509;
                    result += l_510;
                    atomic_add(&p_2023->g_special_values[20 * get_linear_group_id() + 4], result);
                }
                else
                { /* block id: 205 */
                    (1 + 1);
                }
            }
        }
        else
        { /* block id: 209 */
            int8_t l_590[4] = {1L,1L,1L,1L};
            int32_t l_591[3][5][3] = {{{0x77470BCFL,0L,0x4BD131EFL},{0x77470BCFL,0L,0x4BD131EFL},{0x77470BCFL,0L,0x4BD131EFL},{0x77470BCFL,0L,0x4BD131EFL},{0x77470BCFL,0L,0x4BD131EFL}},{{0x77470BCFL,0L,0x4BD131EFL},{0x77470BCFL,0L,0x4BD131EFL},{0x77470BCFL,0L,0x4BD131EFL},{0x77470BCFL,0L,0x4BD131EFL},{0x77470BCFL,0L,0x4BD131EFL}},{{0x77470BCFL,0L,0x4BD131EFL},{0x77470BCFL,0L,0x4BD131EFL},{0x77470BCFL,0L,0x4BD131EFL},{0x77470BCFL,0L,0x4BD131EFL},{0x77470BCFL,0L,0x4BD131EFL}}};
            int32_t l_646 = (-1L);
            int i, j, k;
            if (p_2023->g_307)
            { /* block id: 210 */
                int64_t l_564 = 7L;
                if ((atomic_inc(&p_2023->g_atomic_input[20 * get_linear_group_id() + 0]) == 7))
                { /* block id: 212 */
                    int32_t l_511[3][5] = {{0x46FEF121L,0x46FEF121L,0x67EBBE0DL,3L,0x6C0A043FL},{0x46FEF121L,0x46FEF121L,0x67EBBE0DL,3L,0x6C0A043FL},{0x46FEF121L,0x46FEF121L,0x67EBBE0DL,3L,0x6C0A043FL}};
                    int32_t l_534[2];
                    int32_t *l_560 = &l_511[2][1];
                    uint8_t l_561 = 0x62L;
                    int32_t l_562 = 0x2868C7EBL;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_534[i] = 0x4839E504L;
                    for (l_511[0][1] = (-3); (l_511[0][1] != 18); l_511[0][1]++)
                    { /* block id: 215 */
                        int16_t l_514 = 0L;
                        VECTOR(uint32_t, 8) l_515 = (VECTOR(uint32_t, 8))(0xFE0F1F04L, (VECTOR(uint32_t, 4))(0xFE0F1F04L, (VECTOR(uint32_t, 2))(0xFE0F1F04L, 4294967293UL), 4294967293UL), 4294967293UL, 0xFE0F1F04L, 4294967293UL);
                        uint64_t l_516 = 18446744073709551609UL;
                        VECTOR(uint32_t, 2) l_517 = (VECTOR(uint32_t, 2))(4294967288UL, 4294967291UL);
                        uint16_t l_518 = 65535UL;
                        VECTOR(uint32_t, 4) l_519 = (VECTOR(uint32_t, 4))(0x599C2850L, (VECTOR(uint32_t, 2))(0x599C2850L, 0xE186DA83L), 0xE186DA83L);
                        VECTOR(uint32_t, 8) l_520 = (VECTOR(uint32_t, 8))(0x608E22BAL, (VECTOR(uint32_t, 4))(0x608E22BAL, (VECTOR(uint32_t, 2))(0x608E22BAL, 0xDAA9E716L), 0xDAA9E716L), 0xDAA9E716L, 0x608E22BAL, 0xDAA9E716L);
                        int32_t l_521 = 6L;
                        VECTOR(uint32_t, 16) l_522 = (VECTOR(uint32_t, 16))(0xCA5B474CL, (VECTOR(uint32_t, 4))(0xCA5B474CL, (VECTOR(uint32_t, 2))(0xCA5B474CL, 0x5F9B5D2FL), 0x5F9B5D2FL), 0x5F9B5D2FL, 0xCA5B474CL, 0x5F9B5D2FL, (VECTOR(uint32_t, 2))(0xCA5B474CL, 0x5F9B5D2FL), (VECTOR(uint32_t, 2))(0xCA5B474CL, 0x5F9B5D2FL), 0xCA5B474CL, 0x5F9B5D2FL, 0xCA5B474CL, 0x5F9B5D2FL);
                        int32_t l_523 = 0x11C312B5L;
                        VECTOR(uint64_t, 16) l_524 = (VECTOR(uint64_t, 16))(0x34595D0F35A1BD17L, (VECTOR(uint64_t, 4))(0x34595D0F35A1BD17L, (VECTOR(uint64_t, 2))(0x34595D0F35A1BD17L, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 0x34595D0F35A1BD17L, 18446744073709551610UL, (VECTOR(uint64_t, 2))(0x34595D0F35A1BD17L, 18446744073709551610UL), (VECTOR(uint64_t, 2))(0x34595D0F35A1BD17L, 18446744073709551610UL), 0x34595D0F35A1BD17L, 18446744073709551610UL, 0x34595D0F35A1BD17L, 18446744073709551610UL);
                        VECTOR(uint32_t, 2) l_525 = (VECTOR(uint32_t, 2))(4294967295UL, 1UL);
                        int64_t l_526 = 0x5AD9432346B5B363L;
                        int32_t l_527 = 0x38BC08ABL;
                        int32_t *l_528[9] = {&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527};
                        int32_t *l_529 = (void*)0;
                        int64_t l_530 = 0x782DA82EEB9079D8L;
                        int16_t l_531 = 0x3627L;
                        uint64_t l_532 = 0xA4695E191F77A93DL;
                        int8_t l_533 = 0x6BL;
                        int i;
                        l_528[3] = (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(l_514, ((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x9F8E5313L, 0UL)).even, 0UL, 0x4787641AL, 4294967288UL))))))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xE4C4BF1EL, 4294967295UL)).xxyy)).xzxxzxzy)), 0UL, 0x25BCB29FL, 2UL)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 4))(l_515.s7052)), ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 16))(0x34CA2C1FL, 0UL, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967290UL, 0x940139EAL)), 3UL, 4294967288UL)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(0x38783BA3L, 4294967295UL, 0xE3A6DB89L, 0x5702C165L)).wyyywwyxwyzxxyyw)).s5f, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 16))(0UL, l_516, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_517.yyxyyxyyxyxyxyxy)).even)), l_518, ((VECTOR(uint32_t, 4))(l_519.ywww)), 4UL)), ((VECTOR(uint32_t, 2))(l_520.s60)).yxxyxxyxyyxxxxyx))))), ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 8))(4294967288UL, FAKE_DIVERGE(p_2023->group_1_offset, get_group_id(1), 10), l_521, GROUP_DIVERGE(2, 1), ((VECTOR(uint32_t, 4))(l_522.s5740)).z, 7UL, 0UL, 4294967295UL)).s2265230500531437, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(4294967287UL, 0UL)))).xxxxxxyxyxyyyyyy))))).odd)).s14)).yyxyyxxx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967290UL, 4294967292UL)), (l_522.s7 = l_523), 4294967287UL, l_524.s7, 0x1C2F3CFEL, 0x8DB0A887L, 0xA775A189L))))).s4370042464455145, ((VECTOR(uint32_t, 4))(l_525.yxyy)).xxxyxzwzzzwwxyyy))).even, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL)).yxxxyyxx)).hi, ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 4))(l_526, ((VECTOR(int32_t, 2))((-2L))), 0x2992BE82L)).wyzzzzyz, ((VECTOR(int32_t, 8))((-1L)))))).s3515666723261354, ((VECTOR(uint32_t, 16))(4294967288UL))))).s6e06))).odd, ((VECTOR(uint32_t, 2))(1UL))))), ((VECTOR(uint32_t, 8))(4294967291UL)), ((VECTOR(uint32_t, 2))(9UL)), ((VECTOR(uint32_t, 2))(0x4C504598L)), 3UL, 1UL)).odd))).s1415353063513006)).s59))).xyxxyyxx)), 0xACE87130L, l_527, ((VECTOR(uint32_t, 4))(0x8B112A16L)), 0xEB079727L, 0x18BF719FL)).s22))), ((VECTOR(uint32_t, 8))(0xA6746D62L)), 9UL, 4UL, 0x9F019B49L, 4294967290UL)), ((VECTOR(uint32_t, 16))(0x11B28FE6L)), ((VECTOR(uint32_t, 16))(0xA1198576L))))).s97))).xxyx))).xwyzyxzy)).s4425622113614301, ((VECTOR(uint32_t, 16))(0x9F5EDA7DL))))).scfae)).z , l_528[8]);
                        l_529 = (void*)0;
                        l_531 |= (l_530 = 0x2A7E2A1EL);
                        l_533 ^= l_532;
                    }
                    if (l_534[0])
                    { /* block id: 223 */
                        uint32_t l_537 = 0xB8A5A70AL;
                        uint32_t *l_536[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint32_t **l_535 = &l_536[1];
                        uint32_t **l_538 = &l_536[0];
                        uint32_t **l_539 = &l_536[0];
                        int16_t l_540 = (-1L);
                        int16_t l_541 = 0x0F1FL;
                        int32_t l_542 = 0x123B2F49L;
                        int16_t l_543 = 0x3CBCL;
                        uint32_t l_544 = 0x8A85EDA9L;
                        uint32_t l_547[1];
                        int32_t l_549 = 0x3D89DA2DL;
                        int32_t *l_548 = &l_549;
                        int32_t *l_550[6];
                        uint32_t l_551 = 4294967292UL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_547[i] = 0x0643326AL;
                        for (i = 0; i < 6; i++)
                            l_550[i] = &l_549;
                        l_539 = (l_538 = l_535);
                        l_548 = (l_540 , ((--l_544) , ((((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(1UL, 0UL)), 0x94FAL, 65535UL)), (uint16_t)((VECTOR(uint16_t, 4))(1UL, 0UL, 0x07D8L, 0x75B9L)).z))).w , l_547[0]) , (void*)0)));
                        l_550[1] = (void*)0;
                        ++l_551;
                    }
                    else
                    { /* block id: 230 */
                        uint32_t l_554 = 0xC47F2EA7L;
                        int32_t l_556 = 0L;
                        int32_t *l_555 = &l_556;
                        int8_t l_557[5][5] = {{0x3EL,(-1L),0x3EL,0x3EL,(-1L)},{0x3EL,(-1L),0x3EL,0x3EL,(-1L)},{0x3EL,(-1L),0x3EL,0x3EL,(-1L)},{0x3EL,(-1L),0x3EL,0x3EL,(-1L)},{0x3EL,(-1L),0x3EL,0x3EL,(-1L)}};
                        int32_t *l_558[4] = {&l_556,&l_556,&l_556,&l_556};
                        int32_t *l_559[1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_559[i] = &l_556;
                        l_534[0] ^= l_554;
                        l_555 = (void*)0;
                        l_557[1][2] &= 0L;
                        l_559[0] = l_558[1];
                    }
                    l_560 = (void*)0;
                    l_562 = (l_561 &= ((VECTOR(int32_t, 2))(0x4D0EB9A4L, 0x2DF1F223L)).even);
                    unsigned int result = 0;
                    int l_511_i0, l_511_i1;
                    for (l_511_i0 = 0; l_511_i0 < 3; l_511_i0++) {
                        for (l_511_i1 = 0; l_511_i1 < 5; l_511_i1++) {
                            result += l_511[l_511_i0][l_511_i1];
                        }
                    }
                    int l_534_i0;
                    for (l_534_i0 = 0; l_534_i0 < 2; l_534_i0++) {
                        result += l_534[l_534_i0];
                    }
                    result += l_561;
                    result += l_562;
                    atomic_add(&p_2023->g_special_values[20 * get_linear_group_id() + 0], result);
                }
                else
                { /* block id: 239 */
                    (1 + 1);
                }
                (*l_434) ^= ((((VECTOR(uint8_t, 2))(0x39L, 6UL)).odd ^ (safe_unary_minus_func_int16_t_s(p_2023->g_479.s5))) | l_564);
            }
            else
            { /* block id: 243 */
                int32_t *l_587 = (void*)0;
                int32_t *l_588 = &l_242;
                int32_t *l_589[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_589[i] = &l_242;
                if ((atomic_inc(&p_2023->g_atomic_input[20 * get_linear_group_id() + 2]) == 7))
                { /* block id: 245 */
                    int64_t l_565 = 0x35B0E53F1DB6CAE0L;
                    int32_t l_566 = 0x043D256BL;
                    int32_t l_567[4] = {0L,0L,0L,0L};
                    int16_t l_568 = (-1L);
                    VECTOR(int8_t, 4) l_569 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L);
                    uint8_t l_570 = 0x51L;
                    int32_t l_573 = 0x2909999CL;
                    int32_t *l_585 = &l_567[1];
                    int32_t *l_586 = &l_567[1];
                    int i;
                    ++l_570;
                    if (l_573)
                    { /* block id: 247 */
                        int32_t l_575 = 0L;
                        int32_t *l_574 = &l_575;
                        int32_t l_576 = 0x3D135EB6L;
                        int32_t *l_577 = &l_575;
                        int32_t *l_578 = &l_575;
                        int32_t *l_579[7];
                        VECTOR(int32_t, 8) l_580 = (VECTOR(int32_t, 8))(0x6C9C8D3AL, (VECTOR(int32_t, 4))(0x6C9C8D3AL, (VECTOR(int32_t, 2))(0x6C9C8D3AL, 0L), 0L), 0L, 0x6C9C8D3AL, 0L);
                        int16_t l_581 = 0L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_579[i] = &l_575;
                        l_574 = (void*)0;
                        l_579[4] = (l_578 = (l_576 , l_577));
                        l_581 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_580.s46)).xyyyxyxx)))))).s6;
                    }
                    else
                    { /* block id: 252 */
                        int32_t l_583 = (-2L);
                        int32_t *l_582 = &l_583;
                        int32_t *l_584[10][8] = {{&l_583,&l_583,&l_583,&l_583,&l_583,(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583,&l_583,&l_583,(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583,&l_583,&l_583,(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583,&l_583,&l_583,(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583,&l_583,&l_583,(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583,&l_583,&l_583,(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583,&l_583,&l_583,(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583,&l_583,&l_583,(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583,&l_583,&l_583,(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583,&l_583,&l_583,(void*)0,(void*)0,&l_583}};
                        int i, j;
                        l_584[0][6] = l_582;
                    }
                    l_586 = l_585;
                    unsigned int result = 0;
                    result += l_565;
                    result += l_566;
                    int l_567_i0;
                    for (l_567_i0 = 0; l_567_i0 < 4; l_567_i0++) {
                        result += l_567[l_567_i0];
                    }
                    result += l_568;
                    result += l_569.w;
                    result += l_569.z;
                    result += l_569.y;
                    result += l_569.x;
                    result += l_570;
                    result += l_573;
                    atomic_add(&p_2023->g_special_values[20 * get_linear_group_id() + 2], result);
                }
                else
                { /* block id: 256 */
                    (1 + 1);
                }
                --p_2023->g_592;
                if ((atomic_inc(&p_2023->g_atomic_input[20 * get_linear_group_id() + 6]) == 9))
                { /* block id: 261 */
                    int32_t *l_595 = (void*)0;
                    int32_t l_597 = 0x635A1720L;
                    int32_t *l_596 = &l_597;
                    l_596 = (l_595 = (void*)0);
                    for (l_597 = (-26); (l_597 < (-5)); ++l_597)
                    { /* block id: 266 */
                        int32_t l_600 = 0L;
                        uint16_t l_601[1][8] = {{0x736AL,0x736AL,0x736AL,0x736AL,0x736AL,0x736AL,0x736AL,0x736AL}};
                        int i, j;
                        l_601[0][1] &= (l_600 = l_600);
                    }
                    unsigned int result = 0;
                    result += l_597;
                    atomic_add(&p_2023->g_special_values[20 * get_linear_group_id() + 6], result);
                }
                else
                { /* block id: 270 */
                    (1 + 1);
                }
            }
            if (p_2023->g_88)
            { /* block id: 274 */
                int16_t *l_607 = &p_2023->g_306;
                int32_t l_608 = 2L;
                VECTOR(uint8_t, 2) l_614 = (VECTOR(uint8_t, 2))(255UL, 3UL);
                int16_t *l_621 = (void*)0;
                int16_t *l_622 = (void*)0;
                int16_t *l_623 = (void*)0;
                int16_t *l_624 = (void*)0;
                int16_t *l_625 = (void*)0;
                int16_t *l_626 = (void*)0;
                int16_t *l_627 = (void*)0;
                int32_t *l_629 = &p_2023->g_149;
                int32_t *l_647 = &l_608;
                int i;
                (*l_629) |= ((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((*l_472), (safe_unary_minus_func_int32_t_s((((*l_607) ^= (-1L)) != (l_608 , (((safe_lshift_func_uint8_t_u_u((((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(0xBB01L, 0xF3EAL, 5UL, 0x897CL)).wxxyxywxzzxyxwyz, ((VECTOR(uint16_t, 4))(0xA06CL, ((*p_105) || (((safe_mod_func_int8_t_s_s((p_2023->g_194 == &l_261), ((VECTOR(uint8_t, 8))(p_2023->g_613.sa606c16e)).s3)) , 6UL) < 0xE290DEBC33992ACAL)), 0UL, 65526UL)).yyywyyyzwzwywwzw))).s2c, ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(246UL, ((VECTOR(uint8_t, 2))(l_614.xx)), 1UL)).odd, ((VECTOR(uint8_t, 4))(p_2023->g_615.s7453)).lo))), ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_2023->g_616.xx)).xyxxyyxx)).s23, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 8))(65533UL, 65529UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((safe_mul_func_int16_t_s_s((p_2023->g_83.s3 = (safe_rshift_func_int16_t_s_s(((*p_2023->g_335) > (*l_434)), l_590[3]))), (**p_2023->g_334))) , 65528UL), l_614.y, ((VECTOR(uint16_t, 4))(65527UL)), ((VECTOR(uint16_t, 2))(0UL)), 1UL, ((VECTOR(uint16_t, 2))(0x4ACEL)), l_591[0][3][1], 0xA829L, ((VECTOR(uint16_t, 2))(0xE5EBL)), 0UL)).s79)), ((VECTOR(uint16_t, 2))(0x29DAL)), 65535UL, 0x2738L)).s6215172216524555, (uint16_t)(*p_2023->g_335)))).s0e)).xxxy)).lo, ((VECTOR(uint16_t, 2))(0xD2D1L))))).yyyyxyyy))).s50, ((VECTOR(uint16_t, 2))(0x16C3L))))), ((VECTOR(uint16_t, 2))(65531UL))))), ((VECTOR(uint16_t, 2))(0x56D4L)))))))).hi < l_628[1][2][0]), 0)) && 0x50C8E904L) , 0x6FC3L))))))), p_2023->g_92)) , (*l_434));
                (*l_647) |= (l_646 ^= (safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((p_2023->g_340.s2 != l_590[1]), (safe_mod_func_int64_t_s_s((*l_472), (-3L))))), 14)), ((*p_105) = FAKE_DIVERGE(p_2023->group_0_offset, get_group_id(0), 10)))) > (l_590[0] ^ (0x88E3L != (((safe_sub_func_uint16_t_u_u(0xD78EL, p_2023->g_205)) >= (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 0L)), 0x4FL, (*l_629), 1L, ((VECTOR(int8_t, 2))((-2L))), 8L, ((VECTOR(int8_t, 4))(0L)), (*l_434), p_2023->g_35.s2, 0x67L, (-7L))).s3 || 0x3EL)) || (*l_434))))), 5)) == p_2023->g_266), l_591[1][0][2])));
                if (p_2023->g_comm_values[p_2023->tid])
                { /* block id: 281 */
                    for (l_416 = 23; (l_416 != 23); ++l_416)
                    { /* block id: 284 */
                        p_2023->g_650[6] = &l_242;
                    }
                }
                else
                { /* block id: 287 */
                    (*l_434) |= (*l_647);
                }
            }
            else
            { /* block id: 290 */
                uint32_t l_653 = 0xE4C9802FL;
                (*l_472) = (0L > ((VECTOR(int32_t, 4))(0x2DAB04C5L, 0x5AC28AA8L, 2L, (-9L))).z);
                (*l_434) ^= (safe_mul_func_int8_t_s_s(l_653, 255UL));
            }
            if ((atomic_inc(&p_2023->g_atomic_input[20 * get_linear_group_id() + 9]) == 1))
            { /* block id: 295 */
                int32_t l_655 = 0x71CEFE36L;
                int32_t *l_654 = &l_655;
                int32_t *l_656 = &l_655;
                uint8_t l_657 = 0x2FL;
                int32_t l_658 = 1L;
                VECTOR(int16_t, 4) l_659 = (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, (-1L)), (-1L));
                VECTOR(int16_t, 4) l_660 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L);
                int32_t l_661 = 0x0BF4FC0CL;
                VECTOR(int64_t, 2) l_662 = (VECTOR(int64_t, 2))(0x2C79166CBA48E9BFL, 0x12BFC16CF829CD28L);
                int64_t l_663 = (-1L);
                VECTOR(int32_t, 4) l_664 = (VECTOR(int32_t, 4))(0x4F5076F5L, (VECTOR(int32_t, 2))(0x4F5076F5L, 0x39389418L), 0x39389418L);
                uint8_t l_665 = 0x77L;
                int i;
                l_656 = l_654;
                l_665 = ((l_657 , (l_658 , (l_663 = (l_662.y = (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(l_659.yy)), (int16_t)2L))), 1L, 0x34FCL)), ((VECTOR(int16_t, 4))(l_660.xyxz)))).s2 , (l_661 , 0x4DL)))))) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_664.wyzxwzyyyzzwwwzy)).hi)).s1);
                unsigned int result = 0;
                result += l_655;
                result += l_657;
                result += l_658;
                result += l_659.w;
                result += l_659.z;
                result += l_659.y;
                result += l_659.x;
                result += l_660.w;
                result += l_660.z;
                result += l_660.y;
                result += l_660.x;
                result += l_661;
                result += l_662.y;
                result += l_662.x;
                result += l_663;
                result += l_664.w;
                result += l_664.z;
                result += l_664.y;
                result += l_664.x;
                result += l_665;
                atomic_add(&p_2023->g_special_values[20 * get_linear_group_id() + 9], result);
            }
            else
            { /* block id: 300 */
                (1 + 1);
            }
        }
    }
    --p_2023->g_671;
    (*l_674) = &l_242;
    if ((atomic_inc(&p_2023->l_atomic_input[13]) == 1))
    { /* block id: 308 */
        int32_t l_675 = 0x4AEED85CL;
        int64_t l_790 = 0L;
        int64_t l_791 = 0L;
        for (l_675 = 24; (l_675 != (-25)); l_675 = safe_sub_func_uint16_t_u_u(l_675, 2))
        { /* block id: 311 */
            VECTOR(int32_t, 2) l_678 = (VECTOR(int32_t, 2))(1L, 0x172A4A94L);
            int32_t *l_775 = (void*)0;
            int32_t *l_776 = (void*)0;
            int16_t l_777 = 0x463DL;
            uint8_t l_778 = 0x58L;
            VECTOR(int16_t, 2) l_779 = (VECTOR(int16_t, 2))(5L, 0x1C49L);
            VECTOR(int16_t, 8) l_780 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
            VECTOR(int16_t, 8) l_781 = (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x435AL), 0x435AL), 0x435AL, (-5L), 0x435AL);
            int16_t l_782 = 0L;
            VECTOR(int16_t, 8) l_783 = (VECTOR(int16_t, 8))(0x4EBCL, (VECTOR(int16_t, 4))(0x4EBCL, (VECTOR(int16_t, 2))(0x4EBCL, 0L), 0L), 0L, 0x4EBCL, 0L);
            int16_t l_784 = (-1L);
            int32_t l_785 = (-1L);
            int8_t l_786 = (-1L);
            uint64_t l_787 = 0x4A33F9FC5A71CCB2L;
            int32_t l_788 = 0x5F5D03DFL;
            int32_t *l_789 = &l_788;
            int i;
            if (((VECTOR(int32_t, 16))(l_678.yxxyyyxyyyxxyxxy)).sb)
            { /* block id: 312 */
                int32_t l_680[6][6] = {{0x511C8BC2L,0x56ABAE23L,1L,0x73C97486L,0x56ABAE23L,0x73C97486L},{0x511C8BC2L,0x56ABAE23L,1L,0x73C97486L,0x56ABAE23L,0x73C97486L},{0x511C8BC2L,0x56ABAE23L,1L,0x73C97486L,0x56ABAE23L,0x73C97486L},{0x511C8BC2L,0x56ABAE23L,1L,0x73C97486L,0x56ABAE23L,0x73C97486L},{0x511C8BC2L,0x56ABAE23L,1L,0x73C97486L,0x56ABAE23L,0x73C97486L},{0x511C8BC2L,0x56ABAE23L,1L,0x73C97486L,0x56ABAE23L,0x73C97486L}};
                int32_t *l_679[8][7] = {{(void*)0,(void*)0,(void*)0,&l_680[3][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_680[3][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_680[3][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_680[3][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_680[3][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_680[3][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_680[3][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_680[3][0],(void*)0,(void*)0,(void*)0}};
                uint32_t l_681 = 4294967291UL;
                int i, j;
                l_679[0][3] = l_679[0][3];
                l_678.x = (-1L);
                l_681++;
            }
            else
            { /* block id: 316 */
                int16_t l_684 = (-1L);
                VECTOR(int32_t, 4) l_685 = (VECTOR(int32_t, 4))(0x16227EDFL, (VECTOR(int32_t, 2))(0x16227EDFL, 1L), 1L);
                VECTOR(int16_t, 2) l_686 = (VECTOR(int16_t, 2))(0x00F5L, 0L);
                VECTOR(uint16_t, 4) l_687 = (VECTOR(uint16_t, 4))(0x97F7L, (VECTOR(uint16_t, 2))(0x97F7L, 8UL), 8UL);
                uint8_t l_688 = 0x03L;
                int32_t l_689 = (-1L);
                int i;
                l_678.x = (GROUP_DIVERGE(2, 1) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(5L, 0x5CB201CDL)), l_684, 0L, 0x2163507BL, 0x00E29572L, (-1L), 0x53CB0E9FL, 0x07E34049L, 0x26F76FD5L, ((VECTOR(int32_t, 2))(l_685.ww)), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(l_686.yxyxxxxxyxxxxyyy)).s37a6, ((VECTOR(uint16_t, 16))(l_687.wwxywzxzxywxyywy)).s8003))))).se);
                if ((l_688 , l_689))
                { /* block id: 318 */
                    int32_t l_690[2];
                    VECTOR(int16_t, 4) l_702 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-10L)), (-10L));
                    int32_t l_703 = (-6L);
                    int32_t *l_704[2][3][9] = {{{&l_690[1],&l_690[0],&l_690[1],&l_690[0],&l_690[1],&l_690[0],&l_690[1],&l_690[1],&l_690[1]},{&l_690[1],&l_690[0],&l_690[1],&l_690[0],&l_690[1],&l_690[0],&l_690[1],&l_690[1],&l_690[1]},{&l_690[1],&l_690[0],&l_690[1],&l_690[0],&l_690[1],&l_690[0],&l_690[1],&l_690[1],&l_690[1]}},{{&l_690[1],&l_690[0],&l_690[1],&l_690[0],&l_690[1],&l_690[0],&l_690[1],&l_690[1],&l_690[1]},{&l_690[1],&l_690[0],&l_690[1],&l_690[0],&l_690[1],&l_690[0],&l_690[1],&l_690[1],&l_690[1]},{&l_690[1],&l_690[0],&l_690[1],&l_690[0],&l_690[1],&l_690[0],&l_690[1],&l_690[1],&l_690[1]}}};
                    int32_t *l_705 = &l_690[1];
                    int32_t *l_706[6];
                    int32_t *l_707 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_690[i] = 2L;
                    for (i = 0; i < 6; i++)
                        l_706[i] = (void*)0;
                    for (l_690[1] = 22; (l_690[1] > (-5)); l_690[1] = safe_sub_func_uint32_t_u_u(l_690[1], 9))
                    { /* block id: 321 */
                        VECTOR(int8_t, 8) l_693 = (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x79L), 0x79L), 0x79L, (-3L), 0x79L);
                        int64_t l_694 = 0x373D4F6EAAA98224L;
                        int64_t l_695 = 1L;
                        uint32_t l_696 = 2UL;
                        uint16_t l_699 = 0UL;
                        int i;
                        l_696++;
                        ++l_699;
                    }
                    l_707 = (l_706[4] = (l_705 = ((((VECTOR(int16_t, 2))(l_702.yz)).lo , l_703) , l_704[1][2][2])));
                    for (l_702.y = 8; (l_702.y < (-27)); l_702.y = safe_sub_func_int8_t_s_s(l_702.y, 9))
                    { /* block id: 330 */
                        int32_t l_710 = 2L;
                        uint8_t l_711 = 0x44L;
                        int32_t l_714 = (-1L);
                        int32_t l_715 = 0L;
                        uint8_t l_716 = 248UL;
                        int32_t *l_719 = &l_710;
                        int32_t l_720[3][10] = {{0x0EE7231CL,(-9L),0x1AE58D4DL,(-9L),0x0EE7231CL,0x0EE7231CL,(-9L),0x1AE58D4DL,(-9L),0x0EE7231CL},{0x0EE7231CL,(-9L),0x1AE58D4DL,(-9L),0x0EE7231CL,0x0EE7231CL,(-9L),0x1AE58D4DL,(-9L),0x0EE7231CL},{0x0EE7231CL,(-9L),0x1AE58D4DL,(-9L),0x0EE7231CL,0x0EE7231CL,(-9L),0x1AE58D4DL,(-9L),0x0EE7231CL}};
                        int32_t *l_723 = &l_715;
                        int i, j;
                        l_711++;
                        --l_716;
                        l_704[1][2][2] = l_719;
                        l_705 = (l_720[1][1] , ((l_688++) , l_723));
                    }
                }
                else
                { /* block id: 337 */
                    int32_t l_724 = 0x7C298222L;
                    int32_t l_751 = (-2L);
                    VECTOR(int16_t, 8) l_752 = (VECTOR(int16_t, 8))(0x2475L, (VECTOR(int16_t, 4))(0x2475L, (VECTOR(int16_t, 2))(0x2475L, (-1L)), (-1L)), (-1L), 0x2475L, (-1L));
                    VECTOR(int16_t, 4) l_753 = (VECTOR(int16_t, 4))(0x23C2L, (VECTOR(int16_t, 2))(0x23C2L, 0x5792L), 0x5792L);
                    int16_t l_754 = 1L;
                    VECTOR(int16_t, 16) l_755 = (VECTOR(int16_t, 16))(0x3D02L, (VECTOR(int16_t, 4))(0x3D02L, (VECTOR(int16_t, 2))(0x3D02L, 0x4E75L), 0x4E75L), 0x4E75L, 0x3D02L, 0x4E75L, (VECTOR(int16_t, 2))(0x3D02L, 0x4E75L), (VECTOR(int16_t, 2))(0x3D02L, 0x4E75L), 0x3D02L, 0x4E75L, 0x3D02L, 0x4E75L);
                    VECTOR(int16_t, 4) l_756 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x435DL), 0x435DL);
                    VECTOR(int16_t, 2) l_757 = (VECTOR(int16_t, 2))(0x7FE5L, 0x693DL);
                    uint64_t l_758 = 0xC9431F7B2BB0FDEBL;
                    VECTOR(int8_t, 4) l_759 = (VECTOR(int8_t, 4))(0x7FL, (VECTOR(int8_t, 2))(0x7FL, (-1L)), (-1L));
                    VECTOR(uint64_t, 2) l_760 = (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL);
                    int16_t l_761 = 0x2F4EL;
                    uint64_t l_762 = 0UL;
                    uint64_t l_765 = 0xA1E31B1D8FC3EEF9L;
                    uint16_t l_766 = 65535UL;
                    VECTOR(uint32_t, 8) l_767 = (VECTOR(uint32_t, 8))(0x006563F9L, (VECTOR(uint32_t, 4))(0x006563F9L, (VECTOR(uint32_t, 2))(0x006563F9L, 0x6A5F5159L), 0x6A5F5159L), 0x6A5F5159L, 0x006563F9L, 0x6A5F5159L);
                    int8_t l_768 = 1L;
                    uint32_t l_769 = 1UL;
                    int8_t l_770 = 0x3FL;
                    int32_t l_771 = (-5L);
                    int8_t l_772[10][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
                    int32_t *l_773 = (void*)0;
                    int32_t *l_774 = &l_724;
                    int i, j;
                    for (l_724 = 0; (l_724 >= 24); l_724++)
                    { /* block id: 340 */
                        uint16_t l_727 = 0UL;
                        uint32_t l_730 = 0UL;
                        int64_t l_731 = 0x19C8C60020225082L;
                        uint32_t l_732 = 0UL;
                        l_727--;
                        l_685.x = (-1L);
                        l_678.x = (l_685.x = ((l_730 , l_731) , l_732));
                    }
                    for (l_724 = 4; (l_724 < 20); l_724 = safe_add_func_uint64_t_u_u(l_724, 2))
                    { /* block id: 348 */
                        int32_t l_736 = 1L;
                        int32_t *l_735 = &l_736;
                        int32_t *l_737 = &l_736;
                        uint8_t l_738 = 1UL;
                        l_737 = l_735;
                        l_685.z &= ((VECTOR(int32_t, 2))(0x6894260FL, 0x0218A2CBL)).hi;
                        --l_738;
                    }
                    for (l_724 = 17; (l_724 == 19); l_724++)
                    { /* block id: 355 */
                        int64_t l_743[7][10][3] = {{{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L}},{{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L}},{{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L}},{{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L}},{{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L}},{{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L}},{{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L},{0L,0x7FFD14947E7901B4L,0x7FFD14947E7901B4L}}};
                        uint8_t l_744 = 0x0CL;
                        int64_t l_747 = 0x6121EDFFE900726DL;
                        uint32_t l_748[2][9];
                        int32_t l_749 = 0x712ED9F9L;
                        uint8_t l_750 = 0x59L;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_748[i][j] = 4294967292UL;
                        }
                        --l_744;
                        l_685.x = (l_747 , (l_678.x = l_748[1][0]));
                        l_749 = l_749;
                        l_685.z ^= l_750;
                    }
                    l_774 = (((((l_751 , 0L) , ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(l_752.s43)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x3324L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_753.zxwxxxzz)).lo)), 0x7BC6L, 0x5558L, 0x2A0BL)).even)), ((VECTOR(int16_t, 8))(0x4123L, l_754, ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_755.sfb076b35)).s4513372007161137)).sea, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))((-7L), 0x3C91L)).yyyyyxxx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 8))(l_756.zywywxzz)).s0773014641770267, ((VECTOR(int16_t, 8))(l_757.yxxxyyyy)).s6340227245263402))).se8b4)).zxzzxzzx))).s56))).yyxxyxxxyxyyxxyy, ((VECTOR(int16_t, 16))(0x7FF2L, ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))((-2L), l_758, ((VECTOR(int8_t, 2))(l_759.zy)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_760.xyyyyxxyyyxyxxxy)))).s8 , ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(0UL, 0x7AA0F6C6L)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(8UL, l_761, ((VECTOR(uint32_t, 4))((--l_762), 6UL, 0xDFF982E0L, 0xC8AC4228L)), 1UL, 0xFD077954L)))).s72, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x3C565149L, 4294967286UL)).yyyxxyyy)).s43))), ((VECTOR(uint32_t, 4))(l_765, l_766, 4294967289UL, 4294967287UL)).odd, ((VECTOR(uint32_t, 16))(l_767.s4712550660747457)).sf9))).even) , l_768), ((VECTOR(int8_t, 8))((-1L), 1L, (-2L), l_769, (-8L), ((VECTOR(int8_t, 2))(0x72L)), 0x70L)), (-2L), l_770, 6L, 0x5DL, l_771, 1L, 1L)).sf9ae)))))), ((VECTOR(int8_t, 8))(0x56L))))), 6L, (-1L), 0x65L, 1L, ((VECTOR(int8_t, 4))(0x35L)))).sd114, ((VECTOR(uint8_t, 4))(255UL))))).xxwyyzww))), ((VECTOR(int16_t, 2))(0x46B6L)), ((VECTOR(int16_t, 4))((-1L))), 0x01BBL))))).s57)), ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(6L))))), 0x0331L, 4L, 0L, 0x2608L)).even, ((VECTOR(int16_t, 4))(0x72BCL))))).lo)).yxyxyxyxxyxyxxyy, ((VECTOR(int16_t, 16))(0L))))).s44)).yyxx)).hi, ((VECTOR(int16_t, 2))(0x57EAL))))).yyxxyxyy, ((VECTOR(int16_t, 8))(4L))))).s4) , l_772[1][0]) , 0x9C5A0DCCL) , l_773);
                }
            }
            l_776 = l_775;
            l_775 = ((((l_777 &= (-1L)) , (l_778 , 0x10512C6E68CA6153L)) , (((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_779.xyyx)))).even)), ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))((-10L), ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((-1L), 0x3841L, 0x246FL, 1L)), 0x571FL, 0x16FFL, 1L, (-10L))).hi, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0x740BL, (-1L), (-1L), (-1L))).yyyyywxzzzwxxzyw)).scb75))), 0x0F62L, 0L, 0x0618L)).hi, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-9L), 0L)))).xxxx, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 2))(l_780.s35)).xxyy, ((VECTOR(int16_t, 16))(0x30C5L, 0x2152L, (-2L), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_781.s37)), l_782, 0x63D6L, ((VECTOR(int16_t, 4))(0L, ((VECTOR(int16_t, 2))(l_783.s21)), 0x6928L)))), l_784, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x637BL, (-1L))).xxxy)))).sb9b0)))))))), l_785, 0x005CL, 0L, l_786, l_787, 0x722CL, (-1L), ((VECTOR(int16_t, 4))(0L)), (-6L))).sfea1))))).yzzzxwyz)).s2364532315476344, ((VECTOR(int16_t, 16))(1L)), ((VECTOR(int16_t, 16))(0x4A96L))))).s5c))).lo , l_788)) , l_789);
        }
        l_791 &= l_790;
        unsigned int result = 0;
        result += l_675;
        result += l_790;
        result += l_791;
        atomic_add(&p_2023->l_special_values[13], result);
    }
    else
    { /* block id: 371 */
        (1 + 1);
    }
    return (*p_105);
}


/* ------------------------------------------ */
/* 
 * reads : p_2023->g_135 p_2023->g_151 p_2023->g_206
 * writes: p_2023->g_151 p_2023->g_206
 */
uint8_t * func_106(int8_t  p_107, int64_t  p_108, uint8_t * p_109, uint64_t  p_110, struct S0 * p_2023)
{ /* block id: 19 */
    int32_t *l_139 = &p_2023->g_4;
    int32_t **l_138 = &l_139;
    int32_t l_140 = 0x62ADE66CL;
    int16_t l_148[1][2];
    int32_t l_150 = 0x0B70258BL;
    VECTOR(int32_t, 4) l_203 = (VECTOR(int32_t, 4))(0x2974AF1BL, (VECTOR(int32_t, 2))(0x2974AF1BL, 0x17C0A964L), 0x17C0A964L);
    int32_t l_204 = 9L;
    uint8_t *l_209 = &p_2023->g_88;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_148[i][j] = (-6L);
    }
    for (p_107 = 0; (p_107 == 11); p_107 = safe_add_func_int8_t_s_s(p_107, 3))
    { /* block id: 22 */
        int32_t l_145 = 1L;
        VECTOR(uint16_t, 2) l_189 = (VECTOR(uint16_t, 2))(0xC722L, 0xDD69L);
        uint64_t *l_196 = (void*)0;
        uint64_t **l_195[4][7][6] = {{{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196}},{{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196}},{{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196}},{{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196},{&l_196,(void*)0,&l_196,&l_196,(void*)0,&l_196}}};
        VECTOR(int16_t, 16) l_198 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5656L), 0x5656L), 0x5656L, (-1L), 0x5656L, (VECTOR(int16_t, 2))((-1L), 0x5656L), (VECTOR(int16_t, 2))((-1L), 0x5656L), (-1L), 0x5656L, (-1L), 0x5656L);
        int32_t *l_199 = &l_150;
        int32_t *l_200 = &l_140;
        int32_t *l_201 = (void*)0;
        int32_t *l_202[1][3];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_202[i][j] = (void*)0;
        }
        l_140 = (p_2023->g_135[8][2][1] != l_138);
        for (p_108 = 0; (p_108 < (-5)); p_108 = safe_sub_func_uint8_t_u_u(p_108, 1))
        { /* block id: 26 */
            int32_t *l_143 = &l_140;
            int32_t *l_144[3][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int16_t l_147[8][5][6] = {{{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)}},{{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)}},{{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)}},{{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)}},{{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)}},{{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)}},{{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)}},{{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)},{(-6L),1L,5L,0x0363L,0x08F7L,(-6L)}}};
            int64_t l_197 = 0x3561A8A250D85C2BL;
            int i, j, k;
            p_2023->g_151++;
        }
        if (p_108)
            continue;
        --p_2023->g_206;
    }
    return l_209;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[97];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 97; i++)
            l_comm_values[i] = 1;
    struct S0 c_2024;
    struct S0* p_2023 = &c_2024;
    struct S0 c_2025 = {
        0x5052061FL, // p_2023->g_2
        0x683C8FC5L, // p_2023->g_3
        0x2C04EE7DL, // p_2023->g_4
        (VECTOR(uint16_t, 16))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0xE3CAL), 0xE3CAL), 0xE3CAL, 65531UL, 0xE3CAL, (VECTOR(uint16_t, 2))(65531UL, 0xE3CAL), (VECTOR(uint16_t, 2))(65531UL, 0xE3CAL), 65531UL, 0xE3CAL, 65531UL, 0xE3CAL), // p_2023->g_14
        (VECTOR(uint16_t, 4))(0x9523L, (VECTOR(uint16_t, 2))(0x9523L, 0x972CL), 0x972CL), // p_2023->g_15
        (VECTOR(int32_t, 8))(0x6C31937DL, (VECTOR(int32_t, 4))(0x6C31937DL, (VECTOR(int32_t, 2))(0x6C31937DL, 0x781562E4L), 0x781562E4L), 0x781562E4L, 0x6C31937DL, 0x781562E4L), // p_2023->g_35
        0x0846D72DL, // p_2023->g_49
        &p_2023->g_49, // p_2023->g_48
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L), // p_2023->g_67
        1UL, // p_2023->g_75
        (VECTOR(int16_t, 8))(0x780CL, (VECTOR(int16_t, 4))(0x780CL, (VECTOR(int16_t, 2))(0x780CL, 0x6D7BL), 0x6D7BL), 0x6D7BL, 0x780CL, 0x6D7BL), // p_2023->g_83
        0xD4L, // p_2023->g_88
        1UL, // p_2023->g_92
        (VECTOR(uint16_t, 2))(0x526EL, 0x3E1FL), // p_2023->g_128
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), // p_2023->g_137
        (void*)0, // p_2023->g_136
        {{{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136}},{{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136}},{{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136}},{{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136}},{{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136}},{{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136}},{{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136}},{{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136}},{{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136},{&p_2023->g_136,&p_2023->g_136,(void*)0,&p_2023->g_136}}}, // p_2023->g_135
        0x108CCFF5L, // p_2023->g_146
        0L, // p_2023->g_149
        0x04E7F97FL, // p_2023->g_151
        0x7BL, // p_2023->g_157
        0x5F1C3364L, // p_2023->g_158
        (void*)0, // p_2023->g_194
        5L, // p_2023->g_205
        0UL, // p_2023->g_206
        (VECTOR(int64_t, 16))(0x2DD8A9AB7FDA88B9L, (VECTOR(int64_t, 4))(0x2DD8A9AB7FDA88B9L, (VECTOR(int64_t, 2))(0x2DD8A9AB7FDA88B9L, 0x6571B35FC2B05F66L), 0x6571B35FC2B05F66L), 0x6571B35FC2B05F66L, 0x2DD8A9AB7FDA88B9L, 0x6571B35FC2B05F66L, (VECTOR(int64_t, 2))(0x2DD8A9AB7FDA88B9L, 0x6571B35FC2B05F66L), (VECTOR(int64_t, 2))(0x2DD8A9AB7FDA88B9L, 0x6571B35FC2B05F66L), 0x2DD8A9AB7FDA88B9L, 0x6571B35FC2B05F66L, 0x2DD8A9AB7FDA88B9L, 0x6571B35FC2B05F66L), // p_2023->g_247
        (VECTOR(uint32_t, 4))(0x93D004A9L, (VECTOR(uint32_t, 2))(0x93D004A9L, 4294967292UL), 4294967292UL), // p_2023->g_251
        18446744073709551610UL, // p_2023->g_266
        (-9L), // p_2023->g_306
        0UL, // p_2023->g_307
        (VECTOR(int16_t, 2))((-1L), 0L), // p_2023->g_321
        (VECTOR(int32_t, 16))(0x3FC61A89L, (VECTOR(int32_t, 4))(0x3FC61A89L, (VECTOR(int32_t, 2))(0x3FC61A89L, 0x4F06DC2BL), 0x4F06DC2BL), 0x4F06DC2BL, 0x3FC61A89L, 0x4F06DC2BL, (VECTOR(int32_t, 2))(0x3FC61A89L, 0x4F06DC2BL), (VECTOR(int32_t, 2))(0x3FC61A89L, 0x4F06DC2BL), 0x3FC61A89L, 0x4F06DC2BL, 0x3FC61A89L, 0x4F06DC2BL), // p_2023->g_323
        &p_2023->g_92, // p_2023->g_335
        &p_2023->g_335, // p_2023->g_334
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L)), // p_2023->g_340
        {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)}, // p_2023->g_399
        &p_2023->g_399[1], // p_2023->g_398
        &p_2023->g_398, // p_2023->g_397
        {1UL,18446744073709551608UL,1UL,1UL,18446744073709551608UL,1UL,1UL,18446744073709551608UL}, // p_2023->g_447
        {{&p_2023->g_334,&p_2023->g_334},{&p_2023->g_334,&p_2023->g_334},{&p_2023->g_334,&p_2023->g_334},{&p_2023->g_334,&p_2023->g_334},{&p_2023->g_334,&p_2023->g_334},{&p_2023->g_334,&p_2023->g_334},{&p_2023->g_334,&p_2023->g_334}}, // p_2023->g_450
        (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x67F501E1L), 0x67F501E1L), 0x67F501E1L, (-9L), 0x67F501E1L), // p_2023->g_479
        (VECTOR(int32_t, 4))(0x0E724027L, (VECTOR(int32_t, 2))(0x0E724027L, 1L), 1L), // p_2023->g_480
        (void*)0, // p_2023->g_503
        0x50L, // p_2023->g_592
        (VECTOR(uint8_t, 16))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 1UL), 1UL), 1UL, 254UL, 1UL, (VECTOR(uint8_t, 2))(254UL, 1UL), (VECTOR(uint8_t, 2))(254UL, 1UL), 254UL, 1UL, 254UL, 1UL), // p_2023->g_613
        (VECTOR(uint8_t, 8))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 0x6DL), 0x6DL), 0x6DL, 252UL, 0x6DL), // p_2023->g_615
        (VECTOR(uint16_t, 2))(0UL, 0UL), // p_2023->g_616
        {&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149,&p_2023->g_149}, // p_2023->g_650
        0x2630L, // p_2023->g_671
        (VECTOR(uint16_t, 8))(0xB83BL, (VECTOR(uint16_t, 4))(0xB83BL, (VECTOR(uint16_t, 2))(0xB83BL, 5UL), 5UL), 5UL, 0xB83BL, 5UL), // p_2023->g_889
        (VECTOR(int8_t, 2))(0L, (-5L)), // p_2023->g_893
        (VECTOR(int16_t, 2))((-4L), 0L), // p_2023->g_894
        (VECTOR(uint64_t, 16))(0x646E965CA7CF8F08L, (VECTOR(uint64_t, 4))(0x646E965CA7CF8F08L, (VECTOR(uint64_t, 2))(0x646E965CA7CF8F08L, 0UL), 0UL), 0UL, 0x646E965CA7CF8F08L, 0UL, (VECTOR(uint64_t, 2))(0x646E965CA7CF8F08L, 0UL), (VECTOR(uint64_t, 2))(0x646E965CA7CF8F08L, 0UL), 0x646E965CA7CF8F08L, 0UL, 0x646E965CA7CF8F08L, 0UL), // p_2023->g_942
        0x2026E339L, // p_2023->g_954
        18446744073709551615UL, // p_2023->g_964
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 254UL), 254UL), 254UL, 1UL, 254UL), // p_2023->g_975
        (VECTOR(uint8_t, 4))(0x64L, (VECTOR(uint8_t, 2))(0x64L, 0xECL), 0xECL), // p_2023->g_986
        (-8L), // p_2023->g_1001
        (-2L), // p_2023->g_1002
        (VECTOR(int16_t, 2))(0x21FAL, (-4L)), // p_2023->g_1017
        253UL, // p_2023->g_1024
        0x6FL, // p_2023->g_1025
        5UL, // p_2023->g_1026
        0xBEL, // p_2023->g_1027
        0xAFL, // p_2023->g_1028
        1UL, // p_2023->g_1029
        {{&p_2023->g_1028,&p_2023->g_1026,&p_2023->g_1028,&p_2023->g_1028,&p_2023->g_1026},{&p_2023->g_1028,&p_2023->g_1026,&p_2023->g_1028,&p_2023->g_1028,&p_2023->g_1026},{&p_2023->g_1028,&p_2023->g_1026,&p_2023->g_1028,&p_2023->g_1028,&p_2023->g_1026},{&p_2023->g_1028,&p_2023->g_1026,&p_2023->g_1028,&p_2023->g_1028,&p_2023->g_1026},{&p_2023->g_1028,&p_2023->g_1026,&p_2023->g_1028,&p_2023->g_1028,&p_2023->g_1026}}, // p_2023->g_1023
        &p_2023->g_1023[2][4], // p_2023->g_1022
        (-1L), // p_2023->g_1109
        (void*)0, // p_2023->g_1133
        (VECTOR(uint16_t, 16))(0x09BBL, (VECTOR(uint16_t, 4))(0x09BBL, (VECTOR(uint16_t, 2))(0x09BBL, 0xDD27L), 0xDD27L), 0xDD27L, 0x09BBL, 0xDD27L, (VECTOR(uint16_t, 2))(0x09BBL, 0xDD27L), (VECTOR(uint16_t, 2))(0x09BBL, 0xDD27L), 0x09BBL, 0xDD27L, 0x09BBL, 0xDD27L), // p_2023->g_1139
        (VECTOR(uint16_t, 8))(0x73CDL, (VECTOR(uint16_t, 4))(0x73CDL, (VECTOR(uint16_t, 2))(0x73CDL, 0x678EL), 0x678EL), 0x678EL, 0x73CDL, 0x678EL), // p_2023->g_1140
        0L, // p_2023->g_1169
        (VECTOR(uint16_t, 2))(65535UL, 65533UL), // p_2023->g_1190
        (void*)0, // p_2023->g_1214
        &p_2023->g_1214, // p_2023->g_1213
        (VECTOR(int32_t, 2))(0x1E593C93L, 4L), // p_2023->g_1365
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-5L)), (-5L)), (-5L), (-1L), (-5L), (VECTOR(int32_t, 2))((-1L), (-5L)), (VECTOR(int32_t, 2))((-1L), (-5L)), (-1L), (-5L), (-1L), (-5L)), // p_2023->g_1410
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 2UL), 2UL), // p_2023->g_1432
        (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 0xB7335818CE3238DEL), 0xB7335818CE3238DEL), // p_2023->g_1433
        (VECTOR(uint16_t, 16))(0x7EE8L, (VECTOR(uint16_t, 4))(0x7EE8L, (VECTOR(uint16_t, 2))(0x7EE8L, 0UL), 0UL), 0UL, 0x7EE8L, 0UL, (VECTOR(uint16_t, 2))(0x7EE8L, 0UL), (VECTOR(uint16_t, 2))(0x7EE8L, 0UL), 0x7EE8L, 0UL, 0x7EE8L, 0UL), // p_2023->g_1446
        (VECTOR(int16_t, 8))(0x5C83L, (VECTOR(int16_t, 4))(0x5C83L, (VECTOR(int16_t, 2))(0x5C83L, 1L), 1L), 1L, 0x5C83L, 1L), // p_2023->g_1490
        (VECTOR(uint8_t, 2))(0x24L, 3UL), // p_2023->g_1496
        (VECTOR(uint64_t, 4))(0x6D6F89E0199E8134L, (VECTOR(uint64_t, 2))(0x6D6F89E0199E8134L, 18446744073709551611UL), 18446744073709551611UL), // p_2023->g_1504
        (void*)0, // p_2023->g_1541
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x71L), 0x71L), // p_2023->g_1567
        (VECTOR(int8_t, 2))(0x00L, (-6L)), // p_2023->g_1569
        (VECTOR(int8_t, 2))(5L, 0x10L), // p_2023->g_1570
        (void*)0, // p_2023->g_1575
        &p_2023->g_1575, // p_2023->g_1574
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 6L), 6L), // p_2023->g_1611
        (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, (-7L)), (-7L)), // p_2023->g_1668
        (VECTOR(uint16_t, 2))(0x8E7FL, 1UL), // p_2023->g_1685
        (VECTOR(uint16_t, 16))(0x2A1EL, (VECTOR(uint16_t, 4))(0x2A1EL, (VECTOR(uint16_t, 2))(0x2A1EL, 65530UL), 65530UL), 65530UL, 0x2A1EL, 65530UL, (VECTOR(uint16_t, 2))(0x2A1EL, 65530UL), (VECTOR(uint16_t, 2))(0x2A1EL, 65530UL), 0x2A1EL, 65530UL, 0x2A1EL, 65530UL), // p_2023->g_1711
        (VECTOR(uint16_t, 16))(0x38D4L, (VECTOR(uint16_t, 4))(0x38D4L, (VECTOR(uint16_t, 2))(0x38D4L, 0UL), 0UL), 0UL, 0x38D4L, 0UL, (VECTOR(uint16_t, 2))(0x38D4L, 0UL), (VECTOR(uint16_t, 2))(0x38D4L, 0UL), 0x38D4L, 0UL, 0x38D4L, 0UL), // p_2023->g_1727
        (VECTOR(int16_t, 16))(0x0F4CL, (VECTOR(int16_t, 4))(0x0F4CL, (VECTOR(int16_t, 2))(0x0F4CL, 7L), 7L), 7L, 0x0F4CL, 7L, (VECTOR(int16_t, 2))(0x0F4CL, 7L), (VECTOR(int16_t, 2))(0x0F4CL, 7L), 0x0F4CL, 7L, 0x0F4CL, 7L), // p_2023->g_1737
        &p_2023->g_1109, // p_2023->g_1766
        &p_2023->g_1766, // p_2023->g_1765
        &p_2023->g_1765, // p_2023->g_1764
        (VECTOR(int16_t, 8))(0x7BE6L, (VECTOR(int16_t, 4))(0x7BE6L, (VECTOR(int16_t, 2))(0x7BE6L, 3L), 3L), 3L, 0x7BE6L, 3L), // p_2023->g_1770
        (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0L), 0L), // p_2023->g_1807
        (VECTOR(uint16_t, 16))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 65532UL), 65532UL), 65532UL, 65527UL, 65532UL, (VECTOR(uint16_t, 2))(65527UL, 65532UL), (VECTOR(uint16_t, 2))(65527UL, 65532UL), 65527UL, 65532UL, 65527UL, 65532UL), // p_2023->g_1829
        {{{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149}},{{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149},{&p_2023->g_4,(void*)0,&p_2023->g_149}}}, // p_2023->g_1830
        (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0xD075F43CL), 0xD075F43CL), 0xD075F43CL, 4294967290UL, 0xD075F43CL, (VECTOR(uint32_t, 2))(4294967290UL, 0xD075F43CL), (VECTOR(uint32_t, 2))(4294967290UL, 0xD075F43CL), 4294967290UL, 0xD075F43CL, 4294967290UL, 0xD075F43CL), // p_2023->g_1845
        {(-3L),(-3L),(-3L)}, // p_2023->g_1874
        (-1L), // p_2023->g_1903
        1L, // p_2023->g_1909
        &p_2023->g_1909, // p_2023->g_1908
        &p_2023->g_1908, // p_2023->g_1907
        &p_2023->g_1907, // p_2023->g_1906
        (VECTOR(uint16_t, 2))(0x3AEEL, 4UL), // p_2023->g_1937
        (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 1UL), 1UL), 1UL, 6UL, 1UL, (VECTOR(uint16_t, 2))(6UL, 1UL), (VECTOR(uint16_t, 2))(6UL, 1UL), 6UL, 1UL, 6UL, 1UL), // p_2023->g_1938
        (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0UL), 0UL), 0UL, 4294967293UL, 0UL, (VECTOR(uint32_t, 2))(4294967293UL, 0UL), (VECTOR(uint32_t, 2))(4294967293UL, 0UL), 4294967293UL, 0UL, 4294967293UL, 0UL), // p_2023->g_1961
        (VECTOR(uint32_t, 2))(5UL, 1UL), // p_2023->g_1963
        (VECTOR(uint32_t, 2))(4294967295UL, 4294967292UL), // p_2023->g_1966
        (VECTOR(uint32_t, 8))(0xCC2D51F9L, (VECTOR(uint32_t, 4))(0xCC2D51F9L, (VECTOR(uint32_t, 2))(0xCC2D51F9L, 1UL), 1UL), 1UL, 0xCC2D51F9L, 1UL), // p_2023->g_1968
        (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0xE530D105L), 0xE530D105L), 0xE530D105L, 3UL, 0xE530D105L), // p_2023->g_1970
        0x38A64BF3L, // p_2023->g_1984
        (VECTOR(int32_t, 2))(6L, 0L), // p_2023->g_1985
        (VECTOR(int32_t, 2))(0x04898BB3L, 0x12B70E89L), // p_2023->g_1987
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x024B7546L), 0x024B7546L), // p_2023->g_1988
        (VECTOR(int64_t, 2))(0x0D32C3CFB5C66447L, (-9L)), // p_2023->g_1995
        (VECTOR(int8_t, 4))(0x6DL, (VECTOR(int8_t, 2))(0x6DL, 0L), 0L), // p_2023->g_2021
        0x6F5EL, // p_2023->g_2022
        0, // p_2023->v_collective
        sequence_input[get_global_id(0)], // p_2023->global_0_offset
        sequence_input[get_global_id(1)], // p_2023->global_1_offset
        sequence_input[get_global_id(2)], // p_2023->global_2_offset
        sequence_input[get_local_id(0)], // p_2023->local_0_offset
        sequence_input[get_local_id(1)], // p_2023->local_1_offset
        sequence_input[get_local_id(2)], // p_2023->local_2_offset
        sequence_input[get_group_id(0)], // p_2023->group_0_offset
        sequence_input[get_group_id(1)], // p_2023->group_1_offset
        sequence_input[get_group_id(2)], // p_2023->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 97)), permutations[0][get_linear_local_id()])), // p_2023->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_2024 = c_2025;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2023);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2023->g_2, "p_2023->g_2", print_hash_value);
    transparent_crc(p_2023->g_3, "p_2023->g_3", print_hash_value);
    transparent_crc(p_2023->g_4, "p_2023->g_4", print_hash_value);
    transparent_crc(p_2023->g_14.s0, "p_2023->g_14.s0", print_hash_value);
    transparent_crc(p_2023->g_14.s1, "p_2023->g_14.s1", print_hash_value);
    transparent_crc(p_2023->g_14.s2, "p_2023->g_14.s2", print_hash_value);
    transparent_crc(p_2023->g_14.s3, "p_2023->g_14.s3", print_hash_value);
    transparent_crc(p_2023->g_14.s4, "p_2023->g_14.s4", print_hash_value);
    transparent_crc(p_2023->g_14.s5, "p_2023->g_14.s5", print_hash_value);
    transparent_crc(p_2023->g_14.s6, "p_2023->g_14.s6", print_hash_value);
    transparent_crc(p_2023->g_14.s7, "p_2023->g_14.s7", print_hash_value);
    transparent_crc(p_2023->g_14.s8, "p_2023->g_14.s8", print_hash_value);
    transparent_crc(p_2023->g_14.s9, "p_2023->g_14.s9", print_hash_value);
    transparent_crc(p_2023->g_14.sa, "p_2023->g_14.sa", print_hash_value);
    transparent_crc(p_2023->g_14.sb, "p_2023->g_14.sb", print_hash_value);
    transparent_crc(p_2023->g_14.sc, "p_2023->g_14.sc", print_hash_value);
    transparent_crc(p_2023->g_14.sd, "p_2023->g_14.sd", print_hash_value);
    transparent_crc(p_2023->g_14.se, "p_2023->g_14.se", print_hash_value);
    transparent_crc(p_2023->g_14.sf, "p_2023->g_14.sf", print_hash_value);
    transparent_crc(p_2023->g_15.x, "p_2023->g_15.x", print_hash_value);
    transparent_crc(p_2023->g_15.y, "p_2023->g_15.y", print_hash_value);
    transparent_crc(p_2023->g_15.z, "p_2023->g_15.z", print_hash_value);
    transparent_crc(p_2023->g_15.w, "p_2023->g_15.w", print_hash_value);
    transparent_crc(p_2023->g_35.s0, "p_2023->g_35.s0", print_hash_value);
    transparent_crc(p_2023->g_35.s1, "p_2023->g_35.s1", print_hash_value);
    transparent_crc(p_2023->g_35.s2, "p_2023->g_35.s2", print_hash_value);
    transparent_crc(p_2023->g_35.s3, "p_2023->g_35.s3", print_hash_value);
    transparent_crc(p_2023->g_35.s4, "p_2023->g_35.s4", print_hash_value);
    transparent_crc(p_2023->g_35.s5, "p_2023->g_35.s5", print_hash_value);
    transparent_crc(p_2023->g_35.s6, "p_2023->g_35.s6", print_hash_value);
    transparent_crc(p_2023->g_35.s7, "p_2023->g_35.s7", print_hash_value);
    transparent_crc(p_2023->g_49, "p_2023->g_49", print_hash_value);
    transparent_crc(p_2023->g_67.s0, "p_2023->g_67.s0", print_hash_value);
    transparent_crc(p_2023->g_67.s1, "p_2023->g_67.s1", print_hash_value);
    transparent_crc(p_2023->g_67.s2, "p_2023->g_67.s2", print_hash_value);
    transparent_crc(p_2023->g_67.s3, "p_2023->g_67.s3", print_hash_value);
    transparent_crc(p_2023->g_67.s4, "p_2023->g_67.s4", print_hash_value);
    transparent_crc(p_2023->g_67.s5, "p_2023->g_67.s5", print_hash_value);
    transparent_crc(p_2023->g_67.s6, "p_2023->g_67.s6", print_hash_value);
    transparent_crc(p_2023->g_67.s7, "p_2023->g_67.s7", print_hash_value);
    transparent_crc(p_2023->g_75, "p_2023->g_75", print_hash_value);
    transparent_crc(p_2023->g_83.s0, "p_2023->g_83.s0", print_hash_value);
    transparent_crc(p_2023->g_83.s1, "p_2023->g_83.s1", print_hash_value);
    transparent_crc(p_2023->g_83.s2, "p_2023->g_83.s2", print_hash_value);
    transparent_crc(p_2023->g_83.s3, "p_2023->g_83.s3", print_hash_value);
    transparent_crc(p_2023->g_83.s4, "p_2023->g_83.s4", print_hash_value);
    transparent_crc(p_2023->g_83.s5, "p_2023->g_83.s5", print_hash_value);
    transparent_crc(p_2023->g_83.s6, "p_2023->g_83.s6", print_hash_value);
    transparent_crc(p_2023->g_83.s7, "p_2023->g_83.s7", print_hash_value);
    transparent_crc(p_2023->g_88, "p_2023->g_88", print_hash_value);
    transparent_crc(p_2023->g_92, "p_2023->g_92", print_hash_value);
    transparent_crc(p_2023->g_128.x, "p_2023->g_128.x", print_hash_value);
    transparent_crc(p_2023->g_128.y, "p_2023->g_128.y", print_hash_value);
    transparent_crc(p_2023->g_137.x, "p_2023->g_137.x", print_hash_value);
    transparent_crc(p_2023->g_137.y, "p_2023->g_137.y", print_hash_value);
    transparent_crc(p_2023->g_137.z, "p_2023->g_137.z", print_hash_value);
    transparent_crc(p_2023->g_137.w, "p_2023->g_137.w", print_hash_value);
    transparent_crc(p_2023->g_146, "p_2023->g_146", print_hash_value);
    transparent_crc(p_2023->g_149, "p_2023->g_149", print_hash_value);
    transparent_crc(p_2023->g_151, "p_2023->g_151", print_hash_value);
    transparent_crc(p_2023->g_157, "p_2023->g_157", print_hash_value);
    transparent_crc(p_2023->g_158, "p_2023->g_158", print_hash_value);
    transparent_crc(p_2023->g_205, "p_2023->g_205", print_hash_value);
    transparent_crc(p_2023->g_206, "p_2023->g_206", print_hash_value);
    transparent_crc(p_2023->g_247.s0, "p_2023->g_247.s0", print_hash_value);
    transparent_crc(p_2023->g_247.s1, "p_2023->g_247.s1", print_hash_value);
    transparent_crc(p_2023->g_247.s2, "p_2023->g_247.s2", print_hash_value);
    transparent_crc(p_2023->g_247.s3, "p_2023->g_247.s3", print_hash_value);
    transparent_crc(p_2023->g_247.s4, "p_2023->g_247.s4", print_hash_value);
    transparent_crc(p_2023->g_247.s5, "p_2023->g_247.s5", print_hash_value);
    transparent_crc(p_2023->g_247.s6, "p_2023->g_247.s6", print_hash_value);
    transparent_crc(p_2023->g_247.s7, "p_2023->g_247.s7", print_hash_value);
    transparent_crc(p_2023->g_247.s8, "p_2023->g_247.s8", print_hash_value);
    transparent_crc(p_2023->g_247.s9, "p_2023->g_247.s9", print_hash_value);
    transparent_crc(p_2023->g_247.sa, "p_2023->g_247.sa", print_hash_value);
    transparent_crc(p_2023->g_247.sb, "p_2023->g_247.sb", print_hash_value);
    transparent_crc(p_2023->g_247.sc, "p_2023->g_247.sc", print_hash_value);
    transparent_crc(p_2023->g_247.sd, "p_2023->g_247.sd", print_hash_value);
    transparent_crc(p_2023->g_247.se, "p_2023->g_247.se", print_hash_value);
    transparent_crc(p_2023->g_247.sf, "p_2023->g_247.sf", print_hash_value);
    transparent_crc(p_2023->g_251.x, "p_2023->g_251.x", print_hash_value);
    transparent_crc(p_2023->g_251.y, "p_2023->g_251.y", print_hash_value);
    transparent_crc(p_2023->g_251.z, "p_2023->g_251.z", print_hash_value);
    transparent_crc(p_2023->g_251.w, "p_2023->g_251.w", print_hash_value);
    transparent_crc(p_2023->g_266, "p_2023->g_266", print_hash_value);
    transparent_crc(p_2023->g_306, "p_2023->g_306", print_hash_value);
    transparent_crc(p_2023->g_307, "p_2023->g_307", print_hash_value);
    transparent_crc(p_2023->g_321.x, "p_2023->g_321.x", print_hash_value);
    transparent_crc(p_2023->g_321.y, "p_2023->g_321.y", print_hash_value);
    transparent_crc(p_2023->g_323.s0, "p_2023->g_323.s0", print_hash_value);
    transparent_crc(p_2023->g_323.s1, "p_2023->g_323.s1", print_hash_value);
    transparent_crc(p_2023->g_323.s2, "p_2023->g_323.s2", print_hash_value);
    transparent_crc(p_2023->g_323.s3, "p_2023->g_323.s3", print_hash_value);
    transparent_crc(p_2023->g_323.s4, "p_2023->g_323.s4", print_hash_value);
    transparent_crc(p_2023->g_323.s5, "p_2023->g_323.s5", print_hash_value);
    transparent_crc(p_2023->g_323.s6, "p_2023->g_323.s6", print_hash_value);
    transparent_crc(p_2023->g_323.s7, "p_2023->g_323.s7", print_hash_value);
    transparent_crc(p_2023->g_323.s8, "p_2023->g_323.s8", print_hash_value);
    transparent_crc(p_2023->g_323.s9, "p_2023->g_323.s9", print_hash_value);
    transparent_crc(p_2023->g_323.sa, "p_2023->g_323.sa", print_hash_value);
    transparent_crc(p_2023->g_323.sb, "p_2023->g_323.sb", print_hash_value);
    transparent_crc(p_2023->g_323.sc, "p_2023->g_323.sc", print_hash_value);
    transparent_crc(p_2023->g_323.sd, "p_2023->g_323.sd", print_hash_value);
    transparent_crc(p_2023->g_323.se, "p_2023->g_323.se", print_hash_value);
    transparent_crc(p_2023->g_323.sf, "p_2023->g_323.sf", print_hash_value);
    transparent_crc(p_2023->g_340.s0, "p_2023->g_340.s0", print_hash_value);
    transparent_crc(p_2023->g_340.s1, "p_2023->g_340.s1", print_hash_value);
    transparent_crc(p_2023->g_340.s2, "p_2023->g_340.s2", print_hash_value);
    transparent_crc(p_2023->g_340.s3, "p_2023->g_340.s3", print_hash_value);
    transparent_crc(p_2023->g_340.s4, "p_2023->g_340.s4", print_hash_value);
    transparent_crc(p_2023->g_340.s5, "p_2023->g_340.s5", print_hash_value);
    transparent_crc(p_2023->g_340.s6, "p_2023->g_340.s6", print_hash_value);
    transparent_crc(p_2023->g_340.s7, "p_2023->g_340.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2023->g_399[i], "p_2023->g_399[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2023->g_447[i], "p_2023->g_447[i]", print_hash_value);

    }
    transparent_crc(p_2023->g_479.s0, "p_2023->g_479.s0", print_hash_value);
    transparent_crc(p_2023->g_479.s1, "p_2023->g_479.s1", print_hash_value);
    transparent_crc(p_2023->g_479.s2, "p_2023->g_479.s2", print_hash_value);
    transparent_crc(p_2023->g_479.s3, "p_2023->g_479.s3", print_hash_value);
    transparent_crc(p_2023->g_479.s4, "p_2023->g_479.s4", print_hash_value);
    transparent_crc(p_2023->g_479.s5, "p_2023->g_479.s5", print_hash_value);
    transparent_crc(p_2023->g_479.s6, "p_2023->g_479.s6", print_hash_value);
    transparent_crc(p_2023->g_479.s7, "p_2023->g_479.s7", print_hash_value);
    transparent_crc(p_2023->g_480.x, "p_2023->g_480.x", print_hash_value);
    transparent_crc(p_2023->g_480.y, "p_2023->g_480.y", print_hash_value);
    transparent_crc(p_2023->g_480.z, "p_2023->g_480.z", print_hash_value);
    transparent_crc(p_2023->g_480.w, "p_2023->g_480.w", print_hash_value);
    transparent_crc(p_2023->g_592, "p_2023->g_592", print_hash_value);
    transparent_crc(p_2023->g_613.s0, "p_2023->g_613.s0", print_hash_value);
    transparent_crc(p_2023->g_613.s1, "p_2023->g_613.s1", print_hash_value);
    transparent_crc(p_2023->g_613.s2, "p_2023->g_613.s2", print_hash_value);
    transparent_crc(p_2023->g_613.s3, "p_2023->g_613.s3", print_hash_value);
    transparent_crc(p_2023->g_613.s4, "p_2023->g_613.s4", print_hash_value);
    transparent_crc(p_2023->g_613.s5, "p_2023->g_613.s5", print_hash_value);
    transparent_crc(p_2023->g_613.s6, "p_2023->g_613.s6", print_hash_value);
    transparent_crc(p_2023->g_613.s7, "p_2023->g_613.s7", print_hash_value);
    transparent_crc(p_2023->g_613.s8, "p_2023->g_613.s8", print_hash_value);
    transparent_crc(p_2023->g_613.s9, "p_2023->g_613.s9", print_hash_value);
    transparent_crc(p_2023->g_613.sa, "p_2023->g_613.sa", print_hash_value);
    transparent_crc(p_2023->g_613.sb, "p_2023->g_613.sb", print_hash_value);
    transparent_crc(p_2023->g_613.sc, "p_2023->g_613.sc", print_hash_value);
    transparent_crc(p_2023->g_613.sd, "p_2023->g_613.sd", print_hash_value);
    transparent_crc(p_2023->g_613.se, "p_2023->g_613.se", print_hash_value);
    transparent_crc(p_2023->g_613.sf, "p_2023->g_613.sf", print_hash_value);
    transparent_crc(p_2023->g_615.s0, "p_2023->g_615.s0", print_hash_value);
    transparent_crc(p_2023->g_615.s1, "p_2023->g_615.s1", print_hash_value);
    transparent_crc(p_2023->g_615.s2, "p_2023->g_615.s2", print_hash_value);
    transparent_crc(p_2023->g_615.s3, "p_2023->g_615.s3", print_hash_value);
    transparent_crc(p_2023->g_615.s4, "p_2023->g_615.s4", print_hash_value);
    transparent_crc(p_2023->g_615.s5, "p_2023->g_615.s5", print_hash_value);
    transparent_crc(p_2023->g_615.s6, "p_2023->g_615.s6", print_hash_value);
    transparent_crc(p_2023->g_615.s7, "p_2023->g_615.s7", print_hash_value);
    transparent_crc(p_2023->g_616.x, "p_2023->g_616.x", print_hash_value);
    transparent_crc(p_2023->g_616.y, "p_2023->g_616.y", print_hash_value);
    transparent_crc(p_2023->g_671, "p_2023->g_671", print_hash_value);
    transparent_crc(p_2023->g_889.s0, "p_2023->g_889.s0", print_hash_value);
    transparent_crc(p_2023->g_889.s1, "p_2023->g_889.s1", print_hash_value);
    transparent_crc(p_2023->g_889.s2, "p_2023->g_889.s2", print_hash_value);
    transparent_crc(p_2023->g_889.s3, "p_2023->g_889.s3", print_hash_value);
    transparent_crc(p_2023->g_889.s4, "p_2023->g_889.s4", print_hash_value);
    transparent_crc(p_2023->g_889.s5, "p_2023->g_889.s5", print_hash_value);
    transparent_crc(p_2023->g_889.s6, "p_2023->g_889.s6", print_hash_value);
    transparent_crc(p_2023->g_889.s7, "p_2023->g_889.s7", print_hash_value);
    transparent_crc(p_2023->g_893.x, "p_2023->g_893.x", print_hash_value);
    transparent_crc(p_2023->g_893.y, "p_2023->g_893.y", print_hash_value);
    transparent_crc(p_2023->g_894.x, "p_2023->g_894.x", print_hash_value);
    transparent_crc(p_2023->g_894.y, "p_2023->g_894.y", print_hash_value);
    transparent_crc(p_2023->g_942.s0, "p_2023->g_942.s0", print_hash_value);
    transparent_crc(p_2023->g_942.s1, "p_2023->g_942.s1", print_hash_value);
    transparent_crc(p_2023->g_942.s2, "p_2023->g_942.s2", print_hash_value);
    transparent_crc(p_2023->g_942.s3, "p_2023->g_942.s3", print_hash_value);
    transparent_crc(p_2023->g_942.s4, "p_2023->g_942.s4", print_hash_value);
    transparent_crc(p_2023->g_942.s5, "p_2023->g_942.s5", print_hash_value);
    transparent_crc(p_2023->g_942.s6, "p_2023->g_942.s6", print_hash_value);
    transparent_crc(p_2023->g_942.s7, "p_2023->g_942.s7", print_hash_value);
    transparent_crc(p_2023->g_942.s8, "p_2023->g_942.s8", print_hash_value);
    transparent_crc(p_2023->g_942.s9, "p_2023->g_942.s9", print_hash_value);
    transparent_crc(p_2023->g_942.sa, "p_2023->g_942.sa", print_hash_value);
    transparent_crc(p_2023->g_942.sb, "p_2023->g_942.sb", print_hash_value);
    transparent_crc(p_2023->g_942.sc, "p_2023->g_942.sc", print_hash_value);
    transparent_crc(p_2023->g_942.sd, "p_2023->g_942.sd", print_hash_value);
    transparent_crc(p_2023->g_942.se, "p_2023->g_942.se", print_hash_value);
    transparent_crc(p_2023->g_942.sf, "p_2023->g_942.sf", print_hash_value);
    transparent_crc(p_2023->g_954, "p_2023->g_954", print_hash_value);
    transparent_crc(p_2023->g_964, "p_2023->g_964", print_hash_value);
    transparent_crc(p_2023->g_975.s0, "p_2023->g_975.s0", print_hash_value);
    transparent_crc(p_2023->g_975.s1, "p_2023->g_975.s1", print_hash_value);
    transparent_crc(p_2023->g_975.s2, "p_2023->g_975.s2", print_hash_value);
    transparent_crc(p_2023->g_975.s3, "p_2023->g_975.s3", print_hash_value);
    transparent_crc(p_2023->g_975.s4, "p_2023->g_975.s4", print_hash_value);
    transparent_crc(p_2023->g_975.s5, "p_2023->g_975.s5", print_hash_value);
    transparent_crc(p_2023->g_975.s6, "p_2023->g_975.s6", print_hash_value);
    transparent_crc(p_2023->g_975.s7, "p_2023->g_975.s7", print_hash_value);
    transparent_crc(p_2023->g_986.x, "p_2023->g_986.x", print_hash_value);
    transparent_crc(p_2023->g_986.y, "p_2023->g_986.y", print_hash_value);
    transparent_crc(p_2023->g_986.z, "p_2023->g_986.z", print_hash_value);
    transparent_crc(p_2023->g_986.w, "p_2023->g_986.w", print_hash_value);
    transparent_crc(p_2023->g_1001, "p_2023->g_1001", print_hash_value);
    transparent_crc(p_2023->g_1002, "p_2023->g_1002", print_hash_value);
    transparent_crc(p_2023->g_1017.x, "p_2023->g_1017.x", print_hash_value);
    transparent_crc(p_2023->g_1017.y, "p_2023->g_1017.y", print_hash_value);
    transparent_crc(p_2023->g_1024, "p_2023->g_1024", print_hash_value);
    transparent_crc(p_2023->g_1025, "p_2023->g_1025", print_hash_value);
    transparent_crc(p_2023->g_1026, "p_2023->g_1026", print_hash_value);
    transparent_crc(p_2023->g_1027, "p_2023->g_1027", print_hash_value);
    transparent_crc(p_2023->g_1028, "p_2023->g_1028", print_hash_value);
    transparent_crc(p_2023->g_1029, "p_2023->g_1029", print_hash_value);
    transparent_crc(p_2023->g_1109, "p_2023->g_1109", print_hash_value);
    transparent_crc(p_2023->g_1139.s0, "p_2023->g_1139.s0", print_hash_value);
    transparent_crc(p_2023->g_1139.s1, "p_2023->g_1139.s1", print_hash_value);
    transparent_crc(p_2023->g_1139.s2, "p_2023->g_1139.s2", print_hash_value);
    transparent_crc(p_2023->g_1139.s3, "p_2023->g_1139.s3", print_hash_value);
    transparent_crc(p_2023->g_1139.s4, "p_2023->g_1139.s4", print_hash_value);
    transparent_crc(p_2023->g_1139.s5, "p_2023->g_1139.s5", print_hash_value);
    transparent_crc(p_2023->g_1139.s6, "p_2023->g_1139.s6", print_hash_value);
    transparent_crc(p_2023->g_1139.s7, "p_2023->g_1139.s7", print_hash_value);
    transparent_crc(p_2023->g_1139.s8, "p_2023->g_1139.s8", print_hash_value);
    transparent_crc(p_2023->g_1139.s9, "p_2023->g_1139.s9", print_hash_value);
    transparent_crc(p_2023->g_1139.sa, "p_2023->g_1139.sa", print_hash_value);
    transparent_crc(p_2023->g_1139.sb, "p_2023->g_1139.sb", print_hash_value);
    transparent_crc(p_2023->g_1139.sc, "p_2023->g_1139.sc", print_hash_value);
    transparent_crc(p_2023->g_1139.sd, "p_2023->g_1139.sd", print_hash_value);
    transparent_crc(p_2023->g_1139.se, "p_2023->g_1139.se", print_hash_value);
    transparent_crc(p_2023->g_1139.sf, "p_2023->g_1139.sf", print_hash_value);
    transparent_crc(p_2023->g_1140.s0, "p_2023->g_1140.s0", print_hash_value);
    transparent_crc(p_2023->g_1140.s1, "p_2023->g_1140.s1", print_hash_value);
    transparent_crc(p_2023->g_1140.s2, "p_2023->g_1140.s2", print_hash_value);
    transparent_crc(p_2023->g_1140.s3, "p_2023->g_1140.s3", print_hash_value);
    transparent_crc(p_2023->g_1140.s4, "p_2023->g_1140.s4", print_hash_value);
    transparent_crc(p_2023->g_1140.s5, "p_2023->g_1140.s5", print_hash_value);
    transparent_crc(p_2023->g_1140.s6, "p_2023->g_1140.s6", print_hash_value);
    transparent_crc(p_2023->g_1140.s7, "p_2023->g_1140.s7", print_hash_value);
    transparent_crc(p_2023->g_1169, "p_2023->g_1169", print_hash_value);
    transparent_crc(p_2023->g_1190.x, "p_2023->g_1190.x", print_hash_value);
    transparent_crc(p_2023->g_1190.y, "p_2023->g_1190.y", print_hash_value);
    transparent_crc(p_2023->g_1365.x, "p_2023->g_1365.x", print_hash_value);
    transparent_crc(p_2023->g_1365.y, "p_2023->g_1365.y", print_hash_value);
    transparent_crc(p_2023->g_1410.s0, "p_2023->g_1410.s0", print_hash_value);
    transparent_crc(p_2023->g_1410.s1, "p_2023->g_1410.s1", print_hash_value);
    transparent_crc(p_2023->g_1410.s2, "p_2023->g_1410.s2", print_hash_value);
    transparent_crc(p_2023->g_1410.s3, "p_2023->g_1410.s3", print_hash_value);
    transparent_crc(p_2023->g_1410.s4, "p_2023->g_1410.s4", print_hash_value);
    transparent_crc(p_2023->g_1410.s5, "p_2023->g_1410.s5", print_hash_value);
    transparent_crc(p_2023->g_1410.s6, "p_2023->g_1410.s6", print_hash_value);
    transparent_crc(p_2023->g_1410.s7, "p_2023->g_1410.s7", print_hash_value);
    transparent_crc(p_2023->g_1410.s8, "p_2023->g_1410.s8", print_hash_value);
    transparent_crc(p_2023->g_1410.s9, "p_2023->g_1410.s9", print_hash_value);
    transparent_crc(p_2023->g_1410.sa, "p_2023->g_1410.sa", print_hash_value);
    transparent_crc(p_2023->g_1410.sb, "p_2023->g_1410.sb", print_hash_value);
    transparent_crc(p_2023->g_1410.sc, "p_2023->g_1410.sc", print_hash_value);
    transparent_crc(p_2023->g_1410.sd, "p_2023->g_1410.sd", print_hash_value);
    transparent_crc(p_2023->g_1410.se, "p_2023->g_1410.se", print_hash_value);
    transparent_crc(p_2023->g_1410.sf, "p_2023->g_1410.sf", print_hash_value);
    transparent_crc(p_2023->g_1432.x, "p_2023->g_1432.x", print_hash_value);
    transparent_crc(p_2023->g_1432.y, "p_2023->g_1432.y", print_hash_value);
    transparent_crc(p_2023->g_1432.z, "p_2023->g_1432.z", print_hash_value);
    transparent_crc(p_2023->g_1432.w, "p_2023->g_1432.w", print_hash_value);
    transparent_crc(p_2023->g_1433.x, "p_2023->g_1433.x", print_hash_value);
    transparent_crc(p_2023->g_1433.y, "p_2023->g_1433.y", print_hash_value);
    transparent_crc(p_2023->g_1433.z, "p_2023->g_1433.z", print_hash_value);
    transparent_crc(p_2023->g_1433.w, "p_2023->g_1433.w", print_hash_value);
    transparent_crc(p_2023->g_1446.s0, "p_2023->g_1446.s0", print_hash_value);
    transparent_crc(p_2023->g_1446.s1, "p_2023->g_1446.s1", print_hash_value);
    transparent_crc(p_2023->g_1446.s2, "p_2023->g_1446.s2", print_hash_value);
    transparent_crc(p_2023->g_1446.s3, "p_2023->g_1446.s3", print_hash_value);
    transparent_crc(p_2023->g_1446.s4, "p_2023->g_1446.s4", print_hash_value);
    transparent_crc(p_2023->g_1446.s5, "p_2023->g_1446.s5", print_hash_value);
    transparent_crc(p_2023->g_1446.s6, "p_2023->g_1446.s6", print_hash_value);
    transparent_crc(p_2023->g_1446.s7, "p_2023->g_1446.s7", print_hash_value);
    transparent_crc(p_2023->g_1446.s8, "p_2023->g_1446.s8", print_hash_value);
    transparent_crc(p_2023->g_1446.s9, "p_2023->g_1446.s9", print_hash_value);
    transparent_crc(p_2023->g_1446.sa, "p_2023->g_1446.sa", print_hash_value);
    transparent_crc(p_2023->g_1446.sb, "p_2023->g_1446.sb", print_hash_value);
    transparent_crc(p_2023->g_1446.sc, "p_2023->g_1446.sc", print_hash_value);
    transparent_crc(p_2023->g_1446.sd, "p_2023->g_1446.sd", print_hash_value);
    transparent_crc(p_2023->g_1446.se, "p_2023->g_1446.se", print_hash_value);
    transparent_crc(p_2023->g_1446.sf, "p_2023->g_1446.sf", print_hash_value);
    transparent_crc(p_2023->g_1490.s0, "p_2023->g_1490.s0", print_hash_value);
    transparent_crc(p_2023->g_1490.s1, "p_2023->g_1490.s1", print_hash_value);
    transparent_crc(p_2023->g_1490.s2, "p_2023->g_1490.s2", print_hash_value);
    transparent_crc(p_2023->g_1490.s3, "p_2023->g_1490.s3", print_hash_value);
    transparent_crc(p_2023->g_1490.s4, "p_2023->g_1490.s4", print_hash_value);
    transparent_crc(p_2023->g_1490.s5, "p_2023->g_1490.s5", print_hash_value);
    transparent_crc(p_2023->g_1490.s6, "p_2023->g_1490.s6", print_hash_value);
    transparent_crc(p_2023->g_1490.s7, "p_2023->g_1490.s7", print_hash_value);
    transparent_crc(p_2023->g_1496.x, "p_2023->g_1496.x", print_hash_value);
    transparent_crc(p_2023->g_1496.y, "p_2023->g_1496.y", print_hash_value);
    transparent_crc(p_2023->g_1504.x, "p_2023->g_1504.x", print_hash_value);
    transparent_crc(p_2023->g_1504.y, "p_2023->g_1504.y", print_hash_value);
    transparent_crc(p_2023->g_1504.z, "p_2023->g_1504.z", print_hash_value);
    transparent_crc(p_2023->g_1504.w, "p_2023->g_1504.w", print_hash_value);
    transparent_crc(p_2023->g_1567.x, "p_2023->g_1567.x", print_hash_value);
    transparent_crc(p_2023->g_1567.y, "p_2023->g_1567.y", print_hash_value);
    transparent_crc(p_2023->g_1567.z, "p_2023->g_1567.z", print_hash_value);
    transparent_crc(p_2023->g_1567.w, "p_2023->g_1567.w", print_hash_value);
    transparent_crc(p_2023->g_1569.x, "p_2023->g_1569.x", print_hash_value);
    transparent_crc(p_2023->g_1569.y, "p_2023->g_1569.y", print_hash_value);
    transparent_crc(p_2023->g_1570.x, "p_2023->g_1570.x", print_hash_value);
    transparent_crc(p_2023->g_1570.y, "p_2023->g_1570.y", print_hash_value);
    transparent_crc(p_2023->g_1611.x, "p_2023->g_1611.x", print_hash_value);
    transparent_crc(p_2023->g_1611.y, "p_2023->g_1611.y", print_hash_value);
    transparent_crc(p_2023->g_1611.z, "p_2023->g_1611.z", print_hash_value);
    transparent_crc(p_2023->g_1611.w, "p_2023->g_1611.w", print_hash_value);
    transparent_crc(p_2023->g_1668.x, "p_2023->g_1668.x", print_hash_value);
    transparent_crc(p_2023->g_1668.y, "p_2023->g_1668.y", print_hash_value);
    transparent_crc(p_2023->g_1668.z, "p_2023->g_1668.z", print_hash_value);
    transparent_crc(p_2023->g_1668.w, "p_2023->g_1668.w", print_hash_value);
    transparent_crc(p_2023->g_1685.x, "p_2023->g_1685.x", print_hash_value);
    transparent_crc(p_2023->g_1685.y, "p_2023->g_1685.y", print_hash_value);
    transparent_crc(p_2023->g_1711.s0, "p_2023->g_1711.s0", print_hash_value);
    transparent_crc(p_2023->g_1711.s1, "p_2023->g_1711.s1", print_hash_value);
    transparent_crc(p_2023->g_1711.s2, "p_2023->g_1711.s2", print_hash_value);
    transparent_crc(p_2023->g_1711.s3, "p_2023->g_1711.s3", print_hash_value);
    transparent_crc(p_2023->g_1711.s4, "p_2023->g_1711.s4", print_hash_value);
    transparent_crc(p_2023->g_1711.s5, "p_2023->g_1711.s5", print_hash_value);
    transparent_crc(p_2023->g_1711.s6, "p_2023->g_1711.s6", print_hash_value);
    transparent_crc(p_2023->g_1711.s7, "p_2023->g_1711.s7", print_hash_value);
    transparent_crc(p_2023->g_1711.s8, "p_2023->g_1711.s8", print_hash_value);
    transparent_crc(p_2023->g_1711.s9, "p_2023->g_1711.s9", print_hash_value);
    transparent_crc(p_2023->g_1711.sa, "p_2023->g_1711.sa", print_hash_value);
    transparent_crc(p_2023->g_1711.sb, "p_2023->g_1711.sb", print_hash_value);
    transparent_crc(p_2023->g_1711.sc, "p_2023->g_1711.sc", print_hash_value);
    transparent_crc(p_2023->g_1711.sd, "p_2023->g_1711.sd", print_hash_value);
    transparent_crc(p_2023->g_1711.se, "p_2023->g_1711.se", print_hash_value);
    transparent_crc(p_2023->g_1711.sf, "p_2023->g_1711.sf", print_hash_value);
    transparent_crc(p_2023->g_1727.s0, "p_2023->g_1727.s0", print_hash_value);
    transparent_crc(p_2023->g_1727.s1, "p_2023->g_1727.s1", print_hash_value);
    transparent_crc(p_2023->g_1727.s2, "p_2023->g_1727.s2", print_hash_value);
    transparent_crc(p_2023->g_1727.s3, "p_2023->g_1727.s3", print_hash_value);
    transparent_crc(p_2023->g_1727.s4, "p_2023->g_1727.s4", print_hash_value);
    transparent_crc(p_2023->g_1727.s5, "p_2023->g_1727.s5", print_hash_value);
    transparent_crc(p_2023->g_1727.s6, "p_2023->g_1727.s6", print_hash_value);
    transparent_crc(p_2023->g_1727.s7, "p_2023->g_1727.s7", print_hash_value);
    transparent_crc(p_2023->g_1727.s8, "p_2023->g_1727.s8", print_hash_value);
    transparent_crc(p_2023->g_1727.s9, "p_2023->g_1727.s9", print_hash_value);
    transparent_crc(p_2023->g_1727.sa, "p_2023->g_1727.sa", print_hash_value);
    transparent_crc(p_2023->g_1727.sb, "p_2023->g_1727.sb", print_hash_value);
    transparent_crc(p_2023->g_1727.sc, "p_2023->g_1727.sc", print_hash_value);
    transparent_crc(p_2023->g_1727.sd, "p_2023->g_1727.sd", print_hash_value);
    transparent_crc(p_2023->g_1727.se, "p_2023->g_1727.se", print_hash_value);
    transparent_crc(p_2023->g_1727.sf, "p_2023->g_1727.sf", print_hash_value);
    transparent_crc(p_2023->g_1737.s0, "p_2023->g_1737.s0", print_hash_value);
    transparent_crc(p_2023->g_1737.s1, "p_2023->g_1737.s1", print_hash_value);
    transparent_crc(p_2023->g_1737.s2, "p_2023->g_1737.s2", print_hash_value);
    transparent_crc(p_2023->g_1737.s3, "p_2023->g_1737.s3", print_hash_value);
    transparent_crc(p_2023->g_1737.s4, "p_2023->g_1737.s4", print_hash_value);
    transparent_crc(p_2023->g_1737.s5, "p_2023->g_1737.s5", print_hash_value);
    transparent_crc(p_2023->g_1737.s6, "p_2023->g_1737.s6", print_hash_value);
    transparent_crc(p_2023->g_1737.s7, "p_2023->g_1737.s7", print_hash_value);
    transparent_crc(p_2023->g_1737.s8, "p_2023->g_1737.s8", print_hash_value);
    transparent_crc(p_2023->g_1737.s9, "p_2023->g_1737.s9", print_hash_value);
    transparent_crc(p_2023->g_1737.sa, "p_2023->g_1737.sa", print_hash_value);
    transparent_crc(p_2023->g_1737.sb, "p_2023->g_1737.sb", print_hash_value);
    transparent_crc(p_2023->g_1737.sc, "p_2023->g_1737.sc", print_hash_value);
    transparent_crc(p_2023->g_1737.sd, "p_2023->g_1737.sd", print_hash_value);
    transparent_crc(p_2023->g_1737.se, "p_2023->g_1737.se", print_hash_value);
    transparent_crc(p_2023->g_1737.sf, "p_2023->g_1737.sf", print_hash_value);
    transparent_crc(p_2023->g_1770.s0, "p_2023->g_1770.s0", print_hash_value);
    transparent_crc(p_2023->g_1770.s1, "p_2023->g_1770.s1", print_hash_value);
    transparent_crc(p_2023->g_1770.s2, "p_2023->g_1770.s2", print_hash_value);
    transparent_crc(p_2023->g_1770.s3, "p_2023->g_1770.s3", print_hash_value);
    transparent_crc(p_2023->g_1770.s4, "p_2023->g_1770.s4", print_hash_value);
    transparent_crc(p_2023->g_1770.s5, "p_2023->g_1770.s5", print_hash_value);
    transparent_crc(p_2023->g_1770.s6, "p_2023->g_1770.s6", print_hash_value);
    transparent_crc(p_2023->g_1770.s7, "p_2023->g_1770.s7", print_hash_value);
    transparent_crc(p_2023->g_1807.x, "p_2023->g_1807.x", print_hash_value);
    transparent_crc(p_2023->g_1807.y, "p_2023->g_1807.y", print_hash_value);
    transparent_crc(p_2023->g_1807.z, "p_2023->g_1807.z", print_hash_value);
    transparent_crc(p_2023->g_1807.w, "p_2023->g_1807.w", print_hash_value);
    transparent_crc(p_2023->g_1829.s0, "p_2023->g_1829.s0", print_hash_value);
    transparent_crc(p_2023->g_1829.s1, "p_2023->g_1829.s1", print_hash_value);
    transparent_crc(p_2023->g_1829.s2, "p_2023->g_1829.s2", print_hash_value);
    transparent_crc(p_2023->g_1829.s3, "p_2023->g_1829.s3", print_hash_value);
    transparent_crc(p_2023->g_1829.s4, "p_2023->g_1829.s4", print_hash_value);
    transparent_crc(p_2023->g_1829.s5, "p_2023->g_1829.s5", print_hash_value);
    transparent_crc(p_2023->g_1829.s6, "p_2023->g_1829.s6", print_hash_value);
    transparent_crc(p_2023->g_1829.s7, "p_2023->g_1829.s7", print_hash_value);
    transparent_crc(p_2023->g_1829.s8, "p_2023->g_1829.s8", print_hash_value);
    transparent_crc(p_2023->g_1829.s9, "p_2023->g_1829.s9", print_hash_value);
    transparent_crc(p_2023->g_1829.sa, "p_2023->g_1829.sa", print_hash_value);
    transparent_crc(p_2023->g_1829.sb, "p_2023->g_1829.sb", print_hash_value);
    transparent_crc(p_2023->g_1829.sc, "p_2023->g_1829.sc", print_hash_value);
    transparent_crc(p_2023->g_1829.sd, "p_2023->g_1829.sd", print_hash_value);
    transparent_crc(p_2023->g_1829.se, "p_2023->g_1829.se", print_hash_value);
    transparent_crc(p_2023->g_1829.sf, "p_2023->g_1829.sf", print_hash_value);
    transparent_crc(p_2023->g_1845.s0, "p_2023->g_1845.s0", print_hash_value);
    transparent_crc(p_2023->g_1845.s1, "p_2023->g_1845.s1", print_hash_value);
    transparent_crc(p_2023->g_1845.s2, "p_2023->g_1845.s2", print_hash_value);
    transparent_crc(p_2023->g_1845.s3, "p_2023->g_1845.s3", print_hash_value);
    transparent_crc(p_2023->g_1845.s4, "p_2023->g_1845.s4", print_hash_value);
    transparent_crc(p_2023->g_1845.s5, "p_2023->g_1845.s5", print_hash_value);
    transparent_crc(p_2023->g_1845.s6, "p_2023->g_1845.s6", print_hash_value);
    transparent_crc(p_2023->g_1845.s7, "p_2023->g_1845.s7", print_hash_value);
    transparent_crc(p_2023->g_1845.s8, "p_2023->g_1845.s8", print_hash_value);
    transparent_crc(p_2023->g_1845.s9, "p_2023->g_1845.s9", print_hash_value);
    transparent_crc(p_2023->g_1845.sa, "p_2023->g_1845.sa", print_hash_value);
    transparent_crc(p_2023->g_1845.sb, "p_2023->g_1845.sb", print_hash_value);
    transparent_crc(p_2023->g_1845.sc, "p_2023->g_1845.sc", print_hash_value);
    transparent_crc(p_2023->g_1845.sd, "p_2023->g_1845.sd", print_hash_value);
    transparent_crc(p_2023->g_1845.se, "p_2023->g_1845.se", print_hash_value);
    transparent_crc(p_2023->g_1845.sf, "p_2023->g_1845.sf", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2023->g_1874[i], "p_2023->g_1874[i]", print_hash_value);

    }
    transparent_crc(p_2023->g_1903, "p_2023->g_1903", print_hash_value);
    transparent_crc(p_2023->g_1909, "p_2023->g_1909", print_hash_value);
    transparent_crc(p_2023->g_1937.x, "p_2023->g_1937.x", print_hash_value);
    transparent_crc(p_2023->g_1937.y, "p_2023->g_1937.y", print_hash_value);
    transparent_crc(p_2023->g_1938.s0, "p_2023->g_1938.s0", print_hash_value);
    transparent_crc(p_2023->g_1938.s1, "p_2023->g_1938.s1", print_hash_value);
    transparent_crc(p_2023->g_1938.s2, "p_2023->g_1938.s2", print_hash_value);
    transparent_crc(p_2023->g_1938.s3, "p_2023->g_1938.s3", print_hash_value);
    transparent_crc(p_2023->g_1938.s4, "p_2023->g_1938.s4", print_hash_value);
    transparent_crc(p_2023->g_1938.s5, "p_2023->g_1938.s5", print_hash_value);
    transparent_crc(p_2023->g_1938.s6, "p_2023->g_1938.s6", print_hash_value);
    transparent_crc(p_2023->g_1938.s7, "p_2023->g_1938.s7", print_hash_value);
    transparent_crc(p_2023->g_1938.s8, "p_2023->g_1938.s8", print_hash_value);
    transparent_crc(p_2023->g_1938.s9, "p_2023->g_1938.s9", print_hash_value);
    transparent_crc(p_2023->g_1938.sa, "p_2023->g_1938.sa", print_hash_value);
    transparent_crc(p_2023->g_1938.sb, "p_2023->g_1938.sb", print_hash_value);
    transparent_crc(p_2023->g_1938.sc, "p_2023->g_1938.sc", print_hash_value);
    transparent_crc(p_2023->g_1938.sd, "p_2023->g_1938.sd", print_hash_value);
    transparent_crc(p_2023->g_1938.se, "p_2023->g_1938.se", print_hash_value);
    transparent_crc(p_2023->g_1938.sf, "p_2023->g_1938.sf", print_hash_value);
    transparent_crc(p_2023->g_1961.s0, "p_2023->g_1961.s0", print_hash_value);
    transparent_crc(p_2023->g_1961.s1, "p_2023->g_1961.s1", print_hash_value);
    transparent_crc(p_2023->g_1961.s2, "p_2023->g_1961.s2", print_hash_value);
    transparent_crc(p_2023->g_1961.s3, "p_2023->g_1961.s3", print_hash_value);
    transparent_crc(p_2023->g_1961.s4, "p_2023->g_1961.s4", print_hash_value);
    transparent_crc(p_2023->g_1961.s5, "p_2023->g_1961.s5", print_hash_value);
    transparent_crc(p_2023->g_1961.s6, "p_2023->g_1961.s6", print_hash_value);
    transparent_crc(p_2023->g_1961.s7, "p_2023->g_1961.s7", print_hash_value);
    transparent_crc(p_2023->g_1961.s8, "p_2023->g_1961.s8", print_hash_value);
    transparent_crc(p_2023->g_1961.s9, "p_2023->g_1961.s9", print_hash_value);
    transparent_crc(p_2023->g_1961.sa, "p_2023->g_1961.sa", print_hash_value);
    transparent_crc(p_2023->g_1961.sb, "p_2023->g_1961.sb", print_hash_value);
    transparent_crc(p_2023->g_1961.sc, "p_2023->g_1961.sc", print_hash_value);
    transparent_crc(p_2023->g_1961.sd, "p_2023->g_1961.sd", print_hash_value);
    transparent_crc(p_2023->g_1961.se, "p_2023->g_1961.se", print_hash_value);
    transparent_crc(p_2023->g_1961.sf, "p_2023->g_1961.sf", print_hash_value);
    transparent_crc(p_2023->g_1963.x, "p_2023->g_1963.x", print_hash_value);
    transparent_crc(p_2023->g_1963.y, "p_2023->g_1963.y", print_hash_value);
    transparent_crc(p_2023->g_1966.x, "p_2023->g_1966.x", print_hash_value);
    transparent_crc(p_2023->g_1966.y, "p_2023->g_1966.y", print_hash_value);
    transparent_crc(p_2023->g_1968.s0, "p_2023->g_1968.s0", print_hash_value);
    transparent_crc(p_2023->g_1968.s1, "p_2023->g_1968.s1", print_hash_value);
    transparent_crc(p_2023->g_1968.s2, "p_2023->g_1968.s2", print_hash_value);
    transparent_crc(p_2023->g_1968.s3, "p_2023->g_1968.s3", print_hash_value);
    transparent_crc(p_2023->g_1968.s4, "p_2023->g_1968.s4", print_hash_value);
    transparent_crc(p_2023->g_1968.s5, "p_2023->g_1968.s5", print_hash_value);
    transparent_crc(p_2023->g_1968.s6, "p_2023->g_1968.s6", print_hash_value);
    transparent_crc(p_2023->g_1968.s7, "p_2023->g_1968.s7", print_hash_value);
    transparent_crc(p_2023->g_1970.s0, "p_2023->g_1970.s0", print_hash_value);
    transparent_crc(p_2023->g_1970.s1, "p_2023->g_1970.s1", print_hash_value);
    transparent_crc(p_2023->g_1970.s2, "p_2023->g_1970.s2", print_hash_value);
    transparent_crc(p_2023->g_1970.s3, "p_2023->g_1970.s3", print_hash_value);
    transparent_crc(p_2023->g_1970.s4, "p_2023->g_1970.s4", print_hash_value);
    transparent_crc(p_2023->g_1970.s5, "p_2023->g_1970.s5", print_hash_value);
    transparent_crc(p_2023->g_1970.s6, "p_2023->g_1970.s6", print_hash_value);
    transparent_crc(p_2023->g_1970.s7, "p_2023->g_1970.s7", print_hash_value);
    transparent_crc(p_2023->g_1984, "p_2023->g_1984", print_hash_value);
    transparent_crc(p_2023->g_1985.x, "p_2023->g_1985.x", print_hash_value);
    transparent_crc(p_2023->g_1985.y, "p_2023->g_1985.y", print_hash_value);
    transparent_crc(p_2023->g_1987.x, "p_2023->g_1987.x", print_hash_value);
    transparent_crc(p_2023->g_1987.y, "p_2023->g_1987.y", print_hash_value);
    transparent_crc(p_2023->g_1988.x, "p_2023->g_1988.x", print_hash_value);
    transparent_crc(p_2023->g_1988.y, "p_2023->g_1988.y", print_hash_value);
    transparent_crc(p_2023->g_1988.z, "p_2023->g_1988.z", print_hash_value);
    transparent_crc(p_2023->g_1988.w, "p_2023->g_1988.w", print_hash_value);
    transparent_crc(p_2023->g_1995.x, "p_2023->g_1995.x", print_hash_value);
    transparent_crc(p_2023->g_1995.y, "p_2023->g_1995.y", print_hash_value);
    transparent_crc(p_2023->g_2021.x, "p_2023->g_2021.x", print_hash_value);
    transparent_crc(p_2023->g_2021.y, "p_2023->g_2021.y", print_hash_value);
    transparent_crc(p_2023->g_2021.z, "p_2023->g_2021.z", print_hash_value);
    transparent_crc(p_2023->g_2021.w, "p_2023->g_2021.w", print_hash_value);
    transparent_crc(p_2023->g_2022, "p_2023->g_2022", print_hash_value);
    transparent_crc(p_2023->v_collective, "p_2023->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 20; i++)
            transparent_crc(p_2023->g_special_values[i + 20 * get_linear_group_id()], "p_2023->g_special_values[i + 20 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 20; i++)
            transparent_crc(p_2023->l_special_values[i], "p_2023->l_special_values[i]", print_hash_value);
    transparent_crc(p_2023->l_comm_values[get_linear_local_id()], "p_2023->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_2023->g_comm_values[get_linear_group_id() * 97 + get_linear_local_id()], "p_2023->g_comm_values[get_linear_group_id() * 97 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
