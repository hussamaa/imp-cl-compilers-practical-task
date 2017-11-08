// --atomics 33 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 3,25,11 -l 3,1,1
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
{2,0,1}, // permutation 1
{1,2,0}, // permutation 2
{1,0,2}, // permutation 3
{1,0,2}, // permutation 4
{2,0,1}, // permutation 5
{1,2,0}, // permutation 6
{1,2,0}, // permutation 7
{2,0,1}, // permutation 8
{1,0,2} // permutation 9
};

// Seed: 3416566280

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_32[4];
    int32_t *g_31;
    VECTOR(int32_t, 8) g_52;
    uint32_t g_71;
    uint16_t g_87;
    volatile int8_t g_100;
    volatile uint32_t g_102;
    VECTOR(uint8_t, 4) g_127;
    VECTOR(int16_t, 2) g_143;
    uint64_t g_171;
    uint32_t g_174;
    VECTOR(int32_t, 16) g_175;
    uint32_t g_207;
    int8_t g_211;
    int64_t *g_220;
    uint16_t g_236;
    volatile VECTOR(uint8_t, 8) g_271;
    volatile VECTOR(int64_t, 8) g_286;
    VECTOR(int8_t, 4) g_288;
    VECTOR(int8_t, 4) g_292;
    volatile uint8_t * volatile g_300;
    volatile uint8_t * volatile * volatile g_299[2][2];
    volatile uint8_t * volatile * volatile * volatile g_301;
    volatile uint8_t * volatile * volatile * volatile g_302;
    volatile VECTOR(int64_t, 8) g_327;
    VECTOR(uint16_t, 2) g_333;
    int8_t *g_336;
    uint32_t g_340;
    uint32_t g_341;
    VECTOR(int16_t, 2) g_358;
    int32_t *g_375;
    int32_t ** volatile g_374;
    VECTOR(uint16_t, 8) g_410;
    VECTOR(int64_t, 16) g_424;
    int64_t g_427;
    VECTOR(int8_t, 4) g_428;
    uint32_t * volatile g_433;
    uint32_t * volatile *g_432;
    VECTOR(uint16_t, 16) g_495;
    VECTOR(uint8_t, 2) g_585;
    uint16_t g_594;
    volatile VECTOR(int16_t, 4) g_665;
    volatile int16_t * volatile g_719;
    uint32_t *g_722;
    volatile int64_t g_743;
    int32_t *g_760;
    volatile uint16_t g_772;
    volatile VECTOR(uint16_t, 16) g_817;
    volatile VECTOR(int16_t, 16) g_821;
    volatile VECTOR(uint32_t, 8) g_828;
    int32_t ** volatile g_838[3];
    volatile VECTOR(int32_t, 8) g_923;
    VECTOR(int16_t, 4) g_926;
    uint64_t g_936;
    int32_t ** volatile g_996;
    volatile VECTOR(int16_t, 2) g_1013;
    VECTOR(int16_t, 16) g_1015;
    VECTOR(int16_t, 16) g_1016;
    VECTOR(int32_t, 2) g_1020;
    VECTOR(int8_t, 8) g_1103;
    VECTOR(int8_t, 4) g_1104;
    VECTOR(uint32_t, 2) g_1135;
    VECTOR(uint32_t, 4) g_1136;
    uint32_t *g_1148;
    uint32_t **g_1147;
    uint32_t *** volatile g_1146;
    volatile VECTOR(uint8_t, 4) g_1149;
    VECTOR(uint32_t, 2) g_1195;
    VECTOR(int16_t, 8) g_1200;
    VECTOR(int16_t, 4) g_1204;
    VECTOR(int16_t, 8) g_1205;
    volatile VECTOR(uint8_t, 2) g_1214;
    volatile VECTOR(uint8_t, 8) g_1216;
    VECTOR(uint16_t, 8) g_1280;
    volatile VECTOR(uint16_t, 16) g_1282;
    volatile VECTOR(int64_t, 4) g_1316;
    int16_t g_1330;
    volatile VECTOR(int32_t, 8) g_1332;
    VECTOR(int8_t, 16) g_1346;
    uint16_t g_1353;
    VECTOR(int8_t, 4) g_1545;
    uint64_t * volatile g_1549[3][8];
    uint64_t * volatile *g_1548;
    int8_t **g_1561;
    int8_t **g_1562[2][4];
    volatile VECTOR(int64_t, 16) g_1585;
    VECTOR(uint16_t, 8) g_1586;
    VECTOR(int16_t, 2) g_1594;
    int32_t * volatile g_1631;
    int32_t * volatile g_1633;
    int64_t *g_1646;
    int64_t **g_1645;
    int32_t ** volatile g_1667;
    int32_t ** volatile g_1668;
    int32_t ** volatile g_1669;
    int32_t * volatile g_1670;
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
uint8_t  func_1(struct S0 * p_1676);
int32_t * func_2(int8_t  p_3, int32_t * p_4, int64_t  p_5, int32_t  p_6, struct S0 * p_1676);
int32_t  func_7(uint32_t  p_8, int32_t * p_9, uint16_t  p_10, struct S0 * p_1676);
int32_t * func_18(int32_t  p_19, struct S0 * p_1676);
int32_t * func_20(uint8_t  p_21, int32_t * p_22, int32_t * p_23, int32_t * p_24, struct S0 * p_1676);
int32_t * func_25(int32_t * p_26, int32_t * p_27, int32_t * p_28, int32_t  p_29, int32_t * p_30, struct S0 * p_1676);
int32_t * func_33(int8_t  p_34, int32_t * p_35, int8_t  p_36, int32_t * p_37, struct S0 * p_1676);
uint16_t  func_41(int32_t * p_42, uint64_t  p_43, uint64_t  p_44, uint16_t  p_45, struct S0 * p_1676);
int32_t * func_46(int32_t  p_47, int32_t * p_48, int64_t  p_49, int32_t * p_50, int32_t  p_51, struct S0 * p_1676);
int32_t  func_54(int32_t * p_55, int32_t * p_56, uint8_t  p_57, int64_t  p_58, int32_t * p_59, struct S0 * p_1676);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1676->g_comm_values p_1676->l_comm_values p_1676->g_31 p_1676->g_32 p_1676->g_52 p_1676->g_71 p_1676->g_102 p_1676->g_127 p_1676->g_100 p_1676->g_143 p_1676->g_87 p_1676->g_175 p_1676->g_207 p_1676->g_171 p_1676->g_220 p_1676->g_236 p_1676->g_271 p_1676->g_286 p_1676->g_288 p_1676->g_292 p_1676->g_299 p_1676->g_302 p_1676->g_327 p_1676->g_211 p_1676->g_333 p_1676->g_585 p_1676->g_424 p_1676->g_375 p_1676->g_374 p_1676->g_433 p_1676->g_665 p_1676->g_340 p_1676->g_594 p_1676->g_174 p_1676->g_341 p_1676->g_432 p_1676->g_719 p_1676->g_743 p_1676->g_760 p_1676->g_772 p_1676->g_817 p_1676->g_821 p_1676->g_828 p_1676->g_923 p_1676->g_926 p_1676->g_427 p_1676->g_936 p_1676->g_996 p_1676->g_722 p_1676->g_1316 p_1676->g_1280 p_1676->g_1103 p_1676->g_1020 p_1676->g_495 p_1676->g_1013 p_1676->g_1148 p_1676->g_1330 p_1676->g_1204 p_1676->g_1332 p_1676->g_1346 p_1676->g_1353 p_1676->g_1548 p_1676->g_1585 p_1676->g_1586 p_1676->g_1594 p_1676->g_1200 p_1676->g_1015 p_1676->g_1136 p_1676->g_410 p_1676->g_1633 p_1676->g_1645 p_1676->g_1214 p_1676->g_1646 p_1676->g_1669 p_1676->g_1670
 * writes: p_1676->g_52 p_1676->g_71 p_1676->g_87 p_1676->g_102 p_1676->g_171 p_1676->g_174 p_1676->g_207 p_1676->g_211 p_1676->g_127 p_1676->g_236 p_1676->g_143 p_1676->g_299 p_1676->g_336 p_1676->g_340 p_1676->g_341 p_1676->g_375 p_1676->g_424 p_1676->g_292 p_1676->g_32 p_1676->g_722 p_1676->g_358 p_1676->g_585 p_1676->g_594 p_1676->g_760 p_1676->g_410 p_1676->g_31 p_1676->g_1020 p_1676->g_1353 p_1676->g_1561 p_1676->g_1562 p_1676->g_175 p_1676->g_220 p_1676->g_1015
 */
uint8_t  func_1(struct S0 * p_1676)
{ /* block id: 4 */
    int32_t l_15[7][1] = {{5L},{5L},{5L},{5L},{5L},{5L},{5L}};
    uint64_t l_38 = 0xD52280335900B088L;
    int32_t *l_53[4][3][5] = {{{&p_1676->g_32[3],&p_1676->g_32[3],&p_1676->g_32[3],(void*)0,&l_15[0][0]},{&p_1676->g_32[3],&p_1676->g_32[3],&p_1676->g_32[3],(void*)0,&l_15[0][0]},{&p_1676->g_32[3],&p_1676->g_32[3],&p_1676->g_32[3],(void*)0,&l_15[0][0]}},{{&p_1676->g_32[3],&p_1676->g_32[3],&p_1676->g_32[3],(void*)0,&l_15[0][0]},{&p_1676->g_32[3],&p_1676->g_32[3],&p_1676->g_32[3],(void*)0,&l_15[0][0]},{&p_1676->g_32[3],&p_1676->g_32[3],&p_1676->g_32[3],(void*)0,&l_15[0][0]}},{{&p_1676->g_32[3],&p_1676->g_32[3],&p_1676->g_32[3],(void*)0,&l_15[0][0]},{&p_1676->g_32[3],&p_1676->g_32[3],&p_1676->g_32[3],(void*)0,&l_15[0][0]},{&p_1676->g_32[3],&p_1676->g_32[3],&p_1676->g_32[3],(void*)0,&l_15[0][0]}},{{&p_1676->g_32[3],&p_1676->g_32[3],&p_1676->g_32[3],(void*)0,&l_15[0][0]},{&p_1676->g_32[3],&p_1676->g_32[3],&p_1676->g_32[3],(void*)0,&l_15[0][0]},{&p_1676->g_32[3],&p_1676->g_32[3],&p_1676->g_32[3],(void*)0,&l_15[0][0]}}};
    int32_t **l_981 = (void*)0;
    int32_t **l_982 = &p_1676->g_760;
    int32_t *l_1331 = (void*)0;
    uint32_t l_1675[7][5] = {{0x94D404E6L,1UL,1UL,0x94D404E6L,0x2B10B56AL},{0x94D404E6L,1UL,1UL,0x94D404E6L,0x2B10B56AL},{0x94D404E6L,1UL,1UL,0x94D404E6L,0x2B10B56AL},{0x94D404E6L,1UL,1UL,0x94D404E6L,0x2B10B56AL},{0x94D404E6L,1UL,1UL,0x94D404E6L,0x2B10B56AL},{0x94D404E6L,1UL,1UL,0x94D404E6L,0x2B10B56AL},{0x94D404E6L,1UL,1UL,0x94D404E6L,0x2B10B56AL}};
    int i, j, k;
    (*l_982) = func_2((func_7(((safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(l_15[0][0], 15)) , (((safe_add_func_int8_t_s_s(p_1676->g_comm_values[p_1676->tid], ((((*l_982) = func_18((((*l_982) = func_20(p_1676->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1676->tid, 3))], func_25(p_1676->g_31, func_33(l_38, ((safe_mod_func_uint16_t_u_u(func_41(&l_15[0][0], p_1676->g_32[1], ((((*p_1676->g_374) = func_46((p_1676->g_52.s4 = ((VECTOR(int32_t, 16))(p_1676->g_52.s5740236277577747)).sd), (((p_1676->g_32[3] >= ((func_54(&p_1676->g_32[0], &p_1676->g_32[0], p_1676->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1676->tid, 3))], p_1676->g_32[3], &l_15[0][0], p_1676) < 0x712958D1L) ^ p_1676->g_585.y)) || p_1676->g_327.s5) , &l_15[5][0]), p_1676->g_424.sc, &p_1676->g_32[3], (*p_1676->g_375), p_1676)) == l_53[1][0][1]) , p_1676->g_288.x), p_1676->g_comm_values[p_1676->tid], p_1676), 0x15CCL)) , (void*)0), p_1676->g_288.z, l_53[1][0][1], p_1676), l_53[1][0][1], p_1676->g_936, p_1676->g_31, p_1676), p_1676->g_31, l_53[1][0][1], p_1676)) == p_1676->g_31), p_1676)) == p_1676->g_1148) >= p_1676->g_1330))) , p_1676->g_32[0]) , 0x3117L)), p_1676->g_1204.w)) >= 0x5F73L), l_1331, p_1676->g_333.x, p_1676) ^ 9UL), p_1676->g_1148, p_1676->g_1346.sd, p_1676->g_1280.s5, p_1676);
    return l_1675[6][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1676->g_996 p_1676->g_31
 * writes:
 */
int32_t * func_2(int8_t  p_3, int32_t * p_4, int64_t  p_5, int32_t  p_6, struct S0 * p_1676)
{ /* block id: 726 */
    return (*p_1676->g_996);
}


/* ------------------------------------------ */
/* 
 * reads : p_1676->g_1332 p_1676->g_1346 p_1676->g_594 p_1676->g_1353 p_1676->g_374 p_1676->g_375 p_1676->g_236 p_1676->g_288 p_1676->g_828 p_1676->g_1316 p_1676->g_171 p_1676->g_1548 p_1676->g_1585 p_1676->g_1586 p_1676->g_1594 p_1676->g_1200 p_1676->g_1015 p_1676->g_1020 p_1676->g_1280 p_1676->g_340 p_1676->g_87 p_1676->g_1136 p_1676->g_424 p_1676->g_175 p_1676->g_32 p_1676->g_410 p_1676->g_1633 p_1676->g_220 p_1676->g_1645 p_1676->g_1214 p_1676->g_1646 p_1676->g_1669 p_1676->g_1670 p_1676->g_71
 * writes: p_1676->g_1353 p_1676->g_211 p_1676->g_207 p_1676->g_236 p_1676->g_1561 p_1676->g_1562 p_1676->g_87 p_1676->g_175 p_1676->g_32 p_1676->g_220 p_1676->g_1015 p_1676->g_375 p_1676->g_71
 */
int32_t  func_7(uint32_t  p_8, int32_t * p_9, uint16_t  p_10, struct S0 * p_1676)
{ /* block id: 556 */
    uint64_t l_1333 = 0x24F8467510B3CEFBL;
    int32_t l_1340 = 0x681C0C6EL;
    VECTOR(int8_t, 2) l_1345 = (VECTOR(int8_t, 2))(0x78L, 0x62L);
    int32_t l_1351 = 7L;
    uint16_t *l_1352[2][8][9] = {{{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87}},{{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87},{&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_594,&p_1676->g_594,&p_1676->g_87,&p_1676->g_87,(void*)0,&p_1676->g_87}}};
    int8_t *l_1354 = (void*)0;
    int16_t *l_1355[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint16_t, 4) l_1366 = (VECTOR(uint16_t, 4))(0x907AL, (VECTOR(uint16_t, 2))(0x907AL, 65535UL), 65535UL);
    uint32_t ***l_1371 = &p_1676->g_1147;
    uint64_t *l_1380 = &l_1333;
    VECTOR(uint8_t, 16) l_1387 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL, (VECTOR(uint8_t, 2))(1UL, 255UL), (VECTOR(uint8_t, 2))(1UL, 255UL), 1UL, 255UL, 1UL, 255UL);
    uint8_t **l_1389 = (void*)0;
    uint8_t ***l_1388 = &l_1389;
    uint32_t l_1390 = 0x5A6209ADL;
    uint8_t *l_1391 = (void*)0;
    uint8_t *l_1392 = (void*)0;
    uint8_t l_1393 = 252UL;
    uint64_t l_1394 = 0xB4DE8A14BC361FAFL;
    int64_t l_1558 = 0x26AE13FA97C91C7FL;
    int8_t **l_1559 = &p_1676->g_336;
    int8_t **l_1563 = &p_1676->g_336;
    int32_t l_1607 = 0x391117F8L;
    int32_t l_1608 = 0x36A70123L;
    int32_t l_1610 = 0L;
    VECTOR(int32_t, 8) l_1612 = (VECTOR(int32_t, 8))(0x7C85724DL, (VECTOR(int32_t, 4))(0x7C85724DL, (VECTOR(int32_t, 2))(0x7C85724DL, 0L), 0L), 0L, 0x7C85724DL, 0L);
    int8_t l_1616[5];
    int32_t *l_1630 = (void*)0;
    int32_t *l_1632 = (void*)0;
    int64_t **l_1640 = &p_1676->g_220;
    VECTOR(uint32_t, 16) l_1641 = (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x1F0CEF0DL), 0x1F0CEF0DL), 0x1F0CEF0DL, 4294967290UL, 0x1F0CEF0DL, (VECTOR(uint32_t, 2))(4294967290UL, 0x1F0CEF0DL), (VECTOR(uint32_t, 2))(4294967290UL, 0x1F0CEF0DL), 4294967290UL, 0x1F0CEF0DL, 4294967290UL, 0x1F0CEF0DL);
    VECTOR(uint32_t, 8) l_1642 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xC393D9B8L), 0xC393D9B8L), 0xC393D9B8L, 0UL, 0xC393D9B8L);
    int64_t **l_1647 = &p_1676->g_1646;
    uint8_t ****l_1652 = (void*)0;
    uint16_t l_1653 = 0xCEF2L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1616[i] = 0x41L;
    p_9 = func_46((l_1333 ^= (0x51C86287L <= ((VECTOR(int32_t, 4))(p_1676->g_1332.s1547)).z)), &p_1676->g_32[3], (safe_mul_func_int16_t_s_s((l_1340 = (safe_add_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), ((l_1351 = ((safe_lshift_func_uint16_t_u_s(p_10, 4)) | (l_1340 && (p_1676->g_211 = (5UL || ((safe_mul_func_int16_t_s_s(1L, (p_1676->g_1353 ^= ((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(l_1345.yx)), ((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_1676->g_1346.s24)).xxyyxyxxxyyxxyyy)).even, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x58L, (((~((safe_sub_func_uint32_t_u_u(p_8, (+(safe_add_func_int64_t_s_s(l_1345.y, (0x0EL >= 255UL)))))) && l_1351)) != l_1340) == p_8), ((VECTOR(int8_t, 8))(0x7EL)), 0L, ((VECTOR(int8_t, 2))((-1L))), 2L, 0x4AL, 1L)).s42)).xxxyyyyx))))))).s05))))), 0x66L, ((VECTOR(int8_t, 2))(0x4BL)), 0x11L, 0x32L, (-1L))).s4, 2)) , p_1676->g_594)))) , l_1340)))))) , l_1345.y)))), 1L)), &p_1676->g_32[3], l_1345.y, p_1676);
    if ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((((l_1354 != (void*)0) , (safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s((-9L), (((p_10 = ((VECTOR(uint16_t, 16))(0x6A8AL, ((VECTOR(uint16_t, 8))(0UL, ((VECTOR(uint16_t, 2))(l_1366.zx)), ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u((FAKE_DIVERGE(p_1676->group_2_offset, get_group_id(2), 10) == p_10), 10)) , (((((l_1371 != l_1371) > ((VECTOR(uint32_t, 2))(0xBC86BA3DL, 0x02CE36F9L)).odd) , (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((l_1351 = (safe_mul_func_int16_t_s_s((((*l_1380) = ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(0x1F9F216351D75391L, 0x6D068A11B1058645L)).hi, 0x82D3247D4B2C6CA5L)) != l_1366.z)) == ((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(0xA2L, 1UL, 5UL, 0xE8L)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 2))(l_1387.s96)).yyyyyxxxxyxxxyyy))), ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x29L, 255UL)).xyxx)).yzzwyyywwyyxwyzy)).lo, ((VECTOR(uint8_t, 8))(253UL, (l_1388 == (void*)0), 249UL, 254UL, FAKE_DIVERGE(p_1676->local_1_offset, get_local_id(1), 10), p_10, 0xB0L, 0xF0L))))).s1112444252033274))).sa2e3))))).xwwxzxyxyxzzxyyy))).sb, 12)) < GROUP_DIVERGE(2, 1)) < p_8) <= FAKE_DIVERGE(p_1676->local_0_offset, get_local_id(0), 10)), l_1390)), 0x00A65777L)) & p_10)), p_1676->g_236))), 5)), l_1387.s3))) < l_1393) , p_1676->g_288.z)) , l_1333), l_1340)), ((VECTOR(uint16_t, 2))(0x5E71L)), l_1390, ((VECTOR(uint16_t, 4))(0x6C69L)))).lo)).z, 0x4529L, 0xAF8CL, 0x4F56L)), ((VECTOR(uint16_t, 4))(65535UL))))), 1UL)), p_1676->g_828.s6, p_1676->g_1316.x, p_1676->g_171, 65527UL, GROUP_DIVERGE(2, 1), 0UL, 0xF7BFL)).s2) ^ l_1387.s2) , 247UL))), p_1676->g_1346.s5)), p_8))) , 0x6872C2BAA0EB336FL) <= p_8), 5)), l_1394)))
    { /* block id: 566 */
        uint16_t l_1503 = 65530UL;
        VECTOR(int16_t, 4) l_1547 = (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 6L), 6L);
        int32_t l_1568 = 7L;
        VECTOR(int8_t, 4) l_1572 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x06L), 0x06L);
        int64_t *l_1575 = &l_1558;
        int32_t l_1606 = 1L;
        int32_t l_1609 = 3L;
        int32_t l_1611 = 0x5EDA6BE1L;
        int32_t l_1613 = 0L;
        int32_t l_1614 = (-3L);
        int32_t l_1615[6][6][2] = {{{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L}},{{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L}},{{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L}},{{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L}},{{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L}},{{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L}}};
        int i, j, k;
        for (p_1676->g_236 = (-18); (p_1676->g_236 == 16); p_1676->g_236 = safe_add_func_int8_t_s_s(p_1676->g_236, 3))
        { /* block id: 569 */
            int32_t *l_1500 = &p_1676->g_32[3];
            int32_t *l_1501[9][1] = {{&p_1676->g_32[1]},{&p_1676->g_32[1]},{&p_1676->g_32[1]},{&p_1676->g_32[1]},{&p_1676->g_32[1]},{&p_1676->g_32[1]},{&p_1676->g_32[1]},{&p_1676->g_32[1]},{&p_1676->g_32[1]}};
            int16_t l_1502 = 8L;
            int i, j;
            if ((atomic_inc(&p_1676->l_atomic_input[23]) == 4))
            { /* block id: 571 */
                VECTOR(int32_t, 4) l_1397 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x74463617L), 0x74463617L);
                VECTOR(int32_t, 16) l_1398 = (VECTOR(int32_t, 16))(0x10A151DEL, (VECTOR(int32_t, 4))(0x10A151DEL, (VECTOR(int32_t, 2))(0x10A151DEL, 1L), 1L), 1L, 0x10A151DEL, 1L, (VECTOR(int32_t, 2))(0x10A151DEL, 1L), (VECTOR(int32_t, 2))(0x10A151DEL, 1L), 0x10A151DEL, 1L, 0x10A151DEL, 1L);
                int32_t l_1399 = (-1L);
                int64_t l_1400[5] = {0x0E5F21FBA7239802L,0x0E5F21FBA7239802L,0x0E5F21FBA7239802L,0x0E5F21FBA7239802L,0x0E5F21FBA7239802L};
                uint16_t l_1401 = 1UL;
                VECTOR(int32_t, 4) l_1402 = (VECTOR(int32_t, 4))(0x751AD11BL, (VECTOR(int32_t, 2))(0x751AD11BL, 0L), 0L);
                VECTOR(int64_t, 4) l_1403 = (VECTOR(int64_t, 4))(0x401054CE9B4A3C44L, (VECTOR(int64_t, 2))(0x401054CE9B4A3C44L, 0x306C67C55FD87597L), 0x306C67C55FD87597L);
                uint32_t l_1404[9][3][8] = {{{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL}},{{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL}},{{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL}},{{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL}},{{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL}},{{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL}},{{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL}},{{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL}},{{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL},{1UL,0x29205689L,0x515E521EL,4294967287UL,4294967287UL,1UL,0x78C40E33L,0xA728370FL}}};
                VECTOR(int32_t, 16) l_1405 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L), (VECTOR(int32_t, 2))((-1L), (-8L)), (VECTOR(int32_t, 2))((-1L), (-8L)), (-1L), (-8L), (-1L), (-8L));
                VECTOR(int32_t, 2) l_1406 = (VECTOR(int32_t, 2))(0x0C418623L, 0x361BC5CCL);
                VECTOR(int32_t, 16) l_1407 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-4L)), (-4L)), (-4L), 6L, (-4L), (VECTOR(int32_t, 2))(6L, (-4L)), (VECTOR(int32_t, 2))(6L, (-4L)), 6L, (-4L), 6L, (-4L));
                int64_t l_1408 = 0L;
                int64_t l_1474 = (-10L);
                int i, j, k;
                if ((l_1408 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(l_1397.xxyz)).yzwzyxxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((l_1399 |= ((VECTOR(int32_t, 2))(l_1398.sec)).even), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((-1L), 2L, 0x62AA26BCL, 0x334700F7L, (-10L), ((VECTOR(int32_t, 2))((-1L), 0x61724644L)), 0L)).s61)).even, (-1L), (-10L))).hi)).yyyyxyyy))).s1277522443621772)).lo)).s3, ((VECTOR(int32_t, 2))(0x726C388FL, 0x3904959FL)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x5CB9DEECL, 0x39EB7497L, 1L, (-9L), 0x3DCCCC05L, l_1400[4], 0x46EC18B8L, 0L)).lo)), 0x4E5F4173L, ((l_1401 = (-1L)) , (-1L)), ((VECTOR(int32_t, 8))((l_1404[2][1][3] = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(l_1402.zy)).yyxy, (int32_t)l_1403.y))).hi)).odd), ((VECTOR(int32_t, 2))((-7L), (-1L))), ((VECTOR(int32_t, 2))(l_1405.s8b)), ((VECTOR(int32_t, 2))(l_1406.xy)), 0x72DA5C06L)).s6, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x14D20CCEL, 0x6A5A3545L)).xxxxyxyx)).s23)), (-1L), ((VECTOR(int32_t, 2))(l_1407.s0c)), 0x7A096E30L)).s1))
                { /* block id: 576 */
                    int32_t l_1409[8][4][2];
                    int8_t l_1449 = 0x7BL;
                    uint64_t l_1450 = 0x4EF682C9483C27F5L;
                    uint16_t l_1451 = 0x2C40L;
                    uint16_t l_1452 = 0x1BCEL;
                    uint32_t l_1453 = 4294967295UL;
                    int64_t l_1454 = 4L;
                    int8_t l_1455 = (-4L);
                    int32_t *l_1456[8] = {&l_1409[4][0][0],&l_1409[4][0][0],&l_1409[4][0][0],&l_1409[4][0][0],&l_1409[4][0][0],&l_1409[4][0][0],&l_1409[4][0][0],&l_1409[4][0][0]};
                    int32_t *l_1457[4];
                    int32_t *l_1458 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_1409[i][j][k] = (-1L);
                        }
                    }
                    for (i = 0; i < 4; i++)
                        l_1457[i] = &l_1409[5][3][1];
                    if ((l_1409[5][3][1] = 5L))
                    { /* block id: 578 */
                        int32_t l_1410 = 0L;
                        uint64_t l_1411 = 0x5DCEBBB92A65B087L;
                        uint64_t l_1414 = 18446744073709551615UL;
                        uint8_t l_1415 = 5UL;
                        int64_t l_1416 = 5L;
                        --l_1411;
                        l_1406.x = (l_1398.sc = l_1414);
                        l_1407.sf = (l_1415 , l_1416);
                    }
                    else
                    { /* block id: 583 */
                        VECTOR(int64_t, 4) l_1417 = (VECTOR(int64_t, 4))(0x5F5A0807D358B86EL, (VECTOR(int64_t, 2))(0x5F5A0807D358B86EL, 0x3966E7586AD915C6L), 0x3966E7586AD915C6L);
                        VECTOR(int64_t, 4) l_1418 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-10L)), (-10L));
                        int32_t l_1419 = 8L;
                        uint16_t l_1420 = 5UL;
                        VECTOR(int64_t, 8) l_1421 = (VECTOR(int64_t, 8))(0x3C9F18841E1DB5AFL, (VECTOR(int64_t, 4))(0x3C9F18841E1DB5AFL, (VECTOR(int64_t, 2))(0x3C9F18841E1DB5AFL, 0L), 0L), 0L, 0x3C9F18841E1DB5AFL, 0L);
                        VECTOR(int32_t, 2) l_1422 = (VECTOR(int32_t, 2))(0x33427BC8L, 0L);
                        VECTOR(uint32_t, 2) l_1423 = (VECTOR(uint32_t, 2))(0x020506C6L, 4294967286UL);
                        VECTOR(int64_t, 4) l_1424 = (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 0L), 0L);
                        VECTOR(int64_t, 4) l_1425 = (VECTOR(int64_t, 4))(0x5E713A5EE14A1F4DL, (VECTOR(int64_t, 2))(0x5E713A5EE14A1F4DL, 0x7BEC2319645FDC29L), 0x7BEC2319645FDC29L);
                        uint32_t l_1426 = 0xD397463BL;
                        int16_t l_1427 = 0x597EL;
                        uint16_t l_1428 = 0x6B6EL;
                        uint32_t l_1429 = 4294967294UL;
                        VECTOR(int64_t, 4) l_1430 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x1E4C809E295AB061L), 0x1E4C809E295AB061L);
                        VECTOR(int32_t, 8) l_1431 = (VECTOR(int32_t, 8))(0x347F0184L, (VECTOR(int32_t, 4))(0x347F0184L, (VECTOR(int32_t, 2))(0x347F0184L, (-1L)), (-1L)), (-1L), 0x347F0184L, (-1L));
                        uint32_t l_1432 = 8UL;
                        uint64_t l_1433[2][3][4] = {{{0x15E659791502E7EAL,18446744073709551615UL,0x292E42DFADF88380L,0xEA6A096CECA5C963L},{0x15E659791502E7EAL,18446744073709551615UL,0x292E42DFADF88380L,0xEA6A096CECA5C963L},{0x15E659791502E7EAL,18446744073709551615UL,0x292E42DFADF88380L,0xEA6A096CECA5C963L}},{{0x15E659791502E7EAL,18446744073709551615UL,0x292E42DFADF88380L,0xEA6A096CECA5C963L},{0x15E659791502E7EAL,18446744073709551615UL,0x292E42DFADF88380L,0xEA6A096CECA5C963L},{0x15E659791502E7EAL,18446744073709551615UL,0x292E42DFADF88380L,0xEA6A096CECA5C963L}}};
                        uint64_t l_1434 = 0x33576A89BD439F83L;
                        int16_t l_1435[2];
                        uint32_t l_1436 = 0xAEF79AF6L;
                        int64_t l_1437 = 1L;
                        uint32_t l_1438 = 7UL;
                        int32_t l_1439 = 0x5D87FC9DL;
                        int64_t l_1440 = 0x3649015175556F9BL;
                        int64_t l_1441 = (-1L);
                        int32_t l_1442 = (-9L);
                        uint32_t l_1443[9] = {0xB7958B49L,0xB7958B49L,0xB7958B49L,0xB7958B49L,0xB7958B49L,0xB7958B49L,0xB7958B49L,0xB7958B49L,0xB7958B49L};
                        VECTOR(uint16_t, 16) l_1444 = (VECTOR(uint16_t, 16))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 65530UL), 65530UL), 65530UL, 2UL, 65530UL, (VECTOR(uint16_t, 2))(2UL, 65530UL), (VECTOR(uint16_t, 2))(2UL, 65530UL), 2UL, 65530UL, 2UL, 65530UL);
                        int64_t l_1445 = 1L;
                        int16_t l_1446 = 0x5578L;
                        int32_t *l_1447 = (void*)0;
                        int32_t *l_1448 = &l_1442;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_1435[i] = 0x6A83L;
                        l_1402.w &= (((l_1441 &= ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))((-1L), (-1L), 0x0559A740C9AD1146L, (-1L))).wzyyyzwywwzxxwyy, ((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_1417.yw)))).yyxxxyxxxyxxyxxx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 16))(l_1418.zwxzxxzxwxzyxxyw)), ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 16))(l_1419, l_1420, 0L, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(0x7DFF358111B07A94L, 0L, 1L, ((VECTOR(int64_t, 2))(l_1421.s05)), 0x286A0CEF79A5EA7AL, 1L, 0L)).s14)).yxyyyyyx)), ((VECTOR(int64_t, 2))(0L, 0x4C96CDC2ECE8747EL)), ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(1L, 0x46388789A30A33B8L)).xyyxyyxy)).odd, ((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 16))(l_1422.xxyyxyxxyyyxxyxx)), ((VECTOR(uint32_t, 2))(l_1423.xy)).xyyyyyxxxyxyxyxx))).s6a, (int64_t)((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 16))((-4L), ((VECTOR(int64_t, 2))(l_1424.zw)), (-7L), 0L, 0x37D657A92F97C2AFL, 0x4BEC2EBCAF5FD249L, 0x6EEA5EFA0A0B7242L, ((VECTOR(int64_t, 2))(l_1425.xw)), 0x60A06FB5DF3433A4L, 4L, 0x0D1D6F2E0E11E139L, ((VECTOR(int64_t, 2))(0x6CA6BE65BBD3F5FCL, 5L)), 1L)).odd, ((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))((l_1403.z |= l_1426), (((l_1427 , ((l_1428 , l_1429) , ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_1430.zzwwwyywwywywxxy)).s57)).lo)) , l_1431.s0) , l_1432), 0x7B26896CCA8797BCL, 0x2D35E38207577D32L)))).zyxyzwxxwwywwzzz, ((VECTOR(int64_t, 16))(0x4A7176CF85F6A534L))))).odd))))).s61))).xxyxyyyy, ((VECTOR(int64_t, 8))(0x343F09A42EF2C6E5L)), ((VECTOR(int64_t, 8))(0x11B37583DA6707AAL))))))).s7, (int64_t)l_1433[1][2][2]))), (-1L), 3L)))))))).w, 5L, 0x0E6B97F8A00AB4E3L, l_1434, l_1435[0], 0x36A6093031BB27BAL, (-1L), (-1L))).s2017446054211472, ((VECTOR(int64_t, 16))(0x3F7575B4BADE4F5DL))))).s92)), (int64_t)(-4L)))).hi, (-1L), (-2L))).even, ((VECTOR(int64_t, 8))((-10L)))))).s7145704270574631, (int64_t)l_1436))).lo)).s5527261212324667)).sda, (int64_t)0x4C7BEBB3C4F52180L, (int64_t)0x700ACE04FD271867L))), ((VECTOR(int64_t, 2))(0x233738F93E0A1A3BL))))).xxxyyyxy)).s31, ((VECTOR(int64_t, 2))(0x44EE416AD0F606EAL)), ((VECTOR(int64_t, 2))(0x7EB6BDDA676E291CL))))), (-1L), (-2L), ((VECTOR(int64_t, 4))(0x0C87BA63360816BEL)), l_1437, l_1438, l_1439, l_1440, 0x3DF422420BA489CCL, 5L, (-8L), 0x76AF6BE19C803769L)).sf574, ((VECTOR(int64_t, 4))((-1L))), ((VECTOR(int64_t, 4))(0L))))).zwywyzwzxzyyzwwy))).s5e)).xxxxxxyyxxyyxyxx))), ((VECTOR(int64_t, 16))(6L))))), ((VECTOR(int64_t, 16))((-8L)))))))).sb) , l_1442) , 0x52B09F65L);
                        l_1407.sd = (l_1397.x |= l_1443[7]);
                        l_1398.sd &= (((VECTOR(uint16_t, 16))(l_1444.sdd40ecfc627b3fa9)).sd , (l_1445 , l_1446));
                        l_1448 = l_1447;
                    }
                    l_1407.s3 |= ((l_1453 = (l_1452 = (l_1449 , (l_1450 , l_1451)))) , l_1454);
                    l_1397.w |= l_1455;
                    l_1458 = (l_1457[2] = l_1456[6]);
                }
                else
                { /* block id: 598 */
                    int32_t l_1459 = 0x1032AA7FL;
                    uint32_t l_1466 = 0x5C8A1E11L;
                    for (l_1459 = 0; (l_1459 < 11); l_1459 = safe_add_func_int16_t_s_s(l_1459, 7))
                    { /* block id: 601 */
                        uint32_t l_1462[8] = {4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL};
                        int16_t l_1465 = 5L;
                        int i;
                        l_1462[7]++;
                        l_1397.z |= (l_1405.sa = l_1465);
                    }
                    l_1459 &= 4L;
                    l_1402.x &= l_1466;
                    for (l_1466 = 20; (l_1466 == 24); l_1466 = safe_add_func_uint64_t_u_u(l_1466, 6))
                    { /* block id: 610 */
                        int32_t l_1470[2];
                        int32_t *l_1469[4][7] = {{&l_1470[1],&l_1470[1],(void*)0,&l_1470[1],&l_1470[1],&l_1470[1],&l_1470[1]},{&l_1470[1],&l_1470[1],(void*)0,&l_1470[1],&l_1470[1],&l_1470[1],&l_1470[1]},{&l_1470[1],&l_1470[1],(void*)0,&l_1470[1],&l_1470[1],&l_1470[1],&l_1470[1]},{&l_1470[1],&l_1470[1],(void*)0,&l_1470[1],&l_1470[1],&l_1470[1],&l_1470[1]}};
                        int32_t *l_1471 = &l_1470[0];
                        int32_t *l_1472 = &l_1470[0];
                        int32_t *l_1473 = &l_1470[0];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1470[i] = 0x04C8A717L;
                        l_1471 = l_1469[3][4];
                        l_1473 = l_1472;
                    }
                }
                if (((GROUP_DIVERGE(2, 1) , FAKE_DIVERGE(p_1676->local_0_offset, get_local_id(0), 10)) , (l_1474 , 9L)))
                { /* block id: 615 */
                    int8_t l_1475 = 0x18L;
                    int32_t l_1476[6][2] = {{0x3958C87FL,0x3958C87FL},{0x3958C87FL,0x3958C87FL},{0x3958C87FL,0x3958C87FL},{0x3958C87FL,0x3958C87FL},{0x3958C87FL,0x3958C87FL},{0x3958C87FL,0x3958C87FL}};
                    int i, j;
                    l_1407.s1 = (l_1475 , l_1476[4][1]);
                }
                else
                { /* block id: 617 */
                    int32_t l_1477[8] = {(-1L),6L,(-1L),(-1L),6L,(-1L),(-1L),6L};
                    uint64_t l_1490 = 1UL;
                    int8_t l_1496 = 0x0CL;
                    VECTOR(int32_t, 16) l_1497 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5E195AF8L), 0x5E195AF8L), 0x5E195AF8L, 0L, 0x5E195AF8L, (VECTOR(int32_t, 2))(0L, 0x5E195AF8L), (VECTOR(int32_t, 2))(0L, 0x5E195AF8L), 0L, 0x5E195AF8L, 0L, 0x5E195AF8L);
                    int i;
                    for (l_1477[7] = 0; (l_1477[7] == 27); l_1477[7] = safe_add_func_uint64_t_u_u(l_1477[7], 1))
                    { /* block id: 620 */
                        VECTOR(int32_t, 4) l_1481 = (VECTOR(int32_t, 4))(0x7384A8F0L, (VECTOR(int32_t, 2))(0x7384A8F0L, 0x7FAB0F91L), 0x7FAB0F91L);
                        int32_t *l_1480[8];
                        int32_t *l_1482 = (void*)0;
                        int32_t *l_1483[10][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        VECTOR(int32_t, 2) l_1484 = (VECTOR(int32_t, 2))(0L, 0x4FC8FF12L);
                        int32_t *l_1485 = (void*)0;
                        int32_t *l_1486 = (void*)0;
                        uint64_t l_1487 = 0x1681124E8FF5E761L;
                        int i, j;
                        for (i = 0; i < 8; i++)
                            l_1480[i] = (void*)0;
                        l_1483[0][0] = (l_1482 = l_1480[6]);
                        l_1405.s9 |= ((VECTOR(int32_t, 2))(l_1484.xx)).lo;
                        l_1486 = l_1485;
                        l_1487++;
                    }
                    if ((l_1406.y = l_1490))
                    { /* block id: 628 */
                        int32_t l_1491 = 0x012A3463L;
                        VECTOR(uint64_t, 2) l_1492 = (VECTOR(uint64_t, 2))(5UL, 0xCF64B7800453421FL);
                        int i;
                        l_1398.sc ^= 0x2328C911L;
                        ++l_1492.y;
                    }
                    else
                    { /* block id: 631 */
                        int32_t *l_1495 = (void*)0;
                        l_1495 = (void*)0;
                    }
                    l_1406.y ^= (l_1496 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_1497.s47907cb0)))).s65)).hi);
                }
                unsigned int result = 0;
                result += l_1397.w;
                result += l_1397.z;
                result += l_1397.y;
                result += l_1397.x;
                result += l_1398.sf;
                result += l_1398.se;
                result += l_1398.sd;
                result += l_1398.sc;
                result += l_1398.sb;
                result += l_1398.sa;
                result += l_1398.s9;
                result += l_1398.s8;
                result += l_1398.s7;
                result += l_1398.s6;
                result += l_1398.s5;
                result += l_1398.s4;
                result += l_1398.s3;
                result += l_1398.s2;
                result += l_1398.s1;
                result += l_1398.s0;
                result += l_1399;
                int l_1400_i0;
                for (l_1400_i0 = 0; l_1400_i0 < 5; l_1400_i0++) {
                    result += l_1400[l_1400_i0];
                }
                result += l_1401;
                result += l_1402.w;
                result += l_1402.z;
                result += l_1402.y;
                result += l_1402.x;
                result += l_1403.w;
                result += l_1403.z;
                result += l_1403.y;
                result += l_1403.x;
                int l_1404_i0, l_1404_i1, l_1404_i2;
                for (l_1404_i0 = 0; l_1404_i0 < 9; l_1404_i0++) {
                    for (l_1404_i1 = 0; l_1404_i1 < 3; l_1404_i1++) {
                        for (l_1404_i2 = 0; l_1404_i2 < 8; l_1404_i2++) {
                            result += l_1404[l_1404_i0][l_1404_i1][l_1404_i2];
                        }
                    }
                }
                result += l_1405.sf;
                result += l_1405.se;
                result += l_1405.sd;
                result += l_1405.sc;
                result += l_1405.sb;
                result += l_1405.sa;
                result += l_1405.s9;
                result += l_1405.s8;
                result += l_1405.s7;
                result += l_1405.s6;
                result += l_1405.s5;
                result += l_1405.s4;
                result += l_1405.s3;
                result += l_1405.s2;
                result += l_1405.s1;
                result += l_1405.s0;
                result += l_1406.y;
                result += l_1406.x;
                result += l_1407.sf;
                result += l_1407.se;
                result += l_1407.sd;
                result += l_1407.sc;
                result += l_1407.sb;
                result += l_1407.sa;
                result += l_1407.s9;
                result += l_1407.s8;
                result += l_1407.s7;
                result += l_1407.s6;
                result += l_1407.s5;
                result += l_1407.s4;
                result += l_1407.s3;
                result += l_1407.s2;
                result += l_1407.s1;
                result += l_1407.s0;
                result += l_1408;
                result += l_1474;
                atomic_add(&p_1676->l_special_values[23], result);
            }
            else
            { /* block id: 636 */
                (1 + 1);
            }
            if ((atomic_inc(&p_1676->l_atomic_input[5]) == 5))
            { /* block id: 640 */
                int16_t l_1498 = 1L;
                int16_t l_1499 = 0x439AL;
                l_1499 |= l_1498;
                unsigned int result = 0;
                result += l_1498;
                result += l_1499;
                atomic_add(&p_1676->l_special_values[5], result);
            }
            else
            { /* block id: 642 */
                (1 + 1);
            }
            ++l_1503;
            if ((atomic_inc(&p_1676->g_atomic_input[33 * get_linear_group_id() + 28]) == 1))
            { /* block id: 647 */
                int32_t l_1506 = 0x32F11DE5L;
                for (l_1506 = (-7); (l_1506 < (-13)); l_1506 = safe_sub_func_uint32_t_u_u(l_1506, 3))
                { /* block id: 650 */
                    uint8_t l_1509 = 0xA5L;
                    VECTOR(int32_t, 4) l_1511 = (VECTOR(int32_t, 4))(0x2C30CE25L, (VECTOR(int32_t, 2))(0x2C30CE25L, 0x72CBDF4DL), 0x72CBDF4DL);
                    int32_t *l_1510 = (void*)0;
                    int32_t *l_1512 = (void*)0;
                    int32_t l_1513 = 0x111AB706L;
                    uint64_t l_1514 = 0x5E8EC11291E230BAL;
                    int8_t l_1515 = 7L;
                    int i;
                    l_1509 ^= 0x6B052EF2L;
                    l_1512 = l_1510;
                    l_1514 = l_1513;
                    if (l_1515)
                    { /* block id: 654 */
                        uint32_t l_1516 = 1UL;
                        VECTOR(int32_t, 16) l_1517 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 1L), 1L), 1L, 3L, 1L, (VECTOR(int32_t, 2))(3L, 1L), (VECTOR(int32_t, 2))(3L, 1L), 3L, 1L, 3L, 1L);
                        int64_t l_1518 = (-1L);
                        int64_t l_1519 = 0x3EBD505BB2DDE1E9L;
                        VECTOR(int32_t, 8) l_1520 = (VECTOR(int32_t, 8))(0x35C89254L, (VECTOR(int32_t, 4))(0x35C89254L, (VECTOR(int32_t, 2))(0x35C89254L, (-7L)), (-7L)), (-7L), 0x35C89254L, (-7L));
                        VECTOR(int32_t, 16) l_1521 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 4L), 4L), 4L, 4L, 4L, (VECTOR(int32_t, 2))(4L, 4L), (VECTOR(int32_t, 2))(4L, 4L), 4L, 4L, 4L, 4L);
                        int32_t l_1522 = 5L;
                        VECTOR(int32_t, 16) l_1523 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x3D3B292EL), 0x3D3B292EL), 0x3D3B292EL, 3L, 0x3D3B292EL, (VECTOR(int32_t, 2))(3L, 0x3D3B292EL), (VECTOR(int32_t, 2))(3L, 0x3D3B292EL), 3L, 0x3D3B292EL, 3L, 0x3D3B292EL);
                        int16_t l_1524 = 0x24E0L;
                        uint64_t l_1525 = 0UL;
                        int i;
                        l_1511.x = l_1516;
                        l_1525 = ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(l_1517.s75fd)).odd, ((VECTOR(int32_t, 8))(0L, 0x60A801F2L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1518, (l_1513 = l_1519), ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1520.s7717)).even)).xxyyyxxxyyyyyxyx)).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x70148FE9L, ((VECTOR(int32_t, 16))(l_1521.se594ae1dde5d884a)).se, 2L, (-1L))).ywwzwwww))))), (l_1511.y = ((VECTOR(int32_t, 4))(l_1522, 0x34EA3775L, (-1L), 0L)).z), ((VECTOR(int32_t, 2))(l_1523.s59)).hi, l_1524, ((VECTOR(int32_t, 2))((-8L), 0x34B9C581L)), 1L)).s50)).yyxy)), (-10L), 0x1A4DD318L)).s23))).even;
                    }
                    else
                    { /* block id: 659 */
                        uint32_t l_1526 = 7UL;
                        uint64_t l_1527[5][9] = {{18446744073709551615UL,18446744073709551615UL,8UL,0x00280A732F0F7CBBL,1UL,0x00280A732F0F7CBBL,8UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,8UL,0x00280A732F0F7CBBL,1UL,0x00280A732F0F7CBBL,8UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,8UL,0x00280A732F0F7CBBL,1UL,0x00280A732F0F7CBBL,8UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,8UL,0x00280A732F0F7CBBL,1UL,0x00280A732F0F7CBBL,8UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,8UL,0x00280A732F0F7CBBL,1UL,0x00280A732F0F7CBBL,8UL,18446744073709551615UL,18446744073709551615UL}};
                        uint8_t l_1530 = 253UL;
                        uint64_t l_1533 = 4UL;
                        int i, j;
                        l_1511.w &= l_1526;
                        --l_1527[0][0];
                        l_1530++;
                        l_1533++;
                    }
                }
                for (l_1506 = 0; (l_1506 > 24); l_1506 = safe_add_func_uint64_t_u_u(l_1506, 6))
                { /* block id: 668 */
                    uint32_t l_1538 = 0x21DF31F1L;
                    int64_t l_1539 = 0L;
                    uint32_t l_1540[5];
                    int32_t l_1541 = 0x28A127A7L;
                    int8_t l_1542 = 8L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1540[i] = 4294967295UL;
                    l_1539 ^= l_1538;
                    l_1542 = (l_1540[3] , l_1541);
                }
                unsigned int result = 0;
                result += l_1506;
                atomic_add(&p_1676->g_special_values[33 * get_linear_group_id() + 28], result);
            }
            else
            { /* block id: 672 */
                (1 + 1);
            }
        }
        for (l_1340 = 0; (l_1340 != (-23)); l_1340 = safe_sub_func_uint8_t_u_u(l_1340, 9))
        { /* block id: 678 */
            VECTOR(int8_t, 4) l_1546 = (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x19L), 0x19L);
            uint64_t **l_1550[8];
            uint64_t ***l_1551 = &l_1550[1];
            VECTOR(uint64_t, 16) l_1552 = (VECTOR(uint64_t, 16))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 6UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(6UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(6UL, 18446744073709551615UL), 6UL, 18446744073709551615UL, 6UL, 18446744073709551615UL);
            VECTOR(int32_t, 16) l_1553 = (VECTOR(int32_t, 16))(0x15E72C05L, (VECTOR(int32_t, 4))(0x15E72C05L, (VECTOR(int32_t, 2))(0x15E72C05L, 0x6F0DE740L), 0x6F0DE740L), 0x6F0DE740L, 0x15E72C05L, 0x6F0DE740L, (VECTOR(int32_t, 2))(0x15E72C05L, 0x6F0DE740L), (VECTOR(int32_t, 2))(0x15E72C05L, 0x6F0DE740L), 0x15E72C05L, 0x6F0DE740L, 0x15E72C05L, 0x6F0DE740L);
            int8_t ***l_1560[5][8][5] = {{{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559}},{{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559}},{{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559}},{{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559}},{{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559},{&l_1559,&l_1559,&l_1559,(void*)0,&l_1559}}};
            uint8_t *l_1566 = &l_1393;
            int32_t *l_1567[5];
            VECTOR(int8_t, 16) l_1571 = (VECTOR(int8_t, 16))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 1L), 1L), 1L, 3L, 1L, (VECTOR(int8_t, 2))(3L, 1L), (VECTOR(int8_t, 2))(3L, 1L), 3L, 1L, 3L, 1L);
            int64_t *l_1573[4];
            VECTOR(int16_t, 2) l_1595 = (VECTOR(int16_t, 2))(0L, 0x4AB6L);
            uint16_t l_1617 = 1UL;
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_1550[i] = (void*)0;
            for (i = 0; i < 5; i++)
                l_1567[i] = &p_1676->g_32[1];
            for (i = 0; i < 4; i++)
                l_1573[i] = (void*)0;
            if ((l_1568 = ((((VECTOR(int8_t, 4))(0x65L, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_1676->g_1545.zzzw)).zzwyzxzwxzzyzyyy)).s4b, ((VECTOR(int8_t, 2))(l_1546.zy))))), 0x03L)).w == ((((*l_1380) = (p_8 < ((FAKE_DIVERGE(p_1676->local_0_offset, get_local_id(0), 10) != (((l_1340 & ((VECTOR(int16_t, 16))(l_1547.wwwwwyyzwxxzxyyw)).s9) , ((p_1676->g_1548 != ((*l_1551) = l_1550[4])) < ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_1552.sdb24)).zyxxxzzzzwwxxxxx)).sc594)).z)) || ((VECTOR(int32_t, 8))(l_1553.sb539ed3a)).s0)) == (safe_mod_func_uint64_t_u_u(((((((((VECTOR(int32_t, 2))((-3L), 0x5757BBABL)).odd < (l_1351 ^= (safe_mul_func_uint8_t_u_u(l_1558, ((p_1676->g_1561 = l_1559) == (l_1563 = (p_1676->g_1562[1][2] = &p_1676->g_336))))))) <= 0x540BL) >= (safe_div_func_int64_t_s_s((l_1547.z || l_1503), 0x2FF1F865D0E2D069L))) < l_1547.x) , (-1L)) == 0x668CL), p_10))))) , l_1566) == l_1566)) , l_1553.sa)))
            { /* block id: 686 */
                int64_t **l_1574 = &l_1573[0];
                int32_t l_1576[9][5] = {{(-2L),0x5A77492FL,0x2A5B0EB9L,0x0F22BD76L,0x5A77492FL},{(-2L),0x5A77492FL,0x2A5B0EB9L,0x0F22BD76L,0x5A77492FL},{(-2L),0x5A77492FL,0x2A5B0EB9L,0x0F22BD76L,0x5A77492FL},{(-2L),0x5A77492FL,0x2A5B0EB9L,0x0F22BD76L,0x5A77492FL},{(-2L),0x5A77492FL,0x2A5B0EB9L,0x0F22BD76L,0x5A77492FL},{(-2L),0x5A77492FL,0x2A5B0EB9L,0x0F22BD76L,0x5A77492FL},{(-2L),0x5A77492FL,0x2A5B0EB9L,0x0F22BD76L,0x5A77492FL},{(-2L),0x5A77492FL,0x2A5B0EB9L,0x0F22BD76L,0x5A77492FL},{(-2L),0x5A77492FL,0x2A5B0EB9L,0x0F22BD76L,0x5A77492FL}};
                uint8_t **l_1593 = &l_1566;
                VECTOR(int64_t, 4) l_1598 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x566EB9541065ACA3L), 0x566EB9541065ACA3L);
                int64_t *l_1603 = &p_1676->g_427;
                int64_t *l_1605 = &p_1676->g_427;
                int64_t **l_1604 = &l_1605;
                int i, j;
                l_1568 ^= (safe_sub_func_uint64_t_u_u(p_10, (((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(l_1571.s1c3b406c9a64f41f)).hi, ((VECTOR(int8_t, 4))(l_1572.wywz)).wxyxyywx))).s2 == ((l_1576[7][1] &= ((*l_1575) = (((*l_1574) = l_1573[0]) != l_1575))) <= 0UL))));
                p_1676->g_175.s3 |= ((safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_1676->g_1585.s9b36807f025f7d3e)).s9c)).lo, (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_1676->g_1586.s41767763)).odd)).z >= (safe_lshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((void*)0 != l_1593), (p_1676->g_87 ^= ((((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 16))(p_1676->g_1594.xxyxxyyxyxyxyyxx)).s50, ((VECTOR(int16_t, 8))(l_1595.yxxxxyyx)).s67))).hi != 0x02EAL) < ((((((((safe_mod_func_uint32_t_u_u((((VECTOR(int64_t, 2))(l_1598.wz)).hi >= (safe_mul_func_uint16_t_u_u(p_1676->g_1200.s0, ((safe_add_func_uint8_t_u_u((l_1598.w , p_1676->g_1015.s0), ((l_1340 , l_1603) == ((*l_1604) = (void*)0)))) & p_1676->g_1020.x)))), 1L)) , p_1676->g_236) == p_1676->g_1280.s3) > 0UL) | p_1676->g_340) , &p_1676->g_1561) == (void*)0) & 0x09B6C3D4L))))), p_10)), 4))))), p_1676->g_1136.z)) , l_1351) , 0x51L), p_10)) & p_1676->g_424.s4), FAKE_DIVERGE(p_1676->local_0_offset, get_local_id(0), 10))) | p_8);
            }
            else
            { /* block id: 694 */
                l_1568 &= l_1547.x;
            }
            --l_1617;
        }
    }
    else
    { /* block id: 699 */
        int8_t ***l_1623[2];
        int8_t ****l_1622 = &l_1623[0];
        int8_t ***l_1625 = &p_1676->g_1562[0][0];
        int8_t ****l_1624 = &l_1625;
        int32_t *l_1626 = (void*)0;
        int32_t *l_1627 = &p_1676->g_32[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1623[i] = &l_1559;
        (*l_1627) ^= (safe_rshift_func_uint8_t_u_s((((*l_1622) = &p_1676->g_1562[1][0]) == ((*l_1624) = &l_1559)), 6));
        return (*l_1627);
    }
    (*p_1676->g_1633) = (safe_lshift_func_int16_t_s_u(p_10, p_1676->g_410.s0));
    if ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((&l_1558 == (((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(9L, (-1L), 0x21L, (-1L))).y, 4)) || p_8) , ((*l_1640) = p_1676->g_220))) || (l_1612.s3 = (((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x8DC4BE8BL, 1UL)).odd, 0x07F888C7L, (FAKE_DIVERGE(p_1676->global_1_offset, get_global_id(1), 10) < FAKE_DIVERGE(p_1676->local_2_offset, get_local_id(2), 10)), 1UL, ((VECTOR(uint32_t, 8))(l_1641.s16197150)), ((VECTOR(uint32_t, 4))(l_1642.s5665)))).sb != ((safe_mul_func_uint8_t_u_u((p_1676->g_1645 == l_1647), l_1607)) , 0x7995845DL)) , ((safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((~(p_1676->g_1015.s4 = ((l_1388 = &l_1389) == &p_1676->g_299[1][1]))), p_1676->g_1200.s6)) && p_8), l_1653)) , &p_1676->g_220)) != &p_1676->g_220))), 2)), 0L)))
    { /* block id: 710 */
        uint8_t ***l_1658 = &l_1389;
        uint8_t ****l_1659 = (void*)0;
        uint8_t ****l_1660 = &l_1658;
        int32_t l_1661[4][7] = {{(-8L),(-8L),0L,(-1L),0x48DD9986L,(-1L),0L},{(-8L),(-8L),0L,(-1L),0x48DD9986L,(-1L),0L},{(-8L),(-8L),0L,(-1L),0x48DD9986L,(-1L),0L},{(-8L),(-8L),0L,(-1L),0x48DD9986L,(-1L),0L}};
        int32_t l_1662 = 1L;
        int32_t l_1665[8] = {9L,9L,9L,9L,9L,9L,9L,9L};
        int i, j;
        atomic_add(&p_1676->g_atomic_reduction[get_linear_group_id()], (((((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s((p_1676->g_1214.x , ((-10L) > (((*l_1660) = l_1658) != &p_1676->g_299[0][1]))), l_1661[0][2])) != p_8), (l_1662 = (-1L)))) != (l_1665[0] = (safe_sub_func_int8_t_s_s(((*p_1676->g_1645) != (*p_1676->g_1645)), 0x0DL)))) != p_10) , (void*)0) == (void*)0) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1676->v_collective += p_1676->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    else
    { /* block id: 715 */
        uint32_t l_1666 = 0x0389319DL;
        int32_t **l_1674[3][9][2] = {{{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632}},{{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632}},{{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632},{(void*)0,&l_1632}}};
        int i, j, k;
        (*p_1676->g_1669) = func_20((l_1666 , (l_1666 ^ (-9L))), (*p_1676->g_374), p_9, &p_1676->g_32[2], p_1676);
        (*p_1676->g_1670) = l_1666;
        for (p_1676->g_71 = (-18); (p_1676->g_71 != 24); ++p_1676->g_71)
        { /* block id: 720 */
            int8_t l_1673 = (-8L);
            return l_1673;
        }
        p_9 = p_9;
    }
    return p_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_1676->g_374 p_1676->g_375 p_1676->g_996 p_1676->g_211 p_1676->g_171 p_1676->g_722 p_1676->g_1316 p_1676->g_1280 p_1676->g_1103 p_1676->g_32 p_1676->g_1020 p_1676->g_495 p_1676->g_271 p_1676->g_143 p_1676->g_1013
 * writes: p_1676->g_31 p_1676->g_211 p_1676->g_171 p_1676->g_71 p_1676->g_1020 p_1676->g_358
 */
int32_t * func_18(int32_t  p_19, struct S0 * p_1676)
{ /* block id: 431 */
    int32_t *l_983 = (void*)0;
    int32_t *l_984 = &p_1676->g_32[3];
    int32_t *l_985 = (void*)0;
    int32_t *l_986 = &p_1676->g_32[2];
    int32_t *l_987 = &p_1676->g_32[3];
    int32_t *l_988 = (void*)0;
    int32_t l_989 = 1L;
    int32_t *l_990 = &l_989;
    int32_t *l_991 = &l_989;
    int32_t *l_992[5][4] = {{(void*)0,(void*)0,&l_989,&l_989},{(void*)0,(void*)0,&l_989,&l_989},{(void*)0,(void*)0,&l_989,&l_989},{(void*)0,(void*)0,&l_989,&l_989},{(void*)0,(void*)0,&l_989,&l_989}};
    uint8_t l_993[2];
    uint8_t **l_1044 = (void*)0;
    uint8_t ***l_1043 = &l_1044;
    uint8_t ***l_1048 = &l_1044;
    VECTOR(int64_t, 4) l_1072 = (VECTOR(int64_t, 4))(0x3B1F2F945A48E9B5L, (VECTOR(int64_t, 2))(0x3B1F2F945A48E9B5L, 0x7E0C1C4F4364A1E8L), 0x7E0C1C4F4364A1E8L);
    int16_t l_1079 = 0x3CF6L;
    uint16_t *l_1115[1];
    uint32_t l_1139 = 4294967287UL;
    VECTOR(uint16_t, 16) l_1167 = (VECTOR(uint16_t, 16))(0x778CL, (VECTOR(uint16_t, 4))(0x778CL, (VECTOR(uint16_t, 2))(0x778CL, 0x40B9L), 0x40B9L), 0x40B9L, 0x778CL, 0x40B9L, (VECTOR(uint16_t, 2))(0x778CL, 0x40B9L), (VECTOR(uint16_t, 2))(0x778CL, 0x40B9L), 0x778CL, 0x40B9L, 0x778CL, 0x40B9L);
    int32_t *l_1194 = &p_1676->g_32[1];
    VECTOR(int16_t, 4) l_1201 = (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x1F03L), 0x1F03L);
    int32_t l_1252 = 8L;
    uint32_t **l_1312 = &p_1676->g_1148;
    uint32_t ***l_1313 = &l_1312;
    VECTOR(int64_t, 16) l_1317 = (VECTOR(int64_t, 16))(0x6469BA839458ABBEL, (VECTOR(int64_t, 4))(0x6469BA839458ABBEL, (VECTOR(int64_t, 2))(0x6469BA839458ABBEL, (-1L)), (-1L)), (-1L), 0x6469BA839458ABBEL, (-1L), (VECTOR(int64_t, 2))(0x6469BA839458ABBEL, (-1L)), (VECTOR(int64_t, 2))(0x6469BA839458ABBEL, (-1L)), 0x6469BA839458ABBEL, (-1L), 0x6469BA839458ABBEL, (-1L));
    VECTOR(uint64_t, 4) l_1324 = (VECTOR(uint64_t, 4))(0x4FB5816BD5F1E6BAL, (VECTOR(uint64_t, 2))(0x4FB5816BD5F1E6BAL, 0xAC0B4469F430A7CDL), 0xAC0B4469F430A7CDL);
    int16_t *l_1325 = (void*)0;
    int16_t *l_1326[7][1];
    uint32_t **l_1327 = (void*)0;
    int16_t l_1328 = (-2L);
    int32_t *l_1329 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
        l_993[i] = 0xF9L;
    for (i = 0; i < 1; i++)
        l_1115[i] = &p_1676->g_87;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_1326[i][j] = (void*)0;
    }
    --l_993[1];
    (*p_1676->g_996) = (*p_1676->g_374);
    for (p_1676->g_211 = 0; (p_1676->g_211 >= 19); ++p_1676->g_211)
    { /* block id: 436 */
        uint32_t l_1007 = 0x21B9AAE6L;
        VECTOR(int16_t, 4) l_1012 = (VECTOR(int16_t, 4))(0x7618L, (VECTOR(int16_t, 2))(0x7618L, 4L), 4L);
        int32_t l_1023[4] = {0x49D2A1AAL,0x49D2A1AAL,0x49D2A1AAL,0x49D2A1AAL};
        uint64_t l_1091[4];
        VECTOR(uint64_t, 2) l_1134 = (VECTOR(uint64_t, 2))(0x5FEE40E43BEAFF86L, 1UL);
        uint32_t *l_1144 = &p_1676->g_207;
        uint32_t **l_1143[5];
        VECTOR(int16_t, 2) l_1202 = (VECTOR(int16_t, 2))(1L, (-1L));
        VECTOR(int16_t, 16) l_1203 = (VECTOR(int16_t, 16))(0x6A5BL, (VECTOR(int16_t, 4))(0x6A5BL, (VECTOR(int16_t, 2))(0x6A5BL, (-1L)), (-1L)), (-1L), 0x6A5BL, (-1L), (VECTOR(int16_t, 2))(0x6A5BL, (-1L)), (VECTOR(int16_t, 2))(0x6A5BL, (-1L)), 0x6A5BL, (-1L), 0x6A5BL, (-1L));
        uint16_t l_1208 = 65531UL;
        int64_t l_1251 = 0x7ACFB2CB33BE2589L;
        VECTOR(uint16_t, 16) l_1278 = (VECTOR(uint16_t, 16))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 65534UL), 65534UL), 65534UL, 65533UL, 65534UL, (VECTOR(uint16_t, 2))(65533UL, 65534UL), (VECTOR(uint16_t, 2))(65533UL, 65534UL), 65533UL, 65534UL, 65533UL, 65534UL);
        int64_t l_1294 = 0x634AEFE96F50267FL;
        int8_t l_1300 = 0x52L;
        uint32_t l_1307 = 2UL;
        int i;
        for (i = 0; i < 4; i++)
            l_1091[i] = 18446744073709551610UL;
        for (i = 0; i < 5; i++)
            l_1143[i] = &l_1144;
        for (p_1676->g_171 = 0; (p_1676->g_171 > 23); p_1676->g_171 = safe_add_func_int64_t_s_s(p_1676->g_171, 1))
        { /* block id: 439 */
            VECTOR(int32_t, 16) l_1019 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
            uint8_t **l_1042 = (void*)0;
            uint8_t ***l_1041[2][10][8] = {{{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042}},{{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042},{&l_1042,&l_1042,&l_1042,&l_1042,(void*)0,&l_1042,&l_1042,&l_1042}}};
            int32_t **l_1049 = &l_987;
            uint16_t *l_1116 = &p_1676->g_236;
            VECTOR(int64_t, 4) l_1119 = (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 0x1D7C6218A05060A6L), 0x1D7C6218A05060A6L);
            int32_t l_1140 = 0x4DF18B0CL;
            int32_t l_1152 = 0x734ACB8CL;
            int32_t l_1153 = 0x726D9988L;
            uint64_t l_1154 = 1UL;
            VECTOR(uint16_t, 2) l_1183 = (VECTOR(uint16_t, 2))(0UL, 0xCF9FL);
            int32_t l_1301 = (-1L);
            int64_t l_1302[4][7] = {{0x5CDC3424E6B20B09L,6L,0x5CDC3424E6B20B09L,0x5CDC3424E6B20B09L,6L,0x5CDC3424E6B20B09L,0x5CDC3424E6B20B09L},{0x5CDC3424E6B20B09L,6L,0x5CDC3424E6B20B09L,0x5CDC3424E6B20B09L,6L,0x5CDC3424E6B20B09L,0x5CDC3424E6B20B09L},{0x5CDC3424E6B20B09L,6L,0x5CDC3424E6B20B09L,0x5CDC3424E6B20B09L,6L,0x5CDC3424E6B20B09L,0x5CDC3424E6B20B09L},{0x5CDC3424E6B20B09L,6L,0x5CDC3424E6B20B09L,0x5CDC3424E6B20B09L,6L,0x5CDC3424E6B20B09L,0x5CDC3424E6B20B09L}};
            int32_t l_1303 = 0x5FF2D636L;
            int32_t l_1304 = 1L;
            int32_t l_1305 = 0x6D996F2BL;
            int32_t l_1306 = (-2L);
            int i, j, k;
            (1 + 1);
        }
    }
    l_1328 |= (((safe_lshift_func_int8_t_s_s((GROUP_DIVERGE(0, 1) | ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((((*p_1676->g_722) = (((*l_1313) = l_1312) != (void*)0)) , (0UL || ((safe_sub_func_int64_t_s_s((((((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 4))(p_1676->g_1316.zxzx)).zyzyxzwxzyxxyxzz, ((VECTOR(int64_t, 16))(l_1317.sefd75ab383a57b9b))))).sb && (safe_rshift_func_int16_t_s_s((FAKE_DIVERGE(p_1676->local_0_offset, get_local_id(0), 10) != ((*l_990) = (255UL || p_19))), (p_1676->g_358.y = (safe_div_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_1324.yy)).xxxxyyxyxxyyxxxx)).hi))), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(((p_1676->g_1280.s5 == p_19) ^ 0x5158C61CL), ((p_1676->g_1020.x |= ((p_1676->g_1103.s7 | (*l_984)) , p_19)) , p_1676->g_495.s4), 0x0B686602L, GROUP_DIVERGE(1, 1), ((VECTOR(uint32_t, 4))(0xEECBDA3DL)), 0x049C02C9L, p_1676->g_271.s1, ((VECTOR(uint32_t, 2))(4294967295UL)), p_1676->g_143.y, 0x2FFB3B0AL, 4294967295UL, 4294967295UL)).sc2, ((VECTOR(uint32_t, 2))(0xF8BD7C12L))))), ((VECTOR(uint32_t, 2))(1UL))))).xyyxxyyy)).s4711114576060376)).sc, 18446744073709551607UL, 0xA714DDEB7EF80724L, p_1676->g_1013.y, 0x44E24D84FA430C44L, ((VECTOR(uint64_t, 2))(4UL)), 18446744073709551608UL)).sc81c)), ((VECTOR(uint64_t, 4))(18446744073709551612UL))))), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 18446744073709551615UL, 18446744073709551615UL, 0UL, ((VECTOR(uint64_t, 2))(0x548279077CA4D26AL)), ((VECTOR(uint64_t, 2))(0xA840C742F935BBA7L)), ((VECTOR(uint64_t, 2))(0x741881CA19CE4F61L)), 1UL)).s6, p_19)), (-1L))))))) , 5L) ^ p_19), 0x444551E51B64A8BDL)) == p_19))) , p_19), ((VECTOR(int32_t, 2))(1L)), 0x59203628L)).xxwwxwwz, ((VECTOR(int32_t, 8))(0x56DF4EC1L)), ((VECTOR(int32_t, 8))(0L)))))))).s4), 1)) , (void*)0) != l_1327);
    return l_1329;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_20(uint8_t  p_21, int32_t * p_22, int32_t * p_23, int32_t * p_24, struct S0 * p_1676)
{ /* block id: 428 */
    int32_t *l_980[1];
    int i;
    for (i = 0; i < 1; i++)
        l_980[i] = (void*)0;
    return l_980[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1676->g_433 p_1676->g_207 p_1676->g_127 p_1676->g_32 p_1676->g_585 p_1676->g_31 p_1676->g_374 p_1676->g_375
 * writes: p_1676->g_410 p_1676->g_32
 */
int32_t * func_25(int32_t * p_26, int32_t * p_27, int32_t * p_28, int32_t  p_29, int32_t * p_30, struct S0 * p_1676)
{ /* block id: 419 */
    uint16_t *l_960[3];
    VECTOR(int8_t, 2) l_967 = (VECTOR(int8_t, 2))(0x64L, 0x15L);
    VECTOR(uint32_t, 8) l_972 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xC90026A6L), 0xC90026A6L), 0xC90026A6L, 4294967295UL, 0xC90026A6L);
    int8_t *l_973 = (void*)0;
    int8_t *l_974 = (void*)0;
    int64_t *l_975 = (void*)0;
    int64_t *l_976 = (void*)0;
    int32_t l_977 = 0x1B5C2A3BL;
    int i;
    for (i = 0; i < 3; i++)
        l_960[i] = &p_1676->g_236;
    (*p_1676->g_31) = (safe_mod_func_uint8_t_u_u((((VECTOR(uint16_t, 8))(0x7E4DL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 8))((p_1676->g_410.s2 = 65527UL), 0x4578L, 65535UL, 0xA99FL, ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((0L && (l_977 |= ((safe_mul_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(4L, 5)), ((((0xA0AB9B20L != ((safe_mul_func_uint8_t_u_u(((p_29 >= (((l_973 = ((((VECTOR(int8_t, 4))(l_967.xyxy)).z , (safe_sub_func_uint32_t_u_u((*p_1676->g_433), (safe_sub_func_uint32_t_u_u(0UL, ((VECTOR(uint32_t, 2))(l_972.s74)).hi))))) , l_973)) != l_974) < (-8L))) && l_967.x), 0x55L)) >= p_1676->g_127.x)) , (*p_30)) < 0x52B8D85FL) != 7UL))) > p_29))) < p_1676->g_585.y), ((VECTOR(uint8_t, 2))(255UL)), 9UL)).zzwwyyzx)).hi, (uint8_t)0xDAL))).wzywxwwwxxyxzxwy, ((VECTOR(uint8_t, 16))(0x31L))))).s0c, ((VECTOR(uint16_t, 2))(0x49D7L))))), 3UL, 65535UL)).s06, ((VECTOR(uint16_t, 2))(1UL))))), ((VECTOR(uint16_t, 2))(0x73BFL))))).yxyx)), 65535UL, 65535UL, 8UL)).s5 <= 0x356FL), p_29));
    (*p_1676->g_31) = (*p_1676->g_31);
    l_977 |= ((*p_30) = (safe_mul_func_int8_t_s_s((4294967287UL > 0x27D0BD54L), l_967.x)));
    return (*p_1676->g_374);
}


/* ------------------------------------------ */
/* 
 * reads : p_1676->g_171 p_1676->g_923 p_1676->g_127 p_1676->g_926 p_1676->g_143 p_1676->g_427 p_1676->g_333 p_1676->g_31 p_1676->g_32 p_1676->g_374 p_1676->g_375
 * writes: p_1676->g_171 p_1676->g_87 p_1676->g_32
 */
int32_t * func_33(int8_t  p_34, int32_t * p_35, int8_t  p_36, int32_t * p_37, struct S0 * p_1676)
{ /* block id: 403 */
    uint32_t *l_945 = &p_1676->g_207;
    int32_t l_948 = 0x57837139L;
    int32_t *l_949 = (void*)0;
    int32_t *l_950[10][5] = {{&p_1676->g_32[1],&p_1676->g_32[3],&p_1676->g_32[1],&p_1676->g_32[1],&p_1676->g_32[3]},{&p_1676->g_32[1],&p_1676->g_32[3],&p_1676->g_32[1],&p_1676->g_32[1],&p_1676->g_32[3]},{&p_1676->g_32[1],&p_1676->g_32[3],&p_1676->g_32[1],&p_1676->g_32[1],&p_1676->g_32[3]},{&p_1676->g_32[1],&p_1676->g_32[3],&p_1676->g_32[1],&p_1676->g_32[1],&p_1676->g_32[3]},{&p_1676->g_32[1],&p_1676->g_32[3],&p_1676->g_32[1],&p_1676->g_32[1],&p_1676->g_32[3]},{&p_1676->g_32[1],&p_1676->g_32[3],&p_1676->g_32[1],&p_1676->g_32[1],&p_1676->g_32[3]},{&p_1676->g_32[1],&p_1676->g_32[3],&p_1676->g_32[1],&p_1676->g_32[1],&p_1676->g_32[3]},{&p_1676->g_32[1],&p_1676->g_32[3],&p_1676->g_32[1],&p_1676->g_32[1],&p_1676->g_32[3]},{&p_1676->g_32[1],&p_1676->g_32[3],&p_1676->g_32[1],&p_1676->g_32[1],&p_1676->g_32[3]},{&p_1676->g_32[1],&p_1676->g_32[3],&p_1676->g_32[1],&p_1676->g_32[1],&p_1676->g_32[3]}};
    int32_t l_951 = (-7L);
    int16_t l_952 = 0x40BFL;
    int32_t l_953 = 0x09306F33L;
    int32_t l_954 = (-1L);
    uint8_t l_955 = 250UL;
    int i, j;
    for (p_1676->g_171 = (-3); (p_1676->g_171 <= 18); ++p_1676->g_171)
    { /* block id: 406 */
        uint16_t l_922 = 65530UL;
        VECTOR(int32_t, 4) l_924 = (VECTOR(int32_t, 4))(0x2BA31C17L, (VECTOR(int32_t, 2))(0x2BA31C17L, 0x1852A614L), 0x1852A614L);
        uint16_t *l_925 = &p_1676->g_87;
        int32_t l_931 = 0x2949614CL;
        uint64_t **l_932 = (void*)0;
        uint64_t *l_934 = &p_1676->g_171;
        uint64_t **l_933 = &l_934;
        uint64_t *l_935 = &p_1676->g_936;
        uint32_t *l_942 = (void*)0;
        uint32_t **l_941 = &l_942;
        uint64_t *l_947 = &p_1676->g_171;
        uint64_t **l_946 = &l_947;
        int i;
        (*p_1676->g_31) &= (safe_mul_func_int16_t_s_s(((l_922 ^ (FAKE_DIVERGE(p_1676->global_1_offset, get_global_id(1), 10) | ((((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_1676->g_923.s3114)))).even)).yyxx)).yyywzzwx, ((VECTOR(int32_t, 8))(l_924.yyzyzyxw))))).s6 > (l_931 = ((((*l_925) = p_1676->g_127.w) >= ((VECTOR(int16_t, 8))(p_1676->g_926.zxwzxyxz)).s7) != ((safe_mod_func_uint16_t_u_u(((0x97DFL & ((safe_add_func_int32_t_s_s(l_931, ((l_935 = ((*l_933) = &p_1676->g_171)) != ((*l_946) = ((safe_mod_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s((l_941 == ((safe_lshift_func_uint16_t_u_s(((((((*l_941) = (l_945 = p_37)) == ((p_1676->g_926.w , p_36) , p_35)) ^ p_36) & 18446744073709551606UL) , 0x1DB6L), p_36)) , (void*)0)), p_34)) ^ l_922) > l_924.z), p_1676->g_143.y)) , &p_1676->g_936))))) | l_924.z)) <= p_1676->g_427), (-9L))) && p_1676->g_333.x)))) | l_948))) && p_36), l_922));
        return p_37;
    }
    --l_955;
    return (*p_1676->g_374);
}


/* ------------------------------------------ */
/* 
 * reads : p_1676->g_433 p_1676->g_207 p_1676->g_comm_values p_1676->g_236 p_1676->g_585 p_1676->g_143 p_1676->g_665 p_1676->g_327 p_1676->g_271 p_1676->g_340 p_1676->g_594 p_1676->g_292 p_1676->g_127 p_1676->g_174 p_1676->g_341 p_1676->g_432 p_1676->g_175 p_1676->g_31 p_1676->g_32 p_1676->g_211 p_1676->g_719 p_1676->g_743 p_1676->g_374 p_1676->g_375 p_1676->g_760 p_1676->g_772 p_1676->g_333 p_1676->l_comm_values p_1676->g_87 p_1676->g_817 p_1676->g_821 p_1676->g_828
 * writes: p_1676->g_424 p_1676->g_207 p_1676->g_292 p_1676->g_171 p_1676->g_32 p_1676->g_211 p_1676->g_722 p_1676->g_358 p_1676->g_585 p_1676->g_375 p_1676->g_340 p_1676->g_594 p_1676->g_87 p_1676->g_760
 */
uint16_t  func_41(int32_t * p_42, uint64_t  p_43, uint64_t  p_44, uint16_t  p_45, struct S0 * p_1676)
{ /* block id: 260 */
    uint32_t l_638[9][2][5] = {{{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL},{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL}},{{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL},{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL}},{{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL},{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL}},{{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL},{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL}},{{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL},{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL}},{{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL},{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL}},{{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL},{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL}},{{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL},{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL}},{{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL},{0x0C6508EDL,4294967294UL,3UL,0xAC0DC73EL,4294967293UL}}};
    int64_t *l_641 = (void*)0;
    int64_t *l_642[10][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int32_t l_643 = 0x558302CFL;
    int8_t *l_646 = (void*)0;
    int8_t *l_647 = (void*)0;
    uint32_t l_648 = 0x1A6553F8L;
    int32_t l_670 = (-1L);
    uint32_t l_683[4] = {0UL,0UL,0UL,0UL};
    int32_t l_686 = (-2L);
    VECTOR(uint32_t, 16) l_690 = (VECTOR(uint32_t, 16))(0x9E0DF582L, (VECTOR(uint32_t, 4))(0x9E0DF582L, (VECTOR(uint32_t, 2))(0x9E0DF582L, 0x07058F99L), 0x07058F99L), 0x07058F99L, 0x9E0DF582L, 0x07058F99L, (VECTOR(uint32_t, 2))(0x9E0DF582L, 0x07058F99L), (VECTOR(uint32_t, 2))(0x9E0DF582L, 0x07058F99L), 0x9E0DF582L, 0x07058F99L, 0x9E0DF582L, 0x07058F99L);
    uint32_t *l_723 = &p_1676->g_71;
    int32_t l_764 = 0L;
    VECTOR(int32_t, 4) l_781 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x1A1277E6L), 0x1A1277E6L);
    VECTOR(uint16_t, 8) l_810 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
    VECTOR(int16_t, 16) l_819 = (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x26C4L), 0x26C4L), 0x26C4L, (-6L), 0x26C4L, (VECTOR(int16_t, 2))((-6L), 0x26C4L), (VECTOR(int16_t, 2))((-6L), 0x26C4L), (-6L), 0x26C4L, (-6L), 0x26C4L);
    VECTOR(int8_t, 8) l_822 = (VECTOR(int8_t, 8))(0x40L, (VECTOR(int8_t, 4))(0x40L, (VECTOR(int8_t, 2))(0x40L, 0x77L), 0x77L), 0x77L, 0x40L, 0x77L);
    VECTOR(uint8_t, 4) l_823 = (VECTOR(uint8_t, 4))(0x26L, (VECTOR(uint8_t, 2))(0x26L, 0xA1L), 0xA1L);
    int i, j, k;
    if ((((((-1L) && (l_638[1][0][1] , l_638[1][1][1])) , (*p_1676->g_433)) == (safe_div_func_uint64_t_u_u(p_1676->g_comm_values[p_1676->tid], (p_1676->g_424.s4 = ((VECTOR(int64_t, 8))((l_643 = (p_44 > 0x6769L)), (((((safe_sub_func_int8_t_s_s((l_643 = (+2L)), (!(l_638[1][0][1] , p_1676->g_236)))) | FAKE_DIVERGE(p_1676->local_0_offset, get_local_id(0), 10)) & l_648) || l_648) <= p_1676->g_585.y), 0x75F09DE650A60669L, p_45, 0x62B16E45FE61907CL, p_45, (-9L), 0x56E2126235EA4F63L)).s5)))) | 8UL))
    { /* block id: 264 */
        int8_t l_669 = 0x0FL;
        int64_t *l_675 = &p_1676->g_427;
        int16_t *l_682 = (void*)0;
        uint32_t l_684 = 0xF2CAB4E1L;
        int32_t l_685 = 6L;
        VECTOR(uint32_t, 16) l_689 = (VECTOR(uint32_t, 16))(0xD9BE3AC4L, (VECTOR(uint32_t, 4))(0xD9BE3AC4L, (VECTOR(uint32_t, 2))(0xD9BE3AC4L, 0x59319A22L), 0x59319A22L), 0x59319A22L, 0xD9BE3AC4L, 0x59319A22L, (VECTOR(uint32_t, 2))(0xD9BE3AC4L, 0x59319A22L), (VECTOR(uint32_t, 2))(0xD9BE3AC4L, 0x59319A22L), 0xD9BE3AC4L, 0x59319A22L, 0xD9BE3AC4L, 0x59319A22L);
        int32_t **l_697 = &p_1676->g_375;
        uint32_t *l_699 = (void*)0;
        uint32_t **l_698 = &l_699;
        int8_t *l_700[10];
        uint64_t *l_701 = &p_1676->g_171;
        int i;
        for (i = 0; i < 10; i++)
            l_700[i] = &l_669;
        for (p_44 = 0; (p_44 != 36); p_44 = safe_add_func_int8_t_s_s(p_44, 4))
        { /* block id: 267 */
            VECTOR(int8_t, 2) l_651 = (VECTOR(int8_t, 2))(0x6DL, 0L);
            VECTOR(int8_t, 2) l_652 = (VECTOR(int8_t, 2))(0x2DL, (-1L));
            int32_t l_657 = 0x10259841L;
            int64_t *l_664 = &p_1676->g_427;
            int i;
            l_670 = ((!((((VECTOR(int8_t, 16))((!((VECTOR(int8_t, 16))(l_651.xxyyxyyyxyyxxyyx)).sc), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_652.yyxx)))), 0x1EL, p_44, (((((l_652.x | (-1L)) < p_1676->g_143.x) ^ ((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_657 ^= p_43), (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(((((!((((void*)0 == l_664) && ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(p_1676->g_665.zyzx)).odd, ((VECTOR(int16_t, 8))((safe_unary_minus_func_int64_t_s((safe_lshift_func_int16_t_s_u(p_1676->g_327.s2, 2)))), (((l_643 = (((-1L) > p_1676->g_271.s4) ^ p_44)) >= 18446744073709551615UL) || l_669), 5L, l_669, ((VECTOR(int16_t, 4))((-1L))))).s61))))).xyyx)), ((VECTOR(int16_t, 4))(1L)), 9L, (-1L), p_1676->g_340, (-7L), (-1L), 0x7866L, (-1L))).sb, 0x00F3L, 0x0B55L, p_45, ((VECTOR(int16_t, 8))(1L)), (-6L), 0x516CL, 8L, 0x26ACL)).s0) < 0x308EL)) , &p_1676->g_236) != &p_1676->g_594) ^ 18446744073709551615UL), 0xFFL)) , p_43) , l_669), 4)), p_44)))), l_638[5][0][2])) , 1UL)) , 0x369730D2B5F4E1BFL) >= 0x9024C27C3E5EF7E6L), 0x40L, 0L, ((VECTOR(int8_t, 4))(0L)), 0x6EL, 0x08L)).s5 <= l_638[1][0][1]) && p_43)) <= p_45);
            return p_1676->g_594;
        }
        l_686 ^= (!(((((l_685 = ((p_1676->g_292.x , ((*p_1676->g_433) != ((((0x51AD6AEDL >= (safe_mul_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s(0L, ((&p_1676->g_427 == l_675) | l_638[2][0][1]))) < (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((void*)0 != l_682), 2UL)), 0x85E53F18L)), l_669))) , l_683[2]), p_1676->g_127.x))) & 0x25L) , l_684) <= p_1676->g_174))) > p_45)) & p_45) == p_1676->g_341) > 1L) >= l_669));
        (*p_42) = ((((((**p_1676->g_432) = (**p_1676->g_432)) < (((safe_sub_func_int8_t_s_s((((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 4))(l_689.sf646)).zywywwyw, ((VECTOR(uint32_t, 2))(0x7315C3B5L, 0xC946A6A8L)).xyxxxyxy))).s22, ((VECTOR(uint32_t, 2))(l_690.s5e))))).even | (safe_lshift_func_uint16_t_u_u(p_45, 7))), (l_670 &= (safe_sub_func_int32_t_s_s((7L && (&p_1676->g_375 != l_697)), l_683[2]))))) , ((*l_701) = (GROUP_DIVERGE(1, 1) >= ((p_1676->g_292.x = (((l_698 = l_698) == (void*)0) > (l_682 != (void*)0))) == p_1676->g_175.sa)))) , 0x9793C870L)) , 0UL) > p_43) ^ p_1676->g_174);
    }
    else
    { /* block id: 281 */
        uint64_t l_713[2];
        int32_t l_762 = (-1L);
        int32_t l_763 = 0x2497B0EEL;
        uint8_t l_765 = 0x3EL;
        int32_t **l_786 = &p_1676->g_375;
        VECTOR(uint64_t, 2) l_791 = (VECTOR(uint64_t, 2))(4UL, 0x7BE697182C219410L);
        VECTOR(int8_t, 4) l_794 = (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 1L), 1L);
        VECTOR(uint16_t, 8) l_811 = (VECTOR(uint16_t, 8))(0x689DL, (VECTOR(uint16_t, 4))(0x689DL, (VECTOR(uint16_t, 2))(0x689DL, 0UL), 0UL), 0UL, 0x689DL, 0UL);
        int8_t l_814 = 0x21L;
        int i;
        for (i = 0; i < 2; i++)
            l_713[i] = 0x675DF0C5C84DE80BL;
        for (l_686 = 0; (l_686 >= 9); l_686++)
        { /* block id: 284 */
            uint64_t *l_714 = &l_713[1];
            int8_t *l_715 = (void*)0;
            int8_t *l_716 = &p_1676->g_211;
            uint32_t *l_720 = &p_1676->g_71;
            uint32_t **l_721 = (void*)0;
            int32_t l_742 = 1L;
            uint8_t **l_748 = (void*)0;
            int32_t *l_759 = &l_643;
            uint32_t *l_782 = &p_1676->g_340;
            uint16_t *l_783 = &p_1676->g_594;
            (*p_1676->g_31) = 0x37566C80L;
            if ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((*l_716) &= ((safe_lshift_func_int8_t_s_s(3L, 3)) , (safe_unary_minus_func_int64_t_s(((*p_42) | ((*p_1676->g_31) = (safe_mod_func_uint64_t_u_u(((*l_714) = l_713[1]), p_1676->g_32[0])))))))), 7)) | (p_43 | (l_670 = (safe_add_func_int64_t_s_s((((VECTOR(uint32_t, 2))(4294967293UL, 2UL)).even > (p_1676->g_719 == (void*)0)), ((p_1676->g_722 = l_720) == l_723)))))), 14)))
            { /* block id: 291 */
                VECTOR(int8_t, 16) l_730 = (VECTOR(int8_t, 16))(0x20L, (VECTOR(int8_t, 4))(0x20L, (VECTOR(int8_t, 2))(0x20L, 0x2CL), 0x2CL), 0x2CL, 0x20L, 0x2CL, (VECTOR(int8_t, 2))(0x20L, 0x2CL), (VECTOR(int8_t, 2))(0x20L, 0x2CL), 0x20L, 0x2CL, 0x20L, 0x2CL);
                uint8_t *l_755 = (void*)0;
                int32_t l_756 = (-1L);
                int8_t l_757 = 0x05L;
                int32_t **l_758[6] = {&p_1676->g_375,&p_1676->g_375,&p_1676->g_375,&p_1676->g_375,&p_1676->g_375,&p_1676->g_375};
                int i;
                (*p_1676->g_31) = (safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s(0x7CL, (((((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 8))(l_730.sa985e2eb)).s4, (p_1676->g_585.x = ((((safe_unary_minus_func_uint64_t_u((safe_sub_func_int16_t_s_s(p_1676->g_143.y, ((((*p_42) = (safe_rshift_func_uint16_t_u_u(p_1676->g_comm_values[p_1676->tid], (safe_sub_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s(l_742, ((~p_1676->g_743) , (safe_div_func_uint8_t_u_u((l_757 = (l_756 = (safe_sub_func_int64_t_s_s(((l_748 == l_748) > ((safe_div_func_int16_t_s_s((p_1676->g_358.x = ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((((VECTOR(int32_t, 8))(0x2036DF64L, ((void*)0 == &p_1676->g_433), ((VECTOR(int32_t, 2))(0x20268ED4L)), (-7L), ((VECTOR(int32_t, 2))((-8L))), 0x6F195F46L)).s0 >= p_45), 1UL)), 2)) , (-1L))), 0xE9A6L)) & p_45)), l_742)))), l_730.s9))))), l_643)) , (**p_1676->g_432)), p_43))))) > (*p_1676->g_31)) , 0x65F4L))))) , l_713[1]) || 0x1EL) && p_45)))) >= l_643) || p_43) > p_43) , l_638[1][0][1]))), l_713[1]));
                l_759 = (*p_1676->g_374);
                (*p_1676->g_374) = func_46((*p_42), (p_45 , &l_643), p_44, p_1676->g_760, l_713[0], p_1676);
            }
            else
            { /* block id: 300 */
                int32_t *l_761[7] = {&l_742,&l_670,&l_742,&l_742,&l_670,&l_742,&l_742};
                int i;
                l_765++;
            }
            (*p_42) |= (((((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(p_44, (((*l_783) = (p_1676->g_772 ^ ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_45, p_45)), ((l_763 , p_1676->g_211) >= (((*l_782) = (safe_div_func_uint32_t_u_u((p_1676->g_333.y ^ (safe_lshift_func_int16_t_s_u(0x7D26L, GROUP_DIVERGE(1, 1)))), ((VECTOR(int32_t, 4))(l_781.yzzz)).w))) & (l_683[2] >= l_686))))) != p_45))) != l_765))), p_45)) < p_45) , p_1676->g_327.s7) ^ p_1676->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1676->tid, 3))]) != l_762);
            for (p_1676->g_207 = 0; (p_1676->g_207 <= 24); p_1676->g_207 = safe_add_func_int64_t_s_s(p_1676->g_207, 8))
            { /* block id: 308 */
                return p_1676->g_594;
            }
        }
        (*l_786) = (*p_1676->g_374);
        (*p_1676->g_31) = ((VECTOR(int32_t, 4))(0x0B9C152FL, 0x12BC6460L, 0x20CA5209L, (-9L))).x;
        for (l_670 = 23; (l_670 < (-13)); l_670 = safe_sub_func_int32_t_s_s(l_670, 1))
        { /* block id: 316 */
            uint64_t *l_801[3][5] = {{&l_713[1],&l_713[1],&l_713[1],&l_713[1],&l_713[1]},{&l_713[1],&l_713[1],&l_713[1],&l_713[1],&l_713[1]},{&l_713[1],&l_713[1],&l_713[1],&l_713[1],&l_713[1]}};
            uint16_t *l_806 = (void*)0;
            uint16_t *l_807 = &p_1676->g_87;
            int32_t l_812 = (-1L);
            uint8_t *l_813[3][10][6] = {{{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765}},{{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765}},{{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765},{(void*)0,(void*)0,&l_765,(void*)0,(void*)0,&l_765}}};
            int i, j, k;
            (*p_1676->g_31) &= ((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(l_791.yyxyyxyyxxxxxyxy)).sa, ((((((((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(l_794.wyzyzwwxyxxxxyxw)).even, ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))((safe_div_func_int32_t_s_s((((*l_786) = (void*)0) == (void*)0), (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((~(p_44 = 0UL)) && p_1676->g_327.s3) >= 1L), 1L)), ((safe_lshift_func_int16_t_s_u((p_1676->g_333.y | (p_43 &= 0x1277A143155C278AL)), 7)) >= (((safe_mul_func_uint8_t_u_u(((--(*l_807)) == ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 2))(l_810.s71)).yxxx, ((VECTOR(uint16_t, 4))(l_811.s7772)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xAC77L, 0xB4D8L)).xyyxyyxy)).lo))).w), (l_814 = ((((p_42 == &p_1676->g_207) == l_812) < p_45) != FAKE_DIVERGE(p_1676->global_1_offset, get_global_id(1), 10))))) <= p_1676->g_175.s9) , 18446744073709551606UL)))))), 7L, ((VECTOR(int8_t, 2))(0x0CL)), 9L, 0x61L, 0x77L, (-4L))).s16, ((VECTOR(int8_t, 2))(0L))))).yyyyxxyx))).s7, p_1676->g_comm_values[p_1676->tid])) | 0x2DF8L) , p_44) , &p_1676->g_427) == &p_1676->g_427) , p_43) , (*p_42)) < 0xDB5F7231L))) == (-1L));
        }
    }
    (*p_42) &= ((&p_1676->g_100 != (l_648 , &p_1676->g_211)) , l_683[2]);
    for (p_45 = 11; (p_45 == 18); ++p_45)
    { /* block id: 328 */
        VECTOR(int16_t, 16) l_818 = (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L, (VECTOR(int16_t, 2))((-10L), 1L), (VECTOR(int16_t, 2))((-10L), 1L), (-10L), 1L, (-10L), 1L);
        VECTOR(int16_t, 2) l_820 = (VECTOR(int16_t, 2))(0x0986L, (-4L));
        VECTOR(uint8_t, 8) l_824 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 250UL), 250UL), 250UL, 1UL, 250UL);
        int32_t l_827 = 0L;
        uint8_t *l_835 = (void*)0;
        uint8_t *l_836 = (void*)0;
        uint8_t *l_837[4][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t **l_839 = &p_1676->g_760;
        int32_t l_917 = 0x0A8025D1L;
        int i, j, k;
        (*l_839) = func_46(l_690.sd, p_42, p_45, p_42, ((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_1676->g_817.s9b)).even, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_818.s1b)).xyxyxyxy)))).s4336742766222751)).s18, ((VECTOR(int16_t, 16))(l_819.s63b15b9762a74cf1)).s68))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_820.xxyxyyxyyxxxxxxx)).lo)), ((VECTOR(int16_t, 8))(p_1676->g_821.s68dfc296)).s3, l_818.s7, ((VECTOR(int16_t, 2))(1L, 1L)), (-9L), 0x7B46L)).s88)).xxxxxyyy, ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(l_822.s46)).xyyyyyyyyxxyxxyx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(6UL, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(255UL, 255UL)).xyxxxyyyxyxyyyyy)).hi)).even, ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(l_823.zw)).xxyxxyxxyxyxxyyx, ((VECTOR(uint8_t, 2))(1UL, 9UL)).yxxxxyxxxyyxyyyx))).s9298))).xyxyzxzz, ((VECTOR(uint8_t, 2))(1UL, 0xEEL)).xyyxyyyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_824.s7632)).zzxxxxxwwywzzwwy)).even))).s03, (uint8_t)(l_670 &= (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(4294967288UL, l_820.x, l_827, 0xF0DF93E0L, ((VECTOR(uint32_t, 2))(0x4BEBE05EL, 7UL)), ((VECTOR(uint32_t, 2))(p_1676->g_828.s32)), ((VECTOR(uint32_t, 8))((--(**p_1676->g_432)), ((VECTOR(uint32_t, 4))((safe_lshift_func_int8_t_s_s((~(l_820.x & (safe_mod_func_uint64_t_u_u(0x33FF0505A45568FFL, FAKE_DIVERGE(p_1676->local_0_offset, get_local_id(0), 10))))), 4)), ((VECTOR(uint32_t, 2))(0UL)), 7UL)), 0x6DC7E1D2L, 1UL, 1UL)))), ((VECTOR(uint32_t, 16))(1UL)), ((VECTOR(uint32_t, 16))(0UL))))).s1, 0x3F04CE1FL))), (uint8_t)GROUP_DIVERGE(2, 1)))), 0x5CL)).odd)).xyyxyyyx, ((VECTOR(uint8_t, 8))(0xBDL))))).hi)).zxzyzxwwyywzxzyy))).even))), ((VECTOR(uint16_t, 4))(0UL)), p_1676->g_821.se, 0xC8BDL, 0x4C74L)).se > l_824.s0) ^ l_638[1][0][1]), p_1676);
        if ((atomic_inc(&p_1676->l_atomic_input[13]) == 8))
        { /* block id: 333 */
            int32_t l_841 = 1L;
            int32_t *l_840 = &l_841;
            int32_t *l_842 = &l_841;
            int64_t l_851 = (-1L);
            l_842 = (l_840 = (void*)0);
            for (l_841 = 0; (l_841 <= 17); ++l_841)
            { /* block id: 338 */
                uint64_t l_845 = 18446744073709551615UL;
                uint64_t l_848 = 0x6D0B3893D4F7645BL;
                l_845--;
                l_848++;
            }
            if ((l_851 &= ((VECTOR(int32_t, 2))(1L, 0x0FD039C5L)).odd))
            { /* block id: 343 */
                uint16_t l_852 = 0x79C2L;
                uint16_t l_855 = 65529UL;
                uint8_t l_856 = 0UL;
                int8_t l_887 = 0x03L;
                l_852--;
                l_856 = l_855;
                for (l_852 = 0; (l_852 > 43); ++l_852)
                { /* block id: 348 */
                    VECTOR(int32_t, 8) l_859 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                    int32_t l_883[4][5][3] = {{{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL}},{{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL}},{{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL}},{{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL},{0x4BF72C67L,(-1L),0x60FC687FL}}};
                    uint32_t l_884[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_884[i] = 0xEEDE3DC1L;
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_859.s5042)))))).w)
                    { /* block id: 349 */
                        int32_t l_860 = 0x33000D8FL;
                        VECTOR(int32_t, 2) l_861 = (VECTOR(int32_t, 2))(0x608D67CAL, (-1L));
                        int i;
                        l_859.s0 |= 0x6CC382B7L;
                        l_859.s7 |= l_860;
                        l_841 |= (((VECTOR(int32_t, 8))(l_861.xyxyyyxx)).s7 , 0L);
                    }
                    else
                    { /* block id: 353 */
                        int32_t l_863 = 0x08F45C42L;
                        int32_t *l_862 = &l_863;
                        int32_t *l_864[7][7] = {{&l_863,&l_863,(void*)0,&l_863,&l_863,&l_863,&l_863},{&l_863,&l_863,(void*)0,&l_863,&l_863,&l_863,&l_863},{&l_863,&l_863,(void*)0,&l_863,&l_863,&l_863,&l_863},{&l_863,&l_863,(void*)0,&l_863,&l_863,&l_863,&l_863},{&l_863,&l_863,(void*)0,&l_863,&l_863,&l_863,&l_863},{&l_863,&l_863,(void*)0,&l_863,&l_863,&l_863,&l_863},{&l_863,&l_863,(void*)0,&l_863,&l_863,&l_863,&l_863}};
                        int32_t l_865 = 0L;
                        uint64_t l_866[5][10][5] = {{{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL}},{{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL}},{{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL}},{{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL}},{{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL},{0x6DEDE57CC9583099L,0x4403643F63B28BB1L,0xC7C5FCD1A94DA8C0L,18446744073709551615UL,0xA30483144A19AE9DL}}};
                        int i, j, k;
                        l_864[2][2] = l_862;
                        l_841 = 0x4BC483F7L;
                        --l_866[2][8][4];
                    }
                    for (l_859.s1 = 0; (l_859.s1 <= 28); l_859.s1++)
                    { /* block id: 360 */
                        VECTOR(uint32_t, 16) l_871 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x99E51C81L), 0x99E51C81L), 0x99E51C81L, 1UL, 0x99E51C81L, (VECTOR(uint32_t, 2))(1UL, 0x99E51C81L), (VECTOR(uint32_t, 2))(1UL, 0x99E51C81L), 1UL, 0x99E51C81L, 1UL, 0x99E51C81L);
                        uint64_t l_872 = 18446744073709551615UL;
                        uint16_t l_873 = 0x1FA9L;
                        int16_t l_874 = 0L;
                        uint32_t l_875 = 0x5C8AC751L;
                        uint16_t l_876[4] = {0x050FL,0x050FL,0x050FL,0x050FL};
                        int64_t l_879 = 0L;
                        int64_t *l_878[8];
                        int64_t **l_877 = &l_878[7];
                        int64_t **l_880 = &l_878[0];
                        int64_t **l_881 = &l_878[6];
                        int64_t **l_882[4][2][10] = {{{&l_878[7],&l_878[7],&l_878[7],(void*)0,&l_878[2],(void*)0,&l_878[7],&l_878[7],&l_878[7],&l_878[7]},{&l_878[7],&l_878[7],&l_878[7],(void*)0,&l_878[2],(void*)0,&l_878[7],&l_878[7],&l_878[7],&l_878[7]}},{{&l_878[7],&l_878[7],&l_878[7],(void*)0,&l_878[2],(void*)0,&l_878[7],&l_878[7],&l_878[7],&l_878[7]},{&l_878[7],&l_878[7],&l_878[7],(void*)0,&l_878[2],(void*)0,&l_878[7],&l_878[7],&l_878[7],&l_878[7]}},{{&l_878[7],&l_878[7],&l_878[7],(void*)0,&l_878[2],(void*)0,&l_878[7],&l_878[7],&l_878[7],&l_878[7]},{&l_878[7],&l_878[7],&l_878[7],(void*)0,&l_878[2],(void*)0,&l_878[7],&l_878[7],&l_878[7],&l_878[7]}},{{&l_878[7],&l_878[7],&l_878[7],(void*)0,&l_878[2],(void*)0,&l_878[7],&l_878[7],&l_878[7],&l_878[7]},{&l_878[7],&l_878[7],&l_878[7],(void*)0,&l_878[2],(void*)0,&l_878[7],&l_878[7],&l_878[7],&l_878[7]}}};
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_878[i] = &l_879;
                        l_872 ^= l_871.sc;
                        l_875 = (l_841 = (l_874 = (l_873 , (-5L))));
                        l_882[3][1][7] = (l_881 = (l_880 = (l_876[3] , (l_877 = l_877))));
                    }
                    l_840 = (void*)0;
                    l_884[0]--;
                }
                if (l_887)
                { /* block id: 373 */
                    int32_t l_888 = 0x182E29FEL;
                    int64_t l_903 = 0x041E62BF20F9F1BAL;
                    VECTOR(int32_t, 2) l_904 = (VECTOR(int32_t, 2))(9L, 1L);
                    VECTOR(int32_t, 4) l_905 = (VECTOR(int32_t, 4))(0x1BAEB81DL, (VECTOR(int32_t, 2))(0x1BAEB81DL, 0x0A5591DFL), 0x0A5591DFL);
                    int i;
                    for (l_888 = 0; (l_888 != 13); ++l_888)
                    { /* block id: 376 */
                        uint8_t l_891[5][7][5] = {{{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL}},{{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL}},{{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL}},{{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL}},{{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL},{248UL,255UL,0UL,0xEFL,255UL}}};
                        VECTOR(uint16_t, 4) l_892 = (VECTOR(uint16_t, 4))(0x8B8BL, (VECTOR(uint16_t, 2))(0x8B8BL, 1UL), 1UL);
                        int32_t l_893[3];
                        VECTOR(int32_t, 16) l_894 = (VECTOR(int32_t, 16))(0x06016E58L, (VECTOR(int32_t, 4))(0x06016E58L, (VECTOR(int32_t, 2))(0x06016E58L, 0x3E9E24D1L), 0x3E9E24D1L), 0x3E9E24D1L, 0x06016E58L, 0x3E9E24D1L, (VECTOR(int32_t, 2))(0x06016E58L, 0x3E9E24D1L), (VECTOR(int32_t, 2))(0x06016E58L, 0x3E9E24D1L), 0x06016E58L, 0x3E9E24D1L, 0x06016E58L, 0x3E9E24D1L);
                        VECTOR(int32_t, 2) l_895 = (VECTOR(int32_t, 2))(0L, 1L);
                        uint64_t *l_897 = (void*)0;
                        uint64_t **l_896 = &l_897;
                        uint64_t **l_898 = &l_897;
                        int32_t l_899 = (-6L);
                        uint64_t l_900 = 0x6FFB3DA09FC7C784L;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_893[i] = 0x2D82DCD9L;
                        l_898 = (((l_891[4][1][3] , ((VECTOR(uint16_t, 4))(l_892.wwzw)).w) , (l_893[0] , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(l_894.s76b7202381a0e7d1)), ((VECTOR(int32_t, 16))(l_895.xxyyxxyyyyxxxxxx))))).odd)).s7)) , l_896);
                        l_900++;
                    }
                    l_841 ^= l_903;
                    l_841 ^= ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(0x37D62315L, 4L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_904.yy)), (-4L), 9L)))), 5L)).even, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(l_905.zwxzzwzw)).odd)))))).z;
                }
                else
                { /* block id: 382 */
                    uint64_t l_906[7][9][4] = {{{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL}},{{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL}},{{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL}},{{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL}},{{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL}},{{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL}},{{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL},{2UL,0xD367D7B5322C6A27L,0xD367D7B5322C6A27L,2UL}}};
                    uint16_t l_912 = 65527UL;
                    int i, j, k;
                    l_906[0][0][3] |= ((VECTOR(int32_t, 2))(9L, 0L)).odd;
                    for (l_906[4][5][2] = 13; (l_906[4][5][2] <= 22); l_906[4][5][2] = safe_add_func_int64_t_s_s(l_906[4][5][2], 5))
                    { /* block id: 386 */
                        int8_t l_909 = 0x06L;
                        int8_t l_910 = 3L;
                        uint8_t l_911 = 0x25L;
                        l_841 = l_909;
                        l_842 = (void*)0;
                        l_840 = (void*)0;
                        l_911 = l_910;
                    }
                    ++l_912;
                }
            }
            else
            { /* block id: 394 */
                int32_t l_916 = 0x7153DC5BL;
                int32_t *l_915[9][5][5] = {{{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916}},{{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916}},{{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916}},{{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916}},{{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916}},{{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916}},{{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916}},{{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916}},{{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_916,(void*)0,&l_916,(void*)0,&l_916}}};
                int i, j, k;
                l_842 = l_915[1][0][0];
            }
            unsigned int result = 0;
            result += l_841;
            result += l_851;
            atomic_add(&p_1676->l_special_values[13], result);
        }
        else
        { /* block id: 397 */
            (1 + 1);
        }
        return l_917;
    }
    return l_670;
}


/* ------------------------------------------ */
/* 
 * reads : p_1676->g_207 p_1676->g_374 p_1676->g_375
 * writes: p_1676->g_207
 */
int32_t * func_46(int32_t  p_47, int32_t * p_48, int64_t  p_49, int32_t * p_50, int32_t  p_51, struct S0 * p_1676)
{ /* block id: 252 */
    for (p_1676->g_207 = 0; (p_1676->g_207 == 42); ++p_1676->g_207)
    { /* block id: 255 */
        int32_t *l_637 = (void*)0;
        return l_637;
    }
    return (*p_1676->g_374);
}


/* ------------------------------------------ */
/* 
 * reads : p_1676->g_71 p_1676->l_comm_values p_1676->g_32 p_1676->g_comm_values p_1676->g_102 p_1676->g_31 p_1676->g_127 p_1676->g_100 p_1676->g_143 p_1676->g_87 p_1676->g_175 p_1676->g_207 p_1676->g_171 p_1676->g_220 p_1676->g_236 p_1676->g_271 p_1676->g_286 p_1676->g_288 p_1676->g_292 p_1676->g_299 p_1676->g_302 p_1676->g_327 p_1676->g_211 p_1676->g_333
 * writes: p_1676->g_71 p_1676->g_87 p_1676->g_102 p_1676->g_171 p_1676->g_174 p_1676->g_207 p_1676->g_211 p_1676->g_127 p_1676->g_236 p_1676->g_143 p_1676->g_299 p_1676->g_336 p_1676->g_340 p_1676->g_341
 */
int32_t  func_54(int32_t * p_55, int32_t * p_56, uint8_t  p_57, int64_t  p_58, int32_t * p_59, struct S0 * p_1676)
{ /* block id: 6 */
    int64_t l_98 = 8L;
    int32_t l_101 = (-4L);
    VECTOR(uint8_t, 2) l_155 = (VECTOR(uint8_t, 2))(0xA0L, 255UL);
    int64_t l_170 = 0x414C3A41A2CE7F33L;
    int32_t l_262 = 0x01339926L;
    int32_t l_263 = 6L;
    VECTOR(uint64_t, 16) l_284 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x0878E65868C04F55L), 0x0878E65868C04F55L), 0x0878E65868C04F55L, 1UL, 0x0878E65868C04F55L, (VECTOR(uint64_t, 2))(1UL, 0x0878E65868C04F55L), (VECTOR(uint64_t, 2))(1UL, 0x0878E65868C04F55L), 1UL, 0x0878E65868C04F55L, 1UL, 0x0878E65868C04F55L);
    VECTOR(uint64_t, 8) l_285 = (VECTOR(uint64_t, 8))(4UL, (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x26D7F1537B6BF432L), 0x26D7F1537B6BF432L), 0x26D7F1537B6BF432L, 4UL, 0x26D7F1537B6BF432L);
    VECTOR(uint8_t, 8) l_359 = (VECTOR(uint8_t, 8))(0x3FL, (VECTOR(uint8_t, 4))(0x3FL, (VECTOR(uint8_t, 2))(0x3FL, 0UL), 0UL), 0UL, 0x3FL, 0UL);
    uint32_t *l_430 = (void*)0;
    uint32_t **l_429 = &l_430;
    int32_t l_443 = 0x5A14B740L;
    int32_t l_444 = 0x252C6B5AL;
    int32_t l_450 = (-1L);
    int32_t l_455 = (-9L);
    int32_t l_458 = 1L;
    int32_t l_461 = 0x45DA89E0L;
    int32_t l_467 = 0x3FC4E3D8L;
    int32_t l_468 = (-1L);
    int32_t l_470 = (-1L);
    int32_t l_471 = (-3L);
    int32_t l_472 = (-2L);
    int32_t l_473[9][10][2] = {{{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)}},{{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)}},{{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)}},{{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)}},{{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)}},{{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)}},{{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)}},{{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)}},{{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)},{3L,(-9L)}}};
    uint16_t *l_582 = (void*)0;
    int16_t l_595 = 0x5AB1L;
    int16_t **l_624 = (void*)0;
    int16_t l_626[8];
    uint32_t l_631[4][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_626[i] = 0x4457L;
    (*p_59) = (-1L);
    for (p_58 = 0; (p_58 >= (-15)); p_58 = safe_sub_func_uint8_t_u_u(p_58, 1))
    { /* block id: 10 */
        int32_t *l_63 = &p_1676->g_32[3];
        int32_t **l_62 = &l_63;
        (*l_62) = (void*)0;
    }
    for (p_57 = (-9); (p_57 <= 13); ++p_57)
    { /* block id: 15 */
        int16_t l_66 = 0x0E43L;
        int32_t l_69 = (-1L);
        uint32_t *l_70 = &p_1676->g_71;
        int32_t *l_75 = (void*)0;
        int32_t **l_74 = &l_75;
        VECTOR(int32_t, 16) l_80 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
        uint16_t *l_86 = &p_1676->g_87;
        int32_t *l_99[10] = {&l_69,&l_69,&l_69,&l_69,&l_69,&l_69,&l_69,&l_69,&l_69,&l_69};
        VECTOR(int32_t, 4) l_109 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 1L), 1L);
        VECTOR(uint16_t, 16) l_186 = (VECTOR(uint16_t, 16))(0xE28FL, (VECTOR(uint16_t, 4))(0xE28FL, (VECTOR(uint16_t, 2))(0xE28FL, 65526UL), 65526UL), 65526UL, 0xE28FL, 65526UL, (VECTOR(uint16_t, 2))(0xE28FL, 65526UL), (VECTOR(uint16_t, 2))(0xE28FL, 65526UL), 0xE28FL, 65526UL, 0xE28FL, 65526UL);
        VECTOR(int16_t, 8) l_188 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), (-1L)), (-1L)), (-1L), (-2L), (-1L));
        uint32_t *l_251 = &p_1676->g_71;
        VECTOR(int32_t, 16) l_254 = (VECTOR(int32_t, 16))(0x764ED68EL, (VECTOR(int32_t, 4))(0x764ED68EL, (VECTOR(int32_t, 2))(0x764ED68EL, 0x5FD5089CL), 0x5FD5089CL), 0x5FD5089CL, 0x764ED68EL, 0x5FD5089CL, (VECTOR(int32_t, 2))(0x764ED68EL, 0x5FD5089CL), (VECTOR(int32_t, 2))(0x764ED68EL, 0x5FD5089CL), 0x764ED68EL, 0x5FD5089CL, 0x764ED68EL, 0x5FD5089CL);
        VECTOR(int32_t, 2) l_279 = (VECTOR(int32_t, 2))((-1L), (-10L));
        uint32_t l_283 = 0xB2EF746FL;
        VECTOR(int64_t, 16) l_326 = (VECTOR(int64_t, 16))(0x1EF4DCC81675217FL, (VECTOR(int64_t, 4))(0x1EF4DCC81675217FL, (VECTOR(int64_t, 2))(0x1EF4DCC81675217FL, 0L), 0L), 0L, 0x1EF4DCC81675217FL, 0L, (VECTOR(int64_t, 2))(0x1EF4DCC81675217FL, 0L), (VECTOR(int64_t, 2))(0x1EF4DCC81675217FL, 0L), 0x1EF4DCC81675217FL, 0L, 0x1EF4DCC81675217FL, 0L);
        VECTOR(uint32_t, 16) l_328 = (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x729D3353L), 0x729D3353L), 0x729D3353L, 4294967290UL, 0x729D3353L, (VECTOR(uint32_t, 2))(4294967290UL, 0x729D3353L), (VECTOR(uint32_t, 2))(4294967290UL, 0x729D3353L), 4294967290UL, 0x729D3353L, 4294967290UL, 0x729D3353L);
        int i;
        (*p_59) &= ((l_69 = (l_66 & (safe_lshift_func_uint8_t_u_u(246UL, 5)))) < (+(((*l_74) = (((*l_70)--) , (void*)0)) == ((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))((((safe_rshift_func_int8_t_s_s(p_1676->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1676->tid, 3))], 0)) && p_1676->g_32[2]) == 0x6E6AL), ((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 8))(l_80.s8327bc4a)).s63))), (safe_unary_minus_func_int64_t_s(((p_1676->g_comm_values[p_1676->tid] & (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((((*l_86) = p_57) <= FAKE_DIVERGE(p_1676->group_2_offset, get_group_id(2), 10)), ((safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s((FAKE_DIVERGE(p_1676->local_2_offset, get_local_id(2), 10) , ((safe_lshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(l_98, l_98)), p_1676->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1676->tid, 3))])), p_58)) ^ p_1676->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1676->tid, 3))])), p_1676->g_32[2])), p_58)) , (-1L)))), GROUP_DIVERGE(0, 1)))) ^ 0x173BL))), ((VECTOR(uint32_t, 2))(0x6B665F1FL)), 0UL, 0xBB1342F2L, 0x40302764L, ((VECTOR(uint32_t, 2))(0x80F5C685L)), p_1676->g_comm_values[p_1676->tid], ((VECTOR(uint32_t, 4))(0x26DE3FE2L)))).s7, (*p_56))) , &p_1676->g_32[3]))));
        p_1676->g_102++;
        if ((((((void*)0 == &p_1676->g_87) == ((((18446744073709551610UL >= ((l_98 , (((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(p_58, p_58)), 9)) & (p_1676->g_comm_values[p_1676->tid] < p_1676->g_32[0])) & 0x00A6A08CL)) , 0x3DFDFBAD2945289EL)) ^ 0xBBD8L) != 0UL) & p_1676->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1676->tid, 3))])) , p_1676->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1676->tid, 3))]) , (*p_1676->g_31)))
        { /* block id: 22 */
            uint8_t l_120 = 246UL;
            VECTOR(int16_t, 4) l_142 = (VECTOR(int16_t, 4))(0x0712L, (VECTOR(int16_t, 2))(0x0712L, 0x6962L), 0x6962L);
            VECTOR(int32_t, 4) l_167 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x559E5908L), 0x559E5908L);
            int i;
            (*p_59) = ((VECTOR(int32_t, 16))(l_109.zyzzzyyxwywzwyxw)).sf;
            for (p_1676->g_71 = 0; (p_1676->g_71 >= 9); p_1676->g_71 = safe_add_func_int32_t_s_s(p_1676->g_71, 1))
            { /* block id: 26 */
                uint16_t l_132[5];
                int32_t l_133 = 5L;
                VECTOR(int64_t, 8) l_162 = (VECTOR(int64_t, 8))(0x48EBA309C9891BAAL, (VECTOR(int64_t, 4))(0x48EBA309C9891BAAL, (VECTOR(int64_t, 2))(0x48EBA309C9891BAAL, 0x11FFD6F7C90A92FAL), 0x11FFD6F7C90A92FAL), 0x11FFD6F7C90A92FAL, 0x48EBA309C9891BAAL, 0x11FFD6F7C90A92FAL);
                int i;
                for (i = 0; i < 5; i++)
                    l_132[i] = 1UL;
                (*p_59) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-9L), 0L)).xyyy)).hi)), (((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))((l_133 = ((VECTOR(int8_t, 16))(0x5CL, 0x75L, (-1L), (-3L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((void*)0 != &p_1676->g_32[3]), (safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_120, p_57)), 0UL)) <= 0L), (safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(p_1676->g_127.wxxwxzzywwwyzzzz)).s0d34))).w, (p_1676->g_71 | (safe_sub_func_int64_t_s_s((((((p_58 < (safe_sub_func_uint32_t_u_u(l_101, p_1676->g_100))) == 0x3BL) != p_57) < GROUP_DIVERGE(0, 1)) , 1L), p_57))))), p_57)) || FAKE_DIVERGE(p_1676->global_0_offset, get_global_id(0), 10)) & p_57), l_132[2])))), 0x23L, 0x1CL)).ywwwxwwy, ((VECTOR(int8_t, 8))(1L))))).s10)).lo, ((VECTOR(int8_t, 2))(0x39L)), p_57, 0x1AL, ((VECTOR(int8_t, 4))(0x38L)), 0x55L, 0x6AL, 0x0EL)).sd), 0x30L, ((VECTOR(int8_t, 2))(0x05L)), p_58, ((VECTOR(int8_t, 4))(0x41L)), p_1676->g_71, ((VECTOR(int8_t, 2))((-1L))), p_1676->g_100, (-8L), 0x77L, 0x25L)).sb985, ((VECTOR(int8_t, 4))(0x1AL))))).y , 4L), 0x2F11L, ((VECTOR(int16_t, 2))(0x1778L)), 0x62C5L, 5L)).s10, ((VECTOR(uint16_t, 2))(0x891CL))))).xyxx)).zywwyxwzxywzxywy, ((VECTOR(int32_t, 16))(6L)), ((VECTOR(int32_t, 16))(0L))))).hi, ((VECTOR(int32_t, 8))(0x50E7C882L))))), ((VECTOR(int32_t, 8))(0x5839F227L))))).s6024276502040243)).even)).s7;
                for (l_101 = 0; (l_101 < (-13)); l_101 = safe_sub_func_int8_t_s_s(l_101, 5))
                { /* block id: 31 */
                    VECTOR(int16_t, 4) l_144 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L);
                    int i;
                    for (p_58 = (-13); (p_58 != (-12)); p_58 = safe_add_func_int64_t_s_s(p_58, 1))
                    { /* block id: 34 */
                        int32_t l_152[3];
                        int64_t *l_172 = &l_98;
                        uint8_t *l_173 = &l_120;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_152[i] = 0x1C1E51B7L;
                        (*p_59) = (~((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(p_1676->g_102, ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(l_142.xxwywxzyyzyyyxyy)).odd, ((VECTOR(int16_t, 8))(p_1676->g_143.yyxxxyyy))))))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_144.zxwywyzxxzwwwxyy)))).hi))).s3)), p_1676->g_32[3])) , (p_57 , (safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(0x9DF61D7EL, 1UL)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))((!((safe_rshift_func_int16_t_s_s(8L, 12)) , 0UL)), (safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((l_152[1] > (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(l_155.yxxy)).y, 5))) || (safe_mul_func_uint16_t_u_u(0x7099L, ((p_1676->g_174 = (safe_mul_func_uint8_t_u_u(((*l_173) = (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 16))(l_162.s6670650241402161)).sf3fa, ((VECTOR(int64_t, 16))(((*l_172) = (safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s(((((--(*l_86)) ^ l_170) , (p_1676->g_171 = (255UL <= FAKE_DIVERGE(p_1676->global_1_offset, get_global_id(1), 10)))) <= 0xD532626EL), l_101)), 0x00A8503DL))), 0x4DF4010864EB220EL, 0L, l_152[2], ((VECTOR(int64_t, 8))(4L)), ((VECTOR(int64_t, 4))(0x19FBD2CEF0F45DD7L)))).sfd48))).hi)), (int64_t)2L))), 1L, 0L)).yzwwwwyx, ((VECTOR(int64_t, 8))(0x272BBAD3B4E33999L)), ((VECTOR(int64_t, 8))(0x76DDF6E144B6F7AEL))))).s4, p_1676->g_100))), p_58))) < 0x2D1FL)))) < 18446744073709551611UL), 0x1D4CL)), 7L)), 0x2BB1259AL, 0xA59ADA1AL, 1UL, 0x1781CC2BL, 0x82E662C9L, 0xD4B5287AL)).s1370441756305452)).s47ae, ((VECTOR(uint32_t, 4))(4294967295UL))))), (uint32_t)l_144.z))).y | p_57) , l_152[1]), 0UL, 0xF4250F72L, 4294967292UL)).yzwywyzx)).s25))).odd)))));
                        (*p_59) |= ((VECTOR(int32_t, 16))(p_1676->g_175.s0b8d769405ceab9b)).sf;
                    }
                    return (*p_1676->g_31);
                }
            }
        }
        else
        { /* block id: 46 */
            VECTOR(int16_t, 16) l_187 = (VECTOR(int16_t, 16))(0x380DL, (VECTOR(int16_t, 4))(0x380DL, (VECTOR(int16_t, 2))(0x380DL, 0x1DBCL), 0x1DBCL), 0x1DBCL, 0x380DL, 0x1DBCL, (VECTOR(int16_t, 2))(0x380DL, 0x1DBCL), (VECTOR(int16_t, 2))(0x380DL, 0x1DBCL), 0x380DL, 0x1DBCL, 0x380DL, 0x1DBCL);
            int32_t l_234 = 0x32D838E5L;
            int32_t l_235 = 0x138E7317L;
            uint8_t l_239 = 0xF8L;
            uint16_t *l_240 = (void*)0;
            uint8_t *l_249 = (void*)0;
            uint8_t *l_250 = &l_239;
            int16_t *l_252 = (void*)0;
            int16_t *l_253[4];
            VECTOR(uint64_t, 4) l_293 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL);
            uint64_t l_345 = 0xF92122A5402AA8A2L;
            int i;
            for (i = 0; i < 4; i++)
                l_253[i] = &l_66;
            for (l_170 = 0; (l_170 > 21); l_170 = safe_add_func_uint64_t_u_u(l_170, 5))
            { /* block id: 49 */
                int64_t *l_193 = (void*)0;
                uint32_t *l_206 = &p_1676->g_207;
                int8_t *l_210 = &p_1676->g_211;
                uint8_t *l_212 = (void*)0;
                uint8_t *l_213 = (void*)0;
                uint8_t *l_214 = (void*)0;
                uint8_t *l_215 = (void*)0;
                uint8_t *l_216 = (void*)0;
                uint8_t *l_217 = (void*)0;
                uint8_t *l_218 = (void*)0;
                int32_t l_219 = 0x5434852DL;
                int32_t l_221 = 0x78F816ECL;
                VECTOR(uint64_t, 8) l_231 = (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0x8D7BDA1314572CAAL), 0x8D7BDA1314572CAAL), 0x8D7BDA1314572CAAL, 9UL, 0x8D7BDA1314572CAAL);
                int i;
                (*l_74) = ((safe_div_func_uint8_t_u_u((l_221 &= (((((l_219 |= (safe_rshift_func_uint16_t_u_u(((p_1676->g_127.y = ((safe_div_func_int32_t_s_s(0L, ((*p_59) = (*p_1676->g_31)))) != (((((GROUP_DIVERGE(1, 1) & (safe_div_func_uint8_t_u_u(((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_186.s9a58)).xzzywxxy)).s1 ^ ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_187.sce7b0101)).hi)), 0L, ((VECTOR(int16_t, 8))(l_188.s15432662)), (-1L), (-1L), 1L)).even)).s7) < (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((&l_170 != l_193), 2)), 12))), ((*l_210) = (p_58 && (p_58 || (((((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(255UL, (safe_div_func_uint16_t_u_u((((*l_206)--) > 0x1F22465FL), l_155.y)))), p_58)) | p_1676->g_171), 65535UL)) <= 6UL) , 1L), p_1676->g_127.z)), 0xE5L)) , p_1676->g_127.x) == p_57) , (-1L)) == l_187.se))))))) <= 0x496808D4L) , p_57) ^ p_57) && p_58))) == p_57), l_170))) < p_1676->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1676->tid, 3))]) && p_57) , (void*)0) != p_1676->g_220)), FAKE_DIVERGE(p_1676->group_0_offset, get_group_id(0), 10))) , &p_1676->g_32[3]);
                for (l_219 = 0; (l_219 < 26); l_219++)
                { /* block id: 59 */
                    return (*p_1676->g_31);
                }
                l_235 ^= ((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(((p_58 , 0x3D40E685772B18EEL) <= ((((((safe_add_func_int32_t_s_s(l_231.s6, l_187.s6)) && ((((p_1676->g_32[3] == (p_1676->g_32[3] > ((VECTOR(int16_t, 16))(((((((((*l_86) &= (((++p_1676->g_127.z) || p_58) >= (--p_1676->g_236))) & ((&l_99[3] != (void*)0) | p_1676->g_171)) <= 0x9A1AL) , 0x46D75CF9645D199DL) , (-1L)) , &p_1676->g_31) != &p_1676->g_31), p_58, ((VECTOR(int16_t, 4))((-9L))), l_239, ((VECTOR(int16_t, 4))(0x3A55L)), ((VECTOR(int16_t, 4))((-1L))), 1L)).sc)) && (*p_59)) != p_1676->g_32[3]) != l_231.s1)) ^ p_57) & p_1676->g_32[3]) & l_187.s5) , l_219)))), 2)) >= p_58);
            }
            l_101 = ((((p_57 >= l_239) & ((l_239 , l_86) == l_240)) , (p_1676->g_143.x = (((((safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_sub_func_int64_t_s_s((-8L), p_58)) , (safe_div_func_uint8_t_u_u(((*l_250) = p_1676->g_207), (0x2348L | l_170)))), 18446744073709551610UL)), p_58)) != (*p_1676->g_31)) , l_251) != (void*)0) , l_235))) ^ (-1L));
            if (((VECTOR(int32_t, 2))(l_254.sfb)).lo)
            { /* block id: 70 */
                int32_t l_261 = 0x009A4825L;
                VECTOR(int16_t, 4) l_275 = (VECTOR(int16_t, 4))(0x1627L, (VECTOR(int16_t, 2))(0x1627L, 0x0670L), 0x0670L);
                uint32_t *l_311[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_311[i] = (void*)0;
                for (p_1676->g_236 = (-7); (p_1676->g_236 != 21); p_1676->g_236++)
                { /* block id: 73 */
                    uint16_t l_264[2][7][3] = {{{0x4EB4L,6UL,1UL},{0x4EB4L,6UL,1UL},{0x4EB4L,6UL,1UL},{0x4EB4L,6UL,1UL},{0x4EB4L,6UL,1UL},{0x4EB4L,6UL,1UL},{0x4EB4L,6UL,1UL}},{{0x4EB4L,6UL,1UL},{0x4EB4L,6UL,1UL},{0x4EB4L,6UL,1UL},{0x4EB4L,6UL,1UL},{0x4EB4L,6UL,1UL},{0x4EB4L,6UL,1UL},{0x4EB4L,6UL,1UL}}};
                    int i, j, k;
                    for (p_1676->g_87 = 0; (p_1676->g_87 == 39); p_1676->g_87 = safe_add_func_int8_t_s_s(p_1676->g_87, 7))
                    { /* block id: 76 */
                        uint32_t *l_259 = &p_1676->g_207;
                        uint32_t **l_260 = &l_259;
                        (*p_59) = (p_59 == ((*l_260) = l_259));
                        l_264[0][5][2]++;
                    }
                    if ((*p_56))
                        continue;
                    (*p_59) = (*p_55);
                }
                for (l_239 = (-4); (l_239 == 28); l_239 = safe_add_func_uint16_t_u_u(l_239, 7))
                { /* block id: 86 */
                    VECTOR(uint8_t, 16) l_272 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 252UL), 252UL), 252UL, 255UL, 252UL, (VECTOR(uint8_t, 2))(255UL, 252UL), (VECTOR(uint8_t, 2))(255UL, 252UL), 255UL, 252UL, 255UL, 252UL);
                    VECTOR(int32_t, 2) l_278 = (VECTOR(int32_t, 2))(0x081BD6ACL, 0L);
                    VECTOR(int32_t, 8) l_280 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x50C99759L), 0x50C99759L), 0x50C99759L, 1L, 0x50C99759L);
                    VECTOR(int64_t, 8) l_287 = (VECTOR(int64_t, 8))(0x4B0C6D8FC74D1417L, (VECTOR(int64_t, 4))(0x4B0C6D8FC74D1417L, (VECTOR(int64_t, 2))(0x4B0C6D8FC74D1417L, 1L), 1L), 1L, 0x4B0C6D8FC74D1417L, 1L);
                    VECTOR(int8_t, 8) l_289 = (VECTOR(int8_t, 8))(0x31L, (VECTOR(int8_t, 4))(0x31L, (VECTOR(int8_t, 2))(0x31L, 0L), 0L), 0L, 0x31L, 0L);
                    int32_t l_298 = (-10L);
                    uint32_t *l_310 = &p_1676->g_207;
                    int i;
                    if (l_101)
                        break;
                    if ((safe_div_func_int16_t_s_s((((((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 16))(p_1676->g_271.s2137456272346312)).sc1, ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_272.sf4f9ba95)).s4350233467531407)).hi, ((VECTOR(uint8_t, 4))(((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 8))(p_57, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_275.zz)).xyxx)).odd)), (~(safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(l_278.yyyy)).xxyzxzzx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(0x048C251CL, ((VECTOR(int32_t, 4))(l_279.xyyy)).z, 0x05820921L, (-1L))), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(0x08B0A408L, 1L)).xyyx, ((VECTOR(int32_t, 4))(l_280.s0220)))))))).wyxwxzzw)).s35)).xyyxxxyx))).hi)).y, (l_262 = (((*l_86) = (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_275.z, l_283, 18446744073709551614UL, 0x7A4B4D117C2A5B5BL)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_284.s5a75b066da58fe99)).s95b7)), 1UL, 0xB52ADD3FD6ED3673L, 0xE241AC8A1858627FL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(l_285.s45627556)), ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(0x1144BCF00CC574BBL, 0UL)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(int64_t, 8))(p_1676->g_286.s07076736)).s0574016200530364, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_287.s4101)).yxzyyyyy)).s22)).yyxxxxyyxyyyyyxy))).hi)).s24))).xyyxxyxy))).s75)), 0x75B382D7FBB295AFL, 0x87B91546A55DB8D7L, 0xFA219F341124B31AL)).s8, ((((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x62L, 0x21L)), (-3L), (-4L))), ((VECTOR(int8_t, 2))(0x77L, (-7L))), 7L, ((VECTOR(int8_t, 8))(p_1676->g_288.wwxxxzxy)), (-1L))), ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(l_289.s64)).xyxxxyyy, ((VECTOR(int8_t, 16))(8L, ((safe_div_func_uint64_t_u_u((l_275.x || ((l_275.z >= (-1L)) < ((VECTOR(int8_t, 8))(p_1676->g_292.xyxyxzyw)).s4)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 16))(l_293.xzyzywyxzywxzzyz)).s7d46, ((VECTOR(uint64_t, 4))(1UL, (&p_1676->g_207 != &p_1676->g_207), 0xAF909D75B0EC12C8L, 0xABCEAACACCCAD145L))))).xxwzzxzwzxxzzzyx, ((VECTOR(uint64_t, 4))(6UL, (((safe_mod_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), (safe_rshift_func_uint8_t_u_s(0xA6L, l_263)))) > 0x3D51L) || 4294967295UL), 7UL, 0x8C0C089D6F41877CL)).zyxxzyxywzwxwzxz, ((VECTOR(uint64_t, 16))(0x320A9F108549FEF6L))))).sff)).odd)) , p_1676->g_71), 0x6DL, 0x36L, ((VECTOR(int8_t, 2))(0x00L)), 8L, ((VECTOR(int8_t, 8))(0x4BL)), (-1L))).lo))).s2101234557603057))).s1d, (int8_t)p_1676->g_292.x, (int8_t)l_280.s3))).even == p_57) > p_58)))) == 0x80D8L))))), l_275.x, ((VECTOR(int16_t, 2))(0x2FBFL)), (-8L))).s3, (-1L))) >= p_58), ((VECTOR(uint8_t, 2))(0x46L)), 0xE5L)).yyywzyww))).s65))).lo >= 0xD7L) || 0x47FD3BF148392DC4L) , l_298), p_57)))
                    { /* block id: 90 */
                        (*p_1676->g_302) = p_1676->g_299[0][1];
                        (*p_59) = (*p_55);
                    }
                    else
                    { /* block id: 93 */
                        uint8_t l_303 = 1UL;
                        ++l_303;
                    }
                    for (l_170 = 0; (l_170 != (-1)); l_170--)
                    { /* block id: 98 */
                        int8_t *l_320[2];
                        int32_t l_321 = 0x3AA1B3EBL;
                        uint32_t **l_323 = &l_311[1];
                        uint32_t ***l_322 = &l_323;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_320[i] = (void*)0;
                        (*p_59) = ((safe_add_func_uint8_t_u_u((l_310 != l_311[1]), (safe_mod_func_uint8_t_u_u(0x70L, p_58)))) >= (((&l_311[0] != ((*l_322) = ((+((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(1UL, 0x9E55L)))).xyyxxyxyxxxyyxxx)))).s9 || (safe_div_func_int8_t_s_s((l_321 = ((((((((((safe_lshift_func_int8_t_s_s(((l_263 = 4UL) > (&p_1676->g_207 == (void*)0)), 2)) <= (safe_div_func_int16_t_s_s(p_1676->g_288.y, p_1676->g_236))) >= p_57) != l_293.y) ^ p_57) , 0x23L) , p_58) && 0xFFL) , l_289.s5) & l_187.sa)), 251UL))) | p_57)) , (void*)0))) < p_1676->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1676->tid, 3))]) , (-1L)));
                        return (*p_1676->g_31);
                    }
                    return (*p_1676->g_31);
                }
                for (l_239 = 0; (l_239 != 17); l_239++)
                { /* block id: 109 */
                    (*l_74) = (void*)0;
                }
            }
            else
            { /* block id: 112 */
                int8_t *l_335[7];
                int8_t **l_334[5] = {&l_335[6],&l_335[6],&l_335[6],&l_335[6],&l_335[6]};
                int64_t *l_337 = (void*)0;
                int64_t *l_338 = (void*)0;
                int64_t *l_339[2];
                VECTOR(int64_t, 16) l_342 = (VECTOR(int64_t, 16))(6L, (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0x77B8F472CE6EC9BEL), 0x77B8F472CE6EC9BEL), 0x77B8F472CE6EC9BEL, 6L, 0x77B8F472CE6EC9BEL, (VECTOR(int64_t, 2))(6L, 0x77B8F472CE6EC9BEL), (VECTOR(int64_t, 2))(6L, 0x77B8F472CE6EC9BEL), 6L, 0x77B8F472CE6EC9BEL, 6L, 0x77B8F472CE6EC9BEL);
                VECTOR(int64_t, 4) l_343 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-7L)), (-7L));
                int32_t l_344 = 0x5EBA183DL;
                int i;
                for (i = 0; i < 7; i++)
                    l_335[i] = (void*)0;
                for (i = 0; i < 2; i++)
                    l_339[i] = &l_170;
                (*l_74) = &p_1676->g_32[1];
                (*p_59) ^= 0L;
                l_345 |= ((l_344 = ((!((!l_293.w) <= ((VECTOR(int64_t, 8))(l_326.sba5d0a36)).s5)) , ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 2))(p_1676->g_327.s65)), ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(((*l_75) >= (l_235 &= ((!((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_328.sb1)).xyxxyxyyxxxyyyxx)).s2) , (p_1676->g_341 = (p_1676->g_340 = ((((*l_86) = ((safe_div_func_int32_t_s_s(0x4FC2D183L, (safe_div_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), 18446744073709551615UL)))) > p_1676->g_211)) > ((VECTOR(uint16_t, 8))(p_1676->g_333.yxyxyyyx)).s3) != (((p_1676->g_336 = l_250) == &p_1676->g_100) , p_1676->g_333.x))))))), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))((-5L), (-1L))), 0x331C882E834E38E9L, 0L)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_342.sfe6a)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_343.wy)).xxyy)))))).s02, (int64_t)((p_1676->g_143.y = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))((-1L), 0x04D2L, (-1L), (-10L), 0x7A62L, l_170, 1L, (-9L), l_342.sa, ((VECTOR(int16_t, 2))(0L)), 5L, ((VECTOR(int16_t, 4))(8L)))).lo))).hi)), p_1676->g_288.y, 0L, 0x7B71L, 7L)).s4) || p_57)))).xxxxxxyy)).odd)))).s50)), 0L)).even, ((VECTOR(int64_t, 2))((-10L))))))))).even)) | p_1676->g_171);
                return l_344;
            }
        }
    }
    for (p_1676->g_236 = 0; (p_1676->g_236 != 2); ++p_1676->g_236)
    { /* block id: 129 */
        int32_t l_352[5] = {0x4E9D901EL,0x4E9D901EL,0x4E9D901EL,0x4E9D901EL,0x4E9D901EL};
        uint16_t *l_357 = &p_1676->g_87;
        VECTOR(uint8_t, 2) l_364 = (VECTOR(uint8_t, 2))(255UL, 0x20L);
        VECTOR(int16_t, 8) l_365 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x7D1FL), 0x7D1FL), 0x7D1FL, (-1L), 0x7D1FL);
        uint8_t *l_366 = (void*)0;
        uint8_t *l_367 = (void*)0;
        uint8_t *l_368 = (void*)0;
        uint8_t *l_369 = (void*)0;
        uint8_t *l_370 = (void*)0;
        uint8_t *l_371 = (void*)0;
        int32_t l_372 = 0x7ADEB0F8L;
        int32_t *l_373[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        VECTOR(uint8_t, 8) l_382 = (VECTOR(uint8_t, 8))(0xF6L, (VECTOR(uint8_t, 4))(0xF6L, (VECTOR(uint8_t, 2))(0xF6L, 247UL), 247UL), 247UL, 0xF6L, 247UL);
        int8_t l_459 = (-1L);
        int32_t l_463 = (-1L);
        int32_t l_474 = (-2L);
        uint64_t l_475 = 18446744073709551606UL;
        uint8_t ***l_502 = (void*)0;
        VECTOR(int8_t, 8) l_586 = (VECTOR(int8_t, 8))(0x50L, (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 0x06L), 0x06L), 0x06L, 0x50L, 0x06L);
        VECTOR(int8_t, 8) l_587 = (VECTOR(int8_t, 8))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-7L)), (-7L)), (-7L), 2L, (-7L));
        VECTOR(uint64_t, 2) l_616 = (VECTOR(uint64_t, 2))(0x497E9C807513CA28L, 0UL);
        int32_t **l_634 = &l_373[2][1];
        int i, j;
        (1 + 1);
    }
    return (*p_1676->g_31);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_comm_values[i] = 1;
    struct S0 c_1677;
    struct S0* p_1676 = &c_1677;
    struct S0 c_1678 = {
        {2L,2L,2L,2L}, // p_1676->g_32
        &p_1676->g_32[3], // p_1676->g_31
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x01B5F7A0L), 0x01B5F7A0L), 0x01B5F7A0L, 0L, 0x01B5F7A0L), // p_1676->g_52
        4294967295UL, // p_1676->g_71
        0xFD24L, // p_1676->g_87
        (-6L), // p_1676->g_100
        0xA7E6D091L, // p_1676->g_102
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x1EL), 0x1EL), // p_1676->g_127
        (VECTOR(int16_t, 2))(0L, 0x24A7L), // p_1676->g_143
        0x00105832D0560285L, // p_1676->g_171
        4294967293UL, // p_1676->g_174
        (VECTOR(int32_t, 16))(0x70BABF46L, (VECTOR(int32_t, 4))(0x70BABF46L, (VECTOR(int32_t, 2))(0x70BABF46L, 1L), 1L), 1L, 0x70BABF46L, 1L, (VECTOR(int32_t, 2))(0x70BABF46L, 1L), (VECTOR(int32_t, 2))(0x70BABF46L, 1L), 0x70BABF46L, 1L, 0x70BABF46L, 1L), // p_1676->g_175
        0x69447990L, // p_1676->g_207
        0x16L, // p_1676->g_211
        (void*)0, // p_1676->g_220
        65527UL, // p_1676->g_236
        (VECTOR(uint8_t, 8))(0x4FL, (VECTOR(uint8_t, 4))(0x4FL, (VECTOR(uint8_t, 2))(0x4FL, 252UL), 252UL), 252UL, 0x4FL, 252UL), // p_1676->g_271
        (VECTOR(int64_t, 8))(0x05E94A68FEA37F8DL, (VECTOR(int64_t, 4))(0x05E94A68FEA37F8DL, (VECTOR(int64_t, 2))(0x05E94A68FEA37F8DL, 0x46D1A99E75E4760EL), 0x46D1A99E75E4760EL), 0x46D1A99E75E4760EL, 0x05E94A68FEA37F8DL, 0x46D1A99E75E4760EL), // p_1676->g_286
        (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 2L), 2L), // p_1676->g_288
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-6L)), (-6L)), // p_1676->g_292
        (void*)0, // p_1676->g_300
        {{&p_1676->g_300,&p_1676->g_300},{&p_1676->g_300,&p_1676->g_300}}, // p_1676->g_299
        (void*)0, // p_1676->g_301
        &p_1676->g_299[0][0], // p_1676->g_302
        (VECTOR(int64_t, 8))(0x096E82DC942D0C8CL, (VECTOR(int64_t, 4))(0x096E82DC942D0C8CL, (VECTOR(int64_t, 2))(0x096E82DC942D0C8CL, (-10L)), (-10L)), (-10L), 0x096E82DC942D0C8CL, (-10L)), // p_1676->g_327
        (VECTOR(uint16_t, 2))(1UL, 1UL), // p_1676->g_333
        (void*)0, // p_1676->g_336
        0x1D0AFAACL, // p_1676->g_340
        0x4E740CD5L, // p_1676->g_341
        (VECTOR(int16_t, 2))(0x6111L, 0x1B9DL), // p_1676->g_358
        &p_1676->g_32[3], // p_1676->g_375
        &p_1676->g_375, // p_1676->g_374
        (VECTOR(uint16_t, 8))(0x43E3L, (VECTOR(uint16_t, 4))(0x43E3L, (VECTOR(uint16_t, 2))(0x43E3L, 0x680DL), 0x680DL), 0x680DL, 0x43E3L, 0x680DL), // p_1676->g_410
        (VECTOR(int64_t, 16))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0x7FEEB476EC481428L), 0x7FEEB476EC481428L), 0x7FEEB476EC481428L, 4L, 0x7FEEB476EC481428L, (VECTOR(int64_t, 2))(4L, 0x7FEEB476EC481428L), (VECTOR(int64_t, 2))(4L, 0x7FEEB476EC481428L), 4L, 0x7FEEB476EC481428L, 4L, 0x7FEEB476EC481428L), // p_1676->g_424
        0x4D27D279B66DC0AEL, // p_1676->g_427
        (VECTOR(int8_t, 4))(0x4CL, (VECTOR(int8_t, 2))(0x4CL, 0x44L), 0x44L), // p_1676->g_428
        &p_1676->g_207, // p_1676->g_433
        &p_1676->g_433, // p_1676->g_432
        (VECTOR(uint16_t, 16))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0x3EFCL), 0x3EFCL), 0x3EFCL, 3UL, 0x3EFCL, (VECTOR(uint16_t, 2))(3UL, 0x3EFCL), (VECTOR(uint16_t, 2))(3UL, 0x3EFCL), 3UL, 0x3EFCL, 3UL, 0x3EFCL), // p_1676->g_495
        (VECTOR(uint8_t, 2))(0x12L, 0xB8L), // p_1676->g_585
        0x166DL, // p_1676->g_594
        (VECTOR(int16_t, 4))(0x0343L, (VECTOR(int16_t, 2))(0x0343L, (-10L)), (-10L)), // p_1676->g_665
        (void*)0, // p_1676->g_719
        &p_1676->g_71, // p_1676->g_722
        (-1L), // p_1676->g_743
        (void*)0, // p_1676->g_760
        0UL, // p_1676->g_772
        (VECTOR(uint16_t, 16))(0x7AA7L, (VECTOR(uint16_t, 4))(0x7AA7L, (VECTOR(uint16_t, 2))(0x7AA7L, 0x326EL), 0x326EL), 0x326EL, 0x7AA7L, 0x326EL, (VECTOR(uint16_t, 2))(0x7AA7L, 0x326EL), (VECTOR(uint16_t, 2))(0x7AA7L, 0x326EL), 0x7AA7L, 0x326EL, 0x7AA7L, 0x326EL), // p_1676->g_817
        (VECTOR(int16_t, 16))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x6A13L), 0x6A13L), 0x6A13L, (-7L), 0x6A13L, (VECTOR(int16_t, 2))((-7L), 0x6A13L), (VECTOR(int16_t, 2))((-7L), 0x6A13L), (-7L), 0x6A13L, (-7L), 0x6A13L), // p_1676->g_821
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x0BF88DD6L), 0x0BF88DD6L), 0x0BF88DD6L, 0UL, 0x0BF88DD6L), // p_1676->g_828
        {&p_1676->g_760,&p_1676->g_760,&p_1676->g_760}, // p_1676->g_838
        (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-9L)), (-9L)), (-9L), 6L, (-9L)), // p_1676->g_923
        (VECTOR(int16_t, 4))(0x001EL, (VECTOR(int16_t, 2))(0x001EL, 0x0C9CL), 0x0C9CL), // p_1676->g_926
        0xB23422205A735BBFL, // p_1676->g_936
        &p_1676->g_31, // p_1676->g_996
        (VECTOR(int16_t, 2))(0x603DL, (-1L)), // p_1676->g_1013
        (VECTOR(int16_t, 16))(0x0D22L, (VECTOR(int16_t, 4))(0x0D22L, (VECTOR(int16_t, 2))(0x0D22L, 0x1450L), 0x1450L), 0x1450L, 0x0D22L, 0x1450L, (VECTOR(int16_t, 2))(0x0D22L, 0x1450L), (VECTOR(int16_t, 2))(0x0D22L, 0x1450L), 0x0D22L, 0x1450L, 0x0D22L, 0x1450L), // p_1676->g_1015
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5D58L), 0x5D58L), 0x5D58L, 1L, 0x5D58L, (VECTOR(int16_t, 2))(1L, 0x5D58L), (VECTOR(int16_t, 2))(1L, 0x5D58L), 1L, 0x5D58L, 1L, 0x5D58L), // p_1676->g_1016
        (VECTOR(int32_t, 2))(0x45CCBECEL, 0x6A1C533CL), // p_1676->g_1020
        (VECTOR(int8_t, 8))(0x13L, (VECTOR(int8_t, 4))(0x13L, (VECTOR(int8_t, 2))(0x13L, 8L), 8L), 8L, 0x13L, 8L), // p_1676->g_1103
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 6L), 6L), // p_1676->g_1104
        (VECTOR(uint32_t, 2))(0xDF90FC32L, 7UL), // p_1676->g_1135
        (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 4294967295UL), 4294967295UL), // p_1676->g_1136
        &p_1676->g_340, // p_1676->g_1148
        &p_1676->g_1148, // p_1676->g_1147
        &p_1676->g_1147, // p_1676->g_1146
        (VECTOR(uint8_t, 4))(0x43L, (VECTOR(uint8_t, 2))(0x43L, 1UL), 1UL), // p_1676->g_1149
        (VECTOR(uint32_t, 2))(1UL, 0x8FA9CD89L), // p_1676->g_1195
        (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x5DF8L), 0x5DF8L), 0x5DF8L, 9L, 0x5DF8L), // p_1676->g_1200
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x2ECCL), 0x2ECCL), // p_1676->g_1204
        (VECTOR(int16_t, 8))(0x0BE2L, (VECTOR(int16_t, 4))(0x0BE2L, (VECTOR(int16_t, 2))(0x0BE2L, 0L), 0L), 0L, 0x0BE2L, 0L), // p_1676->g_1205
        (VECTOR(uint8_t, 2))(0UL, 1UL), // p_1676->g_1214
        (VECTOR(uint8_t, 8))(0x01L, (VECTOR(uint8_t, 4))(0x01L, (VECTOR(uint8_t, 2))(0x01L, 4UL), 4UL), 4UL, 0x01L, 4UL), // p_1676->g_1216
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x8482L), 0x8482L), 0x8482L, 1UL, 0x8482L), // p_1676->g_1280
        (VECTOR(uint16_t, 16))(0xE4E7L, (VECTOR(uint16_t, 4))(0xE4E7L, (VECTOR(uint16_t, 2))(0xE4E7L, 65534UL), 65534UL), 65534UL, 0xE4E7L, 65534UL, (VECTOR(uint16_t, 2))(0xE4E7L, 65534UL), (VECTOR(uint16_t, 2))(0xE4E7L, 65534UL), 0xE4E7L, 65534UL, 0xE4E7L, 65534UL), // p_1676->g_1282
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x232922279010F93EL), 0x232922279010F93EL), // p_1676->g_1316
        0x0A6CL, // p_1676->g_1330
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x020A676CL), 0x020A676CL), 0x020A676CL, 0L, 0x020A676CL), // p_1676->g_1332
        (VECTOR(int8_t, 16))(0x17L, (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, 0x61L), 0x61L), 0x61L, 0x17L, 0x61L, (VECTOR(int8_t, 2))(0x17L, 0x61L), (VECTOR(int8_t, 2))(0x17L, 0x61L), 0x17L, 0x61L, 0x17L, 0x61L), // p_1676->g_1346
        0x1A62L, // p_1676->g_1353
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x60L), 0x60L), // p_1676->g_1545
        {{&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171},{&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171},{&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171,&p_1676->g_171}}, // p_1676->g_1549
        &p_1676->g_1549[0][0], // p_1676->g_1548
        (void*)0, // p_1676->g_1561
        {{&p_1676->g_336,&p_1676->g_336,&p_1676->g_336,&p_1676->g_336},{&p_1676->g_336,&p_1676->g_336,&p_1676->g_336,&p_1676->g_336}}, // p_1676->g_1562
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x692A4CD65B8831D1L), 0x692A4CD65B8831D1L), 0x692A4CD65B8831D1L, 1L, 0x692A4CD65B8831D1L, (VECTOR(int64_t, 2))(1L, 0x692A4CD65B8831D1L), (VECTOR(int64_t, 2))(1L, 0x692A4CD65B8831D1L), 1L, 0x692A4CD65B8831D1L, 1L, 0x692A4CD65B8831D1L), // p_1676->g_1585
        (VECTOR(uint16_t, 8))(0xD72BL, (VECTOR(uint16_t, 4))(0xD72BL, (VECTOR(uint16_t, 2))(0xD72BL, 65527UL), 65527UL), 65527UL, 0xD72BL, 65527UL), // p_1676->g_1586
        (VECTOR(int16_t, 2))((-10L), 0x2A0CL), // p_1676->g_1594
        (void*)0, // p_1676->g_1631
        &p_1676->g_32[3], // p_1676->g_1633
        &p_1676->g_427, // p_1676->g_1646
        &p_1676->g_1646, // p_1676->g_1645
        (void*)0, // p_1676->g_1667
        (void*)0, // p_1676->g_1668
        &p_1676->g_375, // p_1676->g_1669
        &p_1676->g_32[3], // p_1676->g_1670
        0, // p_1676->v_collective
        sequence_input[get_global_id(0)], // p_1676->global_0_offset
        sequence_input[get_global_id(1)], // p_1676->global_1_offset
        sequence_input[get_global_id(2)], // p_1676->global_2_offset
        sequence_input[get_local_id(0)], // p_1676->local_0_offset
        sequence_input[get_local_id(1)], // p_1676->local_1_offset
        sequence_input[get_local_id(2)], // p_1676->local_2_offset
        sequence_input[get_group_id(0)], // p_1676->group_0_offset
        sequence_input[get_group_id(1)], // p_1676->group_1_offset
        sequence_input[get_group_id(2)], // p_1676->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[0][get_linear_local_id()])), // p_1676->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1677 = c_1678;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1676);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1676->g_32[i], "p_1676->g_32[i]", print_hash_value);

    }
    transparent_crc(p_1676->g_52.s0, "p_1676->g_52.s0", print_hash_value);
    transparent_crc(p_1676->g_52.s1, "p_1676->g_52.s1", print_hash_value);
    transparent_crc(p_1676->g_52.s2, "p_1676->g_52.s2", print_hash_value);
    transparent_crc(p_1676->g_52.s3, "p_1676->g_52.s3", print_hash_value);
    transparent_crc(p_1676->g_52.s4, "p_1676->g_52.s4", print_hash_value);
    transparent_crc(p_1676->g_52.s5, "p_1676->g_52.s5", print_hash_value);
    transparent_crc(p_1676->g_52.s6, "p_1676->g_52.s6", print_hash_value);
    transparent_crc(p_1676->g_52.s7, "p_1676->g_52.s7", print_hash_value);
    transparent_crc(p_1676->g_71, "p_1676->g_71", print_hash_value);
    transparent_crc(p_1676->g_87, "p_1676->g_87", print_hash_value);
    transparent_crc(p_1676->g_100, "p_1676->g_100", print_hash_value);
    transparent_crc(p_1676->g_102, "p_1676->g_102", print_hash_value);
    transparent_crc(p_1676->g_127.x, "p_1676->g_127.x", print_hash_value);
    transparent_crc(p_1676->g_127.y, "p_1676->g_127.y", print_hash_value);
    transparent_crc(p_1676->g_127.z, "p_1676->g_127.z", print_hash_value);
    transparent_crc(p_1676->g_127.w, "p_1676->g_127.w", print_hash_value);
    transparent_crc(p_1676->g_143.x, "p_1676->g_143.x", print_hash_value);
    transparent_crc(p_1676->g_143.y, "p_1676->g_143.y", print_hash_value);
    transparent_crc(p_1676->g_171, "p_1676->g_171", print_hash_value);
    transparent_crc(p_1676->g_174, "p_1676->g_174", print_hash_value);
    transparent_crc(p_1676->g_175.s0, "p_1676->g_175.s0", print_hash_value);
    transparent_crc(p_1676->g_175.s1, "p_1676->g_175.s1", print_hash_value);
    transparent_crc(p_1676->g_175.s2, "p_1676->g_175.s2", print_hash_value);
    transparent_crc(p_1676->g_175.s3, "p_1676->g_175.s3", print_hash_value);
    transparent_crc(p_1676->g_175.s4, "p_1676->g_175.s4", print_hash_value);
    transparent_crc(p_1676->g_175.s5, "p_1676->g_175.s5", print_hash_value);
    transparent_crc(p_1676->g_175.s6, "p_1676->g_175.s6", print_hash_value);
    transparent_crc(p_1676->g_175.s7, "p_1676->g_175.s7", print_hash_value);
    transparent_crc(p_1676->g_175.s8, "p_1676->g_175.s8", print_hash_value);
    transparent_crc(p_1676->g_175.s9, "p_1676->g_175.s9", print_hash_value);
    transparent_crc(p_1676->g_175.sa, "p_1676->g_175.sa", print_hash_value);
    transparent_crc(p_1676->g_175.sb, "p_1676->g_175.sb", print_hash_value);
    transparent_crc(p_1676->g_175.sc, "p_1676->g_175.sc", print_hash_value);
    transparent_crc(p_1676->g_175.sd, "p_1676->g_175.sd", print_hash_value);
    transparent_crc(p_1676->g_175.se, "p_1676->g_175.se", print_hash_value);
    transparent_crc(p_1676->g_175.sf, "p_1676->g_175.sf", print_hash_value);
    transparent_crc(p_1676->g_207, "p_1676->g_207", print_hash_value);
    transparent_crc(p_1676->g_211, "p_1676->g_211", print_hash_value);
    transparent_crc(p_1676->g_236, "p_1676->g_236", print_hash_value);
    transparent_crc(p_1676->g_271.s0, "p_1676->g_271.s0", print_hash_value);
    transparent_crc(p_1676->g_271.s1, "p_1676->g_271.s1", print_hash_value);
    transparent_crc(p_1676->g_271.s2, "p_1676->g_271.s2", print_hash_value);
    transparent_crc(p_1676->g_271.s3, "p_1676->g_271.s3", print_hash_value);
    transparent_crc(p_1676->g_271.s4, "p_1676->g_271.s4", print_hash_value);
    transparent_crc(p_1676->g_271.s5, "p_1676->g_271.s5", print_hash_value);
    transparent_crc(p_1676->g_271.s6, "p_1676->g_271.s6", print_hash_value);
    transparent_crc(p_1676->g_271.s7, "p_1676->g_271.s7", print_hash_value);
    transparent_crc(p_1676->g_286.s0, "p_1676->g_286.s0", print_hash_value);
    transparent_crc(p_1676->g_286.s1, "p_1676->g_286.s1", print_hash_value);
    transparent_crc(p_1676->g_286.s2, "p_1676->g_286.s2", print_hash_value);
    transparent_crc(p_1676->g_286.s3, "p_1676->g_286.s3", print_hash_value);
    transparent_crc(p_1676->g_286.s4, "p_1676->g_286.s4", print_hash_value);
    transparent_crc(p_1676->g_286.s5, "p_1676->g_286.s5", print_hash_value);
    transparent_crc(p_1676->g_286.s6, "p_1676->g_286.s6", print_hash_value);
    transparent_crc(p_1676->g_286.s7, "p_1676->g_286.s7", print_hash_value);
    transparent_crc(p_1676->g_288.x, "p_1676->g_288.x", print_hash_value);
    transparent_crc(p_1676->g_288.y, "p_1676->g_288.y", print_hash_value);
    transparent_crc(p_1676->g_288.z, "p_1676->g_288.z", print_hash_value);
    transparent_crc(p_1676->g_288.w, "p_1676->g_288.w", print_hash_value);
    transparent_crc(p_1676->g_292.x, "p_1676->g_292.x", print_hash_value);
    transparent_crc(p_1676->g_292.y, "p_1676->g_292.y", print_hash_value);
    transparent_crc(p_1676->g_292.z, "p_1676->g_292.z", print_hash_value);
    transparent_crc(p_1676->g_292.w, "p_1676->g_292.w", print_hash_value);
    transparent_crc(p_1676->g_327.s0, "p_1676->g_327.s0", print_hash_value);
    transparent_crc(p_1676->g_327.s1, "p_1676->g_327.s1", print_hash_value);
    transparent_crc(p_1676->g_327.s2, "p_1676->g_327.s2", print_hash_value);
    transparent_crc(p_1676->g_327.s3, "p_1676->g_327.s3", print_hash_value);
    transparent_crc(p_1676->g_327.s4, "p_1676->g_327.s4", print_hash_value);
    transparent_crc(p_1676->g_327.s5, "p_1676->g_327.s5", print_hash_value);
    transparent_crc(p_1676->g_327.s6, "p_1676->g_327.s6", print_hash_value);
    transparent_crc(p_1676->g_327.s7, "p_1676->g_327.s7", print_hash_value);
    transparent_crc(p_1676->g_333.x, "p_1676->g_333.x", print_hash_value);
    transparent_crc(p_1676->g_333.y, "p_1676->g_333.y", print_hash_value);
    transparent_crc(p_1676->g_340, "p_1676->g_340", print_hash_value);
    transparent_crc(p_1676->g_341, "p_1676->g_341", print_hash_value);
    transparent_crc(p_1676->g_358.x, "p_1676->g_358.x", print_hash_value);
    transparent_crc(p_1676->g_358.y, "p_1676->g_358.y", print_hash_value);
    transparent_crc(p_1676->g_410.s0, "p_1676->g_410.s0", print_hash_value);
    transparent_crc(p_1676->g_410.s1, "p_1676->g_410.s1", print_hash_value);
    transparent_crc(p_1676->g_410.s2, "p_1676->g_410.s2", print_hash_value);
    transparent_crc(p_1676->g_410.s3, "p_1676->g_410.s3", print_hash_value);
    transparent_crc(p_1676->g_410.s4, "p_1676->g_410.s4", print_hash_value);
    transparent_crc(p_1676->g_410.s5, "p_1676->g_410.s5", print_hash_value);
    transparent_crc(p_1676->g_410.s6, "p_1676->g_410.s6", print_hash_value);
    transparent_crc(p_1676->g_410.s7, "p_1676->g_410.s7", print_hash_value);
    transparent_crc(p_1676->g_424.s0, "p_1676->g_424.s0", print_hash_value);
    transparent_crc(p_1676->g_424.s1, "p_1676->g_424.s1", print_hash_value);
    transparent_crc(p_1676->g_424.s2, "p_1676->g_424.s2", print_hash_value);
    transparent_crc(p_1676->g_424.s3, "p_1676->g_424.s3", print_hash_value);
    transparent_crc(p_1676->g_424.s4, "p_1676->g_424.s4", print_hash_value);
    transparent_crc(p_1676->g_424.s5, "p_1676->g_424.s5", print_hash_value);
    transparent_crc(p_1676->g_424.s6, "p_1676->g_424.s6", print_hash_value);
    transparent_crc(p_1676->g_424.s7, "p_1676->g_424.s7", print_hash_value);
    transparent_crc(p_1676->g_424.s8, "p_1676->g_424.s8", print_hash_value);
    transparent_crc(p_1676->g_424.s9, "p_1676->g_424.s9", print_hash_value);
    transparent_crc(p_1676->g_424.sa, "p_1676->g_424.sa", print_hash_value);
    transparent_crc(p_1676->g_424.sb, "p_1676->g_424.sb", print_hash_value);
    transparent_crc(p_1676->g_424.sc, "p_1676->g_424.sc", print_hash_value);
    transparent_crc(p_1676->g_424.sd, "p_1676->g_424.sd", print_hash_value);
    transparent_crc(p_1676->g_424.se, "p_1676->g_424.se", print_hash_value);
    transparent_crc(p_1676->g_424.sf, "p_1676->g_424.sf", print_hash_value);
    transparent_crc(p_1676->g_427, "p_1676->g_427", print_hash_value);
    transparent_crc(p_1676->g_428.x, "p_1676->g_428.x", print_hash_value);
    transparent_crc(p_1676->g_428.y, "p_1676->g_428.y", print_hash_value);
    transparent_crc(p_1676->g_428.z, "p_1676->g_428.z", print_hash_value);
    transparent_crc(p_1676->g_428.w, "p_1676->g_428.w", print_hash_value);
    transparent_crc(p_1676->g_495.s0, "p_1676->g_495.s0", print_hash_value);
    transparent_crc(p_1676->g_495.s1, "p_1676->g_495.s1", print_hash_value);
    transparent_crc(p_1676->g_495.s2, "p_1676->g_495.s2", print_hash_value);
    transparent_crc(p_1676->g_495.s3, "p_1676->g_495.s3", print_hash_value);
    transparent_crc(p_1676->g_495.s4, "p_1676->g_495.s4", print_hash_value);
    transparent_crc(p_1676->g_495.s5, "p_1676->g_495.s5", print_hash_value);
    transparent_crc(p_1676->g_495.s6, "p_1676->g_495.s6", print_hash_value);
    transparent_crc(p_1676->g_495.s7, "p_1676->g_495.s7", print_hash_value);
    transparent_crc(p_1676->g_495.s8, "p_1676->g_495.s8", print_hash_value);
    transparent_crc(p_1676->g_495.s9, "p_1676->g_495.s9", print_hash_value);
    transparent_crc(p_1676->g_495.sa, "p_1676->g_495.sa", print_hash_value);
    transparent_crc(p_1676->g_495.sb, "p_1676->g_495.sb", print_hash_value);
    transparent_crc(p_1676->g_495.sc, "p_1676->g_495.sc", print_hash_value);
    transparent_crc(p_1676->g_495.sd, "p_1676->g_495.sd", print_hash_value);
    transparent_crc(p_1676->g_495.se, "p_1676->g_495.se", print_hash_value);
    transparent_crc(p_1676->g_495.sf, "p_1676->g_495.sf", print_hash_value);
    transparent_crc(p_1676->g_585.x, "p_1676->g_585.x", print_hash_value);
    transparent_crc(p_1676->g_585.y, "p_1676->g_585.y", print_hash_value);
    transparent_crc(p_1676->g_594, "p_1676->g_594", print_hash_value);
    transparent_crc(p_1676->g_665.x, "p_1676->g_665.x", print_hash_value);
    transparent_crc(p_1676->g_665.y, "p_1676->g_665.y", print_hash_value);
    transparent_crc(p_1676->g_665.z, "p_1676->g_665.z", print_hash_value);
    transparent_crc(p_1676->g_665.w, "p_1676->g_665.w", print_hash_value);
    transparent_crc(p_1676->g_743, "p_1676->g_743", print_hash_value);
    transparent_crc(p_1676->g_772, "p_1676->g_772", print_hash_value);
    transparent_crc(p_1676->g_817.s0, "p_1676->g_817.s0", print_hash_value);
    transparent_crc(p_1676->g_817.s1, "p_1676->g_817.s1", print_hash_value);
    transparent_crc(p_1676->g_817.s2, "p_1676->g_817.s2", print_hash_value);
    transparent_crc(p_1676->g_817.s3, "p_1676->g_817.s3", print_hash_value);
    transparent_crc(p_1676->g_817.s4, "p_1676->g_817.s4", print_hash_value);
    transparent_crc(p_1676->g_817.s5, "p_1676->g_817.s5", print_hash_value);
    transparent_crc(p_1676->g_817.s6, "p_1676->g_817.s6", print_hash_value);
    transparent_crc(p_1676->g_817.s7, "p_1676->g_817.s7", print_hash_value);
    transparent_crc(p_1676->g_817.s8, "p_1676->g_817.s8", print_hash_value);
    transparent_crc(p_1676->g_817.s9, "p_1676->g_817.s9", print_hash_value);
    transparent_crc(p_1676->g_817.sa, "p_1676->g_817.sa", print_hash_value);
    transparent_crc(p_1676->g_817.sb, "p_1676->g_817.sb", print_hash_value);
    transparent_crc(p_1676->g_817.sc, "p_1676->g_817.sc", print_hash_value);
    transparent_crc(p_1676->g_817.sd, "p_1676->g_817.sd", print_hash_value);
    transparent_crc(p_1676->g_817.se, "p_1676->g_817.se", print_hash_value);
    transparent_crc(p_1676->g_817.sf, "p_1676->g_817.sf", print_hash_value);
    transparent_crc(p_1676->g_821.s0, "p_1676->g_821.s0", print_hash_value);
    transparent_crc(p_1676->g_821.s1, "p_1676->g_821.s1", print_hash_value);
    transparent_crc(p_1676->g_821.s2, "p_1676->g_821.s2", print_hash_value);
    transparent_crc(p_1676->g_821.s3, "p_1676->g_821.s3", print_hash_value);
    transparent_crc(p_1676->g_821.s4, "p_1676->g_821.s4", print_hash_value);
    transparent_crc(p_1676->g_821.s5, "p_1676->g_821.s5", print_hash_value);
    transparent_crc(p_1676->g_821.s6, "p_1676->g_821.s6", print_hash_value);
    transparent_crc(p_1676->g_821.s7, "p_1676->g_821.s7", print_hash_value);
    transparent_crc(p_1676->g_821.s8, "p_1676->g_821.s8", print_hash_value);
    transparent_crc(p_1676->g_821.s9, "p_1676->g_821.s9", print_hash_value);
    transparent_crc(p_1676->g_821.sa, "p_1676->g_821.sa", print_hash_value);
    transparent_crc(p_1676->g_821.sb, "p_1676->g_821.sb", print_hash_value);
    transparent_crc(p_1676->g_821.sc, "p_1676->g_821.sc", print_hash_value);
    transparent_crc(p_1676->g_821.sd, "p_1676->g_821.sd", print_hash_value);
    transparent_crc(p_1676->g_821.se, "p_1676->g_821.se", print_hash_value);
    transparent_crc(p_1676->g_821.sf, "p_1676->g_821.sf", print_hash_value);
    transparent_crc(p_1676->g_828.s0, "p_1676->g_828.s0", print_hash_value);
    transparent_crc(p_1676->g_828.s1, "p_1676->g_828.s1", print_hash_value);
    transparent_crc(p_1676->g_828.s2, "p_1676->g_828.s2", print_hash_value);
    transparent_crc(p_1676->g_828.s3, "p_1676->g_828.s3", print_hash_value);
    transparent_crc(p_1676->g_828.s4, "p_1676->g_828.s4", print_hash_value);
    transparent_crc(p_1676->g_828.s5, "p_1676->g_828.s5", print_hash_value);
    transparent_crc(p_1676->g_828.s6, "p_1676->g_828.s6", print_hash_value);
    transparent_crc(p_1676->g_828.s7, "p_1676->g_828.s7", print_hash_value);
    transparent_crc(p_1676->g_923.s0, "p_1676->g_923.s0", print_hash_value);
    transparent_crc(p_1676->g_923.s1, "p_1676->g_923.s1", print_hash_value);
    transparent_crc(p_1676->g_923.s2, "p_1676->g_923.s2", print_hash_value);
    transparent_crc(p_1676->g_923.s3, "p_1676->g_923.s3", print_hash_value);
    transparent_crc(p_1676->g_923.s4, "p_1676->g_923.s4", print_hash_value);
    transparent_crc(p_1676->g_923.s5, "p_1676->g_923.s5", print_hash_value);
    transparent_crc(p_1676->g_923.s6, "p_1676->g_923.s6", print_hash_value);
    transparent_crc(p_1676->g_923.s7, "p_1676->g_923.s7", print_hash_value);
    transparent_crc(p_1676->g_926.x, "p_1676->g_926.x", print_hash_value);
    transparent_crc(p_1676->g_926.y, "p_1676->g_926.y", print_hash_value);
    transparent_crc(p_1676->g_926.z, "p_1676->g_926.z", print_hash_value);
    transparent_crc(p_1676->g_926.w, "p_1676->g_926.w", print_hash_value);
    transparent_crc(p_1676->g_936, "p_1676->g_936", print_hash_value);
    transparent_crc(p_1676->g_1013.x, "p_1676->g_1013.x", print_hash_value);
    transparent_crc(p_1676->g_1013.y, "p_1676->g_1013.y", print_hash_value);
    transparent_crc(p_1676->g_1015.s0, "p_1676->g_1015.s0", print_hash_value);
    transparent_crc(p_1676->g_1015.s1, "p_1676->g_1015.s1", print_hash_value);
    transparent_crc(p_1676->g_1015.s2, "p_1676->g_1015.s2", print_hash_value);
    transparent_crc(p_1676->g_1015.s3, "p_1676->g_1015.s3", print_hash_value);
    transparent_crc(p_1676->g_1015.s4, "p_1676->g_1015.s4", print_hash_value);
    transparent_crc(p_1676->g_1015.s5, "p_1676->g_1015.s5", print_hash_value);
    transparent_crc(p_1676->g_1015.s6, "p_1676->g_1015.s6", print_hash_value);
    transparent_crc(p_1676->g_1015.s7, "p_1676->g_1015.s7", print_hash_value);
    transparent_crc(p_1676->g_1015.s8, "p_1676->g_1015.s8", print_hash_value);
    transparent_crc(p_1676->g_1015.s9, "p_1676->g_1015.s9", print_hash_value);
    transparent_crc(p_1676->g_1015.sa, "p_1676->g_1015.sa", print_hash_value);
    transparent_crc(p_1676->g_1015.sb, "p_1676->g_1015.sb", print_hash_value);
    transparent_crc(p_1676->g_1015.sc, "p_1676->g_1015.sc", print_hash_value);
    transparent_crc(p_1676->g_1015.sd, "p_1676->g_1015.sd", print_hash_value);
    transparent_crc(p_1676->g_1015.se, "p_1676->g_1015.se", print_hash_value);
    transparent_crc(p_1676->g_1015.sf, "p_1676->g_1015.sf", print_hash_value);
    transparent_crc(p_1676->g_1016.s0, "p_1676->g_1016.s0", print_hash_value);
    transparent_crc(p_1676->g_1016.s1, "p_1676->g_1016.s1", print_hash_value);
    transparent_crc(p_1676->g_1016.s2, "p_1676->g_1016.s2", print_hash_value);
    transparent_crc(p_1676->g_1016.s3, "p_1676->g_1016.s3", print_hash_value);
    transparent_crc(p_1676->g_1016.s4, "p_1676->g_1016.s4", print_hash_value);
    transparent_crc(p_1676->g_1016.s5, "p_1676->g_1016.s5", print_hash_value);
    transparent_crc(p_1676->g_1016.s6, "p_1676->g_1016.s6", print_hash_value);
    transparent_crc(p_1676->g_1016.s7, "p_1676->g_1016.s7", print_hash_value);
    transparent_crc(p_1676->g_1016.s8, "p_1676->g_1016.s8", print_hash_value);
    transparent_crc(p_1676->g_1016.s9, "p_1676->g_1016.s9", print_hash_value);
    transparent_crc(p_1676->g_1016.sa, "p_1676->g_1016.sa", print_hash_value);
    transparent_crc(p_1676->g_1016.sb, "p_1676->g_1016.sb", print_hash_value);
    transparent_crc(p_1676->g_1016.sc, "p_1676->g_1016.sc", print_hash_value);
    transparent_crc(p_1676->g_1016.sd, "p_1676->g_1016.sd", print_hash_value);
    transparent_crc(p_1676->g_1016.se, "p_1676->g_1016.se", print_hash_value);
    transparent_crc(p_1676->g_1016.sf, "p_1676->g_1016.sf", print_hash_value);
    transparent_crc(p_1676->g_1020.x, "p_1676->g_1020.x", print_hash_value);
    transparent_crc(p_1676->g_1020.y, "p_1676->g_1020.y", print_hash_value);
    transparent_crc(p_1676->g_1103.s0, "p_1676->g_1103.s0", print_hash_value);
    transparent_crc(p_1676->g_1103.s1, "p_1676->g_1103.s1", print_hash_value);
    transparent_crc(p_1676->g_1103.s2, "p_1676->g_1103.s2", print_hash_value);
    transparent_crc(p_1676->g_1103.s3, "p_1676->g_1103.s3", print_hash_value);
    transparent_crc(p_1676->g_1103.s4, "p_1676->g_1103.s4", print_hash_value);
    transparent_crc(p_1676->g_1103.s5, "p_1676->g_1103.s5", print_hash_value);
    transparent_crc(p_1676->g_1103.s6, "p_1676->g_1103.s6", print_hash_value);
    transparent_crc(p_1676->g_1103.s7, "p_1676->g_1103.s7", print_hash_value);
    transparent_crc(p_1676->g_1104.x, "p_1676->g_1104.x", print_hash_value);
    transparent_crc(p_1676->g_1104.y, "p_1676->g_1104.y", print_hash_value);
    transparent_crc(p_1676->g_1104.z, "p_1676->g_1104.z", print_hash_value);
    transparent_crc(p_1676->g_1104.w, "p_1676->g_1104.w", print_hash_value);
    transparent_crc(p_1676->g_1135.x, "p_1676->g_1135.x", print_hash_value);
    transparent_crc(p_1676->g_1135.y, "p_1676->g_1135.y", print_hash_value);
    transparent_crc(p_1676->g_1136.x, "p_1676->g_1136.x", print_hash_value);
    transparent_crc(p_1676->g_1136.y, "p_1676->g_1136.y", print_hash_value);
    transparent_crc(p_1676->g_1136.z, "p_1676->g_1136.z", print_hash_value);
    transparent_crc(p_1676->g_1136.w, "p_1676->g_1136.w", print_hash_value);
    transparent_crc(p_1676->g_1149.x, "p_1676->g_1149.x", print_hash_value);
    transparent_crc(p_1676->g_1149.y, "p_1676->g_1149.y", print_hash_value);
    transparent_crc(p_1676->g_1149.z, "p_1676->g_1149.z", print_hash_value);
    transparent_crc(p_1676->g_1149.w, "p_1676->g_1149.w", print_hash_value);
    transparent_crc(p_1676->g_1195.x, "p_1676->g_1195.x", print_hash_value);
    transparent_crc(p_1676->g_1195.y, "p_1676->g_1195.y", print_hash_value);
    transparent_crc(p_1676->g_1200.s0, "p_1676->g_1200.s0", print_hash_value);
    transparent_crc(p_1676->g_1200.s1, "p_1676->g_1200.s1", print_hash_value);
    transparent_crc(p_1676->g_1200.s2, "p_1676->g_1200.s2", print_hash_value);
    transparent_crc(p_1676->g_1200.s3, "p_1676->g_1200.s3", print_hash_value);
    transparent_crc(p_1676->g_1200.s4, "p_1676->g_1200.s4", print_hash_value);
    transparent_crc(p_1676->g_1200.s5, "p_1676->g_1200.s5", print_hash_value);
    transparent_crc(p_1676->g_1200.s6, "p_1676->g_1200.s6", print_hash_value);
    transparent_crc(p_1676->g_1200.s7, "p_1676->g_1200.s7", print_hash_value);
    transparent_crc(p_1676->g_1204.x, "p_1676->g_1204.x", print_hash_value);
    transparent_crc(p_1676->g_1204.y, "p_1676->g_1204.y", print_hash_value);
    transparent_crc(p_1676->g_1204.z, "p_1676->g_1204.z", print_hash_value);
    transparent_crc(p_1676->g_1204.w, "p_1676->g_1204.w", print_hash_value);
    transparent_crc(p_1676->g_1205.s0, "p_1676->g_1205.s0", print_hash_value);
    transparent_crc(p_1676->g_1205.s1, "p_1676->g_1205.s1", print_hash_value);
    transparent_crc(p_1676->g_1205.s2, "p_1676->g_1205.s2", print_hash_value);
    transparent_crc(p_1676->g_1205.s3, "p_1676->g_1205.s3", print_hash_value);
    transparent_crc(p_1676->g_1205.s4, "p_1676->g_1205.s4", print_hash_value);
    transparent_crc(p_1676->g_1205.s5, "p_1676->g_1205.s5", print_hash_value);
    transparent_crc(p_1676->g_1205.s6, "p_1676->g_1205.s6", print_hash_value);
    transparent_crc(p_1676->g_1205.s7, "p_1676->g_1205.s7", print_hash_value);
    transparent_crc(p_1676->g_1214.x, "p_1676->g_1214.x", print_hash_value);
    transparent_crc(p_1676->g_1214.y, "p_1676->g_1214.y", print_hash_value);
    transparent_crc(p_1676->g_1216.s0, "p_1676->g_1216.s0", print_hash_value);
    transparent_crc(p_1676->g_1216.s1, "p_1676->g_1216.s1", print_hash_value);
    transparent_crc(p_1676->g_1216.s2, "p_1676->g_1216.s2", print_hash_value);
    transparent_crc(p_1676->g_1216.s3, "p_1676->g_1216.s3", print_hash_value);
    transparent_crc(p_1676->g_1216.s4, "p_1676->g_1216.s4", print_hash_value);
    transparent_crc(p_1676->g_1216.s5, "p_1676->g_1216.s5", print_hash_value);
    transparent_crc(p_1676->g_1216.s6, "p_1676->g_1216.s6", print_hash_value);
    transparent_crc(p_1676->g_1216.s7, "p_1676->g_1216.s7", print_hash_value);
    transparent_crc(p_1676->g_1280.s0, "p_1676->g_1280.s0", print_hash_value);
    transparent_crc(p_1676->g_1280.s1, "p_1676->g_1280.s1", print_hash_value);
    transparent_crc(p_1676->g_1280.s2, "p_1676->g_1280.s2", print_hash_value);
    transparent_crc(p_1676->g_1280.s3, "p_1676->g_1280.s3", print_hash_value);
    transparent_crc(p_1676->g_1280.s4, "p_1676->g_1280.s4", print_hash_value);
    transparent_crc(p_1676->g_1280.s5, "p_1676->g_1280.s5", print_hash_value);
    transparent_crc(p_1676->g_1280.s6, "p_1676->g_1280.s6", print_hash_value);
    transparent_crc(p_1676->g_1280.s7, "p_1676->g_1280.s7", print_hash_value);
    transparent_crc(p_1676->g_1282.s0, "p_1676->g_1282.s0", print_hash_value);
    transparent_crc(p_1676->g_1282.s1, "p_1676->g_1282.s1", print_hash_value);
    transparent_crc(p_1676->g_1282.s2, "p_1676->g_1282.s2", print_hash_value);
    transparent_crc(p_1676->g_1282.s3, "p_1676->g_1282.s3", print_hash_value);
    transparent_crc(p_1676->g_1282.s4, "p_1676->g_1282.s4", print_hash_value);
    transparent_crc(p_1676->g_1282.s5, "p_1676->g_1282.s5", print_hash_value);
    transparent_crc(p_1676->g_1282.s6, "p_1676->g_1282.s6", print_hash_value);
    transparent_crc(p_1676->g_1282.s7, "p_1676->g_1282.s7", print_hash_value);
    transparent_crc(p_1676->g_1282.s8, "p_1676->g_1282.s8", print_hash_value);
    transparent_crc(p_1676->g_1282.s9, "p_1676->g_1282.s9", print_hash_value);
    transparent_crc(p_1676->g_1282.sa, "p_1676->g_1282.sa", print_hash_value);
    transparent_crc(p_1676->g_1282.sb, "p_1676->g_1282.sb", print_hash_value);
    transparent_crc(p_1676->g_1282.sc, "p_1676->g_1282.sc", print_hash_value);
    transparent_crc(p_1676->g_1282.sd, "p_1676->g_1282.sd", print_hash_value);
    transparent_crc(p_1676->g_1282.se, "p_1676->g_1282.se", print_hash_value);
    transparent_crc(p_1676->g_1282.sf, "p_1676->g_1282.sf", print_hash_value);
    transparent_crc(p_1676->g_1316.x, "p_1676->g_1316.x", print_hash_value);
    transparent_crc(p_1676->g_1316.y, "p_1676->g_1316.y", print_hash_value);
    transparent_crc(p_1676->g_1316.z, "p_1676->g_1316.z", print_hash_value);
    transparent_crc(p_1676->g_1316.w, "p_1676->g_1316.w", print_hash_value);
    transparent_crc(p_1676->g_1330, "p_1676->g_1330", print_hash_value);
    transparent_crc(p_1676->g_1332.s0, "p_1676->g_1332.s0", print_hash_value);
    transparent_crc(p_1676->g_1332.s1, "p_1676->g_1332.s1", print_hash_value);
    transparent_crc(p_1676->g_1332.s2, "p_1676->g_1332.s2", print_hash_value);
    transparent_crc(p_1676->g_1332.s3, "p_1676->g_1332.s3", print_hash_value);
    transparent_crc(p_1676->g_1332.s4, "p_1676->g_1332.s4", print_hash_value);
    transparent_crc(p_1676->g_1332.s5, "p_1676->g_1332.s5", print_hash_value);
    transparent_crc(p_1676->g_1332.s6, "p_1676->g_1332.s6", print_hash_value);
    transparent_crc(p_1676->g_1332.s7, "p_1676->g_1332.s7", print_hash_value);
    transparent_crc(p_1676->g_1346.s0, "p_1676->g_1346.s0", print_hash_value);
    transparent_crc(p_1676->g_1346.s1, "p_1676->g_1346.s1", print_hash_value);
    transparent_crc(p_1676->g_1346.s2, "p_1676->g_1346.s2", print_hash_value);
    transparent_crc(p_1676->g_1346.s3, "p_1676->g_1346.s3", print_hash_value);
    transparent_crc(p_1676->g_1346.s4, "p_1676->g_1346.s4", print_hash_value);
    transparent_crc(p_1676->g_1346.s5, "p_1676->g_1346.s5", print_hash_value);
    transparent_crc(p_1676->g_1346.s6, "p_1676->g_1346.s6", print_hash_value);
    transparent_crc(p_1676->g_1346.s7, "p_1676->g_1346.s7", print_hash_value);
    transparent_crc(p_1676->g_1346.s8, "p_1676->g_1346.s8", print_hash_value);
    transparent_crc(p_1676->g_1346.s9, "p_1676->g_1346.s9", print_hash_value);
    transparent_crc(p_1676->g_1346.sa, "p_1676->g_1346.sa", print_hash_value);
    transparent_crc(p_1676->g_1346.sb, "p_1676->g_1346.sb", print_hash_value);
    transparent_crc(p_1676->g_1346.sc, "p_1676->g_1346.sc", print_hash_value);
    transparent_crc(p_1676->g_1346.sd, "p_1676->g_1346.sd", print_hash_value);
    transparent_crc(p_1676->g_1346.se, "p_1676->g_1346.se", print_hash_value);
    transparent_crc(p_1676->g_1346.sf, "p_1676->g_1346.sf", print_hash_value);
    transparent_crc(p_1676->g_1353, "p_1676->g_1353", print_hash_value);
    transparent_crc(p_1676->g_1545.x, "p_1676->g_1545.x", print_hash_value);
    transparent_crc(p_1676->g_1545.y, "p_1676->g_1545.y", print_hash_value);
    transparent_crc(p_1676->g_1545.z, "p_1676->g_1545.z", print_hash_value);
    transparent_crc(p_1676->g_1545.w, "p_1676->g_1545.w", print_hash_value);
    transparent_crc(p_1676->g_1585.s0, "p_1676->g_1585.s0", print_hash_value);
    transparent_crc(p_1676->g_1585.s1, "p_1676->g_1585.s1", print_hash_value);
    transparent_crc(p_1676->g_1585.s2, "p_1676->g_1585.s2", print_hash_value);
    transparent_crc(p_1676->g_1585.s3, "p_1676->g_1585.s3", print_hash_value);
    transparent_crc(p_1676->g_1585.s4, "p_1676->g_1585.s4", print_hash_value);
    transparent_crc(p_1676->g_1585.s5, "p_1676->g_1585.s5", print_hash_value);
    transparent_crc(p_1676->g_1585.s6, "p_1676->g_1585.s6", print_hash_value);
    transparent_crc(p_1676->g_1585.s7, "p_1676->g_1585.s7", print_hash_value);
    transparent_crc(p_1676->g_1585.s8, "p_1676->g_1585.s8", print_hash_value);
    transparent_crc(p_1676->g_1585.s9, "p_1676->g_1585.s9", print_hash_value);
    transparent_crc(p_1676->g_1585.sa, "p_1676->g_1585.sa", print_hash_value);
    transparent_crc(p_1676->g_1585.sb, "p_1676->g_1585.sb", print_hash_value);
    transparent_crc(p_1676->g_1585.sc, "p_1676->g_1585.sc", print_hash_value);
    transparent_crc(p_1676->g_1585.sd, "p_1676->g_1585.sd", print_hash_value);
    transparent_crc(p_1676->g_1585.se, "p_1676->g_1585.se", print_hash_value);
    transparent_crc(p_1676->g_1585.sf, "p_1676->g_1585.sf", print_hash_value);
    transparent_crc(p_1676->g_1586.s0, "p_1676->g_1586.s0", print_hash_value);
    transparent_crc(p_1676->g_1586.s1, "p_1676->g_1586.s1", print_hash_value);
    transparent_crc(p_1676->g_1586.s2, "p_1676->g_1586.s2", print_hash_value);
    transparent_crc(p_1676->g_1586.s3, "p_1676->g_1586.s3", print_hash_value);
    transparent_crc(p_1676->g_1586.s4, "p_1676->g_1586.s4", print_hash_value);
    transparent_crc(p_1676->g_1586.s5, "p_1676->g_1586.s5", print_hash_value);
    transparent_crc(p_1676->g_1586.s6, "p_1676->g_1586.s6", print_hash_value);
    transparent_crc(p_1676->g_1586.s7, "p_1676->g_1586.s7", print_hash_value);
    transparent_crc(p_1676->g_1594.x, "p_1676->g_1594.x", print_hash_value);
    transparent_crc(p_1676->g_1594.y, "p_1676->g_1594.y", print_hash_value);
    transparent_crc(p_1676->v_collective, "p_1676->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 33; i++)
            transparent_crc(p_1676->g_special_values[i + 33 * get_linear_group_id()], "p_1676->g_special_values[i + 33 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 33; i++)
            transparent_crc(p_1676->l_special_values[i], "p_1676->l_special_values[i]", print_hash_value);
    transparent_crc(p_1676->l_comm_values[get_linear_local_id()], "p_1676->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1676->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()], "p_1676->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
