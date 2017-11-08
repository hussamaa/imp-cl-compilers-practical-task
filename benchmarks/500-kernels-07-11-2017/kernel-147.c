// -g 3,16,8 -l 3,8,8
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


// Seed: 1496128277

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_22[2];
    int32_t * volatile g_21;
    volatile int32_t g_28;
    volatile int32_t g_29;
    volatile int32_t g_30;
    volatile int32_t g_31;
    volatile int32_t g_32[3][3][9];
    int32_t g_33;
    int32_t g_35;
    volatile uint8_t g_85;
    int32_t g_122;
    int32_t g_123;
    int32_t g_124;
    int64_t g_128;
    uint16_t g_129;
    int16_t g_149[10];
    uint16_t g_150[5][7][7];
    uint64_t g_152[4][5][6];
    int32_t *g_155;
    int8_t g_215[8];
    int8_t g_228;
    int8_t *g_227;
    volatile uint64_t g_236;
    volatile uint64_t *g_235;
    int8_t ** volatile *g_335;
    uint64_t g_338;
    uint64_t *g_364;
    volatile int32_t ** volatile g_396;
    uint8_t g_404;
    int64_t g_483;
    int64_t *g_485;
    uint16_t g_495;
    int16_t g_507;
    uint32_t g_512[3];
    uint64_t g_524[2];
    uint64_t *g_544;
    uint64_t ** volatile g_543;
    uint64_t ** volatile *g_542;
    uint16_t g_588[6][8];
    int64_t g_611[1][5];
    int32_t g_613;
    volatile uint8_t g_633;
    uint32_t g_657;
    uint32_t g_719;
    uint16_t g_720;
    int32_t ** volatile g_727;
    int32_t ** volatile g_728;
    int16_t g_735;
    volatile int8_t g_846[9];
    uint8_t * volatile *g_879;
    int32_t ** volatile g_883;
    int32_t ** volatile g_916;
    int32_t ** volatile g_940[10];
    int32_t ** volatile g_942;
    uint32_t *g_1000;
    uint32_t **g_999[10][2][7];
    int64_t g_1021;
    uint32_t g_1066;
    uint8_t g_1108;
    uint64_t ***g_1111;
    int64_t g_1123;
    uint8_t *g_1231;
    int32_t * volatile g_1233;
    volatile int64_t g_1273[9][6];
    uint16_t g_1315;
    volatile int32_t g_1359;
    volatile int32_t *g_1358;
    volatile int32_t **g_1357;
    uint64_t g_1368[8][2][9];
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_1375);
int32_t  func_2(uint64_t  p_3, int64_t  p_4, int8_t  p_5, struct S0 * p_1375);
int32_t  func_14(int32_t  p_15, struct S0 * p_1375);
int32_t  func_23(int64_t  p_24, int32_t * p_25, struct S0 * p_1375);
int64_t  func_26(uint32_t  p_27, struct S0 * p_1375);
int32_t * func_40(int32_t  p_41, int32_t  p_42, int32_t  p_43, struct S0 * p_1375);
int16_t  func_46(int64_t  p_47, int8_t  p_48, int32_t * p_49, struct S0 * p_1375);
int16_t  func_52(int8_t  p_53, int32_t  p_54, int32_t * p_55, int32_t * p_56, uint16_t  p_57, struct S0 * p_1375);
int8_t  func_58(uint32_t  p_59, uint32_t  p_60, struct S0 * p_1375);
int32_t  func_61(int32_t  p_62, struct S0 * p_1375);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1375->g_21 p_1375->g_22 p_1375->g_33 p_1375->g_35 p_1375->g_227 p_1375->g_228 p_1375->g_1000 p_1375->g_719 p_1375->g_155 p_1375->g_128 p_1375->g_883 p_1375->g_122 p_1375->g_507 p_1375->g_1231 p_1375->g_1108 p_1375->g_152 p_1375->g_485 p_1375->g_483 p_1375->g_1315 p_1375->g_404 p_1375->g_728 p_1375->g_235 p_1375->g_236 p_1375->g_1021 p_1375->g_916 p_1375->g_1368
 * writes: p_1375->g_22 p_1375->g_33 p_1375->g_35 p_1375->g_122 p_1375->g_128 p_1375->g_483 p_1375->g_1021 p_1375->g_999 p_1375->g_1357 p_1375->g_1368
 */
uint32_t  func_1(struct S0 * p_1375)
{ /* block id: 4 */
    uint64_t l_16 = 0UL;
    int8_t l_1313[8] = {0x3DL,0x47L,0x3DL,0x3DL,0x47L,0x3DL,0x3DL,0x47L};
    int8_t l_1314[9][6][4] = {{{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL}},{{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL}},{{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL}},{{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL}},{{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL}},{{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL}},{{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL}},{{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL}},{{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL},{6L,(-3L),0x7CL,0x3BL}}};
    uint32_t l_1316 = 4294967295UL;
    int32_t l_1360 = 0x184C28A7L;
    int32_t l_1361[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1361[i] = 1L;
    if ((func_2((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(0x06L, (((safe_mul_func_uint8_t_u_u(((+((*p_1375->g_485) &= (func_14(l_16, p_1375) | ((((safe_sub_func_int16_t_s_s(((18446744073709551612UL && l_16) ^ (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(l_1313[2])) && (p_1375->g_507 , (l_1313[1] > (((*p_1375->g_1231) && l_1313[4]) == l_1314[5][0][3])))), l_1313[4])), l_1313[5])), l_1313[0])), l_1314[2][3][1]))), 0x5A5EL)) >= (*p_1375->g_227)) && p_1375->g_152[0][0][1]) , 0x07F7C264L)))) != l_1314[1][2][1]), (*p_1375->g_227))) , (-4L)) <= l_1313[4]))) , p_1375->g_1315), 0x2A472F3BL)), 0x0901L)), p_1375->g_404, l_1316, p_1375) , l_16))
    { /* block id: 641 */
        int32_t *l_1362 = &p_1375->g_122;
        int32_t *l_1363 = &l_1360;
        int32_t *l_1364 = (void*)0;
        int32_t *l_1365 = (void*)0;
        int32_t *l_1366 = &l_1361[0];
        int32_t *l_1367[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1367[i] = &l_1361[0];
        p_1375->g_1357 = (void*)0;
        ++p_1375->g_1368[5][0][0];
    }
    else
    { /* block id: 644 */
        int32_t *l_1371[4];
        uint16_t l_1372 = 0UL;
        int i;
        for (i = 0; i < 4; i++)
            l_1371[i] = &p_1375->g_122;
        l_1372++;
    }
    return l_1360;
}


/* ------------------------------------------ */
/* 
 * reads : p_1375->g_728 p_1375->g_155 p_1375->g_122 p_1375->g_235 p_1375->g_236 p_1375->g_228 p_1375->g_1021 p_1375->g_916 p_1375->g_227
 * writes: p_1375->g_122 p_1375->g_1021 p_1375->g_999
 */
int32_t  func_2(uint64_t  p_3, int64_t  p_4, int8_t  p_5, struct S0 * p_1375)
{ /* block id: 626 */
    int32_t l_1317 = 0x28F0DFBEL;
    int8_t **l_1326 = (void*)0;
    int32_t *l_1333 = &p_1375->g_123;
    int32_t *l_1334 = &p_1375->g_613;
    uint32_t **l_1348 = &p_1375->g_1000;
    uint64_t **l_1355 = &p_1375->g_364;
    (*p_1375->g_155) = (**p_1375->g_728);
    if ((l_1317 == (((safe_rshift_func_uint16_t_u_s(l_1317, 12)) & (((((((((safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(l_1317, 0x53FCCFCBL)), (l_1326 != (void*)0))) > ((((((safe_lshift_func_uint16_t_u_u(((p_4 & ((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(((-3L) < ((((p_5 <= 18446744073709551615UL) | 65535UL) , l_1333) != (void*)0)), 1UL)) ^ p_5), l_1317)) >= p_3)) , p_3), 14)) , (void*)0) == (void*)0) | (*p_1375->g_235)) || l_1317) >= 0xF354CBBCL)) > p_1375->g_228) , l_1334) == &p_1375->g_123) <= 0L) >= 0xDB78L) , 0x64159BCAADDC1790L) <= 0xA6C2AA889E55DE66L)) , l_1317)))
    { /* block id: 628 */
        for (p_1375->g_1021 = 0; (p_1375->g_1021 <= 12); p_1375->g_1021++)
        { /* block id: 631 */
            return (**p_1375->g_916);
        }
    }
    else
    { /* block id: 634 */
        uint32_t ***l_1349 = &p_1375->g_999[1][1][6];
        uint32_t ***l_1350 = &l_1348;
        int32_t l_1356 = 0x7B5BCCE4L;
        l_1356 |= (safe_add_func_int32_t_s_s(((*p_1375->g_155) = p_4), ((safe_mul_func_uint16_t_u_u(p_5, ((((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((&p_1375->g_1000 == (void*)0), (safe_unary_minus_func_int8_t_s((+((((*l_1350) = ((*l_1349) = l_1348)) != (void*)0) == (((((*p_1375->g_227) | (safe_sub_func_uint8_t_u_u(l_1317, ((safe_mod_func_uint16_t_u_u(p_5, l_1317)) , (*p_1375->g_227))))) ^ 0x25L) <= p_3) != 1UL))))))), 0x9649L)) , &p_1375->g_364) == l_1355) || p_3))) || 0x35L)));
    }
    return (*p_1375->g_155);
}


/* ------------------------------------------ */
/* 
 * reads : p_1375->g_21 p_1375->g_22 p_1375->g_33 p_1375->g_35 p_1375->g_227 p_1375->g_228 p_1375->g_1000 p_1375->g_719 p_1375->g_155 p_1375->g_128 p_1375->g_883 p_1375->g_122
 * writes: p_1375->g_22 p_1375->g_33 p_1375->g_35 p_1375->g_122 p_1375->g_128
 */
int32_t  func_14(int32_t  p_15, struct S0 * p_1375)
{ /* block id: 5 */
    int32_t *l_1279 = &p_1375->g_124;
    int32_t *l_1280 = &p_1375->g_33;
    int32_t *l_1281 = &p_1375->g_124;
    int32_t *l_1282 = &p_1375->g_22[1];
    int32_t *l_1283 = &p_1375->g_22[1];
    int32_t l_1284 = 0x6CE43787L;
    int32_t *l_1285 = &p_1375->g_33;
    int32_t *l_1286 = &l_1284;
    int32_t *l_1287 = &p_1375->g_35;
    int32_t *l_1288 = &p_1375->g_124;
    int32_t *l_1289 = &p_1375->g_122;
    int32_t *l_1290 = (void*)0;
    int32_t *l_1291 = &p_1375->g_124;
    int32_t l_1292 = 1L;
    int32_t *l_1293 = &p_1375->g_22[1];
    int32_t *l_1294 = &p_1375->g_22[1];
    int32_t *l_1295[5];
    uint32_t l_1296 = 1UL;
    uint8_t l_1299 = 1UL;
    int i;
    for (i = 0; i < 5; i++)
        l_1295[i] = &l_1292;
    (*p_1375->g_21) |= (safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(5L, 0xBA29F58382BDB979L)), 13));
    (*p_1375->g_155) = func_23(func_26(p_15, p_1375), ((~p_1375->g_22[1]) , &p_15), p_1375);
    ++l_1296;
    ++l_1299;
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_1375->g_227 p_1375->g_228 p_1375->g_1000 p_1375->g_719 p_1375->g_155 p_1375->g_128 p_1375->g_883 p_1375->g_122
 * writes: p_1375->g_122 p_1375->g_128
 */
int32_t  func_23(int64_t  p_24, int32_t * p_25, struct S0 * p_1375)
{ /* block id: 607 */
    uint64_t **l_1256 = &p_1375->g_364;
    uint64_t ***l_1257 = &l_1256;
    int32_t l_1258 = 0x7993B086L;
    int32_t l_1259 = 0x141101D2L;
    uint32_t *l_1260 = &p_1375->g_512[0];
    int32_t *l_1261[10][10] = {{&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0]},{&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0]},{&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0]},{&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0]},{&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0]},{&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0]},{&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0]},{&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0]},{&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0]},{&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0],&p_1375->g_124,&p_1375->g_22[0],&p_1375->g_22[0]}};
    uint64_t l_1262 = 18446744073709551615UL;
    int8_t l_1270 = 0L;
    int64_t l_1271 = 0x0320601690CC7197L;
    int i, j;
    (*p_1375->g_155) = ((*p_25) ^= ((safe_lshift_func_int8_t_s_s(((void*)0 == p_25), 0)) , ((&p_1375->g_512[0] != ((6L <= (((safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u((safe_div_func_int32_t_s_s(0x2821C3D6L, (((l_1258 |= ((((0x0751ABCC4A3CCDA2L > (((*l_1257) = l_1256) != (void*)0)) , 18446744073709551610UL) ^ 0x238A72593A588C57L) | (*p_1375->g_227))) , 1L) , (*p_1375->g_1000)))), 0x354BCC9D81DB78B1L)), 0xA5CD32252EF3FCDCL)) | p_24), 0x9ED6D991L)) ^ l_1259), p_24)) , 0xE3CFL) & p_24)) , l_1260)) || 5L)));
    if (p_1375->g_228)
        goto lbl_1265;
lbl_1265:
    l_1262++;
    for (p_1375->g_128 = 28; (p_1375->g_128 >= (-27)); p_1375->g_128 = safe_sub_func_uint32_t_u_u(p_1375->g_128, 1))
    { /* block id: 616 */
        int32_t **l_1268[3][4] = {{&p_1375->g_155,&l_1261[4][2],&p_1375->g_155,&p_1375->g_155},{&p_1375->g_155,&l_1261[4][2],&p_1375->g_155,&p_1375->g_155},{&p_1375->g_155,&l_1261[4][2],&p_1375->g_155,&p_1375->g_155}};
        int16_t l_1269 = 0x3E6EL;
        int8_t l_1272 = 0x72L;
        int32_t l_1274[2][6] = {{(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)}};
        int32_t l_1275 = 5L;
        uint32_t l_1276 = 0UL;
        int i, j;
        p_25 = (void*)0;
        l_1276--;
    }
    return (**p_1375->g_883);
}


/* ------------------------------------------ */
/* 
 * reads : p_1375->g_33 p_1375->g_22 p_1375->g_35
 * writes: p_1375->g_33 p_1375->g_35
 */
int64_t  func_26(uint32_t  p_27, struct S0 * p_1375)
{ /* block id: 7 */
    uint16_t l_603 = 65535UL;
    int32_t l_609 = 0x4D19601CL;
    int32_t l_1161 = (-1L);
    uint8_t l_1167[9][4][7] = {{{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL}},{{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL}},{{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL}},{{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL}},{{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL}},{{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL}},{{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL}},{{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL}},{{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL},{0x12L,255UL,255UL,0x12L,0x1DL,1UL,7UL}}};
    uint64_t *l_1170 = (void*)0;
    int32_t *l_1187 = &l_1161;
    uint8_t l_1205 = 0x92L;
    int32_t l_1206 = 3L;
    int32_t l_1232[10] = {(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L)};
    int8_t l_1234 = 1L;
    int i, j, k;
    for (p_27 = 0; (p_27 <= 1); p_27 += 1)
    { /* block id: 10 */
        uint8_t l_1155[3];
        int32_t *l_1156 = &p_1375->g_33;
        int32_t l_1162 = 0x458F8913L;
        int32_t l_1184[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
        int64_t *l_1226 = &p_1375->g_483;
        int32_t l_1238[7][3] = {{0x071F738FL,0L,0x27ABDE5FL},{0x071F738FL,0L,0x27ABDE5FL},{0x071F738FL,0L,0x27ABDE5FL},{0x071F738FL,0L,0x27ABDE5FL},{0x071F738FL,0L,0x27ABDE5FL},{0x071F738FL,0L,0x27ABDE5FL},{0x071F738FL,0L,0x27ABDE5FL}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_1155[i] = 0xC2L;
        for (p_1375->g_33 = 0; (p_1375->g_33 <= 1); p_1375->g_33 += 1)
        { /* block id: 13 */
            int32_t *l_34 = &p_1375->g_35;
            int32_t *l_608 = (void*)0;
            int64_t *l_610 = &p_1375->g_611[0][2];
            int32_t *l_612 = &p_1375->g_613;
            int32_t **l_1160 = &l_34;
            int i;
            (*l_34) ^= p_1375->g_22[p_1375->g_33];
        }
    }
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_1375->g_483 p_1375->g_728 p_1375->g_155
 * writes: p_1375->g_483
 */
int32_t * func_40(int32_t  p_41, int32_t  p_42, int32_t  p_43, struct S0 * p_1375)
{ /* block id: 559 */
    int32_t *l_1159 = &p_1375->g_33;
    for (p_1375->g_483 = 0; (p_1375->g_483 != (-8)); p_1375->g_483 = safe_sub_func_int16_t_s_s(p_1375->g_483, 2))
    { /* block id: 562 */
        return (*p_1375->g_728);
    }
    return l_1159;
}


/* ------------------------------------------ */
/* 
 * reads : p_1375->g_155 p_1375->g_124 p_1375->g_227 p_1375->g_228 p_1375->g_507 p_1375->g_404 p_1375->g_149 p_1375->g_215 p_1375->g_720 p_1375->g_123
 * writes: p_1375->g_155 p_1375->g_507 p_1375->g_404 p_1375->g_124 p_1375->g_720 p_1375->g_123
 */
int16_t  func_46(int64_t  p_47, int8_t  p_48, int32_t * p_49, struct S0 * p_1375)
{ /* block id: 432 */
    int32_t **l_943 = &p_1375->g_155;
    int16_t *l_956 = &p_1375->g_507;
    uint64_t ***l_957[5];
    uint8_t *l_958 = &p_1375->g_404;
    int64_t l_976 = 0x352B376F6691C969L;
    int32_t *l_991[6][4][2] = {{{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122}},{{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122}},{{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122}},{{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122}},{{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122}},{{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122},{&p_1375->g_22[1],&p_1375->g_122}}};
    int64_t **l_995[3][3] = {{(void*)0,&p_1375->g_485,(void*)0},{(void*)0,&p_1375->g_485,(void*)0},{(void*)0,&p_1375->g_485,(void*)0}};
    uint32_t l_1146 = 0x278ED824L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_957[i] = (void*)0;
    (*l_943) = p_49;
    (*p_1375->g_155) = ((**l_943) > ((safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((*l_958) ^= ((((**l_943) < (!(0xF9F40EA5L || (*p_49)))) , (**l_943)) && (0UL ^ (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((*p_1375->g_227), ((safe_mul_func_int16_t_s_s(((*l_956) |= (**l_943)), ((l_957[1] != &p_1375->g_543) || (*p_49)))) , 0UL))), (*p_1375->g_227))), p_48))))), p_1375->g_149[2])) , 0xCFL), 0x88L)) , (**l_943)));
    for (p_1375->g_507 = 0; (p_1375->g_507 != (-27)); --p_1375->g_507)
    { /* block id: 439 */
        uint32_t l_965 = 0x00B1F644L;
        int32_t l_1025 = 0x7808E4B4L;
        int32_t l_1062 = 0x64366F59L;
        int32_t l_1063 = (-5L);
        int8_t **l_1083[7][4][4] = {{{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0},{(void*)0,&p_1375->g_227,(void*)0,(void*)0}}};
        int8_t ***l_1082[10][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        int32_t l_1150 = (-8L);
        int32_t l_1151[7] = {4L,4L,4L,4L,4L,4L,4L};
        int i, j, k;
        for (p_1375->g_124 = 1; (p_1375->g_124 <= 7); p_1375->g_124 += 1)
        { /* block id: 442 */
            int i;
            return p_1375->g_215[p_1375->g_124];
        }
        for (p_1375->g_404 = 0; (p_1375->g_404 >= 15); p_1375->g_404++)
        { /* block id: 447 */
            int16_t l_963[5][3];
            int32_t *l_964[8][4][8] = {{{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0}},{{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0}},{{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0}},{{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0}},{{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0}},{{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0}},{{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0}},{{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0},{&p_1375->g_22[1],(void*)0,(void*)0,(void*)0,&p_1375->g_22[0],&p_1375->g_35,&p_1375->g_122,(void*)0}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 3; j++)
                    l_963[i][j] = 0x06FBL;
            }
            ++l_965;
        }
        for (p_1375->g_720 = 0; (p_1375->g_720 != 23); ++p_1375->g_720)
        { /* block id: 452 */
            int32_t l_992[4];
            int32_t l_1005[7];
            uint16_t l_1024 = 65532UL;
            uint16_t l_1060 = 6UL;
            int32_t **l_1064 = &l_991[4][1][0];
            uint64_t *l_1134 = &p_1375->g_338;
            int i;
            for (i = 0; i < 4; i++)
                l_992[i] = 0x3CF45408L;
            for (i = 0; i < 7; i++)
                l_1005[i] = 0x0CF61A19L;
            for (p_1375->g_123 = (-19); (p_1375->g_123 != (-23)); p_1375->g_123--)
            { /* block id: 455 */
                int64_t l_1004 = 1L;
                int32_t *l_1006[4];
                uint8_t l_1029 = 0x30L;
                int8_t ***l_1080 = (void*)0;
                uint64_t *l_1084 = &p_1375->g_524[0];
                int i;
                for (i = 0; i < 4; i++)
                    l_1006[i] = &p_1375->g_22[1];
                for (p_1375->g_404 = 0; (p_1375->g_404 >= 11); p_1375->g_404 = safe_add_func_uint32_t_u_u(p_1375->g_404, 6))
                { /* block id: 458 */
                    uint8_t l_1026[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1026[i] = 0x63L;
                    (1 + 1);
                }
            }
        }
    }
    return p_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_1375->g_507 p_1375->g_35 p_1375->g_124 p_1375->g_155 p_1375->g_122 p_1375->g_22
 * writes: p_1375->g_507 p_1375->g_35 p_1375->g_122
 */
int16_t  func_52(int8_t  p_53, int32_t  p_54, int32_t * p_55, int32_t * p_56, uint16_t  p_57, struct S0 * p_1375)
{ /* block id: 226 */
    uint16_t l_616[4] = {65532UL,65532UL,65532UL,65532UL};
    int32_t l_620[5] = {(-7L),(-7L),(-7L),(-7L),(-7L)};
    uint64_t ***l_660 = (void*)0;
    int8_t *l_793[2];
    int32_t l_874 = (-1L);
    int8_t l_931[5][8][1] = {{{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)}},{{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)}},{{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)}},{{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)}},{{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_793[i] = &p_1375->g_215[7];
    for (p_1375->g_507 = (-13); (p_1375->g_507 != 4); p_1375->g_507++)
    { /* block id: 229 */
        uint64_t **l_651 = &p_1375->g_544;
        uint64_t ***l_650 = &l_651;
        int32_t l_663 = 4L;
        int32_t l_670 = 0x540AD694L;
        int32_t l_672 = 0L;
        int32_t l_673 = 0x07F141BFL;
        int32_t l_679 = 0x0B0151E2L;
        int32_t l_681[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
        int16_t *l_734 = &p_1375->g_735;
        int8_t **l_739 = &p_1375->g_227;
        int64_t l_848[7][2][2];
        int8_t l_850 = 0x18L;
        uint16_t l_906[9][2] = {{0xB170L,65533UL},{0xB170L,65533UL},{0xB170L,65533UL},{0xB170L,65533UL},{0xB170L,65533UL},{0xB170L,65533UL},{0xB170L,65533UL},{0xB170L,65533UL},{0xB170L,65533UL}};
        uint8_t l_913 = 0xBFL;
        int64_t l_930[1];
        int64_t l_932 = 5L;
        int64_t l_933 = 0x78FFE30C30706C73L;
        uint64_t l_936 = 0x526F4BF4B4B3312AL;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_848[i][j][k] = (-8L);
            }
        }
        for (i = 0; i < 1; i++)
            l_930[i] = 0L;
        if ((*p_56))
            break;
        (*p_56) = l_616[1];
    }
    (*p_1375->g_155) &= (*p_55);
    return p_1375->g_22[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1375->g_22 p_1375->g_21 p_1375->g_33 p_1375->g_30 p_1375->g_35 p_1375->g_85 p_1375->g_483 p_1375->g_404 p_1375->g_524 p_1375->g_507 p_1375->g_542 p_1375->g_485 p_1375->g_28 p_1375->g_155 p_1375->g_122 p_1375->g_129 p_1375->g_228 p_1375->g_235 p_1375->g_236 p_1375->g_152 p_1375->g_128 p_1375->g_588 p_1375->g_543 p_1375->g_149 p_1375->g_227 p_1375->g_215 p_1375->g_124
 * writes: p_1375->g_85 p_1375->g_22 p_1375->g_404 p_1375->g_524 p_1375->g_507 p_1375->g_122 p_1375->g_123 p_1375->g_35 p_1375->g_129 p_1375->g_30 p_1375->g_588 p_1375->g_544 p_1375->g_124
 */
int8_t  func_58(uint32_t  p_59, uint32_t  p_60, struct S0 * p_1375)
{ /* block id: 15 */
    int64_t l_70 = 1L;
    int32_t l_71[6][3][1] = {{{0x1ABB416CL},{0x1ABB416CL},{0x1ABB416CL}},{{0x1ABB416CL},{0x1ABB416CL},{0x1ABB416CL}},{{0x1ABB416CL},{0x1ABB416CL},{0x1ABB416CL}},{{0x1ABB416CL},{0x1ABB416CL},{0x1ABB416CL}},{{0x1ABB416CL},{0x1ABB416CL},{0x1ABB416CL}},{{0x1ABB416CL},{0x1ABB416CL},{0x1ABB416CL}}};
    uint32_t l_72 = 4294967295UL;
    int32_t *l_88 = &p_1375->g_22[0];
    uint64_t l_153 = 0x1681A360C50820BEL;
    volatile int32_t *l_154 = &p_1375->g_30;
    int8_t **l_314 = &p_1375->g_227;
    uint64_t *l_361 = &p_1375->g_152[0][0][1];
    int32_t l_446 = 0x641C8B89L;
    uint64_t *l_467 = &l_153;
    uint64_t **l_466 = &l_467;
    uint64_t ***l_465[7] = {&l_466,&l_466,&l_466,&l_466,&l_466,&l_466,&l_466};
    int8_t l_498 = 0x02L;
    int32_t l_502[4][1];
    int64_t l_503 = (-2L);
    int8_t l_506 = 0x05L;
    uint16_t l_508[6] = {0x62A9L,0x62A9L,0x62A9L,0x62A9L,0x62A9L,0x62A9L};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_502[i][j] = 2L;
    }
    if (((*l_88) = func_61(((safe_unary_minus_func_uint32_t_u(((((safe_mul_func_uint16_t_u_u(p_1375->g_22[1], 0x12E0L)) , (((((((((p_60 != (*p_1375->g_21)) || ((p_1375->g_33 < 0x67L) & p_59)) <= (safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u(p_1375->g_22[1], (l_70 = p_1375->g_22[0]))), l_71[2][0][0]))) , p_1375->g_30) , (void*)0) != (void*)0) , p_60) | l_72) || p_59)) | p_1375->g_35) || 1L))) || 0xF3D1L), p_1375)))
    { /* block id: 21 */
        uint32_t l_93 = 0UL;
        int32_t l_126 = 0x628C9940L;
        int32_t l_202[2][9] = {{(-7L),0x7A93248AL,0x1983C54AL,1L,0x7A93248AL,1L,0x1983C54AL,0x7A93248AL,(-7L)},{(-7L),0x7A93248AL,0x1983C54AL,1L,0x7A93248AL,1L,0x1983C54AL,0x7A93248AL,(-7L)}};
        int8_t *l_297 = (void*)0;
        int32_t *l_299 = &p_1375->g_122;
        uint64_t *l_362[9] = {&p_1375->g_152[0][0][1],&p_1375->g_152[0][0][1],&p_1375->g_152[0][0][1],&p_1375->g_152[0][0][1],&p_1375->g_152[0][0][1],&p_1375->g_152[0][0][1],&p_1375->g_152[0][0][1],&p_1375->g_152[0][0][1],&p_1375->g_152[0][0][1]};
        uint64_t l_380 = 0x66EF92D749A86774L;
        int32_t *l_401 = &p_1375->g_35;
        int64_t *l_484 = &p_1375->g_483;
        uint8_t l_486 = 255UL;
        int i, j;
        for (p_59 = 0; (p_59 == 26); p_59 = safe_add_func_uint64_t_u_u(p_59, 4))
        { /* block id: 24 */
            uint16_t l_98 = 65529UL;
            int32_t *l_107 = &l_71[0][2][0];
            int32_t l_108 = 1L;
            int16_t *l_198[2][6] = {{&p_1375->g_149[7],&p_1375->g_149[9],&p_1375->g_149[7],&p_1375->g_149[7],&p_1375->g_149[9],&p_1375->g_149[7]},{&p_1375->g_149[7],&p_1375->g_149[9],&p_1375->g_149[7],&p_1375->g_149[7],&p_1375->g_149[9],&p_1375->g_149[7]}};
            int32_t l_200 = 0x07C02BD1L;
            int8_t *l_230 = &p_1375->g_228;
            int8_t **l_295 = (void*)0;
            int8_t ***l_294[3];
            uint64_t *l_328 = &l_153;
            uint64_t *l_336 = (void*)0;
            uint64_t *l_337 = &p_1375->g_338;
            int32_t l_339 = 0x25DE5303L;
            int32_t l_365 = 1L;
            uint64_t **l_407 = &l_328;
            int16_t l_417 = 5L;
            int32_t l_489 = 1L;
            int32_t l_490 = 1L;
            int32_t l_491 = 0x5BC72882L;
            int32_t l_492 = 0x5970350CL;
            int32_t l_493 = 0x3EB944CFL;
            int32_t l_494[5][9] = {{0x7BA1BF31L,0x561F93E0L,0x2F12FD12L,0x561F93E0L,0x7BA1BF31L,0x7BA1BF31L,0x561F93E0L,0x2F12FD12L,0x561F93E0L},{0x7BA1BF31L,0x561F93E0L,0x2F12FD12L,0x561F93E0L,0x7BA1BF31L,0x7BA1BF31L,0x561F93E0L,0x2F12FD12L,0x561F93E0L},{0x7BA1BF31L,0x561F93E0L,0x2F12FD12L,0x561F93E0L,0x7BA1BF31L,0x7BA1BF31L,0x561F93E0L,0x2F12FD12L,0x561F93E0L},{0x7BA1BF31L,0x561F93E0L,0x2F12FD12L,0x561F93E0L,0x7BA1BF31L,0x7BA1BF31L,0x561F93E0L,0x2F12FD12L,0x561F93E0L},{0x7BA1BF31L,0x561F93E0L,0x2F12FD12L,0x561F93E0L,0x7BA1BF31L,0x7BA1BF31L,0x561F93E0L,0x2F12FD12L,0x561F93E0L}};
            int32_t l_504[6] = {0x416F4C2DL,0x497CF6C0L,0x416F4C2DL,0x416F4C2DL,0x497CF6C0L,0x416F4C2DL};
            int i, j;
            for (i = 0; i < 3; i++)
                l_294[i] = &l_295;
            (1 + 1);
        }
    }
    else
    { /* block id: 175 */
        uint32_t *l_511[1][6];
        uint32_t *l_514 = &l_72;
        uint32_t **l_513 = &l_514;
        int32_t l_515 = 0x625195F9L;
        int32_t l_517 = 3L;
        int32_t l_518 = 0x329F8CB4L;
        int32_t l_519[6];
        int32_t l_521 = 0x2BB9879CL;
        int16_t l_537 = 0x2BE0L;
        int8_t l_586 = 1L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_511[i][j] = &p_1375->g_512[0];
        }
        for (i = 0; i < 6; i++)
            l_519[i] = 0x07D37B31L;
        l_515 = ((((*l_88) ^= p_1375->g_483) , &l_72) == ((*l_513) = l_511[0][4]));
        for (p_1375->g_404 = 0; (p_1375->g_404 <= 0); p_1375->g_404 += 1)
        { /* block id: 181 */
            int32_t *l_516[8] = {&p_1375->g_124,&l_71[2][0][0],&p_1375->g_124,&p_1375->g_124,&l_71[2][0][0],&p_1375->g_124,&p_1375->g_124,&l_71[2][0][0]};
            int8_t l_520 = (-1L);
            int16_t l_522 = (-10L);
            int64_t l_523 = (-10L);
            int32_t l_572[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
            uint64_t *l_599 = (void*)0;
            int32_t l_602 = 0x5E7007E4L;
            int i;
            p_1375->g_524[0]++;
            for (p_1375->g_507 = 0; (p_1375->g_507 <= 0); p_1375->g_507 += 1)
            { /* block id: 185 */
                int16_t *l_545 = &l_522;
                int64_t *l_569[5][7];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_569[i][j] = &l_503;
                }
                (*p_1375->g_155) |= ((l_502[(p_1375->g_507 + 2)][p_1375->g_404] < 18446744073709551606UL) && (safe_mod_func_uint16_t_u_u(((((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(0x4A37L, 2)), (safe_mod_func_int32_t_s_s(0x4AF97A20L, (safe_lshift_func_int16_t_s_s(l_537, ((*l_545) ^= (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((p_59 == 0xA507L) | (p_1375->g_542 != (void*)0)), 3)), p_60))))))))) > (*p_1375->g_485)) , 1L) , l_515) != p_60) ^ p_1375->g_28), p_59)));
                for (l_520 = 0; (l_520 >= 0); l_520 -= 1)
                { /* block id: 190 */
                    int64_t *l_568 = (void*)0;
                    int32_t l_573[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_573[i] = (-1L);
                    for (p_1375->g_123 = 0; (p_1375->g_123 <= 0); p_1375->g_123 += 1)
                    { /* block id: 193 */
                        uint32_t l_546 = 0x7C92FA73L;
                        if ((*p_1375->g_155))
                            break;
                        l_546--;
                        if (p_59)
                            break;
                    }
                    for (p_1375->g_35 = 0; (p_1375->g_35 <= 0); p_1375->g_35 += 1)
                    { /* block id: 200 */
                        int i, j;
                        if (l_502[p_1375->g_35][p_1375->g_35])
                            break;
                    }
                    for (p_1375->g_129 = 0; (p_1375->g_129 <= 0); p_1375->g_129 += 1)
                    { /* block id: 205 */
                        int64_t *l_570 = &l_70;
                        int32_t l_571 = 0x190422E1L;
                        int8_t l_581 = 0x17L;
                        int32_t **l_587 = &l_516[5];
                        int i, j;
                        (*p_1375->g_155) &= (-1L);
                        (*l_88) |= p_60;
                        (*l_154) = (safe_mul_func_int8_t_s_s((((safe_unary_minus_func_uint16_t_u(((+((safe_lshift_func_int8_t_s_u((p_59 , (0x86B8L || ((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(((((*l_570) = (safe_div_func_int64_t_s_s(((((((((((l_511[l_520][(p_1375->g_129 + 1)] = l_511[p_1375->g_507][(p_1375->g_404 + 4)]) == (void*)0) , p_60) != (safe_add_func_int32_t_s_s(((p_59 < p_1375->g_228) != ((((*l_88) = (safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((l_569[0][5] = ((((l_519[3] | 0L) , 0x0EL) <= p_59) , l_568)) == l_570), (*p_1375->g_485))), p_59)), 6))) == 0xC86F2542L) == 65535UL)), 0x95A97E8FL))) , (*l_154)) == p_1375->g_404) , (*l_88)) >= l_571) || (*p_1375->g_235)) <= p_1375->g_152[0][0][1]), (*p_1375->g_485)))) <= l_515) , 0x60C4L), p_1375->g_128)), 1UL)) ^ p_59))), p_59)) == l_572[3])) || l_573[1]))) != p_60) | p_60), 0UL));
                        (*l_587) = (((l_571 < (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint64_t_u_u(((p_1375->g_122 <= (*l_88)) , l_581), ((safe_mul_func_uint8_t_u_u(0x8AL, (p_60 , (safe_mul_func_int16_t_s_s(0x77FCL, (((+5UL) != ((0UL != 0x4BL) , l_586)) > p_60)))))) >= (-7L)))))) == l_571) > p_60), l_502[(p_1375->g_507 + 2)][p_1375->g_404])), 5))) >= l_573[1]) , (void*)0);
                    }
                    p_1375->g_588[5][5]--;
                }
                (*l_88) |= ((safe_add_func_int64_t_s_s(((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_537, (safe_add_func_int32_t_s_s(((1UL <= l_502[(p_1375->g_507 + 2)][p_1375->g_404]) != (l_569[0][5] == ((*p_1375->g_543) = l_599))), (-1L))))), (-3L))) >= ((safe_add_func_uint16_t_u_u(((void*)0 == &p_1375->g_483), p_1375->g_149[9])) & (*p_1375->g_227))), l_602)) > p_1375->g_215[7]);
            }
        }
    }
    return p_59;
}


/* ------------------------------------------ */
/* 
 * reads : p_1375->g_85
 * writes: p_1375->g_85
 */
int32_t  func_61(int32_t  p_62, struct S0 * p_1375)
{ /* block id: 17 */
    int32_t *l_73 = &p_1375->g_35;
    int32_t l_74 = 6L;
    int32_t *l_75 = &l_74;
    int32_t l_76[2][9] = {{(-3L),0x345D9541L,0x345D9541L,(-3L),(-3L),0x345D9541L,0x345D9541L,(-3L),(-3L)},{(-3L),0x345D9541L,0x345D9541L,(-3L),(-3L),0x345D9541L,0x345D9541L,(-3L),(-3L)}};
    int32_t *l_77 = &l_74;
    int32_t *l_78 = &l_74;
    int32_t *l_79 = (void*)0;
    int32_t *l_80 = &p_1375->g_22[1];
    int32_t *l_81 = (void*)0;
    int32_t *l_82 = &l_74;
    int32_t *l_83[3][8][2] = {{{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35}},{{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35}},{{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35},{&p_1375->g_35,&p_1375->g_35}}};
    int32_t l_84[9][2] = {{0x0A5BFF83L,1L},{0x0A5BFF83L,1L},{0x0A5BFF83L,1L},{0x0A5BFF83L,1L},{0x0A5BFF83L,1L},{0x0A5BFF83L,1L},{0x0A5BFF83L,1L},{0x0A5BFF83L,1L},{0x0A5BFF83L,1L}};
    int i, j, k;
    ++p_1375->g_85;
    return p_62;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1376;
    struct S0* p_1375 = &c_1376;
    struct S0 c_1377 = {
        {(-2L),(-2L)}, // p_1375->g_22
        &p_1375->g_22[1], // p_1375->g_21
        (-10L), // p_1375->g_28
        0x23B16AACL, // p_1375->g_29
        0L, // p_1375->g_30
        0x7153413FL, // p_1375->g_31
        {{{(-1L),(-1L),0x029CBC21L,0x00D35DA2L,0x50D1D847L,0x00D35DA2L,0x029CBC21L,(-1L),(-1L)},{(-1L),(-1L),0x029CBC21L,0x00D35DA2L,0x50D1D847L,0x00D35DA2L,0x029CBC21L,(-1L),(-1L)},{(-1L),(-1L),0x029CBC21L,0x00D35DA2L,0x50D1D847L,0x00D35DA2L,0x029CBC21L,(-1L),(-1L)}},{{(-1L),(-1L),0x029CBC21L,0x00D35DA2L,0x50D1D847L,0x00D35DA2L,0x029CBC21L,(-1L),(-1L)},{(-1L),(-1L),0x029CBC21L,0x00D35DA2L,0x50D1D847L,0x00D35DA2L,0x029CBC21L,(-1L),(-1L)},{(-1L),(-1L),0x029CBC21L,0x00D35DA2L,0x50D1D847L,0x00D35DA2L,0x029CBC21L,(-1L),(-1L)}},{{(-1L),(-1L),0x029CBC21L,0x00D35DA2L,0x50D1D847L,0x00D35DA2L,0x029CBC21L,(-1L),(-1L)},{(-1L),(-1L),0x029CBC21L,0x00D35DA2L,0x50D1D847L,0x00D35DA2L,0x029CBC21L,(-1L),(-1L)},{(-1L),(-1L),0x029CBC21L,0x00D35DA2L,0x50D1D847L,0x00D35DA2L,0x029CBC21L,(-1L),(-1L)}}}, // p_1375->g_32
        0L, // p_1375->g_33
        (-1L), // p_1375->g_35
        1UL, // p_1375->g_85
        0L, // p_1375->g_122
        (-4L), // p_1375->g_123
        0x47332266L, // p_1375->g_124
        2L, // p_1375->g_128
        5UL, // p_1375->g_129
        {(-4L),0x1682L,(-4L),(-4L),0x1682L,(-4L),(-4L),0x1682L,(-4L),(-4L)}, // p_1375->g_149
        {{{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL}},{{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL}},{{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL}},{{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL}},{{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL},{0xC9D8L,0xAC16L,0xAC16L,0xC9D8L,1UL,65535UL,1UL}}}, // p_1375->g_150
        {{{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL}},{{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL}},{{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL}},{{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL},{0x3DAA861DA3FA16DDL,8UL,0x423AEECEFAA52756L,0xA7C47B9E94D02D65L,0xDFC4183E401C7A7DL,0UL}}}, // p_1375->g_152
        &p_1375->g_122, // p_1375->g_155
        {4L,4L,4L,4L,4L,4L,4L,4L}, // p_1375->g_215
        (-5L), // p_1375->g_228
        &p_1375->g_228, // p_1375->g_227
        5UL, // p_1375->g_236
        &p_1375->g_236, // p_1375->g_235
        (void*)0, // p_1375->g_335
        18446744073709551615UL, // p_1375->g_338
        &p_1375->g_152[0][0][1], // p_1375->g_364
        (void*)0, // p_1375->g_396
        0x69L, // p_1375->g_404
        0x7B4B49A304C630AEL, // p_1375->g_483
        &p_1375->g_483, // p_1375->g_485
        0UL, // p_1375->g_495
        0x5802L, // p_1375->g_507
        {0UL,0UL,0UL}, // p_1375->g_512
        {0x7FA648F9AB478074L,0x7FA648F9AB478074L}, // p_1375->g_524
        (void*)0, // p_1375->g_544
        &p_1375->g_544, // p_1375->g_543
        &p_1375->g_543, // p_1375->g_542
        {{7UL,1UL,0UL,1UL,7UL,7UL,1UL,0UL},{7UL,1UL,0UL,1UL,7UL,7UL,1UL,0UL},{7UL,1UL,0UL,1UL,7UL,7UL,1UL,0UL},{7UL,1UL,0UL,1UL,7UL,7UL,1UL,0UL},{7UL,1UL,0UL,1UL,7UL,7UL,1UL,0UL},{7UL,1UL,0UL,1UL,7UL,7UL,1UL,0UL}}, // p_1375->g_588
        {{9L,9L,9L,9L,9L}}, // p_1375->g_611
        0x04A6E246L, // p_1375->g_613
        249UL, // p_1375->g_633
        0UL, // p_1375->g_657
        0xC5B8C8AEL, // p_1375->g_719
        0x1276L, // p_1375->g_720
        (void*)0, // p_1375->g_727
        &p_1375->g_155, // p_1375->g_728
        0x09F5L, // p_1375->g_735
        {0x01L,0x01L,0x01L,0x01L,0x01L,0x01L,0x01L,0x01L,0x01L}, // p_1375->g_846
        (void*)0, // p_1375->g_879
        &p_1375->g_155, // p_1375->g_883
        &p_1375->g_155, // p_1375->g_916
        {&p_1375->g_155,&p_1375->g_155,&p_1375->g_155,&p_1375->g_155,&p_1375->g_155,&p_1375->g_155,&p_1375->g_155,&p_1375->g_155,&p_1375->g_155,&p_1375->g_155}, // p_1375->g_940
        (void*)0, // p_1375->g_942
        &p_1375->g_719, // p_1375->g_1000
        {{{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0},{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0},{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0},{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0},{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0},{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0},{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0},{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0},{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0},{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0}},{{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0},{(void*)0,&p_1375->g_1000,&p_1375->g_1000,(void*)0,&p_1375->g_1000,(void*)0,(void*)0}}}, // p_1375->g_999
        0x18A33E5871664F67L, // p_1375->g_1021
        1UL, // p_1375->g_1066
        1UL, // p_1375->g_1108
        (void*)0, // p_1375->g_1111
        1L, // p_1375->g_1123
        &p_1375->g_1108, // p_1375->g_1231
        &p_1375->g_124, // p_1375->g_1233
        {{0x7C6E3F486C988E2FL,(-1L),0x7500393DECC6C859L,0x258A2E886733D684L,(-1L),0x258A2E886733D684L},{0x7C6E3F486C988E2FL,(-1L),0x7500393DECC6C859L,0x258A2E886733D684L,(-1L),0x258A2E886733D684L},{0x7C6E3F486C988E2FL,(-1L),0x7500393DECC6C859L,0x258A2E886733D684L,(-1L),0x258A2E886733D684L},{0x7C6E3F486C988E2FL,(-1L),0x7500393DECC6C859L,0x258A2E886733D684L,(-1L),0x258A2E886733D684L},{0x7C6E3F486C988E2FL,(-1L),0x7500393DECC6C859L,0x258A2E886733D684L,(-1L),0x258A2E886733D684L},{0x7C6E3F486C988E2FL,(-1L),0x7500393DECC6C859L,0x258A2E886733D684L,(-1L),0x258A2E886733D684L},{0x7C6E3F486C988E2FL,(-1L),0x7500393DECC6C859L,0x258A2E886733D684L,(-1L),0x258A2E886733D684L},{0x7C6E3F486C988E2FL,(-1L),0x7500393DECC6C859L,0x258A2E886733D684L,(-1L),0x258A2E886733D684L},{0x7C6E3F486C988E2FL,(-1L),0x7500393DECC6C859L,0x258A2E886733D684L,(-1L),0x258A2E886733D684L}}, // p_1375->g_1273
        65531UL, // p_1375->g_1315
        1L, // p_1375->g_1359
        &p_1375->g_1359, // p_1375->g_1358
        &p_1375->g_1358, // p_1375->g_1357
        {{{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L},{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L}},{{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L},{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L}},{{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L},{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L}},{{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L},{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L}},{{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L},{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L}},{{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L},{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L}},{{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L},{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L}},{{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L},{0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L,0x7FFD0C86C45FFD63L,1UL,0x7FFD0C86C45FFD63L}}}, // p_1375->g_1368
    };
    c_1376 = c_1377;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1375);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1375->g_22[i], "p_1375->g_22[i]", print_hash_value);

    }
    transparent_crc(p_1375->g_28, "p_1375->g_28", print_hash_value);
    transparent_crc(p_1375->g_29, "p_1375->g_29", print_hash_value);
    transparent_crc(p_1375->g_30, "p_1375->g_30", print_hash_value);
    transparent_crc(p_1375->g_31, "p_1375->g_31", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1375->g_32[i][j][k], "p_1375->g_32[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1375->g_33, "p_1375->g_33", print_hash_value);
    transparent_crc(p_1375->g_35, "p_1375->g_35", print_hash_value);
    transparent_crc(p_1375->g_85, "p_1375->g_85", print_hash_value);
    transparent_crc(p_1375->g_122, "p_1375->g_122", print_hash_value);
    transparent_crc(p_1375->g_123, "p_1375->g_123", print_hash_value);
    transparent_crc(p_1375->g_124, "p_1375->g_124", print_hash_value);
    transparent_crc(p_1375->g_128, "p_1375->g_128", print_hash_value);
    transparent_crc(p_1375->g_129, "p_1375->g_129", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1375->g_149[i], "p_1375->g_149[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1375->g_150[i][j][k], "p_1375->g_150[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1375->g_152[i][j][k], "p_1375->g_152[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1375->g_215[i], "p_1375->g_215[i]", print_hash_value);

    }
    transparent_crc(p_1375->g_228, "p_1375->g_228", print_hash_value);
    transparent_crc(p_1375->g_236, "p_1375->g_236", print_hash_value);
    transparent_crc(p_1375->g_338, "p_1375->g_338", print_hash_value);
    transparent_crc(p_1375->g_404, "p_1375->g_404", print_hash_value);
    transparent_crc(p_1375->g_483, "p_1375->g_483", print_hash_value);
    transparent_crc(p_1375->g_495, "p_1375->g_495", print_hash_value);
    transparent_crc(p_1375->g_507, "p_1375->g_507", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1375->g_512[i], "p_1375->g_512[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1375->g_524[i], "p_1375->g_524[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1375->g_588[i][j], "p_1375->g_588[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1375->g_611[i][j], "p_1375->g_611[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1375->g_613, "p_1375->g_613", print_hash_value);
    transparent_crc(p_1375->g_633, "p_1375->g_633", print_hash_value);
    transparent_crc(p_1375->g_657, "p_1375->g_657", print_hash_value);
    transparent_crc(p_1375->g_719, "p_1375->g_719", print_hash_value);
    transparent_crc(p_1375->g_720, "p_1375->g_720", print_hash_value);
    transparent_crc(p_1375->g_735, "p_1375->g_735", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1375->g_846[i], "p_1375->g_846[i]", print_hash_value);

    }
    transparent_crc(p_1375->g_1021, "p_1375->g_1021", print_hash_value);
    transparent_crc(p_1375->g_1066, "p_1375->g_1066", print_hash_value);
    transparent_crc(p_1375->g_1108, "p_1375->g_1108", print_hash_value);
    transparent_crc(p_1375->g_1123, "p_1375->g_1123", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1375->g_1273[i][j], "p_1375->g_1273[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1375->g_1315, "p_1375->g_1315", print_hash_value);
    transparent_crc(p_1375->g_1359, "p_1375->g_1359", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1375->g_1368[i][j][k], "p_1375->g_1368[i][j][k]", print_hash_value);

            }
        }
    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
