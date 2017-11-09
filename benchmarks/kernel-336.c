// --atomics 7 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 24,61,3 -l 1,1,1
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

__constant uint32_t permutations[10][1] = {
{0}, // permutation 0
{0}, // permutation 1
{0}, // permutation 2
{0}, // permutation 3
{0}, // permutation 4
{0}, // permutation 5
{0}, // permutation 6
{0}, // permutation 7
{0}, // permutation 8
{0} // permutation 9
};

// Seed: 3851177727

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint16_t  f0;
   volatile int64_t  f1;
   volatile uint8_t  f2;
   int8_t  f3;
   volatile uint64_t  f4;
   uint64_t  f5;
   uint64_t  f6;
};

struct S1 {
    uint64_t g_20;
    int32_t g_29;
    uint64_t g_31;
    VECTOR(int64_t, 8) g_52;
    VECTOR(int32_t, 16) g_83;
    VECTOR(int32_t, 16) g_87;
    uint32_t g_101[2];
    uint32_t *g_100;
    int8_t g_110;
    VECTOR(int32_t, 2) g_119;
    int32_t *g_127[1];
    int32_t ** volatile g_126;
    uint64_t g_142;
    VECTOR(int16_t, 4) g_158;
    volatile VECTOR(uint16_t, 16) g_159;
    VECTOR(int8_t, 4) g_186;
    volatile int32_t g_188[6];
    volatile VECTOR(int32_t, 4) g_191;
    int32_t ** volatile g_194;
    int32_t ** volatile g_195;
    int32_t * volatile g_447;
    uint64_t g_454;
    volatile int64_t g_472;
    volatile int64_t *g_471;
    VECTOR(int64_t, 2) g_474;
    int8_t g_488;
    int64_t g_491;
    uint16_t g_494[4][3];
    int64_t g_498;
    int16_t g_499;
    struct S0 g_536;
    uint64_t *g_548;
    volatile VECTOR(int64_t, 8) g_563;
    uint64_t **g_590;
    uint64_t ***g_589[6];
    int32_t ** volatile g_601[6][5];
    int32_t ** volatile g_602;
    volatile VECTOR(int32_t, 4) g_616;
    VECTOR(int8_t, 16) g_632;
    uint64_t *g_643;
    struct S0 g_677;
    int32_t ** volatile g_706;
    VECTOR(uint32_t, 2) g_709;
    volatile VECTOR(uint32_t, 2) g_710;
    VECTOR(uint32_t, 2) g_711;
    VECTOR(uint32_t, 16) g_714;
    VECTOR(uint64_t, 2) g_721;
    VECTOR(uint8_t, 8) g_722;
    VECTOR(uint8_t, 2) g_724;
    uint64_t g_747[7][3][6];
    int32_t ** volatile g_761;
    int32_t g_799[6][9][4];
    VECTOR(int32_t, 8) g_812;
    uint8_t g_842;
    struct S0 g_847;
    struct S0 g_851;
    int8_t g_930;
    VECTOR(uint8_t, 4) g_940;
    VECTOR(uint8_t, 8) g_941;
    volatile uint8_t g_973;
    volatile struct S0 g_1027;
    int32_t ** volatile g_1029;
    volatile struct S0 g_1038;
    volatile struct S0 g_1044;
    VECTOR(uint8_t, 8) g_1049;
    int32_t ** volatile g_1067;
    volatile struct S0 g_1086;
    int8_t **g_1088;
    int32_t ** volatile g_1154;
    int32_t ** volatile g_1197;
    volatile struct S0 g_1206;
    volatile struct S0 * volatile g_1207;
    uint8_t *g_1208;
    VECTOR(int8_t, 4) g_1216;
    VECTOR(uint16_t, 8) g_1219;
    VECTOR(int8_t, 4) g_1220;
    VECTOR(int16_t, 16) g_1223;
    VECTOR(uint64_t, 16) g_1248;
    VECTOR(int8_t, 2) g_1250;
    int32_t g_1254;
    volatile int16_t g_1262;
    uint32_t g_1270[6];
    VECTOR(int16_t, 2) g_1271;
    volatile VECTOR(int64_t, 4) g_1283;
    VECTOR(uint16_t, 8) g_1292;
    volatile VECTOR(uint8_t, 4) g_1315;
    volatile VECTOR(uint8_t, 8) g_1317;
    int32_t **g_1361;
    volatile VECTOR(int32_t, 16) g_1364;
    struct S0 g_1382;
    uint32_t g_1386;
    VECTOR(uint8_t, 16) g_1390;
    int16_t *g_1394[1][6][7];
    int16_t ** volatile g_1393;
    VECTOR(int32_t, 2) g_1447;
    volatile VECTOR(int32_t, 16) g_1448;
    VECTOR(int32_t, 8) g_1451;
    volatile struct S0 g_1454;
    VECTOR(int32_t, 8) g_1457;
    volatile VECTOR(uint64_t, 2) g_1467;
    VECTOR(int16_t, 16) g_1520;
    VECTOR(uint16_t, 4) g_1526;
    uint32_t *g_1537[1];
    uint32_t * volatile *g_1536;
    VECTOR(uint8_t, 4) g_1545;
    volatile VECTOR(uint8_t, 8) g_1547;
    int16_t g_1554;
    uint64_t g_1557;
    uint16_t g_1559[3][8][2];
    struct S0 *g_1563;
    struct S0 **g_1562[4];
    uint32_t **g_1568;
    uint32_t ***g_1567;
    VECTOR(uint64_t, 8) g_1591;
    volatile VECTOR(uint64_t, 16) g_1596;
    VECTOR(uint64_t, 2) g_1597;
    struct S0 g_1606[9][5];
    volatile VECTOR(int16_t, 16) g_1645;
    uint64_t ****g_1659[9];
    volatile VECTOR(uint16_t, 8) g_1681;
    uint32_t *g_1694[2];
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
uint8_t  func_1(struct S1 * p_1708);
int32_t  func_8(int32_t  p_9, struct S1 * p_1708);
int16_t  func_23(uint64_t * p_24, int64_t  p_25, struct S1 * p_1708);
int32_t * func_34(uint64_t * p_35, uint64_t * p_36, struct S1 * p_1708);
uint64_t * func_37(uint64_t  p_38, int32_t  p_39, uint64_t * p_40, uint16_t  p_41, uint32_t  p_42, struct S1 * p_1708);
uint64_t  func_43(int64_t  p_44, struct S1 * p_1708);
int64_t  func_53(uint8_t  p_54, struct S1 * p_1708);
int32_t * func_60(int64_t  p_61, int32_t * p_62, uint32_t  p_63, uint64_t * p_64, struct S1 * p_1708);
uint64_t  func_72(int32_t * p_73, int32_t  p_74, uint32_t  p_75, struct S1 * p_1708);
uint8_t  func_77(int64_t  p_78, int64_t  p_79, uint64_t * p_80, uint8_t  p_81, struct S1 * p_1708);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1708->g_comm_values p_1708->g_20 p_1708->g_31 p_1708->g_29 p_1708->g_1067 p_1708->g_127 p_1708->g_847.f3 p_1708->g_721 p_1708->g_494 p_1708->g_706 p_1708->g_851.f0 p_1708->g_454 p_1708->g_87 p_1708->g_1206 p_1708->g_1207 p_1708->g_536.f3 p_1708->g_1361 p_1708->g_1447 p_1708->g_1448 p_1708->g_1451 p_1708->g_1454 p_1708->g_1457 p_1708->g_1467 p_1708->g_1382.f6 p_1708->g_677.f0 p_1708->g_100 p_1708->g_101 p_1708->g_847.f5 p_1708->g_491 p_1708->g_1208 p_1708->g_536.f1 p_1708->g_499 p_1708->g_471 p_1708->g_472 p_1708->g_1250 p_1708->g_709 p_1708->g_1219 p_1708->g_1520 p_1708->g_1526 p_1708->g_83 p_1708->g_1270 p_1708->g_1086 p_1708->g_548 p_1708->g_1536 p_1708->g_1545 p_1708->g_1547 p_1708->g_1554 p_1708->g_1557 p_1708->g_589 p_1708->g_1562 p_1708->g_1567 p_1708->g_159 p_1708->g_1591 p_1708->g_590 p_1708->g_1596 p_1708->g_1597 p_1708->g_1606 p_1708->g_1382 p_1708->g_142 p_1708->g_1645 p_1708->g_119 p_1708->g_188 p_1708->g_616 p_1708->g_1681 p_1708->g_677.f6 p_1708->g_1386 p_1708->g_1248
 * writes: p_1708->g_20 p_1708->g_31 p_1708->g_29 p_1708->g_127 p_1708->g_847.f3 p_1708->g_87 p_1708->g_1086 p_1708->g_1208 p_1708->g_536.f3 p_1708->g_847.f5 p_1708->g_491 p_1708->g_632 p_1708->g_499 p_1708->g_474 p_1708->g_842 p_1708->g_1557 p_1708->g_1559 p_1708->g_590 p_1708->g_1562 p_1708->g_1567 p_1708->g_851.f0 p_1708->g_494 p_1708->g_1659 p_1708->g_comm_values p_1708->g_1694
 */
uint8_t  func_1(struct S1 * p_1708)
{ /* block id: 4 */
    int8_t l_10 = 1L;
    uint64_t *l_19 = &p_1708->g_20;
    uint16_t l_1162 = 0x9C1CL;
    int8_t *l_1163 = (void*)0;
    int8_t *l_1164 = &p_1708->g_847.f3;
    int8_t l_1200 = 0x59L;
    int32_t *l_1201 = (void*)0;
    int32_t *l_1202 = (void*)0;
    int32_t *l_1203 = (void*)0;
    int32_t *l_1204 = (void*)0;
    int32_t *l_1205[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_1211 = 0xEC58B29D93EFBA2CL;
    uint8_t l_1215 = 0x95L;
    VECTOR(uint16_t, 16) l_1225 = (VECTOR(uint16_t, 16))(0x9AFCL, (VECTOR(uint16_t, 4))(0x9AFCL, (VECTOR(uint16_t, 2))(0x9AFCL, 65535UL), 65535UL), 65535UL, 0x9AFCL, 65535UL, (VECTOR(uint16_t, 2))(0x9AFCL, 65535UL), (VECTOR(uint16_t, 2))(0x9AFCL, 65535UL), 0x9AFCL, 65535UL, 0x9AFCL, 65535UL);
    uint64_t l_1226 = 0UL;
    uint32_t l_1231 = 0xEF5D959FL;
    int32_t l_1263[8][10] = {{(-1L),0x38806586L,0x6BCC16D1L,(-6L),(-1L),0L,0x38806586L,0x316F2213L,(-6L),0L},{(-1L),0x38806586L,0x6BCC16D1L,(-6L),(-1L),0L,0x38806586L,0x316F2213L,(-6L),0L},{(-1L),0x38806586L,0x6BCC16D1L,(-6L),(-1L),0L,0x38806586L,0x316F2213L,(-6L),0L},{(-1L),0x38806586L,0x6BCC16D1L,(-6L),(-1L),0L,0x38806586L,0x316F2213L,(-6L),0L},{(-1L),0x38806586L,0x6BCC16D1L,(-6L),(-1L),0L,0x38806586L,0x316F2213L,(-6L),0L},{(-1L),0x38806586L,0x6BCC16D1L,(-6L),(-1L),0L,0x38806586L,0x316F2213L,(-6L),0L},{(-1L),0x38806586L,0x6BCC16D1L,(-6L),(-1L),0L,0x38806586L,0x316F2213L,(-6L),0L},{(-1L),0x38806586L,0x6BCC16D1L,(-6L),(-1L),0L,0x38806586L,0x316F2213L,(-6L),0L}};
    int8_t l_1332 = 0x2DL;
    struct S0 *l_1381 = &p_1708->g_1382;
    int64_t l_1391 = 0x5FC4AF309EC139A4L;
    int8_t l_1397 = 0x0CL;
    int64_t l_1401 = 1L;
    uint64_t l_1412 = 0x6B1096DC75E616AEL;
    VECTOR(int32_t, 16) l_1431 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
    uint16_t l_1445 = 1UL;
    VECTOR(int32_t, 16) l_1453 = (VECTOR(int32_t, 16))(0x520E2B75L, (VECTOR(int32_t, 4))(0x520E2B75L, (VECTOR(int32_t, 2))(0x520E2B75L, 0x104A1DC1L), 0x104A1DC1L), 0x104A1DC1L, 0x520E2B75L, 0x104A1DC1L, (VECTOR(int32_t, 2))(0x520E2B75L, 0x104A1DC1L), (VECTOR(int32_t, 2))(0x520E2B75L, 0x104A1DC1L), 0x520E2B75L, 0x104A1DC1L, 0x520E2B75L, 0x104A1DC1L);
    int8_t l_1464 = 0L;
    VECTOR(int64_t, 16) l_1469 = (VECTOR(int64_t, 16))(0x0EFBB75BF5E1D689L, (VECTOR(int64_t, 4))(0x0EFBB75BF5E1D689L, (VECTOR(int64_t, 2))(0x0EFBB75BF5E1D689L, 0x4506B1CBBD640D05L), 0x4506B1CBBD640D05L), 0x4506B1CBBD640D05L, 0x0EFBB75BF5E1D689L, 0x4506B1CBBD640D05L, (VECTOR(int64_t, 2))(0x0EFBB75BF5E1D689L, 0x4506B1CBBD640D05L), (VECTOR(int64_t, 2))(0x0EFBB75BF5E1D689L, 0x4506B1CBBD640D05L), 0x0EFBB75BF5E1D689L, 0x4506B1CBBD640D05L, 0x0EFBB75BF5E1D689L, 0x4506B1CBBD640D05L);
    uint64_t l_1476 = 0UL;
    int8_t l_1477 = (-2L);
    uint8_t l_1535 = 0x2AL;
    uint32_t **l_1538 = &p_1708->g_1537[0];
    VECTOR(uint64_t, 16) l_1605 = (VECTOR(uint64_t, 16))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x99B62D8B14129C06L), 0x99B62D8B14129C06L), 0x99B62D8B14129C06L, 18446744073709551611UL, 0x99B62D8B14129C06L, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x99B62D8B14129C06L), (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x99B62D8B14129C06L), 18446744073709551611UL, 0x99B62D8B14129C06L, 18446744073709551611UL, 0x99B62D8B14129C06L);
    VECTOR(int16_t, 2) l_1615 = (VECTOR(int16_t, 2))((-8L), (-7L));
    uint64_t l_1668 = 0x059577EE7E4EBB7CL;
    int16_t l_1707 = (-1L);
    int i, j;
    p_1708->g_87.s5 |= ((safe_rshift_func_int16_t_s_u(((+((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x0F02L, 0L)).xxxxxyxx)), ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(0x08F4L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(6L, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(0x78C0L, 0x47BEL)).xxyxyyxx, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))((-7L), 0x75L)).yyxxyyyy, ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0x2FL, (-1L), 0x0DL, 0x64L)))).even)))), (int8_t)((*l_1164) = ((p_1708->g_comm_values[p_1708->tid] && (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((func_8((((((*l_1164) &= ((~l_10) <= (safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((l_10 != ((VECTOR(uint8_t, 2))(9UL, 0x5DL)).odd) || (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((*l_19)--), ((func_23(l_19, l_10, p_1708) >= 0x04DCL) && (((!(safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(0x9428L, 1UL, 0xC6DFL, 0x6520L)).z, 0x2B27L))) ^ l_1162) <= l_10)))), l_10))), 2)), l_10)))) == p_1708->g_721.x) , l_10) , p_1708->g_494[0][2]), p_1708) , l_1162), FAKE_DIVERGE(p_1708->local_0_offset, get_local_id(0), 10))), p_1708->g_851.f0))) && 1UL))))).yxxxxxxxyyyyyyyy, ((VECTOR(int8_t, 16))(1L))))).odd))).odd, ((VECTOR(int8_t, 4))(0L)), ((VECTOR(int8_t, 4))((-1L)))))).wzxzywxwwwwxwxyx)).s1a)).xxyxxxxxxyxyyxyx)).even)))).s17, ((VECTOR(uint8_t, 2))(251UL))))).yyyyxyyx))).s7, 1L, 0x48A6L)))).wwzzyyzz, ((VECTOR(int16_t, 8))(0x7503L))))).s67, (int16_t)l_10))).yyxyxyxy, ((VECTOR(int16_t, 8))(0L))))), ((VECTOR(int16_t, 2))((-2L))), l_1200, p_1708->g_454, ((VECTOR(int16_t, 2))(0x7965L)), (-1L), 0L)).s1a, ((VECTOR(int16_t, 2))(0L))))), 0x6149L, 0L, 0x317AL, ((VECTOR(int16_t, 4))((-7L))), ((VECTOR(int16_t, 4))(0x5C12L)), ((VECTOR(int16_t, 2))(0x0C37L)), 0L)).sdd, ((VECTOR(int16_t, 2))(8L))))).xxxxxxxx)), ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 2))((-7L))), 0L)).hi, ((VECTOR(int16_t, 8))((-1L)))))), ((VECTOR(int16_t, 8))(5L))))).odd, ((VECTOR(int16_t, 4))(0x28DFL))))).hi)).yxxxxxyy, ((VECTOR(uint16_t, 8))(0x81E8L)), ((VECTOR(uint16_t, 8))(0x4020L))))).hi)), ((VECTOR(uint16_t, 4))(65529UL))))).y) | 65535UL), l_1162)) , l_10);
    (*p_1708->g_1207) = p_1708->g_1206;
    if ((l_1163 == (p_1708->g_1208 = l_1164)))
    { /* block id: 613 */
        int8_t **l_1228 = &l_1164;
        VECTOR(int32_t, 16) l_1229 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
        int64_t *l_1252 = &p_1708->g_498;
        VECTOR(uint16_t, 2) l_1293 = (VECTOR(uint16_t, 2))(7UL, 2UL);
        VECTOR(uint16_t, 4) l_1294 = (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 65535UL), 65535UL);
        uint64_t ***l_1342[4][6] = {{&p_1708->g_590,&p_1708->g_590,(void*)0,&p_1708->g_590,&p_1708->g_590,&p_1708->g_590},{&p_1708->g_590,&p_1708->g_590,(void*)0,&p_1708->g_590,&p_1708->g_590,&p_1708->g_590},{&p_1708->g_590,&p_1708->g_590,(void*)0,&p_1708->g_590,&p_1708->g_590,&p_1708->g_590},{&p_1708->g_590,&p_1708->g_590,(void*)0,&p_1708->g_590,&p_1708->g_590,&p_1708->g_590}};
        VECTOR(int8_t, 8) l_1356 = (VECTOR(int8_t, 8))(0x0CL, (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 1L), 1L), 1L, 0x0CL, 1L);
        uint32_t l_1402 = 0x24924C72L;
        uint8_t *l_1407 = (void*)0;
        int32_t **l_1442 = &l_1204;
        uint64_t l_1444[8][6][1] = {{{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L}},{{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L}},{{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L}},{{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L}},{{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L}},{{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L}},{{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L}},{{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L},{0xB304F6D8EE26C749L}}};
        int i, j, k;
        if ((safe_sub_func_int64_t_s_s(l_1211, (&p_1708->g_590 != (void*)0))))
        { /* block id: 614 */
            int32_t **l_1212 = &p_1708->g_127[0];
            VECTOR(int16_t, 8) l_1224 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L));
            int8_t **l_1227 = (void*)0;
            int32_t l_1259 = 0x6ED0C6E5L;
            VECTOR(int32_t, 8) l_1260 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2E146F7BL), 0x2E146F7BL), 0x2E146F7BL, (-1L), 0x2E146F7BL);
            uint32_t l_1296 = 9UL;
            uint64_t ***l_1344 = (void*)0;
            VECTOR(uint32_t, 8) l_1408 = (VECTOR(uint32_t, 8))(0x466DE6DFL, (VECTOR(uint32_t, 4))(0x466DE6DFL, (VECTOR(uint32_t, 2))(0x466DE6DFL, 1UL), 1UL), 1UL, 0x466DE6DFL, 1UL);
            uint32_t *l_1415 = &p_1708->g_1270[4];
            uint32_t **l_1414 = &l_1415;
            int32_t l_1436 = (-9L);
            int i;
            (*l_1212) = (void*)0;
            for (p_1708->g_536.f3 = (-6); (p_1708->g_536.f3 > 2); ++p_1708->g_536.f3)
            { /* block id: 618 */
                int16_t l_1230 = 0x134FL;
                uint32_t l_1236 = 0x6CD1B181L;
                VECTOR(int32_t, 4) l_1251 = (VECTOR(int32_t, 4))(0x67E05AD7L, (VECTOR(int32_t, 2))(0x67E05AD7L, (-1L)), (-1L));
                int64_t *l_1253 = (void*)0;
                int32_t l_1255 = (-9L);
                uint64_t ***l_1295 = &p_1708->g_590;
                int32_t l_1309 = 1L;
                VECTOR(uint8_t, 16) l_1314 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL, (VECTOR(uint8_t, 2))(255UL, 1UL), (VECTOR(uint8_t, 2))(255UL, 1UL), 255UL, 1UL, 255UL, 1UL);
                VECTOR(uint8_t, 16) l_1316 = (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 255UL), 255UL), 255UL, 9UL, 255UL, (VECTOR(uint8_t, 2))(9UL, 255UL), (VECTOR(uint8_t, 2))(9UL, 255UL), 9UL, 255UL, 9UL, 255UL);
                VECTOR(int32_t, 16) l_1352 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2D4F2200L), 0x2D4F2200L), 0x2D4F2200L, 1L, 0x2D4F2200L, (VECTOR(int32_t, 2))(1L, 0x2D4F2200L), (VECTOR(int32_t, 2))(1L, 0x2D4F2200L), 1L, 0x2D4F2200L, 1L, 0x2D4F2200L);
                int32_t l_1384 = 1L;
                uint8_t l_1406 = 0x4DL;
                VECTOR(int8_t, 8) l_1434 = (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), (-7L)), (-7L)), (-7L), (-3L), (-7L));
                int i;
                (1 + 1);
            }
            (*p_1708->g_1361) = (void*)0;
        }
        else
        { /* block id: 688 */
            uint64_t l_1446[10] = {0x9F45F5B3D93B9651L,18446744073709551611UL,0UL,18446744073709551611UL,0x9F45F5B3D93B9651L,0x9F45F5B3D93B9651L,18446744073709551611UL,0UL,18446744073709551611UL,0x9F45F5B3D93B9651L};
            int i;
            l_1446[2] = (-1L);
        }
    }
    else
    { /* block id: 691 */
        VECTOR(int32_t, 8) l_1449 = (VECTOR(int32_t, 8))(0x057F0785L, (VECTOR(int32_t, 4))(0x057F0785L, (VECTOR(int32_t, 2))(0x057F0785L, 8L), 8L), 8L, 0x057F0785L, 8L);
        VECTOR(int32_t, 16) l_1450 = (VECTOR(int32_t, 16))(0x3C3043D1L, (VECTOR(int32_t, 4))(0x3C3043D1L, (VECTOR(int32_t, 2))(0x3C3043D1L, 0x634C7510L), 0x634C7510L), 0x634C7510L, 0x3C3043D1L, 0x634C7510L, (VECTOR(int32_t, 2))(0x3C3043D1L, 0x634C7510L), (VECTOR(int32_t, 2))(0x3C3043D1L, 0x634C7510L), 0x3C3043D1L, 0x634C7510L, 0x3C3043D1L, 0x634C7510L);
        VECTOR(int32_t, 4) l_1452 = (VECTOR(int32_t, 4))(0x3B047FD3L, (VECTOR(int32_t, 2))(0x3B047FD3L, 0x62F2886FL), 0x62F2886FL);
        VECTOR(int16_t, 16) l_1455 = (VECTOR(int16_t, 16))(0x6A42L, (VECTOR(int16_t, 4))(0x6A42L, (VECTOR(int16_t, 2))(0x6A42L, 0x38F4L), 0x38F4L), 0x38F4L, 0x6A42L, 0x38F4L, (VECTOR(int16_t, 2))(0x6A42L, 0x38F4L), (VECTOR(int16_t, 2))(0x6A42L, 0x38F4L), 0x6A42L, 0x38F4L, 0x6A42L, 0x38F4L);
        int32_t l_1456 = 1L;
        VECTOR(uint64_t, 4) l_1468 = (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x1E486C301B5369FEL), 0x1E486C301B5369FEL);
        uint64_t l_1472 = 0x5C19B97DA52F0BDFL;
        int64_t l_1473 = 0x60EFBFC8CF76AB6CL;
        int32_t ***l_1474 = &p_1708->g_1361;
        int16_t l_1475 = 1L;
        uint32_t ***l_1565 = (void*)0;
        int16_t l_1602 = (-1L);
        VECTOR(int32_t, 2) l_1628 = (VECTOR(int32_t, 2))((-1L), 0x04353EA3L);
        VECTOR(uint8_t, 16) l_1685 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 3UL), 3UL), 3UL, 255UL, 3UL, (VECTOR(uint8_t, 2))(255UL, 3UL), (VECTOR(uint8_t, 2))(255UL, 3UL), 255UL, 3UL, 255UL, 3UL);
        int i;
        if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(p_1708->g_1447.xyyyyyyx)).lo, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))((-10L), (-1L))).xxyyxyxxxyyxyyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_1708->g_1448.s162244c4)))).s47)).yyyy)))).yzwwwzwzyxxxxzxy))))).s2c06, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1449.s40)), ((VECTOR(int32_t, 8))(l_1450.s3b1b628a)), 0x158D04B8L, (-2L), ((VECTOR(int32_t, 2))(0x72DB9BF5L, 2L)), 0L, 0x4E235408L)).se97f, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_1708->g_1451.s2224144727632362)).sd6)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1452.xxzzyxww)).even)))))), (-1L), 0x2B0A4499L)).hi))), (l_1476 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(l_1453.scaf61d0e347147be)).sf9cf, (int32_t)((l_1203 != (p_1708->g_1454 , (void*)0)) >= ((VECTOR(int16_t, 8))(l_1455.s14618f8e)).s1), (int32_t)l_1456))).yxyyzzywxzzyyzzx, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(p_1708->g_1457.s54)).xyyy, ((VECTOR(int32_t, 16))(0x267CC131L, (~(safe_add_func_uint64_t_u_u((((((safe_sub_func_int8_t_s_s(l_1449.s4, (safe_add_func_uint8_t_u_u((l_1464 == ((FAKE_DIVERGE(p_1708->global_2_offset, get_global_id(2), 10) , (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 16))(0xDC244EF144E98A03L, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(p_1708->g_1467.yxyxyxyxyxxxyyxy)).se12d)), ((((((VECTOR(uint64_t, 8))(l_1468.yxwywyzx)).s3 , &p_1708->g_1270[4]) != &p_1708->g_1270[4]) ^ ((*l_1164) = (((VECTOR(int64_t, 4))(l_1469.se957)).y < FAKE_DIVERGE(p_1708->local_1_offset, get_local_id(1), 10)))) , ((((VECTOR(int8_t, 2))(0x7EL, (-1L))).even != ((safe_sub_func_int8_t_s_s(p_1708->g_1382.f6, l_1472)) , l_1468.w)) > l_1456)), 0x36CBC337DE11C740L, 0UL, 0x5B957B379F3ADE43L)), 0x12593EF2A568FA15L, ((VECTOR(uint64_t, 2))(0x4E8E1522C5F2CCD4L)), ((VECTOR(uint64_t, 2))(18446744073709551607UL)), 0xA37CFAABF9CD264BL, 0x90F4190D5946D96DL)).sdd, ((VECTOR(uint64_t, 2))(0xFB147C2E5B989521L))))), (uint64_t)1UL))).odd, l_1473))) >= p_1708->g_677.f0)), p_1708->g_87.s5)))) , l_1474) != (void*)0) & 0UL) | (*p_1708->g_100)), 0x790EC354CE3C6B73L))), l_1455.s6, l_1475, ((VECTOR(int32_t, 2))(0x06EEE742L)), ((VECTOR(int32_t, 8))(0x360A6912L)), 7L, 8L)).sda94))).wxzwwwzx, ((VECTOR(int32_t, 8))((-1L)))))), ((VECTOR(int32_t, 8))(0x422769E1L)))).sa9, ((VECTOR(int32_t, 2))(0L))))).yxyxyyyyyxyxxyyx))))).s0a)).xyyy, ((VECTOR(int32_t, 4))((-1L)))))).xyyzyyyx)).s45, ((VECTOR(int32_t, 2))(0x47499399L))))), 0x07C6E176L, 0L)).w), 0x34D761DCL, l_1477, ((VECTOR(int32_t, 8))(1L)), 0x4DA1F6BEL)).s21)).yxyy))).hi)).hi)
        { /* block id: 694 */
            int16_t l_1488 = (-1L);
            int16_t l_1496 = 0x3423L;
            int32_t l_1507 = 0x3C5B0099L;
            int32_t l_1509 = 0x6D136E08L;
            VECTOR(int8_t, 4) l_1511 = (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 0L), 0L);
            uint32_t l_1539 = 0xD47CE571L;
            int i;
            for (p_1708->g_847.f5 = (-21); (p_1708->g_847.f5 >= 8); p_1708->g_847.f5++)
            { /* block id: 697 */
                int32_t l_1489[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1489[i] = 0x78145633L;
                for (p_1708->g_491 = 0; (p_1708->g_491 == 11); p_1708->g_491 = safe_add_func_int8_t_s_s(p_1708->g_491, 2))
                { /* block id: 700 */
                    uint64_t l_1503 = 0UL;
                    VECTOR(int8_t, 2) l_1510 = (VECTOR(int8_t, 2))(0x3BL, (-8L));
                    int i;
                    for (l_1476 = 0; (l_1476 == 59); ++l_1476)
                    { /* block id: 703 */
                        int64_t l_1486[6];
                        VECTOR(int32_t, 16) l_1487 = (VECTOR(int32_t, 16))(0x005A7810L, (VECTOR(int32_t, 4))(0x005A7810L, (VECTOR(int32_t, 2))(0x005A7810L, 4L), 4L), 4L, 0x005A7810L, 4L, (VECTOR(int32_t, 2))(0x005A7810L, 4L), (VECTOR(int32_t, 2))(0x005A7810L, 4L), 0x005A7810L, 4L, 0x005A7810L, 4L);
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1486[i] = (-1L);
                        l_1486[1] = (safe_lshift_func_uint8_t_u_s((*p_1708->g_1208), (p_1708->g_536.f1 > (p_1708->g_632.se = 0x57L))));
                        l_1487.s2 &= 0x1F8184F7L;
                        l_1489[0] = l_1488;
                    }
                    for (p_1708->g_499 = (-29); (p_1708->g_499 == (-27)); ++p_1708->g_499)
                    { /* block id: 711 */
                        VECTOR(int32_t, 2) l_1504 = (VECTOR(int32_t, 2))(0x5C346E89L, 0x1DD5F4F5L);
                        int32_t l_1508 = 5L;
                        int i;
                        l_1509 = (((safe_mod_func_int64_t_s_s(((((safe_sub_func_int32_t_s_s(l_1496, l_1489[1])) <= (l_1449.s3 = ((p_1708->g_474.x = (((safe_sub_func_int64_t_s_s(0x5C8CDE34E3A5FC2FL, (&p_1708->g_494[0][0] == &p_1708->g_494[0][1]))) , (l_1508 ^= ((safe_mod_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1708->group_2_offset, get_group_id(2), 10), ((l_1503 & ((VECTOR(int32_t, 4))(l_1504.yyxx)).y) <= (GROUP_DIVERGE(0, 1) == (*p_1708->g_471))))) != ((safe_mul_func_uint8_t_u_u((((*p_1708->g_1208) = (((p_1708->g_1250.y || (l_1507 ^= ((VECTOR(int64_t, 4))(((&p_1708->g_842 != &p_1708->g_842) == 0xB07FL), l_1488, 0x7EB873DAFE4F1B9FL, 0x0C8D9A03D7B34AACL)).w)) , l_1503) ^ 0x55C8L)) >= p_1708->g_709.y), l_1504.x)) | l_1503)) && l_1504.x), l_1503)) & l_1504.x))) , (*p_1708->g_471))) < 18446744073709551614UL))) && (*p_1708->g_471)) < p_1708->g_87.s4), 5UL)) > 0x25L) <= p_1708->g_1219.s5);
                        (**l_1474) = ((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x19L, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(0x6DL, 1L, 0x1EL, 0L)).odd)).yxyxxxyyxyyxyxxy)).odd)).even)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(l_1510.xxxx)).xxwxxwzy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_1511.zxwwxyyw)).s15)).xyyyyxxx))).s5317714177012705)).s0430))), 0x20L, 0x70L, 1L)).s71)).hi , (safe_sub_func_int32_t_s_s(((((l_1507 = (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((0UL > l_1504.y), (((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x4A80L, 0x199DL)).hi, 2)), 0L, 0x38EFL, ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 8))(p_1708->g_1520.s8a3b1bf9)).s6036145116725566, (int16_t)(safe_unary_minus_func_int64_t_s(((((((safe_div_func_uint16_t_u_u((l_1509 != (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 2))(p_1708->g_1526.zw)).yyyyxyyy, ((VECTOR(uint16_t, 16))(0x0911L, 0x9392L, (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_1708->g_83.s3 , (safe_rshift_func_int16_t_s_s(((-6L) == l_1510.x), 8))), (safe_mul_func_uint16_t_u_u(0xAB03L, p_1708->g_1270[4])))), ((*p_1708->g_1207) , 0x6DL))), 65528UL, l_1489[0], 0x1AC2L, ((VECTOR(uint16_t, 4))(65535UL)), l_1510.y, ((VECTOR(uint16_t, 4))(65535UL)), 0xB9EEL)).hi))).s4, 0L))), 0x2B5DL)) , (*p_1708->g_548)) && l_1511.y) > l_1503) || (*p_1708->g_1208)) || l_1535)))))).s09ad, (int16_t)l_1449.s2, (int16_t)l_1489[1]))).hi)), 1L, 0x0B61L)), ((VECTOR(int16_t, 4))((-1L)))))), (-1L), ((VECTOR(int16_t, 8))((-9L))))).s7863, ((VECTOR(int16_t, 4))(0L))))).x , 0UL))), l_1504.y))) , p_1708->g_1536) != l_1538) > l_1489[1]), (*p_1708->g_100)))) , (*p_1708->g_1067));
                        return (*p_1708->g_1208);
                    }
                }
                if (l_1489[0])
                    break;
            }
            l_1539--;
        }
        else
        { /* block id: 726 */
            uint64_t ****l_1544 = &p_1708->g_589[2];
            VECTOR(uint8_t, 16) l_1546 = (VECTOR(uint8_t, 16))(0x45L, (VECTOR(uint8_t, 4))(0x45L, (VECTOR(uint8_t, 2))(0x45L, 1UL), 1UL), 1UL, 0x45L, 1UL, (VECTOR(uint8_t, 2))(0x45L, 1UL), (VECTOR(uint8_t, 2))(0x45L, 1UL), 0x45L, 1UL, 0x45L, 1UL);
            uint8_t *l_1548 = (void*)0;
            uint8_t *l_1549 = (void*)0;
            uint8_t *l_1550 = &p_1708->g_842;
            int32_t l_1553 = 0x24FECCC4L;
            int64_t l_1555[7][5];
            uint64_t *l_1556 = &p_1708->g_1557;
            uint64_t *l_1558[1][1][4];
            struct S0 ***l_1564 = &p_1708->g_1562[2];
            uint32_t ****l_1566 = &l_1565;
            uint16_t l_1626[4][1];
            int16_t l_1627 = (-6L);
            uint16_t l_1629 = 1UL;
            int32_t **l_1683 = &p_1708->g_127[0];
            uint32_t ****l_1690 = &p_1708->g_1567;
            uint16_t l_1701 = 0x335BL;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1555[i][j] = (-1L);
            }
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_1558[i][j][k] = (void*)0;
                }
            }
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1626[i][j] = 0xF62CL;
            }
            if (((p_1708->g_1559[0][0][1] = ((*l_1556) |= (((safe_sub_func_int16_t_s_s((((~(!((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 2))(0x82L, 251UL)), ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x7BL, 0xB0L)), 3UL, ((*p_1708->g_548) > (l_1544 != (void*)0)), 248UL, 0x80L, 0x90L, (+(*p_1708->g_1208)), 0UL, 248UL, 251UL, ((VECTOR(uint8_t, 2))(p_1708->g_1545.zy)), ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(l_1546.s9d8a925d)).hi, ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))(p_1708->g_1547.s5363)).lo, ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(255UL, (((((*l_1164) = 0L) & ((*l_1550) = ((VECTOR(uint8_t, 4))(GROUP_DIVERGE(1, 1), 255UL, 5UL, 0UL)).x)) <= (l_1553 = (safe_lshift_func_int16_t_s_s(0x6D15L, l_1546.se)))) || 7UL), 255UL, 252UL)), ((VECTOR(uint8_t, 4))(0xFAL))))).wxxzwwyx)), ((VECTOR(uint8_t, 8))(0UL))))).s63))).xxxx, ((VECTOR(uint8_t, 4))(0x53L))))).w, 0x95L, 1UL)).even, ((VECTOR(uint8_t, 8))(0xB8L))))).odd, ((VECTOR(uint8_t, 4))(1UL)), ((VECTOR(uint8_t, 4))(1UL))))).lo))).xxxy)).hi)).hi)) | p_1708->g_1554) ^ l_1546.s7), FAKE_DIVERGE(p_1708->group_1_offset, get_group_id(1), 10))) , l_1546.sb) && l_1555[5][1]))) , 0x26C5A34EL))
            { /* block id: 732 */
                uint64_t **l_1560 = &p_1708->g_548;
                (**l_1544) = l_1560;
            }
            else
            { /* block id: 734 */
                uint32_t l_1561 = 0x1B9DB724L;
                l_1553 ^= l_1561;
                return (*p_1708->g_1208);
            }
            if ((((*l_1564) = p_1708->g_1562[1]) != ((((*l_1566) = l_1565) == (p_1708->g_1567 = p_1708->g_1567)) , &p_1708->g_1563)))
            { /* block id: 741 */
                int32_t ***l_1586 = &p_1708->g_1361;
                int32_t ***l_1587[3];
                uint64_t l_1590 = 0x0F7A680331A57DBDL;
                int16_t *l_1600[8];
                int32_t l_1601 = 0x4813F702L;
                int32_t l_1603 = 0x06A3382CL;
                int32_t l_1604 = 0x01E5455DL;
                int64_t *l_1624 = &l_1391;
                uint16_t *l_1625 = &p_1708->g_1559[0][4][1];
                int i;
                for (i = 0; i < 3; i++)
                    l_1587[i] = &p_1708->g_1361;
                for (i = 0; i < 8; i++)
                    l_1600[i] = &p_1708->g_1554;
                if ((atomic_inc(&p_1708->g_atomic_input[7 * get_linear_group_id() + 6]) == 8))
                { /* block id: 743 */
                    uint16_t l_1569 = 0UL;
                    ++l_1569;
                    unsigned int result = 0;
                    result += l_1569;
                    atomic_add(&p_1708->g_special_values[7 * get_linear_group_id() + 6], result);
                }
                else
                { /* block id: 745 */
                    (1 + 1);
                }
                l_1604 |= (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((l_1553 = (l_1601 = (0L > (safe_mul_func_uint8_t_u_u(0x29L, ((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 16))(((l_1586 = (void*)0) != (l_1587[1] = &p_1708->g_1361)), 2UL, 0x4B6D41445EE5DEC6L, ((VECTOR(uint64_t, 2))(1UL, 0xFD6ADDA36D1C2179L)), 1UL, (safe_mul_func_uint16_t_u_u(l_1590, p_1708->g_159.s9)), ((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 2))(0x12F4ABFFCCF6A958L, 4UL)).yyyx, ((VECTOR(uint64_t, 16))(p_1708->g_1591.s4476442116206374)).s709c))), ((safe_add_func_uint64_t_u_u((**p_1708->g_590), (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 16))(p_1708->g_1596.s960b071502dab026)).sa98c, ((VECTOR(uint64_t, 4))(p_1708->g_1597.xyxx))))).even)).xyxy)).x, (18446744073709551615UL > (+((safe_div_func_uint16_t_u_u(0xA803L, l_1553)) == 1L))))))) != l_1555[5][1]), 0xAC878FCDFEB1F996L, 0UL, 18446744073709551615UL, 9UL)), ((VECTOR(uint64_t, 16))(0x6B5CB1A448FE2BFDL))))), ((VECTOR(uint64_t, 16))(18446744073709551611UL))))).s4 != l_1590), 2)) || l_1555[5][1]), l_1590)) != l_1590), 5)) , l_1546.se), 0x49L)) > l_1590)))))) && l_1602), 0x1E20L)), l_1603));
                l_1626[3][0] |= (~(((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_1605.s51f51131)).s60)).hi , p_1708->g_1606[2][4]) , ((*l_1625) = ((((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((l_1555[4][2] < l_1615.y) , (((*l_1381) , &l_19) != (void*)0)) > (safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((0UL >= ((*l_1624) = ((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 16))((*p_1708->g_100), ((safe_mul_func_int8_t_s_s((1UL != l_1546.sf), 0x51L)) > l_1546.sd), l_1555[5][1], 1UL, ((VECTOR(uint32_t, 4))(0UL)), ((VECTOR(uint32_t, 4))(0x96009AD8L)), 4294967295UL, ((VECTOR(uint32_t, 2))(0x34B0EFFDL)), 0xE4EFE8EDL)).s8, GROUP_DIVERGE(0, 1))) , p_1708->g_142))), 0)) & 1UL), l_1473))), 0x4C3CL)), 9)), 255UL)) & 4294967287UL) , 0x723BL) > 0L))) == p_1708->g_29));
            }
            else
            { /* block id: 756 */
                int32_t l_1633 = 0x02B3F54CL;
                struct S0 **l_1640 = &p_1708->g_1563;
                VECTOR(int32_t, 16) l_1669 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 8L), 8L), 8L, 1L, 8L, (VECTOR(int32_t, 2))(1L, 8L), (VECTOR(int32_t, 2))(1L, 8L), 1L, 8L, 1L, 8L);
                uint16_t l_1684 = 65535UL;
                uint32_t *****l_1688 = (void*)0;
                uint32_t *****l_1689 = &l_1566;
                int64_t *l_1691[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t *l_1693[6] = {&p_1708->g_1386,&p_1708->g_1386,&p_1708->g_1386,&p_1708->g_1386,&p_1708->g_1386,&p_1708->g_1386};
                uint32_t **l_1692[4][1];
                uint16_t l_1702 = 0x76A6L;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1692[i][j] = &l_1693[3];
                }
                if (l_1627)
                { /* block id: 757 */
                    return (*p_1708->g_1208);
                }
                else
                { /* block id: 759 */
                    uint16_t *l_1632 = &p_1708->g_851.f0;
                    int32_t l_1634 = 0L;
                    uint16_t *l_1635 = &p_1708->g_494[3][2];
                    uint64_t *****l_1658 = &l_1544;
                    int16_t *l_1666 = (void*)0;
                    int16_t *l_1667 = &l_1627;
                    int32_t ***l_1674 = &p_1708->g_1361;
                    l_1634 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, (-6L))), (-1L), 1L)).wyzwzwyw)).s77, ((VECTOR(int32_t, 2))(l_1628.xy))))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x793BE41BL, 0x67AEBB1BL)), ((VECTOR(int32_t, 4))((FAKE_DIVERGE(p_1708->group_1_offset, get_group_id(1), 10) , (l_1629 = 0x01AFEC1EL)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((((*p_1708->g_1208) > (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 4))((((*l_1632) = p_1708->g_1454.f3) | ((((l_1450.sa = (4294967292UL | l_1633)) | l_1634) || (((((*l_1635) = (l_1634 && (~(65527UL || 65528UL)))) == l_1633) || 1L) < 0x4EL)) != l_1634)), 0xEC37L, 0x1BCFL, 1UL)).xwxxxzyzyzwxwwyy))).s44)).yyxy))).even)).hi, 9))) >= l_1633), ((VECTOR(int32_t, 2))(0x00DD038CL)), l_1634, 0x4F69674BL, 0L, 0x77135672L, 2L)).s11)), 0L)), 0x429B0536L, 0x3AC46406L)).s44))), ((VECTOR(int32_t, 2))(0x2BF6251CL)), l_1633, l_1634, (-9L), 1L)).s4;
                    l_1450.s0 ^= ((safe_div_func_uint32_t_u_u(l_1634, (safe_div_func_uint64_t_u_u((((*l_1564) == l_1640) , (((((safe_lshift_func_int16_t_s_s((-8L), 11)) && (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_1708->g_1645.s9e29)))), ((VECTOR(int16_t, 8))(1L, (((VECTOR(int8_t, 2))(2L, 0x3BL)).lo && ((~(safe_add_func_uint16_t_u_u(l_1633, (safe_add_func_uint32_t_u_u(((p_1708->g_119.y ^ ((*l_1667) = (((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((--(*p_1708->g_1208)), 7)) && ((l_1553 ^= ((p_1708->g_1659[8] = ((*l_1658) = &p_1708->g_589[2])) != &p_1708->g_589[1])) == (safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(0x5BB29A1BL, (*p_1708->g_100))), 7)) ^ 0L), l_1546.s4)))), 8)) , (*p_1708->g_1208)) | p_1708->g_188[4]))) , 0x4255FA7FL), 0xFF94FDEAL))))) , (-1L))), 7L, ((VECTOR(int16_t, 4))(0x3F20L)), 0x48AAL)).odd, ((VECTOR(int16_t, 4))(0x0F33L))))).y, l_1668))) || l_1633) || (*p_1708->g_1208)) , l_1633)), 0x2A541E781FF1C732L)))) && p_1708->g_616.x);
                    l_1634 ^= ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1669.s62c87538)).s47)).xyyyyxxxxyyxxxyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(0x0FEEL, 0x48B2L)).yyyyyyyyxyxyxxyy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 4))(((safe_rshift_func_int8_t_s_s(l_1633, 2)) && (&p_1708->g_601[3][3] == l_1674)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(6L, 0L, (safe_mul_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(p_1708->g_1681.s1617166773053716)).sbf7a, ((VECTOR(uint16_t, 4))(0x0ED3L, 9UL, 65533UL, 0x7E19L))))).y & (safe_unary_minus_func_uint16_t_u(((*l_1635) = (l_1683 == &l_1205[6]))))), ((*l_1632) &= p_1708->g_677.f6))), l_1684)) ^ (p_1708->g_1386 != 0L)), p_1708->g_1248.s7)), ((VECTOR(int8_t, 4))((-10L))), (-1L))).s23)).yyyyyxyx, ((VECTOR(int8_t, 8))((-1L)))))).s47)), 0x31L)).xywzxwzzzxyyzwwy, ((VECTOR(uint8_t, 16))(0x45L))))).odd, ((VECTOR(int16_t, 8))((-1L)))))).s31, ((VECTOR(int16_t, 2))(5L))))).xxxx)).lo)), 0x3E73L, 9L)).yzzywxzwzwxywzxy))).s48, ((VECTOR(int16_t, 2))(4L))))))).yxyyxyxxxyyxyyyx, ((VECTOR(int16_t, 16))(0x22DDL))))).sd911)).yxzyyyzzzxzwyxzx, ((VECTOR(uint16_t, 16))(65528UL))))).s66)), l_1685.s7, 0L, ((VECTOR(int32_t, 8))(0x5BBC6626L)), ((VECTOR(int32_t, 4))(0x7AB548CDL))))))), ((VECTOR(int32_t, 16))(0L))))).s3;
                }
                l_1452.w |= ((safe_rshift_func_int8_t_s_u(0L, ((((*p_1708->g_471) , ((p_1708->g_comm_values[p_1708->tid] = (((*l_1689) = &p_1708->g_1567) != (((*p_1708->g_100) || 0UL) , l_1690))) && (l_1204 != (p_1708->g_1694[1] = &p_1708->g_1386)))) , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(0x56105C8CF041155CL, (safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s(((~((safe_mod_func_int16_t_s_s((((((*p_1708->g_1207) , 1UL) , &l_1690) == (void*)0) | 0xE031L), l_1602)) , l_1669.s6)) ^ (*p_1708->g_100)), 0x22EFL)), FAKE_DIVERGE(p_1708->group_0_offset, get_group_id(0), 10))), 0x7E74D0DCD5FEEA2DL, 0L)).zwwxyxzyzwzzzwxz)).s9) <= p_1708->g_1382.f5))) , l_1701);
                --l_1702;
                for (l_1162 = (-4); (l_1162 != 32); l_1162 = safe_add_func_uint32_t_u_u(l_1162, 1))
                { /* block id: 782 */
                    if (l_1684)
                        break;
                    return (*p_1708->g_1208);
                }
            }
        }
        l_1450.s9 |= l_1707;
        return (*p_1708->g_1208);
    }
    return (*p_1708->g_1208);
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_847.f3 p_1708->g_706
 * writes: p_1708->g_847.f3 p_1708->g_127
 */
int32_t  func_8(int32_t  p_9, struct S1 * p_1708)
{ /* block id: 568 */
    int32_t *l_1195[7][2];
    uint64_t *l_1196[5];
    int32_t **l_1198[6][3][1] = {{{&p_1708->g_127[0]},{&p_1708->g_127[0]},{&p_1708->g_127[0]}},{{&p_1708->g_127[0]},{&p_1708->g_127[0]},{&p_1708->g_127[0]}},{{&p_1708->g_127[0]},{&p_1708->g_127[0]},{&p_1708->g_127[0]}},{{&p_1708->g_127[0]},{&p_1708->g_127[0]},{&p_1708->g_127[0]}},{{&p_1708->g_127[0]},{&p_1708->g_127[0]},{&p_1708->g_127[0]}},{{&p_1708->g_127[0]},{&p_1708->g_127[0]},{&p_1708->g_127[0]}}};
    uint32_t l_1199 = 0x80208A40L;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
            l_1195[i][j] = (void*)0;
    }
    for (i = 0; i < 5; i++)
        l_1196[i] = &p_1708->g_536.f6;
    for (p_1708->g_847.f3 = 0; (p_1708->g_847.f3 <= (-16)); --p_1708->g_847.f3)
    { /* block id: 571 */
        if ((atomic_inc(&p_1708->g_atomic_input[7 * get_linear_group_id() + 5]) == 6))
        { /* block id: 573 */
            int32_t l_1167[8][2] = {{0x53B180A0L,0x53B180A0L},{0x53B180A0L,0x53B180A0L},{0x53B180A0L,0x53B180A0L},{0x53B180A0L,0x53B180A0L},{0x53B180A0L,0x53B180A0L},{0x53B180A0L,0x53B180A0L},{0x53B180A0L,0x53B180A0L},{0x53B180A0L,0x53B180A0L}};
            uint16_t l_1182 = 0x5252L;
            int i, j;
            for (l_1167[5][1] = (-16); (l_1167[5][1] == 9); l_1167[5][1] = safe_add_func_int32_t_s_s(l_1167[5][1], 5))
            { /* block id: 576 */
                int32_t l_1170 = (-4L);
                int32_t l_1171 = 0x6998EF2AL;
                int16_t l_1172[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
                int i;
                l_1172[5] = (l_1171 |= l_1170);
                for (l_1172[5] = 17; (l_1172[5] <= (-24)); --l_1172[5])
                { /* block id: 581 */
                    struct S0 l_1175 = {65535UL,0x6EB5E36B1A1D4487L,0x0AL,0x51L,0xE1B80BA682F4A48FL,0UL,0x4EFE157189B1474AL};/* VOLATILE GLOBAL l_1175 */
                    struct S0 l_1176[6][8][2] = {{{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}}},{{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}}},{{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}}},{{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}}},{{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}}},{{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}},{{65532UL,0x273DBD8850A7900BL,1UL,1L,0x6ADE81D79FDBDAD7L,18446744073709551611UL,0xEBE53011C2DF93F7L},{2UL,0x29312C7447B09DE3L,0x97L,-7L,0xFA067DCBC979D613L,9UL,0xE147CA49309CD332L}}}};
                    struct S0 l_1177 = {0UL,3L,5UL,0x5DL,0x70B849AB08C86311L,18446744073709551608UL,0xE9A1173F0CE0D0B2L};/* VOLATILE GLOBAL l_1177 */
                    struct S0 l_1178 = {4UL,4L,4UL,0L,0xCCF6CEAF9982C2FCL,18446744073709551609UL,1UL};/* VOLATILE GLOBAL l_1178 */
                    struct S0 l_1179 = {65535UL,0x7022805596A34815L,0x59L,0x63L,0xFCBE88DDBF08C6AEL,0xC9B8BC6E31AC7B27L,0xFD5AB27F4D79B6AAL};/* VOLATILE GLOBAL l_1179 */
                    int32_t l_1181 = 1L;
                    int32_t *l_1180 = &l_1181;
                    int i, j, k;
                    l_1176[1][5][0] = l_1175;
                    l_1176[1][2][1] = l_1177;
                    l_1179 = l_1178;
                    l_1180 = (void*)0;
                }
                l_1170 = 0x4B6456DCL;
            }
            l_1182 |= 0x004314B9L;
            for (l_1167[2][1] = (-21); (l_1167[2][1] < 7); l_1167[2][1]++)
            { /* block id: 592 */
                int32_t l_1185 = (-9L);
                int32_t *l_1193 = &l_1185;
                int32_t *l_1194 = (void*)0;
                for (l_1185 = 13; (l_1185 != (-21)); --l_1185)
                { /* block id: 595 */
                    uint16_t l_1188[1][10][10] = {{{65534UL,1UL,0xB55FL,1UL,0xB55FL,1UL,65534UL,1UL,0x8A49L,0x8A49L},{65534UL,1UL,0xB55FL,1UL,0xB55FL,1UL,65534UL,1UL,0x8A49L,0x8A49L},{65534UL,1UL,0xB55FL,1UL,0xB55FL,1UL,65534UL,1UL,0x8A49L,0x8A49L},{65534UL,1UL,0xB55FL,1UL,0xB55FL,1UL,65534UL,1UL,0x8A49L,0x8A49L},{65534UL,1UL,0xB55FL,1UL,0xB55FL,1UL,65534UL,1UL,0x8A49L,0x8A49L},{65534UL,1UL,0xB55FL,1UL,0xB55FL,1UL,65534UL,1UL,0x8A49L,0x8A49L},{65534UL,1UL,0xB55FL,1UL,0xB55FL,1UL,65534UL,1UL,0x8A49L,0x8A49L},{65534UL,1UL,0xB55FL,1UL,0xB55FL,1UL,65534UL,1UL,0x8A49L,0x8A49L},{65534UL,1UL,0xB55FL,1UL,0xB55FL,1UL,65534UL,1UL,0x8A49L,0x8A49L},{65534UL,1UL,0xB55FL,1UL,0xB55FL,1UL,65534UL,1UL,0x8A49L,0x8A49L}}};
                    uint64_t l_1189 = 18446744073709551614UL;
                    uint64_t l_1190 = 0x784282C7A28CB57AL;
                    int i, j, k;
                    l_1189 ^= l_1188[0][0][6];
                    l_1190--;
                }
                l_1194 = (l_1193 = l_1193);
            }
            unsigned int result = 0;
            int l_1167_i0, l_1167_i1;
            for (l_1167_i0 = 0; l_1167_i0 < 8; l_1167_i0++) {
                for (l_1167_i1 = 0; l_1167_i1 < 2; l_1167_i1++) {
                    result += l_1167[l_1167_i0][l_1167_i1];
                }
            }
            result += l_1182;
            atomic_add(&p_1708->g_special_values[7 * get_linear_group_id() + 5], result);
        }
        else
        { /* block id: 602 */
            (1 + 1);
        }
    }
    (*p_1708->g_706) = l_1195[3][0];
    l_1199 = (p_9 | (!p_9));
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_31 p_1708->g_29 p_1708->g_1067 p_1708->g_127 p_1708->g_comm_values
 * writes: p_1708->g_31 p_1708->g_29 p_1708->g_127
 */
int16_t  func_23(uint64_t * p_24, int64_t  p_25, struct S1 * p_1708)
{ /* block id: 6 */
    int32_t l_30 = 0L;
    uint64_t *l_55 = &p_1708->g_31;
    int16_t *l_532 = &p_1708->g_499;
    uint64_t l_962 = 0xB7C9C8D6C5D5ADF1L;
    int32_t *l_1159 = (void*)0;
    for (p_25 = 0; (p_25 == (-3)); p_25 = safe_sub_func_int8_t_s_s(p_25, 5))
    { /* block id: 9 */
        int32_t *l_28[10][6] = {{(void*)0,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29},{(void*)0,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29},{(void*)0,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29},{(void*)0,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29},{(void*)0,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29},{(void*)0,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29},{(void*)0,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29},{(void*)0,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29},{(void*)0,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29},{(void*)0,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29,&p_1708->g_29}};
        VECTOR(int8_t, 16) l_45 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x0BL), 0x0BL), 0x0BL, (-1L), 0x0BL, (VECTOR(int8_t, 2))((-1L), 0x0BL), (VECTOR(int8_t, 2))((-1L), 0x0BL), (-1L), 0x0BL, (-1L), 0x0BL);
        int16_t *l_533 = &p_1708->g_499;
        int i, j;
        p_1708->g_31--;
    }
    for (p_1708->g_29 = 0; (p_1708->g_29 > 17); ++p_1708->g_29)
    { /* block id: 561 */
        volatile int64_t **l_1157 = (void*)0;
        int32_t **l_1158 = &p_1708->g_127[0];
        l_1157 = &p_1708->g_471;
        (*l_1158) = (*p_1708->g_1067);
    }
    l_1159 = (void*)0;
    return p_1708->g_comm_values[p_1708->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_536.f3 p_1708->g_548 p_1708->g_31 p_1708->g_100 p_1708->g_101 p_1708->g_191 p_1708->g_87 p_1708->g_847.f3 p_1708->g_677.f0 p_1708->g_195 p_1708->g_127 p_1708->g_29 p_1708->g_126 p_1708->g_536.f5 p_1708->g_52 p_1708->g_1027 p_1708->g_1029 p_1708->g_851.f0 p_1708->g_847.f5 p_1708->g_1038 p_1708->g_1044 p_1708->g_1049 p_1708->g_632 p_1708->g_110 p_1708->g_724 p_1708->g_471 p_1708->g_472 p_1708->g_706 p_1708->g_563 p_1708->g_1067 p_1708->g_930 p_1708->g_1086 p_1708->g_1088 p_1708->g_847.f6 p_1708->g_536.f0 p_1708->g_709 p_1708->g_677.f6
 * writes: p_1708->g_536.f3 p_1708->g_940 p_1708->g_847.f0 p_1708->g_847.f3 p_1708->g_31 p_1708->g_29 p_1708->g_101 p_1708->g_1027 p_1708->g_127 p_1708->g_851.f0 p_1708->g_847.f5 p_1708->g_930 p_1708->g_1044 p_1708->g_1088 p_1708->g_847.f6 p_1708->g_110 p_1708->g_536.f0 p_1708->g_941
 */
int32_t * func_34(uint64_t * p_35, uint64_t * p_36, struct S1 * p_1708)
{ /* block id: 455 */
    VECTOR(int32_t, 4) l_979 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L));
    VECTOR(uint8_t, 4) l_982 = (VECTOR(uint8_t, 4))(0x0AL, (VECTOR(uint8_t, 2))(0x0AL, 255UL), 255UL);
    uint8_t *l_983 = (void*)0;
    uint8_t *l_984 = (void*)0;
    uint8_t *l_985 = (void*)0;
    VECTOR(int32_t, 4) l_992 = (VECTOR(int32_t, 4))(0x42E5FA98L, (VECTOR(int32_t, 2))(0x42E5FA98L, 0x47819C58L), 0x47819C58L);
    VECTOR(int32_t, 4) l_993 = (VECTOR(int32_t, 4))(0x678C7BD7L, (VECTOR(int32_t, 2))(0x678C7BD7L, (-1L)), (-1L));
    int8_t *l_998 = &p_1708->g_847.f3;
    int8_t l_999 = (-1L);
    int32_t l_1000 = 0x70584E36L;
    int32_t l_1011 = 0x19D3EB7EL;
    int64_t l_1013[6] = {0L,0L,0L,0L,0L,0L};
    VECTOR(uint32_t, 16) l_1016 = (VECTOR(uint32_t, 16))(0x0B1625B4L, (VECTOR(uint32_t, 4))(0x0B1625B4L, (VECTOR(uint32_t, 2))(0x0B1625B4L, 1UL), 1UL), 1UL, 0x0B1625B4L, 1UL, (VECTOR(uint32_t, 2))(0x0B1625B4L, 1UL), (VECTOR(uint32_t, 2))(0x0B1625B4L, 1UL), 0x0B1625B4L, 1UL, 0x0B1625B4L, 1UL);
    VECTOR(int64_t, 4) l_1054 = (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 8L), 8L);
    int32_t ***l_1107 = (void*)0;
    int8_t l_1143 = (-1L);
    uint64_t *l_1146 = &p_1708->g_851.f6;
    int16_t l_1151 = 1L;
    int64_t l_1152 = 1L;
    int32_t *l_1153 = (void*)0;
    int i;
    for (p_1708->g_536.f3 = (-21); (p_1708->g_536.f3 <= (-18)); p_1708->g_536.f3 = safe_add_func_int8_t_s_s(p_1708->g_536.f3, 1))
    { /* block id: 458 */
        int32_t *l_978 = (void*)0;
        return l_978;
    }
    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(l_979.zz)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((((*p_1708->g_548) & (+((safe_lshift_func_uint8_t_u_s((p_1708->g_940.x = ((VECTOR(uint8_t, 4))(l_982.wwyz)).y), 0)) != ((VECTOR(int64_t, 2))(0x4883944B71F010BBL, 0x0196D5D40AF109A0L)).hi))) < ((safe_lshift_func_uint16_t_u_u(0x097AL, ((6UL != l_979.w) > ((*p_1708->g_100) | ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_992.yw)).yxxyxyyyxxxyxyyx)).s74ce, ((VECTOR(int32_t, 16))(l_993.zwzzwxxzwxywwzyw)).s6c1e))).xzzwywwy)).s1 & ((((VECTOR(uint8_t, 4))(l_982.x, 0x12L, 0xE4L, 250UL)).x > (safe_div_func_int32_t_s_s(0x5FDC75DEL, ((((p_1708->g_847.f0 = p_1708->g_191.x) | (safe_lshift_func_int8_t_s_u(((*l_998) |= p_1708->g_87.s0), l_999))) , l_979.x) , l_993.z)))) < 4UL)), p_1708->g_677.f0)) < l_982.z), 0)) >= GROUP_DIVERGE(1, 1)))))) && l_1000)), (**p_1708->g_195), 0x309E6BD4L, l_992.w, ((VECTOR(int32_t, 4))((-1L))))).s2, ((VECTOR(int32_t, 2))(0x6090D9A3L)), (-1L))).hi))).yxyxxxxy)).s3)
    { /* block id: 464 */
        return (*p_1708->g_126);
    }
    else
    { /* block id: 466 */
        int32_t *l_1001 = &p_1708->g_29;
        int32_t *l_1002 = (void*)0;
        int32_t *l_1003 = (void*)0;
        int32_t *l_1004 = &l_1000;
        int32_t *l_1005 = (void*)0;
        int32_t l_1006[7] = {1L,1L,1L,1L,1L,1L,1L};
        int32_t *l_1007 = &l_1000;
        int32_t *l_1008 = &l_1006[3];
        int32_t *l_1009[1][1][10];
        int8_t l_1010 = 4L;
        int32_t l_1012 = (-6L);
        int64_t l_1014 = 1L;
        int32_t l_1015 = 0x6420365AL;
        int32_t l_1025[1][3][3] = {{{(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L)}}};
        uint64_t *l_1026 = &p_1708->g_454;
        uint8_t l_1081 = 0x78L;
        int8_t **l_1089 = (void*)0;
        int32_t *l_1115 = &l_1025[0][1][2];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 10; k++)
                    l_1009[i][j][k] = (void*)0;
            }
        }
        ++l_1016.s0;
        if (l_993.w)
        { /* block id: 468 */
            VECTOR(uint64_t, 8) l_1021 = (VECTOR(uint64_t, 8))(0xD4D484A7E12CAAD9L, (VECTOR(uint64_t, 4))(0xD4D484A7E12CAAD9L, (VECTOR(uint64_t, 2))(0xD4D484A7E12CAAD9L, 0xC43BE92CFA2BD16DL), 0xC43BE92CFA2BD16DL), 0xC43BE92CFA2BD16DL, 0xD4D484A7E12CAAD9L, 0xC43BE92CFA2BD16DL);
            int32_t l_1022 = 0x507447FBL;
            int i;
            (*l_1007) = (safe_sub_func_int8_t_s_s((((*l_1001) = (((VECTOR(uint8_t, 8))(p_1708->g_536.f5, ((VECTOR(uint8_t, 2))(0xA5L, 255UL)), 0x46L, 0xE9L, (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_1021.s0025)).yzzywzwwwywwzyxz)).sd5)).lo <= (++(*p_1708->g_548))), 0x60L, 0UL)).s2 < (l_1025[0][1][2] ^ p_1708->g_52.s5))) & ((*p_1708->g_100) = (*p_1708->g_100))), ((void*)0 == l_1026)));
        }
        else
        { /* block id: 473 */
            volatile struct S0 *l_1028 = &p_1708->g_1027;
            int32_t l_1032 = 0x1927CD5AL;
            uint32_t **l_1066 = (void*)0;
            (*l_1028) = p_1708->g_1027;
            (*p_1708->g_1029) = &l_1006[3];
            for (p_1708->g_851.f0 = 0; (p_1708->g_851.f0 <= 12); p_1708->g_851.f0++)
            { /* block id: 478 */
                uint64_t l_1033 = 0x02818446B00F8CD7L;
                uint32_t *l_1043 = (void*)0;
                l_1033--;
                for (p_1708->g_847.f5 = 0; (p_1708->g_847.f5 != 39); ++p_1708->g_847.f5)
                { /* block id: 482 */
                    int16_t *l_1059 = (void*)0;
                    int16_t *l_1060 = (void*)0;
                    int16_t *l_1061[8][1];
                    int32_t l_1062 = 3L;
                    int32_t *l_1063 = &l_1015;
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1061[i][j] = &p_1708->g_499;
                    }
                    if ((**p_1708->g_195))
                        break;
                    (*l_1028) = p_1708->g_1038;
                    (*l_1008) |= (((VECTOR(int64_t, 8))(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((l_1043 == (p_1708->g_1044 , &p_1708->g_101[1])), 14)), (0x5D888AA2E075585CL & (+((safe_add_func_uint64_t_u_u((((*l_1063) = (((l_1032 || l_993.y) > ((VECTOR(int32_t, 4))((-9L), (-9L), 2L, 0x6169147DL)).y) >= (((VECTOR(uint8_t, 16))(p_1708->g_1049.s2055147711246257)).se == ((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((~((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_1054.yw)).xyxxxyxx)), ((VECTOR(int64_t, 2))(0L, 5L)).yxyyxyyx))).s7) | ((safe_mul_func_int8_t_s_s(l_1033, l_1013[5])) , (safe_rshift_func_int16_t_s_u((l_992.z = p_1708->g_632.s8), p_1708->g_110)))), p_1708->g_724.y)), 0x7CL)) ^ l_1062)))) , 0x8ABE97556C495104L), 0x6C802A406B8A3E77L)) >= l_1062))))) , (*l_1007)), (*p_1708->g_471), 0x102926E8DA0E9440L, 0x764D7E15CAEB34AAL, ((VECTOR(int64_t, 4))(0x083E429D551F23E6L)))).s0 & FAKE_DIVERGE(p_1708->local_2_offset, get_local_id(2), 10));
                    if ((**p_1708->g_706))
                        break;
                }
            }
            (*p_1708->g_1067) = func_60((safe_sub_func_int16_t_s_s(p_1708->g_563.s0, l_1032)), &p_1708->g_29, ((void*)0 == l_1066), l_1026, p_1708);
        }
        for (p_1708->g_536.f3 = 0; (p_1708->g_536.f3 > (-26)); p_1708->g_536.f3 = safe_sub_func_uint8_t_u_u(p_1708->g_536.f3, 4))
        { /* block id: 495 */
            int32_t l_1070 = 7L;
            int32_t l_1071 = 0x41801DCCL;
            int32_t l_1072 = (-1L);
            int32_t l_1073 = (-10L);
            int8_t l_1074[4][9][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
            int64_t l_1075 = 0x135310963643EB7DL;
            int32_t l_1076[1][4] = {{0x5496333EL,0x5496333EL,0x5496333EL,0x5496333EL}};
            int32_t l_1077 = 0x38970766L;
            int32_t l_1078 = 1L;
            int16_t l_1079[7] = {8L,8L,8L,8L,8L,8L,8L};
            int32_t l_1080[9][10][2] = {{{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L}},{{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L}},{{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L}},{{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L}},{{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L}},{{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L}},{{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L}},{{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L}},{{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L},{1L,2L}}};
            int i, j, k;
            (*l_1004) ^= 0x2F956AC0L;
            l_1081--;
        }
        for (p_1708->g_930 = (-8); (p_1708->g_930 != (-23)); p_1708->g_930 = safe_sub_func_uint16_t_u_u(p_1708->g_930, 3))
        { /* block id: 501 */
            volatile struct S0 *l_1087 = &p_1708->g_1044;
            VECTOR(int32_t, 2) l_1111 = (VECTOR(int32_t, 2))((-6L), (-10L));
            int32_t *l_1116 = &p_1708->g_29;
            int i;
            (*l_1087) = p_1708->g_1086;
            p_1708->g_1088 = (l_1089 = p_1708->g_1088);
            for (p_1708->g_847.f6 = (-25); (p_1708->g_847.f6 == 47); p_1708->g_847.f6++)
            { /* block id: 507 */
                uint16_t *l_1100 = &p_1708->g_851.f0;
                int32_t l_1108 = 0x69B999E3L;
                uint8_t l_1109 = 0x40L;
                for (p_1708->g_110 = 0; (p_1708->g_110 < (-24)); p_1708->g_110 = safe_sub_func_uint64_t_u_u(p_1708->g_110, 8))
                { /* block id: 510 */
                    uint64_t l_1103 = 6UL;
                    int32_t l_1104[4][5][3] = {{{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L}},{{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L}},{{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L}},{{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L},{1L,0x2DC8A052L,1L}}};
                    int i, j, k;
                    if ((((p_1708->g_536.f0 |= l_1054.z) > (safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((void*)0 != l_1100), (safe_add_func_int16_t_s_s((0xB3L <= 0x45L), (((((l_1104[0][0][1] = l_1103) == (safe_sub_func_int64_t_s_s(0L, ((65530UL >= (~((((((((((*p_1708->g_471) , (*p_1708->g_100)) && FAKE_DIVERGE(p_1708->local_0_offset, get_local_id(0), 10)) == p_1708->g_709.x) , &l_1006[3]) == &p_1708->g_29) & 1L) , l_999) , &p_1708->g_601[3][3]) == l_1107))) < l_1108)))) >= p_1708->g_677.f6) < FAKE_DIVERGE(p_1708->group_0_offset, get_group_id(0), 10)) == l_1109))))), 0x4AL)) , FAKE_DIVERGE(p_1708->group_2_offset, get_group_id(2), 10)) >= l_1109), 1))) || 255UL))
                    { /* block id: 513 */
                        int32_t l_1110 = (-9L);
                        (*l_1001) = l_1110;
                    }
                    else
                    { /* block id: 515 */
                        uint32_t l_1112 = 0xE1EDBC3EL;
                        ++l_1112;
                    }
                    return l_1116;
                }
                if ((**p_1708->g_1067))
                    continue;
            }
        }
    }
    if ((atomic_inc(&p_1708->l_atomic_input[2]) == 3))
    { /* block id: 525 */
        int32_t l_1117 = 1L;
        for (l_1117 = (-10); (l_1117 == 2); ++l_1117)
        { /* block id: 528 */
            uint16_t l_1120 = 0UL;
            int32_t l_1122 = 0L;
            int32_t *l_1121 = &l_1122;
            int32_t *l_1123[4][10];
            VECTOR(int32_t, 2) l_1124 = (VECTOR(int32_t, 2))(0x7E08D068L, 0x2FAC4839L);
            int8_t l_1125 = 0x43L;
            VECTOR(int32_t, 16) l_1126 = (VECTOR(int32_t, 16))(0x1ED5DE0EL, (VECTOR(int32_t, 4))(0x1ED5DE0EL, (VECTOR(int32_t, 2))(0x1ED5DE0EL, 0x14F598B9L), 0x14F598B9L), 0x14F598B9L, 0x1ED5DE0EL, 0x14F598B9L, (VECTOR(int32_t, 2))(0x1ED5DE0EL, 0x14F598B9L), (VECTOR(int32_t, 2))(0x1ED5DE0EL, 0x14F598B9L), 0x1ED5DE0EL, 0x14F598B9L, 0x1ED5DE0EL, 0x14F598B9L);
            int64_t l_1127[4][10][2] = {{{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L}},{{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L}},{{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L}},{{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L},{0x6326404ECF9A6047L,1L}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 10; j++)
                    l_1123[i][j] = &l_1122;
            }
            l_1123[1][1] = (l_1120 , (l_1121 = (void*)0));
            l_1125 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1124.yx)))).lo;
            l_1127[3][1][1] |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1126.se58d)).zzwzxzyz)).s7;
            for (l_1120 = (-4); (l_1120 >= 41); l_1120 = safe_add_func_uint8_t_u_u(l_1120, 3))
            { /* block id: 535 */
                int32_t l_1130 = 0x1E922DBDL;
                for (l_1130 = 5; (l_1130 != (-18)); l_1130--)
                { /* block id: 538 */
                    int32_t l_1133 = 0x71B9708AL;
                    if (l_1133)
                    { /* block id: 539 */
                        uint16_t l_1134 = 65535UL;
                        int8_t l_1135 = (-5L);
                        uint32_t l_1136 = 4UL;
                        int64_t l_1137 = 0x4C61323E7FC45B0AL;
                        int8_t l_1138 = 0x72L;
                        int16_t l_1139 = 1L;
                        int8_t l_1140 = 7L;
                        l_1135 = l_1134;
                        l_1140 = ((l_1136 , (l_1137 , l_1138)) , (l_1139 = 0x0C85364AL));
                    }
                    else
                    { /* block id: 543 */
                        int32_t l_1141 = (-8L);
                        int64_t l_1142 = (-1L);
                        l_1142 &= l_1141;
                    }
                }
            }
        }
        unsigned int result = 0;
        result += l_1117;
        atomic_add(&p_1708->l_special_values[2], result);
    }
    else
    { /* block id: 549 */
        (1 + 1);
    }
    l_979.z = (((*l_998) = (((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 16))(0x7F04155612EC99D1L, (((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 16))(0x6773923CL, 1L, l_1143, 1L, l_1013[1], ((l_999 >= 4294967290UL) < (0UL != (((~(safe_mul_func_uint16_t_u_u(((void*)0 == l_1146), (((((safe_div_func_uint32_t_u_u(((*p_1708->g_548) && GROUP_DIVERGE(2, 1)), (safe_rshift_func_uint8_t_u_u((p_1708->g_941.s1 = l_982.w), p_1708->g_709.y)))) && (-1L)) >= l_1016.sa) , l_1011) , l_979.w)))) && l_992.x) >= l_1151))), ((VECTOR(int32_t, 8))(0x052BF041L)), (-8L), 0L)).even))).s31))).lo < 0x984C5ACFL), ((VECTOR(int64_t, 4))(0x313797D6FF66EEA9L)), ((VECTOR(int64_t, 8))(9L)), 1L, 0x1870A7DFE379E075L)), ((VECTOR(int64_t, 16))(1L))))).s7 & l_1152)) || 255UL);
    return l_1153;
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_973
 * writes: p_1708->g_973
 */
uint64_t * func_37(uint64_t  p_38, int32_t  p_39, uint64_t * p_40, uint16_t  p_41, uint32_t  p_42, struct S1 * p_1708)
{ /* block id: 450 */
    int32_t *l_963[7][3] = {{&p_1708->g_29,(void*)0,&p_1708->g_29},{&p_1708->g_29,(void*)0,&p_1708->g_29},{&p_1708->g_29,(void*)0,&p_1708->g_29},{&p_1708->g_29,(void*)0,&p_1708->g_29},{&p_1708->g_29,(void*)0,&p_1708->g_29},{&p_1708->g_29,(void*)0,&p_1708->g_29},{&p_1708->g_29,(void*)0,&p_1708->g_29}};
    int8_t *l_966 = &p_1708->g_536.f3;
    int64_t *l_971 = &p_1708->g_491;
    uint32_t l_972 = 0x9DD59157L;
    int i, j;
    l_963[0][0] = l_963[5][0];
    ++p_1708->g_973;
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_488 p_1708->g_536 p_1708->g_847.f6 p_1708->g_847 p_1708->g_940 p_1708->g_941 p_1708->g_548 p_1708->g_31 p_1708->g_724 p_1708->g_499 p_1708->g_101 p_1708->g_87 p_1708->g_471 p_1708->g_472 p_1708->g_632 p_1708->g_706 p_1708->g_127 p_1708->g_29
 * writes: p_1708->g_488 p_1708->g_536 p_1708->g_847.f6 p_1708->g_851 p_1708->g_31 p_1708->g_499
 */
uint64_t  func_43(int64_t  p_44, struct S1 * p_1708)
{ /* block id: 232 */
    uint64_t *l_540 = (void*)0;
    uint64_t *l_550 = &p_1708->g_31;
    int32_t l_553 = 0x27CAF80BL;
    uint64_t **l_588 = &p_1708->g_548;
    uint64_t ***l_587 = &l_588;
    VECTOR(int32_t, 2) l_617 = (VECTOR(int32_t, 2))(7L, (-5L));
    int8_t l_639 = (-1L);
    VECTOR(int32_t, 16) l_665 = (VECTOR(int32_t, 16))(0x4CF36671L, (VECTOR(int32_t, 4))(0x4CF36671L, (VECTOR(int32_t, 2))(0x4CF36671L, 0x41264DB7L), 0x41264DB7L), 0x41264DB7L, 0x4CF36671L, 0x41264DB7L, (VECTOR(int32_t, 2))(0x4CF36671L, 0x41264DB7L), (VECTOR(int32_t, 2))(0x4CF36671L, 0x41264DB7L), 0x4CF36671L, 0x41264DB7L, 0x4CF36671L, 0x41264DB7L);
    VECTOR(uint32_t, 2) l_668 = (VECTOR(uint32_t, 2))(4294967287UL, 0x16FBE8BEL);
    int64_t l_697 = (-10L);
    int32_t l_749 = 1L;
    VECTOR(int32_t, 16) l_791 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 1L), 1L), 1L, 7L, 1L, (VECTOR(int32_t, 2))(7L, 1L), (VECTOR(int32_t, 2))(7L, 1L), 7L, 1L, 7L, 1L);
    VECTOR(int32_t, 8) l_811 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x7F20A8E3L), 0x7F20A8E3L), 0x7F20A8E3L, (-2L), 0x7F20A8E3L);
    VECTOR(uint8_t, 2) l_942 = (VECTOR(uint8_t, 2))(7UL, 2UL);
    VECTOR(uint8_t, 2) l_943 = (VECTOR(uint8_t, 2))(0x12L, 0xB0L);
    uint32_t l_958 = 0x7F88FCF1L;
    int i, j;
    for (p_1708->g_488 = 17; (p_1708->g_488 == (-6)); p_1708->g_488 = safe_sub_func_int16_t_s_s(p_1708->g_488, 3))
    { /* block id: 235 */
        struct S0 *l_537 = &p_1708->g_536;
        int32_t l_547 = 0x5058C0CAL;
        uint64_t **l_549[8] = {&l_540,&p_1708->g_548,&l_540,&l_540,&p_1708->g_548,&l_540,&l_540,&p_1708->g_548};
        struct S0 **l_554 = &l_537;
        struct S0 *l_556 = &p_1708->g_536;
        struct S0 **l_555 = &l_556;
        int8_t *l_649 = (void*)0;
        VECTOR(int16_t, 2) l_653 = (VECTOR(int16_t, 2))(3L, 0x7D67L);
        uint64_t l_703[7][8] = {{0x7484D7FCA81CCCC2L,1UL,1UL,0x7484D7FCA81CCCC2L,18446744073709551610UL,8UL,18446744073709551607UL,0xE2667056CB8808E0L},{0x7484D7FCA81CCCC2L,1UL,1UL,0x7484D7FCA81CCCC2L,18446744073709551610UL,8UL,18446744073709551607UL,0xE2667056CB8808E0L},{0x7484D7FCA81CCCC2L,1UL,1UL,0x7484D7FCA81CCCC2L,18446744073709551610UL,8UL,18446744073709551607UL,0xE2667056CB8808E0L},{0x7484D7FCA81CCCC2L,1UL,1UL,0x7484D7FCA81CCCC2L,18446744073709551610UL,8UL,18446744073709551607UL,0xE2667056CB8808E0L},{0x7484D7FCA81CCCC2L,1UL,1UL,0x7484D7FCA81CCCC2L,18446744073709551610UL,8UL,18446744073709551607UL,0xE2667056CB8808E0L},{0x7484D7FCA81CCCC2L,1UL,1UL,0x7484D7FCA81CCCC2L,18446744073709551610UL,8UL,18446744073709551607UL,0xE2667056CB8808E0L},{0x7484D7FCA81CCCC2L,1UL,1UL,0x7484D7FCA81CCCC2L,18446744073709551610UL,8UL,18446744073709551607UL,0xE2667056CB8808E0L}};
        VECTOR(uint64_t, 4) l_720 = (VECTOR(uint64_t, 4))(0x9C529D1C4F2DB110L, (VECTOR(uint64_t, 2))(0x9C529D1C4F2DB110L, 0x35B9F1B6AF84E17AL), 0x35B9F1B6AF84E17AL);
        VECTOR(uint8_t, 16) l_723 = (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 255UL), 255UL), 255UL, 7UL, 255UL, (VECTOR(uint8_t, 2))(7UL, 255UL), (VECTOR(uint8_t, 2))(7UL, 255UL), 7UL, 255UL, 7UL, 255UL);
        int16_t *l_746 = (void*)0;
        int16_t **l_745[7] = {&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,&l_746};
        int32_t l_750 = 0x4395E846L;
        int32_t l_757[1][4];
        uint64_t l_758[10][10][2] = {{{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL}},{{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL}},{{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL}},{{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL}},{{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL}},{{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL}},{{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL}},{{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL}},{{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL}},{{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL},{0x70174CBC5D88EBFBL,18446744073709551615UL}}};
        VECTOR(int32_t, 4) l_790 = (VECTOR(int32_t, 4))(0x34325DC4L, (VECTOR(int32_t, 2))(0x34325DC4L, 0L), 0L);
        int32_t ***l_815[3];
        uint32_t l_843 = 0x4BCA8526L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_757[i][j] = (-5L);
        }
        for (i = 0; i < 3; i++)
            l_815[i] = (void*)0;
        (*l_537) = p_1708->g_536;
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1708->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[(safe_mod_func_uint32_t_u_u(l_668.y, 10))][(safe_mod_func_uint32_t_u_u(p_1708->tid, 1))]));
    for (p_1708->g_488 = (-22); (p_1708->g_488 < 2); ++p_1708->g_488)
    { /* block id: 434 */
        int32_t *l_926 = (void*)0;
        int32_t *l_927 = (void*)0;
        int32_t l_928 = 0L;
        int32_t *l_929[7][7] = {{(void*)0,&p_1708->g_29,&l_553,(void*)0,&l_553,&p_1708->g_29,(void*)0},{(void*)0,&p_1708->g_29,&l_553,(void*)0,&l_553,&p_1708->g_29,(void*)0},{(void*)0,&p_1708->g_29,&l_553,(void*)0,&l_553,&p_1708->g_29,(void*)0},{(void*)0,&p_1708->g_29,&l_553,(void*)0,&l_553,&p_1708->g_29,(void*)0},{(void*)0,&p_1708->g_29,&l_553,(void*)0,&l_553,&p_1708->g_29,(void*)0},{(void*)0,&p_1708->g_29,&l_553,(void*)0,&l_553,&p_1708->g_29,(void*)0},{(void*)0,&p_1708->g_29,&l_553,(void*)0,&l_553,&p_1708->g_29,(void*)0}};
        int32_t l_931 = 1L;
        uint64_t l_932 = 18446744073709551615UL;
        int16_t *l_959 = &p_1708->g_499;
        uint8_t *l_960 = (void*)0;
        uint8_t *l_961[6];
        int i, j;
        for (i = 0; i < 6; i++)
            l_961[i] = (void*)0;
        l_932++;
        l_791.s6 &= p_44;
        for (p_1708->g_847.f6 = 0; (p_1708->g_847.f6 != 23); p_1708->g_847.f6++)
        { /* block id: 439 */
            struct S0 *l_937 = &p_1708->g_851;
            (*l_937) = p_1708->g_847;
        }
        l_617.y ^= ((1UL | (((4294967295UL ^ FAKE_DIVERGE(p_1708->local_2_offset, get_local_id(2), 10)) ^ ((~((((safe_lshift_func_int8_t_s_u(l_665.s7, ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_1708->g_940.wwzw)).even)).xyyyxyxyxxxxxxyy, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(p_1708->g_941.s7721640506176322)).sf8, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(l_942.yxxyyxxxxyxxyyyx)).s39, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(246UL, 1UL)).yyxyxxxxyxyyyxxx)).s2a))).xxxyxxxy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_943.xxyxyxxyxxxyyxxx)).sc2e0)).xxyxxwyxzwzyzxyw)).even))).s45))).xxxyxyyxyxyxyyyy))).s2)) == (safe_div_func_uint64_t_u_u(((**l_588) ^= p_44), (safe_sub_func_uint64_t_u_u((p_44 ^ (safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_1708->g_724.x, (safe_div_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u((l_811.s3 = (p_44 != (l_791.sf ^= ((*l_959) ^= (l_958 |= (safe_lshift_func_uint16_t_u_s(p_1708->g_536.f5, 15))))))), (((VECTOR(uint16_t, 4))((p_44 , FAKE_DIVERGE(p_1708->group_1_offset, get_group_id(1), 10)), p_1708->g_101[1], 65535UL, 0x0055L)).w || p_1708->g_87.s6))) > (*p_1708->g_471)) , p_1708->g_632.sa), 1UL)))), 0x04L))), l_943.y))))) , (**p_1708->g_706)) != p_44)) , 2L)) ^ p_1708->g_847.f5)) || p_44);
    }
    return p_1708->g_536.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_29
 * writes:
 */
int64_t  func_53(uint8_t  p_54, struct S1 * p_1708)
{ /* block id: 12 */
    VECTOR(uint32_t, 8) l_67 = (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0xA3ECB10BL), 0xA3ECB10BL), 0xA3ECB10BL, 4294967294UL, 0xA3ECB10BL);
    int32_t *l_458 = &p_1708->g_29;
    VECTOR(int64_t, 2) l_467 = (VECTOR(int64_t, 2))((-1L), (-10L));
    int64_t *l_470[5][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_479 = 1L;
    VECTOR(int64_t, 4) l_480 = (VECTOR(int64_t, 4))(0x78D9BEE1EA22474EL, (VECTOR(int64_t, 2))(0x78D9BEE1EA22474EL, (-1L)), (-1L));
    int8_t l_497 = 6L;
    int16_t *l_502 = (void*)0;
    uint64_t *l_505 = &p_1708->g_31;
    uint8_t l_508 = 0UL;
    uint8_t l_520 = 0x2EL;
    uint16_t l_529 = 0UL;
    int i, j;
    for (p_54 = 0; (p_54 == 19); p_54++)
    { /* block id: 15 */
        int32_t *l_76 = &p_1708->g_29;
        uint64_t *l_82 = &p_1708->g_31;
        uint64_t *l_453 = &p_1708->g_454;
        VECTOR(int64_t, 16) l_468 = (VECTOR(int64_t, 16))(5L, (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 0x5AC72CA895AA6AD0L), 0x5AC72CA895AA6AD0L), 0x5AC72CA895AA6AD0L, 5L, 0x5AC72CA895AA6AD0L, (VECTOR(int64_t, 2))(5L, 0x5AC72CA895AA6AD0L), (VECTOR(int64_t, 2))(5L, 0x5AC72CA895AA6AD0L), 5L, 0x5AC72CA895AA6AD0L, 5L, 0x5AC72CA895AA6AD0L);
        int16_t *l_504 = (void*)0;
        int16_t l_506 = 0L;
        int32_t *l_521 = (void*)0;
        int32_t *l_522 = (void*)0;
        int32_t *l_523 = (void*)0;
        int32_t *l_524 = (void*)0;
        int32_t *l_525 = (void*)0;
        int32_t *l_526 = &p_1708->g_29;
        int32_t *l_527 = &l_479;
        int32_t *l_528 = (void*)0;
        int i;
        (1 + 1);
    }
    return (*l_458);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1708->g_101 p_1708->g_29
 */
int32_t * func_60(int64_t  p_61, int32_t * p_62, uint32_t  p_63, uint64_t * p_64, struct S1 * p_1708)
{ /* block id: 209 */
    int32_t l_457[7][7] = {{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}};
    int i, j;
    for (p_61 = 3; (p_61 < 27); ++p_61)
    { /* block id: 212 */
        (*p_62) = l_457[1][1];
    }
    return p_62;
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_31 p_1708->g_29
 * writes: p_1708->g_29 p_1708->g_31
 */
uint64_t  func_72(int32_t * p_73, int32_t  p_74, uint32_t  p_75, struct S1 * p_1708)
{ /* block id: 59 */
    int32_t *l_448 = (void*)0;
    int32_t l_449 = (-3L);
    if ((atomic_inc(&p_1708->l_atomic_input[0]) == 5))
    { /* block id: 61 */
        int32_t l_220 = 1L;
        int32_t *l_446 = &l_220;
        for (l_220 = 20; (l_220 == 23); ++l_220)
        { /* block id: 64 */
            int32_t l_223 = 6L;
            VECTOR(int8_t, 2) l_298 = (VECTOR(int8_t, 2))(0x29L, 0x78L);
            VECTOR(int32_t, 16) l_299 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x457E8F95L), 0x457E8F95L), 0x457E8F95L, (-1L), 0x457E8F95L, (VECTOR(int32_t, 2))((-1L), 0x457E8F95L), (VECTOR(int32_t, 2))((-1L), 0x457E8F95L), (-1L), 0x457E8F95L, (-1L), 0x457E8F95L);
            int32_t l_300[4][2];
            int32_t l_301[5];
            uint32_t l_302 = 2UL;
            int8_t l_303 = 0x7FL;
            VECTOR(int16_t, 2) l_304 = (VECTOR(int16_t, 2))(0x3ACFL, 0x3DEFL);
            VECTOR(uint8_t, 8) l_305 = (VECTOR(uint8_t, 8))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0UL), 0UL), 0UL, 4UL, 0UL);
            VECTOR(uint8_t, 2) l_306 = (VECTOR(uint8_t, 2))(0x23L, 0xD6L);
            VECTOR(uint8_t, 4) l_307 = (VECTOR(uint8_t, 4))(0x74L, (VECTOR(uint8_t, 2))(0x74L, 0UL), 0UL);
            VECTOR(uint16_t, 16) l_308 = (VECTOR(uint16_t, 16))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0UL), 0UL), 0UL, 65528UL, 0UL, (VECTOR(uint16_t, 2))(65528UL, 0UL), (VECTOR(uint16_t, 2))(65528UL, 0UL), 65528UL, 0UL, 65528UL, 0UL);
            VECTOR(uint16_t, 2) l_309 = (VECTOR(uint16_t, 2))(0x6C8BL, 0UL);
            int8_t l_310 = (-1L);
            VECTOR(uint16_t, 8) l_311 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 1UL), 1UL), 1UL, 65526UL, 1UL);
            VECTOR(uint16_t, 2) l_312 = (VECTOR(uint16_t, 2))(0xAAE3L, 0x59C4L);
            VECTOR(uint16_t, 2) l_313 = (VECTOR(uint16_t, 2))(3UL, 1UL);
            VECTOR(uint16_t, 4) l_314 = (VECTOR(uint16_t, 4))(0xFE84L, (VECTOR(uint16_t, 2))(0xFE84L, 1UL), 1UL);
            VECTOR(uint16_t, 4) l_315 = (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0x12D8L), 0x12D8L);
            VECTOR(uint16_t, 4) l_316 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL);
            VECTOR(uint16_t, 8) l_317 = (VECTOR(uint16_t, 8))(0x1C41L, (VECTOR(uint16_t, 4))(0x1C41L, (VECTOR(uint16_t, 2))(0x1C41L, 0x8632L), 0x8632L), 0x8632L, 0x1C41L, 0x8632L);
            VECTOR(uint16_t, 16) l_318 = (VECTOR(uint16_t, 16))(0x0DE9L, (VECTOR(uint16_t, 4))(0x0DE9L, (VECTOR(uint16_t, 2))(0x0DE9L, 0xFA5EL), 0xFA5EL), 0xFA5EL, 0x0DE9L, 0xFA5EL, (VECTOR(uint16_t, 2))(0x0DE9L, 0xFA5EL), (VECTOR(uint16_t, 2))(0x0DE9L, 0xFA5EL), 0x0DE9L, 0xFA5EL, 0x0DE9L, 0xFA5EL);
            VECTOR(uint16_t, 2) l_319 = (VECTOR(uint16_t, 2))(0xDDE0L, 65528UL);
            VECTOR(uint16_t, 2) l_320 = (VECTOR(uint16_t, 2))(0UL, 1UL);
            VECTOR(uint16_t, 8) l_321 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 2UL), 2UL), 2UL, 65535UL, 2UL);
            VECTOR(uint16_t, 2) l_322 = (VECTOR(uint16_t, 2))(1UL, 0x814FL);
            VECTOR(uint16_t, 8) l_323 = (VECTOR(uint16_t, 8))(0x952EL, (VECTOR(uint16_t, 4))(0x952EL, (VECTOR(uint16_t, 2))(0x952EL, 65535UL), 65535UL), 65535UL, 0x952EL, 65535UL);
            uint32_t l_324 = 1UL;
            VECTOR(uint16_t, 2) l_325 = (VECTOR(uint16_t, 2))(65535UL, 4UL);
            VECTOR(uint16_t, 2) l_326 = (VECTOR(uint16_t, 2))(1UL, 0xCD1FL);
            VECTOR(uint16_t, 4) l_327 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL);
            VECTOR(uint16_t, 16) l_328 = (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 1UL), 1UL), 1UL, 65530UL, 1UL, (VECTOR(uint16_t, 2))(65530UL, 1UL), (VECTOR(uint16_t, 2))(65530UL, 1UL), 65530UL, 1UL, 65530UL, 1UL);
            VECTOR(uint16_t, 8) l_329 = (VECTOR(uint16_t, 8))(0x1FDFL, (VECTOR(uint16_t, 4))(0x1FDFL, (VECTOR(uint16_t, 2))(0x1FDFL, 65535UL), 65535UL), 65535UL, 0x1FDFL, 65535UL);
            int32_t l_330 = 0x11B0A25AL;
            int8_t l_331 = 0x6AL;
            VECTOR(uint16_t, 8) l_332 = (VECTOR(uint16_t, 8))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0UL), 0UL), 0UL, 65531UL, 0UL);
            VECTOR(uint16_t, 8) l_333 = (VECTOR(uint16_t, 8))(0x91B5L, (VECTOR(uint16_t, 4))(0x91B5L, (VECTOR(uint16_t, 2))(0x91B5L, 0x4F7CL), 0x4F7CL), 0x4F7CL, 0x91B5L, 0x4F7CL);
            int64_t l_334 = 1L;
            uint32_t l_335 = 0UL;
            int32_t l_336 = 0x43A19758L;
            int8_t l_337 = 2L;
            uint16_t l_338 = 8UL;
            int32_t l_339 = 0x1A532080L;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_300[i][j] = 9L;
            }
            for (i = 0; i < 5; i++)
                l_301[i] = 0x28F09959L;
            for (l_223 = 20; (l_223 == (-29)); --l_223)
            { /* block id: 67 */
                int32_t l_226 = 0x060C5FD5L;
                int16_t l_227 = (-1L);
                uint8_t l_228 = 4UL;
                VECTOR(int32_t, 16) l_229 = (VECTOR(int32_t, 16))(0x2BF71DFFL, (VECTOR(int32_t, 4))(0x2BF71DFFL, (VECTOR(int32_t, 2))(0x2BF71DFFL, (-2L)), (-2L)), (-2L), 0x2BF71DFFL, (-2L), (VECTOR(int32_t, 2))(0x2BF71DFFL, (-2L)), (VECTOR(int32_t, 2))(0x2BF71DFFL, (-2L)), 0x2BF71DFFL, (-2L), 0x2BF71DFFL, (-2L));
                int32_t l_230 = (-1L);
                int64_t l_231 = 0x023630FB16671C60L;
                int i;
                l_228 = (l_227 = l_226);
                l_230 = (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_229.s2567d4eb91bae6fe)).s1d)).odd , ((VECTOR(int32_t, 2))((-2L), 0x516D84DEL)).lo);
                if (l_231)
                { /* block id: 71 */
                    VECTOR(int32_t, 16) l_232 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x59CA3109L), 0x59CA3109L), 0x59CA3109L, (-1L), 0x59CA3109L, (VECTOR(int32_t, 2))((-1L), 0x59CA3109L), (VECTOR(int32_t, 2))((-1L), 0x59CA3109L), (-1L), 0x59CA3109L, (-1L), 0x59CA3109L);
                    uint64_t l_242[7] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                    uint32_t l_243[6][9][2] = {{{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L}},{{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L}},{{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L}},{{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L}},{{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L}},{{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L},{0x0D56B2B0L,0x263A5290L}}};
                    VECTOR(int32_t, 16) l_244 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L, (VECTOR(int32_t, 2))((-4L), 1L), (VECTOR(int32_t, 2))((-4L), 1L), (-4L), 1L, (-4L), 1L);
                    int16_t l_245[3];
                    int64_t l_246 = 0x518940EEDF8BB0FEL;
                    int16_t l_247 = 0x5F3AL;
                    int32_t l_248 = 0L;
                    VECTOR(int8_t, 8) l_249 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x54L), 0x54L), 0x54L, (-1L), 0x54L);
                    int32_t l_250 = (-7L);
                    struct S0 l_251 = {65527UL,-4L,9UL,-1L,0x5CD2622572348755L,5UL,0xF1D00878CAE2BCC0L};/* VOLATILE GLOBAL l_251 */
                    int16_t *l_253 = &l_245[0];
                    int16_t **l_252[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int16_t **l_254 = (void*)0;
                    int32_t *l_255 = (void*)0;
                    int32_t *l_256 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_245[i] = 1L;
                    for (l_232.s2 = 0; (l_232.s2 == (-20)); l_232.s2--)
                    { /* block id: 74 */
                        uint16_t l_235[2][3];
                        int32_t l_239 = 0x1AFFD46FL;
                        int32_t *l_238 = &l_239;
                        int32_t *l_240 = (void*)0;
                        uint32_t l_241 = 4294967288UL;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_235[i][j] = 7UL;
                        }
                        --l_235[0][1];
                        l_240 = l_238;
                        l_229.sa |= (l_230 = l_241);
                    }
                    l_254 = (FAKE_DIVERGE(p_1708->local_1_offset, get_local_id(1), 10) , (((l_250 = (l_249.s5 ^= (l_242[5] , (l_248 = (((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(0x122DE0C7L, l_243[4][0][1], 0x79376B58L, 0x3E3AB01BL, ((VECTOR(int32_t, 2))(l_244.s2a)), 0x6C28166EL, 0x47787149L)).s4606201644004103, (int32_t)((GROUP_DIVERGE(1, 1) , l_245[0]) , l_246)))).s6 , l_247))))) , l_251) , l_252[2]));
                    l_256 = l_255;
                }
                else
                { /* block id: 85 */
                    l_229.s4 = 0x2ABAE095L;
                }
                for (l_227 = 0; (l_227 <= (-2)); l_227 = safe_sub_func_int64_t_s_s(l_227, 7))
                { /* block id: 90 */
                    int32_t l_259 = 0x197B13E3L;
                    int8_t l_274 = (-1L);
                    for (l_259 = 3; (l_259 >= (-28)); --l_259)
                    { /* block id: 93 */
                        VECTOR(uint32_t, 8) l_262 = (VECTOR(uint32_t, 8))(0xBBDF9C3AL, (VECTOR(uint32_t, 4))(0xBBDF9C3AL, (VECTOR(uint32_t, 2))(0xBBDF9C3AL, 0xC9858274L), 0xC9858274L), 0xC9858274L, 0xBBDF9C3AL, 0xC9858274L);
                        struct S0 l_265 = {5UL,-1L,253UL,0x2EL,0UL,0xBE3F04877228C6F8L,1UL};/* VOLATILE GLOBAL l_265 */
                        struct S0 l_266 = {0x25EDL,2L,255UL,2L,18446744073709551612UL,0UL,0xF9CCC1DA93C1EDF3L};/* VOLATILE GLOBAL l_266 */
                        uint32_t l_267 = 0xE5484CA5L;
                        int32_t l_269 = 0x1F371F93L;
                        int32_t *l_268 = &l_269;
                        uint32_t l_272 = 4294967294UL;
                        uint32_t *l_271 = &l_272;
                        uint32_t **l_270 = &l_271;
                        uint32_t **l_273 = &l_271;
                        int i;
                        --l_262.s7;
                        l_266 = l_265;
                        l_268 = (l_267 , (void*)0);
                        l_273 = l_270;
                    }
                    l_230 = ((l_274 , 1L) , 0x0238ABA1L);
                    for (l_259 = 0; (l_259 > 29); l_259 = safe_add_func_int8_t_s_s(l_259, 3))
                    { /* block id: 102 */
                        int64_t l_277 = (-1L);
                        uint16_t l_278[8][5][6] = {{{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L}},{{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L}},{{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L}},{{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L}},{{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L}},{{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L}},{{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L}},{{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L},{0x6BDFL,7UL,65535UL,0xD990L,65535UL,0xD990L}}};
                        uint32_t l_279 = 0UL;
                        int i, j, k;
                        l_278[3][2][1] = l_277;
                        l_279++;
                    }
                }
            }
            for (l_223 = 0; (l_223 <= (-9)); --l_223)
            { /* block id: 110 */
                int32_t l_284 = 0x05CDAED4L;
                int64_t l_285 = 0x30915EE7ADF5A984L;
                l_285 = l_284;
                for (l_284 = 0; (l_284 >= (-10)); l_284 = safe_sub_func_int16_t_s_s(l_284, 4))
                { /* block id: 114 */
                    int16_t l_288 = (-9L);
                    if ((l_288 = (-5L)))
                    { /* block id: 116 */
                        uint16_t l_289 = 0xA162L;
                        uint32_t l_290 = 4294967288UL;
                        l_290 = l_289;
                    }
                    else
                    { /* block id: 118 */
                        int16_t l_291 = 0x51AAL;
                        int8_t l_292 = (-5L);
                        int64_t l_293 = 5L;
                        uint32_t l_294 = 0x87D6839CL;
                        uint16_t l_297 = 65534UL;
                        --l_294;
                        l_297 = ((VECTOR(int32_t, 4))(0x2A30C3C7L, 0x1C90CD13L, 8L, 8L)).x;
                    }
                }
            }
            l_298.x ^= 0x18B69F1DL;
            if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(l_299.s711a)).zywzyyxw))).s5030717772732615)).hi)), (l_300[3][0] , (((l_302 = l_301[4]) , l_303) , (l_339 = ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(l_304.yx)).xxyyxxxy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0x2A83L, 1UL)).yxyyyyxxxxxxyxxx)).sde, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(l_305.s73277753)).s5415625520160704, ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(7UL, 0x0FL)))).yyyxyxyy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_306.xx)).yyxy)).odd)).xyyxyyyy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_307.yxxzyyzwyxwxzwww)).hi))))).s2676223341330146))).sbd, ((VECTOR(uint16_t, 8))(l_308.se39c4e02)).s74, ((VECTOR(uint16_t, 4))(l_309.yyyy)).even))), 1UL, 65527UL)), l_310, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(l_311.s10242025)).s70, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_312.yxyx)), ((VECTOR(uint16_t, 2))(6UL, 65535UL)), 0x3C29L, 0x06D0L)).hi)).even))), 0x62A2L)).s7742236070233452)).sf9, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_313.yyyx)).zyxyywywzzyzwxzy)).sec))).yxyxyyxxxyyyyyxy, ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 2))(0x9DF7L, 4UL)), ((VECTOR(uint16_t, 16))(l_314.zyxxzwzzxxxywwzw)).sa9))).yxxx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_315.zzxwzyww)).s6577763705524002)).s3e31, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(l_316.yzxz)).ywzxwxyzywxxwzwy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_317.s6230)).lo)).yxxxxyyxxxyyyyxx))))).s963b))))).xxwyywxwxxyzxwxw)).hi)), (uint16_t)GROUP_DIVERGE(1, 1)))).even, ((VECTOR(uint16_t, 8))(l_318.s37d02055)).lo))).xzyxxzwywzxzyzyw))).s3792)), 65527UL, 0x4F02L, ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(l_319.yyxy)).wzxyyxxywxxywzxw, (uint16_t)65527UL))).sd5b0, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_320.xyxxxyyyyxxxyxxx)).s83f1))))).xzyyxwyw, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(0xFFAAL, ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 16))(l_321.s1345510551434450)).sfcd6))), ((VECTOR(uint16_t, 4))(l_322.yxxx)).x, 0x0D19L, 0xDA36L)).s76)).yyyxyyyx, ((VECTOR(uint16_t, 2))(l_323.s55)).yxyxxxyy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(1UL, l_324, 0x759AL, 2UL)).yyzwxwyyyxxxwzxx)).hi))), ((VECTOR(uint16_t, 8))(0x0E55L, 1UL, ((VECTOR(uint16_t, 2))(l_325.xy)), ((VECTOR(uint16_t, 2))(0x9FBCL, 0UL)).lo, ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 2))(l_326.xy)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_327.zywwzyzz)).s41)).xxyyxxxxxyxxyyyx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_328.s6bfdebf1)).s16)).xxyxxxyxxyyxxxxx))).s10))).yyyx, ((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x97CDL, 0UL)), ((VECTOR(uint16_t, 4))(0xC56AL, (l_330 = ((VECTOR(uint16_t, 2))(l_329.s41)).even), 1UL, 0xC78FL)), 0x434AL, 0x0E5CL)).s30, ((VECTOR(uint16_t, 16))((l_331 , FAKE_DIVERGE(p_1708->group_2_offset, get_group_id(2), 10)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_332.s7613)).even)), 2UL, 0x179DL, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(65534UL, ((VECTOR(uint16_t, 2))(l_333.s10)), 0xDDBAL)).wxxyyzzx)))).s44, ((VECTOR(uint16_t, 4))(0UL, 0xD0BFL, 0x4612L, 0x412BL)).lo))).yyyy)).wyzxzzyyzzxwzzzw, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(0x1DDCL, l_334, ((VECTOR(uint16_t, 2))(65535UL)), 65535UL, ((VECTOR(uint16_t, 2))(0x6B3CL)), 65532UL, 0x257AL, l_335, 0x562BL, ((VECTOR(uint16_t, 4))(0xDBAAL)), 0x4B3AL)).s1eb6, ((VECTOR(uint16_t, 4))(0xE88FL))))).xxzwyxxwyxxxyywy))))).sa, FAKE_DIVERGE(p_1708->local_0_offset, get_local_id(0), 10), ((VECTOR(uint16_t, 4))(65535UL)), 65532UL, 0x58C2L, ((VECTOR(uint16_t, 2))(0xA8CDL)), 1UL)).s39))).yyxxyyxxxxyxxxyy))).sf6ae))))).lo))), 0xA327L)))).lo, ((VECTOR(uint16_t, 8))(0UL))))).s77, (uint16_t)65534UL))), 0x3081L, l_336, 65527UL, l_337, l_338, 0x198AL, 65535UL)).sb96d)).ywzxwyzz))).hi)).zwwzwwwxwywzwwww, ((VECTOR(int32_t, 16))(0x030D51EBL))))).s6))), ((VECTOR(int32_t, 4))((-5L))), 1L, 8L, (-4L))).s8)
            { /* block id: 128 */
                int32_t l_341 = 0x660243F2L;
                int32_t *l_340 = &l_341;
                int32_t *l_342 = &l_341;
                int32_t *l_343 = &l_341;
                int32_t *l_344[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                VECTOR(int32_t, 8) l_345 = (VECTOR(int32_t, 8))(0x7C16215CL, (VECTOR(int32_t, 4))(0x7C16215CL, (VECTOR(int32_t, 2))(0x7C16215CL, 0x71BE7167L), 0x71BE7167L), 0x71BE7167L, 0x7C16215CL, 0x71BE7167L);
                VECTOR(int64_t, 8) l_346 = (VECTOR(int64_t, 8))(0x3033FBDFD0F819D0L, (VECTOR(int64_t, 4))(0x3033FBDFD0F819D0L, (VECTOR(int64_t, 2))(0x3033FBDFD0F819D0L, 0x122EE7F6989020BDL), 0x122EE7F6989020BDL), 0x122EE7F6989020BDL, 0x3033FBDFD0F819D0L, 0x122EE7F6989020BDL);
                VECTOR(uint16_t, 2) l_347 = (VECTOR(uint16_t, 2))(1UL, 65535UL);
                uint16_t l_348 = 7UL;
                uint8_t l_349[3];
                VECTOR(int32_t, 16) l_376 = (VECTOR(int32_t, 16))(0x3B10B644L, (VECTOR(int32_t, 4))(0x3B10B644L, (VECTOR(int32_t, 2))(0x3B10B644L, 0x418046F7L), 0x418046F7L), 0x418046F7L, 0x3B10B644L, 0x418046F7L, (VECTOR(int32_t, 2))(0x3B10B644L, 0x418046F7L), (VECTOR(int32_t, 2))(0x3B10B644L, 0x418046F7L), 0x3B10B644L, 0x418046F7L, 0x3B10B644L, 0x418046F7L);
                int i;
                for (i = 0; i < 3; i++)
                    l_349[i] = 0UL;
                l_342 = l_340;
                l_344[6] = l_343;
                if ((l_299.s5 = ((((VECTOR(int32_t, 4))(l_345.s5236)).y , ((((VECTOR(int64_t, 2))(l_346.s15)).odd , (((VECTOR(uint16_t, 4))(l_347.yxxx)).x , 0x6749L)) , l_348)) , l_349[0])))
                { /* block id: 132 */
                    uint8_t l_350 = 0x4BL;
                    l_350--;
                    for (l_350 = (-15); (l_350 <= 10); l_350++)
                    { /* block id: 136 */
                        uint64_t l_355[9][5] = {{0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L},{0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L},{0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L},{0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L},{0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L},{0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L},{0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L},{0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L},{0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L,0x966C9633A9F3C626L}};
                        uint8_t l_358[9][10][1] = {{{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL},{251UL}}};
                        int16_t l_359[6][4][6] = {{{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L}},{{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L}},{{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L}},{{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L}},{{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L}},{{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L},{0x14B0L,0x18B7L,3L,0x76C5L,0x76C5L,3L}}};
                        int8_t l_360 = 0x42L;
                        int i, j, k;
                        ++l_355[6][0];
                        (*l_343) = l_358[4][1][0];
                        (*l_340) = ((l_346.s0 = (-2L)) , l_359[5][0][4]);
                        (*l_342) |= l_360;
                    }
                }
                else
                { /* block id: 143 */
                    VECTOR(int16_t, 4) l_361 = (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x1073L), 0x1073L);
                    VECTOR(uint8_t, 16) l_362 = (VECTOR(uint8_t, 16))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0UL), 0UL), 0UL, 4UL, 0UL, (VECTOR(uint8_t, 2))(4UL, 0UL), (VECTOR(uint8_t, 2))(4UL, 0UL), 4UL, 0UL, 4UL, 0UL);
                    VECTOR(uint8_t, 4) l_363 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x97L), 0x97L);
                    uint32_t l_364 = 4294967286UL;
                    VECTOR(uint16_t, 8) l_365 = (VECTOR(uint16_t, 8))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 6UL), 6UL), 6UL, 65527UL, 6UL);
                    uint8_t l_366 = 0xBDL;
                    VECTOR(uint8_t, 16) l_367 = (VECTOR(uint8_t, 16))(0xC4L, (VECTOR(uint8_t, 4))(0xC4L, (VECTOR(uint8_t, 2))(0xC4L, 0UL), 0UL), 0UL, 0xC4L, 0UL, (VECTOR(uint8_t, 2))(0xC4L, 0UL), (VECTOR(uint8_t, 2))(0xC4L, 0UL), 0xC4L, 0UL, 0xC4L, 0UL);
                    uint32_t l_368 = 4294967287UL;
                    int64_t l_369 = 1L;
                    int i;
                    (*l_343) = ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(l_361.zzxwzxyz)).lo, ((VECTOR(uint16_t, 16))(0x1238L, ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(1UL, ((VECTOR(uint8_t, 2))(l_362.s19)), 0x78L)), ((VECTOR(uint8_t, 16))(l_363.xwxyzxyyxyzwxzzz)).sb776))), 6UL, l_364, 0x41E4L, ((VECTOR(uint16_t, 8))(l_365.s13011212)))).s05f3))).w;
                    (*l_342) &= ((l_363.x = (l_362.s2 = ((l_366 , ((VECTOR(uint8_t, 4))(l_367.s5157)).y) , l_368))) , l_369);
                    for (l_361.z = 0; (l_361.z >= 19); ++l_361.z)
                    { /* block id: 150 */
                        uint32_t l_372 = 0xC9F7CA3DL;
                        uint8_t l_375 = 255UL;
                        l_372++;
                        l_375 = 0x713E8F09L;
                    }
                }
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_376.s5af68e8d)))).s6)
                { /* block id: 155 */
                    int32_t l_377[6] = {0x2F01070EL,0x2F01070EL,0x2F01070EL,0x2F01070EL,0x2F01070EL,0x2F01070EL};
                    int32_t *l_384[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_384[i] = &l_377[0];
                    for (l_377[0] = 0; (l_377[0] >= (-2)); l_377[0] = safe_sub_func_uint16_t_u_u(l_377[0], 4))
                    { /* block id: 158 */
                        int32_t l_380 = (-7L);
                        uint16_t l_381 = 7UL;
                        struct S0 l_382[8][7] = {{{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{0xF2C5L,0x0172765E58F154A1L,0x20L,9L,9UL,18446744073709551613UL,0xB6C5446F44C14198L},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL}},{{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{0xF2C5L,0x0172765E58F154A1L,0x20L,9L,9UL,18446744073709551613UL,0xB6C5446F44C14198L},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL}},{{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{0xF2C5L,0x0172765E58F154A1L,0x20L,9L,9UL,18446744073709551613UL,0xB6C5446F44C14198L},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL}},{{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{0xF2C5L,0x0172765E58F154A1L,0x20L,9L,9UL,18446744073709551613UL,0xB6C5446F44C14198L},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL}},{{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{0xF2C5L,0x0172765E58F154A1L,0x20L,9L,9UL,18446744073709551613UL,0xB6C5446F44C14198L},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL}},{{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{0xF2C5L,0x0172765E58F154A1L,0x20L,9L,9UL,18446744073709551613UL,0xB6C5446F44C14198L},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL}},{{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{0xF2C5L,0x0172765E58F154A1L,0x20L,9L,9UL,18446744073709551613UL,0xB6C5446F44C14198L},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL}},{{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{9UL,0x2A4838411B8F87EEL,9UL,0x6BL,18446744073709551615UL,0xC6C8BA5BAC4674FFL,0x10E48DCC6FA711EAL},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{0xF2C5L,0x0172765E58F154A1L,0x20L,9L,9UL,18446744073709551613UL,0xB6C5446F44C14198L},{1UL,1L,0UL,0x3AL,0x0DDA1B7B4A9CCAB8L,1UL,0x2A3C418B19E56481L},{65529UL,-5L,1UL,0L,7UL,0x02494B7287B92F76L,18446744073709551615UL}}};
                        struct S0 l_383 = {1UL,-5L,0xA3L,0x65L,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL};/* VOLATILE GLOBAL l_383 */
                        int i, j;
                        (*l_340) |= l_380;
                        l_383 = ((l_381 = (-1L)) , l_382[0][5]);
                    }
                    l_384[2] = (void*)0;
                }
                else
                { /* block id: 164 */
                    int32_t l_385[9][6][1] = {{{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL}},{{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL}},{{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL}},{{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL}},{{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL}},{{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL}},{{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL}},{{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL}},{{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL},{0x1023738DL}}};
                    VECTOR(int32_t, 4) l_393 = (VECTOR(int32_t, 4))(0x72729E20L, (VECTOR(int32_t, 2))(0x72729E20L, 0x0C14C101L), 0x0C14C101L);
                    int64_t l_394 = 0x7D05EF67653254B3L;
                    uint32_t l_395 = 3UL;
                    uint32_t l_396 = 0x8074419AL;
                    VECTOR(uint16_t, 2) l_397 = (VECTOR(uint16_t, 2))(65535UL, 0x3B93L);
                    VECTOR(uint16_t, 16) l_398 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), (VECTOR(uint16_t, 2))(1UL, 65535UL), 1UL, 65535UL, 1UL, 65535UL);
                    int64_t l_399[6][3] = {{(-4L),(-8L),0x16620879AAA7488BL},{(-4L),(-8L),0x16620879AAA7488BL},{(-4L),(-8L),0x16620879AAA7488BL},{(-4L),(-8L),0x16620879AAA7488BL},{(-4L),(-8L),0x16620879AAA7488BL},{(-4L),(-8L),0x16620879AAA7488BL}};
                    VECTOR(uint64_t, 4) l_400 = (VECTOR(uint64_t, 4))(0x100CADD5DA00FB52L, (VECTOR(uint64_t, 2))(0x100CADD5DA00FB52L, 0xFB774F0E55D39989L), 0xFB774F0E55D39989L);
                    uint64_t l_401 = 18446744073709551615UL;
                    VECTOR(uint16_t, 8) l_402 = (VECTOR(uint16_t, 8))(0x5CACL, (VECTOR(uint16_t, 4))(0x5CACL, (VECTOR(uint16_t, 2))(0x5CACL, 65532UL), 65532UL), 65532UL, 0x5CACL, 65532UL);
                    VECTOR(uint16_t, 16) l_403 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xA14CL), 0xA14CL), 0xA14CL, 0UL, 0xA14CL, (VECTOR(uint16_t, 2))(0UL, 0xA14CL), (VECTOR(uint16_t, 2))(0UL, 0xA14CL), 0UL, 0xA14CL, 0UL, 0xA14CL);
                    int64_t l_404 = 0x6C29FEED70FCFFF1L;
                    int32_t l_405 = (-1L);
                    VECTOR(uint16_t, 16) l_406 = (VECTOR(uint16_t, 16))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0x8140L), 0x8140L), 0x8140L, 3UL, 0x8140L, (VECTOR(uint16_t, 2))(3UL, 0x8140L), (VECTOR(uint16_t, 2))(3UL, 0x8140L), 3UL, 0x8140L, 3UL, 0x8140L);
                    VECTOR(uint8_t, 2) l_407 = (VECTOR(uint8_t, 2))(0x34L, 1UL);
                    uint32_t l_408 = 1UL;
                    VECTOR(uint16_t, 2) l_409 = (VECTOR(uint16_t, 2))(8UL, 0x7BDAL);
                    VECTOR(uint8_t, 2) l_410 = (VECTOR(uint8_t, 2))(0x1DL, 0UL);
                    VECTOR(uint8_t, 16) l_411 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 248UL), 248UL), 248UL, 1UL, 248UL, (VECTOR(uint8_t, 2))(1UL, 248UL), (VECTOR(uint8_t, 2))(1UL, 248UL), 1UL, 248UL, 1UL, 248UL);
                    VECTOR(int32_t, 4) l_412 = (VECTOR(int32_t, 4))(0x6377C00DL, (VECTOR(int32_t, 2))(0x6377C00DL, 0x64A9A801L), 0x64A9A801L);
                    VECTOR(int32_t, 4) l_413 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L);
                    VECTOR(int32_t, 4) l_414 = (VECTOR(int32_t, 4))(0x71DBCB66L, (VECTOR(int32_t, 2))(0x71DBCB66L, 0x7E6AFCAEL), 0x7E6AFCAEL);
                    VECTOR(int32_t, 16) l_415 = (VECTOR(int32_t, 16))(0x52DB669FL, (VECTOR(int32_t, 4))(0x52DB669FL, (VECTOR(int32_t, 2))(0x52DB669FL, 0L), 0L), 0L, 0x52DB669FL, 0L, (VECTOR(int32_t, 2))(0x52DB669FL, 0L), (VECTOR(int32_t, 2))(0x52DB669FL, 0L), 0x52DB669FL, 0L, 0x52DB669FL, 0L);
                    uint64_t l_416[1];
                    int16_t l_417 = 0x5122L;
                    uint8_t l_418 = 0xF8L;
                    uint32_t l_419 = 7UL;
                    int32_t l_420 = 0L;
                    uint8_t l_421 = 1UL;
                    uint8_t l_422 = 1UL;
                    uint32_t l_423 = 1UL;
                    int32_t l_424 = 0L;
                    int32_t l_425 = 0x32109385L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_416[i] = 0x3025A64EAB486E36L;
                    for (l_385[0][3][0] = 0; (l_385[0][3][0] < (-5)); l_385[0][3][0]--)
                    { /* block id: 167 */
                        int64_t l_388 = 8L;
                        uint8_t l_389 = 1UL;
                        uint32_t l_390 = 6UL;
                        l_389 |= ((*l_342) = l_388);
                        l_390--;
                    }
                    (*l_343) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_393.yzyyxwzyywxwwyyy)).s2e)).even;
                    (*l_340) = ((((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(0xDA7BL, ((l_395 = (l_394 = (l_335 = 0x07987628L))) , l_396), ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 16))(l_397.yyyxyxyyyyyxxyyx)), ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 4))(l_398.se540)).hi, ((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 8))(4UL, l_399[0][1], 0x84DBL, 0UL, (((VECTOR(uint64_t, 4))(l_400.yxww)).z , l_401), 0UL, 0x7FBFL, 1UL)).s6106413005041260, ((VECTOR(uint16_t, 4))(l_402.s3105)).xywzwyxwwywzzzxy))).sac))), ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))(l_403.s600e59af))))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0xCECBL, 0x9FBCL, l_404, l_405, 0x930DL, 9UL, 65535UL, 65533UL)).s0, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_406.s44)), 1UL, 65527UL)), l_407.y, 0x88D5L, 0x718EL))))).s27))), (l_408 , ((VECTOR(uint16_t, 8))(l_409.yxyyxyyx)).s0), ((VECTOR(uint16_t, 2))(65526UL, 0x73A7L)), 65529UL, 0x7E58L, 0UL)).lo, (uint16_t)(l_332.s5 ^= GROUP_DIVERGE(1, 1))))).zzxzzxwwxwzwyxxz, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 2))(0xFFL, 8UL)), ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_410.yxyxyxxxxyyxyxyy)).hi)).s16)).xyxyyxxxyxyyyyyx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_411.s70ffb75d)).s62)).xyxyyxyyxxyxxxxx))).s15))).xyyx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(l_412.wxyx)).even, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_413.zx)))).xxxyxxyxyyyxyxxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(l_414.yywwzxxx)).s0177665616777060))).sa9, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_415.scc))))))), 0x6EF42609L, 0x7195AE03L)).hi, ((VECTOR(int32_t, 8))(0x2C1BFD92L, l_416[0], 0x0A26A2D9L, (-1L), ((VECTOR(int32_t, 4))(0x754A0978L)))).s52))), 0x3A58FB5BL, l_417, 0L, ((VECTOR(int32_t, 2))(0x789FDFA6L)), 0L)))).s4343560122503500))).se4, (int32_t)l_418, (int32_t)l_419)))))))).xyxxxyyxyxxyyxyx, (int32_t)l_420))).lo)).s2 , l_421) , l_422), 0x6EE8L, ((VECTOR(uint16_t, 8))(65535UL)), 0xEC79L, 0x5084L, l_423, ((VECTOR(uint16_t, 2))(3UL)), 65535UL)).hi, ((VECTOR(uint16_t, 8))(65535UL))))).s5245225001477313)).s7d5e))).xwwzwzwyzyzxzwyw))).sf3af)), ((VECTOR(uint16_t, 4))(6UL))))), 4UL, 9UL, ((VECTOR(uint16_t, 2))(0xB3E7L)), 7UL, ((VECTOR(uint16_t, 4))(0x82D5L)), 0x8802L)))).hi, ((VECTOR(uint16_t, 8))(0xEAA1L))))).s4 , l_424) , l_425);
                }
            }
            else
            { /* block id: 179 */
                int32_t l_426[8][7] = {{(-1L),0x7F89A7C8L,1L,1L,(-1L),(-1L),1L},{(-1L),0x7F89A7C8L,1L,1L,(-1L),(-1L),1L},{(-1L),0x7F89A7C8L,1L,1L,(-1L),(-1L),1L},{(-1L),0x7F89A7C8L,1L,1L,(-1L),(-1L),1L},{(-1L),0x7F89A7C8L,1L,1L,(-1L),(-1L),1L},{(-1L),0x7F89A7C8L,1L,1L,(-1L),(-1L),1L},{(-1L),0x7F89A7C8L,1L,1L,(-1L),(-1L),1L},{(-1L),0x7F89A7C8L,1L,1L,(-1L),(-1L),1L}};
                uint8_t l_437 = 250UL;
                uint8_t l_440 = 250UL;
                int32_t *l_443 = &l_426[2][4];
                int32_t *l_444 = (void*)0;
                int32_t *l_445 = &l_426[7][0];
                int i, j;
                for (l_426[4][2] = 0; (l_426[4][2] <= (-14)); l_426[4][2]--)
                { /* block id: 182 */
                    uint32_t l_429[1];
                    int32_t l_430 = 5L;
                    int64_t l_431 = 1L;
                    uint16_t l_432[7] = {65535UL,0x487FL,65535UL,65535UL,0x487FL,65535UL,65535UL};
                    int32_t *l_435 = &l_430;
                    int32_t *l_436 = (void*)0;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_429[i] = 1UL;
                    l_223 = l_429[0];
                    --l_432[5];
                    l_436 = l_435;
                }
                l_437++;
                l_440++;
                l_445 = (l_444 = l_443);
            }
        }
        l_446 = l_446;
        unsigned int result = 0;
        result += l_220;
        atomic_add(&p_1708->l_special_values[0], result);
    }
    else
    { /* block id: 194 */
        (1 + 1);
    }
    l_449 ^= ((*p_73) = 1L);
    for (p_1708->g_31 = (-23); (p_1708->g_31 < 44); p_1708->g_31 = safe_add_func_int16_t_s_s(p_1708->g_31, 7))
    { /* block id: 201 */
        int64_t l_452[5] = {0x0BDE1A7038308B87L,0x0BDE1A7038308B87L,0x0BDE1A7038308B87L,0x0BDE1A7038308B87L,0x0BDE1A7038308B87L};
        int i;
        l_452[0] |= (*p_73);
        if ((*p_73))
            break;
        if ((*p_73))
            break;
    }
    p_73 = &l_449;
    return l_449;
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_83 p_1708->g_87 p_1708->g_31 p_1708->g_100 p_1708->g_comm_values p_1708->g_101 p_1708->g_119 p_1708->g_52 p_1708->g_126 p_1708->g_110 p_1708->g_127 p_1708->g_29 p_1708->g_158 p_1708->g_159 p_1708->g_142 p_1708->g_195 p_1708->g_186
 * writes: p_1708->g_110 p_1708->g_127 p_1708->g_142 p_1708->g_29 p_1708->g_186
 */
uint8_t  func_77(int64_t  p_78, int64_t  p_79, uint64_t * p_80, uint8_t  p_81, struct S1 * p_1708)
{ /* block id: 16 */
    VECTOR(int32_t, 4) l_84 = (VECTOR(int32_t, 4))(0x38A52A62L, (VECTOR(int32_t, 2))(0x38A52A62L, 0x2DF4B1D3L), 0x2DF4B1D3L);
    VECTOR(int32_t, 2) l_85 = (VECTOR(int32_t, 2))(0x30A6BADEL, 0x3F9D6D6FL);
    VECTOR(int32_t, 16) l_86 = (VECTOR(int32_t, 16))(0x6AA6BC85L, (VECTOR(int32_t, 4))(0x6AA6BC85L, (VECTOR(int32_t, 2))(0x6AA6BC85L, 0x474A0401L), 0x474A0401L), 0x474A0401L, 0x6AA6BC85L, 0x474A0401L, (VECTOR(int32_t, 2))(0x6AA6BC85L, 0x474A0401L), (VECTOR(int32_t, 2))(0x6AA6BC85L, 0x474A0401L), 0x6AA6BC85L, 0x474A0401L, 0x6AA6BC85L, 0x474A0401L);
    VECTOR(int32_t, 4) l_88 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 5L), 5L);
    VECTOR(uint32_t, 8) l_93 = (VECTOR(uint32_t, 8))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x74066B75L), 0x74066B75L), 0x74066B75L, 4294967289UL, 0x74066B75L);
    uint32_t *l_94 = (void*)0;
    uint32_t *l_95[2];
    uint32_t **l_102 = &l_95[1];
    int32_t l_124 = 0x7BBD7787L;
    int64_t l_125 = (-4L);
    uint64_t *l_218[7] = {&p_1708->g_142,&p_1708->g_142,&p_1708->g_142,&p_1708->g_142,&p_1708->g_142,&p_1708->g_142,&p_1708->g_142};
    int i;
    for (i = 0; i < 2; i++)
        l_95[i] = (void*)0;
    atomic_or(&p_1708->l_atomic_reduction[0], ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x53427313L, (-6L))), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(p_1708->g_83.s09f24556)).s54, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(l_84.yzzwzyxz)).s7467043477435023))).even)).s33))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(l_85.yy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_86.s50)), ((VECTOR(int32_t, 8))(p_1708->g_87.s11998bf5)), ((VECTOR(int32_t, 4))(l_88.yyzy)), 0x6D4517DEL, 5L)).s68))).yxyxxxyyxxxyxyxy)).s28)), 0x5EB65597L, 0L)).s50)).xyyxyyxxyyxxxyxy)).s96a4)).zzzwwxxw))).s7);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1708->v_collective += p_1708->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (((((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(p_1708->g_31, l_88.w)), (l_85.x = ((VECTOR(uint32_t, 8))(l_93.s67410457)).s0))) > ((p_78 < (safe_rshift_func_uint16_t_u_s(((0x284D449488234B59L & 0x6A0CFD0E8CD9E3A4L) | p_79), 6))) & ((-1L) | (safe_div_func_int32_t_s_s(p_1708->g_31, (((((*l_102) = (l_88.x , p_1708->g_100)) != (void*)0) ^ p_81) || p_1708->g_87.sa)))))) || (*p_80)) == p_78))
    { /* block id: 20 */
        VECTOR(int64_t, 2) l_107 = (VECTOR(int64_t, 2))((-2L), 0x2590F8A910FBC845L);
        VECTOR(uint16_t, 16) l_108 = (VECTOR(uint16_t, 16))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0xEDF0L), 0xEDF0L), 0xEDF0L, 65532UL, 0xEDF0L, (VECTOR(uint16_t, 2))(65532UL, 0xEDF0L), (VECTOR(uint16_t, 2))(65532UL, 0xEDF0L), 65532UL, 0xEDF0L, 65532UL, 0xEDF0L);
        int8_t *l_109[7][8][3] = {{{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110}},{{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110}},{{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110}},{{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110}},{{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110}},{{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110}},{{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110},{&p_1708->g_110,&p_1708->g_110,&p_1708->g_110}}};
        int32_t l_111 = 0x692E2E77L;
        VECTOR(int16_t, 4) l_114 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L));
        VECTOR(int16_t, 2) l_115 = (VECTOR(int16_t, 2))(0x51E6L, (-1L));
        int32_t *l_116 = (void*)0;
        VECTOR(uint16_t, 8) l_160 = (VECTOR(uint16_t, 8))(0xB5AEL, (VECTOR(uint16_t, 4))(0xB5AEL, (VECTOR(uint16_t, 2))(0xB5AEL, 0x62F8L), 0x62F8L), 0x62F8L, 0xB5AEL, 0x62F8L);
        VECTOR(uint16_t, 8) l_163 = (VECTOR(uint16_t, 8))(0x08D4L, (VECTOR(uint16_t, 4))(0x08D4L, (VECTOR(uint16_t, 2))(0x08D4L, 0UL), 0UL), 0UL, 0x08D4L, 0UL);
        int64_t *l_166 = (void*)0;
        uint64_t *l_177 = &p_1708->g_142;
        int32_t *l_178[6][1];
        uint32_t l_179 = 0x81F8B52BL;
        VECTOR(int8_t, 16) l_187 = (VECTOR(int8_t, 16))(0x3CL, (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, 0x6BL), 0x6BL), 0x6BL, 0x3CL, 0x6BL, (VECTOR(int8_t, 2))(0x3CL, 0x6BL), (VECTOR(int8_t, 2))(0x3CL, 0x6BL), 0x3CL, 0x6BL, 0x3CL, 0x6BL);
        int16_t l_189 = 0x47D5L;
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_178[i][j] = (void*)0;
        }
        if ((l_85.x &= (safe_add_func_int8_t_s_s(((((p_1708->g_comm_values[p_1708->tid] ^ (l_107.x != (((((p_1708->g_110 = (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_108.se17020143c861c60)).hi)).hi)).zwxwxwwy)).s0 , 0x41L)) != (l_111 |= p_1708->g_101[1])) < (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(l_114.xzxwzwxzxxyxyxzw)).s3a, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_115.yy)).xxxxyyyxxxxyxyyx)).s23b7)).hi))).hi, (l_116 != (void*)0)))) >= ((((safe_sub_func_uint32_t_u_u((((VECTOR(int32_t, 16))(p_1708->g_119.xxxxyxxyyyyxxxxy)).s9 , (1L <= (((safe_div_func_uint8_t_u_u(((void*)0 == &p_1708->g_101[1]), p_79)) > 0xFE4B33A2C9E81EBBL) , 0L))), p_81)) && p_1708->g_52.s4) , l_124) | l_125)) < l_86.s4))) & l_115.x) < 0x0A34L) , p_1708->g_83.s4), p_78))))
        { /* block id: 24 */
            (*p_1708->g_126) = &p_1708->g_29;
        }
        else
        { /* block id: 26 */
            int32_t l_134 = 7L;
            int64_t *l_137 = (void*)0;
            int64_t *l_138 = (void*)0;
            int64_t *l_139 = &l_125;
            int16_t *l_140 = (void*)0;
            int16_t *l_141[4][4][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int32_t *l_143 = &l_111;
            int32_t *l_144 = (void*)0;
            int32_t *l_145 = (void*)0;
            int32_t *l_146 = (void*)0;
            int32_t *l_147 = (void*)0;
            int32_t *l_148 = (void*)0;
            int32_t *l_149 = (void*)0;
            int32_t *l_150 = (void*)0;
            int32_t *l_151 = &l_124;
            int i, j, k;
            (*l_151) &= ((**p_1708->g_126) &= (((*l_143) = ((safe_mul_func_int16_t_s_s((p_78 && p_1708->g_110), (p_1708->g_142 = (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_1708->g_31, (((VECTOR(int8_t, 2))(0x1CL, 0x16L)).lo & l_134))), (safe_add_func_int64_t_s_s(l_134, ((*l_139) = ((p_81 , &p_1708->g_110) != l_109[1][4][1]))))))))) , (p_1708->g_119.x ^ 1L))) | p_78));
            l_148 = (l_116 = &l_111);
        }
        l_179 |= ((p_79 != (*p_80)) , ((safe_mod_func_uint64_t_u_u(((((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(0x9FL, 1)) , ((VECTOR(int16_t, 2))(p_1708->g_158.yw)).lo), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(p_1708->g_159.sba)), ((VECTOR(uint16_t, 2))(l_160.s37))))).xxxx)).hi)).xxyyyxxy)).s6)) , (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_163.s11)), 0x18ADL, 0xF310L)).zwwyzwyx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(1UL, 0x055CL, 65528UL, 0xD663L)))).ywyzzxww))))).s6, (safe_mod_func_uint16_t_u_u(0x9082L, (((l_166 = &p_78) != (void*)0) ^ (safe_rshift_func_int8_t_s_u((l_86.s9 >= ((*p_80) <= (safe_rshift_func_uint8_t_u_u(((((((*l_177) &= ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(p_1708->g_29, FAKE_DIVERGE(p_1708->group_0_offset, get_group_id(0), 10))) , &p_1708->g_127[0]) != (void*)0), 1)), 14)) , FAKE_DIVERGE(p_1708->global_2_offset, get_global_id(2), 10))) & p_79) , (*p_80)) <= (*p_80)) | p_1708->g_101[1]), p_1708->g_comm_values[p_1708->tid])))), 6)))))))) && 0x7DE14877L) || FAKE_DIVERGE(p_1708->global_0_offset, get_global_id(0), 10)), 0x32E41012E1E6929AL)) , p_79));
        for (l_179 = 13; (l_179 >= 25); l_179++)
        { /* block id: 40 */
            (1 + 1);
        }
        (*p_1708->g_195) = &l_124;
    }
    else
    { /* block id: 52 */
        int32_t **l_211 = &p_1708->g_127[0];
        VECTOR(int8_t, 4) l_214 = (VECTOR(int8_t, 4))(0x52L, (VECTOR(int8_t, 2))(0x52L, 0x68L), 0x68L);
        int8_t *l_217[6][10] = {{&p_1708->g_110,&p_1708->g_110,(void*)0,(void*)0,(void*)0,&p_1708->g_110,&p_1708->g_110,(void*)0,(void*)0,(void*)0},{&p_1708->g_110,&p_1708->g_110,(void*)0,(void*)0,(void*)0,&p_1708->g_110,&p_1708->g_110,(void*)0,(void*)0,(void*)0},{&p_1708->g_110,&p_1708->g_110,(void*)0,(void*)0,(void*)0,&p_1708->g_110,&p_1708->g_110,(void*)0,(void*)0,(void*)0},{&p_1708->g_110,&p_1708->g_110,(void*)0,(void*)0,(void*)0,&p_1708->g_110,&p_1708->g_110,(void*)0,(void*)0,(void*)0},{&p_1708->g_110,&p_1708->g_110,(void*)0,(void*)0,(void*)0,&p_1708->g_110,&p_1708->g_110,(void*)0,(void*)0,(void*)0},{&p_1708->g_110,&p_1708->g_110,(void*)0,(void*)0,(void*)0,&p_1708->g_110,&p_1708->g_110,(void*)0,(void*)0,(void*)0}};
        uint64_t *l_219 = &p_1708->g_31;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1708->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[(safe_mod_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((~((((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((l_211 != l_211) == (((p_78 <= ((p_1708->g_186.x = (((4294967295UL < (safe_div_func_uint64_t_u_u((**l_211), ((VECTOR(uint64_t, 4))((((VECTOR(int8_t, 2))(l_214.wx)).odd , (0x21452BD4L >= p_79)), 0x81EC9BFAB435F6B2L, 0UL, 4UL)).w))) > (safe_rshift_func_uint16_t_u_s((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(0L, ((VECTOR(int64_t, 2))((-1L), 0x1277215B510E0DADL)), (-7L))).xzzwywxx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(1L, 0x1B6530D8BC5952B6L, 5L, (-1L))).wzxwxyyy)))), ((VECTOR(int64_t, 8))(0x09B31E182C64B084L))))).hi)).ywzwyyyw)).s4 != l_85.x), p_79))) && p_81)) >= l_88.z)) , 255UL) && FAKE_DIVERGE(p_1708->global_1_offset, get_global_id(1), 10))), 0xFDF5L)), (**l_211))))), 0L)), p_1708->g_87.s9)) > p_81) , 0x3AC3036BL) , 0L)), p_1708->g_119.x)), p_81)), p_81)) , l_218[4]) == l_219), 10))][(safe_mod_func_uint32_t_u_u(p_1708->tid, 1))]));
    }
    return p_1708->g_186.w;
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
    __local int64_t l_comm_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_comm_values[i] = 1;
    struct S1 c_1709;
    struct S1* p_1708 = &c_1709;
    struct S1 c_1710 = {
        18446744073709551615UL, // p_1708->g_20
        (-2L), // p_1708->g_29
        0x9BF4A3CA5AAD5032L, // p_1708->g_31
        (VECTOR(int64_t, 8))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 0x6E6221365D5A10D5L), 0x6E6221365D5A10D5L), 0x6E6221365D5A10D5L, (-5L), 0x6E6221365D5A10D5L), // p_1708->g_52
        (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x2AF6298AL), 0x2AF6298AL), 0x2AF6298AL, (-3L), 0x2AF6298AL, (VECTOR(int32_t, 2))((-3L), 0x2AF6298AL), (VECTOR(int32_t, 2))((-3L), 0x2AF6298AL), (-3L), 0x2AF6298AL, (-3L), 0x2AF6298AL), // p_1708->g_83
        (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x68C6C5A5L), 0x68C6C5A5L), 0x68C6C5A5L, (-10L), 0x68C6C5A5L, (VECTOR(int32_t, 2))((-10L), 0x68C6C5A5L), (VECTOR(int32_t, 2))((-10L), 0x68C6C5A5L), (-10L), 0x68C6C5A5L, (-10L), 0x68C6C5A5L), // p_1708->g_87
        {0UL,0UL}, // p_1708->g_101
        &p_1708->g_101[1], // p_1708->g_100
        1L, // p_1708->g_110
        (VECTOR(int32_t, 2))(0L, 0x35165CF1L), // p_1708->g_119
        {&p_1708->g_29}, // p_1708->g_127
        &p_1708->g_127[0], // p_1708->g_126
        0xB87C0FFDF03653FFL, // p_1708->g_142
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x76CDL), 0x76CDL), // p_1708->g_158
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL), // p_1708->g_159
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x66L), 0x66L), // p_1708->g_186
        {6L,6L,6L,6L,6L,6L}, // p_1708->g_188
        (VECTOR(int32_t, 4))(0x602C7639L, (VECTOR(int32_t, 2))(0x602C7639L, 0x7C30313BL), 0x7C30313BL), // p_1708->g_191
        (void*)0, // p_1708->g_194
        &p_1708->g_127[0], // p_1708->g_195
        (void*)0, // p_1708->g_447
        18446744073709551615UL, // p_1708->g_454
        0x665E2384A1193F9AL, // p_1708->g_472
        &p_1708->g_472, // p_1708->g_471
        (VECTOR(int64_t, 2))(0x29C1664A0943533AL, 0x144D35DD68590BAFL), // p_1708->g_474
        0x0DL, // p_1708->g_488
        0x4486F09BCC5FD178L, // p_1708->g_491
        {{1UL,0xE6D7L,0UL},{1UL,0xE6D7L,0UL},{1UL,0xE6D7L,0UL},{1UL,0xE6D7L,0UL}}, // p_1708->g_494
        0x17B6C1F9E4209DE3L, // p_1708->g_498
        0x3BA3L, // p_1708->g_499
        {0xE8ADL,-7L,255UL,-9L,0x47E870E0EC834D06L,0x34F98FDE571D56DFL,1UL}, // p_1708->g_536
        &p_1708->g_31, // p_1708->g_548
        (VECTOR(int64_t, 8))(0x0ED1F6DE8DA16A2FL, (VECTOR(int64_t, 4))(0x0ED1F6DE8DA16A2FL, (VECTOR(int64_t, 2))(0x0ED1F6DE8DA16A2FL, (-6L)), (-6L)), (-6L), 0x0ED1F6DE8DA16A2FL, (-6L)), // p_1708->g_563
        (void*)0, // p_1708->g_590
        {&p_1708->g_590,&p_1708->g_590,&p_1708->g_590,&p_1708->g_590,&p_1708->g_590,&p_1708->g_590}, // p_1708->g_589
        {{&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0]},{&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0]},{&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0]},{&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0]},{&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0]},{&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0],&p_1708->g_127[0]}}, // p_1708->g_601
        (void*)0, // p_1708->g_602
        (VECTOR(int32_t, 4))(0x652D8A6FL, (VECTOR(int32_t, 2))(0x652D8A6FL, 8L), 8L), // p_1708->g_616
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x1FL), 0x1FL), 0x1FL, 1L, 0x1FL, (VECTOR(int8_t, 2))(1L, 0x1FL), (VECTOR(int8_t, 2))(1L, 0x1FL), 1L, 0x1FL, 1L, 0x1FL), // p_1708->g_632
        &p_1708->g_536.f6, // p_1708->g_643
        {0UL,4L,0xA0L,4L,0x78FD245C4678735CL,0xC4A2573516839EA7L,18446744073709551612UL}, // p_1708->g_677
        &p_1708->g_127[0], // p_1708->g_706
        (VECTOR(uint32_t, 2))(0xE53DD84FL, 4294967288UL), // p_1708->g_709
        (VECTOR(uint32_t, 2))(0x805B77AEL, 0xD1406AA8L), // p_1708->g_710
        (VECTOR(uint32_t, 2))(0x82877148L, 4294967295UL), // p_1708->g_711
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967293UL), 4294967293UL), 4294967293UL, 0UL, 4294967293UL, (VECTOR(uint32_t, 2))(0UL, 4294967293UL), (VECTOR(uint32_t, 2))(0UL, 4294967293UL), 0UL, 4294967293UL, 0UL, 4294967293UL), // p_1708->g_714
        (VECTOR(uint64_t, 2))(18446744073709551611UL, 0UL), // p_1708->g_721
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xF1L), 0xF1L), 0xF1L, 0UL, 0xF1L), // p_1708->g_722
        (VECTOR(uint8_t, 2))(6UL, 1UL), // p_1708->g_724
        {{{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL}},{{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL}},{{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL}},{{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL}},{{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL}},{{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL}},{{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL},{18446744073709551606UL,18446744073709551606UL,1UL,4UL,7UL,4UL}}}, // p_1708->g_747
        (void*)0, // p_1708->g_761
        {{{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L}},{{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L}},{{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L}},{{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L}},{{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L}},{{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L},{4L,0x06CEAEA4L,0x2F0E7FDEL,0x06CEAEA4L}}}, // p_1708->g_799
        (VECTOR(int32_t, 8))(0x48090F71L, (VECTOR(int32_t, 4))(0x48090F71L, (VECTOR(int32_t, 2))(0x48090F71L, 1L), 1L), 1L, 0x48090F71L, 1L), // p_1708->g_812
        0x39L, // p_1708->g_842
        {0xF74FL,0L,0xE0L,1L,0xD0249E9718E89E3FL,0x68A296D1783F73F2L,0x64ADCDF0EA366762L}, // p_1708->g_847
        {0x1C0CL,0x076BCB07D0F2FC2BL,0xFBL,-1L,0UL,0x337F8FAE3C6127F9L,1UL}, // p_1708->g_851
        0x6CL, // p_1708->g_930
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xCFL), 0xCFL), // p_1708->g_940
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xD4L), 0xD4L), 0xD4L, 255UL, 0xD4L), // p_1708->g_941
        0x24L, // p_1708->g_973
        {65532UL,0x3F82331F60D6C1F1L,0xEEL,-1L,6UL,0xB383B2A44A9CC84DL,0xA769364AC6588B43L}, // p_1708->g_1027
        &p_1708->g_127[0], // p_1708->g_1029
        {65530UL,0x3D70A217E0F3CFC7L,0xC9L,0x12L,0UL,0x615A7956C5820FA8L,8UL}, // p_1708->g_1038
        {0xB8F4L,0x555CFAD9FFFD5F15L,1UL,0x69L,0x8FE31BBF95C9D346L,0x098CDD6834B447A2L,0x3F61E00992A4B8A7L}, // p_1708->g_1044
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL), // p_1708->g_1049
        &p_1708->g_127[0], // p_1708->g_1067
        {0x355BL,0x063BA138F9C08779L,1UL,0L,18446744073709551615UL,18446744073709551615UL,0UL}, // p_1708->g_1086
        (void*)0, // p_1708->g_1088
        &p_1708->g_127[0], // p_1708->g_1154
        (void*)0, // p_1708->g_1197
        {0x1153L,0x250F282338FF5B6EL,1UL,0x58L,8UL,18446744073709551610UL,6UL}, // p_1708->g_1206
        &p_1708->g_1086, // p_1708->g_1207
        (void*)0, // p_1708->g_1208
        (VECTOR(int8_t, 4))(0x3BL, (VECTOR(int8_t, 2))(0x3BL, 0x6AL), 0x6AL), // p_1708->g_1216
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xDAB9L), 0xDAB9L), 0xDAB9L, 1UL, 0xDAB9L), // p_1708->g_1219
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 9L), 9L), // p_1708->g_1220
        (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x06A0L), 0x06A0L), 0x06A0L, 8L, 0x06A0L, (VECTOR(int16_t, 2))(8L, 0x06A0L), (VECTOR(int16_t, 2))(8L, 0x06A0L), 8L, 0x06A0L, 8L, 0x06A0L), // p_1708->g_1223
        (VECTOR(uint64_t, 16))(0x474A2BB4E202034BL, (VECTOR(uint64_t, 4))(0x474A2BB4E202034BL, (VECTOR(uint64_t, 2))(0x474A2BB4E202034BL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0x474A2BB4E202034BL, 18446744073709551606UL, (VECTOR(uint64_t, 2))(0x474A2BB4E202034BL, 18446744073709551606UL), (VECTOR(uint64_t, 2))(0x474A2BB4E202034BL, 18446744073709551606UL), 0x474A2BB4E202034BL, 18446744073709551606UL, 0x474A2BB4E202034BL, 18446744073709551606UL), // p_1708->g_1248
        (VECTOR(int8_t, 2))(0x29L, 0x7DL), // p_1708->g_1250
        (-1L), // p_1708->g_1254
        1L, // p_1708->g_1262
        {0x86F39C65L,0x86F39C65L,0x86F39C65L,0x86F39C65L,0x86F39C65L,0x86F39C65L}, // p_1708->g_1270
        (VECTOR(int16_t, 2))(0x74F7L, 0x337EL), // p_1708->g_1271
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-10L)), (-10L)), // p_1708->g_1283
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xF826L), 0xF826L), 0xF826L, 65535UL, 0xF826L), // p_1708->g_1292
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 3UL), 3UL), // p_1708->g_1315
        (VECTOR(uint8_t, 8))(0x2EL, (VECTOR(uint8_t, 4))(0x2EL, (VECTOR(uint8_t, 2))(0x2EL, 0x67L), 0x67L), 0x67L, 0x2EL, 0x67L), // p_1708->g_1317
        &p_1708->g_127[0], // p_1708->g_1361
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x41D515E2L), 0x41D515E2L), 0x41D515E2L, 0L, 0x41D515E2L, (VECTOR(int32_t, 2))(0L, 0x41D515E2L), (VECTOR(int32_t, 2))(0L, 0x41D515E2L), 0L, 0x41D515E2L, 0L, 0x41D515E2L), // p_1708->g_1364
        {0x82E8L,-3L,248UL,0x34L,18446744073709551615UL,0x800A0BE0C58B87C3L,0x80555080C6B374A5L}, // p_1708->g_1382
        0x643B4E35L, // p_1708->g_1386
        (VECTOR(uint8_t, 16))(0xCFL, (VECTOR(uint8_t, 4))(0xCFL, (VECTOR(uint8_t, 2))(0xCFL, 0x82L), 0x82L), 0x82L, 0xCFL, 0x82L, (VECTOR(uint8_t, 2))(0xCFL, 0x82L), (VECTOR(uint8_t, 2))(0xCFL, 0x82L), 0xCFL, 0x82L, 0xCFL, 0x82L), // p_1708->g_1390
        {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_1708->g_1394
        &p_1708->g_1394[0][2][4], // p_1708->g_1393
        (VECTOR(int32_t, 2))(0x1DC1C928L, 0x4D398B72L), // p_1708->g_1447
        (VECTOR(int32_t, 16))(0x4A5E2107L, (VECTOR(int32_t, 4))(0x4A5E2107L, (VECTOR(int32_t, 2))(0x4A5E2107L, (-9L)), (-9L)), (-9L), 0x4A5E2107L, (-9L), (VECTOR(int32_t, 2))(0x4A5E2107L, (-9L)), (VECTOR(int32_t, 2))(0x4A5E2107L, (-9L)), 0x4A5E2107L, (-9L), 0x4A5E2107L, (-9L)), // p_1708->g_1448
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L)), // p_1708->g_1451
        {0xCED7L,-1L,0x62L,0x25L,0xED7FED629A504FC2L,18446744073709551606UL,1UL}, // p_1708->g_1454
        (VECTOR(int32_t, 8))(0x279CE2A7L, (VECTOR(int32_t, 4))(0x279CE2A7L, (VECTOR(int32_t, 2))(0x279CE2A7L, 8L), 8L), 8L, 0x279CE2A7L, 8L), // p_1708->g_1457
        (VECTOR(uint64_t, 2))(18446744073709551610UL, 9UL), // p_1708->g_1467
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 7L), 7L), 7L, 1L, 7L, (VECTOR(int16_t, 2))(1L, 7L), (VECTOR(int16_t, 2))(1L, 7L), 1L, 7L, 1L, 7L), // p_1708->g_1520
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), // p_1708->g_1526
        {&p_1708->g_1270[4]}, // p_1708->g_1537
        &p_1708->g_1537[0], // p_1708->g_1536
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 247UL), 247UL), // p_1708->g_1545
        (VECTOR(uint8_t, 8))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0x42L), 0x42L), 0x42L, 250UL, 0x42L), // p_1708->g_1547
        0x63E8L, // p_1708->g_1554
        18446744073709551611UL, // p_1708->g_1557
        {{{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL}},{{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL}},{{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL},{65535UL,1UL}}}, // p_1708->g_1559
        &p_1708->g_536, // p_1708->g_1563
        {&p_1708->g_1563,&p_1708->g_1563,&p_1708->g_1563,&p_1708->g_1563}, // p_1708->g_1562
        &p_1708->g_1537[0], // p_1708->g_1568
        &p_1708->g_1568, // p_1708->g_1567
        (VECTOR(uint64_t, 8))(0x5D891D71BA6A8F23L, (VECTOR(uint64_t, 4))(0x5D891D71BA6A8F23L, (VECTOR(uint64_t, 2))(0x5D891D71BA6A8F23L, 0x9156173F375023F3L), 0x9156173F375023F3L), 0x9156173F375023F3L, 0x5D891D71BA6A8F23L, 0x9156173F375023F3L), // p_1708->g_1591
        (VECTOR(uint64_t, 16))(0x088206A9AF16883CL, (VECTOR(uint64_t, 4))(0x088206A9AF16883CL, (VECTOR(uint64_t, 2))(0x088206A9AF16883CL, 0xD7E4D6F902A28CBAL), 0xD7E4D6F902A28CBAL), 0xD7E4D6F902A28CBAL, 0x088206A9AF16883CL, 0xD7E4D6F902A28CBAL, (VECTOR(uint64_t, 2))(0x088206A9AF16883CL, 0xD7E4D6F902A28CBAL), (VECTOR(uint64_t, 2))(0x088206A9AF16883CL, 0xD7E4D6F902A28CBAL), 0x088206A9AF16883CL, 0xD7E4D6F902A28CBAL, 0x088206A9AF16883CL, 0xD7E4D6F902A28CBAL), // p_1708->g_1596
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 2UL), // p_1708->g_1597
        {{{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{0xECE7L,1L,0xA4L,0x5AL,2UL,1UL,3UL},{65529UL,0x38B500CF3F90076DL,252UL,0L,0x4A9F1B3E73921880L,7UL,18446744073709551615UL},{0UL,7L,0x79L,0L,0x266FB7359FEA76D1L,2UL,0x47EDB34F569DA77DL}},{{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{0xECE7L,1L,0xA4L,0x5AL,2UL,1UL,3UL},{65529UL,0x38B500CF3F90076DL,252UL,0L,0x4A9F1B3E73921880L,7UL,18446744073709551615UL},{0UL,7L,0x79L,0L,0x266FB7359FEA76D1L,2UL,0x47EDB34F569DA77DL}},{{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{0xECE7L,1L,0xA4L,0x5AL,2UL,1UL,3UL},{65529UL,0x38B500CF3F90076DL,252UL,0L,0x4A9F1B3E73921880L,7UL,18446744073709551615UL},{0UL,7L,0x79L,0L,0x266FB7359FEA76D1L,2UL,0x47EDB34F569DA77DL}},{{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{0xECE7L,1L,0xA4L,0x5AL,2UL,1UL,3UL},{65529UL,0x38B500CF3F90076DL,252UL,0L,0x4A9F1B3E73921880L,7UL,18446744073709551615UL},{0UL,7L,0x79L,0L,0x266FB7359FEA76D1L,2UL,0x47EDB34F569DA77DL}},{{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{0xECE7L,1L,0xA4L,0x5AL,2UL,1UL,3UL},{65529UL,0x38B500CF3F90076DL,252UL,0L,0x4A9F1B3E73921880L,7UL,18446744073709551615UL},{0UL,7L,0x79L,0L,0x266FB7359FEA76D1L,2UL,0x47EDB34F569DA77DL}},{{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{0xECE7L,1L,0xA4L,0x5AL,2UL,1UL,3UL},{65529UL,0x38B500CF3F90076DL,252UL,0L,0x4A9F1B3E73921880L,7UL,18446744073709551615UL},{0UL,7L,0x79L,0L,0x266FB7359FEA76D1L,2UL,0x47EDB34F569DA77DL}},{{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{0xECE7L,1L,0xA4L,0x5AL,2UL,1UL,3UL},{65529UL,0x38B500CF3F90076DL,252UL,0L,0x4A9F1B3E73921880L,7UL,18446744073709551615UL},{0UL,7L,0x79L,0L,0x266FB7359FEA76D1L,2UL,0x47EDB34F569DA77DL}},{{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{0xECE7L,1L,0xA4L,0x5AL,2UL,1UL,3UL},{65529UL,0x38B500CF3F90076DL,252UL,0L,0x4A9F1B3E73921880L,7UL,18446744073709551615UL},{0UL,7L,0x79L,0L,0x266FB7359FEA76D1L,2UL,0x47EDB34F569DA77DL}},{{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{7UL,0x373A850A2447A0AFL,251UL,0x73L,18446744073709551611UL,0UL,0x260442CCC2ACC386L},{0xECE7L,1L,0xA4L,0x5AL,2UL,1UL,3UL},{65529UL,0x38B500CF3F90076DL,252UL,0L,0x4A9F1B3E73921880L,7UL,18446744073709551615UL},{0UL,7L,0x79L,0L,0x266FB7359FEA76D1L,2UL,0x47EDB34F569DA77DL}}}, // p_1708->g_1606
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L), (VECTOR(int16_t, 2))((-1L), (-3L)), (VECTOR(int16_t, 2))((-1L), (-3L)), (-1L), (-3L), (-1L), (-3L)), // p_1708->g_1645
        {&p_1708->g_589[0],(void*)0,&p_1708->g_589[0],&p_1708->g_589[0],(void*)0,&p_1708->g_589[0],&p_1708->g_589[0],(void*)0,&p_1708->g_589[0]}, // p_1708->g_1659
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xCB74L), 0xCB74L), 0xCB74L, 65535UL, 0xCB74L), // p_1708->g_1681
        {&p_1708->g_1386,&p_1708->g_1386}, // p_1708->g_1694
        0, // p_1708->v_collective
        sequence_input[get_global_id(0)], // p_1708->global_0_offset
        sequence_input[get_global_id(1)], // p_1708->global_1_offset
        sequence_input[get_global_id(2)], // p_1708->global_2_offset
        sequence_input[get_local_id(0)], // p_1708->local_0_offset
        sequence_input[get_local_id(1)], // p_1708->local_1_offset
        sequence_input[get_local_id(2)], // p_1708->local_2_offset
        sequence_input[get_group_id(0)], // p_1708->group_0_offset
        sequence_input[get_group_id(1)], // p_1708->group_1_offset
        sequence_input[get_group_id(2)], // p_1708->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[0][get_linear_local_id()])), // p_1708->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1709 = c_1710;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1708);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1708->g_20, "p_1708->g_20", print_hash_value);
    transparent_crc(p_1708->g_29, "p_1708->g_29", print_hash_value);
    transparent_crc(p_1708->g_31, "p_1708->g_31", print_hash_value);
    transparent_crc(p_1708->g_52.s0, "p_1708->g_52.s0", print_hash_value);
    transparent_crc(p_1708->g_52.s1, "p_1708->g_52.s1", print_hash_value);
    transparent_crc(p_1708->g_52.s2, "p_1708->g_52.s2", print_hash_value);
    transparent_crc(p_1708->g_52.s3, "p_1708->g_52.s3", print_hash_value);
    transparent_crc(p_1708->g_52.s4, "p_1708->g_52.s4", print_hash_value);
    transparent_crc(p_1708->g_52.s5, "p_1708->g_52.s5", print_hash_value);
    transparent_crc(p_1708->g_52.s6, "p_1708->g_52.s6", print_hash_value);
    transparent_crc(p_1708->g_52.s7, "p_1708->g_52.s7", print_hash_value);
    transparent_crc(p_1708->g_83.s0, "p_1708->g_83.s0", print_hash_value);
    transparent_crc(p_1708->g_83.s1, "p_1708->g_83.s1", print_hash_value);
    transparent_crc(p_1708->g_83.s2, "p_1708->g_83.s2", print_hash_value);
    transparent_crc(p_1708->g_83.s3, "p_1708->g_83.s3", print_hash_value);
    transparent_crc(p_1708->g_83.s4, "p_1708->g_83.s4", print_hash_value);
    transparent_crc(p_1708->g_83.s5, "p_1708->g_83.s5", print_hash_value);
    transparent_crc(p_1708->g_83.s6, "p_1708->g_83.s6", print_hash_value);
    transparent_crc(p_1708->g_83.s7, "p_1708->g_83.s7", print_hash_value);
    transparent_crc(p_1708->g_83.s8, "p_1708->g_83.s8", print_hash_value);
    transparent_crc(p_1708->g_83.s9, "p_1708->g_83.s9", print_hash_value);
    transparent_crc(p_1708->g_83.sa, "p_1708->g_83.sa", print_hash_value);
    transparent_crc(p_1708->g_83.sb, "p_1708->g_83.sb", print_hash_value);
    transparent_crc(p_1708->g_83.sc, "p_1708->g_83.sc", print_hash_value);
    transparent_crc(p_1708->g_83.sd, "p_1708->g_83.sd", print_hash_value);
    transparent_crc(p_1708->g_83.se, "p_1708->g_83.se", print_hash_value);
    transparent_crc(p_1708->g_83.sf, "p_1708->g_83.sf", print_hash_value);
    transparent_crc(p_1708->g_87.s0, "p_1708->g_87.s0", print_hash_value);
    transparent_crc(p_1708->g_87.s1, "p_1708->g_87.s1", print_hash_value);
    transparent_crc(p_1708->g_87.s2, "p_1708->g_87.s2", print_hash_value);
    transparent_crc(p_1708->g_87.s3, "p_1708->g_87.s3", print_hash_value);
    transparent_crc(p_1708->g_87.s4, "p_1708->g_87.s4", print_hash_value);
    transparent_crc(p_1708->g_87.s5, "p_1708->g_87.s5", print_hash_value);
    transparent_crc(p_1708->g_87.s6, "p_1708->g_87.s6", print_hash_value);
    transparent_crc(p_1708->g_87.s7, "p_1708->g_87.s7", print_hash_value);
    transparent_crc(p_1708->g_87.s8, "p_1708->g_87.s8", print_hash_value);
    transparent_crc(p_1708->g_87.s9, "p_1708->g_87.s9", print_hash_value);
    transparent_crc(p_1708->g_87.sa, "p_1708->g_87.sa", print_hash_value);
    transparent_crc(p_1708->g_87.sb, "p_1708->g_87.sb", print_hash_value);
    transparent_crc(p_1708->g_87.sc, "p_1708->g_87.sc", print_hash_value);
    transparent_crc(p_1708->g_87.sd, "p_1708->g_87.sd", print_hash_value);
    transparent_crc(p_1708->g_87.se, "p_1708->g_87.se", print_hash_value);
    transparent_crc(p_1708->g_87.sf, "p_1708->g_87.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1708->g_101[i], "p_1708->g_101[i]", print_hash_value);

    }
    transparent_crc(p_1708->g_110, "p_1708->g_110", print_hash_value);
    transparent_crc(p_1708->g_119.x, "p_1708->g_119.x", print_hash_value);
    transparent_crc(p_1708->g_119.y, "p_1708->g_119.y", print_hash_value);
    transparent_crc(p_1708->g_142, "p_1708->g_142", print_hash_value);
    transparent_crc(p_1708->g_158.x, "p_1708->g_158.x", print_hash_value);
    transparent_crc(p_1708->g_158.y, "p_1708->g_158.y", print_hash_value);
    transparent_crc(p_1708->g_158.z, "p_1708->g_158.z", print_hash_value);
    transparent_crc(p_1708->g_158.w, "p_1708->g_158.w", print_hash_value);
    transparent_crc(p_1708->g_159.s0, "p_1708->g_159.s0", print_hash_value);
    transparent_crc(p_1708->g_159.s1, "p_1708->g_159.s1", print_hash_value);
    transparent_crc(p_1708->g_159.s2, "p_1708->g_159.s2", print_hash_value);
    transparent_crc(p_1708->g_159.s3, "p_1708->g_159.s3", print_hash_value);
    transparent_crc(p_1708->g_159.s4, "p_1708->g_159.s4", print_hash_value);
    transparent_crc(p_1708->g_159.s5, "p_1708->g_159.s5", print_hash_value);
    transparent_crc(p_1708->g_159.s6, "p_1708->g_159.s6", print_hash_value);
    transparent_crc(p_1708->g_159.s7, "p_1708->g_159.s7", print_hash_value);
    transparent_crc(p_1708->g_159.s8, "p_1708->g_159.s8", print_hash_value);
    transparent_crc(p_1708->g_159.s9, "p_1708->g_159.s9", print_hash_value);
    transparent_crc(p_1708->g_159.sa, "p_1708->g_159.sa", print_hash_value);
    transparent_crc(p_1708->g_159.sb, "p_1708->g_159.sb", print_hash_value);
    transparent_crc(p_1708->g_159.sc, "p_1708->g_159.sc", print_hash_value);
    transparent_crc(p_1708->g_159.sd, "p_1708->g_159.sd", print_hash_value);
    transparent_crc(p_1708->g_159.se, "p_1708->g_159.se", print_hash_value);
    transparent_crc(p_1708->g_159.sf, "p_1708->g_159.sf", print_hash_value);
    transparent_crc(p_1708->g_186.x, "p_1708->g_186.x", print_hash_value);
    transparent_crc(p_1708->g_186.y, "p_1708->g_186.y", print_hash_value);
    transparent_crc(p_1708->g_186.z, "p_1708->g_186.z", print_hash_value);
    transparent_crc(p_1708->g_186.w, "p_1708->g_186.w", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1708->g_188[i], "p_1708->g_188[i]", print_hash_value);

    }
    transparent_crc(p_1708->g_191.x, "p_1708->g_191.x", print_hash_value);
    transparent_crc(p_1708->g_191.y, "p_1708->g_191.y", print_hash_value);
    transparent_crc(p_1708->g_191.z, "p_1708->g_191.z", print_hash_value);
    transparent_crc(p_1708->g_191.w, "p_1708->g_191.w", print_hash_value);
    transparent_crc(p_1708->g_454, "p_1708->g_454", print_hash_value);
    transparent_crc(p_1708->g_472, "p_1708->g_472", print_hash_value);
    transparent_crc(p_1708->g_474.x, "p_1708->g_474.x", print_hash_value);
    transparent_crc(p_1708->g_474.y, "p_1708->g_474.y", print_hash_value);
    transparent_crc(p_1708->g_488, "p_1708->g_488", print_hash_value);
    transparent_crc(p_1708->g_491, "p_1708->g_491", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1708->g_494[i][j], "p_1708->g_494[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1708->g_498, "p_1708->g_498", print_hash_value);
    transparent_crc(p_1708->g_499, "p_1708->g_499", print_hash_value);
    transparent_crc(p_1708->g_536.f0, "p_1708->g_536.f0", print_hash_value);
    transparent_crc(p_1708->g_536.f1, "p_1708->g_536.f1", print_hash_value);
    transparent_crc(p_1708->g_536.f2, "p_1708->g_536.f2", print_hash_value);
    transparent_crc(p_1708->g_536.f3, "p_1708->g_536.f3", print_hash_value);
    transparent_crc(p_1708->g_536.f4, "p_1708->g_536.f4", print_hash_value);
    transparent_crc(p_1708->g_536.f5, "p_1708->g_536.f5", print_hash_value);
    transparent_crc(p_1708->g_536.f6, "p_1708->g_536.f6", print_hash_value);
    transparent_crc(p_1708->g_563.s0, "p_1708->g_563.s0", print_hash_value);
    transparent_crc(p_1708->g_563.s1, "p_1708->g_563.s1", print_hash_value);
    transparent_crc(p_1708->g_563.s2, "p_1708->g_563.s2", print_hash_value);
    transparent_crc(p_1708->g_563.s3, "p_1708->g_563.s3", print_hash_value);
    transparent_crc(p_1708->g_563.s4, "p_1708->g_563.s4", print_hash_value);
    transparent_crc(p_1708->g_563.s5, "p_1708->g_563.s5", print_hash_value);
    transparent_crc(p_1708->g_563.s6, "p_1708->g_563.s6", print_hash_value);
    transparent_crc(p_1708->g_563.s7, "p_1708->g_563.s7", print_hash_value);
    transparent_crc(p_1708->g_616.x, "p_1708->g_616.x", print_hash_value);
    transparent_crc(p_1708->g_616.y, "p_1708->g_616.y", print_hash_value);
    transparent_crc(p_1708->g_616.z, "p_1708->g_616.z", print_hash_value);
    transparent_crc(p_1708->g_616.w, "p_1708->g_616.w", print_hash_value);
    transparent_crc(p_1708->g_632.s0, "p_1708->g_632.s0", print_hash_value);
    transparent_crc(p_1708->g_632.s1, "p_1708->g_632.s1", print_hash_value);
    transparent_crc(p_1708->g_632.s2, "p_1708->g_632.s2", print_hash_value);
    transparent_crc(p_1708->g_632.s3, "p_1708->g_632.s3", print_hash_value);
    transparent_crc(p_1708->g_632.s4, "p_1708->g_632.s4", print_hash_value);
    transparent_crc(p_1708->g_632.s5, "p_1708->g_632.s5", print_hash_value);
    transparent_crc(p_1708->g_632.s6, "p_1708->g_632.s6", print_hash_value);
    transparent_crc(p_1708->g_632.s7, "p_1708->g_632.s7", print_hash_value);
    transparent_crc(p_1708->g_632.s8, "p_1708->g_632.s8", print_hash_value);
    transparent_crc(p_1708->g_632.s9, "p_1708->g_632.s9", print_hash_value);
    transparent_crc(p_1708->g_632.sa, "p_1708->g_632.sa", print_hash_value);
    transparent_crc(p_1708->g_632.sb, "p_1708->g_632.sb", print_hash_value);
    transparent_crc(p_1708->g_632.sc, "p_1708->g_632.sc", print_hash_value);
    transparent_crc(p_1708->g_632.sd, "p_1708->g_632.sd", print_hash_value);
    transparent_crc(p_1708->g_632.se, "p_1708->g_632.se", print_hash_value);
    transparent_crc(p_1708->g_632.sf, "p_1708->g_632.sf", print_hash_value);
    transparent_crc(p_1708->g_677.f0, "p_1708->g_677.f0", print_hash_value);
    transparent_crc(p_1708->g_677.f1, "p_1708->g_677.f1", print_hash_value);
    transparent_crc(p_1708->g_677.f2, "p_1708->g_677.f2", print_hash_value);
    transparent_crc(p_1708->g_677.f3, "p_1708->g_677.f3", print_hash_value);
    transparent_crc(p_1708->g_677.f4, "p_1708->g_677.f4", print_hash_value);
    transparent_crc(p_1708->g_677.f5, "p_1708->g_677.f5", print_hash_value);
    transparent_crc(p_1708->g_677.f6, "p_1708->g_677.f6", print_hash_value);
    transparent_crc(p_1708->g_709.x, "p_1708->g_709.x", print_hash_value);
    transparent_crc(p_1708->g_709.y, "p_1708->g_709.y", print_hash_value);
    transparent_crc(p_1708->g_710.x, "p_1708->g_710.x", print_hash_value);
    transparent_crc(p_1708->g_710.y, "p_1708->g_710.y", print_hash_value);
    transparent_crc(p_1708->g_711.x, "p_1708->g_711.x", print_hash_value);
    transparent_crc(p_1708->g_711.y, "p_1708->g_711.y", print_hash_value);
    transparent_crc(p_1708->g_714.s0, "p_1708->g_714.s0", print_hash_value);
    transparent_crc(p_1708->g_714.s1, "p_1708->g_714.s1", print_hash_value);
    transparent_crc(p_1708->g_714.s2, "p_1708->g_714.s2", print_hash_value);
    transparent_crc(p_1708->g_714.s3, "p_1708->g_714.s3", print_hash_value);
    transparent_crc(p_1708->g_714.s4, "p_1708->g_714.s4", print_hash_value);
    transparent_crc(p_1708->g_714.s5, "p_1708->g_714.s5", print_hash_value);
    transparent_crc(p_1708->g_714.s6, "p_1708->g_714.s6", print_hash_value);
    transparent_crc(p_1708->g_714.s7, "p_1708->g_714.s7", print_hash_value);
    transparent_crc(p_1708->g_714.s8, "p_1708->g_714.s8", print_hash_value);
    transparent_crc(p_1708->g_714.s9, "p_1708->g_714.s9", print_hash_value);
    transparent_crc(p_1708->g_714.sa, "p_1708->g_714.sa", print_hash_value);
    transparent_crc(p_1708->g_714.sb, "p_1708->g_714.sb", print_hash_value);
    transparent_crc(p_1708->g_714.sc, "p_1708->g_714.sc", print_hash_value);
    transparent_crc(p_1708->g_714.sd, "p_1708->g_714.sd", print_hash_value);
    transparent_crc(p_1708->g_714.se, "p_1708->g_714.se", print_hash_value);
    transparent_crc(p_1708->g_714.sf, "p_1708->g_714.sf", print_hash_value);
    transparent_crc(p_1708->g_721.x, "p_1708->g_721.x", print_hash_value);
    transparent_crc(p_1708->g_721.y, "p_1708->g_721.y", print_hash_value);
    transparent_crc(p_1708->g_722.s0, "p_1708->g_722.s0", print_hash_value);
    transparent_crc(p_1708->g_722.s1, "p_1708->g_722.s1", print_hash_value);
    transparent_crc(p_1708->g_722.s2, "p_1708->g_722.s2", print_hash_value);
    transparent_crc(p_1708->g_722.s3, "p_1708->g_722.s3", print_hash_value);
    transparent_crc(p_1708->g_722.s4, "p_1708->g_722.s4", print_hash_value);
    transparent_crc(p_1708->g_722.s5, "p_1708->g_722.s5", print_hash_value);
    transparent_crc(p_1708->g_722.s6, "p_1708->g_722.s6", print_hash_value);
    transparent_crc(p_1708->g_722.s7, "p_1708->g_722.s7", print_hash_value);
    transparent_crc(p_1708->g_724.x, "p_1708->g_724.x", print_hash_value);
    transparent_crc(p_1708->g_724.y, "p_1708->g_724.y", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1708->g_747[i][j][k], "p_1708->g_747[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1708->g_799[i][j][k], "p_1708->g_799[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1708->g_812.s0, "p_1708->g_812.s0", print_hash_value);
    transparent_crc(p_1708->g_812.s1, "p_1708->g_812.s1", print_hash_value);
    transparent_crc(p_1708->g_812.s2, "p_1708->g_812.s2", print_hash_value);
    transparent_crc(p_1708->g_812.s3, "p_1708->g_812.s3", print_hash_value);
    transparent_crc(p_1708->g_812.s4, "p_1708->g_812.s4", print_hash_value);
    transparent_crc(p_1708->g_812.s5, "p_1708->g_812.s5", print_hash_value);
    transparent_crc(p_1708->g_812.s6, "p_1708->g_812.s6", print_hash_value);
    transparent_crc(p_1708->g_812.s7, "p_1708->g_812.s7", print_hash_value);
    transparent_crc(p_1708->g_842, "p_1708->g_842", print_hash_value);
    transparent_crc(p_1708->g_847.f0, "p_1708->g_847.f0", print_hash_value);
    transparent_crc(p_1708->g_847.f1, "p_1708->g_847.f1", print_hash_value);
    transparent_crc(p_1708->g_847.f2, "p_1708->g_847.f2", print_hash_value);
    transparent_crc(p_1708->g_847.f3, "p_1708->g_847.f3", print_hash_value);
    transparent_crc(p_1708->g_847.f4, "p_1708->g_847.f4", print_hash_value);
    transparent_crc(p_1708->g_847.f5, "p_1708->g_847.f5", print_hash_value);
    transparent_crc(p_1708->g_847.f6, "p_1708->g_847.f6", print_hash_value);
    transparent_crc(p_1708->g_851.f0, "p_1708->g_851.f0", print_hash_value);
    transparent_crc(p_1708->g_851.f1, "p_1708->g_851.f1", print_hash_value);
    transparent_crc(p_1708->g_851.f2, "p_1708->g_851.f2", print_hash_value);
    transparent_crc(p_1708->g_851.f3, "p_1708->g_851.f3", print_hash_value);
    transparent_crc(p_1708->g_851.f4, "p_1708->g_851.f4", print_hash_value);
    transparent_crc(p_1708->g_851.f5, "p_1708->g_851.f5", print_hash_value);
    transparent_crc(p_1708->g_851.f6, "p_1708->g_851.f6", print_hash_value);
    transparent_crc(p_1708->g_930, "p_1708->g_930", print_hash_value);
    transparent_crc(p_1708->g_940.x, "p_1708->g_940.x", print_hash_value);
    transparent_crc(p_1708->g_940.y, "p_1708->g_940.y", print_hash_value);
    transparent_crc(p_1708->g_940.z, "p_1708->g_940.z", print_hash_value);
    transparent_crc(p_1708->g_940.w, "p_1708->g_940.w", print_hash_value);
    transparent_crc(p_1708->g_941.s0, "p_1708->g_941.s0", print_hash_value);
    transparent_crc(p_1708->g_941.s1, "p_1708->g_941.s1", print_hash_value);
    transparent_crc(p_1708->g_941.s2, "p_1708->g_941.s2", print_hash_value);
    transparent_crc(p_1708->g_941.s3, "p_1708->g_941.s3", print_hash_value);
    transparent_crc(p_1708->g_941.s4, "p_1708->g_941.s4", print_hash_value);
    transparent_crc(p_1708->g_941.s5, "p_1708->g_941.s5", print_hash_value);
    transparent_crc(p_1708->g_941.s6, "p_1708->g_941.s6", print_hash_value);
    transparent_crc(p_1708->g_941.s7, "p_1708->g_941.s7", print_hash_value);
    transparent_crc(p_1708->g_973, "p_1708->g_973", print_hash_value);
    transparent_crc(p_1708->g_1027.f0, "p_1708->g_1027.f0", print_hash_value);
    transparent_crc(p_1708->g_1027.f1, "p_1708->g_1027.f1", print_hash_value);
    transparent_crc(p_1708->g_1027.f2, "p_1708->g_1027.f2", print_hash_value);
    transparent_crc(p_1708->g_1027.f3, "p_1708->g_1027.f3", print_hash_value);
    transparent_crc(p_1708->g_1027.f4, "p_1708->g_1027.f4", print_hash_value);
    transparent_crc(p_1708->g_1027.f5, "p_1708->g_1027.f5", print_hash_value);
    transparent_crc(p_1708->g_1027.f6, "p_1708->g_1027.f6", print_hash_value);
    transparent_crc(p_1708->g_1038.f0, "p_1708->g_1038.f0", print_hash_value);
    transparent_crc(p_1708->g_1038.f1, "p_1708->g_1038.f1", print_hash_value);
    transparent_crc(p_1708->g_1038.f2, "p_1708->g_1038.f2", print_hash_value);
    transparent_crc(p_1708->g_1038.f3, "p_1708->g_1038.f3", print_hash_value);
    transparent_crc(p_1708->g_1038.f4, "p_1708->g_1038.f4", print_hash_value);
    transparent_crc(p_1708->g_1038.f5, "p_1708->g_1038.f5", print_hash_value);
    transparent_crc(p_1708->g_1038.f6, "p_1708->g_1038.f6", print_hash_value);
    transparent_crc(p_1708->g_1044.f0, "p_1708->g_1044.f0", print_hash_value);
    transparent_crc(p_1708->g_1044.f1, "p_1708->g_1044.f1", print_hash_value);
    transparent_crc(p_1708->g_1044.f2, "p_1708->g_1044.f2", print_hash_value);
    transparent_crc(p_1708->g_1044.f3, "p_1708->g_1044.f3", print_hash_value);
    transparent_crc(p_1708->g_1044.f4, "p_1708->g_1044.f4", print_hash_value);
    transparent_crc(p_1708->g_1044.f5, "p_1708->g_1044.f5", print_hash_value);
    transparent_crc(p_1708->g_1044.f6, "p_1708->g_1044.f6", print_hash_value);
    transparent_crc(p_1708->g_1049.s0, "p_1708->g_1049.s0", print_hash_value);
    transparent_crc(p_1708->g_1049.s1, "p_1708->g_1049.s1", print_hash_value);
    transparent_crc(p_1708->g_1049.s2, "p_1708->g_1049.s2", print_hash_value);
    transparent_crc(p_1708->g_1049.s3, "p_1708->g_1049.s3", print_hash_value);
    transparent_crc(p_1708->g_1049.s4, "p_1708->g_1049.s4", print_hash_value);
    transparent_crc(p_1708->g_1049.s5, "p_1708->g_1049.s5", print_hash_value);
    transparent_crc(p_1708->g_1049.s6, "p_1708->g_1049.s6", print_hash_value);
    transparent_crc(p_1708->g_1049.s7, "p_1708->g_1049.s7", print_hash_value);
    transparent_crc(p_1708->g_1086.f0, "p_1708->g_1086.f0", print_hash_value);
    transparent_crc(p_1708->g_1086.f1, "p_1708->g_1086.f1", print_hash_value);
    transparent_crc(p_1708->g_1086.f2, "p_1708->g_1086.f2", print_hash_value);
    transparent_crc(p_1708->g_1086.f3, "p_1708->g_1086.f3", print_hash_value);
    transparent_crc(p_1708->g_1086.f4, "p_1708->g_1086.f4", print_hash_value);
    transparent_crc(p_1708->g_1086.f5, "p_1708->g_1086.f5", print_hash_value);
    transparent_crc(p_1708->g_1086.f6, "p_1708->g_1086.f6", print_hash_value);
    transparent_crc(p_1708->g_1206.f0, "p_1708->g_1206.f0", print_hash_value);
    transparent_crc(p_1708->g_1206.f1, "p_1708->g_1206.f1", print_hash_value);
    transparent_crc(p_1708->g_1206.f2, "p_1708->g_1206.f2", print_hash_value);
    transparent_crc(p_1708->g_1206.f3, "p_1708->g_1206.f3", print_hash_value);
    transparent_crc(p_1708->g_1206.f4, "p_1708->g_1206.f4", print_hash_value);
    transparent_crc(p_1708->g_1206.f5, "p_1708->g_1206.f5", print_hash_value);
    transparent_crc(p_1708->g_1206.f6, "p_1708->g_1206.f6", print_hash_value);
    transparent_crc(p_1708->g_1216.x, "p_1708->g_1216.x", print_hash_value);
    transparent_crc(p_1708->g_1216.y, "p_1708->g_1216.y", print_hash_value);
    transparent_crc(p_1708->g_1216.z, "p_1708->g_1216.z", print_hash_value);
    transparent_crc(p_1708->g_1216.w, "p_1708->g_1216.w", print_hash_value);
    transparent_crc(p_1708->g_1219.s0, "p_1708->g_1219.s0", print_hash_value);
    transparent_crc(p_1708->g_1219.s1, "p_1708->g_1219.s1", print_hash_value);
    transparent_crc(p_1708->g_1219.s2, "p_1708->g_1219.s2", print_hash_value);
    transparent_crc(p_1708->g_1219.s3, "p_1708->g_1219.s3", print_hash_value);
    transparent_crc(p_1708->g_1219.s4, "p_1708->g_1219.s4", print_hash_value);
    transparent_crc(p_1708->g_1219.s5, "p_1708->g_1219.s5", print_hash_value);
    transparent_crc(p_1708->g_1219.s6, "p_1708->g_1219.s6", print_hash_value);
    transparent_crc(p_1708->g_1219.s7, "p_1708->g_1219.s7", print_hash_value);
    transparent_crc(p_1708->g_1220.x, "p_1708->g_1220.x", print_hash_value);
    transparent_crc(p_1708->g_1220.y, "p_1708->g_1220.y", print_hash_value);
    transparent_crc(p_1708->g_1220.z, "p_1708->g_1220.z", print_hash_value);
    transparent_crc(p_1708->g_1220.w, "p_1708->g_1220.w", print_hash_value);
    transparent_crc(p_1708->g_1223.s0, "p_1708->g_1223.s0", print_hash_value);
    transparent_crc(p_1708->g_1223.s1, "p_1708->g_1223.s1", print_hash_value);
    transparent_crc(p_1708->g_1223.s2, "p_1708->g_1223.s2", print_hash_value);
    transparent_crc(p_1708->g_1223.s3, "p_1708->g_1223.s3", print_hash_value);
    transparent_crc(p_1708->g_1223.s4, "p_1708->g_1223.s4", print_hash_value);
    transparent_crc(p_1708->g_1223.s5, "p_1708->g_1223.s5", print_hash_value);
    transparent_crc(p_1708->g_1223.s6, "p_1708->g_1223.s6", print_hash_value);
    transparent_crc(p_1708->g_1223.s7, "p_1708->g_1223.s7", print_hash_value);
    transparent_crc(p_1708->g_1223.s8, "p_1708->g_1223.s8", print_hash_value);
    transparent_crc(p_1708->g_1223.s9, "p_1708->g_1223.s9", print_hash_value);
    transparent_crc(p_1708->g_1223.sa, "p_1708->g_1223.sa", print_hash_value);
    transparent_crc(p_1708->g_1223.sb, "p_1708->g_1223.sb", print_hash_value);
    transparent_crc(p_1708->g_1223.sc, "p_1708->g_1223.sc", print_hash_value);
    transparent_crc(p_1708->g_1223.sd, "p_1708->g_1223.sd", print_hash_value);
    transparent_crc(p_1708->g_1223.se, "p_1708->g_1223.se", print_hash_value);
    transparent_crc(p_1708->g_1223.sf, "p_1708->g_1223.sf", print_hash_value);
    transparent_crc(p_1708->g_1248.s0, "p_1708->g_1248.s0", print_hash_value);
    transparent_crc(p_1708->g_1248.s1, "p_1708->g_1248.s1", print_hash_value);
    transparent_crc(p_1708->g_1248.s2, "p_1708->g_1248.s2", print_hash_value);
    transparent_crc(p_1708->g_1248.s3, "p_1708->g_1248.s3", print_hash_value);
    transparent_crc(p_1708->g_1248.s4, "p_1708->g_1248.s4", print_hash_value);
    transparent_crc(p_1708->g_1248.s5, "p_1708->g_1248.s5", print_hash_value);
    transparent_crc(p_1708->g_1248.s6, "p_1708->g_1248.s6", print_hash_value);
    transparent_crc(p_1708->g_1248.s7, "p_1708->g_1248.s7", print_hash_value);
    transparent_crc(p_1708->g_1248.s8, "p_1708->g_1248.s8", print_hash_value);
    transparent_crc(p_1708->g_1248.s9, "p_1708->g_1248.s9", print_hash_value);
    transparent_crc(p_1708->g_1248.sa, "p_1708->g_1248.sa", print_hash_value);
    transparent_crc(p_1708->g_1248.sb, "p_1708->g_1248.sb", print_hash_value);
    transparent_crc(p_1708->g_1248.sc, "p_1708->g_1248.sc", print_hash_value);
    transparent_crc(p_1708->g_1248.sd, "p_1708->g_1248.sd", print_hash_value);
    transparent_crc(p_1708->g_1248.se, "p_1708->g_1248.se", print_hash_value);
    transparent_crc(p_1708->g_1248.sf, "p_1708->g_1248.sf", print_hash_value);
    transparent_crc(p_1708->g_1250.x, "p_1708->g_1250.x", print_hash_value);
    transparent_crc(p_1708->g_1250.y, "p_1708->g_1250.y", print_hash_value);
    transparent_crc(p_1708->g_1254, "p_1708->g_1254", print_hash_value);
    transparent_crc(p_1708->g_1262, "p_1708->g_1262", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1708->g_1270[i], "p_1708->g_1270[i]", print_hash_value);

    }
    transparent_crc(p_1708->g_1271.x, "p_1708->g_1271.x", print_hash_value);
    transparent_crc(p_1708->g_1271.y, "p_1708->g_1271.y", print_hash_value);
    transparent_crc(p_1708->g_1283.x, "p_1708->g_1283.x", print_hash_value);
    transparent_crc(p_1708->g_1283.y, "p_1708->g_1283.y", print_hash_value);
    transparent_crc(p_1708->g_1283.z, "p_1708->g_1283.z", print_hash_value);
    transparent_crc(p_1708->g_1283.w, "p_1708->g_1283.w", print_hash_value);
    transparent_crc(p_1708->g_1292.s0, "p_1708->g_1292.s0", print_hash_value);
    transparent_crc(p_1708->g_1292.s1, "p_1708->g_1292.s1", print_hash_value);
    transparent_crc(p_1708->g_1292.s2, "p_1708->g_1292.s2", print_hash_value);
    transparent_crc(p_1708->g_1292.s3, "p_1708->g_1292.s3", print_hash_value);
    transparent_crc(p_1708->g_1292.s4, "p_1708->g_1292.s4", print_hash_value);
    transparent_crc(p_1708->g_1292.s5, "p_1708->g_1292.s5", print_hash_value);
    transparent_crc(p_1708->g_1292.s6, "p_1708->g_1292.s6", print_hash_value);
    transparent_crc(p_1708->g_1292.s7, "p_1708->g_1292.s7", print_hash_value);
    transparent_crc(p_1708->g_1315.x, "p_1708->g_1315.x", print_hash_value);
    transparent_crc(p_1708->g_1315.y, "p_1708->g_1315.y", print_hash_value);
    transparent_crc(p_1708->g_1315.z, "p_1708->g_1315.z", print_hash_value);
    transparent_crc(p_1708->g_1315.w, "p_1708->g_1315.w", print_hash_value);
    transparent_crc(p_1708->g_1317.s0, "p_1708->g_1317.s0", print_hash_value);
    transparent_crc(p_1708->g_1317.s1, "p_1708->g_1317.s1", print_hash_value);
    transparent_crc(p_1708->g_1317.s2, "p_1708->g_1317.s2", print_hash_value);
    transparent_crc(p_1708->g_1317.s3, "p_1708->g_1317.s3", print_hash_value);
    transparent_crc(p_1708->g_1317.s4, "p_1708->g_1317.s4", print_hash_value);
    transparent_crc(p_1708->g_1317.s5, "p_1708->g_1317.s5", print_hash_value);
    transparent_crc(p_1708->g_1317.s6, "p_1708->g_1317.s6", print_hash_value);
    transparent_crc(p_1708->g_1317.s7, "p_1708->g_1317.s7", print_hash_value);
    transparent_crc(p_1708->g_1364.s0, "p_1708->g_1364.s0", print_hash_value);
    transparent_crc(p_1708->g_1364.s1, "p_1708->g_1364.s1", print_hash_value);
    transparent_crc(p_1708->g_1364.s2, "p_1708->g_1364.s2", print_hash_value);
    transparent_crc(p_1708->g_1364.s3, "p_1708->g_1364.s3", print_hash_value);
    transparent_crc(p_1708->g_1364.s4, "p_1708->g_1364.s4", print_hash_value);
    transparent_crc(p_1708->g_1364.s5, "p_1708->g_1364.s5", print_hash_value);
    transparent_crc(p_1708->g_1364.s6, "p_1708->g_1364.s6", print_hash_value);
    transparent_crc(p_1708->g_1364.s7, "p_1708->g_1364.s7", print_hash_value);
    transparent_crc(p_1708->g_1364.s8, "p_1708->g_1364.s8", print_hash_value);
    transparent_crc(p_1708->g_1364.s9, "p_1708->g_1364.s9", print_hash_value);
    transparent_crc(p_1708->g_1364.sa, "p_1708->g_1364.sa", print_hash_value);
    transparent_crc(p_1708->g_1364.sb, "p_1708->g_1364.sb", print_hash_value);
    transparent_crc(p_1708->g_1364.sc, "p_1708->g_1364.sc", print_hash_value);
    transparent_crc(p_1708->g_1364.sd, "p_1708->g_1364.sd", print_hash_value);
    transparent_crc(p_1708->g_1364.se, "p_1708->g_1364.se", print_hash_value);
    transparent_crc(p_1708->g_1364.sf, "p_1708->g_1364.sf", print_hash_value);
    transparent_crc(p_1708->g_1382.f0, "p_1708->g_1382.f0", print_hash_value);
    transparent_crc(p_1708->g_1382.f1, "p_1708->g_1382.f1", print_hash_value);
    transparent_crc(p_1708->g_1382.f2, "p_1708->g_1382.f2", print_hash_value);
    transparent_crc(p_1708->g_1382.f3, "p_1708->g_1382.f3", print_hash_value);
    transparent_crc(p_1708->g_1382.f4, "p_1708->g_1382.f4", print_hash_value);
    transparent_crc(p_1708->g_1382.f5, "p_1708->g_1382.f5", print_hash_value);
    transparent_crc(p_1708->g_1382.f6, "p_1708->g_1382.f6", print_hash_value);
    transparent_crc(p_1708->g_1386, "p_1708->g_1386", print_hash_value);
    transparent_crc(p_1708->g_1390.s0, "p_1708->g_1390.s0", print_hash_value);
    transparent_crc(p_1708->g_1390.s1, "p_1708->g_1390.s1", print_hash_value);
    transparent_crc(p_1708->g_1390.s2, "p_1708->g_1390.s2", print_hash_value);
    transparent_crc(p_1708->g_1390.s3, "p_1708->g_1390.s3", print_hash_value);
    transparent_crc(p_1708->g_1390.s4, "p_1708->g_1390.s4", print_hash_value);
    transparent_crc(p_1708->g_1390.s5, "p_1708->g_1390.s5", print_hash_value);
    transparent_crc(p_1708->g_1390.s6, "p_1708->g_1390.s6", print_hash_value);
    transparent_crc(p_1708->g_1390.s7, "p_1708->g_1390.s7", print_hash_value);
    transparent_crc(p_1708->g_1390.s8, "p_1708->g_1390.s8", print_hash_value);
    transparent_crc(p_1708->g_1390.s9, "p_1708->g_1390.s9", print_hash_value);
    transparent_crc(p_1708->g_1390.sa, "p_1708->g_1390.sa", print_hash_value);
    transparent_crc(p_1708->g_1390.sb, "p_1708->g_1390.sb", print_hash_value);
    transparent_crc(p_1708->g_1390.sc, "p_1708->g_1390.sc", print_hash_value);
    transparent_crc(p_1708->g_1390.sd, "p_1708->g_1390.sd", print_hash_value);
    transparent_crc(p_1708->g_1390.se, "p_1708->g_1390.se", print_hash_value);
    transparent_crc(p_1708->g_1390.sf, "p_1708->g_1390.sf", print_hash_value);
    transparent_crc(p_1708->g_1447.x, "p_1708->g_1447.x", print_hash_value);
    transparent_crc(p_1708->g_1447.y, "p_1708->g_1447.y", print_hash_value);
    transparent_crc(p_1708->g_1448.s0, "p_1708->g_1448.s0", print_hash_value);
    transparent_crc(p_1708->g_1448.s1, "p_1708->g_1448.s1", print_hash_value);
    transparent_crc(p_1708->g_1448.s2, "p_1708->g_1448.s2", print_hash_value);
    transparent_crc(p_1708->g_1448.s3, "p_1708->g_1448.s3", print_hash_value);
    transparent_crc(p_1708->g_1448.s4, "p_1708->g_1448.s4", print_hash_value);
    transparent_crc(p_1708->g_1448.s5, "p_1708->g_1448.s5", print_hash_value);
    transparent_crc(p_1708->g_1448.s6, "p_1708->g_1448.s6", print_hash_value);
    transparent_crc(p_1708->g_1448.s7, "p_1708->g_1448.s7", print_hash_value);
    transparent_crc(p_1708->g_1448.s8, "p_1708->g_1448.s8", print_hash_value);
    transparent_crc(p_1708->g_1448.s9, "p_1708->g_1448.s9", print_hash_value);
    transparent_crc(p_1708->g_1448.sa, "p_1708->g_1448.sa", print_hash_value);
    transparent_crc(p_1708->g_1448.sb, "p_1708->g_1448.sb", print_hash_value);
    transparent_crc(p_1708->g_1448.sc, "p_1708->g_1448.sc", print_hash_value);
    transparent_crc(p_1708->g_1448.sd, "p_1708->g_1448.sd", print_hash_value);
    transparent_crc(p_1708->g_1448.se, "p_1708->g_1448.se", print_hash_value);
    transparent_crc(p_1708->g_1448.sf, "p_1708->g_1448.sf", print_hash_value);
    transparent_crc(p_1708->g_1451.s0, "p_1708->g_1451.s0", print_hash_value);
    transparent_crc(p_1708->g_1451.s1, "p_1708->g_1451.s1", print_hash_value);
    transparent_crc(p_1708->g_1451.s2, "p_1708->g_1451.s2", print_hash_value);
    transparent_crc(p_1708->g_1451.s3, "p_1708->g_1451.s3", print_hash_value);
    transparent_crc(p_1708->g_1451.s4, "p_1708->g_1451.s4", print_hash_value);
    transparent_crc(p_1708->g_1451.s5, "p_1708->g_1451.s5", print_hash_value);
    transparent_crc(p_1708->g_1451.s6, "p_1708->g_1451.s6", print_hash_value);
    transparent_crc(p_1708->g_1451.s7, "p_1708->g_1451.s7", print_hash_value);
    transparent_crc(p_1708->g_1454.f0, "p_1708->g_1454.f0", print_hash_value);
    transparent_crc(p_1708->g_1454.f1, "p_1708->g_1454.f1", print_hash_value);
    transparent_crc(p_1708->g_1454.f2, "p_1708->g_1454.f2", print_hash_value);
    transparent_crc(p_1708->g_1454.f3, "p_1708->g_1454.f3", print_hash_value);
    transparent_crc(p_1708->g_1454.f4, "p_1708->g_1454.f4", print_hash_value);
    transparent_crc(p_1708->g_1454.f5, "p_1708->g_1454.f5", print_hash_value);
    transparent_crc(p_1708->g_1454.f6, "p_1708->g_1454.f6", print_hash_value);
    transparent_crc(p_1708->g_1457.s0, "p_1708->g_1457.s0", print_hash_value);
    transparent_crc(p_1708->g_1457.s1, "p_1708->g_1457.s1", print_hash_value);
    transparent_crc(p_1708->g_1457.s2, "p_1708->g_1457.s2", print_hash_value);
    transparent_crc(p_1708->g_1457.s3, "p_1708->g_1457.s3", print_hash_value);
    transparent_crc(p_1708->g_1457.s4, "p_1708->g_1457.s4", print_hash_value);
    transparent_crc(p_1708->g_1457.s5, "p_1708->g_1457.s5", print_hash_value);
    transparent_crc(p_1708->g_1457.s6, "p_1708->g_1457.s6", print_hash_value);
    transparent_crc(p_1708->g_1457.s7, "p_1708->g_1457.s7", print_hash_value);
    transparent_crc(p_1708->g_1467.x, "p_1708->g_1467.x", print_hash_value);
    transparent_crc(p_1708->g_1467.y, "p_1708->g_1467.y", print_hash_value);
    transparent_crc(p_1708->g_1520.s0, "p_1708->g_1520.s0", print_hash_value);
    transparent_crc(p_1708->g_1520.s1, "p_1708->g_1520.s1", print_hash_value);
    transparent_crc(p_1708->g_1520.s2, "p_1708->g_1520.s2", print_hash_value);
    transparent_crc(p_1708->g_1520.s3, "p_1708->g_1520.s3", print_hash_value);
    transparent_crc(p_1708->g_1520.s4, "p_1708->g_1520.s4", print_hash_value);
    transparent_crc(p_1708->g_1520.s5, "p_1708->g_1520.s5", print_hash_value);
    transparent_crc(p_1708->g_1520.s6, "p_1708->g_1520.s6", print_hash_value);
    transparent_crc(p_1708->g_1520.s7, "p_1708->g_1520.s7", print_hash_value);
    transparent_crc(p_1708->g_1520.s8, "p_1708->g_1520.s8", print_hash_value);
    transparent_crc(p_1708->g_1520.s9, "p_1708->g_1520.s9", print_hash_value);
    transparent_crc(p_1708->g_1520.sa, "p_1708->g_1520.sa", print_hash_value);
    transparent_crc(p_1708->g_1520.sb, "p_1708->g_1520.sb", print_hash_value);
    transparent_crc(p_1708->g_1520.sc, "p_1708->g_1520.sc", print_hash_value);
    transparent_crc(p_1708->g_1520.sd, "p_1708->g_1520.sd", print_hash_value);
    transparent_crc(p_1708->g_1520.se, "p_1708->g_1520.se", print_hash_value);
    transparent_crc(p_1708->g_1520.sf, "p_1708->g_1520.sf", print_hash_value);
    transparent_crc(p_1708->g_1526.x, "p_1708->g_1526.x", print_hash_value);
    transparent_crc(p_1708->g_1526.y, "p_1708->g_1526.y", print_hash_value);
    transparent_crc(p_1708->g_1526.z, "p_1708->g_1526.z", print_hash_value);
    transparent_crc(p_1708->g_1526.w, "p_1708->g_1526.w", print_hash_value);
    transparent_crc(p_1708->g_1545.x, "p_1708->g_1545.x", print_hash_value);
    transparent_crc(p_1708->g_1545.y, "p_1708->g_1545.y", print_hash_value);
    transparent_crc(p_1708->g_1545.z, "p_1708->g_1545.z", print_hash_value);
    transparent_crc(p_1708->g_1545.w, "p_1708->g_1545.w", print_hash_value);
    transparent_crc(p_1708->g_1547.s0, "p_1708->g_1547.s0", print_hash_value);
    transparent_crc(p_1708->g_1547.s1, "p_1708->g_1547.s1", print_hash_value);
    transparent_crc(p_1708->g_1547.s2, "p_1708->g_1547.s2", print_hash_value);
    transparent_crc(p_1708->g_1547.s3, "p_1708->g_1547.s3", print_hash_value);
    transparent_crc(p_1708->g_1547.s4, "p_1708->g_1547.s4", print_hash_value);
    transparent_crc(p_1708->g_1547.s5, "p_1708->g_1547.s5", print_hash_value);
    transparent_crc(p_1708->g_1547.s6, "p_1708->g_1547.s6", print_hash_value);
    transparent_crc(p_1708->g_1547.s7, "p_1708->g_1547.s7", print_hash_value);
    transparent_crc(p_1708->g_1554, "p_1708->g_1554", print_hash_value);
    transparent_crc(p_1708->g_1557, "p_1708->g_1557", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1708->g_1559[i][j][k], "p_1708->g_1559[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1708->g_1591.s0, "p_1708->g_1591.s0", print_hash_value);
    transparent_crc(p_1708->g_1591.s1, "p_1708->g_1591.s1", print_hash_value);
    transparent_crc(p_1708->g_1591.s2, "p_1708->g_1591.s2", print_hash_value);
    transparent_crc(p_1708->g_1591.s3, "p_1708->g_1591.s3", print_hash_value);
    transparent_crc(p_1708->g_1591.s4, "p_1708->g_1591.s4", print_hash_value);
    transparent_crc(p_1708->g_1591.s5, "p_1708->g_1591.s5", print_hash_value);
    transparent_crc(p_1708->g_1591.s6, "p_1708->g_1591.s6", print_hash_value);
    transparent_crc(p_1708->g_1591.s7, "p_1708->g_1591.s7", print_hash_value);
    transparent_crc(p_1708->g_1596.s0, "p_1708->g_1596.s0", print_hash_value);
    transparent_crc(p_1708->g_1596.s1, "p_1708->g_1596.s1", print_hash_value);
    transparent_crc(p_1708->g_1596.s2, "p_1708->g_1596.s2", print_hash_value);
    transparent_crc(p_1708->g_1596.s3, "p_1708->g_1596.s3", print_hash_value);
    transparent_crc(p_1708->g_1596.s4, "p_1708->g_1596.s4", print_hash_value);
    transparent_crc(p_1708->g_1596.s5, "p_1708->g_1596.s5", print_hash_value);
    transparent_crc(p_1708->g_1596.s6, "p_1708->g_1596.s6", print_hash_value);
    transparent_crc(p_1708->g_1596.s7, "p_1708->g_1596.s7", print_hash_value);
    transparent_crc(p_1708->g_1596.s8, "p_1708->g_1596.s8", print_hash_value);
    transparent_crc(p_1708->g_1596.s9, "p_1708->g_1596.s9", print_hash_value);
    transparent_crc(p_1708->g_1596.sa, "p_1708->g_1596.sa", print_hash_value);
    transparent_crc(p_1708->g_1596.sb, "p_1708->g_1596.sb", print_hash_value);
    transparent_crc(p_1708->g_1596.sc, "p_1708->g_1596.sc", print_hash_value);
    transparent_crc(p_1708->g_1596.sd, "p_1708->g_1596.sd", print_hash_value);
    transparent_crc(p_1708->g_1596.se, "p_1708->g_1596.se", print_hash_value);
    transparent_crc(p_1708->g_1596.sf, "p_1708->g_1596.sf", print_hash_value);
    transparent_crc(p_1708->g_1597.x, "p_1708->g_1597.x", print_hash_value);
    transparent_crc(p_1708->g_1597.y, "p_1708->g_1597.y", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1708->g_1606[i][j].f0, "p_1708->g_1606[i][j].f0", print_hash_value);
            transparent_crc(p_1708->g_1606[i][j].f1, "p_1708->g_1606[i][j].f1", print_hash_value);
            transparent_crc(p_1708->g_1606[i][j].f2, "p_1708->g_1606[i][j].f2", print_hash_value);
            transparent_crc(p_1708->g_1606[i][j].f3, "p_1708->g_1606[i][j].f3", print_hash_value);
            transparent_crc(p_1708->g_1606[i][j].f4, "p_1708->g_1606[i][j].f4", print_hash_value);
            transparent_crc(p_1708->g_1606[i][j].f5, "p_1708->g_1606[i][j].f5", print_hash_value);
            transparent_crc(p_1708->g_1606[i][j].f6, "p_1708->g_1606[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(p_1708->g_1645.s0, "p_1708->g_1645.s0", print_hash_value);
    transparent_crc(p_1708->g_1645.s1, "p_1708->g_1645.s1", print_hash_value);
    transparent_crc(p_1708->g_1645.s2, "p_1708->g_1645.s2", print_hash_value);
    transparent_crc(p_1708->g_1645.s3, "p_1708->g_1645.s3", print_hash_value);
    transparent_crc(p_1708->g_1645.s4, "p_1708->g_1645.s4", print_hash_value);
    transparent_crc(p_1708->g_1645.s5, "p_1708->g_1645.s5", print_hash_value);
    transparent_crc(p_1708->g_1645.s6, "p_1708->g_1645.s6", print_hash_value);
    transparent_crc(p_1708->g_1645.s7, "p_1708->g_1645.s7", print_hash_value);
    transparent_crc(p_1708->g_1645.s8, "p_1708->g_1645.s8", print_hash_value);
    transparent_crc(p_1708->g_1645.s9, "p_1708->g_1645.s9", print_hash_value);
    transparent_crc(p_1708->g_1645.sa, "p_1708->g_1645.sa", print_hash_value);
    transparent_crc(p_1708->g_1645.sb, "p_1708->g_1645.sb", print_hash_value);
    transparent_crc(p_1708->g_1645.sc, "p_1708->g_1645.sc", print_hash_value);
    transparent_crc(p_1708->g_1645.sd, "p_1708->g_1645.sd", print_hash_value);
    transparent_crc(p_1708->g_1645.se, "p_1708->g_1645.se", print_hash_value);
    transparent_crc(p_1708->g_1645.sf, "p_1708->g_1645.sf", print_hash_value);
    transparent_crc(p_1708->g_1681.s0, "p_1708->g_1681.s0", print_hash_value);
    transparent_crc(p_1708->g_1681.s1, "p_1708->g_1681.s1", print_hash_value);
    transparent_crc(p_1708->g_1681.s2, "p_1708->g_1681.s2", print_hash_value);
    transparent_crc(p_1708->g_1681.s3, "p_1708->g_1681.s3", print_hash_value);
    transparent_crc(p_1708->g_1681.s4, "p_1708->g_1681.s4", print_hash_value);
    transparent_crc(p_1708->g_1681.s5, "p_1708->g_1681.s5", print_hash_value);
    transparent_crc(p_1708->g_1681.s6, "p_1708->g_1681.s6", print_hash_value);
    transparent_crc(p_1708->g_1681.s7, "p_1708->g_1681.s7", print_hash_value);
    transparent_crc(p_1708->v_collective, "p_1708->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 7; i++)
            transparent_crc(p_1708->g_special_values[i + 7 * get_linear_group_id()], "p_1708->g_special_values[i + 7 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 7; i++)
            transparent_crc(p_1708->l_special_values[i], "p_1708->l_special_values[i]", print_hash_value);
    transparent_crc(p_1708->l_comm_values[get_linear_local_id()], "p_1708->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1708->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()], "p_1708->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
