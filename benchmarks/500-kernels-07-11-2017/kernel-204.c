// -g 17,31,11 -l 17,1,1
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


// Seed: 1044532820

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   volatile int32_t  f1;
   int64_t  f2;
   int32_t  f3;
   uint8_t  f4;
   int64_t  f5;
   uint64_t  f6;
   volatile uint16_t  f7;
   volatile uint16_t  f8;
   volatile uint16_t  f9;
};

struct S1 {
    volatile uint64_t g_4;
    int8_t g_5;
    uint64_t g_55;
    int32_t g_79;
    int8_t g_86[8];
    uint16_t g_87;
    int32_t g_90[4][2];
    int32_t *g_89;
    int16_t g_97;
    uint64_t g_108[9][3];
    volatile uint64_t g_116[6][2][7];
    volatile uint64_t *g_115;
    volatile uint64_t **g_114[6][4];
    int64_t g_125;
    uint8_t g_221;
    uint32_t g_231;
    struct S0 g_252;
    struct S0 *g_251;
    int32_t **g_358;
    int32_t ***g_357;
    uint32_t g_462;
    uint32_t *g_461[10];
    uint32_t **g_460[10][2];
    int32_t g_489;
    uint64_t g_531;
    uint32_t g_633;
    uint16_t g_648;
    int64_t g_662;
    int8_t g_708;
    int64_t * volatile *g_709[4];
    int64_t g_716[2][4];
    uint64_t *g_740;
    uint16_t g_752;
    int16_t g_793[7][2][3];
    uint32_t g_794;
    int64_t g_805[2];
    int64_t g_812;
    int8_t g_1000;
    volatile int64_t *g_1050;
    volatile int64_t **g_1049;
    int32_t g_1052;
    int64_t g_1069;
    int64_t g_1121;
    uint16_t *g_1141;
    uint16_t **g_1140;
    int32_t g_1184;
    uint8_t *g_1199;
    struct S0 g_1220[7][9][4];
    struct S0 g_1264;
    volatile uint32_t ** volatile * volatile *g_1294;
    struct S0 g_1337;
    int32_t *g_1387;
    int32_t g_1431;
    int16_t * volatile g_1454;
    int16_t * volatile * volatile g_1453;
    int16_t * volatile * volatile *g_1452;
    int8_t g_1520;
    int32_t ****g_1523;
    int32_t *****g_1522;
    uint32_t g_1551;
    int16_t g_1645;
    int64_t g_1648[3];
    int64_t *g_1670;
    int64_t **g_1669;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S1 * p_1692);
int16_t  func_11(int32_t  p_12, uint32_t  p_13, struct S1 * p_1692);
int8_t  func_20(int64_t  p_21, uint32_t  p_22, uint64_t  p_23, uint32_t  p_24, int8_t  p_25, struct S1 * p_1692);
int64_t  func_26(uint16_t  p_27, int64_t  p_28, struct S1 * p_1692);
int64_t  func_29(int64_t  p_30, uint64_t  p_31, uint32_t  p_32, uint64_t  p_33, uint32_t  p_34, struct S1 * p_1692);
uint8_t  func_35(int32_t  p_36, uint32_t  p_37, uint32_t  p_38, struct S1 * p_1692);
int8_t  func_43(int16_t  p_44, int32_t  p_45, int32_t  p_46, struct S1 * p_1692);
int64_t  func_47(uint64_t  p_48, int32_t  p_49, struct S1 * p_1692);
int64_t  func_50(int32_t  p_51, struct S1 * p_1692);
int32_t * func_58(uint32_t  p_59, uint64_t * p_60, int32_t * p_61, uint8_t  p_62, struct S1 * p_1692);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1692->g_4 p_1692->g_5 p_1692->g_55 p_1692->g_79 p_1692->g_87 p_1692->g_89 p_1692->g_90 p_1692->g_86 p_1692->g_108 p_1692->g_97 p_1692->g_114 p_1692->g_358 p_1692->g_489 p_1692->g_252.f3 p_1692->g_125 p_1692->g_231 p_1692->g_531 p_1692->g_357 p_1692->g_461 p_1692->g_252.f5 p_1692->g_252.f0 p_1692->g_633 p_1692->g_648 p_1692->g_252.f2 p_1692->g_812 p_1692->g_793 p_1692->g_662 p_1692->g_805 p_1692->g_252.f4 p_1692->g_221 p_1692->g_740 p_1692->g_716 p_1692->g_752 p_1692->g_252.f6 p_1692->g_708 p_1692->g_462 p_1692->g_794 p_1692->g_1049 p_1692->g_1069 p_1692->g_1000 p_1692->g_1121 p_1692->g_1140 p_1692->g_1141 p_1692->g_1199 p_1692->g_251 p_1692->g_1052 p_1692->g_709 p_1692->g_1264.f3 p_1692->g_1294 p_1692->g_1220.f4 p_1692->g_1264.f4 p_1692->g_1431 p_1692->g_1387 p_1692->g_1452 p_1692->g_1220.f3 p_1692->g_1184 p_1692->g_1220.f0 p_1692->g_1220.f5 p_1692->g_1520 p_1692->g_1522 p_1692->g_1551 p_1692->g_1337.f5 p_1692->g_1264.f6 p_1692->g_1264.f2 p_1692->g_1337.f3 p_1692->g_1220.f8
 * writes: p_1692->g_55 p_1692->g_86 p_1692->g_79 p_1692->g_87 p_1692->g_90 p_1692->g_108 p_1692->g_97 p_1692->g_114 p_1692->g_89 p_1692->g_252.f3 p_1692->g_531 p_1692->g_252.f0 p_1692->g_633 p_1692->g_648 p_1692->g_221 p_1692->g_5 p_1692->g_125 p_1692->g_252.f5 p_1692->g_812 p_1692->g_662 p_1692->g_461 p_1692->g_793 p_1692->g_740 p_1692->g_805 p_1692->g_252.f4 p_1692->g_489 p_1692->g_708 p_1692->g_252.f2 p_1692->g_462 p_1692->g_794 p_1692->g_1052 p_1692->g_1140 p_1692->g_1069 p_1692->g_1184 p_1692->g_1220.f2 p_1692->g_1121 p_1692->g_251 p_1692->g_1264.f3 p_1692->g_1264.f0 p_1692->g_716 p_1692->g_1387 p_1692->g_1264.f4 p_1692->g_231 p_1692->g_1220.f3 p_1692->g_1337.f6 p_1692->g_1337.f2 p_1692->g_1337.f5 p_1692->g_1264.f6 p_1692->g_1669 p_1692->g_1337.f3
 */
uint32_t  func_1(struct S1 * p_1692)
{ /* block id: 4 */
    uint16_t l_8 = 0xAAEDL;
    int32_t l_618 = (-1L);
    uint8_t *l_658[6] = {&p_1692->g_221,&p_1692->g_221,&p_1692->g_221,&p_1692->g_221,&p_1692->g_221,&p_1692->g_221};
    int16_t l_659 = 0x7BFCL;
    int64_t *l_811 = &p_1692->g_812;
    int32_t *l_1691 = &p_1692->g_1337.f3;
    int i;
    (*l_1691) &= ((0x3F8FL > ((safe_div_func_uint32_t_u_u(p_1692->g_4, (p_1692->g_5 , (safe_mul_func_int8_t_s_s(l_8, (safe_rshift_func_uint16_t_u_u((0x23L && ((func_11(l_8, (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(func_20(func_26(((((*l_811) |= func_29(((p_1692->g_221 = func_35(((safe_sub_func_int32_t_s_s(l_8, (safe_rshift_func_uint16_t_u_s(p_1692->g_5, ((l_618 = func_43(p_1692->g_5, p_1692->g_5, p_1692->g_5, p_1692)) > p_1692->g_125))))) & p_1692->g_125), l_8, p_1692->g_231, p_1692)) < l_8), p_1692->g_5, l_659, p_1692->g_252.f2, l_659, p_1692)) , p_1692->g_793[5][0][2]) , 65531UL), l_8, p_1692), l_659, l_8, l_8, p_1692->g_716[1][0], p_1692), p_1692->g_1000)), l_8)), 1UL)), p_1692) > p_1692->g_1264.f2) & 7UL)), 6))))))) , (*p_1692->g_1141))) | (-10L));
    return p_1692->g_1220[2][2][2].f8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1692->g_86 p_1692->g_1121 p_1692->g_531 p_1692->g_793 p_1692->g_489 p_1692->g_252.f3 p_1692->g_252.f4 p_1692->g_1140 p_1692->g_794 p_1692->g_1141 p_1692->g_648 p_1692->g_662 p_1692->g_812 p_1692->g_90 p_1692->g_716 p_1692->g_358 p_1692->g_252.f2 p_1692->g_221 p_1692->g_1199 p_1692->g_1069 p_1692->g_251 p_1692->g_87 p_1692->g_252.f6 p_1692->g_1052 p_1692->g_709 p_1692->g_357 p_1692->g_89 p_1692->g_1264.f3 p_1692->g_1294 p_1692->g_55 p_1692->g_1220.f4 p_1692->g_1264.f4 p_1692->g_462 p_1692->g_5 p_1692->g_1431 p_1692->g_1387 p_1692->g_1452 p_1692->g_1220.f3 p_1692->g_97 p_1692->g_1184 p_1692->g_1220.f0 p_1692->g_1220.f5 p_1692->g_1520 p_1692->g_1522 p_1692->g_1551 p_1692->g_125 p_1692->g_1337.f5 p_1692->g_805 p_1692->g_1264.f6 p_1692->g_252.f0
 * writes: p_1692->g_108 p_1692->g_55 p_1692->g_531 p_1692->g_793 p_1692->g_252.f3 p_1692->g_1140 p_1692->g_812 p_1692->g_79 p_1692->g_1069 p_1692->g_1184 p_1692->g_89 p_1692->g_221 p_1692->g_462 p_1692->g_90 p_1692->g_1220.f2 p_1692->g_1121 p_1692->g_251 p_1692->g_1264.f3 p_1692->g_648 p_1692->g_1052 p_1692->g_662 p_1692->g_1264.f0 p_1692->g_716 p_1692->g_5 p_1692->g_87 p_1692->g_1387 p_1692->g_1264.f4 p_1692->g_231 p_1692->g_1220.f3 p_1692->g_1337.f6 p_1692->g_1337.f2 p_1692->g_86 p_1692->g_805 p_1692->g_252.f4 p_1692->g_125 p_1692->g_1337.f5 p_1692->g_97 p_1692->g_1264.f6 p_1692->g_252.f0 p_1692->g_1669
 */
int16_t  func_11(int32_t  p_12, uint32_t  p_13, struct S1 * p_1692)
{ /* block id: 562 */
    uint8_t *l_1105 = &p_1692->g_221;
    int32_t l_1108[6][6] = {{0x7995A53FL,0x7995A53FL,0x0926C542L,(-1L),1L,(-1L)},{0x7995A53FL,0x7995A53FL,0x0926C542L,(-1L),1L,(-1L)},{0x7995A53FL,0x7995A53FL,0x0926C542L,(-1L),1L,(-1L)},{0x7995A53FL,0x7995A53FL,0x0926C542L,(-1L),1L,(-1L)},{0x7995A53FL,0x7995A53FL,0x0926C542L,(-1L),1L,(-1L)},{0x7995A53FL,0x7995A53FL,0x0926C542L,(-1L),1L,(-1L)}};
    uint64_t *l_1122 = &p_1692->g_108[2][0];
    uint64_t *l_1123[9][9] = {{&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55},{&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55},{&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55},{&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55},{&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55},{&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55},{&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55},{&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55},{&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_531,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55}};
    int16_t *l_1124 = &p_1692->g_793[5][0][2];
    uint16_t **l_1139 = (void*)0;
    uint16_t ***l_1142[2][2];
    int32_t l_1145[5];
    int32_t ****l_1146 = &p_1692->g_357;
    uint64_t **l_1318[1][2][8];
    uint64_t ***l_1317 = &l_1318[0][1][6];
    int16_t l_1326 = (-1L);
    int8_t l_1327 = (-1L);
    uint8_t l_1333[10] = {0x75L,0x75L,0x75L,0x75L,0x75L,0x75L,0x75L,0x75L,0x75L,0x75L};
    struct S0 *l_1336 = &p_1692->g_1337;
    uint32_t l_1381[7][8] = {{0x6B207279L,0x09712162L,1UL,0x6B207279L,4UL,1UL,1UL,4UL},{0x6B207279L,0x09712162L,1UL,0x6B207279L,4UL,1UL,1UL,4UL},{0x6B207279L,0x09712162L,1UL,0x6B207279L,4UL,1UL,1UL,4UL},{0x6B207279L,0x09712162L,1UL,0x6B207279L,4UL,1UL,1UL,4UL},{0x6B207279L,0x09712162L,1UL,0x6B207279L,4UL,1UL,1UL,4UL},{0x6B207279L,0x09712162L,1UL,0x6B207279L,4UL,1UL,1UL,4UL},{0x6B207279L,0x09712162L,1UL,0x6B207279L,4UL,1UL,1UL,4UL}};
    uint8_t l_1388 = 247UL;
    int32_t *l_1434[6] = {&p_1692->g_1337.f0,&p_1692->g_1337.f0,&p_1692->g_1337.f0,&p_1692->g_1337.f0,&p_1692->g_1337.f0,&p_1692->g_1337.f0};
    uint32_t l_1552 = 0x1C61ACE5L;
    uint64_t l_1564 = 0xE5992851AEA8AC8AL;
    int32_t l_1586 = (-2L);
    int16_t l_1647[9] = {0x7711L,0x3AE1L,0x7711L,0x7711L,0x3AE1L,0x7711L,0x7711L,0x3AE1L,0x7711L};
    uint8_t l_1649 = 0x0CL;
    int16_t **l_1659 = &l_1124;
    int16_t ***l_1658 = &l_1659;
    int64_t *l_1665 = &p_1692->g_125;
    int64_t **l_1664 = &l_1665;
    int32_t l_1680 = (-8L);
    int32_t l_1681[10][8] = {{(-7L),(-7L),(-1L),(-6L),0x31172151L,(-6L),(-1L),(-7L)},{(-7L),(-7L),(-1L),(-6L),0x31172151L,(-6L),(-1L),(-7L)},{(-7L),(-7L),(-1L),(-6L),0x31172151L,(-6L),(-1L),(-7L)},{(-7L),(-7L),(-1L),(-6L),0x31172151L,(-6L),(-1L),(-7L)},{(-7L),(-7L),(-1L),(-6L),0x31172151L,(-6L),(-1L),(-7L)},{(-7L),(-7L),(-1L),(-6L),0x31172151L,(-6L),(-1L),(-7L)},{(-7L),(-7L),(-1L),(-6L),0x31172151L,(-6L),(-1L),(-7L)},{(-7L),(-7L),(-1L),(-6L),0x31172151L,(-6L),(-1L),(-7L)},{(-7L),(-7L),(-1L),(-6L),0x31172151L,(-6L),(-1L),(-7L)},{(-7L),(-7L),(-1L),(-6L),0x31172151L,(-6L),(-1L),(-7L)}};
    int16_t l_1683 = 0x2756L;
    int32_t l_1690 = 0x5C322985L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_1142[i][j] = &p_1692->g_1140;
    }
    for (i = 0; i < 5; i++)
        l_1145[i] = 1L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
                l_1318[i][j][k] = &p_1692->g_740;
        }
    }
    p_1692->g_252.f3 |= (safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((+(+((l_1105 != ((safe_div_func_int8_t_s_s(l_1108[4][0], (((p_12 , p_1692->g_86[7]) < ((~((*l_1124) ^= (0L || (p_1692->g_531 &= (p_1692->g_55 = ((*l_1122) = ((safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_div_func_int64_t_s_s(1L, p_12)), (safe_sub_func_int32_t_s_s(((~(l_1108[1][2] < p_13)) & p_13), l_1108[4][0])))), l_1108[4][0])), p_1692->g_1121)), l_1108[2][0])) ^ 0UL))))))) > 0x0F06L)) & p_12))) , l_1105)) < l_1108[5][5]))), p_12)), p_1692->g_489));
    if ((safe_mul_func_uint8_t_u_u(l_1108[4][0], (((*l_1124) = ((safe_unary_minus_func_int16_t_s(p_13)) < 0x6001AC486C23D2A4L)) & (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(l_1108[4][3], (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u(((p_1692->g_252.f4 || (l_1139 != (p_1692->g_1140 = p_1692->g_1140))) , (l_1108[4][0] | (((((safe_mul_func_int16_t_s_s(l_1108[4][0], l_1145[3])) | l_1145[1]) , p_1692->g_794) , (void*)0) != l_1146))), p_13)))))), (*p_1692->g_1141))), p_1692->g_662)), 7))))))
    { /* block id: 570 */
        int16_t **l_1153 = &l_1124;
        int32_t l_1170 = 0L;
        struct S0 **l_1177 = &p_1692->g_251;
        uint64_t l_1185 = 0UL;
        uint32_t l_1225 = 6UL;
        uint8_t *l_1239 = (void*)0;
        uint64_t ***l_1319 = &l_1318[0][0][5];
        int32_t l_1328 = 0x50765439L;
        int32_t l_1332[7][10][3] = {{{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L}},{{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L}},{{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L}},{{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L}},{{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L}},{{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L}},{{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L},{(-4L),0x625C9044L,0L}}};
        int32_t *l_1439 = &p_1692->g_1337.f0;
        int16_t ***l_1573 = &l_1153;
        int16_t ****l_1572 = &l_1573;
        int64_t *l_1574 = &p_1692->g_1069;
        int32_t *l_1575 = (void*)0;
        int32_t *l_1576 = &p_1692->g_252.f3;
        int16_t l_1585 = 0x31C8L;
        uint32_t *l_1589 = &p_1692->g_462;
        int8_t *l_1590 = (void*)0;
        int8_t *l_1591 = &l_1327;
        int i, j, k;
        for (p_1692->g_812 = (-5); (p_1692->g_812 == (-7)); --p_1692->g_812)
        { /* block id: 573 */
            int16_t ***l_1154 = &l_1153;
            uint32_t l_1169 = 4294967292UL;
            int32_t l_1171 = 0L;
            int64_t *l_1172 = (void*)0;
            int64_t *l_1173 = (void*)0;
            int64_t *l_1174 = &p_1692->g_1069;
            struct S0 *l_1219 = &p_1692->g_1220[2][2][2];
            if (((safe_sub_func_int64_t_s_s((0xA94448B3L < (((*l_1174) = (((safe_lshift_func_uint8_t_u_s((((*l_1124) &= (&l_1124 == ((*l_1154) = l_1153))) != (safe_div_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_u(p_13, (0x6FF63D6AL ^ (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_uint8_t_u_s(((p_1692->g_79 = (l_1169 = ((safe_rshift_func_int8_t_s_u((p_13 | (p_1692->g_648 , p_13)), 4)) < (((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_1692->g_252.f3, p_1692->g_90[1][1])), 0x5799L)) , 0x1C7DL) > (**p_1692->g_1140))))) > 0UL), 1)) , l_1170) , p_12), p_13))))) <= 4L) && l_1169), l_1171))), 4)) < p_1692->g_716[0][0]) && 0x57AAL)) || p_12)), p_13)) && p_12))
            { /* block id: 579 */
                int32_t l_1180 = 5L;
                int32_t *l_1183[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1183[i] = (void*)0;
                p_1692->g_1184 = ((safe_mod_func_int32_t_s_s((l_1177 == (void*)0), (safe_sub_func_int32_t_s_s(0x6BA98568L, l_1180)))) ^ ((safe_lshift_func_int8_t_s_s(p_12, 0)) < p_12));
                (*p_1692->g_358) = l_1183[0];
                return p_1692->g_252.f2;
            }
            else
            { /* block id: 583 */
                int16_t l_1211 = (-1L);
                uint32_t ***l_1246 = (void*)0;
                int32_t l_1254 = 0L;
                struct S0 *l_1263 = &p_1692->g_1264;
                if (l_1185)
                    break;
                if (l_1169)
                { /* block id: 585 */
                    uint32_t l_1210[5] = {5UL,5UL,5UL,5UL,5UL};
                    int64_t *l_1226 = &p_1692->g_1220[2][2][2].f2;
                    int32_t *l_1233 = (void*)0;
                    int32_t *l_1234 = &p_1692->g_252.f3;
                    int32_t l_1240 = 0x3B884377L;
                    uint32_t ***l_1243 = &p_1692->g_460[8][1];
                    uint32_t ***l_1245 = &p_1692->g_460[9][1];
                    uint32_t ****l_1244[8][9] = {{&l_1245,&l_1245,(void*)0,&l_1245,&l_1245,&l_1245,&l_1245,(void*)0,&l_1245},{&l_1245,&l_1245,(void*)0,&l_1245,&l_1245,&l_1245,&l_1245,(void*)0,&l_1245},{&l_1245,&l_1245,(void*)0,&l_1245,&l_1245,&l_1245,&l_1245,(void*)0,&l_1245},{&l_1245,&l_1245,(void*)0,&l_1245,&l_1245,&l_1245,&l_1245,(void*)0,&l_1245},{&l_1245,&l_1245,(void*)0,&l_1245,&l_1245,&l_1245,&l_1245,(void*)0,&l_1245},{&l_1245,&l_1245,(void*)0,&l_1245,&l_1245,&l_1245,&l_1245,(void*)0,&l_1245},{&l_1245,&l_1245,(void*)0,&l_1245,&l_1245,&l_1245,&l_1245,(void*)0,&l_1245},{&l_1245,&l_1245,(void*)0,&l_1245,&l_1245,&l_1245,&l_1245,(void*)0,&l_1245}};
                    int32_t *l_1253 = &l_1145[3];
                    int32_t *l_1255 = (void*)0;
                    int i, j;
                    for (l_1185 = 0; (l_1185 == 43); l_1185 = safe_add_func_uint8_t_u_u(l_1185, 2))
                    { /* block id: 588 */
                        int16_t l_1191 = 0x7DE8L;
                        int32_t l_1198 = 1L;
                        uint32_t *l_1212 = &p_1692->g_462;
                        int32_t *l_1213 = (void*)0;
                        int32_t *l_1214 = &p_1692->g_90[1][1];
                        int32_t *l_1215 = &p_1692->g_252.f3;
                        (*l_1214) = (safe_mul_func_int8_t_s_s((l_1191 = (safe_unary_minus_func_uint32_t_u(l_1171))), ((((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((((*l_1105) |= l_1198) & ((((void*)0 == p_1692->g_1199) != ((*l_1212) = (((0UL > p_13) >= (safe_rshift_func_int8_t_s_s(((safe_add_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(p_13, p_12)) || (l_1210[4] , 0x1171L)), 0x6FL)), l_1170)) <= p_12), p_13)) > l_1211), 4))) & 0x642FL))) , (-1L))), l_1169)), p_12)), p_1692->g_1069)) , l_1169) & p_12) != l_1170)));
                        (*l_1215) = ((*l_1214) = 1L);
                    }
                    for (p_1692->g_252.f3 = 20; (p_1692->g_252.f3 < (-25)); p_1692->g_252.f3 = safe_sub_func_int16_t_s_s(p_1692->g_252.f3, 1))
                    { /* block id: 598 */
                        int32_t l_1218 = 7L;
                        l_1218 = l_1210[4];
                        l_1108[4][0] ^= ((p_1692->g_251 == l_1219) >= 1L);
                    }
                    (*l_1234) = ((p_12 , (safe_add_func_uint8_t_u_u((((((***l_1154) &= (((safe_div_func_int8_t_s_s(0x42L, (((*l_1226) = l_1225) , l_1210[4]))) ^ (((void*)0 != &p_13) && (safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_1692->g_87, (p_1692->g_252.f6 & ((l_1108[4][2] = 6L) <= 0x7007864FL)))), 0xCEL)), 1UL)))) <= p_1692->g_1052)) || l_1211) != p_13) != 0x142BL), l_1169))) == l_1210[2]);
                    l_1170 = (safe_lshift_func_int16_t_s_u(((((safe_mul_func_int16_t_s_s((l_1105 == l_1239), (((((((l_1254 = (p_13 = (((l_1171 &= l_1240) >= (safe_mul_func_int16_t_s_s((((*l_1253) = (((l_1243 = &p_1692->g_460[2][0]) != (l_1246 = (void*)0)) > ((l_1169 & ((*l_1234) = ((0x1BL < p_13) ^ (safe_div_func_uint64_t_u_u((~(safe_sub_func_int64_t_s_s((~(safe_add_func_uint8_t_u_u(0xA7L, p_13))), l_1185))), p_1692->g_221))))) != (*p_1692->g_1199)))) || l_1169), 4L))) < p_12))) | p_12) || (*p_1692->g_1141)) ^ p_12) >= l_1211) , &l_1171) != (void*)0))) != p_12) && 65530UL) < l_1211), 2));
                }
                else
                { /* block id: 614 */
                    int64_t *l_1260[10] = {&p_1692->g_252.f5,&p_1692->g_252.f5,&p_1692->g_252.f5,&p_1692->g_252.f5,&p_1692->g_252.f5,&p_1692->g_252.f5,&p_1692->g_252.f5,&p_1692->g_252.f5,&p_1692->g_252.f5,&p_1692->g_252.f5};
                    int64_t * volatile *l_1259 = &l_1260[4];
                    int32_t l_1261 = 0x0D601062L;
                    int i;
                    l_1170 = p_12;
                    if (p_12)
                        break;
                    for (p_1692->g_1121 = 0; (p_1692->g_1121 != 25); p_1692->g_1121 = safe_add_func_uint64_t_u_u(p_1692->g_1121, 8))
                    { /* block id: 619 */
                        int64_t * volatile **l_1258[2][10][2] = {{{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]}},{{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]},{&p_1692->g_709[0],&p_1692->g_709[0]}}};
                        int32_t *l_1262 = &l_1108[4][0];
                        int i, j, k;
                        l_1259 = p_1692->g_709[0];
                        if (p_13)
                            continue;
                        (*l_1262) = l_1261;
                    }
                }
                p_1692->g_251 = l_1263;
            }
            (***l_1146) = &l_1170;
            (***p_1692->g_357) &= p_13;
        }
        for (p_1692->g_1264.f3 = 23; (p_1692->g_1264.f3 > (-12)); p_1692->g_1264.f3 = safe_sub_func_int16_t_s_s(p_1692->g_1264.f3, 1))
        { /* block id: 632 */
            uint32_t l_1271[2];
            int32_t l_1304 = 0L;
            int32_t l_1325 = 0x1E000FFFL;
            int32_t l_1329 = 0L;
            int32_t l_1331[9] = {0L,0x2F102E3CL,0L,0L,0x2F102E3CL,0L,0L,0x2F102E3CL,0L};
            int16_t *l_1413 = &l_1326;
            uint32_t l_1418 = 4294967293UL;
            int64_t ***l_1517[6];
            int i;
            for (i = 0; i < 2; i++)
                l_1271[i] = 4294967294UL;
            for (i = 0; i < 6; i++)
                l_1517[i] = (void*)0;
            for (p_1692->g_462 = 0; (p_1692->g_462 <= 12); p_1692->g_462 = safe_add_func_uint16_t_u_u(p_1692->g_462, 1))
            { /* block id: 635 */
                return p_13;
            }
            if ((safe_mod_func_int32_t_s_s(l_1271[0], (l_1271[0] & ((((safe_mul_func_uint8_t_u_u((0xAC7C1B0FL != (safe_add_func_int32_t_s_s(l_1271[0], (safe_add_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u((l_1225 >= ((**p_1692->g_1140) = p_13)), p_13)) | 7L) & (safe_add_func_int8_t_s_s(((((*l_1122) = (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(p_1692->g_90[1][1], 1)), p_13))) && p_1692->g_252.f4) ^ p_13), l_1225))), 249UL))))), l_1225)) | p_13) < 0UL) < 0L)))))
            { /* block id: 640 */
                int64_t *l_1316 = &p_1692->g_252.f2;
                int32_t l_1324[6] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
                int32_t ****l_1343 = &p_1692->g_357;
                int32_t *l_1376 = &l_1325;
                uint32_t ***l_1410 = &p_1692->g_460[2][0];
                int32_t *l_1419[6][3] = {{&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,&p_1692->g_79}};
                int i, j;
                for (p_1692->g_1121 = 14; (p_1692->g_1121 == (-22)); p_1692->g_1121 = safe_sub_func_uint32_t_u_u(p_1692->g_1121, 1))
                { /* block id: 643 */
                    uint32_t l_1296 = 0xCD82B855L;
                    int64_t *l_1315 = &p_1692->g_125;
                    int32_t l_1330 = 0x3C4A1E02L;
                    int32_t *****l_1340 = &l_1146;
                    int32_t ****l_1342 = &p_1692->g_357;
                    int32_t *****l_1341 = &l_1342;
                    l_1170 |= p_13;
                    if ((safe_rshift_func_uint8_t_u_u(255UL, 5)))
                    { /* block id: 645 */
                        int32_t l_1295[10][10][2] = {{{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL}},{{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL}},{{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL}},{{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL}},{{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL}},{{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL}},{{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL}},{{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL}},{{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL}},{{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL},{0x4D06B7EEL,0x6ABF300CL}}};
                        int64_t *l_1314 = &p_1692->g_1220[2][2][2].f5;
                        int64_t **l_1313[6][7][1] = {{{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314}},{{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314}},{{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314}},{{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314}},{{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314}},{{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314},{&l_1314}}};
                        int32_t *l_1320 = &p_1692->g_1184;
                        int32_t *l_1321 = &l_1295[1][9][0];
                        int32_t *l_1322 = &l_1295[1][9][0];
                        int32_t *l_1323[2][2] = {{&l_1295[1][9][0],&l_1295[1][9][0]},{&l_1295[1][9][0],&l_1295[1][9][0]}};
                        int i, j, k;
                        l_1304 = (((l_1239 != (void*)0) == ((safe_rshift_func_int8_t_s_u((safe_div_func_int64_t_s_s((p_1692->g_1294 != (p_13 , p_1692->g_1294)), ((l_1295[1][9][0] | (-6L)) && ((l_1170 = ((--l_1296) && ((l_1296 != (~((safe_div_func_uint64_t_u_u((p_1692->g_55 ^= ((safe_add_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(((0xACL == 0x2DL) , 0x77L))) || 0xE67FL), p_13)) | l_1271[0])), p_1692->g_1220[2][2][2].f4)) == p_12))) || p_1692->g_252.f2))) | (*p_1692->g_1141))))), p_12)) > l_1295[6][2][0])) != 0x1CL);
                        l_1295[1][9][0] = (((safe_rshift_func_uint16_t_u_u(((**p_1692->g_1140)--), (0x1852675AB37CF3EAL & (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((~p_1692->g_1069), 7)), 2)) || ((5L > ((l_1315 = &p_1692->g_812) != l_1316)) , p_12)) && ((l_1317 != l_1319) <= ((p_1692->g_1264.f4 , l_1271[1]) > p_1692->g_90[2][0])))))) , l_1271[0]) >= l_1271[1]);
                        ++l_1333[9];
                    }
                    else
                    { /* block id: 654 */
                        int32_t l_1338 = 0x4B67C7C2L;
                        int32_t *l_1339 = &l_1332[5][5][0];
                        l_1336 = l_1336;
                        if (l_1324[0])
                            break;
                        l_1338 = ((~p_1692->g_90[0][0]) , (0x7907L & 0L));
                        (*l_1339) = ((**p_1692->g_1140) , (&p_1692->g_86[6] == &p_1692->g_1000));
                    }
                    l_1304 |= (((*l_1341) = ((*l_1340) = &p_1692->g_357)) == l_1343);
                }
                if ((p_1692->g_1052 = p_13))
                { /* block id: 665 */
                    for (p_1692->g_662 = 0; (p_1692->g_662 == 28); ++p_1692->g_662)
                    { /* block id: 668 */
                        uint16_t l_1348 = 0UL;
                        int32_t *l_1351 = &p_1692->g_1264.f0;
                        uint32_t *l_1355 = &p_1692->g_462;
                        int64_t *l_1358 = &p_1692->g_716[1][1];
                        int64_t *l_1373 = (void*)0;
                        int64_t *l_1374 = &p_1692->g_1121;
                        int32_t l_1375 = (-2L);
                        l_1375 &= (safe_sub_func_uint16_t_u_u((!(p_1692->g_87 <= ((((*l_1351) = (l_1348 <= (safe_lshift_func_uint16_t_u_u(0xAE48L, 15)))) , (safe_unary_minus_func_int64_t_s(((*l_1358) &= (safe_sub_func_uint32_t_u_u(((*l_1355)--), p_13)))))) | ((*l_1124) = ((0x0AL <= (((safe_mod_func_uint8_t_u_u(p_13, (safe_add_func_int64_t_s_s((((safe_lshift_func_int8_t_s_s(p_1692->g_90[1][1], 7)) != (p_1692->g_5 = (safe_sub_func_uint16_t_u_u((p_12 || (((*l_1374) = (safe_mul_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u((((0x767EL >= p_13) >= p_13) < l_1271[0]), l_1332[5][5][0])) , p_13) > 0x6FL), l_1348))) > p_1692->g_87)), l_1170)))) < l_1331[7]), l_1271[0])))) , (void*)0) != (void*)0)) , (-1L)))))), p_1692->g_1264.f3));
                    }
                    (*p_1692->g_358) = l_1376;
                }
                else
                { /* block id: 678 */
                    int32_t *l_1385 = &p_1692->g_489;
                    int32_t **l_1384 = &l_1385;
                    int32_t l_1386 = 0x4D8EF92EL;
                    uint64_t *l_1389 = &p_1692->g_531;
                    uint64_t ***l_1401 = &l_1318[0][1][6];
                    (**p_1692->g_357) = func_58((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((0x1B551ECA8AA21ED3L && l_1381[6][3]), ((0x1E13L <= ((safe_lshift_func_int16_t_s_u(6L, 1)) && (((*l_1384) = (void*)0) != (p_1692->g_1387 = func_58(p_12, &p_1692->g_531, func_58(l_1386, &p_1692->g_108[7][0], &l_1386, (*p_1692->g_1199), p_1692), (*p_1692->g_1199), p_1692))))) ^ (-4L)))), l_1388)), l_1389, &l_1332[2][4][1], p_13, p_1692);
                    if (p_13)
                    { /* block id: 682 */
                        uint64_t l_1390 = 0x329693A7A74D7E27L;
                        return l_1390;
                    }
                    else
                    { /* block id: 684 */
                        (**p_1692->g_358) = ((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(((l_1332[5][5][0] &= (~(safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((l_1401 == l_1401), 7)) , (((****l_1146) == (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s((!(((*l_1376) = (p_12 >= (((((void*)0 != l_1410) == (((l_1413 != l_1413) >= ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u(l_1418, 18446744073709551607UL)), 4)) >= p_1692->g_90[1][1])) <= p_13)) , (void*)0) != l_1419[2][1]))) | (-1L))), p_13)) , 7L) ^ (****l_1146)) < 0x2A428B2290BB0BF2L), (****l_1146))), 0x5CAFL))) && (-1L))), l_1304)), (*p_1692->g_89))))) || (***p_1692->g_357)), 1)), l_1386)) >= p_12);
                        (**p_1692->g_357) = (void*)0;
                        l_1325 |= (~((safe_mul_func_int16_t_s_s(p_1692->g_1069, 65529UL)) > p_12));
                    }
                }
            }
            else
            { /* block id: 692 */
                uint32_t l_1465[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                int32_t l_1516 = 1L;
                int32_t l_1519 = 1L;
                int32_t *****l_1525 = &p_1692->g_1523;
                int i;
                p_1692->g_252.f3 = p_12;
                for (p_1692->g_1264.f4 = 0; (p_1692->g_1264.f4 != 47); p_1692->g_1264.f4 = safe_add_func_int8_t_s_s(p_1692->g_1264.f4, 7))
                { /* block id: 696 */
                    uint16_t ***l_1430 = (void*)0;
                    int32_t *l_1440 = &p_1692->g_1220[2][2][2].f3;
                    int32_t *l_1441 = &l_1332[5][5][0];
                    int8_t l_1463 = 5L;
                    uint32_t *l_1464 = &l_1271[0];
                    int32_t *l_1466 = &p_1692->g_1184;
                    for (p_1692->g_231 = 12; (p_1692->g_231 < 18); p_1692->g_231 = safe_add_func_int8_t_s_s(p_1692->g_231, 9))
                    { /* block id: 699 */
                        int64_t *l_1428 = &p_1692->g_662;
                        uint16_t ***l_1429[9];
                        int32_t **l_1435 = &l_1434[0];
                        int32_t **l_1436 = (void*)0;
                        int32_t *l_1438[1][2];
                        int32_t **l_1437[8][2] = {{(void*)0,&l_1438[0][0]},{(void*)0,&l_1438[0][0]},{(void*)0,&l_1438[0][0]},{(void*)0,&l_1438[0][0]},{(void*)0,&l_1438[0][0]},{(void*)0,&l_1438[0][0]},{(void*)0,&l_1438[0][0]},{(void*)0,&l_1438[0][0]}};
                        int i, j;
                        for (i = 0; i < 9; i++)
                            l_1429[i] = &l_1139;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1438[i][j] = (void*)0;
                        }
                        l_1441 = func_58((p_13 == (((+((((safe_lshift_func_uint8_t_u_s((((((*l_1428) = p_1692->g_90[0][1]) >= l_1170) , &p_1692->g_1140) == (l_1430 = l_1429[7])), 4)) >= (p_1692->g_1431 , ((safe_lshift_func_int16_t_s_u((((*l_1435) = l_1434[4]) == (l_1439 = p_1692->g_1387)), 7)) ^ (!(0L | p_13))))) , 4294967289UL) >= p_12)) >= (**p_1692->g_1140)) , (**p_1692->g_1140))), &p_1692->g_531, l_1440, p_13, p_1692);
                        (*l_1440) = (*l_1441);
                        if (p_13)
                            break;
                    }
                    (*l_1466) &= (safe_lshift_func_uint8_t_u_u(((*l_1105)--), ((safe_mul_func_uint16_t_u_u(((~((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u(((((void*)0 != p_1692->g_1452) == ((+(p_13 | ((p_1692->g_1337.f6 = (((*l_1464) = ((safe_mod_func_uint32_t_u_u(0xB861471AL, (safe_add_func_uint32_t_u_u((p_13 & l_1145[3]), (safe_sub_func_uint32_t_u_u((0x0605L >= (**p_1692->g_1140)), (safe_mul_func_int16_t_s_s((((p_12 > (*l_1440)) <= 0x7653FA3D7897732CL) >= 0L), l_1463)))))))) || l_1332[2][6][1])) , p_1692->g_97)) , l_1465[4]))) , l_1332[4][7][1])) > l_1465[4]), 1)) > (*p_1692->g_1199)), 3)) == (*p_1692->g_1199))) | 1L), (-5L))) , (*l_1441))));
                }
                for (p_1692->g_1184 = 0; (p_1692->g_1184 > (-16)); --p_1692->g_1184)
                { /* block id: 715 */
                    uint32_t *l_1477 = &l_1381[6][1];
                    int16_t l_1488 = 0x393AL;
                    int8_t *l_1489[8] = {(void*)0,&p_1692->g_86[6],(void*)0,(void*)0,&p_1692->g_86[6],(void*)0,(void*)0,&p_1692->g_86[6]};
                    int16_t **l_1506 = &l_1124;
                    uint32_t *l_1518 = &p_1692->g_462;
                    uint64_t *l_1521 = &p_1692->g_55;
                    int32_t *****l_1524 = &p_1692->g_1523;
                    int32_t l_1563 = 0L;
                    int i;
                    l_1329 ^= ((safe_mul_func_int16_t_s_s(p_12, (safe_div_func_int8_t_s_s((l_1331[3] = (((safe_add_func_int32_t_s_s((!((((*l_1477) = (safe_add_func_uint16_t_u_u((*p_1692->g_1141), (!((p_12 && p_13) & p_1692->g_5))))) ^ l_1328) <= (safe_mul_func_uint8_t_u_u(p_12, (safe_add_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((p_12 , (safe_sub_func_int64_t_s_s(p_13, 3UL))), p_12)), (-2L))) && p_12), p_12)))))), l_1332[3][3][2])) >= l_1488) ^ 18446744073709551608UL)), 0x17L)))) , p_13);
                    for (p_1692->g_1069 = 0; p_1692->g_1069 < 7; p_1692->g_1069 += 1)
                    {
                        for (p_1692->g_1337.f2 = 0; p_1692->g_1337.f2 < 10; p_1692->g_1337.f2 += 1)
                        {
                            for (p_1692->g_462 = 0; p_1692->g_462 < 3; p_1692->g_462 += 1)
                            {
                                l_1332[p_1692->g_1069][p_1692->g_1337.f2][p_1692->g_462] = 0x59BED891L;
                            }
                        }
                    }
                    if ((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_s(p_12, p_12)) , (safe_mod_func_int16_t_s_s(((l_1465[4] , (safe_rshift_func_uint16_t_u_u((0UL & (!(l_1304 = ((l_1519 |= (((safe_rshift_func_int8_t_s_s(1L, 1)) && (safe_add_func_int64_t_s_s(l_1488, ((((((*l_1518) = (((l_1506 != (((p_1692->g_86[6] = ((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(((p_13 = (++(*l_1477))) > 0L))), (l_1516 = ((safe_div_func_uint64_t_u_u(2UL, p_1692->g_1220[2][2][2].f0)) == p_1692->g_1220[2][2][2].f5)))) || p_12), l_1185)) > p_12)) , 0x7470D076EE22FF0FL) , &l_1124)) , (void*)0) != l_1517[0])) < l_1332[1][9][1]) & p_12) , l_1271[0]) != 0L)))) | 249UL)) ^ p_12)))), p_12))) ^ 0UL), l_1328))) && p_1692->g_1520), (*p_1692->g_1199))), 4294967293UL)))
                    { /* block id: 727 */
                        uint16_t l_1534 = 0x1019L;
                        int64_t *l_1537 = &p_1692->g_805[0];
                        int32_t *l_1538 = &l_1328;
                        (*p_1692->g_358) = func_58(l_1488, l_1521, ((((l_1524 = p_1692->g_1522) != l_1525) > (safe_rshift_func_uint8_t_u_u(((((((l_1332[5][5][0] = ((((safe_sub_func_int64_t_s_s(p_12, (safe_mod_func_int64_t_s_s(((*l_1537) = (((*p_1692->g_1141) = p_13) <= (safe_div_func_int16_t_s_s(l_1534, (p_13 , ((safe_div_func_uint64_t_u_u(0x49CB6910AD810FB5L, l_1271[0])) & (-2L))))))), 1UL)))) | l_1328) < p_13) & p_13)) , &p_1692->g_221) != &p_1692->g_221) == l_1534) && (*p_1692->g_1199)) & p_13), (*p_1692->g_1199)))) , l_1538), (*p_1692->g_1199), p_1692);
                        (***p_1692->g_357) = ((**p_1692->g_1140) & ((l_1328 = 0L) , (safe_sub_func_int16_t_s_s(((((*l_1518) = ((*l_1477) = ((((**p_1692->g_1140) <= (252UL != 0x3DL)) != (safe_rshift_func_uint8_t_u_s((((((safe_lshift_func_uint16_t_u_u(65535UL, 4)) != (safe_rshift_func_uint8_t_u_u(((*p_1692->g_1199) &= ((void*)0 == &l_1538)), 6))) || (((safe_mul_func_uint8_t_u_u((*l_1538), p_1692->g_1551)) ^ l_1225) || (**p_1692->g_1140))) & p_13) != (*l_1538)), p_13))) > p_13))) != l_1271[0]) || p_12), l_1552))));
                    }
                    else
                    { /* block id: 738 */
                        int32_t *l_1553 = &p_1692->g_90[0][0];
                        int32_t *l_1554 = &l_1145[0];
                        int32_t *l_1555 = &l_1328;
                        int32_t *l_1556 = &l_1145[1];
                        int32_t *l_1557 = (void*)0;
                        int32_t *l_1558 = (void*)0;
                        int32_t *l_1559 = &p_1692->g_1052;
                        int32_t *l_1560 = &l_1145[4];
                        int32_t l_1561[4] = {1L,1L,1L,1L};
                        int32_t *l_1562[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1562[i] = (void*)0;
                        l_1332[3][0][2] = 0x35A2B1C7L;
                        l_1564++;
                    }
                }
            }
        }
        (*l_1576) |= ((safe_unary_minus_func_int64_t_s(((*l_1574) = (safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((((*p_1692->g_1141) < p_12) & (((*l_1572) = (((((*p_1692->g_1199) = 255UL) ^ (0x6240DACCL == (&p_1692->g_114[0][3] != &l_1318[0][1][2]))) | (l_1332[4][9][0] = p_12)) , (void*)0)) == p_1692->g_1452)) && 255UL) , (*p_1692->g_1141)), (*p_1692->g_1141))), p_13))))) == l_1328);
        if ((((safe_mul_func_int16_t_s_s(p_13, p_13)) && (p_13 && ((safe_sub_func_int16_t_s_s((p_13 <= (safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((((*l_1124) = (l_1585 , (~l_1586))) < ((*p_1692->g_1141) = (safe_lshift_func_int8_t_s_s(l_1145[3], 2)))), ((*l_1591) = (((*l_1589) &= 4294967295UL) || p_12)))) != 0x204D8ACCL), 1L))), p_12)) , 0x75L))) && p_1692->g_90[1][1]))
        { /* block id: 754 */
            return p_12;
        }
        else
        { /* block id: 756 */
            int32_t l_1602[9];
            int32_t l_1607 = 1L;
            uint32_t l_1608[9] = {0x85CB02ADL,0x85CB02ADL,0x85CB02ADL,0x85CB02ADL,0x85CB02ADL,0x85CB02ADL,0x85CB02ADL,0x85CB02ADL,0x85CB02ADL};
            int32_t l_1641 = (-4L);
            int32_t l_1643[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int64_t l_1644[2];
            int32_t l_1646 = 0L;
            int i;
            for (i = 0; i < 9; i++)
                l_1602[i] = 7L;
            for (i = 0; i < 2; i++)
                l_1644[i] = 6L;
            for (p_1692->g_125 = 0; (p_1692->g_125 <= 8); p_1692->g_125 += 1)
            { /* block id: 759 */
                uint32_t l_1606 = 0x54642BFCL;
                int32_t *l_1609 = &l_1328;
                int32_t l_1635[6] = {4L,4L,4L,4L,4L,4L};
                int i;
                (*l_1609) |= ((*l_1576) = (((*l_1122) = (safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_1692->g_5, (p_13 < (0x11L | ((*p_1692->g_1199) = (p_12 > l_1602[7])))))), ((*l_1124) = (safe_unary_minus_func_int8_t_s(0x39L))))) > (safe_div_func_uint64_t_u_u((l_1607 = (((&l_1589 != (void*)0) <= (l_1606 > 1UL)) > l_1602[2])), p_1692->g_97))) >= 1UL), l_1606)) < 2UL), l_1608[3])), 0x6BL))) & 0x625B8576C50091D1L));
                for (p_1692->g_1337.f5 = 0; (p_1692->g_1337.f5 <= 0); p_1692->g_1337.f5 += 1)
                { /* block id: 768 */
                    int32_t l_1622 = 0x0F1ACE33L;
                    int32_t *l_1623 = (void*)0;
                    int32_t *l_1624[6][10][4] = {{{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3}},{{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3}},{{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3}},{{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3}},{{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3}},{{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3},{&p_1692->g_1264.f3,&l_1332[5][5][0],(void*)0,&p_1692->g_1264.f3}}};
                    uint64_t l_1640[5][6] = {{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL}};
                    int i, j, k;
                    l_1170 ^= (~(((p_1692->g_805[(p_1692->g_1337.f5 + 1)] & p_1692->g_805[(p_1692->g_1337.f5 + 1)]) && ((--p_13) != (((*p_1692->g_1199) || ((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((p_1692->g_1220[2][2][2].f4 & (p_12 && 0x077CD75B01820734L)), ((((p_1692->g_805[p_1692->g_1337.f5] = (safe_lshift_func_uint8_t_u_s((+p_12), 1))) | ((safe_lshift_func_uint8_t_u_u(0x67L, (((((void*)0 == &l_1123[p_1692->g_125][p_1692->g_1337.f5]) <= p_12) , (*l_1576)) , 0x1DL))) && (**p_1692->g_1140))) & (-1L)) <= (-1L)))), 7)) ^ l_1622), (*p_1692->g_1141))) ^ p_12) , (void*)0) != (void*)0)) >= (*l_1609)))) , l_1622));
                    for (l_1585 = 0; (l_1585 >= 0); l_1585 -= 1)
                    { /* block id: 774 */
                        int64_t *l_1632 = &p_1692->g_1264.f2;
                        int64_t **l_1631[10][2][2] = {{{&l_1632,&l_1632},{&l_1632,&l_1632}},{{&l_1632,&l_1632},{&l_1632,&l_1632}},{{&l_1632,&l_1632},{&l_1632,&l_1632}},{{&l_1632,&l_1632},{&l_1632,&l_1632}},{{&l_1632,&l_1632},{&l_1632,&l_1632}},{{&l_1632,&l_1632},{&l_1632,&l_1632}},{{&l_1632,&l_1632},{&l_1632,&l_1632}},{{&l_1632,&l_1632},{&l_1632,&l_1632}},{{&l_1632,&l_1632},{&l_1632,&l_1632}},{{&l_1632,&l_1632},{&l_1632,&l_1632}}};
                        int32_t l_1642[6] = {7L,7L,7L,7L,7L,7L};
                        int i, j, k;
                        l_1607 = (p_12 ^ ((*p_1692->g_1141) = (!0xFAD3L)));
                        (*p_1692->g_358) = (((safe_sub_func_uint32_t_u_u((((+(*p_1692->g_1199)) , ((safe_div_func_int16_t_s_s(((((void*)0 == l_1631[2][0][1]) == (l_1635[3] |= (safe_lshift_func_int8_t_s_s((247UL ^ (*l_1609)), 0)))) || (p_1692->g_97 ^= ((((**l_1153) |= ((safe_lshift_func_int8_t_s_u((p_1692->g_489 , (safe_lshift_func_uint16_t_u_s((**p_1692->g_1140), 1))), (p_13 , (*p_1692->g_1199)))) >= l_1640[2][4])) , p_12) && p_12))), p_13)) , 0x1C77FF53DDC09E45L)) == p_12), (-1L))) ^ p_13) , &l_1607);
                        ++l_1649;
                    }
                }
            }
            for (p_1692->g_1264.f6 = 0; (p_1692->g_1264.f6 <= 48); p_1692->g_1264.f6++)
            { /* block id: 787 */
                uint32_t l_1655 = 0UL;
                for (p_1692->g_252.f0 = 1; (p_1692->g_252.f0 <= 7); p_1692->g_252.f0 += 1)
                { /* block id: 790 */
                    int i;
                    (**p_1692->g_357) = &l_1170;
                }
                l_1655 = (((*l_1589) &= (safe_unary_minus_func_int64_t_s(p_12))) | p_12);
            }
        }
    }
    else
    { /* block id: 797 */
        int64_t ***l_1666 = &l_1664;
        int64_t **l_1667 = (void*)0;
        int64_t ***l_1668[3][4];
        int32_t l_1673 = 1L;
        int32_t *l_1674 = &l_1108[4][0];
        int32_t *l_1675 = (void*)0;
        int32_t *l_1676 = &p_1692->g_1052;
        int32_t *l_1677 = &p_1692->g_1264.f3;
        int32_t *l_1678 = &l_1108[1][4];
        int32_t *l_1679[6] = {&p_1692->g_1052,&p_1692->g_1052,&p_1692->g_1052,&p_1692->g_1052,&p_1692->g_1052,&p_1692->g_1052};
        int64_t l_1682 = 1L;
        uint32_t l_1684 = 4294967295UL;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
                l_1668[i][j] = &l_1667;
        }
        l_1145[2] = ((p_1692->g_1220[2][2][2].f5 ^ ((safe_add_func_uint64_t_u_u(((l_1658 = (void*)0) == &l_1659), ((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(p_13, ((void*)0 == p_1692->g_1452))), 5)) <= ((+(((*l_1666) = l_1664) == (p_1692->g_1669 = l_1667))) < (safe_mod_func_int16_t_s_s(((*l_1124) = 1L), l_1673)))))) , p_13)) || 0x7236L);
        l_1684++;
    }
    for (l_1683 = (-12); (l_1683 == (-1)); l_1683++)
    { /* block id: 807 */
        int8_t l_1689 = (-9L);
        return l_1689;
    }
    return l_1690;
}


/* ------------------------------------------ */
/* 
 * reads : p_1692->g_752 p_1692->g_805 p_1692->g_221 p_1692->g_489 p_1692->g_252.f6 p_1692->g_716 p_1692->g_86 p_1692->g_358 p_1692->g_89 p_1692->g_252.f3 p_1692->g_708 p_1692->g_252.f2 p_1692->g_90 p_1692->g_357 p_1692->g_812 p_1692->g_462 p_1692->g_794 p_1692->g_648 p_1692->g_79 p_1692->g_793 p_1692->g_108 p_1692->g_5 p_1692->g_252.f4 p_1692->g_55 p_1692->g_1049 p_1692->g_125 p_1692->g_1069 p_1692->g_87
 * writes: p_1692->g_805 p_1692->g_252.f4 p_1692->g_489 p_1692->g_89 p_1692->g_79 p_1692->g_252.f3 p_1692->g_708 p_1692->g_252.f2 p_1692->g_90 p_1692->g_812 p_1692->g_462 p_1692->g_794 p_1692->g_793 p_1692->g_633 p_1692->g_55 p_1692->g_86 p_1692->g_1052 p_1692->g_125 p_1692->g_461
 */
int8_t  func_20(int64_t  p_21, uint32_t  p_22, uint64_t  p_23, uint32_t  p_24, int8_t  p_25, struct S1 * p_1692)
{ /* block id: 448 */
    uint32_t l_885 = 4294967295UL;
    int32_t ****l_886[2];
    uint16_t *l_891[9] = {&p_1692->g_752,&p_1692->g_752,&p_1692->g_752,&p_1692->g_752,&p_1692->g_752,&p_1692->g_752,&p_1692->g_752,&p_1692->g_752,&p_1692->g_752};
    int8_t *l_894[4];
    int64_t *l_899 = (void*)0;
    int64_t *l_900 = &p_1692->g_805[0];
    int64_t *l_904 = &p_1692->g_812;
    int64_t **l_903 = &l_904;
    uint64_t l_905 = 1UL;
    uint8_t *l_906 = &p_1692->g_252.f4;
    uint32_t l_907[6][5] = {{0x86008E83L,0xD13C4051L,0xE1B83E92L,0xD13C4051L,0x86008E83L},{0x86008E83L,0xD13C4051L,0xE1B83E92L,0xD13C4051L,0x86008E83L},{0x86008E83L,0xD13C4051L,0xE1B83E92L,0xD13C4051L,0x86008E83L},{0x86008E83L,0xD13C4051L,0xE1B83E92L,0xD13C4051L,0x86008E83L},{0x86008E83L,0xD13C4051L,0xE1B83E92L,0xD13C4051L,0x86008E83L},{0x86008E83L,0xD13C4051L,0xE1B83E92L,0xD13C4051L,0x86008E83L}};
    int32_t *l_908 = (void*)0;
    int32_t *l_909 = &p_1692->g_489;
    int64_t l_917[3][3] = {{0x367707492E34664CL,0L,0x367707492E34664CL},{0x367707492E34664CL,0L,0x367707492E34664CL},{0x367707492E34664CL,0L,0x367707492E34664CL}};
    int32_t l_948[5] = {0x118BD6EAL,0x118BD6EAL,0x118BD6EAL,0x118BD6EAL,0x118BD6EAL};
    uint32_t l_1002 = 0xDAF2DFCBL;
    uint64_t **l_1036[1][10][7] = {{{&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,(void*)0,&p_1692->g_740,&p_1692->g_740},{&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,(void*)0,&p_1692->g_740,&p_1692->g_740},{&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,(void*)0,&p_1692->g_740,&p_1692->g_740},{&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,(void*)0,&p_1692->g_740,&p_1692->g_740},{&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,(void*)0,&p_1692->g_740,&p_1692->g_740},{&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,(void*)0,&p_1692->g_740,&p_1692->g_740},{&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,(void*)0,&p_1692->g_740,&p_1692->g_740},{&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,(void*)0,&p_1692->g_740,&p_1692->g_740},{&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,(void*)0,&p_1692->g_740,&p_1692->g_740},{&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,&p_1692->g_740,(void*)0,&p_1692->g_740,&p_1692->g_740}}};
    uint64_t ***l_1035 = &l_1036[0][4][4];
    int16_t l_1081 = 0x4E40L;
    int16_t *l_1099 = &p_1692->g_793[0][1][1];
    int16_t **l_1098 = &l_1099;
    int16_t ***l_1097[8][1][5] = {{{(void*)0,&l_1098,&l_1098,&l_1098,&l_1098}},{{(void*)0,&l_1098,&l_1098,&l_1098,&l_1098}},{{(void*)0,&l_1098,&l_1098,&l_1098,&l_1098}},{{(void*)0,&l_1098,&l_1098,&l_1098,&l_1098}},{{(void*)0,&l_1098,&l_1098,&l_1098,&l_1098}},{{(void*)0,&l_1098,&l_1098,&l_1098,&l_1098}},{{(void*)0,&l_1098,&l_1098,&l_1098,&l_1098}},{{(void*)0,&l_1098,&l_1098,&l_1098,&l_1098}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_886[i] = &p_1692->g_357;
    for (i = 0; i < 4; i++)
        l_894[i] = &p_1692->g_86[4];
    if ((!(l_885 > ((((l_886[1] == &p_1692->g_357) && (safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(4294967295UL, ((0xA5L && (p_25 = (l_891[5] != (((((safe_div_func_uint16_t_u_u((l_894[3] == (((*l_909) = (safe_mod_func_int16_t_s_s(((!((safe_add_func_uint8_t_u_u(((*l_906) = (((((*l_900) ^= p_1692->g_752) <= (safe_lshift_func_uint16_t_u_u(((((*l_903) = l_899) != &p_1692->g_125) , p_21), 11))) , p_21) , l_905)), p_1692->g_221)) & l_907[5][3])) || p_1692->g_489), p_1692->g_252.f6))) , &p_25)), 0xDBE1L)) & 0x177D4749636DF331L) & p_1692->g_252.f6) ^ p_1692->g_716[0][3]) , (void*)0)))) == p_1692->g_86[7]))), p_24))) > p_21) && p_25))))
    { /* block id: 454 */
        int32_t *l_910 = &p_1692->g_79;
        (*p_1692->g_358) = l_910;
        (**p_1692->g_358) = p_23;
    }
    else
    { /* block id: 457 */
        int64_t l_915 = 0x3FF598C4B413A771L;
        int32_t *l_923 = &p_1692->g_489;
        int32_t l_924[5] = {0x565812ECL,0x565812ECL,0x565812ECL,0x565812ECL,0x565812ECL};
        uint32_t l_927[7];
        int32_t l_945 = 0x641D8FBBL;
        uint8_t l_998 = 1UL;
        uint32_t l_1014 = 0x8A2C3EDAL;
        uint16_t l_1087 = 6UL;
        int16_t l_1092 = 1L;
        uint32_t **l_1095 = &p_1692->g_461[8];
        int32_t l_1100[9][5][5] = {{{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)}},{{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)}},{{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)}},{{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)}},{{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)}},{{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)}},{{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)}},{{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)}},{{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)},{1L,0x3844F199L,0x6A7AD290L,1L,(-1L)}}};
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_927[i] = 1UL;
        for (p_1692->g_252.f3 = (-28); (p_1692->g_252.f3 < 13); p_1692->g_252.f3 = safe_add_func_uint8_t_u_u(p_1692->g_252.f3, 1))
        { /* block id: 460 */
            int8_t l_916 = 0x7DL;
            for (p_1692->g_708 = 0; (p_1692->g_708 != 24); p_1692->g_708 = safe_add_func_uint16_t_u_u(p_1692->g_708, 2))
            { /* block id: 463 */
                uint8_t l_918 = 0xCBL;
                for (p_1692->g_252.f2 = 1; (p_1692->g_252.f2 >= 0); p_1692->g_252.f2 -= 1)
                { /* block id: 466 */
                    (**p_1692->g_358) |= (-1L);
                    l_918++;
                    (*p_1692->g_358) = (**p_1692->g_357);
                }
            }
            if (p_22)
                continue;
            for (p_1692->g_812 = 25; (p_1692->g_812 < (-27)); --p_1692->g_812)
            { /* block id: 475 */
                (***p_1692->g_357) = (l_924[3] |= (&p_1692->g_489 != l_923));
                return p_25;
            }
            for (p_1692->g_462 = 5; (p_1692->g_462 == 37); p_1692->g_462 = safe_add_func_int16_t_s_s(p_1692->g_462, 3))
            { /* block id: 482 */
                return l_927[4];
            }
        }
lbl_1005:
        for (l_915 = 0; (l_915 > 8); l_915++)
        { /* block id: 488 */
            uint32_t l_930 = 0x9CA6CE74L;
            (**p_1692->g_357) = (void*)0;
            l_930++;
        }
        for (p_1692->g_794 = 0; (p_1692->g_794 <= 6); p_1692->g_794 += 1)
        { /* block id: 494 */
            int16_t *l_944 = &p_1692->g_793[3][1][2];
            int32_t l_946 = 0L;
            int32_t l_947[8] = {1L,2L,1L,1L,2L,1L,1L,2L};
            uint8_t l_949[7] = {249UL,1UL,249UL,249UL,1UL,249UL,249UL};
            int i;
            l_945 &= ((safe_lshift_func_uint8_t_u_s(l_927[p_1692->g_794], (safe_lshift_func_uint8_t_u_u(p_23, 5)))) < (((safe_unary_minus_func_int16_t_s(l_927[p_1692->g_794])) | ((((0xD599L >= ((*l_944) |= ((-1L) != (l_924[0] = (safe_mod_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(0UL, ((p_21 = ((+(~p_1692->g_805[1])) || p_1692->g_489)) && p_1692->g_648))) , p_1692->g_79), p_1692->g_752)))))) ^ p_22) , 0x007D3252508848C9L) , 0xB5L)) > l_927[p_1692->g_794]));
            l_949[3]++;
            for (p_1692->g_462 = 0; (p_1692->g_462 <= 2); p_1692->g_462 += 1)
            { /* block id: 502 */
                uint32_t *l_964 = (void*)0;
                uint32_t *l_965 = &p_1692->g_633;
                uint64_t **l_991 = &p_1692->g_740;
                int32_t l_999 = 0x1B04E6E5L;
                int32_t l_1001 = 0x2CFC1F18L;
                int32_t l_1007 = 0x099BBBA0L;
                int32_t l_1008[10][8] = {{(-5L),(-3L),0x7834DBD2L,0x230628D0L,(-5L),0x16ED8681L,(-3L),(-6L)},{(-5L),(-3L),0x7834DBD2L,0x230628D0L,(-5L),0x16ED8681L,(-3L),(-6L)},{(-5L),(-3L),0x7834DBD2L,0x230628D0L,(-5L),0x16ED8681L,(-3L),(-6L)},{(-5L),(-3L),0x7834DBD2L,0x230628D0L,(-5L),0x16ED8681L,(-3L),(-6L)},{(-5L),(-3L),0x7834DBD2L,0x230628D0L,(-5L),0x16ED8681L,(-3L),(-6L)},{(-5L),(-3L),0x7834DBD2L,0x230628D0L,(-5L),0x16ED8681L,(-3L),(-6L)},{(-5L),(-3L),0x7834DBD2L,0x230628D0L,(-5L),0x16ED8681L,(-3L),(-6L)},{(-5L),(-3L),0x7834DBD2L,0x230628D0L,(-5L),0x16ED8681L,(-3L),(-6L)},{(-5L),(-3L),0x7834DBD2L,0x230628D0L,(-5L),0x16ED8681L,(-3L),(-6L)},{(-5L),(-3L),0x7834DBD2L,0x230628D0L,(-5L),0x16ED8681L,(-3L),(-6L)}};
                uint16_t l_1017 = 0xD9D1L;
                int32_t **l_1047 = &p_1692->g_89;
                uint64_t *l_1075 = &p_1692->g_55;
                int i, j;
                if ((safe_div_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((p_1692->g_108[(p_1692->g_462 + 1)][p_1692->g_462] , p_1692->g_108[(p_1692->g_462 + 3)][p_1692->g_462]), (safe_lshift_func_uint16_t_u_u(l_949[6], 14)))), l_924[4])) > (-2L)) ^ ((*l_944) |= (((*l_906) = (safe_add_func_uint32_t_u_u(((*l_965) = (safe_rshift_func_int8_t_s_s(((p_25 = 0x78L) != 8UL), 6))), p_24))) != (safe_mul_func_int16_t_s_s(l_946, p_1692->g_5))))), l_945)))
                { /* block id: 507 */
                    int8_t *l_980 = &p_1692->g_86[0];
                    int32_t l_985 = 0L;
                    int32_t l_1009 = 1L;
                    int32_t l_1010 = (-2L);
                    int32_t l_1011 = 0x7732F7A9L;
                    int32_t l_1012 = 1L;
                    int32_t l_1013[3];
                    int32_t ***l_1024[7][3][3] = {{{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0}},{{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0}},{{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0}},{{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0}},{{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0}},{{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0}},{{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0},{&p_1692->g_358,&p_1692->g_358,(void*)0}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1013[i] = (-9L);
                    if ((safe_add_func_int16_t_s_s(((p_1692->g_252.f3 >= ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((&p_1692->g_86[2] != l_980), 6)), (safe_mod_func_uint64_t_u_u(p_24, (safe_lshift_func_int8_t_s_u(7L, (p_24 , (((l_927[p_1692->g_794] ^ p_21) >= p_1692->g_648) > l_985)))))))), p_1692->g_90[1][1])) > p_21), l_946)), 0xFAL)) , l_924[3])) ^ p_1692->g_252.f4), p_1692->g_108[(p_1692->g_462 + 1)][p_1692->g_462])))
                    { /* block id: 508 */
                        int32_t l_986 = 0L;
                        if (l_986)
                            break;
                        (**p_1692->g_357) = &l_924[2];
                        l_1002--;
                        return p_1692->g_108[(p_1692->g_462 + 1)][p_1692->g_462];
                    }
                    else
                    { /* block id: 514 */
                        int32_t l_1006[10] = {(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L)};
                        int i;
                        if (p_24)
                            goto lbl_1005;
                        ++l_1014;
                        if (l_1017)
                            continue;
                    }
                    for (p_1692->g_55 = 22; (p_1692->g_55 < 10); --p_1692->g_55)
                    { /* block id: 521 */
                        uint64_t ***l_1037[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t l_1044 = (-3L);
                        int32_t l_1051 = 0x4BDC8770L;
                        int i;
                        l_946 |= (safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((~(((l_1024[0][1][2] == (void*)0) | (safe_rshift_func_int8_t_s_s(p_1692->g_5, 7))) | (p_23 <= (safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint8_t_u((((((safe_mod_func_uint16_t_u_u(4UL, (safe_unary_minus_func_int32_t_s((0x79CBL > ((safe_rshift_func_uint16_t_u_u((l_1035 == l_1037[0]), (l_949[1] & 0x053DE92DE1A20E31L))) | 1L)))))) && p_1692->g_716[1][2]) >= (-1L)) && l_927[0]) , p_1692->g_5))) <= p_1692->g_648), l_927[4]))))), l_945)), p_1692->g_716[0][1]));
                        p_1692->g_1052 = (safe_div_func_int32_t_s_s((((*l_980) = (safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(65529UL, 13)), (l_1051 |= ((p_23 |= (((((((l_1044 <= (((safe_lshift_func_uint16_t_u_s((((*p_1692->g_357) != (l_1047 = l_1047)) | 0x058CL), (safe_unary_minus_func_uint32_t_u((((void*)0 != p_1692->g_1049) , p_21))))) < (-5L)) & l_1001)) , l_946) <= p_22) ^ p_21) , 0L) && l_946) , p_21)) ^ 1L))))) != p_22), l_927[5]));
                        l_1051 |= p_24;
                        l_1051 = p_24;
                    }
                    for (l_945 = 18; (l_945 > (-9)); l_945 = safe_sub_func_uint64_t_u_u(l_945, 4))
                    { /* block id: 533 */
                        (**p_1692->g_357) = (*p_1692->g_358);
                    }
                    for (p_1692->g_125 = 2; (p_1692->g_125 <= 7); p_1692->g_125 += 1)
                    { /* block id: 538 */
                        uint16_t **l_1057 = &l_891[3];
                        int32_t l_1070 = 0x447C4012L;
                        l_947[2] ^= (-1L);
                        l_1070 = (safe_lshift_func_uint16_t_u_u(((l_944 != ((*l_1057) = l_944)) == (safe_unary_minus_func_uint64_t_u((safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((((*l_906)++) >= 0L), p_23)) <= (((((p_24 , 1UL) && (safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s(p_25, (p_21 , p_22))), 0L))) , p_22) < (-8L)) , p_23)), p_1692->g_1069))))), p_24));
                    }
                }
                else
                { /* block id: 544 */
                    uint64_t l_1082 = 0x5C2ADC6EA5286AF4L;
                    for (p_1692->g_812 = 0; (p_1692->g_812 <= 9); p_1692->g_812 += 1)
                    { /* block id: 547 */
                        int16_t l_1085 = 1L;
                        int32_t l_1086 = 0x7DA1777FL;
                        int i, j;
                        l_945 ^= (l_1008[9][4] = ((l_907[(p_1692->g_462 + 1)][(p_1692->g_462 + 2)] || p_1692->g_648) & ((0x0141D429L != (safe_lshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s(p_1692->g_793[2][0][0], 0x3DL)) , l_1075) != (void*)0), ((safe_unary_minus_func_uint64_t_u((0x24D1L >= (safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((p_23 && l_1081), p_22)), l_927[p_1692->g_794]))))) , p_22)))) < p_1692->g_252.f6)));
                        ++l_1082;
                        ++l_1087;
                    }
                }
                return p_21;
            }
        }
        p_1692->g_90[2][1] &= (!((safe_mul_func_uint16_t_u_u((((l_1092 > ((safe_mul_func_uint8_t_u_u(p_24, 0x50L)) , ((l_1087 && (((*l_1095) = &l_1002) != ((safe_unary_minus_func_int32_t_s(p_23)) , &l_1002))) == (0x19E2133EL < (l_924[2] = ((((((*l_903) == (void*)0) , l_1097[6][0][1]) == &l_1098) > l_1100[5][1][4]) <= 1UL)))))) & 4294967295UL) ^ (-1L)), 0xA318L)) , p_24));
    }
    return p_1692->g_87;
}


/* ------------------------------------------ */
/* 
 * reads : p_1692->g_662 p_1692->g_358 p_1692->g_89 p_1692->g_357 p_1692->g_5 p_1692->g_86 p_1692->g_793 p_1692->g_648 p_1692->g_805 p_1692->g_252.f5 p_1692->g_461 p_1692->g_252.f4 p_1692->g_79 p_1692->g_221 p_1692->g_90 p_1692->g_55 p_1692->g_740 p_1692->g_108 p_1692->g_252.f3
 * writes: p_1692->g_662 p_1692->g_89 p_1692->g_5 p_1692->g_90 p_1692->g_812 p_1692->g_461 p_1692->g_793 p_1692->g_221 p_1692->g_87 p_1692->g_252.f3 p_1692->g_740 p_1692->g_531
 */
int64_t  func_26(uint16_t  p_27, int64_t  p_28, struct S1 * p_1692)
{ /* block id: 415 */
    uint64_t l_820 = 0xD599C80C8C7D5273L;
    uint32_t **l_828 = &p_1692->g_461[8];
    uint64_t **l_878[2];
    uint64_t *l_879 = &p_1692->g_531;
    int32_t **l_880[5] = {&p_1692->g_89,&p_1692->g_89,&p_1692->g_89,&p_1692->g_89,&p_1692->g_89};
    int16_t l_881 = 2L;
    int32_t l_882[2];
    int32_t *l_883 = (void*)0;
    int32_t *l_884 = &p_1692->g_252.f3;
    int i;
    for (i = 0; i < 2; i++)
        l_878[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_882[i] = (-4L);
    for (p_1692->g_662 = (-9); (p_1692->g_662 != 16); ++p_1692->g_662)
    { /* block id: 418 */
        int32_t l_815 = (-8L);
        int32_t l_816 = 0x64B5D0ECL;
        int32_t l_817 = (-2L);
        int32_t l_819 = (-1L);
        uint32_t l_831 = 0xA1ACE755L;
        uint8_t l_846 = 251UL;
        uint32_t *l_854 = &p_1692->g_462;
        uint64_t l_857 = 18446744073709551615UL;
        uint8_t l_868 = 0x9FL;
        int32_t l_875 = 0L;
        int32_t *l_876 = (void*)0;
        int32_t *l_877 = &p_1692->g_252.f3;
        (**p_1692->g_357) = (*p_1692->g_358);
        for (p_1692->g_5 = 0; (p_1692->g_5 <= 3); p_1692->g_5 += 1)
        { /* block id: 422 */
            int32_t *l_818[1][10][6] = {{{&p_1692->g_90[1][1],&p_1692->g_90[2][0],&p_1692->g_90[1][1],&l_816,&p_1692->g_90[2][0],&l_816},{&p_1692->g_90[1][1],&p_1692->g_90[2][0],&p_1692->g_90[1][1],&l_816,&p_1692->g_90[2][0],&l_816},{&p_1692->g_90[1][1],&p_1692->g_90[2][0],&p_1692->g_90[1][1],&l_816,&p_1692->g_90[2][0],&l_816},{&p_1692->g_90[1][1],&p_1692->g_90[2][0],&p_1692->g_90[1][1],&l_816,&p_1692->g_90[2][0],&l_816},{&p_1692->g_90[1][1],&p_1692->g_90[2][0],&p_1692->g_90[1][1],&l_816,&p_1692->g_90[2][0],&l_816},{&p_1692->g_90[1][1],&p_1692->g_90[2][0],&p_1692->g_90[1][1],&l_816,&p_1692->g_90[2][0],&l_816},{&p_1692->g_90[1][1],&p_1692->g_90[2][0],&p_1692->g_90[1][1],&l_816,&p_1692->g_90[2][0],&l_816},{&p_1692->g_90[1][1],&p_1692->g_90[2][0],&p_1692->g_90[1][1],&l_816,&p_1692->g_90[2][0],&l_816},{&p_1692->g_90[1][1],&p_1692->g_90[2][0],&p_1692->g_90[1][1],&l_816,&p_1692->g_90[2][0],&l_816},{&p_1692->g_90[1][1],&p_1692->g_90[2][0],&p_1692->g_90[1][1],&l_816,&p_1692->g_90[2][0],&l_816}}};
            int i, j, k;
            --l_820;
            (**p_1692->g_358) = ((((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(p_1692->g_86[2], 6)) , ((safe_unary_minus_func_int8_t_s((p_1692->g_793[5][0][2] <= (p_1692->g_648 , (~((((void*)0 != l_828) , (p_28 , (safe_add_func_uint8_t_u_u(p_1692->g_805[1], p_27)))) >= l_820)))))) <= 0UL)), 3UL)) & p_1692->g_662) > p_1692->g_252.f5) < 0L);
            l_831--;
            for (p_1692->g_812 = 3; (p_1692->g_812 >= 0); p_1692->g_812 -= 1)
            { /* block id: 428 */
                int16_t *l_847 = (void*)0;
                int16_t *l_848 = &p_1692->g_793[0][0][0];
                uint32_t l_849[1];
                uint8_t *l_852 = (void*)0;
                uint8_t *l_853 = &p_1692->g_221;
                int i;
                for (i = 0; i < 1; i++)
                    l_849[i] = 4294967291UL;
                (**p_1692->g_358) = ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((*l_828) = p_1692->g_461[(p_1692->g_5 + 1)]) != (l_854 = func_58((safe_sub_func_int8_t_s_s(p_27, (safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((0x6222L < ((*l_848) = (((**p_1692->g_358) = l_846) >= p_28))), 6)), (l_849[0] , p_1692->g_252.f4))), (safe_mul_func_uint8_t_u_u(((*l_853) |= ((l_820 , (l_831 < 1L)) , p_1692->g_79)), p_27)))))), &l_820, (*p_1692->g_358), p_28, p_1692))), 7L)), (-7L))) , l_849[0]);
            }
        }
        (***p_1692->g_357) |= (l_819 <= (safe_sub_func_int32_t_s_s(l_857, 0x4CF51C21L)));
        (*l_877) &= ((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(l_831, ((p_1692->g_805[1] != (0L ^ (safe_rshift_func_uint8_t_u_u((l_875 = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((p_27 && l_819) | (((**p_1692->g_358) >= l_868) < ((safe_add_func_uint8_t_u_u((((-1L) >= ((((safe_rshift_func_uint8_t_u_u(l_817, 6)) , 0x8BE924B614B034F1L) == p_1692->g_86[6]) < 246UL)) || (*p_1692->g_740)), 0x16L)) ^ (*p_1692->g_89)))), l_816)), p_1692->g_252.f4)) | 0x2EL)), p_1692->g_79)))) , p_27))), p_28)) <= (-7L));
    }
    (*l_884) |= (l_882[0] |= ((**p_1692->g_358) &= (((*l_879) = (((p_1692->g_740 = &l_820) != l_879) ^ (((p_27 , (*p_1692->g_357)) != (l_880[0] = (void*)0)) && (p_27 <= ((**p_1692->g_357) != (**p_1692->g_357)))))) ^ l_881)));
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_1692->g_357 p_1692->g_358 p_1692->g_252.f3 p_1692->g_89 p_1692->g_86 p_1692->g_97 p_1692->g_252.f0 p_1692->g_90 p_1692->g_5
 * writes: p_1692->g_89 p_1692->g_90 p_1692->g_252.f3 p_1692->g_252.f0 p_1692->g_5 p_1692->g_125 p_1692->g_252.f5
 */
int64_t  func_29(int64_t  p_30, uint64_t  p_31, uint32_t  p_32, uint64_t  p_33, uint32_t  p_34, struct S1 * p_1692)
{ /* block id: 308 */
    int32_t *l_660 = &p_1692->g_90[1][1];
    int64_t *l_661 = &p_1692->g_662;
    int64_t **l_663 = (void*)0;
    int64_t **l_664 = (void*)0;
    int64_t **l_665 = &l_661;
    int64_t *l_669 = &p_1692->g_662;
    int64_t **l_668 = &l_669;
    int64_t **l_670 = (void*)0;
    int64_t *l_672[2][2] = {{&p_1692->g_662,&p_1692->g_662},{&p_1692->g_662,&p_1692->g_662}};
    int64_t **l_671 = &l_672[1][0];
    int32_t *l_673 = &p_1692->g_252.f3;
    uint64_t l_715 = 1UL;
    int32_t l_743 = 8L;
    int32_t l_744 = 0x68B169BEL;
    int32_t l_745 = (-1L);
    int32_t l_747 = 0x2C5FEFE1L;
    int32_t l_751 = 0x0E008B07L;
    int32_t ***l_795 = &p_1692->g_358;
    int64_t l_797 = 0x14A4DB95FD8EB3DEL;
    int32_t l_802 = 2L;
    int32_t l_803 = (-1L);
    int32_t l_806[8];
    int i, j;
    for (i = 0; i < 8; i++)
        l_806[i] = 0x46106614L;
lbl_678:
    (**p_1692->g_357) = (void*)0;
    (**p_1692->g_357) = l_660;
lbl_681:
    (*l_673) = ((**p_1692->g_358) = ((((*l_665) = l_661) == &p_1692->g_662) & ((safe_rshift_func_uint8_t_u_s((((*l_668) = &p_1692->g_662) == ((*l_671) = &p_1692->g_662)), 5)) , p_1692->g_252.f3)));
    if ((safe_mod_func_int32_t_s_s(((**p_1692->g_358) = (((-2L) != (p_32 < p_1692->g_86[6])) || p_1692->g_97)), p_31)))
    { /* block id: 317 */
        int32_t l_689[8][5][2] = {{{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L}},{{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L}},{{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L}},{{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L}},{{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L}},{{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L}},{{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L}},{{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L},{0x685B5015L,1L}}};
        int16_t *l_771 = &p_1692->g_97;
        uint8_t l_789 = 0UL;
        int64_t l_804[9];
        uint16_t l_807 = 1UL;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_804[i] = 0L;
        (**p_1692->g_357) = l_660;
        for (p_1692->g_252.f0 = 17; (p_1692->g_252.f0 < (-16)); p_1692->g_252.f0--)
        { /* block id: 321 */
            if ((*l_660))
                break;
            if (p_1692->g_252.f3)
                goto lbl_678;
            if (p_33)
                break;
        }
        for (p_1692->g_5 = 9; (p_1692->g_5 != (-29)); p_1692->g_5 = safe_sub_func_uint16_t_u_u(p_1692->g_5, 7))
        { /* block id: 328 */
            int32_t l_688 = (-1L);
            uint64_t *l_692 = &p_1692->g_55;
            int32_t l_748 = 0x6BA03E5BL;
            int32_t l_750 = 0x659FBA99L;
            int16_t *l_772 = &p_1692->g_97;
            int32_t l_773 = 0x29565E50L;
            int32_t ***l_796 = &p_1692->g_358;
            int32_t *l_798 = &p_1692->g_90[1][1];
            int32_t *l_799 = &l_744;
            int32_t *l_800 = &l_744;
            int32_t *l_801[1][9][3] = {{{&l_748,(void*)0,&l_689[6][2][0]},{&l_748,(void*)0,&l_689[6][2][0]},{&l_748,(void*)0,&l_689[6][2][0]},{&l_748,(void*)0,&l_689[6][2][0]},{&l_748,(void*)0,&l_689[6][2][0]},{&l_748,(void*)0,&l_689[6][2][0]},{&l_748,(void*)0,&l_689[6][2][0]},{&l_748,(void*)0,&l_689[6][2][0]},{&l_748,(void*)0,&l_689[6][2][0]}}};
            int i, j, k;
            if (p_1692->g_252.f3)
                goto lbl_681;
            for (p_1692->g_125 = (-2); (p_1692->g_125 != 27); ++p_1692->g_125)
            { /* block id: 332 */
                uint32_t l_684 = 0x575A2302L;
                ++l_684;
                for (p_1692->g_252.f5 = 0; (p_1692->g_252.f5 <= 1); p_1692->g_252.f5 += 1)
                { /* block id: 336 */
                    int i, j;
                    (1 + 1);
                }
            }
        }
    }
    else
    { /* block id: 409 */
        int32_t l_810 = 0x7F5CB994L;
        (*p_1692->g_358) = (*p_1692->g_358);
        l_810 = (***p_1692->g_357);
    }
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_1692->g_531 p_1692->g_358 p_1692->g_89 p_1692->g_90 p_1692->g_357 p_1692->g_79 p_1692->g_461 p_1692->g_252.f5 p_1692->g_252.f0 p_1692->g_633 p_1692->g_252.f3 p_1692->g_97 p_1692->g_648 p_1692->g_252.f2
 * writes: p_1692->g_531 p_1692->g_90 p_1692->g_79 p_1692->g_89 p_1692->g_252.f0 p_1692->g_633 p_1692->g_97 p_1692->g_252.f3 p_1692->g_87 p_1692->g_648
 */
uint8_t  func_35(int32_t  p_36, uint32_t  p_37, uint32_t  p_38, struct S1 * p_1692)
{ /* block id: 261 */
    int64_t l_625 = 0x3DD97F8BD3363C11L;
    int32_t l_626 = 1L;
    int32_t l_627 = 0x58735615L;
    int32_t l_628 = 0x13F783A7L;
    int32_t l_629 = 0x0DA335ADL;
    int32_t l_630 = 0x071C6177L;
    int32_t l_631 = 0x11A4CD33L;
    int32_t l_632[3][6][3] = {{{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L}},{{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L}},{{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L},{(-1L),0x77428C85L,0L}}};
    int i, j, k;
    for (p_1692->g_531 = 0; (p_1692->g_531 <= 3); p_1692->g_531 += 1)
    { /* block id: 264 */
        int32_t *l_619 = &p_1692->g_79;
        int i;
        (*l_619) ^= ((***p_1692->g_357) = (**p_1692->g_358));
        (**p_1692->g_357) = p_1692->g_461[(p_1692->g_531 + 2)];
        return p_1692->g_252.f5;
    }
    for (p_1692->g_252.f0 = (-3); (p_1692->g_252.f0 < 25); p_1692->g_252.f0 = safe_add_func_uint8_t_u_u(p_1692->g_252.f0, 2))
    { /* block id: 272 */
        int32_t *l_622 = &p_1692->g_252.f3;
        int32_t *l_623 = &p_1692->g_90[1][1];
        int32_t *l_624[2];
        int i;
        for (i = 0; i < 2; i++)
            l_624[i] = (void*)0;
        --p_1692->g_633;
        for (p_1692->g_531 = 0; (p_1692->g_531 != 56); p_1692->g_531++)
        { /* block id: 276 */
            uint64_t l_638 = 18446744073709551615UL;
            int16_t *l_645 = &p_1692->g_97;
            if ((**p_1692->g_358))
                break;
            (*p_1692->g_89) = l_638;
            (*l_622) = (((p_38 ^ (((safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((p_1692->g_79 | p_38) == (l_638 >= ((0x32L < (p_36 && ((p_1692->g_531 > ((*l_645) = p_1692->g_252.f3)) < 0x42D3CFC43ED713D5L))) == p_38))) & 0x862A6D23L), 255UL)), 65534UL)) , (void*)0) != &p_1692->g_87)) ^ 0x66L) ^ 1L);
            for (l_638 = 0; (l_638 <= 2); l_638 += 1)
            { /* block id: 283 */
                for (p_1692->g_97 = 0; (p_1692->g_97 <= 2); p_1692->g_97 += 1)
                { /* block id: 286 */
                    uint16_t *l_646 = &p_1692->g_87;
                    uint16_t *l_647 = &p_1692->g_648;
                    int i, j, k;
                    (*l_622) = (l_632[p_1692->g_97][(p_1692->g_97 + 3)][l_638] = (l_638 > ((*l_647) = ((*l_646) = (~p_36)))));
                    for (l_628 = 0; (l_628 != (-7)); l_628--)
                    { /* block id: 293 */
                        uint64_t l_651 = 18446744073709551614UL;
                        if (p_36)
                            break;
                        l_651 |= (*p_1692->g_89);
                    }
                    (*l_622) = ((**p_1692->g_358) = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_647)--), 2)), p_1692->g_252.f2)));
                }
                if ((***p_1692->g_357))
                    continue;
            }
        }
    }
    (**p_1692->g_357) = (**p_1692->g_357);
    return l_630;
}


/* ------------------------------------------ */
/* 
 * reads : p_1692->g_5 p_1692->g_55 p_1692->g_79 p_1692->g_87 p_1692->g_89 p_1692->g_90 p_1692->g_86 p_1692->g_108 p_1692->g_97 p_1692->g_114 p_1692->g_358 p_1692->g_489 p_1692->g_252.f3
 * writes: p_1692->g_55 p_1692->g_86 p_1692->g_79 p_1692->g_87 p_1692->g_90 p_1692->g_108 p_1692->g_97 p_1692->g_114 p_1692->g_89 p_1692->g_252.f3
 */
int8_t  func_43(int16_t  p_44, int32_t  p_45, int32_t  p_46, struct S1 * p_1692)
{ /* block id: 5 */
    uint64_t *l_54 = &p_1692->g_55;
    int32_t l_56[1];
    int32_t l_57 = 0x10F40BF6L;
    int64_t l_143 = 0x020A6BAE54040A6DL;
    int32_t l_175 = 0x257C2BB7L;
    uint64_t l_290 = 18446744073709551615UL;
    uint32_t *l_314[7] = {&p_1692->g_231,&p_1692->g_231,&p_1692->g_231,&p_1692->g_231,&p_1692->g_231,&p_1692->g_231,&p_1692->g_231};
    uint16_t *l_334 = &p_1692->g_87;
    int8_t *l_408 = &p_1692->g_5;
    int32_t l_493 = 0x15DB2495L;
    int64_t *l_598 = &l_143;
    int32_t *l_605 = &p_1692->g_252.f3;
    int32_t *l_606 = (void*)0;
    int32_t *l_607 = (void*)0;
    int32_t *l_608 = &l_56[0];
    int32_t *l_609 = &l_493;
    int32_t *l_610 = (void*)0;
    int32_t *l_611 = &p_1692->g_79;
    int32_t *l_612[4][2] = {{&p_1692->g_79,(void*)0},{&p_1692->g_79,(void*)0},{&p_1692->g_79,(void*)0},{&p_1692->g_79,(void*)0}};
    int32_t l_613 = 0x6E3B461CL;
    int8_t l_614[2][6] = {{0x60L,9L,0x05L,9L,0x60L,0x60L},{0x60L,9L,0x05L,9L,0x60L,0x60L}};
    uint32_t l_615 = 4294967295UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_56[i] = 0x11F32AFCL;
    if (((p_1692->g_5 == (((func_47((func_50((((l_56[0] = ((*l_54) = (safe_lshift_func_uint16_t_u_u(p_1692->g_5, (0x7967268F57F54AB1L >= 0x9D62BFEED1B4B1C2L))))) , p_1692->g_5) == l_57), p_1692) , ((l_54 == &p_1692->g_55) | l_56[0])), l_57, p_1692) , 0x65L) == 0UL) || p_44)) || l_56[0]))
    { /* block id: 32 */
        volatile uint64_t ***l_117 = &p_1692->g_114[1][2];
        (*l_117) = p_1692->g_114[3][0];
        p_1692->g_89 = &p_1692->g_90[1][1];
    }
    else
    { /* block id: 35 */
        uint32_t l_129 = 5UL;
        int8_t l_140 = 1L;
        int32_t l_153 = 0x029CE55DL;
        int32_t l_154 = 5L;
        int32_t l_158 = (-7L);
        int32_t l_160 = (-3L);
        int32_t l_165 = 0x7B48A0A5L;
        int32_t l_224[7][4] = {{0x365FE2B2L,1L,0x365FE2B2L,0x365FE2B2L},{0x365FE2B2L,1L,0x365FE2B2L,0x365FE2B2L},{0x365FE2B2L,1L,0x365FE2B2L,0x365FE2B2L},{0x365FE2B2L,1L,0x365FE2B2L,0x365FE2B2L},{0x365FE2B2L,1L,0x365FE2B2L,0x365FE2B2L},{0x365FE2B2L,1L,0x365FE2B2L,0x365FE2B2L},{0x365FE2B2L,1L,0x365FE2B2L,0x365FE2B2L}};
        int16_t *l_249 = &p_1692->g_97;
        int16_t **l_248 = &l_249;
        int16_t l_256 = 0L;
        uint16_t l_281 = 0xA2F7L;
        uint32_t l_312 = 1UL;
        int64_t *l_376 = (void*)0;
        int i, j;
        for (p_1692->g_79 = 0; (p_1692->g_79 >= 0); p_1692->g_79 -= 1)
        { /* block id: 38 */
            int64_t *l_124[5] = {&p_1692->g_125,&p_1692->g_125,&p_1692->g_125,&p_1692->g_125,&p_1692->g_125};
            int32_t l_126 = 0x5C891F83L;
            int32_t l_157 = 0x6EF5A3A1L;
            int32_t l_161 = 0x41C12841L;
            uint32_t l_169 = 0x33D5E54CL;
            uint8_t l_190 = 0x6EL;
            uint64_t **l_199 = &l_54;
            int32_t l_218[3][8][3] = {{{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L}},{{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L}},{{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L}}};
            int8_t l_219 = 1L;
            uint64_t l_260 = 18446744073709551615UL;
            uint16_t l_373 = 1UL;
            int i, j, k;
            (1 + 1);
        }
    }
    for (l_290 = 0; (l_290 >= 34); l_290 = safe_add_func_int32_t_s_s(l_290, 7))
    { /* block id: 179 */
        int64_t l_437 = (-8L);
        uint32_t **l_463[2];
        int32_t l_486 = 1L;
        int32_t l_488 = 0L;
        int32_t l_490 = 0L;
        int32_t l_491 = 0L;
        int32_t l_492[5] = {0x7BA3FA40L,0x7BA3FA40L,0x7BA3FA40L,0x7BA3FA40L,0x7BA3FA40L};
        int i;
        for (i = 0; i < 2; i++)
            l_463[i] = &p_1692->g_461[8];
        (1 + 1);
    }
    (*l_605) ^= (safe_rshift_func_uint16_t_u_u((((l_56[0] = ((0x187E695375E05E6EL == ((*l_598) ^= 6L)) >= (safe_add_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((**p_1692->g_358), (p_1692->g_489 , l_57))) >= (0L < ((safe_mod_func_uint32_t_u_u((p_1692->g_108[4][0] , 0x96CF607EL), p_45)) < l_56[0]))) <= p_1692->g_5), 255UL)))) >= 0x8682778DL) , 6UL), p_44));
    l_615++;
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_1692->g_89 p_1692->g_90 p_1692->g_108 p_1692->g_97 p_1692->g_87
 * writes: p_1692->g_90 p_1692->g_108 p_1692->g_97
 */
int64_t  func_47(uint64_t  p_48, int32_t  p_49, struct S1 * p_1692)
{ /* block id: 22 */
    int32_t *l_103 = &p_1692->g_79;
    int32_t *l_104 = &p_1692->g_90[1][1];
    int32_t *l_105[4][1] = {{&p_1692->g_90[1][1]},{&p_1692->g_90[1][1]},{&p_1692->g_90[1][1]},{&p_1692->g_90[1][1]}};
    int8_t l_106[1];
    int32_t l_107 = (-8L);
    int i, j;
    for (i = 0; i < 1; i++)
        l_106[i] = 4L;
    (*p_1692->g_89) &= p_49;
    ++p_1692->g_108[7][0];
    (*p_1692->g_89) = (*p_1692->g_89);
    for (p_1692->g_97 = 5; (p_1692->g_97 <= 11); p_1692->g_97 = safe_add_func_uint64_t_u_u(p_1692->g_97, 6))
    { /* block id: 28 */
        int32_t **l_113 = &l_104;
        (*l_113) = &p_1692->g_79;
    }
    return p_1692->g_87;
}


/* ------------------------------------------ */
/* 
 * reads : p_1692->g_55 p_1692->g_5 p_1692->g_79 p_1692->g_87 p_1692->g_89 p_1692->g_90 p_1692->g_86
 * writes: p_1692->g_86 p_1692->g_79 p_1692->g_87 p_1692->g_90
 */
int64_t  func_50(int32_t  p_51, struct S1 * p_1692)
{ /* block id: 8 */
    uint16_t l_75 = 0x2926L;
    int32_t *l_78[10][10] = {{&p_1692->g_79,&p_1692->g_79,(void*)0,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,(void*)0,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,(void*)0,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,(void*)0,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,(void*)0,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,(void*)0,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,(void*)0,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,(void*)0,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,(void*)0,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79},{&p_1692->g_79,&p_1692->g_79,(void*)0,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79,&p_1692->g_79}};
    int32_t **l_80 = &l_78[6][6];
    int32_t *l_84 = &p_1692->g_79;
    int32_t **l_83[6][10][2] = {{{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84}},{{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84}},{{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84}},{{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84}},{{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84}},{{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84},{(void*)0,&l_84}}};
    int8_t *l_85 = &p_1692->g_86[6];
    uint64_t *l_88[5] = {&p_1692->g_55,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55,&p_1692->g_55};
    int i, j, k;
    (*l_80) = func_58(((safe_div_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((((void*)0 != &p_51) > (((safe_mod_func_uint32_t_u_u((((((((*l_84) = (safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((((*l_85) = (l_75 , (l_75 && (((safe_mod_func_uint8_t_u_u((p_1692->g_55 < (p_1692->g_5 != (((((*l_80) = l_78[6][6]) != (void*)0) & (safe_sub_func_int64_t_s_s(((l_83[0][1][1] != (void*)0) == p_1692->g_5), p_1692->g_5))) , p_1692->g_79))), p_1692->g_55)) != (*l_84)) , p_51)))) != p_1692->g_55) & (-1L)), p_1692->g_79)), p_1692->g_87))) <= p_51) < p_1692->g_5) && 8L) && p_1692->g_79) <= 0UL), 3UL)) < p_1692->g_87) >= 4L)), p_1692->g_87)) || (*l_84)), p_51)) , 1UL), l_88[2], p_1692->g_89, p_1692->g_90[0][1], p_1692);
    return p_1692->g_90[3][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1692->g_87 p_1692->g_90 p_1692->g_5 p_1692->g_55 p_1692->g_86
 * writes: p_1692->g_87 p_1692->g_90 p_1692->g_252.f3 p_1692->g_1220.f3
 */
int32_t * func_58(uint32_t  p_59, uint64_t * p_60, int32_t * p_61, uint8_t  p_62, struct S1 * p_1692)
{ /* block id: 12 */
    int8_t l_95 = (-2L);
    int32_t l_98 = (-2L);
    int16_t *l_99 = (void*)0;
    for (p_1692->g_87 = 21; (p_1692->g_87 > 40); p_1692->g_87 = safe_add_func_int32_t_s_s(p_1692->g_87, 5))
    { /* block id: 15 */
        int16_t *l_96[1][5][6] = {{{&p_1692->g_97,(void*)0,&p_1692->g_97,(void*)0,&p_1692->g_97,&p_1692->g_97},{&p_1692->g_97,(void*)0,&p_1692->g_97,(void*)0,&p_1692->g_97,&p_1692->g_97},{&p_1692->g_97,(void*)0,&p_1692->g_97,(void*)0,&p_1692->g_97,&p_1692->g_97},{&p_1692->g_97,(void*)0,&p_1692->g_97,(void*)0,&p_1692->g_97,&p_1692->g_97},{&p_1692->g_97,(void*)0,&p_1692->g_97,(void*)0,&p_1692->g_97,&p_1692->g_97}}};
        int32_t l_102 = 0x09E5C5CBL;
        int i, j, k;
        (*p_61) = (((~((safe_div_func_int8_t_s_s(((l_98 |= l_95) <= l_95), 1UL)) , (((l_99 != (p_62 , (p_1692->g_90[1][1] , l_99))) >= p_1692->g_5) <= ((safe_rshift_func_uint8_t_u_u((((l_102 ^ l_98) || p_1692->g_55) <= p_59), p_62)) , 1UL)))) > l_95) != p_1692->g_86[6]);
    }
    return &p_1692->g_90[1][1];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1693;
    struct S1* p_1692 = &c_1693;
    struct S1 c_1694 = {
        0UL, // p_1692->g_4
        0x38L, // p_1692->g_5
        1UL, // p_1692->g_55
        0L, // p_1692->g_79
        {1L,7L,1L,1L,7L,1L,1L,7L}, // p_1692->g_86
        0x356FL, // p_1692->g_87
        {{0x2A30E0CEL,0x2A30E0CEL},{0x2A30E0CEL,0x2A30E0CEL},{0x2A30E0CEL,0x2A30E0CEL},{0x2A30E0CEL,0x2A30E0CEL}}, // p_1692->g_90
        &p_1692->g_90[1][1], // p_1692->g_89
        (-1L), // p_1692->g_97
        {{0xB6975085CE8A8DCBL,0x86AE0A1952B13B08L,0xB6975085CE8A8DCBL},{0xB6975085CE8A8DCBL,0x86AE0A1952B13B08L,0xB6975085CE8A8DCBL},{0xB6975085CE8A8DCBL,0x86AE0A1952B13B08L,0xB6975085CE8A8DCBL},{0xB6975085CE8A8DCBL,0x86AE0A1952B13B08L,0xB6975085CE8A8DCBL},{0xB6975085CE8A8DCBL,0x86AE0A1952B13B08L,0xB6975085CE8A8DCBL},{0xB6975085CE8A8DCBL,0x86AE0A1952B13B08L,0xB6975085CE8A8DCBL},{0xB6975085CE8A8DCBL,0x86AE0A1952B13B08L,0xB6975085CE8A8DCBL},{0xB6975085CE8A8DCBL,0x86AE0A1952B13B08L,0xB6975085CE8A8DCBL},{0xB6975085CE8A8DCBL,0x86AE0A1952B13B08L,0xB6975085CE8A8DCBL}}, // p_1692->g_108
        {{{0xEE4573DCF354A036L,0x5BCDDAFE078D04C5L,6UL,18446744073709551615UL,0xFE6255739FF1EAABL,0x3370524A1A4E4CF6L,0xEE4573DCF354A036L},{0xEE4573DCF354A036L,0x5BCDDAFE078D04C5L,6UL,18446744073709551615UL,0xFE6255739FF1EAABL,0x3370524A1A4E4CF6L,0xEE4573DCF354A036L}},{{0xEE4573DCF354A036L,0x5BCDDAFE078D04C5L,6UL,18446744073709551615UL,0xFE6255739FF1EAABL,0x3370524A1A4E4CF6L,0xEE4573DCF354A036L},{0xEE4573DCF354A036L,0x5BCDDAFE078D04C5L,6UL,18446744073709551615UL,0xFE6255739FF1EAABL,0x3370524A1A4E4CF6L,0xEE4573DCF354A036L}},{{0xEE4573DCF354A036L,0x5BCDDAFE078D04C5L,6UL,18446744073709551615UL,0xFE6255739FF1EAABL,0x3370524A1A4E4CF6L,0xEE4573DCF354A036L},{0xEE4573DCF354A036L,0x5BCDDAFE078D04C5L,6UL,18446744073709551615UL,0xFE6255739FF1EAABL,0x3370524A1A4E4CF6L,0xEE4573DCF354A036L}},{{0xEE4573DCF354A036L,0x5BCDDAFE078D04C5L,6UL,18446744073709551615UL,0xFE6255739FF1EAABL,0x3370524A1A4E4CF6L,0xEE4573DCF354A036L},{0xEE4573DCF354A036L,0x5BCDDAFE078D04C5L,6UL,18446744073709551615UL,0xFE6255739FF1EAABL,0x3370524A1A4E4CF6L,0xEE4573DCF354A036L}},{{0xEE4573DCF354A036L,0x5BCDDAFE078D04C5L,6UL,18446744073709551615UL,0xFE6255739FF1EAABL,0x3370524A1A4E4CF6L,0xEE4573DCF354A036L},{0xEE4573DCF354A036L,0x5BCDDAFE078D04C5L,6UL,18446744073709551615UL,0xFE6255739FF1EAABL,0x3370524A1A4E4CF6L,0xEE4573DCF354A036L}},{{0xEE4573DCF354A036L,0x5BCDDAFE078D04C5L,6UL,18446744073709551615UL,0xFE6255739FF1EAABL,0x3370524A1A4E4CF6L,0xEE4573DCF354A036L},{0xEE4573DCF354A036L,0x5BCDDAFE078D04C5L,6UL,18446744073709551615UL,0xFE6255739FF1EAABL,0x3370524A1A4E4CF6L,0xEE4573DCF354A036L}}}, // p_1692->g_116
        &p_1692->g_116[2][0][6], // p_1692->g_115
        {{&p_1692->g_115,&p_1692->g_115,&p_1692->g_115,&p_1692->g_115},{&p_1692->g_115,&p_1692->g_115,&p_1692->g_115,&p_1692->g_115},{&p_1692->g_115,&p_1692->g_115,&p_1692->g_115,&p_1692->g_115},{&p_1692->g_115,&p_1692->g_115,&p_1692->g_115,&p_1692->g_115},{&p_1692->g_115,&p_1692->g_115,&p_1692->g_115,&p_1692->g_115},{&p_1692->g_115,&p_1692->g_115,&p_1692->g_115,&p_1692->g_115}}, // p_1692->g_114
        7L, // p_1692->g_125
        0x68L, // p_1692->g_221
        0xBFE55676L, // p_1692->g_231
        {0x3561D6E9L,0x15C516F0L,0L,0L,0x4FL,0x10F11FDCB0EC09B2L,0xC9E85ABD3D560089L,0x56B1L,0x4243L,0x99B6L}, // p_1692->g_252
        &p_1692->g_252, // p_1692->g_251
        &p_1692->g_89, // p_1692->g_358
        &p_1692->g_358, // p_1692->g_357
        0x2E59073CL, // p_1692->g_462
        {&p_1692->g_462,&p_1692->g_462,&p_1692->g_462,&p_1692->g_462,&p_1692->g_462,&p_1692->g_462,&p_1692->g_462,&p_1692->g_462,&p_1692->g_462,&p_1692->g_462}, // p_1692->g_461
        {{&p_1692->g_461[8],&p_1692->g_461[8]},{&p_1692->g_461[8],&p_1692->g_461[8]},{&p_1692->g_461[8],&p_1692->g_461[8]},{&p_1692->g_461[8],&p_1692->g_461[8]},{&p_1692->g_461[8],&p_1692->g_461[8]},{&p_1692->g_461[8],&p_1692->g_461[8]},{&p_1692->g_461[8],&p_1692->g_461[8]},{&p_1692->g_461[8],&p_1692->g_461[8]},{&p_1692->g_461[8],&p_1692->g_461[8]},{&p_1692->g_461[8],&p_1692->g_461[8]}}, // p_1692->g_460
        0x7BD506A4L, // p_1692->g_489
        0xEC249DAB1A9E0575L, // p_1692->g_531
        4294967295UL, // p_1692->g_633
        1UL, // p_1692->g_648
        0x678638F1FAF4F903L, // p_1692->g_662
        4L, // p_1692->g_708
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1692->g_709
        {{1L,1L,1L,1L},{1L,1L,1L,1L}}, // p_1692->g_716
        &p_1692->g_108[7][0], // p_1692->g_740
        1UL, // p_1692->g_752
        {{{0x4C48L,0x4C48L,0x4C48L},{0x4C48L,0x4C48L,0x4C48L}},{{0x4C48L,0x4C48L,0x4C48L},{0x4C48L,0x4C48L,0x4C48L}},{{0x4C48L,0x4C48L,0x4C48L},{0x4C48L,0x4C48L,0x4C48L}},{{0x4C48L,0x4C48L,0x4C48L},{0x4C48L,0x4C48L,0x4C48L}},{{0x4C48L,0x4C48L,0x4C48L},{0x4C48L,0x4C48L,0x4C48L}},{{0x4C48L,0x4C48L,0x4C48L},{0x4C48L,0x4C48L,0x4C48L}},{{0x4C48L,0x4C48L,0x4C48L},{0x4C48L,0x4C48L,0x4C48L}}}, // p_1692->g_793
        0x6F1893C8L, // p_1692->g_794
        {0L,0L}, // p_1692->g_805
        1L, // p_1692->g_812
        0x1EL, // p_1692->g_1000
        (void*)0, // p_1692->g_1050
        &p_1692->g_1050, // p_1692->g_1049
        0x186C40C4L, // p_1692->g_1052
        0L, // p_1692->g_1069
        0L, // p_1692->g_1121
        &p_1692->g_648, // p_1692->g_1141
        &p_1692->g_1141, // p_1692->g_1140
        0x2441A501L, // p_1692->g_1184
        &p_1692->g_252.f4, // p_1692->g_1199
        {{{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}}},{{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}}},{{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}}},{{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}}},{{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}}},{{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}}},{{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}},{{0x6F554158L,0x3C787EB8L,-7L,0x2EBB50ACL,1UL,2L,1UL,0UL,0xAF4BL,65526UL},{0x7A1A11B2L,0x7C4B4FE5L,0x0981BB6A3800B93EL,0x5284BBCFL,255UL,0x06886B18459C95DFL,0UL,1UL,1UL,0x4563L},{7L,0x55A7CBE4L,0x782469BC29CB1365L,-3L,255UL,0x29E3F03C4E73BE9DL,18446744073709551615UL,0x20D1L,0x4746L,0x2F8BL},{0x6F484E8CL,0x365DD7C8L,-1L,-5L,255UL,0x0AF436966D37C717L,1UL,65535UL,0xDF1FL,65535UL}}}}, // p_1692->g_1220
        {0x672B6F52L,0x7067CC6BL,2L,1L,0xD2L,1L,1UL,65529UL,0x25B9L,1UL}, // p_1692->g_1264
        (void*)0, // p_1692->g_1294
        {0x5B665E36L,-1L,0x0C289C845B8B535CL,1L,0xBCL,9L,0x5AAB9C55F7D3B896L,0x78A7L,7UL,0x099AL}, // p_1692->g_1337
        (void*)0, // p_1692->g_1387
        0L, // p_1692->g_1431
        &p_1692->g_793[5][0][2], // p_1692->g_1454
        &p_1692->g_1454, // p_1692->g_1453
        &p_1692->g_1453, // p_1692->g_1452
        0x01L, // p_1692->g_1520
        (void*)0, // p_1692->g_1523
        &p_1692->g_1523, // p_1692->g_1522
        0x56A5B437L, // p_1692->g_1551
        8L, // p_1692->g_1645
        {0L,0L,0L}, // p_1692->g_1648
        &p_1692->g_812, // p_1692->g_1670
        &p_1692->g_1670, // p_1692->g_1669
    };
    c_1693 = c_1694;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1692);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1692->g_4, "p_1692->g_4", print_hash_value);
    transparent_crc(p_1692->g_5, "p_1692->g_5", print_hash_value);
    transparent_crc(p_1692->g_55, "p_1692->g_55", print_hash_value);
    transparent_crc(p_1692->g_79, "p_1692->g_79", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1692->g_86[i], "p_1692->g_86[i]", print_hash_value);

    }
    transparent_crc(p_1692->g_87, "p_1692->g_87", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1692->g_90[i][j], "p_1692->g_90[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1692->g_97, "p_1692->g_97", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1692->g_108[i][j], "p_1692->g_108[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1692->g_116[i][j][k], "p_1692->g_116[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1692->g_125, "p_1692->g_125", print_hash_value);
    transparent_crc(p_1692->g_221, "p_1692->g_221", print_hash_value);
    transparent_crc(p_1692->g_231, "p_1692->g_231", print_hash_value);
    transparent_crc(p_1692->g_252.f0, "p_1692->g_252.f0", print_hash_value);
    transparent_crc(p_1692->g_252.f1, "p_1692->g_252.f1", print_hash_value);
    transparent_crc(p_1692->g_252.f2, "p_1692->g_252.f2", print_hash_value);
    transparent_crc(p_1692->g_252.f3, "p_1692->g_252.f3", print_hash_value);
    transparent_crc(p_1692->g_252.f4, "p_1692->g_252.f4", print_hash_value);
    transparent_crc(p_1692->g_252.f5, "p_1692->g_252.f5", print_hash_value);
    transparent_crc(p_1692->g_252.f6, "p_1692->g_252.f6", print_hash_value);
    transparent_crc(p_1692->g_252.f7, "p_1692->g_252.f7", print_hash_value);
    transparent_crc(p_1692->g_252.f8, "p_1692->g_252.f8", print_hash_value);
    transparent_crc(p_1692->g_252.f9, "p_1692->g_252.f9", print_hash_value);
    transparent_crc(p_1692->g_462, "p_1692->g_462", print_hash_value);
    transparent_crc(p_1692->g_489, "p_1692->g_489", print_hash_value);
    transparent_crc(p_1692->g_531, "p_1692->g_531", print_hash_value);
    transparent_crc(p_1692->g_633, "p_1692->g_633", print_hash_value);
    transparent_crc(p_1692->g_648, "p_1692->g_648", print_hash_value);
    transparent_crc(p_1692->g_662, "p_1692->g_662", print_hash_value);
    transparent_crc(p_1692->g_708, "p_1692->g_708", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1692->g_716[i][j], "p_1692->g_716[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1692->g_752, "p_1692->g_752", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1692->g_793[i][j][k], "p_1692->g_793[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1692->g_794, "p_1692->g_794", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1692->g_805[i], "p_1692->g_805[i]", print_hash_value);

    }
    transparent_crc(p_1692->g_812, "p_1692->g_812", print_hash_value);
    transparent_crc(p_1692->g_1000, "p_1692->g_1000", print_hash_value);
    transparent_crc(p_1692->g_1052, "p_1692->g_1052", print_hash_value);
    transparent_crc(p_1692->g_1069, "p_1692->g_1069", print_hash_value);
    transparent_crc(p_1692->g_1121, "p_1692->g_1121", print_hash_value);
    transparent_crc(p_1692->g_1184, "p_1692->g_1184", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1692->g_1220[i][j][k].f0, "p_1692->g_1220[i][j][k].f0", print_hash_value);
                transparent_crc(p_1692->g_1220[i][j][k].f1, "p_1692->g_1220[i][j][k].f1", print_hash_value);
                transparent_crc(p_1692->g_1220[i][j][k].f2, "p_1692->g_1220[i][j][k].f2", print_hash_value);
                transparent_crc(p_1692->g_1220[i][j][k].f3, "p_1692->g_1220[i][j][k].f3", print_hash_value);
                transparent_crc(p_1692->g_1220[i][j][k].f4, "p_1692->g_1220[i][j][k].f4", print_hash_value);
                transparent_crc(p_1692->g_1220[i][j][k].f5, "p_1692->g_1220[i][j][k].f5", print_hash_value);
                transparent_crc(p_1692->g_1220[i][j][k].f6, "p_1692->g_1220[i][j][k].f6", print_hash_value);
                transparent_crc(p_1692->g_1220[i][j][k].f7, "p_1692->g_1220[i][j][k].f7", print_hash_value);
                transparent_crc(p_1692->g_1220[i][j][k].f8, "p_1692->g_1220[i][j][k].f8", print_hash_value);
                transparent_crc(p_1692->g_1220[i][j][k].f9, "p_1692->g_1220[i][j][k].f9", print_hash_value);

            }
        }
    }
    transparent_crc(p_1692->g_1264.f0, "p_1692->g_1264.f0", print_hash_value);
    transparent_crc(p_1692->g_1264.f1, "p_1692->g_1264.f1", print_hash_value);
    transparent_crc(p_1692->g_1264.f2, "p_1692->g_1264.f2", print_hash_value);
    transparent_crc(p_1692->g_1264.f3, "p_1692->g_1264.f3", print_hash_value);
    transparent_crc(p_1692->g_1264.f4, "p_1692->g_1264.f4", print_hash_value);
    transparent_crc(p_1692->g_1264.f5, "p_1692->g_1264.f5", print_hash_value);
    transparent_crc(p_1692->g_1264.f6, "p_1692->g_1264.f6", print_hash_value);
    transparent_crc(p_1692->g_1264.f7, "p_1692->g_1264.f7", print_hash_value);
    transparent_crc(p_1692->g_1264.f8, "p_1692->g_1264.f8", print_hash_value);
    transparent_crc(p_1692->g_1264.f9, "p_1692->g_1264.f9", print_hash_value);
    transparent_crc(p_1692->g_1337.f0, "p_1692->g_1337.f0", print_hash_value);
    transparent_crc(p_1692->g_1337.f1, "p_1692->g_1337.f1", print_hash_value);
    transparent_crc(p_1692->g_1337.f2, "p_1692->g_1337.f2", print_hash_value);
    transparent_crc(p_1692->g_1337.f3, "p_1692->g_1337.f3", print_hash_value);
    transparent_crc(p_1692->g_1337.f4, "p_1692->g_1337.f4", print_hash_value);
    transparent_crc(p_1692->g_1337.f5, "p_1692->g_1337.f5", print_hash_value);
    transparent_crc(p_1692->g_1337.f6, "p_1692->g_1337.f6", print_hash_value);
    transparent_crc(p_1692->g_1337.f7, "p_1692->g_1337.f7", print_hash_value);
    transparent_crc(p_1692->g_1337.f8, "p_1692->g_1337.f8", print_hash_value);
    transparent_crc(p_1692->g_1337.f9, "p_1692->g_1337.f9", print_hash_value);
    transparent_crc(p_1692->g_1431, "p_1692->g_1431", print_hash_value);
    transparent_crc(p_1692->g_1520, "p_1692->g_1520", print_hash_value);
    transparent_crc(p_1692->g_1551, "p_1692->g_1551", print_hash_value);
    transparent_crc(p_1692->g_1645, "p_1692->g_1645", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1692->g_1648[i], "p_1692->g_1648[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
