// -g 44,46,4 -l 1,46,4
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


// Seed: 1230076034

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
};

struct S1 {
   int32_t  f0;
   int64_t  f1;
   uint32_t  f2;
   volatile uint64_t  f3;
   int32_t  f4;
};

struct S2 {
    uint32_t g_7[2][1];
    int32_t g_30;
    int16_t g_34;
    int8_t g_36;
    int8_t g_69[5][9];
    uint64_t g_74;
    int64_t g_76;
    int32_t *g_87;
    int32_t * volatile * volatile g_86;
    uint16_t g_95;
    int64_t g_97;
    uint32_t g_121;
    int32_t **g_128;
    int32_t ***g_127[9][5][2];
    struct S0 g_142;
    struct S0 * volatile g_141;
    uint64_t g_279;
    int32_t ** volatile g_301;
    struct S1 g_306[3][2][6];
    struct S1 *g_305;
    int16_t g_337;
    struct S0 *g_351[3];
    struct S0 ** volatile g_350;
    struct S1 g_352[7][2][9];
    uint16_t g_354;
    int32_t g_366;
    struct S1 g_415;
    int16_t *g_452;
    volatile struct S1 g_454;
    volatile struct S1 g_455;
    uint8_t g_510[2];
    int32_t g_526;
    int8_t g_571;
    int64_t g_575;
    uint16_t g_579[2];
    volatile uint64_t * volatile g_622[8];
    volatile uint64_t * volatile *g_621;
    volatile uint64_t * volatile * volatile *g_620;
    int32_t g_651[9][4][7];
    uint32_t g_653;
    uint32_t *g_676;
    int64_t g_681;
    int64_t g_722;
    struct S1 g_788[9];
    uint16_t *g_798;
    uint16_t **g_797;
    int8_t *g_895;
    int8_t **g_894;
    uint16_t g_900;
    struct S1 g_916;
    int16_t g_928;
    struct S1 g_966;
    uint16_t *** volatile g_967;
    uint16_t *** volatile g_968;
    int64_t *g_1013[1][1][5];
    int64_t **g_1012;
    uint64_t g_1091;
    uint64_t g_1094;
    int32_t g_1097;
    uint32_t g_1162;
    struct S1 g_1198;
    struct S0 g_1209;
    int8_t g_1225[1];
    int32_t g_1226;
    int32_t g_1271;
    struct S0 ** volatile g_1275;
    int32_t ** volatile g_1292;
    struct S1 g_1311;
    struct S0 ***g_1321;
    uint32_t g_1340;
    volatile struct S1 g_1350;
    struct S1 **g_1352;
    struct S1 *** volatile g_1351;
    struct S0 * volatile g_1355;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S2 * p_1461);
struct S0  func_2(uint64_t  p_3, uint32_t  p_4, int64_t  p_5, int32_t  p_6, struct S2 * p_1461);
int16_t  func_12(uint64_t  p_13, struct S2 * p_1461);
int64_t  func_22(int64_t  p_23, int32_t * p_24, uint16_t  p_25, struct S0  p_26, struct S2 * p_1461);
int32_t * func_27(uint16_t  p_28, struct S2 * p_1461);
int32_t ** func_40(int32_t ** p_41, struct S2 * p_1461);
int32_t ** func_42(int64_t  p_43, int16_t * p_44, struct S2 * p_1461);
struct S1  func_45(int8_t * p_46, int32_t ** p_47, int64_t  p_48, uint32_t  p_49, struct S2 * p_1461);
int32_t ** func_50(int8_t * p_51, int32_t * p_52, int16_t * p_53, int16_t * p_54, struct S2 * p_1461);
int32_t * func_56(int16_t  p_57, uint64_t  p_58, int64_t  p_59, int32_t ** p_60, int32_t * p_61, struct S2 * p_1461);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1461->g_7 p_1461->g_36 p_1461->g_34 p_1461->g_30 p_1461->g_69 p_1461->g_86 p_1461->g_76 p_1461->g_97 p_1461->g_95 p_1461->g_128 p_1461->g_87 p_1461->g_74 p_1461->g_279 p_1461->g_301 p_1461->g_305 p_1461->g_306.f4 p_1461->g_142.f0 p_1461->g_306 p_1461->g_337 p_1461->g_350 p_1461->g_352 p_1461->g_354 p_1461->g_121 p_1461->g_415 p_1461->g_141 p_1461->g_142 p_1461->g_1012 p_1461->g_895 p_1461->g_894 p_1461->g_798 p_1461->g_579 p_1461->g_676 p_1461->g_1097 p_1461->g_510 p_1461->g_681 p_1461->g_722 p_1461->g_916.f1 p_1461->g_366 p_1461->g_966.f1 p_1461->g_1198 p_1461->g_653 p_1461->g_1209 p_1461->g_1162 p_1461->g_454.f4 p_1461->g_1225 p_1461->g_1226 p_1461->g_797 p_1461->g_966.f0 p_1461->g_575 p_1461->g_1271 p_1461->g_968 p_1461->g_1292 p_1461->g_1311 p_1461->g_651 p_1461->g_621 p_1461->g_622 p_1461->g_788 p_1461->g_1340 p_1461->g_928 p_1461->g_1350 p_1461->g_1351 p_1461->g_1352 p_1461->g_916.f0
 * writes: p_1461->g_30 p_1461->g_34 p_1461->g_36 p_1461->g_69 p_1461->g_74 p_1461->g_76 p_1461->g_95 p_1461->g_97 p_1461->g_87 p_1461->g_279 p_1461->g_305 p_1461->g_337 p_1461->g_121 p_1461->g_351 p_1461->g_354 p_1461->g_352.f2 p_1461->g_306 p_1461->g_1013 p_1461->g_928 p_1461->g_1091 p_1461->g_1094 p_1461->g_1097 p_1461->g_579 p_1461->g_722 p_1461->g_653 p_1461->g_894 p_1461->g_142.f0 p_1461->g_966.f1 p_1461->g_1198.f0 p_1461->g_1162 p_1461->g_575 p_1461->g_1271 p_1461->g_1321 p_1461->g_788 p_1461->g_1340 p_1461->g_1352 p_1461->g_142 p_1461->g_1311.f2 p_1461->g_510 p_1461->g_916.f0 p_1461->g_1198.f2
 */
int64_t  func_1(struct S2 * p_1461)
{ /* block id: 4 */
    uint32_t l_8 = 4294967295UL;
    struct S0 *l_1354 = (void*)0;
    struct S0 *l_1356[1][9][6] = {{{&p_1461->g_1209,&p_1461->g_142,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209},{&p_1461->g_1209,&p_1461->g_142,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209},{&p_1461->g_1209,&p_1461->g_142,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209},{&p_1461->g_1209,&p_1461->g_142,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209},{&p_1461->g_1209,&p_1461->g_142,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209},{&p_1461->g_1209,&p_1461->g_142,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209},{&p_1461->g_1209,&p_1461->g_142,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209},{&p_1461->g_1209,&p_1461->g_142,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209},{&p_1461->g_1209,&p_1461->g_142,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209,&p_1461->g_1209}}};
    uint32_t *l_1364 = &p_1461->g_966.f2;
    uint32_t *l_1366 = &p_1461->g_916.f2;
    int16_t l_1369[8] = {0x1EFEL,(-7L),0x1EFEL,0x1EFEL,(-7L),0x1EFEL,0x1EFEL,(-7L)};
    int32_t l_1378 = 0x31E8055FL;
    struct S1 *l_1385 = &p_1461->g_788[2];
    struct S1 *l_1386[2];
    int32_t l_1401 = 1L;
    int32_t l_1402 = 1L;
    int32_t l_1403 = 0x79305074L;
    int32_t l_1404 = 0x1F6DC7CCL;
    int32_t l_1405 = 0x00B66AB0L;
    int32_t l_1406[10][7][3] = {{{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)}},{{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)}},{{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)}},{{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)}},{{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)}},{{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)}},{{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)}},{{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)}},{{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)}},{{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)},{0x42B0676DL,2L,(-5L)}}};
    int32_t l_1407 = 0x2CF98E37L;
    uint8_t l_1409 = 0x5CL;
    int32_t ***l_1432[1][2];
    uint64_t l_1460 = 0xEA3CAA6EBD7581F7L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1386[i] = &p_1461->g_966;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1432[i][j] = &p_1461->g_128;
    }
    (*p_1461->g_141) = func_2((p_1461->g_7[1][0] >= p_1461->g_7[1][0]), l_8, l_8, l_8, p_1461);
    for (p_1461->g_1311.f2 = 22; (p_1461->g_1311.f2 < 53); p_1461->g_1311.f2 = safe_add_func_int16_t_s_s(p_1461->g_1311.f2, 7))
    { /* block id: 638 */
        uint32_t **l_1361 = (void*)0;
        uint32_t *l_1363 = (void*)0;
        uint32_t **l_1362 = &l_1363;
        uint32_t *l_1365 = &p_1461->g_966.f2;
        uint64_t *l_1367 = (void*)0;
        int32_t l_1368 = 0x260A67CDL;
        uint8_t *l_1372 = (void*)0;
        uint8_t *l_1373 = (void*)0;
        uint64_t *l_1389 = &p_1461->g_279;
        int32_t *l_1390 = (void*)0;
        int32_t *l_1391 = &p_1461->g_1097;
        int32_t *l_1392 = &l_1378;
        int32_t l_1393 = 0x5320B5CEL;
        int32_t *l_1394 = &p_1461->g_1097;
        int32_t *l_1395 = &l_1378;
        int32_t *l_1396 = &p_1461->g_30;
        int32_t *l_1397 = &l_1378;
        int32_t *l_1398 = &p_1461->g_30;
        int32_t *l_1399 = (void*)0;
        int32_t *l_1400[10] = {&l_1378,&l_1368,&p_1461->g_1097,&l_1368,&l_1378,&l_1378,&l_1368,&p_1461->g_1097,&l_1368,&l_1378};
        int64_t l_1408 = (-1L);
        int i;
        (*p_1461->g_87) = ((safe_add_func_int64_t_s_s(((l_1364 = ((*l_1362) = (void*)0)) != (l_1366 = l_1365)), (((l_1368 = l_8) , &p_1461->g_797) == (void*)0))) != l_1369[0]);
        (*l_1391) &= ((((((*p_1461->g_87) & (safe_add_func_uint8_t_u_u((p_1461->g_510[1] &= l_1368), ((0UL > (l_1369[4] > (safe_mod_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s((((l_1378 = 0x0AE1L) | ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((l_1385 == ((***p_1461->g_1351) , l_1386[0])) , ((((*l_1389) = ((((l_1369[0] , l_1368) || p_1461->g_1311.f3) >= (-1L)) == 3UL)) && p_1461->g_966.f1) <= 0L)), p_1461->g_1198.f0)), p_1461->g_1198.f4)), l_1368)) ^ l_1368)) , (**p_1461->g_894)), (**p_1461->g_894))) ^ 9UL) , l_1369[4]) , l_1368), l_1368)))) < l_1368)))) <= (-1L)) , l_1378) , 0xB1C0L) || 0xCF50L);
        --l_1409;
    }
    for (p_1461->g_916.f0 = 0; (p_1461->g_916.f0 < 23); p_1461->g_916.f0++)
    { /* block id: 652 */
        int16_t l_1418 = (-1L);
        uint8_t *l_1421 = &p_1461->g_510[1];
        uint64_t *l_1434 = &p_1461->g_74;
        uint64_t **l_1433 = &l_1434;
        uint32_t l_1435 = 0x7228265EL;
        struct S0 l_1438[7] = {{5L},{5L},{5L},{5L},{5L},{5L},{5L}};
        int16_t *l_1450 = &l_1369[5];
        int32_t l_1451[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1451[i] = 1L;
        (*p_1461->g_87) ^= (((safe_lshift_func_uint16_t_u_u((0x3DAEL & (l_1418 || ((((l_1418 > ((safe_lshift_func_int8_t_s_u(0L, ((*l_1421) |= 255UL))) && ((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_div_func_int64_t_s_s(0x1DC60931F4570597L, (((safe_rshift_func_uint8_t_u_s((((~(~((void*)0 == l_1432[0][0]))) , (void*)0) != (void*)0), 4)) ^ 0x99DEL) ^ (*p_1461->g_895)))), 5UL)), p_1461->g_69[4][3])), 7)) < 0x7BC9L))) != p_1461->g_1340) , l_1433) == (void*)0))), (***p_1461->g_968))) , 0xA2L) | l_1435);
        (*p_1461->g_87) &= ((safe_sub_func_uint64_t_u_u((l_1438[4] , l_1418), (((**p_1461->g_797) = (l_1451[2] &= (safe_lshift_func_int8_t_s_s(((*p_1461->g_895) = ((((**p_1461->g_797) != ((*l_1450) &= (safe_div_func_uint32_t_u_u(((***p_1461->g_1351) , ((0x7FL == 0x4AL) != ((safe_mul_func_int16_t_s_s(((~0xE5FD6181L) , (safe_unary_minus_func_int32_t_s(0L))), (safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((l_1435 ^ p_1461->g_306[0][0][3].f3), p_1461->g_1225[0])) != (**p_1461->g_894)), (**p_1461->g_797))))) >= 0x69CEEDA8L))), 4294967295UL)))) && (*p_1461->g_676)) != (**p_1461->g_894))), l_1438[4].f0)))) ^ l_1435))) ^ p_1461->g_651[7][3][1]);
        for (p_1461->g_1198.f2 = 0; (p_1461->g_1198.f2 > 24); ++p_1461->g_1198.f2)
        { /* block id: 662 */
            uint16_t l_1454 = 0x5B32L;
            if ((**p_1461->g_301))
                break;
            l_1454++;
            for (p_1461->g_142.f0 = 0; (p_1461->g_142.f0 <= (-6)); p_1461->g_142.f0--)
            { /* block id: 667 */
                int32_t l_1459 = 0x3A7B6CB9L;
                return l_1459;
            }
            if (l_1454)
                break;
        }
    }
    return l_1460;
}


/* ------------------------------------------ */
/* 
 * reads : p_1461->g_7 p_1461->g_36 p_1461->g_34 p_1461->g_30 p_1461->g_69 p_1461->g_86 p_1461->g_76 p_1461->g_97 p_1461->g_95 p_1461->g_128 p_1461->g_87 p_1461->g_74 p_1461->g_279 p_1461->g_301 p_1461->g_305 p_1461->g_306.f4 p_1461->g_142.f0 p_1461->g_306 p_1461->g_337 p_1461->g_350 p_1461->g_352 p_1461->g_354 p_1461->g_121 p_1461->g_415 p_1461->g_141 p_1461->g_142 p_1461->g_1012 p_1461->g_895 p_1461->g_894 p_1461->g_798 p_1461->g_579 p_1461->g_676 p_1461->g_1097 p_1461->g_510 p_1461->g_681 p_1461->g_722 p_1461->g_916.f1 p_1461->g_366 p_1461->g_966.f1 p_1461->g_1198 p_1461->g_653 p_1461->g_1209 p_1461->g_1162 p_1461->g_454.f4 p_1461->g_1225 p_1461->g_1226 p_1461->g_797 p_1461->g_966.f0 p_1461->g_575 p_1461->g_1271 p_1461->g_968 p_1461->g_1292 p_1461->g_1311 p_1461->g_651 p_1461->g_621 p_1461->g_622 p_1461->g_788 p_1461->g_1340 p_1461->g_928 p_1461->g_1350 p_1461->g_1351
 * writes: p_1461->g_30 p_1461->g_34 p_1461->g_36 p_1461->g_69 p_1461->g_74 p_1461->g_76 p_1461->g_95 p_1461->g_97 p_1461->g_87 p_1461->g_279 p_1461->g_305 p_1461->g_337 p_1461->g_121 p_1461->g_351 p_1461->g_354 p_1461->g_352.f2 p_1461->g_306 p_1461->g_1013 p_1461->g_928 p_1461->g_1091 p_1461->g_1094 p_1461->g_1097 p_1461->g_579 p_1461->g_722 p_1461->g_653 p_1461->g_894 p_1461->g_142.f0 p_1461->g_966.f1 p_1461->g_1198.f0 p_1461->g_1162 p_1461->g_575 p_1461->g_1271 p_1461->g_1321 p_1461->g_788 p_1461->g_1340 p_1461->g_1352
 */
struct S0  func_2(uint64_t  p_3, uint32_t  p_4, int64_t  p_5, int32_t  p_6, struct S2 * p_1461)
{ /* block id: 5 */
    uint64_t l_9 = 0x8ACC4B7C7008B15EL;
    struct S0 l_31 = {0x7DAF0B56L};
    int16_t *l_33 = &p_1461->g_34;
    int8_t *l_35 = &p_1461->g_36;
    int32_t l_37 = 0x5F8F0B53L;
    int32_t *l_38 = &p_1461->g_30;
    int8_t l_1343 = 0L;
    uint64_t l_1344 = 0UL;
    uint64_t l_1353 = 0x488E194F7B721E7DL;
    (*p_1461->g_301) = (((p_1461->g_7[1][0] <= ((l_9 ^ ((p_3 >= (safe_mod_func_int16_t_s_s(func_12((((*l_38) = ((((p_5 & (safe_rshift_func_int16_t_s_s(0L, ((safe_add_func_int16_t_s_s((((((p_3 & ((safe_lshift_func_int8_t_s_u(((*l_35) = (safe_lshift_func_int16_t_s_u(((*l_33) = (func_22(p_3, func_27(p_1461->g_7[1][0], p_1461), l_9, l_31, p_1461) > p_1461->g_7[1][0])), 14))), l_9)) , p_4)) , p_4) != p_3) ^ 1UL) == p_3), p_1461->g_7[1][0])) > 0x33L)))) != 1UL) || l_37) || l_31.f0)) == p_6), p_1461), l_1343))) & p_4)) | l_1344)) , 0x5BL) , (*p_1461->g_301));
    for (p_1461->g_928 = 22; (p_1461->g_928 != (-21)); p_1461->g_928 = safe_sub_func_uint32_t_u_u(p_1461->g_928, 5))
    { /* block id: 627 */
        uint16_t l_1349 = 65535UL;
        (*l_38) &= (safe_mul_func_int16_t_s_s(l_1349, 0x6A2CL));
        (*p_1461->g_305) = p_1461->g_1350;
        (*p_1461->g_1351) = &p_1461->g_305;
    }
    (*p_1461->g_86) = (l_38 = func_27(l_1353, p_1461));
    return l_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_1461->g_7 p_1461->g_36 p_1461->g_34 p_1461->g_30 p_1461->g_69 p_1461->g_86 p_1461->g_76 p_1461->g_97 p_1461->g_95 p_1461->g_128 p_1461->g_87 p_1461->g_74 p_1461->g_279 p_1461->g_301 p_1461->g_305 p_1461->g_306.f4 p_1461->g_142.f0 p_1461->g_306 p_1461->g_337 p_1461->g_350 p_1461->g_352 p_1461->g_354 p_1461->g_121 p_1461->g_415 p_1461->g_141 p_1461->g_142 p_1461->g_1012 p_1461->g_895 p_1461->g_894 p_1461->g_798 p_1461->g_579 p_1461->g_676 p_1461->g_1097 p_1461->g_510 p_1461->g_681 p_1461->g_722 p_1461->g_916.f1 p_1461->g_366 p_1461->g_966.f1 p_1461->g_1198 p_1461->g_653 p_1461->g_1209 p_1461->g_1162 p_1461->g_454.f4 p_1461->g_1225 p_1461->g_1226 p_1461->g_797 p_1461->g_966.f0 p_1461->g_575 p_1461->g_1271 p_1461->g_968 p_1461->g_1292 p_1461->g_1311 p_1461->g_651 p_1461->g_621 p_1461->g_622 p_1461->g_788 p_1461->g_1340
 * writes: p_1461->g_69 p_1461->g_74 p_1461->g_76 p_1461->g_95 p_1461->g_97 p_1461->g_30 p_1461->g_87 p_1461->g_36 p_1461->g_279 p_1461->g_305 p_1461->g_34 p_1461->g_337 p_1461->g_121 p_1461->g_351 p_1461->g_354 p_1461->g_352.f2 p_1461->g_306 p_1461->g_1013 p_1461->g_928 p_1461->g_1091 p_1461->g_1094 p_1461->g_1097 p_1461->g_579 p_1461->g_722 p_1461->g_653 p_1461->g_894 p_1461->g_142.f0 p_1461->g_966.f1 p_1461->g_1198.f0 p_1461->g_1162 p_1461->g_575 p_1461->g_1271 p_1461->g_1321 p_1461->g_788 p_1461->g_1340
 */
int16_t  func_12(uint64_t  p_13, struct S2 * p_1461)
{ /* block id: 14 */
    int8_t *l_39 = &p_1461->g_36;
    int32_t l_71[5];
    int32_t l_72[10] = {0x05D54DBCL,0x05D54DBCL,0x05D54DBCL,0x05D54DBCL,0x05D54DBCL,0x05D54DBCL,0x05D54DBCL,0x05D54DBCL,0x05D54DBCL,0x05D54DBCL};
    uint8_t l_77 = 0xBEL;
    int32_t *l_79[8] = {&l_72[7],&l_72[7],&l_72[7],&l_72[7],&l_72[7],&l_72[7],&l_72[7],&l_72[7]};
    int32_t **l_78 = &l_79[1];
    int16_t *l_108 = &p_1461->g_34;
    uint16_t l_1160 = 0UL;
    struct S0 l_1168 = {0x509227EBL};
    uint8_t l_1173 = 0x13L;
    int16_t l_1187[1];
    uint32_t l_1191 = 0UL;
    uint16_t **l_1218[10][3][1];
    uint64_t *l_1232 = &p_1461->g_74;
    uint64_t **l_1231 = &l_1232;
    uint64_t ***l_1230 = &l_1231;
    int32_t l_1254[8][2][8] = {{{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)},{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)}},{{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)},{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)}},{{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)},{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)}},{{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)},{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)}},{{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)},{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)}},{{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)},{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)}},{{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)},{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)}},{{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)},{0x715B7F1AL,0x566D46DCL,0x016B695CL,1L,0x6AAC0C94L,0x5ED0F2D7L,(-7L),(-5L)}}};
    int8_t ***l_1297 = &p_1461->g_894;
    int64_t **l_1305 = &p_1461->g_1013[0][0][4];
    struct S0 **l_1313[1][3][5] = {{{&p_1461->g_351[2],&p_1461->g_351[2],&p_1461->g_351[2],&p_1461->g_351[0],&p_1461->g_351[2]},{&p_1461->g_351[2],&p_1461->g_351[2],&p_1461->g_351[2],&p_1461->g_351[0],&p_1461->g_351[2]},{&p_1461->g_351[2],&p_1461->g_351[2],&p_1461->g_351[2],&p_1461->g_351[0],&p_1461->g_351[2]}}};
    struct S0 ***l_1312 = &l_1313[0][2][3];
    uint8_t l_1318 = 0x32L;
    uint32_t **l_1329 = &p_1461->g_676;
    struct S1 *l_1333[7] = {&p_1461->g_1311,&p_1461->g_1311,&p_1461->g_1311,&p_1461->g_1311,&p_1461->g_1311,&p_1461->g_1311,&p_1461->g_1311};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_71[i] = 0x519F073EL;
    for (i = 0; i < 1; i++)
        l_1187[i] = 0L;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_1218[i][j][k] = &p_1461->g_798;
        }
    }
    if ((l_39 != l_39))
    { /* block id: 15 */
        int8_t *l_55 = &p_1461->g_36;
        int32_t l_66 = 2L;
        int8_t *l_67 = (void*)0;
        int8_t *l_68 = &p_1461->g_69[4][3];
        uint32_t *l_70[6] = {&p_1461->g_7[1][0],(void*)0,&p_1461->g_7[1][0],&p_1461->g_7[1][0],(void*)0,&p_1461->g_7[1][0]};
        uint64_t *l_73 = &p_1461->g_74;
        int64_t *l_75 = &p_1461->g_76;
        int16_t *l_109 = &p_1461->g_34;
        int32_t l_1175 = 5L;
        int32_t l_1177[9] = {0x59C30631L,0x59C30631L,0x59C30631L,0x59C30631L,0x59C30631L,0x59C30631L,0x59C30631L,0x59C30631L,0x59C30631L};
        int32_t l_1179 = 1L;
        int64_t l_1190 = (-1L);
        uint64_t ***l_1233 = &l_1231;
        int i;
        l_78 = func_40(func_42((func_45(&p_1461->g_36, func_50(l_55, func_56(p_1461->g_7[1][0], (safe_mod_func_uint8_t_u_u((((0xAAE11E54L <= (((*l_75) = (((+0x58019D44L) , ((*l_73) = (((l_71[1] = (p_1461->g_36 | ((*l_68) |= ((safe_sub_func_uint8_t_u_u(p_1461->g_34, p_13)) < (((l_66 || p_13) <= 0xF7EBA052C4540E51L) != p_1461->g_30))))) | l_72[7]) | l_72[7]))) || p_13)) & p_1461->g_34)) | 18446744073709551614UL) , 0xC2L), l_77)), l_77, l_78, &l_66, p_1461), l_108, l_109, p_1461), p_1461->g_34, l_66, p_1461) , 0L), l_108, p_1461), p_1461);
        if ((*p_1461->g_87))
        { /* block id: 517 */
            return p_13;
        }
        else
        { /* block id: 519 */
            int8_t l_1128 = 0x0CL;
            struct S0 l_1129 = {0L};
            int32_t l_1148 = (-3L);
            int32_t l_1178 = (-10L);
            int32_t l_1180 = 0x1A6E50F0L;
            uint32_t l_1182 = 0xE9EAF2A7L;
            int32_t l_1188 = 7L;
            int32_t l_1189[4];
            int8_t **l_1205 = &p_1461->g_895;
            int i;
            for (i = 0; i < 4; i++)
                l_1189[i] = (-1L);
lbl_1206:
            for (p_1461->g_1097 = 0; (p_1461->g_1097 <= 7); p_1461->g_1097 += 1)
            { /* block id: 522 */
                struct S0 l_1130 = {0x4E4CF936L};
                int32_t l_1176 = 9L;
                int32_t l_1181 = (-1L);
                int32_t l_1185 = 0x2CFBBF7DL;
                int32_t l_1186[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1186[i][j] = 9L;
                }
                for (p_1461->g_653 = 0; (p_1461->g_653 <= 5); p_1461->g_653 += 1)
                { /* block id: 525 */
                    struct S1 **l_1127[10] = {&p_1461->g_305,&p_1461->g_305,&p_1461->g_305,&p_1461->g_305,&p_1461->g_305,&p_1461->g_305,&p_1461->g_305,&p_1461->g_305,&p_1461->g_305,&p_1461->g_305};
                    int i;
                    p_1461->g_305 = &p_1461->g_788[p_1461->g_1097];
                    if (l_1128)
                        break;
                    for (p_1461->g_722 = 0; (p_1461->g_722 <= 3); p_1461->g_722 += 1)
                    { /* block id: 530 */
                        uint32_t ***l_1131 = (void*)0;
                        uint32_t **l_1133 = &l_70[1];
                        uint32_t ***l_1132 = &l_1133;
                        l_1130 = l_1129;
                        (*l_1132) = &p_1461->g_676;
                    }
                }
                if ((safe_mod_func_uint16_t_u_u(((((p_1461->g_366 < p_13) > ((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(p_13, (65532UL == p_13))) | (1UL || (((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0xFAFDFB27L, (*p_1461->g_87))), (~((18446744073709551613UL != p_13) | p_13)))) , 7UL) > l_1129.f0))), l_1128)) | p_13)) , p_13) == 0x8641642545DC6C7CL), 1L)))
                { /* block id: 535 */
                    int32_t l_1146 = (-1L);
                    return l_1146;
                }
                else
                { /* block id: 537 */
                    int8_t ***l_1147 = &p_1461->g_894;
                    int32_t **l_1163 = &l_79[1];
                    int32_t l_1174[10][3][4] = {{{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L}},{{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L}},{{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L}},{{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L}},{{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L}},{{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L}},{{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L}},{{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L}},{{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L}},{{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L},{0x7DCC8820L,(-10L),0x47ED03A4L,0x47ED03A4L}}};
                    int i, j, k;
                    l_1148 ^= (((*l_1147) = &p_1461->g_895) == &l_39);
                    for (p_1461->g_142.f0 = 5; (p_1461->g_142.f0 >= 0); p_1461->g_142.f0 -= 1)
                    { /* block id: 542 */
                        uint8_t *l_1159 = &p_1461->g_510[0];
                        int32_t l_1161 = 0x3221905CL;
                        int i;
                        (1 + 1);
                    }
                    l_1182++;
                    l_1191--;
                }
                for (p_1461->g_966.f1 = 1; (p_1461->g_966.f1 <= 5); p_1461->g_966.f1 += 1)
                { /* block id: 559 */
                    if (l_1177[7])
                        break;
                    if ((*p_1461->g_87))
                        break;
                    (*p_1461->g_87) &= (0xF6E5F12214027ED9L != (safe_sub_func_int8_t_s_s((**p_1461->g_894), ((((safe_sub_func_uint64_t_u_u(((*l_73) = 0x6AA8EF764251BC2DL), (p_1461->g_1198 , (l_1129 , ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_13, (((l_1205 == (p_1461->g_352[1][1][4].f2 , &p_1461->g_895)) || l_1186[0][0]) ^ (*p_1461->g_676)))), 0)), p_13)) | 6UL))))) | 6UL) >= p_1461->g_653) == l_1177[1]))));
                }
                if (p_1461->g_76)
                    goto lbl_1206;
            }
            for (p_1461->g_1198.f0 = 0; (p_1461->g_1198.f0 <= 4); p_1461->g_1198.f0 += 1)
            { /* block id: 569 */
                int32_t l_1210 = (-6L);
                for (p_1461->g_142.f0 = 0; (p_1461->g_142.f0 <= 4); p_1461->g_142.f0 += 1)
                { /* block id: 572 */
                    uint16_t **l_1217 = (void*)0;
                    uint8_t *l_1227 = &l_77;
                    int i;
                    l_71[p_1461->g_142.f0] = p_13;
                    l_71[p_1461->g_142.f0] = ((void*)0 != (*p_1461->g_894));
                    (*p_1461->g_87) ^= (safe_sub_func_uint64_t_u_u(((p_1461->g_1209 , ((((--(*p_1461->g_676)) == (((p_13 && l_71[p_1461->g_142.f0]) > ((*l_1227) = (p_13 ^ ((~p_13) > (((((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint64_t_u_u((p_1461->g_279 = ((l_1217 != l_1218[2][1][0]) , ((*l_73) ^= (((((**p_1461->g_894) = (safe_rshift_func_int16_t_s_s(((safe_div_func_uint64_t_u_u(((safe_div_func_int16_t_s_s(1L, (l_1190 ^ p_1461->g_1162))) , l_1210), p_1461->g_454.f4)) >= l_1182), p_1461->g_1225[0]))) & 0UL) != l_1210) >= p_13)))), 0x6A1EA7C555EC03C7L)) < p_13), l_1148)) > l_1210) == p_1461->g_1226) | p_13) >= 18446744073709551615UL))))) & p_13)) || l_71[p_1461->g_142.f0]) >= 0xE9A7L)) == (**p_1461->g_797)), p_13));
                }
            }
        }
        l_66 = (((((0x9F674403L | 0x8B08DD42L) && ((*l_108) &= (l_1230 == l_1233))) != (*p_1461->g_676)) || (&p_1461->g_676 != (void*)0)) ^ (p_1461->g_1162++));
    }
    else
    { /* block id: 587 */
        int32_t l_1248 = (-1L);
        int64_t *l_1252 = &p_1461->g_575;
        uint8_t *l_1253 = &l_77;
        int32_t l_1265 = (-4L);
        int16_t *l_1266 = &p_1461->g_34;
        (**l_78) = ((((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u(p_1461->g_966.f0, ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((p_13 , ((*l_1253) &= (safe_div_func_uint32_t_u_u(((p_1461->g_306[0][0][3].f4 || p_13) < (safe_sub_func_int16_t_s_s(p_13, (((*l_1252) |= (l_1248 < (((((-5L) < ((safe_unary_minus_func_int8_t_s(6L)) != ((safe_lshift_func_uint8_t_u_u(((p_1461->g_69[4][3] <= p_1461->g_306[0][0][3].f1) , l_1248), 7)) < p_13))) || p_13) < 5UL) & 0x7D999D62L))) == p_13)))), 6L)))), 0)), l_1254[6][0][5])) <= 0UL))) == 1UL) != 1L) >= 0L), p_1461->g_1226)) & 0x08234074L) , (void*)0) != (void*)0);
        p_1461->g_1271 ^= (p_1461->g_1198.f0 >= ((((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(0x1E89L, 14)), ((p_13 & (((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((l_1265 >= ((*l_1252) = ((void*)0 == l_1266))), ((0x46EC8DCCEA537094L == (safe_mul_func_uint8_t_u_u(((*l_1253) = (253UL & ((**p_1461->g_894) ^= ((safe_mul_func_uint16_t_u_u(((18446744073709551615UL == l_1265) & 0L), 0x1B54L)) , p_13)))), (-7L)))) < (**l_78)))), l_1248)) && p_13) <= p_13)) | p_13))), 0L)) , &l_1168) == (void*)0) | 18446744073709551615UL));
    }
    for (p_1461->g_1097 = 28; (p_1461->g_1097 != 12); p_1461->g_1097 = safe_sub_func_uint8_t_u_u(p_1461->g_1097, 4))
    { /* block id: 598 */
        struct S0 *l_1274 = (void*)0;
        struct S0 **l_1276 = &p_1461->g_351[1];
        int32_t l_1277 = 0x182D07F1L;
        int64_t l_1282[9][1] = {{0x00108DF1FDAF6C9FL},{0x00108DF1FDAF6C9FL},{0x00108DF1FDAF6C9FL},{0x00108DF1FDAF6C9FL},{0x00108DF1FDAF6C9FL},{0x00108DF1FDAF6C9FL},{0x00108DF1FDAF6C9FL},{0x00108DF1FDAF6C9FL},{0x00108DF1FDAF6C9FL}};
        int32_t l_1291 = 0x37AA06F8L;
        int8_t ***l_1298 = (void*)0;
        int64_t *l_1300 = &p_1461->g_415.f1;
        int64_t **l_1299 = &l_1300;
        int32_t l_1306 = 0x3969C28EL;
        struct S1 *l_1334 = &p_1461->g_916;
        int i, j;
        (*l_1276) = l_1274;
        (*p_1461->g_1292) = func_56((+l_1277), (safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(1L, (1L != ((***p_1461->g_968) & l_1282[0][0])))) && (l_1291 ^= (safe_mod_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_s(1UL, (safe_lshift_func_int8_t_s_s(((*l_39) |= (*p_1461->g_895)), ((safe_rshift_func_uint8_t_u_s((&l_39 != (void*)0), 3)) == 0x5D7DL))))) , (**p_1461->g_894)) != 0x0EL), p_13)))), 0x7590EAB3L)), p_13, &l_79[1], &l_1277, p_1461);
        if ((safe_mul_func_int8_t_s_s((((l_1291 = (safe_add_func_uint32_t_u_u((l_1297 != l_1298), (l_1277 = (&l_1282[0][0] == ((*l_1299) = l_1232)))))) , (void*)0) == &p_1461->g_895), (safe_rshift_func_int16_t_s_u((((~(l_1306 = ((safe_rshift_func_int16_t_s_u((l_1282[4][0] < ((!p_1461->g_352[1][1][4].f2) | (((&p_1461->g_1013[0][0][3] == l_1305) && 0x51L) && 0x00L))), 11)) != 18446744073709551615UL))) <= 0L) != p_13), (**p_1461->g_797))))))
        { /* block id: 607 */
            uint64_t l_1315 = 18446744073709551608UL;
            struct S0 ***l_1320 = (void*)0;
            struct S0 ****l_1319[2][6] = {{&l_1320,&l_1320,&l_1320,&l_1320,&l_1320,&l_1320},{&l_1320,&l_1320,&l_1320,&l_1320,&l_1320,&l_1320}};
            uint32_t ***l_1330 = &l_1329;
            int i, j;
            l_1306 &= ((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(p_1461->g_415.f4, 4)), l_1282[0][0])) > ((0x53A19B7AL <= ((((*p_1461->g_676) , p_1461->g_1311) , l_1312) != (p_1461->g_1321 = ((((safe_unary_minus_func_uint16_t_u((l_1315 & ((safe_mod_func_int8_t_s_s(l_1318, l_1282[1][0])) , p_1461->g_651[7][3][1])))) && 7UL) | l_1282[0][0]) , (void*)0)))) > 0xBFFEL));
            if (((*p_1461->g_621) != ((l_1315 ^ (safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s(((((((0x32L && (safe_sub_func_uint16_t_u_u(((((&p_1461->g_676 == ((*l_1330) = l_1329)) , ((l_1315 > ((*p_1461->g_895) &= ((p_13 <= l_1315) && (safe_add_func_uint64_t_u_u(((l_79[1] != (void*)0) & 0x7B3970F8FBF16AF9L), p_1461->g_1226))))) || 0L)) , 1L) , (**p_1461->g_797)), 0x5EE8L))) != 0x3DB169A2514AEBD0L) , p_13) != p_13) | 1L) ^ (*p_1461->g_676)), l_1315)) < l_1315), 7))))) , (void*)0)))
            { /* block id: 612 */
                int32_t ***l_1335 = (void*)0;
                int32_t ***l_1336 = &l_78;
                l_1334 = l_1333[2];
                (*p_1461->g_305) = (*p_1461->g_305);
            }
            else
            { /* block id: 616 */
                return p_13;
            }
        }
        else
        { /* block id: 619 */
            int32_t l_1337 = 1L;
            int32_t l_1338 = 8L;
            int32_t l_1339[1][1][9] = {{{0x57B24FE9L,(-6L),0x57B24FE9L,0x57B24FE9L,(-6L),0x57B24FE9L,0x57B24FE9L,(-6L),0x57B24FE9L}}};
            int i, j, k;
            ++p_1461->g_1340;
        }
    }
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1461->g_30
 */
int64_t  func_22(int64_t  p_23, int32_t * p_24, uint16_t  p_25, struct S0  p_26, struct S2 * p_1461)
{ /* block id: 8 */
    uint8_t l_32 = 2UL;
    (*p_24) = l_32;
    return p_26.f0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_27(uint16_t  p_28, struct S2 * p_1461)
{ /* block id: 6 */
    int32_t *l_29 = &p_1461->g_30;
    return l_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_1461->g_141 p_1461->g_142 p_1461->g_1012 p_1461->g_895 p_1461->g_69 p_1461->g_894 p_1461->g_798 p_1461->g_579 p_1461->g_676 p_1461->g_121 p_1461->g_87 p_1461->g_30 p_1461->g_36 p_1461->g_1097 p_1461->g_354 p_1461->g_415.f0 p_1461->g_510 p_1461->g_681 p_1461->g_305 p_1461->g_306 p_1461->g_722 p_1461->g_916.f1 p_1461->g_415.f2
 * writes: p_1461->g_1013 p_1461->g_928 p_1461->g_1091 p_1461->g_1094 p_1461->g_1097 p_1461->g_30 p_1461->g_354 p_1461->g_579 p_1461->g_121 p_1461->g_722
 */
int32_t ** func_40(int32_t ** p_41, struct S2 * p_1461)
{ /* block id: 491 */
    int64_t *l_1059 = &p_1461->g_681;
    int16_t *l_1064 = (void*)0;
    int16_t *l_1065 = &p_1461->g_928;
    int32_t l_1066 = 0x69585064L;
    int32_t l_1076 = (-1L);
    struct S0 l_1087 = {0x33C3D7A2L};
    uint16_t **l_1088 = (void*)0;
    int32_t l_1089[3][1];
    uint64_t *l_1090 = &p_1461->g_1091;
    uint64_t *l_1092 = (void*)0;
    uint64_t *l_1093 = &p_1461->g_1094;
    int16_t l_1095 = (-1L);
    int32_t *l_1096 = &p_1461->g_1097;
    struct S0 ***l_1100 = (void*)0;
    struct S0 **l_1102 = &p_1461->g_351[2];
    struct S0 ***l_1101 = &l_1102;
    int8_t l_1113 = 0L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1089[i][j] = 1L;
    }
    (*l_1096) &= (l_1066 = (safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((+(((*p_1461->g_1012) = ((*p_1461->g_141) , l_1059)) != (void*)0)), ((((*l_1093) = ((*l_1090) = ((safe_mul_func_int16_t_s_s(((*l_1065) = (safe_rshift_func_int8_t_s_s((*p_1461->g_895), 1))), (l_1066 != (safe_div_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(0x6B70L, 14)) > ((safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_s((((l_1076 |= (**p_1461->g_894)) && (((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((~((safe_sub_func_uint16_t_u_u((l_1076 = (*p_1461->g_798)), (((l_1089[1][0] = ((safe_mod_func_uint32_t_u_u((((l_1087 , l_1088) != (void*)0) ^ 2UL), l_1087.f0)) < 0x0230B009DEB85681L)) != l_1066) >= l_1066))) || l_1087.f0)), (*p_1461->g_676))), 10)) , (**p_1461->g_894)), l_1087.f0)) , l_1087.f0) != l_1066)) < (*p_1461->g_87)), l_1066)))) , l_1076)) < 0x5956L), p_1461->g_142.f0)) , (*p_1461->g_798)) == l_1087.f0) , l_1089[1][0]), (*p_1461->g_87)))))) == 1L))) , l_1095) | l_1087.f0))), p_1461->g_36)));
    (*p_1461->g_87) = (safe_lshift_func_uint8_t_u_s((((*l_1101) = &p_1461->g_351[2]) != (void*)0), 1));
    for (p_1461->g_354 = 5; (p_1461->g_354 != 54); ++p_1461->g_354)
    { /* block id: 505 */
        int32_t *l_1118 = (void*)0;
        int32_t *l_1119 = (void*)0;
        int32_t l_1122 = (-7L);
        int32_t l_1123 = 0x6D8B6F98L;
        int64_t *l_1124 = &p_1461->g_722;
        int32_t l_1125[2];
        uint64_t *l_1126 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_1125[i] = 0L;
        (*p_1461->g_87) |= (((+p_1461->g_415.f0) , ((safe_add_func_int64_t_s_s(((((l_1125[0] = (((safe_rshift_func_uint16_t_u_u((--(*p_1461->g_798)), l_1113)) > (safe_sub_func_int64_t_s_s(((*l_1124) &= ((((safe_mod_func_int64_t_s_s(0L, 0x3BF7E51872326B9DL)) <= ((((*l_1096) = p_1461->g_510[1]) , ((*p_1461->g_676) = ((&p_1461->g_1013[0][0][3] == (void*)0) ^ ((l_1122 = (safe_add_func_int64_t_s_s(p_1461->g_681, (((*p_1461->g_305) , l_1122) , l_1122)))) > (*l_1096))))) <= l_1123)) == (*p_1461->g_895)) && (*l_1096))), (-1L)))) , l_1125[0])) & p_1461->g_916.f1) >= 0UL) , 0x4070B63027F23F80L), l_1123)) < p_1461->g_415.f2)) | l_1123);
    }
    (*p_1461->g_87) = (*l_1096);
    return p_41;
}


/* ------------------------------------------ */
/* 
 * reads : p_1461->g_95 p_1461->g_305 p_1461->g_306
 * writes: p_1461->g_121 p_1461->g_306
 */
int32_t ** func_42(int64_t  p_43, int16_t * p_44, struct S2 * p_1461)
{ /* block id: 221 */
    int8_t l_418 = 0x59L;
    int32_t l_423 = 1L;
    int32_t l_424 = 0x54F19A02L;
    int16_t *l_449 = &p_1461->g_34;
    int16_t **l_450 = (void*)0;
    int16_t **l_451[9] = {&l_449,&l_449,&l_449,&l_449,&l_449,&l_449,&l_449,&l_449,&l_449};
    int64_t *l_453[1];
    int32_t **l_484[10] = {&p_1461->g_87,&p_1461->g_87,&p_1461->g_87,&p_1461->g_87,&p_1461->g_87,&p_1461->g_87,&p_1461->g_87,&p_1461->g_87,&p_1461->g_87,&p_1461->g_87};
    int64_t l_506[4];
    struct S1 **l_566[5] = {&p_1461->g_305,&p_1461->g_305,&p_1461->g_305,&p_1461->g_305,&p_1461->g_305};
    int8_t l_634 = 0x05L;
    int64_t l_711[2][10][4] = {{{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L}},{{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L},{1L,1L,7L,0x38988FB2362C6853L}}};
    uint64_t l_724[5][8] = {{0UL,0xA0BBB7E238EFD875L,0x2BFAD0FDD9FED198L,0UL,0x2BFAD0FDD9FED198L,0xA0BBB7E238EFD875L,0UL,18446744073709551615UL},{0UL,0xA0BBB7E238EFD875L,0x2BFAD0FDD9FED198L,0UL,0x2BFAD0FDD9FED198L,0xA0BBB7E238EFD875L,0UL,18446744073709551615UL},{0UL,0xA0BBB7E238EFD875L,0x2BFAD0FDD9FED198L,0UL,0x2BFAD0FDD9FED198L,0xA0BBB7E238EFD875L,0UL,18446744073709551615UL},{0UL,0xA0BBB7E238EFD875L,0x2BFAD0FDD9FED198L,0UL,0x2BFAD0FDD9FED198L,0xA0BBB7E238EFD875L,0UL,18446744073709551615UL},{0UL,0xA0BBB7E238EFD875L,0x2BFAD0FDD9FED198L,0UL,0x2BFAD0FDD9FED198L,0xA0BBB7E238EFD875L,0UL,18446744073709551615UL}};
    int32_t l_742 = 0x7C39BC9FL;
    int32_t l_752 = (-7L);
    int64_t l_789 = 0x206C3128344D0F87L;
    int32_t *l_810 = &p_1461->g_651[7][3][1];
    uint64_t ***l_811[3][1];
    int8_t l_868 = 0x26L;
    int8_t l_870 = 0x15L;
    uint32_t l_872 = 0xF12EF7E4L;
    int8_t *l_882 = &p_1461->g_69[4][3];
    int8_t **l_881 = &l_882;
    int64_t l_926 = 1L;
    int64_t l_927[2];
    uint16_t l_975 = 0x9866L;
    uint32_t l_1040 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_453[i] = &p_1461->g_415.f1;
    for (i = 0; i < 4; i++)
        l_506[i] = 0x3664745B99DCBD1FL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_811[i][j] = (void*)0;
    }
    for (i = 0; i < 2; i++)
        l_927[i] = 0x26D0A56620F3BD62L;
    (*p_1461->g_305) = ((((safe_mul_func_int8_t_s_s(0x64L, (0x7D9C0902L >= 0xC8D6E92CL))) > l_418) && ((p_1461->g_121 = p_1461->g_95) ^ 0xACDAF8CFL)) , (*p_1461->g_305));
    return l_484[9];
}


/* ------------------------------------------ */
/* 
 * reads : p_1461->g_86 p_1461->g_87 p_1461->g_74 p_1461->g_30 p_1461->g_279 p_1461->g_97 p_1461->g_69 p_1461->g_36 p_1461->g_301 p_1461->g_305 p_1461->g_306.f4 p_1461->g_76 p_1461->g_7 p_1461->g_34 p_1461->g_95 p_1461->g_142.f0 p_1461->g_306 p_1461->g_337 p_1461->g_350 p_1461->g_352 p_1461->g_354 p_1461->g_121 p_1461->g_415 p_1461->g_571
 * writes: p_1461->g_76 p_1461->g_97 p_1461->g_95 p_1461->g_36 p_1461->g_279 p_1461->g_87 p_1461->g_305 p_1461->g_34 p_1461->g_337 p_1461->g_30 p_1461->g_121 p_1461->g_351 p_1461->g_354 p_1461->g_352.f2 p_1461->g_306 p_1461->g_69 p_1461->g_571
 */
struct S1  func_45(int8_t * p_46, int32_t ** p_47, int64_t  p_48, uint32_t  p_49, struct S2 * p_1461)
{ /* block id: 141 */
    int32_t *l_264 = &p_1461->g_30;
    int64_t *l_269 = &p_1461->g_97;
    uint16_t *l_272 = &p_1461->g_95;
    int32_t l_273 = 0x1D6124FCL;
    uint64_t *l_278 = &p_1461->g_279;
    int32_t *l_280 = &l_273;
    int32_t ***l_287 = &p_1461->g_128;
    int32_t *l_300 = &p_1461->g_30;
    int32_t ****l_322 = &p_1461->g_127[0][1][1];
    int32_t *****l_321 = &l_322;
    int32_t l_383 = 0x75070DB6L;
    int32_t l_388 = (-1L);
    int32_t l_390 = (-5L);
lbl_349:
    (*l_280) = (((l_264 = l_264) != (*p_1461->g_86)) < (((*l_278) ^= (p_1461->g_74 ^ (safe_add_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s(((*l_269) = (p_1461->g_76 = 0x53B988DA247D1C63L)), ((p_1461->g_30 || ((*l_272) = (safe_lshift_func_uint16_t_u_u(p_49, 6)))) || ((*p_46) = (l_273 , (safe_sub_func_int16_t_s_s(0x637AL, (safe_rshift_func_int8_t_s_s((18446744073709551615UL > 0x369EB05264754564L), 2))))))))) > 0x547A858E96002CAEL), l_273)))) == l_273));
    (*p_1461->g_301) = ((((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(((void*)0 != &l_273), ((l_287 != ((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(((*l_280) , (safe_div_func_int64_t_s_s((9UL >= (safe_unary_minus_func_uint8_t_u((p_49 , (((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(p_1461->g_97)), (((*l_280) , &l_278) == (void*)0))) >= (*l_264)) , p_48))))), (-7L)))), p_1461->g_69[4][3])) <= (*l_280)), p_1461->g_30)), p_1461->g_69[4][6])) , (void*)0)) & 0x09L))), 0x41L)), p_49)) | (*p_46)) || 18446744073709551615UL) , l_300);
    for (p_48 = (-9); (p_48 == (-26)); p_48 = safe_sub_func_uint32_t_u_u(p_48, 3))
    { /* block id: 152 */
        int64_t l_304 = 0x5D45A8E034107D51L;
        int32_t ****l_320 = &l_287;
        int32_t *****l_319 = &l_320;
        int32_t l_384 = (-3L);
        int32_t l_385 = 0x40438199L;
        int32_t l_386[10][4][4] = {{{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)}},{{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)}},{{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)}},{{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)}},{{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)}},{{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)}},{{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)}},{{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)}},{{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)}},{{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)},{(-1L),0x7D32BEF5L,(-1L),(-1L)}}};
        struct S1 **l_408 = (void*)0;
        uint16_t *l_413 = &p_1461->g_354;
        int i, j, k;
        if (l_304)
        { /* block id: 153 */
            struct S1 **l_307 = &p_1461->g_305;
            uint64_t l_318[5];
            int8_t *l_346 = &p_1461->g_69[4][3];
            int32_t l_348 = (-4L);
            int i;
            for (i = 0; i < 5; i++)
                l_318[i] = 0x6A417C5D52642C61L;
            (*l_307) = p_1461->g_305;
            if (p_48)
                break;
            if (((((*p_46) = ((safe_add_func_int16_t_s_s(1L, (&p_47 != &p_1461->g_128))) && ((safe_mul_func_int8_t_s_s(0L, (safe_div_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(4L, p_1461->g_74)) || ((*p_1461->g_87) , ((*l_278) |= (((((p_1461->g_306[0][0][3].f4 , (((*p_46) , l_304) , p_1461->g_36)) >= l_318[3]) > 255UL) , l_319) == l_321)))), p_48)))) & 18446744073709551614UL))) & l_318[1]) <= 0x79L))
            { /* block id: 158 */
                int32_t l_323[1][2];
                int32_t l_330 = 0x3E675413L;
                int32_t *l_333[5];
                int32_t l_335 = 1L;
                uint32_t *l_338 = (void*)0;
                uint32_t *l_339 = &p_1461->g_121;
                uint64_t *l_341 = &l_318[0];
                uint64_t **l_340 = &l_341;
                int32_t *****l_347[8] = {&l_322,&l_322,&l_322,&l_322,&l_322,&l_322,&l_322,&l_322};
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_323[i][j] = 0x14BC582DL;
                }
                for (i = 0; i < 5; i++)
                    l_333[i] = &p_1461->g_30;
                if (l_323[0][0])
                    break;
                for (p_49 = 0; (p_49 < 33); p_49 = safe_add_func_uint32_t_u_u(p_49, 3))
                { /* block id: 162 */
                    for (p_1461->g_76 = 1; (p_1461->g_76 >= 0); p_1461->g_76 -= 1)
                    { /* block id: 165 */
                        int32_t l_332 = 0x646E4BEBL;
                        int16_t *l_334 = &p_1461->g_34;
                        int16_t *l_336 = &p_1461->g_337;
                        int i, j, k;
                        (*l_300) = ((p_48 ^ ((((((*l_336) = ((safe_lshift_func_int8_t_s_u((((((p_46 != ((((safe_mul_func_uint16_t_u_u(p_1461->g_74, ((*l_272) |= ((l_330 ^= p_48) <= ((p_1461->g_36 > ((*l_334) ^= ((((safe_unary_minus_func_int8_t_s(l_332)) & (+p_1461->g_7[1][0])) , (void*)0) != l_333[4]))) < (*l_300)))))) >= 0x06625B2EL) , l_318[1]) , (void*)0)) <= l_335) , &p_47) != &p_1461->g_86) , p_1461->g_142.f0), p_1461->g_279)) ^ 0x3495F7AFL)) , p_1461->g_69[0][4]) & p_48) || l_332) | p_1461->g_97)) != p_49);
                        (*l_300) = 0L;
                        return p_1461->g_306[p_1461->g_76][p_1461->g_76][(p_1461->g_76 + 1)];
                    }
                    if ((**p_1461->g_301))
                        continue;
                    (*l_300) = (**p_1461->g_301);
                }
                l_348 = ((((*l_278) = (p_48 <= ((*l_339) = p_1461->g_337))) <= (~(((l_278 == ((*l_340) = (void*)0)) , p_49) != (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((p_46 == l_346) & ((l_347[4] == &l_322) & p_1461->g_76)), p_1461->g_7[1][0])), p_48))))) , 0x66988DCEL);
            }
            else
            { /* block id: 181 */
                if (p_1461->g_95)
                    goto lbl_349;
                (*p_1461->g_350) = &p_1461->g_142;
                (*p_1461->g_87) &= 0L;
            }
        }
        else
        { /* block id: 186 */
            uint16_t *l_353 = &p_1461->g_354;
            uint32_t *l_359 = &p_1461->g_352[1][1][4].f2;
            int32_t l_364 = 0x3504AB5EL;
            int32_t l_377[7] = {0x5C13B5F9L,0x5C13B5F9L,0x5C13B5F9L,0x5C13B5F9L,0x5C13B5F9L,0x5C13B5F9L,0x5C13B5F9L};
            struct S1 **l_407 = (void*)0;
            int i;
            for (p_1461->g_97 = 0; (p_1461->g_97 <= 1); p_1461->g_97 += 1)
            { /* block id: 189 */
                return p_1461->g_352[1][1][4];
            }
            if ((p_1461->g_352[1][1][4].f3 || ((((*l_353) = ((*l_272) = 0x0826L)) == 0xAFC6L) && (((--(*l_353)) != (safe_sub_func_int8_t_s_s((p_1461->g_306[0][0][3].f2 & ((*l_300) >= (((*l_359)--) , ((((void*)0 == &p_1461->g_36) , (p_1461->g_306[0][0][3].f1 < 0x4DEFL)) , p_1461->g_279)))), p_1461->g_306[0][0][3].f2))) | 0x19E2L))))
            { /* block id: 196 */
                int32_t l_387[4][3][2];
                int32_t l_389 = 0x688B2DACL;
                int32_t l_391 = 6L;
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_387[i][j][k] = (-2L);
                    }
                }
                for (p_1461->g_337 = 29; (p_1461->g_337 == 13); p_1461->g_337--)
                { /* block id: 199 */
                    int32_t l_365 = 6L;
                    int32_t *l_367 = &l_273;
                    int32_t *l_368 = (void*)0;
                    int32_t *l_369 = &l_364;
                    int32_t *l_370 = &l_273;
                    int32_t *l_371 = &p_1461->g_30;
                    int32_t *l_372 = (void*)0;
                    int32_t *l_373 = &l_364;
                    int32_t *l_374 = &p_1461->g_30;
                    int32_t *l_375 = &l_364;
                    int32_t *l_376 = &p_1461->g_30;
                    int32_t *l_378 = &l_377[3];
                    int32_t *l_379 = &l_377[3];
                    int32_t *l_380 = (void*)0;
                    int32_t *l_381 = (void*)0;
                    int32_t *l_382[1];
                    uint32_t l_392 = 0x9F0677D0L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_382[i] = &p_1461->g_30;
                    --l_392;
                    (*p_1461->g_87) = ((void*)0 == &p_47);
                }
                for (p_1461->g_121 = 0; (p_1461->g_121 > 48); p_1461->g_121 = safe_add_func_uint64_t_u_u(p_1461->g_121, 7))
                { /* block id: 205 */
                    (*p_1461->g_87) = (**p_1461->g_301);
                }
                if ((**p_1461->g_86))
                    continue;
                (*p_1461->g_305) = (*p_1461->g_305);
            }
            else
            { /* block id: 210 */
                int8_t *l_409 = &p_1461->g_69[4][3];
                uint16_t **l_412[9];
                int16_t *l_414 = &p_1461->g_34;
                int i;
                for (i = 0; i < 9; i++)
                    l_412[i] = &l_353;
                l_377[3] ^= (((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((0x7633D12CL <= (safe_mul_func_int16_t_s_s(((*l_414) &= ((safe_div_func_int16_t_s_s((p_48 , ((safe_sub_func_int8_t_s_s(((*l_409) = ((*p_46) = ((l_407 != l_408) < p_49))), 0L)) != (safe_mod_func_uint16_t_u_u((0xCFL || ((l_413 = l_272) != (void*)0)), p_48)))), (-1L))) | p_1461->g_30)), p_1461->g_76))) | 0xD7691C61AAD270FFL), p_49)), 0xE189L)) ^ p_49) >= p_1461->g_76);
            }
            if (p_1461->g_74)
                goto lbl_349;
        }
    }
    return p_1461->g_415;
}


/* ------------------------------------------ */
/* 
 * reads : p_1461->g_128
 * writes:
 */
int32_t ** func_50(int8_t * p_51, int32_t * p_52, int16_t * p_53, int16_t * p_54, struct S2 * p_1461)
{ /* block id: 37 */
    uint8_t l_110 = 0UL;
    int8_t l_111 = 0x23L;
    int32_t *l_112 = &p_1461->g_30;
    int32_t *l_113 = &p_1461->g_30;
    int32_t **l_114 = (void*)0;
    int32_t ***l_119 = &l_114;
    uint32_t *l_120[8];
    uint8_t *l_124 = &l_110;
    int32_t ****l_129 = &p_1461->g_127[8][2][1];
    int32_t ****l_130 = (void*)0;
    int32_t ***l_132[1][3];
    int32_t ****l_131 = &l_132[0][0];
    int64_t *l_133[2][7][3] = {{{&p_1461->g_76,&p_1461->g_97,(void*)0},{&p_1461->g_76,&p_1461->g_97,(void*)0},{&p_1461->g_76,&p_1461->g_97,(void*)0},{&p_1461->g_76,&p_1461->g_97,(void*)0},{&p_1461->g_76,&p_1461->g_97,(void*)0},{&p_1461->g_76,&p_1461->g_97,(void*)0},{&p_1461->g_76,&p_1461->g_97,(void*)0}},{{&p_1461->g_76,&p_1461->g_97,(void*)0},{&p_1461->g_76,&p_1461->g_97,(void*)0},{&p_1461->g_76,&p_1461->g_97,(void*)0},{&p_1461->g_76,&p_1461->g_97,(void*)0},{&p_1461->g_76,&p_1461->g_97,(void*)0},{&p_1461->g_76,&p_1461->g_97,(void*)0},{&p_1461->g_76,&p_1461->g_97,(void*)0}}};
    uint64_t *l_134 = (void*)0;
    uint64_t *l_135 = (void*)0;
    uint64_t *l_136[6][8][5] = {{{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74}},{{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74}},{{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74}},{{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74}},{{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74}},{{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74},{&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74,&p_1461->g_74}}};
    int32_t l_177[7] = {0x155B11B7L,0x6C1F001DL,0x155B11B7L,0x155B11B7L,0x6C1F001DL,0x155B11B7L,0x155B11B7L};
    int32_t l_196 = 0x6EA20896L;
    struct S0 *l_256 = &p_1461->g_142;
    struct S0 **l_255[2];
    int32_t **l_261[9] = {&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112};
    int32_t **l_263 = &l_113;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_120[i] = &p_1461->g_121;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_132[i][j] = &p_1461->g_128;
    }
    for (i = 0; i < 2; i++)
        l_255[i] = &l_256;
    p_52 = l_113;
    return (**l_131);
}


/* ------------------------------------------ */
/* 
 * reads : p_1461->g_7 p_1461->g_86 p_1461->g_30 p_1461->g_69 p_1461->g_76 p_1461->g_97 p_1461->g_95
 * writes: p_1461->g_95 p_1461->g_76 p_1461->g_97 p_1461->g_30 p_1461->g_87
 */
int32_t * func_56(int16_t  p_57, uint64_t  p_58, int64_t  p_59, int32_t ** p_60, int32_t * p_61, struct S2 * p_1461)
{ /* block id: 20 */
    int32_t **l_88 = &p_1461->g_87;
    struct S0 l_91 = {0L};
    uint16_t *l_94[4] = {&p_1461->g_95,&p_1461->g_95,&p_1461->g_95,&p_1461->g_95};
    int64_t *l_96[2][6] = {{&p_1461->g_97,&p_1461->g_97,&p_1461->g_97,&p_1461->g_97,&p_1461->g_97,&p_1461->g_97},{&p_1461->g_97,&p_1461->g_97,&p_1461->g_97,&p_1461->g_97,&p_1461->g_97,&p_1461->g_97}};
    int32_t *l_107 = (void*)0;
    int i, j;
    if ((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((~p_1461->g_7[1][0]) , (p_1461->g_86 != l_88)) == (p_1461->g_97 = ((p_1461->g_76 ^= (safe_mul_func_uint16_t_u_u((p_1461->g_95 = ((l_91 , ((((p_1461->g_7[0][0] || (safe_add_func_uint64_t_u_u((p_59 >= p_1461->g_30), (p_58 == (((void*)0 != &p_1461->g_34) == (-1L)))))) , 0L) > p_58) ^ p_57)) & p_1461->g_69[4][4])), p_57))) && 0x06F5C0CD63D7C5F0L))), 10)), 65535UL)), 0x98B4L)))
    { /* block id: 24 */
        for (p_1461->g_97 = 5; (p_1461->g_97 >= 21); p_1461->g_97++)
        { /* block id: 27 */
            int64_t l_100[1];
            int i;
            for (i = 0; i < 1; i++)
                l_100[i] = 0x4C220CDAAD4FDB33L;
            (**p_60) = l_100[0];
        }
        (*l_88) = (p_1461->g_95 , func_27((+p_57), p_1461));
    }
    else
    { /* block id: 31 */
        (**p_60) |= (safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s(0x2155E7CE46079F8DL, p_59)), (--p_1461->g_95)));
    }
    (**p_60) = (**p_60);
    return l_107;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1462;
    struct S2* p_1461 = &c_1462;
    struct S2 c_1463 = {
        {{0x835A23E8L},{0x835A23E8L}}, // p_1461->g_7
        0L, // p_1461->g_30
        0L, // p_1461->g_34
        0x05L, // p_1461->g_36
        {{(-1L),0x03L,0x03L,(-1L),(-1L),0x03L,0x03L,(-1L),(-1L)},{(-1L),0x03L,0x03L,(-1L),(-1L),0x03L,0x03L,(-1L),(-1L)},{(-1L),0x03L,0x03L,(-1L),(-1L),0x03L,0x03L,(-1L),(-1L)},{(-1L),0x03L,0x03L,(-1L),(-1L),0x03L,0x03L,(-1L),(-1L)},{(-1L),0x03L,0x03L,(-1L),(-1L),0x03L,0x03L,(-1L),(-1L)}}, // p_1461->g_69
        0x7E6FF2F0833481FFL, // p_1461->g_74
        1L, // p_1461->g_76
        (void*)0, // p_1461->g_87
        &p_1461->g_87, // p_1461->g_86
        0UL, // p_1461->g_95
        0x5B386A5B839CC85BL, // p_1461->g_97
        0x4C8ED204L, // p_1461->g_121
        (void*)0, // p_1461->g_128
        {{{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128}},{{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128}},{{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128}},{{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128}},{{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128}},{{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128}},{{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128}},{{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128}},{{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128},{&p_1461->g_128,&p_1461->g_128}}}, // p_1461->g_127
        {1L}, // p_1461->g_142
        &p_1461->g_142, // p_1461->g_141
        1UL, // p_1461->g_279
        &p_1461->g_87, // p_1461->g_301
        {{{{0x5CF96887L,-4L,1UL,18446744073709551615UL,0x30D07F0CL},{0x4F337403L,0x5D2A7615F8351B3DL,4294967295UL,0xE637BDA3A7E0E67FL,0x60DB045FL},{4L,0x3219117F19FA5CB6L,0x0BD83429L,0UL,0L},{-1L,0x1D6A5D7A0D760309L,0x21890671L,2UL,-1L},{3L,0x264B2BC324865266L,4294967295UL,18446744073709551614UL,0x0F2240E8L},{0x5CF96887L,-4L,1UL,18446744073709551615UL,0x30D07F0CL}},{{0x5CF96887L,-4L,1UL,18446744073709551615UL,0x30D07F0CL},{0x4F337403L,0x5D2A7615F8351B3DL,4294967295UL,0xE637BDA3A7E0E67FL,0x60DB045FL},{4L,0x3219117F19FA5CB6L,0x0BD83429L,0UL,0L},{-1L,0x1D6A5D7A0D760309L,0x21890671L,2UL,-1L},{3L,0x264B2BC324865266L,4294967295UL,18446744073709551614UL,0x0F2240E8L},{0x5CF96887L,-4L,1UL,18446744073709551615UL,0x30D07F0CL}}},{{{0x5CF96887L,-4L,1UL,18446744073709551615UL,0x30D07F0CL},{0x4F337403L,0x5D2A7615F8351B3DL,4294967295UL,0xE637BDA3A7E0E67FL,0x60DB045FL},{4L,0x3219117F19FA5CB6L,0x0BD83429L,0UL,0L},{-1L,0x1D6A5D7A0D760309L,0x21890671L,2UL,-1L},{3L,0x264B2BC324865266L,4294967295UL,18446744073709551614UL,0x0F2240E8L},{0x5CF96887L,-4L,1UL,18446744073709551615UL,0x30D07F0CL}},{{0x5CF96887L,-4L,1UL,18446744073709551615UL,0x30D07F0CL},{0x4F337403L,0x5D2A7615F8351B3DL,4294967295UL,0xE637BDA3A7E0E67FL,0x60DB045FL},{4L,0x3219117F19FA5CB6L,0x0BD83429L,0UL,0L},{-1L,0x1D6A5D7A0D760309L,0x21890671L,2UL,-1L},{3L,0x264B2BC324865266L,4294967295UL,18446744073709551614UL,0x0F2240E8L},{0x5CF96887L,-4L,1UL,18446744073709551615UL,0x30D07F0CL}}},{{{0x5CF96887L,-4L,1UL,18446744073709551615UL,0x30D07F0CL},{0x4F337403L,0x5D2A7615F8351B3DL,4294967295UL,0xE637BDA3A7E0E67FL,0x60DB045FL},{4L,0x3219117F19FA5CB6L,0x0BD83429L,0UL,0L},{-1L,0x1D6A5D7A0D760309L,0x21890671L,2UL,-1L},{3L,0x264B2BC324865266L,4294967295UL,18446744073709551614UL,0x0F2240E8L},{0x5CF96887L,-4L,1UL,18446744073709551615UL,0x30D07F0CL}},{{0x5CF96887L,-4L,1UL,18446744073709551615UL,0x30D07F0CL},{0x4F337403L,0x5D2A7615F8351B3DL,4294967295UL,0xE637BDA3A7E0E67FL,0x60DB045FL},{4L,0x3219117F19FA5CB6L,0x0BD83429L,0UL,0L},{-1L,0x1D6A5D7A0D760309L,0x21890671L,2UL,-1L},{3L,0x264B2BC324865266L,4294967295UL,18446744073709551614UL,0x0F2240E8L},{0x5CF96887L,-4L,1UL,18446744073709551615UL,0x30D07F0CL}}}}, // p_1461->g_306
        &p_1461->g_306[0][0][3], // p_1461->g_305
        1L, // p_1461->g_337
        {&p_1461->g_142,&p_1461->g_142,&p_1461->g_142}, // p_1461->g_351
        &p_1461->g_351[2], // p_1461->g_350
        {{{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}},{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}}},{{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}},{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}}},{{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}},{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}}},{{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}},{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}}},{{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}},{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}}},{{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}},{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}}},{{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}},{{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x1435AAB0L,-2L,8UL,2UL,0x0CC951B4L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x7B8BF155L,0x11B66BD0EFF966D2L,0xB95DA0ADL,0xB367259FA338E81CL,-1L},{0x466EF3F2L,1L,0xA72126D9L,5UL,0L},{0x3DCB2487L,-1L,4294967286UL,1UL,0L}}}}, // p_1461->g_352
        0x7AF2L, // p_1461->g_354
        7L, // p_1461->g_366
        {0x0BC06ADAL,0x30A1894E31E63FEDL,0x5E997958L,0x532BD9DF9C07CABDL,-9L}, // p_1461->g_415
        (void*)0, // p_1461->g_452
        {-1L,0x09DE8618921DC29AL,0xF872AC11L,0UL,1L}, // p_1461->g_454
        {0L,0L,0x7D535E3DL,0xCFA1CFAC5468741DL,-1L}, // p_1461->g_455
        {1UL,1UL}, // p_1461->g_510
        0L, // p_1461->g_526
        0x3AL, // p_1461->g_571
        0x29E63E8EA4C94A05L, // p_1461->g_575
        {0xC667L,0xC667L}, // p_1461->g_579
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1461->g_622
        &p_1461->g_622[2], // p_1461->g_621
        &p_1461->g_621, // p_1461->g_620
        {{{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)}},{{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)}},{{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)}},{{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)}},{{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)}},{{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)}},{{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)}},{{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)}},{{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)},{0L,(-6L),0x0DB7C6A4L,0x7456CE43L,0x4D219D7AL,0x41F5356EL,(-1L)}}}, // p_1461->g_651
        0x6099C754L, // p_1461->g_653
        &p_1461->g_121, // p_1461->g_676
        8L, // p_1461->g_681
        0x02258C24DD6DBB33L, // p_1461->g_722
        {{9L,0x01CC004EFD192731L,0x636689AFL,0xDD25A75FF10BF0C6L,-1L},{9L,0x01CC004EFD192731L,0x636689AFL,0xDD25A75FF10BF0C6L,-1L},{9L,0x01CC004EFD192731L,0x636689AFL,0xDD25A75FF10BF0C6L,-1L},{9L,0x01CC004EFD192731L,0x636689AFL,0xDD25A75FF10BF0C6L,-1L},{9L,0x01CC004EFD192731L,0x636689AFL,0xDD25A75FF10BF0C6L,-1L},{9L,0x01CC004EFD192731L,0x636689AFL,0xDD25A75FF10BF0C6L,-1L},{9L,0x01CC004EFD192731L,0x636689AFL,0xDD25A75FF10BF0C6L,-1L},{9L,0x01CC004EFD192731L,0x636689AFL,0xDD25A75FF10BF0C6L,-1L},{9L,0x01CC004EFD192731L,0x636689AFL,0xDD25A75FF10BF0C6L,-1L}}, // p_1461->g_788
        &p_1461->g_579[1], // p_1461->g_798
        &p_1461->g_798, // p_1461->g_797
        &p_1461->g_69[4][3], // p_1461->g_895
        &p_1461->g_895, // p_1461->g_894
        0UL, // p_1461->g_900
        {1L,-2L,4294967294UL,0x1E2E893E7FA00491L,1L}, // p_1461->g_916
        (-1L), // p_1461->g_928
        {6L,0x6D0768C31F7DF9CEL,0xEE7DB9D9L,1UL,0x72B1F72EL}, // p_1461->g_966
        (void*)0, // p_1461->g_967
        &p_1461->g_797, // p_1461->g_968
        {{{&p_1461->g_681,&p_1461->g_681,&p_1461->g_681,&p_1461->g_681,&p_1461->g_681}}}, // p_1461->g_1013
        &p_1461->g_1013[0][0][4], // p_1461->g_1012
        0x19A01BBAF27DAF50L, // p_1461->g_1091
        18446744073709551607UL, // p_1461->g_1094
        1L, // p_1461->g_1097
        9UL, // p_1461->g_1162
        {0x47BD479AL,0x39FA55345096009CL,1UL,0x10FA8CAC25B77EC6L,0x74568959L}, // p_1461->g_1198
        {0x53609C6FL}, // p_1461->g_1209
        {0x4FL}, // p_1461->g_1225
        (-8L), // p_1461->g_1226
        8L, // p_1461->g_1271
        (void*)0, // p_1461->g_1275
        &p_1461->g_87, // p_1461->g_1292
        {0x5C278514L,0L,0xD3A8FFBCL,0xDAEEC409B5AA5B0CL,0x2C98DDD2L}, // p_1461->g_1311
        (void*)0, // p_1461->g_1321
        0x33AB9AFDL, // p_1461->g_1340
        {1L,0x434DC4F005D53464L,0xF6B430E6L,0UL,9L}, // p_1461->g_1350
        &p_1461->g_305, // p_1461->g_1352
        &p_1461->g_1352, // p_1461->g_1351
        (void*)0, // p_1461->g_1355
    };
    c_1462 = c_1463;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1461);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1461->g_7[i][j], "p_1461->g_7[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1461->g_30, "p_1461->g_30", print_hash_value);
    transparent_crc(p_1461->g_34, "p_1461->g_34", print_hash_value);
    transparent_crc(p_1461->g_36, "p_1461->g_36", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1461->g_69[i][j], "p_1461->g_69[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1461->g_74, "p_1461->g_74", print_hash_value);
    transparent_crc(p_1461->g_76, "p_1461->g_76", print_hash_value);
    transparent_crc(p_1461->g_95, "p_1461->g_95", print_hash_value);
    transparent_crc(p_1461->g_97, "p_1461->g_97", print_hash_value);
    transparent_crc(p_1461->g_121, "p_1461->g_121", print_hash_value);
    transparent_crc(p_1461->g_142.f0, "p_1461->g_142.f0", print_hash_value);
    transparent_crc(p_1461->g_279, "p_1461->g_279", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1461->g_306[i][j][k].f0, "p_1461->g_306[i][j][k].f0", print_hash_value);
                transparent_crc(p_1461->g_306[i][j][k].f1, "p_1461->g_306[i][j][k].f1", print_hash_value);
                transparent_crc(p_1461->g_306[i][j][k].f2, "p_1461->g_306[i][j][k].f2", print_hash_value);
                transparent_crc(p_1461->g_306[i][j][k].f3, "p_1461->g_306[i][j][k].f3", print_hash_value);
                transparent_crc(p_1461->g_306[i][j][k].f4, "p_1461->g_306[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(p_1461->g_337, "p_1461->g_337", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1461->g_352[i][j][k].f0, "p_1461->g_352[i][j][k].f0", print_hash_value);
                transparent_crc(p_1461->g_352[i][j][k].f1, "p_1461->g_352[i][j][k].f1", print_hash_value);
                transparent_crc(p_1461->g_352[i][j][k].f2, "p_1461->g_352[i][j][k].f2", print_hash_value);
                transparent_crc(p_1461->g_352[i][j][k].f3, "p_1461->g_352[i][j][k].f3", print_hash_value);
                transparent_crc(p_1461->g_352[i][j][k].f4, "p_1461->g_352[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(p_1461->g_354, "p_1461->g_354", print_hash_value);
    transparent_crc(p_1461->g_366, "p_1461->g_366", print_hash_value);
    transparent_crc(p_1461->g_415.f0, "p_1461->g_415.f0", print_hash_value);
    transparent_crc(p_1461->g_415.f1, "p_1461->g_415.f1", print_hash_value);
    transparent_crc(p_1461->g_415.f2, "p_1461->g_415.f2", print_hash_value);
    transparent_crc(p_1461->g_415.f3, "p_1461->g_415.f3", print_hash_value);
    transparent_crc(p_1461->g_415.f4, "p_1461->g_415.f4", print_hash_value);
    transparent_crc(p_1461->g_454.f0, "p_1461->g_454.f0", print_hash_value);
    transparent_crc(p_1461->g_454.f1, "p_1461->g_454.f1", print_hash_value);
    transparent_crc(p_1461->g_454.f2, "p_1461->g_454.f2", print_hash_value);
    transparent_crc(p_1461->g_454.f3, "p_1461->g_454.f3", print_hash_value);
    transparent_crc(p_1461->g_454.f4, "p_1461->g_454.f4", print_hash_value);
    transparent_crc(p_1461->g_455.f0, "p_1461->g_455.f0", print_hash_value);
    transparent_crc(p_1461->g_455.f1, "p_1461->g_455.f1", print_hash_value);
    transparent_crc(p_1461->g_455.f2, "p_1461->g_455.f2", print_hash_value);
    transparent_crc(p_1461->g_455.f3, "p_1461->g_455.f3", print_hash_value);
    transparent_crc(p_1461->g_455.f4, "p_1461->g_455.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1461->g_510[i], "p_1461->g_510[i]", print_hash_value);

    }
    transparent_crc(p_1461->g_526, "p_1461->g_526", print_hash_value);
    transparent_crc(p_1461->g_571, "p_1461->g_571", print_hash_value);
    transparent_crc(p_1461->g_575, "p_1461->g_575", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1461->g_579[i], "p_1461->g_579[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1461->g_651[i][j][k], "p_1461->g_651[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1461->g_653, "p_1461->g_653", print_hash_value);
    transparent_crc(p_1461->g_681, "p_1461->g_681", print_hash_value);
    transparent_crc(p_1461->g_722, "p_1461->g_722", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1461->g_788[i].f0, "p_1461->g_788[i].f0", print_hash_value);
        transparent_crc(p_1461->g_788[i].f1, "p_1461->g_788[i].f1", print_hash_value);
        transparent_crc(p_1461->g_788[i].f2, "p_1461->g_788[i].f2", print_hash_value);
        transparent_crc(p_1461->g_788[i].f3, "p_1461->g_788[i].f3", print_hash_value);
        transparent_crc(p_1461->g_788[i].f4, "p_1461->g_788[i].f4", print_hash_value);

    }
    transparent_crc(p_1461->g_900, "p_1461->g_900", print_hash_value);
    transparent_crc(p_1461->g_916.f0, "p_1461->g_916.f0", print_hash_value);
    transparent_crc(p_1461->g_916.f1, "p_1461->g_916.f1", print_hash_value);
    transparent_crc(p_1461->g_916.f2, "p_1461->g_916.f2", print_hash_value);
    transparent_crc(p_1461->g_916.f3, "p_1461->g_916.f3", print_hash_value);
    transparent_crc(p_1461->g_916.f4, "p_1461->g_916.f4", print_hash_value);
    transparent_crc(p_1461->g_928, "p_1461->g_928", print_hash_value);
    transparent_crc(p_1461->g_966.f0, "p_1461->g_966.f0", print_hash_value);
    transparent_crc(p_1461->g_966.f1, "p_1461->g_966.f1", print_hash_value);
    transparent_crc(p_1461->g_966.f2, "p_1461->g_966.f2", print_hash_value);
    transparent_crc(p_1461->g_966.f3, "p_1461->g_966.f3", print_hash_value);
    transparent_crc(p_1461->g_966.f4, "p_1461->g_966.f4", print_hash_value);
    transparent_crc(p_1461->g_1091, "p_1461->g_1091", print_hash_value);
    transparent_crc(p_1461->g_1094, "p_1461->g_1094", print_hash_value);
    transparent_crc(p_1461->g_1097, "p_1461->g_1097", print_hash_value);
    transparent_crc(p_1461->g_1162, "p_1461->g_1162", print_hash_value);
    transparent_crc(p_1461->g_1198.f0, "p_1461->g_1198.f0", print_hash_value);
    transparent_crc(p_1461->g_1198.f1, "p_1461->g_1198.f1", print_hash_value);
    transparent_crc(p_1461->g_1198.f2, "p_1461->g_1198.f2", print_hash_value);
    transparent_crc(p_1461->g_1198.f3, "p_1461->g_1198.f3", print_hash_value);
    transparent_crc(p_1461->g_1198.f4, "p_1461->g_1198.f4", print_hash_value);
    transparent_crc(p_1461->g_1209.f0, "p_1461->g_1209.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1461->g_1225[i], "p_1461->g_1225[i]", print_hash_value);

    }
    transparent_crc(p_1461->g_1226, "p_1461->g_1226", print_hash_value);
    transparent_crc(p_1461->g_1271, "p_1461->g_1271", print_hash_value);
    transparent_crc(p_1461->g_1311.f0, "p_1461->g_1311.f0", print_hash_value);
    transparent_crc(p_1461->g_1311.f1, "p_1461->g_1311.f1", print_hash_value);
    transparent_crc(p_1461->g_1311.f2, "p_1461->g_1311.f2", print_hash_value);
    transparent_crc(p_1461->g_1311.f3, "p_1461->g_1311.f3", print_hash_value);
    transparent_crc(p_1461->g_1311.f4, "p_1461->g_1311.f4", print_hash_value);
    transparent_crc(p_1461->g_1340, "p_1461->g_1340", print_hash_value);
    transparent_crc(p_1461->g_1350.f0, "p_1461->g_1350.f0", print_hash_value);
    transparent_crc(p_1461->g_1350.f1, "p_1461->g_1350.f1", print_hash_value);
    transparent_crc(p_1461->g_1350.f2, "p_1461->g_1350.f2", print_hash_value);
    transparent_crc(p_1461->g_1350.f3, "p_1461->g_1350.f3", print_hash_value);
    transparent_crc(p_1461->g_1350.f4, "p_1461->g_1350.f4", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
