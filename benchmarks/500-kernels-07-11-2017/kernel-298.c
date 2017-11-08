// -g 7,29,26 -l 7,1,2
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


// Seed: 335653488

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   volatile int16_t  f1;
   int64_t  f2;
   volatile int64_t  f3;
   volatile uint64_t  f4;
   int32_t  f5;
   int16_t  f6;
   uint32_t  f7;
   volatile int32_t  f8;
   uint32_t  f9;
};

struct S1 {
    volatile uint32_t g_3[2];
    uint64_t g_27[2];
    int32_t g_29;
    int32_t g_45[6][6];
    int32_t g_46;
    uint64_t g_54;
    struct S0 g_59;
    struct S0 g_61;
    volatile struct S0 *g_78;
    struct S0 g_80;
    struct S0 *g_79;
    struct S0 g_83;
    struct S0 *g_82;
    struct S0 g_85;
    struct S0 g_87;
    struct S0 g_88;
    struct S0 g_90;
    struct S0 *g_89;
    uint16_t g_100[8][8];
    uint16_t g_106;
    struct S0 g_108;
    uint32_t g_110;
    uint16_t g_112;
    int32_t *g_113[8];
    uint32_t g_128;
    volatile uint32_t *g_131[2];
    uint8_t g_141[7];
    uint32_t g_145;
    struct S0 g_222;
    struct S0 g_224;
    int64_t *g_339;
    uint16_t g_342;
    int64_t g_344;
    uint32_t *g_425;
    uint32_t *g_428;
    uint32_t *g_429;
    int8_t g_452;
    int8_t g_458[2];
    int16_t g_466;
    volatile struct S0 * volatile *g_488;
    volatile struct S0 * volatile * volatile *g_487[8][8][1];
    uint8_t g_526;
    uint8_t *g_525[2][8];
    uint8_t **g_565;
    int8_t *g_588;
    int8_t *g_589;
    int16_t *g_658;
    int16_t **g_657;
    uint32_t g_677[3];
    int64_t g_714[1];
    uint32_t *g_830;
    uint32_t **g_829;
    uint8_t g_845;
    uint64_t g_895;
    int8_t g_1099;
    uint32_t g_1114;
    volatile uint64_t *g_1149[10][1];
    volatile uint64_t **g_1148[7];
    volatile uint8_t *g_1189;
    volatile uint8_t * volatile *g_1188[6];
    volatile uint8_t * volatile **g_1187;
    volatile uint8_t * volatile ***g_1186;
    volatile uint64_t g_1266[10];
    int32_t ** volatile g_1268;
    int16_t g_1291;
    int32_t ** volatile g_1293[10];
    int32_t ** volatile g_1294;
    int32_t ** volatile g_1295;
    uint32_t **g_1309;
    uint32_t **g_1310;
    volatile struct S0 g_1323;
    volatile uint8_t g_1393[3][1];
    volatile int32_t g_1395[1];
    volatile int32_t *g_1394;
    uint8_t *** volatile g_1422[10][9][2];
    uint32_t *g_1440;
    volatile struct S0 g_1446[9][2];
    int32_t g_1487;
    volatile struct S0 g_1496;
    uint8_t * volatile *g_1507;
    uint8_t g_1550;
    struct S0 g_1569[5][3][2];
    int32_t ** volatile g_1589;
    uint32_t *g_1602;
    uint32_t g_1631;
    volatile struct S0 g_1634[10];
    int32_t ** volatile g_1691;
    int32_t ** volatile g_1719;
    volatile uint64_t *** volatile g_1721;
    struct S0 **g_1738;
    struct S0 ***g_1737;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S1 * p_1740);
uint16_t  func_6(int32_t  p_7, uint32_t  p_8, uint64_t  p_9, uint64_t  p_10, struct S1 * p_1740);
uint8_t  func_11(int64_t  p_12, int16_t  p_13, struct S1 * p_1740);
uint64_t  func_16(uint16_t  p_17, struct S1 * p_1740);
uint8_t  func_22(uint32_t  p_23, uint64_t  p_24, uint8_t  p_25, struct S1 * p_1740);
int32_t  func_34(int32_t * p_35, int32_t * p_36, struct S1 * p_1740);
int64_t  func_56(uint64_t  p_57, struct S1 * p_1740);
int32_t * func_62(uint64_t * p_63, struct S1 * p_1740);
uint64_t * func_64(int32_t  p_65, uint64_t * p_66, uint32_t  p_67, uint64_t * p_68, struct S1 * p_1740);
uint8_t  func_72(uint32_t  p_73, uint32_t  p_74, int8_t  p_75, struct S1 * p_1740);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1740->g_3 p_1740->g_27 p_1740->g_29 p_1740->g_54 p_1740->g_45 p_1740->g_61.f0 p_1740->g_78 p_1740->g_79 p_1740->g_82 p_1740->g_90.f5 p_1740->g_85.f5 p_1740->g_83.f7 p_1740->g_87.f2 p_1740->g_224.f9 p_1740->g_224.f7 p_1740->g_425 p_1740->g_87.f0 p_1740->g_90.f0 p_1740->g_108.f2 p_1740->g_108.f9 p_1740->g_458 p_1740->g_85.f0 p_1740->g_466 p_1740->g_110 p_1740->g_487 p_1740->g_87.f6 p_1740->g_87.f5 p_1740->g_87.f7 p_1740->g_106 p_1740->g_80.f9 p_1740->g_108.f5 p_1740->g_224.f2 p_1740->g_61.f2 p_1740->g_224.f6 p_1740->g_222.f7 p_1740->g_222.f5 p_1740->g_525 p_1740->g_85.f6 p_1740->g_224.f0 p_1740->g_80.f6 p_1740->g_61.f6 p_1740->g_112 p_1740->g_80.f7 p_1740->g_100 p_1740->g_85.f9 p_1740->g_59.f2 p_1740->g_83.f9 p_1740->g_87.f9 p_1740->g_565 p_1740->g_222.f9 p_1740->g_657 p_1740->g_342 p_1740->g_677 p_1740->g_83.f0 p_1740->g_658 p_1740->g_526 p_1740->g_80.f2 p_1740->g_88.f9 p_1740->g_88.f6 p_1740->g_46 p_1740->g_829 p_1740->g_222.f6 p_1740->g_845 p_1740->g_88.f5 p_1740->g_80.f0 p_1740->g_80.f5 p_1740->g_429 p_1740->g_145 p_1740->g_895 p_1740->g_128 p_1740->g_59.f6 p_1740->g_90.f2 p_1740->g_108.f0 p_1740->g_344 p_1740->g_88.f7 p_1740->g_59.f5 p_1740->g_141 p_1740->g_1114 p_1740->g_1148 p_1740->g_89 p_1740->g_1186 p_1740->g_224.f5 p_1740->g_1187 p_1740->g_1188 p_1740->g_61.f7 p_1740->g_1268 p_1740->g_714 p_1740->g_224.f3 p_1740->g_1291 p_1740->g_108.f6 p_1740->g_61.f3 p_1740->g_1323 p_1740->g_1310 p_1740->g_87.f3 p_1740->g_1393 p_1740->g_1394 p_1740->g_1266 p_1740->g_1395 p_1740->g_1440 p_1740->g_88.f1 p_1740->g_1550 p_1740->g_1569 p_1740->g_80 p_1740->g_1631 p_1740->g_1446.f2 p_1740->g_1634 p_1740->g_222.f2 p_1740->g_452 p_1740->g_90.f9 p_1740->g_1691 p_1740->g_90.f6 p_1740->g_88 p_1740->g_87 p_1740->g_90 p_1740->g_1719 p_1740->g_1721
 * writes: p_1740->g_29 p_1740->g_46 p_1740->g_54 p_1740->g_61.f0 p_1740->g_79 p_1740->g_89 p_1740->g_87.f0 p_1740->g_428 p_1740->g_429 p_1740->g_113 p_1740->g_88.f9 p_1740->g_141 p_1740->g_452 p_1740->g_458 p_1740->g_85.f0 p_1740->g_88.f6 p_1740->g_224.f9 p_1740->g_61.f5 p_1740->g_344 p_1740->g_80.f6 p_1740->g_85.f6 p_1740->g_224.f0 p_1740->g_61.f6 p_1740->g_112 p_1740->g_128 p_1740->g_45 p_1740->g_108.f7 p_1740->g_565 p_1740->g_100 p_1740->g_87.f7 p_1740->g_588 p_1740->g_589 p_1740->g_526 p_1740->g_87.f6 p_1740->g_87.f2 p_1740->g_87.f9 p_1740->g_108.f9 p_1740->g_80.f2 p_1740->g_85.f9 p_1740->g_342 p_1740->g_677 p_1740->g_90.f7 p_1740->g_85.f5 p_1740->g_90.f9 p_1740->g_83.f9 p_1740->g_110 p_1740->g_106 p_1740->g_222.f2 p_1740->g_80.f9 p_1740->g_829 p_1740->g_85.f2 p_1740->g_108.f0 p_1740->g_222.f9 p_1740->g_525 p_1740->g_145 p_1740->g_895 p_1740->g_845 p_1740->g_27 p_1740->g_59.f9 p_1740->g_658 p_1740->g_59.f5 p_1740->g_466 p_1740->g_1099 p_1740->g_1114 p_1740->g_82 p_1740->g_224.f5 p_1740->g_59.f6 p_1740->g_61.f7 p_1740->g_1149 p_1740->g_83.f5 p_1740->g_714 p_1740->g_1309 p_1740->g_1310 p_1740->g_83.f6 p_1740->g_80 p_1740->g_224.f2 p_1740->g_108.f6 p_1740->g_108.f5 p_1740->g_83.f2 p_1740->g_59.f7 p_1740->g_830 p_1740->g_1602 p_1740->g_1395 p_1740->g_88 p_1740->g_87 p_1740->g_90 p_1740->g_224.f6 p_1740->g_1291 p_1740->g_222.f0 p_1740->g_1148 p_1740->g_83 p_1740->g_1737
 */
uint64_t  func_1(struct S1 * p_1740)
{ /* block id: 4 */
    int8_t l_2 = 1L;
    int32_t l_26[6][6] = {{9L,9L,0x65AB4D25L,(-1L),0x27AB5BF7L,0x477AE271L},{9L,9L,0x65AB4D25L,(-1L),0x27AB5BF7L,0x477AE271L},{9L,9L,0x65AB4D25L,(-1L),0x27AB5BF7L,0x477AE271L},{9L,9L,0x65AB4D25L,(-1L),0x27AB5BF7L,0x477AE271L},{9L,9L,0x65AB4D25L,(-1L),0x27AB5BF7L,0x477AE271L},{9L,9L,0x65AB4D25L,(-1L),0x27AB5BF7L,0x477AE271L}};
    uint64_t l_737[5][3] = {{0xE082764C60094DABL,18446744073709551615UL,0xE082764C60094DABL},{0xE082764C60094DABL,18446744073709551615UL,0xE082764C60094DABL},{0xE082764C60094DABL,18446744073709551615UL,0xE082764C60094DABL},{0xE082764C60094DABL,18446744073709551615UL,0xE082764C60094DABL},{0xE082764C60094DABL,18446744073709551615UL,0xE082764C60094DABL}};
    uint32_t *l_1346 = &p_1740->g_88.f7;
    int64_t l_1360[4][2];
    int8_t l_1406 = 0x5DL;
    int32_t l_1411 = 1L;
    struct S0 **l_1441[5];
    int16_t ***l_1464 = &p_1740->g_657;
    uint32_t l_1508 = 6UL;
    uint64_t l_1519 = 0x0D07E64F86C64485L;
    int32_t l_1561 = 1L;
    int8_t **l_1633 = &p_1740->g_589;
    int32_t l_1641 = (-3L);
    int32_t l_1642[4];
    int32_t l_1645 = 0x634A7F0BL;
    uint32_t l_1649[5][6][7] = {{{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL}},{{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL}},{{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL}},{{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL}},{{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL},{0x1E45AC55L,3UL,4294967295UL,4294967293UL,4294967295UL,4294967289UL,4294967295UL}}};
    int32_t *l_1717 = &p_1740->g_46;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_1360[i][j] = 1L;
    }
    for (i = 0; i < 5; i++)
        l_1441[i] = &p_1740->g_82;
    for (i = 0; i < 4; i++)
        l_1642[i] = 1L;
lbl_1536:
    if (((0x9565E08CCCDDD1D8L >= l_2) < ((p_1740->g_3[1] , (safe_mul_func_int8_t_s_s((p_1740->g_3[1] , ((p_1740->g_3[1] ^ (func_6((func_11(l_2, ((**p_1740->g_657) = (safe_add_func_int16_t_s_s(((1L ^ (-1L)) ^ func_16(((safe_lshift_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(func_22((l_26[0][4] || p_1740->g_27[1]), l_26[2][1], p_1740->g_27[1], p_1740), p_1740->g_27[1])) == 0x37L) , 0x04EDL), 5)) & 0xE9L), p_1740)), l_2))), p_1740) , 1L), p_1740->g_222.f5, p_1740->g_108.f5, l_737[2][1], p_1740) >= p_1740->g_224.f2)) , 0L)), (-1L)))) || l_737[0][0])))
    { /* block id: 628 */
        uint64_t *l_1267 = (void*)0;
        (*p_1740->g_1268) = func_62(l_1267, p_1740);
    }
    else
    { /* block id: 630 */
        int32_t l_1285 = (-1L);
        int32_t l_1313 = 0x4D2863EDL;
        uint16_t *l_1318[7][3] = {{&p_1740->g_342,&p_1740->g_342,&p_1740->g_342},{&p_1740->g_342,&p_1740->g_342,&p_1740->g_342},{&p_1740->g_342,&p_1740->g_342,&p_1740->g_342},{&p_1740->g_342,&p_1740->g_342,&p_1740->g_342},{&p_1740->g_342,&p_1740->g_342,&p_1740->g_342},{&p_1740->g_342,&p_1740->g_342,&p_1740->g_342},{&p_1740->g_342,&p_1740->g_342,&p_1740->g_342}};
        int32_t l_1330 = (-4L);
        int32_t l_1331[5];
        int8_t **l_1347 = &p_1740->g_588;
        uint64_t l_1376 = 1UL;
        uint32_t l_1413 = 6UL;
        uint8_t **l_1421 = (void*)0;
        int i, j;
        for (i = 0; i < 5; i++)
            l_1331[i] = 3L;
        for (p_1740->g_83.f5 = 24; (p_1740->g_83.f5 > 4); p_1740->g_83.f5 = safe_sub_func_uint64_t_u_u(p_1740->g_83.f5, 6))
        { /* block id: 633 */
            uint16_t l_1275 = 65535UL;
            int32_t *l_1286 = &p_1740->g_87.f0;
            int32_t *l_1287 = &p_1740->g_224.f0;
            uint16_t *l_1288 = (void*)0;
            uint16_t *l_1289 = (void*)0;
            uint16_t *l_1290 = &p_1740->g_100[2][2];
            uint64_t *l_1292[8];
            int32_t **l_1296 = &p_1740->g_113[2];
            int32_t l_1329 = 8L;
            int32_t l_1336 = 1L;
            uint64_t l_1358 = 0xE85294F4CB952575L;
            int32_t l_1407 = (-1L);
            int32_t l_1408 = (-6L);
            int32_t l_1409 = 0x28B078F0L;
            int32_t l_1410 = 1L;
            int32_t l_1412 = 0x00659E90L;
            int32_t l_1491 = 0x5FAE69FBL;
            uint8_t l_1511 = 0xA2L;
            int32_t *l_1512 = &l_1330;
            int i;
            for (i = 0; i < 8; i++)
                l_1292[i] = &p_1740->g_27[0];
            (*l_1296) = func_62(((safe_rshift_func_uint8_t_u_s(((**p_1740->g_565) = ((p_1740->g_714[0] &= p_1740->g_59.f5) ^ (p_1740->g_83.f9 & (p_1740->g_224.f3 != ((safe_rshift_func_int8_t_s_u(l_1275, (safe_sub_func_int32_t_s_s(l_1275, p_1740->g_110)))) ^ l_26[0][4]))))), ((safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((safe_unary_minus_func_uint8_t_u((p_1740->g_677[2] <= ((*l_1290) = ((((*l_1287) |= ((*l_1286) = l_1285)) != l_737[0][2]) != p_1740->g_466))))) , &l_737[3][1]) != &p_1740->g_27[1]), 65534UL)), p_1740->g_1291)), 2)) | l_1285))) , l_1292[5]), p_1740);
            for (p_1740->g_222.f9 = 0; (p_1740->g_222.f9 > 59); p_1740->g_222.f9 = safe_add_func_uint64_t_u_u(p_1740->g_222.f9, 8))
            { /* block id: 642 */
                uint32_t **l_1308 = &p_1740->g_429;
                uint32_t ***l_1307[4][8] = {{&l_1308,&l_1308,&l_1308,&l_1308,&l_1308,&l_1308,&l_1308,&l_1308},{&l_1308,&l_1308,&l_1308,&l_1308,&l_1308,&l_1308,&l_1308,&l_1308},{&l_1308,&l_1308,&l_1308,&l_1308,&l_1308,&l_1308,&l_1308,&l_1308},{&l_1308,&l_1308,&l_1308,&l_1308,&l_1308,&l_1308,&l_1308,&l_1308}};
                int32_t l_1321 = (-1L);
                uint8_t *l_1322 = &p_1740->g_141[6];
                int32_t l_1328 = 0x0F7ECA14L;
                int32_t l_1333 = 0x02CD2332L;
                uint64_t l_1339 = 18446744073709551615UL;
                int8_t l_1375 = 0x1CL;
                int16_t *l_1391 = &p_1740->g_1291;
                int32_t *l_1405[1];
                uint32_t *l_1439 = &p_1740->g_128;
                uint32_t **l_1438[3][1][9] = {{{&l_1439,&l_1439,&l_1439,&l_1439,&l_1439,&l_1439,&l_1439,&l_1439,&l_1439}},{{&l_1439,&l_1439,&l_1439,&l_1439,&l_1439,&l_1439,&l_1439,&l_1439,&l_1439}},{{&l_1439,&l_1439,&l_1439,&l_1439,&l_1439,&l_1439,&l_1439,&l_1439,&l_1439}}};
                uint32_t l_1479[10];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1405[i] = (void*)0;
                for (i = 0; i < 10; i++)
                    l_1479[i] = 9UL;
                if ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((*l_1287), ((l_1313 |= (safe_lshift_func_uint16_t_u_s(((&p_1740->g_425 != (p_1740->g_1310 = (p_1740->g_1309 = &p_1740->g_429))) != (safe_mul_func_uint16_t_u_u(p_1740->g_108.f6, (-1L)))), 1))) || ((safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((*l_1286) = ((void*)0 == l_1318[2][0])), (p_1740->g_87.f2 == ((safe_rshift_func_uint8_t_u_u(((*l_1322) = (((**p_1740->g_565) ^= ((l_737[2][1] <= l_1285) && 0x0EED57A5L)) != l_1321)), 6)) == (**p_1740->g_657))))) || p_1740->g_344), (*l_1287))) == l_1313)))), 0x59L)), (*l_1287))))
                { /* block id: 649 */
                    int16_t l_1332 = 5L;
                    int32_t l_1334 = 0L;
                    int32_t l_1335 = 1L;
                    int32_t l_1337 = (-3L);
                    int32_t l_1338 = (-8L);
                    for (p_1740->g_83.f6 = 0; (p_1740->g_83.f6 <= 1); p_1740->g_83.f6 += 1)
                    { /* block id: 652 */
                        int32_t *l_1324 = (void*)0;
                        int32_t *l_1325 = &p_1740->g_87.f0;
                        int32_t *l_1326 = &l_26[0][4];
                        int32_t *l_1327[3][1];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1327[i][j] = (void*)0;
                        }
                        (*l_1286) = (l_1313 != p_1740->g_61.f3);
                        (*p_1740->g_79) = p_1740->g_1323;
                        if (l_26[1][5])
                            continue;
                        ++l_1339;
                    }
                    (*l_1286) &= 0x254A4AD8L;
                    (*l_1296) = (void*)0;
                }
                else
                { /* block id: 660 */
                    uint32_t l_1359 = 0xC76303B6L;
                    int32_t l_1374 = (-2L);
                    if ((~((safe_lshift_func_int16_t_s_s((**p_1740->g_657), ((safe_mod_func_int8_t_s_s(0x1CL, ((((*l_1308) == l_1346) , ((void*)0 != l_1347)) , (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_1321, (((~((*l_1286) = (safe_mod_func_uint64_t_u_u(((l_1358 | (l_1331[3] , 0x6B55DEC6L)) > 0x3349L), (-10L))))) || l_1359) , l_26[0][4]))), (-10L))), 1L)) ^ 255UL), l_1359))))) | 0xDD5774C57447D5E4L))) < l_1360[1][0])))
                    { /* block id: 662 */
                        uint8_t l_1372[3][3] = {{0xACL,0xACL,0xACL},{0xACL,0xACL,0xACL},{0xACL,0xACL,0xACL}};
                        int8_t *l_1373[7][10][3] = {{{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2}},{{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2}},{{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2}},{{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2}},{{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2}},{{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2}},{{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2},{&p_1740->g_458[0],&l_2,&l_2}}};
                        uint32_t *l_1377 = &p_1740->g_110;
                        int i, j, k;
                        l_1333 = (((safe_unary_minus_func_int8_t_s(l_1313)) , 0x7EF6AB0BL) | ((*l_1377) = ((safe_mod_func_int32_t_s_s(0x39573012L, (+0x5DD54481L))) | ((((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((~(l_1374 = (l_1331[2] = ((safe_mod_func_uint32_t_u_u((p_1740->g_90.f0 <= ((safe_sub_func_int32_t_s_s((l_1313 & (((*p_1740->g_1310) != (p_1740->g_87.f3 , l_1346)) == (**p_1740->g_565))), l_1372[2][0])) ^ 0x6AC39ADE65E4ADE5L)), 0x19FA31E8L)) ^ l_1330)))), l_1375)), l_1372[2][0])) , l_737[2][1]) , l_1360[3][0]) , l_1376))));
                    }
                    else
                    { /* block id: 667 */
                        return l_1331[3];
                    }
                    for (p_1740->g_87.f0 = 26; (p_1740->g_87.f0 != (-15)); p_1740->g_87.f0 = safe_sub_func_uint8_t_u_u(p_1740->g_87.f0, 2))
                    { /* block id: 672 */
                        uint32_t l_1382 = 0x421884BFL;
                        int16_t **l_1392 = &l_1391;
                        uint32_t *l_1403 = &p_1740->g_128;
                        int16_t ***l_1404 = &l_1392;
                        (*l_1287) ^= l_1359;
                        l_1374 = l_26[1][3];
                        l_1328 |= ((safe_div_func_uint64_t_u_u(((l_1382 != (((**p_1740->g_657) <= p_1740->g_1323.f2) || (safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(l_737[2][1], ((p_1740->g_27[0]++) & (((safe_mul_func_uint8_t_u_u(0x5AL, 1UL)) ^ (((*l_1392) = ((*p_1740->g_657) = l_1391)) == &p_1740->g_1291)) >= ((void*)0 != (**p_1740->g_1186)))))) || (**p_1740->g_657)), 0xADE71341L)))) < l_1339), 18446744073709551608UL)) < l_1331[3]);
                        (*l_1404) = (((((l_1321 == p_1740->g_1393[2][0]) > (((p_1740->g_106 = (l_1374 , l_1331[4])) , (void*)0) != p_1740->g_1394)) ^ ((safe_unary_minus_func_uint32_t_u((safe_div_func_uint8_t_u_u(l_1333, ((((((p_1740->g_27[1] = (safe_sub_func_uint32_t_u_u((p_1740->g_110 = ((*l_1403) = (safe_div_func_uint16_t_u_u(p_1740->g_80.f5, l_1330)))), l_1333))) > p_1740->g_714[0]) > 0L) & 0x08DB3FC8L) && l_1339) , 0x1FL))))) != p_1740->g_224.f2)) && l_1382) , (void*)0);
                    }
                    return l_1374;
                }
                l_1413++;
                for (p_1740->g_106 = 0; (p_1740->g_106 != 1); p_1740->g_106 = safe_add_func_int8_t_s_s(p_1740->g_106, 7))
                { /* block id: 690 */
                    int32_t l_1420 = 7L;
                    for (p_1740->g_61.f7 = 13; (p_1740->g_61.f7 <= 45); p_1740->g_61.f7++)
                    { /* block id: 693 */
                        uint8_t ***l_1423 = &p_1740->g_565;
                        (*l_1286) ^= l_1420;
                        (*l_1423) = l_1421;
                    }
                    if ((safe_lshift_func_uint16_t_u_s(((*l_1290) = (((p_1740->g_61.f6 | ((&p_1740->g_100[2][7] != &l_1275) != l_1406)) <= (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(l_1376, 1)) && (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((p_1740->g_1266[8] , (&p_1740->g_452 == &p_1740->g_458[0])), 4)), 5))), p_1740->g_83.f7))) || l_1360[1][1])), 6)))
                    { /* block id: 698 */
                        return l_1330;
                    }
                    else
                    { /* block id: 700 */
                        return l_1420;
                    }
                }
            }
        }
        for (p_1740->g_224.f2 = 6; (p_1740->g_224.f2 >= 0); p_1740->g_224.f2 -= 1)
        { /* block id: 757 */
            int i;
            if (p_1740->g_141[p_1740->g_224.f2])
                break;
        }
    }
lbl_1720:
    for (p_1740->g_108.f6 = 22; (p_1740->g_108.f6 >= (-19)); --p_1740->g_108.f6)
    { /* block id: 763 */
        uint32_t l_1515 = 0x11AD00DEL;
        return l_1515;
    }
    for (p_1740->g_466 = 0; (p_1740->g_466 == (-4)); p_1740->g_466 = safe_sub_func_int64_t_s_s(p_1740->g_466, 4))
    { /* block id: 768 */
        int32_t *l_1518[7];
        uint64_t *l_1534 = &p_1740->g_895;
        int64_t l_1557 = 0x33EDB7B8A7AD108CL;
        uint64_t l_1632 = 5UL;
        uint32_t l_1646 = 0x3D53C8BEL;
        int32_t *l_1654 = &l_1642[1];
        int8_t l_1659 = 0x29L;
        uint32_t l_1662 = 9UL;
        uint8_t l_1669 = 0x27L;
        struct S0 *l_1707 = &p_1740->g_90;
        struct S0 ***l_1735 = &l_1441[3];
        struct S0 ****l_1736 = (void*)0;
        int8_t *l_1739[1];
        int i;
        for (i = 0; i < 7; i++)
            l_1518[i] = &p_1740->g_83.f0;
        for (i = 0; i < 1; i++)
            l_1739[i] = &p_1740->g_458[0];
        ++l_1519;
        if ((*p_1740->g_1394))
        { /* block id: 770 */
            int32_t l_1530 = 0x125688CBL;
            uint32_t l_1535[8];
            int i;
            for (i = 0; i < 8; i++)
                l_1535[i] = 4294967287UL;
            for (p_1740->g_224.f0 = 0; (p_1740->g_224.f0 >= (-1)); --p_1740->g_224.f0)
            { /* block id: 773 */
                uint64_t l_1533 = 4UL;
                for (p_1740->g_108.f5 = 0; p_1740->g_108.f5 < 5; p_1740->g_108.f5 += 1)
                {
                    l_1441[p_1740->g_108.f5] = &p_1740->g_89;
                }
                l_26[4][4] = ((safe_mul_func_int16_t_s_s((0x7F5BL == ((*p_1740->g_658) == (safe_mul_func_int8_t_s_s((l_1411 <= (safe_sub_func_int64_t_s_s((l_1530 != 0x4AC17447530E02B0L), (safe_mod_func_int64_t_s_s(l_1533, p_1740->g_1266[7]))))), ((void*)0 != l_1534))))), l_737[2][2])) && l_1535[4]);
            }
            if (p_1740->g_46)
                goto lbl_1536;
        }
        else
        { /* block id: 778 */
            uint64_t l_1539 = 0UL;
            uint16_t *l_1542 = &p_1740->g_100[0][1];
            struct S0 *l_1547 = (void*)0;
            int64_t *l_1548[9] = {&p_1740->g_714[0],&p_1740->g_714[0],&p_1740->g_714[0],&p_1740->g_714[0],&p_1740->g_714[0],&p_1740->g_714[0],&p_1740->g_714[0],&p_1740->g_714[0],&p_1740->g_714[0]};
            uint8_t l_1549 = 252UL;
            int32_t l_1563 = 0x42BC74B2L;
            int32_t l_1565 = 0x05C256EFL;
            uint16_t l_1566[6] = {0xB575L,0xB575L,0xB575L,0xB575L,0xB575L,0xB575L};
            int32_t l_1640[2];
            int8_t *l_1685[7][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int16_t l_1711 = 0x650FL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1640[i] = 1L;
            if ((safe_mul_func_uint16_t_u_u(l_1539, ((((safe_add_func_uint32_t_u_u((*p_1740->g_1440), (l_1411 == l_1539))) && (((((*l_1542) = l_1539) && (((+(safe_mul_func_uint16_t_u_u((((((((safe_mul_func_int16_t_s_s((((l_1539 >= l_2) >= (l_1411 &= ((void*)0 == l_1547))) < l_737[4][2]), (**p_1740->g_657))) > l_1539) != l_26[0][4]) , l_2) | 5UL) , p_1740->g_88.f1) > l_1539), p_1740->g_224.f0))) & l_1549) <= (-5L))) == l_1549) & l_26[2][5])) != (*p_1740->g_1440)) != p_1740->g_1550))))
            { /* block id: 781 */
                int32_t *l_1555 = &p_1740->g_88.f0;
                int32_t l_1558 = 0x14ACE55FL;
                int32_t l_1559 = 0x60E781ACL;
                int32_t l_1562 = 8L;
                int32_t l_1564 = (-2L);
                for (p_1740->g_85.f9 = (-13); (p_1740->g_85.f9 < 5); p_1740->g_85.f9 = safe_add_func_uint32_t_u_u(p_1740->g_85.f9, 6))
                { /* block id: 784 */
                    int32_t *l_1556 = &p_1740->g_88.f0;
                    int32_t l_1560 = 0x76A71461L;
                    for (p_1740->g_83.f2 = (-14); (p_1740->g_83.f2 != (-16)); p_1740->g_83.f2 = safe_sub_func_int32_t_s_s(p_1740->g_83.f2, 7))
                    { /* block id: 787 */
                        l_1556 = l_1555;
                        return l_1557;
                    }
                    for (p_1740->g_59.f7 = 0; (p_1740->g_59.f7 <= 4); p_1740->g_59.f7 += 1)
                    { /* block id: 793 */
                        int i;
                        --l_1566[0];
                        (*p_1740->g_79) = p_1740->g_1569[2][2][1];
                        if (l_1411)
                            continue;
                    }
                }
            }
            else
            { /* block id: 799 */
                uint32_t ***l_1572 = &p_1740->g_1309;
                uint32_t ***l_1585 = (void*)0;
                int32_t l_1588 = (-5L);
                int32_t *l_1612 = &p_1740->g_85.f0;
                int16_t ***l_1627[5][6][1] = {{{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657}},{{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657}},{{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657}},{{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657}},{{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657},{&p_1740->g_657}}};
                int16_t l_1636 = (-7L);
                int16_t l_1638 = 0x3BC6L;
                int32_t l_1643 = (-1L);
                int32_t l_1644 = (-1L);
                uint8_t l_1656 = 255UL;
                int i, j, k;
                for (p_1740->g_845 = 0; (p_1740->g_845 <= 4); ++p_1740->g_845)
                { /* block id: 802 */
                    uint16_t l_1573 = 0x0F82L;
                    int16_t l_1584 = 0x3099L;
                    uint32_t *l_1597 = &p_1740->g_677[2];
                    int32_t l_1603 = 1L;
                    int32_t l_1604 = 0x1C3FC36CL;
                    int32_t l_1605 = 0L;
                    uint32_t l_1606 = 0x4CB42806L;
                    l_1565 = (l_1572 != l_1572);
                    if (l_1549)
                        break;
                    if (((-10L) & l_1573))
                    { /* block id: 805 */
                        int32_t **l_1590 = &p_1740->g_113[4];
                        uint32_t *l_1599 = (void*)0;
                        uint32_t **l_1598 = &l_1599;
                        uint32_t *l_1601[3];
                        uint32_t **l_1600[8] = {&l_1601[2],&l_1597,&l_1601[2],&l_1601[2],&l_1597,&l_1601[2],&l_1601[2],&l_1597};
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1601[i] = &p_1740->g_677[1];
                        (*l_1590) = func_62(func_64((safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(0x8D21DCBBL, (safe_lshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(0x5F5FL, (((*p_1740->g_79) , (l_1584 , l_1585)) == (void*)0))) | 65531UL), l_2)), 4)))), (safe_sub_func_int16_t_s_s((**p_1740->g_657), l_1588)))), &p_1740->g_27[0], l_1588, &p_1740->g_27[1], p_1740), p_1740);
                        (*p_1740->g_1394) = (l_1588 && (safe_div_func_int64_t_s_s(0x51BC084277E35A3DL, ((safe_lshift_func_int16_t_s_u((-2L), 15)) && (((*p_1740->g_829) = l_1597) == (p_1740->g_1602 = ((*l_1598) = func_62(&p_1740->g_27[1], p_1740))))))));
                    }
                    else
                    { /* block id: 811 */
                        l_1606--;
                    }
                }
                for (p_1740->g_108.f0 = 0; (p_1740->g_108.f0 >= (-30)); p_1740->g_108.f0 = safe_sub_func_uint8_t_u_u(p_1740->g_108.f0, 3))
                { /* block id: 817 */
                    int32_t *l_1611 = (void*)0;
                    int8_t l_1630[6][9][4] = {{{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)}},{{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)}},{{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)}},{{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)}},{{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)}},{{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)},{0x16L,0x78L,0x6DL,(-7L)}}};
                    int32_t l_1635 = 0x3E5CC270L;
                    int32_t l_1637 = 0x02285AE1L;
                    int32_t l_1639[7][5][7] = {{{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL}},{{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL}},{{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL}},{{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL}},{{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL}},{{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL}},{{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL},{0x3BF823ACL,8L,0x37B3E26AL,0x57D54E7BL,0x37B3E26AL,8L,0x3BF823ACL}}};
                    int i, j, k;
                    l_1612 = l_1611;
                    l_1588 |= (((*l_1534) = (safe_sub_func_int64_t_s_s((l_1549 | l_1566[0]), (((**p_1740->g_565) = (safe_mod_func_uint32_t_u_u(l_26[3][4], (safe_mod_func_uint64_t_u_u(l_1406, 0x139E4C4B179CFCA2L))))) , ((((p_1740->g_27[1]++) != ((safe_mod_func_uint32_t_u_u((*p_1740->g_1440), (safe_add_func_int8_t_s_s(((&p_1740->g_657 == l_1627[1][0][0]) , ((safe_mul_func_uint16_t_u_u((((p_1740->g_112 < 4L) == l_1630[3][7][1]) ^ l_1539), p_1740->g_1631)) >= p_1740->g_100[2][3])), l_1632)))) != p_1740->g_1446[0][1].f2)) ^ 3UL) & 65532UL))))) , (-1L));
                    (*p_1740->g_89) = (((void*)0 == l_1633) , p_1740->g_1634[6]);
                    l_1646--;
                }
                l_1649[0][3][4]++;
                for (p_1740->g_224.f6 = 23; (p_1740->g_224.f6 != 26); p_1740->g_224.f6 = safe_add_func_int16_t_s_s(p_1740->g_224.f6, 3))
                { /* block id: 829 */
                    int32_t **l_1655[7] = {&l_1654,&l_1518[6],&l_1654,&l_1654,&l_1518[6],&l_1654,&l_1654};
                    int i;
                    l_1654 = l_1654;
                    ++l_1656;
                    for (p_1740->g_222.f2 = 4; (p_1740->g_222.f2 >= 0); p_1740->g_222.f2 -= 1)
                    { /* block id: 834 */
                        int32_t l_1660 = 0x175CEFC1L;
                        int8_t l_1661 = (-1L);
                        int32_t l_1665 = (-1L);
                        int8_t l_1666 = 0x33L;
                        int32_t l_1667 = 0x73542DEFL;
                        int32_t l_1668 = 0x65E8AAE9L;
                        int i, j, k;
                        if (l_1649[p_1740->g_222.f2][(p_1740->g_222.f2 + 1)][p_1740->g_222.f2])
                            break;
                        l_1662++;
                        (*p_1740->g_1394) = ((*l_1654) &= (((**p_1740->g_565) = 0xDDL) >= l_1649[p_1740->g_222.f2][p_1740->g_222.f2][p_1740->g_222.f2]));
                        l_1669++;
                    }
                    return l_1539;
                }
            }
            (*p_1740->g_1394) = ((safe_rshift_func_int8_t_s_u(l_1640[1], 4)) , (safe_unary_minus_func_int64_t_s(p_1740->g_452)));
            if (((*l_1654) = ((safe_div_func_uint16_t_u_u((((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(65526UL, (((4294967290UL || (((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s(((l_1685[0][0][1] != ((p_1740->g_1099 = l_1549) , &p_1740->g_452)) != (p_1740->g_224.f6 <= (safe_rshift_func_uint16_t_u_u((+l_1642[2]), ((*l_1654) != ((safe_mod_func_uint16_t_u_u((l_1642[3] , p_1740->g_45[5][0]), (*p_1740->g_658))) != p_1740->g_90.f9)))))), l_1360[1][0])) >= 1L), (*l_1654))) ^ l_737[3][0]) < (*p_1740->g_658))) , 0xD5L) ^ (-5L)))), l_1640[1])) , 0UL) | l_1640[0]) > 1L) && (**p_1740->g_565)), 1L)) , l_26[0][4])))
            { /* block id: 848 */
                int32_t **l_1690 = &p_1740->g_113[4];
                (*l_1690) = func_62(&p_1740->g_27[1], p_1740);
                return l_1411;
            }
            else
            { /* block id: 851 */
                uint32_t l_1712[5] = {0xD98C0642L,0xD98C0642L,0xD98C0642L,0xD98C0642L,0xD98C0642L};
                uint64_t *l_1713[2];
                int32_t *l_1718 = &p_1740->g_224.f0;
                int i;
                for (i = 0; i < 2; i++)
                    l_1713[i] = &l_1539;
                (*p_1740->g_1691) = &l_26[0][4];
                if (((*l_1654) = l_1640[1]))
                { /* block id: 854 */
                    int32_t *l_1716 = &p_1740->g_46;
                    for (l_1659 = 5; (l_1659 >= (-5)); --l_1659)
                    { /* block id: 857 */
                        int32_t l_1702 = (-10L);
                        int16_t *l_1710 = &p_1740->g_1291;
                        l_1563 &= (((safe_mod_func_int16_t_s_s(((*l_1710) &= ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(((((((**p_1740->g_657) & (((((void*)0 != l_1346) > l_1539) ^ (((safe_mul_func_uint16_t_u_u(l_1702, (*p_1740->g_658))) , (safe_mod_func_int16_t_s_s((((safe_mod_func_int64_t_s_s(((void*)0 != l_1707), ((l_1642[3] = ((safe_mul_func_int8_t_s_s((l_1702 != l_1645), p_1740->g_3[1])) & (-10L))) && l_2))) < (**p_1740->g_565)) , (*p_1740->g_658)), 1UL))) <= p_1740->g_1569[2][2][1].f9)) <= 0xED8CL)) == p_1740->g_90.f6) != p_1740->g_88.f7) , 0UL) > l_1640[0]), l_1702)), 6)) | 0xDC7982520E1E4B74L)), 0x63BBL)) , (void*)0) == (void*)0);
                        (*l_1654) ^= l_1711;
                        if (l_1712[4])
                            continue;
                    }
                    (*l_1654) &= ((((7L & l_1566[0]) , func_62(l_1713[0], p_1740)) != l_1518[2]) || l_1712[4]);
                    for (p_1740->g_222.f0 = 26; (p_1740->g_222.f0 >= (-6)); p_1740->g_222.f0--)
                    { /* block id: 867 */
                        (*p_1740->g_89) = (*p_1740->g_89);
                        l_1717 = l_1716;
                        (*p_1740->g_1719) = l_1718;
                        if (p_1740->g_88.f2)
                            goto lbl_1720;
                    }
                }
                else
                { /* block id: 873 */
                    (*p_1740->g_1721) = &p_1740->g_1149[0][0];
                    for (p_1740->g_222.f9 = 0; (p_1740->g_222.f9 >= 15); p_1740->g_222.f9 = safe_add_func_uint8_t_u_u(p_1740->g_222.f9, 6))
                    { /* block id: 877 */
                        int32_t *l_1724 = &l_1640[0];
                        int32_t **l_1725 = &l_1654;
                        (*p_1740->g_82) = (*l_1707);
                        (*l_1725) = l_1724;
                    }
                }
            }
        }
        for (p_1740->g_90.f9 = 0; (p_1740->g_90.f9 == 22); p_1740->g_90.f9 = safe_add_func_int64_t_s_s(p_1740->g_90.f9, 4))
        { /* block id: 886 */
            int8_t l_1728 = (-1L);
            l_1728 = (*l_1717);
        }
        l_1642[1] |= ((--(*l_1534)) , ((safe_rshift_func_uint8_t_u_s(((**p_1740->g_565) = ((safe_add_func_uint32_t_u_u((*p_1740->g_1440), (*l_1717))) , (*l_1717))), ((&p_1740->g_488 == (p_1740->g_1737 = l_1735)) , (0x81L && (((***l_1464) = (*l_1717)) && ((*l_1717) < (p_1740->g_458[1] = (*l_1717)))))))) >= 0L));
    }
    return (*l_1717);
}


/* ------------------------------------------ */
/* 
 * reads : p_1740->g_565 p_1740->g_525 p_1740->g_526 p_1740->g_61.f0 p_1740->g_80.f2 p_1740->g_80.f9 p_1740->g_45 p_1740->g_88.f9 p_1740->g_658 p_1740->g_88.f6 p_1740->g_46 p_1740->g_224.f2 p_1740->g_87.f0 p_1740->g_458 p_1740->g_829 p_1740->g_222.f6 p_1740->g_845 p_1740->g_88.f5 p_1740->g_224.f9 p_1740->g_224.f7 p_1740->g_425 p_1740->g_90.f0 p_1740->g_108.f2 p_1740->g_108.f9 p_1740->g_222.f9 p_1740->g_80.f0 p_1740->g_657 p_1740->g_80.f5 p_1740->g_429 p_1740->g_145 p_1740->g_895 p_1740->g_128 p_1740->g_59.f6 p_1740->g_222.f5 p_1740->g_677 p_1740->g_110 p_1740->g_90.f2 p_1740->g_108.f0 p_1740->g_342 p_1740->g_224.f6 p_1740->g_344 p_1740->g_88.f7 p_1740->g_59.f5 p_1740->g_141 p_1740->g_85.f0 p_1740->g_87.f7 p_1740->g_1114 p_1740->g_1148 p_1740->g_89 p_1740->g_1186 p_1740->g_106 p_1740->g_224.f5 p_1740->g_1187 p_1740->g_1188 p_1740->g_54 p_1740->g_466 p_1740->g_61.f7 p_1740->g_90.f9
 * writes: p_1740->g_526 p_1740->g_61.f0 p_1740->g_45 p_1740->g_90.f9 p_1740->g_46 p_1740->g_83.f9 p_1740->g_110 p_1740->g_106 p_1740->g_222.f2 p_1740->g_87.f0 p_1740->g_113 p_1740->g_80.f9 p_1740->g_829 p_1740->g_428 p_1740->g_429 p_1740->g_85.f2 p_1740->g_108.f0 p_1740->g_222.f9 p_1740->g_525 p_1740->g_145 p_1740->g_895 p_1740->g_845 p_1740->g_27 p_1740->g_87.f6 p_1740->g_88.f6 p_1740->g_59.f9 p_1740->g_458 p_1740->g_141 p_1740->g_658 p_1740->g_342 p_1740->g_100 p_1740->g_59.f5 p_1740->g_87.f9 p_1740->g_466 p_1740->g_452 p_1740->g_90.f7 p_1740->g_1099 p_1740->g_1114 p_1740->g_82 p_1740->g_224.f5 p_1740->g_54 p_1740->g_59.f6 p_1740->g_61.f7 p_1740->g_1149
 */
uint16_t  func_6(int32_t  p_7, uint32_t  p_8, uint64_t  p_9, uint64_t  p_10, struct S1 * p_1740)
{ /* block id: 372 */
    int16_t *l_740 = &p_1740->g_87.f6;
    int32_t l_759 = 1L;
    int32_t l_764[7];
    uint32_t l_765 = 1UL;
    int32_t *l_766 = &p_1740->g_61.f0;
    int32_t *l_767 = &p_1740->g_45[5][0];
    uint32_t l_791 = 0UL;
    uint32_t *l_828[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t **l_827 = &l_828[3];
    uint64_t l_844 = 0UL;
    uint64_t l_846 = 0x2BD82EF8A903C11AL;
    uint8_t *l_886 = &p_1740->g_141[4];
    uint8_t ***l_1020 = (void*)0;
    uint8_t ***l_1022[1][7][5] = {{{&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565,&p_1740->g_565}}};
    int64_t l_1055 = 0x2C7D6AFE09899087L;
    uint32_t l_1090 = 1UL;
    int8_t **l_1184 = &p_1740->g_588;
    uint8_t l_1261 = 0UL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_764[i] = 0x3C42772EL;
lbl_1109:
    (*l_767) = (0x7006L == (safe_add_func_int64_t_s_s((((void*)0 == l_740) , (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((((((((*l_766) ^= (p_10 ^ (~((p_9 , 0x169FFA41L) , (safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((p_7 , ((l_759 = ((++(**p_1740->g_565)) >= ((l_759 || (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((l_759 >= p_9), p_7)) || l_759), 5L))) , l_759))) > l_764[4])), l_764[4])) , 6L), l_764[0])), l_764[4])) >= p_10) & l_764[4]), 5)), l_765)), 2)))))) ^ p_1740->g_80.f2) != (-1L)) <= 0UL) < (-1L)) <= 1UL) , p_10), l_765)), 2))), p_1740->g_80.f9)));
    for (p_1740->g_90.f9 = 0; (p_1740->g_90.f9 <= 0); p_1740->g_90.f9 += 1)
    { /* block id: 379 */
        uint8_t l_772 = 0UL;
        uint32_t **l_777 = (void*)0;
        uint32_t *l_779 = &p_1740->g_677[1];
        uint32_t **l_778 = &l_779;
        int32_t *l_792 = &p_1740->g_46;
        int32_t *l_793 = &p_1740->g_87.f0;
        int32_t *l_794 = &p_1740->g_222.f0;
        int32_t *l_795 = &p_1740->g_83.f0;
        int32_t *l_796[9][8][3] = {{{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0}},{{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0}},{{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0}},{{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0}},{{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0}},{{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0}},{{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0}},{{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0}},{{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0},{&p_1740->g_85.f0,&p_1740->g_88.f0,(void*)0}}};
        uint32_t l_797 = 0UL;
        int i, j, k;
        (*l_792) &= (((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((*l_766) , p_7) , ((((**p_1740->g_565) = l_772) && (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((((0x7505L ^ (((*l_778) = (void*)0) == (((safe_unary_minus_func_int16_t_s((((((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((p_8 , ((safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((((-6L) != (p_10 != 0x3B1BA398L)) == l_772), (*l_767))), 18446744073709551609UL)), 4)) ^ 0x4BC7L)), (*l_767))), 7)) , l_791) == 0x1CL) && (*l_767)) & 0x0AL))) <= 0x40E964D08754C70BL) , l_766))) >= p_1740->g_88.f9) | 0x71L), p_9)), (-1L)))) ^ p_9)), (*p_1740->g_658))), 9)) < 7L) <= p_7);
        --l_797;
        if ((*l_767))
            continue;
        for (p_1740->g_83.f9 = 0; (p_1740->g_83.f9 <= 0); p_1740->g_83.f9 += 1)
        { /* block id: 387 */
            int32_t **l_800 = &l_795;
            (*l_800) = &p_1740->g_45[5][0];
            l_794 = (void*)0;
            for (p_1740->g_110 = 0; (p_1740->g_110 <= 0); p_1740->g_110 += 1)
            { /* block id: 392 */
                for (p_1740->g_106 = 0; (p_1740->g_106 <= 0); p_1740->g_106 += 1)
                { /* block id: 395 */
                    (*l_800) = &p_1740->g_45[4][5];
                }
                (*l_800) = (void*)0;
            }
        }
        for (p_1740->g_222.f2 = 0; (p_1740->g_222.f2 <= 0); p_1740->g_222.f2 += 1)
        { /* block id: 403 */
            uint64_t l_803 = 1UL;
            int32_t l_813[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
            int i;
            (*l_793) ^= (((p_7 < (safe_rshift_func_int16_t_s_s((*p_1740->g_658), l_803))) != ((l_813[6] = ((((safe_div_func_uint8_t_u_u((((safe_unary_minus_func_int8_t_s(((0xB0D1E242L && ((*l_792) = p_7)) == p_8))) || (safe_lshift_func_uint8_t_u_u(((*p_1740->g_658) > 65535UL), (((safe_div_func_uint64_t_u_u(((~l_803) < 0x29859114CD0BAFB5L), l_803)) || 0L) && p_10)))) & p_7), p_10)) < 0x16FBE49CB712E57AL) == p_1740->g_224.f2) & p_10)) && 0L)) , l_813[6]);
            for (p_1740->g_46 = 0; (p_1740->g_46 <= 0); p_1740->g_46 += 1)
            { /* block id: 409 */
                int32_t **l_814 = &p_1740->g_113[4];
                (*l_814) = &p_7;
            }
        }
    }
    for (p_1740->g_80.f9 = (-6); (p_1740->g_80.f9 < 20); p_1740->g_80.f9++)
    { /* block id: 416 */
        uint32_t ***l_831 = (void*)0;
        uint32_t ***l_832 = &p_1740->g_829;
        uint32_t ***l_833 = (void*)0;
        uint32_t **l_835[8] = {&l_828[3],&l_828[3],&l_828[3],&l_828[3],&l_828[3],&l_828[3],&l_828[3],&l_828[3]};
        uint32_t ***l_834 = &l_835[0];
        int32_t l_852 = 0x0427B9CCL;
        int32_t l_864 = 0x2CFB068AL;
        int32_t l_865 = 0x45754023L;
        int32_t l_866 = (-5L);
        int32_t l_868 = (-8L);
        int32_t l_870 = 0x0E510425L;
        int32_t l_871 = 5L;
        uint16_t l_896 = 1UL;
        uint64_t *l_914 = &l_846;
        int16_t *l_1007 = &p_1740->g_59.f6;
        uint16_t l_1036 = 65535UL;
        uint32_t *l_1039 = (void*)0;
        uint64_t l_1054[9][4][4] = {{{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL}},{{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL}},{{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL}},{{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL}},{{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL}},{{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL}},{{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL}},{{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL}},{{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL},{7UL,18446744073709551612UL,18446744073709551611UL,2UL}}};
        uint16_t l_1081 = 0x0564L;
        uint8_t *l_1082[7][1][10] = {{{&p_1740->g_141[0],(void*)0,&p_1740->g_845,&p_1740->g_141[4],(void*)0,&p_1740->g_141[4],&p_1740->g_845,(void*)0,&p_1740->g_141[0],&p_1740->g_141[0]}},{{&p_1740->g_141[0],(void*)0,&p_1740->g_845,&p_1740->g_141[4],(void*)0,&p_1740->g_141[4],&p_1740->g_845,(void*)0,&p_1740->g_141[0],&p_1740->g_141[0]}},{{&p_1740->g_141[0],(void*)0,&p_1740->g_845,&p_1740->g_141[4],(void*)0,&p_1740->g_141[4],&p_1740->g_845,(void*)0,&p_1740->g_141[0],&p_1740->g_141[0]}},{{&p_1740->g_141[0],(void*)0,&p_1740->g_845,&p_1740->g_141[4],(void*)0,&p_1740->g_141[4],&p_1740->g_845,(void*)0,&p_1740->g_141[0],&p_1740->g_141[0]}},{{&p_1740->g_141[0],(void*)0,&p_1740->g_845,&p_1740->g_141[4],(void*)0,&p_1740->g_141[4],&p_1740->g_845,(void*)0,&p_1740->g_141[0],&p_1740->g_141[0]}},{{&p_1740->g_141[0],(void*)0,&p_1740->g_845,&p_1740->g_141[4],(void*)0,&p_1740->g_141[4],&p_1740->g_845,(void*)0,&p_1740->g_141[0],&p_1740->g_141[0]}},{{&p_1740->g_141[0],(void*)0,&p_1740->g_845,&p_1740->g_141[4],(void*)0,&p_1740->g_141[4],&p_1740->g_845,(void*)0,&p_1740->g_141[0],&p_1740->g_141[0]}}};
        int16_t ***l_1209 = &p_1740->g_657;
        int16_t l_1227 = 0L;
        int i, j, k;
        if (((safe_mul_func_int8_t_s_s((((((safe_mod_func_int16_t_s_s((*l_767), (safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((p_1740->g_458[1] && ((((p_7 ^ (l_827 != ((*l_834) = ((*l_832) = p_1740->g_829)))) > (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(l_844, p_10)) < (*p_1740->g_658)), (0x1D3FL != p_7))), 0x53L)), (*l_767)))) | p_8) == p_1740->g_222.f6)) < 0UL) >= p_1740->g_845), (*l_766))), p_8)))) != (-1L)) >= p_1740->g_88.f5) & 18446744073709551606UL) == l_846), 0x16L)) & p_10))
        { /* block id: 419 */
            int32_t **l_847[1][5];
            uint64_t l_875[8] = {0x52BF40C1BDD10E72L,18446744073709551615UL,0x52BF40C1BDD10E72L,0x52BF40C1BDD10E72L,18446744073709551615UL,0x52BF40C1BDD10E72L,0x52BF40C1BDD10E72L,18446744073709551615UL};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_847[i][j] = &p_1740->g_113[4];
            }
            (*l_766) ^= (0x42FC0CF1F180B823L != ((p_8 , func_62(&l_846, p_1740)) != (void*)0));
            p_1740->g_113[5] = (void*)0;
            for (p_1740->g_85.f2 = 6; (p_1740->g_85.f2 != 3); --p_1740->g_85.f2)
            { /* block id: 424 */
                int64_t l_854 = 0x636BEA7B3AF2D39DL;
                int32_t l_855 = 0L;
                int32_t l_858 = 0L;
                int32_t l_859 = 0x473B1990L;
                int32_t l_861[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_861[i] = 0x6A709B8EL;
                for (p_1740->g_108.f0 = 0; (p_1740->g_108.f0 <= 10); p_1740->g_108.f0++)
                { /* block id: 427 */
                    uint64_t l_853 = 0x7D090420AD4B420EL;
                    int32_t l_856 = 0x43B868E0L;
                    int32_t l_857 = (-6L);
                    int32_t l_860 = 0x4AC3584EL;
                    int32_t l_862 = (-1L);
                    int32_t l_863 = (-1L);
                    int32_t l_867 = 0x1B216E74L;
                    int32_t l_869 = 0x1B00D9C7L;
                    uint32_t l_872[7] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                    int i;
                    if (l_852)
                        break;
                    if (l_853)
                        break;
                    --l_872[2];
                    for (p_1740->g_222.f9 = 0; (p_1740->g_222.f9 <= 6); p_1740->g_222.f9 += 1)
                    { /* block id: 433 */
                        int i;
                        return l_764[p_1740->g_222.f9];
                    }
                }
                return p_1740->g_80.f0;
            }
            p_7 = l_875[1];
        }
        else
        { /* block id: 440 */
            int32_t l_893[1];
            uint64_t *l_894 = &p_1740->g_895;
            int32_t *l_900 = (void*)0;
            int16_t *l_1008 = (void*)0;
            int16_t ***l_1141 = &p_1740->g_657;
            int8_t **l_1176 = (void*)0;
            int32_t l_1183 = 0x0CEC8CADL;
            int i;
            for (i = 0; i < 1; i++)
                l_893[i] = 0x2C4079DAL;
            for (l_871 = 0; (l_871 != (-11)); l_871 = safe_sub_func_int8_t_s_s(l_871, 4))
            { /* block id: 443 */
                (*l_766) = (safe_add_func_uint64_t_u_u(p_7, 0xB60ABAF94BFF9707L));
            }
            if ((!(((*l_894) ^= ((safe_div_func_uint32_t_u_u(p_8, (safe_rshift_func_uint8_t_u_u(l_865, (safe_lshift_func_int16_t_s_s((**p_1740->g_657), (l_886 == ((*p_1740->g_565) = ((p_7 <= 0x0DB9L) , (*p_1740->g_565)))))))))) < (((p_9 & ((safe_div_func_uint64_t_u_u((((*p_1740->g_429) ^= (safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((p_1740->g_80.f5 <= 0L) == p_8), l_893[0])), p_10))) , 0x8C2663EC61CA23C9L), p_8)) , p_8)) <= l_893[0]) > (*p_1740->g_658)))) , l_896)))
            { /* block id: 449 */
                int32_t l_968 = 0x4D789FC8L;
                int32_t l_970[4][3][8] = {{{2L,0x1621A627L,3L,0x4A1AB970L,3L,0x1621A627L,2L,0x15825FABL},{2L,0x1621A627L,3L,0x4A1AB970L,3L,0x1621A627L,2L,0x15825FABL},{2L,0x1621A627L,3L,0x4A1AB970L,3L,0x1621A627L,2L,0x15825FABL}},{{2L,0x1621A627L,3L,0x4A1AB970L,3L,0x1621A627L,2L,0x15825FABL},{2L,0x1621A627L,3L,0x4A1AB970L,3L,0x1621A627L,2L,0x15825FABL},{2L,0x1621A627L,3L,0x4A1AB970L,3L,0x1621A627L,2L,0x15825FABL}},{{2L,0x1621A627L,3L,0x4A1AB970L,3L,0x1621A627L,2L,0x15825FABL},{2L,0x1621A627L,3L,0x4A1AB970L,3L,0x1621A627L,2L,0x15825FABL},{2L,0x1621A627L,3L,0x4A1AB970L,3L,0x1621A627L,2L,0x15825FABL}},{{2L,0x1621A627L,3L,0x4A1AB970L,3L,0x1621A627L,2L,0x15825FABL},{2L,0x1621A627L,3L,0x4A1AB970L,3L,0x1621A627L,2L,0x15825FABL},{2L,0x1621A627L,3L,0x4A1AB970L,3L,0x1621A627L,2L,0x15825FABL}}};
                uint64_t l_971 = 0xDB1E97AF1A5CC60FL;
                int i, j, k;
                if (l_893[0])
                    break;
                for (p_1740->g_108.f0 = 0; (p_1740->g_108.f0 <= (-11)); p_1740->g_108.f0 = safe_sub_func_int16_t_s_s(p_1740->g_108.f0, 4))
                { /* block id: 453 */
                    int32_t **l_899[10] = {&p_1740->g_113[4],(void*)0,&p_1740->g_113[4],&p_1740->g_113[4],(void*)0,&p_1740->g_113[4],&p_1740->g_113[4],(void*)0,&p_1740->g_113[4],&p_1740->g_113[4]};
                    int i;
                    l_900 = (l_893[0] , &p_1740->g_46);
                    for (p_7 = 7; (p_7 >= 0); p_7 -= 1)
                    { /* block id: 457 */
                        int i;
                        l_900 = &p_7;
                        (*l_767) ^= p_10;
                    }
                    for (p_1740->g_845 = 0; (p_1740->g_845 == 4); p_1740->g_845 = safe_add_func_int16_t_s_s(p_1740->g_845, 3))
                    { /* block id: 463 */
                        uint64_t *l_905[8] = {&p_1740->g_54,&p_1740->g_54,&p_1740->g_54,&p_1740->g_54,&p_1740->g_54,&p_1740->g_54,&p_1740->g_54,&p_1740->g_54};
                        int i;
                        (*l_767) = ((*l_766) &= (((safe_rshift_func_uint16_t_u_u(p_1740->g_128, p_1740->g_59.f6)) & ((p_1740->g_27[1] = p_1740->g_222.f5) <= (safe_lshift_func_uint16_t_u_s(p_8, (*l_900))))) > (safe_rshift_func_int16_t_s_u(((*l_740) = ((((((safe_mod_func_uint16_t_u_u(9UL, (safe_lshift_func_uint16_t_u_u(8UL, (p_7 || (((*l_767) <= (*l_900)) >= p_10)))))) & p_7) , p_8) | 5UL) , &p_1740->g_128) == (void*)0)), 9))));
                        p_1740->g_113[4] = func_62(l_914, p_1740);
                    }
                    if (p_10)
                        continue;
                }
                for (p_1740->g_59.f9 = (-26); (p_1740->g_59.f9 < 3); ++p_1740->g_59.f9)
                { /* block id: 474 */
                    struct S0 **l_932 = (void*)0;
                    struct S0 ***l_931[7][10][3] = {{{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0}},{{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0}},{{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0}},{{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0}},{{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0}},{{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0}},{{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0},{&l_932,(void*)0,(void*)0}}};
                    int32_t l_933[5][10][5] = {{{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)}},{{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)}},{{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)}},{{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)}},{{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)},{0x38B2FC97L,0x38B2FC97L,0L,(-1L),(-4L)}}};
                    int32_t l_977[8][10][3] = {{{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L}},{{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L}},{{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L}},{{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L}},{{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L}},{{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L}},{{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L}},{{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L},{2L,0L,0x2F129861L}}};
                    int i, j, k;
                    if (((safe_lshift_func_int8_t_s_s(0x5FL, 1)) > ((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u((p_7 , (((*p_1740->g_565) = (*p_1740->g_565)) != (void*)0)), p_7)), (safe_lshift_func_uint8_t_u_s((p_8 || 0x746CA6F9A432F9C4L), 2)))), (safe_mod_func_int16_t_s_s((&p_1740->g_488 == l_931[4][1][2]), (**p_1740->g_657))))) <= l_933[4][3][3])))
                    { /* block id: 476 */
                        int8_t *l_959 = &p_1740->g_458[1];
                        int32_t l_969 = 0x04EC152BL;
                        int32_t **l_972 = &l_900;
                        (*l_766) ^= ((safe_lshift_func_int16_t_s_s(0L, 9)) > (safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_int8_t_s((((safe_mul_func_uint16_t_u_u(l_866, p_1740->g_45[1][3])) || ((void*)0 == &p_1740->g_45[5][0])) >= p_8))) , l_933[1][3][0]), (p_9 > l_933[4][3][3]))));
                        l_971 ^= ((*l_767) = (((*l_766) = (safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((*l_766), (l_933[1][2][0] && (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_8, (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((*l_959) |= (safe_add_func_uint8_t_u_u((--(**p_1740->g_565)), p_10))), (safe_add_func_uint64_t_u_u(p_7, (--(*l_914)))))), (0x49L == (l_970[1][2][2] = ((*l_886) = (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((l_893[0] || ((((((*l_767) ^ p_9) || l_968) == 0xEFL) >= 0x2F3C2DEC7E34AECBL) > l_968)), l_969)), 0x88L))))))))), l_969)), p_9))))), p_7))) | 4L));
                        (*l_972) = &p_7;
                    }
                    else
                    { /* block id: 487 */
                        int32_t *l_973 = &p_1740->g_90.f0;
                        int32_t *l_974 = &l_764[4];
                        int32_t *l_975 = &l_970[1][2][0];
                        int32_t *l_976[9];
                        uint32_t l_978 = 1UL;
                        int32_t **l_987 = &p_1740->g_113[6];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_976[i] = (void*)0;
                        l_978++;
                        (*l_766) = (l_970[1][2][2] = (safe_div_func_int16_t_s_s((p_10 | l_933[4][3][3]), (safe_mod_func_int16_t_s_s((*l_974), (safe_rshift_func_uint16_t_u_u(l_970[1][2][2], 14)))))));
                        l_900 = ((*l_987) = func_62(&p_1740->g_27[0], p_1740));
                    }
                    (*l_766) = (((*l_767) > (safe_sub_func_uint64_t_u_u(p_9, (p_1740->g_677[2] & ((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_933[0][3][2], ((**p_1740->g_565) = 255UL))), (safe_lshift_func_uint16_t_u_s((*l_766), 14)))) < p_1740->g_110))))) & (p_7 | (safe_mod_func_int8_t_s_s(p_1740->g_90.f2, l_971))));
                }
            }
            else
            { /* block id: 497 */
                int16_t **l_1006 = &l_740;
                uint16_t *l_1013 = (void*)0;
                uint16_t *l_1014 = &p_1740->g_342;
                int32_t l_1019 = 0x40C39243L;
                uint8_t ****l_1021 = &l_1020;
                int32_t *l_1023 = &l_764[4];
                int32_t *l_1024 = &p_1740->g_108.f0;
                int32_t **l_1033 = &l_1024;
                (*l_1024) |= (((*l_766) = ((*l_1023) |= ((0UL && (safe_div_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_s(((!((safe_add_func_uint16_t_u_u((((*l_1006) = ((*p_1740->g_657) = (*p_1740->g_657))) == (l_1008 = l_1007)), p_7)) , (safe_lshift_func_uint16_t_u_u((((*l_1021) = (((((p_10 , (((((((safe_add_func_uint16_t_u_u(((*l_1014) = l_868), ((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(((&p_1740->g_89 != &p_1740->g_89) < 3UL), 0x22013DBEL)), p_8)) , l_1019))) | (*l_766)) ^ (-1L)) , l_1019) <= (**p_1740->g_565)) & l_864) | 1UL)) ^ 65528UL) || 0L) || 0L) , l_1020)) == l_1022[0][5][0]), l_896)))) < (*l_767)), 6)) , 0xE26F9A98L) || (-1L)), p_9)) , (*l_767)), 5L))) , (-10L)))) > 0L);
                (*l_1024) = (p_10 | ((*l_1014)--));
                (*l_1033) = func_62(func_64(p_7, &p_1740->g_27[1], ((((((safe_mul_func_uint8_t_u_u(0x0DL, (*l_767))) || 0x8C6DB15DL) , &p_1740->g_113[1]) == &p_1740->g_113[1]) == (safe_div_func_int64_t_s_s((!(safe_rshift_func_int16_t_s_u(((((**p_1740->g_657) == p_1740->g_224.f6) ^ 0x320C7FD5L) && (*l_1023)), p_1740->g_344))), p_1740->g_108.f9))) == 0x8A9C3866A21D8E8AL), l_894, p_1740), p_1740);
                (*l_1023) |= (safe_add_func_uint16_t_u_u(p_1740->g_88.f7, (p_1740->g_100[7][3] = (*l_767))));
            }
            if (((*l_767) &= (!((l_1036 < (+(p_1740->g_458[1] &= (*l_766)))) | ((*l_766) != ((((l_1039 != &p_1740->g_128) ^ (((safe_sub_func_int16_t_s_s(0x50F3L, (((((1L & ((((l_870 = ((safe_mod_func_int32_t_s_s(((safe_add_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((p_1740->g_59.f5 ^= p_8) , ((((*l_886)++) & ((safe_add_func_int8_t_s_s(p_10, (-1L))) != p_7)) <= p_1740->g_80.f5)), p_9)), l_1054[8][0][1])) == l_1054[4][2][2]) , 0x70359054L), 4294967294UL)) , l_1055), (*l_766))) ^ p_1740->g_85.f0)) != p_9) , 1UL) != p_8)) , l_1054[8][0][1]) && 0xD9268DF9L) <= p_10) || 0L))) & l_864) == 0x63A57873L)) != 0x1AL) == p_1740->g_87.f7))))))
            { /* block id: 517 */
                uint32_t l_1064[7][1] = {{0xD6B14F19L},{0xD6B14F19L},{0xD6B14F19L},{0xD6B14F19L},{0xD6B14F19L},{0xD6B14F19L},{0xD6B14F19L}};
                uint32_t l_1079 = 4294967295UL;
                int8_t *l_1080 = &p_1740->g_452;
                int32_t l_1083[10] = {0x4AFA8AA7L,0x4AFA8AA7L,0x4AFA8AA7L,0x4AFA8AA7L,0x4AFA8AA7L,0x4AFA8AA7L,0x4AFA8AA7L,0x4AFA8AA7L,0x4AFA8AA7L,0x4AFA8AA7L};
                int8_t *l_1084 = &p_1740->g_458[1];
                uint32_t ***l_1094 = &l_827;
                int16_t **l_1139[10] = {&l_1007,&l_1007,&l_1007,&l_1007,&l_1007,&l_1007,&l_1007,&l_1007,&l_1007,&l_1007};
                uint32_t l_1140 = 0UL;
                int i, j;
                for (p_1740->g_87.f9 = 0; (p_1740->g_87.f9 <= 0); p_1740->g_87.f9 += 1)
                { /* block id: 520 */
                    return p_8;
                }
                for (p_1740->g_466 = 0; (p_1740->g_466 < (-11)); p_1740->g_466--)
                { /* block id: 525 */
                    int32_t *l_1058 = (void*)0;
                    int32_t *l_1059 = &l_871;
                    int32_t *l_1060 = &p_1740->g_85.f0;
                    int32_t *l_1061 = &l_852;
                    int32_t *l_1062 = &p_1740->g_224.f0;
                    int32_t *l_1063 = &p_1740->g_45[0][5];
                    --l_1064[6][0];
                }
                if ((((*l_1084) ^= ((((safe_add_func_int64_t_s_s((((safe_lshift_func_int8_t_s_u(((void*)0 != l_900), (((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(0x48L, (p_8 , (safe_sub_func_int8_t_s_s(p_8, ((*l_1080) = l_1079)))))), ((((*l_767) | ((l_1081 <= ((l_1082[6][0][0] != l_1082[6][0][2]) & l_866)) , l_893[0])) || p_10) | p_8))), p_10)) , l_1083[3]) , p_7))) && p_7) & 4294967295UL), (*l_766))) <= (*p_1740->g_658)) , (-1L)) < l_870)) && p_9))
                { /* block id: 530 */
                    int32_t l_1085 = 0L;
                    uint64_t *l_1106[7];
                    int32_t *l_1110[6];
                    int64_t l_1111 = 0x54A647F91DE0AED6L;
                    int32_t l_1112 = 0x39A22037L;
                    int32_t l_1113 = 0x5A1AAEFEL;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1106[i] = &l_1054[0][3][3];
                    for (i = 0; i < 6; i++)
                        l_1110[i] = &p_1740->g_222.f0;
                    for (p_1740->g_90.f7 = 0; (p_1740->g_90.f7 <= 1); p_1740->g_90.f7 += 1)
                    { /* block id: 533 */
                        if (l_1085)
                            break;
                    }
                    for (l_1079 = 0; (l_1079 >= 41); l_1079 = safe_add_func_int32_t_s_s(l_1079, 2))
                    { /* block id: 538 */
                        uint32_t ***l_1093 = &l_827;
                        int8_t *l_1097 = (void*)0;
                        int8_t *l_1098 = &p_1740->g_1099;
                        uint64_t **l_1107 = (void*)0;
                        uint64_t **l_1108 = &l_894;
                        p_7 &= ((safe_add_func_int16_t_s_s((+l_1090), (((*l_1108) = func_64((l_1085 & (safe_div_func_uint32_t_u_u(((l_1093 != l_1094) & (safe_rshift_func_int16_t_s_s((0x3703E31B70EBE42EL <= (((*l_1098) = ((*l_1080) = ((*l_1084) = ((void*)0 != &p_1740->g_113[4])))) < (safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((((&p_1740->g_145 == &p_1740->g_145) == 0x3A5CL) || 0L), 10)) < l_1083[1]), (-2L))))), 0))), (-1L)))), &p_1740->g_54, p_1740->g_110, l_1106[4], p_1740)) != &p_10))) >= p_8);
                        if (p_1740->g_108.f0)
                            goto lbl_1109;
                        if (l_1036)
                            continue;
                    }
                    --p_1740->g_1114;
                    if (l_1083[3])
                        break;
                }
                else
                { /* block id: 549 */
                    uint16_t *l_1134 = &p_1740->g_106;
                    uint64_t **l_1146 = &l_894;
                    uint64_t ***l_1147 = &l_1146;
                    for (p_1740->g_61.f0 = 20; (p_1740->g_61.f0 < 9); p_1740->g_61.f0--)
                    { /* block id: 552 */
                        return p_7;
                    }
                    if (p_9)
                        continue;
                    (*l_767) = ((*l_766) = (safe_add_func_uint16_t_u_u((0x34A0716BL > l_1036), (safe_unary_minus_func_uint32_t_u((((((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((void*)0 != &l_835[0]), 0x7EDE7842L)), 10)), 7)), 3)), (safe_div_func_uint16_t_u_u(((*l_1134) = p_8), (safe_add_func_int16_t_s_s(((**p_1740->g_657) = (+((((safe_lshift_func_int8_t_s_u(7L, 2)) == ((void*)0 == l_1139[1])) , 1L) ^ (*l_766)))), l_1140)))))) < l_864) , (**p_1740->g_565)) , p_7) , l_1141) == (void*)0) | l_1064[1][0]))))));
                    (*l_767) |= (safe_rshift_func_uint16_t_u_u((!(p_7 | ((0xEDL >= (((safe_lshift_func_int8_t_s_s(p_8, 6)) , (((*l_1147) = l_1146) != p_1740->g_1148[5])) < l_870)) , (safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(2UL, ((((**p_1740->g_565) = (l_1083[0] = (((safe_add_func_uint32_t_u_u(l_864, l_864)) , (**p_1740->g_657)) != 0x1B9CL))) , l_1054[8][0][1]) , 0xCAL))), l_864))))), 8));
                }
                p_1740->g_82 = p_1740->g_89;
            }
            else
            { /* block id: 566 */
                int32_t l_1156 = 0x5DFCB994L;
                uint32_t ***l_1177[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1177[i] = &l_835[0];
                if (l_1156)
                { /* block id: 567 */
                    uint8_t ****l_1167 = &l_1022[0][0][1];
                    uint64_t **l_1181 = (void*)0;
                    uint64_t ***l_1180 = &l_1181;
                    int32_t l_1182 = (-1L);
                    int32_t l_1185 = 1L;
                    int32_t **l_1190 = &p_1740->g_113[5];
                    (*l_1190) = ((((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((((void*)0 == &p_1740->g_458[1]) ^ l_870) , (((((*l_886)++) > (((*l_914) = ((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((+(250UL >= (l_1167 == ((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(((l_1176 == (((((((&l_835[0] == l_1177[1]) || (((((((safe_mul_func_uint8_t_u_u(((l_1156 = ((p_1740->g_108.f9 , (void*)0) == l_1180)) >= (*l_767)), (**p_1740->g_565))) | l_1182) && p_7) , p_9) > l_1183) > 0x7DAFL) >= p_9)) , &l_870) == &l_1182) ^ p_10) || p_10) , l_1184)) ^ l_1182), p_1740->g_108.f2)), 5)), l_1185)), p_7)) , p_1740->g_1186)))), 2UL)), 0)) ^ 0x32C7L)) & p_1740->g_108.f9)) <= 0x3DL) >= p_1740->g_106)), p_9)), 0xD8000279L)) , 0xB7L) || p_7) , &p_7);
                    l_865 = 0L;
                    (*l_766) ^= (&l_1156 != (void*)0);
                }
                else
                { /* block id: 574 */
                    return l_1156;
                }
            }
            l_900 = &p_7;
        }
        for (p_1740->g_224.f5 = 1; (p_1740->g_224.f5 >= 0); p_1740->g_224.f5 -= 1)
        { /* block id: 582 */
            uint16_t *l_1210 = &p_1740->g_106;
            uint8_t **l_1215 = &l_1082[3][0][2];
            uint8_t **l_1216 = &p_1740->g_525[p_1740->g_224.f5][(p_1740->g_224.f5 + 1)];
            int i, j;
            (*l_766) &= (p_1740->g_458[p_1740->g_224.f5] == (safe_add_func_int16_t_s_s(((*l_740) = 0x2CD6L), ((safe_sub_func_int64_t_s_s((p_1740->g_87.f0 && (safe_mod_func_int32_t_s_s((((safe_add_func_int8_t_s_s(((*l_767) = l_1036), (safe_div_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(p_9, ((safe_add_func_uint32_t_u_u((((*l_1210) = (safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(0L, ((l_864 == (((void*)0 != l_1209) >= p_10)) <= 0x54CA6EAFFC20B388L))) & p_9), (**p_1740->g_565)))) > 9L), p_9)) , 0x144F2169L))) | (-6L)), 3L)))) | p_8) <= p_8), 0x7ECFBA7FL))), p_1740->g_59.f5)) == p_1740->g_458[p_1740->g_224.f5]))));
            p_7 = (-4L);
            (*l_766) = ((safe_sub_func_uint64_t_u_u((((p_7 , (safe_rshift_func_uint8_t_u_u((*l_767), (l_896 , ((l_1216 = (l_1215 = &l_1082[5][0][0])) == (**p_1740->g_1186)))))) & (safe_rshift_func_uint8_t_u_s((((*l_766) ^ (p_1740->g_54 = (1UL > 1L))) && (safe_rshift_func_uint8_t_u_s((((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_div_func_uint64_t_u_u((p_1740->g_54 ^= (*l_766)), p_1740->g_458[p_1740->g_224.f5])), 1L)), (**p_1740->g_565))) < 0x04D22125L) || l_1227), p_10))), p_1740->g_458[p_1740->g_224.f5]))) & 4L), 0x1B2B387F502B4962L)) < (*l_767));
        }
        if (p_7)
            break;
        for (l_864 = 0; (l_864 >= 27); l_864 = safe_add_func_int16_t_s_s(l_864, 1))
        { /* block id: 597 */
            uint8_t **l_1246 = &l_886;
            uint16_t *l_1247 = &l_896;
            int8_t *l_1248[8] = {&p_1740->g_458[1],&p_1740->g_458[1],&p_1740->g_458[1],&p_1740->g_458[1],&p_1740->g_458[1],&p_1740->g_458[1],&p_1740->g_458[1],&p_1740->g_458[1]};
            int32_t l_1249 = (-1L);
            int32_t l_1255 = 0x0E78AE98L;
            int32_t l_1256 = 0x78B115E0L;
            int32_t l_1257 = 1L;
            int32_t l_1258 = 0x20ADEE84L;
            int32_t l_1259 = (-6L);
            int32_t l_1260[6] = {9L,9L,9L,9L,9L,9L};
            int i;
            if ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((*l_767) = ((**l_1246) = (safe_sub_func_uint16_t_u_u((p_10 | (safe_rshift_func_int16_t_s_s((**p_1740->g_657), 13))), (((((safe_add_func_uint32_t_u_u((+4294967295UL), (p_8 >= (((*l_1007) = l_1054[8][0][1]) && (safe_add_func_int8_t_s_s((l_1249 = (safe_mul_func_int16_t_s_s(((**p_1740->g_565) || 248UL), (((*l_1247) &= ((void*)0 == l_1246)) < l_866)))), 0x37L)))))) >= 0L) == p_1740->g_108.f0) || 0UL) , (*p_1740->g_658)))))), 0x1AL)), 9)))
            { /* block id: 603 */
                uint32_t l_1250 = 0x6FB2D153L;
                int32_t *l_1251 = &p_1740->g_45[5][0];
                int32_t *l_1252 = &p_1740->g_45[5][5];
                int32_t *l_1253 = &p_1740->g_108.f0;
                int32_t *l_1254[3][3] = {{&l_868,&p_1740->g_80.f0,&l_868},{&l_868,&p_1740->g_80.f0,&l_868},{&l_868,&p_1740->g_80.f0,&l_868}};
                int32_t **l_1264[4][8] = {{&l_766,&l_1252,&p_1740->g_113[4],&p_1740->g_113[4],&p_1740->g_113[4],&l_1252,&l_766,&p_1740->g_113[3]},{&l_766,&l_1252,&p_1740->g_113[4],&p_1740->g_113[4],&p_1740->g_113[4],&l_1252,&l_766,&p_1740->g_113[3]},{&l_766,&l_1252,&p_1740->g_113[4],&p_1740->g_113[4],&p_1740->g_113[4],&l_1252,&l_766,&p_1740->g_113[3]},{&l_766,&l_1252,&p_1740->g_113[4],&p_1740->g_113[4],&p_1740->g_113[4],&l_1252,&l_766,&p_1740->g_113[3]}};
                int i, j;
                if (l_1250)
                    break;
                ++l_1261;
                p_1740->g_113[4] = &p_1740->g_29;
                for (p_1740->g_466 = 3; (p_1740->g_466 >= 0); p_1740->g_466 -= 1)
                { /* block id: 609 */
                    int i, j, k;
                    return l_1054[(p_1740->g_466 + 3)][p_1740->g_466][p_1740->g_466];
                }
            }
            else
            { /* block id: 612 */
                for (p_1740->g_61.f7 = 1; (p_1740->g_61.f7 <= 5); p_1740->g_61.f7 += 1)
                { /* block id: 615 */
                    int32_t **l_1265 = &p_1740->g_113[5];
                    int i;
                    (*l_1265) = func_62(&p_1740->g_27[0], p_1740);
                    for (p_1740->g_1099 = 0; p_1740->g_1099 < 10; p_1740->g_1099 += 1)
                    {
                        for (l_1261 = 0; l_1261 < 1; l_1261 += 1)
                        {
                            p_1740->g_1149[p_1740->g_1099][l_1261] = &p_1740->g_1266[7];
                        }
                    }
                    l_1260[p_1740->g_61.f7] = p_9;
                    (*l_1265) = &p_1740->g_45[2][0];
                }
                return p_1740->g_224.f6;
            }
            (*l_767) = p_8;
        }
    }
    (*l_767) = 0x5585C5B9L;
    return (*l_766);
}


/* ------------------------------------------ */
/* 
 * reads : p_1740->g_565 p_1740->g_525 p_1740->g_526 p_1740->g_224.f0
 * writes: p_1740->g_224.f0 p_1740->g_113
 */
uint8_t  func_11(int64_t  p_12, int16_t  p_13, struct S1 * p_1740)
{ /* block id: 363 */
    uint8_t l_731 = 0x9CL;
lbl_736:
    l_731 &= (p_12 < 4294967295UL);
    for (p_1740->g_224.f0 = 0; (p_1740->g_224.f0 > (-30)); p_1740->g_224.f0 = safe_sub_func_uint8_t_u_u(p_1740->g_224.f0, 1))
    { /* block id: 367 */
        int32_t *l_734[1][6][8] = {{{&p_1740->g_90.f0,&p_1740->g_61.f0,(void*)0,&p_1740->g_87.f0,&p_1740->g_61.f0,&p_1740->g_87.f0,(void*)0,&p_1740->g_61.f0},{&p_1740->g_90.f0,&p_1740->g_61.f0,(void*)0,&p_1740->g_87.f0,&p_1740->g_61.f0,&p_1740->g_87.f0,(void*)0,&p_1740->g_61.f0},{&p_1740->g_90.f0,&p_1740->g_61.f0,(void*)0,&p_1740->g_87.f0,&p_1740->g_61.f0,&p_1740->g_87.f0,(void*)0,&p_1740->g_61.f0},{&p_1740->g_90.f0,&p_1740->g_61.f0,(void*)0,&p_1740->g_87.f0,&p_1740->g_61.f0,&p_1740->g_87.f0,(void*)0,&p_1740->g_61.f0},{&p_1740->g_90.f0,&p_1740->g_61.f0,(void*)0,&p_1740->g_87.f0,&p_1740->g_61.f0,&p_1740->g_87.f0,(void*)0,&p_1740->g_61.f0},{&p_1740->g_90.f0,&p_1740->g_61.f0,(void*)0,&p_1740->g_87.f0,&p_1740->g_61.f0,&p_1740->g_87.f0,(void*)0,&p_1740->g_61.f0}}};
        int32_t **l_735 = &p_1740->g_113[6];
        int i, j, k;
        (*l_735) = l_734[0][2][2];
    }
    if (l_731)
        goto lbl_736;
    return (**p_1740->g_565);
}


/* ------------------------------------------ */
/* 
 * reads : p_1740->g_27 p_1740->g_29 p_1740->g_54 p_1740->g_45 p_1740->g_61.f0 p_1740->g_78 p_1740->g_79 p_1740->g_82 p_1740->g_90.f5 p_1740->g_85.f5 p_1740->g_83.f7 p_1740->g_87.f2 p_1740->g_224.f9 p_1740->g_224.f7 p_1740->g_425 p_1740->g_87.f0 p_1740->g_90.f0 p_1740->g_108.f2 p_1740->g_108.f9 p_1740->g_458 p_1740->g_85.f0 p_1740->g_466 p_1740->g_110 p_1740->g_487 p_1740->g_87.f6 p_1740->g_87.f5 p_1740->g_87.f7 p_1740->g_106 p_1740->g_80.f9 p_1740->g_108.f5 p_1740->g_224.f2 p_1740->g_61.f2 p_1740->g_224.f6 p_1740->g_222.f7 p_1740->g_222.f5 p_1740->g_525 p_1740->g_85.f6 p_1740->g_224.f0 p_1740->g_80.f6 p_1740->g_61.f6 p_1740->g_112 p_1740->g_80.f7 p_1740->g_100 p_1740->g_85.f9 p_1740->g_59.f2 p_1740->g_83.f9 p_1740->g_87.f9 p_1740->g_565 p_1740->g_222.f9 p_1740->g_657 p_1740->g_342 p_1740->g_677 p_1740->g_344 p_1740->g_83.f0
 * writes: p_1740->g_29 p_1740->g_46 p_1740->g_54 p_1740->g_61.f0 p_1740->g_79 p_1740->g_89 p_1740->g_87.f0 p_1740->g_428 p_1740->g_429 p_1740->g_113 p_1740->g_88.f9 p_1740->g_141 p_1740->g_452 p_1740->g_458 p_1740->g_85.f0 p_1740->g_88.f6 p_1740->g_224.f9 p_1740->g_61.f5 p_1740->g_344 p_1740->g_80.f6 p_1740->g_85.f6 p_1740->g_224.f0 p_1740->g_61.f6 p_1740->g_112 p_1740->g_128 p_1740->g_45 p_1740->g_108.f7 p_1740->g_565 p_1740->g_100 p_1740->g_87.f7 p_1740->g_588 p_1740->g_589 p_1740->g_526 p_1740->g_87.f6 p_1740->g_87.f2 p_1740->g_87.f9 p_1740->g_108.f9 p_1740->g_80.f2 p_1740->g_85.f9 p_1740->g_342 p_1740->g_677 p_1740->g_90.f7 p_1740->g_85.f5
 */
uint64_t  func_16(uint16_t  p_17, struct S1 * p_1740)
{ /* block id: 8 */
    int16_t l_32 = (-5L);
    int32_t l_33 = 0L;
    int32_t *l_44 = &p_1740->g_45[5][0];
    for (p_17 = (-25); (p_17 == 38); ++p_17)
    { /* block id: 11 */
        int32_t *l_37 = (void*)0;
        int8_t l_719 = 0L;
        l_37 = ((((+(0xC3DC4D7E3C239170L < func_22((l_32 && 0x647D02C9AA6F5761L), p_17, l_33, p_1740))) == func_34(l_37, ((safe_lshift_func_uint16_t_u_s((+(safe_mul_func_uint16_t_u_u(l_32, ((safe_lshift_func_uint8_t_u_u(l_33, l_32)) == p_17)))), p_1740->g_27[0])) , l_44), p_1740)) < l_719) , l_44);
    }
    for (p_1740->g_344 = 27; (p_1740->g_344 <= 24); p_1740->g_344 = safe_sub_func_int64_t_s_s(p_1740->g_344, 7))
    { /* block id: 357 */
        uint8_t l_722[4] = {0x88L,0x88L,0x88L,0x88L};
        int i;
        l_722[1] = (-3L);
    }
    (*l_44) = (((safe_rshift_func_uint16_t_u_u(p_1740->g_83.f0, ((safe_sub_func_int8_t_s_s(((p_1740->g_677[2] > p_17) ^ (p_1740->g_87.f2 ^ p_17)), (safe_mod_func_int32_t_s_s(0x3523C976L, (safe_lshift_func_int8_t_s_s(0x5BL, 2)))))) > ((~((p_1740->g_45[5][4] < (((*l_44) < p_17) != 0x2F0FL)) , 255UL)) ^ (*l_44))))) < (*l_44)) , 0x379E6DBAL);
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_1740->g_27 p_1740->g_29
 * writes: p_1740->g_29
 */
uint8_t  func_22(uint32_t  p_23, uint64_t  p_24, uint8_t  p_25, struct S1 * p_1740)
{ /* block id: 5 */
    int32_t *l_28 = &p_1740->g_29;
    (*l_28) &= p_1740->g_27[1];
    return (*l_28);
}


/* ------------------------------------------ */
/* 
 * reads : p_1740->g_54 p_1740->g_45 p_1740->g_61.f0 p_1740->g_78 p_1740->g_79 p_1740->g_82 p_1740->g_90.f5 p_1740->g_85.f5 p_1740->g_83.f7 p_1740->g_87.f2 p_1740->g_224.f9 p_1740->g_224.f7 p_1740->g_425 p_1740->g_87.f0 p_1740->g_90.f0 p_1740->g_108.f2 p_1740->g_108.f9 p_1740->g_458 p_1740->g_85.f0 p_1740->g_466 p_1740->g_110 p_1740->g_487 p_1740->g_87.f6 p_1740->g_87.f5 p_1740->g_87.f7 p_1740->g_106 p_1740->g_80.f9 p_1740->g_108.f5 p_1740->g_224.f2 p_1740->g_61.f2 p_1740->g_224.f6 p_1740->g_222.f7 p_1740->g_222.f5 p_1740->g_525 p_1740->g_85.f6 p_1740->g_224.f0 p_1740->g_80.f6 p_1740->g_61.f6 p_1740->g_112 p_1740->g_80.f7 p_1740->g_100 p_1740->g_85.f9 p_1740->g_59.f2 p_1740->g_83.f9 p_1740->g_87.f9 p_1740->g_565 p_1740->g_222.f9 p_1740->g_657 p_1740->g_342 p_1740->g_677 p_1740->g_46 p_1740->g_88.f6 p_1740->g_61.f5
 * writes: p_1740->g_46 p_1740->g_54 p_1740->g_61.f0 p_1740->g_79 p_1740->g_89 p_1740->g_87.f0 p_1740->g_428 p_1740->g_429 p_1740->g_113 p_1740->g_88.f9 p_1740->g_141 p_1740->g_452 p_1740->g_458 p_1740->g_85.f0 p_1740->g_88.f6 p_1740->g_224.f9 p_1740->g_61.f5 p_1740->g_344 p_1740->g_80.f6 p_1740->g_85.f6 p_1740->g_224.f0 p_1740->g_61.f6 p_1740->g_112 p_1740->g_128 p_1740->g_45 p_1740->g_108.f7 p_1740->g_565 p_1740->g_100 p_1740->g_87.f7 p_1740->g_588 p_1740->g_589 p_1740->g_526 p_1740->g_87.f6 p_1740->g_87.f2 p_1740->g_87.f9 p_1740->g_108.f9 p_1740->g_80.f2 p_1740->g_85.f9 p_1740->g_342 p_1740->g_677 p_1740->g_90.f7 p_1740->g_85.f5
 */
int32_t  func_34(int32_t * p_35, int32_t * p_36, struct S1 * p_1740)
{ /* block id: 12 */
    uint16_t l_52 = 1UL;
    int32_t l_55[4] = {(-1L),(-1L),(-1L),(-1L)};
    uint32_t l_554 = 0UL;
    uint32_t l_581 = 4294967295UL;
    int8_t *l_590 = &p_1740->g_458[1];
    int32_t **l_627 = (void*)0;
    uint64_t l_630 = 0x73081BDC23E9D8F7L;
    int64_t l_632 = (-6L);
    uint32_t l_644 = 1UL;
    uint16_t l_687 = 0x8438L;
    int i;
lbl_635:
    for (p_1740->g_46 = 0; (p_1740->g_46 > 26); p_1740->g_46 = safe_add_func_int8_t_s_s(p_1740->g_46, 1))
    { /* block id: 15 */
        uint8_t l_49[7] = {3UL,3UL,3UL,3UL,3UL,3UL,3UL};
        uint64_t *l_53[10] = {&p_1740->g_27[1],&p_1740->g_27[1],&p_1740->g_27[1],&p_1740->g_27[1],&p_1740->g_27[1],&p_1740->g_27[1],&p_1740->g_27[1],&p_1740->g_27[1],&p_1740->g_27[1],&p_1740->g_27[1]};
        uint8_t *l_524 = &l_49[5];
        uint8_t **l_523 = &l_524;
        int16_t *l_527 = &p_1740->g_85.f6;
        int8_t l_548 = 0x6FL;
        int i;
        p_1740->g_224.f0 &= (l_49[5] <= ((+(safe_mod_func_uint64_t_u_u((l_55[2] |= l_52), func_56(l_49[5], p_1740)))) == (safe_mul_func_int16_t_s_s(((*l_527) ^= ((18446744073709551607UL <= ((((*l_523) = &l_49[0]) != p_1740->g_525[1][5]) < ((0x5FDB1C3A1BD0A467L || 1L) ^ l_52))) , 0x16DBL)), l_52))));
        if (l_55[1])
        { /* block id: 227 */
            return l_49[2];
        }
        else
        { /* block id: 229 */
            int64_t l_547 = 0x512D48B63968E6DCL;
            int32_t l_553 = (-1L);
            int32_t *l_557 = (void*)0;
            for (p_1740->g_87.f0 = 0; (p_1740->g_87.f0 == (-6)); --p_1740->g_87.f0)
            { /* block id: 232 */
                uint16_t l_540 = 0xB380L;
                int16_t *l_544 = &p_1740->g_61.f6;
                uint16_t *l_551 = (void*)0;
                uint16_t *l_552 = &p_1740->g_112;
                int32_t l_572 = 8L;
                if ((safe_unary_minus_func_int8_t_s(((((*l_527) = p_1740->g_80.f6) & (((0x3D217057L > (safe_rshift_func_uint16_t_u_s(((l_553 = (!(safe_add_func_uint64_t_u_u((0L & (safe_div_func_uint32_t_u_u((p_1740->g_128 = (safe_unary_minus_func_int8_t_s(((safe_mul_func_uint16_t_u_u((l_540 , (1L || (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(((*l_544) &= (l_55[0] && l_540)))), (safe_lshift_func_uint16_t_u_s(((l_548 = l_547) >= ((*l_552) &= (safe_mul_func_int8_t_s_s(l_55[2], l_52)))), l_540)))))), 0x06BFL)) , l_49[5])))), p_1740->g_61.f2))), p_1740->g_87.f6)))) > l_49[5]), l_554))) | l_52) != p_1740->g_80.f7)) || l_49[5]))))
                { /* block id: 239 */
                    (*p_36) &= (-3L);
                }
                else
                { /* block id: 241 */
                    uint32_t l_575 = 0x39A8289CL;
                    int32_t l_577 = 0x6A3FE8E3L;
                    for (p_1740->g_108.f7 = (-7); (p_1740->g_108.f7 >= 11); p_1740->g_108.f7++)
                    { /* block id: 244 */
                        uint8_t ***l_562 = &l_523;
                        uint8_t **l_564 = &p_1740->g_525[1][5];
                        uint8_t ***l_563[1][3][4] = {{{&l_564,&l_564,&l_564,&l_564},{&l_564,&l_564,&l_564,&l_564},{&l_564,&l_564,&l_564,&l_564}}};
                        int32_t l_570[1];
                        int8_t *l_571 = (void*)0;
                        int8_t *l_576 = &p_1740->g_458[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_570[i] = 0x564B527FL;
                        l_557 = &p_1740->g_45[3][0];
                        (*l_557) = (safe_add_func_uint64_t_u_u(l_49[5], (((safe_mul_func_int16_t_s_s(l_52, (((&p_1740->g_525[1][5] != (p_1740->g_565 = ((*l_562) = &p_1740->g_525[1][5]))) , (((((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(0x38L, (l_572 = l_570[0]))), ((*l_527) = ((l_577 ^= (((safe_div_func_uint64_t_u_u(((p_1740->g_100[6][3] ^= 0x7B05L) == l_540), ((((*l_576) = l_575) || (-1L)) , 1UL))) > l_540) ^ l_570[0])) != l_55[2])))) < p_1740->g_85.f9) != p_1740->g_59.f2) >= l_548) > p_1740->g_83.f9)) > l_548))) , (void*)0) == (void*)0)));
                    }
                    for (p_1740->g_87.f7 = 14; (p_1740->g_87.f7 >= 55); p_1740->g_87.f7 = safe_add_func_int32_t_s_s(p_1740->g_87.f7, 7))
                    { /* block id: 257 */
                        (*p_36) &= ((void*)0 != &p_1740->g_45[2][5]);
                    }
                }
            }
            return l_49[5];
        }
    }
    for (p_1740->g_87.f7 = 0; (p_1740->g_87.f7 <= 3); p_1740->g_87.f7 += 1)
    { /* block id: 267 */
        int32_t *l_580[1];
        int8_t *l_587 = &p_1740->g_452;
        int8_t **l_586[4][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint64_t *l_601 = &p_1740->g_54;
        uint8_t *l_604 = &p_1740->g_141[4];
        uint8_t l_633[5][4] = {{5UL,0x19L,0xDCL,2UL},{5UL,0x19L,0xDCL,2UL},{5UL,0x19L,0xDCL,2UL},{5UL,0x19L,0xDCL,2UL},{5UL,0x19L,0xDCL,2UL}};
        int64_t l_660 = 0x6CAA8F28303F75FDL;
        int32_t l_662 = 1L;
        struct S0 **l_675 = &p_1740->g_89;
        int32_t l_678 = 0x66EC97A6L;
        uint8_t l_716 = 0x09L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_580[i] = &p_1740->g_83.f0;
        l_581--;
        if ((((l_55[p_1740->g_87.f7] <= ((p_1740->g_589 = (p_1740->g_588 = (void*)0)) == l_590)) >= ((safe_add_func_int64_t_s_s(((((l_55[p_1740->g_87.f7] || l_55[2]) > ((p_1740->g_87.f9 | ((((safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((((+(safe_sub_func_uint64_t_u_u(((*l_601) |= l_55[0]), (safe_lshift_func_int16_t_s_s(p_1740->g_87.f9, 12))))) && ((*l_604) = ((**p_1740->g_565) = 0UL))) >= l_52) && p_1740->g_87.f0) > l_52), l_554)), 3)) < p_1740->g_222.f9) != l_581) & p_1740->g_112)) > 0x4AE4L)) || p_1740->g_90.f0) > l_52), 0L)) == l_52)) , (*p_36)))
        { /* block id: 274 */
            uint64_t l_616 = 18446744073709551615UL;
            int32_t l_631 = 7L;
            uint16_t *l_640[1];
            uint32_t l_647 = 0x5EA9973CL;
            int i;
            for (i = 0; i < 1; i++)
                l_640[i] = &p_1740->g_100[5][1];
            for (p_1740->g_87.f6 = 0; (p_1740->g_87.f6 <= 1); p_1740->g_87.f6 += 1)
            { /* block id: 277 */
                uint16_t l_605[2];
                int32_t l_639 = 2L;
                int32_t l_642 = 1L;
                int32_t l_643 = 0x219C7460L;
                int32_t **l_650 = &p_1740->g_113[0];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_605[i] = 0x533AL;
                l_605[1]++;
                (*p_36) ^= ((safe_sub_func_int64_t_s_s(((((safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(4294967295UL, (safe_div_func_uint64_t_u_u(((*l_601) = (p_1740->g_458[p_1740->g_87.f6] ^ l_616)), (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u(l_605[1], ((safe_mul_func_int8_t_s_s((-8L), (!((((safe_rshift_func_int8_t_s_u((((l_627 != (void*)0) || p_1740->g_458[p_1740->g_87.f6]) <= (safe_add_func_int64_t_s_s((l_631 ^= l_630), p_1740->g_108.f9))), 5)) | l_52) && l_605[0]) ^ l_605[0])))) , 0x68FBF5B3L))), 65535UL)), 4294967290UL)))))) || l_605[1]), 0xCFL)) , l_554) , 0x410B725AL) && l_632), l_616)) <= 0L);
                for (p_1740->g_87.f2 = 1; (p_1740->g_87.f2 >= 0); p_1740->g_87.f2 -= 1)
                { /* block id: 284 */
                    uint64_t l_634 = 0x2E159407CA375D68L;
                    uint16_t *l_641 = &l_605[1];
                    for (p_1740->g_87.f9 = 0; (p_1740->g_87.f9 <= 5); p_1740->g_87.f9 += 1)
                    { /* block id: 287 */
                        int i, j;
                        (*p_36) = p_1740->g_45[(p_1740->g_87.f7 + 1)][(p_1740->g_87.f2 + 1)];
                        if (l_633[2][1])
                            continue;
                        if (l_634)
                            continue;
                        if (p_1740->g_87.f9)
                            goto lbl_635;
                    }
                    for (p_1740->g_108.f9 = 0; (p_1740->g_108.f9 <= 1); p_1740->g_108.f9 += 1)
                    { /* block id: 295 */
                        int8_t l_638[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_638[i] = 0L;
                        l_639 |= (safe_lshift_func_int16_t_s_u(l_638[0], (((void*)0 == &p_1740->g_344) < l_638[1])));
                    }
                    if ((&p_1740->g_112 != (l_641 = l_640[0])))
                    { /* block id: 299 */
                        ++l_644;
                        (*p_36) &= 0x04642FCCL;
                        if ((*p_36))
                            break;
                        if (l_616)
                            break;
                    }
                    else
                    { /* block id: 304 */
                        l_647++;
                    }
                }
                (*l_650) = &l_631;
            }
            if (l_647)
                break;
        }
        else
        { /* block id: 311 */
            uint8_t l_653 = 0xBFL;
            int64_t l_663 = 0x75D58A5601ECFB69L;
            struct S0 **l_673 = (void*)0;
            if ((*p_36))
                break;
            for (p_1740->g_80.f2 = 1; (p_1740->g_80.f2 >= 0); p_1740->g_80.f2 -= 1)
            { /* block id: 315 */
                uint32_t l_661 = 0x3CBA8A8FL;
                int32_t l_697 = 0x45BC90E9L;
                int32_t **l_698 = &l_580[0];
                for (p_1740->g_85.f9 = 0; (p_1740->g_85.f9 <= 1); p_1740->g_85.f9 += 1)
                { /* block id: 318 */
                    uint32_t l_654 = 0x63487B61L;
                    uint16_t *l_659 = &p_1740->g_342;
                    uint8_t l_670[6][7] = {{0x3BL,0x3BL,0xEFL,0x21L,0x05L,0x21L,0xEFL},{0x3BL,0x3BL,0xEFL,0x21L,0x05L,0x21L,0xEFL},{0x3BL,0x3BL,0xEFL,0x21L,0x05L,0x21L,0xEFL},{0x3BL,0x3BL,0xEFL,0x21L,0x05L,0x21L,0xEFL},{0x3BL,0x3BL,0xEFL,0x21L,0x05L,0x21L,0xEFL},{0x3BL,0x3BL,0xEFL,0x21L,0x05L,0x21L,0xEFL}};
                    struct S0 ***l_674[7] = {&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673};
                    uint32_t *l_676 = &p_1740->g_677[2];
                    int i, j;
                    (*p_36) = (*p_36);
                    l_663 &= (((((((*l_659) &= ((safe_div_func_int8_t_s_s((p_1740->g_45[5][0] < (l_653 , ((l_654 , &p_1740->g_565) == (void*)0))), ((p_1740->g_78 != p_1740->g_82) , l_654))) <= (safe_mul_func_int16_t_s_s((((void*)0 != p_1740->g_657) != 18446744073709551607UL), 0L)))) < l_660) <= l_661) & l_661) ^ l_662) != 2L);
                    if ((safe_div_func_int16_t_s_s((((!l_661) & l_661) , (((((((*l_676) ^= (((safe_sub_func_uint8_t_u_u(l_653, l_654)) | (l_670[4][1] = (safe_mul_func_uint8_t_u_u(l_653, l_661)))) | (safe_lshift_func_int8_t_s_s(l_661, ((l_675 = l_673) != (l_654 , (void*)0)))))) , p_1740->g_61.f2) == (*p_36)) | l_661) && l_678) > l_661)), l_661)))
                    { /* block id: 325 */
                        int64_t l_696 = 0x3B7E779E2196E44CL;
                        l_697 ^= (((safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((p_1740->g_222.f9 , ((safe_mul_func_uint16_t_u_u(65535UL, (safe_add_func_uint64_t_u_u(((l_687 , (&p_1740->g_425 != (void*)0)) & l_661), (safe_unary_minus_func_uint16_t_u((safe_lshift_func_int8_t_s_s(0x6FL, 5)))))))) | (18446744073709551615UL > (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((safe_add_func_int16_t_s_s((l_696 < l_696), l_696)))), p_1740->g_45[0][0]))))), p_1740->g_100[7][5])), l_661)) , l_654) > 0x61AE213861ABA19DL);
                        l_55[2] |= (*p_36);
                        return l_663;
                    }
                    else
                    { /* block id: 329 */
                        if ((*p_36))
                            break;
                    }
                }
                (*l_698) = &p_1740->g_46;
                if (p_1740->g_87.f6)
                    goto lbl_635;
            }
        }
        for (p_1740->g_90.f7 = 0; (p_1740->g_90.f7 <= 1); p_1740->g_90.f7 += 1)
        { /* block id: 339 */
            uint16_t *l_699 = &p_1740->g_342;
            int32_t **l_702 = &l_580[0];
            int32_t **l_703 = &p_1740->g_113[3];
            (*l_703) = ((*l_702) = ((++(*l_699)) , p_36));
        }
        if ((*p_36))
            continue;
        for (p_1740->g_85.f5 = 0; (p_1740->g_85.f5 <= 1); p_1740->g_85.f5 += 1)
        { /* block id: 347 */
            uint32_t l_704 = 1UL;
            int32_t l_707 = 0L;
            int32_t l_708 = 0x0B9C0D01L;
            int32_t l_709 = 6L;
            int32_t l_710 = 0x43DD9257L;
            int32_t l_711 = (-7L);
            int32_t l_712 = 0x32A5FB1AL;
            int64_t l_713[2][2][2] = {{{0x1CA5FC2EDC8491A4L,(-10L)},{0x1CA5FC2EDC8491A4L,(-10L)}},{{0x1CA5FC2EDC8491A4L,(-10L)},{0x1CA5FC2EDC8491A4L,(-10L)}}};
            int32_t l_715[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_715[i] = 0x56A55549L;
            l_704++;
            l_716--;
        }
    }
    return l_55[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1740->g_54 p_1740->g_45 p_1740->g_61.f0 p_1740->g_78 p_1740->g_79 p_1740->g_82 p_1740->g_90.f5 p_1740->g_85.f5 p_1740->g_83.f7 p_1740->g_87.f2 p_1740->g_224.f9 p_1740->g_224.f7 p_1740->g_425 p_1740->g_87.f0 p_1740->g_90.f0 p_1740->g_108.f2 p_1740->g_108.f9 p_1740->g_458 p_1740->g_85.f0 p_1740->g_88.f6 p_1740->g_466 p_1740->g_61.f5 p_1740->g_110 p_1740->g_487 p_1740->g_87.f6 p_1740->g_87.f5 p_1740->g_87.f7 p_1740->g_106 p_1740->g_80.f9 p_1740->g_108.f5 p_1740->g_224.f2 p_1740->g_61.f2 p_1740->g_224.f6 p_1740->g_222.f7 p_1740->g_222.f5
 * writes: p_1740->g_54 p_1740->g_61.f0 p_1740->g_79 p_1740->g_89 p_1740->g_87.f0 p_1740->g_428 p_1740->g_429 p_1740->g_113 p_1740->g_88.f9 p_1740->g_141 p_1740->g_452 p_1740->g_458 p_1740->g_85.f0 p_1740->g_88.f6 p_1740->g_224.f9 p_1740->g_61.f5 p_1740->g_344 p_1740->g_80.f6
 */
int64_t  func_56(uint64_t  p_57, struct S1 * p_1740)
{ /* block id: 17 */
    struct S0 *l_58 = &p_1740->g_59;
    struct S0 *l_86[5] = {&p_1740->g_87,&p_1740->g_87,&p_1740->g_87,&p_1740->g_87,&p_1740->g_87};
    uint64_t *l_94 = &p_1740->g_27[1];
    int32_t l_95 = 3L;
    int16_t *l_464 = &p_1740->g_88.f6;
    int16_t **l_463 = &l_464;
    uint32_t **l_481[10][10][2] = {{{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425}},{{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425}},{{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425}},{{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425}},{{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425}},{{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425}},{{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425}},{{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425}},{{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425}},{{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425},{&p_1740->g_428,&p_1740->g_425}}};
    int i, j, k;
    for (p_1740->g_54 = 0; (p_1740->g_54 <= 5); p_1740->g_54 += 1)
    { /* block id: 20 */
        int32_t l_77 = 0x0A2B653FL;
        struct S0 *l_84 = &p_1740->g_85;
        int8_t l_459 = 0x26L;
        for (p_57 = 0; (p_57 <= 5); p_57 += 1)
        { /* block id: 23 */
            int i, j;
            return p_1740->g_45[p_57][p_1740->g_54];
        }
        for (p_57 = 1; (p_57 <= 5); p_57 += 1)
        { /* block id: 28 */
            struct S0 *l_60 = &p_1740->g_61;
            int32_t *l_76 = &p_1740->g_61.f0;
            struct S0 **l_81 = &p_1740->g_79;
            int32_t **l_441 = &p_1740->g_113[4];
            int8_t *l_450 = (void*)0;
            int8_t *l_451 = &p_1740->g_452;
            int8_t *l_457 = &p_1740->g_458[1];
            int32_t *l_460 = &p_1740->g_85.f0;
            int i, j;
            l_60 = l_58;
            (*l_441) = func_62(func_64((((safe_unary_minus_func_int64_t_s((safe_lshift_func_int8_t_s_u(((((func_72((~((((*l_76) |= p_1740->g_45[p_57][p_57]) > l_77) , (((void*)0 == p_1740->g_78) > (((*l_81) = p_1740->g_79) != (l_58 = p_1740->g_82))))), ((l_84 != (p_1740->g_89 = l_86[1])) , (safe_lshift_func_uint8_t_u_u(p_1740->g_90.f5, 1))), p_1740->g_85.f5, p_1740) , 0x11578ADDL) || p_57) <= 0x4A0C00B4L) > p_1740->g_83.f7), p_57)))) > p_1740->g_87.f2) , p_57), l_94, l_95, &p_1740->g_54, p_1740), p_1740);
            for (p_1740->g_88.f9 = 0; p_1740->g_88.f9 < 7; p_1740->g_88.f9 += 1)
            {
                p_1740->g_141[p_1740->g_88.f9] = 0xCCL;
            }
            (*l_460) ^= (safe_add_func_uint64_t_u_u(2UL, (safe_mod_func_int8_t_s_s((!((((safe_sub_func_int64_t_s_s(p_57, p_57)) || (safe_mul_func_int8_t_s_s((((1UL || ((*l_451) = p_57)) <= ((*l_457) &= ((safe_div_func_uint16_t_u_u(l_77, l_77)) < (+((*l_76) = (safe_sub_func_uint32_t_u_u(0xF3AB891AL, (((-1L) >= 0UL) , p_57)))))))) <= l_95), p_57))) == 0x3EL) == 0UL)), l_459))));
        }
    }
    for (p_1740->g_88.f6 = (-30); (p_1740->g_88.f6 < 27); p_1740->g_88.f6++)
    { /* block id: 197 */
        int16_t ***l_465[7] = {&l_463,(void*)0,&l_463,&l_463,(void*)0,&l_463,&l_463};
        int32_t l_475 = 0x4BFE7F72L;
        uint64_t l_519 = 0UL;
        int i;
        l_463 = l_463;
        for (p_1740->g_224.f9 = 0; (p_1740->g_224.f9 <= 7); p_1740->g_224.f9 += 1)
        { /* block id: 201 */
            uint16_t *l_469[2];
            uint16_t *l_470 = (void*)0;
            int32_t l_482 = (-9L);
            int64_t *l_506 = &p_1740->g_344;
            int i;
            for (i = 0; i < 2; i++)
                l_469[i] = &p_1740->g_100[5][3];
            if (p_1740->g_466)
                break;
            for (p_1740->g_61.f5 = 2; (p_1740->g_61.f5 <= 6); p_1740->g_61.f5 += 1)
            { /* block id: 205 */
                int32_t l_476 = 0L;
                uint64_t l_483 = 0xF8045EC8790A0229L;
                uint32_t *l_515 = (void*)0;
                int i;
                if (((((safe_rshift_func_uint8_t_u_s((l_95 > (((l_469[1] = &p_1740->g_106) != l_470) , (p_57 != (-4L)))), 1)) , ((p_57 , (0x6DDEL < (!0x463DL))) >= (safe_sub_func_int8_t_s_s((l_475 ^ 0x28D0A66DL), (-10L))))) != l_476) || (-9L)))
                { /* block id: 207 */
                    int64_t *l_484 = &p_1740->g_344;
                    int32_t l_493 = 0x4EAB37B7L;
                    int32_t l_494 = 0x379C12CCL;
                    l_494 ^= (safe_mul_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u((l_481[2][1][0] != (void*)0), p_1740->g_110)) , ((l_482 >= (((*l_484) = (l_483 >= l_475)) > (safe_lshift_func_uint8_t_u_s(((((l_95 , p_1740->g_487[5][6][0]) == ((safe_div_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((l_493 = (((p_57 >= l_476) , 18446744073709551615UL) >= p_1740->g_87.f6)), p_1740->g_87.f5)) ^ p_57), p_1740->g_87.f7)) , (void*)0)) & l_95) ^ 0x3471L), l_95)))) > l_475)) ^ 0x69L), p_57));
                }
                else
                { /* block id: 211 */
                    int32_t *l_495 = (void*)0;
                    int32_t *l_496 = (void*)0;
                    int32_t *l_497 = &p_1740->g_61.f0;
                    int8_t *l_518 = &p_1740->g_458[1];
                    int32_t *l_520[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_520[i] = &p_1740->g_80.f0;
                    (*l_497) = 0L;
                    l_95 = (((safe_rshift_func_uint16_t_u_s((l_482 && ((((p_1740->g_106 | (safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((l_506 != (void*)0) != ((((((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((p_1740->g_80.f6 = (((((*l_497) |= (safe_div_func_int64_t_s_s(((p_57 , (((*l_518) = (safe_mul_func_uint16_t_u_u(((((void*)0 == l_515) , 0x68146027L) ^ ((safe_mod_func_int64_t_s_s(((!l_95) | 0x25B3FC584CA16465L), 0x96FA3E13D5828860L)) > p_1740->g_80.f9)), p_1740->g_108.f5))) <= p_1740->g_224.f2)) ^ 0x01CEL), l_519))) <= p_57) , 65531UL) | 0x797AL)) && 0x7353L), p_1740->g_85.f0)), p_57)) , p_57) < p_1740->g_61.f2) == p_1740->g_224.f6) || 65535UL) , 0x772968CBL)) ^ 0L), p_57)), l_475))) < 0x1CE753B2L) | 0x58L) < p_1740->g_108.f2)), 12)) || p_1740->g_222.f7) , l_475);
                }
                l_482 ^= (p_57 >= 1UL);
                if (p_57)
                    continue;
            }
        }
    }
    return p_1740->g_222.f5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1740->g_224.f9 p_1740->g_224.f7 p_1740->g_425 p_1740->g_87.f0 p_1740->g_90.f0 p_1740->g_108.f2 p_1740->g_108.f9
 * writes: p_1740->g_87.f0 p_1740->g_428 p_1740->g_429
 */
int32_t * func_62(uint64_t * p_63, struct S1 * p_1740)
{ /* block id: 179 */
    int32_t *l_419 = &p_1740->g_87.f0;
    int32_t *l_420 = (void*)0;
    int32_t *l_421 = (void*)0;
    int32_t *l_422 = &p_1740->g_87.f0;
    uint32_t **l_426[7][1] = {{&p_1740->g_425},{&p_1740->g_425},{&p_1740->g_425},{&p_1740->g_425},{&p_1740->g_425},{&p_1740->g_425},{&p_1740->g_425}};
    uint32_t *l_427 = &p_1740->g_145;
    uint32_t l_432 = 4294967289UL;
    uint32_t l_439 = 0x9A8A8C5CL;
    int16_t l_440 = (-1L);
    int i, j;
    l_419 = (void*)0;
    (*l_422) = (p_1740->g_224.f9 | p_1740->g_224.f7);
    (*l_422) = ((safe_mul_func_uint8_t_u_u(((((l_427 = p_1740->g_425) != (p_1740->g_429 = (p_1740->g_428 = &p_1740->g_145))) && ((((safe_mul_func_int8_t_s_s((l_432 == (*l_422)), (*l_422))) || (safe_mod_func_uint64_t_u_u((((safe_add_func_int16_t_s_s((0xCE1D341BE1C757A3L && ((((*l_422) < 0x12L) , (safe_div_func_int8_t_s_s((p_1740->g_90.f0 || 1L), p_1740->g_108.f2))) , 0x11930F560C3E7A56L)), (*l_422))) != (*l_422)) && l_439), l_440))) ^ 250UL) < (*l_422))) & (*l_422)), p_1740->g_108.f9)) ^ (*l_422));
    return l_420;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t * func_64(int32_t  p_65, uint64_t * p_66, uint32_t  p_67, uint64_t * p_68, struct S1 * p_1740)
{ /* block id: 36 */
    int32_t *l_98[3];
    uint16_t *l_99 = &p_1740->g_100[2][7];
    uint16_t *l_105 = &p_1740->g_106;
    struct S0 *l_107 = &p_1740->g_108;
    uint32_t *l_109 = &p_1740->g_110;
    uint16_t *l_111 = &p_1740->g_112;
    int32_t l_124 = 1L;
    uint32_t *l_127[7][8] = {{&p_1740->g_128,&p_1740->g_128,(void*)0,&p_1740->g_128,(void*)0,&p_1740->g_128,&p_1740->g_128,&p_1740->g_128},{&p_1740->g_128,&p_1740->g_128,(void*)0,&p_1740->g_128,(void*)0,&p_1740->g_128,&p_1740->g_128,&p_1740->g_128},{&p_1740->g_128,&p_1740->g_128,(void*)0,&p_1740->g_128,(void*)0,&p_1740->g_128,&p_1740->g_128,&p_1740->g_128},{&p_1740->g_128,&p_1740->g_128,(void*)0,&p_1740->g_128,(void*)0,&p_1740->g_128,&p_1740->g_128,&p_1740->g_128},{&p_1740->g_128,&p_1740->g_128,(void*)0,&p_1740->g_128,(void*)0,&p_1740->g_128,&p_1740->g_128,&p_1740->g_128},{&p_1740->g_128,&p_1740->g_128,(void*)0,&p_1740->g_128,(void*)0,&p_1740->g_128,&p_1740->g_128,&p_1740->g_128},{&p_1740->g_128,&p_1740->g_128,(void*)0,&p_1740->g_128,(void*)0,&p_1740->g_128,&p_1740->g_128,&p_1740->g_128}};
    struct S0 **l_139 = &p_1740->g_79;
    struct S0 ***l_138 = &l_139;
    uint8_t *l_140[1][7];
    int32_t l_142 = (-1L);
    uint32_t l_143 = 4294967290UL;
    uint8_t l_144[4][9] = {{0xF4L,0x7AL,248UL,0xB4L,248UL,0x7AL,0xF4L,0x45L,0xD6L},{0xF4L,0x7AL,248UL,0xB4L,248UL,0x7AL,0xF4L,0x45L,0xD6L},{0xF4L,0x7AL,248UL,0xB4L,248UL,0x7AL,0xF4L,0x45L,0xD6L},{0xF4L,0x7AL,248UL,0xB4L,248UL,0x7AL,0xF4L,0x45L,0xD6L}};
    uint32_t l_170[6][6][6] = {{{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L}},{{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L}},{{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L}},{{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L}},{{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L}},{{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L},{0x59E85B97L,0UL,1UL,0xF57C2B75L,0UL,0xF57C2B75L}}};
    int64_t l_193[9][9] = {{1L,0x12D8EAC32E7B3C1AL,0x3E6207B4A4A15ADFL,0L,0x12D8EAC32E7B3C1AL,0L,0x3E6207B4A4A15ADFL,0x12D8EAC32E7B3C1AL,1L},{1L,0x12D8EAC32E7B3C1AL,0x3E6207B4A4A15ADFL,0L,0x12D8EAC32E7B3C1AL,0L,0x3E6207B4A4A15ADFL,0x12D8EAC32E7B3C1AL,1L},{1L,0x12D8EAC32E7B3C1AL,0x3E6207B4A4A15ADFL,0L,0x12D8EAC32E7B3C1AL,0L,0x3E6207B4A4A15ADFL,0x12D8EAC32E7B3C1AL,1L},{1L,0x12D8EAC32E7B3C1AL,0x3E6207B4A4A15ADFL,0L,0x12D8EAC32E7B3C1AL,0L,0x3E6207B4A4A15ADFL,0x12D8EAC32E7B3C1AL,1L},{1L,0x12D8EAC32E7B3C1AL,0x3E6207B4A4A15ADFL,0L,0x12D8EAC32E7B3C1AL,0L,0x3E6207B4A4A15ADFL,0x12D8EAC32E7B3C1AL,1L},{1L,0x12D8EAC32E7B3C1AL,0x3E6207B4A4A15ADFL,0L,0x12D8EAC32E7B3C1AL,0L,0x3E6207B4A4A15ADFL,0x12D8EAC32E7B3C1AL,1L},{1L,0x12D8EAC32E7B3C1AL,0x3E6207B4A4A15ADFL,0L,0x12D8EAC32E7B3C1AL,0L,0x3E6207B4A4A15ADFL,0x12D8EAC32E7B3C1AL,1L},{1L,0x12D8EAC32E7B3C1AL,0x3E6207B4A4A15ADFL,0L,0x12D8EAC32E7B3C1AL,0L,0x3E6207B4A4A15ADFL,0x12D8EAC32E7B3C1AL,1L},{1L,0x12D8EAC32E7B3C1AL,0x3E6207B4A4A15ADFL,0L,0x12D8EAC32E7B3C1AL,0L,0x3E6207B4A4A15ADFL,0x12D8EAC32E7B3C1AL,1L}};
    uint32_t l_199 = 0xDF07101FL;
    int32_t l_279[7] = {0L,0L,0L,0L,0L,0L,0L};
    uint64_t l_293[9][1][1];
    int16_t l_314 = 5L;
    int8_t l_316 = 0x4BL;
    uint64_t *l_322 = &p_1740->g_54;
    uint32_t l_386 = 4294967295UL;
    int32_t l_395[10][3][8] = {{{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL}},{{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL}},{{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL}},{{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL}},{{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL}},{{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL}},{{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL}},{{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL}},{{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL}},{{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL},{0L,0x6F9562A2L,0x6F9562A2L,0L,0L,0x328E447DL,0L,0x2B48150AL}}};
    uint32_t l_416 = 4294967287UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_98[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_140[i][j] = &p_1740->g_141[4];
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_293[i][j][k] = 18446744073709551612UL;
        }
    }
    return p_68;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_72(uint32_t  p_73, uint32_t  p_74, int8_t  p_75, struct S1 * p_1740)
{ /* block id: 34 */
    int32_t l_93 = (-1L);
    return l_93;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1741;
    struct S1* p_1740 = &c_1741;
    struct S1 c_1742 = {
        {4294967291UL,4294967291UL}, // p_1740->g_3
        {0x4353EA3A7221EBC5L,0x4353EA3A7221EBC5L}, // p_1740->g_27
        0x548E01AFL, // p_1740->g_29
        {{(-4L),(-1L),(-1L),(-4L),0x6D673C04L,(-1L)},{(-4L),(-1L),(-1L),(-4L),0x6D673C04L,(-1L)},{(-4L),(-1L),(-1L),(-4L),0x6D673C04L,(-1L)},{(-4L),(-1L),(-1L),(-4L),0x6D673C04L,(-1L)},{(-4L),(-1L),(-1L),(-4L),0x6D673C04L,(-1L)},{(-4L),(-1L),(-1L),(-4L),0x6D673C04L,(-1L)}}, // p_1740->g_45
        9L, // p_1740->g_46
        1UL, // p_1740->g_54
        {0L,-5L,4L,0x31B79E2962DE1B45L,18446744073709551610UL,0x7944D42BL,6L,0x9BB0CEA4L,0x543A9B16L,0x5D1C1BBBL}, // p_1740->g_59
        {0x1C2D96A1L,1L,-3L,0x0262A889E4E2CD5BL,0xAADFED4114ABDC48L,0x28E6F95DL,1L,0x7BCD5AEBL,0x178FFC2FL,0x0EC92890L}, // p_1740->g_61
        (void*)0, // p_1740->g_78
        {0x46A4E19CL,2L,1L,1L,0UL,0x57B567EBL,0x7603L,0x4A0BD6DAL,0x1A6A910BL,4294967295UL}, // p_1740->g_80
        &p_1740->g_80, // p_1740->g_79
        {3L,0x040FL,1L,1L,0xB395F0F1473401CFL,0L,0L,0x68FEE394L,-1L,0xD71B997EL}, // p_1740->g_83
        &p_1740->g_83, // p_1740->g_82
        {0x52BC438EL,-7L,3L,-1L,0x4178B3ED55ED510FL,0x572739EBL,7L,4294967295UL,0x188D6DCBL,0x49617166L}, // p_1740->g_85
        {8L,0x11CAL,-8L,0x11E8D53535970AEDL,0xF9C58AC2CC2217A8L,0x30C07BB3L,1L,0xBEE733D0L,1L,9UL}, // p_1740->g_87
        {0x428794F9L,0x28A2L,-1L,3L,0x4651966E863DC2C3L,-1L,0x23BBL,0UL,-1L,0x9EDED60BL}, // p_1740->g_88
        {0x3A46063AL,-1L,-6L,0L,0xB01F99661A183405L,6L,0x3721L,4294967291UL,0x3E1B125EL,4294967288UL}, // p_1740->g_90
        &p_1740->g_90, // p_1740->g_89
        {{0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L},{0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L},{0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L},{0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L},{0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L},{0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L},{0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L},{0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L,0xE489L}}, // p_1740->g_100
        65534UL, // p_1740->g_106
        {0x4EDA5373L,0x3C2AL,0L,0x335B14A6E1C48D97L,9UL,0L,0L,4294967295UL,0x63D7E29CL,0xE9494419L}, // p_1740->g_108
        1UL, // p_1740->g_110
        0x9622L, // p_1740->g_112
        {(void*)0,&p_1740->g_59.f0,(void*)0,(void*)0,&p_1740->g_59.f0,(void*)0,(void*)0,&p_1740->g_59.f0}, // p_1740->g_113
        6UL, // p_1740->g_128
        {(void*)0,(void*)0}, // p_1740->g_131
        {1UL,1UL,1UL,1UL,1UL,1UL,1UL}, // p_1740->g_141
        0x3934F947L, // p_1740->g_145
        {0x3F26F056L,-1L,0x104BB7613CF3447AL,0x3ABFCD6ECBC03DADL,0x76D7F5B296C2EF98L,-1L,-1L,4294967289UL,-1L,0UL}, // p_1740->g_222
        {0x192FD4C5L,0x16ECL,-6L,-1L,18446744073709551608UL,0L,0x60EAL,0x205C9C4CL,9L,0xA6E1BA1BL}, // p_1740->g_224
        (void*)0, // p_1740->g_339
        0x06D6L, // p_1740->g_342
        0x740678AE1E9FD627L, // p_1740->g_344
        (void*)0, // p_1740->g_425
        (void*)0, // p_1740->g_428
        &p_1740->g_145, // p_1740->g_429
        (-9L), // p_1740->g_452
        {0L,0L}, // p_1740->g_458
        (-1L), // p_1740->g_466
        &p_1740->g_78, // p_1740->g_488
        {{{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488}},{{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488}},{{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488}},{{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488}},{{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488}},{{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488}},{{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488}},{{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488},{&p_1740->g_488}}}, // p_1740->g_487
        9UL, // p_1740->g_526
        {{&p_1740->g_526,&p_1740->g_526,&p_1740->g_526,&p_1740->g_526,&p_1740->g_526,&p_1740->g_526,&p_1740->g_526,&p_1740->g_526},{&p_1740->g_526,&p_1740->g_526,&p_1740->g_526,&p_1740->g_526,&p_1740->g_526,&p_1740->g_526,&p_1740->g_526,&p_1740->g_526}}, // p_1740->g_525
        &p_1740->g_525[1][5], // p_1740->g_565
        &p_1740->g_458[1], // p_1740->g_588
        &p_1740->g_458[1], // p_1740->g_589
        &p_1740->g_88.f6, // p_1740->g_658
        &p_1740->g_658, // p_1740->g_657
        {0x444D9224L,0x444D9224L,0x444D9224L}, // p_1740->g_677
        {0L}, // p_1740->g_714
        &p_1740->g_677[2], // p_1740->g_830
        &p_1740->g_830, // p_1740->g_829
        255UL, // p_1740->g_845
        18446744073709551606UL, // p_1740->g_895
        0x2BL, // p_1740->g_1099
        0x9805542EL, // p_1740->g_1114
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_1740->g_1149
        {&p_1740->g_1149[6][0],&p_1740->g_1149[6][0],&p_1740->g_1149[6][0],&p_1740->g_1149[6][0],&p_1740->g_1149[6][0],&p_1740->g_1149[6][0],&p_1740->g_1149[6][0]}, // p_1740->g_1148
        (void*)0, // p_1740->g_1189
        {&p_1740->g_1189,&p_1740->g_1189,&p_1740->g_1189,&p_1740->g_1189,&p_1740->g_1189,&p_1740->g_1189}, // p_1740->g_1188
        &p_1740->g_1188[3], // p_1740->g_1187
        &p_1740->g_1187, // p_1740->g_1186
        {0x9AAF3A378E0FC099L,0x9AAF3A378E0FC099L,0x9AAF3A378E0FC099L,0x9AAF3A378E0FC099L,0x9AAF3A378E0FC099L,0x9AAF3A378E0FC099L,0x9AAF3A378E0FC099L,0x9AAF3A378E0FC099L,0x9AAF3A378E0FC099L,0x9AAF3A378E0FC099L}, // p_1740->g_1266
        &p_1740->g_113[4], // p_1740->g_1268
        7L, // p_1740->g_1291
        {&p_1740->g_113[4],&p_1740->g_113[4],&p_1740->g_113[4],&p_1740->g_113[4],&p_1740->g_113[4],&p_1740->g_113[4],&p_1740->g_113[4],&p_1740->g_113[4],&p_1740->g_113[4],&p_1740->g_113[4]}, // p_1740->g_1293
        (void*)0, // p_1740->g_1294
        (void*)0, // p_1740->g_1295
        &p_1740->g_428, // p_1740->g_1309
        (void*)0, // p_1740->g_1310
        {0x3C01432FL,5L,0L,0L,0xEE3E803C6C3ED01CL,0x2DEF6048L,9L,0xC00A03ACL,-1L,0x5F442F81L}, // p_1740->g_1323
        {{0xAEL},{0xAEL},{0xAEL}}, // p_1740->g_1393
        {1L}, // p_1740->g_1395
        &p_1740->g_1395[0], // p_1740->g_1394
        {{{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565}},{{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565}},{{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565}},{{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565}},{{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565}},{{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565}},{{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565}},{{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565}},{{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565}},{{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565},{&p_1740->g_565,&p_1740->g_565}}}, // p_1740->g_1422
        &p_1740->g_128, // p_1740->g_1440
        {{{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL},{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL}},{{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL},{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL}},{{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL},{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL}},{{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL},{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL}},{{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL},{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL}},{{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL},{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL}},{{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL},{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL}},{{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL},{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL}},{{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL},{-1L,1L,1L,0x62184F2D303A9533L,0x7D8C27B1DBC37339L,0x5991E3D9L,0x3752L,0xBAFCB2BEL,0x16B345DCL,4294967286UL}}}, // p_1740->g_1446
        1L, // p_1740->g_1487
        {0x37FFFB96L,0x2022L,8L,0x40DA80453253E090L,0x09C0E8E8405A58A9L,-1L,7L,0xBE35F53AL,-1L,1UL}, // p_1740->g_1496
        (void*)0, // p_1740->g_1507
        0x10L, // p_1740->g_1550
        {{{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}},{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}},{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}}},{{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}},{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}},{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}}},{{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}},{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}},{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}}},{{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}},{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}},{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}}},{{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}},{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}},{{0x3CC9E63BL,0x53BFL,0x691C473765C45B21L,7L,1UL,0x08DEE76BL,0x5DD5L,5UL,-5L,2UL},{0x22514C3FL,1L,-2L,0x4D5D600069E477EBL,18446744073709551615UL,0x70FFCA0DL,1L,6UL,7L,0x10CAC08CL}}}}, // p_1740->g_1569
        (void*)0, // p_1740->g_1589
        &p_1740->g_677[1], // p_1740->g_1602
        0xD8F2062FL, // p_1740->g_1631
        {{0x34F5BCF5L,4L,0x1107E816D280C4D2L,3L,6UL,1L,0x7F39L,1UL,0x753CC99BL,1UL},{0x34F5BCF5L,4L,0x1107E816D280C4D2L,3L,6UL,1L,0x7F39L,1UL,0x753CC99BL,1UL},{0x34F5BCF5L,4L,0x1107E816D280C4D2L,3L,6UL,1L,0x7F39L,1UL,0x753CC99BL,1UL},{0x34F5BCF5L,4L,0x1107E816D280C4D2L,3L,6UL,1L,0x7F39L,1UL,0x753CC99BL,1UL},{0x34F5BCF5L,4L,0x1107E816D280C4D2L,3L,6UL,1L,0x7F39L,1UL,0x753CC99BL,1UL},{0x34F5BCF5L,4L,0x1107E816D280C4D2L,3L,6UL,1L,0x7F39L,1UL,0x753CC99BL,1UL},{0x34F5BCF5L,4L,0x1107E816D280C4D2L,3L,6UL,1L,0x7F39L,1UL,0x753CC99BL,1UL},{0x34F5BCF5L,4L,0x1107E816D280C4D2L,3L,6UL,1L,0x7F39L,1UL,0x753CC99BL,1UL},{0x34F5BCF5L,4L,0x1107E816D280C4D2L,3L,6UL,1L,0x7F39L,1UL,0x753CC99BL,1UL},{0x34F5BCF5L,4L,0x1107E816D280C4D2L,3L,6UL,1L,0x7F39L,1UL,0x753CC99BL,1UL}}, // p_1740->g_1634
        &p_1740->g_113[0], // p_1740->g_1691
        &p_1740->g_113[4], // p_1740->g_1719
        &p_1740->g_1148[5], // p_1740->g_1721
        &p_1740->g_82, // p_1740->g_1738
        &p_1740->g_1738, // p_1740->g_1737
    };
    c_1741 = c_1742;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1740);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1740->g_3[i], "p_1740->g_3[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1740->g_27[i], "p_1740->g_27[i]", print_hash_value);

    }
    transparent_crc(p_1740->g_29, "p_1740->g_29", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1740->g_45[i][j], "p_1740->g_45[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1740->g_46, "p_1740->g_46", print_hash_value);
    transparent_crc(p_1740->g_54, "p_1740->g_54", print_hash_value);
    transparent_crc(p_1740->g_59.f0, "p_1740->g_59.f0", print_hash_value);
    transparent_crc(p_1740->g_59.f1, "p_1740->g_59.f1", print_hash_value);
    transparent_crc(p_1740->g_59.f2, "p_1740->g_59.f2", print_hash_value);
    transparent_crc(p_1740->g_59.f3, "p_1740->g_59.f3", print_hash_value);
    transparent_crc(p_1740->g_59.f4, "p_1740->g_59.f4", print_hash_value);
    transparent_crc(p_1740->g_59.f5, "p_1740->g_59.f5", print_hash_value);
    transparent_crc(p_1740->g_59.f6, "p_1740->g_59.f6", print_hash_value);
    transparent_crc(p_1740->g_59.f7, "p_1740->g_59.f7", print_hash_value);
    transparent_crc(p_1740->g_59.f8, "p_1740->g_59.f8", print_hash_value);
    transparent_crc(p_1740->g_59.f9, "p_1740->g_59.f9", print_hash_value);
    transparent_crc(p_1740->g_61.f0, "p_1740->g_61.f0", print_hash_value);
    transparent_crc(p_1740->g_61.f1, "p_1740->g_61.f1", print_hash_value);
    transparent_crc(p_1740->g_61.f2, "p_1740->g_61.f2", print_hash_value);
    transparent_crc(p_1740->g_61.f3, "p_1740->g_61.f3", print_hash_value);
    transparent_crc(p_1740->g_61.f4, "p_1740->g_61.f4", print_hash_value);
    transparent_crc(p_1740->g_61.f5, "p_1740->g_61.f5", print_hash_value);
    transparent_crc(p_1740->g_61.f6, "p_1740->g_61.f6", print_hash_value);
    transparent_crc(p_1740->g_61.f7, "p_1740->g_61.f7", print_hash_value);
    transparent_crc(p_1740->g_61.f8, "p_1740->g_61.f8", print_hash_value);
    transparent_crc(p_1740->g_61.f9, "p_1740->g_61.f9", print_hash_value);
    transparent_crc(p_1740->g_80.f0, "p_1740->g_80.f0", print_hash_value);
    transparent_crc(p_1740->g_80.f1, "p_1740->g_80.f1", print_hash_value);
    transparent_crc(p_1740->g_80.f2, "p_1740->g_80.f2", print_hash_value);
    transparent_crc(p_1740->g_80.f3, "p_1740->g_80.f3", print_hash_value);
    transparent_crc(p_1740->g_80.f4, "p_1740->g_80.f4", print_hash_value);
    transparent_crc(p_1740->g_80.f5, "p_1740->g_80.f5", print_hash_value);
    transparent_crc(p_1740->g_80.f6, "p_1740->g_80.f6", print_hash_value);
    transparent_crc(p_1740->g_80.f7, "p_1740->g_80.f7", print_hash_value);
    transparent_crc(p_1740->g_80.f8, "p_1740->g_80.f8", print_hash_value);
    transparent_crc(p_1740->g_80.f9, "p_1740->g_80.f9", print_hash_value);
    transparent_crc(p_1740->g_83.f0, "p_1740->g_83.f0", print_hash_value);
    transparent_crc(p_1740->g_83.f1, "p_1740->g_83.f1", print_hash_value);
    transparent_crc(p_1740->g_83.f2, "p_1740->g_83.f2", print_hash_value);
    transparent_crc(p_1740->g_83.f3, "p_1740->g_83.f3", print_hash_value);
    transparent_crc(p_1740->g_83.f4, "p_1740->g_83.f4", print_hash_value);
    transparent_crc(p_1740->g_83.f5, "p_1740->g_83.f5", print_hash_value);
    transparent_crc(p_1740->g_83.f6, "p_1740->g_83.f6", print_hash_value);
    transparent_crc(p_1740->g_83.f7, "p_1740->g_83.f7", print_hash_value);
    transparent_crc(p_1740->g_83.f8, "p_1740->g_83.f8", print_hash_value);
    transparent_crc(p_1740->g_83.f9, "p_1740->g_83.f9", print_hash_value);
    transparent_crc(p_1740->g_85.f0, "p_1740->g_85.f0", print_hash_value);
    transparent_crc(p_1740->g_85.f1, "p_1740->g_85.f1", print_hash_value);
    transparent_crc(p_1740->g_85.f2, "p_1740->g_85.f2", print_hash_value);
    transparent_crc(p_1740->g_85.f3, "p_1740->g_85.f3", print_hash_value);
    transparent_crc(p_1740->g_85.f4, "p_1740->g_85.f4", print_hash_value);
    transparent_crc(p_1740->g_85.f5, "p_1740->g_85.f5", print_hash_value);
    transparent_crc(p_1740->g_85.f6, "p_1740->g_85.f6", print_hash_value);
    transparent_crc(p_1740->g_85.f7, "p_1740->g_85.f7", print_hash_value);
    transparent_crc(p_1740->g_85.f8, "p_1740->g_85.f8", print_hash_value);
    transparent_crc(p_1740->g_85.f9, "p_1740->g_85.f9", print_hash_value);
    transparent_crc(p_1740->g_87.f0, "p_1740->g_87.f0", print_hash_value);
    transparent_crc(p_1740->g_87.f1, "p_1740->g_87.f1", print_hash_value);
    transparent_crc(p_1740->g_87.f2, "p_1740->g_87.f2", print_hash_value);
    transparent_crc(p_1740->g_87.f3, "p_1740->g_87.f3", print_hash_value);
    transparent_crc(p_1740->g_87.f4, "p_1740->g_87.f4", print_hash_value);
    transparent_crc(p_1740->g_87.f5, "p_1740->g_87.f5", print_hash_value);
    transparent_crc(p_1740->g_87.f6, "p_1740->g_87.f6", print_hash_value);
    transparent_crc(p_1740->g_87.f7, "p_1740->g_87.f7", print_hash_value);
    transparent_crc(p_1740->g_87.f8, "p_1740->g_87.f8", print_hash_value);
    transparent_crc(p_1740->g_87.f9, "p_1740->g_87.f9", print_hash_value);
    transparent_crc(p_1740->g_88.f0, "p_1740->g_88.f0", print_hash_value);
    transparent_crc(p_1740->g_88.f1, "p_1740->g_88.f1", print_hash_value);
    transparent_crc(p_1740->g_88.f2, "p_1740->g_88.f2", print_hash_value);
    transparent_crc(p_1740->g_88.f3, "p_1740->g_88.f3", print_hash_value);
    transparent_crc(p_1740->g_88.f4, "p_1740->g_88.f4", print_hash_value);
    transparent_crc(p_1740->g_88.f5, "p_1740->g_88.f5", print_hash_value);
    transparent_crc(p_1740->g_88.f6, "p_1740->g_88.f6", print_hash_value);
    transparent_crc(p_1740->g_88.f7, "p_1740->g_88.f7", print_hash_value);
    transparent_crc(p_1740->g_88.f8, "p_1740->g_88.f8", print_hash_value);
    transparent_crc(p_1740->g_88.f9, "p_1740->g_88.f9", print_hash_value);
    transparent_crc(p_1740->g_90.f0, "p_1740->g_90.f0", print_hash_value);
    transparent_crc(p_1740->g_90.f1, "p_1740->g_90.f1", print_hash_value);
    transparent_crc(p_1740->g_90.f2, "p_1740->g_90.f2", print_hash_value);
    transparent_crc(p_1740->g_90.f3, "p_1740->g_90.f3", print_hash_value);
    transparent_crc(p_1740->g_90.f4, "p_1740->g_90.f4", print_hash_value);
    transparent_crc(p_1740->g_90.f5, "p_1740->g_90.f5", print_hash_value);
    transparent_crc(p_1740->g_90.f6, "p_1740->g_90.f6", print_hash_value);
    transparent_crc(p_1740->g_90.f7, "p_1740->g_90.f7", print_hash_value);
    transparent_crc(p_1740->g_90.f8, "p_1740->g_90.f8", print_hash_value);
    transparent_crc(p_1740->g_90.f9, "p_1740->g_90.f9", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1740->g_100[i][j], "p_1740->g_100[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1740->g_106, "p_1740->g_106", print_hash_value);
    transparent_crc(p_1740->g_108.f0, "p_1740->g_108.f0", print_hash_value);
    transparent_crc(p_1740->g_108.f1, "p_1740->g_108.f1", print_hash_value);
    transparent_crc(p_1740->g_108.f2, "p_1740->g_108.f2", print_hash_value);
    transparent_crc(p_1740->g_108.f3, "p_1740->g_108.f3", print_hash_value);
    transparent_crc(p_1740->g_108.f4, "p_1740->g_108.f4", print_hash_value);
    transparent_crc(p_1740->g_108.f5, "p_1740->g_108.f5", print_hash_value);
    transparent_crc(p_1740->g_108.f6, "p_1740->g_108.f6", print_hash_value);
    transparent_crc(p_1740->g_108.f7, "p_1740->g_108.f7", print_hash_value);
    transparent_crc(p_1740->g_108.f8, "p_1740->g_108.f8", print_hash_value);
    transparent_crc(p_1740->g_108.f9, "p_1740->g_108.f9", print_hash_value);
    transparent_crc(p_1740->g_110, "p_1740->g_110", print_hash_value);
    transparent_crc(p_1740->g_112, "p_1740->g_112", print_hash_value);
    transparent_crc(p_1740->g_128, "p_1740->g_128", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1740->g_141[i], "p_1740->g_141[i]", print_hash_value);

    }
    transparent_crc(p_1740->g_145, "p_1740->g_145", print_hash_value);
    transparent_crc(p_1740->g_222.f0, "p_1740->g_222.f0", print_hash_value);
    transparent_crc(p_1740->g_222.f1, "p_1740->g_222.f1", print_hash_value);
    transparent_crc(p_1740->g_222.f2, "p_1740->g_222.f2", print_hash_value);
    transparent_crc(p_1740->g_222.f3, "p_1740->g_222.f3", print_hash_value);
    transparent_crc(p_1740->g_222.f4, "p_1740->g_222.f4", print_hash_value);
    transparent_crc(p_1740->g_222.f5, "p_1740->g_222.f5", print_hash_value);
    transparent_crc(p_1740->g_222.f6, "p_1740->g_222.f6", print_hash_value);
    transparent_crc(p_1740->g_222.f7, "p_1740->g_222.f7", print_hash_value);
    transparent_crc(p_1740->g_222.f8, "p_1740->g_222.f8", print_hash_value);
    transparent_crc(p_1740->g_222.f9, "p_1740->g_222.f9", print_hash_value);
    transparent_crc(p_1740->g_224.f0, "p_1740->g_224.f0", print_hash_value);
    transparent_crc(p_1740->g_224.f1, "p_1740->g_224.f1", print_hash_value);
    transparent_crc(p_1740->g_224.f2, "p_1740->g_224.f2", print_hash_value);
    transparent_crc(p_1740->g_224.f3, "p_1740->g_224.f3", print_hash_value);
    transparent_crc(p_1740->g_224.f4, "p_1740->g_224.f4", print_hash_value);
    transparent_crc(p_1740->g_224.f5, "p_1740->g_224.f5", print_hash_value);
    transparent_crc(p_1740->g_224.f6, "p_1740->g_224.f6", print_hash_value);
    transparent_crc(p_1740->g_224.f7, "p_1740->g_224.f7", print_hash_value);
    transparent_crc(p_1740->g_224.f8, "p_1740->g_224.f8", print_hash_value);
    transparent_crc(p_1740->g_224.f9, "p_1740->g_224.f9", print_hash_value);
    transparent_crc(p_1740->g_342, "p_1740->g_342", print_hash_value);
    transparent_crc(p_1740->g_344, "p_1740->g_344", print_hash_value);
    transparent_crc(p_1740->g_452, "p_1740->g_452", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1740->g_458[i], "p_1740->g_458[i]", print_hash_value);

    }
    transparent_crc(p_1740->g_466, "p_1740->g_466", print_hash_value);
    transparent_crc(p_1740->g_526, "p_1740->g_526", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1740->g_677[i], "p_1740->g_677[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1740->g_714[i], "p_1740->g_714[i]", print_hash_value);

    }
    transparent_crc(p_1740->g_845, "p_1740->g_845", print_hash_value);
    transparent_crc(p_1740->g_895, "p_1740->g_895", print_hash_value);
    transparent_crc(p_1740->g_1099, "p_1740->g_1099", print_hash_value);
    transparent_crc(p_1740->g_1114, "p_1740->g_1114", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1740->g_1266[i], "p_1740->g_1266[i]", print_hash_value);

    }
    transparent_crc(p_1740->g_1291, "p_1740->g_1291", print_hash_value);
    transparent_crc(p_1740->g_1323.f0, "p_1740->g_1323.f0", print_hash_value);
    transparent_crc(p_1740->g_1323.f1, "p_1740->g_1323.f1", print_hash_value);
    transparent_crc(p_1740->g_1323.f2, "p_1740->g_1323.f2", print_hash_value);
    transparent_crc(p_1740->g_1323.f3, "p_1740->g_1323.f3", print_hash_value);
    transparent_crc(p_1740->g_1323.f4, "p_1740->g_1323.f4", print_hash_value);
    transparent_crc(p_1740->g_1323.f5, "p_1740->g_1323.f5", print_hash_value);
    transparent_crc(p_1740->g_1323.f6, "p_1740->g_1323.f6", print_hash_value);
    transparent_crc(p_1740->g_1323.f7, "p_1740->g_1323.f7", print_hash_value);
    transparent_crc(p_1740->g_1323.f8, "p_1740->g_1323.f8", print_hash_value);
    transparent_crc(p_1740->g_1323.f9, "p_1740->g_1323.f9", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1740->g_1393[i][j], "p_1740->g_1393[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1740->g_1395[i], "p_1740->g_1395[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1740->g_1446[i][j].f0, "p_1740->g_1446[i][j].f0", print_hash_value);
            transparent_crc(p_1740->g_1446[i][j].f1, "p_1740->g_1446[i][j].f1", print_hash_value);
            transparent_crc(p_1740->g_1446[i][j].f2, "p_1740->g_1446[i][j].f2", print_hash_value);
            transparent_crc(p_1740->g_1446[i][j].f3, "p_1740->g_1446[i][j].f3", print_hash_value);
            transparent_crc(p_1740->g_1446[i][j].f4, "p_1740->g_1446[i][j].f4", print_hash_value);
            transparent_crc(p_1740->g_1446[i][j].f5, "p_1740->g_1446[i][j].f5", print_hash_value);
            transparent_crc(p_1740->g_1446[i][j].f6, "p_1740->g_1446[i][j].f6", print_hash_value);
            transparent_crc(p_1740->g_1446[i][j].f7, "p_1740->g_1446[i][j].f7", print_hash_value);
            transparent_crc(p_1740->g_1446[i][j].f8, "p_1740->g_1446[i][j].f8", print_hash_value);
            transparent_crc(p_1740->g_1446[i][j].f9, "p_1740->g_1446[i][j].f9", print_hash_value);

        }
    }
    transparent_crc(p_1740->g_1487, "p_1740->g_1487", print_hash_value);
    transparent_crc(p_1740->g_1496.f0, "p_1740->g_1496.f0", print_hash_value);
    transparent_crc(p_1740->g_1496.f1, "p_1740->g_1496.f1", print_hash_value);
    transparent_crc(p_1740->g_1496.f2, "p_1740->g_1496.f2", print_hash_value);
    transparent_crc(p_1740->g_1496.f3, "p_1740->g_1496.f3", print_hash_value);
    transparent_crc(p_1740->g_1496.f4, "p_1740->g_1496.f4", print_hash_value);
    transparent_crc(p_1740->g_1496.f5, "p_1740->g_1496.f5", print_hash_value);
    transparent_crc(p_1740->g_1496.f6, "p_1740->g_1496.f6", print_hash_value);
    transparent_crc(p_1740->g_1496.f7, "p_1740->g_1496.f7", print_hash_value);
    transparent_crc(p_1740->g_1496.f8, "p_1740->g_1496.f8", print_hash_value);
    transparent_crc(p_1740->g_1496.f9, "p_1740->g_1496.f9", print_hash_value);
    transparent_crc(p_1740->g_1550, "p_1740->g_1550", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1740->g_1569[i][j][k].f0, "p_1740->g_1569[i][j][k].f0", print_hash_value);
                transparent_crc(p_1740->g_1569[i][j][k].f1, "p_1740->g_1569[i][j][k].f1", print_hash_value);
                transparent_crc(p_1740->g_1569[i][j][k].f2, "p_1740->g_1569[i][j][k].f2", print_hash_value);
                transparent_crc(p_1740->g_1569[i][j][k].f3, "p_1740->g_1569[i][j][k].f3", print_hash_value);
                transparent_crc(p_1740->g_1569[i][j][k].f4, "p_1740->g_1569[i][j][k].f4", print_hash_value);
                transparent_crc(p_1740->g_1569[i][j][k].f5, "p_1740->g_1569[i][j][k].f5", print_hash_value);
                transparent_crc(p_1740->g_1569[i][j][k].f6, "p_1740->g_1569[i][j][k].f6", print_hash_value);
                transparent_crc(p_1740->g_1569[i][j][k].f7, "p_1740->g_1569[i][j][k].f7", print_hash_value);
                transparent_crc(p_1740->g_1569[i][j][k].f8, "p_1740->g_1569[i][j][k].f8", print_hash_value);
                transparent_crc(p_1740->g_1569[i][j][k].f9, "p_1740->g_1569[i][j][k].f9", print_hash_value);

            }
        }
    }
    transparent_crc(p_1740->g_1631, "p_1740->g_1631", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1740->g_1634[i].f0, "p_1740->g_1634[i].f0", print_hash_value);
        transparent_crc(p_1740->g_1634[i].f1, "p_1740->g_1634[i].f1", print_hash_value);
        transparent_crc(p_1740->g_1634[i].f2, "p_1740->g_1634[i].f2", print_hash_value);
        transparent_crc(p_1740->g_1634[i].f3, "p_1740->g_1634[i].f3", print_hash_value);
        transparent_crc(p_1740->g_1634[i].f4, "p_1740->g_1634[i].f4", print_hash_value);
        transparent_crc(p_1740->g_1634[i].f5, "p_1740->g_1634[i].f5", print_hash_value);
        transparent_crc(p_1740->g_1634[i].f6, "p_1740->g_1634[i].f6", print_hash_value);
        transparent_crc(p_1740->g_1634[i].f7, "p_1740->g_1634[i].f7", print_hash_value);
        transparent_crc(p_1740->g_1634[i].f8, "p_1740->g_1634[i].f8", print_hash_value);
        transparent_crc(p_1740->g_1634[i].f9, "p_1740->g_1634[i].f9", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
