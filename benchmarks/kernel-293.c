// --atomics 89 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 68,25,3 -l 4,5,1
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

__constant uint32_t permutations[10][20] = {
{1,13,18,16,14,6,19,10,15,7,9,8,3,17,5,11,0,4,2,12}, // permutation 0
{2,11,8,18,15,9,4,1,19,16,3,6,13,7,17,5,0,10,12,14}, // permutation 1
{18,14,12,17,16,9,13,11,10,1,4,19,8,5,15,3,6,0,2,7}, // permutation 2
{3,2,7,17,10,14,12,9,6,8,19,5,18,16,0,1,15,4,11,13}, // permutation 3
{5,14,13,19,11,15,0,1,18,8,10,6,12,9,4,2,7,17,16,3}, // permutation 4
{1,18,11,9,5,13,16,0,15,4,8,19,7,14,2,3,12,17,10,6}, // permutation 5
{5,11,19,1,3,12,4,17,15,8,13,18,2,6,14,0,9,16,7,10}, // permutation 6
{16,0,5,2,3,10,18,6,12,8,14,19,1,7,17,11,13,4,9,15}, // permutation 7
{17,12,6,14,18,16,10,4,15,2,9,13,0,1,19,11,7,5,8,3}, // permutation 8
{18,0,13,15,12,19,8,4,11,10,1,3,16,7,9,17,6,2,14,5} // permutation 9
};

// Seed: 3415578239

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   uint64_t  f1;
   int16_t  f2;
   volatile uint16_t  f3;
   int8_t  f4;
};

union U1 {
   int16_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int32_t  f3;
};

struct S2 {
    union U1 g_12;
    int32_t g_21;
    int32_t * volatile g_20;
    int32_t * volatile g_22;
    int32_t * volatile g_26;
    int32_t g_28;
    int32_t * volatile g_27;
    int32_t g_43;
    VECTOR(uint64_t, 16) g_65;
    VECTOR(int32_t, 8) g_73;
    VECTOR(uint16_t, 16) g_275;
    VECTOR(int32_t, 2) g_303;
    VECTOR(uint64_t, 4) g_311;
    int8_t g_344;
    int16_t g_346;
    VECTOR(int64_t, 16) g_362;
    VECTOR(int64_t, 4) g_363;
    uint32_t g_380;
    VECTOR(uint32_t, 16) g_384;
    VECTOR(int8_t, 4) g_392;
    int32_t *g_396;
    int32_t **g_395;
    int64_t g_399;
    int32_t g_442;
    int8_t g_443;
    uint8_t g_446;
    VECTOR(uint32_t, 16) g_504;
    VECTOR(int8_t, 8) g_508;
    VECTOR(int8_t, 8) g_512;
    uint64_t *g_557;
    volatile union U0 g_584;
    volatile union U0 *g_583;
    VECTOR(int8_t, 16) g_598;
    uint32_t **g_620;
    VECTOR(int16_t, 4) g_670;
    int32_t g_673;
    int32_t g_697;
    VECTOR(int32_t, 4) g_716;
    volatile union U0 g_719;
    uint32_t g_731[5];
    uint16_t g_747[1][2][8];
    int32_t g_769;
    int8_t g_771;
    int32_t g_772;
    VECTOR(int64_t, 2) g_789;
    VECTOR(int8_t, 16) g_802;
    int64_t *g_825[8];
    int64_t *g_829;
    union U0 g_840;
    VECTOR(int32_t, 16) g_851;
    uint32_t *g_883[7];
    VECTOR(uint16_t, 16) g_892;
    VECTOR(uint16_t, 4) g_893;
    VECTOR(uint32_t, 2) g_903;
    uint16_t g_927;
    VECTOR(int16_t, 2) g_932;
    int16_t *g_982;
    VECTOR(int16_t, 4) g_987;
    VECTOR(int16_t, 8) g_988;
    VECTOR(int64_t, 2) g_1000;
    volatile int64_t g_1021;
    volatile int64_t * volatile g_1020;
    volatile int64_t * volatile *g_1019;
    volatile int64_t * volatile * volatile *g_1018;
    union U0 g_1036;
    VECTOR(int32_t, 16) g_1060;
    VECTOR(int32_t, 2) g_1061;
    int32_t g_1068;
    int64_t g_1102;
    uint16_t g_1105;
    VECTOR(uint16_t, 16) g_1115;
    VECTOR(int32_t, 2) g_1119;
    VECTOR(int32_t, 2) g_1124;
    VECTOR(int32_t, 4) g_1127;
    int8_t *g_1158;
    VECTOR(int16_t, 2) g_1161;
    int64_t g_1163[9][9];
    uint64_t g_1194;
    VECTOR(int32_t, 8) g_1238;
    union U0 g_1243;
    volatile VECTOR(uint32_t, 4) g_1246;
    VECTOR(uint32_t, 16) g_1250;
    uint8_t *g_1254;
    uint8_t **g_1253[7][8];
    VECTOR(int16_t, 2) g_1267;
    union U1 g_1281;
    union U1 *g_1280;
    volatile VECTOR(int32_t, 4) g_1310;
    VECTOR(int16_t, 16) g_1320;
    VECTOR(int16_t, 8) g_1321;
    volatile VECTOR(int64_t, 2) g_1328;
    VECTOR(int16_t, 8) g_1329;
    VECTOR(uint16_t, 16) g_1331;
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
int32_t  func_1(struct S2 * p_1340);
uint16_t  func_7(union U1  p_8, uint16_t  p_9, uint32_t  p_10, uint32_t  p_11, struct S2 * p_1340);
int16_t  func_58(int32_t * p_59, int16_t  p_60, struct S2 * p_1340);
int32_t * func_61(int64_t  p_62, int64_t  p_63, uint16_t  p_64, struct S2 * p_1340);
uint32_t  func_71(int32_t * p_72, struct S2 * p_1340);
int16_t  func_258(int32_t  p_259, uint8_t  p_260, int32_t ** p_261, int32_t * p_262, int32_t * p_263, struct S2 * p_1340);
int32_t * func_279(uint8_t  p_280, uint64_t  p_281, union U1 * p_282, uint16_t  p_283, int16_t  p_284, struct S2 * p_1340);
int16_t  func_290(int32_t  p_291, uint16_t  p_292, int32_t  p_293, struct S2 * p_1340);
uint16_t  func_300(union U1 * p_301, uint64_t  p_302, struct S2 * p_1340);
uint8_t  func_321(int16_t  p_322, int32_t * p_323, int32_t  p_324, int32_t ** p_325, struct S2 * p_1340);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1340->g_comm_values p_1340->g_12 p_1340->l_comm_values p_1340->g_12.f0 p_1340->g_20 p_1340->g_22 p_1340->g_21 p_1340->g_12.f1 p_1340->g_27 p_1340->g_28 p_1340->g_65 p_1340->g_73 p_1340->g_43 p_1340->g_275 p_1340->g_303 p_1340->g_311 p_1340->g_346 p_1340->g_362 p_1340->g_363 p_1340->g_344 p_1340->g_384 p_1340->g_380 p_1340->g_396 p_1340->g_392 p_1340->g_399 p_1340->g_442 p_1340->g_443 p_1340->g_395 p_1340->g_504 p_1340->g_508 p_1340->g_512 p_1340->g_557 p_1340->g_583 p_1340->g_598 p_1340->g_670 p_1340->g_446 p_1340->g_697 p_1340->g_716 p_1340->g_673 p_1340->g_731 p_1340->g_620 p_1340->g_747 p_1340->g_789 p_1340->g_802 p_1340->g_851 p_1340->g_892 p_1340->g_893 p_1340->g_903 p_1340->g_927 p_1340->g_932 p_1340->g_769 p_1340->g_825 p_1340->g_987 p_1340->g_988 p_1340->g_982 p_1340->g_840.f2 p_1340->g_771 p_1340->g_1018 p_1340->g_1060 p_1340->g_1061 p_1340->g_1068 p_1340->g_1036.f1 p_1340->g_1105 p_1340->g_1115 p_1340->g_1119 p_1340->g_1124 p_1340->g_1127 p_1340->g_1161 p_1340->g_1163 p_1340->g_840.f0 p_1340->g_840.f1 p_1340->g_1194 p_1340->g_1020 p_1340->g_1021 p_1340->g_1320 p_1340->g_1321 p_1340->g_1158 p_1340->g_1328 p_1340->g_1329 p_1340->g_1331 p_1340->g_719.f0
 * writes: p_1340->g_21 p_1340->g_12.f1 p_1340->g_28 p_1340->g_43 p_1340->g_73 p_1340->g_344 p_1340->g_346 p_1340->g_311 p_1340->g_303 p_1340->g_380 p_1340->g_392 p_1340->g_395 p_1340->g_399 p_1340->g_442 p_1340->g_443 p_1340->g_446 p_1340->g_396 p_1340->g_583 p_1340->g_620 p_1340->g_673 p_1340->g_512 p_1340->g_670 p_1340->g_731 p_1340->g_747 p_1340->g_825 p_1340->g_829 p_1340->g_697 p_1340->g_883 p_1340->g_840.f0 p_1340->g_927 p_1340->g_363 p_1340->g_598 p_1340->g_982 p_1340->g_840.f2 p_1340->g_771 p_1340->g_851 p_1340->g_557 p_1340->g_1068 p_1340->g_1036.f1 p_1340->g_1105 p_1340->g_1158 p_1340->g_840.f1 p_1340->g_1194 p_1340->g_769 p_1340->g_1163 p_1340->g_1119 p_1340->g_1329
 */
int32_t  func_1(struct S2 * p_1340)
{ /* block id: 4 */
    int32_t l_13 = 0L;
    uint64_t l_18[5][1] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
    int32_t *l_23 = &p_1340->g_21;
    VECTOR(int64_t, 4) l_44 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x6511C0E03A8461A3L), 0x6511C0E03A8461A3L);
    int32_t l_45 = (-1L);
    uint8_t *l_1252[4] = {&p_1340->g_446,&p_1340->g_446,&p_1340->g_446,&p_1340->g_446};
    uint8_t **l_1251[2];
    VECTOR(int16_t, 16) l_1258 = (VECTOR(int16_t, 16))(0x6AD6L, (VECTOR(int16_t, 4))(0x6AD6L, (VECTOR(int16_t, 2))(0x6AD6L, 0x223CL), 0x223CL), 0x223CL, 0x6AD6L, 0x223CL, (VECTOR(int16_t, 2))(0x6AD6L, 0x223CL), (VECTOR(int16_t, 2))(0x6AD6L, 0x223CL), 0x6AD6L, 0x223CL, 0x6AD6L, 0x223CL);
    int32_t l_1304 = 1L;
    int8_t l_1306 = 0x5CL;
    VECTOR(int64_t, 8) l_1307 = (VECTOR(int64_t, 8))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x5AD715176D73A3DEL), 0x5AD715176D73A3DEL), 0x5AD715176D73A3DEL, (-4L), 0x5AD715176D73A3DEL);
    VECTOR(uint64_t, 8) l_1319 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
    VECTOR(uint16_t, 8) l_1330 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
    VECTOR(uint16_t, 16) l_1332 = (VECTOR(uint16_t, 16))(4UL, (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 65535UL), 65535UL), 65535UL, 4UL, 65535UL, (VECTOR(uint16_t, 2))(4UL, 65535UL), (VECTOR(uint16_t, 2))(4UL, 65535UL), 4UL, 65535UL, 4UL, 65535UL);
    uint32_t ***l_1333[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint16_t, 4) l_1334 = (VECTOR(uint16_t, 4))(0xB93EL, (VECTOR(uint16_t, 2))(0xB93EL, 0xA919L), 0xA919L);
    int32_t l_1335 = 3L;
    int8_t *l_1336[2];
    uint16_t *l_1337 = (void*)0;
    uint16_t *l_1338 = (void*)0;
    uint16_t *l_1339[2];
    int i, j;
    for (i = 0; i < 2; i++)
        l_1251[i] = &l_1252[3];
    for (i = 0; i < 2; i++)
        l_1336[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_1339[i] = (void*)0;
    (*p_1340->g_22) = ((p_1340->g_comm_values[p_1340->tid] || p_1340->g_comm_values[p_1340->tid]) , (p_1340->g_comm_values[p_1340->tid] | ((((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s((func_7(p_1340->g_12, l_13, (l_13 , (p_1340->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1340->tid, 20))] && (((safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_1340->local_2_offset, get_local_id(2), 10), (p_1340->g_12.f0 >= (l_18[0][0] & 3L)))) == p_1340->g_comm_values[p_1340->tid]) > l_18[3][0]))), p_1340->g_12.f0, p_1340) > p_1340->g_12.f0), l_18[3][0])))), 0x6FL)) >= FAKE_DIVERGE(p_1340->local_1_offset, get_local_id(1), 10)) || p_1340->g_comm_values[p_1340->tid]) | 0x13L)));
    (*l_23) &= 0x2D1532D4L;
    for (p_1340->g_12.f1 = (-11); (p_1340->g_12.f1 > 14); ++p_1340->g_12.f1)
    { /* block id: 12 */
        uint32_t l_51[1];
        int32_t l_52 = 0x572A9630L;
        int32_t **l_1247 = &l_23;
        int64_t **l_1248 = &p_1340->g_829;
        int64_t l_1309 = 0x491C51325FA3A983L;
        int i;
        for (i = 0; i < 1; i++)
            l_51[i] = 4294967295UL;
        (*p_1340->g_27) |= (*l_23);
        for (p_1340->g_28 = 0; (p_1340->g_28 > 26); p_1340->g_28++)
        { /* block id: 16 */
            uint16_t l_47[2][9][4];
            int32_t l_57[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int32_t *l_66 = (void*)0;
            VECTOR(uint32_t, 8) l_1240 = (VECTOR(uint32_t, 8))(0xFCAC1E1BL, (VECTOR(uint32_t, 4))(0xFCAC1E1BL, (VECTOR(uint32_t, 2))(0xFCAC1E1BL, 3UL), 3UL), 3UL, 0xFCAC1E1BL, 3UL);
            uint8_t *l_1249 = &p_1340->g_446;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 9; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_47[i][j][k] = 5UL;
                }
            }
            for (p_1340->g_21 = 0; (p_1340->g_21 >= 21); ++p_1340->g_21)
            { /* block id: 19 */
                int8_t l_46 = 0L;
                int32_t *l_50 = (void*)0;
                int i, j;
                for (l_13 = 0; (l_13 == (-28)); l_13--)
                { /* block id: 22 */
                    int32_t *l_41 = (void*)0;
                    int32_t *l_42[8] = {&p_1340->g_43,(void*)0,&p_1340->g_43,&p_1340->g_43,(void*)0,&p_1340->g_43,&p_1340->g_43,(void*)0};
                    int i;
                    if ((atomic_inc(&p_1340->l_atomic_input[60]) == 2))
                    { /* block id: 24 */
                        int8_t l_35 = 0x7FL;
                        VECTOR(uint32_t, 4) l_36 = (VECTOR(uint32_t, 4))(0x9C7D4E78L, (VECTOR(uint32_t, 2))(0x9C7D4E78L, 1UL), 1UL);
                        int16_t l_37[9][6][2] = {{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}}};
                        union U0 l_38 = {0x13F4B1A2L};/* VOLATILE GLOBAL l_38 */
                        uint32_t l_39[6][8][5] = {{{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L}},{{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L}},{{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L}},{{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L}},{{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L}},{{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L},{0x8FFCACAFL,0x0C327405L,0xEAE5249FL,5UL,0x56716659L}}};
                        int32_t l_40 = 0x422523F8L;
                        int i, j, k;
                        l_40 &= ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(0x07D7A760L, (l_35 , ((l_37[6][1][0] = ((VECTOR(uint32_t, 4))(l_36.wwwz)).z) , ((l_38 , (l_39[2][0][0] , 1UL)) , 0x6A5F7267L))), 7L, ((VECTOR(int32_t, 4))(0x1042FB88L, (-1L), (-1L), 1L)), 0x2E8C41CEL)).odd))).w;
                        unsigned int result = 0;
                        result += l_35;
                        result += l_36.w;
                        result += l_36.z;
                        result += l_36.y;
                        result += l_36.x;
                        int l_37_i0, l_37_i1, l_37_i2;
                        for (l_37_i0 = 0; l_37_i0 < 9; l_37_i0++) {
                            for (l_37_i1 = 0; l_37_i1 < 6; l_37_i1++) {
                                for (l_37_i2 = 0; l_37_i2 < 2; l_37_i2++) {
                                    result += l_37[l_37_i0][l_37_i1][l_37_i2];
                                }
                            }
                        }
                        result += l_38.f0;
                        result += l_38.f1;
                        result += l_38.f2;
                        result += l_38.f3;
                        result += l_38.f4;
                        int l_39_i0, l_39_i1, l_39_i2;
                        for (l_39_i0 = 0; l_39_i0 < 6; l_39_i0++) {
                            for (l_39_i1 = 0; l_39_i1 < 8; l_39_i1++) {
                                for (l_39_i2 = 0; l_39_i2 < 5; l_39_i2++) {
                                    result += l_39[l_39_i0][l_39_i1][l_39_i2];
                                }
                            }
                        }
                        result += l_40;
                        atomic_add(&p_1340->l_special_values[60], result);
                    }
                    else
                    { /* block id: 27 */
                        (1 + 1);
                    }
                    l_47[1][3][3]++;
                }
                l_52 ^= ((l_51[0] = (l_45 = (*p_1340->g_27))) <= (l_50 != (void*)0));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1340->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 20)), permutations[(safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_int64_t_s_s((0x473CB19522E61FFEL <= (l_57[3] = 18446744073709551615UL)), FAKE_DIVERGE(p_1340->local_0_offset, get_local_id(0), 10))), func_58(func_61(((&p_1340->g_28 == (void*)0) || ((VECTOR(uint64_t, 2))(p_1340->g_65.sa6)).lo), (&p_1340->g_43 != l_66), ((*p_1340->g_22) < (safe_add_func_uint32_t_u_u((1UL != (safe_sub_func_int64_t_s_s((((func_71(((((((0UL >= p_1340->g_comm_values[p_1340->tid]) , l_50) == (void*)0) ^ 0x8D60A67AL) <= p_1340->g_65.s8) , &p_1340->g_21), p_1340) | l_51[0]) && 4294967286UL) < (*l_23)), 2UL))), 0x01DCDFF0L))), p_1340), p_1340->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1340->tid, 20))], p_1340))), 10))][(safe_mod_func_uint32_t_u_u(p_1340->tid, 20))]));
                return (*p_1340->g_27);
            }
            for (p_1340->g_399 = 0; (p_1340->g_399 < 23); p_1340->g_399 = safe_add_func_int8_t_s_s(p_1340->g_399, 8))
            { /* block id: 542 */
                if ((*p_1340->g_20))
                    break;
            }
        }
    }
    (**p_1340->g_395) = ((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u((p_1340->g_1329.s7 = ((safe_rshift_func_uint8_t_u_s((0x63541A4E7E7713CDL > ((VECTOR(uint64_t, 2))(l_1319.s16)).even), ((l_45 = (((*p_1340->g_982) = ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(p_1340->g_1320.s12)).xxxy, ((VECTOR(int16_t, 4))(p_1340->g_1321.s2521)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0x2F4DL, ((VECTOR(int16_t, 2))((-2L), 0L)), 0x326CL, 0L, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(0x2893L, 0x3993L)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(0x0485L, ((safe_add_func_int8_t_s_s((*p_1340->g_1158), (((((FAKE_DIVERGE(p_1340->global_0_offset, get_global_id(0), 10) , (*l_23)) , (p_1340->g_598.sd = (((*l_23) = ((safe_mul_func_uint16_t_u_u(((*l_23) <= (safe_mul_func_int8_t_s_s(((~((VECTOR(int64_t, 8))(p_1340->g_1328.yyyxxxxx)).s7) > (((VECTOR(int16_t, 8))(p_1340->g_1329.s77671453)).s7 & ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(l_1330.s5172)).yxxyzzyyxxwywyxz, ((VECTOR(uint16_t, 16))(p_1340->g_1331.s4a1ba9cee151d111))))).sa5, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1332.sbea9)), ((VECTOR(uint16_t, 4))((*l_23), 65532UL, 0x7559L, 9UL)), GROUP_DIVERGE(0, 1), (&p_1340->g_620 == l_1333[0]), p_1340->g_1115.sd, ((VECTOR(uint16_t, 2))(0x63ACL)), 0x8981L, 1UL, 65535UL)))).se2, ((VECTOR(uint16_t, 2))(65535UL))))).odd)), l_1334.z))), FAKE_DIVERGE(p_1340->local_2_offset, get_local_id(2), 10))) && l_1335)) || 255UL))) > l_1330.s2) < FAKE_DIVERGE(p_1340->group_0_offset, get_group_id(0), 10)) & 0x5266B31AL))) , (-1L)), (*l_23), 0x4E0EL, 0x026AL, 0x3C54L, ((VECTOR(int16_t, 2))(4L)), ((VECTOR(int16_t, 4))(0x1096L)), (*l_23), 0x1A84L, 2L, 0L)).s334d)).zzxzzzxwwwyyyxxz, ((VECTOR(int16_t, 16))(0x020AL))))).sa36e, ((VECTOR(int16_t, 4))(0x7C4AL))))))).lo))).hi, 4L, (-6L))), ((VECTOR(int16_t, 8))(0x7221L)))).s322a))).ywywwzzx)).s06, (int16_t)(*l_23)))).even) , p_1340->g_719.f0)) ^ p_1340->g_987.y))) , (*l_23))), l_1304)) > (*p_1340->g_1158)) , (**p_1340->g_395)), 0x393834C3L)), 0xD123L)) > (*p_1340->g_396));
    return (*l_23);
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_20 p_1340->g_12.f0
 * writes: p_1340->g_21
 */
uint16_t  func_7(union U1  p_8, uint16_t  p_9, uint32_t  p_10, uint32_t  p_11, struct S2 * p_1340)
{ /* block id: 5 */
    int8_t l_19 = (-1L);
    (*p_1340->g_20) = (p_8.f0 & l_19);
    return p_1340->g_12.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_840.f1 p_1340->g_1194 p_1340->g_1020 p_1340->g_1021 p_1340->g_769 p_1340->g_802 p_1340->g_27 p_1340->g_28 p_1340->g_384 p_1340->g_20 p_1340->g_21 p_1340->g_1119
 * writes: p_1340->g_840.f1 p_1340->g_1194 p_1340->g_769 p_1340->g_446 p_1340->g_1163 p_1340->g_1119
 */
int16_t  func_58(int32_t * p_59, int16_t  p_60, struct S2 * p_1340)
{ /* block id: 513 */
    uint32_t l_1183 = 0x0A0DAA8FL;
    int32_t l_1190 = 0x243D484CL;
    int32_t l_1191 = 0x72B05878L;
    int32_t l_1192 = 0x4A0B29AFL;
    int32_t l_1193[5];
    VECTOR(int64_t, 4) l_1203 = (VECTOR(int64_t, 4))(0x7347B5E9585E96DEL, (VECTOR(int64_t, 2))(0x7347B5E9585E96DEL, 0x15B4A38421107B5BL), 0x15B4A38421107B5BL);
    uint64_t *l_1209 = &p_1340->g_1194;
    int64_t *l_1214[8][5] = {{&p_1340->g_1163[6][7],(void*)0,(void*)0,(void*)0,&p_1340->g_1163[7][7]},{&p_1340->g_1163[6][7],(void*)0,(void*)0,(void*)0,&p_1340->g_1163[7][7]},{&p_1340->g_1163[6][7],(void*)0,(void*)0,(void*)0,&p_1340->g_1163[7][7]},{&p_1340->g_1163[6][7],(void*)0,(void*)0,(void*)0,&p_1340->g_1163[7][7]},{&p_1340->g_1163[6][7],(void*)0,(void*)0,(void*)0,&p_1340->g_1163[7][7]},{&p_1340->g_1163[6][7],(void*)0,(void*)0,(void*)0,&p_1340->g_1163[7][7]},{&p_1340->g_1163[6][7],(void*)0,(void*)0,(void*)0,&p_1340->g_1163[7][7]},{&p_1340->g_1163[6][7],(void*)0,(void*)0,(void*)0,&p_1340->g_1163[7][7]}};
    uint8_t *l_1217 = (void*)0;
    uint8_t *l_1218 = &p_1340->g_446;
    int16_t ***l_1223 = (void*)0;
    int32_t ***l_1224 = (void*)0;
    int32_t l_1225 = (-10L);
    uint32_t l_1226 = 0xC99F4943L;
    int16_t l_1227[1];
    int32_t *l_1228 = &l_1191;
    int16_t **l_1229 = &p_1340->g_982;
    int i, j;
    for (i = 0; i < 5; i++)
        l_1193[i] = 9L;
    for (i = 0; i < 1; i++)
        l_1227[i] = (-5L);
    for (p_1340->g_840.f1 = (-8); (p_1340->g_840.f1 == 2); p_1340->g_840.f1 = safe_add_func_uint32_t_u_u(p_1340->g_840.f1, 9))
    { /* block id: 516 */
        int32_t *l_1184 = (void*)0;
        int32_t *l_1185 = (void*)0;
        int32_t *l_1186 = (void*)0;
        int32_t *l_1187 = &p_1340->g_1068;
        int32_t *l_1188 = &p_1340->g_769;
        int32_t *l_1189[5][4] = {{(void*)0,&p_1340->g_1068,&p_1340->g_21,(void*)0},{(void*)0,&p_1340->g_1068,&p_1340->g_21,(void*)0},{(void*)0,&p_1340->g_1068,&p_1340->g_21,(void*)0},{(void*)0,&p_1340->g_1068,&p_1340->g_21,(void*)0},{(void*)0,&p_1340->g_1068,&p_1340->g_21,(void*)0}};
        int16_t *l_1204[6][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1340->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 20)), permutations[(safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), ((safe_mul_func_int16_t_s_s(l_1183, 0xB3B0L)) != 4294967295UL))) && l_1183), 10))][(safe_mod_func_uint32_t_u_u(p_1340->tid, 20))]));
        p_1340->g_1194--;
        (*l_1188) &= (safe_sub_func_int16_t_s_s((p_60 ^= (safe_add_func_int32_t_s_s((safe_sub_func_int64_t_s_s((*p_1340->g_1020), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_1203.zz)).yyyy)).x)), FAKE_DIVERGE(p_1340->group_0_offset, get_group_id(0), 10)))), l_1193[4]));
    }
    (*l_1228) = (p_60 != (!(l_1192 = (safe_mod_func_uint32_t_u_u((((safe_mod_func_uint64_t_u_u(((*l_1209)--), (l_1190 = (safe_lshift_func_int16_t_s_s((p_1340->g_802.sa > p_60), 4))))) > (l_1193[4] = (safe_rshift_func_uint8_t_u_s(((p_60 , ((*l_1218) = l_1191)) == 0x44L), l_1191)))) != (safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((p_1340->g_1163[7][5] = ((((((-1L) != ((((((void*)0 == l_1223) > p_60) , &p_1340->g_395) != l_1224) , (*p_1340->g_27))) || 246UL) ^ l_1225) < p_60) <= p_1340->g_384.s7)) & l_1226))) > 0xA5L), l_1227[0]))), p_60)))));
    l_1229 = &p_1340->g_982;
    p_1340->g_1119.y ^= (safe_add_func_int32_t_s_s((*p_1340->g_20), ((*l_1228) = (*p_59))));
    return p_60;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_61(int64_t  p_62, int64_t  p_63, uint16_t  p_64, struct S2 * p_1340)
{ /* block id: 511 */
    int32_t *l_1176 = &p_1340->g_21;
    return l_1176;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_73 p_1340->g_comm_values p_1340->g_43 p_1340->g_275 p_1340->g_28 p_1340->l_comm_values p_1340->g_65 p_1340->g_303 p_1340->g_311 p_1340->g_346 p_1340->g_362 p_1340->g_363 p_1340->g_344 p_1340->g_384 p_1340->g_380 p_1340->g_396 p_1340->g_392 p_1340->g_399 p_1340->g_12.f0 p_1340->g_442 p_1340->g_443 p_1340->g_395 p_1340->g_504 p_1340->g_21 p_1340->g_508 p_1340->g_512 p_1340->g_557 p_1340->g_583 p_1340->g_598 p_1340->g_12 p_1340->g_670 p_1340->g_446 p_1340->g_697 p_1340->g_716 p_1340->g_673 p_1340->g_731 p_1340->g_620 p_1340->g_747 p_1340->g_789 p_1340->g_802 p_1340->g_851 p_1340->g_892 p_1340->g_893 p_1340->g_903 p_1340->g_927 p_1340->g_932 p_1340->g_769 p_1340->g_825 p_1340->g_987 p_1340->g_988 p_1340->g_982 p_1340->g_840.f2 p_1340->g_771 p_1340->g_1018 p_1340->g_1060 p_1340->g_1061 p_1340->g_1068 p_1340->g_1036.f1 p_1340->g_1105 p_1340->g_1115 p_1340->g_1119 p_1340->g_1124 p_1340->g_1127 p_1340->g_1161 p_1340->g_1163 p_1340->g_840.f0
 * writes: p_1340->g_43 p_1340->g_73 p_1340->g_344 p_1340->g_346 p_1340->g_311 p_1340->g_303 p_1340->g_380 p_1340->g_392 p_1340->g_395 p_1340->g_399 p_1340->g_442 p_1340->g_443 p_1340->g_446 p_1340->g_396 p_1340->g_583 p_1340->g_620 p_1340->g_673 p_1340->g_512 p_1340->g_670 p_1340->g_731 p_1340->g_747 p_1340->g_825 p_1340->g_829 p_1340->g_697 p_1340->g_883 p_1340->g_840.f0 p_1340->g_927 p_1340->g_363 p_1340->g_598 p_1340->g_982 p_1340->g_840.f2 p_1340->g_771 p_1340->g_851 p_1340->g_557 p_1340->g_1068 p_1340->g_1036.f1 p_1340->g_1105 p_1340->g_1158
 */
uint32_t  func_71(int32_t * p_72, struct S2 * p_1340)
{ /* block id: 36 */
    int32_t *l_74 = (void*)0;
    int32_t *l_75 = &p_1340->g_43;
    int32_t *l_255 = &p_1340->g_28;
    VECTOR(int32_t, 16) l_271 = (VECTOR(int32_t, 16))(0x36028CDCL, (VECTOR(int32_t, 4))(0x36028CDCL, (VECTOR(int32_t, 2))(0x36028CDCL, 0L), 0L), 0L, 0x36028CDCL, 0L, (VECTOR(int32_t, 2))(0x36028CDCL, 0L), (VECTOR(int32_t, 2))(0x36028CDCL, 0L), 0x36028CDCL, 0L, 0x36028CDCL, 0L);
    VECTOR(int16_t, 16) l_274 = (VECTOR(int16_t, 16))(0x5608L, (VECTOR(int16_t, 4))(0x5608L, (VECTOR(int16_t, 2))(0x5608L, 0x28F0L), 0x28F0L), 0x28F0L, 0x5608L, 0x28F0L, (VECTOR(int16_t, 2))(0x5608L, 0x28F0L), (VECTOR(int16_t, 2))(0x5608L, 0x28F0L), 0x5608L, 0x28F0L, 0x5608L, 0x28F0L);
    VECTOR(int32_t, 2) l_276 = (VECTOR(int32_t, 2))(0x2C4FD6F1L, 0x1C8258AFL);
    VECTOR(int32_t, 8) l_1125 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
    int8_t l_1135[3][7][5] = {{{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)}},{{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)}},{{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)},{(-1L),(-1L),0x67L,0x36L,(-1L)}}};
    VECTOR(int16_t, 8) l_1148 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
    uint64_t *l_1151 = (void*)0;
    uint64_t *l_1152 = (void*)0;
    uint64_t *l_1153[2];
    int8_t *l_1157[5];
    int8_t **l_1156[10] = {&l_1157[2],&l_1157[2],&l_1157[2],&l_1157[2],&l_1157[2],&l_1157[2],&l_1157[2],&l_1157[2],&l_1157[2],&l_1157[2]};
    uint8_t *l_1162 = &p_1340->g_446;
    int32_t *l_1164 = (void*)0;
    int32_t *l_1165 = (void*)0;
    int32_t *l_1166[10][4][5] = {{{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21}},{{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21}},{{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21}},{{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21}},{{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21}},{{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21}},{{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21}},{{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21}},{{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21}},{{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21},{(void*)0,(void*)0,&p_1340->g_21,&p_1340->g_769,&p_1340->g_21}}};
    uint64_t **l_1174 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1153[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_1157[i] = (void*)0;
    (*l_75) = ((VECTOR(int32_t, 8))(p_1340->g_73.s67410457)).s0;
    if (((*l_75) = (safe_mod_func_uint16_t_u_u(FAKE_DIVERGE(p_1340->group_2_offset, get_group_id(2), 10), 3L))))
    { /* block id: 39 */
        if ((atomic_inc(&p_1340->g_atomic_input[89 * get_linear_group_id() + 10]) == 5))
        { /* block id: 41 */
            VECTOR(uint32_t, 8) l_78 = (VECTOR(uint32_t, 8))(0xF192DB62L, (VECTOR(uint32_t, 4))(0xF192DB62L, (VECTOR(uint32_t, 2))(0xF192DB62L, 7UL), 7UL), 7UL, 0xF192DB62L, 7UL);
            int32_t l_79 = 0x2E16A0CFL;
            uint64_t l_80 = 0x3A476D206646FD81L;
            int16_t l_81 = 1L;
            int i;
            if ((((l_79 = ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_78.s4204)).yxxyxxxz)).s3) , l_80) , l_81))
            { /* block id: 43 */
                uint32_t l_82 = 1UL;
                int32_t **l_103 = (void*)0;
                if (l_82)
                { /* block id: 44 */
                    uint8_t l_83 = 1UL;
                    VECTOR(int64_t, 16) l_86 = (VECTOR(int64_t, 16))(0x5C899AE76D89E43FL, (VECTOR(int64_t, 4))(0x5C899AE76D89E43FL, (VECTOR(int64_t, 2))(0x5C899AE76D89E43FL, 0x02D80879AB5F6EBEL), 0x02D80879AB5F6EBEL), 0x02D80879AB5F6EBEL, 0x5C899AE76D89E43FL, 0x02D80879AB5F6EBEL, (VECTOR(int64_t, 2))(0x5C899AE76D89E43FL, 0x02D80879AB5F6EBEL), (VECTOR(int64_t, 2))(0x5C899AE76D89E43FL, 0x02D80879AB5F6EBEL), 0x5C899AE76D89E43FL, 0x02D80879AB5F6EBEL, 0x5C899AE76D89E43FL, 0x02D80879AB5F6EBEL);
                    int16_t l_87 = 3L;
                    VECTOR(int32_t, 4) l_88 = (VECTOR(int32_t, 4))(0x2C46EA07L, (VECTOR(int32_t, 2))(0x2C46EA07L, 0x33FF6D77L), 0x33FF6D77L);
                    int i;
                    l_83++;
                    l_87 |= (l_86.s0 ^= (-1L));
                    if (((VECTOR(int32_t, 16))(l_88.wyywzzzxywzxwxxy)).sc)
                    { /* block id: 48 */
                        VECTOR(int32_t, 4) l_89 = (VECTOR(int32_t, 4))(0x534BCD69L, (VECTOR(int32_t, 2))(0x534BCD69L, 1L), 1L);
                        uint16_t l_90 = 0xAB8FL;
                        uint64_t l_91 = 0x358544ED18BB6728L;
                        int32_t *l_92 = (void*)0;
                        int i;
                        l_88.x = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_89.xywzwxxz)).s50)), 0L, 0x6559458BL)).z;
                        l_91 = (l_88.y &= l_90);
                        l_92 = (void*)0;
                    }
                    else
                    { /* block id: 53 */
                        int64_t l_93 = 0x659B86C8B6B23628L;
                        int64_t l_94 = 0x66C36115CB1E5577L;
                        uint32_t l_95 = 1UL;
                        uint32_t l_96 = 0xEB4C7169L;
                        l_88.x = (l_93 , l_94);
                        l_88.y = (-4L);
                        l_88.z |= (l_95 , l_96);
                    }
                }
                else
                { /* block id: 58 */
                    union U1 l_97 = {0x0331L};
                    int32_t l_99 = 0x77E692E2L;
                    int32_t *l_98 = &l_99;
                    int32_t *l_100 = &l_99;
                    uint64_t l_101 = 0x32F13A919A52CA83L;
                    int8_t l_102 = 0x0CL;
                    l_100 = (l_97 , l_98);
                    l_102 |= l_101;
                }
                l_103 = (void*)0;
            }
            else
            { /* block id: 63 */
                int32_t l_104 = 3L;
                int32_t l_126 = 1L;
                uint32_t l_127 = 4294967287UL;
                int8_t l_128 = 8L;
                int32_t l_129 = 0x05DACF7CL;
                uint32_t l_130 = 1UL;
                for (l_104 = 4; (l_104 != (-6)); l_104 = safe_sub_func_uint64_t_u_u(l_104, 1))
                { /* block id: 66 */
                    int32_t l_107[10][8][3] = {{{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L}},{{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L}},{{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L}},{{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L}},{{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L}},{{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L}},{{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L}},{{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L}},{{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L}},{{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L},{(-7L),(-7L),6L}}};
                    int32_t l_115 = 0x2B691963L;
                    uint32_t l_116 = 9UL;
                    int32_t *l_124 = (void*)0;
                    int32_t *l_125 = &l_107[7][1][0];
                    int i, j, k;
                    for (l_107[7][2][0] = 21; (l_107[7][2][0] >= 5); l_107[7][2][0] = safe_sub_func_int32_t_s_s(l_107[7][2][0], 2))
                    { /* block id: 69 */
                        int16_t l_110 = 7L;
                        uint64_t l_111 = 0xCA084A157F97FFC2L;
                        int32_t l_112[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
                        int16_t l_113 = 1L;
                        uint32_t l_114 = 0xD0AF7C67L;
                        int i;
                        l_111 = l_110;
                        l_114 = ((l_112[6] |= FAKE_DIVERGE(p_1340->group_0_offset, get_group_id(0), 10)) , l_113);
                    }
                    l_116++;
                    for (l_115 = 0; (l_115 == (-15)); l_115--)
                    { /* block id: 77 */
                        int8_t l_121[10] = {0x52L,0x23L,0x52L,0x52L,0x23L,0x52L,0x52L,0x23L,0x52L,0x52L};
                        int32_t l_122 = 0x00B87C0FL;
                        uint16_t l_123 = 8UL;
                        int i;
                        l_122 |= l_121[9];
                        l_107[7][2][0] |= l_123;
                    }
                    l_125 = l_124;
                }
                l_104 &= ((l_127 |= l_126) , 6L);
                ++l_130;
                for (l_104 = 0; (l_104 >= (-27)); --l_104)
                { /* block id: 88 */
                    uint32_t l_135 = 0xF70FADE7L;
                    int8_t l_138 = 0x5AL;
                    int32_t l_139 = 0x2AA66C77L;
                    int32_t l_140 = 0x07CFFEA4L;
                    int64_t l_141 = 1L;
                    int32_t l_142 = 0L;
                    uint8_t l_143[10][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
                    int i, j;
                    --l_135;
                    l_129 = l_138;
                    l_129 = l_139;
                    --l_143[8][1];
                }
            }
            for (l_79 = 0; (l_79 >= 14); ++l_79)
            { /* block id: 97 */
                int32_t l_149 = 0x5E673EBCL;
                int32_t *l_148 = &l_149;
                l_148 = (void*)0;
                for (l_149 = 0; (l_149 > 20); l_149 = safe_add_func_int32_t_s_s(l_149, 1))
                { /* block id: 101 */
                    int32_t l_152 = 0x098F169FL;
                    int64_t l_153 = 0x140B01D31608D42EL;
                    int16_t l_154 = 0x7310L;
                    int32_t l_155 = 2L;
                    int32_t *l_156 = &l_155;
                    int64_t l_157 = (-1L);
                    l_155 = ((l_153 ^= l_152) , l_154);
                    l_148 = l_156;
                    if (l_157)
                    { /* block id: 105 */
                        int32_t l_159 = (-1L);
                        int32_t *l_158 = &l_159;
                        int32_t l_160 = 1L;
                        (*l_156) ^= (-1L);
                        l_148 = l_158;
                        (*l_156) = l_160;
                    }
                    else
                    { /* block id: 109 */
                        int32_t l_161[7] = {0x0DFBF4EFL,0x0DFBF4EFL,0x0DFBF4EFL,0x0DFBF4EFL,0x0DFBF4EFL,0x0DFBF4EFL,0x0DFBF4EFL};
                        VECTOR(int32_t, 16) l_162 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x75B775EAL), 0x75B775EAL), 0x75B775EAL, 0L, 0x75B775EAL, (VECTOR(int32_t, 2))(0L, 0x75B775EAL), (VECTOR(int32_t, 2))(0L, 0x75B775EAL), 0L, 0x75B775EAL, 0L, 0x75B775EAL);
                        VECTOR(int32_t, 2) l_163 = (VECTOR(int32_t, 2))(5L, 0L);
                        VECTOR(int32_t, 8) l_164 = (VECTOR(int32_t, 8))(0x3730723EL, (VECTOR(int32_t, 4))(0x3730723EL, (VECTOR(int32_t, 2))(0x3730723EL, 0x513DC49BL), 0x513DC49BL), 0x513DC49BL, 0x3730723EL, 0x513DC49BL);
                        VECTOR(int32_t, 4) l_165 = (VECTOR(int32_t, 4))(0x23AAE146L, (VECTOR(int32_t, 2))(0x23AAE146L, (-3L)), (-3L));
                        VECTOR(int32_t, 2) l_166 = (VECTOR(int32_t, 2))(0x5326F639L, 0x581F8B52L);
                        VECTOR(int32_t, 8) l_167 = (VECTOR(int32_t, 8))(0x5F3804EFL, (VECTOR(int32_t, 4))(0x5F3804EFL, (VECTOR(int32_t, 2))(0x5F3804EFL, 0x7154D3D3L), 0x7154D3D3L), 0x7154D3D3L, 0x5F3804EFL, 0x7154D3D3L);
                        VECTOR(int32_t, 4) l_168 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x25BDA816L), 0x25BDA816L);
                        VECTOR(int32_t, 4) l_169 = (VECTOR(int32_t, 4))(0x70C56885L, (VECTOR(int32_t, 2))(0x70C56885L, 1L), 1L);
                        VECTOR(int32_t, 16) l_170 = (VECTOR(int32_t, 16))(0x3EFEFA7DL, (VECTOR(int32_t, 4))(0x3EFEFA7DL, (VECTOR(int32_t, 2))(0x3EFEFA7DL, 0x54CE0AEBL), 0x54CE0AEBL), 0x54CE0AEBL, 0x3EFEFA7DL, 0x54CE0AEBL, (VECTOR(int32_t, 2))(0x3EFEFA7DL, 0x54CE0AEBL), (VECTOR(int32_t, 2))(0x3EFEFA7DL, 0x54CE0AEBL), 0x3EFEFA7DL, 0x54CE0AEBL, 0x3EFEFA7DL, 0x54CE0AEBL);
                        VECTOR(int16_t, 4) l_171 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x547DL), 0x547DL);
                        VECTOR(int16_t, 2) l_172 = (VECTOR(int16_t, 2))(4L, 1L);
                        VECTOR(uint16_t, 4) l_173 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL);
                        int32_t l_174 = 5L;
                        VECTOR(int16_t, 16) l_175 = (VECTOR(int16_t, 16))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 1L), 1L), 1L, (-7L), 1L, (VECTOR(int16_t, 2))((-7L), 1L), (VECTOR(int16_t, 2))((-7L), 1L), (-7L), 1L, (-7L), 1L);
                        int8_t l_176 = 0x69L;
                        int32_t l_177 = 0x3184E427L;
                        int16_t l_178[1];
                        int32_t l_179[4] = {(-9L),(-9L),(-9L),(-9L)};
                        uint64_t l_180 = 0x8F982563B7CE209CL;
                        uint64_t l_183 = 0xF8FE37CAFADE91FDL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_178[i] = 0x6197L;
                        l_164.s3 = ((*l_148) |= (l_161[1] , ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(0x667E395CL, (-8L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_162.sda)).xxyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(l_163.yx)), 0x48B5D35BL)).hi)).xyyy, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(l_164.s61)).yxxy, ((VECTOR(int32_t, 4))(1L, 0x114BE7DEL, 5L, 0x2663DAEBL))))), 0x30E04704L, 0x641012E1L, 0x129A2765L)).lo)).zxywxyyz, ((VECTOR(int32_t, 16))(l_165.yxxwxwwywzzyzyzx)).hi))).lo))).hi, ((VECTOR(int32_t, 8))(l_166.yxxyyyxy)).s27))).yxyxxxyy, ((VECTOR(int32_t, 4))(0x3DBADB8EL, ((VECTOR(int32_t, 2))(l_167.s22)), 0x66C8BF41L)).xwwxzzwz, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(l_168.wwzxxywz)).s31, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_169.wyyzzzyz)).s11))))).xxxxyyyx))).s34)), 0L, ((VECTOR(int32_t, 2))(l_170.s5c)), (-1L))).hi, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-1L), 3L)).yxxyxxyx)).s36, ((VECTOR(int16_t, 8))(l_171.yzyyyzxz)).s64, ((VECTOR(int16_t, 2))(l_172.yx))))).xxyxxyxyxyyxyyxx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_173.zx)), 65535UL, 0x8BCAL)).xzxxzxyxwyyxzzxz))).sc763))).y));
                        --l_180;
                        l_183++;
                    }
                }
            }
            unsigned int result = 0;
            result += l_78.s7;
            result += l_78.s6;
            result += l_78.s5;
            result += l_78.s4;
            result += l_78.s3;
            result += l_78.s2;
            result += l_78.s1;
            result += l_78.s0;
            result += l_79;
            result += l_80;
            result += l_81;
            atomic_add(&p_1340->g_special_values[89 * get_linear_group_id() + 10], result);
        }
        else
        { /* block id: 117 */
            (1 + 1);
        }
        if ((atomic_inc(&p_1340->l_atomic_input[53]) == 1))
        { /* block id: 121 */
            int8_t l_186[5][7] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
            uint32_t l_252 = 0xB7161528L;
            int32_t l_254 = 2L;
            int32_t *l_253 = &l_254;
            int i, j;
            if (l_186[2][3])
            { /* block id: 122 */
                uint32_t l_187 = 0UL;
                if (l_187)
                { /* block id: 123 */
                    uint32_t l_188[3][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_188[i][j] = 0x4F57BC19L;
                    }
                    l_188[0][0] = 0x1F283B0DL;
                }
                else
                { /* block id: 125 */
                    int64_t l_189 = (-1L);
                    if ((l_189 = 0x201BD5C1L))
                    { /* block id: 127 */
                        int8_t l_190 = (-4L);
                        int8_t l_191 = 0x0AL;
                        VECTOR(int32_t, 4) l_192 = (VECTOR(int32_t, 4))(0x2D73B8AEL, (VECTOR(int32_t, 2))(0x2D73B8AEL, (-1L)), (-1L));
                        uint32_t l_193 = 5UL;
                        int8_t l_194 = 0x63L;
                        int8_t l_195[3][5] = {{7L,(-8L),7L,7L,(-8L)},{7L,(-8L),7L,7L,(-8L)},{7L,(-8L),7L,7L,(-8L)}};
                        VECTOR(int32_t, 4) l_196 = (VECTOR(int32_t, 4))(0x30D8BC59L, (VECTOR(int32_t, 2))(0x30D8BC59L, 0x364F97EBL), 0x364F97EBL);
                        VECTOR(int32_t, 16) l_197 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 1L), 1L), 1L, 9L, 1L, (VECTOR(int32_t, 2))(9L, 1L), (VECTOR(int32_t, 2))(9L, 1L), 9L, 1L, 9L, 1L);
                        uint32_t l_198 = 0UL;
                        int16_t l_199 = 0x195AL;
                        int i, j;
                        l_191 = l_190;
                        l_193 ^= ((VECTOR(int32_t, 2))(l_192.xy)).lo;
                        l_194 = (-10L);
                        l_199 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x1BFAB435L, 8L)), 0x0D361278L, 0x10569669L)).hi)), 0x631DAC9CL, 0x5F45CCC3L)).wwzxwyyx)).s62)), l_195[2][4], ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_196.yxwz)).xwxyyyyx)).hi)))).w, 0x6182C64BL, 0L, 0x6B59DBCAL, ((VECTOR(int32_t, 2))(1L, 4L)), ((VECTOR(int32_t, 2))(0x7CC31644L, 0x28529AC4L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_197.s133b)))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x68B76DA4L, 9L)).xxxxyxyx)).hi))), ((VECTOR(int32_t, 2))(0x35015410L, 0x3F195CB6L)), 1L, (-1L))).s51)), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x05C398A5L, 0x7AEDB5F2L)))), (int32_t)(l_198 , (-9L))))), 0x36D31D16L)).s9;
                    }
                    else
                    { /* block id: 132 */
                        uint32_t l_200 = 0xCF0FDF59L;
                        l_200 = (-1L);
                    }
                }
            }
            else
            { /* block id: 136 */
                VECTOR(int32_t, 16) l_201 = (VECTOR(int32_t, 16))(0x7D0D4960L, (VECTOR(int32_t, 4))(0x7D0D4960L, (VECTOR(int32_t, 2))(0x7D0D4960L, (-1L)), (-1L)), (-1L), 0x7D0D4960L, (-1L), (VECTOR(int32_t, 2))(0x7D0D4960L, (-1L)), (VECTOR(int32_t, 2))(0x7D0D4960L, (-1L)), 0x7D0D4960L, (-1L), 0x7D0D4960L, (-1L));
                VECTOR(int32_t, 8) l_202 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x66016839L), 0x66016839L), 0x66016839L, (-3L), 0x66016839L);
                VECTOR(int32_t, 16) l_203 = (VECTOR(int32_t, 16))(0x1902BEB2L, (VECTOR(int32_t, 4))(0x1902BEB2L, (VECTOR(int32_t, 2))(0x1902BEB2L, (-1L)), (-1L)), (-1L), 0x1902BEB2L, (-1L), (VECTOR(int32_t, 2))(0x1902BEB2L, (-1L)), (VECTOR(int32_t, 2))(0x1902BEB2L, (-1L)), 0x1902BEB2L, (-1L), 0x1902BEB2L, (-1L));
                VECTOR(int32_t, 16) l_204 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                int32_t l_205 = 0x1D7EA509L;
                uint8_t l_206 = 1UL;
                VECTOR(int32_t, 8) l_207 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L));
                int32_t l_208 = 0x6D823630L;
                VECTOR(int32_t, 2) l_209 = (VECTOR(int32_t, 2))((-4L), 0x3532A7CDL);
                VECTOR(int32_t, 16) l_210 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x45538669L), 0x45538669L), 0x45538669L, (-1L), 0x45538669L, (VECTOR(int32_t, 2))((-1L), 0x45538669L), (VECTOR(int32_t, 2))((-1L), 0x45538669L), (-1L), 0x45538669L, (-1L), 0x45538669L);
                VECTOR(int32_t, 2) l_211 = (VECTOR(int32_t, 2))(0x4E7AADA5L, 0x6AE938D7L);
                uint8_t l_212[4];
                VECTOR(int16_t, 4) l_213 = (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x05B7L), 0x05B7L);
                VECTOR(uint16_t, 2) l_214 = (VECTOR(uint16_t, 2))(65535UL, 65531UL);
                VECTOR(int32_t, 8) l_215 = (VECTOR(int32_t, 8))(0x088B8759L, (VECTOR(int32_t, 4))(0x088B8759L, (VECTOR(int32_t, 2))(0x088B8759L, 0x768D2A35L), 0x768D2A35L), 0x768D2A35L, 0x088B8759L, 0x768D2A35L);
                VECTOR(int32_t, 8) l_216 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 3L), 3L), 3L, 0L, 3L);
                uint64_t l_217 = 0x1111A74DA8DAF7D2L;
                uint64_t l_218 = 18446744073709551609UL;
                uint64_t l_219 = 2UL;
                int64_t l_220 = 1L;
                int64_t l_221 = 0x622572348755DABCL;
                int64_t l_222 = 0x4542C82936B54799L;
                uint32_t l_223 = 0x562BE381L;
                uint8_t l_224 = 254UL;
                int32_t *l_250 = (void*)0;
                int32_t *l_251 = (void*)0;
                int i;
                for (i = 0; i < 4; i++)
                    l_212[i] = 3UL;
                l_224 ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(l_201.s8923)).wywyxyzyyzywyyzz, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(l_202.s2434126456243476)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0L, 0x10CAAE7EL)).xxxxyyyyyyyyxxyy, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(1L, 6L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_203.s7ad904d1)), 1L, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))((-1L), 0x022C0690L, 0x3454C05BL, 0x74BA40ADL)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_204.s6a02321d8d0860c5)))).sfd51))))), (l_205 , l_206), 0L, (-1L))).s4e))).yyyyxxxyxyyyyyxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 2))(l_207.s15)), ((VECTOR(int32_t, 8))(l_208, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(l_209.yxxyyxyxxxxyxyxy)).s155d, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x7872CC1CL, ((VECTOR(int32_t, 2))(l_210.saf)), 0x46F3716BL)).wywywxxy)).lo, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_211.yyyyxyyyyxyyxyxx)), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6DA3EA1DL, 0x22C2B7B8L)).yyxy)).odd, (int32_t)l_212[2]))), 0x7B056A5CL, 0x13B87283L)).hi, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(l_213.ywxzwzwz)).even, ((VECTOR(uint16_t, 4))(l_214.yxyx))))).odd))).xxxyxxyxyyxxxxxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(l_215.s46037665)).s23, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x694E496BL, (-5L))).xxyy)).even))), 1L, 0x036DC7CFL)).yxzwyywwzyxyyzyx))).sd68b))).zzwxxzywzywywwxx, ((VECTOR(int32_t, 16))(l_216.s0461402247542253)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(0x2A7E0E8EL, 0x71E471D8L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-7L), 0x4775CB11L, (-4L), l_217, 0x03092399L, l_218, ((VECTOR(int32_t, 4))(0x1376B580L, 1L, 1L, 0x67839AE7L)).y, l_219, l_220, ((VECTOR(int32_t, 2))(0x06A09E44L)), 0x490BAB00L, ((VECTOR(int32_t, 2))(0x6BE8A383L)), 0L, 0x164395A0L)).lo)), ((VECTOR(int32_t, 4))(9L)), 5L, 0x518940EEL)), ((VECTOR(int32_t, 16))(0x78BB0FE6L))))).odd)).s3162573227360160))).lo, ((VECTOR(int32_t, 8))(1L))))).hi))), 0x154DD281L, 0x182850D0L, 0x6B8FFD3DL)), l_221, 0x500878CAL, ((VECTOR(int32_t, 2))(6L)), 0x6C0AF278L)), ((VECTOR(int32_t, 16))(0x19B4075BL))))).odd)).s5013727173576336))).sd1)).xxxxyxxy, ((VECTOR(int32_t, 8))((-1L)))))).s1726725472753316)).s42)), 8L, (-7L))).zzyyxyww))).s2617030730725601))).s8bd8)), ((VECTOR(int32_t, 2))(0x57E84C0CL)), 0L, ((VECTOR(int32_t, 4))(0L)), l_222, l_223, 0x72904BBDL, 1L, 1L)).sc;
                for (l_208 = (-18); (l_208 != 15); ++l_208)
                { /* block id: 140 */
                    uint16_t l_227[4] = {2UL,2UL,2UL,2UL};
                    uint32_t l_228 = 4294967295UL;
                    uint32_t l_229 = 0xDA93C1EDL;
                    int i;
                    l_207.s4 = (l_201.s6 = 0x70487722L);
                    l_209.x = (l_227[1] , (l_228 , l_229));
                }
                for (l_201.s7 = 0; (l_201.s7 == (-6)); --l_201.s7)
                { /* block id: 147 */
                    int32_t l_233 = 0x7410667FL;
                    int32_t *l_232[4][8] = {{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233}};
                    int32_t *l_234 = (void*)0;
                    uint8_t l_235[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_235[i] = 0xCAL;
                    l_234 = l_232[1][4];
                    l_215.s1 |= (-1L);
                    l_203.sb ^= l_235[0];
                    for (l_235[0] = 28; (l_235[0] > 14); l_235[0]--)
                    { /* block id: 153 */
                        VECTOR(uint32_t, 2) l_238 = (VECTOR(uint32_t, 2))(0x8E2102A0L, 4294967295UL);
                        VECTOR(int8_t, 8) l_239 = (VECTOR(int8_t, 8))(0x4DL, (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, 0x02L), 0x02L), 0x02L, 0x4DL, 0x02L);
                        int32_t l_240 = (-6L);
                        int32_t l_241 = 2L;
                        VECTOR(int64_t, 8) l_242 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L));
                        int32_t l_243 = 0x656806DCL;
                        int32_t l_244 = (-1L);
                        int32_t l_245 = (-1L);
                        int32_t *l_247 = &l_241;
                        int32_t **l_246 = &l_247;
                        int32_t **l_248 = (void*)0;
                        int32_t **l_249 = &l_247;
                        int i;
                        l_249 = (((VECTOR(uint32_t, 8))(l_238.yxxyyyyy)).s1 , ((l_241 = (l_240 = l_239.s4)) , ((l_243 = ((VECTOR(int64_t, 8))(l_242.s16716667)).s1) , (l_248 = ((l_244 , l_245) , l_246)))));
                    }
                }
                l_251 = l_250;
            }
            l_252 &= 1L;
            l_253 = (void*)0;
            unsigned int result = 0;
            int l_186_i0, l_186_i1;
            for (l_186_i0 = 0; l_186_i0 < 5; l_186_i0++) {
                for (l_186_i1 = 0; l_186_i1 < 7; l_186_i1++) {
                    result += l_186[l_186_i0][l_186_i1];
                }
            }
            result += l_252;
            result += l_254;
            atomic_add(&p_1340->l_special_values[53], result);
        }
        else
        { /* block id: 165 */
            (1 + 1);
        }
        (*l_75) |= p_1340->g_comm_values[p_1340->tid];
    }
    else
    { /* block id: 169 */
        VECTOR(int16_t, 16) l_266 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L, (VECTOR(int16_t, 2))((-4L), 1L), (VECTOR(int16_t, 2))((-4L), 1L), (-4L), 1L, (-4L), 1L);
        VECTOR(int32_t, 2) l_272 = (VECTOR(int32_t, 2))(0x1AAD32DDL, 0x583071FFL);
        VECTOR(int32_t, 8) l_273 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x2B42A1A4L), 0x2B42A1A4L), 0x2B42A1A4L, (-7L), 0x2B42A1A4L);
        union U1 l_277 = {-5L};
        union U1 *l_278 = (void*)0;
        int32_t **l_1069 = (void*)0;
        uint32_t *l_1122 = (void*)0;
        uint32_t l_1123 = 0UL;
        VECTOR(int32_t, 8) l_1126 = (VECTOR(int32_t, 8))(0x0AEE6A92L, (VECTOR(int32_t, 4))(0x0AEE6A92L, (VECTOR(int32_t, 2))(0x0AEE6A92L, (-5L)), (-5L)), (-5L), 0x0AEE6A92L, (-5L));
        int64_t l_1132 = (-7L);
        int i;
        p_1340->g_73.s5 = ((p_1340->g_73.s1 , l_255) != (void*)0);
        if ((safe_mod_func_int16_t_s_s(func_258((*l_75), ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_266.sd683)).y, ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_266.s9, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_271.sd10398b69f1ddac6)).s6295, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(0x5E71E7B9L, 0L)).xyyyxyyx, ((VECTOR(int32_t, 2))(l_272.yx)).yyxxyyxy, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(0x1815F893L, ((VECTOR(int32_t, 4))(l_273.s3163)), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(l_274.s99591346)).s16, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_1340->g_275.sbc70d7d336e18aef)).odd)).s41))), 0x3ACFC9BDL)).s67, ((VECTOR(int32_t, 4))(l_276.yxxy)).odd))).yyxyxyxx))).s03, ((VECTOR(int32_t, 2))((-1L), 0x1362AE0AL))))).yxxx))).y)), ((((l_277 = l_277) , func_279((*l_255), l_272.y, &l_277, (*l_75), (&l_277 != ((*l_75) , (void*)0)), p_1340)) == l_255) && 0xF712L))) | p_1340->g_988.s5))) <= l_273.s2), l_1069, &p_1340->g_21, p_72, p_1340), FAKE_DIVERGE(p_1340->local_1_offset, get_local_id(1), 10))))
        { /* block id: 486 */
            uint8_t l_1112 = 0xCAL;
            uint32_t *l_1113 = &p_1340->g_840.f0;
            (*l_75) = ((+l_1112) & ((*l_1113) = l_1112));
        }
        else
        { /* block id: 489 */
            int16_t l_1114 = (-1L);
            return l_1114;
        }
        (*l_75) = (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_1340->g_1115.sb927e457)).odd)), ((VECTOR(uint16_t, 2))(0x32F2L, 0x2B3AL)), 0x9F7EL, 0x3739L)).s1 | (((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 4))(p_1340->g_1119.yyyy)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))((-1L), 0x1D51E1D1L)).xxyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((*p_72), (safe_lshift_func_int8_t_s_u(((*p_72) != (l_1123 = (8UL ^ (*p_72)))), 0)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1340->g_1124.yxxx)).even)), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(l_1125.s1660)), ((VECTOR(int32_t, 8))((-1L), 1L, 0x6B59AC82L, 0x182BAFB9L, 0L, 2L, 0x58357EF8L, 0x55E50788L)).lo))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0x1E977A1BL)).xxyy)), ((VECTOR(int32_t, 4))(l_1126.s2115)))).sb428, ((VECTOR(int32_t, 16))(p_1340->g_1127.yxxwxyyzzxywxyxy)).scb84))), ((VECTOR(int32_t, 2))((-7L), (-1L))), 0x54B6932CL, 0x3A6F9D7CL, 0x6EE2729EL, 0L, (-5L))).s3)), (&p_1340->g_731[2] == (void*)0))) || ((*l_75) && ((safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_1340->local_1_offset, get_local_id(1), 10), (safe_mod_func_uint8_t_u_u((l_1132 & p_1340->g_512.s7), 0x6EL)))) && p_1340->g_673))) || (*l_255)));
    }
    p_1340->g_73.s4 |= (((VECTOR(int16_t, 2))((-9L), 9L)).even != ((FAKE_DIVERGE(p_1340->global_0_offset, get_global_id(0), 10) && (safe_div_func_int64_t_s_s((l_1135[2][4][0] , (*l_255)), (safe_lshift_func_uint16_t_u_s((((safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s(p_1340->g_987.x, ((((safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_1148.s66510025)).even)).z, (safe_rshift_func_uint8_t_u_s(((*l_1162) = (((((*l_75) || (++p_1340->g_311.z)) >= (&p_1340->g_443 != (p_1340->g_1158 = &l_1135[2][4][3]))) != (*l_255)) | (((65535UL && (safe_lshift_func_int8_t_s_u(((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_1340->g_1161.yyyy)))).xyzxywyw)).s3 != 0x2CC9L) && 1L), p_1340->g_21))) ^ 0x1771B9708A9E0320L) < (*l_255)))), p_1340->g_673)))) > FAKE_DIVERGE(p_1340->local_2_offset, get_local_id(2), 10)) <= (*l_255)) , 65527UL), (*l_255))), (*l_255))) > (*p_72)) , (*l_75)) , (*l_75)))), (*p_72))) && 0x4155612EC99D1B36L) ^ (*l_75)), p_1340->g_1163[3][6]))))) != (*l_75)));
    for (p_1340->g_840.f0 = 24; (p_1340->g_840.f0 != 34); p_1340->g_840.f0 = safe_add_func_uint64_t_u_u(p_1340->g_840.f0, 1))
    { /* block id: 501 */
        uint32_t l_1169 = 0x088E838DL;
        int8_t **l_1170[1][3];
        int32_t *l_1172[1];
        uint64_t **l_1175 = (void*)0;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1170[i][j] = &l_1157[2];
        }
        for (i = 0; i < 1; i++)
            l_1172[i] = &p_1340->g_442;
        if (l_1169)
        { /* block id: 502 */
            int8_t ***l_1171 = &l_1156[5];
            (*l_1171) = l_1170[0][1];
        }
        else
        { /* block id: 504 */
            int32_t **l_1173 = &l_1166[5][0][2];
            (*l_1173) = l_1172[0];
        }
        if ((*p_72))
            break;
        (*l_75) |= (l_1174 == l_1175);
    }
    return (*l_255);
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_1036.f1 p_1340->g_1105 p_1340->g_275 p_1340->g_716
 * writes: p_1340->g_1036.f1 p_1340->g_1105
 */
int16_t  func_258(int32_t  p_259, uint8_t  p_260, int32_t ** p_261, int32_t * p_262, int32_t * p_263, struct S2 * p_1340)
{ /* block id: 459 */
    int64_t l_1080 = (-8L);
    int32_t l_1081 = (-1L);
    int32_t l_1082 = 0x031CE650L;
    int32_t l_1083 = 0L;
    int32_t l_1084 = 8L;
    int32_t l_1085[4] = {4L,4L,4L,4L};
    int64_t l_1086 = (-1L);
    int32_t l_1103 = 1L;
    int16_t l_1104 = 2L;
    int32_t *l_1108[4];
    uint32_t l_1109[1];
    int i;
    for (i = 0; i < 4; i++)
        l_1108[i] = &l_1084;
    for (i = 0; i < 1; i++)
        l_1109[i] = 0xD03E68B4L;
    for (p_260 = 0; (p_260 == 23); ++p_260)
    { /* block id: 462 */
        int32_t l_1077 = 0L;
        int32_t l_1078 = 0x14C4AA18L;
        int32_t l_1079[9][3] = {{0x04DEB6F7L,0x04DEB6F7L,0x04DEB6F7L},{0x04DEB6F7L,0x04DEB6F7L,0x04DEB6F7L},{0x04DEB6F7L,0x04DEB6F7L,0x04DEB6F7L},{0x04DEB6F7L,0x04DEB6F7L,0x04DEB6F7L},{0x04DEB6F7L,0x04DEB6F7L,0x04DEB6F7L},{0x04DEB6F7L,0x04DEB6F7L,0x04DEB6F7L},{0x04DEB6F7L,0x04DEB6F7L,0x04DEB6F7L},{0x04DEB6F7L,0x04DEB6F7L,0x04DEB6F7L},{0x04DEB6F7L,0x04DEB6F7L,0x04DEB6F7L}};
        int i, j;
        for (p_1340->g_1036.f1 = 16; (p_1340->g_1036.f1 >= 24); ++p_1340->g_1036.f1)
        { /* block id: 465 */
            int32_t *l_1074 = (void*)0;
            int32_t l_1075 = (-5L);
            int32_t *l_1076[1];
            uint32_t l_1087 = 0xCDB41FB3L;
            int i;
            for (i = 0; i < 1; i++)
                l_1076[i] = &l_1075;
            ++l_1087;
            if ((atomic_inc(&p_1340->l_atomic_input[45]) == 9))
            { /* block id: 468 */
                int32_t l_1091 = 0L;
                int32_t *l_1090 = &l_1091;
                int32_t *l_1092[1];
                int32_t *l_1093 = &l_1091;
                int32_t *l_1094 = (void*)0;
                int8_t l_1095 = (-9L);
                uint32_t l_1096 = 0UL;
                int32_t l_1099 = 0x34CCDC31L;
                int8_t l_1100 = 0x22L;
                int8_t l_1101 = 0L;
                int i;
                for (i = 0; i < 1; i++)
                    l_1092[i] = &l_1091;
                l_1093 = (l_1092[0] = (l_1090 = (void*)0));
                l_1094 = (void*)0;
                l_1096--;
                l_1101 = (l_1100 = (l_1099 = 2L));
                unsigned int result = 0;
                result += l_1091;
                result += l_1095;
                result += l_1096;
                result += l_1099;
                result += l_1100;
                result += l_1101;
                atomic_add(&p_1340->l_special_values[45], result);
            }
            else
            { /* block id: 477 */
                (1 + 1);
            }
            p_1340->g_1105--;
            if (p_1340->g_275.s8)
                continue;
        }
    }
    l_1109[0]--;
    return p_1340->g_716.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_275 p_1340->l_comm_values p_1340->g_65 p_1340->g_303 p_1340->g_73 p_1340->g_311 p_1340->g_28 p_1340->g_346 p_1340->g_362 p_1340->g_363 p_1340->g_344 p_1340->g_384 p_1340->g_380 p_1340->g_396 p_1340->g_392 p_1340->g_399 p_1340->g_12.f0 p_1340->g_442 p_1340->g_443 p_1340->g_43 p_1340->g_395 p_1340->g_504 p_1340->g_21 p_1340->g_508 p_1340->g_512 p_1340->g_557 p_1340->g_583 p_1340->g_598 p_1340->g_12 p_1340->g_670 p_1340->g_446 p_1340->g_697 p_1340->g_716 p_1340->g_673 p_1340->g_731 p_1340->g_620 p_1340->g_747 p_1340->g_789 p_1340->g_802 p_1340->g_851 p_1340->g_892 p_1340->g_893 p_1340->g_903 p_1340->g_927 p_1340->g_932 p_1340->g_769 p_1340->g_825 p_1340->g_987 p_1340->g_988 p_1340->g_982 p_1340->g_840.f2 p_1340->g_771 p_1340->g_1018 p_1340->g_1060 p_1340->g_1061 p_1340->g_1068
 * writes: p_1340->g_73 p_1340->g_344 p_1340->g_346 p_1340->g_311 p_1340->g_303 p_1340->g_380 p_1340->g_392 p_1340->g_395 p_1340->g_399 p_1340->g_442 p_1340->g_443 p_1340->g_446 p_1340->g_396 p_1340->g_583 p_1340->g_620 p_1340->g_673 p_1340->g_512 p_1340->g_670 p_1340->g_731 p_1340->g_747 p_1340->g_825 p_1340->g_829 p_1340->g_697 p_1340->g_883 p_1340->g_840.f0 p_1340->g_927 p_1340->g_363 p_1340->g_598 p_1340->g_982 p_1340->g_840.f2 p_1340->g_771 p_1340->g_851 p_1340->g_557 p_1340->g_1068
 */
int32_t * func_279(uint8_t  p_280, uint64_t  p_281, union U1 * p_282, uint16_t  p_283, int16_t  p_284, struct S2 * p_1340)
{ /* block id: 172 */
    int8_t l_287 = 1L;
    VECTOR(int32_t, 16) l_298 = (VECTOR(int32_t, 16))(0x54E71AAEL, (VECTOR(int32_t, 4))(0x54E71AAEL, (VECTOR(int32_t, 2))(0x54E71AAEL, 0x059C4FCBL), 0x059C4FCBL), 0x059C4FCBL, 0x54E71AAEL, 0x059C4FCBL, (VECTOR(int32_t, 2))(0x54E71AAEL, 0x059C4FCBL), (VECTOR(int32_t, 2))(0x54E71AAEL, 0x059C4FCBL), 0x54E71AAEL, 0x059C4FCBL, 0x54E71AAEL, 0x059C4FCBL);
    VECTOR(int32_t, 16) l_299 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x203C297EL), 0x203C297EL), 0x203C297EL, 1L, 0x203C297EL, (VECTOR(int32_t, 2))(1L, 0x203C297EL), (VECTOR(int32_t, 2))(1L, 0x203C297EL), 1L, 0x203C297EL, 1L, 0x203C297EL);
    int32_t l_1066 = 0x200E3DA6L;
    int32_t *l_1067[2][5][2];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
                l_1067[i][j][k] = &p_1340->g_1068;
        }
    }
    p_1340->g_1068 &= (safe_div_func_uint32_t_u_u(((p_1340->g_275.s5 & l_287) , (safe_mul_func_int8_t_s_s((l_1066 |= (func_290((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_1340->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1340->tid, 20))], (((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_298.s8e)), ((VECTOR(int32_t, 8))(l_299.s06d0921e)).s62))).lo , ((p_1340->g_65.s1 & (func_300(p_282, (p_282 != p_282), p_1340) ^ (((0xAD4D1E66L > p_1340->g_504.s9) , 0x0315D0C8B4060F98L) != p_1340->g_384.sc))) < l_298.s2)))), 65535UL)), p_1340->g_504.sd, p_281, p_1340) <= 0x2A1CL)), p_1340->g_65.s9))), 0x516C7075L));
    return &p_1340->g_442;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_747 p_1340->g_789 p_1340->g_346 p_1340->g_392 p_1340->g_802 p_1340->l_comm_values p_1340->g_28 p_1340->g_670 p_1340->g_598 p_1340->g_673 p_1340->g_363 p_1340->g_12 p_1340->g_697 p_1340->g_731 p_1340->g_851 p_1340->g_311 p_1340->g_43 p_1340->g_442 p_1340->g_65 p_1340->g_892 p_1340->g_893 p_1340->g_903 p_1340->g_927 p_1340->g_932 p_1340->g_21 p_1340->g_769 p_1340->g_443 p_1340->g_344 p_1340->g_380 p_1340->g_504 p_1340->g_716 p_1340->g_825 p_1340->g_987 p_1340->g_988 p_1340->g_384 p_1340->g_73 p_1340->g_982 p_1340->g_840.f2 p_1340->g_771 p_1340->g_1018 p_1340->g_303 p_1340->g_1060 p_1340->g_1061
 * writes: p_1340->g_747 p_1340->g_673 p_1340->g_303 p_1340->g_392 p_1340->g_825 p_1340->g_829 p_1340->g_442 p_1340->g_697 p_1340->g_883 p_1340->g_396 p_1340->g_840.f0 p_1340->g_346 p_1340->g_927 p_1340->g_363 p_1340->g_443 p_1340->g_311 p_1340->g_380 p_1340->g_598 p_1340->g_982 p_1340->g_840.f2 p_1340->g_771 p_1340->g_851 p_1340->g_557
 */
int16_t  func_290(int32_t  p_291, uint16_t  p_292, int32_t  p_293, struct S2 * p_1340)
{ /* block id: 325 */
    int32_t l_765 = (-2L);
    int32_t l_766 = (-8L);
    int32_t l_770[3];
    VECTOR(int32_t, 4) l_782 = (VECTOR(int32_t, 4))(0x6B3565A8L, (VECTOR(int32_t, 2))(0x6B3565A8L, 0x1428C8F2L), 0x1428C8F2L);
    VECTOR(int64_t, 4) l_805 = (VECTOR(int64_t, 4))(0x67AE9D04E7EC3627L, (VECTOR(int64_t, 2))(0x67AE9D04E7EC3627L, 0x5ECF50C8E6CB5771L), 0x5ECF50C8E6CB5771L);
    int64_t *l_826 = &p_1340->g_399;
    VECTOR(uint64_t, 4) l_860 = (VECTOR(uint64_t, 4))(0x9A07C03E57B0DEA0L, (VECTOR(uint64_t, 2))(0x9A07C03E57B0DEA0L, 0x772AD518097ADBB6L), 0x772AD518097ADBB6L);
    VECTOR(uint64_t, 16) l_861 = (VECTOR(uint64_t, 16))(0xB65A2AEA0C05EA0EL, (VECTOR(uint64_t, 4))(0xB65A2AEA0C05EA0EL, (VECTOR(uint64_t, 2))(0xB65A2AEA0C05EA0EL, 0xEF6F4E55E2697EF5L), 0xEF6F4E55E2697EF5L), 0xEF6F4E55E2697EF5L, 0xB65A2AEA0C05EA0EL, 0xEF6F4E55E2697EF5L, (VECTOR(uint64_t, 2))(0xB65A2AEA0C05EA0EL, 0xEF6F4E55E2697EF5L), (VECTOR(uint64_t, 2))(0xB65A2AEA0C05EA0EL, 0xEF6F4E55E2697EF5L), 0xB65A2AEA0C05EA0EL, 0xEF6F4E55E2697EF5L, 0xB65A2AEA0C05EA0EL, 0xEF6F4E55E2697EF5L);
    VECTOR(uint64_t, 16) l_863 = (VECTOR(uint64_t, 16))(7UL, (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 0xA5EE7E27006B41FBL), 0xA5EE7E27006B41FBL), 0xA5EE7E27006B41FBL, 7UL, 0xA5EE7E27006B41FBL, (VECTOR(uint64_t, 2))(7UL, 0xA5EE7E27006B41FBL), (VECTOR(uint64_t, 2))(7UL, 0xA5EE7E27006B41FBL), 7UL, 0xA5EE7E27006B41FBL, 7UL, 0xA5EE7E27006B41FBL);
    VECTOR(int16_t, 2) l_944 = (VECTOR(int16_t, 2))((-1L), 0x2951L);
    int64_t **l_975 = &p_1340->g_829;
    uint32_t ***l_983 = (void*)0;
    VECTOR(int8_t, 2) l_984 = (VECTOR(int8_t, 2))(1L, 1L);
    union U1 *l_996 = (void*)0;
    union U0 *l_1035[5];
    union U0 **l_1034 = &l_1035[0];
    VECTOR(int8_t, 16) l_1055 = (VECTOR(int8_t, 16))(0x23L, (VECTOR(int8_t, 4))(0x23L, (VECTOR(int8_t, 2))(0x23L, 0x26L), 0x26L), 0x26L, 0x23L, 0x26L, (VECTOR(int8_t, 2))(0x23L, 0x26L), (VECTOR(int8_t, 2))(0x23L, 0x26L), 0x23L, 0x26L, 0x23L, 0x26L);
    VECTOR(int32_t, 2) l_1056 = (VECTOR(int32_t, 2))((-1L), (-1L));
    VECTOR(int32_t, 8) l_1059 = (VECTOR(int32_t, 8))(0x3E9141B8L, (VECTOR(int32_t, 4))(0x3E9141B8L, (VECTOR(int32_t, 2))(0x3E9141B8L, 0x7A13CF4EL), 0x7A13CF4EL), 0x7A13CF4EL, 0x3E9141B8L, 0x7A13CF4EL);
    int i;
    for (i = 0; i < 3; i++)
        l_770[i] = (-10L);
    for (i = 0; i < 5; i++)
        l_1035[i] = &p_1340->g_1036;
    if (p_292)
    { /* block id: 326 */
        int32_t *l_767 = (void*)0;
        int32_t *l_768[7][10] = {{&p_1340->g_697,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_697},{&p_1340->g_697,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_697},{&p_1340->g_697,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_697},{&p_1340->g_697,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_697},{&p_1340->g_697,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_697},{&p_1340->g_697,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_697},{&p_1340->g_697,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_673,&p_1340->g_28,&p_1340->g_673,&p_1340->g_697}};
        uint16_t l_773 = 65530UL;
        int i, j;
        l_766 |= l_765;
        ++l_773;
    }
    else
    { /* block id: 329 */
        VECTOR(int16_t, 4) l_790 = (VECTOR(int16_t, 4))(0x4CFEL, (VECTOR(int16_t, 2))(0x4CFEL, 1L), 1L);
        VECTOR(int16_t, 8) l_800 = (VECTOR(int16_t, 8))(0x0432L, (VECTOR(int16_t, 4))(0x0432L, (VECTOR(int16_t, 2))(0x0432L, 0x49FEL), 0x49FEL), 0x49FEL, 0x0432L, 0x49FEL);
        int64_t *l_801 = (void*)0;
        union U0 **l_816[4];
        int32_t l_817[7][8][4] = {{{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L}},{{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L}},{{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L}},{{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L}},{{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L}},{{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L}},{{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L},{0L,0L,6L,0x393DCB92L}}};
        int64_t l_830 = 0x6AED00FCFD2A94B9L;
        union U0 *l_839 = &p_1340->g_840;
        union U0 **l_838 = &l_839;
        uint8_t *l_848[7][8] = {{&p_1340->g_446,&p_1340->g_446,&p_1340->g_446,(void*)0,(void*)0,(void*)0,&p_1340->g_446,&p_1340->g_446},{&p_1340->g_446,&p_1340->g_446,&p_1340->g_446,(void*)0,(void*)0,(void*)0,&p_1340->g_446,&p_1340->g_446},{&p_1340->g_446,&p_1340->g_446,&p_1340->g_446,(void*)0,(void*)0,(void*)0,&p_1340->g_446,&p_1340->g_446},{&p_1340->g_446,&p_1340->g_446,&p_1340->g_446,(void*)0,(void*)0,(void*)0,&p_1340->g_446,&p_1340->g_446},{&p_1340->g_446,&p_1340->g_446,&p_1340->g_446,(void*)0,(void*)0,(void*)0,&p_1340->g_446,&p_1340->g_446},{&p_1340->g_446,&p_1340->g_446,&p_1340->g_446,(void*)0,(void*)0,(void*)0,&p_1340->g_446,&p_1340->g_446},{&p_1340->g_446,&p_1340->g_446,&p_1340->g_446,(void*)0,(void*)0,(void*)0,&p_1340->g_446,&p_1340->g_446}};
        union U1 l_850[5][8][6] = {{{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}}},{{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}}},{{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}}},{{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}}},{{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}},{{0x6B91L},{-7L},{0L},{7L},{0x785FL},{7L}}}};
        VECTOR(uint16_t, 16) l_894 = (VECTOR(uint16_t, 16))(0x81F7L, (VECTOR(uint16_t, 4))(0x81F7L, (VECTOR(uint16_t, 2))(0x81F7L, 0xD7E9L), 0xD7E9L), 0xD7E9L, 0x81F7L, 0xD7E9L, (VECTOR(uint16_t, 2))(0x81F7L, 0xD7E9L), (VECTOR(uint16_t, 2))(0x81F7L, 0xD7E9L), 0x81F7L, 0xD7E9L, 0x81F7L, 0xD7E9L);
        VECTOR(int16_t, 2) l_924 = (VECTOR(int16_t, 2))(0x5A8CL, 0x4224L);
        int32_t l_966 = 0x3236D7FCL;
        VECTOR(int8_t, 16) l_985 = (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0L), 0L), 0L, (-3L), 0L, (VECTOR(int8_t, 2))((-3L), 0L), (VECTOR(int8_t, 2))((-3L), 0L), (-3L), 0L, (-3L), 0L);
        int8_t l_1028 = (-1L);
        VECTOR(int32_t, 4) l_1047 = (VECTOR(int32_t, 4))(0x08AA2E07L, (VECTOR(int32_t, 2))(0x08AA2E07L, 0x05C27042L), 0x05C27042L);
        uint64_t **l_1049 = &p_1340->g_557;
        uint64_t *l_1050 = (void*)0;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_816[i] = (void*)0;
        for (l_765 = 0; (l_765 == (-28)); l_765--)
        { /* block id: 332 */
            uint16_t *l_780 = &p_1340->g_747[0][1][0];
            VECTOR(int32_t, 4) l_781 = (VECTOR(int32_t, 4))(0x15C41A9BL, (VECTOR(int32_t, 2))(0x15C41A9BL, 7L), 7L);
            int32_t *l_785 = &p_1340->g_673;
            VECTOR(int64_t, 16) l_788 = (VECTOR(int64_t, 16))(0x7AED637493176731L, (VECTOR(int64_t, 4))(0x7AED637493176731L, (VECTOR(int64_t, 2))(0x7AED637493176731L, (-1L)), (-1L)), (-1L), 0x7AED637493176731L, (-1L), (VECTOR(int64_t, 2))(0x7AED637493176731L, (-1L)), (VECTOR(int64_t, 2))(0x7AED637493176731L, (-1L)), 0x7AED637493176731L, (-1L), 0x7AED637493176731L, (-1L));
            int8_t *l_791[5][5] = {{(void*)0,&p_1340->g_344,&p_1340->g_771,(void*)0,&p_1340->g_344},{(void*)0,&p_1340->g_344,&p_1340->g_771,(void*)0,&p_1340->g_344},{(void*)0,&p_1340->g_344,&p_1340->g_771,(void*)0,&p_1340->g_344},{(void*)0,&p_1340->g_344,&p_1340->g_771,(void*)0,&p_1340->g_344},{(void*)0,&p_1340->g_344,&p_1340->g_771,(void*)0,&p_1340->g_344}};
            VECTOR(int8_t, 4) l_803 = (VECTOR(int8_t, 4))(0x46L, (VECTOR(int8_t, 2))(0x46L, 6L), 6L);
            int32_t *l_804 = (void*)0;
            int64_t *l_824 = (void*)0;
            int64_t **l_823[8] = {&l_824,&l_824,&l_824,&l_824,&l_824,&l_824,&l_824,&l_824};
            int64_t **l_827 = (void*)0;
            int64_t **l_828[7][5][2] = {{{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0}},{{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0}},{{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0}},{{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0}},{{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0}},{{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0}},{{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0},{&l_801,(void*)0}}};
            union U0 **l_841 = &l_839;
            VECTOR(uint64_t, 16) l_862 = (VECTOR(uint64_t, 16))(0xAA16459CAF588871L, (VECTOR(uint64_t, 4))(0xAA16459CAF588871L, (VECTOR(uint64_t, 2))(0xAA16459CAF588871L, 0xC2E5FA98D0C7819CL), 0xC2E5FA98D0C7819CL), 0xC2E5FA98D0C7819CL, 0xAA16459CAF588871L, 0xC2E5FA98D0C7819CL, (VECTOR(uint64_t, 2))(0xAA16459CAF588871L, 0xC2E5FA98D0C7819CL), (VECTOR(uint64_t, 2))(0xAA16459CAF588871L, 0xC2E5FA98D0C7819CL), 0xAA16459CAF588871L, 0xC2E5FA98D0C7819CL, 0xAA16459CAF588871L, 0xC2E5FA98D0C7819CL);
            VECTOR(uint8_t, 16) l_986 = (VECTOR(uint8_t, 16))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 3UL), 3UL), 3UL, 254UL, 3UL, (VECTOR(uint8_t, 2))(254UL, 3UL), (VECTOR(uint8_t, 2))(254UL, 3UL), 254UL, 3UL, 254UL, 3UL);
            union U1 *l_995 = &l_850[4][7][1];
            uint8_t l_1029[9];
            int16_t **l_1045 = &p_1340->g_982;
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_1029[i] = 0x9AL;
            l_770[1] ^= (((safe_add_func_uint8_t_u_u(((((*l_780) &= FAKE_DIVERGE(p_1340->global_1_offset, get_global_id(1), 10)) , (p_1340->g_392.w ^= (((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(l_781.zzzxzwyxzxyxwwxx)).s85, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(l_782.xwywwzyx)).s14, (int32_t)(safe_mod_func_int32_t_s_s((p_1340->g_303.x = ((*l_785) = p_291)), (safe_add_func_uint16_t_u_u((((VECTOR(int64_t, 4))(0x5EB2F32EC811B8C1L, 0x17CBB2A66B70E3B0L, 1L, 1L)).w < ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(int64_t, 8))(l_788.s4329dc39)).s2443237217224720, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_1340->g_789.yyxyyxxxyxxxxxxx)).s8d)).yyyxxxyxxxyyxxyy))).sf7)).even), ((VECTOR(int16_t, 2))(l_790.zx)).hi))))))).xxxxyyyyxxyxxxxy)).odd))).s76))).hi , (l_782.z = p_1340->g_346)))) & (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((((VECTOR(int16_t, 4))(l_800.s4453)).w == ((void*)0 != l_801)), 3UL)), 4294967294UL)), ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(p_1340->g_802.s168f)).wwzwwxyy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_803.wxyxwzzwywzxwwxy)).s20a5)).yxzwyyxx, ((VECTOR(int8_t, 4))(p_1340->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1340->tid, 20))], 0x79L, (-1L), 0x6CL)).zyywwwwz))).s42, (int8_t)p_1340->g_28))).yyyyxxyyyxyyyxxx, ((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0UL, 0x5AL)), 0xE9L, 0xFEL, p_1340->g_670.z, 0x02L, 0xB7L, 0x78L)), ((VECTOR(uint8_t, 8))(0x14L))))).s1140236167342035))).s8))), p_292)) , p_1340->g_598.s3) , p_291);
            if ((((0xC06DF5ADL <= (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_805.ywzyzzyz)))).s7 >= (l_805.x >= 1L))) && (~(((safe_mod_func_uint8_t_u_u(0UL, (safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((!(((((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((+(l_817[5][2][0] = (l_816[2] != (void*)0))) ^ ((*l_780) = (*l_785))), 1)) & (((safe_unary_minus_func_int16_t_s(((p_1340->g_829 = ((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((p_1340->g_825[2] = &p_1340->g_399) == l_826), 248UL)), 15)) , (void*)0)) == (void*)0))) , (*l_785)) ^ p_1340->g_28)), 3)) < (*l_785)) , p_292) >= l_830) != p_1340->g_598.s3)), 7UL)), p_292)))) , FAKE_DIVERGE(p_1340->group_0_offset, get_group_id(0), 10)) < p_1340->g_363.z))) ^ l_770[0]))
            { /* block id: 343 */
                int64_t l_833 = 1L;
                int16_t *l_849 = &p_1340->g_840.f2;
                VECTOR(int8_t, 8) l_857 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, (-5L)), (-5L)), (-5L), 7L, (-5L));
                VECTOR(int8_t, 16) l_858 = (VECTOR(int8_t, 16))(0x42L, (VECTOR(int8_t, 4))(0x42L, (VECTOR(int8_t, 2))(0x42L, 5L), 5L), 5L, 0x42L, 5L, (VECTOR(int8_t, 2))(0x42L, 5L), (VECTOR(int8_t, 2))(0x42L, 5L), 0x42L, 5L, 0x42L, 5L);
                VECTOR(int8_t, 8) l_859 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x5DL), 0x5DL), 0x5DL, 1L, 0x5DL);
                VECTOR(int8_t, 4) l_873 = (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, (-5L)), (-5L));
                uint32_t *l_884 = &p_1340->g_840.f0;
                int32_t l_899 = 1L;
                int32_t *l_909 = &p_1340->g_769;
                int64_t l_940 = (-1L);
                int64_t *l_964 = &p_1340->g_399;
                int64_t ***l_976 = &l_828[3][1][0];
                int16_t **l_979 = &l_849;
                int16_t *l_981[10][5][5] = {{{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346}},{{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346}},{{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346}},{{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346}},{{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346}},{{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346}},{{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346}},{{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346}},{{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346}},{{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346},{&p_1340->g_346,&p_1340->g_346,(void*)0,(void*)0,&p_1340->g_346}}};
                int16_t **l_980[8];
                int64_t l_1001 = 0x0D98F36F0DFA1753L;
                int32_t l_1002 = 9L;
                int32_t l_1003[3][2] = {{0L,0x28676885L},{0L,0x28676885L},{0L,0x28676885L}};
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_980[i] = &l_981[1][1][2];
                if (((safe_mul_func_uint8_t_u_u(p_291, ((l_817[5][5][1] |= (((*l_785) = l_833) == ((VECTOR(int64_t, 2))(0x05125D174A4E2EF0L, 0x3DA0A4AC4B5C2E0BL)).odd)) & (safe_div_func_uint64_t_u_u((l_770[1] & ((p_1340->g_12 , l_838) != l_841)), l_766))))) , (safe_add_func_int16_t_s_s((l_782.z |= (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(0x57L, ((VECTOR(uint8_t, 2))(0xE9L, 1UL)), 0x97L)).y, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(0x3BL, (safe_sub_func_int32_t_s_s(0L, (((p_291 ^= (((void*)0 != l_848[4][2]) , 0L)) | 0x4897CDB8L) | p_1340->g_697))), ((VECTOR(uint8_t, 4))(0xD8L)), 0UL, 255UL)).s70, ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(252UL))))), ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(0x43L)), 0xA9L, 255UL)))).s6))), p_1340->g_731[1]))))
                { /* block id: 348 */
                    uint32_t *l_868 = (void*)0;
                    uint32_t *l_869 = (void*)0;
                    uint32_t *l_870 = &l_850[0][2][3].f1;
                    int32_t *l_880 = &p_1340->g_442;
                    int32_t *l_881 = &p_1340->g_697;
                    uint32_t **l_882[2];
                    int32_t **l_901 = (void*)0;
                    int32_t **l_902 = &p_1340->g_396;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_882[i] = &l_870;
                    (*l_881) = (l_850[0][2][3] , ((VECTOR(int32_t, 8))(0x69F81C45L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1340->g_851.se0)).yxyxyxyy)).even)).hi)), (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s(((safe_mod_func_uint32_t_u_u(p_1340->g_311.x, (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(l_857.s0134460456422605)).s6d, ((VECTOR(int8_t, 2))(0x2AL, 0x40L))))).xxxyyxyxxyyyyxxy))).s8d, (int8_t)((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(l_858.s4137148f)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_859.s05)).xxyxxxxyyyxxxxyy)).sc2)), ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 4))(4L, (-9L), 0x1EL, 6L)).xwzzxyxywyxxwyww, (int8_t)(0x44883944B71F010BL & ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_860.yw)).yxxx)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_861.scb)).yxxy)))).odd, ((VECTOR(uint64_t, 2))(l_862.s58))))).yyyxxyxyyyxxxyxy)).s5c74)).xzwxwxxy, ((VECTOR(uint64_t, 8))(l_863.s25b6c1ec)), ((VECTOR(uint64_t, 8))((safe_div_func_int32_t_s_s((((*l_785) = (safe_mod_func_uint32_t_u_u(((*l_870) = p_293), (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 2))(l_873.xx)).lo, 0L))))) <= ((*l_880) &= ((safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((((p_1340->g_747[0][1][0] = ((((-1L) & p_1340->g_731[0]) > (p_293 > ((l_766 | p_292) == p_292))) , 0xF845L)) | p_1340->g_392.w) >= 0xC250L), l_765)), p_1340->g_311.w)) & p_1340->g_43))), l_800.s3)), ((VECTOR(uint64_t, 2))(0x8FFA975EF8C7A731L)), 18446744073709551615UL, l_861.sa, GROUP_DIVERGE(2, 1), 0x941883F8DDCCC35FL, 18446744073709551609UL))))).s30)).xyxx))), ((VECTOR(uint64_t, 4))(0UL)))).s7), (int8_t)p_1340->g_802.s7))).s88, ((VECTOR(int8_t, 2))(0x5CL))))).xxxyxyxy)), ((VECTOR(int8_t, 8))(0x20L))))).s2))))), ((VECTOR(int8_t, 2))((-4L)))))).yyyyxyxx)).s4 ^ p_1340->g_670.x))) | p_293))), p_1340->g_65.s8)), (-1L), p_291, 0x501058E1L, (-1L))).s4);
                    (*l_785) = ((p_1340->g_883[2] = l_870) == l_884);
                    if (l_830)
                    { /* block id: 356 */
                        uint16_t l_885 = 0x59E8L;
                        int16_t l_897 = 0x1E65L;
                        int32_t l_898[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_898[i] = 0x79967B92L;
                        ++l_885;
                        (*l_880) = (((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))((safe_rshift_func_uint16_t_u_s(((*l_780) = (p_1340->g_789.x >= 0x3DL)), (l_899 = (p_1340->g_598.sa == ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(p_1340->g_892.s3e)).yyxyxxyy, ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 4))(p_1340->g_893.xzwz)).wyyzwxzxzwzyyywx, ((VECTOR(uint16_t, 16))(l_894.s7954a50a1d457c30)), ((VECTOR(uint16_t, 16))(65527UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(0x57C4L, 65534UL, (((((safe_rshift_func_int16_t_s_u(l_885, 13)) | p_292) & p_292) | (((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0UL, 1UL, 0x64L, 246UL)).yxzxxwyw)))).s3 == ((((~1UL) | p_292) , &p_1340->g_396) == &p_1340->g_396)) ^ p_291) < 0x355BFE6322975019L)) == l_817[5][5][0]), l_863.s5, l_897, ((VECTOR(uint16_t, 8))(0xF014L)), l_885, 65535UL, 0x7366L)).odd, ((VECTOR(uint16_t, 8))(0x265AL))))), 65533UL, ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 2))(0xC00BL)), 0xFE29L, 65528UL, 65526UL)).s489c)), l_898[2], ((VECTOR(uint16_t, 4))(6UL)), ((VECTOR(uint16_t, 4))(0UL)), 0x62E4L, 0UL))))).even))).s1344137737060544)).s8, 65527UL)) >= 0xC2L))))), ((VECTOR(int64_t, 2))((-1L))), 0x4823441E98D8BDEEL)).even, ((VECTOR(int64_t, 2))(0x5BE4BF3BEFF0635CL)), ((VECTOR(int64_t, 2))(0x144F303E6295250EL))))).yyxxxxxx, ((VECTOR(int64_t, 8))(0L))))).s1 < l_860.y);
                    }
                    else
                    { /* block id: 361 */
                        int32_t **l_900 = &l_881;
                        (*l_900) = &p_291;
                    }
                    (*l_902) = &p_291;
                }
                else
                { /* block id: 365 */
                    p_1340->g_303.y = (l_899 ^= ((*l_785) = ((&p_1340->g_829 == &p_1340->g_829) && (0L < ((VECTOR(uint32_t, 2))(p_1340->g_903.xx)).odd))));
                }
                for (p_1340->g_697 = (-1); (p_1340->g_697 == (-4)); --p_1340->g_697)
                { /* block id: 372 */
                    VECTOR(uint32_t, 8) l_914 = (VECTOR(uint32_t, 8))(0x09F3DF5EL, (VECTOR(uint32_t, 4))(0x09F3DF5EL, (VECTOR(uint32_t, 2))(0x09F3DF5EL, 0x248F4D86L), 0x248F4D86L), 0x248F4D86L, 0x09F3DF5EL, 0x248F4D86L);
                    int32_t l_965 = 1L;
                    VECTOR(uint32_t, 4) l_967 = (VECTOR(uint32_t, 4))(0x3F3523DAL, (VECTOR(uint32_t, 2))(0x3F3523DAL, 4294967291UL), 4294967291UL);
                    uint32_t l_972 = 0x3F7D2C11L;
                    int i;
                    for (p_1340->g_840.f0 = 0; (p_1340->g_840.f0 >= 26); ++p_1340->g_840.f0)
                    { /* block id: 375 */
                        int32_t **l_908[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_908[i] = &l_785;
                        l_909 = (p_1340->g_396 = &p_1340->g_21);
                    }
                    for (p_1340->g_346 = (-12); (p_1340->g_346 != 6); ++p_1340->g_346)
                    { /* block id: 381 */
                        int64_t **l_915 = &l_801;
                        int64_t ***l_916 = &l_828[1][1][1];
                        int64_t *l_923 = &p_1340->g_399;
                        VECTOR(int16_t, 16) l_925 = (VECTOR(int16_t, 16))(0x2575L, (VECTOR(int16_t, 4))(0x2575L, (VECTOR(int16_t, 2))(0x2575L, 0x438FL), 0x438FL), 0x438FL, 0x2575L, 0x438FL, (VECTOR(int16_t, 2))(0x2575L, 0x438FL), (VECTOR(int16_t, 2))(0x2575L, 0x438FL), 0x2575L, 0x438FL, 0x2575L, 0x438FL);
                        int16_t *l_926[3];
                        VECTOR(int16_t, 2) l_937 = (VECTOR(int16_t, 2))((-7L), (-8L));
                        VECTOR(uint32_t, 8) l_941 = (VECTOR(uint32_t, 8))(0xAB16B773L, (VECTOR(uint32_t, 4))(0xAB16B773L, (VECTOR(uint32_t, 2))(0xAB16B773L, 0xB5986D09L), 0xB5986D09L), 0xB5986D09L, 0xAB16B773L, 0xB5986D09L);
                        int32_t *l_945 = &l_770[1];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_926[i] = (void*)0;
                        (*l_785) |= 0L;
                        (*l_785) ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((safe_sub_func_uint32_t_u_u(((*l_884) = ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 4))(l_914.s7050)), (uint32_t)(((*l_916) = l_915) != &p_1340->g_829)))).y), (safe_div_func_int32_t_s_s(p_291, (safe_mul_func_uint16_t_u_u((((VECTOR(uint16_t, 2))(65533UL, 65535UL)).even , ((((safe_lshift_func_uint16_t_u_u(0x8C23L, 13)) , &p_1340->g_399) == (p_1340->g_825[2] = l_923)) && (0x3C7843BA2ADABA45L ^ p_291))), ((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(l_924.xxxyxxyyyxxxyyxx)), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_925.s0f9f)).wzyyxwzwzzzwzxyy)).hi)).s2573570043115033, (int16_t)(p_1340->g_927 |= 0x7396L))))))).s90, ((VECTOR(int16_t, 2))(0x3E2BL))))).xyyxxxxyxxxxxxxx))).s9)))))), 0x2D5C3AB0L, 0x7A28416FL, 5L)).odd)).yxyxyyxy)).s1;
                        (*l_945) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x0D90CF9BL, ((VECTOR(int32_t, 2))(1L, 0x779214AAL)), ((((*l_785) &= (p_291 = (((VECTOR(int32_t, 2))((-1L), 0x03E00103L)).lo || ((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(18446744073709551610UL, l_925.s8)), ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(p_1340->g_932.xyyxyyxx)).s62, ((VECTOR(int16_t, 4))(0x5C9DL, 0x4804L, 0x35C7L, 0x3053L)).hi))).even)) | (safe_div_func_uint64_t_u_u(((((safe_mul_func_int16_t_s_s(p_291, ((VECTOR(int16_t, 8))(l_937.yxxyyyxy)).s0)) , (safe_rshift_func_int8_t_s_u(((p_1340->g_363.x ^= (l_940 ^ (l_766 >= (p_1340->g_12 , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_941.s6063)), 0UL, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(3UL, 0x10F0DC3CL)).xxxx)))), (safe_mul_func_int16_t_s_s((-1L), ((*l_780) = ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_944.yx)).xyyyxxxyyxyxyyyy)), ((VECTOR(int16_t, 4))(l_770[1], p_292, 0x37B5L, 1L)).zyxxxzxxxxyzwyzw))).sa0, ((VECTOR(int16_t, 2))(0L))))), 8L, 1L, 0L, 0x23B4L, ((VECTOR(int16_t, 4))((-4L))), (-1L), 0x2D5DL, ((VECTOR(int16_t, 4))((-4L))))).s8 <= 0UL) >= 0xE6E5L)))), ((VECTOR(uint32_t, 2))(4294967295UL)), 4294967295UL)).lo, (uint32_t)p_291))).xzyzxzyzzzwxwwwy)).s45, ((VECTOR(uint32_t, 2))(0x1A148924L))))), ((VECTOR(uint32_t, 2))(4294967295UL))))), 0x032E1560L)).s74)).yyyxxxxy)).s5653011423455754, ((VECTOR(uint32_t, 16))(4294967295UL))))).s7f56))))).z)))) <= l_790.w), 5))) , p_1340->g_65.s2) && l_914.s5), (*l_909))))))) >= p_292) < p_293), 0x4A012744L, 0x7000281EL, 7L, 0x05F36AB9L)).s4672307340100511)).sa;
                    }
                    for (p_1340->g_443 = 0; (p_1340->g_443 <= (-3)); --p_1340->g_443)
                    { /* block id: 396 */
                        uint32_t *l_950[9][5] = {{&p_1340->g_731[1],&p_1340->g_731[4],(void*)0,&p_1340->g_731[1],(void*)0},{&p_1340->g_731[1],&p_1340->g_731[4],(void*)0,&p_1340->g_731[1],(void*)0},{&p_1340->g_731[1],&p_1340->g_731[4],(void*)0,&p_1340->g_731[1],(void*)0},{&p_1340->g_731[1],&p_1340->g_731[4],(void*)0,&p_1340->g_731[1],(void*)0},{&p_1340->g_731[1],&p_1340->g_731[4],(void*)0,&p_1340->g_731[1],(void*)0},{&p_1340->g_731[1],&p_1340->g_731[4],(void*)0,&p_1340->g_731[1],(void*)0},{&p_1340->g_731[1],&p_1340->g_731[4],(void*)0,&p_1340->g_731[1],(void*)0},{&p_1340->g_731[1],&p_1340->g_731[4],(void*)0,&p_1340->g_731[1],(void*)0},{&p_1340->g_731[1],&p_1340->g_731[4],(void*)0,&p_1340->g_731[1],(void*)0}};
                        int64_t l_951 = 0x52FD57E52EFF4367L;
                        uint64_t *l_960 = (void*)0;
                        uint64_t *l_961[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j;
                        (*l_785) = p_291;
                        (*l_785) = ((((safe_mod_func_uint64_t_u_u(((l_951 |= p_292) , ((~(p_1340->g_12 , ((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((p_292 ^ ((GROUP_DIVERGE(0, 1) , (~0x5FL)) == (l_951 < (l_966 &= ((p_293 > ((p_291 = (safe_mul_func_int16_t_s_s(p_1340->g_344, ((l_965 = (((0x0020L != (+((*l_780) = GROUP_DIVERGE(1, 1)))) && (((--p_1340->g_311.w) & (((((((1L > p_293) , &p_1340->g_399) != l_964) > FAKE_DIVERGE(p_1340->local_2_offset, get_local_id(2), 10)) || p_292) >= l_894.s5) , l_924.x)) != 0x86367091L)) || l_817[5][3][3])) , 0x4FA2L)))) ^ (*l_909))) >= p_293))))) == 65535UL), p_1340->g_789.x)), p_293)) , 0x50A9L))) == FAKE_DIVERGE(p_1340->global_2_offset, get_global_id(2), 10))), l_967.w)) , l_951) > p_293) , 0x49186C58L);
                        l_782.z ^= p_293;
                    }
                    for (p_1340->g_380 = 0; (p_1340->g_380 != 8); p_1340->g_380++)
                    { /* block id: 409 */
                        (*l_785) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((p_1340->g_598.s6 = ((VECTOR(int8_t, 4))(0x1FL, ((&p_1340->g_825[2] != ((safe_mod_func_int8_t_s_s((&p_292 != ((l_972 && (-1L)) , &p_1340->g_927)), l_924.x)) , &p_1340->g_825[2])) > 0x7D2666EAF60D8166L), (-1L), 1L)).x) >= (p_1340->g_504.sd ^ p_1340->g_716.y)), 7L, 5L, 0x00BC867CL)))).odd)).odd;
                    }
                }
                l_899 = ((&p_1340->g_829 != ((*l_976) = l_975)) || ((((VECTOR(int32_t, 2))((-1L), 0x62EC59DDL)).even , l_824) != p_1340->g_825[2]));
                if (((((((((*l_979) = (void*)0) == (p_1340->g_982 = &p_1340->g_346)) ^ ((l_983 != (void*)0) || ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(0x7DBAL, 0L)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_984.xyyy)))).yxywzxzyxwyxyzyy)).s63)).yxyyyyyxxyyxxyyy))), ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(1L, 0x76L)).yxyy))).wxxxwzxzxzyyxwxw, ((VECTOR(int8_t, 8))(l_985.sc677ce1d)).s7561141355414000))).hi)))).even, ((VECTOR(uint8_t, 4))(l_986.s7c25))))), ((VECTOR(int16_t, 8))(p_1340->g_987.zxxzwwzz)).lo))).lo, ((VECTOR(int16_t, 4))(p_1340->g_988.s3426)).odd))).xxyyyxyy)).s03))).hi)) ^ ((safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_1340->group_0_offset, get_group_id(0), 10), (safe_mod_func_int64_t_s_s((((l_944.x > ((l_995 = (void*)0) != l_996)) == ((void*)0 != l_964)) , l_894.s4), p_1340->g_363.x)))) < (*l_909))) < p_1340->g_384.se) , p_1340->g_73.s4) >= p_291))
                { /* block id: 419 */
                    return (*p_1340->g_982);
                }
                else
                { /* block id: 421 */
                    int32_t *l_997 = (void*)0;
                    int32_t *l_998 = &l_770[0];
                    int32_t *l_999[1][6][2] = {{{&l_766,&l_817[3][6][2]},{&l_766,&l_817[3][6][2]},{&l_766,&l_817[3][6][2]},{&l_766,&l_817[3][6][2]},{&l_766,&l_817[3][6][2]},{&l_766,&l_817[3][6][2]}}};
                    uint32_t l_1004 = 0x0888A59BL;
                    uint32_t ***l_1016 = &p_1340->g_620;
                    int64_t ***l_1017 = &l_827;
                    int i, j, k;
                    ++l_1004;
                    for (p_1340->g_840.f2 = 0; (p_1340->g_840.f2 != (-22)); p_1340->g_840.f2 = safe_sub_func_int64_t_s_s(p_1340->g_840.f2, 6))
                    { /* block id: 425 */
                        return (*p_1340->g_982);
                    }
                    for (p_1340->g_771 = 0; (p_1340->g_771 < 24); p_1340->g_771 = safe_add_func_uint32_t_u_u(p_1340->g_771, 7))
                    { /* block id: 430 */
                        (*l_785) = (+(safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int8_t_s_u((-9L), 6)))), (((void*)0 == l_1016) & (l_1017 == p_1340->g_1018)))));
                    }
                }
            }
            else
            { /* block id: 434 */
                int32_t *l_1022 = &p_1340->g_442;
                int32_t *l_1023 = &p_1340->g_673;
                int32_t *l_1024 = (void*)0;
                int32_t *l_1025 = &p_1340->g_673;
                int32_t *l_1026[3];
                int8_t l_1027 = 0x5CL;
                union U0 **l_1037 = (void*)0;
                union U1 **l_1042 = &l_996;
                int16_t ***l_1046 = &l_1045;
                uint8_t l_1048 = 0xE7L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1026[i] = &p_1340->g_673;
                l_1029[4]++;
                p_1340->g_851.s9 ^= ((safe_sub_func_int8_t_s_s(0x18L, (l_1034 == l_1037))) < (p_293 || (&p_1340->g_982 != ((*l_1046) = (((safe_add_func_uint8_t_u_u((p_291 == (((*l_1042) = l_995) == &p_1340->g_12)), ((safe_add_func_int64_t_s_s((*l_1025), p_291)) <= p_1340->g_988.s7))) ^ (*l_1025)) , l_1045)))));
                (*l_785) &= (((VECTOR(int32_t, 4))(l_1047.xyxw)).y , l_1048);
            }
            return p_292;
        }
        p_291 = (((*l_1049) = l_801) == (l_1050 = p_1340->g_825[4]));
    }
    for (p_1340->g_673 = 0; (p_1340->g_673 == (-3)); --p_1340->g_673)
    { /* block id: 449 */
        VECTOR(int32_t, 4) l_1057 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
        VECTOR(int32_t, 2) l_1058 = (VECTOR(int32_t, 2))(1L, 0x72A614DAL);
        int32_t *l_1062[4] = {&p_1340->g_697,&p_1340->g_697,&p_1340->g_697,&p_1340->g_697};
        uint8_t l_1063 = 0xA7L;
        int i;
        p_1340->g_303.y &= p_293;
        p_291 &= ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))((safe_lshift_func_int8_t_s_s(p_292, ((VECTOR(int8_t, 2))(l_1055.sfd)).odd)), 1L, 0x60426E77L, (-8L), ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_1056.yyyyxyyx)), ((VECTOR(int32_t, 16))((-5L), ((VECTOR(int32_t, 2))(0x2E4A441EL, (-7L))), ((VECTOR(int32_t, 2))(l_1057.wy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1058.xy)))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1059.s77)).yyxxxxxy)), 0L)).hi))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1340->g_1060.s12)))).yyxyyyyy))), (l_782.x &= 0x269C228AL), 0x104D89E3L, 0x002A406BL, 0x3E771BF1L)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1340->g_1061.yyxy)).even)).yxyyyxxy))).s2;
        l_1063++;
    }
    return p_292;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_303 p_1340->g_73 p_1340->g_311 p_1340->g_28 p_1340->g_346 p_1340->g_275 p_1340->g_362 p_1340->g_363 p_1340->g_344 p_1340->g_384 p_1340->g_380 p_1340->g_65 p_1340->g_396 p_1340->l_comm_values p_1340->g_392 p_1340->g_399 p_1340->g_12.f0 p_1340->g_442 p_1340->g_443 p_1340->g_43 p_1340->g_395 p_1340->g_504 p_1340->g_21 p_1340->g_508 p_1340->g_512 p_1340->g_557 p_1340->g_583 p_1340->g_598 p_1340->g_12 p_1340->g_670 p_1340->g_446 p_1340->g_697 p_1340->g_716 p_1340->g_673 p_1340->g_731 p_1340->g_620 l_277
 * writes: p_1340->g_73 p_1340->g_344 p_1340->g_346 p_1340->g_311 p_1340->g_303 p_1340->g_380 p_1340->g_392 p_1340->g_395 p_1340->g_399 p_1340->g_442 p_1340->g_443 p_1340->g_446 p_1340->g_396 p_1340->g_583 p_1340->g_620 p_1340->g_673 p_1340->g_512 p_1340->g_670 p_1340->g_731 p_1340->g_747 l_277
 */
uint16_t  func_300(union U1 * p_301, uint64_t  p_302, struct S2 * p_1340)
{ /* block id: 173 */
    uint64_t l_310[7];
    int32_t *l_312[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_340 = 0x52A4F7C1L;
    VECTOR(int32_t, 2) l_470 = (VECTOR(int32_t, 2))(1L, (-1L));
    VECTOR(uint32_t, 8) l_472 = (VECTOR(uint32_t, 8))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0x6415E577L), 0x6415E577L), 0x6415E577L, 4294967286UL, 0x6415E577L);
    VECTOR(int8_t, 16) l_507 = (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), (-6L)), (-6L)), (-6L), (-4L), (-6L), (VECTOR(int8_t, 2))((-4L), (-6L)), (VECTOR(int8_t, 2))((-4L), (-6L)), (-4L), (-6L), (-4L), (-6L));
    VECTOR(int8_t, 4) l_511 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x17L), 0x17L);
    VECTOR(int32_t, 8) l_613 = (VECTOR(int32_t, 8))(0x023F8D8FL, (VECTOR(int32_t, 4))(0x023F8D8FL, (VECTOR(int32_t, 2))(0x023F8D8FL, 0x7E79D112L), 0x7E79D112L), 0x7E79D112L, 0x023F8D8FL, 0x7E79D112L);
    VECTOR(uint64_t, 16) l_640 = (VECTOR(uint64_t, 16))(0x3ABC1736A3F5EFAFL, (VECTOR(uint64_t, 4))(0x3ABC1736A3F5EFAFL, (VECTOR(uint64_t, 2))(0x3ABC1736A3F5EFAFL, 0xCED85BF2360A124AL), 0xCED85BF2360A124AL), 0xCED85BF2360A124AL, 0x3ABC1736A3F5EFAFL, 0xCED85BF2360A124AL, (VECTOR(uint64_t, 2))(0x3ABC1736A3F5EFAFL, 0xCED85BF2360A124AL), (VECTOR(uint64_t, 2))(0x3ABC1736A3F5EFAFL, 0xCED85BF2360A124AL), 0x3ABC1736A3F5EFAFL, 0xCED85BF2360A124AL, 0x3ABC1736A3F5EFAFL, 0xCED85BF2360A124AL);
    int16_t *l_660[10][5];
    int16_t **l_659 = &l_660[0][0];
    VECTOR(int32_t, 8) l_732 = (VECTOR(int32_t, 8))(0x62B3A527L, (VECTOR(int32_t, 4))(0x62B3A527L, (VECTOR(int32_t, 2))(0x62B3A527L, 0x00926FF2L), 0x00926FF2L), 0x00926FF2L, 0x62B3A527L, 0x00926FF2L);
    VECTOR(int32_t, 4) l_733 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x29EE514FL), 0x29EE514FL);
    VECTOR(int8_t, 4) l_743 = (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x1BL), 0x1BL);
    union U1 *l_752 = &p_1340->g_12;
    int64_t l_759 = (-1L);
    int64_t l_761 = 0x2938469AE06CFD6AL;
    uint64_t l_762 = 0x476B2AAA9B24906AL;
    int i, j;
    for (i = 0; i < 7; i++)
        l_310[i] = 0xF1C4D4D5F1C41A08L;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
            l_660[i][j] = &p_1340->g_12.f0;
    }
    if ((p_302 , ((VECTOR(int32_t, 8))(p_1340->g_303.yyyyyxxx)).s5))
    { /* block id: 174 */
        int32_t *l_306 = (void*)0;
        int32_t *l_307 = (void*)0;
        int32_t *l_308 = (void*)0;
        int32_t *l_309 = (void*)0;
        int32_t l_313 = 0x309E32A8L;
        int32_t *l_326 = &p_1340->g_28;
        uint64_t l_348 = 18446744073709551612UL;
        union U1 l_444 = {0L};
        int32_t l_449 = (-1L);
        VECTOR(int32_t, 16) l_471 = (VECTOR(int32_t, 16))(0x34A88567L, (VECTOR(int32_t, 4))(0x34A88567L, (VECTOR(int32_t, 2))(0x34A88567L, 6L), 6L), 6L, 0x34A88567L, 6L, (VECTOR(int32_t, 2))(0x34A88567L, 6L), (VECTOR(int32_t, 2))(0x34A88567L, 6L), 0x34A88567L, 6L, 0x34A88567L, 6L);
        VECTOR(int16_t, 2) l_473 = (VECTOR(int16_t, 2))(0x3723L, 0x3B58L);
        uint64_t l_478 = 0UL;
        uint8_t *l_494 = (void*)0;
        VECTOR(int16_t, 2) l_501 = (VECTOR(int16_t, 2))(1L, (-1L));
        VECTOR(int8_t, 16) l_509 = (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x56L), 0x56L), 0x56L, (-10L), 0x56L, (VECTOR(int8_t, 2))((-10L), 0x56L), (VECTOR(int8_t, 2))((-10L), 0x56L), (-10L), 0x56L, (-10L), 0x56L);
        uint64_t l_526[6][10][4] = {{{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L}},{{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L}},{{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L}},{{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L}},{{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L}},{{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L},{0x223CE429A1BE9D14L,8UL,0x611B936DC8B9D256L,0x7327ABF5A88D7592L}}};
        VECTOR(int32_t, 4) l_530 = (VECTOR(int32_t, 4))(0x66C38CE3L, (VECTOR(int32_t, 2))(0x66C38CE3L, 0x380FF10EL), 0x380FF10EL);
        int32_t l_531 = (-7L);
        int32_t l_540 = (-4L);
        uint32_t *l_618[8];
        uint32_t **l_617 = &l_618[7];
        VECTOR(int8_t, 16) l_646 = (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x7DL), 0x7DL), 0x7DL, 7L, 0x7DL, (VECTOR(int8_t, 2))(7L, 0x7DL), (VECTOR(int8_t, 2))(7L, 0x7DL), 7L, 0x7DL, 7L, 0x7DL);
        volatile union U0 *l_718 = &p_1340->g_719;
        uint16_t *l_729 = (void*)0;
        uint16_t *l_730 = (void*)0;
        int32_t l_742 = 0x773F2F64L;
        uint16_t *l_746 = &p_1340->g_747[0][1][0];
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_618[i] = &p_1340->g_380;
        l_310[0] |= (p_1340->g_73.s6 && (safe_rshift_func_int16_t_s_s((-1L), 7)));
        if ((0x5F1A0963L < (((VECTOR(uint64_t, 4))(p_1340->g_311.wzzy)).z == ((l_312[7] != l_306) ^ p_302))))
        { /* block id: 176 */
            uint32_t l_314 = 0x6594629CL;
            int32_t **l_338 = &l_309;
            uint16_t l_339 = 0UL;
            int8_t *l_341 = (void*)0;
            int8_t *l_342 = (void*)0;
            int8_t *l_343[9] = {&p_1340->g_344,&p_1340->g_344,&p_1340->g_344,&p_1340->g_344,&p_1340->g_344,&p_1340->g_344,&p_1340->g_344,&p_1340->g_344,&p_1340->g_344};
            int16_t *l_345 = &p_1340->g_346;
            int64_t *l_347[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t *l_445 = &p_1340->g_446;
            int i;
            --l_314;
            p_1340->g_443 ^= (safe_div_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(((((func_321(((void*)0 == p_301), l_326, ((l_348 |= (((*l_345) &= (((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((p_1340->g_344 = (((((&p_1340->g_12 != (void*)0) , ((safe_unary_minus_func_int64_t_s((((l_339 = ((p_1340->g_73.s7 |= (safe_rshift_func_uint8_t_u_u(p_302, (safe_lshift_func_int16_t_s_s((((p_302 , ((*l_338) = &p_1340->g_43)) == &p_1340->g_28) >= GROUP_DIVERGE(0, 1)), p_1340->g_303.x))))) & p_1340->g_311.x)) , l_312[0]) == &p_1340->g_28))) == l_340)) || 0xE6C4CD3EDCB52D0BL) > p_302) <= p_1340->g_28)), 248UL)), 7)) || p_1340->g_311.y), FAKE_DIVERGE(p_1340->group_1_offset, get_group_id(1), 10))) > (*l_326)) == p_302)) , p_1340->g_275.sc)) ^ p_1340->g_311.x), &l_308, p_1340) >= p_1340->g_384.s8) || (-10L)) , p_302) >= (-2L)), GROUP_DIVERGE(1, 1))) <= 0x509BFC221FF2FBBEL), 1L));
            l_313 &= (((p_302 <= ((l_444 , ((*l_445) = 254UL)) & (safe_add_func_int64_t_s_s((p_1340->g_392.z , (p_302 != (p_1340->g_380 = (l_449 == (~(p_1340->g_303.x <= ((*p_301) , ((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((p_1340->g_311.y < (*p_1340->g_396)) , 0UL), (**l_338))), p_1340->g_363.x)) == p_1340->g_43)))))))), p_302)))) > p_1340->g_65.sd) , p_302);
            p_1340->g_73.s3 = ((8L < 255UL) || (safe_lshift_func_uint8_t_u_s((((*l_445) = (((((**l_338) >= (((void*)0 != &p_1340->g_346) & (safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(p_302, 3)), ((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((&p_1340->g_396 == &l_312[6]), (safe_mod_func_uint8_t_u_u(((((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_470.yxxyyxxy)).s10, ((VECTOR(int32_t, 16))(l_471.s2f96d71c37c3b939)).s37, ((VECTOR(int32_t, 2))(0L, (-3L)))))).xxyxyyxy)).even, ((VECTOR(uint32_t, 8))(l_472.s41503650)).odd))).x , (((VECTOR(int16_t, 4))(l_473.xyyx)).y || (~(safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(7UL, p_302)) >= (**l_338)), p_302))))) , 0x32L), l_478)))), (**l_338))) && p_302))), FAKE_DIVERGE(p_1340->group_1_offset, get_group_id(1), 10))), p_302)))) < p_1340->g_43) , (*p_1340->g_396)) ^ 0x43074138L)) | p_302), 0)));
        }
        else
        { /* block id: 212 */
            uint32_t l_480 = 1UL;
            int64_t *l_523 = &p_1340->g_399;
            int32_t l_528 = 0x0D820CADL;
            int32_t l_529 = 0x740A466BL;
            uint32_t l_537 = 0xFB975A8AL;
            int32_t l_541 = 0x3A65194BL;
            int32_t l_543[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
            VECTOR(int8_t, 2) l_568 = (VECTOR(int8_t, 2))(0x0CL, (-10L));
            union U1 *l_606 = &l_444;
            VECTOR(int16_t, 4) l_635 = (VECTOR(int16_t, 4))(0x096EL, (VECTOR(int16_t, 2))(0x096EL, (-8L)), (-8L));
            VECTOR(int64_t, 16) l_641 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int64_t, 2))(1L, 0L), (VECTOR(int64_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
            VECTOR(int16_t, 4) l_671 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5B5BL), 0x5B5BL);
            uint16_t l_686[6][2];
            int8_t l_703 = 0x02L;
            int32_t *l_712 = &p_1340->g_673;
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 2; j++)
                    l_686[i][j] = 65535UL;
            }
            if ((*p_1340->g_396))
            { /* block id: 213 */
                int32_t l_479 = 0x4F597CF9L;
                p_1340->g_73.s2 ^= ((+0xAFC5L) ^ l_479);
            }
            else
            { /* block id: 215 */
                uint16_t l_481 = 0x4754L;
                VECTOR(int8_t, 16) l_513 = (VECTOR(int8_t, 16))(0x0FL, (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, 0x73L), 0x73L), 0x73L, 0x0FL, 0x73L, (VECTOR(int8_t, 2))(0x0FL, 0x73L), (VECTOR(int8_t, 2))(0x0FL, 0x73L), 0x0FL, 0x73L, 0x0FL, 0x73L);
                int32_t l_525 = 0x71270D2BL;
                VECTOR(int32_t, 16) l_576 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 5L), 5L), 5L, 0L, 5L, (VECTOR(int32_t, 2))(0L, 5L), (VECTOR(int32_t, 2))(0L, 5L), 0L, 5L, 0L, 5L);
                int32_t l_580[5] = {0x50DE279EL,0x50DE279EL,0x50DE279EL,0x50DE279EL,0x50DE279EL};
                union U0 **l_602 = (void*)0;
                uint64_t l_616 = 0x0ED6CC8EA6CF5F9AL;
                int8_t l_621[9] = {0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL};
                uint32_t *l_643 = &l_537;
                uint32_t **l_642 = &l_643;
                int8_t l_663 = 0x56L;
                int8_t *l_664 = (void*)0;
                int64_t l_665 = 0x54AE6DEC31CB75FCL;
                uint16_t *l_672[9] = {(void*)0,&l_481,(void*)0,(void*)0,&l_481,(void*)0,(void*)0,&l_481,(void*)0};
                uint64_t *l_684 = &l_526[3][3][3];
                int64_t *l_685 = &l_665;
                int i;
                if (l_480)
                { /* block id: 216 */
                    return l_481;
                }
                else
                { /* block id: 218 */
                    VECTOR(int64_t, 16) l_495 = (VECTOR(int64_t, 16))(0x4F3E9434CB4629DFL, (VECTOR(int64_t, 4))(0x4F3E9434CB4629DFL, (VECTOR(int64_t, 2))(0x4F3E9434CB4629DFL, (-1L)), (-1L)), (-1L), 0x4F3E9434CB4629DFL, (-1L), (VECTOR(int64_t, 2))(0x4F3E9434CB4629DFL, (-1L)), (VECTOR(int64_t, 2))(0x4F3E9434CB4629DFL, (-1L)), 0x4F3E9434CB4629DFL, (-1L), 0x4F3E9434CB4629DFL, (-1L));
                    uint32_t *l_500[4];
                    uint16_t *l_505[2];
                    int32_t l_506 = 0x21436D8FL;
                    int32_t l_532 = 0x3784A397L;
                    int32_t l_533 = 0x70AAC520L;
                    int32_t l_534 = (-1L);
                    int32_t l_536 = 0x76049942L;
                    int32_t l_544 = 0x68B14CC6L;
                    int32_t l_546[10] = {0x16B7F8CAL,(-6L),(-1L),(-6L),0x16B7F8CAL,0x16B7F8CAL,(-6L),(-1L),(-6L),0x16B7F8CAL};
                    uint16_t l_547 = 0x758CL;
                    VECTOR(int64_t, 16) l_554 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int64_t, 2))(0L, 1L), (VECTOR(int64_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                    int8_t *l_573 = (void*)0;
                    int8_t *l_574 = (void*)0;
                    int8_t *l_575 = &p_1340->g_443;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_500[i] = (void*)0;
                    for (i = 0; i < 2; i++)
                        l_505[i] = &l_481;
                    p_1340->g_73.s7 = (((safe_add_func_uint16_t_u_u((255UL ^ ((~(l_506 = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((safe_mod_func_uint64_t_u_u((l_494 == &p_1340->g_446), p_1340->g_73.s0)) & ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_495.se93191d994fcafac)))).sbe)).lo) <= p_1340->g_12.f0), (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 4))((((**p_1340->g_395) >= (((void*)0 != l_500[0]) == (!((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_501.xxxx)))).hi)).even))) != (safe_lshift_func_uint8_t_u_u((((((VECTOR(uint32_t, 4))(p_1340->g_504.s8c67)).y , &p_1340->g_12) != (void*)0) != 65534UL), 2))), 0x1F74L, 5UL, 0x45E6L)).zzwyyxzyzywwxzxy, ((VECTOR(uint16_t, 16))(0x002AL))))).sd, FAKE_DIVERGE(p_1340->global_1_offset, get_global_id(1), 10))))), p_302)), l_481)), p_302)))) & p_1340->g_504.s1)), l_495.sf)) >= p_1340->g_21) < FAKE_DIVERGE(p_1340->global_2_offset, get_global_id(2), 10));
                    if (l_495.s6)
                    { /* block id: 221 */
                        VECTOR(int8_t, 8) l_510 = (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), (-5L)), (-5L)), (-5L), (-6L), (-5L));
                        uint64_t l_518 = 0x14DEE6584CF1BA88L;
                        int16_t *l_522 = (void*)0;
                        int16_t **l_521 = &l_522;
                        int8_t *l_524 = &p_1340->g_443;
                        int i;
                        p_1340->g_303.x ^= p_302;
                        l_525 = (l_480 <= ((*l_524) = ((VECTOR(int8_t, 16))(0x6CL, ((VECTOR(int8_t, 2))(0x1EL, (-1L))).even, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_507.s7c1d)), 0x5FL, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(p_1340->g_508.s47027312)).s70, ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(l_509.sc0f7f6e0d899bfd2)), ((VECTOR(int8_t, 4))(p_302, 9L, 0x3AL, 0x19L)).xxzyywwxwyxzwzwz, ((VECTOR(int8_t, 16))(l_510.s2314761505665203))))).sce, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_511.xxzyywzyzxyzyzzz)).hi)).s26))), 0x39L)).odd, ((VECTOR(int8_t, 4))(p_1340->g_512.s1000)), ((VECTOR(int8_t, 4))(l_513.s49b3))))), (safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((void*)0 != p_301), l_518)), (safe_lshift_func_int16_t_s_s((((*l_521) = l_505[1]) == &p_1340->g_346), 6)))), 0x20L, p_1340->g_508.s4, ((((void*)0 != l_523) , (void*)0) != p_301), (-1L), p_1340->g_399, 1L, 0x1DL, 0x5CL, 0x27L)).s3));
                        return p_1340->g_363.w;
                    }
                    else
                    { /* block id: 227 */
                        int32_t *l_527 = &l_506;
                        int32_t l_535 = 0L;
                        int16_t l_542 = 7L;
                        int32_t l_545 = 0x5D1299B5L;
                        l_526[0][2][2] &= (*p_1340->g_396);
                        (*p_1340->g_395) = l_527;
                        ++l_537;
                        l_547--;
                    }
                    l_543[0] &= ((safe_div_func_int64_t_s_s(((((-1L) & (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(l_554.sa0d4)).y, (+(safe_add_func_int16_t_s_s(((l_523 == p_1340->g_557) | (p_302 , ((*l_575) = (safe_mul_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(l_529, (safe_mul_func_uint8_t_u_u((((((((VECTOR(uint8_t, 4))(0xE7L, ((VECTOR(uint8_t, 2))(1UL, 246UL)), 0x63L)).w <= (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(l_568.xx)), 0L)).y, 6))) , (((+((safe_add_func_int8_t_s_s(p_302, (((p_302 >= ((safe_add_func_int8_t_s_s(p_1340->g_28, p_1340->g_384.sa)) ^ 1UL)) >= p_1340->g_275.sc) , 1UL))) | 0L)) , p_1340->g_311.x) , 0x3998D2AFL)) & p_1340->g_512.s3) | FAKE_DIVERGE(p_1340->local_0_offset, get_local_id(0), 10)) == p_1340->g_508.s2), 0xC7L)))), FAKE_DIVERGE(p_1340->global_1_offset, get_global_id(1), 10))) , GROUP_DIVERGE(2, 1)) , l_537) && 0x65E3L), l_537))))), l_525)))))) | GROUP_DIVERGE(1, 1)) < (*l_326)), p_1340->g_65.s3)) && 0x1471L);
                    (*p_1340->g_396) = p_302;
                }
                if ((l_525 &= ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(l_576.s2a)).yxyxxxyy, ((VECTOR(int32_t, 2))((-4L), 6L)).yxyxyyyx))).s4))
                { /* block id: 238 */
                    int64_t *l_579[8][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    volatile union U0 **l_585 = &p_1340->g_583;
                    int i, j;
                    l_580[2] = (safe_add_func_uint64_t_u_u(((l_529 ^= 0x245C4678735C8C4AL) <= 0x9247AAB877602A73L), 0x638D9CF1DE8EC7AAL));
                    for (l_313 = (-29); (l_313 <= (-12)); l_313++)
                    { /* block id: 243 */
                        if (p_302)
                            break;
                    }
                    (*l_585) = p_1340->g_583;
                }
                else
                { /* block id: 247 */
                    union U1 l_588 = {0x753FL};
                    uint32_t *l_589 = &l_444.f1;
                    uint32_t *l_590 = &l_444.f1;
                    uint32_t *l_591 = &l_537;
                    int8_t *l_601[4][5][10] = {{{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344}},{{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344}},{{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344}},{{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,&p_1340->g_344,&p_1340->g_443,(void*)0,&p_1340->g_443,&p_1340->g_344,(void*)0,(void*)0,&p_1340->g_344}}};
                    uint64_t *l_603 = &l_478;
                    uint64_t *l_604 = (void*)0;
                    uint64_t l_605 = 18446744073709551615UL;
                    int32_t l_625 = 5L;
                    int32_t l_627 = 0L;
                    int32_t l_630 = 0x4CD65FC1L;
                    VECTOR(int32_t, 16) l_631 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x15EFA64EL), 0x15EFA64EL), 0x15EFA64EL, (-1L), 0x15EFA64EL, (VECTOR(int32_t, 2))((-1L), 0x15EFA64EL), (VECTOR(int32_t, 2))((-1L), 0x15EFA64EL), (-1L), 0x15EFA64EL, (-1L), 0x15EFA64EL);
                    int i, j, k;
                    if (((((VECTOR(int64_t, 8))(0L, (-4L), ((safe_div_func_int8_t_s_s((p_302 == ((p_302 && ((((((*p_301) = l_588) , ((*l_591) |= p_1340->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1340->tid, 20))])) > ((p_1340->g_311.z ^= ((((((0x621470EFDE510E45L <= (((l_523 == l_523) >= p_1340->g_443) , (safe_mod_func_uint64_t_u_u(((*l_603) |= (((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1340->g_598.s86)), 1L, 1L)).z, ((safe_lshift_func_int8_t_s_s((l_525 = (-4L)), 6)) && p_1340->g_363.x))), 8L)) , &p_1340->g_583) == l_602)), p_1340->g_43)))) != l_513.s2) , l_580[3]) , p_1340->g_392.x) >= p_1340->g_362.s8) && p_1340->g_344)) != 8L)) != 0x3571L) > 0x09BA8299L)) , 2L)), p_1340->g_73.s4)) || p_302), l_605, ((VECTOR(int64_t, 2))(0x41EF2FA10AB581EEL)), (-7L), 0x320634555CBF5850L)).s1 , p_1340->g_28) && p_1340->g_21))
                    { /* block id: 253 */
                        int16_t *l_614 = &p_1340->g_346;
                        int32_t l_615 = 0x6E3AA9AAL;
                        l_530.z &= p_302;
                        l_615 &= ((p_302 , (l_606 != (void*)0)) < ((*l_614) = (l_576.sc != (FAKE_DIVERGE(p_1340->local_2_offset, get_local_id(2), 10) && (safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((*l_326), 0x9F1B6AF8L)), 14)), ((*l_590) = ((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 16))(l_613.s7377360555565177)).s66))).lo)))))));
                        return l_605;
                    }
                    else
                    { /* block id: 259 */
                        uint32_t ***l_619[9];
                        int64_t l_622 = 0x3B8079F9A449A4E6L;
                        int32_t l_623 = 4L;
                        int32_t l_624 = 0x6CDD41BFL;
                        int32_t l_626 = (-1L);
                        int32_t l_628 = 0x0C82E969L;
                        VECTOR(int32_t, 4) l_629 = (VECTOR(int32_t, 4))(0x789868EBL, (VECTOR(int32_t, 2))(0x789868EBL, 0x1D1D4AC0L), 0x1D1D4AC0L);
                        uint32_t l_632[1][10] = {{0xA2CAC16CL,0xA2CAC16CL,0xA2CAC16CL,0xA2CAC16CL,0xA2CAC16CL,0xA2CAC16CL,0xA2CAC16CL,0xA2CAC16CL,0xA2CAC16CL,0xA2CAC16CL}};
                        int i, j;
                        for (i = 0; i < 9; i++)
                            l_619[i] = &l_617;
                        l_576.se ^= p_302;
                        l_616 = l_537;
                        p_1340->g_620 = l_617;
                        l_632[0][3]--;
                    }
                }
                p_1340->g_303.y = ((((((VECTOR(int16_t, 16))(l_635.zyzywzwwwzxxwwxz)).s3 >= (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((p_1340->g_392.w = (((VECTOR(uint8_t, 4))((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_640.sce622ff8)))).s1 , ((((((VECTOR(int64_t, 16))(0L, ((VECTOR(int64_t, 2))(l_641.s5d)), (((*l_617) = l_312[7]) != ((*l_642) = &l_480)), 0x55EA05B5CBFD1AD0L, (&l_529 != &p_1340->g_442), (safe_mod_func_int8_t_s_s((p_1340->g_12 , ((VECTOR(int8_t, 16))(0x10L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x74L, 0x28L)), 7L, 0x6CL)), ((VECTOR(int8_t, 4))(l_646.s1d71)), 1L, ((VECTOR(int8_t, 2))(0x7FL, (-7L))).lo, (safe_add_func_uint16_t_u_u((0xE0C5L | (((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((l_659 == (void*)0), (safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), p_1340->g_12.f0)))) >= l_621[8]), 3)), (*l_326))), 12)), p_1340->g_399)) & l_663) != GROUP_DIVERGE(0, 1))), (*l_326))), p_302, (*l_326), 0x75L, 0x59L)).s3), 0x0DL)), ((VECTOR(int64_t, 8))(0x79D4389A43077F96L)), (-1L))).se , 0x1AL) ^ p_302) <= 0UL) & l_543[8])), ((VECTOR(uint8_t, 2))(250UL)), 0UL)).w == p_1340->g_508.s0)), p_1340->g_65.sd)), p_1340->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1340->tid, 20))]))) != 0xA4L) ^ l_665) != FAKE_DIVERGE(p_1340->group_1_offset, get_group_id(1), 10));
                l_529 ^= (safe_lshift_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(p_1340->g_670.wzzzzyzw)), ((VECTOR(int16_t, 2))((-1L), 0x0CF6L)).yxxxyxxy))).s07)).xxxx, ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(((p_302 == p_1340->g_21) && ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(l_671.wz)).yxxy, ((VECTOR(int16_t, 16))(((l_663 & p_1340->g_380) || (((p_1340->g_673 = p_302) , &p_1340->g_583) == ((safe_add_func_uint64_t_u_u((l_580[1] = ((safe_mul_func_int8_t_s_s((p_1340->g_512.s1 = (safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((l_641.s0 >= p_1340->g_362.s0) | ((*l_685) |= (safe_mul_func_uint16_t_u_u(((((((((((*l_684) &= p_1340->g_446) & GROUP_DIVERGE(2, 1)) ^ 0UL) , p_302) | 0xDC45L) , 3UL) != GROUP_DIVERGE(0, 1)) , 18446744073709551614UL) , 0x388EL), p_1340->g_442)))), p_302)), 255UL))), p_302)) || (-1L))), p_302)) , (void*)0))), ((VECTOR(int16_t, 4))(0x7ECDL)), 0x0D7BL, 0x3E2DL, ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 4))(1L)), (*l_326), 0x4A28L, 0x47B4L)).s254b))).y), (-9L), 0x21B1L, 0x6764L, l_686[1][1], 0x0252L, (-9L), 0x1375L)).s12, ((VECTOR(int16_t, 2))(0x1C05L)), ((VECTOR(int16_t, 2))((-4L)))))).yyyy))).w & p_1340->g_384.s3), l_513.se)) , 0L), 8));
            }
            for (l_444.f2 = 0; (l_444.f2 >= 26); ++l_444.f2)
            { /* block id: 279 */
                int8_t *l_702[8][2][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1340->g_344}}};
                int32_t ***l_704 = &p_1340->g_395;
                int32_t *l_715 = (void*)0;
                int i, j, k;
                if ((((*l_704) = ((((safe_add_func_int32_t_s_s(0L, p_302)) , (safe_mod_func_int8_t_s_s(p_302, (safe_mod_func_uint32_t_u_u((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))((p_1340->g_346 < (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x780EL, 0x7EB1L)), 5L, p_1340->g_697, (-9L), ((VECTOR(int16_t, 2))((-4L), (-2L))), (((safe_mul_func_int8_t_s_s((p_1340->g_512.s4 &= (safe_lshift_func_uint8_t_u_u((p_302 || 0x618AL), GROUP_DIVERGE(0, 1)))), 0x54L)) < (p_1340->g_670.x = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((l_703 & p_302), ((VECTOR(int16_t, 4))(0x2ED5L)), ((VECTOR(int16_t, 2))(0L)), 8L)))).s5)) , p_302), 0L, ((VECTOR(int16_t, 4))(0x34DFL)), 1L, 1L, 0x080CL)).sf, 9L))), 1L, 0x2245L, 1L)), ((VECTOR(uint16_t, 4))(1UL))))))).lo)))).hi ^ p_302), 4294967290UL))))) & l_480) , (void*)0)) != &p_1340->g_396))
                { /* block id: 283 */
                    uint16_t *l_707 = &l_686[0][0];
                    int32_t l_708 = 2L;
                    if (p_302)
                        break;
                    l_708 = (safe_rshift_func_uint16_t_u_u(p_1340->g_384.s5, ((*l_707) |= 0x2CEDL)));
                }
                else
                { /* block id: 287 */
                    int32_t **l_713 = &l_312[7];
                    int32_t **l_714 = (void*)0;
                    for (p_1340->g_446 = 8; (p_1340->g_446 < 59); p_1340->g_446++)
                    { /* block id: 290 */
                        int32_t **l_711[9] = {&l_309,&l_309,&l_309,&l_309,&l_309,&l_309,&l_309,&l_309,&l_309};
                        int i;
                        l_712 = &p_1340->g_442;
                        if (p_302)
                            break;
                        (*l_712) ^= p_302;
                    }
                    l_715 = ((*l_713) = &p_1340->g_673);
                    p_1340->g_396 = &l_313;
                    if (((*l_712) = ((VECTOR(int32_t, 16))(p_1340->g_716.wxywzywzwwzywxww)).se))
                    { /* block id: 299 */
                        (*p_1340->g_396) &= ((*l_712) = 4L);
                    }
                    else
                    { /* block id: 302 */
                        int32_t *l_717 = &l_528;
                        (*l_715) &= (*p_1340->g_396);
                        l_717 = l_717;
                        return p_302;
                    }
                }
                return p_302;
            }
            l_718 = p_1340->g_583;
        }
        p_1340->g_303.y &= (safe_unary_minus_func_uint32_t_u(((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(0x4A44L, 0x6D3DL)).yyxy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x4009L, (-10L))))).yxyx))).w, (((*l_326) != (safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((void*)0 != &p_1340->g_395) != (p_1340->g_731[1] &= (!p_1340->g_363.y))), ((((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x720D8C4FL, 0x3B3F1CE3L)), 1L, (-2L))).xwwyzyzw, ((VECTOR(int32_t, 4))(l_732.s5144)).yzwwyyxz, ((VECTOR(int32_t, 4))(l_733.xzzx)).wyzwwwzx))).s4600107613462534, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))((((safe_add_func_int8_t_s_s(p_1340->g_697, (safe_div_func_int32_t_s_s(((0x15L || (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(0x87BBL, (*l_326), 0x7CABL, ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))((safe_mod_func_int16_t_s_s((p_1340->g_12 , 0L), p_302)), 65535UL, 65535UL, FAKE_DIVERGE(p_1340->global_1_offset, get_global_id(1), 10), ((VECTOR(uint16_t, 4))(65533UL)), 1UL, 65535UL, ((VECTOR(uint16_t, 4))(0x62F5L)), 1UL, 0xC6CFL)).s246b, ((VECTOR(uint16_t, 4))(9UL))))), 65533UL)).s1, p_1340->g_311.z))) | 0xF5L), p_302)))) ^ 0xBFA4L) | p_302), ((VECTOR(int32_t, 2))(1L)), 0x5DEAC4D6L)), ((VECTOR(int32_t, 2))(0x43ACA178L)), 0x5B9FEBB7L)))).s6730721645332754))).s9 || p_302) | p_302))), p_1340->g_598.s0)) , (-1L)), l_742))) , p_1340->g_363.x))) || GROUP_DIVERGE(1, 1))));
        l_531 ^= ((0x22L != ((VECTOR(int8_t, 16))(l_743.xxwwxxzzwyxyzzxw)).se) >= (((*l_746) = p_302) | ((*p_301) , ((safe_lshift_func_uint8_t_u_s(((p_302 , (void*)0) != (p_1340->g_620 = p_1340->g_620)), 0)) != p_302))));
    }
    else
    { /* block id: 317 */
        int16_t l_755 = 0L;
        uint64_t *l_756 = (void*)0;
        uint64_t *l_757[5] = {&l_310[0],&l_310[0],&l_310[0],&l_310[0],&l_310[0]};
        int32_t l_758[2][10] = {{0x340B141BL,0x340B141BL,0x3654891AL,(-2L),0x769F49D3L,(-2L),0x3654891AL,0x340B141BL,0x340B141BL,0x3654891AL},{0x340B141BL,0x340B141BL,0x3654891AL,(-2L),0x769F49D3L,(-2L),0x3654891AL,0x340B141BL,0x340B141BL,0x3654891AL}};
        int32_t l_760[7];
        int i, j;
        for (i = 0; i < 7; i++)
            l_760[i] = (-1L);
        l_760[0] = (((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, 3L)), 0x2380L, 0x4F34L)).w | (safe_add_func_int8_t_s_s(((((l_752 != (void*)0) < ((p_302 , p_1340->g_65.s7) ^ (9UL < (l_759 = ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0x6699CD5AB87D2908L, 0x15E5AC37DE611C63L)).yxxxxxxx)), ((VECTOR(uint64_t, 8))((((safe_div_func_int64_t_s_s(l_755, 0x24CC81029BDEA18BL)) <= ((l_758[0][7] = (p_1340->g_311.w ^= ((246UL || ((((~(0xD36FL && p_302)) , (void*)0) != (void*)0) , p_302)) <= p_302))) > p_302)) & p_1340->g_512.s2), GROUP_DIVERGE(0, 1), ((VECTOR(uint64_t, 4))(0x38323E7120841B4FL)), 18446744073709551606UL, 2UL)))).s4)))) , (void*)0) == (*l_659)), 255UL))) , p_1340->g_275.s8) , 0x49E491BFL);
    }
    l_762++;
    return p_1340->g_384.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_362 p_1340->g_363 p_1340->g_28 p_1340->g_303 p_1340->g_344 p_1340->g_384 p_1340->g_380 p_1340->g_65 p_1340->g_396 p_1340->g_275 p_1340->l_comm_values p_1340->g_392 p_1340->g_311 p_1340->g_399 p_1340->g_12.f0 p_1340->g_442 p_1340->g_346
 * writes: p_1340->g_311 p_1340->g_346 p_1340->g_303 p_1340->g_380 p_1340->g_392 p_1340->g_395 p_1340->g_399 p_1340->g_73 p_1340->g_442
 */
uint8_t  func_321(int16_t  p_322, int32_t * p_323, int32_t  p_324, int32_t ** p_325, struct S2 * p_1340)
{ /* block id: 184 */
    uint64_t *l_357 = (void*)0;
    uint64_t *l_358 = (void*)0;
    uint64_t *l_359[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    VECTOR(int64_t, 16) l_360 = (VECTOR(int64_t, 16))(6L, (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0x274DB9A804231030L), 0x274DB9A804231030L), 0x274DB9A804231030L, 6L, 0x274DB9A804231030L, (VECTOR(int64_t, 2))(6L, 0x274DB9A804231030L), (VECTOR(int64_t, 2))(6L, 0x274DB9A804231030L), 6L, 0x274DB9A804231030L, 6L, 0x274DB9A804231030L);
    VECTOR(int64_t, 4) l_361 = (VECTOR(int64_t, 4))(0x290955C7851B6749L, (VECTOR(int64_t, 2))(0x290955C7851B6749L, 0x1CB72F1F299F02CDL), 0x1CB72F1F299F02CDL);
    int32_t *l_367 = &p_1340->g_28;
    int32_t **l_366 = &l_367;
    int16_t *l_368 = &p_1340->g_346;
    int32_t *l_369[1][1];
    VECTOR(uint32_t, 16) l_381 = (VECTOR(uint32_t, 16))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 4294967295UL), 4294967295UL), 4294967295UL, 3UL, 4294967295UL, (VECTOR(uint32_t, 2))(3UL, 4294967295UL), (VECTOR(uint32_t, 2))(3UL, 4294967295UL), 3UL, 4294967295UL, 3UL, 4294967295UL);
    VECTOR(uint16_t, 4) l_388 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xDABDL), 0xDABDL);
    uint16_t l_403 = 0x76FCL;
    VECTOR(int8_t, 8) l_433 = (VECTOR(int8_t, 8))(0x4CL, (VECTOR(int8_t, 4))(0x4CL, (VECTOR(int8_t, 2))(0x4CL, 0L), 0L), 0L, 0x4CL, 0L);
    union U1 l_436 = {0x5810L};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_369[i][j] = (void*)0;
    }
    p_1340->g_303.x &= (((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((0xEF660DCA2FCF8A40L <= (p_1340->g_311.w = (safe_mod_func_int16_t_s_s(1L, (safe_lshift_func_int8_t_s_u((-5L), 7)))))) | (((VECTOR(int64_t, 16))(0L, 0x21D4287C16215CE2L, ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 4))(l_360.s33fb)).hi, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(1L, (-1L))), 0x4B4003E16D2C6600L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_361.wz)).xxxy)), (-1L))))).s67, (int64_t)1L))).xyxy)).odd, ((VECTOR(int64_t, 4))(p_1340->g_362.s3400)).lo))).xyxxyxxyyyxyyxyx)).s99))).xyxx)).yzyzzyyzxzwyyzzx, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_1340->g_363.zzyxxzyzzwyzzwzz)).s0ea2)).yxzyzxzwxxxwyxwz))).lo, (int64_t)(((&p_322 == &p_322) , ((*l_368) = ((safe_div_func_uint16_t_u_u((((void*)0 == l_366) , p_324), 1UL)) || (*l_367)))) == p_324)))).s27, ((VECTOR(int64_t, 2))(0x7C4108909CEBB790L)), ((VECTOR(int64_t, 2))(0x77FB76D55C451876L))))), ((VECTOR(int64_t, 4))(7L)), ((VECTOR(int64_t, 8))(0x0B7262F5AF060D80L)))).s7 , (**l_366))), 3)), (-10L))) || 0xE7L) > (**l_366));
    if (p_1340->g_303.x)
    { /* block id: 188 */
        uint32_t *l_379 = &p_1340->g_380;
        VECTOR(uint32_t, 16) l_382 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 4294967295UL, 0UL, 4294967295UL, 0UL);
        VECTOR(uint32_t, 2) l_383 = (VECTOR(uint32_t, 2))(6UL, 0x5FB69061L);
        int32_t l_385 = 0x68D610EEL;
        VECTOR(int32_t, 8) l_389 = (VECTOR(int32_t, 8))(0x234AC285L, (VECTOR(int32_t, 4))(0x234AC285L, (VECTOR(int32_t, 2))(0x234AC285L, 0x4821BC8BL), 0x4821BC8BL), 0x4821BC8BL, 0x234AC285L, 0x4821BC8BL);
        union U1 l_397 = {0x579FL};
        int64_t *l_398 = &p_1340->g_399;
        int32_t l_400[1];
        int32_t l_401 = 0x59FD05EFL;
        int16_t l_402 = 7L;
        int i;
        for (i = 0; i < 1; i++)
            l_400[i] = 7L;
        l_401 ^= (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(18446744073709551612UL, 18446744073709551615UL)).yyyxxyxx)).s5635740154230507)).se | ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((((VECTOR(uint64_t, 2))(0UL, 0x21A4C3B13D2834BCL)).even && ((+(safe_mul_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s(((((*l_398) = (safe_mul_func_int16_t_s_s(p_1340->g_344, (safe_lshift_func_int16_t_s_u(((safe_unary_minus_func_int8_t_s(((((((*l_379) = (l_357 != (void*)0)) , (p_1340->g_392.y = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((l_385 ^= (!(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(1UL, ((VECTOR(uint32_t, 2))(l_381.s69)), 0x5AC8FC47L, ((VECTOR(uint32_t, 2))(l_382.sd1)), ((VECTOR(uint32_t, 8))(l_383.xyxyxxyy)), 0x44EE7446L, 3UL)).s45)).lo > ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1340->g_384.sf09e297173f234a8)).s7f)).xyxxxyxyyyxyxxxy)).s0c)).hi))), 0x01070EEEL, (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(l_388.yywyyyywyzwwyzzy)).s5, l_385)), 0x0DDC40F8L, (l_368 == l_368), ((VECTOR(int32_t, 2))(l_389.s24)), 0x5A1B7B4AL)))).s1 > ((*l_379)++)))) > (((safe_mul_func_uint8_t_u_u(p_1340->g_65.sc, ((p_1340->g_395 = &l_369[0][0]) == &p_323))) == (*p_1340->g_396)) & 0x3AC4674FF210E48DL)) , l_397) , p_1340->g_65.s9))) == p_1340->g_275.s8), 0))))) , (-1L)) || p_1340->g_362.s4), p_1340->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1340->tid, 20))])) | 0x69B5L) != 0x1B08C779D365FE56L), (-8L)))) , 4L)), 0x2AE4F3D36BC6A5ADL, 0x2D20F2C570172765L, 0x0F154A152035F4EBL, ((VECTOR(int64_t, 2))((-7L))), l_400[0], l_383.x, 0x21CB7CBD9BAEF49DL, p_1340->g_392.y, ((VECTOR(int64_t, 2))(0x6AFFF2BE411DA37EL)), 0x3F337585A87557A6L, 0x7B4BF605BB5954C9L, 0L, 0x65CB2B3D6560D9BFL)).se8)), 3L, 0x00F6E0E1A0F9E053L, p_1340->g_311.x, (-8L), 0x43E15AEE19023738L, ((VECTOR(int64_t, 4))(0x15F1B1279FF9012FL)), ((VECTOR(int64_t, 2))(0x7D42F1118F1065A1L)), 0x4C7D3ECF2B62E5C4L, 0x7588576CC298B29EL, 0x7D655FF68BFCF804L)).s60)).hi);
        l_403--;
    }
    else
    { /* block id: 197 */
        int64_t *l_406 = (void*)0;
        int32_t l_407 = 0x537C4BC9L;
        int32_t l_408 = 0x1F88BDE1L;
        int32_t l_409 = 0x7BAA4158L;
        int32_t l_410 = 0x13B84E7EL;
        int32_t l_411 = 0x3424B032L;
        int32_t l_412 = 0x33F0FBA2L;
        uint16_t l_413[9][9][3] = {{{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL}},{{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL}},{{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL}},{{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL}},{{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL}},{{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL}},{{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL}},{{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL}},{{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL},{0xDCECL,65534UL,2UL}}};
        uint32_t l_416[8][3][5] = {{{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL}},{{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL}},{{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL}},{{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL}},{{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL}},{{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL}},{{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL}},{{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL},{0UL,0xDAC414A6L,0UL,0x066A9AB6L,0x9CDA7E6FL}}};
        int i, j, k;
        p_1340->g_303.y = (l_406 != (void*)0);
        --l_413[7][4][2];
        return l_416[5][2][4];
    }
    p_1340->g_442 ^= (p_1340->g_303.y = (p_324 , (!((p_1340->g_73.s3 = ((&p_1340->g_380 != &p_1340->g_380) > (((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((*l_367), 7)), 4L)), ((safe_div_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u(((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((safe_div_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(p_1340->g_399, 7)) & (safe_mod_func_int64_t_s_s((p_324 , (((VECTOR(int8_t, 16))(l_433.s6775325107540476)).se ^ ((((VECTOR(uint16_t, 4))(0xE91AL, 0x1D5AL, 0x17B8L, 0x851EL)).y || (safe_mul_func_int8_t_s_s((((l_436 , ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s(p_1340->g_392.x)), p_324)), 6)) == p_322)) > 0x1A3BB57DC77BE75BL) >= (*l_367)), p_322))) , p_1340->g_12.f0))), (*l_367)))) < 18446744073709551608UL), p_324)), 1L, 0x4353L, 0x0F94L)))).x != 0x590BL) | 1UL), (*l_367))) != (*p_1340->g_396)) >= 1UL), p_322)) != 0UL))) , p_1340->g_392.w) , p_324))) & p_324))));
    return p_1340->g_346;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[89];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 89; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[89];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 89; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_comm_values[i] = 1;
    struct S2 c_1341;
    struct S2* p_1340 = &c_1341;
    struct S2 c_1342 = {
        {0x09F4L}, // p_1340->g_12
        0x54BCA925L, // p_1340->g_21
        &p_1340->g_21, // p_1340->g_20
        &p_1340->g_21, // p_1340->g_22
        (void*)0, // p_1340->g_26
        1L, // p_1340->g_28
        &p_1340->g_28, // p_1340->g_27
        0x00C48983L, // p_1340->g_43
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xAB38427463D6F3B0L), 0xAB38427463D6F3B0L), 0xAB38427463D6F3B0L, 0UL, 0xAB38427463D6F3B0L, (VECTOR(uint64_t, 2))(0UL, 0xAB38427463D6F3B0L), (VECTOR(uint64_t, 2))(0UL, 0xAB38427463D6F3B0L), 0UL, 0xAB38427463D6F3B0L, 0UL, 0xAB38427463D6F3B0L), // p_1340->g_65
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x74066B75L), 0x74066B75L), 0x74066B75L, 1L, 0x74066B75L), // p_1340->g_73
        (VECTOR(uint16_t, 16))(0xC606L, (VECTOR(uint16_t, 4))(0xC606L, (VECTOR(uint16_t, 2))(0xC606L, 2UL), 2UL), 2UL, 0xC606L, 2UL, (VECTOR(uint16_t, 2))(0xC606L, 2UL), (VECTOR(uint16_t, 2))(0xC606L, 2UL), 0xC606L, 2UL, 0xC606L, 2UL), // p_1340->g_275
        (VECTOR(int32_t, 2))(0x0912D41CL, 0x5F705FE7L), // p_1340->g_303
        (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 18446744073709551615UL), 18446744073709551615UL), // p_1340->g_311
        (-9L), // p_1340->g_344
        0x7486L, // p_1340->g_346
        (VECTOR(int64_t, 16))(0x28FD14A21350F02EL, (VECTOR(int64_t, 4))(0x28FD14A21350F02EL, (VECTOR(int64_t, 2))(0x28FD14A21350F02EL, 2L), 2L), 2L, 0x28FD14A21350F02EL, 2L, (VECTOR(int64_t, 2))(0x28FD14A21350F02EL, 2L), (VECTOR(int64_t, 2))(0x28FD14A21350F02EL, 2L), 0x28FD14A21350F02EL, 2L, 0x28FD14A21350F02EL, 2L), // p_1340->g_362
        (VECTOR(int64_t, 4))(0x3C6267CA65C1BD8EL, (VECTOR(int64_t, 2))(0x3C6267CA65C1BD8EL, (-7L)), (-7L)), // p_1340->g_363
        0UL, // p_1340->g_380
        (VECTOR(uint32_t, 16))(0xDB3B7523L, (VECTOR(uint32_t, 4))(0xDB3B7523L, (VECTOR(uint32_t, 2))(0xDB3B7523L, 0x297713E8L), 0x297713E8L), 0x297713E8L, 0xDB3B7523L, 0x297713E8L, (VECTOR(uint32_t, 2))(0xDB3B7523L, 0x297713E8L), (VECTOR(uint32_t, 2))(0xDB3B7523L, 0x297713E8L), 0xDB3B7523L, 0x297713E8L, 0xDB3B7523L, 0x297713E8L), // p_1340->g_384
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x31L), 0x31L), // p_1340->g_392
        &p_1340->g_28, // p_1340->g_396
        &p_1340->g_396, // p_1340->g_395
        0x7064778DA17335D8L, // p_1340->g_399
        0L, // p_1340->g_442
        0L, // p_1340->g_443
        0x71L, // p_1340->g_446
        (VECTOR(uint32_t, 16))(0x9AAB05F8L, (VECTOR(uint32_t, 4))(0x9AAB05F8L, (VECTOR(uint32_t, 2))(0x9AAB05F8L, 4294967287UL), 4294967287UL), 4294967287UL, 0x9AAB05F8L, 4294967287UL, (VECTOR(uint32_t, 2))(0x9AAB05F8L, 4294967287UL), (VECTOR(uint32_t, 2))(0x9AAB05F8L, 4294967287UL), 0x9AAB05F8L, 4294967287UL, 0x9AAB05F8L, 4294967287UL), // p_1340->g_504
        (VECTOR(int8_t, 8))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, (-5L)), (-5L)), (-5L), 0x64L, (-5L)), // p_1340->g_508
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L), // p_1340->g_512
        (void*)0, // p_1340->g_557
        {6UL}, // p_1340->g_584
        &p_1340->g_584, // p_1340->g_583
        (VECTOR(int8_t, 16))(0x21L, (VECTOR(int8_t, 4))(0x21L, (VECTOR(int8_t, 2))(0x21L, (-5L)), (-5L)), (-5L), 0x21L, (-5L), (VECTOR(int8_t, 2))(0x21L, (-5L)), (VECTOR(int8_t, 2))(0x21L, (-5L)), 0x21L, (-5L), 0x21L, (-5L)), // p_1340->g_598
        (void*)0, // p_1340->g_620
        (VECTOR(int16_t, 4))(0x798EL, (VECTOR(int16_t, 2))(0x798EL, 0L), 0L), // p_1340->g_670
        8L, // p_1340->g_673
        0x794E9AEAL, // p_1340->g_697
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x045E927BL), 0x045E927BL), // p_1340->g_716
        {4294967295UL}, // p_1340->g_719
        {0x4F81EA55L,0x4F81EA55L,0x4F81EA55L,0x4F81EA55L,0x4F81EA55L}, // p_1340->g_731
        {{{0xF891L,0x6827L,0x6827L,0xF891L,0xF891L,0x6827L,0x6827L,0xF891L},{0xF891L,0x6827L,0x6827L,0xF891L,0xF891L,0x6827L,0x6827L,0xF891L}}}, // p_1340->g_747
        0L, // p_1340->g_769
        (-10L), // p_1340->g_771
        0x66DDD5D3L, // p_1340->g_772
        (VECTOR(int64_t, 2))(0x2CD2AF3D48622934L, 0x40CEFF14884B4250L), // p_1340->g_789
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int8_t, 2))((-1L), 1L), (VECTOR(int8_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_1340->g_802
        {&p_1340->g_399,&p_1340->g_399,&p_1340->g_399,&p_1340->g_399,&p_1340->g_399,&p_1340->g_399,&p_1340->g_399,&p_1340->g_399}, // p_1340->g_825
        (void*)0, // p_1340->g_829
        {4294967295UL}, // p_1340->g_840
        (VECTOR(int32_t, 16))(0x29ABAAFEL, (VECTOR(int32_t, 4))(0x29ABAAFEL, (VECTOR(int32_t, 2))(0x29ABAAFEL, 0x6E3639ACL), 0x6E3639ACL), 0x6E3639ACL, 0x29ABAAFEL, 0x6E3639ACL, (VECTOR(int32_t, 2))(0x29ABAAFEL, 0x6E3639ACL), (VECTOR(int32_t, 2))(0x29ABAAFEL, 0x6E3639ACL), 0x29ABAAFEL, 0x6E3639ACL, 0x29ABAAFEL, 0x6E3639ACL), // p_1340->g_851
        {&p_1340->g_380,&p_1340->g_380,&p_1340->g_380,&p_1340->g_380,&p_1340->g_380,&p_1340->g_380,&p_1340->g_380}, // p_1340->g_883
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint16_t, 2))(0UL, 1UL), (VECTOR(uint16_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_1340->g_892
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 5UL), 5UL), // p_1340->g_893
        (VECTOR(uint32_t, 2))(0UL, 0x1E877035L), // p_1340->g_903
        4UL, // p_1340->g_927
        (VECTOR(int16_t, 2))(0x7995L, (-1L)), // p_1340->g_932
        &p_1340->g_840.f2, // p_1340->g_982
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), // p_1340->g_987
        (VECTOR(int16_t, 8))(0x3629L, (VECTOR(int16_t, 4))(0x3629L, (VECTOR(int16_t, 2))(0x3629L, 0L), 0L), 0L, 0x3629L, 0L), // p_1340->g_988
        (VECTOR(int64_t, 2))(0L, 0x0F179B427961CC29L), // p_1340->g_1000
        1L, // p_1340->g_1021
        &p_1340->g_1021, // p_1340->g_1020
        &p_1340->g_1020, // p_1340->g_1019
        &p_1340->g_1019, // p_1340->g_1018
        {4294967287UL}, // p_1340->g_1036
        (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, (-1L)), (-1L)), (-1L), 4L, (-1L), (VECTOR(int32_t, 2))(4L, (-1L)), (VECTOR(int32_t, 2))(4L, (-1L)), 4L, (-1L), 4L, (-1L)), // p_1340->g_1060
        (VECTOR(int32_t, 2))(0x733437DFL, 1L), // p_1340->g_1061
        0x7B394D8EL, // p_1340->g_1068
        0L, // p_1340->g_1102
        0xA234L, // p_1340->g_1105
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), (VECTOR(uint16_t, 2))(65535UL, 0UL), 65535UL, 0UL, 65535UL, 0UL), // p_1340->g_1115
        (VECTOR(int32_t, 2))(0x1290C4AAL, 0x29B3FB94L), // p_1340->g_1119
        (VECTOR(int32_t, 2))(0x4A9A2216L, (-2L)), // p_1340->g_1124
        (VECTOR(int32_t, 4))(0x0828E4C4L, (VECTOR(int32_t, 2))(0x0828E4C4L, (-7L)), (-7L)), // p_1340->g_1127
        &p_1340->g_443, // p_1340->g_1158
        (VECTOR(int16_t, 2))((-1L), 0x0247L), // p_1340->g_1161
        {{5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L},{5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L},{5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L},{5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L},{5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L},{5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L},{5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L},{5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L},{5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L,5L,0x65447CD6F2FBB0B4L,5L}}, // p_1340->g_1163
        0x447B09DE3B97F3BAL, // p_1340->g_1194
        (VECTOR(int32_t, 8))(0x5F3F9523L, (VECTOR(int32_t, 4))(0x5F3F9523L, (VECTOR(int32_t, 2))(0x5F3F9523L, 9L), 9L), 9L, 0x5F3F9523L, 9L), // p_1340->g_1238
        {0xA715B17AL}, // p_1340->g_1243
        (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0x7FA0AC84L), 0x7FA0AC84L), // p_1340->g_1246
        (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 8UL), 8UL), 8UL, 4294967290UL, 8UL, (VECTOR(uint32_t, 2))(4294967290UL, 8UL), (VECTOR(uint32_t, 2))(4294967290UL, 8UL), 4294967290UL, 8UL, 4294967290UL, 8UL), // p_1340->g_1250
        (void*)0, // p_1340->g_1254
        {{&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,(void*)0,&p_1340->g_1254,&p_1340->g_1254,(void*)0},{&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,(void*)0,&p_1340->g_1254,&p_1340->g_1254,(void*)0},{&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,(void*)0,&p_1340->g_1254,&p_1340->g_1254,(void*)0},{&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,(void*)0,&p_1340->g_1254,&p_1340->g_1254,(void*)0},{&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,(void*)0,&p_1340->g_1254,&p_1340->g_1254,(void*)0},{&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,(void*)0,&p_1340->g_1254,&p_1340->g_1254,(void*)0},{&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,&p_1340->g_1254,(void*)0,&p_1340->g_1254,&p_1340->g_1254,(void*)0}}, // p_1340->g_1253
        (VECTOR(int16_t, 2))((-1L), 6L), // p_1340->g_1267
        {9L}, // p_1340->g_1281
        &p_1340->g_1281, // p_1340->g_1280
        (VECTOR(int32_t, 4))(0x7C730969L, (VECTOR(int32_t, 2))(0x7C730969L, 0x6070F03FL), 0x6070F03FL), // p_1340->g_1310
        (VECTOR(int16_t, 16))(0x3CFDL, (VECTOR(int16_t, 4))(0x3CFDL, (VECTOR(int16_t, 2))(0x3CFDL, 0x40C7L), 0x40C7L), 0x40C7L, 0x3CFDL, 0x40C7L, (VECTOR(int16_t, 2))(0x3CFDL, 0x40C7L), (VECTOR(int16_t, 2))(0x3CFDL, 0x40C7L), 0x3CFDL, 0x40C7L, 0x3CFDL, 0x40C7L), // p_1340->g_1320
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-6L)), (-6L)), (-6L), 1L, (-6L)), // p_1340->g_1321
        (VECTOR(int64_t, 2))(0x42F5DCD34CE5CCCCL, 0x10A6CBD90012BB4EL), // p_1340->g_1328
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 7L), 7L), 7L, 0L, 7L), // p_1340->g_1329
        (VECTOR(uint16_t, 16))(0xC59BL, (VECTOR(uint16_t, 4))(0xC59BL, (VECTOR(uint16_t, 2))(0xC59BL, 0xDADCL), 0xDADCL), 0xDADCL, 0xC59BL, 0xDADCL, (VECTOR(uint16_t, 2))(0xC59BL, 0xDADCL), (VECTOR(uint16_t, 2))(0xC59BL, 0xDADCL), 0xC59BL, 0xDADCL, 0xC59BL, 0xDADCL), // p_1340->g_1331
        0, // p_1340->v_collective
        sequence_input[get_global_id(0)], // p_1340->global_0_offset
        sequence_input[get_global_id(1)], // p_1340->global_1_offset
        sequence_input[get_global_id(2)], // p_1340->global_2_offset
        sequence_input[get_local_id(0)], // p_1340->local_0_offset
        sequence_input[get_local_id(1)], // p_1340->local_1_offset
        sequence_input[get_local_id(2)], // p_1340->local_2_offset
        sequence_input[get_group_id(0)], // p_1340->group_0_offset
        sequence_input[get_group_id(1)], // p_1340->group_1_offset
        sequence_input[get_group_id(2)], // p_1340->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 20)), permutations[0][get_linear_local_id()])), // p_1340->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1341 = c_1342;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1340);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1340->g_12.f0, "p_1340->g_12.f0", print_hash_value);
    transparent_crc(p_1340->g_21, "p_1340->g_21", print_hash_value);
    transparent_crc(p_1340->g_28, "p_1340->g_28", print_hash_value);
    transparent_crc(p_1340->g_43, "p_1340->g_43", print_hash_value);
    transparent_crc(p_1340->g_65.s0, "p_1340->g_65.s0", print_hash_value);
    transparent_crc(p_1340->g_65.s1, "p_1340->g_65.s1", print_hash_value);
    transparent_crc(p_1340->g_65.s2, "p_1340->g_65.s2", print_hash_value);
    transparent_crc(p_1340->g_65.s3, "p_1340->g_65.s3", print_hash_value);
    transparent_crc(p_1340->g_65.s4, "p_1340->g_65.s4", print_hash_value);
    transparent_crc(p_1340->g_65.s5, "p_1340->g_65.s5", print_hash_value);
    transparent_crc(p_1340->g_65.s6, "p_1340->g_65.s6", print_hash_value);
    transparent_crc(p_1340->g_65.s7, "p_1340->g_65.s7", print_hash_value);
    transparent_crc(p_1340->g_65.s8, "p_1340->g_65.s8", print_hash_value);
    transparent_crc(p_1340->g_65.s9, "p_1340->g_65.s9", print_hash_value);
    transparent_crc(p_1340->g_65.sa, "p_1340->g_65.sa", print_hash_value);
    transparent_crc(p_1340->g_65.sb, "p_1340->g_65.sb", print_hash_value);
    transparent_crc(p_1340->g_65.sc, "p_1340->g_65.sc", print_hash_value);
    transparent_crc(p_1340->g_65.sd, "p_1340->g_65.sd", print_hash_value);
    transparent_crc(p_1340->g_65.se, "p_1340->g_65.se", print_hash_value);
    transparent_crc(p_1340->g_65.sf, "p_1340->g_65.sf", print_hash_value);
    transparent_crc(p_1340->g_73.s0, "p_1340->g_73.s0", print_hash_value);
    transparent_crc(p_1340->g_73.s1, "p_1340->g_73.s1", print_hash_value);
    transparent_crc(p_1340->g_73.s2, "p_1340->g_73.s2", print_hash_value);
    transparent_crc(p_1340->g_73.s3, "p_1340->g_73.s3", print_hash_value);
    transparent_crc(p_1340->g_73.s4, "p_1340->g_73.s4", print_hash_value);
    transparent_crc(p_1340->g_73.s5, "p_1340->g_73.s5", print_hash_value);
    transparent_crc(p_1340->g_73.s6, "p_1340->g_73.s6", print_hash_value);
    transparent_crc(p_1340->g_73.s7, "p_1340->g_73.s7", print_hash_value);
    transparent_crc(p_1340->g_275.s0, "p_1340->g_275.s0", print_hash_value);
    transparent_crc(p_1340->g_275.s1, "p_1340->g_275.s1", print_hash_value);
    transparent_crc(p_1340->g_275.s2, "p_1340->g_275.s2", print_hash_value);
    transparent_crc(p_1340->g_275.s3, "p_1340->g_275.s3", print_hash_value);
    transparent_crc(p_1340->g_275.s4, "p_1340->g_275.s4", print_hash_value);
    transparent_crc(p_1340->g_275.s5, "p_1340->g_275.s5", print_hash_value);
    transparent_crc(p_1340->g_275.s6, "p_1340->g_275.s6", print_hash_value);
    transparent_crc(p_1340->g_275.s7, "p_1340->g_275.s7", print_hash_value);
    transparent_crc(p_1340->g_275.s8, "p_1340->g_275.s8", print_hash_value);
    transparent_crc(p_1340->g_275.s9, "p_1340->g_275.s9", print_hash_value);
    transparent_crc(p_1340->g_275.sa, "p_1340->g_275.sa", print_hash_value);
    transparent_crc(p_1340->g_275.sb, "p_1340->g_275.sb", print_hash_value);
    transparent_crc(p_1340->g_275.sc, "p_1340->g_275.sc", print_hash_value);
    transparent_crc(p_1340->g_275.sd, "p_1340->g_275.sd", print_hash_value);
    transparent_crc(p_1340->g_275.se, "p_1340->g_275.se", print_hash_value);
    transparent_crc(p_1340->g_275.sf, "p_1340->g_275.sf", print_hash_value);
    transparent_crc(p_1340->g_303.x, "p_1340->g_303.x", print_hash_value);
    transparent_crc(p_1340->g_303.y, "p_1340->g_303.y", print_hash_value);
    transparent_crc(p_1340->g_311.x, "p_1340->g_311.x", print_hash_value);
    transparent_crc(p_1340->g_311.y, "p_1340->g_311.y", print_hash_value);
    transparent_crc(p_1340->g_311.z, "p_1340->g_311.z", print_hash_value);
    transparent_crc(p_1340->g_311.w, "p_1340->g_311.w", print_hash_value);
    transparent_crc(p_1340->g_344, "p_1340->g_344", print_hash_value);
    transparent_crc(p_1340->g_346, "p_1340->g_346", print_hash_value);
    transparent_crc(p_1340->g_362.s0, "p_1340->g_362.s0", print_hash_value);
    transparent_crc(p_1340->g_362.s1, "p_1340->g_362.s1", print_hash_value);
    transparent_crc(p_1340->g_362.s2, "p_1340->g_362.s2", print_hash_value);
    transparent_crc(p_1340->g_362.s3, "p_1340->g_362.s3", print_hash_value);
    transparent_crc(p_1340->g_362.s4, "p_1340->g_362.s4", print_hash_value);
    transparent_crc(p_1340->g_362.s5, "p_1340->g_362.s5", print_hash_value);
    transparent_crc(p_1340->g_362.s6, "p_1340->g_362.s6", print_hash_value);
    transparent_crc(p_1340->g_362.s7, "p_1340->g_362.s7", print_hash_value);
    transparent_crc(p_1340->g_362.s8, "p_1340->g_362.s8", print_hash_value);
    transparent_crc(p_1340->g_362.s9, "p_1340->g_362.s9", print_hash_value);
    transparent_crc(p_1340->g_362.sa, "p_1340->g_362.sa", print_hash_value);
    transparent_crc(p_1340->g_362.sb, "p_1340->g_362.sb", print_hash_value);
    transparent_crc(p_1340->g_362.sc, "p_1340->g_362.sc", print_hash_value);
    transparent_crc(p_1340->g_362.sd, "p_1340->g_362.sd", print_hash_value);
    transparent_crc(p_1340->g_362.se, "p_1340->g_362.se", print_hash_value);
    transparent_crc(p_1340->g_362.sf, "p_1340->g_362.sf", print_hash_value);
    transparent_crc(p_1340->g_363.x, "p_1340->g_363.x", print_hash_value);
    transparent_crc(p_1340->g_363.y, "p_1340->g_363.y", print_hash_value);
    transparent_crc(p_1340->g_363.z, "p_1340->g_363.z", print_hash_value);
    transparent_crc(p_1340->g_363.w, "p_1340->g_363.w", print_hash_value);
    transparent_crc(p_1340->g_380, "p_1340->g_380", print_hash_value);
    transparent_crc(p_1340->g_384.s0, "p_1340->g_384.s0", print_hash_value);
    transparent_crc(p_1340->g_384.s1, "p_1340->g_384.s1", print_hash_value);
    transparent_crc(p_1340->g_384.s2, "p_1340->g_384.s2", print_hash_value);
    transparent_crc(p_1340->g_384.s3, "p_1340->g_384.s3", print_hash_value);
    transparent_crc(p_1340->g_384.s4, "p_1340->g_384.s4", print_hash_value);
    transparent_crc(p_1340->g_384.s5, "p_1340->g_384.s5", print_hash_value);
    transparent_crc(p_1340->g_384.s6, "p_1340->g_384.s6", print_hash_value);
    transparent_crc(p_1340->g_384.s7, "p_1340->g_384.s7", print_hash_value);
    transparent_crc(p_1340->g_384.s8, "p_1340->g_384.s8", print_hash_value);
    transparent_crc(p_1340->g_384.s9, "p_1340->g_384.s9", print_hash_value);
    transparent_crc(p_1340->g_384.sa, "p_1340->g_384.sa", print_hash_value);
    transparent_crc(p_1340->g_384.sb, "p_1340->g_384.sb", print_hash_value);
    transparent_crc(p_1340->g_384.sc, "p_1340->g_384.sc", print_hash_value);
    transparent_crc(p_1340->g_384.sd, "p_1340->g_384.sd", print_hash_value);
    transparent_crc(p_1340->g_384.se, "p_1340->g_384.se", print_hash_value);
    transparent_crc(p_1340->g_384.sf, "p_1340->g_384.sf", print_hash_value);
    transparent_crc(p_1340->g_392.x, "p_1340->g_392.x", print_hash_value);
    transparent_crc(p_1340->g_392.y, "p_1340->g_392.y", print_hash_value);
    transparent_crc(p_1340->g_392.z, "p_1340->g_392.z", print_hash_value);
    transparent_crc(p_1340->g_392.w, "p_1340->g_392.w", print_hash_value);
    transparent_crc(p_1340->g_399, "p_1340->g_399", print_hash_value);
    transparent_crc(p_1340->g_442, "p_1340->g_442", print_hash_value);
    transparent_crc(p_1340->g_443, "p_1340->g_443", print_hash_value);
    transparent_crc(p_1340->g_446, "p_1340->g_446", print_hash_value);
    transparent_crc(p_1340->g_504.s0, "p_1340->g_504.s0", print_hash_value);
    transparent_crc(p_1340->g_504.s1, "p_1340->g_504.s1", print_hash_value);
    transparent_crc(p_1340->g_504.s2, "p_1340->g_504.s2", print_hash_value);
    transparent_crc(p_1340->g_504.s3, "p_1340->g_504.s3", print_hash_value);
    transparent_crc(p_1340->g_504.s4, "p_1340->g_504.s4", print_hash_value);
    transparent_crc(p_1340->g_504.s5, "p_1340->g_504.s5", print_hash_value);
    transparent_crc(p_1340->g_504.s6, "p_1340->g_504.s6", print_hash_value);
    transparent_crc(p_1340->g_504.s7, "p_1340->g_504.s7", print_hash_value);
    transparent_crc(p_1340->g_504.s8, "p_1340->g_504.s8", print_hash_value);
    transparent_crc(p_1340->g_504.s9, "p_1340->g_504.s9", print_hash_value);
    transparent_crc(p_1340->g_504.sa, "p_1340->g_504.sa", print_hash_value);
    transparent_crc(p_1340->g_504.sb, "p_1340->g_504.sb", print_hash_value);
    transparent_crc(p_1340->g_504.sc, "p_1340->g_504.sc", print_hash_value);
    transparent_crc(p_1340->g_504.sd, "p_1340->g_504.sd", print_hash_value);
    transparent_crc(p_1340->g_504.se, "p_1340->g_504.se", print_hash_value);
    transparent_crc(p_1340->g_504.sf, "p_1340->g_504.sf", print_hash_value);
    transparent_crc(p_1340->g_508.s0, "p_1340->g_508.s0", print_hash_value);
    transparent_crc(p_1340->g_508.s1, "p_1340->g_508.s1", print_hash_value);
    transparent_crc(p_1340->g_508.s2, "p_1340->g_508.s2", print_hash_value);
    transparent_crc(p_1340->g_508.s3, "p_1340->g_508.s3", print_hash_value);
    transparent_crc(p_1340->g_508.s4, "p_1340->g_508.s4", print_hash_value);
    transparent_crc(p_1340->g_508.s5, "p_1340->g_508.s5", print_hash_value);
    transparent_crc(p_1340->g_508.s6, "p_1340->g_508.s6", print_hash_value);
    transparent_crc(p_1340->g_508.s7, "p_1340->g_508.s7", print_hash_value);
    transparent_crc(p_1340->g_512.s0, "p_1340->g_512.s0", print_hash_value);
    transparent_crc(p_1340->g_512.s1, "p_1340->g_512.s1", print_hash_value);
    transparent_crc(p_1340->g_512.s2, "p_1340->g_512.s2", print_hash_value);
    transparent_crc(p_1340->g_512.s3, "p_1340->g_512.s3", print_hash_value);
    transparent_crc(p_1340->g_512.s4, "p_1340->g_512.s4", print_hash_value);
    transparent_crc(p_1340->g_512.s5, "p_1340->g_512.s5", print_hash_value);
    transparent_crc(p_1340->g_512.s6, "p_1340->g_512.s6", print_hash_value);
    transparent_crc(p_1340->g_512.s7, "p_1340->g_512.s7", print_hash_value);
    transparent_crc(p_1340->g_584.f0, "p_1340->g_584.f0", print_hash_value);
    transparent_crc(p_1340->g_598.s0, "p_1340->g_598.s0", print_hash_value);
    transparent_crc(p_1340->g_598.s1, "p_1340->g_598.s1", print_hash_value);
    transparent_crc(p_1340->g_598.s2, "p_1340->g_598.s2", print_hash_value);
    transparent_crc(p_1340->g_598.s3, "p_1340->g_598.s3", print_hash_value);
    transparent_crc(p_1340->g_598.s4, "p_1340->g_598.s4", print_hash_value);
    transparent_crc(p_1340->g_598.s5, "p_1340->g_598.s5", print_hash_value);
    transparent_crc(p_1340->g_598.s6, "p_1340->g_598.s6", print_hash_value);
    transparent_crc(p_1340->g_598.s7, "p_1340->g_598.s7", print_hash_value);
    transparent_crc(p_1340->g_598.s8, "p_1340->g_598.s8", print_hash_value);
    transparent_crc(p_1340->g_598.s9, "p_1340->g_598.s9", print_hash_value);
    transparent_crc(p_1340->g_598.sa, "p_1340->g_598.sa", print_hash_value);
    transparent_crc(p_1340->g_598.sb, "p_1340->g_598.sb", print_hash_value);
    transparent_crc(p_1340->g_598.sc, "p_1340->g_598.sc", print_hash_value);
    transparent_crc(p_1340->g_598.sd, "p_1340->g_598.sd", print_hash_value);
    transparent_crc(p_1340->g_598.se, "p_1340->g_598.se", print_hash_value);
    transparent_crc(p_1340->g_598.sf, "p_1340->g_598.sf", print_hash_value);
    transparent_crc(p_1340->g_670.x, "p_1340->g_670.x", print_hash_value);
    transparent_crc(p_1340->g_670.y, "p_1340->g_670.y", print_hash_value);
    transparent_crc(p_1340->g_670.z, "p_1340->g_670.z", print_hash_value);
    transparent_crc(p_1340->g_670.w, "p_1340->g_670.w", print_hash_value);
    transparent_crc(p_1340->g_673, "p_1340->g_673", print_hash_value);
    transparent_crc(p_1340->g_697, "p_1340->g_697", print_hash_value);
    transparent_crc(p_1340->g_716.x, "p_1340->g_716.x", print_hash_value);
    transparent_crc(p_1340->g_716.y, "p_1340->g_716.y", print_hash_value);
    transparent_crc(p_1340->g_716.z, "p_1340->g_716.z", print_hash_value);
    transparent_crc(p_1340->g_716.w, "p_1340->g_716.w", print_hash_value);
    transparent_crc(p_1340->g_719.f0, "p_1340->g_719.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1340->g_731[i], "p_1340->g_731[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1340->g_747[i][j][k], "p_1340->g_747[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1340->g_769, "p_1340->g_769", print_hash_value);
    transparent_crc(p_1340->g_771, "p_1340->g_771", print_hash_value);
    transparent_crc(p_1340->g_772, "p_1340->g_772", print_hash_value);
    transparent_crc(p_1340->g_789.x, "p_1340->g_789.x", print_hash_value);
    transparent_crc(p_1340->g_789.y, "p_1340->g_789.y", print_hash_value);
    transparent_crc(p_1340->g_802.s0, "p_1340->g_802.s0", print_hash_value);
    transparent_crc(p_1340->g_802.s1, "p_1340->g_802.s1", print_hash_value);
    transparent_crc(p_1340->g_802.s2, "p_1340->g_802.s2", print_hash_value);
    transparent_crc(p_1340->g_802.s3, "p_1340->g_802.s3", print_hash_value);
    transparent_crc(p_1340->g_802.s4, "p_1340->g_802.s4", print_hash_value);
    transparent_crc(p_1340->g_802.s5, "p_1340->g_802.s5", print_hash_value);
    transparent_crc(p_1340->g_802.s6, "p_1340->g_802.s6", print_hash_value);
    transparent_crc(p_1340->g_802.s7, "p_1340->g_802.s7", print_hash_value);
    transparent_crc(p_1340->g_802.s8, "p_1340->g_802.s8", print_hash_value);
    transparent_crc(p_1340->g_802.s9, "p_1340->g_802.s9", print_hash_value);
    transparent_crc(p_1340->g_802.sa, "p_1340->g_802.sa", print_hash_value);
    transparent_crc(p_1340->g_802.sb, "p_1340->g_802.sb", print_hash_value);
    transparent_crc(p_1340->g_802.sc, "p_1340->g_802.sc", print_hash_value);
    transparent_crc(p_1340->g_802.sd, "p_1340->g_802.sd", print_hash_value);
    transparent_crc(p_1340->g_802.se, "p_1340->g_802.se", print_hash_value);
    transparent_crc(p_1340->g_802.sf, "p_1340->g_802.sf", print_hash_value);
    transparent_crc(p_1340->g_851.s0, "p_1340->g_851.s0", print_hash_value);
    transparent_crc(p_1340->g_851.s1, "p_1340->g_851.s1", print_hash_value);
    transparent_crc(p_1340->g_851.s2, "p_1340->g_851.s2", print_hash_value);
    transparent_crc(p_1340->g_851.s3, "p_1340->g_851.s3", print_hash_value);
    transparent_crc(p_1340->g_851.s4, "p_1340->g_851.s4", print_hash_value);
    transparent_crc(p_1340->g_851.s5, "p_1340->g_851.s5", print_hash_value);
    transparent_crc(p_1340->g_851.s6, "p_1340->g_851.s6", print_hash_value);
    transparent_crc(p_1340->g_851.s7, "p_1340->g_851.s7", print_hash_value);
    transparent_crc(p_1340->g_851.s8, "p_1340->g_851.s8", print_hash_value);
    transparent_crc(p_1340->g_851.s9, "p_1340->g_851.s9", print_hash_value);
    transparent_crc(p_1340->g_851.sa, "p_1340->g_851.sa", print_hash_value);
    transparent_crc(p_1340->g_851.sb, "p_1340->g_851.sb", print_hash_value);
    transparent_crc(p_1340->g_851.sc, "p_1340->g_851.sc", print_hash_value);
    transparent_crc(p_1340->g_851.sd, "p_1340->g_851.sd", print_hash_value);
    transparent_crc(p_1340->g_851.se, "p_1340->g_851.se", print_hash_value);
    transparent_crc(p_1340->g_851.sf, "p_1340->g_851.sf", print_hash_value);
    transparent_crc(p_1340->g_892.s0, "p_1340->g_892.s0", print_hash_value);
    transparent_crc(p_1340->g_892.s1, "p_1340->g_892.s1", print_hash_value);
    transparent_crc(p_1340->g_892.s2, "p_1340->g_892.s2", print_hash_value);
    transparent_crc(p_1340->g_892.s3, "p_1340->g_892.s3", print_hash_value);
    transparent_crc(p_1340->g_892.s4, "p_1340->g_892.s4", print_hash_value);
    transparent_crc(p_1340->g_892.s5, "p_1340->g_892.s5", print_hash_value);
    transparent_crc(p_1340->g_892.s6, "p_1340->g_892.s6", print_hash_value);
    transparent_crc(p_1340->g_892.s7, "p_1340->g_892.s7", print_hash_value);
    transparent_crc(p_1340->g_892.s8, "p_1340->g_892.s8", print_hash_value);
    transparent_crc(p_1340->g_892.s9, "p_1340->g_892.s9", print_hash_value);
    transparent_crc(p_1340->g_892.sa, "p_1340->g_892.sa", print_hash_value);
    transparent_crc(p_1340->g_892.sb, "p_1340->g_892.sb", print_hash_value);
    transparent_crc(p_1340->g_892.sc, "p_1340->g_892.sc", print_hash_value);
    transparent_crc(p_1340->g_892.sd, "p_1340->g_892.sd", print_hash_value);
    transparent_crc(p_1340->g_892.se, "p_1340->g_892.se", print_hash_value);
    transparent_crc(p_1340->g_892.sf, "p_1340->g_892.sf", print_hash_value);
    transparent_crc(p_1340->g_893.x, "p_1340->g_893.x", print_hash_value);
    transparent_crc(p_1340->g_893.y, "p_1340->g_893.y", print_hash_value);
    transparent_crc(p_1340->g_893.z, "p_1340->g_893.z", print_hash_value);
    transparent_crc(p_1340->g_893.w, "p_1340->g_893.w", print_hash_value);
    transparent_crc(p_1340->g_903.x, "p_1340->g_903.x", print_hash_value);
    transparent_crc(p_1340->g_903.y, "p_1340->g_903.y", print_hash_value);
    transparent_crc(p_1340->g_927, "p_1340->g_927", print_hash_value);
    transparent_crc(p_1340->g_932.x, "p_1340->g_932.x", print_hash_value);
    transparent_crc(p_1340->g_932.y, "p_1340->g_932.y", print_hash_value);
    transparent_crc(p_1340->g_987.x, "p_1340->g_987.x", print_hash_value);
    transparent_crc(p_1340->g_987.y, "p_1340->g_987.y", print_hash_value);
    transparent_crc(p_1340->g_987.z, "p_1340->g_987.z", print_hash_value);
    transparent_crc(p_1340->g_987.w, "p_1340->g_987.w", print_hash_value);
    transparent_crc(p_1340->g_988.s0, "p_1340->g_988.s0", print_hash_value);
    transparent_crc(p_1340->g_988.s1, "p_1340->g_988.s1", print_hash_value);
    transparent_crc(p_1340->g_988.s2, "p_1340->g_988.s2", print_hash_value);
    transparent_crc(p_1340->g_988.s3, "p_1340->g_988.s3", print_hash_value);
    transparent_crc(p_1340->g_988.s4, "p_1340->g_988.s4", print_hash_value);
    transparent_crc(p_1340->g_988.s5, "p_1340->g_988.s5", print_hash_value);
    transparent_crc(p_1340->g_988.s6, "p_1340->g_988.s6", print_hash_value);
    transparent_crc(p_1340->g_988.s7, "p_1340->g_988.s7", print_hash_value);
    transparent_crc(p_1340->g_1000.x, "p_1340->g_1000.x", print_hash_value);
    transparent_crc(p_1340->g_1000.y, "p_1340->g_1000.y", print_hash_value);
    transparent_crc(p_1340->g_1021, "p_1340->g_1021", print_hash_value);
    transparent_crc(p_1340->g_1036.f0, "p_1340->g_1036.f0", print_hash_value);
    transparent_crc(p_1340->g_1060.s0, "p_1340->g_1060.s0", print_hash_value);
    transparent_crc(p_1340->g_1060.s1, "p_1340->g_1060.s1", print_hash_value);
    transparent_crc(p_1340->g_1060.s2, "p_1340->g_1060.s2", print_hash_value);
    transparent_crc(p_1340->g_1060.s3, "p_1340->g_1060.s3", print_hash_value);
    transparent_crc(p_1340->g_1060.s4, "p_1340->g_1060.s4", print_hash_value);
    transparent_crc(p_1340->g_1060.s5, "p_1340->g_1060.s5", print_hash_value);
    transparent_crc(p_1340->g_1060.s6, "p_1340->g_1060.s6", print_hash_value);
    transparent_crc(p_1340->g_1060.s7, "p_1340->g_1060.s7", print_hash_value);
    transparent_crc(p_1340->g_1060.s8, "p_1340->g_1060.s8", print_hash_value);
    transparent_crc(p_1340->g_1060.s9, "p_1340->g_1060.s9", print_hash_value);
    transparent_crc(p_1340->g_1060.sa, "p_1340->g_1060.sa", print_hash_value);
    transparent_crc(p_1340->g_1060.sb, "p_1340->g_1060.sb", print_hash_value);
    transparent_crc(p_1340->g_1060.sc, "p_1340->g_1060.sc", print_hash_value);
    transparent_crc(p_1340->g_1060.sd, "p_1340->g_1060.sd", print_hash_value);
    transparent_crc(p_1340->g_1060.se, "p_1340->g_1060.se", print_hash_value);
    transparent_crc(p_1340->g_1060.sf, "p_1340->g_1060.sf", print_hash_value);
    transparent_crc(p_1340->g_1061.x, "p_1340->g_1061.x", print_hash_value);
    transparent_crc(p_1340->g_1061.y, "p_1340->g_1061.y", print_hash_value);
    transparent_crc(p_1340->g_1068, "p_1340->g_1068", print_hash_value);
    transparent_crc(p_1340->g_1102, "p_1340->g_1102", print_hash_value);
    transparent_crc(p_1340->g_1105, "p_1340->g_1105", print_hash_value);
    transparent_crc(p_1340->g_1115.s0, "p_1340->g_1115.s0", print_hash_value);
    transparent_crc(p_1340->g_1115.s1, "p_1340->g_1115.s1", print_hash_value);
    transparent_crc(p_1340->g_1115.s2, "p_1340->g_1115.s2", print_hash_value);
    transparent_crc(p_1340->g_1115.s3, "p_1340->g_1115.s3", print_hash_value);
    transparent_crc(p_1340->g_1115.s4, "p_1340->g_1115.s4", print_hash_value);
    transparent_crc(p_1340->g_1115.s5, "p_1340->g_1115.s5", print_hash_value);
    transparent_crc(p_1340->g_1115.s6, "p_1340->g_1115.s6", print_hash_value);
    transparent_crc(p_1340->g_1115.s7, "p_1340->g_1115.s7", print_hash_value);
    transparent_crc(p_1340->g_1115.s8, "p_1340->g_1115.s8", print_hash_value);
    transparent_crc(p_1340->g_1115.s9, "p_1340->g_1115.s9", print_hash_value);
    transparent_crc(p_1340->g_1115.sa, "p_1340->g_1115.sa", print_hash_value);
    transparent_crc(p_1340->g_1115.sb, "p_1340->g_1115.sb", print_hash_value);
    transparent_crc(p_1340->g_1115.sc, "p_1340->g_1115.sc", print_hash_value);
    transparent_crc(p_1340->g_1115.sd, "p_1340->g_1115.sd", print_hash_value);
    transparent_crc(p_1340->g_1115.se, "p_1340->g_1115.se", print_hash_value);
    transparent_crc(p_1340->g_1115.sf, "p_1340->g_1115.sf", print_hash_value);
    transparent_crc(p_1340->g_1119.x, "p_1340->g_1119.x", print_hash_value);
    transparent_crc(p_1340->g_1119.y, "p_1340->g_1119.y", print_hash_value);
    transparent_crc(p_1340->g_1124.x, "p_1340->g_1124.x", print_hash_value);
    transparent_crc(p_1340->g_1124.y, "p_1340->g_1124.y", print_hash_value);
    transparent_crc(p_1340->g_1127.x, "p_1340->g_1127.x", print_hash_value);
    transparent_crc(p_1340->g_1127.y, "p_1340->g_1127.y", print_hash_value);
    transparent_crc(p_1340->g_1127.z, "p_1340->g_1127.z", print_hash_value);
    transparent_crc(p_1340->g_1127.w, "p_1340->g_1127.w", print_hash_value);
    transparent_crc(p_1340->g_1161.x, "p_1340->g_1161.x", print_hash_value);
    transparent_crc(p_1340->g_1161.y, "p_1340->g_1161.y", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1340->g_1163[i][j], "p_1340->g_1163[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1340->g_1194, "p_1340->g_1194", print_hash_value);
    transparent_crc(p_1340->g_1238.s0, "p_1340->g_1238.s0", print_hash_value);
    transparent_crc(p_1340->g_1238.s1, "p_1340->g_1238.s1", print_hash_value);
    transparent_crc(p_1340->g_1238.s2, "p_1340->g_1238.s2", print_hash_value);
    transparent_crc(p_1340->g_1238.s3, "p_1340->g_1238.s3", print_hash_value);
    transparent_crc(p_1340->g_1238.s4, "p_1340->g_1238.s4", print_hash_value);
    transparent_crc(p_1340->g_1238.s5, "p_1340->g_1238.s5", print_hash_value);
    transparent_crc(p_1340->g_1238.s6, "p_1340->g_1238.s6", print_hash_value);
    transparent_crc(p_1340->g_1238.s7, "p_1340->g_1238.s7", print_hash_value);
    transparent_crc(p_1340->g_1243.f0, "p_1340->g_1243.f0", print_hash_value);
    transparent_crc(p_1340->g_1246.x, "p_1340->g_1246.x", print_hash_value);
    transparent_crc(p_1340->g_1246.y, "p_1340->g_1246.y", print_hash_value);
    transparent_crc(p_1340->g_1246.z, "p_1340->g_1246.z", print_hash_value);
    transparent_crc(p_1340->g_1246.w, "p_1340->g_1246.w", print_hash_value);
    transparent_crc(p_1340->g_1250.s0, "p_1340->g_1250.s0", print_hash_value);
    transparent_crc(p_1340->g_1250.s1, "p_1340->g_1250.s1", print_hash_value);
    transparent_crc(p_1340->g_1250.s2, "p_1340->g_1250.s2", print_hash_value);
    transparent_crc(p_1340->g_1250.s3, "p_1340->g_1250.s3", print_hash_value);
    transparent_crc(p_1340->g_1250.s4, "p_1340->g_1250.s4", print_hash_value);
    transparent_crc(p_1340->g_1250.s5, "p_1340->g_1250.s5", print_hash_value);
    transparent_crc(p_1340->g_1250.s6, "p_1340->g_1250.s6", print_hash_value);
    transparent_crc(p_1340->g_1250.s7, "p_1340->g_1250.s7", print_hash_value);
    transparent_crc(p_1340->g_1250.s8, "p_1340->g_1250.s8", print_hash_value);
    transparent_crc(p_1340->g_1250.s9, "p_1340->g_1250.s9", print_hash_value);
    transparent_crc(p_1340->g_1250.sa, "p_1340->g_1250.sa", print_hash_value);
    transparent_crc(p_1340->g_1250.sb, "p_1340->g_1250.sb", print_hash_value);
    transparent_crc(p_1340->g_1250.sc, "p_1340->g_1250.sc", print_hash_value);
    transparent_crc(p_1340->g_1250.sd, "p_1340->g_1250.sd", print_hash_value);
    transparent_crc(p_1340->g_1250.se, "p_1340->g_1250.se", print_hash_value);
    transparent_crc(p_1340->g_1250.sf, "p_1340->g_1250.sf", print_hash_value);
    transparent_crc(p_1340->g_1267.x, "p_1340->g_1267.x", print_hash_value);
    transparent_crc(p_1340->g_1267.y, "p_1340->g_1267.y", print_hash_value);
    transparent_crc(p_1340->g_1281.f0, "p_1340->g_1281.f0", print_hash_value);
    transparent_crc(p_1340->g_1310.x, "p_1340->g_1310.x", print_hash_value);
    transparent_crc(p_1340->g_1310.y, "p_1340->g_1310.y", print_hash_value);
    transparent_crc(p_1340->g_1310.z, "p_1340->g_1310.z", print_hash_value);
    transparent_crc(p_1340->g_1310.w, "p_1340->g_1310.w", print_hash_value);
    transparent_crc(p_1340->g_1320.s0, "p_1340->g_1320.s0", print_hash_value);
    transparent_crc(p_1340->g_1320.s1, "p_1340->g_1320.s1", print_hash_value);
    transparent_crc(p_1340->g_1320.s2, "p_1340->g_1320.s2", print_hash_value);
    transparent_crc(p_1340->g_1320.s3, "p_1340->g_1320.s3", print_hash_value);
    transparent_crc(p_1340->g_1320.s4, "p_1340->g_1320.s4", print_hash_value);
    transparent_crc(p_1340->g_1320.s5, "p_1340->g_1320.s5", print_hash_value);
    transparent_crc(p_1340->g_1320.s6, "p_1340->g_1320.s6", print_hash_value);
    transparent_crc(p_1340->g_1320.s7, "p_1340->g_1320.s7", print_hash_value);
    transparent_crc(p_1340->g_1320.s8, "p_1340->g_1320.s8", print_hash_value);
    transparent_crc(p_1340->g_1320.s9, "p_1340->g_1320.s9", print_hash_value);
    transparent_crc(p_1340->g_1320.sa, "p_1340->g_1320.sa", print_hash_value);
    transparent_crc(p_1340->g_1320.sb, "p_1340->g_1320.sb", print_hash_value);
    transparent_crc(p_1340->g_1320.sc, "p_1340->g_1320.sc", print_hash_value);
    transparent_crc(p_1340->g_1320.sd, "p_1340->g_1320.sd", print_hash_value);
    transparent_crc(p_1340->g_1320.se, "p_1340->g_1320.se", print_hash_value);
    transparent_crc(p_1340->g_1320.sf, "p_1340->g_1320.sf", print_hash_value);
    transparent_crc(p_1340->g_1321.s0, "p_1340->g_1321.s0", print_hash_value);
    transparent_crc(p_1340->g_1321.s1, "p_1340->g_1321.s1", print_hash_value);
    transparent_crc(p_1340->g_1321.s2, "p_1340->g_1321.s2", print_hash_value);
    transparent_crc(p_1340->g_1321.s3, "p_1340->g_1321.s3", print_hash_value);
    transparent_crc(p_1340->g_1321.s4, "p_1340->g_1321.s4", print_hash_value);
    transparent_crc(p_1340->g_1321.s5, "p_1340->g_1321.s5", print_hash_value);
    transparent_crc(p_1340->g_1321.s6, "p_1340->g_1321.s6", print_hash_value);
    transparent_crc(p_1340->g_1321.s7, "p_1340->g_1321.s7", print_hash_value);
    transparent_crc(p_1340->g_1328.x, "p_1340->g_1328.x", print_hash_value);
    transparent_crc(p_1340->g_1328.y, "p_1340->g_1328.y", print_hash_value);
    transparent_crc(p_1340->g_1329.s0, "p_1340->g_1329.s0", print_hash_value);
    transparent_crc(p_1340->g_1329.s1, "p_1340->g_1329.s1", print_hash_value);
    transparent_crc(p_1340->g_1329.s2, "p_1340->g_1329.s2", print_hash_value);
    transparent_crc(p_1340->g_1329.s3, "p_1340->g_1329.s3", print_hash_value);
    transparent_crc(p_1340->g_1329.s4, "p_1340->g_1329.s4", print_hash_value);
    transparent_crc(p_1340->g_1329.s5, "p_1340->g_1329.s5", print_hash_value);
    transparent_crc(p_1340->g_1329.s6, "p_1340->g_1329.s6", print_hash_value);
    transparent_crc(p_1340->g_1329.s7, "p_1340->g_1329.s7", print_hash_value);
    transparent_crc(p_1340->g_1331.s0, "p_1340->g_1331.s0", print_hash_value);
    transparent_crc(p_1340->g_1331.s1, "p_1340->g_1331.s1", print_hash_value);
    transparent_crc(p_1340->g_1331.s2, "p_1340->g_1331.s2", print_hash_value);
    transparent_crc(p_1340->g_1331.s3, "p_1340->g_1331.s3", print_hash_value);
    transparent_crc(p_1340->g_1331.s4, "p_1340->g_1331.s4", print_hash_value);
    transparent_crc(p_1340->g_1331.s5, "p_1340->g_1331.s5", print_hash_value);
    transparent_crc(p_1340->g_1331.s6, "p_1340->g_1331.s6", print_hash_value);
    transparent_crc(p_1340->g_1331.s7, "p_1340->g_1331.s7", print_hash_value);
    transparent_crc(p_1340->g_1331.s8, "p_1340->g_1331.s8", print_hash_value);
    transparent_crc(p_1340->g_1331.s9, "p_1340->g_1331.s9", print_hash_value);
    transparent_crc(p_1340->g_1331.sa, "p_1340->g_1331.sa", print_hash_value);
    transparent_crc(p_1340->g_1331.sb, "p_1340->g_1331.sb", print_hash_value);
    transparent_crc(p_1340->g_1331.sc, "p_1340->g_1331.sc", print_hash_value);
    transparent_crc(p_1340->g_1331.sd, "p_1340->g_1331.sd", print_hash_value);
    transparent_crc(p_1340->g_1331.se, "p_1340->g_1331.se", print_hash_value);
    transparent_crc(p_1340->g_1331.sf, "p_1340->g_1331.sf", print_hash_value);
    transparent_crc(p_1340->v_collective, "p_1340->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 89; i++)
            transparent_crc(p_1340->g_special_values[i + 89 * get_linear_group_id()], "p_1340->g_special_values[i + 89 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 89; i++)
            transparent_crc(p_1340->l_special_values[i], "p_1340->l_special_values[i]", print_hash_value);
    transparent_crc(p_1340->l_comm_values[get_linear_local_id()], "p_1340->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1340->g_comm_values[get_linear_group_id() * 20 + get_linear_local_id()], "p_1340->g_comm_values[get_linear_group_id() * 20 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
