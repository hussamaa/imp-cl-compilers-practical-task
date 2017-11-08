// -g 7,36,38 -l 1,2,19
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


// Seed: 287388893

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2[5][10];
    volatile int32_t g_3;
    volatile int32_t g_4;
    volatile int32_t g_5;
    int32_t g_6;
    int32_t g_47;
    int32_t g_51;
    int32_t g_53;
    int32_t *g_55;
    int32_t ** volatile g_54[3][8];
    int16_t g_66;
    int64_t g_83[10];
    int32_t **g_120;
    uint8_t g_132[5][8][5];
    int64_t g_145;
    int8_t g_146;
    int64_t g_149;
    uint64_t g_179;
    uint32_t g_202;
    int8_t g_255[10][6][3];
    int32_t g_263;
    uint64_t g_283;
    int32_t ****g_286;
    int32_t g_341;
    int64_t g_344;
    uint64_t g_345;
    int8_t g_357[9][9];
    int16_t *g_384;
    int16_t **g_383[3];
    int32_t g_396;
    int32_t ** volatile *g_412;
    int8_t g_485[1][5][8];
    uint64_t g_491;
    uint16_t g_500;
    int32_t *g_536;
    int32_t *g_538[7];
    volatile int8_t g_558;
    volatile int64_t g_560;
    uint32_t g_584;
    uint32_t g_613;
    int32_t ***g_644;
    int32_t g_651;
    uint16_t g_659;
    int8_t *g_729;
    int8_t **g_728;
    uint32_t g_736;
    uint16_t g_740;
    volatile uint32_t g_854;
    uint8_t *g_881;
    uint8_t **g_880;
    int32_t g_949;
    uint32_t g_951;
    uint16_t *g_991;
    int32_t g_1111;
    int32_t *g_1181[4];
    int32_t ** volatile g_1180;
    uint8_t g_1200[2][6];
    int16_t g_1209;
    int64_t g_1233;
    uint32_t *g_1328;
    uint32_t **g_1327[2][5][2];
    int32_t * volatile g_1444[8];
    int32_t * volatile g_1445;
    int16_t g_1515;
    int32_t **g_1530;
    int32_t *** volatile g_1529;
    int32_t * volatile g_1562;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S0 * p_1563);
uint64_t  func_9(int32_t  p_10, uint8_t  p_11, int16_t  p_12, struct S0 * p_1563);
uint16_t  func_13(uint8_t  p_14, int16_t  p_15, int32_t  p_16, int8_t  p_17, int32_t  p_18, struct S0 * p_1563);
uint8_t  func_19(uint32_t  p_20, uint32_t  p_21, int32_t  p_22, int64_t  p_23, int8_t  p_24, struct S0 * p_1563);
uint16_t  func_26(int32_t  p_27, int32_t  p_28, struct S0 * p_1563);
int32_t  func_29(int8_t  p_30, uint32_t  p_31, int32_t  p_32, int32_t  p_33, uint8_t  p_34, struct S0 * p_1563);
uint16_t  func_71(int16_t * p_72, int32_t * p_73, int16_t  p_74, uint8_t  p_75, struct S0 * p_1563);
uint64_t  func_88(uint8_t  p_89, uint32_t  p_90, int32_t * p_91, struct S0 * p_1563);
int16_t  func_104(uint32_t  p_105, struct S0 * p_1563);
uint16_t  func_109(int32_t * p_110, uint16_t  p_111, int32_t ** p_112, struct S0 * p_1563);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1563->g_6 p_1563->g_1180 p_1563->g_1181 p_1563->g_341 p_1563->g_991 p_1563->g_740 p_1563->g_53 p_1563->g_880 p_1563->g_881 p_1563->g_132 p_1563->g_384 p_1563->g_66 p_1563->g_1200 p_1563->g_728 p_1563->g_729 p_1563->g_485 p_1563->g_1562
 * writes: p_1563->g_6 p_1563->g_53 p_1563->g_740 p_1563->g_1515
 */
uint16_t  func_1(struct S0 * p_1563)
{ /* block id: 4 */
    uint32_t l_25 = 4294967295UL;
    uint32_t l_41 = 0x7CD95329L;
    int32_t l_1494 = 0x0C874AF4L;
    uint64_t *l_1512 = &p_1563->g_491;
    int16_t ***l_1514 = &p_1563->g_383[2];
    int32_t l_1518[1];
    uint8_t l_1526[4][1][1] = {{{1UL}},{{1UL}},{{1UL}},{{1UL}}};
    int32_t *l_1540 = &p_1563->g_47;
    int32_t **l_1541 = &l_1540;
    int32_t l_1544 = 1L;
    int32_t *l_1547 = &p_1563->g_53;
    int16_t *l_1560 = &p_1563->g_1515;
    uint16_t l_1561 = 65535UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1518[i] = 0L;
    for (p_1563->g_6 = 0; (p_1563->g_6 < (-22)); p_1563->g_6 = safe_sub_func_int32_t_s_s(p_1563->g_6, 8))
    { /* block id: 7 */
        int64_t l_46 = 7L;
        uint8_t **l_1507 = &p_1563->g_881;
        uint64_t *l_1510 = (void*)0;
        int32_t l_1519 = 8L;
        int32_t l_1521 = 0x14E982DFL;
        int32_t l_1522 = 4L;
        int32_t l_1523 = 0x4E7A8510L;
        int32_t l_1524 = 7L;
        int32_t l_1525[10][5][2] = {{{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL}},{{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL}},{{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL}},{{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL}},{{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL}},{{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL}},{{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL}},{{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL}},{{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL}},{{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL},{1L,0x2CF10DBEL}}};
        int i, j, k;
        (1 + 1);
    }
    l_1544 |= ((((safe_lshift_func_uint16_t_u_u(l_1494, 3)) == (**p_1563->g_1180)) <= (((l_1518[0] | (!(((void*)0 != &p_1563->g_880) , (((*l_1541) = l_1540) != &p_1563->g_949)))) , (((safe_lshift_func_uint16_t_u_s((*p_1563->g_991), 10)) <= 0x308AAFE5L) < 0L)) == l_25)) , l_1526[0][0][0]);
    (*l_1547) ^= (safe_mul_func_int16_t_s_s((l_1518[0] |= l_1526[0][0][0]), 4L));
    (*p_1563->g_1562) &= ((~((safe_rshift_func_int8_t_s_u((65531UL < ((safe_add_func_uint16_t_u_u((((*l_1547) | (**p_1563->g_880)) < (*p_1563->g_881)), (*p_1563->g_384))) | ((*l_1547) < (*l_1547)))), ((safe_lshift_func_uint16_t_u_s(((l_1561 = ((*l_1560) = (((*p_1563->g_991) = (*p_1563->g_991)) > (+(safe_add_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((*l_1547) && (-6L)) , p_1563->g_1200[1][3]), 0x4EC6E1681E5E0ECEL)), 7L)) && (**p_1563->g_728)), (*l_1547))))))) ^ (*p_1563->g_384)), 11)) & 0x2EL))) >= (*l_1547))) < (*l_1547));
    return (*l_1547);
}


/* ------------------------------------------ */
/* 
 * reads : p_1563->g_341
 * writes:
 */
uint64_t  func_9(int32_t  p_10, uint8_t  p_11, int16_t  p_12, struct S0 * p_1563)
{ /* block id: 731 */
    int32_t l_1460 = 1L;
    int32_t l_1461 = 0x438AD012L;
    int32_t l_1462 = 1L;
    int32_t *l_1463 = &p_1563->g_341;
    int32_t *l_1464 = &p_1563->g_651;
    int32_t *l_1465 = (void*)0;
    int32_t l_1466 = 0x029CF7D2L;
    int32_t *l_1467 = (void*)0;
    int32_t *l_1468 = (void*)0;
    int32_t *l_1469 = &p_1563->g_651;
    int32_t *l_1470 = (void*)0;
    int32_t *l_1471 = &l_1461;
    int32_t *l_1472 = &p_1563->g_341;
    int32_t l_1473 = 0x1A19DB27L;
    int32_t *l_1474 = &l_1466;
    int32_t *l_1475 = (void*)0;
    int32_t *l_1476 = &p_1563->g_53;
    int32_t *l_1477 = &l_1466;
    int32_t *l_1478[1][8] = {{&p_1563->g_651,&p_1563->g_651,&p_1563->g_651,&p_1563->g_651,&p_1563->g_651,&p_1563->g_651,&p_1563->g_651,&p_1563->g_651}};
    int8_t l_1479 = (-1L);
    uint32_t l_1480 = 0UL;
    int i, j;
    l_1462 = (l_1461 |= (l_1460 = (-1L)));
    --l_1480;
    return (*l_1472);
}


/* ------------------------------------------ */
/* 
 * reads : p_1563->g_83 p_1563->g_881 p_1563->g_132 p_1563->g_880 p_1563->g_53 p_1563->g_384 p_1563->g_66 p_1563->g_729 p_1563->g_4 p_1563->g_1209 p_1563->g_146 p_1563->g_51 p_1563->g_485 p_1563->g_1328 p_1563->g_613 p_1563->g_3 p_1563->g_991 p_1563->g_740 p_1563->g_500 p_1563->g_263 p_1563->g_1445
 * writes: p_1563->g_736 p_1563->g_53 p_1563->g_485 p_1563->g_132 p_1563->g_740 p_1563->g_500 p_1563->g_1209 p_1563->g_1233 p_1563->g_179 p_1563->g_51
 */
uint16_t  func_13(uint8_t  p_14, int16_t  p_15, int32_t  p_16, int8_t  p_17, int32_t  p_18, struct S0 * p_1563)
{ /* block id: 703 */
    uint32_t l_1375 = 0UL;
    uint32_t *l_1376 = &p_1563->g_736;
    uint32_t l_1387 = 0xF7CC8485L;
    int16_t l_1392 = 0L;
    int32_t *l_1393 = &p_1563->g_53;
    int32_t l_1409 = (-1L);
    int64_t *l_1437 = &p_1563->g_145;
    uint32_t **l_1440 = &p_1563->g_1328;
    uint16_t *l_1458 = &p_1563->g_659;
    uint8_t l_1459 = 0x5CL;
    if ((safe_mul_func_int8_t_s_s((~((safe_rshift_func_int8_t_s_s((((safe_add_func_int16_t_s_s((p_1563->g_83[3] || ((safe_mul_func_uint8_t_u_u(((((((*l_1376) = (safe_mod_func_uint32_t_u_u(l_1375, l_1375))) <= (safe_mul_func_int8_t_s_s((0x0D70D101L <= (!0L)), (((*l_1393) = (((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u((*p_1563->g_881), ((l_1387 , (l_1375 | ((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((**p_1563->g_880), p_14)), p_16)) && l_1387))) , l_1392))) & (-1L)), 5)) , (-7L)) | l_1375), 3)), l_1387)) == l_1392) , 0x44EB174AL)) <= 0x2C6093CEL)))) & l_1375) || (**p_1563->g_880)) && 0x4C84005081E1711AL), 0xB7L)) | 0L)), 65534UL)) , p_18) , (*l_1393)), 4)) ^ l_1387)), 250UL)))
    { /* block id: 706 */
        int8_t l_1406 = 0x6AL;
        int64_t *l_1407 = (void*)0;
        int64_t *l_1408[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_1408[i][j] = (void*)0;
        }
        (*l_1393) = (safe_sub_func_int64_t_s_s((0x095DL != (*p_1563->g_384)), (l_1409 |= ((1L ^ ((((*l_1393) && 0x75L) >= (((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((p_14 | (safe_div_func_uint64_t_u_u((((safe_mod_func_uint32_t_u_u((!(!((((*l_1393) , (((~(((*p_1563->g_729) = p_14) && l_1406)) , p_1563->g_132[1][2][0]) == p_18)) > 6L) < (*l_1393)))), p_17)) && p_1563->g_4) || 0xA59C09DF671DAEB9L), 0x36FC6473577DC70AL))) || l_1406), (**p_1563->g_880))), 0x325FL)), l_1406)) , p_1563->g_1209) , p_1563->g_53)) , 0x649229B1B1FC6599L)) , p_1563->g_146))));
    }
    else
    { /* block id: 710 */
        uint64_t l_1412 = 0xFE4A74E1850D6F1BL;
        uint32_t *l_1417 = &p_1563->g_202;
        uint16_t *l_1422 = (void*)0;
        uint16_t *l_1423[1];
        int32_t l_1424[2];
        int32_t l_1425[1];
        int64_t *l_1434 = (void*)0;
        int64_t *l_1435 = (void*)0;
        int64_t *l_1436[3][3];
        int16_t *l_1441 = &p_1563->g_1209;
        int64_t *l_1442 = &p_1563->g_1233;
        uint64_t *l_1443 = &p_1563->g_179;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1423[i] = &p_1563->g_659;
        for (i = 0; i < 2; i++)
            l_1424[i] = 1L;
        for (i = 0; i < 1; i++)
            l_1425[i] = 1L;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_1436[i][j] = &p_1563->g_149;
        }
        l_1425[0] |= (safe_div_func_uint64_t_u_u(l_1412, (safe_rshift_func_uint8_t_u_s(((**p_1563->g_880) = (p_18 <= ((*p_1563->g_729) ^= ((safe_mul_func_int16_t_s_s(p_16, (l_1417 == &p_1563->g_736))) != (p_1563->g_51 <= (+(0x209F6006L > p_15))))))), ((l_1424[0] = ((*p_1563->g_991) = ((safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((*l_1393) = (((((((*p_1563->g_1328) , 8L) , 18446744073709551614UL) , (void*)0) != (void*)0) == p_1563->g_3) & (-1L))), p_15)) , 0UL), (*p_1563->g_991))) == p_18))) ^ p_15)))));
        (*p_1563->g_1445) ^= ((safe_rshift_func_int8_t_s_s((&p_1563->g_881 != (((*l_1443) = (((*p_1563->g_881) = (safe_div_func_int64_t_s_s((((p_14 , ((*p_1563->g_729) = (safe_rshift_func_uint16_t_u_s((((*l_1393) != 7L) & 0xD80F4AAB71D8DCC6L), ((safe_add_func_uint16_t_u_u((((l_1424[0] = p_14) ^ (l_1437 == (((*l_1442) = (safe_add_func_int32_t_s_s((~(l_1425[0] = l_1425[0])), (~(((*l_1441) |= (((l_1440 != (void*)0) , 1L) , (*p_1563->g_384))) < l_1412))))) , (void*)0))) <= p_17), 0xE307L)) ^ p_18))))) , p_15) <= p_1563->g_263), 1UL))) != p_18)) , (void*)0)), 5)) , p_15);
        (*l_1393) = (safe_lshift_func_uint16_t_u_s(1UL, (safe_sub_func_int16_t_s_s((*l_1393), (+0x1BB9L)))));
    }
    (*l_1393) = ((((safe_lshift_func_uint16_t_u_s((((**p_1563->g_880) ^= (*l_1393)) && ((safe_div_func_uint64_t_u_u(1UL, 18446744073709551615UL)) <= (safe_sub_func_int16_t_s_s((&p_1563->g_396 == (void*)0), (*l_1393))))), (l_1458 == (void*)0))) && ((*l_1393) ^ (*l_1393))) < 0x9470L) & p_17);
    (*l_1393) &= l_1459;
    return (*p_1563->g_991);
}


/* ------------------------------------------ */
/* 
 * reads : p_1563->g_83 p_1563->g_740 p_1563->g_384 p_1563->g_729 p_1563->g_485 p_1563->g_500 p_1563->g_66 p_1563->g_880 p_1563->g_881 p_1563->g_255 p_1563->g_651 p_1563->g_2 p_1563->g_132 p_1563->g_584 p_1563->g_47 p_1563->g_728 p_1563->g_491 p_1563->g_53 p_1563->g_991 p_1563->g_357 p_1563->g_51 p_1563->g_283 p_1563->g_412 p_1563->g_54 p_1563->g_55 p_1563->g_341 p_1563->g_120 p_1563->g_149 p_1563->g_4 p_1563->g_949 p_1563->g_736 p_1563->g_558 p_1563->g_6 p_1563->g_1180 p_1563->g_1181 p_1563->g_1200 p_1563->g_179 p_1563->g_345 p_1563->g_344 p_1563->g_1209 p_1563->g_202 p_1563->g_613 p_1563->g_1327 p_1563->g_1328
 * writes: p_1563->g_740 p_1563->g_145 p_1563->g_66 p_1563->g_132 p_1563->g_991 p_1563->g_344 p_1563->g_2 p_1563->g_651 p_1563->g_51 p_1563->g_53 p_1563->g_55 p_1563->g_341 p_1563->g_485 p_1563->g_500 p_1563->g_736 p_1563->g_345 p_1563->g_283 p_1563->g_1181 p_1563->g_149 p_1563->g_1200 p_1563->g_357 p_1563->g_179 p_1563->g_1233 p_1563->g_491 p_1563->g_1209 p_1563->g_202 p_1563->g_613
 */
uint8_t  func_19(uint32_t  p_20, uint32_t  p_21, int32_t  p_22, int64_t  p_23, int8_t  p_24, struct S0 * p_1563)
{ /* block id: 481 */
    int64_t l_980 = (-1L);
    uint16_t *l_990[3][5][9] = {{{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740},{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740},{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740},{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740},{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740}},{{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740},{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740},{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740},{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740},{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740}},{{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740},{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740},{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740},{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740},{&p_1563->g_500,&p_1563->g_659,(void*)0,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740,&p_1563->g_740,&p_1563->g_659,&p_1563->g_740}}};
    int32_t l_1036 = 0L;
    uint8_t l_1065 = 0UL;
    uint64_t *l_1092 = &p_1563->g_491;
    int32_t l_1106 = (-8L);
    int64_t l_1107 = 0x2E715B2A52A51640L;
    int32_t l_1108 = 0x6BB29C60L;
    int32_t l_1109 = 0x1FFF56FDL;
    int32_t l_1113[2][6][7] = {{{0x6D03D2D7L,0x641B1911L,0x5CC6AE0CL,6L,(-6L),0x6D03D2D7L,6L},{0x6D03D2D7L,0x641B1911L,0x5CC6AE0CL,6L,(-6L),0x6D03D2D7L,6L},{0x6D03D2D7L,0x641B1911L,0x5CC6AE0CL,6L,(-6L),0x6D03D2D7L,6L},{0x6D03D2D7L,0x641B1911L,0x5CC6AE0CL,6L,(-6L),0x6D03D2D7L,6L},{0x6D03D2D7L,0x641B1911L,0x5CC6AE0CL,6L,(-6L),0x6D03D2D7L,6L},{0x6D03D2D7L,0x641B1911L,0x5CC6AE0CL,6L,(-6L),0x6D03D2D7L,6L}},{{0x6D03D2D7L,0x641B1911L,0x5CC6AE0CL,6L,(-6L),0x6D03D2D7L,6L},{0x6D03D2D7L,0x641B1911L,0x5CC6AE0CL,6L,(-6L),0x6D03D2D7L,6L},{0x6D03D2D7L,0x641B1911L,0x5CC6AE0CL,6L,(-6L),0x6D03D2D7L,6L},{0x6D03D2D7L,0x641B1911L,0x5CC6AE0CL,6L,(-6L),0x6D03D2D7L,6L},{0x6D03D2D7L,0x641B1911L,0x5CC6AE0CL,6L,(-6L),0x6D03D2D7L,6L},{0x6D03D2D7L,0x641B1911L,0x5CC6AE0CL,6L,(-6L),0x6D03D2D7L,6L}}};
    int64_t l_1114 = 4L;
    int8_t l_1120[6][7][6] = {{{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL}},{{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL}},{{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL}},{{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL}},{{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL}},{{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL},{0x27L,0x36L,0x0AL,(-2L),0x25L,0x4AL}}};
    uint16_t l_1123 = 0xEBD8L;
    int16_t **l_1135 = &p_1563->g_384;
    int32_t *l_1194 = &p_1563->g_949;
    uint16_t l_1216 = 0x894DL;
    int8_t l_1292[8];
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_1292[i] = (-5L);
    for (p_22 = 9; (p_22 >= 0); p_22 -= 1)
    { /* block id: 484 */
        uint16_t *l_969 = &p_1563->g_740;
        int64_t *l_976 = &p_1563->g_145;
        int16_t l_979 = 0x6C02L;
        int32_t l_981[7] = {0x78FCA18DL,0x78FCA18DL,0x78FCA18DL,0x78FCA18DL,0x78FCA18DL,0x78FCA18DL,0x78FCA18DL};
        int8_t l_1003 = 0x6FL;
        int32_t l_1068 = 0L;
        int32_t *l_1073 = &p_1563->g_6;
        int32_t *l_1098 = &p_1563->g_6;
        uint8_t *l_1155 = &l_1065;
        int i;
        if (((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((l_981[3] = (safe_mod_func_int16_t_s_s(p_1563->g_83[p_22], (safe_rshift_func_int16_t_s_u(p_1563->g_83[p_22], (safe_rshift_func_int8_t_s_s(((((*l_969)--) > ((safe_mul_func_uint8_t_u_u(((((*p_1563->g_384) = (p_21 <= (safe_sub_func_uint64_t_u_u(((((*l_976) = (p_21 != (p_1563->g_83[p_22] && 65532UL))) | (safe_sub_func_uint64_t_u_u(l_979, l_980))) < ((p_1563->g_83[p_22] || l_980) || 0x6ADF79B9E5B0C586L)), l_980)))) , &p_1563->g_145) == &p_1563->g_560), p_20)) >= p_21)) > l_980), (*p_1563->g_729)))))))), (*p_1563->g_729))), 12)), 0x3CEBL)), 0)) != 0x5FL))
        { /* block id: 489 */
            int32_t l_989 = 0x53747EE6L;
            uint16_t l_994 = 0UL;
            uint32_t *l_1000 = &p_1563->g_613;
            uint32_t l_1022 = 0x98F0CAE0L;
            int32_t ***l_1041 = &p_1563->g_120;
            int8_t **l_1085[4] = {&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729};
            int32_t l_1112 = (-1L);
            int32_t l_1117[6] = {0x294455ECL,0x294455ECL,0x294455ECL,0x294455ECL,0x294455ECL,0x294455ECL};
            uint16_t l_1152 = 65535UL;
            int16_t ****l_1168 = (void*)0;
            int16_t ***l_1170 = &l_1135;
            int16_t ****l_1169 = &l_1170;
            int i;
            if ((p_24 & ((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(((*l_969) |= p_1563->g_500))), (*p_1563->g_384))) , (safe_div_func_int16_t_s_s(p_24, (safe_add_func_uint16_t_u_u((~(((**p_1563->g_880) = l_989) > (l_990[1][2][5] != (p_1563->g_991 = (l_969 = &p_1563->g_500))))), (safe_sub_func_int8_t_s_s(8L, (((l_994 = (((p_23 ^ l_989) >= p_1563->g_255[5][0][2]) & p_22)) == 2L) < 0xA23310EAL))))))))))
            { /* block id: 495 */
                uint64_t *l_995 = &p_1563->g_491;
                int32_t l_1002[5][8];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_1002[i][j] = 0x477CA1D0L;
                }
                for (l_979 = 0; l_979 < 5; l_979 += 1)
                {
                    for (p_1563->g_344 = 0; p_1563->g_344 < 10; p_1563->g_344 += 1)
                    {
                        p_1563->g_2[l_979][p_1563->g_344] = 8L;
                    }
                }
                for (p_1563->g_651 = 0; (p_1563->g_651 <= 4); p_1563->g_651 += 1)
                { /* block id: 499 */
                    int64_t l_1004 = (-6L);
                    uint64_t l_1023 = 9UL;
                    int32_t l_1027 = 0x14303A66L;
                    int32_t *l_1035 = &p_1563->g_51;
                    int32_t ***l_1042 = &p_1563->g_120;
                    uint16_t *l_1067[6][8] = {{(void*)0,(void*)0,(void*)0,&p_1563->g_659,(void*)0,(void*)0,(void*)0,&p_1563->g_659},{(void*)0,(void*)0,(void*)0,&p_1563->g_659,(void*)0,(void*)0,(void*)0,&p_1563->g_659},{(void*)0,(void*)0,(void*)0,&p_1563->g_659,(void*)0,(void*)0,(void*)0,&p_1563->g_659},{(void*)0,(void*)0,(void*)0,&p_1563->g_659,(void*)0,(void*)0,(void*)0,&p_1563->g_659},{(void*)0,(void*)0,(void*)0,&p_1563->g_659,(void*)0,(void*)0,(void*)0,&p_1563->g_659},{(void*)0,(void*)0,(void*)0,&p_1563->g_659,(void*)0,(void*)0,(void*)0,&p_1563->g_659}};
                    int i, j;
                    for (p_1563->g_66 = 0; (p_1563->g_66 <= 0); p_1563->g_66 += 1)
                    { /* block id: 502 */
                        uint32_t **l_1001 = &l_1000;
                        int32_t *l_1005 = &l_989;
                        int16_t l_1021[1][7];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_1021[i][j] = 1L;
                        }
                        (*l_1005) ^= (((((void*)0 == l_995) < ((((safe_add_func_int8_t_s_s((p_1563->g_485[p_1563->g_66][(p_1563->g_66 + 1)][p_1563->g_66] > (safe_lshift_func_int8_t_s_s(((((&p_1563->g_2[(p_1563->g_66 + 1)][(p_1563->g_651 + 1)] != (void*)0) , (p_1563->g_2[p_1563->g_651][p_22] != (&p_21 != ((*l_1001) = l_1000)))) < (l_1002[0][1] != p_21)) > l_1003), l_1004))), p_23)) , &p_1563->g_396) != (void*)0) | (**p_1563->g_880))) , l_1002[0][1]) || 0x479157F7L);
                        (*l_1005) = (((p_1563->g_485[0][4][3] <= ((safe_div_func_uint8_t_u_u((!(p_1563->g_584 || p_20)), (((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_u(((((p_1563->g_47 & p_1563->g_83[5]) <= ((safe_add_func_uint16_t_u_u(((((((safe_add_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((p_20 <= 0x2A2FD7B7L))), (**p_1563->g_728))) <= (p_22 < 0x9142L)) ^ (*l_1005)) != p_1563->g_83[p_22]) , p_1563->g_491) <= p_1563->g_132[1][2][0]), 1UL)) & 0x1308L)) | 0x374DL) == p_1563->g_53), 14)) , 0x064F0D91L) < l_1021[0][2]) ^ 0x4EC8B491530DD1A1L), l_989)), l_980)) < l_1004) , 0x29L))) >= l_1022)) | (*l_1005)) & p_21);
                        (*l_1005) = 0x7C87F834L;
                    }
                    if ((p_21 & (p_23 > 0UL)))
                    { /* block id: 508 */
                        int32_t *l_1024 = &l_1002[0][0];
                        (*l_1024) |= l_1023;
                    }
                    else
                    { /* block id: 510 */
                        uint16_t l_1033 = 65526UL;
                        int32_t l_1034[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        int i;
                        l_1002[0][1] = p_24;
                        l_1002[2][7] = (((0x50D8CCB1C48395E4L | ((!(*p_1563->g_991)) || ((safe_mod_func_uint32_t_u_u(p_22, ((l_1027 = ((*p_1563->g_881) < ((*p_1563->g_729) <= p_24))) && ((safe_add_func_uint64_t_u_u((((249UL | ((((l_1034[0] = (((safe_div_func_int8_t_s_s(p_22, (((*p_1563->g_384) ^= ((safe_unary_minus_func_uint8_t_u(l_1027)) && l_1002[0][1])) | (*p_1563->g_991)))) <= (*p_1563->g_881)) , l_1033)) != l_980) == p_23) , 0x01L)) > p_20) , p_1563->g_357[0][2]), p_21)) ^ l_989)))) , 0x03C3L))) | 3L) ^ 0x2FE60E6A67B73F92L);
                    }
                    l_1036 |= ((*l_1035) |= 5L);
                    for (l_1023 = 1; (l_1023 <= 4); l_1023 += 1)
                    { /* block id: 521 */
                        uint32_t l_1066 = 0xE7D11FB8L;
                        int32_t *l_1069 = &p_1563->g_53;
                        int i, j;
                        p_1563->g_2[p_1563->g_651][p_22] = ((*l_1069) = (safe_mod_func_uint16_t_u_u(((p_23 | (((((0x5986EB64948B61FFL >= ((0x50L == ((((l_1041 != l_1042) && l_1002[0][1]) == (((safe_div_func_int32_t_s_s(((*l_1035) = ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_24, ((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((**p_1563->g_880)++) | p_1563->g_283), 7)), (safe_div_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u((*l_1035), p_22)) , 0x806BFAFF65E4D95AL), l_1002[0][1])))) < 0x75639FC14E44B9DFL), l_1065)), p_23)), 13)) > 0xF5L))), l_980)) >= p_21)), l_1066)) , (void*)0) == &p_1563->g_396)) < 0x7584C8B0L)) < p_1563->g_485[0][2][1])) | 8UL) ^ p_23) , l_1067[5][4]) != (void*)0)) >= 0x1E4157A96B9A4CA4L), l_1068)));
                        return l_1002[1][1];
                    }
                    for (l_1023 = 0; (l_1023 <= 0); l_1023 += 1)
                    { /* block id: 530 */
                        int16_t l_1070 = (-7L);
                        l_1070 &= p_1563->g_83[p_22];
                    }
                }
            }
            else
            { /* block id: 534 */
                uint32_t l_1095 = 4294967295UL;
                int32_t l_1102 = (-1L);
                int32_t l_1103 = 5L;
                int32_t l_1110[6];
                int32_t l_1122 = 1L;
                uint8_t *l_1154 = &p_1563->g_132[3][3][1];
                int32_t *****l_1160 = &p_1563->g_286;
                int32_t l_1164 = (-7L);
                int32_t *l_1167 = &l_1068;
                int i;
                for (i = 0; i < 6; i++)
                    l_1110[i] = 0x459EBE6DL;
                for (p_1563->g_51 = 0; (p_1563->g_51 >= 0); p_1563->g_51 -= 1)
                { /* block id: 537 */
                    int32_t l_1071 = 0x0D24CFCEL;
                    int32_t l_1104 = 0x4C41F63CL;
                    int32_t l_1105 = (-1L);
                    int32_t l_1115 = 9L;
                    int32_t l_1116 = 1L;
                    int32_t l_1118 = 8L;
                    int32_t l_1119[8] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
                    int i;
                    (**p_1563->g_412) = (**p_1563->g_412);
                    if (l_1071)
                    { /* block id: 539 */
                        int32_t *l_1072 = &p_1563->g_341;
                        int32_t *l_1074 = &p_1563->g_651;
                        (*l_1072) |= 1L;
                        (**l_1041) = (l_1072 = l_1073);
                        (*l_1074) = 0L;
                    }
                    else
                    { /* block id: 544 */
                        int8_t ***l_1086 = (void*)0;
                        int8_t ***l_1087 = &l_1085[3];
                        int32_t *l_1096[3][10] = {{&p_1563->g_651,&p_1563->g_53,&p_1563->g_53,&p_1563->g_651,&p_1563->g_651,&p_1563->g_53,&p_1563->g_53,&p_1563->g_651,&p_1563->g_651,&p_1563->g_53},{&p_1563->g_651,&p_1563->g_53,&p_1563->g_53,&p_1563->g_651,&p_1563->g_651,&p_1563->g_53,&p_1563->g_53,&p_1563->g_651,&p_1563->g_651,&p_1563->g_53},{&p_1563->g_651,&p_1563->g_53,&p_1563->g_53,&p_1563->g_651,&p_1563->g_651,&p_1563->g_53,&p_1563->g_53,&p_1563->g_651,&p_1563->g_651,&p_1563->g_53}};
                        int i, j;
                        l_1071 ^= (p_1563->g_149 , ((l_1036 ^= (safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(1L, ((!p_20) , (safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((*p_1563->g_991) = ((safe_sub_func_uint64_t_u_u(((((((*l_1087) = l_1085[3]) != &p_1563->g_729) || (((l_989 = ((safe_add_func_int16_t_s_s((p_1563->g_4 , ((safe_sub_func_int8_t_s_s(((void*)0 != l_1092), ((((**p_1563->g_728) = (((safe_rshift_func_int16_t_s_u(p_22, 5)) <= 0x54L) != 0x51D177B2B35409C3L)) , p_24) >= 0x5A6BL))) & l_1095)), 0x6B52L)) != p_21)) & l_1095) || (-7L))) > 65535UL) != p_1563->g_949), 0x3EA9DCE422C99480L)) , 0UL)), 0x2A89L)), 4L))))) < 0x6CL), 0x01L))) | p_24));
                        l_1071 = (safe_unary_minus_func_int32_t_s(p_20));
                    }
                    for (p_1563->g_736 = 0; (p_1563->g_736 <= 0); p_1563->g_736 += 1)
                    { /* block id: 555 */
                        uint64_t *l_1099 = (void*)0;
                        uint64_t *l_1100 = &p_1563->g_345;
                        int32_t *l_1101[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t l_1121 = 0x22D135EDL;
                        int i;
                        (**p_1563->g_412) = l_1098;
                        if (p_20)
                            break;
                        l_1071 = (l_1036 < (((*l_1100) = (0x3E854A73L ^ p_1563->g_558)) == 18446744073709551615UL));
                        l_1123++;
                    }
                }
                for (l_1003 = 0; (l_1003 >= 0); l_1003 -= 1)
                { /* block id: 565 */
                    int32_t *l_1126 = &p_1563->g_53;
                    (**l_1041) = l_1126;
                    for (l_994 = 0; (l_994 <= 0); l_994 += 1)
                    { /* block id: 569 */
                        int16_t ***l_1136 = &p_1563->g_383[1];
                        int32_t l_1145 = (-1L);
                        uint64_t l_1153 = 0x5B933455E69BDC60L;
                        uint8_t **l_1163 = &l_1155;
                        int32_t *l_1166 = (void*)0;
                        int32_t **l_1165[3][3][4] = {{{&l_1166,&l_1166,&l_1166,&l_1166},{&l_1166,&l_1166,&l_1166,&l_1166},{&l_1166,&l_1166,&l_1166,&l_1166}},{{&l_1166,&l_1166,&l_1166,&l_1166},{&l_1166,&l_1166,&l_1166,&l_1166},{&l_1166,&l_1166,&l_1166,&l_1166}},{{&l_1166,&l_1166,&l_1166,&l_1166},{&l_1166,&l_1166,&l_1166,&l_1166},{&l_1166,&l_1166,&l_1166,&l_1166}}};
                        int i, j, k;
                        (1 + 1);
                    }
                }
            }
            (*p_1563->g_120) = &p_22;
            l_1113[1][0][6] = (((*l_1169) = &l_1135) == (void*)0);
        }
        else
        { /* block id: 588 */
            int32_t *l_1171 = &l_1113[0][1][5];
            (*l_1171) = (*l_1073);
        }
        if (p_24)
            break;
        return (**p_1563->g_880);
    }
    for (p_1563->g_66 = (-14); (p_1563->g_66 <= 0); p_1563->g_66 = safe_add_func_uint8_t_u_u(p_1563->g_66, 6))
    { /* block id: 596 */
        uint64_t l_1174 = 0xCDCEEC50F3DD72F6L;
        int32_t *l_1178 = &l_1109;
        int16_t ***l_1188 = (void*)0;
        uint32_t l_1214 = 1UL;
        int32_t l_1282 = 3L;
        int32_t l_1286 = 0x65954CEAL;
        int32_t l_1288 = 3L;
        int32_t l_1291 = 3L;
        int32_t l_1293 = 0x21C37021L;
        int16_t l_1352 = 0x2E45L;
        uint32_t l_1360 = 1UL;
        if (l_1174)
            break;
        for (p_1563->g_344 = 19; (p_1563->g_344 == 16); p_1563->g_344--)
        { /* block id: 600 */
            int32_t *l_1177 = &p_1563->g_651;
            uint8_t l_1234 = 1UL;
            uint64_t l_1272 = 1UL;
            int32_t l_1283 = 9L;
            int32_t l_1284 = (-7L);
            int32_t l_1285 = 0x03179AEBL;
            int32_t l_1287 = 0x474782C6L;
            int32_t l_1289 = 5L;
            int32_t l_1290[3];
            uint64_t l_1294 = 18446744073709551615UL;
            uint8_t l_1320 = 1UL;
            int8_t **l_1331[2][10] = {{&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729},{&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729,&p_1563->g_729}};
            int64_t l_1354 = 0x117C8C4C53275FDCL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1290[i] = 0x2EDDA158L;
            (*l_1177) |= p_21;
            if (l_1174)
                break;
            if (p_23)
            { /* block id: 603 */
                int32_t *l_1179 = &p_1563->g_51;
                uint32_t l_1213 = 0xDC25B707L;
                int8_t l_1215 = 5L;
                int16_t *l_1241 = &p_1563->g_66;
                int32_t *l_1274 = &p_1563->g_53;
                int32_t *l_1275 = &l_1113[1][3][2];
                int32_t *l_1276 = &l_1109;
                int32_t *l_1277 = &p_1563->g_53;
                int32_t *l_1278 = (void*)0;
                int32_t *l_1279 = &l_1106;
                int32_t *l_1280 = &l_1106;
                int32_t *l_1281[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (p_1563->g_341 = 0; (p_1563->g_341 <= 2); p_1563->g_341 += 1)
                { /* block id: 606 */
                    int32_t l_1199 = 0x01010A6AL;
                    uint64_t *l_1229[3][2][10] = {{{&l_1174,&p_1563->g_179,&p_1563->g_283,&p_1563->g_345,(void*)0,(void*)0,&p_1563->g_345,&p_1563->g_283,&p_1563->g_179,&l_1174},{&l_1174,&p_1563->g_179,&p_1563->g_283,&p_1563->g_345,(void*)0,(void*)0,&p_1563->g_345,&p_1563->g_283,&p_1563->g_179,&l_1174}},{{&l_1174,&p_1563->g_179,&p_1563->g_283,&p_1563->g_345,(void*)0,(void*)0,&p_1563->g_345,&p_1563->g_283,&p_1563->g_179,&l_1174},{&l_1174,&p_1563->g_179,&p_1563->g_283,&p_1563->g_345,(void*)0,(void*)0,&p_1563->g_345,&p_1563->g_283,&p_1563->g_179,&l_1174}},{{&l_1174,&p_1563->g_179,&p_1563->g_283,&p_1563->g_345,(void*)0,(void*)0,&p_1563->g_345,&p_1563->g_283,&p_1563->g_179,&l_1174},{&l_1174,&p_1563->g_179,&p_1563->g_283,&p_1563->g_345,(void*)0,(void*)0,&p_1563->g_345,&p_1563->g_283,&p_1563->g_179,&l_1174}}};
                    int64_t *l_1232 = &p_1563->g_1233;
                    int i, j, k;
                    for (p_1563->g_283 = 0; (p_1563->g_283 <= 4); p_1563->g_283 += 1)
                    { /* block id: 609 */
                        int i, j;
                        (*l_1177) ^= ((&p_1563->g_880 != &p_1563->g_880) <= (p_1563->g_2[p_1563->g_283][(p_1563->g_283 + 5)] , ((**p_1563->g_728) = p_24)));
                        (*l_1177) = l_1174;
                        (**p_1563->g_412) = l_1178;
                        (*p_1563->g_1180) = ((*p_1563->g_120) = l_1179);
                    }
                    if (((0x64A4L && (-6L)) , (*l_1178)))
                    { /* block id: 617 */
                        int16_t ****l_1189 = &l_1188;
                        int32_t l_1195[2];
                        int64_t *l_1196 = (void*)0;
                        int64_t *l_1197 = &p_1563->g_149;
                        int64_t *l_1198[4][2] = {{&p_1563->g_83[5],&l_1107},{&p_1563->g_83[5],&l_1107},{&p_1563->g_83[5],&l_1107},{&p_1563->g_83[5],&l_1107}};
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1195[i] = 0x366704EAL;
                        (*l_1178) = ((*l_1177) = (((safe_div_func_int16_t_s_s(((*l_1179) &= (((-1L) || (**p_1563->g_728)) , (safe_add_func_uint64_t_u_u((((((safe_sub_func_int16_t_s_s(p_20, (*l_1177))) >= (&l_1135 == ((*l_1189) = l_1188))) , (l_1199 = ((*l_1197) = ((l_1113[1][0][6] = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((void*)0 != l_1194) ^ ((p_22 != 7L) , p_22)), 6)), l_1195[0]))) > p_1563->g_357[4][8])))) == p_24) > 0x78L), (-10L))))), p_21)) < (-3L)) , (**p_1563->g_1180)));
                        if (p_20)
                            break;
                        if (l_1199)
                            continue;
                        ++p_1563->g_1200[0][4];
                    }
                    else
                    { /* block id: 628 */
                        int16_t *l_1205 = (void*)0;
                        int16_t *l_1206 = (void*)0;
                        int16_t *l_1207 = (void*)0;
                        int16_t *l_1208[3];
                        int8_t *l_1212 = &p_1563->g_357[6][4];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1208[i] = &p_1563->g_1209;
                        (**p_1563->g_412) = (((**p_1563->g_728) >= ((safe_rshift_func_uint16_t_u_u((+(((*l_1179) = p_22) > (&p_20 != &p_1563->g_854))), (((l_1214 = (safe_lshift_func_int8_t_s_s(((void*)0 == &p_1563->g_951), (((*l_1212) &= (!p_22)) == l_1213)))) | (*p_1563->g_991)) , 0x4B49L))) < l_1215)) , &p_22);
                        (*p_1563->g_120) = (l_1178 = l_1177);
                        return l_1216;
                    }
                    (*l_1178) = (safe_div_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((p_1563->g_345 |= ((((l_1234 = ((*l_1177) = ((4UL <= 0x254BL) ^ (((*l_1232) = (!((l_1199 = l_1120[4][0][1]) < ((safe_add_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((((((*p_1563->g_729) & ((void*)0 == &l_1179)) >= (safe_lshift_func_uint8_t_u_s(((*p_1563->g_881) && ((safe_mod_func_int8_t_s_s(0x72L, ((p_1563->g_179--) , l_1113[0][5][0]))) , (*p_1563->g_881))), p_23))) , (*l_1179)) & 7UL), p_20)) || p_24), p_1563->g_2[1][9])) , p_24)))) , 4294967295UL)))) , &p_1563->g_384) != &p_1563->g_384) >= l_1113[1][5][1])), p_1563->g_949)), (*l_1178)));
                }
                for (p_1563->g_491 = 0; (p_1563->g_491 != 21); p_1563->g_491 = safe_add_func_uint32_t_u_u(p_1563->g_491, 8))
                { /* block id: 647 */
                    uint32_t l_1260 = 1UL;
                    int32_t l_1267 = 0x606F3435L;
                    int16_t *l_1273 = &p_1563->g_1209;
                    for (l_1216 = 0; (l_1216 == 34); l_1216 = safe_add_func_int16_t_s_s(l_1216, 1))
                    { /* block id: 650 */
                        int64_t *l_1258[2];
                        int32_t l_1259[1][2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1258[i] = &p_1563->g_149;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1259[i][j] = (-5L);
                        }
                        (*l_1177) = (((void*)0 != &p_1563->g_613) , (safe_div_func_int16_t_s_s((((((void*)0 == l_1241) || (0L || 18446744073709551608UL)) & ((1UL != (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((0x6D5BL && (safe_add_func_int16_t_s_s(((*l_1179) = ((!((safe_sub_func_int64_t_s_s((l_1259[0][1] = (safe_div_func_uint64_t_u_u(p_1563->g_1200[0][4], (-8L)))), l_1260)) >= p_24)) < p_24)), p_21))), p_20)) | 1L) | l_1260), l_1260)), 7)) != p_20), p_21)), 1L))) | p_20)) || 253UL), p_21)));
                    }
                    l_1036 |= ((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((+0L), (safe_sub_func_int64_t_s_s(((*p_1563->g_991) >= ((l_1267 = 0UL) , ((*l_1273) |= (p_1563->g_344 > (((safe_div_func_int16_t_s_s(((*l_1178) = 0x5841L), (*p_1563->g_384))) | (safe_lshift_func_uint8_t_u_s((*p_1563->g_881), (*l_1177)))) || (l_1272 = (p_23 && (*l_1179)))))))), (-1L))))), 0UL)) , p_24);
                    l_1177 = &p_22;
                }
                l_1294++;
                return l_1292[1];
            }
            else
            { /* block id: 664 */
                uint8_t l_1297 = 249UL;
                int16_t ****l_1312 = (void*)0;
                int16_t ****l_1319 = (void*)0;
                l_1297++;
                for (p_1563->g_202 = 0; (p_1563->g_202 <= 1); p_1563->g_202 += 1)
                { /* block id: 668 */
                    int i, j, k;
                    p_22 = (safe_sub_func_uint64_t_u_u(l_1120[(p_1563->g_202 + 4)][(p_1563->g_202 + 4)][p_1563->g_202], (safe_div_func_uint8_t_u_u(((-3L) != (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(5UL, ((*l_1178) ^= (p_1563->g_1200[p_1563->g_202][(p_1563->g_202 + 4)] < l_1108)))), (((0x97ACL && ((*p_1563->g_991) = (safe_lshift_func_uint16_t_u_s((*p_1563->g_991), 12)))) != p_20) >= ((0UL && l_1297) == (*l_1177)))))), p_20))));
                }
                if (((p_24 >= (safe_sub_func_uint8_t_u_u((((void*)0 == l_1312) < (0x31F9L == ((safe_rshift_func_uint8_t_u_u((((((!(+(safe_add_func_uint64_t_u_u(((-8L) == p_1563->g_613), (l_1113[0][2][2] < ((*l_1178) = (p_24 | (safe_div_func_uint16_t_u_u((((*p_1563->g_991) = (l_1319 != (void*)0)) && l_1320), (*l_1177)))))))))) & p_22) < (*p_1563->g_881)) > (*p_1563->g_384)) , p_21), (*p_1563->g_881))) & p_1563->g_344))), (*p_1563->g_881)))) , p_22))
                { /* block id: 675 */
                    if (((safe_sub_func_uint32_t_u_u(p_23, (0x4FA5274BL != (3UL || ((0x3A9493183ACD95F9L >= ((safe_rshift_func_int8_t_s_s((!(p_1563->g_1327[1][0][0] != (void*)0)), ((((*p_1563->g_1328)--) , ((((+(**p_1563->g_728)) , l_1331[0][2]) == l_1331[0][2]) || (*p_1563->g_384))) >= p_22))) != 8L)) <= 0x1635C126L))))) == p_1563->g_202))
                    { /* block id: 677 */
                        l_1036 = (p_21 , (*l_1177));
                    }
                    else
                    { /* block id: 679 */
                        int32_t *l_1332 = &l_1036;
                        (*p_1563->g_1180) = l_1332;
                    }
                    if (l_1297)
                        continue;
                }
                else
                { /* block id: 683 */
                    uint64_t l_1353 = 0UL;
                    if ((*l_1178))
                    { /* block id: 684 */
                        uint32_t l_1335 = 0xFB1FF39BL;
                        l_1335 = (safe_add_func_uint32_t_u_u(0xA3831182L, p_1563->g_149));
                        return p_22;
                    }
                    else
                    { /* block id: 687 */
                        int32_t *l_1336 = &l_1109;
                        int8_t ***l_1351 = &p_1563->g_728;
                        int32_t *l_1355 = &l_1036;
                        l_1336 = ((**p_1563->g_412) = &l_1285);
                        (*l_1355) &= (((safe_mod_func_uint8_t_u_u((((&p_20 == ((safe_rshift_func_int8_t_s_u((&p_22 != &p_22), (((safe_rshift_func_int16_t_s_u(((*l_1177) = (safe_add_func_int32_t_s_s((((safe_add_func_int16_t_s_s(((((*l_1336) = ((safe_sub_func_uint16_t_u_u((*p_1563->g_991), (safe_rshift_func_uint8_t_u_s(((((((((void*)0 != &p_1563->g_644) == (((void*)0 != l_1351) == (((*l_1178) = l_1120[4][0][1]) , l_1352))) || p_23) , (*l_1178)) <= 253UL) , (*p_1563->g_881)) < (*l_1177)), p_22)))) >= (*p_1563->g_881))) , l_1353) || (*p_1563->g_384)), (*l_1177))) , (*l_1177)) , l_1353), p_20))), l_1354)) <= l_1297) , 0xA8L))) , &p_1563->g_854)) || p_24) ^ 1UL), p_22)) == l_1354) >= (**p_1563->g_728));
                    }
                    if (p_23)
                        continue;
                }
            }
        }
        l_1106 |= (p_22 = ((safe_div_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s(l_1360, 2)) == (0xDAL != p_21)) | (**p_1563->g_728)), (safe_mod_func_uint64_t_u_u(0xAD8601563A82948AL, p_21)))) , ((*l_1178) && ((((((safe_div_func_uint32_t_u_u(0x7B056E78L, l_1113[0][1][3])) > p_22) && p_22) , (*l_1178)) && l_1036) >= p_22))));
    }
    return (*p_1563->g_881);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_26(int32_t  p_27, int32_t  p_28, struct S0 * p_1563)
{ /* block id: 13 */
    int32_t **l_57 = (void*)0;
    int32_t l_58 = 4L;
    int16_t *l_76 = &p_1563->g_66;
    uint32_t l_375[10] = {0x94570321L,0xAD33C40AL,0x94570321L,0x94570321L,0xAD33C40AL,0x94570321L,0x94570321L,0xAD33C40AL,0x94570321L,0x94570321L};
    int16_t l_403 = 0x6CDCL;
    int32_t *l_431 = (void*)0;
    int32_t *l_442 = &p_1563->g_396;
    uint8_t *l_461 = (void*)0;
    uint8_t **l_460 = &l_461;
    int32_t ***l_506[1][3][8] = {{{(void*)0,&p_1563->g_120,(void*)0,(void*)0,&p_1563->g_120,(void*)0,(void*)0,&p_1563->g_120},{(void*)0,&p_1563->g_120,(void*)0,(void*)0,&p_1563->g_120,(void*)0,(void*)0,&p_1563->g_120},{(void*)0,&p_1563->g_120,(void*)0,(void*)0,&p_1563->g_120,(void*)0,(void*)0,&p_1563->g_120}}};
    int32_t ****l_505 = &l_506[0][0][1];
    uint8_t l_592 = 252UL;
    int64_t *l_666 = &p_1563->g_344;
    uint32_t *l_885 = &l_375[6];
    uint32_t **l_884 = &l_885;
    uint64_t l_933[5];
    int16_t l_950[9] = {0x247CL,0x247CL,0x247CL,0x247CL,0x247CL,0x247CL,0x247CL,0x247CL,0x247CL};
    uint32_t l_954 = 0x3D2F48E8L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_933[i] = 18446744073709551609UL;
    return l_954;
}


/* ------------------------------------------ */
/* 
 * reads : p_1563->g_53 p_1563->g_5
 * writes: p_1563->g_51 p_1563->g_53
 */
int32_t  func_29(int8_t  p_30, uint32_t  p_31, int32_t  p_32, int32_t  p_33, uint8_t  p_34, struct S0 * p_1563)
{ /* block id: 8 */
    uint64_t l_48 = 1UL;
    int32_t *l_49 = (void*)0;
    int32_t *l_50 = &p_1563->g_51;
    int32_t *l_52 = &p_1563->g_53;
    int32_t **l_56 = &l_50;
    (*l_52) |= (+((0x1EL < 0x45L) , ((*l_50) = l_48)));
    (*l_56) = l_50;
    return p_1563->g_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1563->g_53 p_1563->g_6 p_1563->g_83 p_1563->g_132 p_1563->g_120 p_1563->g_66 p_1563->g_149 p_1563->g_146 p_1563->g_202 p_1563->g_51 p_1563->g_47 p_1563->g_55 p_1563->g_255 p_1563->g_145 p_1563->g_263 p_1563->g_286 p_1563->g_179 p_1563->g_341 p_1563->g_345 p_1563->g_344
 * writes: p_1563->g_53 p_1563->g_120 p_1563->g_132 p_1563->g_51 p_1563->g_145 p_1563->g_146 p_1563->g_149 p_1563->g_66 p_1563->g_179 p_1563->g_202 p_1563->g_55 p_1563->g_255 p_1563->g_263 p_1563->g_283 p_1563->g_345 p_1563->g_83 p_1563->g_357
 */
uint16_t  func_71(int16_t * p_72, int32_t * p_73, int16_t  p_74, uint8_t  p_75, struct S0 * p_1563)
{ /* block id: 22 */
    uint8_t l_84 = 0UL;
    for (p_74 = 0; (p_74 >= (-26)); p_74 = safe_sub_func_uint16_t_u_u(p_74, 2))
    { /* block id: 25 */
        int32_t l_80 = 4L;
        int32_t *l_81 = &p_1563->g_53;
        int32_t *l_82[1];
        int32_t l_87 = (-9L);
        uint32_t *l_356[4];
        int i;
        for (i = 0; i < 1; i++)
            l_82[i] = &p_1563->g_51;
        for (i = 0; i < 4; i++)
            l_356[i] = (void*)0;
        ++l_84;
        (*l_81) |= 0x438D1E6FL;
        (*l_81) &= (~l_87);
        (*l_81) = ((8L | func_88(p_74, (p_1563->g_357[7][6] = (safe_add_func_int32_t_s_s((p_75 , ((*l_81) = (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_s((p_1563->g_6 >= (safe_add_func_int16_t_s_s(p_1563->g_6, (((safe_lshift_func_int8_t_s_u(p_1563->g_6, 0)) != func_104(p_1563->g_6, p_1563)) | (safe_mul_func_int8_t_s_s(p_1563->g_6, l_84)))))), l_84)) ^ p_1563->g_341) < p_1563->g_344) ^ p_1563->g_344), (-6L))), 65527UL)))), p_1563->g_6))), p_73, p_1563)) && l_84);
    }
    return p_1563->g_255[5][5][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1563->g_51
 * writes: p_1563->g_51
 */
uint64_t  func_88(uint8_t  p_89, uint32_t  p_90, int32_t * p_91, struct S0 * p_1563)
{ /* block id: 134 */
    int32_t *l_358 = &p_1563->g_51;
    int32_t **l_359 = &l_358;
    (*l_358) ^= p_89;
    (*l_359) = p_91;
    return p_90;
}


/* ------------------------------------------ */
/* 
 * reads : p_1563->g_83 p_1563->g_53 p_1563->g_132 p_1563->g_120 p_1563->g_66 p_1563->g_149 p_1563->g_6 p_1563->g_146 p_1563->g_202 p_1563->g_51 p_1563->g_47 p_1563->g_55 p_1563->g_255 p_1563->g_145 p_1563->g_263 p_1563->g_286 p_1563->g_179 p_1563->g_341 p_1563->g_345
 * writes: p_1563->g_53 p_1563->g_120 p_1563->g_132 p_1563->g_51 p_1563->g_145 p_1563->g_146 p_1563->g_149 p_1563->g_66 p_1563->g_179 p_1563->g_202 p_1563->g_55 p_1563->g_255 p_1563->g_263 p_1563->g_283 p_1563->g_345 p_1563->g_83
 */
int16_t  func_104(uint32_t  p_105, struct S0 * p_1563)
{ /* block id: 29 */
    int32_t *l_106 = &p_1563->g_53;
    int32_t **l_119 = (void*)0;
    int32_t ***l_118[3];
    uint8_t *l_131[7][9] = {{&p_1563->g_132[2][6][4],&p_1563->g_132[2][5][1],&p_1563->g_132[1][2][0],&p_1563->g_132[3][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[3][2][0],&p_1563->g_132[1][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[2][6][4]},{&p_1563->g_132[2][6][4],&p_1563->g_132[2][5][1],&p_1563->g_132[1][2][0],&p_1563->g_132[3][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[3][2][0],&p_1563->g_132[1][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[2][6][4]},{&p_1563->g_132[2][6][4],&p_1563->g_132[2][5][1],&p_1563->g_132[1][2][0],&p_1563->g_132[3][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[3][2][0],&p_1563->g_132[1][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[2][6][4]},{&p_1563->g_132[2][6][4],&p_1563->g_132[2][5][1],&p_1563->g_132[1][2][0],&p_1563->g_132[3][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[3][2][0],&p_1563->g_132[1][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[2][6][4]},{&p_1563->g_132[2][6][4],&p_1563->g_132[2][5][1],&p_1563->g_132[1][2][0],&p_1563->g_132[3][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[3][2][0],&p_1563->g_132[1][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[2][6][4]},{&p_1563->g_132[2][6][4],&p_1563->g_132[2][5][1],&p_1563->g_132[1][2][0],&p_1563->g_132[3][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[3][2][0],&p_1563->g_132[1][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[2][6][4]},{&p_1563->g_132[2][6][4],&p_1563->g_132[2][5][1],&p_1563->g_132[1][2][0],&p_1563->g_132[3][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[3][2][0],&p_1563->g_132[1][2][0],&p_1563->g_132[2][5][1],&p_1563->g_132[2][6][4]}};
    int32_t l_133 = 0x26C347B9L;
    int32_t l_142 = (-1L);
    int64_t *l_143 = (void*)0;
    int64_t *l_144 = &p_1563->g_145;
    int64_t *l_147 = (void*)0;
    int64_t *l_148 = &p_1563->g_149;
    int16_t l_353 = 6L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_118[i] = &l_119;
    (*l_106) = (-1L);
    if ((safe_sub_func_uint16_t_u_u(p_1563->g_83[5], func_109(&p_1563->g_53, (safe_unary_minus_func_uint16_t_u((safe_mod_func_int64_t_s_s((((safe_add_func_uint16_t_u_u((((p_1563->g_120 = &l_106) != (void*)0) , (((*l_148) &= (p_1563->g_146 = ((*l_144) = (safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((((+p_1563->g_83[1]) > ((*l_106) <= (*l_106))) != (((safe_div_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((p_1563->g_51 = ((((((p_1563->g_132[2][1][2]++) || (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((((p_1563->g_53 < ((safe_mod_func_int16_t_s_s(4L, 65535UL)) | (**p_1563->g_120))) ^ p_105) , p_1563->g_132[0][3][4]), p_1563->g_66)), 3))) > 0x5F5CL) , p_105) || p_105) || p_1563->g_132[1][2][0])) >= 4294967291UL), (*l_106))) < l_142), p_105)) & p_105) >= p_1563->g_53)), 3)) || p_1563->g_132[1][2][0]), p_1563->g_53))))) && 0x0632A4309C40C0AAL)), p_1563->g_6)) , 0x4BD10C2188DBB9F3L) < 9UL), p_1563->g_53)))), &p_1563->g_55, p_1563))))
    { /* block id: 116 */
        int64_t l_342 = 0x57D323782F27B9E7L;
        int32_t l_343[5][1][8] = {{{0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L}},{{0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L}},{{0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L}},{{0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L}},{{0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L,0x371CF623L}}};
        int i, j, k;
        p_1563->g_345--;
        return l_343[0][0][1];
    }
    else
    { /* block id: 119 */
        for (p_1563->g_202 = (-16); (p_1563->g_202 > 6); p_1563->g_202 = safe_add_func_uint16_t_u_u(p_1563->g_202, 5))
        { /* block id: 122 */
            int32_t l_352 = 0x4C7E9080L;
            for (p_1563->g_345 = 0; (p_1563->g_345 <= 33); ++p_1563->g_345)
            { /* block id: 125 */
                return l_352;
            }
        }
        for (p_1563->g_51 = 0; p_1563->g_51 < 10; p_1563->g_51 += 1)
        {
            p_1563->g_83[p_1563->g_51] = 0x370DDD1128F465AAL;
        }
    }
    return l_353;
}


/* ------------------------------------------ */
/* 
 * reads : p_1563->g_83 p_1563->g_66 p_1563->g_6 p_1563->g_149 p_1563->g_132 p_1563->g_53 p_1563->g_120 p_1563->g_146 p_1563->g_202 p_1563->g_51 p_1563->g_47 p_1563->g_55 p_1563->g_255 p_1563->g_145 p_1563->g_263 p_1563->g_286 p_1563->g_179 p_1563->g_341
 * writes: p_1563->g_53 p_1563->g_66 p_1563->g_179 p_1563->g_55 p_1563->g_146 p_1563->g_120 p_1563->g_202 p_1563->g_132 p_1563->g_51 p_1563->g_255 p_1563->g_263 p_1563->g_283
 */
uint16_t  func_109(int32_t * p_110, uint16_t  p_111, int32_t ** p_112, struct S0 * p_1563)
{ /* block id: 37 */
    int32_t *l_150[6] = {(void*)0,&p_1563->g_53,(void*)0,(void*)0,&p_1563->g_53,(void*)0};
    uint16_t l_151 = 0x584BL;
    uint64_t l_154[1];
    uint64_t l_178 = 0x438FE63D49D56FFFL;
    int32_t *l_200 = &p_1563->g_6;
    int32_t l_256 = 1L;
    uint16_t l_257 = 0UL;
    int16_t *l_307 = (void*)0;
    uint64_t l_336 = 0x7FFBDC57ADCA7809L;
    int i;
    for (i = 0; i < 1; i++)
        l_154[i] = 18446744073709551610UL;
    ++l_151;
    if (((*p_110) = l_154[0]))
    { /* block id: 40 */
        int16_t l_155[6] = {0x433CL,0x433CL,0x433CL,0x433CL,0x433CL,0x433CL};
        uint64_t *l_156 = (void*)0;
        uint64_t *l_157 = &l_154[0];
        int16_t *l_160 = &p_1563->g_66;
        int32_t l_177 = 0x0E3CBC81L;
        int32_t l_180 = 0x555F879EL;
        uint16_t *l_221 = (void*)0;
        int32_t ***l_285 = &p_1563->g_120;
        int32_t ****l_284[6][2][4] = {{{&l_285,&l_285,&l_285,&l_285},{&l_285,&l_285,&l_285,&l_285}},{{&l_285,&l_285,&l_285,&l_285},{&l_285,&l_285,&l_285,&l_285}},{{&l_285,&l_285,&l_285,&l_285},{&l_285,&l_285,&l_285,&l_285}},{{&l_285,&l_285,&l_285,&l_285},{&l_285,&l_285,&l_285,&l_285}},{{&l_285,&l_285,&l_285,&l_285},{&l_285,&l_285,&l_285,&l_285}},{{&l_285,&l_285,&l_285,&l_285},{&l_285,&l_285,&l_285,&l_285}}};
        int i, j, k;
        l_180 ^= (((((*l_157) = (((void*)0 == &p_1563->g_55) > l_155[0])) >= 0x0EC4C324AB99CF72L) > (safe_mul_func_int16_t_s_s(((*l_160) ^= (p_1563->g_83[0] > 0x7884L)), (((safe_rshift_func_uint16_t_u_u(l_155[0], 6)) , (safe_div_func_uint8_t_u_u((l_177 = ((p_1563->g_179 = (safe_mod_func_int64_t_s_s((p_1563->g_83[5] | (safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((((safe_div_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(p_1563->g_6, p_1563->g_149)) ^ 0xAF5AL), 5L)) , l_177) | p_1563->g_6) , l_155[0]), p_1563->g_83[5])), p_1563->g_132[1][2][0])) == 1L) , l_178), 1UL))), 4UL))) & p_111)), 0xCCL))) < (*p_110))))) <= 1UL);
        (**p_1563->g_120) = (**p_1563->g_120);
lbl_261:
        (*p_1563->g_120) = l_150[1];
        for (p_1563->g_146 = 0; (p_1563->g_146 >= 0); p_1563->g_146 -= 1)
        { /* block id: 50 */
            int16_t *l_187 = &l_155[0];
            int32_t **l_193 = (void*)0;
            int32_t ***l_201 = &p_1563->g_120;
            uint64_t *l_211 = &l_178;
            uint8_t *l_212 = &p_1563->g_132[1][2][0];
            uint8_t *l_245 = &p_1563->g_132[1][2][0];
            int i;
            if ((((safe_mod_func_uint8_t_u_u(((*l_212) = ((((*l_211) ^= ((safe_rshift_func_uint8_t_u_u(l_154[p_1563->g_146], (safe_sub_func_int16_t_s_s(((*l_187) = ((*l_160) &= p_1563->g_132[1][2][4])), (safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((l_193 == ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_177 != ((void*)0 != l_200)), 2)), 6)) , ((*l_201) = &p_1563->g_55))))), 2L)), 3)))))) == ((p_1563->g_202++) , (safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((((p_1563->g_51 & l_180) || (-2L)) & p_1563->g_51), p_111)), p_111)), 253UL))))) , p_1563->g_83[5]) >= p_1563->g_83[5])), p_111)) && p_1563->g_47) == p_1563->g_51))
            { /* block id: 57 */
                uint32_t *l_215 = &p_1563->g_202;
                uint16_t *l_220 = &l_151;
                int32_t l_230 = 0x65F54F32L;
                int32_t l_231 = (-1L);
                int8_t *l_282 = &p_1563->g_255[5][0][2];
                l_231 &= (((safe_mul_func_uint16_t_u_u(((0L == 0L) >= ((++(*l_215)) ^ (safe_sub_func_uint16_t_u_u(((*l_220) ^= 8UL), (l_221 != (void*)0))))), (safe_sub_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u(((safe_div_func_int8_t_s_s((((safe_mod_func_int64_t_s_s(((((*p_110) ^ 4294967295UL) & ((void*)0 == &p_112)) | p_1563->g_149), l_230)) & p_111) & 0x05C72845L), p_111)) > 9L), l_155[0])) && p_111), l_230)))) , (*p_1563->g_120)) != (void*)0);
                if (l_155[0])
                    continue;
                (**l_201) = l_150[1];
                for (p_1563->g_51 = 0; (p_1563->g_51 < (-23)); p_1563->g_51 = safe_sub_func_int64_t_s_s(p_1563->g_51, 5))
                { /* block id: 65 */
                    int32_t *l_262 = &p_1563->g_263;
                    int32_t ****l_275 = &l_201;
                    for (l_230 = (-7); (l_230 >= (-29)); l_230 = safe_sub_func_uint32_t_u_u(l_230, 2))
                    { /* block id: 68 */
                        int16_t l_236 = (-1L);
                        uint32_t **l_243 = &l_215;
                        uint8_t **l_244 = &l_212;
                        int8_t *l_254 = &p_1563->g_255[5][0][2];
                        int32_t l_258 = 0x564C46BDL;
                        (*p_110) = (l_236 || (((void*)0 != &l_154[0]) <= 0xB5413A09L));
                        l_258 &= (safe_sub_func_uint64_t_u_u(p_111, ((*l_211) = (safe_rshift_func_int8_t_s_s(p_111, ((safe_div_func_int16_t_s_s(((((((*l_244) = ((&p_1563->g_202 == ((*l_243) = &p_1563->g_202)) , &p_1563->g_132[0][0][0])) != l_245) != ((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(p_1563->g_51, p_1563->g_149)), (safe_mul_func_int8_t_s_s(((*l_254) ^= (safe_mul_func_int8_t_s_s((l_155[1] , p_111), p_1563->g_132[1][2][0]))), 1UL)))) & 7UL)) ^ p_111) == l_256), l_257)) != p_1563->g_145))))));
                        (*p_110) |= (safe_mod_func_int16_t_s_s(0x56E7L, 65535UL));
                        if (l_256)
                            goto lbl_261;
                    }
                    (*p_1563->g_120) = (*p_112);
                    l_180 &= ((((*l_262) &= 0x0BED7B09L) , p_1563->g_53) == (safe_add_func_uint8_t_u_u((((safe_unary_minus_func_uint32_t_u(((+((((safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(p_111, (safe_add_func_uint16_t_u_u((&p_112 != ((*l_275) = &p_1563->g_120)), (safe_lshift_func_uint16_t_u_u((p_1563->g_283 = (((l_231 == ((((~(((+((safe_rshift_func_uint8_t_u_s(0x23L, 6)) || (safe_mul_func_uint16_t_u_u(0x5552L, 0x3308L)))) , (void*)0) == l_282)) || 5L) == p_111) >= p_1563->g_146)) , p_1563->g_83[8]) <= p_111)), p_111)))))), p_111)), p_1563->g_51)) == p_111) , p_1563->g_6) ^ p_1563->g_132[1][0][0])) != 0x08A6EBA9FA7C6809L))) & p_1563->g_83[5]) > p_111), 0x52L)));
                }
            }
            else
            { /* block id: 84 */
                if ((*p_110))
                    break;
            }
            (*p_110) ^= (l_284[2][0][3] != p_1563->g_286);
            for (p_1563->g_51 = 1; (p_1563->g_51 != (-16)); p_1563->g_51 = safe_sub_func_uint64_t_u_u(p_1563->g_51, 5))
            { /* block id: 90 */
                int8_t l_306 = (-4L);
                int16_t **l_308 = &l_187;
                int32_t *l_315 = &p_1563->g_6;
                int32_t l_316 = 0L;
                int32_t l_321 = 0x3D078B6DL;
                uint8_t l_322 = 249UL;
                (*p_110) = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((((safe_div_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s(((((p_1563->g_132[1][2][0] == 0x1FECF9D78492DA3FL) || (safe_rshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((l_306 , (((*l_308) = l_307) != (void*)0)) , (safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((p_1563->g_83[5] , ((((**l_201) != l_315) , (*p_110)) | 0x6FCDF892L)), p_111)), p_1563->g_145)), p_1563->g_263))), p_1563->g_255[5][0][2])), l_316)), p_111)), p_111))) , &p_1563->g_55) == (void*)0), p_111)) <= p_111) <= p_1563->g_66), (*l_200))) , (*p_110)) > p_1563->g_145))), p_111)), 10));
                for (l_180 = 0; (l_180 >= 16); l_180 = safe_add_func_int16_t_s_s(l_180, 9))
                { /* block id: 95 */
                    int16_t l_319 = 1L;
                    int32_t l_320 = 0x1513AD5CL;
                    for (l_151 = 0; (l_151 <= 0); l_151 += 1)
                    { /* block id: 98 */
                        l_319 ^= 0L;
                        return p_1563->g_179;
                    }
                    l_322++;
                }
            }
            (*p_110) = (*p_110);
        }
    }
    else
    { /* block id: 107 */
        uint32_t l_327 = 3UL;
        int32_t *l_328 = (void*)0;
        uint8_t *l_333 = &p_1563->g_132[1][2][0];
        (*p_112) = (*p_1563->g_120);
        (**p_112) = (safe_sub_func_int8_t_s_s(((l_327 >= ((l_200 = l_328) == (void*)0)) ^ (((**p_112) | (safe_mod_func_uint8_t_u_u(((*l_333) = (safe_mod_func_uint16_t_u_u(0UL, p_1563->g_66))), 8L))) , p_111)), (safe_sub_func_int8_t_s_s((-4L), 4UL))));
    }
    l_336--;
    (*p_110) = (safe_mul_func_int16_t_s_s(0x7FC3L, p_1563->g_341));
    return p_1563->g_341;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1564;
    struct S0* p_1563 = &c_1564;
    struct S0 c_1565 = {
        {{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}}, // p_1563->g_2
        0x06E871D9L, // p_1563->g_3
        3L, // p_1563->g_4
        0x0FE1CA29L, // p_1563->g_5
        (-3L), // p_1563->g_6
        0x7DB81FDFL, // p_1563->g_47
        0L, // p_1563->g_51
        0x0A064F57L, // p_1563->g_53
        (void*)0, // p_1563->g_55
        {{&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55},{&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55},{&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55,&p_1563->g_55}}, // p_1563->g_54
        (-8L), // p_1563->g_66
        {0x06F84C1F29C70A11L,0x06F84C1F29C70A11L,0x06F84C1F29C70A11L,0x06F84C1F29C70A11L,0x06F84C1F29C70A11L,0x06F84C1F29C70A11L,0x06F84C1F29C70A11L,0x06F84C1F29C70A11L,0x06F84C1F29C70A11L,0x06F84C1F29C70A11L}, // p_1563->g_83
        &p_1563->g_55, // p_1563->g_120
        {{{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L}},{{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L}},{{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L}},{{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L}},{{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L},{0x4DL,255UL,255UL,0x4DL,0x98L}}}, // p_1563->g_132
        0x634B6610EE195F76L, // p_1563->g_145
        (-1L), // p_1563->g_146
        0x31BD9B2BB32BA0D4L, // p_1563->g_149
        9UL, // p_1563->g_179
        0xF52FE4D6L, // p_1563->g_202
        {{{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L}},{{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L}},{{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L}},{{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L}},{{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L}},{{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L}},{{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L}},{{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L}},{{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L}},{{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L},{0x79L,(-6L),0x64L}}}, // p_1563->g_255
        (-4L), // p_1563->g_263
        18446744073709551615UL, // p_1563->g_283
        (void*)0, // p_1563->g_286
        (-1L), // p_1563->g_341
        1L, // p_1563->g_344
        1UL, // p_1563->g_345
        {{0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L},{0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L},{0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L},{0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L},{0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L},{0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L},{0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L},{0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L},{0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L}}, // p_1563->g_357
        &p_1563->g_66, // p_1563->g_384
        {&p_1563->g_384,&p_1563->g_384,&p_1563->g_384}, // p_1563->g_383
        0x2C490CD3L, // p_1563->g_396
        &p_1563->g_54[1][2], // p_1563->g_412
        {{{0x26L,0x26L,0x26L,0x26L,0x26L,0x26L,0x26L,0x26L},{0x26L,0x26L,0x26L,0x26L,0x26L,0x26L,0x26L,0x26L},{0x26L,0x26L,0x26L,0x26L,0x26L,0x26L,0x26L,0x26L},{0x26L,0x26L,0x26L,0x26L,0x26L,0x26L,0x26L,0x26L},{0x26L,0x26L,0x26L,0x26L,0x26L,0x26L,0x26L,0x26L}}}, // p_1563->g_485
        18446744073709551615UL, // p_1563->g_491
        0xCBEAL, // p_1563->g_500
        &p_1563->g_396, // p_1563->g_536
        {&p_1563->g_396,&p_1563->g_396,&p_1563->g_396,&p_1563->g_396,&p_1563->g_396,&p_1563->g_396,&p_1563->g_396}, // p_1563->g_538
        0x43L, // p_1563->g_558
        (-1L), // p_1563->g_560
        4294967295UL, // p_1563->g_584
        0UL, // p_1563->g_613
        (void*)0, // p_1563->g_644
        0x78DB03A0L, // p_1563->g_651
        0x9C2DL, // p_1563->g_659
        &p_1563->g_485[0][1][1], // p_1563->g_729
        &p_1563->g_729, // p_1563->g_728
        4294967295UL, // p_1563->g_736
        0x06D7L, // p_1563->g_740
        0x2AA3F4B7L, // p_1563->g_854
        &p_1563->g_132[4][5][1], // p_1563->g_881
        &p_1563->g_881, // p_1563->g_880
        0L, // p_1563->g_949
        1UL, // p_1563->g_951
        &p_1563->g_740, // p_1563->g_991
        1L, // p_1563->g_1111
        {&p_1563->g_341,&p_1563->g_341,&p_1563->g_341,&p_1563->g_341}, // p_1563->g_1181
        &p_1563->g_1181[3], // p_1563->g_1180
        {{0xB2L,0UL,252UL,0UL,0xB2L,0xB2L},{0xB2L,0UL,252UL,0UL,0xB2L,0xB2L}}, // p_1563->g_1200
        0x4AF6L, // p_1563->g_1209
        0L, // p_1563->g_1233
        &p_1563->g_613, // p_1563->g_1328
        {{{&p_1563->g_1328,&p_1563->g_1328},{&p_1563->g_1328,&p_1563->g_1328},{&p_1563->g_1328,&p_1563->g_1328},{&p_1563->g_1328,&p_1563->g_1328},{&p_1563->g_1328,&p_1563->g_1328}},{{&p_1563->g_1328,&p_1563->g_1328},{&p_1563->g_1328,&p_1563->g_1328},{&p_1563->g_1328,&p_1563->g_1328},{&p_1563->g_1328,&p_1563->g_1328},{&p_1563->g_1328,&p_1563->g_1328}}}, // p_1563->g_1327
        {&p_1563->g_51,&p_1563->g_51,&p_1563->g_51,&p_1563->g_51,&p_1563->g_51,&p_1563->g_51,&p_1563->g_51,&p_1563->g_51}, // p_1563->g_1444
        &p_1563->g_51, // p_1563->g_1445
        (-9L), // p_1563->g_1515
        (void*)0, // p_1563->g_1530
        &p_1563->g_1530, // p_1563->g_1529
        &p_1563->g_6, // p_1563->g_1562
    };
    c_1564 = c_1565;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1563);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1563->g_2[i][j], "p_1563->g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1563->g_3, "p_1563->g_3", print_hash_value);
    transparent_crc(p_1563->g_4, "p_1563->g_4", print_hash_value);
    transparent_crc(p_1563->g_5, "p_1563->g_5", print_hash_value);
    transparent_crc(p_1563->g_6, "p_1563->g_6", print_hash_value);
    transparent_crc(p_1563->g_47, "p_1563->g_47", print_hash_value);
    transparent_crc(p_1563->g_51, "p_1563->g_51", print_hash_value);
    transparent_crc(p_1563->g_53, "p_1563->g_53", print_hash_value);
    transparent_crc(p_1563->g_66, "p_1563->g_66", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1563->g_83[i], "p_1563->g_83[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1563->g_132[i][j][k], "p_1563->g_132[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1563->g_145, "p_1563->g_145", print_hash_value);
    transparent_crc(p_1563->g_146, "p_1563->g_146", print_hash_value);
    transparent_crc(p_1563->g_149, "p_1563->g_149", print_hash_value);
    transparent_crc(p_1563->g_179, "p_1563->g_179", print_hash_value);
    transparent_crc(p_1563->g_202, "p_1563->g_202", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1563->g_255[i][j][k], "p_1563->g_255[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1563->g_263, "p_1563->g_263", print_hash_value);
    transparent_crc(p_1563->g_283, "p_1563->g_283", print_hash_value);
    transparent_crc(p_1563->g_341, "p_1563->g_341", print_hash_value);
    transparent_crc(p_1563->g_344, "p_1563->g_344", print_hash_value);
    transparent_crc(p_1563->g_345, "p_1563->g_345", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1563->g_357[i][j], "p_1563->g_357[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1563->g_396, "p_1563->g_396", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1563->g_485[i][j][k], "p_1563->g_485[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1563->g_491, "p_1563->g_491", print_hash_value);
    transparent_crc(p_1563->g_500, "p_1563->g_500", print_hash_value);
    transparent_crc(p_1563->g_558, "p_1563->g_558", print_hash_value);
    transparent_crc(p_1563->g_560, "p_1563->g_560", print_hash_value);
    transparent_crc(p_1563->g_584, "p_1563->g_584", print_hash_value);
    transparent_crc(p_1563->g_613, "p_1563->g_613", print_hash_value);
    transparent_crc(p_1563->g_651, "p_1563->g_651", print_hash_value);
    transparent_crc(p_1563->g_659, "p_1563->g_659", print_hash_value);
    transparent_crc(p_1563->g_736, "p_1563->g_736", print_hash_value);
    transparent_crc(p_1563->g_740, "p_1563->g_740", print_hash_value);
    transparent_crc(p_1563->g_854, "p_1563->g_854", print_hash_value);
    transparent_crc(p_1563->g_949, "p_1563->g_949", print_hash_value);
    transparent_crc(p_1563->g_951, "p_1563->g_951", print_hash_value);
    transparent_crc(p_1563->g_1111, "p_1563->g_1111", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1563->g_1200[i][j], "p_1563->g_1200[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1563->g_1209, "p_1563->g_1209", print_hash_value);
    transparent_crc(p_1563->g_1233, "p_1563->g_1233", print_hash_value);
    transparent_crc(p_1563->g_1515, "p_1563->g_1515", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
