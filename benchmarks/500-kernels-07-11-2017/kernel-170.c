// -g 59,73,1 -l 59,1,1
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


// Seed: 666755944

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int8_t  f0;
   uint64_t  f1;
   uint16_t  f2;
   uint16_t  f3;
   uint32_t  f4;
   volatile int32_t  f5;
   int64_t  f6;
   volatile int32_t  f7;
   int32_t  f8;
   volatile uint64_t  f9;
};

union U1 {
   int32_t  f0;
   struct S0  f1;
};

struct S2 {
    int32_t g_2;
    int32_t g_26[8];
    int32_t g_51;
    int64_t g_65;
    int32_t g_68;
    uint32_t g_92;
    int64_t g_93;
    uint32_t g_97;
    int32_t g_99;
    uint32_t g_107;
    volatile struct S0 g_112;
    volatile struct S0 g_121[2];
    volatile struct S0 * volatile g_122;
    int32_t *g_127;
    int32_t ** volatile g_126[1];
    int32_t ** volatile g_128;
    int8_t g_134;
    uint8_t g_142;
    int32_t ** volatile g_144;
    volatile struct S0 ** volatile g_153;
    volatile struct S0 *g_155;
    volatile struct S0 ** volatile g_154;
    uint8_t g_166;
    uint32_t g_168;
    int16_t g_174;
    int8_t *g_189;
    int8_t ** volatile g_188;
    union U1 g_197;
    uint64_t g_238;
    volatile struct S0 g_252;
    int8_t **g_272;
    int16_t g_276;
    int64_t g_295;
    volatile uint8_t g_302;
    volatile uint8_t * volatile g_301;
    volatile uint8_t * volatile * volatile g_300;
    volatile union U1 g_309;
    uint8_t **g_335;
    uint8_t ***g_334;
    int32_t ** volatile g_338;
    struct S0 g_345[3];
    int32_t ** volatile g_348;
    uint32_t g_389;
    int32_t * volatile g_455;
    int32_t ** volatile g_457;
    volatile struct S0 g_458;
    volatile struct S0 g_460;
    uint32_t g_490[9];
    volatile int32_t g_496;
    int32_t ** volatile g_514[5][6];
    int32_t ** volatile g_515;
    int8_t *** volatile g_554;
    int32_t ** volatile g_555[2][1];
    int64_t g_613;
    volatile struct S0 g_626;
    int16_t g_650[4][3][7];
    volatile int16_t ** volatile g_699;
    volatile struct S0 g_705;
    volatile struct S0 g_706;
    uint32_t *g_719;
    uint32_t **g_718;
    int32_t *g_767[4][5][2];
    int32_t ** volatile g_766;
    volatile uint16_t * volatile g_814[3][4][1];
    volatile struct S0 g_869;
    int32_t ** volatile g_895;
    int32_t ** volatile g_899;
    volatile struct S0 g_922[7];
    int32_t ** volatile g_934;
    union U1 g_976;
    volatile uint16_t g_981[2][8][10];
    volatile uint16_t *g_980;
    int32_t ** volatile g_984;
    int32_t * volatile g_1018;
    volatile int16_t g_1038;
    volatile struct S0 g_1066[4];
    struct S0 g_1086;
    uint32_t *g_1111[8][7][1];
    struct S0 g_1117[2];
    union U1 g_1129;
    uint64_t g_1135;
    struct S0 g_1232;
    int32_t * volatile g_1238[9][2][5];
    union U1 *g_1262;
    union U1 **g_1261;
    volatile int64_t g_1264;
    uint32_t *g_1307;
    int32_t * volatile g_1310;
    volatile struct S0 g_1311;
    volatile union U1 g_1328;
    int32_t ** volatile g_1346;
    int32_t g_1446;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S2 * p_1448);
int32_t * func_5(int64_t  p_6, uint32_t  p_7, uint32_t  p_8, int64_t  p_9, struct S2 * p_1448);
int64_t  func_10(int32_t * p_11, int64_t  p_12, uint8_t  p_13, int32_t * p_14, int32_t * p_15, struct S2 * p_1448);
int64_t  func_16(int32_t * p_17, int16_t  p_18, int32_t * p_19, struct S2 * p_1448);
uint16_t  func_27(int32_t * p_28, int32_t  p_29, struct S2 * p_1448);
int32_t * func_30(int8_t  p_31, int32_t * p_32, int32_t * p_33, struct S2 * p_1448);
int8_t  func_34(int64_t  p_35, uint64_t  p_36, int64_t  p_37, struct S2 * p_1448);
uint8_t  func_38(int64_t  p_39, int16_t  p_40, int32_t * p_41, int32_t * p_42, uint16_t  p_43, struct S2 * p_1448);
int32_t * func_45(uint8_t  p_46, int32_t  p_47, int32_t * p_48, struct S2 * p_1448);
int32_t * func_52(uint32_t  p_53, uint16_t  p_54, int32_t * p_55, struct S2 * p_1448);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1448->g_2 p_1448->g_197.f1.f1 p_1448->g_112.f4 p_1448->g_174 p_1448->g_154 p_1448->g_155 p_1448->g_121 p_1448->g_51 p_1448->g_166 p_1448->g_706.f5 p_1448->g_1117.f1 p_1448->g_490 p_1448->g_1232.f8 p_1448->g_26 p_1448->g_345.f3 p_1448->g_68 p_1448->g_895 p_1448->g_345.f2 p_1448->g_99 p_1448->g_1117.f6 p_1448->g_934 p_1448->g_554 p_1448->g_272 p_1448->g_189 p_1448->g_134 p_1448->g_980 p_1448->g_1446 p_1448->g_1086.f3 p_1448->g_1135 p_1448->g_345.f1 p_1448->g_1086.f1 p_1448->g_1346 p_1448->g_767
 * writes: p_1448->g_2 p_1448->g_197.f1.f1 p_1448->g_174 p_1448->g_121 p_1448->g_51 p_1448->g_1111 p_1448->g_1117.f6 p_1448->g_166 p_1448->g_68 p_1448->g_127 p_1448->g_767 p_1448->g_345.f8
 */
int64_t  func_1(struct S2 * p_1448)
{ /* block id: 4 */
    int64_t l_24 = (-1L);
    uint32_t l_58[5];
    int32_t *l_291 = &p_1448->g_51;
    int32_t *l_1088 = (void*)0;
    uint32_t l_1375 = 1UL;
    int32_t l_1379 = 0x48FD240AL;
    int16_t l_1447[2];
    int i;
    for (i = 0; i < 5; i++)
        l_58[i] = 4294967295UL;
    for (i = 0; i < 2; i++)
        l_1447[i] = 0x6F46L;
    for (p_1448->g_2 = 0; (p_1448->g_2 != 20); p_1448->g_2 = safe_add_func_uint8_t_u_u(p_1448->g_2, 7))
    { /* block id: 7 */
        int32_t *l_25 = &p_1448->g_26[0];
        uint8_t l_49 = 0x33L;
        int32_t *l_50 = &p_1448->g_51;
        int32_t l_1118[6];
        int i;
        for (i = 0; i < 6; i++)
            l_1118[i] = 0x42F70CBBL;
        (1 + 1);
    }
    for (p_1448->g_197.f1.f1 = 1; (p_1448->g_197.f1.f1 <= 4); p_1448->g_197.f1.f1 += 1)
    { /* block id: 683 */
        int32_t l_1347 = 0x1953101EL;
        int32_t l_1348 = 0x2C492676L;
        int i;
        l_1348 &= l_1347;
        return p_1448->g_112.f4;
    }
    for (p_1448->g_174 = 0; (p_1448->g_174 >= (-15)); p_1448->g_174--)
    { /* block id: 689 */
        uint64_t *l_1352[7][2] = {{&p_1448->g_238,(void*)0},{&p_1448->g_238,(void*)0},{&p_1448->g_238,(void*)0},{&p_1448->g_238,(void*)0},{&p_1448->g_238,(void*)0},{&p_1448->g_238,(void*)0},{&p_1448->g_238,(void*)0}};
        uint64_t **l_1351 = &l_1352[2][1];
        uint32_t **l_1355 = &p_1448->g_1111[0][4][0];
        int64_t *l_1358 = (void*)0;
        int64_t *l_1359 = &p_1448->g_1117[1].f6;
        int32_t l_1360 = 7L;
        int32_t l_1361 = 7L;
        uint8_t *l_1362 = &p_1448->g_166;
        uint32_t l_1376[7][6][6] = {{{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L}},{{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L}},{{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L}},{{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L}},{{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L}},{{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L}},{{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L},{4294967295UL,9UL,4294967295UL,1UL,0x16E48D44L,0x3BF020E6L}}};
        int8_t ***l_1441 = &p_1448->g_272;
        int i, j, k;
        (*p_1448->g_155) = (**p_1448->g_154);
        (*l_291) ^= 0x52AD9D99L;
        if (((((~0x0A3061D0L) ^ ((void*)0 == l_1351)) < (((safe_mod_func_int64_t_s_s(((*l_1359) = ((&p_1448->g_168 != ((*l_1355) = &p_1448->g_168)) && (safe_mul_func_uint16_t_u_u((*l_291), (*l_291))))), (l_1361 &= l_1360))) > ((*l_1362) ^= 0x1BL)) ^ 0x3C17CAA23FB52F5EL)) <= (*l_291)))
        { /* block id: 696 */
            uint16_t l_1377 = 0UL;
            uint32_t *l_1378[2];
            int32_t *l_1380 = &p_1448->g_976.f1.f8;
            int32_t *l_1381 = &p_1448->g_1129.f1.f8;
            int32_t *l_1382 = &p_1448->g_68;
            int32_t **l_1383[6] = {&p_1448->g_127,(void*)0,&p_1448->g_127,&p_1448->g_127,(void*)0,&p_1448->g_127};
            int i;
            for (i = 0; i < 2; i++)
                l_1378[i] = &p_1448->g_168;
            (*l_1382) &= (((safe_sub_func_uint64_t_u_u((p_1448->g_706.f5 != ((l_1379 = (+(safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((p_1448->g_1117[1].f1 <= ((l_1361 < (safe_lshift_func_uint8_t_u_s((((0x5479L || (safe_sub_func_uint32_t_u_u((~5UL), ((*l_291) = (safe_div_func_uint8_t_u_u((l_1375 < l_1376[2][1][0]), 0x31L)))))) != ((l_1377 , l_1360) , p_1448->g_490[7])) >= (-1L)), 0))) , (*l_291))), p_1448->g_1232.f8)) | l_1377), p_1448->g_26[0])))) < l_1376[2][1][0])), 6L)) <= p_1448->g_345[0].f3) >= l_1377);
            (*p_1448->g_895) = (void*)0;
        }
        else
        { /* block id: 701 */
            int32_t *l_1384 = &l_1360;
            int32_t *l_1385 = (void*)0;
            int32_t *l_1386 = &p_1448->g_1232.f8;
            int32_t *l_1387 = &p_1448->g_345[0].f8;
            int32_t *l_1388 = &p_1448->g_976.f1.f8;
            int32_t *l_1389 = &p_1448->g_99;
            int32_t *l_1390 = (void*)0;
            int32_t *l_1391 = &p_1448->g_1232.f8;
            int32_t *l_1392 = &p_1448->g_26[4];
            int32_t *l_1393[8][6];
            uint32_t l_1394 = 0UL;
            int32_t l_1417 = 0x31E0362CL;
            int32_t **l_1418[6][6][5] = {{{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]}},{{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]}},{{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]}},{{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]}},{{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]}},{{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]},{(void*)0,(void*)0,&l_1386,(void*)0,&l_1393[7][4]}}};
            int i, j, k;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 6; j++)
                    l_1393[i][j] = (void*)0;
            }
            ++l_1394;
            (*p_1448->g_934) = (((safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((~((--(*l_1362)) || 255UL)), p_1448->g_121[0].f5)), (safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((2UL || ((*l_1386) , (safe_rshift_func_uint16_t_u_s(p_1448->g_345[0].f2, (safe_rshift_func_int16_t_s_u(p_1448->g_490[5], (((safe_add_func_int64_t_s_s((safe_mod_func_int16_t_s_s((l_1088 == ((*l_1355) = l_1385)), l_1417)), 18446744073709551612UL)) , p_1448->g_99) , p_1448->g_1117[1].f6))))))), 6)), 65527UL)) <= p_1448->g_26[0]), 4294967295UL)))) ^ 0x0104L) , &l_1379);
            (**p_1448->g_1346) = (((*p_1448->g_554) == (void*)0) | ((((((safe_sub_func_int8_t_s_s(0x5BL, 0x1FL)) || (((((safe_lshift_func_uint16_t_u_s(((safe_div_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((0x27L != ((safe_rshift_func_int8_t_s_u((((l_1361 = ((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((--(*l_1362)) == 0x1AL), (*p_1448->g_189))) , (l_1441 == ((((((safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s((+(((void*)0 != p_1448->g_980) != (*l_291))), p_1448->g_1446)), 9UL)) != p_1448->g_1086.f3) , p_1448->g_174) == p_1448->g_490[0]) > 0x2DE3F2284CCE4757L) , l_1441))), 0x1035L)), 0)), 0xEFL)) & p_1448->g_490[0])) || l_1447[1]) >= 1UL), 4)) , l_1361)), 6)), 1L)) == p_1448->g_1135), p_1448->g_345[0].f1)) , p_1448->g_1086.f1), 13)) & 0x3FF5698DC39EA13EL) == l_1376[1][0][4]) <= (*l_291)) & (*l_291))) <= l_1360) , (void*)0) == l_1392) >= p_1448->g_2));
        }
    }
    return (*l_291);
}


/* ------------------------------------------ */
/* 
 * reads : p_1448->g_238 p_1448->g_1129 p_1448->g_1086.f4 p_1448->g_1135 p_1448->g_554 p_1448->g_272 p_1448->g_1018 p_1448->g_626.f3 p_1448->g_92 p_1448->g_1117.f8 p_1448->g_1232 p_1448->g_174 p_1448->g_706.f5 p_1448->g_1261 p_1448->g_93 p_1448->g_1307 p_1448->g_301 p_1448->g_302 p_1448->g_1310 p_1448->g_1311 p_1448->g_155 p_1448->g_122 p_1448->g_121 p_1448->g_1328 p_1448->g_1117.f2 p_1448->g_295
 * writes: p_1448->g_238 p_1448->g_1135 p_1448->g_99 p_1448->g_650 p_1448->g_767 p_1448->g_174 p_1448->g_93 p_1448->g_976.f1.f8 p_1448->g_1117.f8 p_1448->g_121 p_1448->g_1232.f6 p_1448->g_1232.f1 p_1448->g_1232.f4
 */
int32_t * func_5(int64_t  p_6, uint32_t  p_7, uint32_t  p_8, int64_t  p_9, struct S2 * p_1448)
{ /* block id: 587 */
    int8_t l_1127 = 0x1FL;
    int32_t l_1128 = 4L;
    int32_t l_1136 = 0x26FB9DB5L;
    int32_t l_1176 = 0L;
    int32_t l_1185 = 0x29C7D68EL;
    int8_t l_1186 = 1L;
    int32_t l_1187 = (-1L);
    int32_t l_1188 = 0x38DDC16CL;
    int32_t l_1189 = (-2L);
    int32_t l_1190 = 1L;
    uint32_t l_1191 = 9UL;
    int32_t l_1197[1][4];
    int8_t l_1200 = (-3L);
    int32_t l_1202 = (-7L);
    uint8_t l_1203 = 0xC8L;
    int64_t l_1266 = (-1L);
    int64_t l_1267 = 0x46F3C29EA1E585DAL;
    uint32_t *l_1309[2];
    uint64_t *l_1343[3];
    uint64_t **l_1342 = &l_1343[0];
    int32_t *l_1345 = &p_1448->g_2;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_1197[i][j] = 0x60757E1EL;
    }
    for (i = 0; i < 2; i++)
        l_1309[i] = &p_1448->g_490[5];
    for (i = 0; i < 3; i++)
        l_1343[i] = &p_1448->g_238;
    for (p_1448->g_238 = 17; (p_1448->g_238 != 3); p_1448->g_238 = safe_sub_func_uint64_t_u_u(p_1448->g_238, 7))
    { /* block id: 590 */
        uint8_t **l_1121[4];
        int64_t *l_1126[1];
        int32_t l_1130 = 0x2BE0D5F3L;
        int32_t l_1133[10] = {0x7A3DE85FL,0x7A3DE85FL,0x7A3DE85FL,0x7A3DE85FL,0x7A3DE85FL,0x7A3DE85FL,0x7A3DE85FL,0x7A3DE85FL,0x7A3DE85FL,0x7A3DE85FL};
        uint64_t *l_1134 = &p_1448->g_1135;
        int32_t *l_1194 = (void*)0;
        int32_t *l_1195 = (void*)0;
        int32_t *l_1196[1][10][6] = {{{&p_1448->g_2,&l_1176,&l_1176,&p_1448->g_2,&l_1190,&l_1176},{&p_1448->g_2,&l_1176,&l_1176,&p_1448->g_2,&l_1190,&l_1176},{&p_1448->g_2,&l_1176,&l_1176,&p_1448->g_2,&l_1190,&l_1176},{&p_1448->g_2,&l_1176,&l_1176,&p_1448->g_2,&l_1190,&l_1176},{&p_1448->g_2,&l_1176,&l_1176,&p_1448->g_2,&l_1190,&l_1176},{&p_1448->g_2,&l_1176,&l_1176,&p_1448->g_2,&l_1190,&l_1176},{&p_1448->g_2,&l_1176,&l_1176,&p_1448->g_2,&l_1190,&l_1176},{&p_1448->g_2,&l_1176,&l_1176,&p_1448->g_2,&l_1190,&l_1176},{&p_1448->g_2,&l_1176,&l_1176,&p_1448->g_2,&l_1190,&l_1176},{&p_1448->g_2,&l_1176,&l_1176,&p_1448->g_2,&l_1190,&l_1176}}};
        int8_t l_1198 = 0x14L;
        int64_t l_1199[5][2] = {{0x3BA9E95C9B7D1B5AL,0x3BA9E95C9B7D1B5AL},{0x3BA9E95C9B7D1B5AL,0x3BA9E95C9B7D1B5AL},{0x3BA9E95C9B7D1B5AL,0x3BA9E95C9B7D1B5AL},{0x3BA9E95C9B7D1B5AL,0x3BA9E95C9B7D1B5AL},{0x3BA9E95C9B7D1B5AL,0x3BA9E95C9B7D1B5AL}};
        int64_t l_1201[8][8][4] = {{{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L}},{{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L}},{{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L}},{{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L}},{{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L}},{{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L}},{{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L}},{{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L},{0x2DDC6C99604434EAL,(-6L),0x6CAC302E91B6FC8FL,0x7CB93935A6209AD8L}}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1121[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_1126[i] = (void*)0;
        if ((p_9 && (+((l_1121[3] == ((l_1130 = ((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s((0x6963C2542506F408L && (l_1128 |= (l_1127 |= 8L))), 15)) < ((p_1448->g_1129 , 18446744073709551615UL) && (((l_1130 ^ (((safe_div_func_uint64_t_u_u(((*l_1134) = ((!(l_1133[2] = 0x4AAB4126L)) ^ l_1130)), p_7)) > 0x3718L) >= p_8)) != l_1136) && 0UL))) ^ p_9), 0x56F7EFBCL)) , p_7)) , (void*)0)) & l_1136))))
        { /* block id: 596 */
            int32_t *l_1137 = &p_1448->g_51;
            return l_1137;
        }
        else
        { /* block id: 598 */
            int8_t l_1154 = 1L;
            int8_t **l_1155 = (void*)0;
            int32_t l_1156 = 1L;
            l_1156 &= (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(p_8, ((safe_mul_func_uint16_t_u_u(0UL, (safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((p_1448->g_1086.f4 >= (l_1133[4] != (p_6 > ((*l_1134) &= 18446744073709551609UL)))), 2)), 0)), (((0x0194D251867ABBC4L == l_1154) > (((p_7 , (*p_1448->g_554)) == l_1155) != p_8)) , l_1130))), 14)))) , 3UL))), 4)) > p_7), 7));
        }
        for (p_7 = 0; (p_7 < 34); ++p_7)
        { /* block id: 604 */
            uint32_t l_1159 = 4UL;
            int32_t *l_1162 = &p_1448->g_345[0].f8;
            int32_t *l_1163 = &l_1133[3];
            int32_t *l_1164 = &p_1448->g_26[0];
            int32_t *l_1165 = &l_1133[2];
            int32_t *l_1166 = &p_1448->g_26[0];
            int32_t *l_1167 = &p_1448->g_51;
            int32_t *l_1168 = &l_1128;
            int32_t *l_1169 = &l_1133[2];
            int32_t *l_1170 = &p_1448->g_1086.f8;
            int32_t *l_1171 = &p_1448->g_345[0].f8;
            int32_t l_1172 = 0x6F9914A0L;
            int32_t *l_1173 = &l_1133[2];
            int32_t *l_1174 = (void*)0;
            int32_t *l_1175 = (void*)0;
            int32_t *l_1177 = (void*)0;
            int32_t l_1178 = 0L;
            int32_t *l_1179 = &p_1448->g_976.f1.f8;
            int32_t *l_1180 = &l_1172;
            int32_t *l_1181 = (void*)0;
            int32_t *l_1182 = &p_1448->g_345[0].f8;
            int32_t *l_1183 = &p_1448->g_1117[1].f8;
            int32_t *l_1184[4] = {&p_1448->g_1117[1].f8,&p_1448->g_1117[1].f8,&p_1448->g_1117[1].f8,&p_1448->g_1117[1].f8};
            int i;
            l_1159--;
            l_1191++;
        }
        l_1203++;
        for (p_1448->g_1135 = 0; (p_1448->g_1135 == 55); p_1448->g_1135 = safe_add_func_int16_t_s_s(p_1448->g_1135, 1))
        { /* block id: 611 */
            uint32_t l_1208[10] = {0xAFC93F5DL,0UL,0xE61483AAL,0UL,0xAFC93F5DL,0xAFC93F5DL,0UL,0xE61483AAL,0UL,0xAFC93F5DL};
            int i;
            l_1197[0][1] |= l_1208[4];
        }
    }
    (*p_1448->g_1018) = (&l_1191 == (void*)0);
    if ((l_1202 , (l_1200 | p_7)))
    { /* block id: 616 */
        uint16_t l_1217 = 0xF417L;
        uint64_t l_1230 = 0x0D304A6DF551CA52L;
        int32_t l_1231 = 0x18623C5BL;
        int16_t *l_1233 = &p_1448->g_650[1][0][1];
        int8_t *l_1234 = (void*)0;
        int8_t *l_1235 = &l_1186;
        int32_t l_1244 = 0x61DB5AF6L;
        int32_t l_1245 = (-7L);
        int32_t l_1247[5][9][5] = {{{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)}},{{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)}},{{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)}},{{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)}},{{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)},{0x42EABBA2L,0x0E7EB492L,0x6AF62D34L,0L,(-5L)}}};
        int64_t l_1251 = 0x2F9BC3573F6A01B0L;
        int32_t l_1265 = (-10L);
        uint8_t l_1268 = 0UL;
        uint64_t l_1301 = 0xBBA526B684D0722CL;
        int i, j, k;
        if ((safe_rshift_func_uint16_t_u_u((0xBA72L < (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(0x2CL, ((*l_1235) = (safe_mul_func_uint16_t_u_u(l_1217, ((*l_1233) = (safe_add_func_uint16_t_u_u((((((safe_sub_func_int8_t_s_s(((p_1448->g_626.f3 == (+(((p_7 && (safe_sub_func_int16_t_s_s(((safe_div_func_uint64_t_u_u(0x61E306C67C55FD87L, p_8)) & ((safe_mod_func_uint16_t_u_u((+((((safe_lshift_func_uint16_t_u_s(((l_1230 = (0x521EL >= p_1448->g_92)) , p_9), 5)) == l_1217) <= p_9) != l_1217)), p_1448->g_1117[1].f8)) != p_7)), p_6))) , 0xE925E171ADD3DA72L) , 0x0BFDD8E0BE593D66L))) > l_1185), l_1202)) , l_1231) , p_1448->g_1232) , 0x3BFA0DB3L) >= p_6), p_7)))))))), 0x0AL))), 5)))
        { /* block id: 620 */
            int32_t **l_1236 = (void*)0;
            int32_t **l_1237 = &p_1448->g_767[2][4][1];
            int32_t l_1243 = 0x11B07A94L;
            int32_t l_1248 = 8L;
            int32_t l_1249 = 0x7AA77265L;
            int32_t l_1250[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            uint8_t l_1252[1][3];
            int32_t *l_1263[8][6] = {{(void*)0,(void*)0,&l_1247[2][3][1],(void*)0,&l_1247[2][3][1],(void*)0},{(void*)0,(void*)0,&l_1247[2][3][1],(void*)0,&l_1247[2][3][1],(void*)0},{(void*)0,(void*)0,&l_1247[2][3][1],(void*)0,&l_1247[2][3][1],(void*)0},{(void*)0,(void*)0,&l_1247[2][3][1],(void*)0,&l_1247[2][3][1],(void*)0},{(void*)0,(void*)0,&l_1247[2][3][1],(void*)0,&l_1247[2][3][1],(void*)0},{(void*)0,(void*)0,&l_1247[2][3][1],(void*)0,&l_1247[2][3][1],(void*)0},{(void*)0,(void*)0,&l_1247[2][3][1],(void*)0,&l_1247[2][3][1],(void*)0},{(void*)0,(void*)0,&l_1247[2][3][1],(void*)0,&l_1247[2][3][1],(void*)0}};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1252[i][j] = 0xB9L;
            }
            (*l_1237) = (void*)0;
            for (p_1448->g_174 = 1; (p_1448->g_174 >= 0); p_1448->g_174 -= 1)
            { /* block id: 624 */
                int16_t l_1239 = 0x500DL;
                int32_t l_1242 = (-1L);
                int32_t l_1246[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1246[i] = (-1L);
                l_1239 = p_9;
                for (p_1448->g_93 = 1; (p_1448->g_93 >= 0); p_1448->g_93 -= 1)
                { /* block id: 628 */
                    int32_t *l_1240 = (void*)0;
                    int32_t *l_1241[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1241[i] = (void*)0;
                    l_1252[0][2]--;
                    (*l_1237) = l_1241[0];
                    for (p_8 = 0; (p_8 <= 1); p_8 += 1)
                    { /* block id: 633 */
                        int i, j, k;
                        (*p_1448->g_1018) = (((p_6 & p_6) || (safe_div_func_uint32_t_u_u((p_1448->g_706.f5 || 4UL), (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((!p_9), 7)), (p_1448->g_1261 == &p_1448->g_1262)))))) | (0x409DF237L & 5L));
                        p_1448->g_767[(p_1448->g_174 + 2)][(p_8 + 2)][p_1448->g_93] = &l_1189;
                    }
                }
            }
            --l_1268;
        }
        else
        { /* block id: 640 */
            int16_t l_1275 = (-1L);
            int32_t *l_1276 = &p_1448->g_976.f1.f8;
            int32_t l_1282 = 0x4CFF457FL;
            int32_t l_1283 = 0x354E1ECAL;
            uint32_t l_1284[3];
            int32_t l_1292 = 0x123C3A32L;
            int32_t l_1293 = 0x2A9AD77FL;
            int32_t l_1294 = 0x21535E78L;
            int32_t l_1295 = 0L;
            int32_t l_1296 = 0x6088D4F0L;
            int32_t l_1297 = 0L;
            int32_t l_1298 = (-1L);
            int32_t l_1299 = 0x26ED3E90L;
            int32_t l_1300 = (-1L);
            uint32_t *l_1306 = (void*)0;
            uint32_t **l_1308[4] = {&p_1448->g_1307,&p_1448->g_1307,&p_1448->g_1307,&p_1448->g_1307};
            int i;
            for (i = 0; i < 3; i++)
                l_1284[i] = 0xDF597DE3L;
            if (((*l_1276) = ((5UL | ((((-4L) && ((-1L) <= l_1128)) | (0xAF3E3E8D145AC166L & (safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_7, 0UL)), ((0x4B610082L & (p_7 != 5UL)) && 4UL))))) == l_1275)) , l_1275)))
            { /* block id: 642 */
                int32_t *l_1277 = &l_1128;
                int32_t *l_1278 = &l_1231;
                int32_t *l_1279 = &p_1448->g_1232.f8;
                int32_t *l_1280 = &l_1197[0][1];
                int32_t *l_1281[9][3][2] = {{{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]}},{{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]}},{{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]}},{{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]}},{{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]}},{{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]}},{{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]}},{{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]}},{{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]},{&l_1189,&p_1448->g_26[0]}}};
                int i, j, k;
                l_1284[1]++;
            }
            else
            { /* block id: 644 */
                int32_t *l_1287 = (void*)0;
                int32_t *l_1288 = (void*)0;
                int32_t *l_1289 = &p_1448->g_1117[1].f8;
                int32_t *l_1290 = &p_1448->g_1129.f1.f8;
                int32_t *l_1291[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1291[i] = &l_1185;
                ++l_1301;
            }
            (*p_1448->g_1310) = ((*l_1276) = ((0x4CL || (safe_mul_func_int8_t_s_s((l_1306 != (l_1309[0] = p_1448->g_1307)), (*p_1448->g_301)))) , p_7));
            (*p_1448->g_155) = p_1448->g_1311;
        }
    }
    else
    { /* block id: 652 */
        int32_t *l_1312 = (void*)0;
        return l_1312;
    }
    for (p_1448->g_1232.f6 = 28; (p_1448->g_1232.f6 >= (-12)); p_1448->g_1232.f6--)
    { /* block id: 657 */
        uint8_t l_1338 = 0x62L;
        uint32_t *l_1344 = &p_1448->g_490[5];
        for (p_9 = 0; (p_9 > 29); p_9 = safe_add_func_uint8_t_u_u(p_9, 6))
        { /* block id: 660 */
            uint64_t l_1341 = 0UL;
            for (p_1448->g_1232.f1 = 0; (p_1448->g_1232.f1 < 45); p_1448->g_1232.f1 = safe_add_func_uint64_t_u_u(p_1448->g_1232.f1, 2))
            { /* block id: 663 */
                int32_t *l_1319 = &l_1189;
                uint64_t *l_1330[4];
                uint64_t **l_1329 = &l_1330[1];
                int i;
                for (i = 0; i < 4; i++)
                    l_1330[i] = (void*)0;
                (*p_1448->g_155) = (*p_1448->g_122);
                (*l_1319) = p_9;
                for (p_1448->g_1232.f4 = 0; (p_1448->g_1232.f4 < 2); p_1448->g_1232.f4 = safe_add_func_int8_t_s_s(p_1448->g_1232.f4, 4))
                { /* block id: 668 */
                    uint32_t l_1337[1][2][8] = {{{4294967295UL,4294967295UL,0x933C3E19L,4294967295UL,0UL,4294967295UL,0x933C3E19L,4294967295UL},{4294967295UL,4294967295UL,0x933C3E19L,4294967295UL,0UL,4294967295UL,0x933C3E19L,4294967295UL}}};
                    int16_t l_1339 = (-4L);
                    int8_t *l_1340[7][5][3] = {{{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127}},{{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127}},{{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127}},{{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127}},{{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127}},{{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127}},{{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127},{&l_1186,&l_1127,&l_1127}}};
                    int i, j, k;
                    (*l_1319) = (((p_7 = ((safe_mod_func_uint16_t_u_u((((0x33134AE3L | 5UL) > (safe_lshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s((((p_1448->g_1328 , ((p_9 > (0UL & (((((p_6 , l_1344) != (void*)0) , p_7) > l_1341) && 1L))) | 0x08L)) , p_1448->g_1117[1].f2) < l_1190), p_1448->g_295)) & p_9), 0))) | l_1337[0][0][0]), 7UL)) >= p_1448->g_1232.f3)) , (*p_1448->g_122)) , (*l_1319));
                }
            }
            return l_1344;
        }
    }
    return l_1345;
}


/* ------------------------------------------ */
/* 
 * reads : p_1448->g_238 p_1448->g_626.f4 p_1448->g_121.f4 p_1448->g_719 p_1448->g_1111 p_1448->g_2 p_1448->g_1117 p_1448->g_155 p_1448->g_458.f9
 * writes: p_1448->g_238 p_1448->g_719 p_1448->g_121
 */
int64_t  func_10(int32_t * p_11, int64_t  p_12, uint8_t  p_13, int32_t * p_14, int32_t * p_15, struct S2 * p_1448)
{ /* block id: 578 */
    uint64_t *l_1089 = &p_1448->g_238;
    uint32_t **l_1100 = &p_1448->g_719;
    int32_t l_1101 = 1L;
    int32_t l_1106 = 1L;
    uint32_t *l_1110 = &p_1448->g_107;
    uint32_t **l_1112 = (void*)0;
    uint32_t *l_1113 = &p_1448->g_97;
    int32_t *l_1114[3];
    int16_t l_1115 = (-7L);
    int64_t l_1116 = (-1L);
    int i;
    for (i = 0; i < 3; i++)
        l_1114[i] = (void*)0;
    l_1101 = (((((*l_1089)--) ^ (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(p_12, 0x5FB2D68575FC64EFL)), p_12)), 9))) > (((safe_lshift_func_uint8_t_u_u((p_1448->g_626.f4 > ((void*)0 == l_1100)), p_13)) != p_12) , 0x8E04L)) <= l_1101);
    l_1116 |= ((safe_sub_func_uint32_t_u_u(((l_1115 = (+(((((~((l_1113 = ((*l_1100) = (((+0x606C5E5BL) >= (safe_lshift_func_uint16_t_u_u(l_1106, (((safe_lshift_func_uint8_t_u_s(((0xE5EEL || ((p_1448->g_121[0].f4 <= (p_14 != (*l_1100))) > ((safe_unary_minus_func_int64_t_s((p_12 <= ((p_12 <= (+(l_1110 == p_1448->g_1111[4][2][0]))) > 1UL)))) == p_13))) , 0x80L), 2)) , l_1106) < l_1106)))) , (void*)0))) == p_14)) & p_13) , &p_1448->g_238) == (void*)0) < p_1448->g_2))) & p_12), 1UL)) ^ (*p_15));
    (*p_1448->g_155) = p_1448->g_1117[1];
    return p_1448->g_458.f9;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_16(int32_t * p_17, int16_t  p_18, int32_t * p_19, struct S2 * p_1448)
{ /* block id: 576 */
    int8_t l_1087[10][1];
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
            l_1087[i][j] = 0x5FL;
    }
    return l_1087[0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1448->g_1066 p_1448->g_155 p_1448->g_345.f8 p_1448->g_174 p_1448->g_2 p_1448->g_1086
 * writes: p_1448->g_121 p_1448->g_197.f1.f3 p_1448->g_345.f8
 */
uint16_t  func_27(int32_t * p_28, int32_t  p_29, struct S2 * p_1448)
{ /* block id: 559 */
    int32_t *l_1067 = &p_1448->g_345[0].f8;
    int32_t *l_1068[6][3] = {{&p_1448->g_51,&p_1448->g_51,&p_1448->g_51},{&p_1448->g_51,&p_1448->g_51,&p_1448->g_51},{&p_1448->g_51,&p_1448->g_51,&p_1448->g_51},{&p_1448->g_51,&p_1448->g_51,&p_1448->g_51},{&p_1448->g_51,&p_1448->g_51,&p_1448->g_51},{&p_1448->g_51,&p_1448->g_51,&p_1448->g_51}};
    int16_t l_1069 = (-9L);
    int64_t l_1070 = 0x12A2C564972AAF05L;
    int32_t l_1071 = (-1L);
    int32_t l_1072 = (-3L);
    int32_t l_1073[1];
    uint16_t l_1074 = 65535UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_1073[i] = 0x1975586AL;
    (*p_1448->g_155) = p_1448->g_1066[1];
    l_1074++;
    for (l_1072 = 0; (l_1072 == 12); l_1072++)
    { /* block id: 564 */
        uint64_t *l_1080[1];
        uint64_t **l_1079 = &l_1080[0];
        int32_t l_1083 = 1L;
        uint16_t *l_1084 = (void*)0;
        uint16_t *l_1085 = &p_1448->g_197.f1.f3;
        int i;
        for (i = 0; i < 1; i++)
            l_1080[i] = &p_1448->g_238;
        if (((*l_1067) = ((l_1079 != (((*l_1085) = (p_29 , ((p_29 < (((safe_mod_func_uint32_t_u_u((p_1448->g_1066[1].f4 ^ 8UL), l_1083)) , (*l_1067)) ^ (3L >= ((p_1448->g_174 , (*p_28)) && l_1083)))) == 4294967295UL))) , (void*)0)) & l_1083)))
        { /* block id: 567 */
            return p_29;
        }
        else
        { /* block id: 569 */
            (*p_1448->g_155) = p_1448->g_1086;
            if ((*p_28))
                break;
        }
        return (*l_1067);
    }
    return p_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_1448->g_134 p_1448->g_934 p_1448->g_2 p_1448->g_92 p_1448->g_51 p_1448->g_99 p_1448->g_68 p_1448->g_650 p_1448->g_345.f5 p_1448->g_93 p_1448->g_1018 p_1448->g_1038 p_1448->g_276 p_1448->g_127 p_1448->g_128 p_1448->g_272 p_1448->g_112.f9 p_1448->g_65 p_1448->g_142 p_1448->g_174 p_1448->g_97 p_1448->g_238 p_1448->g_166 p_1448->g_121.f9 p_1448->g_144
 * writes: p_1448->g_134 p_1448->g_767 p_1448->g_92 p_1448->g_51 p_1448->g_99 p_1448->g_68 p_1448->g_168 p_1448->g_276 p_1448->g_153 p_1448->g_127 p_1448->g_238 p_1448->g_107
 */
int32_t * func_30(int8_t  p_31, int32_t * p_32, int32_t * p_33, struct S2 * p_1448)
{ /* block id: 488 */
    int64_t *l_937[10] = {&p_1448->g_65,&p_1448->g_613,&p_1448->g_65,&p_1448->g_65,&p_1448->g_613,&p_1448->g_65,&p_1448->g_65,&p_1448->g_613,&p_1448->g_65,&p_1448->g_65};
    int32_t l_939 = (-6L);
    int32_t l_995 = 0x3850BC2DL;
    int32_t l_1001 = 1L;
    uint64_t l_1063[2];
    int i;
    for (i = 0; i < 2; i++)
        l_1063[i] = 0xE358F4C88A7B350EL;
    for (p_1448->g_134 = (-4); (p_1448->g_134 == (-20)); p_1448->g_134 = safe_sub_func_int8_t_s_s(p_1448->g_134, 6))
    { /* block id: 491 */
        int32_t *l_933 = &p_1448->g_51;
        uint32_t l_940 = 3UL;
        uint32_t *l_941 = &p_1448->g_92;
        int64_t l_942 = 0x5E5E9BA2E6A1929DL;
        struct S0 *l_959 = &p_1448->g_345[1];
        struct S0 **l_958 = &l_959;
        uint8_t *l_1011 = &p_1448->g_142;
        uint8_t **l_1010 = &l_1011;
        uint64_t *l_1033 = &p_1448->g_238;
        (*p_1448->g_934) = l_933;
        if (((((((safe_sub_func_uint32_t_u_u(((void*)0 == l_937[8]), (*p_32))) & (-4L)) | ((((*l_941) &= (+(((((p_31 == 0x9DF5L) <= (p_31 <= (p_31 , (safe_unary_minus_func_int32_t_s((*p_32)))))) & l_939) == l_939) && l_940))) == (*l_933)) || p_31)) != p_31) , p_31) , l_942))
        { /* block id: 494 */
            int8_t l_951[1][1][2];
            uint32_t *l_954 = &p_1448->g_97;
            uint64_t *l_967 = &p_1448->g_238;
            uint64_t **l_966 = &l_967;
            int32_t l_989 = 0x07FC002EL;
            int32_t l_990 = 0x43F550F8L;
            int32_t l_991 = (-6L);
            int32_t l_992[6][1][5] = {{{1L,1L,0x0F69E78AL,0x56A29E7AL,0x59D52A6DL}},{{1L,1L,0x0F69E78AL,0x56A29E7AL,0x59D52A6DL}},{{1L,1L,0x0F69E78AL,0x56A29E7AL,0x59D52A6DL}},{{1L,1L,0x0F69E78AL,0x56A29E7AL,0x59D52A6DL}},{{1L,1L,0x0F69E78AL,0x56A29E7AL,0x59D52A6DL}},{{1L,1L,0x0F69E78AL,0x56A29E7AL,0x59D52A6DL}}};
            uint16_t l_998 = 0UL;
            int16_t *l_1025 = &p_1448->g_276;
            int8_t ***l_1030 = &p_1448->g_272;
            struct S0 **l_1045 = &l_959;
            int32_t **l_1054 = &p_1448->g_127;
            int32_t *l_1062 = &p_1448->g_68;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_951[i][j][k] = 3L;
                }
            }
            (*l_933) |= 2L;
            if ((*p_32))
            { /* block id: 496 */
                uint8_t l_960 = 2UL;
                int32_t *l_983 = &p_1448->g_51;
                int32_t l_985 = (-4L);
                int32_t l_993 = 0x7AB5687FL;
                int32_t l_996 = 0x16671B05L;
                for (p_1448->g_99 = (-6); (p_1448->g_99 != 5); p_1448->g_99++)
                { /* block id: 499 */
                    struct S0 *l_946 = &p_1448->g_345[0];
                    struct S0 **l_945 = &l_946;
                    struct S0 *l_948 = &p_1448->g_345[0];
                    struct S0 **l_947 = &l_948;
                    int32_t l_957 = 0x13FAAFD6L;
                    int32_t l_994 = 1L;
                    int32_t l_997 = 3L;
                    (*l_947) = ((*l_945) = &p_1448->g_345[0]);
                    if (l_939)
                        continue;
                }
            }
            else
            { /* block id: 515 */
                int64_t l_1016 = 6L;
                l_1001 = (*p_32);
                for (p_1448->g_68 = 0; (p_1448->g_68 <= 9); p_1448->g_68 += 1)
                { /* block id: 519 */
                    int16_t *l_1026 = (void*)0;
                    uint32_t l_1039 = 6UL;
                    for (p_1448->g_51 = 2; (p_1448->g_51 >= 0); p_1448->g_51 -= 1)
                    { /* block id: 522 */
                        int32_t *l_1017 = &l_992[2][0][3];
                        int16_t **l_1027 = &l_1026;
                        int8_t *l_1028 = (void*)0;
                        int8_t *l_1029[10][2][1] = {{{&l_951[0][0][0]},{&l_951[0][0][0]}},{{&l_951[0][0][0]},{&l_951[0][0][0]}},{{&l_951[0][0][0]},{&l_951[0][0][0]}},{{&l_951[0][0][0]},{&l_951[0][0][0]}},{{&l_951[0][0][0]},{&l_951[0][0][0]}},{{&l_951[0][0][0]},{&l_951[0][0][0]}},{{&l_951[0][0][0]},{&l_951[0][0][0]}},{{&l_951[0][0][0]},{&l_951[0][0][0]}},{{&l_951[0][0][0]},{&l_951[0][0][0]}},{{&l_951[0][0][0]},{&l_951[0][0][0]}}};
                        int32_t *l_1040 = &l_991;
                        int i, j, k;
                        (*p_1448->g_1018) = ((((*l_1017) = (p_1448->g_650[(p_1448->g_51 + 1)][p_1448->g_51][(p_1448->g_51 + 2)] == ((((p_1448->g_168 = (safe_rshift_func_int8_t_s_u(p_31, 3))) > (safe_mod_func_int8_t_s_s(p_31, (safe_add_func_int8_t_s_s(((void*)0 == l_1010), (safe_rshift_func_uint8_t_u_s(((p_31 <= (((--(*l_941)) >= p_1448->g_345[0].f5) || (((~((p_31 , l_1016) , 0L)) == p_31) , p_31))) ^ p_1448->g_93), 2))))))) ^ l_1016) < (-4L)))) & l_951[0][0][0]) || 0x65B4L);
                        (*l_1040) ^= (safe_rshift_func_int16_t_s_u(((*l_1025) |= ((((&p_1448->g_272 != ((safe_lshift_func_int8_t_s_s(((*l_1017) |= (safe_div_func_int64_t_s_s((l_1025 == ((*l_1027) = l_1026)), p_31))), 3)) , l_1030)) >= (safe_div_func_uint64_t_u_u((l_1033 == ((safe_add_func_uint64_t_u_u(((((safe_mod_func_int8_t_s_s(p_1448->g_1038, 9UL)) & (((l_1039 = (*p_32)) , &p_1448->g_155) == (void*)0)) ^ p_31) || l_1001), p_31)) , &p_1448->g_238)), l_1016))) != 18446744073709551615UL) , 7L)), 6));
                        if (l_951[0][0][0])
                            continue;
                    }
                    for (l_991 = 0; (l_991 >= 0); l_991 -= 1)
                    { /* block id: 536 */
                        p_1448->g_153 = (void*)0;
                    }
                }
                if (l_1016)
                    break;
            }
            (*l_1054) = p_33;
            (*l_1054) = func_45(p_31, ((*l_1062) = ((*l_933) |= (((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(l_939, ((**l_966) = 18446744073709551615UL))), (safe_unary_minus_func_int8_t_s((((**l_1054) > 0x8DL) == l_1001))))) ^ (&l_1025 == (void*)0)) > (safe_lshift_func_int16_t_s_u(((*l_1025) &= p_31), 4))))), (*p_1448->g_128), p_1448);
        }
        else
        { /* block id: 552 */
            return p_32;
        }
        if ((*p_33))
            break;
    }
    --l_1063[0];
    return p_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_1448->g_92 p_1448->g_51 p_1448->g_99 p_1448->g_814 p_1448->g_276 p_1448->g_154 p_1448->g_155 p_1448->g_121 p_1448->g_334 p_1448->g_345.f7 p_1448->g_65 p_1448->g_458.f7 p_1448->g_295 p_1448->g_301 p_1448->g_302 p_1448->g_174 p_1448->g_252.f5 p_1448->g_142 p_1448->g_168 p_1448->g_345.f2 p_1448->g_134 p_1448->g_389 p_1448->g_252.f4 p_1448->g_705.f7 p_1448->g_345.f4 p_1448->g_238 p_1448->g_706.f5 p_1448->g_650 p_1448->g_345.f3 p_1448->g_455 p_1448->g_252.f9 p_1448->g_895 p_1448->g_197.f0 p_1448->g_899 p_1448->g_922 p_1448->g_68
 * writes: p_1448->g_92 p_1448->g_51 p_1448->g_99 p_1448->g_168 p_1448->g_107 p_1448->g_335 p_1448->g_345.f6 p_1448->g_65 p_1448->g_767 p_1448->g_134 p_1448->g_238 p_1448->g_613 p_1448->g_869 p_1448->g_197.f1.f6 p_1448->g_68 p_1448->g_127 p_1448->g_197.f0 p_1448->g_121 p_1448->g_345.f8
 */
int8_t  func_34(int64_t  p_35, uint64_t  p_36, int64_t  p_37, struct S2 * p_1448)
{ /* block id: 413 */
    struct S0 *l_815 = (void*)0;
    uint8_t *l_835[9] = {&p_1448->g_166,&p_1448->g_166,&p_1448->g_166,&p_1448->g_166,&p_1448->g_166,&p_1448->g_166,&p_1448->g_166,&p_1448->g_166,&p_1448->g_166};
    uint8_t **l_834 = &l_835[5];
    int32_t l_844[1][10] = {{0x14DF6D42L,(-10L),0x7C5DEDC7L,(-10L),0x14DF6D42L,0x14DF6D42L,(-10L),0x7C5DEDC7L,(-10L),0x14DF6D42L}};
    uint64_t *l_851 = (void*)0;
    uint32_t *l_879[5][3][1];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_879[i][j][k] = (void*)0;
        }
    }
    for (p_1448->g_92 = 0; (p_1448->g_92 <= 1); p_1448->g_92 += 1)
    { /* block id: 416 */
        int32_t *l_813 = &p_1448->g_51;
        uint64_t l_854 = 0xC74698781A2DF526L;
        struct S0 **l_870 = &l_815;
        uint32_t *l_880 = &p_1448->g_168;
        int32_t l_913 = 0x1994B497L;
        (*l_813) &= (safe_lshift_func_uint8_t_u_s(p_35, 3));
        for (p_1448->g_99 = 0; (p_1448->g_99 <= 0); p_1448->g_99 += 1)
        { /* block id: 420 */
            uint32_t l_838 = 0x67EFAD95L;
            uint8_t l_845 = 0x8FL;
            uint64_t *l_868[4][5] = {{&p_1448->g_238,&p_1448->g_238,&p_1448->g_238,&p_1448->g_238,&p_1448->g_238},{&p_1448->g_238,&p_1448->g_238,&p_1448->g_238,&p_1448->g_238,&p_1448->g_238},{&p_1448->g_238,&p_1448->g_238,&p_1448->g_238,&p_1448->g_238,&p_1448->g_238},{&p_1448->g_238,&p_1448->g_238,&p_1448->g_238,&p_1448->g_238,&p_1448->g_238}};
            int16_t *l_883 = &p_1448->g_174;
            int32_t *l_898 = &p_1448->g_345[0].f8;
            int32_t l_916[9] = {(-1L),0x6CEB6782L,(-1L),(-1L),0x6CEB6782L,(-1L),(-1L),0x6CEB6782L,(-1L)};
            int i, j;
            for (p_37 = 1; (p_37 >= 0); p_37 -= 1)
            { /* block id: 423 */
                uint32_t *l_822 = &p_1448->g_168;
                uint32_t *l_823 = &p_1448->g_107;
                int64_t *l_839 = &p_1448->g_345[0].f6;
                int64_t *l_840 = &p_1448->g_197.f1.f6;
                int64_t *l_841 = &p_1448->g_197.f1.f6;
                int64_t *l_842 = &p_1448->g_65;
                int8_t *l_843[3][7] = {{&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134},{&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134},{&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134}};
                uint8_t **l_888 = &l_835[5];
                uint16_t l_919 = 0x03CEL;
                int i, j, k;
                (*l_813) |= (((void*)0 != p_1448->g_814[1][0][0]) != ((p_1448->g_276 , l_815) != (void*)0));
                if (((((((((safe_sub_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((((*l_823) = ((*l_822) = 1UL)) == p_35), ((((**p_1448->g_154) , ((safe_mul_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((l_844[0][1] = (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((((((*p_1448->g_334) = (p_36 , l_834)) != ((safe_lshift_func_int8_t_s_u(((((*l_842) ^= (((0x36EBCE2B32D0C687L ^ ((((*l_839) = (l_838 < (((*l_813) & (*l_813)) > l_838))) <= p_1448->g_345[0].f7) < 0x00L)) | 0x104BL) == p_36)) && 6L) && p_37), 2)) , (void*)0)) , 0x73L) , p_1448->g_458.f7), l_838)), p_37))), 2)) ^ 0xCEE60F6224A78597L), 15)) > p_1448->g_295) || (*p_1448->g_301)), p_36)) != p_37)) > p_1448->g_174) || p_35))) , p_1448->g_252.f5), p_1448->g_276)) == 0x414E953A4273FE34L), p_1448->g_142)) ^ l_845) , &l_843[2][2]) == (void*)0) != p_36) != p_35) && p_37) ^ p_36))
                { /* block id: 431 */
                    uint64_t l_864 = 0xAD0A7532F5D562C1L;
                    for (p_36 = 0; (p_36 <= 1); p_36 += 1)
                    { /* block id: 434 */
                        uint64_t *l_855 = &l_854;
                        uint64_t **l_861 = &l_855;
                        uint32_t *l_867 = (void*)0;
                        int i, j, k;
                        if (p_35)
                            break;
                        p_1448->g_767[(p_36 + 1)][(p_1448->g_99 + 4)][p_37] = &l_844[0][1];
                        (*l_813) = (l_854 ^= (((safe_add_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((p_35 | p_35), ((p_1448->g_345[0].f7 == l_844[0][0]) && (safe_unary_minus_func_int64_t_s((((*l_813) , l_840) != l_851)))))) > p_1448->g_168), (p_1448->g_134 |= (safe_div_func_uint32_t_u_u(p_1448->g_345[0].f2, p_35))))) , 2L) <= p_36));
                        (*l_813) = (((((*l_855) &= p_1448->g_389) == p_1448->g_252.f4) , (p_1448->g_238 &= (safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((l_838 || (safe_unary_minus_func_uint32_t_u(((((*l_861) = &p_1448->g_238) == (((((*l_822) = (p_37 >= (safe_add_func_uint16_t_u_u(l_864, p_1448->g_705.f7)))) ^ 4294967287UL) < (safe_mul_func_uint16_t_u_u(((void*)0 == l_867), p_35))) , l_868[3][1])) & 0x93L)))) != l_844[0][1]), 0xE3L)), p_1448->g_345[0].f4)))) & p_37);
                    }
                }
                else
                { /* block id: 446 */
                    int16_t *l_884 = (void*)0;
                    int32_t l_887 = (-3L);
                    for (p_1448->g_613 = 1; (p_1448->g_613 >= 0); p_1448->g_613 -= 1)
                    { /* block id: 449 */
                        int i;
                        if ((*l_813))
                            break;
                        p_1448->g_869 = p_1448->g_121[(p_1448->g_99 + 1)];
                    }
                    if (((&p_1448->g_122 != l_870) && 0x4B5CED3E40176E78L))
                    { /* block id: 453 */
                        (*p_1448->g_455) = (((((safe_rshift_func_int16_t_s_s((((*l_840) = (((0x10DC3D912ECC2702L < ((safe_mod_func_int16_t_s_s(((safe_add_func_int32_t_s_s((!l_844[0][6]), (p_35 , ((+((l_879[3][0][0] != (l_880 = &p_1448->g_168)) > (l_844[0][1] == (l_883 == l_884)))) >= (((safe_add_func_int64_t_s_s(p_1448->g_706.f5, p_1448->g_650[1][0][1])) >= 0xA80E0400BE4F326CL) || l_844[0][0]))))) , p_37), 0x7613L)) && p_37)) != 0L) >= 0x5B474CDCL)) != p_37), p_36)) < l_887) > 0L) > p_1448->g_345[0].f3) >= 1L);
                    }
                    else
                    { /* block id: 457 */
                        return l_844[0][1];
                    }
                }
                if ((((void*)0 != l_888) < (safe_lshift_func_int16_t_s_u(((-10L) < ((((p_36 , (safe_mul_func_uint16_t_u_u(0x7AEDL, (l_838 > (safe_sub_func_uint32_t_u_u((+(~p_35)), l_844[0][2])))))) >= l_838) < p_37) <= p_35)), (*l_813)))))
                { /* block id: 461 */
                    uint32_t l_900[2][7] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
                    int i, j;
                    (*p_1448->g_895) = (p_1448->g_252.f9 , &l_844[0][0]);
                    for (p_1448->g_197.f0 = 0; (p_1448->g_197.f0 < (-23)); p_1448->g_197.f0 = safe_sub_func_uint16_t_u_u(p_1448->g_197.f0, 3))
                    { /* block id: 465 */
                        int32_t l_901[10][6][4] = {{{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)}},{{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)}},{{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)}},{{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)}},{{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)}},{{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)}},{{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)}},{{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)}},{{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)}},{{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)},{0x50743D16L,1L,0L,(-1L)}}};
                        int i, j, k;
                        (*p_1448->g_899) = l_898;
                        if (l_900[0][2])
                            continue;
                        return l_901[3][2][3];
                    }
                }
                else
                { /* block id: 470 */
                    int32_t *l_903 = &p_1448->g_51;
                    int32_t l_917 = 0L;
                    int32_t l_918 = 8L;
                    for (l_854 = 0; (l_854 <= 1); l_854 += 1)
                    { /* block id: 473 */
                        int32_t *l_902 = (void*)0;
                        int32_t *l_904 = &p_1448->g_68;
                        int32_t *l_905 = &l_844[0][1];
                        int32_t *l_906 = (void*)0;
                        int32_t *l_907 = &p_1448->g_51;
                        int32_t *l_908 = &p_1448->g_197.f1.f8;
                        int32_t *l_909 = &p_1448->g_197.f1.f8;
                        int32_t *l_910 = &l_844[0][8];
                        int32_t *l_911 = &p_1448->g_345[0].f8;
                        int32_t *l_912 = &l_844[0][8];
                        int32_t *l_914 = &l_913;
                        int32_t *l_915[7][3][9] = {{{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8}},{{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8}},{{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8}},{{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8}},{{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8}},{{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8}},{{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8},{&l_844[0][9],&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_99,&l_844[0][1],&l_844[0][1],&p_1448->g_99,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8}}};
                        int i, j, k;
                        l_903 = l_902;
                        l_919++;
                        (*p_1448->g_155) = p_1448->g_922[6];
                    }
                    (*l_898) = ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((0xDBL & p_37), (p_37 , (-1L)))), p_35)) && (l_844[0][1] ^= (p_37 <= ((safe_add_func_int32_t_s_s(p_36, (*p_1448->g_455))) && ((*l_822)--)))));
                    if (p_36)
                        continue;
                }
            }
            return p_35;
        }
    }
    return l_844[0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1448->g_300 p_1448->g_238 p_1448->g_309 p_1448->g_166 p_1448->g_188 p_1448->g_189 p_1448->g_134 p_1448->g_2 p_1448->g_51 p_1448->g_99 p_1448->g_121 p_1448->g_301 p_1448->g_302 p_1448->g_334 p_1448->g_338 p_1448->g_142 p_1448->g_515 p_1448->g_490 p_1448->g_345.f2 p_1448->g_345.f8 p_1448->g_554 p_1448->g_127 p_1448->g_272 p_1448->g_309.f0 p_1448->g_112.f1 p_1448->g_335 p_1448->g_97 p_1448->g_168 p_1448->g_613 p_1448->g_345.f9 p_1448->g_455 p_1448->g_276 p_1448->g_626 p_1448->g_197.f0 p_1448->g_112.f9 p_1448->g_65 p_1448->g_174 p_1448->g_144 p_1448->g_68 p_1448->g_93 p_1448->g_650 p_1448->g_112.f3 p_1448->g_345.f3 p_1448->g_92 p_1448->g_107 p_1448->g_112 p_1448->g_122 p_1448->g_128 p_1448->g_154 p_1448->g_197 p_1448->g_155 p_1448->g_252 p_1448->g_345.f6 p_1448->g_699 p_1448->g_705 p_1448->g_766 p_1448->g_767
 * writes: p_1448->g_188 p_1448->g_295 p_1448->g_238 p_1448->g_142 p_1448->g_197.f1.f3 p_1448->g_168 p_1448->g_272 p_1448->g_134 p_1448->g_99 p_1448->g_127 p_1448->g_68 p_1448->g_166 p_1448->g_276 p_1448->g_189 p_1448->g_345 p_1448->g_197.f0 p_1448->g_107 p_1448->g_65 p_1448->g_92 p_1448->g_93 p_1448->g_97 p_1448->g_121 p_1448->g_155 p_1448->g_174 p_1448->g_197.f1.f2 p_1448->g_699 p_1448->g_706 p_1448->g_718 p_1448->g_767 p_1448->g_389
 */
uint8_t  func_38(int64_t  p_39, int16_t  p_40, int32_t * p_41, int32_t * p_42, uint16_t  p_43, struct S2 * p_1448)
{ /* block id: 149 */
    int8_t **l_292 = &p_1448->g_189;
    int64_t *l_293 = (void*)0;
    int64_t *l_294 = &p_1448->g_295;
    uint8_t ***l_296 = (void*)0;
    uint8_t *l_299 = (void*)0;
    uint8_t **l_298 = &l_299;
    uint8_t ***l_297 = &l_298;
    int32_t l_325 = 9L;
    uint8_t l_397[3][2];
    uint16_t l_398 = 0UL;
    int32_t l_483 = 1L;
    int32_t l_484 = 5L;
    int32_t l_485 = (-9L);
    int32_t l_489 = 0x30CB3A23L;
    int32_t l_500 = 2L;
    int32_t l_504 = 0L;
    int32_t l_506 = 0x7011F1B9L;
    int32_t l_507 = 0L;
    int32_t l_508 = 0x60BF34B6L;
    int16_t l_526 = 0x76A4L;
    struct S0 *l_535 = &p_1448->g_345[0];
    struct S0 **l_534 = &l_535;
    struct S0 **l_536 = &l_535;
    uint16_t l_537 = 0xE0ABL;
    int32_t l_571 = 0x74910216L;
    int32_t l_572 = 0x45AB1D1AL;
    int32_t l_574[4][8] = {{0x0FF49E8DL,5L,8L,(-1L),8L,5L,0x0FF49E8DL,(-10L)},{0x0FF49E8DL,5L,8L,(-1L),8L,5L,0x0FF49E8DL,(-10L)},{0x0FF49E8DL,5L,8L,(-1L),8L,5L,0x0FF49E8DL,(-10L)},{0x0FF49E8DL,5L,8L,(-1L),8L,5L,0x0FF49E8DL,(-10L)}};
    uint32_t l_603 = 0x22EE0FD4L;
    uint64_t l_646 = 0x4C9B044C4BA5ABF4L;
    int32_t l_665 = 0x5AA2BB35L;
    uint32_t l_696 = 4294967293UL;
    uint8_t l_734 = 0x45L;
    union U1 *l_807 = &p_1448->g_197;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_397[i][j] = 0xA7L;
    }
    p_1448->g_188 = l_292;
    if ((((*l_294) = (0x83D5187F818FFB8DL <= 0x68C0C089D6F41877L)) , (((*l_297) = (void*)0) != p_1448->g_300)))
    { /* block id: 153 */
        int8_t **l_307 = &p_1448->g_189;
        int32_t l_340 = 2L;
        for (p_1448->g_238 = 0; (p_1448->g_238 <= 1); p_1448->g_238 += 1)
        { /* block id: 156 */
            uint32_t l_324 = 4294967295UL;
            uint8_t ***l_337[1];
            int32_t *l_341 = &p_1448->g_68;
            struct S0 *l_344 = &p_1448->g_345[0];
            int i;
            for (i = 0; i < 1; i++)
                l_337[i] = &l_298;
            for (p_1448->g_142 = 0; (p_1448->g_142 <= 0); p_1448->g_142 += 1)
            { /* block id: 159 */
                uint32_t *l_326 = (void*)0;
                uint32_t l_333 = 0xF625D81BL;
                for (p_1448->g_197.f1.f3 = 0; (p_1448->g_197.f1.f3 <= 0); p_1448->g_197.f1.f3 += 1)
                { /* block id: 162 */
                    int64_t l_327 = 0x5533B808DDD28121L;
                    uint8_t ****l_336 = &l_297;
                    int32_t *l_339[10][10][1] = {{{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99}},{{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99}},{{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99}},{{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99}},{{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99}},{{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99}},{{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99}},{{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99}},{{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99}},{{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99},{&p_1448->g_99}}};
                    int i, j, k;
                    for (p_1448->g_168 = 0; (p_1448->g_168 <= 1); p_1448->g_168 += 1)
                    { /* block id: 165 */
                        int8_t ***l_308 = &p_1448->g_272;
                        int32_t l_317 = (-1L);
                        int32_t *l_328 = &p_1448->g_99;
                        int i;
                        (*l_328) &= (l_327 ^= (1L <= (safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((l_292 == ((*l_308) = l_307)), (p_1448->g_309 , (safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((l_317 > (p_40 , ((((safe_lshift_func_int8_t_s_u(((*p_1448->g_189) = (safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((p_1448->g_166 , l_317) ^ ((l_324 , l_325) & (**p_1448->g_188))), p_43)) | (*p_41)), p_1448->g_238))), p_40)) ^ 1UL) , p_42) == l_326))))), p_39)) , p_39) >= l_317), 0x20L)), p_1448->g_51))))) , (-5L)), l_317))));
                    }
                    l_325 |= (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((p_1448->g_121[p_1448->g_238] , (+(*p_1448->g_301))), p_39)), ((**l_292) ^= (((*l_336) = ((l_333 , p_40) , p_1448->g_334)) != l_337[0]))));
                    (*p_1448->g_338) = p_42;
                    l_340 |= 0x64E1D579L;
                }
            }
            (*l_341) = l_340;
            (*l_341) = (safe_sub_func_uint8_t_u_u(255UL, (((*p_41) == ((void*)0 == l_344)) , l_340)));
        }
    }
    else
    { /* block id: 181 */
        int32_t l_392 = 1L;
        int32_t l_454 = (-2L);
        int64_t l_473 = (-9L);
        int32_t l_479 = 1L;
        int32_t l_481[8][8] = {{1L,0x6D133D88L,6L,0x4CA38053L,(-1L),(-3L),(-3L),(-1L)},{1L,0x6D133D88L,6L,0x4CA38053L,(-1L),(-3L),(-3L),(-1L)},{1L,0x6D133D88L,6L,0x4CA38053L,(-1L),(-3L),(-3L),(-1L)},{1L,0x6D133D88L,6L,0x4CA38053L,(-1L),(-3L),(-3L),(-1L)},{1L,0x6D133D88L,6L,0x4CA38053L,(-1L),(-3L),(-3L),(-1L)},{1L,0x6D133D88L,6L,0x4CA38053L,(-1L),(-3L),(-3L),(-1L)},{1L,0x6D133D88L,6L,0x4CA38053L,(-1L),(-3L),(-3L),(-1L)},{1L,0x6D133D88L,6L,0x4CA38053L,(-1L),(-3L),(-3L),(-1L)}};
        uint32_t l_509 = 0xEC8ABF2DL;
        int32_t *l_512 = &l_481[1][3];
        int32_t *l_516 = &l_489;
        int32_t *l_517 = &l_485;
        int32_t *l_518 = (void*)0;
        int32_t *l_519 = &l_500;
        int32_t *l_520 = &p_1448->g_197.f1.f8;
        int32_t *l_521 = (void*)0;
        int32_t *l_522 = &p_1448->g_51;
        int32_t *l_523 = &l_489;
        int32_t *l_524 = (void*)0;
        int32_t *l_525[8] = {&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8,&p_1448->g_345[0].f8};
        uint16_t l_527 = 0x9C67L;
        int i, j;
        for (p_39 = 0; (p_39 >= 4); p_39 = safe_add_func_int16_t_s_s(p_39, 8))
        { /* block id: 184 */
            int64_t l_362 = 0x4AF53D4998C55F51L;
            int32_t l_401 = 0L;
            int16_t l_475 = 0x65ADL;
            int8_t l_480 = (-1L);
            int32_t l_486 = 0x586F7818L;
            int32_t l_487 = 0x02DCEDD7L;
            int32_t l_488 = 6L;
            int32_t l_497 = 0x56766A40L;
            int32_t l_498 = 1L;
            int32_t l_501 = 0x12192480L;
            int32_t l_502 = (-9L);
            int32_t l_503 = 0L;
            int32_t l_505[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            (1 + 1);
        }
        (*l_512) &= 0x0248581DL;
        for (p_1448->g_166 = 0; (p_1448->g_166 <= 0); p_1448->g_166 += 1)
        { /* block id: 272 */
            int32_t *l_513 = &l_485;
            for (p_40 = 0; (p_40 <= 0); p_40 += 1)
            { /* block id: 275 */
                if (l_325)
                    break;
            }
            (*p_1448->g_515) = l_513;
        }
        ++l_527;
    }
    if ((l_489 && ((safe_lshift_func_uint16_t_u_u(((((p_1448->g_490[5] || (safe_mul_func_int8_t_s_s((l_534 != l_536), 0xA6L))) >= (((l_537 ^ (-7L)) | l_397[2][1]) || ((((safe_add_func_uint8_t_u_u((*p_1448->g_301), l_397[2][1])) ^ l_397[2][0]) , l_506) <= p_1448->g_345[0].f2))) > p_1448->g_345[0].f8) ^ 0x8AL), 15)) != 1UL)))
    { /* block id: 282 */
        uint64_t l_550 = 1UL;
        int32_t **l_556 = &p_1448->g_127;
        int16_t *l_566 = &l_526;
        int32_t l_570[3];
        int32_t l_573 = 0x327F4C80L;
        uint64_t l_575 = 0xD958023BE143C79DL;
        int i;
        for (i = 0; i < 3; i++)
            l_570[i] = 8L;
        for (p_1448->g_166 = 0; (p_1448->g_166 <= 55); p_1448->g_166++)
        { /* block id: 285 */
            int32_t *l_542 = &l_483;
            int32_t *l_543 = &l_485;
            int32_t *l_544 = &p_1448->g_51;
            int32_t *l_545 = &p_1448->g_197.f1.f8;
            int32_t *l_546 = &l_500;
            int32_t *l_547 = &p_1448->g_345[0].f8;
            int32_t *l_548 = (void*)0;
            int32_t *l_549 = (void*)0;
            int8_t ***l_553 = (void*)0;
            ++l_550;
            p_42 = &l_508;
            (*p_1448->g_554) = &p_1448->g_189;
        }
        (*l_556) = (p_41 = p_41);
        if ((safe_mod_func_uint8_t_u_u((((**l_556) > (safe_add_func_int8_t_s_s((***p_1448->g_554), (*p_1448->g_189)))) || ((p_1448->g_309.f0 < 0x3EF5C9A0CE8DD2CFL) == ((((((safe_mul_func_int8_t_s_s((0UL >= 4294967295UL), (((((*l_566) = (safe_unary_minus_func_int32_t_s((((p_43 | p_43) < 0x89C6L) < 0x416A1671531B93EDL)))) <= 0UL) > l_398) >= 0x1BL))) && (**l_556)) , 0L) , p_39) , (*p_1448->g_127)) > l_506))), 253UL)))
        { /* block id: 293 */
            return l_508;
        }
        else
        { /* block id: 295 */
            int32_t *l_567 = &p_1448->g_99;
            int32_t *l_568 = &l_325;
            int32_t *l_569[7][9] = {{&l_508,&l_485,&l_506,&l_504,&p_1448->g_2,&l_508,&l_504,(void*)0,&l_504},{&l_508,&l_485,&l_506,&l_504,&p_1448->g_2,&l_508,&l_504,(void*)0,&l_504},{&l_508,&l_485,&l_506,&l_504,&p_1448->g_2,&l_508,&l_504,(void*)0,&l_504},{&l_508,&l_485,&l_506,&l_504,&p_1448->g_2,&l_508,&l_504,(void*)0,&l_504},{&l_508,&l_485,&l_506,&l_504,&p_1448->g_2,&l_508,&l_504,(void*)0,&l_504},{&l_508,&l_485,&l_506,&l_504,&p_1448->g_2,&l_508,&l_504,(void*)0,&l_504},{&l_508,&l_485,&l_506,&l_504,&p_1448->g_2,&l_508,&l_504,(void*)0,&l_504}};
            uint32_t *l_594[6] = {&p_1448->g_92,&p_1448->g_92,&p_1448->g_92,&p_1448->g_92,&p_1448->g_92,&p_1448->g_92};
            int i, j;
            --l_575;
            l_569[2][1] = (void*)0;
            if ((safe_sub_func_int16_t_s_s(((*l_566) = ((safe_sub_func_uint32_t_u_u((+(+p_1448->g_112.f1)), (safe_mod_func_int16_t_s_s((**l_556), ((((safe_mul_func_int8_t_s_s(((**l_556) , (p_1448->g_2 , ((safe_rshift_func_uint8_t_u_u((!(safe_add_func_uint64_t_u_u((safe_div_func_int8_t_s_s((*p_1448->g_189), (l_485 = (safe_mul_func_int16_t_s_s((((*l_568) = ((void*)0 != (*l_297))) , ((safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s((0xA0A698D70E9963F7L & ((safe_add_func_uint32_t_u_u(((((((*p_1448->g_127) == 0xE575287DL) ^ (**l_556)) == 0xBF32L) == p_43) < p_1448->g_99), 0UL)) , p_1448->g_97)), p_1448->g_2)), 1UL)) ^ 0L)), p_43))))), l_500))), 0)) && l_508))), p_39)) < p_40) | (**l_556)) || 0x1B25C08400148E67L))))) != l_603)), 0x66C7L)))
            { /* block id: 301 */
                int64_t *l_617 = &p_1448->g_345[0].f6;
                int32_t l_618 = 3L;
                for (p_1448->g_99 = 15; (p_1448->g_99 > 24); p_1448->g_99++)
                { /* block id: 304 */
                    int16_t l_619 = 0L;
                    int32_t l_621 = 1L;
                    for (p_1448->g_276 = 1; (p_1448->g_276 <= 6); p_1448->g_276 += 1)
                    { /* block id: 307 */
                        int32_t l_608 = 0x0E67CC74L;
                        uint64_t *l_614 = &l_575;
                        uint8_t *l_620[4];
                        int32_t l_622 = 0L;
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_620[i] = (void*)0;
                        (*p_1448->g_455) = ((p_39 <= (safe_sub_func_uint32_t_u_u((l_608 = (p_1448->g_168 &= p_39)), ((((safe_rshift_func_uint16_t_u_s(((l_618 = ((((*l_292) = (((safe_lshift_func_int8_t_s_s(p_1448->g_613, ((((*l_614)++) , (0xDFL < ((void*)0 != l_617))) > (l_621 = ((((*l_566) = p_1448->g_490[5]) | (((*l_568) = (p_1448->g_345[0].f9 < l_618)) , l_619)) | (**l_556)))))) > l_619) , (void*)0)) == l_620[3]) > p_43)) > 0x0A356107437024ECL), l_619)) < 0UL) , p_43) <= l_622)))) != l_622);
                        if (l_618)
                            continue;
                        l_569[p_1448->g_276][(p_1448->g_276 + 2)] = l_567;
                        (*l_556) = p_41;
                    }
                }
                for (l_506 = (-30); (l_506 < (-28)); ++l_506)
                { /* block id: 324 */
                    return p_43;
                }
                (*l_567) &= (*p_41);
            }
            else
            { /* block id: 328 */
                uint16_t l_625 = 0xFCE7L;
                return l_625;
            }
            (**l_534) = p_1448->g_626;
        }
        for (l_506 = 0; (l_506 == (-3)); l_506 = safe_sub_func_uint8_t_u_u(l_506, 2))
        { /* block id: 335 */
            uint64_t l_642 = 0UL;
            int32_t l_645 = 0x6FA0A3E0L;
            for (p_1448->g_197.f0 = 0; (p_1448->g_197.f0 <= (-11)); p_1448->g_197.f0 = safe_sub_func_int64_t_s_s(p_1448->g_197.f0, 6))
            { /* block id: 338 */
                int8_t *l_641[7][5] = {{&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134},{&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134},{&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134},{&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134},{&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134},{&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134},{&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134,&p_1448->g_134}};
                uint32_t *l_647 = &p_1448->g_168;
                int32_t l_648 = (-5L);
                int32_t *l_649 = &l_504;
                int i, j;
                (*l_649) ^= ((((safe_rshift_func_int16_t_s_u((-3L), (safe_div_func_int8_t_s_s(((((l_642 = ((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(7L, p_1448->g_345[0].f2)), p_43)) < (safe_add_func_uint8_t_u_u(l_484, 248UL)))) || ((safe_rshift_func_uint16_t_u_s(l_645, (((*l_647) ^= (((&l_645 == ((*l_556) = func_45(((l_642 || l_574[0][3]) | 0x3EF9L), (*p_41), p_41, p_1448))) && (*p_1448->g_455)) & l_646)) & 0x37473797L))) , l_648)) != 0xA03F8C17D52F0437L) || l_645), 0x71L)))) >= p_1448->g_93) || l_648) && (**l_556));
            }
            return p_40;
        }
    }
    else
    { /* block id: 346 */
        uint16_t *l_657[3];
        int32_t **l_660 = &p_1448->g_127;
        int32_t *l_661 = &p_1448->g_68;
        int32_t *l_662 = &p_1448->g_51;
        int32_t l_663[5][5] = {{6L,0x68B46A2EL,6L,6L,0x68B46A2EL},{6L,0x68B46A2EL,6L,6L,0x68B46A2EL},{6L,0x68B46A2EL,6L,6L,0x68B46A2EL},{6L,0x68B46A2EL,6L,6L,0x68B46A2EL},{6L,0x68B46A2EL,6L,6L,0x68B46A2EL}};
        int32_t *l_664[7][7][4] = {{{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]}},{{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]}},{{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]}},{{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]}},{{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]}},{{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]}},{{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]},{(void*)0,(void*)0,&l_489,&l_574[0][3]}}};
        uint8_t l_666 = 0xFCL;
        uint32_t l_715[10] = {0UL,0xD1316749L,0UL,0UL,0xD1316749L,0UL,0UL,0xD1316749L,0UL,0UL};
        int32_t l_773 = 0L;
        uint32_t l_784 = 4294967295UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_657[i] = &l_537;
lbl_801:
        (*l_660) = func_52(p_40, p_1448->g_650[1][0][1], func_52(p_1448->g_112.f3, p_39, ((p_1448->g_650[1][0][1] > 0x0C9AL) , ((safe_sub_func_uint8_t_u_u(((p_1448->g_276 , ((safe_mod_func_uint32_t_u_u((((p_43 |= 0x96DFL) || (safe_rshift_func_int8_t_s_u((p_40 >= l_506), l_508))) | 0L), 0xD68816B6L)) | 0x6FAE2032EA7EDD38L)) > p_1448->g_345[0].f3), 246UL)) , (void*)0)), p_1448), p_1448);
        l_666--;
        for (p_1448->g_142 = 1; (p_1448->g_142 <= 13); p_1448->g_142 = safe_add_func_uint32_t_u_u(p_1448->g_142, 7))
        { /* block id: 352 */
            int32_t l_677 = 0L;
            uint32_t *l_683 = &p_1448->g_490[7];
            uint32_t **l_682 = &l_683;
            int8_t *l_697 = (void*)0;
            int32_t l_698 = 0x5395614AL;
            int16_t l_714[4] = {(-6L),(-6L),(-6L),(-6L)};
            int32_t l_722 = 1L;
            int32_t l_723 = 0x0588F45CL;
            int32_t l_725[8][5][2] = {{{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL}},{{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL}},{{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL}},{{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL}},{{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL}},{{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL}},{{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL}},{{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL},{7L,0x55F7926EL}}};
            int32_t l_783 = (-4L);
            int16_t *l_788 = &l_714[2];
            int16_t **l_787 = &l_788;
            uint64_t *l_789 = &l_646;
            uint32_t *l_791 = &p_1448->g_92;
            struct S0 *l_792 = &p_1448->g_345[0];
            int32_t *l_810 = &l_677;
            int i, j, k;
            if ((safe_lshift_func_int8_t_s_s(p_43, ((safe_mul_func_uint8_t_u_u(((*p_1448->g_189) >= l_677), l_504)) == (((((safe_rshift_func_int16_t_s_s(((l_698 = (safe_sub_func_int16_t_s_s((p_42 != ((*l_682) = p_42)), ((safe_lshift_func_int16_t_s_u((((**p_1448->g_272) >= ((~((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((0L > (safe_rshift_func_int16_t_s_s(((l_677 , l_483) && 0x5FL), 1))), p_39)), 14)), l_574[0][3])), l_677)) ^ 0x78C13EA9L)) | p_1448->g_252.f9)) && l_696), p_1448->g_276)) && p_1448->g_650[1][0][1])))) && p_39), p_1448->g_345[0].f6)) || 0x27AA7B23L) <= p_1448->g_345[0].f3) , 0x04B9CEB8L) >= p_1448->g_92)))))
            { /* block id: 355 */
                return (**p_1448->g_300);
            }
            else
            { /* block id: 357 */
                volatile int16_t ** volatile *l_700 = &p_1448->g_699;
                int32_t l_716 = 7L;
                int32_t l_730 = 0x0483144AL;
                int32_t l_769 = 1L;
                int32_t l_770 = 1L;
                int32_t l_771 = (-1L);
                int32_t l_775 = 0x0A131604L;
                int32_t l_776 = 0x3149E29DL;
                int32_t l_777 = 0x371397F8L;
                int32_t l_778[5][8] = {{0x5E32A63BL,(-1L),1L,0x4AD486FDL,(-1L),0x4AD486FDL,1L,(-1L)},{0x5E32A63BL,(-1L),1L,0x4AD486FDL,(-1L),0x4AD486FDL,1L,(-1L)},{0x5E32A63BL,(-1L),1L,0x4AD486FDL,(-1L),0x4AD486FDL,1L,(-1L)},{0x5E32A63BL,(-1L),1L,0x4AD486FDL,(-1L),0x4AD486FDL,1L,(-1L)},{0x5E32A63BL,(-1L),1L,0x4AD486FDL,(-1L),0x4AD486FDL,1L,(-1L)}};
                int i, j;
                (*l_700) = p_1448->g_699;
                for (l_526 = 29; (l_526 > (-8)); l_526--)
                { /* block id: 361 */
                    struct S0 *l_713 = &p_1448->g_345[2];
                    uint32_t **l_717 = &l_683;
                    int32_t l_720 = 0x7A637F6BL;
                    int32_t l_726 = (-1L);
                    int32_t l_727 = 0x5FFE061FL;
                    int32_t l_729 = 6L;
                    int32_t l_731 = (-1L);
                    int32_t l_732 = 0x699E51C8L;
                    int32_t l_772 = (-3L);
                    int32_t l_774[8][9] = {{0x39042520L,1L,(-1L),0x7ACBD92AL,1L,0x7ACBD92AL,(-1L),1L,0x39042520L},{0x39042520L,1L,(-1L),0x7ACBD92AL,1L,0x7ACBD92AL,(-1L),1L,0x39042520L},{0x39042520L,1L,(-1L),0x7ACBD92AL,1L,0x7ACBD92AL,(-1L),1L,0x39042520L},{0x39042520L,1L,(-1L),0x7ACBD92AL,1L,0x7ACBD92AL,(-1L),1L,0x39042520L},{0x39042520L,1L,(-1L),0x7ACBD92AL,1L,0x7ACBD92AL,(-1L),1L,0x39042520L},{0x39042520L,1L,(-1L),0x7ACBD92AL,1L,0x7ACBD92AL,(-1L),1L,0x39042520L},{0x39042520L,1L,(-1L),0x7ACBD92AL,1L,0x7ACBD92AL,(-1L),1L,0x39042520L},{0x39042520L,1L,(-1L),0x7ACBD92AL,1L,0x7ACBD92AL,(-1L),1L,0x39042520L}};
                    uint8_t l_779 = 0x49L;
                    int32_t l_782 = 0x737EA47CL;
                    int i, j;
                    for (p_1448->g_197.f0 = (-12); (p_1448->g_197.f0 != 21); p_1448->g_197.f0 = safe_add_func_int64_t_s_s(p_1448->g_197.f0, 1))
                    { /* block id: 364 */
                        int32_t l_721 = 0x5EAE8FEAL;
                        int32_t l_724 = 1L;
                        int32_t l_728 = 0x26B060ECL;
                        int32_t l_733 = 0x0BD258BCL;
                        p_1448->g_706 = p_1448->g_705;
                        l_716 &= ((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((p_39 != (safe_add_func_int8_t_s_s(((*p_41) >= ((void*)0 != l_713)), 253UL))), ((void*)0 == l_292))), (p_40 > l_714[0]))) < l_715[5]);
                        p_1448->g_718 = l_717;
                        l_734++;
                    }
                    if (l_571)
                    { /* block id: 370 */
                        int32_t *l_737[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_737[i] = (void*)0;
                        (*l_660) = l_737[3];
                        if ((*p_1448->g_455))
                            break;
                    }
                    else
                    { /* block id: 373 */
                        uint8_t *l_744 = (void*)0;
                        uint8_t *l_745 = &l_734;
                        int32_t l_768[10][9][2] = {{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}}};
                        int i, j, k;
                        (*p_1448->g_766) = ((*l_660) = func_45(((safe_add_func_int16_t_s_s(p_40, (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((*l_745)++), 7)), p_39)))) && l_714[0]), (((-1L) > (((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((p_1448->g_309 , (!((0x66L > (l_729 &= (l_723 = ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((l_677 = 0x3AL), 1)), 14)) > (safe_div_func_uint16_t_u_u(((-1L) == (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(6L, p_39)), 0)), 4294967295UL))), p_39))), 254UL)) < (-1L))))) , l_722))), 5UL)), 6)) , p_39) != 0x67635196968D816EL)) >= (**p_1448->g_272)), p_41, p_1448));
                        l_779++;
                        l_784--;
                    }
                }
            }
            (*l_661) = ((p_40 == ((*l_789) = (((*l_787) = &p_1448->g_650[2][0][1]) != &p_40))) ^ (safe_unary_minus_func_uint32_t_u(((*l_791) &= 0x0CBF7FCBL))));
            (*l_661) ^= (((void*)0 == l_792) > ((safe_add_func_int8_t_s_s(((*l_682) != &l_603), ((1L > (safe_div_func_int32_t_s_s((l_526 && (((!(safe_div_func_uint64_t_u_u(((p_1448->g_309.f0 > ((&p_1448->g_238 == &p_1448->g_238) ^ p_1448->g_613)) >= 0xCDE48095L), 0x3910CA327C6D2D75L))) || p_40) & (*l_662))), l_572))) > (*p_41)))) >= p_40));
            for (p_1448->g_389 = 0; (p_1448->g_389 != 9); p_1448->g_389 = safe_add_func_uint8_t_u_u(p_1448->g_389, 2))
            { /* block id: 392 */
                uint64_t l_802 = 1UL;
                for (l_603 = 0; (l_603 <= 1); l_603 += 1)
                { /* block id: 395 */
                    int i, j, k;
                    if (l_725[(l_603 + 4)][(l_603 + 1)][l_603])
                        break;
                    if (l_504)
                        goto lbl_801;
                    l_802--;
                }
                for (l_572 = 0; (l_572 < 9); ++l_572)
                { /* block id: 402 */
                    union U1 **l_808 = &l_807;
                    int32_t l_809 = 4L;
                    (*l_808) = l_807;
                    l_809 |= (*p_41);
                    if (l_397[0][0])
                        continue;
                }
                (*l_660) = (l_810 = func_45(p_40, (~(l_722 , (*p_41))), (*p_1448->g_766), p_1448));
            }
        }
    }
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_1448->g_238 p_1448->g_272 p_1448->g_112.f9 p_1448->g_65 p_1448->g_2 p_1448->g_142 p_1448->g_174 p_1448->g_97 p_1448->g_276 p_1448->g_166 p_1448->g_51 p_1448->g_121.f9 p_1448->g_99 p_1448->g_144 p_1448->g_127
 * writes: p_1448->g_238 p_1448->g_107 p_1448->g_276 p_1448->g_99
 */
int32_t * func_45(uint8_t  p_46, int32_t  p_47, int32_t * p_48, struct S2 * p_1448)
{ /* block id: 135 */
    uint8_t l_259 = 0xCFL;
    uint64_t l_283 = 18446744073709551610UL;
    int32_t l_286 = 0L;
    int32_t *l_287[1][1][5];
    uint16_t l_288[10][3] = {{0UL,0x4E2DL,65533UL},{0UL,0x4E2DL,65533UL},{0UL,0x4E2DL,65533UL},{0UL,0x4E2DL,65533UL},{0UL,0x4E2DL,65533UL},{0UL,0x4E2DL,65533UL},{0UL,0x4E2DL,65533UL},{0UL,0x4E2DL,65533UL},{0UL,0x4E2DL,65533UL},{0UL,0x4E2DL,65533UL}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_287[i][j][k] = &p_1448->g_68;
        }
    }
    for (p_1448->g_238 = 0; (p_1448->g_238 == 47); p_1448->g_238 = safe_add_func_uint64_t_u_u(p_1448->g_238, 1))
    { /* block id: 138 */
        uint32_t l_262 = 0x64FA5962L;
        int8_t **l_271[1][4][6] = {{{(void*)0,&p_1448->g_189,&p_1448->g_189,&p_1448->g_189,(void*)0,(void*)0},{(void*)0,&p_1448->g_189,&p_1448->g_189,&p_1448->g_189,(void*)0,(void*)0},{(void*)0,&p_1448->g_189,&p_1448->g_189,&p_1448->g_189,(void*)0,(void*)0},{(void*)0,&p_1448->g_189,&p_1448->g_189,&p_1448->g_189,(void*)0,(void*)0}}};
        int32_t l_273 = 0x5B45C908L;
        uint32_t *l_274 = &p_1448->g_107;
        int16_t *l_275 = &p_1448->g_276;
        int32_t l_277 = 0L;
        int32_t *l_278 = &p_1448->g_99;
        int32_t *l_279 = &p_1448->g_68;
        int32_t *l_280 = &p_1448->g_99;
        int32_t *l_281 = &p_1448->g_197.f1.f8;
        int32_t *l_282 = &l_273;
        int i, j, k;
        (*l_278) |= (((((((safe_mod_func_uint16_t_u_u(l_259, ((*l_275) ^= (((((safe_lshift_func_uint16_t_u_u(1UL, 3)) | (((((*l_274) = ((l_273 = ((l_262 = 0x25B2F48B5C4B6020L) < ((safe_sub_func_uint8_t_u_u(0x33L, ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(1UL, ((((-1L) & p_46) || ((l_271[0][2][4] != p_1448->g_272) != p_1448->g_112.f9)) && l_273))), 0L)) && p_1448->g_65), 0x47L)) < p_1448->g_2))) > p_1448->g_142))) ^ p_1448->g_174)) >= 0UL) > 0x73B2L) & p_1448->g_97)) && (-5L)) , p_1448->g_238) != p_47)))) >= 1UL) > l_277) ^ p_1448->g_166) ^ p_1448->g_51) , p_1448->g_121[0].f9) || 9L);
        ++l_283;
    }
    l_288[8][2]--;
    return (*p_1448->g_144);
}


/* ------------------------------------------ */
/* 
 * reads : p_1448->g_2 p_1448->g_65 p_1448->g_68 p_1448->g_99 p_1448->g_92 p_1448->g_107 p_1448->g_112 p_1448->g_93 p_1448->g_121 p_1448->g_122 p_1448->g_128 p_1448->g_144 p_1448->g_154 p_1448->g_97 p_1448->g_166 p_1448->g_127 p_1448->g_197 p_1448->g_174 p_1448->g_155 p_1448->g_168 p_1448->g_134 p_1448->g_189 p_1448->g_252
 * writes: p_1448->g_65 p_1448->g_68 p_1448->g_92 p_1448->g_93 p_1448->g_97 p_1448->g_99 p_1448->g_107 p_1448->g_121 p_1448->g_127 p_1448->g_142 p_1448->g_155 p_1448->g_168 p_1448->g_174 p_1448->g_188 p_1448->g_166 p_1448->g_197.f1.f2 p_1448->g_238 p_1448->g_134
 */
int32_t * func_52(uint32_t  p_53, uint16_t  p_54, int32_t * p_55, struct S2 * p_1448)
{ /* block id: 10 */
    int32_t *l_63 = &p_1448->g_2;
    int64_t *l_64 = &p_1448->g_65;
    uint16_t l_66[4] = {0x47D0L,0x47D0L,0x47D0L,0x47D0L};
    uint32_t l_114[9] = {4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL};
    int8_t *l_138 = &p_1448->g_134;
    int32_t l_143 = (-6L);
    uint8_t *l_165 = &p_1448->g_166;
    int16_t l_201 = 0L;
    int32_t l_229 = (-6L);
    uint16_t l_246[4][9] = {{65535UL,65535UL,1UL,65532UL,65535UL,65532UL,1UL,65535UL,65535UL},{65535UL,65535UL,1UL,65532UL,65535UL,65532UL,1UL,65535UL,65535UL},{65535UL,65535UL,1UL,65532UL,65535UL,65532UL,1UL,65535UL,65535UL},{65535UL,65535UL,1UL,65532UL,65535UL,65532UL,1UL,65535UL,65535UL}};
    int i, j;
    if ((((safe_lshift_func_uint16_t_u_s(p_1448->g_2, 12)) || (safe_rshift_func_uint8_t_u_u((0x6396L & 0L), 4))) ^ ((*l_64) &= ((void*)0 == l_63))))
    { /* block id: 12 */
        int32_t l_94 = 0L;
        int64_t *l_113 = &p_1448->g_93;
        uint64_t l_115 = 7UL;
        int32_t l_120 = 0x7FF43755L;
        int8_t *l_133 = &p_1448->g_134;
        for (p_54 = 0; (p_54 <= 3); p_54 += 1)
        { /* block id: 15 */
            uint32_t *l_91 = &p_1448->g_92;
            int8_t l_95 = 0L;
            int8_t *l_96[5][7] = {{&l_95,&l_95,&l_95,&l_95,&l_95,&l_95,&l_95},{&l_95,&l_95,&l_95,&l_95,&l_95,&l_95,&l_95},{&l_95,&l_95,&l_95,&l_95,&l_95,&l_95,&l_95},{&l_95,&l_95,&l_95,&l_95,&l_95,&l_95,&l_95},{&l_95,&l_95,&l_95,&l_95,&l_95,&l_95,&l_95}};
            int32_t *l_98 = &p_1448->g_99;
            int16_t l_116 = 0x4A9FL;
            uint64_t *l_135 = &l_115;
            uint8_t *l_141 = &p_1448->g_142;
            int i, j;
            for (p_1448->g_65 = 0; (p_1448->g_65 <= 3); p_1448->g_65 += 1)
            { /* block id: 18 */
                int32_t *l_67 = &p_1448->g_68;
                int i;
                (*l_67) ^= l_66[p_54];
            }
            (*l_98) |= (safe_div_func_uint32_t_u_u(l_66[p_54], (safe_mod_func_uint8_t_u_u(l_66[p_54], (safe_mul_func_int8_t_s_s((p_1448->g_97 = ((safe_mod_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((((void*)0 == &p_1448->g_2) == (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((((p_1448->g_93 = (((void*)0 != &p_1448->g_2) , ((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((p_53 & ((safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u((((*l_64) = (l_66[p_54] | ((((((*l_91) = p_53) | 0x31AAE879L) > p_1448->g_2) , (void*)0) != &p_1448->g_68))) & l_66[p_54]), (-3L))), p_1448->g_68)) == (-1L))) >= 0xB0L), 0x090E7AF8L)) > p_1448->g_2), 65535UL)) && p_1448->g_68))) == p_53) && l_94), 8)) , p_1448->g_2), p_1448->g_68))), p_54)) | p_1448->g_2), l_95)) & 0x0DD0L)), (*l_63)))))));
            for (p_1448->g_92 = 0; (p_1448->g_92 <= 3); p_1448->g_92 += 1)
            { /* block id: 28 */
                int i;
                if ((0L || (l_66[p_54] > (safe_rshift_func_uint8_t_u_u((p_55 == p_55), 5)))))
                { /* block id: 29 */
                    uint32_t *l_106 = &p_1448->g_107;
                    int32_t l_117 = (-9L);
                    volatile struct S0 **l_123 = (void*)0;
                    volatile struct S0 *l_125[10] = {&p_1448->g_121[0],&p_1448->g_121[0],&p_1448->g_121[0],&p_1448->g_121[0],&p_1448->g_121[0],&p_1448->g_121[0],&p_1448->g_121[0],&p_1448->g_121[0],&p_1448->g_121[0],&p_1448->g_121[0]};
                    volatile struct S0 **l_124 = &l_125[3];
                    int i;
                    l_117 = (safe_rshift_func_int8_t_s_u(((l_66[p_1448->g_92] == p_1448->g_2) != (+(1L >= (((((((-10L) | (p_54 , (safe_mod_func_int32_t_s_s((((++(*l_106)) == ((((*l_113) &= ((-1L) & (((((safe_lshift_func_int8_t_s_u((-1L), ((((p_1448->g_112 , l_113) == (void*)0) || 0x67C2D95366612900L) , l_94))) || l_114[5]) == p_1448->g_92) <= p_1448->g_65) > l_66[p_54]))) , l_66[p_1448->g_92]) | l_66[p_1448->g_92])) ^ 0x5AL), 0x54492987L)))) || l_115) && l_116) == p_54) >= 0x78L) == 0L)))), 1));
                    for (p_1448->g_93 = 3; (p_1448->g_93 >= 0); p_1448->g_93 -= 1)
                    { /* block id: 35 */
                        (*l_98) = ((safe_add_func_int32_t_s_s((l_120 &= 0x7FA4877AL), p_53)) > 7L);
                        (*p_1448->g_122) = p_1448->g_121[0];
                    }
                    (*l_124) = &p_1448->g_121[0];
                }
                else
                { /* block id: 41 */
                    (*p_1448->g_128) = &p_1448->g_99;
                    return p_55;
                }
            }
            l_120 = (safe_add_func_uint8_t_u_u(((*l_141) = (0x2F2754ED04B031DEL != (((*l_135) = (p_1448->g_121[0].f7 == (((*l_98) , l_133) != (void*)0))) == (safe_mul_func_uint8_t_u_u((+((l_138 != (void*)0) <= ((safe_mul_func_uint16_t_u_u((*l_98), p_54)) != p_54))), l_120))))), (*l_63)));
        }
        l_143 = 0x1F3FAF8EL;
        (*p_1448->g_144) = p_55;
    }
    else
    { /* block id: 52 */
        uint32_t *l_149 = (void*)0;
        uint32_t *l_150 = (void*)0;
        uint32_t *l_151 = &p_1448->g_92;
        int32_t *l_152[9] = {&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143};
        uint8_t **l_191[3][10] = {{&l_165,&l_165,&l_165,&l_165,&l_165,&l_165,&l_165,&l_165,&l_165,&l_165},{&l_165,&l_165,&l_165,&l_165,&l_165,&l_165,&l_165,&l_165,&l_165,&l_165},{&l_165,&l_165,&l_165,&l_165,&l_165,&l_165,&l_165,&l_165,&l_165,&l_165}};
        int8_t **l_221 = &l_138;
        int8_t ***l_220 = &l_221;
        uint8_t *l_224 = &p_1448->g_142;
        int i, j;
        l_143 = (safe_mul_func_int16_t_s_s(p_53, ((safe_sub_func_uint32_t_u_u(((*l_151) = 0x20378A6BL), (-1L))) , 0xF0E2L)));
        (*p_1448->g_154) = &p_1448->g_121[0];
        for (p_1448->g_107 = 0; (p_1448->g_107 > 12); p_1448->g_107 = safe_add_func_int64_t_s_s(p_1448->g_107, 8))
        { /* block id: 58 */
            uint8_t *l_162[3][2];
            int32_t l_175 = 0x769405CEL;
            int8_t **l_182 = (void*)0;
            uint64_t l_192 = 0UL;
            uint32_t l_230 = 1UL;
            int16_t l_247 = 0x7B60L;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_162[i][j] = &p_1448->g_142;
            }
            for (p_1448->g_92 = 0; (p_1448->g_92 <= 3); p_1448->g_92 += 1)
            { /* block id: 61 */
                for (p_1448->g_142 = 0; (p_1448->g_142 <= 3); p_1448->g_142 += 1)
                { /* block id: 64 */
                    uint8_t **l_163 = (void*)0;
                    uint8_t **l_164[7][1];
                    uint32_t *l_167 = &p_1448->g_168;
                    int16_t *l_173 = &p_1448->g_174;
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_164[i][j] = (void*)0;
                    }
                    l_175 ^= (((((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_1448->g_121[0].f1, p_53)), (&p_55 == &p_55))) <= ((*l_167) = ((l_165 = l_162[1][1]) != &p_1448->g_166))) >= (((safe_div_func_int16_t_s_s(((*l_173) = (((safe_lshift_func_int16_t_s_s(3L, (p_1448->g_97 , 1L))) , p_1448->g_166) , p_1448->g_2)), (-1L))) > 0x68L) , 0x5BDEL)) > p_1448->g_92) == p_1448->g_166);
                }
                for (l_143 = 0; (l_143 <= 8); l_143 += 1)
                { /* block id: 72 */
                    if (l_175)
                        break;
                    return (*p_1448->g_144);
                }
            }
            for (p_54 = (-16); (p_54 >= 27); p_54 = safe_add_func_uint64_t_u_u(p_54, 3))
            { /* block id: 79 */
                uint32_t l_185 = 0xF83DE727L;
                int32_t l_186 = (-7L);
                int8_t ***l_187[5][2][7] = {{{&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182},{&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182}},{{&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182},{&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182}},{{&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182},{&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182}},{{&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182},{&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182}},{{&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182},{&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182}}};
                int i, j, k;
                p_1448->g_188 = ((l_186 = (safe_mod_func_uint64_t_u_u((((1L < (*l_63)) >= (-1L)) != (((+(p_1448->g_97 & 0x6DA5L)) && (l_182 != &l_138)) != (((l_185 = (safe_sub_func_uint16_t_u_u((*l_63), 1UL))) , l_175) == p_1448->g_121[0].f6))), l_175))) , (void*)0);
                if (p_53)
                { /* block id: 83 */
                    int64_t l_190 = 1L;
                    int8_t *l_198 = &p_1448->g_134;
                    uint16_t *l_225 = &p_1448->g_197.f1.f2;
                    if (((l_190 ^ (p_53 >= l_190)) || p_1448->g_121[0].f3))
                    { /* block id: 84 */
                        int16_t *l_214[4][10] = {{&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201},{&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201},{&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201},{&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201}};
                        int32_t l_215 = 0x4852D9DEL;
                        int i, j;
                        l_192 = (l_191[2][7] == l_191[2][7]);
                        l_201 = ((~((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((p_1448->g_197 , ((l_175 = (*l_63)) <= ((p_1448->g_121[0].f9 <= 1UL) , (l_198 != (void*)0)))), 14)) != 0xE5DE65A9L), (safe_lshift_func_int8_t_s_s(0x52L, 1)))) & 6UL)) || p_53);
                        l_186 = (((void*)0 != l_64) && (((*l_165) = (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((p_1448->g_166 & ((safe_rshift_func_uint16_t_u_u(1UL, l_190)) < p_1448->g_174)), 3)), 12))) & (((((((safe_mod_func_uint64_t_u_u((((safe_sub_func_int16_t_s_s((l_215 = 8L), (l_175 && 0xC2C41774F4B611BEL))) , (*p_1448->g_154)) == (void*)0), l_175)) != 1L) && l_186) < p_54) ^ p_1448->g_97) , (*l_63)) != 4294967287UL)));
                    }
                    else
                    { /* block id: 91 */
                        if (p_54)
                            break;
                        l_175 ^= p_53;
                    }
                    (*p_1448->g_128) = (void*)0;
                    l_175 &= (safe_sub_func_uint32_t_u_u((+(++(*l_151))), (((l_220 == &l_182) > (p_1448->g_168 | ((safe_mul_func_uint16_t_u_u(p_1448->g_93, ((p_1448->g_121[0].f4 ^ (~(((*l_225) = (l_224 == (void*)0)) > p_1448->g_2))) && ((p_1448->g_121[0].f1 , p_1448->g_112.f9) <= p_1448->g_134)))) == p_54))) ^ 0x308BB56DCD957931L)));
                    if (l_186)
                        break;
                }
                else
                { /* block id: 100 */
                    for (l_192 = 2; (l_192 != 45); l_192++)
                    { /* block id: 103 */
                        int32_t l_228 = 3L;
                        uint64_t *l_237 = &p_1448->g_238;
                        int64_t l_241 = 0L;
                        l_230--;
                        l_247 = (safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u((((void*)0 != &p_1448->g_107) , ((*l_237) = 18446744073709551613UL)), (((safe_mul_func_uint8_t_u_u((l_241 <= ((safe_mul_func_int16_t_s_s(0x0AB1L, (l_64 != (void*)0))) <= (safe_mul_func_int8_t_s_s(l_192, 0x7CL)))), p_54)) >= l_246[2][8]) && 0x57B11FA8A99E674FL))), (*p_1448->g_189)));
                    }
                    for (l_192 = 0; (l_192 <= 0); l_192 += 1)
                    { /* block id: 110 */
                        int i;
                        return p_55;
                    }
                }
                (*p_1448->g_155) = (*p_1448->g_155);
                for (p_1448->g_134 = (-25); (p_1448->g_134 > 21); ++p_1448->g_134)
                { /* block id: 117 */
                    for (l_201 = 0; (l_201 <= (-29)); l_201--)
                    { /* block id: 120 */
                        (*p_1448->g_155) = p_1448->g_252;
                    }
                    for (p_1448->g_166 = 0; p_1448->g_166 < 2; p_1448->g_166 += 1)
                    {
                        struct S0 tmp = {{-1L,0UL,1UL,0x5B23L,0x53869009L,-1L,0x5EF7269C6AF29779L,0x3C657A09L,0x046929B3L,18446744073709551609UL}};
                        p_1448->g_121[p_1448->g_166] = tmp;
                    }
                }
            }
        }
        for (l_201 = (-21); (l_201 == 28); ++l_201)
        { /* block id: 129 */
            if ((*l_63))
                break;
        }
    }
    (*p_1448->g_155) = (**p_1448->g_154);
    return p_55;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1449;
    struct S2* p_1448 = &c_1449;
    struct S2 c_1450 = {
        (-3L), // p_1448->g_2
        {0x7D24B5E4L,0x7D24B5E4L,0x7D24B5E4L,0x7D24B5E4L,0x7D24B5E4L,0x7D24B5E4L,0x7D24B5E4L,0x7D24B5E4L}, // p_1448->g_26
        0x3C5A4A10L, // p_1448->g_51
        0L, // p_1448->g_65
        (-1L), // p_1448->g_68
        1UL, // p_1448->g_92
        0x5AC29F8D9E2CD2A1L, // p_1448->g_93
        0x78916A71L, // p_1448->g_97
        0x45CF3152L, // p_1448->g_99
        2UL, // p_1448->g_107
        {0L,2UL,65535UL,0xDFDCL,4294967286UL,3L,0x1FA4E93F460CB503L,0x2C85E55DL,0x4961BCE7L,0xE83BB0DECA30E3E6L}, // p_1448->g_112
        {{0x7AL,18446744073709551615UL,0xA811L,0x371AL,0x1FB82FD5L,0x7EA8E8EDL,0x23FE0775E61BCAB2L,7L,6L,1UL},{0x7AL,18446744073709551615UL,0xA811L,0x371AL,0x1FB82FD5L,0x7EA8E8EDL,0x23FE0775E61BCAB2L,7L,6L,1UL}}, // p_1448->g_121
        &p_1448->g_121[1], // p_1448->g_122
        (void*)0, // p_1448->g_127
        {&p_1448->g_127}, // p_1448->g_126
        &p_1448->g_127, // p_1448->g_128
        0x2AL, // p_1448->g_134
        254UL, // p_1448->g_142
        &p_1448->g_127, // p_1448->g_144
        (void*)0, // p_1448->g_153
        &p_1448->g_121[0], // p_1448->g_155
        &p_1448->g_155, // p_1448->g_154
        0x21L, // p_1448->g_166
        4UL, // p_1448->g_168
        0x5A5BL, // p_1448->g_174
        &p_1448->g_134, // p_1448->g_189
        &p_1448->g_189, // p_1448->g_188
        {0x7D269447L}, // p_1448->g_197
        1UL, // p_1448->g_238
        {9L,0UL,1UL,0xD2E2L,4294967291UL,-9L,0x5C54AC5933C53509L,0x7B79CEA0L,-8L,0x3BD95B1CF1519C01L}, // p_1448->g_252
        &p_1448->g_189, // p_1448->g_272
        0x6FDBL, // p_1448->g_276
        0L, // p_1448->g_295
        0x34L, // p_1448->g_302
        &p_1448->g_302, // p_1448->g_301
        &p_1448->g_301, // p_1448->g_300
        {0L}, // p_1448->g_309
        (void*)0, // p_1448->g_335
        &p_1448->g_335, // p_1448->g_334
        &p_1448->g_127, // p_1448->g_338
        {{-9L,0UL,1UL,8UL,0x4EDC7A96L,0x20FE350BL,-1L,0x04603DDFL,-1L,0x25B358915A19D07EL},{-9L,0UL,1UL,8UL,0x4EDC7A96L,0x20FE350BL,-1L,0x04603DDFL,-1L,0x25B358915A19D07EL},{-9L,0UL,1UL,8UL,0x4EDC7A96L,0x20FE350BL,-1L,0x04603DDFL,-1L,0x25B358915A19D07EL}}, // p_1448->g_345
        &p_1448->g_127, // p_1448->g_348
        4294967295UL, // p_1448->g_389
        &p_1448->g_68, // p_1448->g_455
        (void*)0, // p_1448->g_457
        {0x2BL,0x1DD4E567DBCE3D1AL,0x7EC8L,0x8039L,0x33C63A25L,1L,0L,-1L,8L,0xE48E1CB922EB87E3L}, // p_1448->g_458
        {0L,0x30CDAC9B48732156L,0x18BEL,0x8BBDL,0x6E1231F7L,-1L,1L,-1L,0x146E8EC0L,0xED1102B47CCF562CL}, // p_1448->g_460
        {0xB1BB9616L,0xB1BB9616L,0xB1BB9616L,0xB1BB9616L,0xB1BB9616L,0xB1BB9616L,0xB1BB9616L,0xB1BB9616L,0xB1BB9616L}, // p_1448->g_490
        0x38C0F353L, // p_1448->g_496
        {{&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127},{&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127},{&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127},{&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127},{&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127,&p_1448->g_127}}, // p_1448->g_514
        &p_1448->g_127, // p_1448->g_515
        &p_1448->g_272, // p_1448->g_554
        {{&p_1448->g_127},{&p_1448->g_127}}, // p_1448->g_555
        (-1L), // p_1448->g_613
        {0L,18446744073709551615UL,9UL,0x1414L,0xB17EAD15L,0x4386F319L,-1L,0x6D15C853L,-1L,18446744073709551607UL}, // p_1448->g_626
        {{{(-1L),0x04ACL,5L,6L,1L,0x2866L,9L},{(-1L),0x04ACL,5L,6L,1L,0x2866L,9L},{(-1L),0x04ACL,5L,6L,1L,0x2866L,9L}},{{(-1L),0x04ACL,5L,6L,1L,0x2866L,9L},{(-1L),0x04ACL,5L,6L,1L,0x2866L,9L},{(-1L),0x04ACL,5L,6L,1L,0x2866L,9L}},{{(-1L),0x04ACL,5L,6L,1L,0x2866L,9L},{(-1L),0x04ACL,5L,6L,1L,0x2866L,9L},{(-1L),0x04ACL,5L,6L,1L,0x2866L,9L}},{{(-1L),0x04ACL,5L,6L,1L,0x2866L,9L},{(-1L),0x04ACL,5L,6L,1L,0x2866L,9L},{(-1L),0x04ACL,5L,6L,1L,0x2866L,9L}}}, // p_1448->g_650
        (void*)0, // p_1448->g_699
        {0x0CL,0xD3B19DD98986CD16L,1UL,0x75A9L,0x46EA4001L,1L,1L,3L,-3L,8UL}, // p_1448->g_705
        {0x40L,1UL,0x4667L,65535UL,0xDF928BEEL,0x495A698AL,-8L,0x28C5F93EL,8L,2UL}, // p_1448->g_706
        &p_1448->g_97, // p_1448->g_719
        &p_1448->g_719, // p_1448->g_718
        {{{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68}},{{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68}},{{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68}},{{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68},{&p_1448->g_345[0].f8,&p_1448->g_68}}}, // p_1448->g_767
        &p_1448->g_767[2][4][1], // p_1448->g_766
        {{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}}}, // p_1448->g_814
        {0x4EL,18446744073709551613UL,1UL,0UL,1UL,0x6D957690L,0x701245406D630A5DL,0x43285538L,-1L,9UL}, // p_1448->g_869
        &p_1448->g_127, // p_1448->g_895
        &p_1448->g_767[2][4][1], // p_1448->g_899
        {{0x00L,18446744073709551611UL,0x010EL,0x7092L,3UL,-1L,-1L,-7L,0x28B1F0EAL,6UL},{0x00L,18446744073709551611UL,0x010EL,0x7092L,3UL,-1L,-1L,-7L,0x28B1F0EAL,6UL},{0x00L,18446744073709551611UL,0x010EL,0x7092L,3UL,-1L,-1L,-7L,0x28B1F0EAL,6UL},{0x00L,18446744073709551611UL,0x010EL,0x7092L,3UL,-1L,-1L,-7L,0x28B1F0EAL,6UL},{0x00L,18446744073709551611UL,0x010EL,0x7092L,3UL,-1L,-1L,-7L,0x28B1F0EAL,6UL},{0x00L,18446744073709551611UL,0x010EL,0x7092L,3UL,-1L,-1L,-7L,0x28B1F0EAL,6UL},{0x00L,18446744073709551611UL,0x010EL,0x7092L,3UL,-1L,-1L,-7L,0x28B1F0EAL,6UL}}, // p_1448->g_922
        &p_1448->g_767[2][4][1], // p_1448->g_934
        {1L}, // p_1448->g_976
        {{{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL}},{{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL},{0UL,0xC776L,0xB9B5L,0x0356L,65535UL,0x3A5CL,0UL,0x306EL,0x4655L,65531UL}}}, // p_1448->g_981
        &p_1448->g_981[1][0][4], // p_1448->g_980
        &p_1448->g_767[0][2][1], // p_1448->g_984
        &p_1448->g_99, // p_1448->g_1018
        0x4053L, // p_1448->g_1038
        {{-1L,0x19E6ACC9B4BA1E54L,65535UL,0x9841L,0x8C420E96L,2L,0x7C32CE6188D69EB2L,-8L,0L,0x96234181EAE02E4DL},{-1L,0x19E6ACC9B4BA1E54L,65535UL,0x9841L,0x8C420E96L,2L,0x7C32CE6188D69EB2L,-8L,0L,0x96234181EAE02E4DL},{-1L,0x19E6ACC9B4BA1E54L,65535UL,0x9841L,0x8C420E96L,2L,0x7C32CE6188D69EB2L,-8L,0L,0x96234181EAE02E4DL},{-1L,0x19E6ACC9B4BA1E54L,65535UL,0x9841L,0x8C420E96L,2L,0x7C32CE6188D69EB2L,-8L,0L,0x96234181EAE02E4DL}}, // p_1448->g_1066
        {-4L,0UL,0UL,0x2760L,0x592D937AL,0x42F1BE79L,0x29730716B01F350AL,-1L,0x51B68B48L,3UL}, // p_1448->g_1086
        {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}}, // p_1448->g_1111
        {{0x70L,0xCB677726DE62CEBEL,1UL,0x4D5EL,4294967295UL,0x4AEE8362L,0x4437532F37949B01L,-1L,-5L,18446744073709551615UL},{0x70L,0xCB677726DE62CEBEL,1UL,0x4D5EL,4294967295UL,0x4AEE8362L,0x4437532F37949B01L,-1L,-5L,18446744073709551615UL}}, // p_1448->g_1117
        {1L}, // p_1448->g_1129
        4UL, // p_1448->g_1135
        {0x72L,0xA5C06ED6DE246599L,65528UL,0xCCE2L,4294967295UL,1L,-1L,1L,0L,18446744073709551612UL}, // p_1448->g_1232
        {{{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0},{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0}},{{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0},{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0}},{{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0},{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0}},{{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0},{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0}},{{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0},{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0}},{{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0},{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0}},{{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0},{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0}},{{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0},{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0}},{{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0},{&p_1448->g_99,(void*)0,&p_1448->g_1086.f8,&p_1448->g_68,(void*)0}}}, // p_1448->g_1238
        (void*)0, // p_1448->g_1262
        &p_1448->g_1262, // p_1448->g_1261
        0L, // p_1448->g_1264
        &p_1448->g_490[5], // p_1448->g_1307
        &p_1448->g_1117[1].f8, // p_1448->g_1310
        {0x01L,1UL,65527UL,65535UL,8UL,-1L,0L,1L,0x564A6FC9L,0x4CE61950F4C80527L}, // p_1448->g_1311
        {0x42ED7F33L}, // p_1448->g_1328
        &p_1448->g_767[2][4][1], // p_1448->g_1346
        2L, // p_1448->g_1446
    };
    c_1449 = c_1450;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1448);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1448->g_2, "p_1448->g_2", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1448->g_26[i], "p_1448->g_26[i]", print_hash_value);

    }
    transparent_crc(p_1448->g_51, "p_1448->g_51", print_hash_value);
    transparent_crc(p_1448->g_65, "p_1448->g_65", print_hash_value);
    transparent_crc(p_1448->g_68, "p_1448->g_68", print_hash_value);
    transparent_crc(p_1448->g_92, "p_1448->g_92", print_hash_value);
    transparent_crc(p_1448->g_93, "p_1448->g_93", print_hash_value);
    transparent_crc(p_1448->g_97, "p_1448->g_97", print_hash_value);
    transparent_crc(p_1448->g_99, "p_1448->g_99", print_hash_value);
    transparent_crc(p_1448->g_107, "p_1448->g_107", print_hash_value);
    transparent_crc(p_1448->g_112.f0, "p_1448->g_112.f0", print_hash_value);
    transparent_crc(p_1448->g_112.f1, "p_1448->g_112.f1", print_hash_value);
    transparent_crc(p_1448->g_112.f2, "p_1448->g_112.f2", print_hash_value);
    transparent_crc(p_1448->g_112.f3, "p_1448->g_112.f3", print_hash_value);
    transparent_crc(p_1448->g_112.f4, "p_1448->g_112.f4", print_hash_value);
    transparent_crc(p_1448->g_112.f5, "p_1448->g_112.f5", print_hash_value);
    transparent_crc(p_1448->g_112.f6, "p_1448->g_112.f6", print_hash_value);
    transparent_crc(p_1448->g_112.f7, "p_1448->g_112.f7", print_hash_value);
    transparent_crc(p_1448->g_112.f8, "p_1448->g_112.f8", print_hash_value);
    transparent_crc(p_1448->g_112.f9, "p_1448->g_112.f9", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1448->g_121[i].f0, "p_1448->g_121[i].f0", print_hash_value);
        transparent_crc(p_1448->g_121[i].f1, "p_1448->g_121[i].f1", print_hash_value);
        transparent_crc(p_1448->g_121[i].f2, "p_1448->g_121[i].f2", print_hash_value);
        transparent_crc(p_1448->g_121[i].f3, "p_1448->g_121[i].f3", print_hash_value);
        transparent_crc(p_1448->g_121[i].f4, "p_1448->g_121[i].f4", print_hash_value);
        transparent_crc(p_1448->g_121[i].f5, "p_1448->g_121[i].f5", print_hash_value);
        transparent_crc(p_1448->g_121[i].f6, "p_1448->g_121[i].f6", print_hash_value);
        transparent_crc(p_1448->g_121[i].f7, "p_1448->g_121[i].f7", print_hash_value);
        transparent_crc(p_1448->g_121[i].f8, "p_1448->g_121[i].f8", print_hash_value);
        transparent_crc(p_1448->g_121[i].f9, "p_1448->g_121[i].f9", print_hash_value);

    }
    transparent_crc(p_1448->g_134, "p_1448->g_134", print_hash_value);
    transparent_crc(p_1448->g_142, "p_1448->g_142", print_hash_value);
    transparent_crc(p_1448->g_166, "p_1448->g_166", print_hash_value);
    transparent_crc(p_1448->g_168, "p_1448->g_168", print_hash_value);
    transparent_crc(p_1448->g_174, "p_1448->g_174", print_hash_value);
    transparent_crc(p_1448->g_197.f0, "p_1448->g_197.f0", print_hash_value);
    transparent_crc(p_1448->g_238, "p_1448->g_238", print_hash_value);
    transparent_crc(p_1448->g_252.f0, "p_1448->g_252.f0", print_hash_value);
    transparent_crc(p_1448->g_252.f1, "p_1448->g_252.f1", print_hash_value);
    transparent_crc(p_1448->g_252.f2, "p_1448->g_252.f2", print_hash_value);
    transparent_crc(p_1448->g_252.f3, "p_1448->g_252.f3", print_hash_value);
    transparent_crc(p_1448->g_252.f4, "p_1448->g_252.f4", print_hash_value);
    transparent_crc(p_1448->g_252.f5, "p_1448->g_252.f5", print_hash_value);
    transparent_crc(p_1448->g_252.f6, "p_1448->g_252.f6", print_hash_value);
    transparent_crc(p_1448->g_252.f7, "p_1448->g_252.f7", print_hash_value);
    transparent_crc(p_1448->g_252.f8, "p_1448->g_252.f8", print_hash_value);
    transparent_crc(p_1448->g_252.f9, "p_1448->g_252.f9", print_hash_value);
    transparent_crc(p_1448->g_276, "p_1448->g_276", print_hash_value);
    transparent_crc(p_1448->g_295, "p_1448->g_295", print_hash_value);
    transparent_crc(p_1448->g_302, "p_1448->g_302", print_hash_value);
    transparent_crc(p_1448->g_309.f0, "p_1448->g_309.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1448->g_345[i].f0, "p_1448->g_345[i].f0", print_hash_value);
        transparent_crc(p_1448->g_345[i].f1, "p_1448->g_345[i].f1", print_hash_value);
        transparent_crc(p_1448->g_345[i].f2, "p_1448->g_345[i].f2", print_hash_value);
        transparent_crc(p_1448->g_345[i].f3, "p_1448->g_345[i].f3", print_hash_value);
        transparent_crc(p_1448->g_345[i].f4, "p_1448->g_345[i].f4", print_hash_value);
        transparent_crc(p_1448->g_345[i].f5, "p_1448->g_345[i].f5", print_hash_value);
        transparent_crc(p_1448->g_345[i].f6, "p_1448->g_345[i].f6", print_hash_value);
        transparent_crc(p_1448->g_345[i].f7, "p_1448->g_345[i].f7", print_hash_value);
        transparent_crc(p_1448->g_345[i].f8, "p_1448->g_345[i].f8", print_hash_value);
        transparent_crc(p_1448->g_345[i].f9, "p_1448->g_345[i].f9", print_hash_value);

    }
    transparent_crc(p_1448->g_389, "p_1448->g_389", print_hash_value);
    transparent_crc(p_1448->g_458.f0, "p_1448->g_458.f0", print_hash_value);
    transparent_crc(p_1448->g_458.f1, "p_1448->g_458.f1", print_hash_value);
    transparent_crc(p_1448->g_458.f2, "p_1448->g_458.f2", print_hash_value);
    transparent_crc(p_1448->g_458.f3, "p_1448->g_458.f3", print_hash_value);
    transparent_crc(p_1448->g_458.f4, "p_1448->g_458.f4", print_hash_value);
    transparent_crc(p_1448->g_458.f5, "p_1448->g_458.f5", print_hash_value);
    transparent_crc(p_1448->g_458.f6, "p_1448->g_458.f6", print_hash_value);
    transparent_crc(p_1448->g_458.f7, "p_1448->g_458.f7", print_hash_value);
    transparent_crc(p_1448->g_458.f8, "p_1448->g_458.f8", print_hash_value);
    transparent_crc(p_1448->g_458.f9, "p_1448->g_458.f9", print_hash_value);
    transparent_crc(p_1448->g_460.f0, "p_1448->g_460.f0", print_hash_value);
    transparent_crc(p_1448->g_460.f1, "p_1448->g_460.f1", print_hash_value);
    transparent_crc(p_1448->g_460.f2, "p_1448->g_460.f2", print_hash_value);
    transparent_crc(p_1448->g_460.f3, "p_1448->g_460.f3", print_hash_value);
    transparent_crc(p_1448->g_460.f4, "p_1448->g_460.f4", print_hash_value);
    transparent_crc(p_1448->g_460.f5, "p_1448->g_460.f5", print_hash_value);
    transparent_crc(p_1448->g_460.f6, "p_1448->g_460.f6", print_hash_value);
    transparent_crc(p_1448->g_460.f7, "p_1448->g_460.f7", print_hash_value);
    transparent_crc(p_1448->g_460.f8, "p_1448->g_460.f8", print_hash_value);
    transparent_crc(p_1448->g_460.f9, "p_1448->g_460.f9", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1448->g_490[i], "p_1448->g_490[i]", print_hash_value);

    }
    transparent_crc(p_1448->g_496, "p_1448->g_496", print_hash_value);
    transparent_crc(p_1448->g_613, "p_1448->g_613", print_hash_value);
    transparent_crc(p_1448->g_626.f0, "p_1448->g_626.f0", print_hash_value);
    transparent_crc(p_1448->g_626.f1, "p_1448->g_626.f1", print_hash_value);
    transparent_crc(p_1448->g_626.f2, "p_1448->g_626.f2", print_hash_value);
    transparent_crc(p_1448->g_626.f3, "p_1448->g_626.f3", print_hash_value);
    transparent_crc(p_1448->g_626.f4, "p_1448->g_626.f4", print_hash_value);
    transparent_crc(p_1448->g_626.f5, "p_1448->g_626.f5", print_hash_value);
    transparent_crc(p_1448->g_626.f6, "p_1448->g_626.f6", print_hash_value);
    transparent_crc(p_1448->g_626.f7, "p_1448->g_626.f7", print_hash_value);
    transparent_crc(p_1448->g_626.f8, "p_1448->g_626.f8", print_hash_value);
    transparent_crc(p_1448->g_626.f9, "p_1448->g_626.f9", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1448->g_650[i][j][k], "p_1448->g_650[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1448->g_705.f0, "p_1448->g_705.f0", print_hash_value);
    transparent_crc(p_1448->g_705.f1, "p_1448->g_705.f1", print_hash_value);
    transparent_crc(p_1448->g_705.f2, "p_1448->g_705.f2", print_hash_value);
    transparent_crc(p_1448->g_705.f3, "p_1448->g_705.f3", print_hash_value);
    transparent_crc(p_1448->g_705.f4, "p_1448->g_705.f4", print_hash_value);
    transparent_crc(p_1448->g_705.f5, "p_1448->g_705.f5", print_hash_value);
    transparent_crc(p_1448->g_705.f6, "p_1448->g_705.f6", print_hash_value);
    transparent_crc(p_1448->g_705.f7, "p_1448->g_705.f7", print_hash_value);
    transparent_crc(p_1448->g_705.f8, "p_1448->g_705.f8", print_hash_value);
    transparent_crc(p_1448->g_705.f9, "p_1448->g_705.f9", print_hash_value);
    transparent_crc(p_1448->g_706.f0, "p_1448->g_706.f0", print_hash_value);
    transparent_crc(p_1448->g_706.f1, "p_1448->g_706.f1", print_hash_value);
    transparent_crc(p_1448->g_706.f2, "p_1448->g_706.f2", print_hash_value);
    transparent_crc(p_1448->g_706.f3, "p_1448->g_706.f3", print_hash_value);
    transparent_crc(p_1448->g_706.f4, "p_1448->g_706.f4", print_hash_value);
    transparent_crc(p_1448->g_706.f5, "p_1448->g_706.f5", print_hash_value);
    transparent_crc(p_1448->g_706.f6, "p_1448->g_706.f6", print_hash_value);
    transparent_crc(p_1448->g_706.f7, "p_1448->g_706.f7", print_hash_value);
    transparent_crc(p_1448->g_706.f8, "p_1448->g_706.f8", print_hash_value);
    transparent_crc(p_1448->g_706.f9, "p_1448->g_706.f9", print_hash_value);
    transparent_crc(p_1448->g_869.f0, "p_1448->g_869.f0", print_hash_value);
    transparent_crc(p_1448->g_869.f1, "p_1448->g_869.f1", print_hash_value);
    transparent_crc(p_1448->g_869.f2, "p_1448->g_869.f2", print_hash_value);
    transparent_crc(p_1448->g_869.f3, "p_1448->g_869.f3", print_hash_value);
    transparent_crc(p_1448->g_869.f4, "p_1448->g_869.f4", print_hash_value);
    transparent_crc(p_1448->g_869.f5, "p_1448->g_869.f5", print_hash_value);
    transparent_crc(p_1448->g_869.f6, "p_1448->g_869.f6", print_hash_value);
    transparent_crc(p_1448->g_869.f7, "p_1448->g_869.f7", print_hash_value);
    transparent_crc(p_1448->g_869.f8, "p_1448->g_869.f8", print_hash_value);
    transparent_crc(p_1448->g_869.f9, "p_1448->g_869.f9", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1448->g_922[i].f0, "p_1448->g_922[i].f0", print_hash_value);
        transparent_crc(p_1448->g_922[i].f1, "p_1448->g_922[i].f1", print_hash_value);
        transparent_crc(p_1448->g_922[i].f2, "p_1448->g_922[i].f2", print_hash_value);
        transparent_crc(p_1448->g_922[i].f3, "p_1448->g_922[i].f3", print_hash_value);
        transparent_crc(p_1448->g_922[i].f4, "p_1448->g_922[i].f4", print_hash_value);
        transparent_crc(p_1448->g_922[i].f5, "p_1448->g_922[i].f5", print_hash_value);
        transparent_crc(p_1448->g_922[i].f6, "p_1448->g_922[i].f6", print_hash_value);
        transparent_crc(p_1448->g_922[i].f7, "p_1448->g_922[i].f7", print_hash_value);
        transparent_crc(p_1448->g_922[i].f8, "p_1448->g_922[i].f8", print_hash_value);
        transparent_crc(p_1448->g_922[i].f9, "p_1448->g_922[i].f9", print_hash_value);

    }
    transparent_crc(p_1448->g_976.f0, "p_1448->g_976.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_1448->g_981[i][j][k], "p_1448->g_981[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1448->g_1038, "p_1448->g_1038", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1448->g_1066[i].f0, "p_1448->g_1066[i].f0", print_hash_value);
        transparent_crc(p_1448->g_1066[i].f1, "p_1448->g_1066[i].f1", print_hash_value);
        transparent_crc(p_1448->g_1066[i].f2, "p_1448->g_1066[i].f2", print_hash_value);
        transparent_crc(p_1448->g_1066[i].f3, "p_1448->g_1066[i].f3", print_hash_value);
        transparent_crc(p_1448->g_1066[i].f4, "p_1448->g_1066[i].f4", print_hash_value);
        transparent_crc(p_1448->g_1066[i].f5, "p_1448->g_1066[i].f5", print_hash_value);
        transparent_crc(p_1448->g_1066[i].f6, "p_1448->g_1066[i].f6", print_hash_value);
        transparent_crc(p_1448->g_1066[i].f7, "p_1448->g_1066[i].f7", print_hash_value);
        transparent_crc(p_1448->g_1066[i].f8, "p_1448->g_1066[i].f8", print_hash_value);
        transparent_crc(p_1448->g_1066[i].f9, "p_1448->g_1066[i].f9", print_hash_value);

    }
    transparent_crc(p_1448->g_1086.f0, "p_1448->g_1086.f0", print_hash_value);
    transparent_crc(p_1448->g_1086.f1, "p_1448->g_1086.f1", print_hash_value);
    transparent_crc(p_1448->g_1086.f2, "p_1448->g_1086.f2", print_hash_value);
    transparent_crc(p_1448->g_1086.f3, "p_1448->g_1086.f3", print_hash_value);
    transparent_crc(p_1448->g_1086.f4, "p_1448->g_1086.f4", print_hash_value);
    transparent_crc(p_1448->g_1086.f5, "p_1448->g_1086.f5", print_hash_value);
    transparent_crc(p_1448->g_1086.f6, "p_1448->g_1086.f6", print_hash_value);
    transparent_crc(p_1448->g_1086.f7, "p_1448->g_1086.f7", print_hash_value);
    transparent_crc(p_1448->g_1086.f8, "p_1448->g_1086.f8", print_hash_value);
    transparent_crc(p_1448->g_1086.f9, "p_1448->g_1086.f9", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1448->g_1117[i].f0, "p_1448->g_1117[i].f0", print_hash_value);
        transparent_crc(p_1448->g_1117[i].f1, "p_1448->g_1117[i].f1", print_hash_value);
        transparent_crc(p_1448->g_1117[i].f2, "p_1448->g_1117[i].f2", print_hash_value);
        transparent_crc(p_1448->g_1117[i].f3, "p_1448->g_1117[i].f3", print_hash_value);
        transparent_crc(p_1448->g_1117[i].f4, "p_1448->g_1117[i].f4", print_hash_value);
        transparent_crc(p_1448->g_1117[i].f5, "p_1448->g_1117[i].f5", print_hash_value);
        transparent_crc(p_1448->g_1117[i].f6, "p_1448->g_1117[i].f6", print_hash_value);
        transparent_crc(p_1448->g_1117[i].f7, "p_1448->g_1117[i].f7", print_hash_value);
        transparent_crc(p_1448->g_1117[i].f8, "p_1448->g_1117[i].f8", print_hash_value);
        transparent_crc(p_1448->g_1117[i].f9, "p_1448->g_1117[i].f9", print_hash_value);

    }
    transparent_crc(p_1448->g_1129.f0, "p_1448->g_1129.f0", print_hash_value);
    transparent_crc(p_1448->g_1135, "p_1448->g_1135", print_hash_value);
    transparent_crc(p_1448->g_1232.f0, "p_1448->g_1232.f0", print_hash_value);
    transparent_crc(p_1448->g_1232.f1, "p_1448->g_1232.f1", print_hash_value);
    transparent_crc(p_1448->g_1232.f2, "p_1448->g_1232.f2", print_hash_value);
    transparent_crc(p_1448->g_1232.f3, "p_1448->g_1232.f3", print_hash_value);
    transparent_crc(p_1448->g_1232.f4, "p_1448->g_1232.f4", print_hash_value);
    transparent_crc(p_1448->g_1232.f5, "p_1448->g_1232.f5", print_hash_value);
    transparent_crc(p_1448->g_1232.f6, "p_1448->g_1232.f6", print_hash_value);
    transparent_crc(p_1448->g_1232.f7, "p_1448->g_1232.f7", print_hash_value);
    transparent_crc(p_1448->g_1232.f8, "p_1448->g_1232.f8", print_hash_value);
    transparent_crc(p_1448->g_1232.f9, "p_1448->g_1232.f9", print_hash_value);
    transparent_crc(p_1448->g_1264, "p_1448->g_1264", print_hash_value);
    transparent_crc(p_1448->g_1311.f0, "p_1448->g_1311.f0", print_hash_value);
    transparent_crc(p_1448->g_1311.f1, "p_1448->g_1311.f1", print_hash_value);
    transparent_crc(p_1448->g_1311.f2, "p_1448->g_1311.f2", print_hash_value);
    transparent_crc(p_1448->g_1311.f3, "p_1448->g_1311.f3", print_hash_value);
    transparent_crc(p_1448->g_1311.f4, "p_1448->g_1311.f4", print_hash_value);
    transparent_crc(p_1448->g_1311.f5, "p_1448->g_1311.f5", print_hash_value);
    transparent_crc(p_1448->g_1311.f6, "p_1448->g_1311.f6", print_hash_value);
    transparent_crc(p_1448->g_1311.f7, "p_1448->g_1311.f7", print_hash_value);
    transparent_crc(p_1448->g_1311.f8, "p_1448->g_1311.f8", print_hash_value);
    transparent_crc(p_1448->g_1311.f9, "p_1448->g_1311.f9", print_hash_value);
    transparent_crc(p_1448->g_1328.f0, "p_1448->g_1328.f0", print_hash_value);
    transparent_crc(p_1448->g_1446, "p_1448->g_1446", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
