// --atomics 97 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 88,26,4 -l 2,26,2
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

__constant uint32_t permutations[10][104] = {
{12,10,60,65,87,33,58,7,79,6,23,46,63,52,26,75,100,0,97,48,31,14,80,9,99,53,76,57,19,24,45,54,20,50,96,21,18,94,28,47,37,72,102,43,36,81,44,22,16,82,86,1,85,84,74,88,4,11,59,30,89,66,70,90,69,51,71,2,95,98,101,32,41,62,27,40,42,68,73,34,93,17,5,29,64,49,13,56,39,38,78,15,103,8,83,77,35,3,91,92,61,25,55,67}, // permutation 0
{8,44,16,2,3,42,13,55,39,50,30,91,82,102,27,9,48,49,47,76,81,97,96,95,60,79,40,14,0,75,71,35,62,46,43,88,24,86,103,4,65,5,25,33,89,83,58,67,1,45,37,59,84,34,20,54,38,101,99,92,94,98,31,19,21,26,80,64,90,17,10,77,7,66,22,51,15,69,78,63,6,85,12,28,72,32,52,11,53,100,23,70,56,68,87,73,41,18,61,36,57,29,74,93}, // permutation 1
{10,7,46,26,70,15,88,94,58,35,60,27,86,8,50,5,76,14,1,92,56,33,68,24,77,99,28,2,95,30,45,21,40,22,20,16,57,80,69,53,18,62,36,17,37,42,6,101,84,87,67,3,38,78,34,83,96,93,65,63,72,89,90,100,81,52,44,32,12,79,47,4,85,102,75,0,48,29,59,91,31,13,43,64,74,97,66,19,11,25,51,9,49,23,39,54,71,82,98,103,55,61,73,41}, // permutation 2
{102,23,45,76,68,37,24,31,95,38,21,7,101,6,47,9,98,14,36,10,30,22,66,5,93,75,44,16,63,50,74,70,46,77,20,67,52,97,53,85,15,19,72,41,86,1,88,8,58,29,80,94,79,17,82,89,65,81,33,56,55,4,73,90,35,71,61,100,87,60,39,26,64,32,96,28,91,11,2,13,78,40,54,12,59,62,69,84,0,43,48,51,92,83,103,3,42,34,57,49,25,18,27,99}, // permutation 3
{36,82,6,16,90,1,100,39,89,26,29,61,59,13,9,33,45,76,15,103,99,25,23,4,10,55,24,93,97,5,50,58,74,47,68,49,67,70,83,17,84,3,40,87,8,19,94,102,66,63,38,34,54,73,52,72,98,37,44,35,85,51,64,69,31,7,78,86,79,22,32,81,21,96,2,14,92,12,46,42,53,77,95,71,41,60,18,65,91,48,88,30,20,43,11,28,57,56,80,62,0,75,27,101}, // permutation 4
{27,57,17,50,3,51,77,39,26,54,16,83,23,9,18,58,43,47,85,21,60,62,22,89,38,29,80,75,5,15,63,90,72,44,1,34,2,79,97,25,59,4,84,100,88,28,37,56,76,31,0,46,78,66,65,87,53,48,41,68,12,32,95,82,98,93,91,30,61,81,94,42,10,13,103,36,6,67,45,86,70,7,64,11,55,101,14,99,8,69,33,24,102,71,49,92,74,73,52,35,96,19,20,40}, // permutation 5
{5,81,73,95,65,14,40,47,93,26,57,100,29,11,79,36,54,74,98,59,41,35,6,44,97,60,62,102,43,77,85,96,99,22,21,48,32,66,18,101,42,80,84,2,15,90,64,63,33,7,3,30,4,52,61,87,94,1,39,17,103,45,27,86,75,9,38,37,10,92,91,0,25,83,24,68,56,55,71,88,20,69,28,46,53,51,12,34,16,31,58,67,72,49,78,50,8,23,19,76,82,13,70,89}, // permutation 6
{92,49,13,96,69,46,67,23,97,101,85,80,21,60,63,3,33,59,88,19,12,87,43,14,1,65,64,25,98,99,26,18,29,15,41,71,22,24,42,44,7,72,36,56,66,31,16,9,100,77,37,51,55,48,90,75,38,94,10,81,32,73,30,54,103,68,76,86,50,0,47,39,95,4,40,8,6,62,84,34,74,89,58,57,61,83,11,20,82,52,28,53,35,93,45,91,102,2,27,5,70,79,78,17}, // permutation 7
{94,49,1,55,53,81,79,32,14,61,100,29,5,90,50,46,75,30,12,18,60,88,54,8,22,7,39,42,67,43,10,33,73,26,68,27,92,78,21,2,11,71,3,28,96,62,6,64,16,34,87,85,35,89,66,9,4,58,23,41,17,70,93,84,77,20,45,36,74,48,56,13,83,19,24,0,15,103,37,91,40,47,51,76,82,59,38,97,86,65,102,101,98,25,99,52,31,80,95,63,72,57,44,69}, // permutation 8
{95,56,71,42,92,81,15,2,88,89,87,6,84,93,43,48,66,75,49,8,29,4,85,96,40,39,77,9,18,46,7,79,20,51,22,12,13,17,45,21,35,65,103,57,10,16,54,73,60,67,83,74,63,82,97,58,69,11,34,76,50,99,91,36,55,0,64,28,26,19,94,61,90,52,72,86,25,23,101,5,33,1,70,27,38,100,24,98,41,78,31,47,44,37,32,59,53,14,3,62,80,102,68,30} // permutation 9
};

// Seed: 730023810

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint32_t  f0;
};

union U1 {
   int32_t  f0;
   int32_t  f1;
   volatile int32_t  f2;
};

struct S2 {
    int32_t g_3;
    uint32_t g_7;
    volatile VECTOR(uint8_t, 2) g_30;
    VECTOR(uint8_t, 8) g_31;
    volatile VECTOR(int8_t, 8) g_64;
    int8_t g_66[6];
    int16_t g_70;
    VECTOR(int16_t, 2) g_72;
    VECTOR(int16_t, 4) g_77;
    int8_t g_86;
    int8_t g_98;
    int32_t g_104;
    int32_t *g_103;
    int32_t *g_121;
    uint64_t g_132;
    int16_t *g_144;
    uint32_t g_149[8];
    int8_t g_151;
    VECTOR(uint64_t, 8) g_179;
    VECTOR(uint16_t, 4) g_188;
    VECTOR(uint32_t, 2) g_190;
    uint16_t g_209;
    int32_t g_213;
    union U0 g_217;
    union U0 g_219;
    VECTOR(int32_t, 4) g_220;
    VECTOR(uint64_t, 16) g_228;
    uint16_t *g_234;
    VECTOR(uint8_t, 2) g_250;
    union U0 g_261;
    uint64_t g_302[4][1];
    int8_t g_314;
    volatile union U0 g_317[6];
    volatile union U0 * volatile g_316[2];
    volatile union U0 * volatile *g_315;
    int32_t g_335[10];
    int64_t g_340;
    uint16_t *g_361;
    VECTOR(int32_t, 8) g_396;
    VECTOR(int32_t, 16) g_397;
    VECTOR(uint32_t, 4) g_402;
    VECTOR(int32_t, 16) g_421;
    VECTOR(int8_t, 2) g_455;
    VECTOR(int8_t, 8) g_457;
    union U0 g_461;
    volatile union U0 g_463;
    volatile union U0 *g_462;
    VECTOR(uint64_t, 2) g_503;
    int8_t *g_518;
    int8_t **g_517;
    VECTOR(uint32_t, 4) g_528;
    VECTOR(int8_t, 4) g_567;
    VECTOR(int8_t, 4) g_606;
    VECTOR(uint8_t, 16) g_607;
    VECTOR(int16_t, 8) g_629;
    VECTOR(uint16_t, 16) g_630;
    VECTOR(uint8_t, 8) g_684;
    VECTOR(int8_t, 2) g_685;
    int64_t g_806[1][6][5];
    int64_t g_809;
    int32_t ** volatile g_835;
    VECTOR(int8_t, 8) g_839;
    union U1 g_866;
    uint16_t g_867;
    union U1 g_911[2];
    uint32_t * volatile g_973;
    uint32_t * volatile *g_972[2][6][6];
    int32_t * volatile g_974;
    union U1 *g_996[7];
    union U1 ** volatile g_995;
    VECTOR(int16_t, 4) g_1001;
    volatile VECTOR(uint16_t, 16) g_1009;
    VECTOR(uint32_t, 16) g_1016;
    volatile VECTOR(uint64_t, 2) g_1030;
    volatile VECTOR(uint64_t, 8) g_1031;
    volatile VECTOR(uint64_t, 16) g_1032;
    VECTOR(uint32_t, 16) g_1038;
    VECTOR(uint8_t, 2) g_1080;
    union U0 g_1133;
    VECTOR(int32_t, 4) g_1177;
    VECTOR(uint16_t, 8) g_1234;
    int32_t ** volatile g_1236;
    union U1 ** volatile g_1238;
    uint32_t *g_1252[1];
    uint32_t **g_1251;
    uint32_t ***g_1250;
    uint32_t *g_1267;
    uint32_t **g_1266;
    uint32_t *** volatile g_1265[6];
    uint32_t *** volatile g_1268;
    volatile int16_t g_1319;
    int32_t ** volatile g_1356;
    VECTOR(uint64_t, 16) g_1359;
    volatile union U0 g_1385;
    volatile int32_t g_1415[7][3];
    volatile union U1 g_1438;
    int64_t *g_1499;
    volatile union U0 g_1516;
    volatile VECTOR(int64_t, 2) g_1530;
    VECTOR(int8_t, 8) g_1553;
    volatile union U0 g_1621;
    volatile VECTOR(uint8_t, 16) g_1643;
    VECTOR(int32_t, 16) g_1683;
    int32_t ** volatile g_1696;
    volatile VECTOR(uint8_t, 16) g_1705;
    union U0 g_1707;
    volatile union U1 g_1754;
    VECTOR(uint64_t, 8) g_1786;
    uint8_t *g_1796[7][2];
    volatile VECTOR(uint64_t, 2) g_1810;
    union U0 g_1813;
    union U0 g_1814[5][4][9];
    union U0 g_1815;
    union U0 g_1816;
    union U0 g_1817;
    union U0 g_1818;
    union U0 g_1819;
    union U0 g_1820;
    union U0 g_1821;
    union U0 g_1822[1];
    union U0 g_1823;
    int32_t ** volatile g_1833[2][9][9];
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
uint64_t  func_1(struct S2 * p_1835);
uint8_t  func_10(int64_t  p_11, uint64_t  p_12, int32_t * p_13, int32_t * p_14, uint16_t  p_15, struct S2 * p_1835);
uint64_t  func_22(uint32_t  p_23, uint16_t  p_24, int32_t  p_25, struct S2 * p_1835);
uint8_t  func_32(uint32_t  p_33, int32_t * p_34, struct S2 * p_1835);
int64_t  func_50(int16_t  p_51, int32_t  p_52, struct S2 * p_1835);
uint64_t  func_53(int32_t * p_54, uint8_t  p_55, uint32_t  p_56, int32_t * p_57, int8_t  p_58, struct S2 * p_1835);
int16_t  func_78(int16_t * p_79, int32_t * p_80, struct S2 * p_1835);
uint16_t  func_87(int16_t * p_88, int16_t * p_89, struct S2 * p_1835);
int16_t * func_90(uint32_t  p_91, int32_t * p_92, struct S2 * p_1835);
uint64_t  func_93(int16_t * p_94, uint64_t  p_95, struct S2 * p_1835);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1835->g_7 p_1835->g_3 p_1835->g_30 p_1835->g_31 p_1835->g_64 p_1835->l_comm_values p_1835->g_70 p_1835->g_77 p_1835->g_104 p_1835->g_72 p_1835->g_comm_values p_1835->g_149 p_1835->g_103 p_1835->g_179 p_1835->g_98 p_1835->g_188 p_1835->g_190 p_1835->g_151 p_1835->g_220 p_1835->g_228 p_1835->g_250 p_1835->g_121 p_1835->g_302 p_1835->g_314 p_1835->g_315 p_1835->g_209 p_1835->g_455 p_1835->g_457 p_1835->g_421 p_1835->g_517 p_1835->g_397 p_1835->g_518 p_1835->g_528 p_1835->g_684 p_1835->g_685 p_1835->g_335 p_1835->g_396 p_1835->g_132 p_1835->g_361 p_1835->g_806 p_1835->g_809 p_1835->g_402 p_1835->g_835 p_1835->g_839 p_1835->g_567 p_1835->g_866 p_1835->g_867 p_1835->g_911 p_1835->g_972 p_1835->g_974 p_1835->g_995 p_1835->g_1001 p_1835->g_1009 p_1835->g_1016 p_1835->g_1030 p_1835->g_1031 p_1835->g_1032 p_1835->g_1038 p_1835->g_66 p_1835->g_607 p_1835->g_1080 p_1835->g_629 p_1835->g_1133 p_1835->g_1234 p_1835->g_503 p_1835->g_1236 p_1835->g_996 p_1835->g_1238 p_1835->g_866.f0 p_1835->g_1268 p_1835->g_1177 p_1835->g_911.f0 p_1835->g_1356 p_1835->g_1359 p_1835->g_1385 p_1835->g_1438 p_1835->g_1516 p_1835->g_1415 p_1835->g_1530 p_1835->g_1499 p_1835->g_1553 p_1835->g_217.f0 p_1835->g_1621
 * writes: p_1835->g_7 p_1835->g_66 p_1835->g_70 p_1835->g_86 p_1835->g_103 p_1835->g_104 p_1835->g_121 p_1835->g_98 p_1835->g_132 p_1835->g_144 p_1835->g_149 p_1835->l_comm_values p_1835->g_209 p_1835->g_213 p_1835->g_234 p_1835->g_228 p_1835->g_151 p_1835->g_302 p_1835->g_314 p_1835->g_315 p_1835->g_396 p_1835->g_397 p_1835->g_517 p_1835->g_528 p_1835->g_518 p_1835->g_comm_values p_1835->g_340 p_1835->g_806 p_1835->g_809 p_1835->g_190 p_1835->g_421 p_1835->g_455 p_1835->g_335 p_1835->g_607 p_1835->g_996 p_1835->g_630 p_1835->g_72 p_1835->g_866.f0 p_1835->g_1250 p_1835->g_1266 p_1835->g_503 p_1835->g_1499 p_1835->g_250 p_1835->g_3 p_1835->g_179 p_1835->g_684
 */
uint64_t  func_1(struct S2 * p_1835)
{ /* block id: 4 */
    int32_t *l_2 = &p_1835->g_3;
    int32_t l_4 = 0x770A77C8L;
    int32_t *l_5 = &p_1835->g_3;
    int32_t *l_6[10][5] = {{&l_4,&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4,&l_4}};
    uint16_t l_35 = 0xCE69L;
    int32_t l_1273 = 0x48032623L;
    uint8_t l_1600 = 1UL;
    uint16_t l_1832 = 0xD85EL;
    int8_t l_1834 = 5L;
    int i, j;
    --p_1835->g_7;
    (*l_5) = (func_10((*l_2), (safe_div_func_uint8_t_u_u(255UL, (safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((-5L), (func_22((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 4))(p_1835->g_30.yxxx)).xzxxyzwz, ((VECTOR(uint8_t, 4))(p_1835->g_31.s4716)).xwwzxxyy))).s2 && func_32(l_35, &l_4, p_1835)), (safe_sub_func_int32_t_s_s(p_1835->g_1177.x, (safe_mul_func_int8_t_s_s(((l_1273 = (((p_1835->g_1016.s4 , 0x26C51E8769289656L) >= GROUP_DIVERGE(2, 1)) || p_1835->g_911[0].f0)) ^ (-9L)), p_1835->g_839.s5)))))), 5UL)), (*l_5), (*l_5), p_1835) & 0x026DBB7F24887D6AL))), 5)))), l_6[9][4], l_5, l_1600, p_1835) ^ l_1832);
    (*l_5) |= 9L;
    (*p_1835->g_835) = &l_4;
    return l_1834;
}


/* ------------------------------------------ */
/* 
 * reads : p_1835->g_3 p_1835->g_1236 p_1835->g_1621 p_1835->g_866.f0 p_1835->g_1499 p_1835->g_806 p_1835->g_396 p_1835->g_1238 p_1835->g_996 p_1835->g_866 p_1835->g_911 p_1835->g_1080 p_1835->g_121 p_1835->g_1234 p_1835->g_911.f0
 * writes: p_1835->g_3 p_1835->g_70 p_1835->g_121 p_1835->g_132 p_1835->g_179 p_1835->g_684 p_1835->g_809
 */
uint8_t  func_10(int64_t  p_11, uint64_t  p_12, int32_t * p_13, int32_t * p_14, uint16_t  p_15, struct S2 * p_1835)
{ /* block id: 631 */
    int32_t *l_1601[8] = {&p_1835->g_3,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3};
    uint8_t l_1602 = 9UL;
    uint32_t **l_1605 = &p_1835->g_1267;
    uint32_t **l_1606 = &p_1835->g_1267;
    uint32_t ***l_1607 = &l_1606;
    VECTOR(uint64_t, 16) l_1608 = (VECTOR(uint64_t, 16))(0x837E591C833ADFC9L, (VECTOR(uint64_t, 4))(0x837E591C833ADFC9L, (VECTOR(uint64_t, 2))(0x837E591C833ADFC9L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x837E591C833ADFC9L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x837E591C833ADFC9L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x837E591C833ADFC9L, 18446744073709551615UL), 0x837E591C833ADFC9L, 18446744073709551615UL, 0x837E591C833ADFC9L, 18446744073709551615UL);
    VECTOR(uint8_t, 4) l_1633 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x9FL), 0x9FL);
    int16_t l_1684[3][2];
    int32_t l_1748 = 0x0E1398D3L;
    uint8_t l_1794 = 1UL;
    union U0 *l_1811 = &p_1835->g_1707;
    uint32_t l_1829 = 1UL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_1684[i][j] = 0x196EL;
    }
    ++l_1602;
    (*p_14) ^= (l_1605 != ((*l_1607) = l_1606));
    l_1608.s2 &= (*p_14);
    for (l_1602 = 0; (l_1602 != 4); l_1602 = safe_add_func_uint8_t_u_u(l_1602, 5))
    { /* block id: 638 */
        uint32_t l_1611 = 4294967287UL;
        VECTOR(uint32_t, 4) l_1619 = (VECTOR(uint32_t, 4))(0xC5CBC118L, (VECTOR(uint32_t, 2))(0xC5CBC118L, 0x1F64A9AAL), 0x1F64A9AAL);
        VECTOR(int64_t, 2) l_1620 = (VECTOR(int64_t, 2))(1L, 0x779387E08E3D161EL);
        int32_t l_1623 = 0x617DEF00L;
        int32_t *l_1656 = (void*)0;
        int32_t *l_1657[1];
        int8_t l_1671 = 0x6DL;
        int32_t *l_1685 = &l_1623;
        int32_t *l_1695[7][3][8] = {{{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]}},{{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]}},{{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]}},{{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]}},{{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]}},{{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]}},{{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]},{&l_1623,(void*)0,&p_1835->g_335[1],&l_1623,&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1],&p_1835->g_335[1]}}};
        uint8_t *l_1730 = (void*)0;
        uint8_t *l_1731 = (void*)0;
        uint32_t ***l_1744 = &l_1605;
        int8_t l_1760 = 0x3FL;
        uint64_t l_1771 = 1UL;
        VECTOR(int32_t, 8) l_1799 = (VECTOR(int32_t, 8))(0x04DD1FA9L, (VECTOR(int32_t, 4))(0x04DD1FA9L, (VECTOR(int32_t, 2))(0x04DD1FA9L, (-2L)), (-2L)), (-2L), 0x04DD1FA9L, (-2L));
        int8_t *l_1806 = (void*)0;
        int8_t *l_1808 = (void*)0;
        VECTOR(uint64_t, 16) l_1809 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 18446744073709551615UL, 18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551608UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551608UL), 18446744073709551615UL, 18446744073709551608UL, 18446744073709551615UL, 18446744073709551608UL);
        int8_t l_1828 = (-2L);
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1657[i] = (void*)0;
        if ((0x2DADAA6FL & (-3L)))
        { /* block id: 639 */
            int64_t l_1647 = 5L;
            uint64_t l_1649 = 0xF1813F1A0734F094L;
            int16_t l_1659[10] = {0x2E34L,0x2E34L,0x2E34L,0x2E34L,0x2E34L,0x2E34L,0x2E34L,0x2E34L,0x2E34L,0x2E34L};
            int32_t l_1660 = (-1L);
            int32_t l_1665 = 0x3ADEB0CCL;
            int32_t l_1667 = 0x014B4F51L;
            int32_t l_1669[7][3] = {{0x1DDAC0D4L,0x1DDAC0D4L,0x1DDAC0D4L},{0x1DDAC0D4L,0x1DDAC0D4L,0x1DDAC0D4L},{0x1DDAC0D4L,0x1DDAC0D4L,0x1DDAC0D4L},{0x1DDAC0D4L,0x1DDAC0D4L,0x1DDAC0D4L},{0x1DDAC0D4L,0x1DDAC0D4L,0x1DDAC0D4L},{0x1DDAC0D4L,0x1DDAC0D4L,0x1DDAC0D4L},{0x1DDAC0D4L,0x1DDAC0D4L,0x1DDAC0D4L}};
            uint32_t l_1679 = 0xD683B573L;
            int i, j;
            if ((*p_14))
                break;
            --l_1611;
            for (p_1835->g_70 = 0; (p_1835->g_70 < (-11)); p_1835->g_70 = safe_sub_func_uint32_t_u_u(p_1835->g_70, 6))
            { /* block id: 644 */
                int32_t **l_1616 = (void*)0;
                int32_t **l_1617 = (void*)0;
                int32_t **l_1618[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                uint32_t *l_1622[3];
                int32_t l_1666[3];
                VECTOR(int32_t, 16) l_1682 = (VECTOR(int32_t, 16))(0x5193BC0FL, (VECTOR(int32_t, 4))(0x5193BC0FL, (VECTOR(int32_t, 2))(0x5193BC0FL, (-9L)), (-9L)), (-9L), 0x5193BC0FL, (-9L), (VECTOR(int32_t, 2))(0x5193BC0FL, (-9L)), (VECTOR(int32_t, 2))(0x5193BC0FL, (-9L)), 0x5193BC0FL, (-9L), 0x5193BC0FL, (-9L));
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1622[i] = &p_1835->g_149[0];
                for (i = 0; i < 3; i++)
                    l_1666[i] = 0x3E708952L;
                (*p_14) = (((((*p_1835->g_1236) = p_14) != (void*)0) , (((VECTOR(int64_t, 8))((-1L), ((FAKE_DIVERGE(p_1835->global_1_offset, get_global_id(1), 10) > ((VECTOR(uint32_t, 8))(l_1619.wxzyzyxw)).s0) > 0L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_1620.xyyy)))), 0x293C8C870CBD28F5L, 6L)).s4 >= (p_1835->g_1621 , p_12))) & ((FAKE_DIVERGE(p_1835->global_2_offset, get_global_id(2), 10) , ((l_1623 = p_1835->g_866.f0) , (p_11 && (safe_sub_func_uint64_t_u_u(((7UL >= (l_1623 ^= (0x937E1E85L <= (*p_14)))) , p_11), (*p_1835->g_1499)))))) , p_1835->g_396.s7));
                for (p_1835->g_132 = (-29); (p_1835->g_132 <= 39); p_1835->g_132 = safe_add_func_int32_t_s_s(p_1835->g_132, 7))
                { /* block id: 651 */
                    uint32_t l_1630 = 0xFC486B77L;
                    uint32_t l_1640[2];
                    int32_t l_1661 = (-8L);
                    int32_t l_1662 = 5L;
                    int32_t l_1663 = 4L;
                    int32_t l_1670 = 0L;
                    int32_t l_1673 = (-1L);
                    int32_t l_1674 = (-1L);
                    int32_t l_1676 = (-2L);
                    int32_t l_1677 = 0x053F4F87L;
                    int32_t l_1678 = 1L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1640[i] = 0UL;
                    if (((VECTOR(int32_t, 2))(0x0ADB3814L, 0x33AC2A6DL)).even)
                    { /* block id: 652 */
                        int64_t *l_1646 = &p_1835->g_340;
                        int32_t l_1648 = 0x06579763L;
                        uint64_t *l_1650 = (void*)0;
                        uint8_t *l_1651 = (void*)0;
                        uint8_t *l_1652 = (void*)0;
                        uint8_t *l_1653 = (void*)0;
                        uint8_t *l_1654 = (void*)0;
                        uint8_t *l_1655 = (void*)0;
                        int32_t l_1658 = 1L;
                        int32_t l_1664 = 0x1D2A59A0L;
                        int32_t l_1668 = 0x07A49E81L;
                        int32_t l_1672 = 0x0554FBD3L;
                        int32_t l_1675[9] = {0x21269050L,0x21269050L,0x21269050L,0x21269050L,0x21269050L,0x21269050L,0x21269050L,0x21269050L,0x21269050L};
                        int i;
                        l_1657[0] = (l_1656 = (((l_1648 = ((*p_14) = (((safe_mul_func_uint16_t_u_u(l_1630, p_12)) ^ (-1L)) < (p_1835->g_684.s0 = ((p_1835->g_179.s6 = (safe_sub_func_int32_t_s_s(((((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 2))(0x98L, 0xABL)), ((VECTOR(uint8_t, 4))(l_1633.xwwx)).lo))), 0UL, 249UL)).w >= ((safe_lshift_func_uint16_t_u_u(((((**p_1835->g_1238) , (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_1835->g_1080.y, ((*p_1835->g_121) || l_1640[0]))), 0))) || ((((l_1623 = (((l_1619.w && (safe_mod_func_int32_t_s_s(((((VECTOR(uint8_t, 16))(p_1835->g_1643.sd7bb7b9f59d72453)).s6 != (((safe_mul_func_int8_t_s_s(((((*p_1835->g_1499) , (-1L)) , l_1646) == (void*)0), FAKE_DIVERGE(p_1835->global_1_offset, get_global_id(1), 10))) , l_1647) , l_1647)) | p_1835->g_1234.s1), p_12))) | 6UL) , p_12)) == 0UL) , p_11) | p_11)) , l_1648), l_1630)) , p_15)) && l_1649) || p_12) <= 0x10L), p_1835->g_911[0].f0))) ^ p_12))))) && l_1623) , (*p_1835->g_1236)));
                        l_1679--;
                        (*p_1835->g_121) &= 0x0F621FC3L;
                        l_1601[3] = p_14;
                    }
                    else
                    { /* block id: 663 */
                        p_13 = &l_1623;
                    }
                    if ((*p_14))
                        break;
                    l_1684[0][1] = ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(l_1682.sac72)).wzwzwyxy, ((VECTOR(int32_t, 4))(p_1835->g_1683.s5f6f)).yxzxyxwy))).s3;
                }
                l_1685 = p_14;
            }
        }
        else
        { /* block id: 671 */
            int32_t l_1711 = (-1L);
            int32_t l_1761 = 0x16BB74C7L;
            int32_t l_1765 = 9L;
            int32_t l_1766 = 0x7445F68AL;
            VECTOR(uint64_t, 2) l_1787 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x5623E7828D20C3A4L);
            VECTOR(uint64_t, 16) l_1789 = (VECTOR(uint64_t, 16))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL), 1UL), 1UL, 18446744073709551608UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL), 18446744073709551608UL, 1UL, 18446744073709551608UL, 1UL);
            VECTOR(uint8_t, 8) l_1800 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 7UL), 7UL), 7UL, 255UL, 7UL);
            int8_t *l_1801 = &l_1671;
            int8_t *l_1807[4][4] = {{(void*)0,&p_1835->g_314,&p_1835->g_151,&p_1835->g_314},{(void*)0,&p_1835->g_314,&p_1835->g_151,&p_1835->g_314},{(void*)0,&p_1835->g_314,&p_1835->g_151,&p_1835->g_314},{(void*)0,&p_1835->g_314,&p_1835->g_151,&p_1835->g_314}};
            int32_t l_1825 = 0x6855671EL;
            int32_t *l_1826[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1827[10][10][2] = {{{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)}},{{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)}},{{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)}},{{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)}},{{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)}},{{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)}},{{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)}},{{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)}},{{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)}},{{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)},{0x5D5025AFL,(-8L)}}};
            int i, j, k;
            for (p_1835->g_809 = (-15); (p_1835->g_809 != (-24)); --p_1835->g_809)
            { /* block id: 674 */
                int16_t l_1692 = 0x4784L;
                int32_t *l_1697 = (void*)0;
                int16_t l_1746 = 0x0B08L;
                uint8_t *l_1758 = &l_1602;
                int32_t l_1763 = 1L;
                int32_t l_1764 = 4L;
                int32_t l_1770 = 0x50DC52BDL;
                uint32_t ***l_1783 = &l_1605;
                uint8_t **l_1795[9];
                int8_t **l_1802 = &p_1835->g_518;
                int8_t **l_1803 = (void*)0;
                int8_t **l_1804 = &p_1835->g_518;
                int8_t **l_1805[3];
                union U0 *l_1812[5][2][3] = {{{&p_1835->g_1822[0],&p_1835->g_1822[0],&p_1835->g_1820},{&p_1835->g_1822[0],&p_1835->g_1822[0],&p_1835->g_1820}},{{&p_1835->g_1822[0],&p_1835->g_1822[0],&p_1835->g_1820},{&p_1835->g_1822[0],&p_1835->g_1822[0],&p_1835->g_1820}},{{&p_1835->g_1822[0],&p_1835->g_1822[0],&p_1835->g_1820},{&p_1835->g_1822[0],&p_1835->g_1822[0],&p_1835->g_1820}},{{&p_1835->g_1822[0],&p_1835->g_1822[0],&p_1835->g_1820},{&p_1835->g_1822[0],&p_1835->g_1822[0],&p_1835->g_1820}},{{&p_1835->g_1822[0],&p_1835->g_1822[0],&p_1835->g_1820},{&p_1835->g_1822[0],&p_1835->g_1822[0],&p_1835->g_1820}}};
                int64_t **l_1824 = &p_1835->g_1499;
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_1795[i] = (void*)0;
                for (i = 0; i < 3; i++)
                    l_1805[i] = &p_1835->g_518;
                (1 + 1);
            }
            l_1829++;
            (*p_14) = (*p_14);
        }
    }
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_1835->g_806 p_1835->g_149 p_1835->g_1030 p_1835->g_151 p_1835->g_1356 p_1835->g_1359 p_1835->g_974 p_1835->g_335 p_1835->g_220 p_1835->g_1032 p_1835->g_1080 p_1835->g_132 p_1835->g_7 p_1835->g_1385 p_1835->g_996 p_1835->g_209 p_1835->g_77 p_1835->g_421 p_1835->g_1001 p_1835->g_1438 p_1835->g_190 p_1835->g_1234 p_1835->g_1009 p_1835->g_314 p_1835->g_121 p_1835->g_3 p_1835->g_104 p_1835->g_250 p_1835->g_1516 p_1835->g_1415 p_1835->g_1530 p_1835->g_1499 p_1835->g_179 p_1835->g_1553 p_1835->g_302 p_1835->g_217.f0
 * writes: p_1835->g_806 p_1835->g_151 p_1835->g_103 p_1835->g_132 p_1835->g_70 p_1835->g_121 p_1835->g_7 p_1835->g_503 p_1835->g_1499 p_1835->g_314 p_1835->g_250 p_1835->g_302
 */
uint64_t  func_22(uint32_t  p_23, uint16_t  p_24, int32_t  p_25, struct S2 * p_1835)
{ /* block id: 521 */
    uint16_t l_1282 = 1UL;
    uint32_t **l_1283 = (void*)0;
    VECTOR(uint8_t, 2) l_1284 = (VECTOR(uint8_t, 2))(0x22L, 0x35L);
    int64_t *l_1289 = &p_1835->g_806[0][4][3];
    uint8_t l_1290 = 1UL;
    int32_t l_1292 = 7L;
    int32_t l_1294 = 0L;
    uint32_t l_1302 = 8UL;
    int32_t l_1321 = 0x1C42BDBFL;
    int32_t l_1322 = 1L;
    int32_t l_1326 = (-8L);
    int32_t l_1328 = (-1L);
    int32_t l_1330 = (-8L);
    int32_t l_1331 = 0x61CF7809L;
    int32_t l_1332 = 0L;
    int32_t l_1335 = 0x26EE40E6L;
    int32_t l_1336 = (-4L);
    int32_t l_1337 = 1L;
    int32_t l_1338 = 5L;
    int32_t l_1339 = 4L;
    int32_t l_1340 = 0x70DE593DL;
    int32_t l_1341 = (-1L);
    int32_t l_1342 = 0x435C2FEBL;
    int32_t l_1343 = 0x3340FF92L;
    int32_t l_1344 = 1L;
    int32_t l_1345 = 0x3C8F1C65L;
    VECTOR(int32_t, 4) l_1346 = (VECTOR(int32_t, 4))(0x5C9915D3L, (VECTOR(int32_t, 2))(0x5C9915D3L, 0x70C534A0L), 0x70C534A0L);
    int8_t l_1350 = 0x0BL;
    uint64_t *l_1360 = &p_1835->g_132;
    uint32_t **l_1361 = &p_1835->g_1252[0];
    int32_t *l_1362 = &l_1294;
    VECTOR(int8_t, 4) l_1365 = (VECTOR(int8_t, 4))(0x3EL, (VECTOR(int8_t, 2))(0x3EL, 0L), 0L);
    int16_t *l_1372 = &p_1835->g_70;
    union U1 *l_1379 = (void*)0;
    union U0 *l_1412 = &p_1835->g_1133;
    union U0 **l_1411 = &l_1412;
    union U0 ***l_1410 = &l_1411;
    int32_t *l_1422 = &p_1835->g_213;
    int32_t **l_1421 = &l_1422;
    VECTOR(uint32_t, 2) l_1493 = (VECTOR(uint32_t, 2))(4294967295UL, 0x316C259DL);
    VECTOR(int32_t, 8) l_1544 = (VECTOR(int32_t, 8))(0x0C0A9118L, (VECTOR(int32_t, 4))(0x0C0A9118L, (VECTOR(int32_t, 2))(0x0C0A9118L, 0x1CE88E70L), 0x1CE88E70L), 0x1CE88E70L, 0x0C0A9118L, 0x1CE88E70L);
    int16_t l_1550 = 0x6B9AL;
    int32_t l_1579[3][8][2] = {{{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL}},{{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL}},{{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL},{0x6C200798L,0x13427A5EL}}};
    VECTOR(int8_t, 16) l_1596 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int8_t, 2))(1L, 0L), (VECTOR(int8_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
    VECTOR(int32_t, 8) l_1597 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x47A1EADFL), 0x47A1EADFL), 0x47A1EADFL, 0L, 0x47A1EADFL);
    VECTOR(uint32_t, 2) l_1598 = (VECTOR(uint32_t, 2))(0UL, 0xA0970D78L);
    VECTOR(uint32_t, 2) l_1599 = (VECTOR(uint32_t, 2))(0xFE80C8D4L, 7UL);
    int i, j, k;
    if (((((((((safe_mul_func_int8_t_s_s(p_25, (((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))((safe_mod_func_uint8_t_u_u((((((safe_add_func_int32_t_s_s(l_1282, (l_1283 != l_1283))) != ((((((VECTOR(uint8_t, 2))(l_1284.yy)).odd >= p_24) != ((*l_1289) |= (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_1282 > l_1284.y), l_1284.y)), l_1284.y)))) ^ 1L) == l_1284.x)) != (-1L)) >= 0x22L) | l_1284.x), 1UL)), p_25, p_23, ((VECTOR(int16_t, 4))((-1L))), p_24, (-7L), ((VECTOR(int16_t, 4))(0x15F4L)), ((VECTOR(int16_t, 2))(0x6BE5L)), 0x2123L)).s7c)).xxxx, ((VECTOR(int16_t, 4))(0L))))).x , 0xA8L))) < p_25) == 0x770D78A0AB9A7855L) != l_1290) <= p_24) && p_1835->g_149[4]) > p_1835->g_1030.x) != l_1284.x))
    { /* block id: 523 */
        int16_t l_1291 = (-8L);
        int32_t *l_1293 = (void*)0;
        int32_t *l_1295 = &p_1835->g_104;
        int32_t *l_1296 = (void*)0;
        int32_t *l_1297 = &p_1835->g_335[1];
        int32_t *l_1298 = &p_1835->g_335[1];
        int32_t *l_1299 = &p_1835->g_335[1];
        int32_t *l_1300 = &l_1292;
        int32_t *l_1301[9];
        int i;
        for (i = 0; i < 9; i++)
            l_1301[i] = (void*)0;
        --l_1302;
    }
    else
    { /* block id: 525 */
        VECTOR(int64_t, 4) l_1307 = (VECTOR(int64_t, 4))(0x23E0BEC6BC3757E7L, (VECTOR(int64_t, 2))(0x23E0BEC6BC3757E7L, 0L), 0L);
        int32_t l_1318 = 8L;
        int32_t l_1320 = 0x43E57BC6L;
        int32_t l_1323 = 0x5C0F1D51L;
        int32_t l_1324 = 0x61EE682EL;
        int32_t l_1325 = 9L;
        int32_t l_1327 = 0x25F3EA80L;
        int32_t l_1329 = 6L;
        int32_t l_1333 = (-1L);
        int32_t l_1334[9][5] = {{(-1L),(-1L),2L,0x3A15648DL,0x1F1404A4L},{(-1L),(-1L),2L,0x3A15648DL,0x1F1404A4L},{(-1L),(-1L),2L,0x3A15648DL,0x1F1404A4L},{(-1L),(-1L),2L,0x3A15648DL,0x1F1404A4L},{(-1L),(-1L),2L,0x3A15648DL,0x1F1404A4L},{(-1L),(-1L),2L,0x3A15648DL,0x1F1404A4L},{(-1L),(-1L),2L,0x3A15648DL,0x1F1404A4L},{(-1L),(-1L),2L,0x3A15648DL,0x1F1404A4L},{(-1L),(-1L),2L,0x3A15648DL,0x1F1404A4L}};
        uint32_t l_1351 = 4UL;
        int i, j;
        for (p_1835->g_151 = 2; (p_1835->g_151 == 0); p_1835->g_151--)
        { /* block id: 528 */
            int32_t *l_1308 = &p_1835->g_104;
            int32_t *l_1309 = &p_1835->g_335[1];
            int32_t *l_1310 = &l_1292;
            int32_t *l_1311 = &l_1292;
            int32_t *l_1312 = (void*)0;
            int32_t *l_1313 = &l_1294;
            int32_t *l_1314 = (void*)0;
            int32_t *l_1315 = (void*)0;
            int32_t *l_1316 = (void*)0;
            int32_t *l_1317[7][4][2] = {{{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292}},{{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292}},{{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292}},{{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292}},{{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292}},{{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292}},{{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292},{(void*)0,&l_1292}}};
            uint64_t l_1347[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1347[i] = 0xA99C7E64C8477683L;
            if (l_1307.y)
                break;
            l_1347[2]++;
            --l_1351;
        }
        for (p_23 = 14; (p_23 > 6); p_23 = safe_sub_func_int64_t_s_s(p_23, 4))
        { /* block id: 535 */
            return p_25;
        }
        (*p_1835->g_1356) = &l_1342;
    }
    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x66A2284CL, ((VECTOR(int32_t, 2))(1L, 0x1D48CC02L)), 0x0153DEA0L)).odd)).lo, (safe_rshift_func_int8_t_s_u((((*l_1360) = ((VECTOR(uint64_t, 8))(p_1835->g_1359.s0c9d9319)).s4) > (l_1361 != l_1361)), 3)), (l_1290 & ((*l_1362) |= (*p_1835->g_974))), 0x449D5515L, (0x2227C399A00741A7L <= (safe_rshift_func_uint8_t_u_s(1UL, (((((VECTOR(int8_t, 4))(l_1365.zwwy)).w > ((((*l_1362) , ((*l_1372) = (safe_lshift_func_uint16_t_u_u((*l_1362), ((safe_sub_func_uint64_t_u_u((((safe_sub_func_int8_t_s_s((0xC539CCBDBE39733AL & 18446744073709551613UL), p_1835->g_220.w)) != 0x62C010569CA99A38L) == (*l_1362)), 0x6BA102E6E6239CBBL)) ^ 0x1745FE86E7E581D9L))))) , p_24) , 0x4DL)) != p_1835->g_1032.se) != (*l_1362))))), 0x40633143L, (-1L), 1L)).s3072026123047216)).sa)
    { /* block id: 543 */
        int32_t *l_1373 = (void*)0;
        int32_t **l_1374 = &p_1835->g_121;
        VECTOR(uint32_t, 4) l_1386 = (VECTOR(uint32_t, 4))(0xC5965EEEL, (VECTOR(uint32_t, 2))(0xC5965EEEL, 4294967295UL), 4294967295UL);
        int32_t l_1414[3][6][3] = {{{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L}},{{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L}},{{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L},{(-3L),0x2FB82996L,0x1A8B5860L}}};
        int32_t **l_1420[1];
        int8_t l_1423 = (-1L);
        int8_t *l_1426[7];
        uint64_t *l_1435 = (void*)0;
        uint64_t *l_1436 = (void*)0;
        uint64_t *l_1437[7][2][5] = {{{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0},{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0}},{{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0},{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0}},{{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0},{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0}},{{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0},{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0}},{{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0},{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0}},{{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0},{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0}},{{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0},{(void*)0,&p_1835->g_132,(void*)0,&p_1835->g_132,(void*)0}}};
        VECTOR(int32_t, 2) l_1439 = (VECTOR(int32_t, 2))(0x6786D089L, 1L);
        VECTOR(int32_t, 2) l_1440 = (VECTOR(int32_t, 2))(2L, 0x165F82B5L);
        VECTOR(int32_t, 16) l_1441 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 7L), 7L), 7L, 4L, 7L, (VECTOR(int32_t, 2))(4L, 7L), (VECTOR(int32_t, 2))(4L, 7L), 4L, 7L, 4L, 7L);
        int32_t *l_1442 = &l_1328;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1420[i] = (void*)0;
        for (i = 0; i < 7; i++)
            l_1426[i] = (void*)0;
        (*l_1374) = l_1373;
        if ((p_1835->g_1080.y != ((*l_1360)--)))
        { /* block id: 546 */
            union U1 *l_1377 = &p_1835->g_911[0];
            union U1 **l_1378[6];
            int32_t l_1402 = 1L;
            int i;
            for (i = 0; i < 6; i++)
                l_1378[i] = &p_1835->g_996[2];
            l_1379 = l_1377;
            for (p_1835->g_7 = (-19); (p_1835->g_7 == 17); ++p_1835->g_7)
            { /* block id: 550 */
                if ((*l_1362))
                    break;
            }
            (*l_1362) = p_23;
            for (l_1336 = 20; (l_1336 < (-10)); l_1336 = safe_sub_func_uint64_t_u_u(l_1336, 8))
            { /* block id: 556 */
                int8_t l_1384 = 1L;
                uint16_t *l_1399 = &l_1282;
                int32_t l_1407 = 0x56B4C2C6L;
                int i, j;
                if (l_1384)
                    break;
                atomic_add(&p_1835->g_atomic_reduction[get_linear_group_id()], ((p_1835->g_1385 , (((VECTOR(uint32_t, 16))(l_1386.yzwwxyzwwwxxwxzw)).s6 > (safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((p_23 <= (safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((FAKE_DIVERGE(p_1835->group_2_offset, get_group_id(2), 10) | (safe_div_func_int32_t_s_s(((((safe_div_func_uint16_t_u_u(((*l_1399)--), ((l_1402 < (safe_sub_func_int32_t_s_s((*p_1835->g_974), (p_1835->g_996[3] != p_1835->g_996[0])))) ^ ((safe_mul_func_uint16_t_u_u(((--(*l_1360)) | ((-10L) <= FAKE_DIVERGE(p_1835->global_1_offset, get_global_id(1), 10))), ((((((0xFFF3L & (~p_1835->g_209)) , &l_1373) != &p_1835->g_103) , 0x2D387593L) == p_23) >= (*l_1362)))) <= 0xC1L)))) < l_1402) , l_1410) != (void*)0), p_23))) > l_1384), (*l_1362))), 0x6A788F07L))), p_23)), p_1835->g_77.x)))) && p_24));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1835->v_collective += p_1835->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1835->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 104)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(0x6E0D6231L, 7UL)).hi, 10))][(safe_mod_func_uint32_t_u_u(p_1835->tid, 104))]));
            }
        }
        else
        { /* block id: 565 */
            int32_t *l_1413[10] = {&l_1294,(void*)0,&l_1294,&l_1294,(void*)0,&l_1294,&l_1294,(void*)0,&l_1294,&l_1294};
            int32_t l_1416 = (-1L);
            uint16_t l_1417 = 0xE849L;
            int i;
            --l_1417;
            (*l_1362) = (((l_1420[0] == l_1421) & (-1L)) | l_1423);
        }
        (*l_1442) |= (255UL | (safe_div_func_int8_t_s_s((((*l_1362) , ((*l_1362) = p_1835->g_421.s8)) != ((safe_mul_func_uint8_t_u_u(0UL, (safe_div_func_uint32_t_u_u((safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((p_1835->g_132 , l_1290), 2)), (p_1835->g_503.y = p_1835->g_1001.y))), (p_1835->g_1438 , ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_1439.xxxyyyxx)))).s7356224627333321)).sba85, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(l_1440.xx)).yyyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_1441.sb79b3ac3dd6d68d6)))).sa49a)))))).x))))) , ((p_24 != p_1835->g_190.y) > p_24))), p_24)));
    }
    else
    { /* block id: 572 */
        int16_t **l_1451 = &p_1835->g_144;
        VECTOR(int8_t, 2) l_1490 = (VECTOR(int8_t, 2))(0x1AL, 0L);
        int32_t l_1511 = 1L;
        VECTOR(int32_t, 4) l_1518 = (VECTOR(int32_t, 4))(0x08482715L, (VECTOR(int32_t, 2))(0x08482715L, 0x45714664L), 0x45714664L);
        uint64_t *l_1559 = (void*)0;
        int32_t *l_1575[3];
        uint32_t l_1576 = 0x42B19F03L;
        int i;
        for (i = 0; i < 3; i++)
            l_1575[i] = &l_1342;
        if ((atomic_inc(&p_1835->g_atomic_input[97 * get_linear_group_id() + 88]) == 3))
        { /* block id: 574 */
            int32_t l_1444 = 0x63957133L;
            int32_t *l_1443 = &l_1444;
            int32_t *l_1445 = (void*)0;
            int32_t *l_1446 = &l_1444;
            union U0 l_1448 = {0xC39E1F68L};/* VOLATILE GLOBAL l_1448 */
            union U0 *l_1447 = &l_1448;
            union U0 *l_1449 = &l_1448;
            union U0 *l_1450 = &l_1448;
            l_1446 = (l_1445 = l_1443);
            l_1450 = (l_1449 = l_1447);
            unsigned int result = 0;
            result += l_1444;
            result += l_1448.f0;
            atomic_add(&p_1835->g_special_values[97 * get_linear_group_id() + 88], result);
        }
        else
        { /* block id: 579 */
            (1 + 1);
        }
        if ((l_1451 == &l_1372))
        { /* block id: 582 */
            if ((atomic_inc(&p_1835->g_atomic_input[97 * get_linear_group_id() + 47]) == 1))
            { /* block id: 584 */
                uint32_t l_1452 = 1UL;
                uint64_t l_1453[4];
                uint64_t l_1454 = 0UL;
                VECTOR(int64_t, 8) l_1455 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                VECTOR(int64_t, 16) l_1456 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x79952CA2B8138FA5L), 0x79952CA2B8138FA5L), 0x79952CA2B8138FA5L, 0L, 0x79952CA2B8138FA5L, (VECTOR(int64_t, 2))(0L, 0x79952CA2B8138FA5L), (VECTOR(int64_t, 2))(0L, 0x79952CA2B8138FA5L), 0L, 0x79952CA2B8138FA5L, 0L, 0x79952CA2B8138FA5L);
                uint32_t l_1457 = 0UL;
                VECTOR(int32_t, 8) l_1458 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x229E48C0L), 0x229E48C0L), 0x229E48C0L, 8L, 0x229E48C0L);
                uint32_t l_1459 = 4294967295UL;
                VECTOR(int64_t, 2) l_1460 = (VECTOR(int64_t, 2))(0L, 7L);
                VECTOR(int64_t, 2) l_1461 = (VECTOR(int64_t, 2))(0x32CB73D3235EBCBBL, 0x4312A24FD35C347AL);
                VECTOR(int64_t, 16) l_1462 = (VECTOR(int64_t, 16))(0x0C7F50DD5390567CL, (VECTOR(int64_t, 4))(0x0C7F50DD5390567CL, (VECTOR(int64_t, 2))(0x0C7F50DD5390567CL, 0x01A29D2A2B439997L), 0x01A29D2A2B439997L), 0x01A29D2A2B439997L, 0x0C7F50DD5390567CL, 0x01A29D2A2B439997L, (VECTOR(int64_t, 2))(0x0C7F50DD5390567CL, 0x01A29D2A2B439997L), (VECTOR(int64_t, 2))(0x0C7F50DD5390567CL, 0x01A29D2A2B439997L), 0x0C7F50DD5390567CL, 0x01A29D2A2B439997L, 0x0C7F50DD5390567CL, 0x01A29D2A2B439997L);
                uint8_t l_1463 = 0UL;
                VECTOR(int64_t, 2) l_1464 = (VECTOR(int64_t, 2))(1L, (-8L));
                VECTOR(int64_t, 16) l_1465 = (VECTOR(int64_t, 16))(0x6EB8CE614F33FC90L, (VECTOR(int64_t, 4))(0x6EB8CE614F33FC90L, (VECTOR(int64_t, 2))(0x6EB8CE614F33FC90L, 1L), 1L), 1L, 0x6EB8CE614F33FC90L, 1L, (VECTOR(int64_t, 2))(0x6EB8CE614F33FC90L, 1L), (VECTOR(int64_t, 2))(0x6EB8CE614F33FC90L, 1L), 0x6EB8CE614F33FC90L, 1L, 0x6EB8CE614F33FC90L, 1L);
                VECTOR(uint8_t, 16) l_1466 = (VECTOR(uint8_t, 16))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0UL), 0UL), 0UL, 3UL, 0UL, (VECTOR(uint8_t, 2))(3UL, 0UL), (VECTOR(uint8_t, 2))(3UL, 0UL), 3UL, 0UL, 3UL, 0UL);
                VECTOR(uint64_t, 8) l_1467 = (VECTOR(uint64_t, 8))(0xB31F6674A1469D3CL, (VECTOR(uint64_t, 4))(0xB31F6674A1469D3CL, (VECTOR(uint64_t, 2))(0xB31F6674A1469D3CL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xB31F6674A1469D3CL, 18446744073709551615UL);
                int32_t l_1468 = 0x6D2F8031L;
                int32_t l_1469[9] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
                int16_t l_1470 = (-8L);
                int32_t *l_1471[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1453[i] = 18446744073709551615UL;
                for (i = 0; i < 4; i++)
                    l_1471[i] = (void*)0;
                l_1453[0] = l_1452;
                l_1471[1] = (((l_1469[5] &= (l_1454 , (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((-4L), ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))(l_1455.s21)).xyxy, ((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 2))(l_1456.s81)).yxyyxxxy, (int64_t)(((VECTOR(int32_t, 8))(0x7A7148D9L, l_1457, 0x4468A541L, 0x1FE89300L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1458.s7602023350206645)).sebfa)).xyywzzzz)).hi, (int32_t)l_1459))))).s4 , ((VECTOR(int64_t, 4))(0x3681447B4A9B5F9FL, 0x7AE8B2A94AC2E65DL, 0x6E9501EA231AD9F0L, 0x7BF20AF2E6C43C1CL)).z), (int64_t)((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_1460.xxxxxxyxyxxxxxyy)).even)).s6))).even))), ((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 8))(l_1461.yyyxyxyy)).lo))), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_1462.s07c9)), l_1463, (-7L), 0x3AD1F152F30E8E7BL, 0x6A7C50025B97536BL)).s4750112377264743, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_1464.xyyxxyyxxyyxxxxy)))).se537)).zyyzzywwxyyzzwyy))).s3d, ((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 2))(l_1465.s47)).yxyyyxyxyxyxyxyx, ((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 4))(5L, 0x2C089E32DC6459CEL, 0x0D3BDDEA2E93E408L, 0x03FCDF1CAFB032DEL)).even, ((VECTOR(int64_t, 8))(l_1466.s2, ((VECTOR(int64_t, 2))((-7L))), (-1L), ((VECTOR(int64_t, 4))((-9L))))).s11))).xxxyyxxxyxxxyxyx, ((VECTOR(int64_t, 16))(0x45A96ABA7708362CL)))))))).s9e))))), l_1467.s1, ((VECTOR(int64_t, 4))(1L)))).s47)).lo , l_1468))) , l_1470) , (void*)0);
                unsigned int result = 0;
                result += l_1452;
                int l_1453_i0;
                for (l_1453_i0 = 0; l_1453_i0 < 4; l_1453_i0++) {
                    result += l_1453[l_1453_i0];
                }
                result += l_1454;
                result += l_1455.s7;
                result += l_1455.s6;
                result += l_1455.s5;
                result += l_1455.s4;
                result += l_1455.s3;
                result += l_1455.s2;
                result += l_1455.s1;
                result += l_1455.s0;
                result += l_1456.sf;
                result += l_1456.se;
                result += l_1456.sd;
                result += l_1456.sc;
                result += l_1456.sb;
                result += l_1456.sa;
                result += l_1456.s9;
                result += l_1456.s8;
                result += l_1456.s7;
                result += l_1456.s6;
                result += l_1456.s5;
                result += l_1456.s4;
                result += l_1456.s3;
                result += l_1456.s2;
                result += l_1456.s1;
                result += l_1456.s0;
                result += l_1457;
                result += l_1458.s7;
                result += l_1458.s6;
                result += l_1458.s5;
                result += l_1458.s4;
                result += l_1458.s3;
                result += l_1458.s2;
                result += l_1458.s1;
                result += l_1458.s0;
                result += l_1459;
                result += l_1460.y;
                result += l_1460.x;
                result += l_1461.y;
                result += l_1461.x;
                result += l_1462.sf;
                result += l_1462.se;
                result += l_1462.sd;
                result += l_1462.sc;
                result += l_1462.sb;
                result += l_1462.sa;
                result += l_1462.s9;
                result += l_1462.s8;
                result += l_1462.s7;
                result += l_1462.s6;
                result += l_1462.s5;
                result += l_1462.s4;
                result += l_1462.s3;
                result += l_1462.s2;
                result += l_1462.s1;
                result += l_1462.s0;
                result += l_1463;
                result += l_1464.y;
                result += l_1464.x;
                result += l_1465.sf;
                result += l_1465.se;
                result += l_1465.sd;
                result += l_1465.sc;
                result += l_1465.sb;
                result += l_1465.sa;
                result += l_1465.s9;
                result += l_1465.s8;
                result += l_1465.s7;
                result += l_1465.s6;
                result += l_1465.s5;
                result += l_1465.s4;
                result += l_1465.s3;
                result += l_1465.s2;
                result += l_1465.s1;
                result += l_1465.s0;
                result += l_1466.sf;
                result += l_1466.se;
                result += l_1466.sd;
                result += l_1466.sc;
                result += l_1466.sb;
                result += l_1466.sa;
                result += l_1466.s9;
                result += l_1466.s8;
                result += l_1466.s7;
                result += l_1466.s6;
                result += l_1466.s5;
                result += l_1466.s4;
                result += l_1466.s3;
                result += l_1466.s2;
                result += l_1466.s1;
                result += l_1466.s0;
                result += l_1467.s7;
                result += l_1467.s6;
                result += l_1467.s5;
                result += l_1467.s4;
                result += l_1467.s3;
                result += l_1467.s2;
                result += l_1467.s1;
                result += l_1467.s0;
                result += l_1468;
                int l_1469_i0;
                for (l_1469_i0 = 0; l_1469_i0 < 9; l_1469_i0++) {
                    result += l_1469[l_1469_i0];
                }
                result += l_1470;
                atomic_add(&p_1835->g_special_values[97 * get_linear_group_id() + 47], result);
            }
            else
            { /* block id: 588 */
                (1 + 1);
            }
        }
        else
        { /* block id: 591 */
            uint64_t l_1477[4][5][2] = {{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}}};
            VECTOR(uint32_t, 2) l_1495 = (VECTOR(uint32_t, 2))(0xAB12BC59L, 2UL);
            VECTOR(int64_t, 8) l_1517 = (VECTOR(int64_t, 8))((-6L), (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), (-7L)), (-7L)), (-7L), (-6L), (-7L));
            uint64_t **l_1524 = (void*)0;
            uint64_t **l_1525 = &l_1360;
            VECTOR(uint32_t, 8) l_1541 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xAE878FB3L), 0xAE878FB3L), 0xAE878FB3L, 4294967295UL, 0xAE878FB3L);
            uint64_t *l_1547 = (void*)0;
            uint64_t *l_1548 = &l_1477[2][4][0];
            uint8_t *l_1549[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int8_t *l_1554 = (void*)0;
            int8_t *l_1555[3];
            int32_t l_1556[1][8] = {{0x493B87BDL,0x493B87BDL,0x493B87BDL,0x493B87BDL,0x493B87BDL,0x493B87BDL,0x493B87BDL,0x493B87BDL}};
            int32_t l_1566 = 0x466A288AL;
            VECTOR(uint64_t, 8) l_1567 = (VECTOR(uint64_t, 8))(0x7BF2F51D62FCCA98L, (VECTOR(uint64_t, 4))(0x7BF2F51D62FCCA98L, (VECTOR(uint64_t, 2))(0x7BF2F51D62FCCA98L, 0x202E82C5E2F27D04L), 0x202E82C5E2F27D04L), 0x202E82C5E2F27D04L, 0x7BF2F51D62FCCA98L, 0x202E82C5E2F27D04L);
            int32_t l_1572 = 0L;
            uint64_t *l_1573 = &p_1835->g_302[1][0];
            int32_t *l_1574 = &l_1331;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1555[i] = &p_1835->g_86;
            for (l_1341 = 0; (l_1341 < (-9)); --l_1341)
            { /* block id: 594 */
                int32_t *l_1474 = &l_1294;
                int32_t *l_1475 = &l_1337;
                int32_t *l_1476 = &l_1331;
                int64_t *l_1500 = &p_1835->g_806[0][0][4];
                l_1477[2][4][0]--;
                for (p_24 = 19; (p_24 < 9); p_24 = safe_sub_func_int8_t_s_s(p_24, 7))
                { /* block id: 598 */
                    int8_t l_1491 = 0x4EL;
                    VECTOR(uint32_t, 8) l_1492 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x746ED728L), 0x746ED728L), 0x746ED728L, 4294967295UL, 0x746ED728L);
                    int i;
                    for (l_1322 = (-14); (l_1322 <= (-8)); ++l_1322)
                    { /* block id: 601 */
                        VECTOR(uint32_t, 16) l_1494 = (VECTOR(uint32_t, 16))(0xC3AFD5ABL, (VECTOR(uint32_t, 4))(0xC3AFD5ABL, (VECTOR(uint32_t, 2))(0xC3AFD5ABL, 0xA768A5D7L), 0xA768A5D7L), 0xA768A5D7L, 0xC3AFD5ABL, 0xA768A5D7L, (VECTOR(uint32_t, 2))(0xC3AFD5ABL, 0xA768A5D7L), (VECTOR(uint32_t, 2))(0xC3AFD5ABL, 0xA768A5D7L), 0xC3AFD5ABL, 0xA768A5D7L, 0xC3AFD5ABL, 0xA768A5D7L);
                        int64_t **l_1498[1][2];
                        VECTOR(int8_t, 2) l_1509 = (VECTOR(int8_t, 2))(1L, 0x07L);
                        int8_t *l_1510 = &p_1835->g_314;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1498[i][j] = (void*)0;
                        }
                        l_1511 &= (safe_mul_func_uint16_t_u_u(((+p_1835->g_1234.s3) > ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(l_1490.xyyxxxyy)).s7, l_1491)), 0)) <= ((VECTOR(uint32_t, 8))(l_1492.s33470536)).s2)), ((((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(4294967295UL, ((VECTOR(uint32_t, 16))(l_1493.yxxyxyyyyxyyxyyy)).s2, 0x199F3896L, (~((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_1494.s25)).yyyxyxxy)).s6), 0x70A99162L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_1495.yy)), 0x0806F8AFL, 0x66745B24L)).lo)))), 0xA4CD20DFL)).s63)).hi | (safe_mod_func_uint16_t_u_u((((((p_1835->g_1499 = l_1289) != l_1500) | (safe_sub_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((*l_1510) ^= (p_25 != (65531UL != (((VECTOR(int8_t, 4))(l_1509.yxyy)).w && ((p_24 ^ p_1835->g_1009.s8) , GROUP_DIVERGE(0, 1)))))), p_25)), (*l_1362))), 0x78L)), 0xB06910874116D9E8L))) < 1UL) <= 0L), p_25))) == 0x0D2BL) & (*l_1474)) & 7L)));
                    }
                    if (p_25)
                        break;
                    if ((*p_1835->g_121))
                        break;
                    return p_1835->g_250.y;
                }
            }
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1835->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 104)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((*l_1372) = (safe_mod_func_int32_t_s_s((((*l_1362) = (l_1550 = (p_1835->g_1516 , (((((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_1517.s36622560)).even)), ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x7557AC05L, (-1L), 0x64552FCCL, (-4L))))).xzwyyzyz, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1518.wzyxzxxz)).even)).zyxzwzwx))), ((VECTOR(uint32_t, 4))(0x5D0AB917L, (safe_mod_func_uint32_t_u_u(((0x198B61C355180FCAL == FAKE_DIVERGE(p_1835->local_2_offset, get_local_id(2), 10)) == (~l_1511)), (safe_unary_minus_func_uint64_t_u(((*l_1362) ^ (safe_mod_func_int16_t_s_s(p_1835->g_1415[4][0], 7L))))))), 0xA8504DE7L, 4294967286UL)).xxyzxzxx))).odd))).y , (((*l_1525) = &p_1835->g_132) != ((((p_1835->g_250.x |= ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))((((safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(p_1835->g_1530.xxxyxyyxyxyxxxyx)).even)).s6 | ((*l_1548) = (safe_lshift_func_int16_t_s_s((!(safe_rshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((((p_23 && (!(safe_sub_func_int64_t_s_s((((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_1541.s7557)))), ((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 16))(((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 8))(l_1544.s37667261)).s3, (safe_mod_func_int64_t_s_s((*p_1835->g_1499), p_23)))) , 0xCC93AE70L), 0x310F7D74L, 0xB3C3BCD4L, 0xD0C7B478L, ((VECTOR(uint32_t, 8))(1UL)), 8UL, 0x997E58ABL, 4294967295UL, 1UL)), ((VECTOR(uint32_t, 16))(4294967295UL))))).s9, 0x98A3A991L, ((VECTOR(uint32_t, 2))(0UL)), 0x3326F02AL, 4294967295UL, 5UL, 0x471EEA39L)), 0x625ED971L, 4294967295UL, 4294967295UL, ((VECTOR(uint32_t, 4))(1UL)), 0xE6EE612BL)).sbf2f))).hi, ((VECTOR(uint32_t, 2))(0xBBFF972DL))))).yyyyyyyyyxyxyxyy)).se989, ((VECTOR(uint32_t, 4))(4294967290UL)), ((VECTOR(uint32_t, 4))(0xE89D81ABL))))), ((VECTOR(uint32_t, 4))(0x6375279DL)), ((VECTOR(uint32_t, 4))(0x758CBD0CL))))))).s7777124532531321, ((VECTOR(uint32_t, 16))(2UL))))).s5 , 0x6F2B7E1400C82908L), 0x5B724F2B8303F6F4L)))) > 1UL) == p_1835->g_421.s0) < 0x1A3099B2L), (*p_1835->g_1499))), 0))), l_1518.w)))) == (-4L)) <= (-5L)) , p_25), 0x5CL)), (*l_1362))) || (-7L)) > p_25), 0x42L, 250UL, ((VECTOR(uint8_t, 2))(0x52L)), 0xC0L, 1UL, 0xF1L)))).s2) , 18446744073709551615UL) > p_1835->g_179.s6) , (void*)0))) > 0x65L) | 0L)))) <= l_1495.y), l_1518.z))), l_1490.x)), 10))][(safe_mod_func_uint32_t_u_u(p_1835->tid, 104))]));
            (*l_1574) = (safe_mul_func_int8_t_s_s((l_1556[0][4] &= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_1835->g_1553.s70073551)))).s5), (((*l_1573) &= (safe_sub_func_uint64_t_u_u((((((l_1559 == &p_1835->g_132) && (l_1566 = (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1835->local_0_offset, get_local_id(0), 10), 2)), p_25)), p_24)))) , ((*p_1835->g_1499) > ((VECTOR(int64_t, 4))((-2L), p_23, 0L, 0x741FA3CDAFA14791L)).y)) < (l_1490.x && ((VECTOR(uint64_t, 8))(l_1567.s10114110)).s6)) != ((safe_div_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (~((GROUP_DIVERGE(0, 1) & (safe_mod_func_int64_t_s_s(l_1572, 7L))) | p_1835->g_314)))) , 0x3AL)), GROUP_DIVERGE(1, 1)))) , (-3L))));
        }
        l_1576++;
    }
    (*l_1362) = ((-1L) != (((l_1579[1][6][1] ^ (-7L)) & ((safe_mod_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(((*l_1372) = (safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((*l_1362), ((void*)0 != &l_1372))), ((VECTOR(uint16_t, 4))(0xECF8L, ((safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(GROUP_DIVERGE(1, 1), 8)), ((safe_sub_func_int32_t_s_s((p_25 && ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_1596.s95)).xyxy)).wxyyxxzyzwwzywyy)))).odd)).s7), (~((VECTOR(int32_t, 8))(l_1597.s64735722)).s5))) , 0x14L))), ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 16))(l_1598.yxxyyxyyyxyxyyyy)).sd3dc, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 2))(l_1599.yx))))))).yxxx))).x)) == (*l_1362)), 0x73A1L, 0xF0EDL)).z))), p_25)) && 0xDE4FL), 0x719BCC1AL)) , 0xB1271FDBL)) >= (*l_1362)));
    (*l_1362) |= 0L;
    return p_1835->g_217.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1835->g_7 p_1835->g_3 p_1835->g_31 p_1835->g_64 p_1835->l_comm_values p_1835->g_70 p_1835->g_77 p_1835->g_104 p_1835->g_72 p_1835->g_comm_values p_1835->g_149 p_1835->g_103 p_1835->g_179 p_1835->g_98 p_1835->g_188 p_1835->g_190 p_1835->g_151 p_1835->g_220 p_1835->g_228 p_1835->g_250 p_1835->g_121 p_1835->g_302 p_1835->g_314 p_1835->g_315 p_1835->g_209 p_1835->g_455 p_1835->g_457 p_1835->g_421 p_1835->g_517 p_1835->g_397 p_1835->g_518 p_1835->g_528 p_1835->g_684 p_1835->g_685 p_1835->g_335 p_1835->g_396 p_1835->g_132 p_1835->g_361 p_1835->g_806 p_1835->g_809 p_1835->g_402 p_1835->g_835 p_1835->g_839 p_1835->g_567 p_1835->g_866 p_1835->g_867 p_1835->g_911 p_1835->g_30 p_1835->g_972 p_1835->g_974 p_1835->g_995 p_1835->g_1001 p_1835->g_1009 p_1835->g_1016 p_1835->g_1030 p_1835->g_1031 p_1835->g_1032 p_1835->g_1038 p_1835->g_66 p_1835->g_607 p_1835->g_1080 p_1835->g_629 p_1835->g_1133 p_1835->g_1234 p_1835->g_503 p_1835->g_1236 p_1835->g_996 p_1835->g_1238 p_1835->g_866.f0 p_1835->g_1268
 * writes: p_1835->g_7 p_1835->g_66 p_1835->g_70 p_1835->g_86 p_1835->g_103 p_1835->g_104 p_1835->g_121 p_1835->g_98 p_1835->g_132 p_1835->g_144 p_1835->g_149 p_1835->l_comm_values p_1835->g_209 p_1835->g_213 p_1835->g_234 p_1835->g_228 p_1835->g_151 p_1835->g_302 p_1835->g_314 p_1835->g_315 p_1835->g_396 p_1835->g_397 p_1835->g_517 p_1835->g_528 p_1835->g_518 p_1835->g_comm_values p_1835->g_340 p_1835->g_806 p_1835->g_809 p_1835->g_190 p_1835->g_421 p_1835->g_455 p_1835->g_335 p_1835->g_607 p_1835->g_996 p_1835->g_630 p_1835->g_72 p_1835->g_866.f0 p_1835->g_1250 p_1835->g_1266
 */
uint8_t  func_32(uint32_t  p_33, int32_t * p_34, struct S2 * p_1835)
{ /* block id: 6 */
    VECTOR(uint32_t, 8) l_40 = (VECTOR(uint32_t, 8))(0xA0349B8AL, (VECTOR(uint32_t, 4))(0xA0349B8AL, (VECTOR(uint32_t, 2))(0xA0349B8AL, 0x512ED403L), 0x512ED403L), 0x512ED403L, 0xA0349B8AL, 0x512ED403L);
    int32_t *l_41[7][8][4] = {{{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3}},{{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3}},{{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3}},{{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3}},{{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3}},{{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3}},{{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3},{(void*)0,&p_1835->g_3,&p_1835->g_3,&p_1835->g_3}}};
    VECTOR(int16_t, 8) l_49 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, (-8L)), (-8L)), (-8L), 9L, (-8L));
    VECTOR(uint16_t, 16) l_981 = (VECTOR(uint16_t, 16))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0UL), 0UL), 0UL, 65532UL, 0UL, (VECTOR(uint16_t, 2))(65532UL, 0UL), (VECTOR(uint16_t, 2))(65532UL, 0UL), 65532UL, 0UL, 65532UL, 0UL);
    union U1 *l_994 = &p_1835->g_911[0];
    VECTOR(uint32_t, 8) l_1002 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x09290DF6L), 0x09290DF6L), 0x09290DF6L, 0UL, 0x09290DF6L);
    VECTOR(int16_t, 16) l_1008 = (VECTOR(int16_t, 16))(0x6D61L, (VECTOR(int16_t, 4))(0x6D61L, (VECTOR(int16_t, 2))(0x6D61L, 0x4A41L), 0x4A41L), 0x4A41L, 0x6D61L, 0x4A41L, (VECTOR(int16_t, 2))(0x6D61L, 0x4A41L), (VECTOR(int16_t, 2))(0x6D61L, 0x4A41L), 0x6D61L, 0x4A41L, 0x6D61L, 0x4A41L);
    VECTOR(uint64_t, 8) l_1033 = (VECTOR(uint64_t, 8))(0x7DE07636C5AAAE79L, (VECTOR(uint64_t, 4))(0x7DE07636C5AAAE79L, (VECTOR(uint64_t, 2))(0x7DE07636C5AAAE79L, 5UL), 5UL), 5UL, 0x7DE07636C5AAAE79L, 5UL);
    union U0 **l_1048 = (void*)0;
    uint8_t l_1111 = 0x2BL;
    int32_t l_1141 = 0L;
    VECTOR(int64_t, 8) l_1153 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 8L), 8L), 8L, 1L, 8L);
    uint32_t *l_1157[4][10][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint32_t **l_1156 = &l_1157[0][1][2];
    int8_t l_1247 = 0L;
    uint32_t ***l_1248 = &l_1156;
    int16_t l_1257 = 9L;
    int64_t l_1258[2];
    uint32_t *l_1264[2];
    uint32_t **l_1263 = &l_1264[0];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1258[i] = (-3L);
    for (i = 0; i < 2; i++)
        l_1264[i] = (void*)0;
    if ((*p_34))
    { /* block id: 7 */
        VECTOR(int32_t, 2) l_61 = (VECTOR(int32_t, 2))(0x332A1BF3L, 0L);
        int16_t *l_96 = (void*)0;
        int32_t l_1013 = 0x7E28A9DBL;
        uint32_t l_1067 = 0xB9895F6EL;
        uint32_t l_1090 = 0x249D9C85L;
        int32_t l_1109 = 0L;
        VECTOR(int8_t, 2) l_1113 = (VECTOR(int8_t, 2))(7L, 1L);
        int32_t l_1122 = 0L;
        int32_t l_1123 = 0x25D43AC5L;
        union U0 *l_1127 = &p_1835->g_217;
        int32_t l_1181 = 5L;
        VECTOR(uint16_t, 2) l_1235 = (VECTOR(uint16_t, 2))(65529UL, 2UL);
        union U1 **l_1237 = &l_994;
        int i;
        for (p_1835->g_7 = 0; (p_1835->g_7 >= 59); p_1835->g_7 = safe_add_func_int64_t_s_s(p_1835->g_7, 9))
        { /* block id: 10 */
            (*p_34) = (safe_add_func_uint32_t_u_u(((void*)0 == p_34), ((VECTOR(uint32_t, 8))(l_40.s36270331)).s5));
        }
        if ((p_34 != l_41[5][5][3]))
        { /* block id: 13 */
            int32_t l_48[4] = {5L,5L,5L,5L};
            int32_t l_76 = 0x4710B0ACL;
            int8_t *l_97 = &p_1835->g_98;
            VECTOR(int32_t, 4) l_1007 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x226D6889L), 0x226D6889L);
            int64_t l_1023 = 0L;
            VECTOR(uint8_t, 2) l_1087 = (VECTOR(uint8_t, 2))(253UL, 255UL);
            int32_t *l_1140[4];
            uint8_t l_1169 = 6UL;
            int16_t l_1170 = (-4L);
            uint8_t l_1182 = 0UL;
            int32_t **l_1226[7];
            int i;
            for (i = 0; i < 4; i++)
                l_1140[i] = &p_1835->g_213;
            for (i = 0; i < 7; i++)
                l_1226[i] = &l_41[5][5][3];
            if ((safe_add_func_int64_t_s_s(p_1835->g_3, p_1835->g_31.s2)))
            { /* block id: 14 */
                int8_t *l_65 = &p_1835->g_66[4];
                int16_t *l_69 = &p_1835->g_70;
                int16_t *l_71 = (void*)0;
                int16_t *l_73 = (void*)0;
                int16_t *l_74 = (void*)0;
                int16_t *l_75[10][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                int8_t *l_85 = &p_1835->g_86;
                int64_t *l_805 = &p_1835->g_806[0][0][4];
                int32_t l_807 = 1L;
                int64_t *l_808 = &p_1835->g_809;
                int8_t **l_992[3][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                int8_t *l_993 = &p_1835->g_98;
                int i, j, k;
                (*p_34) = ((safe_sub_func_int64_t_s_s((safe_add_func_int16_t_s_s(l_48[0], ((VECTOR(int16_t, 4))(l_49.s6013)).z)), func_50((func_53(p_34, (safe_rshift_func_int16_t_s_s(((((*l_808) |= ((VECTOR(int64_t, 16))(l_61.y, (safe_add_func_int8_t_s_s(((*l_65) = ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(8L, 0x6AL)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1835->g_64.s16)), 6L, 0x14L)).wzwzxwzw)).s03))), 0x58L, 0L)).even)).lo), (((l_807 ^= (((*l_805) ^= (safe_add_func_int16_t_s_s(1L, ((VECTOR(int16_t, 8))((l_76 |= ((*l_69) ^= p_1835->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1835->tid, 104))])), 0L, ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(1L, 0x6841L))))), ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(p_1835->g_77.xywwzxxz)).odd, (int16_t)func_78((((((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*l_85) = 0x78L), 0x63L)), 7)) <= func_87(func_90((func_93(l_96, (l_97 == &p_1835->g_98), p_1835) , p_1835->g_72.y), &p_1835->g_3, p_1835), l_96, p_1835)) , (void*)0) != p_1835->g_361) , l_96), &p_1835->g_3, p_1835), (int16_t)0x6233L))))).s2))) != 6L)) > p_33) != 18446744073709551608UL))), p_1835->g_149[3], ((VECTOR(int64_t, 2))(8L)), 0x0BFDFF49659588ECL, (-1L), l_61.y, 0x093FF3E6DF539C30L, ((VECTOR(int64_t, 4))(0x08808837B4B93E9FL)), ((VECTOR(int64_t, 2))(0x4A0E395C367401CDL)), 0x4CCF36B16CA3450EL)).s2) , 0UL) && l_48[0]), p_33)), p_33, &p_1835->g_3, p_1835->g_179.s2, p_1835) , p_1835->g_30.x), p_1835->g_567.y, p_1835))) <= 0x21F6L);
                if ((safe_mul_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((((~(safe_add_func_uint64_t_u_u((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_981.s2e)).yxxxyyxyyxxyyxyy)).hi, ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(0xFC26L, ((((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_61.x , p_33), ((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 4))(252UL, (((+((l_805 != l_805) & 0x2349L)) != ((safe_sub_func_uint32_t_u_u(((l_97 = (l_65 = ((safe_rshift_func_int16_t_s_u((l_76 = (((safe_lshift_func_uint8_t_u_u((p_1835->g_607.sd = p_33), l_61.x)) < (*p_1835->g_974)) | ((-1L) < p_1835->g_220.z))), l_48[2])) , (void*)0))) != l_993), (*p_34))) >= p_33)) & l_61.x), 255UL, 0x9FL)).xwxzxzyy, ((VECTOR(uint8_t, 8))(0x05L))))).s4)), p_33)) < p_33) , l_76) <= 0x714AL), 65535UL, 9UL, 0x73F1L, FAKE_DIVERGE(p_1835->group_1_offset, get_group_id(1), 10), 65531UL, 0UL)).even, ((VECTOR(uint16_t, 4))(0x0C7CL))))).zyzzywzw, ((VECTOR(uint16_t, 8))(0x0016L))))), ((VECTOR(uint16_t, 8))(0UL))))))).s53)).odd , p_33), 0x7577D9727C7CFD5AL))) >= p_33) < 18446744073709551610UL), p_33)) < l_61.x), p_1835->g_809)))
                { /* block id: 385 */
                    uint16_t l_1010 = 0UL;
                    (*p_1835->g_974) &= (*p_34);
                    (*p_1835->g_995) = l_994;
                    (*p_34) ^= (safe_mul_func_uint8_t_u_u(((((~(safe_sub_func_uint16_t_u_u(p_33, ((VECTOR(int16_t, 8))(p_1835->g_1001.zwwwzwwx)).s0))) , ((VECTOR(uint32_t, 4))(l_1002.s1146)).z) < p_1835->g_228.sd) > ((-1L) < (!((0UL && (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 2))(l_1007.wz)).odd, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(l_1008.s04dafd1f)).s22, ((VECTOR(uint16_t, 16))(p_1835->g_1009.scb0cbce1b2247c75)).s41))).lo)), ((1UL & (p_1835->g_806[0][0][4] , (l_1013 = (l_1010 >= (safe_lshift_func_int8_t_s_u(0x35L, 1)))))) , (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(p_1835->g_1016.s63cee6be)).s2, (safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_div_func_int64_t_s_s((l_807 , 0L), p_33)), l_1023)), 4294967295UL)))))))) != (-1L))))), 0x44L));
                }
                else
                { /* block id: 390 */
                    int32_t l_1041 = 0x6C90D6A3L;
                    (*p_34) = (safe_sub_func_uint8_t_u_u((((((p_1835->g_630.sa = (((((safe_mod_func_uint32_t_u_u(((+(((*l_69) ^= (l_61.x , (safe_rshift_func_int16_t_s_s(p_33, 5)))) >= 0x7EF1L)) | ((((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 2))(p_1835->g_1030.yy)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(p_1835->g_1031.s6136314074564504)).even)).s50, ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(p_1835->g_1032.sf53b3447349707d4)))).se9, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_1033.s3332726644522527)).s1bc2)).xwyyzwxw)).s72)))))).odd | (1L || ((safe_div_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(p_1835->g_1038.sc3)).odd, (l_48[2] | ((&l_75[1][6][0] != (void*)0) && 7L)))) <= (safe_div_func_int8_t_s_s(l_1041, FAKE_DIVERGE(p_1835->group_0_offset, get_group_id(0), 10)))), 5L)) , 1L))) && p_33)), 0x5DD52196L)) , (*p_34)) | 0x4BD92569L) == l_807) , l_1007.y)) >= p_33) < 0UL) , l_1007.y) || p_33), (-9L)));
                    for (p_1835->g_7 = 14; (p_1835->g_7 < 29); ++p_1835->g_7)
                    { /* block id: 396 */
                        (*p_34) &= (((safe_add_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u((+(18446744073709551615UL && p_33)), p_1835->g_66[2])) != 1UL) , &p_34) != &l_41[5][5][3]), 0xA2F7B546L)) < l_61.y) & ((l_1048 != (void*)0) & p_33));
                        l_1013 |= l_1041;
                    }
                    if ((atomic_inc(&p_1835->g_atomic_input[97 * get_linear_group_id() + 36]) == 9))
                    { /* block id: 401 */
                        VECTOR(int32_t, 16) l_1049 = (VECTOR(int32_t, 16))(0x4244DC84L, (VECTOR(int32_t, 4))(0x4244DC84L, (VECTOR(int32_t, 2))(0x4244DC84L, 0x5FCC1579L), 0x5FCC1579L), 0x5FCC1579L, 0x4244DC84L, 0x5FCC1579L, (VECTOR(int32_t, 2))(0x4244DC84L, 0x5FCC1579L), (VECTOR(int32_t, 2))(0x4244DC84L, 0x5FCC1579L), 0x4244DC84L, 0x5FCC1579L, 0x4244DC84L, 0x5FCC1579L);
                        uint64_t l_1050 = 0xEEE775D7A357E57AL;
                        uint16_t **l_1051[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint16_t **l_1052 = (void*)0;
                        uint16_t l_1055 = 65527UL;
                        uint16_t *l_1054 = &l_1055;
                        uint16_t **l_1053[3];
                        VECTOR(int32_t, 2) l_1056 = (VECTOR(int32_t, 2))((-1L), 0x34792FD1L);
                        uint16_t l_1057 = 0x2BDFL;
                        int32_t l_1058 = (-8L);
                        int16_t l_1059 = 0x66EFL;
                        uint16_t l_1060[9][3] = {{0x6BB0L,0x6BB0L,0x6BB0L},{0x6BB0L,0x6BB0L,0x6BB0L},{0x6BB0L,0x6BB0L,0x6BB0L},{0x6BB0L,0x6BB0L,0x6BB0L},{0x6BB0L,0x6BB0L,0x6BB0L},{0x6BB0L,0x6BB0L,0x6BB0L},{0x6BB0L,0x6BB0L,0x6BB0L},{0x6BB0L,0x6BB0L,0x6BB0L},{0x6BB0L,0x6BB0L,0x6BB0L}};
                        uint16_t l_1061 = 3UL;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_1053[i] = &l_1054;
                        l_1050 |= ((VECTOR(int32_t, 16))(l_1049.sd6d849e10d55c9dd)).s3;
                        l_1053[1] = (l_1052 = l_1051[0]);
                        l_1057 &= ((VECTOR(int32_t, 8))(l_1056.yxyyyyxy)).s4;
                        l_1061 &= (l_1060[1][2] ^= (l_1059 |= l_1058));
                        unsigned int result = 0;
                        result += l_1049.sf;
                        result += l_1049.se;
                        result += l_1049.sd;
                        result += l_1049.sc;
                        result += l_1049.sb;
                        result += l_1049.sa;
                        result += l_1049.s9;
                        result += l_1049.s8;
                        result += l_1049.s7;
                        result += l_1049.s6;
                        result += l_1049.s5;
                        result += l_1049.s4;
                        result += l_1049.s3;
                        result += l_1049.s2;
                        result += l_1049.s1;
                        result += l_1049.s0;
                        result += l_1050;
                        result += l_1055;
                        result += l_1056.y;
                        result += l_1056.x;
                        result += l_1057;
                        result += l_1058;
                        result += l_1059;
                        int l_1060_i0, l_1060_i1;
                        for (l_1060_i0 = 0; l_1060_i0 < 9; l_1060_i0++) {
                            for (l_1060_i1 = 0; l_1060_i1 < 3; l_1060_i1++) {
                                result += l_1060[l_1060_i0][l_1060_i1];
                            }
                        }
                        result += l_1061;
                        atomic_add(&p_1835->g_special_values[97 * get_linear_group_id() + 36], result);
                    }
                    else
                    { /* block id: 409 */
                        (1 + 1);
                    }
                }
                for (p_1835->g_209 = 0; (p_1835->g_209 == 28); ++p_1835->g_209)
                { /* block id: 415 */
                    uint8_t l_1066 = 1UL;
                    int32_t **l_1070[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1070[i] = (void*)0;
                    for (p_1835->g_7 = 0; (p_1835->g_7 != 58); p_1835->g_7 = safe_add_func_int64_t_s_s(p_1835->g_7, 8))
                    { /* block id: 418 */
                        (*p_34) |= (l_1066 != 18446744073709551615UL);
                    }
                    ++l_1067;
                    if ((*p_34))
                        continue;
                    (*p_1835->g_835) = (void*)0;
                }
            }
            else
            { /* block id: 425 */
                union U1 *l_1071 = &p_1835->g_866;
                union U1 **l_1072[8] = {&l_1071,&p_1835->g_996[3],&l_1071,&l_1071,&p_1835->g_996[3],&l_1071,&l_1071,&p_1835->g_996[3]};
                int32_t l_1073 = 0x6009C33BL;
                int32_t l_1110 = 7L;
                uint16_t l_1112 = 6UL;
                uint64_t *l_1164 = (void*)0;
                int32_t l_1171[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1171[i] = 0x06DF19C8L;
                (*p_1835->g_995) = l_1071;
                if ((~l_1073))
                { /* block id: 427 */
                    VECTOR(uint8_t, 8) l_1081 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 2UL), 2UL), 2UL, 255UL, 2UL);
                    VECTOR(uint8_t, 8) l_1086 = (VECTOR(uint8_t, 8))(0x88L, (VECTOR(uint8_t, 4))(0x88L, (VECTOR(uint8_t, 2))(0x88L, 255UL), 255UL), 255UL, 0x88L, 255UL);
                    int16_t *l_1088[7];
                    int32_t l_1089[7][9][4] = {{{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L}},{{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L}},{{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L}},{{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L}},{{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L}},{{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L}},{{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L},{0x34B97316L,0x0D1A3AE2L,(-5L),0L}}};
                    uint64_t *l_1091 = (void*)0;
                    uint64_t *l_1092 = (void*)0;
                    uint64_t *l_1093 = (void*)0;
                    uint64_t *l_1094 = (void*)0;
                    uint64_t *l_1095 = (void*)0;
                    uint64_t *l_1096 = &p_1835->g_132;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_1088[i] = (void*)0;
                    (*p_1835->g_103) = (p_1835->g_607.s7 , (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 16))(0x2EB2L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0x798AL, (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(p_1835->g_1080.xxxyyyxyxyyyxxxy)).s83d2, ((VECTOR(uint8_t, 4))(l_1081.s7127))))).w, (safe_sub_func_uint32_t_u_u(((((((safe_sub_func_uint64_t_u_u(p_1835->g_528.x, l_61.y)) , ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 16))(l_1086.s5620435610614526)).sa86f, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_1087.xy)))).yyxxyxyy)).even))))).y) && (7UL || (l_1089[5][2][1] |= (p_33 ^ (*p_1835->g_974))))) , p_1835->g_comm_values[p_1835->tid]) < ((*l_1096) |= ((p_33 >= (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((p_1835->g_188.z < l_1087.x) || l_1081.s3), ((VECTOR(int8_t, 2))(0x0EL)), ((VECTOR(int8_t, 4))(0x1EL)), 0x60L)), 0x07L, ((VECTOR(int8_t, 2))(0x03L)), l_1090, 0L, (*p_1835->g_518), (-9L), 0x19L)).s47)).lo ^ (*p_1835->g_518))) && 0x5821E05131640077L))) , 4294967289UL), 0x4177077BL)))), 14)), ((VECTOR(int16_t, 4))(0L)), 8L, 8L)).s25)), ((VECTOR(int16_t, 2))(0x5CF4L)), 0x660CL, ((VECTOR(int16_t, 4))(0L)), 0x2304L, ((VECTOR(int16_t, 2))(0x3EECL)), 0x6BC9L, (-9L), 0x32E0L)).s84d6))).x, l_1013)));
                }
                else
                { /* block id: 431 */
                    uint16_t l_1099 = 0x20D6L;
                    uint16_t *l_1104[3][4][10];
                    union U1 *l_1114 = &p_1835->g_866;
                    uint8_t l_1124 = 1UL;
                    union U0 *l_1128 = (void*)0;
                    int32_t l_1168 = 0x16B42E30L;
                    int32_t l_1172 = 0x3F534B8AL;
                    int32_t l_1173 = 2L;
                    int32_t l_1174 = 0x391B1A77L;
                    int32_t l_1175 = 0x7F25061FL;
                    int32_t l_1176 = 0x1D85BB8AL;
                    int32_t l_1178 = (-8L);
                    int64_t l_1179 = (-10L);
                    int32_t l_1180 = 0x045F5772L;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 10; k++)
                                l_1104[i][j][k] = &p_1835->g_867;
                        }
                    }
                    if ((((~(safe_lshift_func_int16_t_s_s(l_1099, 1))) < ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 8))((-8L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x3186L, 0x1EF9L)))), 0x4CB2L, 0x086EL, ((VECTOR(int16_t, 2))(0x6086L, 0L)), 4L)).lo, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(((*p_34) , ((*p_1835->g_835) == &l_76)), 0x680DL, (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((p_33 ^ (l_1073 = p_1835->g_629.s5)) == (l_48[2] = (safe_rshift_func_int16_t_s_u((((((p_33 >= GROUP_DIVERGE(1, 1)) > (((l_1109 = ((VECTOR(int16_t, 16))(0x2CA2L, ((VECTOR(int16_t, 4))((((l_1013 |= 0xDBC97CF997A1CB41L) , 0L) , p_1835->g_149[6]), ((VECTOR(int16_t, 2))(0x1716L)), 0x1E89L)), ((VECTOR(int16_t, 8))(0x52BFL)), 0x49BDL, 1L, 4L)).sb) || p_33) < l_1007.y)) || 0L) | l_1110) | 0x9700304374769176L), 4)))), p_1835->g_335[4])), p_33)), ((VECTOR(int16_t, 2))(0x5646L)), 0x0DCCL, (-1L), ((VECTOR(int16_t, 2))(0x4DACL)), ((VECTOR(int16_t, 2))(1L)), p_33, l_1007.w, 0x5861L, 8L, 0x27F5L)).even, ((VECTOR(int16_t, 8))(0x3F03L))))), ((VECTOR(int16_t, 8))(6L))))).lo, (int16_t)9L, (int16_t)p_1835->g_397.sb))), ((VECTOR(int16_t, 4))((-1L)))))).odd))).yyyy)).yyzzwwwwywyxyxyx, (int16_t)l_1111, (int16_t)p_1835->g_629.s3))).s18)).yyyyxyxx)).s64, ((VECTOR(int16_t, 2))(0x7EB1L))))), 2UL, 1UL, l_1099, ((VECTOR(uint16_t, 2))(0x8631L)), 0x2CECL)))).s2007740542277474)).even)).s2) == l_1112))
                    { /* block id: 436 */
                        int16_t l_1115[2][7][5] = {{{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL},{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL},{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL},{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL},{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL},{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL},{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL}},{{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL},{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL},{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL},{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL},{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL},{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL},{(-8L),(-8L),0x4499L,0x77E4L,0x0C2AL}}};
                        int32_t l_1116 = 0x0EC5D7D5L;
                        int32_t l_1117 = 0x27F27A47L;
                        int32_t l_1118 = 0L;
                        int32_t l_1119 = 0x52E085AAL;
                        int32_t l_1120 = (-1L);
                        int32_t l_1121 = 9L;
                        int16_t *l_1129[2];
                        VECTOR(uint64_t, 8) l_1132 = (VECTOR(uint64_t, 8))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0UL), 0UL), 0UL, 18446744073709551611UL, 0UL);
                        uint64_t *l_1144[5][2][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&p_1835->g_132,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1835->g_132,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_1835->g_132,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1835->g_132,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_1835->g_132,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1835->g_132,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_1835->g_132,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1835->g_132,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_1835->g_132,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1835->g_132,(void*)0,(void*)0,(void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_1129[i] = (void*)0;
                        (*p_1835->g_995) = (l_1113.y , l_1114);
                        ++l_1124;
                        l_1128 = l_1127;
                        (*p_1835->g_103) = (((*l_97) ^= (l_1117 | (p_1835->g_72.x = p_1835->g_397.s2))) <= (safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (((((VECTOR(uint64_t, 4))(l_1132.s3167)).x != (p_1835->g_1133 , ((((l_1110 = (safe_mod_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(((void*)0 != l_1140[0]), 0x13L)) > (((l_1141 | (safe_rshift_func_int8_t_s_s(0x5DL, 1))) < 0UL) != (*p_34))) , p_33), 65529UL)) != (*p_1835->g_974)) == l_1124) , 0L), 0x3CL))) , p_1835->g_684.s0) && 0L) >= l_1099))) & l_1118) >= p_33))));
                    }
                    else
                    { /* block id: 444 */
                        uint64_t **l_1165 = &l_1164;
                        uint64_t *l_1167 = &p_1835->g_132;
                        uint64_t **l_1166 = &l_1167;
                        (*p_34) = (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((**p_1835->g_517), (safe_mul_func_uint16_t_u_u(0UL, (((-8L) | (safe_sub_func_int64_t_s_s(((((VECTOR(uint16_t, 2))(0x292CL, 0xCE14L)).even | ((((VECTOR(int64_t, 4))(l_1153.s1120)).z , (safe_add_func_uint32_t_u_u((&p_1835->g_973 != l_1156), (safe_lshift_func_int16_t_s_u((&p_1835->g_809 != (void*)0), (!(l_1168 = (l_1110 |= (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((*l_1166) = ((*l_1165) = (p_1835->g_250.x , l_1164))) == (void*)0), p_33)), l_1073)))))))))) , l_1110)) , 9L), p_1835->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1835->tid, 104))]))) > (*p_1835->g_518)))))) , (*p_1835->g_518)), l_1169));
                        (*p_1835->g_103) = (*p_34);
                    }
                    l_1182++;
                }
                (*p_34) ^= l_76;
                if ((atomic_inc(&p_1835->l_atomic_input[1]) == 5))
                { /* block id: 456 */
                    int32_t l_1185 = 1L;
                    for (l_1185 = 27; (l_1185 >= 0); l_1185 = safe_sub_func_uint8_t_u_u(l_1185, 3))
                    { /* block id: 459 */
                        union U0 l_1189 = {0xEE8A8515L};/* VOLATILE GLOBAL l_1189 */
                        union U0 *l_1188 = &l_1189;
                        VECTOR(uint8_t, 16) l_1190 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x85L), 0x85L), 0x85L, 255UL, 0x85L, (VECTOR(uint8_t, 2))(255UL, 0x85L), (VECTOR(uint8_t, 2))(255UL, 0x85L), 255UL, 0x85L, 255UL, 0x85L);
                        VECTOR(uint8_t, 8) l_1191 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
                        VECTOR(uint8_t, 8) l_1192 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL);
                        VECTOR(uint8_t, 4) l_1193 = (VECTOR(uint8_t, 4))(0x6BL, (VECTOR(uint8_t, 2))(0x6BL, 0xEEL), 0xEEL);
                        uint64_t l_1194 = 18446744073709551615UL;
                        uint32_t l_1195 = 0xE43BC2F7L;
                        int16_t l_1196 = 1L;
                        uint64_t l_1197[4][2][3] = {{{7UL,0xC035B0B58D03102EL,7UL},{7UL,0xC035B0B58D03102EL,7UL}},{{7UL,0xC035B0B58D03102EL,7UL},{7UL,0xC035B0B58D03102EL,7UL}},{{7UL,0xC035B0B58D03102EL,7UL},{7UL,0xC035B0B58D03102EL,7UL}},{{7UL,0xC035B0B58D03102EL,7UL},{7UL,0xC035B0B58D03102EL,7UL}}};
                        uint16_t l_1198 = 0x6356L;
                        uint8_t l_1199 = 0xAEL;
                        uint64_t l_1200 = 1UL;
                        uint8_t l_1201[9][4] = {{0x63L,0x63L,0x63L,0x63L},{0x63L,0x63L,0x63L,0x63L},{0x63L,0x63L,0x63L,0x63L},{0x63L,0x63L,0x63L,0x63L},{0x63L,0x63L,0x63L,0x63L},{0x63L,0x63L,0x63L,0x63L},{0x63L,0x63L,0x63L,0x63L},{0x63L,0x63L,0x63L,0x63L},{0x63L,0x63L,0x63L,0x63L}};
                        int i, j, k;
                        l_1188 = l_1188;
                        l_1199 |= (l_1198 = (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0UL, ((VECTOR(uint8_t, 4))(l_1190.sd126)), ((VECTOR(uint8_t, 4))(l_1191.s7727)), ((VECTOR(uint8_t, 4))(l_1192.s7106)), ((VECTOR(uint8_t, 2))(l_1193.zx)), 1UL)).s49)).even , (l_1197[1][0][2] = (l_1196 = (l_1194 , l_1195)))));
                        l_1201[7][2] ^= l_1200;
                    }
                    for (l_1185 = (-27); (l_1185 < (-23)); l_1185++)
                    { /* block id: 469 */
                        VECTOR(uint32_t, 2) l_1204 = (VECTOR(uint32_t, 2))(0xD04D3E10L, 0x216DC8ACL);
                        int64_t l_1205 = 1L;
                        uint64_t l_1206 = 0UL;
                        int16_t l_1207 = (-2L);
                        int32_t l_1208[7][8] = {{0x16A66EC2L,1L,0x510065C4L,2L,0x510065C4L,1L,0x16A66EC2L,2L},{0x16A66EC2L,1L,0x510065C4L,2L,0x510065C4L,1L,0x16A66EC2L,2L},{0x16A66EC2L,1L,0x510065C4L,2L,0x510065C4L,1L,0x16A66EC2L,2L},{0x16A66EC2L,1L,0x510065C4L,2L,0x510065C4L,1L,0x16A66EC2L,2L},{0x16A66EC2L,1L,0x510065C4L,2L,0x510065C4L,1L,0x16A66EC2L,2L},{0x16A66EC2L,1L,0x510065C4L,2L,0x510065C4L,1L,0x16A66EC2L,2L},{0x16A66EC2L,1L,0x510065C4L,2L,0x510065C4L,1L,0x16A66EC2L,2L}};
                        uint32_t l_1209 = 4294967288UL;
                        int i, j;
                        l_1207 = (l_1204.x , (l_1206 = l_1205));
                        l_1209 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(0x6C3533DCL, l_1208[3][7], 0L, 0x019F9FAAL)), ((VECTOR(int32_t, 2))(0x4F4AD61FL, 0x438EF7C3L)).xxyy, ((VECTOR(int32_t, 2))(0x5A417B73L, (-1L))).yyyx))), 0x6FB72C46L, 0x2C8FA4CCL, 0x4BAA599CL, 0x295E083CL)).s53)).lo;
                    }
                    for (l_1185 = 0; (l_1185 > 28); l_1185 = safe_add_func_int16_t_s_s(l_1185, 2))
                    { /* block id: 476 */
                        int32_t l_1214 = 1L;
                        int32_t *l_1213[6] = {&l_1214,&l_1214,&l_1214,&l_1214,&l_1214,&l_1214};
                        int32_t **l_1212 = &l_1213[2];
                        int32_t **l_1215 = &l_1213[2];
                        VECTOR(int32_t, 16) l_1216 = (VECTOR(int32_t, 16))(0x7EA5BD62L, (VECTOR(int32_t, 4))(0x7EA5BD62L, (VECTOR(int32_t, 2))(0x7EA5BD62L, 0x1D85B325L), 0x1D85B325L), 0x1D85B325L, 0x7EA5BD62L, 0x1D85B325L, (VECTOR(int32_t, 2))(0x7EA5BD62L, 0x1D85B325L), (VECTOR(int32_t, 2))(0x7EA5BD62L, 0x1D85B325L), 0x7EA5BD62L, 0x1D85B325L, 0x7EA5BD62L, 0x1D85B325L);
                        VECTOR(int32_t, 8) l_1217 = (VECTOR(int32_t, 8))(0x3D7581F7L, (VECTOR(int32_t, 4))(0x3D7581F7L, (VECTOR(int32_t, 2))(0x3D7581F7L, 0x0F4D5892L), 0x0F4D5892L), 0x0F4D5892L, 0x3D7581F7L, 0x0F4D5892L);
                        VECTOR(int32_t, 8) l_1218 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L);
                        int8_t l_1219 = 0x6EL;
                        uint8_t l_1220 = 0x47L;
                        int32_t l_1221 = 0x2DA1775EL;
                        int32_t l_1222 = 0x1657D819L;
                        uint32_t l_1223 = 4294967291UL;
                        int16_t l_1224 = (-3L);
                        uint32_t l_1225 = 0x29C0C309L;
                        int i;
                        l_1215 = l_1212;
                        l_1219 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_1216.sb08d85cf7521fc61)).s8c, ((VECTOR(int32_t, 2))(0x33223A7BL, 0x39385C58L))))), 0x244570C4L, 0x1C67A320L, 8L, ((VECTOR(int32_t, 4))(l_1217.s3503)), 0L, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(l_1218.s2142767342664147)).seee2, ((VECTOR(int32_t, 2))(0x75E16F8DL, 1L)).yxyy))), 0x7D858D63L, 2L)).se4)).odd;
                        l_1220 = 0x3985AE27L;
                        l_1225 ^= (l_1221 , ((l_1223 &= l_1222) , l_1224));
                    }
                    unsigned int result = 0;
                    result += l_1185;
                    atomic_add(&p_1835->l_special_values[1], result);
                }
                else
                { /* block id: 483 */
                    (1 + 1);
                }
            }
            p_34 = l_1157[3][3][4];
        }
        else
        { /* block id: 488 */
            int8_t l_1229[6][10][4] = {{{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L}},{{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L}},{{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L}},{{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L}},{{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L}},{{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L},{0x64L,1L,0L,0x54L}}};
            int i, j, k;
            (*p_34) = (safe_lshift_func_int8_t_s_s((l_1229[5][9][3] < ((safe_mul_func_int8_t_s_s(p_33, (**p_1835->g_517))) , (&p_1835->g_234 != &p_1835->g_234))), (safe_mul_func_int8_t_s_s((((((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1835->g_1234.s2365)).ywzxywwx))))).even)).odd, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_1235.yyxy)).lo)).yxyxyyyy)).s12))).xyxx, (uint16_t)p_33, (uint16_t)0UL))).w ^ l_1229[4][5][0]) != (((VECTOR(int16_t, 16))(0x04B7L, 0x3337L, 0x5368L, p_33, 0x39D5L, 0x1607L, 1L, 0x733BL, p_33, (-1L), 0x7A48L, ((VECTOR(int16_t, 2))(0x5D04L)), 0x5D02L, 0L, 0x7C9FL)).s6 < l_1229[5][9][3])) & p_1835->g_503.x), p_1835->g_455.x))));
            (*p_1835->g_1236) = (*p_1835->g_835);
            l_1181 = ((*p_1835->g_121) = 0x7461532FL);
            return p_1835->g_72.x;
        }
        (*p_1835->g_1238) = ((*l_1237) = (*p_1835->g_995));
    }
    else
    { /* block id: 497 */
        int32_t *l_1239 = (void*)0;
        int32_t **l_1240 = &l_41[1][2][2];
        (*l_1240) = l_1239;
    }
    for (p_1835->g_866.f0 = 0; (p_1835->g_866.f0 != (-22)); p_1835->g_866.f0 = safe_sub_func_int32_t_s_s(p_1835->g_866.f0, 2))
    { /* block id: 502 */
        VECTOR(int32_t, 8) l_1243 = (VECTOR(int32_t, 8))(0x0A276628L, (VECTOR(int32_t, 4))(0x0A276628L, (VECTOR(int32_t, 2))(0x0A276628L, 0x5236E0DCL), 0x5236E0DCL), 0x5236E0DCL, 0x0A276628L, 0x5236E0DCL);
        VECTOR(uint8_t, 8) l_1246 = (VECTOR(uint8_t, 8))(0xB5L, (VECTOR(uint8_t, 4))(0xB5L, (VECTOR(uint8_t, 2))(0xB5L, 0x1EL), 0x1EL), 0x1EL, 0xB5L, 0x1EL);
        uint32_t ****l_1249[10] = {&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248};
        int i;
        (*p_1835->g_974) = (l_1243.s1 = ((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(l_1243.s42)), 3L)).y);
        l_1258[1] &= ((2UL && (((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(1UL, 255UL)).even, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_1246.s26120462)).s22)).odd)) , (l_1247 || (!(((p_1835->g_1250 = (l_1248 = l_1248)) != (void*)0) || FAKE_DIVERGE(p_1835->group_0_offset, get_group_id(0), 10))))) && ((safe_div_func_uint8_t_u_u((p_33 && 0x01L), (l_1246.s0 | ((*p_1835->g_974) > (safe_sub_func_int64_t_s_s(p_1835->g_149[4], l_1246.s7)))))) == l_1257))) & 0x0CE06187305067B9L);
    }
    for (l_1247 = (-3); (l_1247 != 21); l_1247 = safe_add_func_uint32_t_u_u(l_1247, 6))
    { /* block id: 511 */
        for (p_33 = (-30); (p_33 <= 51); p_33 = safe_add_func_int8_t_s_s(p_33, 4))
        { /* block id: 514 */
            return p_1835->g_402.x;
        }
        (*p_1835->g_1268) = l_1263;
    }
    return p_1835->g_250.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1835->g_972 p_1835->g_974 p_1835->g_302
 * writes: p_1835->g_335
 */
int64_t  func_50(int16_t  p_51, int32_t  p_52, struct S2 * p_1835)
{ /* block id: 377 */
    (*p_1835->g_974) = (((safe_unary_minus_func_int8_t_s((p_1835->g_972[1][2][2] == &p_1835->g_973))) , &p_1835->g_462) != (void*)0);
    return p_1835->g_302[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1835->g_149 p_1835->g_396 p_1835->g_402 p_1835->g_77 p_1835->g_421 p_1835->g_7 p_1835->g_835 p_1835->g_839 p_1835->g_528 p_1835->g_567 p_1835->g_866 p_1835->g_103 p_1835->g_867 p_1835->g_70 p_1835->g_250 p_1835->g_3 p_1835->g_911 p_1835->g_121 p_1835->g_335 p_1835->g_104 p_1835->g_151 p_1835->g_64 p_1835->g_314 l_4
 * writes: p_1835->g_70 p_1835->g_190 p_1835->g_421 p_1835->g_7 p_1835->g_98 p_1835->g_103 p_1835->g_455 p_1835->g_396 p_1835->g_66 l_4
 */
uint64_t  func_53(int32_t * p_54, uint8_t  p_55, uint32_t  p_56, int32_t * p_57, int8_t  p_58, struct S2 * p_1835)
{ /* block id: 312 */
    int16_t *l_814 = &p_1835->g_70;
    int32_t *l_818 = (void*)0;
    int32_t **l_817 = &l_818;
    int32_t l_819[1];
    VECTOR(int32_t, 4) l_824 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-4L)), (-4L));
    uint16_t l_825[3];
    int32_t *l_826[6];
    uint64_t *l_832 = &p_1835->g_302[1][0];
    uint64_t **l_831 = &l_832;
    uint32_t l_836 = 3UL;
    uint8_t l_849 = 252UL;
    int64_t l_850[10];
    uint64_t l_856 = 0x49E8044892B7F6F4L;
    int64_t *l_923[5][8][5] = {{{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809}},{{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809}},{{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809}},{{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809}},{{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809},{&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809,&p_1835->g_809}}};
    uint8_t l_941 = 0x79L;
    uint32_t l_946 = 0x0D9ADAABL;
    int8_t *l_964 = (void*)0;
    int8_t *l_965 = &p_1835->g_66[5];
    int16_t *l_966 = (void*)0;
    int16_t *l_967 = (void*)0;
    int16_t *l_968[9][5][5] = {{{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70}},{{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70}},{{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70}},{{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70}},{{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70}},{{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70}},{{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70}},{{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70}},{{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70},{&p_1835->g_70,(void*)0,(void*)0,&p_1835->g_70,&p_1835->g_70}}};
    uint64_t l_969 = 1UL;
    uint32_t l_970 = 2UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_819[i] = 0x7C76C819L;
    for (i = 0; i < 3; i++)
        l_825[i] = 65532UL;
    for (i = 0; i < 6; i++)
        l_826[i] = &p_1835->g_104;
    for (i = 0; i < 10; i++)
        l_850[i] = 0x6B0075CE334FD2DAL;
    p_1835->g_421.s7 &= ((safe_sub_func_int64_t_s_s(((((p_1835->g_149[6] , (safe_rshift_func_int16_t_s_s((!((*l_814) = p_58)), (safe_add_func_uint8_t_u_u((((*l_817) = p_57) != &p_1835->g_213), l_819[0]))))) >= (GROUP_DIVERGE(2, 1) && p_1835->g_396.s3)) >= (safe_sub_func_uint8_t_u_u(((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))((safe_sub_func_int32_t_s_s(l_819[0], ((p_1835->g_190.x = p_55) ^ ((VECTOR(int32_t, 2))(l_824.ww)).odd))), 4294967287UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(1UL, 8UL)), 0x5FC24953L, 0xDF78B2B6L)))), 4294967295UL, 4294967288UL)), p_1835->g_402.w, ((VECTOR(uint32_t, 2))(6UL)), 0x8A797BFBL, ((VECTOR(uint32_t, 2))(4294967294UL)), 0UL, 0xE94C4E4AL)).s6 & (*p_54)) , 255UL), l_824.y))) , p_1835->g_396.s0), l_825[2])) >= p_1835->g_77.w);
    for (p_1835->g_7 = 0; (p_1835->g_7 == 56); p_1835->g_7 = safe_add_func_int32_t_s_s(p_1835->g_7, 9))
    { /* block id: 319 */
        int32_t *l_834 = (void*)0;
        VECTOR(int8_t, 8) l_840 = (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x36L), 0x36L), 0x36L, 4L, 0x36L);
        int8_t *l_841 = (void*)0;
        union U0 **l_842 = (void*)0;
        int16_t *l_851 = (void*)0;
        int16_t *l_852 = (void*)0;
        int16_t *l_853 = (void*)0;
        int16_t *l_854 = (void*)0;
        int16_t *l_855 = (void*)0;
        int32_t l_857 = 0x0C4CC955L;
        uint64_t *l_865 = (void*)0;
        VECTOR(uint64_t, 2) l_868 = (VECTOR(uint64_t, 2))(0x1BB93C1B7051FCD2L, 18446744073709551612UL);
        int32_t l_871 = (-7L);
        int32_t l_930 = 0x6D1744A0L;
        VECTOR(int32_t, 8) l_931 = (VECTOR(int32_t, 8))(0x4BA4503EL, (VECTOR(int32_t, 4))(0x4BA4503EL, (VECTOR(int32_t, 2))(0x4BA4503EL, (-2L)), (-2L)), (-2L), 0x4BA4503EL, (-2L));
        int i;
        for (p_1835->g_98 = (-28); (p_1835->g_98 > (-30)); p_1835->g_98 = safe_sub_func_int64_t_s_s(p_1835->g_98, 5))
        { /* block id: 322 */
            uint64_t ***l_833 = &l_831;
            (*l_833) = l_831;
            (*p_1835->g_835) = l_834;
        }
        l_857 |= ((*p_54) = ((!l_836) || (safe_sub_func_uint32_t_u_u(FAKE_DIVERGE(p_1835->group_0_offset, get_group_id(0), 10), ((l_856 &= ((*l_814) = ((p_1835->g_455.x = ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0L, 0x08L, 1L, (-1L))).yzxwyzxxxyxwyxyw)), ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-1L), 0x7DL)).yyxxyxxy)).s5315164157231772, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1835->g_839.s31)).xyyyxyxy)).s4107423000402043))).s4294, ((VECTOR(int8_t, 2))(l_840.s11)).xyxy))).yxwyzyywywyzzywx))).sf) == ((((l_842 == (void*)0) , &p_1835->g_209) == &p_1835->g_209) > (safe_mul_func_uint8_t_u_u(p_55, (safe_mul_func_int16_t_s_s((((((((safe_div_func_int32_t_s_s((((void*)0 != &p_55) <= l_849), l_850[4])) < p_56) < 0x09A1L) != (*p_54)) > p_1835->g_528.w) , p_1835->g_567.z) | 0xFDL), p_58)))))))) <= p_55)))));
        if ((safe_add_func_int32_t_s_s(((*p_54) = ((((safe_lshift_func_int8_t_s_s(0x2BL, 0)) , (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_s((((&p_1835->g_302[0][0] != l_865) != (((VECTOR(uint64_t, 16))(p_56, 18446744073709551615UL, ((p_1835->g_866 , ((*p_1835->g_835) != p_54)) || p_1835->g_867), 0x902B01675AC2B8F0L, 0xD8765146E83F2D51L, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_868.yxyy)).ywzyywyzxxyxxxwy)).even)).s4, ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 16))((((VECTOR(uint16_t, 16))((safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(2, 1), ((&l_865 != (void*)0) <= 7UL))), 1UL, ((VECTOR(uint16_t, 4))(0xFAAAL)), 0x9333L, ((VECTOR(uint16_t, 2))(1UL)), ((VECTOR(uint16_t, 4))(65533UL)), ((VECTOR(uint16_t, 2))(0xD8ACL)), 0UL)).s3 , p_1835->g_70), p_55, 18446744073709551606UL, ((VECTOR(uint64_t, 2))(0x477FA9BC3DB70DC1L)), 0x92373A222FDFA87DL, ((VECTOR(uint64_t, 4))(0x3C83114FE8053287L)), GROUP_DIVERGE(1, 1), 0x295542F505FE28B6L, 0x01E5D5EEE9292CFCL, p_1835->g_250.x, 0xE864F9F34956EA61L, 18446744073709551610UL)).odd, ((VECTOR(uint64_t, 8))(6UL))))).odd, ((VECTOR(uint64_t, 4))(1UL)), ((VECTOR(uint64_t, 4))(0x41FF483A91750B51L))))), 0x95545F192B0941E9L, ((VECTOR(uint64_t, 4))(0UL)), 9UL)).sf >= GROUP_DIVERGE(2, 1))) <= FAKE_DIVERGE(p_1835->local_0_offset, get_local_id(0), 10)), l_871))))) , 0x43F6361CA76F4AD9L) != p_55)), (*p_57))))
        { /* block id: 332 */
            uint32_t l_872 = 1UL;
            l_872--;
            if ((atomic_inc(&p_1835->l_atomic_input[83]) == 0))
            { /* block id: 335 */
                int64_t l_875[3][9][4] = {{{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL}},{{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL}},{{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL},{0x26C903AE96ABE795L,0x3AE4E6830A57CAD0L,(-3L),0x128DA29F047E1A2EL}}};
                int64_t l_876[2][6] = {{0x15ED3A2CF5F080BCL,1L,0x15ED3A2CF5F080BCL,0x15ED3A2CF5F080BCL,1L,0x15ED3A2CF5F080BCL},{0x15ED3A2CF5F080BCL,1L,0x15ED3A2CF5F080BCL,0x15ED3A2CF5F080BCL,1L,0x15ED3A2CF5F080BCL}};
                union U0 l_877 = {0x83050CB0L};/* VOLATILE GLOBAL l_877 */
                uint8_t l_880 = 0x4AL;
                uint8_t *l_879[1][7] = {{&l_880,(void*)0,&l_880,&l_880,(void*)0,&l_880,&l_880}};
                uint8_t **l_878 = &l_879[0][5];
                uint16_t l_881 = 0x9C6DL;
                VECTOR(int32_t, 16) l_884 = (VECTOR(int32_t, 16))(0x0F94839AL, (VECTOR(int32_t, 4))(0x0F94839AL, (VECTOR(int32_t, 2))(0x0F94839AL, 9L), 9L), 9L, 0x0F94839AL, 9L, (VECTOR(int32_t, 2))(0x0F94839AL, 9L), (VECTOR(int32_t, 2))(0x0F94839AL, 9L), 0x0F94839AL, 9L, 0x0F94839AL, 9L);
                VECTOR(int32_t, 16) l_885 = (VECTOR(int32_t, 16))(0x5D7EF4A5L, (VECTOR(int32_t, 4))(0x5D7EF4A5L, (VECTOR(int32_t, 2))(0x5D7EF4A5L, 1L), 1L), 1L, 0x5D7EF4A5L, 1L, (VECTOR(int32_t, 2))(0x5D7EF4A5L, 1L), (VECTOR(int32_t, 2))(0x5D7EF4A5L, 1L), 0x5D7EF4A5L, 1L, 0x5D7EF4A5L, 1L);
                VECTOR(int16_t, 2) l_886 = (VECTOR(int16_t, 2))(6L, 7L);
                VECTOR(int16_t, 16) l_887 = (VECTOR(int16_t, 16))(0x0585L, (VECTOR(int16_t, 4))(0x0585L, (VECTOR(int16_t, 2))(0x0585L, 1L), 1L), 1L, 0x0585L, 1L, (VECTOR(int16_t, 2))(0x0585L, 1L), (VECTOR(int16_t, 2))(0x0585L, 1L), 0x0585L, 1L, 0x0585L, 1L);
                VECTOR(uint8_t, 16) l_888 = (VECTOR(uint8_t, 16))(0x0FL, (VECTOR(uint8_t, 4))(0x0FL, (VECTOR(uint8_t, 2))(0x0FL, 0x6FL), 0x6FL), 0x6FL, 0x0FL, 0x6FL, (VECTOR(uint8_t, 2))(0x0FL, 0x6FL), (VECTOR(uint8_t, 2))(0x0FL, 0x6FL), 0x0FL, 0x6FL, 0x0FL, 0x6FL);
                VECTOR(int32_t, 2) l_889 = (VECTOR(int32_t, 2))(7L, 0x23376C8CL);
                VECTOR(int64_t, 4) l_890 = (VECTOR(int64_t, 4))(0x48F0D8D684E8FDA2L, (VECTOR(int64_t, 2))(0x48F0D8D684E8FDA2L, 0x3F079AA012681750L), 0x3F079AA012681750L);
                union U0 l_891 = {0xC855E003L};/* VOLATILE GLOBAL l_891 */
                int64_t l_892[3];
                union U1 l_893 = {0x460B46AEL};/* VOLATILE GLOBAL l_893 */
                union U1 l_894[10] = {{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L}};
                int32_t l_895 = 0x3095D38EL;
                int16_t l_896 = 0x7044L;
                uint16_t l_897 = 9UL;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_892[i] = (-1L);
                l_878 = (((l_876[0][5] = l_875[1][4][1]) , l_877) , (void*)0);
                ++l_881;
                l_896 = ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_884.s6390a112e064c7f8)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_885.s6d)), ((VECTOR(int32_t, 2))(0L, 0x2CD07902L)), ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(l_886.yxyyxyxxyxyxxxyx)).s8e08))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_887.s8ec1cc16950f9717)))).sb36d))).zxxywwzxwywzwzwx, ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 8))(l_888.s528303f2)), ((VECTOR(uint8_t, 4))(0UL, ((VECTOR(uint8_t, 2))(0x7BL, 248UL)), 0x5EL)).zwwzwwxx))).s4257215742534516))).s46))), ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x7D33E382L, 0x50506EC8L)).xxyx))))).even))).yxyyxyyyxyxxyxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(l_889.yx)), (((VECTOR(int64_t, 16))(l_890.zywxzyxxzwxwyywx)).sb , (l_891 , ((GROUP_DIVERGE(2, 1) , (l_892[2] , (l_893 , l_894[3]))) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x22F6D571L, 0x26BF7E49L)).xxyxyxxy)).s0))), 0x18798B96L, l_895, 0x6A5F710CL, 0x280212AFL)).s0307214045701557)).s7f, ((VECTOR(int32_t, 4))(0L, (-2L), 0x3C15E440L, 1L)).even))).yyyxxyxy)).s5327745101372565))).sb;
                l_897++;
                unsigned int result = 0;
                int l_875_i0, l_875_i1, l_875_i2;
                for (l_875_i0 = 0; l_875_i0 < 3; l_875_i0++) {
                    for (l_875_i1 = 0; l_875_i1 < 9; l_875_i1++) {
                        for (l_875_i2 = 0; l_875_i2 < 4; l_875_i2++) {
                            result += l_875[l_875_i0][l_875_i1][l_875_i2];
                        }
                    }
                }
                int l_876_i0, l_876_i1;
                for (l_876_i0 = 0; l_876_i0 < 2; l_876_i0++) {
                    for (l_876_i1 = 0; l_876_i1 < 6; l_876_i1++) {
                        result += l_876[l_876_i0][l_876_i1];
                    }
                }
                result += l_877.f0;
                result += l_880;
                result += l_881;
                result += l_884.sf;
                result += l_884.se;
                result += l_884.sd;
                result += l_884.sc;
                result += l_884.sb;
                result += l_884.sa;
                result += l_884.s9;
                result += l_884.s8;
                result += l_884.s7;
                result += l_884.s6;
                result += l_884.s5;
                result += l_884.s4;
                result += l_884.s3;
                result += l_884.s2;
                result += l_884.s1;
                result += l_884.s0;
                result += l_885.sf;
                result += l_885.se;
                result += l_885.sd;
                result += l_885.sc;
                result += l_885.sb;
                result += l_885.sa;
                result += l_885.s9;
                result += l_885.s8;
                result += l_885.s7;
                result += l_885.s6;
                result += l_885.s5;
                result += l_885.s4;
                result += l_885.s3;
                result += l_885.s2;
                result += l_885.s1;
                result += l_885.s0;
                result += l_886.y;
                result += l_886.x;
                result += l_887.sf;
                result += l_887.se;
                result += l_887.sd;
                result += l_887.sc;
                result += l_887.sb;
                result += l_887.sa;
                result += l_887.s9;
                result += l_887.s8;
                result += l_887.s7;
                result += l_887.s6;
                result += l_887.s5;
                result += l_887.s4;
                result += l_887.s3;
                result += l_887.s2;
                result += l_887.s1;
                result += l_887.s0;
                result += l_888.sf;
                result += l_888.se;
                result += l_888.sd;
                result += l_888.sc;
                result += l_888.sb;
                result += l_888.sa;
                result += l_888.s9;
                result += l_888.s8;
                result += l_888.s7;
                result += l_888.s6;
                result += l_888.s5;
                result += l_888.s4;
                result += l_888.s3;
                result += l_888.s2;
                result += l_888.s1;
                result += l_888.s0;
                result += l_889.y;
                result += l_889.x;
                result += l_890.w;
                result += l_890.z;
                result += l_890.y;
                result += l_890.x;
                result += l_891.f0;
                int l_892_i0;
                for (l_892_i0 = 0; l_892_i0 < 3; l_892_i0++) {
                    result += l_892[l_892_i0];
                }
                result += l_893.f0;
                result += l_893.f1;
                result += l_893.f2;
                int l_894_i0;
                for (l_894_i0 = 0; l_894_i0 < 10; l_894_i0++) {
                    result += l_894[l_894_i0].f0;
                    result += l_894[l_894_i0].f1;
                    result += l_894[l_894_i0].f2;
                }
                result += l_895;
                result += l_896;
                result += l_897;
                atomic_add(&p_1835->l_special_values[83], result);
            }
            else
            { /* block id: 341 */
                (1 + 1);
            }
        }
        else
        { /* block id: 344 */
            int8_t l_900[8][1];
            uint32_t *l_903[3][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            uint32_t **l_902 = &l_903[1][2][1];
            uint32_t ***l_901[2][10][4] = {{{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902}},{{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902},{(void*)0,(void*)0,&l_902,&l_902}}};
            VECTOR(int16_t, 8) l_915 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x4A43L), 0x4A43L), 0x4A43L, 9L, 0x4A43L);
            uint64_t *l_916 = (void*)0;
            int32_t l_927 = 0x05064EB5L;
            int32_t l_932 = 0x2EC645F4L;
            VECTOR(int32_t, 2) l_934 = (VECTOR(int32_t, 2))(0x7F2396DAL, 0x1CD448B3L);
            int i, j, k;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 1; j++)
                    l_900[i][j] = 0x36L;
            }
            l_900[2][0] = ((*p_54) = (*p_54));
            if (((void*)0 != l_901[1][4][0]))
            { /* block id: 347 */
                int32_t *l_910 = (void*)0;
                int16_t **l_912 = &l_814;
                int32_t l_933 = 1L;
                int32_t l_935 = 0x58F21258L;
                int32_t l_936 = 0x1AB5AB6BL;
                int32_t l_937 = (-1L);
                int32_t l_938 = 0x39F1C10AL;
                int32_t l_939 = 0x5179C3C7L;
                int32_t l_940 = 8L;
                p_1835->g_396.s7 ^= (safe_rshift_func_int8_t_s_u(p_58, (((safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((GROUP_DIVERGE(2, 1) >= ((void*)0 != l_910)) == (&p_1835->g_70 == (p_1835->g_911[0] , ((*l_912) = l_851)))), GROUP_DIVERGE(1, 1))), (safe_lshift_func_int16_t_s_s((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(l_915.s1741564655403712)).sc6, (int16_t)((*p_54) && (*p_1835->g_121))))), p_56, ((VECTOR(int16_t, 4))((-9L))), 0x42DBL)).s27)).hi && p_56), 11)))) , l_916) == &p_1835->g_302[1][0])));
                if ((p_58 , ((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(p_1835->g_151, (*p_57))) == (*p_57)), (((p_1835->g_567.z < (0x16821421L | (((l_923[1][1][4] = l_832) != ((GROUP_DIVERGE(1, 1) || (safe_mod_func_int64_t_s_s((safe_unary_minus_func_int16_t_s((l_927 &= (l_834 == (void*)0)))), p_1835->g_64.s0))) , &p_1835->g_809)) == (*p_1835->g_121)))) ^ (-6L)) ^ 0x33D0L))), p_55)) <= GROUP_DIVERGE(1, 1))))
                { /* block id: 352 */
                    int16_t l_928 = 0x5AE9L;
                    int32_t l_929[6] = {(-8L),0x59FB95AAL,(-8L),(-8L),0x59FB95AAL,(-8L)};
                    int i;
                    l_941--;
                }
                else
                { /* block id: 354 */
                    if ((*p_57))
                        break;
                    if ((*p_57))
                        break;
                }
                if ((atomic_inc(&p_1835->l_atomic_input[84]) == 6))
                { /* block id: 359 */
                    int32_t l_944 = 0x53E031D6L;
                    int16_t l_945 = 0x4453L;
                    l_944 = (l_945 = l_944);
                    unsigned int result = 0;
                    result += l_944;
                    result += l_945;
                    atomic_add(&p_1835->l_special_values[84], result);
                }
                else
                { /* block id: 362 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 365 */
                return l_932;
            }
            return l_915.s5;
        }
        l_930 = (*p_1835->g_121);
    }
    --l_946;
    (*p_54) = ((*p_1835->g_121) == (((safe_rshift_func_int16_t_s_s(0L, p_56)) > 0x6FBFE0EDL) > (p_58 | (p_1835->g_314 >= (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_s((p_1835->g_911[0] , (safe_mod_func_int16_t_s_s((l_969 = ((p_55 >= (safe_div_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u((((*l_965) = 0x73L) , p_58), 0x2DB1636DL)) < (-4L)) > 1UL) <= p_56), p_58))) | (-1L))), l_970))), 2)))), p_55)), 0))))));
    return p_1835->g_421.sb;
}


/* ------------------------------------------ */
/* 
 * reads : p_1835->g_314
 * writes: p_1835->g_314
 */
int16_t  func_78(int16_t * p_79, int32_t * p_80, struct S2 * p_1835)
{ /* block id: 301 */
    int8_t l_800 = 0x3AL;
    int32_t l_801[1][2];
    uint16_t l_802 = 0xB871L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_801[i][j] = (-1L);
    }
    for (p_1835->g_314 = 0; (p_1835->g_314 == 24); p_1835->g_314 = safe_add_func_uint16_t_u_u(p_1835->g_314, 5))
    { /* block id: 304 */
        int32_t *l_798 = (void*)0;
        int32_t *l_799[4][9] = {{&p_1835->g_104,&p_1835->g_104,&p_1835->g_335[1],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1835->g_104,&p_1835->g_104,&p_1835->g_335[1],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1835->g_104,&p_1835->g_104,&p_1835->g_335[1],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1835->g_104,&p_1835->g_104,&p_1835->g_335[1],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        l_798 = &p_1835->g_3;
        ++l_802;
    }
    return l_800;
}


/* ------------------------------------------ */
/* 
 * reads : p_1835->g_455
 * writes:
 */
uint16_t  func_87(int16_t * p_88, int16_t * p_89, struct S2 * p_1835)
{ /* block id: 298 */
    int32_t *l_793[6][9] = {{(void*)0,(void*)0,&p_1835->g_3,(void*)0,(void*)0,(void*)0,&p_1835->g_3,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1835->g_3,(void*)0,(void*)0,(void*)0,&p_1835->g_3,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1835->g_3,(void*)0,(void*)0,(void*)0,&p_1835->g_3,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1835->g_3,(void*)0,(void*)0,(void*)0,&p_1835->g_3,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1835->g_3,(void*)0,(void*)0,(void*)0,&p_1835->g_3,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1835->g_3,(void*)0,(void*)0,(void*)0,&p_1835->g_3,(void*)0,(void*)0}};
    int32_t **l_794 = (void*)0;
    int32_t **l_795 = &l_793[4][8];
    int i, j;
    (*l_795) = l_793[4][8];
    return p_1835->g_455.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1835->g_7 p_1835->g_comm_values p_1835->g_72 p_1835->g_149 p_1835->g_3 p_1835->g_104 p_1835->g_70 p_1835->g_103 p_1835->g_179 p_1835->g_98 p_1835->g_188 p_1835->g_190 p_1835->g_151 p_1835->g_220 p_1835->g_228 p_1835->g_31 p_1835->g_250 p_1835->g_77 p_1835->l_comm_values p_1835->g_121 p_1835->g_302 p_1835->g_314 p_1835->g_315 p_1835->g_209 p_1835->g_455 p_1835->g_457 p_1835->g_421 p_1835->g_517 p_1835->g_397 p_1835->g_518 p_1835->g_528 p_1835->g_684 p_1835->g_685 p_1835->g_335 p_1835->g_396 p_1835->g_132
 * writes: p_1835->g_103 p_1835->g_121 p_1835->g_98 p_1835->g_132 p_1835->g_144 p_1835->g_149 p_1835->l_comm_values p_1835->g_104 p_1835->g_209 p_1835->g_213 p_1835->g_70 p_1835->g_234 p_1835->g_228 p_1835->g_151 p_1835->g_302 p_1835->g_314 p_1835->g_315 p_1835->g_7 p_1835->g_396 p_1835->g_397 p_1835->g_517 p_1835->g_528 p_1835->g_518 p_1835->g_comm_values p_1835->g_340
 */
int16_t * func_90(uint32_t  p_91, int32_t * p_92, struct S2 * p_1835)
{ /* block id: 34 */
    int32_t *l_117 = &p_1835->g_3;
    int32_t **l_118[1][1][5];
    int16_t *l_122 = (void*)0;
    VECTOR(uint16_t, 16) l_176 = (VECTOR(uint16_t, 16))(0x408CL, (VECTOR(uint16_t, 4))(0x408CL, (VECTOR(uint16_t, 2))(0x408CL, 1UL), 1UL), 1UL, 0x408CL, 1UL, (VECTOR(uint16_t, 2))(0x408CL, 1UL), (VECTOR(uint16_t, 2))(0x408CL, 1UL), 0x408CL, 1UL, 0x408CL, 1UL);
    VECTOR(uint32_t, 8) l_189 = (VECTOR(uint32_t, 8))(0x87865977L, (VECTOR(uint32_t, 4))(0x87865977L, (VECTOR(uint32_t, 2))(0x87865977L, 0UL), 0UL), 0UL, 0x87865977L, 0UL);
    int8_t *l_210[4];
    VECTOR(int32_t, 4) l_221 = (VECTOR(int32_t, 4))(0x477241C6L, (VECTOR(int32_t, 2))(0x477241C6L, 0x52730DB2L), 0x52730DB2L);
    int16_t *l_226 = (void*)0;
    int16_t *l_227 = &p_1835->g_70;
    VECTOR(uint64_t, 2) l_229 = (VECTOR(uint64_t, 2))(0xA8A2A549730AFC9AL, 0x9705F32BFF61453EL);
    VECTOR(uint64_t, 8) l_230 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x8E4A0112709D279EL), 0x8E4A0112709D279EL), 0x8E4A0112709D279EL, 1UL, 0x8E4A0112709D279EL);
    VECTOR(uint64_t, 4) l_231 = (VECTOR(uint64_t, 4))(0xEC0B0B6E22C6D3FCL, (VECTOR(uint64_t, 2))(0xEC0B0B6E22C6D3FCL, 0xDC513A414F196435L), 0xDC513A414F196435L);
    uint32_t *l_235 = &p_1835->g_149[4];
    uint64_t l_236 = 0x8C86E7D8582BF0B1L;
    uint64_t *l_237 = (void*)0;
    VECTOR(int32_t, 8) l_238 = (VECTOR(int32_t, 8))(0x6565B5AFL, (VECTOR(int32_t, 4))(0x6565B5AFL, (VECTOR(int32_t, 2))(0x6565B5AFL, 0x116205D5L), 0x116205D5L), 0x116205D5L, 0x6565B5AFL, 0x116205D5L);
    union U0 *l_260 = &p_1835->g_261;
    union U0 **l_259 = &l_260;
    uint8_t l_342[6][7][4] = {{{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL}},{{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL}},{{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL}},{{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL}},{{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL}},{{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL},{1UL,0UL,7UL,7UL}}};
    int16_t l_424 = 0x0CDCL;
    uint32_t l_429 = 0xAD18978BL;
    VECTOR(uint16_t, 16) l_474 = (VECTOR(uint16_t, 16))(0xCDFBL, (VECTOR(uint16_t, 4))(0xCDFBL, (VECTOR(uint16_t, 2))(0xCDFBL, 0UL), 0UL), 0UL, 0xCDFBL, 0UL, (VECTOR(uint16_t, 2))(0xCDFBL, 0UL), (VECTOR(uint16_t, 2))(0xCDFBL, 0UL), 0xCDFBL, 0UL, 0xCDFBL, 0UL);
    int16_t l_502 = (-5L);
    int16_t *l_522 = (void*)0;
    int32_t l_551 = 0x40834AE2L;
    uint32_t l_576 = 0UL;
    VECTOR(uint8_t, 16) l_615 = (VECTOR(uint8_t, 16))(0x02L, (VECTOR(uint8_t, 4))(0x02L, (VECTOR(uint8_t, 2))(0x02L, 0x96L), 0x96L), 0x96L, 0x02L, 0x96L, (VECTOR(uint8_t, 2))(0x02L, 0x96L), (VECTOR(uint8_t, 2))(0x02L, 0x96L), 0x02L, 0x96L, 0x02L, 0x96L);
    uint64_t l_722 = 0x0B2EF2A19E501251L;
    VECTOR(int16_t, 16) l_784 = (VECTOR(int16_t, 16))(0x6C02L, (VECTOR(int16_t, 4))(0x6C02L, (VECTOR(int16_t, 2))(0x6C02L, 0x3DE9L), 0x3DE9L), 0x3DE9L, 0x6C02L, 0x3DE9L, (VECTOR(int16_t, 2))(0x6C02L, 0x3DE9L), (VECTOR(int16_t, 2))(0x6C02L, 0x3DE9L), 0x6C02L, 0x3DE9L, 0x6C02L, 0x3DE9L);
    uint32_t **l_789 = (void*)0;
    uint32_t **l_791 = (void*)0;
    int8_t l_792 = 0x6AL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_118[i][j][k] = &p_1835->g_103;
        }
    }
    for (i = 0; i < 4; i++)
        l_210[i] = &p_1835->g_151;
    p_1835->g_103 = l_117;
    for (p_91 = 0; (p_91 >= 20); p_91 = safe_add_func_uint8_t_u_u(p_91, 1))
    { /* block id: 38 */
        int8_t l_125 = 1L;
        int8_t *l_130 = &p_1835->g_98;
        uint64_t *l_131 = &p_1835->g_132;
        int16_t **l_143 = (void*)0;
        int16_t **l_145[10];
        uint32_t *l_146 = (void*)0;
        uint32_t *l_147 = (void*)0;
        uint32_t *l_148 = &p_1835->g_149[4];
        int8_t *l_150[3][3] = {{&p_1835->g_151,&p_1835->g_151,&p_1835->g_151},{&p_1835->g_151,&p_1835->g_151,&p_1835->g_151},{&p_1835->g_151,&p_1835->g_151,&p_1835->g_151}};
        int8_t l_152 = (-2L);
        int64_t *l_153 = (void*)0;
        int64_t *l_154 = (void*)0;
        int64_t *l_155 = (void*)0;
        int64_t *l_156 = (void*)0;
        int64_t *l_157 = (void*)0;
        int64_t *l_158 = (void*)0;
        int64_t *l_159 = (void*)0;
        int64_t *l_160 = (void*)0;
        int64_t *l_161 = (void*)0;
        int64_t *l_162 = (void*)0;
        int64_t *l_163 = (void*)0;
        int64_t *l_164 = (void*)0;
        int64_t *l_165 = (void*)0;
        int64_t *l_166 = (void*)0;
        int64_t *l_167[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        uint64_t l_168 = 0x55F10B7823F5755EL;
        VECTOR(int32_t, 16) l_173 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x680C1E3CL), 0x680C1E3CL), 0x680C1E3CL, 0L, 0x680C1E3CL, (VECTOR(int32_t, 2))(0L, 0x680C1E3CL), (VECTOR(int32_t, 2))(0L, 0x680C1E3CL), 0L, 0x680C1E3CL, 0L, 0x680C1E3CL);
        uint8_t *l_180 = (void*)0;
        uint8_t *l_181[6];
        int32_t l_182[2][4][9] = {{{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L}},{{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L}}};
        int32_t l_183 = 0x71515BE2L;
        int32_t **l_196[2];
        uint16_t *l_207 = (void*)0;
        uint16_t *l_208[7];
        int8_t **l_211 = &l_210[0];
        int32_t *l_212 = &p_1835->g_213;
        union U0 *l_216 = &p_1835->g_217;
        union U0 *l_218 = &p_1835->g_219;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_145[i] = &l_122;
        for (i = 0; i < 6; i++)
            l_181[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_196[i] = &p_1835->g_121;
        for (i = 0; i < 7; i++)
            l_208[i] = (void*)0;
        l_125 = ((p_1835->g_121 = (p_1835->g_103 = &p_1835->g_3)) != (((l_122 != &p_1835->g_70) ^ (safe_rshift_func_int16_t_s_s((-1L), 0))) , p_92));
        p_1835->g_104 &= ((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((p_1835->g_7 ^ (((*l_130) = l_125) | (((*l_131) = p_91) , p_1835->g_comm_values[p_1835->tid]))) >= (safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(p_91, 13)), (safe_mod_func_int64_t_s_s((p_1835->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1835->tid, 104))] = (l_168 = (safe_lshift_func_uint16_t_u_u((((l_152 = (safe_div_func_uint32_t_u_u((((l_122 = (p_1835->g_144 = l_122)) != &p_1835->g_70) != ((*l_148) ^= p_1835->g_72.x)), (*l_117)))) , p_91) < 18446744073709551610UL), 12)))), p_1835->g_comm_values[p_1835->tid]))))), GROUP_DIVERGE(1, 1))), p_1835->g_72.y)) , 0x3078A46EL);
        atomic_and(&p_1835->l_atomic_reduction[0], (safe_rshift_func_uint8_t_u_u((l_183 ^= (safe_div_func_int8_t_s_s(0L, (l_182[1][3][2] &= ((((VECTOR(int32_t, 16))(l_173.se9e46c906dc5b995)).sb , 0x3BAA9240L) | (((safe_sub_func_uint8_t_u_u((p_1835->g_70 != ((VECTOR(uint16_t, 2))(l_176.s71)).odd), ((safe_lshift_func_uint16_t_u_s((l_154 != (void*)0), 10)) >= (*p_1835->g_103)))) | ((*l_131) = ((VECTOR(uint64_t, 2))(p_1835->g_179.s41)).hi)) >= p_91)))))), 3)));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1835->v_collective += p_1835->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (((((*l_212) = (((*l_211) = ((safe_rshift_func_int8_t_s_u(((*l_130) &= (l_122 != (void*)0)), (1UL || ((p_1835->g_70 , ((VECTOR(uint32_t, 8))(0x7E66DB85L, 0x07267052L, (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(p_1835->g_188.wyzyxzwy)).s3, 0)), ((VECTOR(uint32_t, 2))(l_189.s73)), ((VECTOR(uint32_t, 2))(p_1835->g_190.yx)), 0xB9F66EA2L)).s0) | (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(p_91)), (safe_div_func_int8_t_s_s(((l_196[1] = l_196[1]) == &p_92), (+(((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_int16_t_s_u((((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-4L), (-10L))).xxyxxyyy)))).s1120726255673760))).s4 || 8L), (p_1835->g_209 = (safe_add_func_uint64_t_u_u(0x7721BB3FC7F9658AL, 0L))))) < p_91) , (*p_92)) , p_91), p_91)) || (*p_1835->g_103)), 15)), 0x402EL)) , p_1835->g_149[6]) || p_91)))))))))) , l_210[0])) != &p_1835->g_151)) , p_1835->g_151) ^ p_91))
        { /* block id: 60 */
            for (l_168 = 0; (l_168 > 56); ++l_168)
            { /* block id: 63 */
                l_218 = l_216;
            }
            p_1835->g_104 = (l_181[3] != l_130);
        }
        else
        { /* block id: 67 */
            return &p_1835->g_70;
        }
    }
    if ((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(0x7C3CB9D369F0A606L, 0x2CADE1094D660517L, 0x3F1FC11684F62FEAL, 0x19311DF522524D29L, ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1835->g_220.zxzw)).lo)).xyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_221.wxyxywxw)), (safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(((*l_227) = 0x58F7L), (((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 8))(p_1835->g_228.s372b5bde)).lo, ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 8))(l_229.yxxyyxyx)).odd, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(1UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_230.s1410)), ((VECTOR(uint64_t, 2))(l_231.wz)), 0xD3A8A002E8F972EFL, 18446744073709551615UL)), (p_1835->g_228.sd = ((safe_mod_func_int16_t_s_s((p_91 > (p_1835->g_98 , 1L)), (((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(0xA7L, 248UL)).yxyyxxyx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(250UL, 246UL, 0xF8L, 1UL)).wywzwywx))))))).s4 || ((p_1835->g_234 = l_122) != (void*)0)))) <= ((+((((*l_235) = (0xD262044EL && (p_92 == ((p_1835->g_188.z , 1L) , l_117)))) || 0UL) == p_1835->g_228.sd)) || l_236))), GROUP_DIVERGE(1, 1), 6UL, p_1835->g_188.z, ((VECTOR(uint64_t, 2))(0x126B8E5C99A56468L)), 0x600122506C6AAB39L)).sf8d6))))).yzzyxwzyxwwxyxxz)).sbc, ((VECTOR(uint64_t, 2))(1UL))))).yxyyyyyyxxxxyxxx))).hi)).s61, ((VECTOR(uint64_t, 2))(18446744073709551614UL))))).xxyx))).z < 0xE7CA82C3EB71C04CL))), p_1835->g_31.s7)), ((VECTOR(int32_t, 4))((-5L))), 0x3A9E8C40L, 0x151A803AL, 0x249896F3L)).s2470))).yyxzyyxw)).lo)).odd, ((VECTOR(uint32_t, 2))(4294967295UL))))), ((VECTOR(int64_t, 2))(0x7F907EE7F2809EB3L)), 0L, 1L, 0x49BAA3EEEE6405BCL, ((VECTOR(int64_t, 2))(0x03E69CA97485B82CL)), 0x585AF8C4A7E46AF6L, 0x110CAE837760ADB3L, (-1L))).lo)).s1 != (*l_117)))
    { /* block id: 75 */
        int16_t *l_243[4][5];
        int32_t l_257[8] = {8L,0x7A67C6BDL,8L,8L,0x7A67C6BDL,8L,8L,0x7A67C6BDL};
        int32_t *l_258 = &p_1835->g_213;
        int16_t l_346 = (-5L);
        uint64_t l_368 = 1UL;
        uint32_t *l_378 = &p_1835->g_149[4];
        VECTOR(int16_t, 16) l_389 = (VECTOR(int16_t, 16))(0x16AFL, (VECTOR(int16_t, 4))(0x16AFL, (VECTOR(int16_t, 2))(0x16AFL, 0x590EL), 0x590EL), 0x590EL, 0x16AFL, 0x590EL, (VECTOR(int16_t, 2))(0x16AFL, 0x590EL), (VECTOR(int16_t, 2))(0x16AFL, 0x590EL), 0x16AFL, 0x590EL, 0x16AFL, 0x590EL);
        VECTOR(int8_t, 16) l_530 = (VECTOR(int8_t, 16))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x33L), 0x33L), 0x33L, 2L, 0x33L, (VECTOR(int8_t, 2))(2L, 0x33L), (VECTOR(int8_t, 2))(2L, 0x33L), 2L, 0x33L, 2L, 0x33L);
        VECTOR(int8_t, 4) l_605 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L));
        int32_t *l_623 = &l_257[4];
        int32_t l_628 = (-6L);
        int64_t l_655 = 0x48F5E67B92C90C49L;
        VECTOR(uint8_t, 16) l_682 = (VECTOR(uint8_t, 16))(0xFAL, (VECTOR(uint8_t, 4))(0xFAL, (VECTOR(uint8_t, 2))(0xFAL, 0x0AL), 0x0AL), 0x0AL, 0xFAL, 0x0AL, (VECTOR(uint8_t, 2))(0xFAL, 0x0AL), (VECTOR(uint8_t, 2))(0xFAL, 0x0AL), 0xFAL, 0x0AL, 0xFAL, 0x0AL);
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
                l_243[i][j] = &p_1835->g_70;
        }
        if (((((((((((*l_258) = ((VECTOR(int32_t, 16))(7L, (-3L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_238.s4115)), p_1835->g_72.y, 0L, 0x236062C3L, 1L)).s42, (int32_t)((((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((p_1835->g_151 = p_91), 2)), ((void*)0 == l_243[1][4]))) >= (safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1835->g_250.xy)).xyxy)))).zzzzxxwwzyyyxzww))).sea)), 0xE3L, (p_91 | (p_91 <= (safe_mul_func_int16_t_s_s(0x077AL, (p_1835->g_72.y != (safe_add_func_int64_t_s_s(p_1835->g_31.s2, 0x185195A8140EC37FL))))))), l_257[4], 7UL, 0xD5L, 0UL)), ((VECTOR(uint8_t, 8))(0UL))))).s54, ((VECTOR(uint8_t, 2))(0x51L))))).hi, l_257[4])), p_91)), p_91))) == 4L) , p_1835->g_104)))))), p_1835->g_77.w, ((VECTOR(int32_t, 2))((-1L))), p_1835->g_77.x, (-2L), 0x0BE6784FL, 0L, ((VECTOR(int32_t, 2))(0x128704BFL)), ((VECTOR(int32_t, 2))(3L)), 0L)).s0) , p_1835->g_220.z) & 65529UL) == 0x19F1A46904C32854L) | 0x1DL) <= l_257[4]) & l_257[4]) & 0x73L) != p_1835->g_250.y))
        { /* block id: 78 */
            union U0 ***l_262 = &l_259;
            int32_t l_303 = 0x62EEB9AFL;
            volatile union U0 * volatile **l_318[1][3][3] = {{{&p_1835->g_315,&p_1835->g_315,&p_1835->g_315},{&p_1835->g_315,&p_1835->g_315,&p_1835->g_315},{&p_1835->g_315,&p_1835->g_315,&p_1835->g_315}}};
            int i, j, k;
            (*l_262) = l_259;
            l_257[7] = (safe_div_func_int32_t_s_s((p_1835->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1835->tid, 104))] , 0L), p_1835->g_98));
            for (p_1835->g_104 = 12; (p_1835->g_104 != (-5)); p_1835->g_104 = safe_sub_func_int32_t_s_s(p_1835->g_104, 1))
            { /* block id: 83 */
                uint64_t *l_301[2][5] = {{&p_1835->g_302[1][0],(void*)0,&p_1835->g_302[1][0],&p_1835->g_302[1][0],(void*)0},{&p_1835->g_302[1][0],(void*)0,&p_1835->g_302[1][0],&p_1835->g_302[1][0],(void*)0}};
                int32_t **l_306 = (void*)0;
                uint8_t *l_311 = (void*)0;
                uint8_t *l_312[1][5][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t l_313[8][5][6] = {{{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L}},{{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L}},{{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L}},{{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L}},{{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L}},{{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L}},{{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L}},{{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L},{0x58342909L,0L,0L,0x048CE3E4L,0x1FB4EB6AL,0x43FE3992L}}};
                int i, j, k;
                if ((atomic_inc(&p_1835->g_atomic_input[97 * get_linear_group_id() + 32]) == 7))
                { /* block id: 85 */
                    VECTOR(int64_t, 8) l_267 = (VECTOR(int64_t, 8))(0x52550F3DB07DDFBFL, (VECTOR(int64_t, 4))(0x52550F3DB07DDFBFL, (VECTOR(int64_t, 2))(0x52550F3DB07DDFBFL, 0x6F577913A047BB79L), 0x6F577913A047BB79L), 0x6F577913A047BB79L, 0x52550F3DB07DDFBFL, 0x6F577913A047BB79L);
                    int8_t l_268 = 0x2FL;
                    uint64_t l_269 = 8UL;
                    uint8_t l_270[4];
                    int32_t l_274 = 0x4809A6A3L;
                    int32_t *l_273 = &l_274;
                    int32_t *l_275 = &l_274;
                    int32_t l_276[4] = {(-2L),(-2L),(-2L),(-2L)};
                    int i;
                    for (i = 0; i < 4; i++)
                        l_270[i] = 247UL;
                    l_269 = (((VECTOR(int64_t, 4))(l_267.s4362)).x , l_268);
                    --l_270[2];
                    l_275 = l_273;
                    if (l_276[1])
                    { /* block id: 89 */
                        int32_t l_277 = 0x35AC0163L;
                        int8_t l_278 = 0L;
                        int32_t l_280 = (-1L);
                        int32_t *l_279 = &l_280;
                        int32_t *l_281 = &l_280;
                        (*l_273) = l_277;
                        l_281 = (l_273 = (l_278 , l_279));
                    }
                    else
                    { /* block id: 93 */
                        uint16_t l_282 = 8UL;
                        int32_t l_286 = (-3L);
                        int32_t *l_285[6] = {&l_286,&l_286,&l_286,&l_286,&l_286,&l_286};
                        uint8_t l_287[8];
                        uint8_t l_288 = 255UL;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_287[i] = 247UL;
                        l_282++;
                        l_285[2] = l_285[2];
                        l_288 &= ((*l_273) = l_287[7]);
                    }
                    unsigned int result = 0;
                    result += l_267.s7;
                    result += l_267.s6;
                    result += l_267.s5;
                    result += l_267.s4;
                    result += l_267.s3;
                    result += l_267.s2;
                    result += l_267.s1;
                    result += l_267.s0;
                    result += l_268;
                    result += l_269;
                    int l_270_i0;
                    for (l_270_i0 = 0; l_270_i0 < 4; l_270_i0++) {
                        result += l_270[l_270_i0];
                    }
                    result += l_274;
                    int l_276_i0;
                    for (l_276_i0 = 0; l_276_i0 < 4; l_276_i0++) {
                        result += l_276[l_276_i0];
                    }
                    atomic_add(&p_1835->g_special_values[97 * get_linear_group_id() + 32], result);
                }
                else
                { /* block id: 99 */
                    (1 + 1);
                }
                p_1835->g_314 |= (p_91 > ((safe_mul_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((l_313[2][1][4] = (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((*p_1835->g_121) > (((p_1835->g_302[2][0]++) , (l_306 = &p_1835->g_121)) == (void*)0)), p_91)), (safe_rshift_func_uint8_t_u_s(p_91, p_91)))) > p_1835->g_7) <= (safe_rshift_func_uint8_t_u_s((l_303 ^= (+0UL)), 0))) >= (*l_117)) >= l_313[3][0][0]), 4)), 4294967295UL))), p_91)) && p_1835->g_220.z), 1UL)) && p_1835->g_149[4]));
            }
            p_1835->g_315 = p_1835->g_315;
        }
        else
        { /* block id: 109 */
            uint32_t l_322[9][1] = {{0x31F1BBC2L},{0x31F1BBC2L},{0x31F1BBC2L},{0x31F1BBC2L},{0x31F1BBC2L},{0x31F1BBC2L},{0x31F1BBC2L},{0x31F1BBC2L},{0x31F1BBC2L}};
            int32_t l_337 = 0x42749E7CL;
            int32_t l_338 = (-1L);
            int32_t l_339 = 0x0B74DEC6L;
            int32_t l_341 = 0x53533CD4L;
            int32_t l_347 = 0x53ADFECCL;
            int32_t l_348[4][2];
            int16_t l_349 = 0x3EB8L;
            VECTOR(uint32_t, 4) l_363 = (VECTOR(uint32_t, 4))(0x60442D28L, (VECTOR(uint32_t, 2))(0x60442D28L, 0xDDCF332CL), 0xDDCF332CL);
            uint8_t l_375[7][8][4] = {{{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L}},{{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L}},{{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L}},{{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L}},{{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L}},{{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L}},{{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L},{0UL,1UL,1UL,0x64L}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_348[i][j] = 0x7DC04DE5L;
            }
            l_257[4] &= 7L;
            for (p_1835->g_98 = 25; (p_1835->g_98 > 10); p_1835->g_98 = safe_sub_func_int32_t_s_s(p_1835->g_98, 7))
            { /* block id: 113 */
                uint64_t *l_321[6] = {&p_1835->g_302[1][0],&p_1835->g_302[1][0],&p_1835->g_302[1][0],&p_1835->g_302[1][0],&p_1835->g_302[1][0],&p_1835->g_302[1][0]};
                int32_t l_327 = 0x71BD6022L;
                int32_t l_330[3][4][1] = {{{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L}}};
                int i, j, k;
                (1 + 1);
            }
        }
        if ((p_92 == (l_378 = l_117)))
        { /* block id: 156 */
            int32_t l_385 = 0x53913EECL;
            VECTOR(uint32_t, 2) l_400 = (VECTOR(uint32_t, 2))(4294967294UL, 0x23398D60L);
            int32_t l_423 = 0x06B966C4L;
            int32_t l_432 = 0x2755952AL;
            int32_t l_433 = 0x61F31C15L;
            int32_t l_435 = (-1L);
            int32_t l_436 = 0x0D975B5AL;
            int32_t l_437 = 0x12AB33C5L;
            int32_t l_438 = 0L;
            int32_t l_439 = 0x7EFA28BFL;
            uint32_t l_440 = 3UL;
            VECTOR(int8_t, 16) l_454 = (VECTOR(int8_t, 16))(0x50L, (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, (-9L)), (-9L)), (-9L), 0x50L, (-9L), (VECTOR(int8_t, 2))(0x50L, (-9L)), (VECTOR(int8_t, 2))(0x50L, (-9L)), 0x50L, (-9L), 0x50L, (-9L));
            uint32_t l_464 = 0xFEE7D7F4L;
            int32_t l_555 = 0x292BA83AL;
            VECTOR(int16_t, 2) l_581 = (VECTOR(int16_t, 2))((-1L), 0x75BAL);
            VECTOR(uint8_t, 8) l_616 = (VECTOR(uint8_t, 8))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0xFFL), 0xFFL), 0xFFL, 7UL, 0xFFL);
            int32_t l_646 = 6L;
            int32_t l_647 = 0x770866E5L;
            int32_t l_648 = 0x0C9C30FDL;
            int i;
            for (p_1835->g_7 = 5; (p_1835->g_7 < 27); p_1835->g_7++)
            { /* block id: 159 */
                uint32_t l_394 = 0x9F798D34L;
                uint16_t *l_420 = &p_1835->g_209;
                uint16_t l_422 = 0x1F45L;
                int32_t l_426 = (-4L);
                int32_t l_427 = 0L;
                int32_t l_434 = 1L;
                uint8_t *l_447 = &l_342[3][4][2];
                VECTOR(int8_t, 8) l_456 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                int8_t *l_459 = (void*)0;
                int8_t **l_458 = &l_459;
                union U0 *l_460 = &p_1835->g_461;
                int i;
                for (p_1835->g_213 = 0; (p_1835->g_213 == (-17)); p_1835->g_213 = safe_sub_func_int32_t_s_s(p_1835->g_213, 1))
                { /* block id: 162 */
                    VECTOR(int16_t, 16) l_388 = (VECTOR(int16_t, 16))(0x0020L, (VECTOR(int16_t, 4))(0x0020L, (VECTOR(int16_t, 2))(0x0020L, 0x163CL), 0x163CL), 0x163CL, 0x0020L, 0x163CL, (VECTOR(int16_t, 2))(0x0020L, 0x163CL), (VECTOR(int16_t, 2))(0x0020L, 0x163CL), 0x0020L, 0x163CL, 0x0020L, 0x163CL);
                    VECTOR(int32_t, 4) l_395 = (VECTOR(int32_t, 4))(0x53DDB24BL, (VECTOR(int32_t, 2))(0x53DDB24BL, 3L), 3L);
                    int i;
                    for (p_1835->g_209 = 0; (p_1835->g_209 > 25); ++p_1835->g_209)
                    { /* block id: 165 */
                        VECTOR(uint32_t, 8) l_401 = (VECTOR(uint32_t, 8))(0x9EAE3296L, (VECTOR(uint32_t, 4))(0x9EAE3296L, (VECTOR(uint32_t, 2))(0x9EAE3296L, 0x0D9EEE9BL), 0x0D9EEE9BL), 0x0D9EEE9BL, 0x9EAE3296L, 0x0D9EEE9BL);
                        int32_t l_425 = 0x4105F127L;
                        int32_t l_428 = 0L;
                        int i;
                        l_385 = 0x4150FF79L;
                        l_395.y = (safe_mod_func_int16_t_s_s((((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(9L, 6L)).xyyxxxxy, ((VECTOR(int16_t, 16))(l_388.s58cbf7292e34fed9)).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_389.s5d7d)), 0x5EB9L, (((safe_add_func_int16_t_s_s(p_91, ((*l_227) = (safe_div_func_int64_t_s_s(((((l_394 , 0UL) < (l_423 = ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(l_395.wxxzzwxyzzyyzwzz)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(p_1835->g_396.s02))))), 0x24DCD167L, (-5L))).zwzzwwzxyzzzxzyy, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1835->g_397.s8d85)).zzyxxxzxwywwxzwy)).s76, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(1L, 0x30BDE3DFL)).yyyyxyxyyxxyxyyx, ((VECTOR(int32_t, 4))((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_400.yx)), 7UL, 0xD3D10D6EL)), ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_401.s3013)).zwwwyyywzyxxwzzy)).s8933)).yyywwwxz)), ((VECTOR(uint32_t, 8))(p_1835->g_402.wwxywxyz)), ((VECTOR(uint32_t, 16))(0x30DBBA3AL, 0xB3478938L, ((((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 8))((1L > ((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u((+((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(0x2A5FL, ((void*)0 == l_420))), ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(p_1835->g_421.sdcd03028)).s4676777567670143, ((VECTOR(int32_t, 4))((-1L), l_389.sb, 1L, 4L)).xxzzxwzzzzwxxzwy))).s8)) < ((VECTOR(int32_t, 16))((*p_92), ((VECTOR(int32_t, 8))(0x3519CB42L)), (*p_1835->g_103), ((VECTOR(int32_t, 4))(1L)), (-2L), (-1L))).s6), l_422)), p_1835->g_104)), 0L)) == p_91), p_91)), p_1835->g_comm_values[p_1835->tid])) != p_91)))), 5)) != p_1835->g_397.sa)), (-1L), (-7L), ((VECTOR(int8_t, 2))(0x65L)), 0L, 1L, 0x3AL)), 0x36L, ((VECTOR(int8_t, 2))(0x1CL)), ((VECTOR(int8_t, 2))(1L)), 0L, 0x20L)).s7 > l_422) || p_1835->g_220.y), FAKE_DIVERGE(p_1835->global_2_offset, get_global_id(2), 10), 0xF69F7CCFL, 0xC1325FCAL, 4294967290UL, 0x76785C74L, ((VECTOR(uint32_t, 4))(0xB50610CFL)), ((VECTOR(uint32_t, 4))(0x1DE248BEL)))).lo))), ((VECTOR(uint32_t, 4))(0xBD741D45L)), l_401.s7, ((VECTOR(uint32_t, 2))(0x364496EBL)), 7UL)))).sf9, (uint32_t)8UL))), 1UL, 0UL)).s3, (-10L))), ((VECTOR(int32_t, 2))((-1L))), 4L)).zzzwyyxywyxyxyxx))).even)).even)).wyyyyxxy, ((VECTOR(int32_t, 8))(0L))))).s30, ((VECTOR(int32_t, 2))((-9L))))))))))).yyxxyxxxyyxyyxyx)).s1e, ((VECTOR(int32_t, 2))(0x08D4D166L))))))).xyyyyyyy, ((VECTOR(int32_t, 8))(0L))))).s6050170603464673))).s8)) , &p_1835->g_151) == &p_1835->g_314), 0x5E325CA46CF5396AL))))) & (*p_92)) , (*l_117)), ((VECTOR(int16_t, 8))(0x72B6L)), 0x6A77L, 0x1B69L)).hi))).s2014676131113672, (int16_t)l_424))).s748b, ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))(0x4913L))))).even, ((VECTOR(int16_t, 2))((-6L)))))).hi == FAKE_DIVERGE(p_1835->local_0_offset, get_local_id(0), 10)), p_91));
                        l_429++;
                        l_423 = (*p_1835->g_103);
                    }
                }
                l_440++;
                p_1835->g_396.s5 = (safe_add_func_int64_t_s_s((*l_117), (safe_sub_func_uint8_t_u_u(((*l_447) &= p_91), (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_1835->g_220.z, (-7L), (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(l_454.sd221cf66)), ((VECTOR(int8_t, 16))(0L, 0x5BL, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(0L, 0x1FL)).xyyy, ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(p_1835->g_455.xyyxxxxy)), ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(l_456.s2615330236131477)).even))), ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(p_1835->g_457.s2104)), (int8_t)(((*l_117) , (((p_1835->g_220.w | (p_91 & ((l_210[0] = l_447) != ((*l_458) = l_447)))) || (l_460 != p_1835->g_462)) | FAKE_DIVERGE(p_1835->global_1_offset, get_global_id(1), 10))) , l_464))))))).zywzyyyz, ((VECTOR(int8_t, 8))((-1L))))))))).even, ((VECTOR(int8_t, 4))(0L))))).yzxyzyxwzyzwyxzx)).s47, ((VECTOR(int8_t, 2))(0L))))), ((VECTOR(int8_t, 8))(0x61L)), ((VECTOR(int8_t, 2))(0x30L)), 4L, (-2L))).even))).even, ((VECTOR(int8_t, 4))((-1L)))))).zwzwxwyw, ((VECTOR(int8_t, 8))(0x39L))))).s2634253725204540, ((VECTOR(int8_t, 16))(0x34L))))), ((VECTOR(int8_t, 16))(3L)), ((VECTOR(int8_t, 16))(0x19L))))).sa, 1)), p_1835->g_455.y)), 1L, p_91, 1L, ((VECTOR(int16_t, 2))(0x6869L)), 0x12FFL, ((VECTOR(int16_t, 2))(0x4C70L)), l_433, 0x5C65L, ((VECTOR(int16_t, 2))((-1L))), 0L)).s2, l_433, 0x0903L, 1L)), ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))(0x5436L))))).w, 4))))));
            }
            for (l_433 = 0; (l_433 > 20); ++l_433)
            { /* block id: 182 */
                VECTOR(uint16_t, 16) l_473 = (VECTOR(uint16_t, 16))(0x4362L, (VECTOR(uint16_t, 4))(0x4362L, (VECTOR(uint16_t, 2))(0x4362L, 7UL), 7UL), 7UL, 0x4362L, 7UL, (VECTOR(uint16_t, 2))(0x4362L, 7UL), (VECTOR(uint16_t, 2))(0x4362L, 7UL), 0x4362L, 7UL, 0x4362L, 7UL);
                int32_t l_501 = 0x5268107EL;
                int32_t l_504 = (-1L);
                uint64_t *l_559 = &p_1835->g_302[1][0];
                uint32_t l_600 = 0x14066508L;
                VECTOR(int8_t, 2) l_604 = (VECTOR(int8_t, 2))(0x7CL, 0x73L);
                VECTOR(uint32_t, 2) l_613 = (VECTOR(uint32_t, 2))(0x8981F93BL, 0UL);
                int32_t l_633[4] = {0x2D25C7B0L,0x2D25C7B0L,0x2D25C7B0L,0x2D25C7B0L};
                int16_t l_636 = 0x15E6L;
                int i;
                for (l_435 = 0; (l_435 > (-7)); --l_435)
                { /* block id: 185 */
                    uint16_t *l_483 = (void*)0;
                    uint16_t *l_484 = (void*)0;
                    uint16_t *l_485 = &p_1835->g_209;
                    int32_t l_500 = (-1L);
                    uint32_t *l_527[4][1][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    uint8_t *l_529 = &l_342[3][5][3];
                    int64_t *l_552 = (void*)0;
                    int64_t *l_553 = &p_1835->g_340;
                    int64_t l_554 = (-1L);
                    uint64_t l_572 = 0x876505CAAC037CEEL;
                    int32_t l_575 = 0x775B419CL;
                    VECTOR(int8_t, 4) l_603 = (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 1L), 1L);
                    VECTOR(uint8_t, 16) l_608 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xEEL), 0xEEL), 0xEEL, 1UL, 0xEEL, (VECTOR(uint8_t, 2))(1UL, 0xEEL), (VECTOR(uint8_t, 2))(1UL, 0xEEL), 1UL, 0xEEL, 1UL, 0xEEL);
                    VECTOR(int16_t, 8) l_621 = (VECTOR(int16_t, 8))(0x2D47L, (VECTOR(int16_t, 4))(0x2D47L, (VECTOR(int16_t, 2))(0x2D47L, (-1L)), (-1L)), (-1L), 0x2D47L, (-1L));
                    VECTOR(int32_t, 8) l_640 = (VECTOR(int32_t, 8))(0x4D9C1214L, (VECTOR(int32_t, 4))(0x4D9C1214L, (VECTOR(int32_t, 2))(0x4D9C1214L, 0x320B6A89L), 0x320B6A89L), 0x320B6A89L, 0x4D9C1214L, 0x320B6A89L);
                    int i, j, k;
                    if ((0x79L <= ((+(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_473.sf0)))).xxxyyxxyxyyyxxyy, ((VECTOR(uint16_t, 4))(l_474.sc050)).xwxxxwxyxxxzwyww))).sb, (((((l_438 | (p_91 < (safe_sub_func_int8_t_s_s(p_91, (safe_div_func_int8_t_s_s((l_502 |= (safe_sub_func_int64_t_s_s(((void*)0 != l_237), ((!((*p_1835->g_103) ^ GROUP_DIVERGE(2, 1))) <= (~(((*l_485)--) || ((safe_div_func_int16_t_s_s((p_91 & (safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((p_1835->g_397.s0 = (safe_add_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_s((((l_257[4] = ((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), l_500)) , 0L)) >= p_91) , 0L), p_1835->g_77.y)) && l_501) , l_473.s2), l_435))) <= 0x32DEB9C0L), p_91)), l_473.sa))), 8UL)) == p_1835->g_455.x))))))), FAKE_DIVERGE(p_1835->group_0_offset, get_group_id(0), 10))))))) <= p_91) || (-6L)) , 4294967286UL) ^ p_1835->g_98))), (*l_117))) , p_91) >= p_1835->g_457.s5)) , 0x20L)))
                    { /* block id: 190 */
                        uint16_t l_511 = 65531UL;
                        l_500 |= (0x69D7L < ((*p_1835->g_121) | (0x084DD8D06C99E229L | ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(8UL, 0x13F3FB402EF1B334L)).yyxxxyxy)).even, ((VECTOR(uint64_t, 4))(p_1835->g_503.xyyy))))).yxzwzwyy, ((VECTOR(uint64_t, 2))(0xF5356E0A0F987797L, 0x3A65A9DCFC4073BFL)).xxyyyxyx))).s36, (uint64_t)p_1835->g_213))).xyyxxxxy)).s6)));
                        l_504 &= (*p_1835->g_121);
                        if ((*p_1835->g_121))
                            continue;
                        l_511 = (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_91, 0x7AL)), (safe_sub_func_int16_t_s_s((-2L), p_91))));
                    }
                    else
                    { /* block id: 195 */
                        int8_t **l_516 = &l_210[0];
                        int32_t l_521 = 0x34FB7211L;
                        l_521 |= (((-10L) == (p_1835->g_31.s6 > (safe_mod_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_s(0x61L, 5)) | 1L) > (0UL >= p_91)) , ((&l_210[0] != (p_1835->g_517 = l_516)) | (((safe_div_func_int32_t_s_s((*p_1835->g_121), (*p_1835->g_121))) || l_500) & 255UL))), 255UL)))) > p_1835->g_250.x);
                        if ((*p_92))
                            break;
                        p_1835->g_121 = &p_1835->g_335[1];
                        return l_522;
                    }
                    p_1835->g_397.s2 = (safe_mul_func_int16_t_s_s(p_91, (safe_mul_func_uint8_t_u_u(((*l_529) = (((p_1835->g_528.w = l_454.sb) , p_1835->g_421.s7) > l_385)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_530.s54)).xyxyyxyxxxxxxyxx)).sa))));
                    if ((safe_rshift_func_uint16_t_u_s((l_501 != (safe_add_func_uint8_t_u_u(l_500, (safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xF5L, 255UL)))).xxyx)))).zxyxzxxzzzywwzww, ((VECTOR(uint8_t, 2))(0x63L, 0xDCL)).yxxyyyyxyyyxxxyx, ((VECTOR(uint8_t, 16))((~(safe_div_func_int8_t_s_s(p_91, (*p_1835->g_518)))), (safe_mul_func_int8_t_s_s((*p_1835->g_518), (safe_lshift_func_int8_t_s_u(0x24L, (safe_add_func_int64_t_s_s(((*l_553) = ((((*l_485) = l_551) || ((-1L) & p_91)) , p_1835->g_457.s0)), l_554)))))), 5UL, ((VECTOR(uint8_t, 4))(255UL)), l_473.s7, p_1835->g_190.x, (*l_117), ((VECTOR(uint8_t, 4))(255UL)), 0xD0L, 255UL))))).s9, GROUP_DIVERGE(2, 1))), (*p_92))), 1L)) , l_555), p_91))))), p_1835->g_31.s2)))
                    { /* block id: 207 */
                        uint32_t **l_558 = &l_527[2][0][1];
                        int8_t *l_560 = (void*)0;
                        int32_t l_573 = 2L;
                        int32_t l_574[3][4] = {{1L,0x39F53F62L,7L,0x39F53F62L},{1L,0x39F53F62L,7L,0x39F53F62L},{1L,0x39F53F62L,7L,0x39F53F62L}};
                        VECTOR(int16_t, 16) l_582 = (VECTOR(int16_t, 16))(0x7C5BL, (VECTOR(int16_t, 4))(0x7C5BL, (VECTOR(int16_t, 2))(0x7C5BL, 0x731CL), 0x731CL), 0x731CL, 0x7C5BL, 0x731CL, (VECTOR(int16_t, 2))(0x7C5BL, 0x731CL), (VECTOR(int16_t, 2))(0x7C5BL, 0x731CL), 0x7C5BL, 0x731CL, 0x7C5BL, 0x731CL);
                        uint32_t *l_598 = (void*)0;
                        uint32_t *l_599 = &l_429;
                        uint64_t *l_614[8];
                        int i, j;
                        for (i = 0; i < 8; i++)
                            l_614[i] = &l_236;
                        l_574[1][3] &= (safe_mod_func_int16_t_s_s(((((((((*l_558) = p_1835->g_103) == p_92) || (!l_473.sa)) , l_559) == &p_1835->g_302[1][0]) == (((*p_1835->g_517) = l_210[0]) == l_560)) & (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((((((((!((safe_lshift_func_int8_t_s_s((p_91 ^ (l_436 = (l_500 ^= ((VECTOR(int8_t, 4))(p_1835->g_567.ywyz)).y))), (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_91, 0)), l_473.s8)))) <= l_572)) , (void*)0) != &p_1835->g_103) < p_1835->g_455.y) , p_91) >= FAKE_DIVERGE(p_1835->group_0_offset, get_group_id(0), 10)) && l_573) , l_438), p_91)), p_91))), p_91));
                        ++l_576;
                        l_504 = (p_1835->g_397.s8 | (safe_lshift_func_uint16_t_u_s(l_573, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_581.xx)).yxyy)).yyyyzyyw, ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(l_582.s69b78873)), (int16_t)(safe_mul_func_int16_t_s_s((p_1835->g_72.y = (p_91 > (safe_sub_func_int16_t_s_s(((((p_1835->g_302[1][0] = ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((9L | ((safe_add_func_uint16_t_u_u(((0xBFL & (safe_mod_func_int8_t_s_s(((**p_1835->g_517) = ((safe_mul_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((*l_227) = 0x12CAL), 12)), (((((0x65L && ((((*l_599) |= (p_92 == (p_1835->g_220.y , p_1835->g_103))) , p_91) & 0x5AL)) > l_600) & l_574[1][3]) ^ p_1835->g_209) != p_1835->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1835->tid, 104))]))) >= p_1835->g_220.w)), 246UL))) , p_91), l_500)) < 0xD900L)))), p_91)) < p_91)) , l_572) && p_91) & l_346), 0x5BB7L)))), p_1835->g_179.s3))))), ((VECTOR(int16_t, 8))((-2L)))))).s4562272512156506, ((VECTOR(int16_t, 16))((-1L))), ((VECTOR(int16_t, 16))(0x5D61L))))).lo))).s0)));
                        l_504 = ((((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(0x1DL, 0x50L)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_603.ywzzwwyw)).s47))))), ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(l_604.xy)), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(l_605.wwzzzyyx)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-9L), 8L)).xxyy)).zxyzzyxz))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-9L), 3L)))).xyxx)).xwwzzxxz))).s11, ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_1835->g_606.ww)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0L, ((((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 16))(0x88L, 1UL, ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(0x6EL, 0x0AL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_1835->g_607.sa71570fa)).s05)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_608.scf)), 0xEBL, 0x18L)).y, 252UL, 0x3EL, 247UL)), ((VECTOR(uint8_t, 8))(255UL, 255UL, ((VECTOR(uint8_t, 4))(((safe_mul_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s(l_555, 11)) && ((VECTOR(uint32_t, 2))(l_613.xx)).odd), ((void*)0 != l_614[5]))) || l_439), 1UL, 0xC5L, 0x8FL)), 9UL, 7UL)))).lo)).hi, ((VECTOR(uint8_t, 8))((!((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_615.sc7b269cd)), 1UL, ((VECTOR(uint8_t, 2))(l_616.s27)), (safe_sub_func_int64_t_s_s((GROUP_DIVERGE(0, 1) ^ (0xADL || (((((l_604.y , 0xF674455BE63FC6ECL) >= (safe_add_func_uint8_t_u_u(((+((VECTOR(int16_t, 8))(l_621.s61400562)).s7) & (0x55007EDFL >= (p_92 == p_1835->g_121))), (*p_1835->g_518)))) , 0x06L) >= 0x54L) && p_1835->g_132))), FAKE_DIVERGE(p_1835->group_1_offset, get_group_id(1), 10))), 2UL, 8UL, 1UL, 247UL)), ((VECTOR(uint8_t, 16))(0x94L))))))), ((VECTOR(uint8_t, 16))(0UL))))).hi)).s7661122355000215)).hi)).s1), ((VECTOR(uint8_t, 4))(0x04L)), ((VECTOR(uint8_t, 2))(251UL)), 0xB7L)).lo))), (uint8_t)p_91))), p_1835->g_335[1], ((VECTOR(uint8_t, 2))(1UL)), 255UL, 253UL, 1UL, 253UL, 0x80L, 0UL, 255UL)).s28, ((VECTOR(uint8_t, 2))(0x95L))))), 0x45L, 246UL)).lo, (uint8_t)p_1835->g_606.y))).odd , 5UL) , (-4L)), 0x5BL, 0L)), (-1L), ((VECTOR(int8_t, 2))(3L)), (-2L))).s5, (-6L), (*p_1835->g_518), ((VECTOR(int8_t, 2))(0L)), 0L, (-2L), 9L, l_582.s5, 3L, 0L, l_501, 1L, (-3L))).s65, ((VECTOR(int8_t, 2))(0x50L))))).yxxyxxyxyyyxyyyy, ((VECTOR(int8_t, 16))(0x29L))))).even, ((VECTOR(int8_t, 8))(0x63L))))).s34)))))).yyyy, ((VECTOR(int8_t, 4))(0x0EL))))).xxxzyywz, ((VECTOR(int8_t, 8))(0x5EL))))).even))), ((VECTOR(int8_t, 4))(6L)), l_603.y, l_613.y, p_91, 2L, 0x47L, (-1L))).lo)).s5, (**p_1835->g_517))) != l_582.sc) > p_91) && l_582.sa);
                    }
                    else
                    { /* block id: 221 */
                        int32_t *l_622 = (void*)0;
                        int32_t l_634 = 3L;
                        int32_t l_635 = 0x1CF879DBL;
                        int32_t l_637 = 1L;
                        int32_t l_638 = (-6L);
                        int32_t l_639 = 0x73F6FAB9L;
                        int32_t l_641 = 0x0A592837L;
                        int32_t l_642 = 0x1F2A6B75L;
                        int32_t l_643 = 0x19E063A4L;
                        int32_t l_644 = 2L;
                        int32_t l_645 = 0L;
                        uint32_t l_649 = 0xCA3B67D5L;
                        l_623 = l_622;
                        l_628 = ((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((void*)0 != &p_1835->g_70), l_628)), (((p_91 , (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1835->g_629.s7642)).wyywxwzx)).s0 ^ ((VECTOR(uint16_t, 2))(p_1835->g_630.s5e)).even)) ^ (safe_mul_func_int8_t_s_s((((0x3E3047B84F1491A5L && p_91) < (p_1835->g_518 == ((+4294967293UL) , p_1835->g_518))) , (*p_1835->g_518)), 4L))) == 4L))) || (*l_117));
                        l_649++;
                    }
                    l_500 = ((VECTOR(int32_t, 2))(0x2A832D99L, 0x4759F0B5L)).odd;
                }
            }
        }
        else
        { /* block id: 229 */
            int32_t *l_652 = (void*)0;
            int32_t l_706 = 0L;
            int32_t l_707 = 1L;
            int32_t l_708 = (-1L);
            VECTOR(int32_t, 16) l_710 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
            VECTOR(int8_t, 4) l_738 = (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x42L), 0x42L);
            uint32_t *l_782 = &l_429;
            uint32_t **l_781 = &l_782;
            int i;
            l_652 = &p_1835->g_335[1];
            l_655 = ((p_91 , (safe_div_func_int64_t_s_s(4L, p_91))) != (((void*)0 != &p_1835->g_335[8]) > (p_91 > p_1835->g_528.w)));
            for (p_1835->g_151 = (-18); (p_1835->g_151 > 5); ++p_1835->g_151)
            { /* block id: 234 */
                VECTOR(uint8_t, 16) l_672 = (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0xF3L), 0xF3L), 0xF3L, 2UL, 0xF3L, (VECTOR(uint8_t, 2))(2UL, 0xF3L), (VECTOR(uint8_t, 2))(2UL, 0xF3L), 2UL, 0xF3L, 2UL, 0xF3L);
                VECTOR(uint64_t, 16) l_678 = (VECTOR(uint64_t, 16))(0x96FE8318BDE28141L, (VECTOR(uint64_t, 4))(0x96FE8318BDE28141L, (VECTOR(uint64_t, 2))(0x96FE8318BDE28141L, 0xFE4BF7B04FE396E2L), 0xFE4BF7B04FE396E2L), 0xFE4BF7B04FE396E2L, 0x96FE8318BDE28141L, 0xFE4BF7B04FE396E2L, (VECTOR(uint64_t, 2))(0x96FE8318BDE28141L, 0xFE4BF7B04FE396E2L), (VECTOR(uint64_t, 2))(0x96FE8318BDE28141L, 0xFE4BF7B04FE396E2L), 0x96FE8318BDE28141L, 0xFE4BF7B04FE396E2L, 0x96FE8318BDE28141L, 0xFE4BF7B04FE396E2L);
                int32_t l_704 = 0x0D3AC555L;
                int32_t l_712 = 0x770F4798L;
                int32_t l_713 = 0L;
                int32_t l_714 = 0L;
                int64_t l_716 = 1L;
                int32_t l_721[3][2][10] = {{{9L,0x7FC5D580L,(-1L),0L,(-1L),0x7FC5D580L,9L,(-1L),(-1L),0x128344D0L},{9L,0x7FC5D580L,(-1L),0L,(-1L),0x7FC5D580L,9L,(-1L),(-1L),0x128344D0L}},{{9L,0x7FC5D580L,(-1L),0L,(-1L),0x7FC5D580L,9L,(-1L),(-1L),0x128344D0L},{9L,0x7FC5D580L,(-1L),0L,(-1L),0x7FC5D580L,9L,(-1L),(-1L),0x128344D0L}},{{9L,0x7FC5D580L,(-1L),0L,(-1L),0x7FC5D580L,9L,(-1L),(-1L),0x128344D0L},{9L,0x7FC5D580L,(-1L),0L,(-1L),0x7FC5D580L,9L,(-1L),(-1L),0x128344D0L}}};
                uint64_t *l_733 = (void*)0;
                uint64_t *l_734 = &p_1835->g_132;
                uint8_t *l_735 = &l_342[3][5][3];
                int i, j, k;
                for (p_1835->g_7 = 28; (p_1835->g_7 >= 44); p_1835->g_7 = safe_add_func_uint32_t_u_u(p_1835->g_7, 8))
                { /* block id: 237 */
                    uint32_t l_686 = 4294967295UL;
                    uint64_t l_699 = 0xD295F4324A760982L;
                    int32_t l_705 = 0x2C1D6ABEL;
                    int32_t l_711 = 0x52C4DC5BL;
                    int32_t l_717[2][9] = {{0x40B2E66AL,0x40B2E66AL,0x40B2E66AL,0x40B2E66AL,0x40B2E66AL,0x40B2E66AL,0x40B2E66AL,0x40B2E66AL,0x40B2E66AL},{0x40B2E66AL,0x40B2E66AL,0x40B2E66AL,0x40B2E66AL,0x40B2E66AL,0x40B2E66AL,0x40B2E66AL,0x40B2E66AL,0x40B2E66AL}};
                    int64_t l_718[5];
                    int32_t l_719 = (-1L);
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_718[i] = 0x3517AB2306208BB2L;
                    for (p_1835->g_209 = 23; (p_1835->g_209 >= 22); p_1835->g_209 = safe_sub_func_int8_t_s_s(p_1835->g_209, 1))
                    { /* block id: 240 */
                        uint8_t l_662 = 0xD5L;
                        uint32_t l_665 = 4294967291UL;
                        uint32_t *l_673 = &l_429;
                        int32_t l_681 = 1L;
                        int64_t *l_683[8] = {&l_655,&l_655,&l_655,&l_655,&l_655,&l_655,&l_655,&l_655};
                        int16_t **l_700 = &l_226;
                        int32_t l_701 = (-9L);
                        int i;
                        l_662--;
                        --l_665;
                        if ((*p_92))
                            continue;
                        p_1835->g_396.s6 &= (l_701 &= (((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65534UL, 0xACE3L)).xyxy)).wyzwyzxxxyyxwwxw, (uint16_t)((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(4UL, 2UL, 1UL, (safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), 1)), ((VECTOR(uint8_t, 4))(l_672.s8b40)))).s4, p_91)) | (((VECTOR(uint32_t, 16))(0x5ACB2C67L, 0x5A99EF7BL, 4294967295UL, 0x120DA5A8L, ((VECTOR(uint32_t, 8))(p_1835->g_421.sc, ((!((*l_673) &= p_91)) , ((((safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((((VECTOR(uint64_t, 4))(l_678.sa33d)).w , ((l_686 = (safe_sub_func_uint8_t_u_u((l_681 & (p_1835->g_340 = (p_1835->g_comm_values[p_1835->tid] = ((*l_623) = (((VECTOR(uint8_t, 4))(l_682.sb549)).z | l_665))))), (((VECTOR(uint8_t, 4))(p_1835->g_684.s3034)).y >= ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(p_1835->g_685.xyxy)).even, ((VECTOR(int8_t, 2))(0x5AL, 0L))))).lo)))) , (l_686 < (((255UL < (((safe_rshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint32_t_u_u(4294967295UL, (safe_add_func_int64_t_s_s(0L, (*l_623))))) ^ p_1835->g_comm_values[p_1835->tid]), l_699)), ((VECTOR(int64_t, 2))((-6L))), 5L)).xywywyzzwyywzwyz, ((VECTOR(int64_t, 16))(0x1C615C18AB4A665EL)), ((VECTOR(int64_t, 16))((-5L)))))), ((VECTOR(int64_t, 16))(5L))))).hi)).s3, 0x4C030BD6C20CFC8EL)) , p_91), p_91)) , 8L), 0)) < l_678.s6) ^ p_91)) , l_700) == (void*)0)))), l_672.sd)), (*l_117))) & (*p_1835->g_518)) == (*l_652)) <= l_699)), ((VECTOR(uint32_t, 4))(4294967295UL)), 0x43A90589L, 0x69837219L)), ((VECTOR(uint32_t, 2))(0x3826C4ADL)), 0xECA94F45L, 0xB67D5935L)).sf >= p_1835->g_685.x)), (uint16_t)GROUP_DIVERGE(2, 1)))))).sec)).xyxx, ((VECTOR(uint16_t, 4))(6UL))))).w < 1UL));
                    }
                    for (l_236 = (-16); (l_236 >= 55); l_236++)
                    { /* block id: 254 */
                        int8_t l_709 = 0x41L;
                        int32_t l_715 = 1L;
                        int32_t l_720[10][2][6] = {{{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)},{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)}},{{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)},{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)}},{{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)},{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)}},{{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)},{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)}},{{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)},{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)}},{{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)},{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)}},{{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)},{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)}},{{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)},{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)}},{{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)},{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)}},{{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)},{(-6L),0x48922BB9L,0x247381B2L,0x247381B2L,0x48922BB9L,(-6L)}}};
                        int i, j, k;
                        --l_722;
                    }
                }
                l_713 &= (safe_rshift_func_int16_t_s_u((*l_623), (~(safe_mul_func_uint16_t_u_u(((((0x7918F656L > 0UL) , (((((*p_1835->g_518) & ((0x6E24L != (p_1835->g_209++)) != (((*l_734) &= 0x9963B57C27736E98L) == ((**p_1835->g_517) & (((*p_92) | ((((*l_735)++) , (((((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(l_738.ywzywzzz)), ((VECTOR(int8_t, 2))(1L, 0x25L)).xxxyyxxx))), 0x5FL, ((*l_652) > p_1835->g_335[4]), ((VECTOR(int8_t, 2))((-8L))), 0x4FL, ((VECTOR(int8_t, 2))(1L)), 0x66L)))).s6d))))), ((VECTOR(uint8_t, 2))(0x2DL))))).hi ^ GROUP_DIVERGE(1, 1)) && p_91) ^ (*l_652))) | (-1L))) , (*p_1835->g_518)))))) , p_1835->g_335[1]) <= p_1835->g_228.s7) , (*l_652))) | (*p_1835->g_121)) , 65535UL), p_91)))));
                if ((atomic_inc(&p_1835->g_atomic_input[97 * get_linear_group_id() + 40]) == 3))
                { /* block id: 263 */
                    int32_t l_739[2][6][7] = {{{0x4F61BD6FL,0x5ABFA973L,0x46EDFDEFL,0x166834C3L,0L,0x29A1A3CEL,0x29A1A3CEL},{0x4F61BD6FL,0x5ABFA973L,0x46EDFDEFL,0x166834C3L,0L,0x29A1A3CEL,0x29A1A3CEL},{0x4F61BD6FL,0x5ABFA973L,0x46EDFDEFL,0x166834C3L,0L,0x29A1A3CEL,0x29A1A3CEL},{0x4F61BD6FL,0x5ABFA973L,0x46EDFDEFL,0x166834C3L,0L,0x29A1A3CEL,0x29A1A3CEL},{0x4F61BD6FL,0x5ABFA973L,0x46EDFDEFL,0x166834C3L,0L,0x29A1A3CEL,0x29A1A3CEL},{0x4F61BD6FL,0x5ABFA973L,0x46EDFDEFL,0x166834C3L,0L,0x29A1A3CEL,0x29A1A3CEL}},{{0x4F61BD6FL,0x5ABFA973L,0x46EDFDEFL,0x166834C3L,0L,0x29A1A3CEL,0x29A1A3CEL},{0x4F61BD6FL,0x5ABFA973L,0x46EDFDEFL,0x166834C3L,0L,0x29A1A3CEL,0x29A1A3CEL},{0x4F61BD6FL,0x5ABFA973L,0x46EDFDEFL,0x166834C3L,0L,0x29A1A3CEL,0x29A1A3CEL},{0x4F61BD6FL,0x5ABFA973L,0x46EDFDEFL,0x166834C3L,0L,0x29A1A3CEL,0x29A1A3CEL},{0x4F61BD6FL,0x5ABFA973L,0x46EDFDEFL,0x166834C3L,0L,0x29A1A3CEL,0x29A1A3CEL},{0x4F61BD6FL,0x5ABFA973L,0x46EDFDEFL,0x166834C3L,0L,0x29A1A3CEL,0x29A1A3CEL}}};
                    int32_t *l_745 = &l_739[1][4][3];
                    int32_t *l_746 = &l_739[0][3][0];
                    int32_t l_747[9];
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_747[i] = 0x01B0C48EL;
                    for (l_739[1][0][5] = 0; (l_739[1][0][5] >= (-23)); --l_739[1][0][5])
                    { /* block id: 266 */
                        VECTOR(uint32_t, 4) l_742 = (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0xE35A1090L), 0xE35A1090L);
                        int i;
                        l_742.z++;
                    }
                    l_746 = l_745;
                    if (l_747[4])
                    { /* block id: 270 */
                        int64_t l_748[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_748[i] = 0x74B311A37F443D8EL;
                        (*l_746) &= l_748[0];
                    }
                    else
                    { /* block id: 272 */
                        uint16_t l_749 = 0xBD84L;
                        VECTOR(uint32_t, 8) l_752 = (VECTOR(uint32_t, 8))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0x3345752CL), 0x3345752CL), 0x3345752CL, 4294967293UL, 0x3345752CL);
                        int32_t l_753[9][6] = {{0x2EE2A8B8L,0x64FF816EL,(-6L),0x64FF816EL,0x2EE2A8B8L,0x2EE2A8B8L},{0x2EE2A8B8L,0x64FF816EL,(-6L),0x64FF816EL,0x2EE2A8B8L,0x2EE2A8B8L},{0x2EE2A8B8L,0x64FF816EL,(-6L),0x64FF816EL,0x2EE2A8B8L,0x2EE2A8B8L},{0x2EE2A8B8L,0x64FF816EL,(-6L),0x64FF816EL,0x2EE2A8B8L,0x2EE2A8B8L},{0x2EE2A8B8L,0x64FF816EL,(-6L),0x64FF816EL,0x2EE2A8B8L,0x2EE2A8B8L},{0x2EE2A8B8L,0x64FF816EL,(-6L),0x64FF816EL,0x2EE2A8B8L,0x2EE2A8B8L},{0x2EE2A8B8L,0x64FF816EL,(-6L),0x64FF816EL,0x2EE2A8B8L,0x2EE2A8B8L},{0x2EE2A8B8L,0x64FF816EL,(-6L),0x64FF816EL,0x2EE2A8B8L,0x2EE2A8B8L},{0x2EE2A8B8L,0x64FF816EL,(-6L),0x64FF816EL,0x2EE2A8B8L,0x2EE2A8B8L}};
                        VECTOR(int8_t, 4) l_754 = (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x3AL), 0x3AL);
                        VECTOR(int8_t, 16) l_755 = (VECTOR(int8_t, 16))(0x4EL, (VECTOR(int8_t, 4))(0x4EL, (VECTOR(int8_t, 2))(0x4EL, 0x4DL), 0x4DL), 0x4DL, 0x4EL, 0x4DL, (VECTOR(int8_t, 2))(0x4EL, 0x4DL), (VECTOR(int8_t, 2))(0x4EL, 0x4DL), 0x4EL, 0x4DL, 0x4EL, 0x4DL);
                        VECTOR(int8_t, 16) l_756 = (VECTOR(int8_t, 16))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x74L), 0x74L), 0x74L, (-8L), 0x74L, (VECTOR(int8_t, 2))((-8L), 0x74L), (VECTOR(int8_t, 2))((-8L), 0x74L), (-8L), 0x74L, (-8L), 0x74L);
                        VECTOR(int8_t, 16) l_757 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x45L), 0x45L), 0x45L, 0L, 0x45L, (VECTOR(int8_t, 2))(0L, 0x45L), (VECTOR(int8_t, 2))(0L, 0x45L), 0L, 0x45L, 0L, 0x45L);
                        VECTOR(int8_t, 4) l_758 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x51L), 0x51L);
                        VECTOR(int8_t, 2) l_759 = (VECTOR(int8_t, 2))(0x77L, 1L);
                        VECTOR(int8_t, 4) l_760 = (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, 0x58L), 0x58L);
                        int32_t l_761[2];
                        VECTOR(int8_t, 8) l_762 = (VECTOR(int8_t, 8))(0x5BL, (VECTOR(int8_t, 4))(0x5BL, (VECTOR(int8_t, 2))(0x5BL, 0x24L), 0x24L), 0x24L, 0x5BL, 0x24L);
                        uint16_t l_763 = 65527UL;
                        int16_t l_764 = 0x79A3L;
                        int16_t l_765 = 0x6AFDL;
                        VECTOR(int8_t, 16) l_766 = (VECTOR(int8_t, 16))(0x2FL, (VECTOR(int8_t, 4))(0x2FL, (VECTOR(int8_t, 2))(0x2FL, 0x2CL), 0x2CL), 0x2CL, 0x2FL, 0x2CL, (VECTOR(int8_t, 2))(0x2FL, 0x2CL), (VECTOR(int8_t, 2))(0x2FL, 0x2CL), 0x2FL, 0x2CL, 0x2FL, 0x2CL);
                        VECTOR(int8_t, 8) l_767 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x20L), 0x20L), 0x20L, 7L, 0x20L);
                        uint16_t l_768 = 6UL;
                        int8_t l_769 = 0x28L;
                        uint16_t l_770 = 0xA5B6L;
                        uint8_t l_771 = 1UL;
                        VECTOR(int64_t, 16) l_772 = (VECTOR(int64_t, 16))(0x7E04DF21E82ED8E0L, (VECTOR(int64_t, 4))(0x7E04DF21E82ED8E0L, (VECTOR(int64_t, 2))(0x7E04DF21E82ED8E0L, (-4L)), (-4L)), (-4L), 0x7E04DF21E82ED8E0L, (-4L), (VECTOR(int64_t, 2))(0x7E04DF21E82ED8E0L, (-4L)), (VECTOR(int64_t, 2))(0x7E04DF21E82ED8E0L, (-4L)), 0x7E04DF21E82ED8E0L, (-4L), 0x7E04DF21E82ED8E0L, (-4L));
                        VECTOR(int64_t, 8) l_773 = (VECTOR(int64_t, 8))(0x12BF7EDEAFABE143L, (VECTOR(int64_t, 4))(0x12BF7EDEAFABE143L, (VECTOR(int64_t, 2))(0x12BF7EDEAFABE143L, 0x40BC33A6548820A4L), 0x40BC33A6548820A4L), 0x40BC33A6548820A4L, 0x12BF7EDEAFABE143L, 0x40BC33A6548820A4L);
                        uint32_t l_774 = 0x2DB16A14L;
                        int16_t l_775[2];
                        uint32_t l_776[9];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_761[i] = 1L;
                        for (i = 0; i < 2; i++)
                            l_775[i] = (-2L);
                        for (i = 0; i < 9; i++)
                            l_776[i] = 0xA27B4E79L;
                        --l_749;
                        l_753[0][3] &= l_752.s4;
                        (*l_745) |= (((l_775[1] |= ((l_769 = (l_768 = ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_754.wyyx)), 0x59L, 1L, (-1L), 0x64L, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_755.saab8)).zzzywzyzzzzwzzwz)).s5d, ((VECTOR(int8_t, 16))(l_756.s6fca66b23940474c)).s84, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(l_757.sc4cf0901)).s06, ((VECTOR(int8_t, 4))(l_758.xwwz)).even))), 0x51L, 0x37L, 0x34L, 0x43L, 1L, (-9L), ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(l_759.yyyxyxyx)).s72, ((VECTOR(int8_t, 8))(l_760.yyzywzxz)).s24, ((VECTOR(int8_t, 8))(4L, l_761[0], ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_762.s53)), 0x3BL, (-1L))), 5L, 7L)).s53))), l_763, (-1L), l_764, l_765, 0x4DL, (-1L))).sd966, ((VECTOR(int8_t, 2))(l_766.saa)).xxyx, ((VECTOR(int8_t, 2))(l_767.s33)).xxxy))).odd))).xxyyxyxx)))), (int8_t)0L))))).se)) , ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_770, l_771, 0L, ((VECTOR(int64_t, 2))(1L, 0x0DB4AE098B4D60BCL)), 0x4E8B199603866441L, 1L, 0L)).s1, ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(7L, 8L)), 0x58350A405606B7F7L, ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_772.s64ffc93ea00bdf4f)))).s4e56, ((VECTOR(int64_t, 2))(l_773.s22)).yyyx))), 0x087C07C9EA152B60L, ((VECTOR(int64_t, 4))(0x1358B1A5B099D520L)), (-2L), l_774, 0x6C8B1582DBC3FD37L, (-3L))).s6f06)))), 1L, ((VECTOR(int64_t, 2))(0x3215B9C956E81C9EL)), 0x159552B38CF1D4E4L)).hi, ((VECTOR(int64_t, 4))(0x152A52E6E364741BL))))), ((VECTOR(int64_t, 2))(0x6F80E0CCCA71E0ADL)), 1L)).s14))).odd)) , 0x3153L) , l_776[2]);
                    }
                    unsigned int result = 0;
                    int l_739_i0, l_739_i1, l_739_i2;
                    for (l_739_i0 = 0; l_739_i0 < 2; l_739_i0++) {
                        for (l_739_i1 = 0; l_739_i1 < 6; l_739_i1++) {
                            for (l_739_i2 = 0; l_739_i2 < 7; l_739_i2++) {
                                result += l_739[l_739_i0][l_739_i1][l_739_i2];
                            }
                        }
                    }
                    int l_747_i0;
                    for (l_747_i0 = 0; l_747_i0 < 9; l_747_i0++) {
                        result += l_747[l_747_i0];
                    }
                    atomic_add(&p_1835->g_special_values[97 * get_linear_group_id() + 40], result);
                }
                else
                { /* block id: 280 */
                    (1 + 1);
                }
            }
            (*l_623) = (safe_div_func_int32_t_s_s(0x40CBB2CBL, ((safe_lshift_func_int16_t_s_u(((*l_227) &= (&p_91 == ((*l_781) = p_1835->g_121))), 4)) ^ ((*l_652) || p_1835->g_302[1][0]))));
        }
    }
    else
    { /* block id: 288 */
        uint64_t l_783 = 0UL;
        int32_t l_787 = 0L;
        int32_t l_788 = 0x09D513C1L;
        uint32_t ***l_790[5];
        int i;
        for (i = 0; i < 5; i++)
            l_790[i] = &l_789;
        l_783 |= 0x75364EF5L;
        l_788 = (l_787 = (((VECTOR(int16_t, 16))(l_784.seaae8c2fa0b1e232)).se >= (GROUP_DIVERGE(2, 1) == ((*l_235) = (safe_div_func_int64_t_s_s(p_91, ((VECTOR(int64_t, 2))(0x1A2D0D442FECFDA1L, 0x14419D923B6B3BC7L)).odd))))));
        l_791 = (l_789 = l_789);
    }
    p_1835->g_397.s6 &= l_792;
    return &p_1835->g_70;
}


/* ------------------------------------------ */
/* 
 * reads : p_1835->g_104
 * writes: p_1835->g_103 p_1835->g_104
 */
uint64_t  func_93(int16_t * p_94, uint64_t  p_95, struct S2 * p_1835)
{ /* block id: 19 */
    int32_t *l_99 = (void*)0;
    int32_t **l_100 = (void*)0;
    int32_t **l_101 = (void*)0;
    int32_t **l_102 = (void*)0;
    int32_t *l_105[1][3];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_105[i][j] = (void*)0;
    }
    p_1835->g_104 |= (&p_1835->g_3 == (p_1835->g_103 = (l_99 = l_99)));
    if ((atomic_inc(&p_1835->l_atomic_input[90]) == 0))
    { /* block id: 24 */
        int32_t *l_106 = (void*)0;
        int32_t l_108 = 1L;
        int32_t *l_107[8] = {&l_108,&l_108,&l_108,&l_108,&l_108,&l_108,&l_108,&l_108};
        int32_t *l_109 = (void*)0;
        uint64_t l_110 = 0xF5B1C4912ACC334FL;
        int64_t l_111 = 0x6EE1C1009BDDAB04L;
        uint32_t l_112 = 0UL;
        int32_t *l_113 = &l_108;
        int32_t *l_114[2][4] = {{&l_108,&l_108,&l_108,&l_108},{&l_108,&l_108,&l_108,&l_108}};
        int8_t l_115 = 0x41L;
        uint8_t l_116[8][1][9] = {{{0UL,0x30L,251UL,0xBFL,9UL,0xBFL,251UL,0x30L,0UL}},{{0UL,0x30L,251UL,0xBFL,9UL,0xBFL,251UL,0x30L,0UL}},{{0UL,0x30L,251UL,0xBFL,9UL,0xBFL,251UL,0x30L,0UL}},{{0UL,0x30L,251UL,0xBFL,9UL,0xBFL,251UL,0x30L,0UL}},{{0UL,0x30L,251UL,0xBFL,9UL,0xBFL,251UL,0x30L,0UL}},{{0UL,0x30L,251UL,0xBFL,9UL,0xBFL,251UL,0x30L,0UL}},{{0UL,0x30L,251UL,0xBFL,9UL,0xBFL,251UL,0x30L,0UL}},{{0UL,0x30L,251UL,0xBFL,9UL,0xBFL,251UL,0x30L,0UL}}};
        int i, j, k;
        l_109 = (l_107[0] = l_106);
        l_114[1][1] = (((l_111 = l_110) , l_112) , l_113);
        l_116[2][0][8] = l_115;
        unsigned int result = 0;
        result += l_108;
        result += l_110;
        result += l_111;
        result += l_112;
        result += l_115;
        int l_116_i0, l_116_i1, l_116_i2;
        for (l_116_i0 = 0; l_116_i0 < 8; l_116_i0++) {
            for (l_116_i1 = 0; l_116_i1 < 1; l_116_i1++) {
                for (l_116_i2 = 0; l_116_i2 < 9; l_116_i2++) {
                    result += l_116[l_116_i0][l_116_i1][l_116_i2];
                }
            }
        }
        atomic_add(&p_1835->l_special_values[90], result);
    }
    else
    { /* block id: 30 */
        (1 + 1);
    }
    return p_95;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[97];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 97; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[97];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 97; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[104];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 104; i++)
            l_comm_values[i] = 1;
    struct S2 c_1836;
    struct S2* p_1835 = &c_1836;
    struct S2 c_1837 = {
        1L, // p_1835->g_3
        3UL, // p_1835->g_7
        (VECTOR(uint8_t, 2))(0x84L, 1UL), // p_1835->g_30
        (VECTOR(uint8_t, 8))(0x5BL, (VECTOR(uint8_t, 4))(0x5BL, (VECTOR(uint8_t, 2))(0x5BL, 0x62L), 0x62L), 0x62L, 0x5BL, 0x62L), // p_1835->g_31
        (VECTOR(int8_t, 8))(0x42L, (VECTOR(int8_t, 4))(0x42L, (VECTOR(int8_t, 2))(0x42L, (-10L)), (-10L)), (-10L), 0x42L, (-10L)), // p_1835->g_64
        {0x50L,0x5CL,0x50L,0x50L,0x5CL,0x50L}, // p_1835->g_66
        (-4L), // p_1835->g_70
        (VECTOR(int16_t, 2))(0x678CL, 0x2336L), // p_1835->g_72
        (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x6A1BL), 0x6A1BL), // p_1835->g_77
        0x18L, // p_1835->g_86
        0x1FL, // p_1835->g_98
        0x6A743E71L, // p_1835->g_104
        &p_1835->g_104, // p_1835->g_103
        &p_1835->g_104, // p_1835->g_121
        18446744073709551615UL, // p_1835->g_132
        (void*)0, // p_1835->g_144
        {0x7892DAB1L,0x7892DAB1L,0x7892DAB1L,0x7892DAB1L,0x7892DAB1L,0x7892DAB1L,0x7892DAB1L,0x7892DAB1L}, // p_1835->g_149
        (-2L), // p_1835->g_151
        (VECTOR(uint64_t, 8))(0x7A8018BE0E5867A2L, (VECTOR(uint64_t, 4))(0x7A8018BE0E5867A2L, (VECTOR(uint64_t, 2))(0x7A8018BE0E5867A2L, 1UL), 1UL), 1UL, 0x7A8018BE0E5867A2L, 1UL), // p_1835->g_179
        (VECTOR(uint16_t, 4))(0xC9B1L, (VECTOR(uint16_t, 2))(0xC9B1L, 0x3434L), 0x3434L), // p_1835->g_188
        (VECTOR(uint32_t, 2))(0xBC4476C7L, 0x9EEED96AL), // p_1835->g_190
        0x1429L, // p_1835->g_209
        0x6CEED222L, // p_1835->g_213
        {0x2A86C697L}, // p_1835->g_217
        {0x726B2BAEL}, // p_1835->g_219
        (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-1L)), (-1L)), // p_1835->g_220
        (VECTOR(uint64_t, 16))(0x8C6111A7FCE78FCAL, (VECTOR(uint64_t, 4))(0x8C6111A7FCE78FCAL, (VECTOR(uint64_t, 2))(0x8C6111A7FCE78FCAL, 3UL), 3UL), 3UL, 0x8C6111A7FCE78FCAL, 3UL, (VECTOR(uint64_t, 2))(0x8C6111A7FCE78FCAL, 3UL), (VECTOR(uint64_t, 2))(0x8C6111A7FCE78FCAL, 3UL), 0x8C6111A7FCE78FCAL, 3UL, 0x8C6111A7FCE78FCAL, 3UL), // p_1835->g_228
        (void*)0, // p_1835->g_234
        (VECTOR(uint8_t, 2))(0x82L, 1UL), // p_1835->g_250
        {0xFD14C5FFL}, // p_1835->g_261
        {{1UL},{1UL},{1UL},{1UL}}, // p_1835->g_302
        0x6AL, // p_1835->g_314
        {{0xD2EF7A4EL},{0xD2EF7A4EL},{0xD2EF7A4EL},{0xD2EF7A4EL},{0xD2EF7A4EL},{0xD2EF7A4EL}}, // p_1835->g_317
        {&p_1835->g_317[1],&p_1835->g_317[1]}, // p_1835->g_316
        &p_1835->g_316[0], // p_1835->g_315
        {0x22298363L,0x22298363L,0x22298363L,0x22298363L,0x22298363L,0x22298363L,0x22298363L,0x22298363L,0x22298363L,0x22298363L}, // p_1835->g_335
        (-1L), // p_1835->g_340
        (void*)0, // p_1835->g_361
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L), // p_1835->g_396
        (VECTOR(int32_t, 16))(0x4F3524B3L, (VECTOR(int32_t, 4))(0x4F3524B3L, (VECTOR(int32_t, 2))(0x4F3524B3L, (-2L)), (-2L)), (-2L), 0x4F3524B3L, (-2L), (VECTOR(int32_t, 2))(0x4F3524B3L, (-2L)), (VECTOR(int32_t, 2))(0x4F3524B3L, (-2L)), 0x4F3524B3L, (-2L), 0x4F3524B3L, (-2L)), // p_1835->g_397
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 3UL), 3UL), // p_1835->g_402
        (VECTOR(int32_t, 16))(0x13F6A3BCL, (VECTOR(int32_t, 4))(0x13F6A3BCL, (VECTOR(int32_t, 2))(0x13F6A3BCL, 0x5D9E9D7CL), 0x5D9E9D7CL), 0x5D9E9D7CL, 0x13F6A3BCL, 0x5D9E9D7CL, (VECTOR(int32_t, 2))(0x13F6A3BCL, 0x5D9E9D7CL), (VECTOR(int32_t, 2))(0x13F6A3BCL, 0x5D9E9D7CL), 0x13F6A3BCL, 0x5D9E9D7CL, 0x13F6A3BCL, 0x5D9E9D7CL), // p_1835->g_421
        (VECTOR(int8_t, 2))(0x16L, (-2L)), // p_1835->g_455
        (VECTOR(int8_t, 8))(0x0BL, (VECTOR(int8_t, 4))(0x0BL, (VECTOR(int8_t, 2))(0x0BL, (-1L)), (-1L)), (-1L), 0x0BL, (-1L)), // p_1835->g_457
        {0xDF29CADAL}, // p_1835->g_461
        {4294967295UL}, // p_1835->g_463
        &p_1835->g_463, // p_1835->g_462
        (VECTOR(uint64_t, 2))(0UL, 0x22C9B9D7CA3E4B44L), // p_1835->g_503
        &p_1835->g_314, // p_1835->g_518
        &p_1835->g_518, // p_1835->g_517
        (VECTOR(uint32_t, 4))(0xB83D421FL, (VECTOR(uint32_t, 2))(0xB83D421FL, 1UL), 1UL), // p_1835->g_528
        (VECTOR(int8_t, 4))(0x01L, (VECTOR(int8_t, 2))(0x01L, 0x27L), 0x27L), // p_1835->g_567
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x11L), 0x11L), // p_1835->g_606
        (VECTOR(uint8_t, 16))(0xE3L, (VECTOR(uint8_t, 4))(0xE3L, (VECTOR(uint8_t, 2))(0xE3L, 0x30L), 0x30L), 0x30L, 0xE3L, 0x30L, (VECTOR(uint8_t, 2))(0xE3L, 0x30L), (VECTOR(uint8_t, 2))(0xE3L, 0x30L), 0xE3L, 0x30L, 0xE3L, 0x30L), // p_1835->g_607
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L), // p_1835->g_629
        (VECTOR(uint16_t, 16))(0x621CL, (VECTOR(uint16_t, 4))(0x621CL, (VECTOR(uint16_t, 2))(0x621CL, 65526UL), 65526UL), 65526UL, 0x621CL, 65526UL, (VECTOR(uint16_t, 2))(0x621CL, 65526UL), (VECTOR(uint16_t, 2))(0x621CL, 65526UL), 0x621CL, 65526UL, 0x621CL, 65526UL), // p_1835->g_630
        (VECTOR(uint8_t, 8))(0x48L, (VECTOR(uint8_t, 4))(0x48L, (VECTOR(uint8_t, 2))(0x48L, 0x5EL), 0x5EL), 0x5EL, 0x48L, 0x5EL), // p_1835->g_684
        (VECTOR(int8_t, 2))((-8L), 0x2EL), // p_1835->g_685
        {{{0x4146B62D93D9E2E8L,0x4146B62D93D9E2E8L,1L,(-10L),0x0AF4352B3426303FL},{0x4146B62D93D9E2E8L,0x4146B62D93D9E2E8L,1L,(-10L),0x0AF4352B3426303FL},{0x4146B62D93D9E2E8L,0x4146B62D93D9E2E8L,1L,(-10L),0x0AF4352B3426303FL},{0x4146B62D93D9E2E8L,0x4146B62D93D9E2E8L,1L,(-10L),0x0AF4352B3426303FL},{0x4146B62D93D9E2E8L,0x4146B62D93D9E2E8L,1L,(-10L),0x0AF4352B3426303FL},{0x4146B62D93D9E2E8L,0x4146B62D93D9E2E8L,1L,(-10L),0x0AF4352B3426303FL}}}, // p_1835->g_806
        (-2L), // p_1835->g_809
        &p_1835->g_103, // p_1835->g_835
        (VECTOR(int8_t, 8))(0x04L, (VECTOR(int8_t, 4))(0x04L, (VECTOR(int8_t, 2))(0x04L, 0x2DL), 0x2DL), 0x2DL, 0x04L, 0x2DL), // p_1835->g_839
        {0x4511E48AL}, // p_1835->g_866
        65535UL, // p_1835->g_867
        {{0x73CBD11BL},{0x73CBD11BL}}, // p_1835->g_911
        (void*)0, // p_1835->g_973
        {{{&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973},{&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973},{&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973},{&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973},{&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973},{&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973}},{{&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973},{&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973},{&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973},{&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973},{&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973},{&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973,&p_1835->g_973}}}, // p_1835->g_972
        &p_1835->g_335[1], // p_1835->g_974
        {&p_1835->g_911[0],&p_1835->g_911[0],&p_1835->g_911[0],&p_1835->g_911[0],&p_1835->g_911[0],&p_1835->g_911[0],&p_1835->g_911[0]}, // p_1835->g_996
        &p_1835->g_996[3], // p_1835->g_995
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x032CL), 0x032CL), // p_1835->g_1001
        (VECTOR(uint16_t, 16))(0x07E8L, (VECTOR(uint16_t, 4))(0x07E8L, (VECTOR(uint16_t, 2))(0x07E8L, 0x8B27L), 0x8B27L), 0x8B27L, 0x07E8L, 0x8B27L, (VECTOR(uint16_t, 2))(0x07E8L, 0x8B27L), (VECTOR(uint16_t, 2))(0x07E8L, 0x8B27L), 0x07E8L, 0x8B27L, 0x07E8L, 0x8B27L), // p_1835->g_1009
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4UL), 4UL), 4UL, 4294967295UL, 4UL, (VECTOR(uint32_t, 2))(4294967295UL, 4UL), (VECTOR(uint32_t, 2))(4294967295UL, 4UL), 4294967295UL, 4UL, 4294967295UL, 4UL), // p_1835->g_1016
        (VECTOR(uint64_t, 2))(18446744073709551613UL, 0xA74CD69A32168615L), // p_1835->g_1030
        (VECTOR(uint64_t, 8))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 6UL), 6UL), 6UL, 18446744073709551609UL, 6UL), // p_1835->g_1031
        (VECTOR(uint64_t, 16))(0x8F345E816620AE4CL, (VECTOR(uint64_t, 4))(0x8F345E816620AE4CL, (VECTOR(uint64_t, 2))(0x8F345E816620AE4CL, 0UL), 0UL), 0UL, 0x8F345E816620AE4CL, 0UL, (VECTOR(uint64_t, 2))(0x8F345E816620AE4CL, 0UL), (VECTOR(uint64_t, 2))(0x8F345E816620AE4CL, 0UL), 0x8F345E816620AE4CL, 0UL, 0x8F345E816620AE4CL, 0UL), // p_1835->g_1032
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xC39DC179L), 0xC39DC179L), 0xC39DC179L, 0UL, 0xC39DC179L, (VECTOR(uint32_t, 2))(0UL, 0xC39DC179L), (VECTOR(uint32_t, 2))(0UL, 0xC39DC179L), 0UL, 0xC39DC179L, 0UL, 0xC39DC179L), // p_1835->g_1038
        (VECTOR(uint8_t, 2))(0xADL, 255UL), // p_1835->g_1080
        {4UL}, // p_1835->g_1133
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5992CED4L), 0x5992CED4L), // p_1835->g_1177
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x4A56L), 0x4A56L), 0x4A56L, 65535UL, 0x4A56L), // p_1835->g_1234
        &p_1835->g_121, // p_1835->g_1236
        &p_1835->g_996[6], // p_1835->g_1238
        {(void*)0}, // p_1835->g_1252
        &p_1835->g_1252[0], // p_1835->g_1251
        &p_1835->g_1251, // p_1835->g_1250
        (void*)0, // p_1835->g_1267
        &p_1835->g_1267, // p_1835->g_1266
        {&p_1835->g_1266,&p_1835->g_1266,&p_1835->g_1266,&p_1835->g_1266,&p_1835->g_1266,&p_1835->g_1266}, // p_1835->g_1265
        &p_1835->g_1266, // p_1835->g_1268
        0x78CEL, // p_1835->g_1319
        &p_1835->g_103, // p_1835->g_1356
        (VECTOR(uint64_t, 16))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 1UL), 1UL), 1UL, 18446744073709551614UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551614UL, 1UL), 18446744073709551614UL, 1UL, 18446744073709551614UL, 1UL), // p_1835->g_1359
        {4294967292UL}, // p_1835->g_1385
        {{0x4E0606FEL,0x4E0606FEL,4L},{0x4E0606FEL,0x4E0606FEL,4L},{0x4E0606FEL,0x4E0606FEL,4L},{0x4E0606FEL,0x4E0606FEL,4L},{0x4E0606FEL,0x4E0606FEL,4L},{0x4E0606FEL,0x4E0606FEL,4L},{0x4E0606FEL,0x4E0606FEL,4L}}, // p_1835->g_1415
        {0L}, // p_1835->g_1438
        &p_1835->g_806[0][0][4], // p_1835->g_1499
        {0xD74D297FL}, // p_1835->g_1516
        (VECTOR(int64_t, 2))(5L, (-1L)), // p_1835->g_1530
        (VECTOR(int8_t, 8))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0L), 0L), 0L, 0x6AL, 0L), // p_1835->g_1553
        {0x94C009B0L}, // p_1835->g_1621
        (VECTOR(uint8_t, 16))(0x1CL, (VECTOR(uint8_t, 4))(0x1CL, (VECTOR(uint8_t, 2))(0x1CL, 1UL), 1UL), 1UL, 0x1CL, 1UL, (VECTOR(uint8_t, 2))(0x1CL, 1UL), (VECTOR(uint8_t, 2))(0x1CL, 1UL), 0x1CL, 1UL, 0x1CL, 1UL), // p_1835->g_1643
        (VECTOR(int32_t, 16))(0x27893A05L, (VECTOR(int32_t, 4))(0x27893A05L, (VECTOR(int32_t, 2))(0x27893A05L, 0x3E9BACE1L), 0x3E9BACE1L), 0x3E9BACE1L, 0x27893A05L, 0x3E9BACE1L, (VECTOR(int32_t, 2))(0x27893A05L, 0x3E9BACE1L), (VECTOR(int32_t, 2))(0x27893A05L, 0x3E9BACE1L), 0x27893A05L, 0x3E9BACE1L, 0x27893A05L, 0x3E9BACE1L), // p_1835->g_1683
        (void*)0, // p_1835->g_1696
        (VECTOR(uint8_t, 16))(0x4CL, (VECTOR(uint8_t, 4))(0x4CL, (VECTOR(uint8_t, 2))(0x4CL, 0x60L), 0x60L), 0x60L, 0x4CL, 0x60L, (VECTOR(uint8_t, 2))(0x4CL, 0x60L), (VECTOR(uint8_t, 2))(0x4CL, 0x60L), 0x4CL, 0x60L, 0x4CL, 0x60L), // p_1835->g_1705
        {4294967295UL}, // p_1835->g_1707
        {0L}, // p_1835->g_1754
        (VECTOR(uint64_t, 8))(0xB6EAE9B237B2A594L, (VECTOR(uint64_t, 4))(0xB6EAE9B237B2A594L, (VECTOR(uint64_t, 2))(0xB6EAE9B237B2A594L, 0x2A31CB770F6266CFL), 0x2A31CB770F6266CFL), 0x2A31CB770F6266CFL, 0xB6EAE9B237B2A594L, 0x2A31CB770F6266CFL), // p_1835->g_1786
        {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}, // p_1835->g_1796
        (VECTOR(uint64_t, 2))(18446744073709551613UL, 18446744073709551609UL), // p_1835->g_1810
        {0x8AB695C8L}, // p_1835->g_1813
        {{{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}}},{{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}}},{{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}}},{{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}}},{{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}},{{0x7923E739L},{0x7923E739L},{0UL},{0xF9D4EF84L},{0x9FB4FF4EL},{6UL},{1UL},{0xF3917F7CL},{1UL}}}}, // p_1835->g_1814
        {0x4AFD26DEL}, // p_1835->g_1815
        {0UL}, // p_1835->g_1816
        {0x48C2876DL}, // p_1835->g_1817
        {0UL}, // p_1835->g_1818
        {0x972AAAE9L}, // p_1835->g_1819
        {1UL}, // p_1835->g_1820
        {0xC48C5755L}, // p_1835->g_1821
        {{0x231DB953L}}, // p_1835->g_1822
        {0UL}, // p_1835->g_1823
        {{{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103}},{{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103},{&p_1835->g_121,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_103,&p_1835->g_121,&p_1835->g_103}}}, // p_1835->g_1833
        0, // p_1835->v_collective
        sequence_input[get_global_id(0)], // p_1835->global_0_offset
        sequence_input[get_global_id(1)], // p_1835->global_1_offset
        sequence_input[get_global_id(2)], // p_1835->global_2_offset
        sequence_input[get_local_id(0)], // p_1835->local_0_offset
        sequence_input[get_local_id(1)], // p_1835->local_1_offset
        sequence_input[get_local_id(2)], // p_1835->local_2_offset
        sequence_input[get_group_id(0)], // p_1835->group_0_offset
        sequence_input[get_group_id(1)], // p_1835->group_1_offset
        sequence_input[get_group_id(2)], // p_1835->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 104)), permutations[0][get_linear_local_id()])), // p_1835->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1836 = c_1837;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1835);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1835->g_3, "p_1835->g_3", print_hash_value);
    transparent_crc(p_1835->g_7, "p_1835->g_7", print_hash_value);
    transparent_crc(p_1835->g_30.x, "p_1835->g_30.x", print_hash_value);
    transparent_crc(p_1835->g_30.y, "p_1835->g_30.y", print_hash_value);
    transparent_crc(p_1835->g_31.s0, "p_1835->g_31.s0", print_hash_value);
    transparent_crc(p_1835->g_31.s1, "p_1835->g_31.s1", print_hash_value);
    transparent_crc(p_1835->g_31.s2, "p_1835->g_31.s2", print_hash_value);
    transparent_crc(p_1835->g_31.s3, "p_1835->g_31.s3", print_hash_value);
    transparent_crc(p_1835->g_31.s4, "p_1835->g_31.s4", print_hash_value);
    transparent_crc(p_1835->g_31.s5, "p_1835->g_31.s5", print_hash_value);
    transparent_crc(p_1835->g_31.s6, "p_1835->g_31.s6", print_hash_value);
    transparent_crc(p_1835->g_31.s7, "p_1835->g_31.s7", print_hash_value);
    transparent_crc(p_1835->g_64.s0, "p_1835->g_64.s0", print_hash_value);
    transparent_crc(p_1835->g_64.s1, "p_1835->g_64.s1", print_hash_value);
    transparent_crc(p_1835->g_64.s2, "p_1835->g_64.s2", print_hash_value);
    transparent_crc(p_1835->g_64.s3, "p_1835->g_64.s3", print_hash_value);
    transparent_crc(p_1835->g_64.s4, "p_1835->g_64.s4", print_hash_value);
    transparent_crc(p_1835->g_64.s5, "p_1835->g_64.s5", print_hash_value);
    transparent_crc(p_1835->g_64.s6, "p_1835->g_64.s6", print_hash_value);
    transparent_crc(p_1835->g_64.s7, "p_1835->g_64.s7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1835->g_66[i], "p_1835->g_66[i]", print_hash_value);

    }
    transparent_crc(p_1835->g_70, "p_1835->g_70", print_hash_value);
    transparent_crc(p_1835->g_72.x, "p_1835->g_72.x", print_hash_value);
    transparent_crc(p_1835->g_72.y, "p_1835->g_72.y", print_hash_value);
    transparent_crc(p_1835->g_77.x, "p_1835->g_77.x", print_hash_value);
    transparent_crc(p_1835->g_77.y, "p_1835->g_77.y", print_hash_value);
    transparent_crc(p_1835->g_77.z, "p_1835->g_77.z", print_hash_value);
    transparent_crc(p_1835->g_77.w, "p_1835->g_77.w", print_hash_value);
    transparent_crc(p_1835->g_86, "p_1835->g_86", print_hash_value);
    transparent_crc(p_1835->g_98, "p_1835->g_98", print_hash_value);
    transparent_crc(p_1835->g_104, "p_1835->g_104", print_hash_value);
    transparent_crc(p_1835->g_132, "p_1835->g_132", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1835->g_149[i], "p_1835->g_149[i]", print_hash_value);

    }
    transparent_crc(p_1835->g_151, "p_1835->g_151", print_hash_value);
    transparent_crc(p_1835->g_179.s0, "p_1835->g_179.s0", print_hash_value);
    transparent_crc(p_1835->g_179.s1, "p_1835->g_179.s1", print_hash_value);
    transparent_crc(p_1835->g_179.s2, "p_1835->g_179.s2", print_hash_value);
    transparent_crc(p_1835->g_179.s3, "p_1835->g_179.s3", print_hash_value);
    transparent_crc(p_1835->g_179.s4, "p_1835->g_179.s4", print_hash_value);
    transparent_crc(p_1835->g_179.s5, "p_1835->g_179.s5", print_hash_value);
    transparent_crc(p_1835->g_179.s6, "p_1835->g_179.s6", print_hash_value);
    transparent_crc(p_1835->g_179.s7, "p_1835->g_179.s7", print_hash_value);
    transparent_crc(p_1835->g_188.x, "p_1835->g_188.x", print_hash_value);
    transparent_crc(p_1835->g_188.y, "p_1835->g_188.y", print_hash_value);
    transparent_crc(p_1835->g_188.z, "p_1835->g_188.z", print_hash_value);
    transparent_crc(p_1835->g_188.w, "p_1835->g_188.w", print_hash_value);
    transparent_crc(p_1835->g_190.x, "p_1835->g_190.x", print_hash_value);
    transparent_crc(p_1835->g_190.y, "p_1835->g_190.y", print_hash_value);
    transparent_crc(p_1835->g_209, "p_1835->g_209", print_hash_value);
    transparent_crc(p_1835->g_213, "p_1835->g_213", print_hash_value);
    transparent_crc(p_1835->g_217.f0, "p_1835->g_217.f0", print_hash_value);
    transparent_crc(p_1835->g_219.f0, "p_1835->g_219.f0", print_hash_value);
    transparent_crc(p_1835->g_220.x, "p_1835->g_220.x", print_hash_value);
    transparent_crc(p_1835->g_220.y, "p_1835->g_220.y", print_hash_value);
    transparent_crc(p_1835->g_220.z, "p_1835->g_220.z", print_hash_value);
    transparent_crc(p_1835->g_220.w, "p_1835->g_220.w", print_hash_value);
    transparent_crc(p_1835->g_228.s0, "p_1835->g_228.s0", print_hash_value);
    transparent_crc(p_1835->g_228.s1, "p_1835->g_228.s1", print_hash_value);
    transparent_crc(p_1835->g_228.s2, "p_1835->g_228.s2", print_hash_value);
    transparent_crc(p_1835->g_228.s3, "p_1835->g_228.s3", print_hash_value);
    transparent_crc(p_1835->g_228.s4, "p_1835->g_228.s4", print_hash_value);
    transparent_crc(p_1835->g_228.s5, "p_1835->g_228.s5", print_hash_value);
    transparent_crc(p_1835->g_228.s6, "p_1835->g_228.s6", print_hash_value);
    transparent_crc(p_1835->g_228.s7, "p_1835->g_228.s7", print_hash_value);
    transparent_crc(p_1835->g_228.s8, "p_1835->g_228.s8", print_hash_value);
    transparent_crc(p_1835->g_228.s9, "p_1835->g_228.s9", print_hash_value);
    transparent_crc(p_1835->g_228.sa, "p_1835->g_228.sa", print_hash_value);
    transparent_crc(p_1835->g_228.sb, "p_1835->g_228.sb", print_hash_value);
    transparent_crc(p_1835->g_228.sc, "p_1835->g_228.sc", print_hash_value);
    transparent_crc(p_1835->g_228.sd, "p_1835->g_228.sd", print_hash_value);
    transparent_crc(p_1835->g_228.se, "p_1835->g_228.se", print_hash_value);
    transparent_crc(p_1835->g_228.sf, "p_1835->g_228.sf", print_hash_value);
    transparent_crc(p_1835->g_250.x, "p_1835->g_250.x", print_hash_value);
    transparent_crc(p_1835->g_250.y, "p_1835->g_250.y", print_hash_value);
    transparent_crc(p_1835->g_261.f0, "p_1835->g_261.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1835->g_302[i][j], "p_1835->g_302[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1835->g_314, "p_1835->g_314", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1835->g_317[i].f0, "p_1835->g_317[i].f0", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1835->g_335[i], "p_1835->g_335[i]", print_hash_value);

    }
    transparent_crc(p_1835->g_340, "p_1835->g_340", print_hash_value);
    transparent_crc(p_1835->g_396.s0, "p_1835->g_396.s0", print_hash_value);
    transparent_crc(p_1835->g_396.s1, "p_1835->g_396.s1", print_hash_value);
    transparent_crc(p_1835->g_396.s2, "p_1835->g_396.s2", print_hash_value);
    transparent_crc(p_1835->g_396.s3, "p_1835->g_396.s3", print_hash_value);
    transparent_crc(p_1835->g_396.s4, "p_1835->g_396.s4", print_hash_value);
    transparent_crc(p_1835->g_396.s5, "p_1835->g_396.s5", print_hash_value);
    transparent_crc(p_1835->g_396.s6, "p_1835->g_396.s6", print_hash_value);
    transparent_crc(p_1835->g_396.s7, "p_1835->g_396.s7", print_hash_value);
    transparent_crc(p_1835->g_397.s0, "p_1835->g_397.s0", print_hash_value);
    transparent_crc(p_1835->g_397.s1, "p_1835->g_397.s1", print_hash_value);
    transparent_crc(p_1835->g_397.s2, "p_1835->g_397.s2", print_hash_value);
    transparent_crc(p_1835->g_397.s3, "p_1835->g_397.s3", print_hash_value);
    transparent_crc(p_1835->g_397.s4, "p_1835->g_397.s4", print_hash_value);
    transparent_crc(p_1835->g_397.s5, "p_1835->g_397.s5", print_hash_value);
    transparent_crc(p_1835->g_397.s6, "p_1835->g_397.s6", print_hash_value);
    transparent_crc(p_1835->g_397.s7, "p_1835->g_397.s7", print_hash_value);
    transparent_crc(p_1835->g_397.s8, "p_1835->g_397.s8", print_hash_value);
    transparent_crc(p_1835->g_397.s9, "p_1835->g_397.s9", print_hash_value);
    transparent_crc(p_1835->g_397.sa, "p_1835->g_397.sa", print_hash_value);
    transparent_crc(p_1835->g_397.sb, "p_1835->g_397.sb", print_hash_value);
    transparent_crc(p_1835->g_397.sc, "p_1835->g_397.sc", print_hash_value);
    transparent_crc(p_1835->g_397.sd, "p_1835->g_397.sd", print_hash_value);
    transparent_crc(p_1835->g_397.se, "p_1835->g_397.se", print_hash_value);
    transparent_crc(p_1835->g_397.sf, "p_1835->g_397.sf", print_hash_value);
    transparent_crc(p_1835->g_402.x, "p_1835->g_402.x", print_hash_value);
    transparent_crc(p_1835->g_402.y, "p_1835->g_402.y", print_hash_value);
    transparent_crc(p_1835->g_402.z, "p_1835->g_402.z", print_hash_value);
    transparent_crc(p_1835->g_402.w, "p_1835->g_402.w", print_hash_value);
    transparent_crc(p_1835->g_421.s0, "p_1835->g_421.s0", print_hash_value);
    transparent_crc(p_1835->g_421.s1, "p_1835->g_421.s1", print_hash_value);
    transparent_crc(p_1835->g_421.s2, "p_1835->g_421.s2", print_hash_value);
    transparent_crc(p_1835->g_421.s3, "p_1835->g_421.s3", print_hash_value);
    transparent_crc(p_1835->g_421.s4, "p_1835->g_421.s4", print_hash_value);
    transparent_crc(p_1835->g_421.s5, "p_1835->g_421.s5", print_hash_value);
    transparent_crc(p_1835->g_421.s6, "p_1835->g_421.s6", print_hash_value);
    transparent_crc(p_1835->g_421.s7, "p_1835->g_421.s7", print_hash_value);
    transparent_crc(p_1835->g_421.s8, "p_1835->g_421.s8", print_hash_value);
    transparent_crc(p_1835->g_421.s9, "p_1835->g_421.s9", print_hash_value);
    transparent_crc(p_1835->g_421.sa, "p_1835->g_421.sa", print_hash_value);
    transparent_crc(p_1835->g_421.sb, "p_1835->g_421.sb", print_hash_value);
    transparent_crc(p_1835->g_421.sc, "p_1835->g_421.sc", print_hash_value);
    transparent_crc(p_1835->g_421.sd, "p_1835->g_421.sd", print_hash_value);
    transparent_crc(p_1835->g_421.se, "p_1835->g_421.se", print_hash_value);
    transparent_crc(p_1835->g_421.sf, "p_1835->g_421.sf", print_hash_value);
    transparent_crc(p_1835->g_455.x, "p_1835->g_455.x", print_hash_value);
    transparent_crc(p_1835->g_455.y, "p_1835->g_455.y", print_hash_value);
    transparent_crc(p_1835->g_457.s0, "p_1835->g_457.s0", print_hash_value);
    transparent_crc(p_1835->g_457.s1, "p_1835->g_457.s1", print_hash_value);
    transparent_crc(p_1835->g_457.s2, "p_1835->g_457.s2", print_hash_value);
    transparent_crc(p_1835->g_457.s3, "p_1835->g_457.s3", print_hash_value);
    transparent_crc(p_1835->g_457.s4, "p_1835->g_457.s4", print_hash_value);
    transparent_crc(p_1835->g_457.s5, "p_1835->g_457.s5", print_hash_value);
    transparent_crc(p_1835->g_457.s6, "p_1835->g_457.s6", print_hash_value);
    transparent_crc(p_1835->g_457.s7, "p_1835->g_457.s7", print_hash_value);
    transparent_crc(p_1835->g_461.f0, "p_1835->g_461.f0", print_hash_value);
    transparent_crc(p_1835->g_463.f0, "p_1835->g_463.f0", print_hash_value);
    transparent_crc(p_1835->g_503.x, "p_1835->g_503.x", print_hash_value);
    transparent_crc(p_1835->g_503.y, "p_1835->g_503.y", print_hash_value);
    transparent_crc(p_1835->g_528.x, "p_1835->g_528.x", print_hash_value);
    transparent_crc(p_1835->g_528.y, "p_1835->g_528.y", print_hash_value);
    transparent_crc(p_1835->g_528.z, "p_1835->g_528.z", print_hash_value);
    transparent_crc(p_1835->g_528.w, "p_1835->g_528.w", print_hash_value);
    transparent_crc(p_1835->g_567.x, "p_1835->g_567.x", print_hash_value);
    transparent_crc(p_1835->g_567.y, "p_1835->g_567.y", print_hash_value);
    transparent_crc(p_1835->g_567.z, "p_1835->g_567.z", print_hash_value);
    transparent_crc(p_1835->g_567.w, "p_1835->g_567.w", print_hash_value);
    transparent_crc(p_1835->g_606.x, "p_1835->g_606.x", print_hash_value);
    transparent_crc(p_1835->g_606.y, "p_1835->g_606.y", print_hash_value);
    transparent_crc(p_1835->g_606.z, "p_1835->g_606.z", print_hash_value);
    transparent_crc(p_1835->g_606.w, "p_1835->g_606.w", print_hash_value);
    transparent_crc(p_1835->g_607.s0, "p_1835->g_607.s0", print_hash_value);
    transparent_crc(p_1835->g_607.s1, "p_1835->g_607.s1", print_hash_value);
    transparent_crc(p_1835->g_607.s2, "p_1835->g_607.s2", print_hash_value);
    transparent_crc(p_1835->g_607.s3, "p_1835->g_607.s3", print_hash_value);
    transparent_crc(p_1835->g_607.s4, "p_1835->g_607.s4", print_hash_value);
    transparent_crc(p_1835->g_607.s5, "p_1835->g_607.s5", print_hash_value);
    transparent_crc(p_1835->g_607.s6, "p_1835->g_607.s6", print_hash_value);
    transparent_crc(p_1835->g_607.s7, "p_1835->g_607.s7", print_hash_value);
    transparent_crc(p_1835->g_607.s8, "p_1835->g_607.s8", print_hash_value);
    transparent_crc(p_1835->g_607.s9, "p_1835->g_607.s9", print_hash_value);
    transparent_crc(p_1835->g_607.sa, "p_1835->g_607.sa", print_hash_value);
    transparent_crc(p_1835->g_607.sb, "p_1835->g_607.sb", print_hash_value);
    transparent_crc(p_1835->g_607.sc, "p_1835->g_607.sc", print_hash_value);
    transparent_crc(p_1835->g_607.sd, "p_1835->g_607.sd", print_hash_value);
    transparent_crc(p_1835->g_607.se, "p_1835->g_607.se", print_hash_value);
    transparent_crc(p_1835->g_607.sf, "p_1835->g_607.sf", print_hash_value);
    transparent_crc(p_1835->g_629.s0, "p_1835->g_629.s0", print_hash_value);
    transparent_crc(p_1835->g_629.s1, "p_1835->g_629.s1", print_hash_value);
    transparent_crc(p_1835->g_629.s2, "p_1835->g_629.s2", print_hash_value);
    transparent_crc(p_1835->g_629.s3, "p_1835->g_629.s3", print_hash_value);
    transparent_crc(p_1835->g_629.s4, "p_1835->g_629.s4", print_hash_value);
    transparent_crc(p_1835->g_629.s5, "p_1835->g_629.s5", print_hash_value);
    transparent_crc(p_1835->g_629.s6, "p_1835->g_629.s6", print_hash_value);
    transparent_crc(p_1835->g_629.s7, "p_1835->g_629.s7", print_hash_value);
    transparent_crc(p_1835->g_630.s0, "p_1835->g_630.s0", print_hash_value);
    transparent_crc(p_1835->g_630.s1, "p_1835->g_630.s1", print_hash_value);
    transparent_crc(p_1835->g_630.s2, "p_1835->g_630.s2", print_hash_value);
    transparent_crc(p_1835->g_630.s3, "p_1835->g_630.s3", print_hash_value);
    transparent_crc(p_1835->g_630.s4, "p_1835->g_630.s4", print_hash_value);
    transparent_crc(p_1835->g_630.s5, "p_1835->g_630.s5", print_hash_value);
    transparent_crc(p_1835->g_630.s6, "p_1835->g_630.s6", print_hash_value);
    transparent_crc(p_1835->g_630.s7, "p_1835->g_630.s7", print_hash_value);
    transparent_crc(p_1835->g_630.s8, "p_1835->g_630.s8", print_hash_value);
    transparent_crc(p_1835->g_630.s9, "p_1835->g_630.s9", print_hash_value);
    transparent_crc(p_1835->g_630.sa, "p_1835->g_630.sa", print_hash_value);
    transparent_crc(p_1835->g_630.sb, "p_1835->g_630.sb", print_hash_value);
    transparent_crc(p_1835->g_630.sc, "p_1835->g_630.sc", print_hash_value);
    transparent_crc(p_1835->g_630.sd, "p_1835->g_630.sd", print_hash_value);
    transparent_crc(p_1835->g_630.se, "p_1835->g_630.se", print_hash_value);
    transparent_crc(p_1835->g_630.sf, "p_1835->g_630.sf", print_hash_value);
    transparent_crc(p_1835->g_684.s0, "p_1835->g_684.s0", print_hash_value);
    transparent_crc(p_1835->g_684.s1, "p_1835->g_684.s1", print_hash_value);
    transparent_crc(p_1835->g_684.s2, "p_1835->g_684.s2", print_hash_value);
    transparent_crc(p_1835->g_684.s3, "p_1835->g_684.s3", print_hash_value);
    transparent_crc(p_1835->g_684.s4, "p_1835->g_684.s4", print_hash_value);
    transparent_crc(p_1835->g_684.s5, "p_1835->g_684.s5", print_hash_value);
    transparent_crc(p_1835->g_684.s6, "p_1835->g_684.s6", print_hash_value);
    transparent_crc(p_1835->g_684.s7, "p_1835->g_684.s7", print_hash_value);
    transparent_crc(p_1835->g_685.x, "p_1835->g_685.x", print_hash_value);
    transparent_crc(p_1835->g_685.y, "p_1835->g_685.y", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1835->g_806[i][j][k], "p_1835->g_806[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1835->g_809, "p_1835->g_809", print_hash_value);
    transparent_crc(p_1835->g_839.s0, "p_1835->g_839.s0", print_hash_value);
    transparent_crc(p_1835->g_839.s1, "p_1835->g_839.s1", print_hash_value);
    transparent_crc(p_1835->g_839.s2, "p_1835->g_839.s2", print_hash_value);
    transparent_crc(p_1835->g_839.s3, "p_1835->g_839.s3", print_hash_value);
    transparent_crc(p_1835->g_839.s4, "p_1835->g_839.s4", print_hash_value);
    transparent_crc(p_1835->g_839.s5, "p_1835->g_839.s5", print_hash_value);
    transparent_crc(p_1835->g_839.s6, "p_1835->g_839.s6", print_hash_value);
    transparent_crc(p_1835->g_839.s7, "p_1835->g_839.s7", print_hash_value);
    transparent_crc(p_1835->g_866.f0, "p_1835->g_866.f0", print_hash_value);
    transparent_crc(p_1835->g_867, "p_1835->g_867", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1835->g_911[i].f0, "p_1835->g_911[i].f0", print_hash_value);

    }
    transparent_crc(p_1835->g_1001.x, "p_1835->g_1001.x", print_hash_value);
    transparent_crc(p_1835->g_1001.y, "p_1835->g_1001.y", print_hash_value);
    transparent_crc(p_1835->g_1001.z, "p_1835->g_1001.z", print_hash_value);
    transparent_crc(p_1835->g_1001.w, "p_1835->g_1001.w", print_hash_value);
    transparent_crc(p_1835->g_1009.s0, "p_1835->g_1009.s0", print_hash_value);
    transparent_crc(p_1835->g_1009.s1, "p_1835->g_1009.s1", print_hash_value);
    transparent_crc(p_1835->g_1009.s2, "p_1835->g_1009.s2", print_hash_value);
    transparent_crc(p_1835->g_1009.s3, "p_1835->g_1009.s3", print_hash_value);
    transparent_crc(p_1835->g_1009.s4, "p_1835->g_1009.s4", print_hash_value);
    transparent_crc(p_1835->g_1009.s5, "p_1835->g_1009.s5", print_hash_value);
    transparent_crc(p_1835->g_1009.s6, "p_1835->g_1009.s6", print_hash_value);
    transparent_crc(p_1835->g_1009.s7, "p_1835->g_1009.s7", print_hash_value);
    transparent_crc(p_1835->g_1009.s8, "p_1835->g_1009.s8", print_hash_value);
    transparent_crc(p_1835->g_1009.s9, "p_1835->g_1009.s9", print_hash_value);
    transparent_crc(p_1835->g_1009.sa, "p_1835->g_1009.sa", print_hash_value);
    transparent_crc(p_1835->g_1009.sb, "p_1835->g_1009.sb", print_hash_value);
    transparent_crc(p_1835->g_1009.sc, "p_1835->g_1009.sc", print_hash_value);
    transparent_crc(p_1835->g_1009.sd, "p_1835->g_1009.sd", print_hash_value);
    transparent_crc(p_1835->g_1009.se, "p_1835->g_1009.se", print_hash_value);
    transparent_crc(p_1835->g_1009.sf, "p_1835->g_1009.sf", print_hash_value);
    transparent_crc(p_1835->g_1016.s0, "p_1835->g_1016.s0", print_hash_value);
    transparent_crc(p_1835->g_1016.s1, "p_1835->g_1016.s1", print_hash_value);
    transparent_crc(p_1835->g_1016.s2, "p_1835->g_1016.s2", print_hash_value);
    transparent_crc(p_1835->g_1016.s3, "p_1835->g_1016.s3", print_hash_value);
    transparent_crc(p_1835->g_1016.s4, "p_1835->g_1016.s4", print_hash_value);
    transparent_crc(p_1835->g_1016.s5, "p_1835->g_1016.s5", print_hash_value);
    transparent_crc(p_1835->g_1016.s6, "p_1835->g_1016.s6", print_hash_value);
    transparent_crc(p_1835->g_1016.s7, "p_1835->g_1016.s7", print_hash_value);
    transparent_crc(p_1835->g_1016.s8, "p_1835->g_1016.s8", print_hash_value);
    transparent_crc(p_1835->g_1016.s9, "p_1835->g_1016.s9", print_hash_value);
    transparent_crc(p_1835->g_1016.sa, "p_1835->g_1016.sa", print_hash_value);
    transparent_crc(p_1835->g_1016.sb, "p_1835->g_1016.sb", print_hash_value);
    transparent_crc(p_1835->g_1016.sc, "p_1835->g_1016.sc", print_hash_value);
    transparent_crc(p_1835->g_1016.sd, "p_1835->g_1016.sd", print_hash_value);
    transparent_crc(p_1835->g_1016.se, "p_1835->g_1016.se", print_hash_value);
    transparent_crc(p_1835->g_1016.sf, "p_1835->g_1016.sf", print_hash_value);
    transparent_crc(p_1835->g_1030.x, "p_1835->g_1030.x", print_hash_value);
    transparent_crc(p_1835->g_1030.y, "p_1835->g_1030.y", print_hash_value);
    transparent_crc(p_1835->g_1031.s0, "p_1835->g_1031.s0", print_hash_value);
    transparent_crc(p_1835->g_1031.s1, "p_1835->g_1031.s1", print_hash_value);
    transparent_crc(p_1835->g_1031.s2, "p_1835->g_1031.s2", print_hash_value);
    transparent_crc(p_1835->g_1031.s3, "p_1835->g_1031.s3", print_hash_value);
    transparent_crc(p_1835->g_1031.s4, "p_1835->g_1031.s4", print_hash_value);
    transparent_crc(p_1835->g_1031.s5, "p_1835->g_1031.s5", print_hash_value);
    transparent_crc(p_1835->g_1031.s6, "p_1835->g_1031.s6", print_hash_value);
    transparent_crc(p_1835->g_1031.s7, "p_1835->g_1031.s7", print_hash_value);
    transparent_crc(p_1835->g_1032.s0, "p_1835->g_1032.s0", print_hash_value);
    transparent_crc(p_1835->g_1032.s1, "p_1835->g_1032.s1", print_hash_value);
    transparent_crc(p_1835->g_1032.s2, "p_1835->g_1032.s2", print_hash_value);
    transparent_crc(p_1835->g_1032.s3, "p_1835->g_1032.s3", print_hash_value);
    transparent_crc(p_1835->g_1032.s4, "p_1835->g_1032.s4", print_hash_value);
    transparent_crc(p_1835->g_1032.s5, "p_1835->g_1032.s5", print_hash_value);
    transparent_crc(p_1835->g_1032.s6, "p_1835->g_1032.s6", print_hash_value);
    transparent_crc(p_1835->g_1032.s7, "p_1835->g_1032.s7", print_hash_value);
    transparent_crc(p_1835->g_1032.s8, "p_1835->g_1032.s8", print_hash_value);
    transparent_crc(p_1835->g_1032.s9, "p_1835->g_1032.s9", print_hash_value);
    transparent_crc(p_1835->g_1032.sa, "p_1835->g_1032.sa", print_hash_value);
    transparent_crc(p_1835->g_1032.sb, "p_1835->g_1032.sb", print_hash_value);
    transparent_crc(p_1835->g_1032.sc, "p_1835->g_1032.sc", print_hash_value);
    transparent_crc(p_1835->g_1032.sd, "p_1835->g_1032.sd", print_hash_value);
    transparent_crc(p_1835->g_1032.se, "p_1835->g_1032.se", print_hash_value);
    transparent_crc(p_1835->g_1032.sf, "p_1835->g_1032.sf", print_hash_value);
    transparent_crc(p_1835->g_1038.s0, "p_1835->g_1038.s0", print_hash_value);
    transparent_crc(p_1835->g_1038.s1, "p_1835->g_1038.s1", print_hash_value);
    transparent_crc(p_1835->g_1038.s2, "p_1835->g_1038.s2", print_hash_value);
    transparent_crc(p_1835->g_1038.s3, "p_1835->g_1038.s3", print_hash_value);
    transparent_crc(p_1835->g_1038.s4, "p_1835->g_1038.s4", print_hash_value);
    transparent_crc(p_1835->g_1038.s5, "p_1835->g_1038.s5", print_hash_value);
    transparent_crc(p_1835->g_1038.s6, "p_1835->g_1038.s6", print_hash_value);
    transparent_crc(p_1835->g_1038.s7, "p_1835->g_1038.s7", print_hash_value);
    transparent_crc(p_1835->g_1038.s8, "p_1835->g_1038.s8", print_hash_value);
    transparent_crc(p_1835->g_1038.s9, "p_1835->g_1038.s9", print_hash_value);
    transparent_crc(p_1835->g_1038.sa, "p_1835->g_1038.sa", print_hash_value);
    transparent_crc(p_1835->g_1038.sb, "p_1835->g_1038.sb", print_hash_value);
    transparent_crc(p_1835->g_1038.sc, "p_1835->g_1038.sc", print_hash_value);
    transparent_crc(p_1835->g_1038.sd, "p_1835->g_1038.sd", print_hash_value);
    transparent_crc(p_1835->g_1038.se, "p_1835->g_1038.se", print_hash_value);
    transparent_crc(p_1835->g_1038.sf, "p_1835->g_1038.sf", print_hash_value);
    transparent_crc(p_1835->g_1080.x, "p_1835->g_1080.x", print_hash_value);
    transparent_crc(p_1835->g_1080.y, "p_1835->g_1080.y", print_hash_value);
    transparent_crc(p_1835->g_1133.f0, "p_1835->g_1133.f0", print_hash_value);
    transparent_crc(p_1835->g_1177.x, "p_1835->g_1177.x", print_hash_value);
    transparent_crc(p_1835->g_1177.y, "p_1835->g_1177.y", print_hash_value);
    transparent_crc(p_1835->g_1177.z, "p_1835->g_1177.z", print_hash_value);
    transparent_crc(p_1835->g_1177.w, "p_1835->g_1177.w", print_hash_value);
    transparent_crc(p_1835->g_1234.s0, "p_1835->g_1234.s0", print_hash_value);
    transparent_crc(p_1835->g_1234.s1, "p_1835->g_1234.s1", print_hash_value);
    transparent_crc(p_1835->g_1234.s2, "p_1835->g_1234.s2", print_hash_value);
    transparent_crc(p_1835->g_1234.s3, "p_1835->g_1234.s3", print_hash_value);
    transparent_crc(p_1835->g_1234.s4, "p_1835->g_1234.s4", print_hash_value);
    transparent_crc(p_1835->g_1234.s5, "p_1835->g_1234.s5", print_hash_value);
    transparent_crc(p_1835->g_1234.s6, "p_1835->g_1234.s6", print_hash_value);
    transparent_crc(p_1835->g_1234.s7, "p_1835->g_1234.s7", print_hash_value);
    transparent_crc(p_1835->g_1319, "p_1835->g_1319", print_hash_value);
    transparent_crc(p_1835->g_1359.s0, "p_1835->g_1359.s0", print_hash_value);
    transparent_crc(p_1835->g_1359.s1, "p_1835->g_1359.s1", print_hash_value);
    transparent_crc(p_1835->g_1359.s2, "p_1835->g_1359.s2", print_hash_value);
    transparent_crc(p_1835->g_1359.s3, "p_1835->g_1359.s3", print_hash_value);
    transparent_crc(p_1835->g_1359.s4, "p_1835->g_1359.s4", print_hash_value);
    transparent_crc(p_1835->g_1359.s5, "p_1835->g_1359.s5", print_hash_value);
    transparent_crc(p_1835->g_1359.s6, "p_1835->g_1359.s6", print_hash_value);
    transparent_crc(p_1835->g_1359.s7, "p_1835->g_1359.s7", print_hash_value);
    transparent_crc(p_1835->g_1359.s8, "p_1835->g_1359.s8", print_hash_value);
    transparent_crc(p_1835->g_1359.s9, "p_1835->g_1359.s9", print_hash_value);
    transparent_crc(p_1835->g_1359.sa, "p_1835->g_1359.sa", print_hash_value);
    transparent_crc(p_1835->g_1359.sb, "p_1835->g_1359.sb", print_hash_value);
    transparent_crc(p_1835->g_1359.sc, "p_1835->g_1359.sc", print_hash_value);
    transparent_crc(p_1835->g_1359.sd, "p_1835->g_1359.sd", print_hash_value);
    transparent_crc(p_1835->g_1359.se, "p_1835->g_1359.se", print_hash_value);
    transparent_crc(p_1835->g_1359.sf, "p_1835->g_1359.sf", print_hash_value);
    transparent_crc(p_1835->g_1385.f0, "p_1835->g_1385.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1835->g_1415[i][j], "p_1835->g_1415[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1835->g_1438.f0, "p_1835->g_1438.f0", print_hash_value);
    transparent_crc(p_1835->g_1516.f0, "p_1835->g_1516.f0", print_hash_value);
    transparent_crc(p_1835->g_1530.x, "p_1835->g_1530.x", print_hash_value);
    transparent_crc(p_1835->g_1530.y, "p_1835->g_1530.y", print_hash_value);
    transparent_crc(p_1835->g_1553.s0, "p_1835->g_1553.s0", print_hash_value);
    transparent_crc(p_1835->g_1553.s1, "p_1835->g_1553.s1", print_hash_value);
    transparent_crc(p_1835->g_1553.s2, "p_1835->g_1553.s2", print_hash_value);
    transparent_crc(p_1835->g_1553.s3, "p_1835->g_1553.s3", print_hash_value);
    transparent_crc(p_1835->g_1553.s4, "p_1835->g_1553.s4", print_hash_value);
    transparent_crc(p_1835->g_1553.s5, "p_1835->g_1553.s5", print_hash_value);
    transparent_crc(p_1835->g_1553.s6, "p_1835->g_1553.s6", print_hash_value);
    transparent_crc(p_1835->g_1553.s7, "p_1835->g_1553.s7", print_hash_value);
    transparent_crc(p_1835->g_1621.f0, "p_1835->g_1621.f0", print_hash_value);
    transparent_crc(p_1835->g_1643.s0, "p_1835->g_1643.s0", print_hash_value);
    transparent_crc(p_1835->g_1643.s1, "p_1835->g_1643.s1", print_hash_value);
    transparent_crc(p_1835->g_1643.s2, "p_1835->g_1643.s2", print_hash_value);
    transparent_crc(p_1835->g_1643.s3, "p_1835->g_1643.s3", print_hash_value);
    transparent_crc(p_1835->g_1643.s4, "p_1835->g_1643.s4", print_hash_value);
    transparent_crc(p_1835->g_1643.s5, "p_1835->g_1643.s5", print_hash_value);
    transparent_crc(p_1835->g_1643.s6, "p_1835->g_1643.s6", print_hash_value);
    transparent_crc(p_1835->g_1643.s7, "p_1835->g_1643.s7", print_hash_value);
    transparent_crc(p_1835->g_1643.s8, "p_1835->g_1643.s8", print_hash_value);
    transparent_crc(p_1835->g_1643.s9, "p_1835->g_1643.s9", print_hash_value);
    transparent_crc(p_1835->g_1643.sa, "p_1835->g_1643.sa", print_hash_value);
    transparent_crc(p_1835->g_1643.sb, "p_1835->g_1643.sb", print_hash_value);
    transparent_crc(p_1835->g_1643.sc, "p_1835->g_1643.sc", print_hash_value);
    transparent_crc(p_1835->g_1643.sd, "p_1835->g_1643.sd", print_hash_value);
    transparent_crc(p_1835->g_1643.se, "p_1835->g_1643.se", print_hash_value);
    transparent_crc(p_1835->g_1643.sf, "p_1835->g_1643.sf", print_hash_value);
    transparent_crc(p_1835->g_1683.s0, "p_1835->g_1683.s0", print_hash_value);
    transparent_crc(p_1835->g_1683.s1, "p_1835->g_1683.s1", print_hash_value);
    transparent_crc(p_1835->g_1683.s2, "p_1835->g_1683.s2", print_hash_value);
    transparent_crc(p_1835->g_1683.s3, "p_1835->g_1683.s3", print_hash_value);
    transparent_crc(p_1835->g_1683.s4, "p_1835->g_1683.s4", print_hash_value);
    transparent_crc(p_1835->g_1683.s5, "p_1835->g_1683.s5", print_hash_value);
    transparent_crc(p_1835->g_1683.s6, "p_1835->g_1683.s6", print_hash_value);
    transparent_crc(p_1835->g_1683.s7, "p_1835->g_1683.s7", print_hash_value);
    transparent_crc(p_1835->g_1683.s8, "p_1835->g_1683.s8", print_hash_value);
    transparent_crc(p_1835->g_1683.s9, "p_1835->g_1683.s9", print_hash_value);
    transparent_crc(p_1835->g_1683.sa, "p_1835->g_1683.sa", print_hash_value);
    transparent_crc(p_1835->g_1683.sb, "p_1835->g_1683.sb", print_hash_value);
    transparent_crc(p_1835->g_1683.sc, "p_1835->g_1683.sc", print_hash_value);
    transparent_crc(p_1835->g_1683.sd, "p_1835->g_1683.sd", print_hash_value);
    transparent_crc(p_1835->g_1683.se, "p_1835->g_1683.se", print_hash_value);
    transparent_crc(p_1835->g_1683.sf, "p_1835->g_1683.sf", print_hash_value);
    transparent_crc(p_1835->g_1705.s0, "p_1835->g_1705.s0", print_hash_value);
    transparent_crc(p_1835->g_1705.s1, "p_1835->g_1705.s1", print_hash_value);
    transparent_crc(p_1835->g_1705.s2, "p_1835->g_1705.s2", print_hash_value);
    transparent_crc(p_1835->g_1705.s3, "p_1835->g_1705.s3", print_hash_value);
    transparent_crc(p_1835->g_1705.s4, "p_1835->g_1705.s4", print_hash_value);
    transparent_crc(p_1835->g_1705.s5, "p_1835->g_1705.s5", print_hash_value);
    transparent_crc(p_1835->g_1705.s6, "p_1835->g_1705.s6", print_hash_value);
    transparent_crc(p_1835->g_1705.s7, "p_1835->g_1705.s7", print_hash_value);
    transparent_crc(p_1835->g_1705.s8, "p_1835->g_1705.s8", print_hash_value);
    transparent_crc(p_1835->g_1705.s9, "p_1835->g_1705.s9", print_hash_value);
    transparent_crc(p_1835->g_1705.sa, "p_1835->g_1705.sa", print_hash_value);
    transparent_crc(p_1835->g_1705.sb, "p_1835->g_1705.sb", print_hash_value);
    transparent_crc(p_1835->g_1705.sc, "p_1835->g_1705.sc", print_hash_value);
    transparent_crc(p_1835->g_1705.sd, "p_1835->g_1705.sd", print_hash_value);
    transparent_crc(p_1835->g_1705.se, "p_1835->g_1705.se", print_hash_value);
    transparent_crc(p_1835->g_1705.sf, "p_1835->g_1705.sf", print_hash_value);
    transparent_crc(p_1835->g_1707.f0, "p_1835->g_1707.f0", print_hash_value);
    transparent_crc(p_1835->g_1754.f0, "p_1835->g_1754.f0", print_hash_value);
    transparent_crc(p_1835->g_1786.s0, "p_1835->g_1786.s0", print_hash_value);
    transparent_crc(p_1835->g_1786.s1, "p_1835->g_1786.s1", print_hash_value);
    transparent_crc(p_1835->g_1786.s2, "p_1835->g_1786.s2", print_hash_value);
    transparent_crc(p_1835->g_1786.s3, "p_1835->g_1786.s3", print_hash_value);
    transparent_crc(p_1835->g_1786.s4, "p_1835->g_1786.s4", print_hash_value);
    transparent_crc(p_1835->g_1786.s5, "p_1835->g_1786.s5", print_hash_value);
    transparent_crc(p_1835->g_1786.s6, "p_1835->g_1786.s6", print_hash_value);
    transparent_crc(p_1835->g_1786.s7, "p_1835->g_1786.s7", print_hash_value);
    transparent_crc(p_1835->g_1810.x, "p_1835->g_1810.x", print_hash_value);
    transparent_crc(p_1835->g_1810.y, "p_1835->g_1810.y", print_hash_value);
    transparent_crc(p_1835->g_1813.f0, "p_1835->g_1813.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1835->g_1814[i][j][k].f0, "p_1835->g_1814[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1835->g_1815.f0, "p_1835->g_1815.f0", print_hash_value);
    transparent_crc(p_1835->g_1816.f0, "p_1835->g_1816.f0", print_hash_value);
    transparent_crc(p_1835->g_1817.f0, "p_1835->g_1817.f0", print_hash_value);
    transparent_crc(p_1835->g_1818.f0, "p_1835->g_1818.f0", print_hash_value);
    transparent_crc(p_1835->g_1819.f0, "p_1835->g_1819.f0", print_hash_value);
    transparent_crc(p_1835->g_1820.f0, "p_1835->g_1820.f0", print_hash_value);
    transparent_crc(p_1835->g_1821.f0, "p_1835->g_1821.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1835->g_1822[i].f0, "p_1835->g_1822[i].f0", print_hash_value);

    }
    transparent_crc(p_1835->g_1823.f0, "p_1835->g_1823.f0", print_hash_value);
    transparent_crc(p_1835->v_collective, "p_1835->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 97; i++)
            transparent_crc(p_1835->g_special_values[i + 97 * get_linear_group_id()], "p_1835->g_special_values[i + 97 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 97; i++)
            transparent_crc(p_1835->l_special_values[i], "p_1835->l_special_values[i]", print_hash_value);
    transparent_crc(p_1835->l_comm_values[get_linear_local_id()], "p_1835->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1835->g_comm_values[get_linear_group_id() * 104 + get_linear_local_id()], "p_1835->g_comm_values[get_linear_group_id() * 104 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
