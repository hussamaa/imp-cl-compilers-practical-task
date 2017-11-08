// -g 15,12,27 -l 3,2,3
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


// Seed: 2144879125

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    uint8_t g_3;
    int32_t g_8;
    int32_t g_10;
    int32_t *g_29;
    int32_t **g_28;
    uint8_t *g_52;
    int32_t g_88;
    int64_t g_97;
    int32_t g_99;
    int8_t g_117;
    int32_t * volatile g_133;
    int32_t g_146;
    uint32_t g_147;
    int32_t **g_151;
    int64_t g_169;
    int16_t g_171;
    int16_t g_173;
    uint16_t g_176[2];
    int64_t **g_199;
    int64_t ***g_198[2][9];
    uint64_t g_281;
    int32_t ** volatile g_286;
    int64_t g_299[9];
    int32_t g_309;
    int32_t g_310;
    uint8_t g_312;
    int32_t * volatile g_316;
    uint64_t g_375;
    uint8_t * volatile g_379;
    uint8_t * volatile * volatile g_378;
    int64_t g_401;
    int8_t g_444;
    int32_t * volatile g_452[7][10][3];
    uint8_t g_469[9][1][5];
    int8_t g_508[3][10];
    int32_t g_552;
    int32_t * volatile g_557;
    int64_t *g_561;
    int8_t g_573;
    int32_t * volatile g_619[1][6];
    int32_t * volatile g_620[8];
    int32_t * volatile g_621;
    volatile uint16_t g_696;
    volatile uint16_t * volatile g_695;
    volatile uint16_t * volatile *g_694;
    uint8_t g_730;
    int32_t * volatile g_743;
    int32_t * volatile g_744;
    int32_t ** volatile g_831;
    int64_t g_879[2][8];
    int64_t g_880;
    uint8_t g_884;
    int64_t g_1024;
    int8_t g_1067;
    int16_t g_1089;
    uint32_t g_1125;
    volatile int8_t g_1149;
    int32_t * volatile g_1297;
    int32_t * volatile g_1299;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S0 * p_1328);
int32_t ** func_13(int32_t  p_14, int32_t  p_15, struct S0 * p_1328);
uint16_t  func_18(int32_t  p_19, struct S0 * p_1328);
int32_t  func_20(int64_t  p_21, struct S0 * p_1328);
uint8_t  func_22(int32_t  p_23, uint64_t  p_24, int32_t ** p_25, uint8_t * p_26, uint32_t  p_27, struct S0 * p_1328);
uint32_t  func_34(int32_t  p_35, uint64_t  p_36, int16_t  p_37, int32_t ** p_38, int32_t ** p_39, struct S0 * p_1328);
int32_t  func_44(uint64_t  p_45, uint8_t * p_46, struct S0 * p_1328);
int16_t  func_60(int32_t * p_61, int32_t ** p_62, uint8_t * p_63, int32_t ** p_64, struct S0 * p_1328);
int32_t ** func_66(int32_t ** p_67, uint16_t  p_68, uint16_t  p_69, struct S0 * p_1328);
int32_t * func_70(int32_t ** p_71, uint32_t  p_72, uint8_t * p_73, uint32_t  p_74, struct S0 * p_1328);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1328->g_3 p_1328->g_8 p_1328->g_10 p_1328->g_28 p_1328->g_29 p_1328->g_117 p_1328->g_88 p_1328->g_299 p_1328->g_176 p_1328->g_97 p_1328->g_312 p_1328->g_375 p_1328->g_378 p_1328->g_379 p_1328->g_401 p_1328->g_444 p_1328->g_281 p_1328->g_309 p_1328->g_199 p_1328->g_99 p_1328->g_173 p_1328->g_469 p_1328->g_310 p_1328->g_508 p_1328->g_147 p_1328->g_557 p_1328->g_146 p_1328->g_573 p_1328->g_169 p_1328->g_171 p_1328->g_621 p_1328->g_552 p_1328->g_694 p_1328->g_744 p_1328->g_730 p_1328->g_695 p_1328->g_696 p_1328->g_879 p_1328->g_884 p_1328->g_1024 p_1328->g_52 p_1328->g_1089 p_1328->g_1149 p_1328->g_880 p_1328->g_1125 p_1328->g_561
 * writes: p_1328->g_3 p_1328->g_10 p_1328->g_52 p_1328->g_375 p_1328->g_378 p_1328->g_310 p_1328->g_309 p_1328->g_97 p_1328->g_401 p_1328->g_117 p_1328->g_444 p_1328->g_281 p_1328->g_199 p_1328->g_99 p_1328->g_469 p_1328->g_176 p_1328->g_561 p_1328->g_573 p_1328->g_88 p_1328->g_299 p_1328->g_508 p_1328->g_147 p_1328->g_312 p_1328->g_173 p_1328->g_879 p_1328->g_880 p_1328->g_884 p_1328->g_1089 p_1328->g_29 p_1328->g_1125 p_1328->g_171 p_1328->g_151 p_1328->g_28
 */
int64_t  func_1(struct S0 * p_1328)
{ /* block id: 4 */
    uint8_t *l_2 = &p_1328->g_3;
    int32_t *l_9 = &p_1328->g_10;
    int16_t *l_1088 = &p_1328->g_1089;
    int32_t ***l_1303[10] = {&p_1328->g_151,&p_1328->g_151,&p_1328->g_151,&p_1328->g_151,&p_1328->g_151,&p_1328->g_151,&p_1328->g_151,&p_1328->g_151,&p_1328->g_151,&p_1328->g_151};
    uint64_t *l_1312 = &p_1328->g_281;
    uint16_t l_1323 = 0xE810L;
    int64_t l_1324 = 1L;
    int32_t l_1325 = (-2L);
    int16_t l_1326[10][9][2] = {{{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL}},{{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL}},{{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL}},{{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL}},{{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL}},{{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL}},{{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL}},{{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL}},{{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL}},{{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL},{0L,0x09CAL}}};
    int64_t l_1327 = 0x6ACE9785F8A05598L;
    int i, j, k;
    (*l_9) = ((--(*l_2)) | (safe_div_func_uint32_t_u_u(p_1328->g_8, 0x25A80E35L)));
    for (p_1328->g_3 = 0; (p_1328->g_3 < 28); p_1328->g_3 = safe_add_func_int64_t_s_s(p_1328->g_3, 7))
    { /* block id: 9 */
        return p_1328->g_10;
    }
    p_1328->g_28 = (p_1328->g_151 = func_13(p_1328->g_10, (safe_div_func_uint32_t_u_u((func_18(func_20((func_22(((void*)0 == l_9), p_1328->g_8, p_1328->g_28, l_2, p_1328->g_10, p_1328) > ((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((*l_1088) = (safe_rshift_func_uint8_t_u_u(250UL, p_1328->g_552))), p_1328->g_146)) , p_1328->g_1024), 0x48L)) || 0L) , 5UL), (**p_1328->g_28))) ^ (*l_9)), (*l_9))) , p_1328->g_10), (*l_9))) , p_1328->g_171)), p_1328), p_1328) != (*l_9)), (-1L))), p_1328));
    (*l_9) = ((+((safe_div_func_uint32_t_u_u((((*l_9) , (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((((*p_1328->g_561) , ((safe_rshift_func_uint16_t_u_s(((*p_1328->g_744) , (*l_9)), 12)) || ((*l_1312)--))) <= (safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((l_2 != (p_1328->g_117 , l_2)) < ((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((&p_1328->g_52 != &p_1328->g_52) | (*l_9)), p_1328->g_1024)), l_1323)) > l_1324)), p_1328->g_146)) , 0x7FF9L), p_1328->g_401))), (*l_9))), (*l_9)))) >= l_1325), (*l_9))) , l_1326[8][3][0])) , l_1327);
    return (*l_9);
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_1125 p_1328->g_147 p_1328->g_299 p_1328->g_52 p_1328->g_3 p_1328->g_176
 * writes: p_1328->g_1125 p_1328->g_147 p_1328->g_3 p_1328->g_176
 */
int32_t ** func_13(int32_t  p_14, int32_t  p_15, struct S0 * p_1328)
{ /* block id: 548 */
    int16_t l_1293[5][1][3] = {{{0L,0x3671L,(-1L)}},{{0L,0x3671L,(-1L)}},{{0L,0x3671L,(-1L)}},{{0L,0x3671L,(-1L)}},{{0L,0x3671L,(-1L)}}};
    int32_t l_1301 = 1L;
    int32_t **l_1302 = &p_1328->g_29;
    int i, j, k;
    for (p_1328->g_1125 = 2; (p_1328->g_1125 <= 2); p_1328->g_1125 = safe_add_func_uint16_t_u_u(p_1328->g_1125, 3))
    { /* block id: 551 */
        uint16_t *l_1294 = &p_1328->g_176[0];
        int64_t l_1295 = 0x7E9271E3C1B64836L;
        int32_t *l_1296 = (void*)0;
        int32_t *l_1298 = (void*)0;
        int32_t *l_1300[10][6] = {{&p_1328->g_10,&p_1328->g_310,&p_1328->g_310,&p_1328->g_10,&p_1328->g_309,&p_1328->g_10},{&p_1328->g_10,&p_1328->g_310,&p_1328->g_310,&p_1328->g_10,&p_1328->g_309,&p_1328->g_10},{&p_1328->g_10,&p_1328->g_310,&p_1328->g_310,&p_1328->g_10,&p_1328->g_309,&p_1328->g_10},{&p_1328->g_10,&p_1328->g_310,&p_1328->g_310,&p_1328->g_10,&p_1328->g_309,&p_1328->g_10},{&p_1328->g_10,&p_1328->g_310,&p_1328->g_310,&p_1328->g_10,&p_1328->g_309,&p_1328->g_10},{&p_1328->g_10,&p_1328->g_310,&p_1328->g_310,&p_1328->g_10,&p_1328->g_309,&p_1328->g_10},{&p_1328->g_10,&p_1328->g_310,&p_1328->g_310,&p_1328->g_10,&p_1328->g_309,&p_1328->g_10},{&p_1328->g_10,&p_1328->g_310,&p_1328->g_310,&p_1328->g_10,&p_1328->g_309,&p_1328->g_10},{&p_1328->g_10,&p_1328->g_310,&p_1328->g_310,&p_1328->g_10,&p_1328->g_309,&p_1328->g_10},{&p_1328->g_10,&p_1328->g_310,&p_1328->g_310,&p_1328->g_10,&p_1328->g_309,&p_1328->g_10}};
        int i, j;
        for (p_14 = 8; (p_14 >= 1); p_14 -= 1)
        { /* block id: 554 */
            int i;
            for (p_1328->g_147 = 0; (p_1328->g_147 <= 0); p_1328->g_147 += 1)
            { /* block id: 557 */
                int32_t **l_1286 = &p_1328->g_29;
                return l_1286;
            }
            if (p_1328->g_299[p_14])
                break;
            return &p_1328->g_29;
        }
        l_1301 = (safe_lshift_func_uint8_t_u_s(((*p_1328->g_52)++), (safe_div_func_uint16_t_u_u(((*l_1294) ^= l_1293[4][0][0]), l_1295))));
    }
    return l_1302;
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_378 p_1328->g_379 p_1328->g_312 p_1328->g_299 p_1328->g_52 p_1328->g_3 p_1328->g_1089 p_1328->g_176 p_1328->g_879 p_1328->g_28 p_1328->g_147 p_1328->g_444 p_1328->g_29 p_1328->g_10 p_1328->g_1149 p_1328->g_1024 p_1328->g_744 p_1328->g_310 p_1328->g_309 p_1328->g_880 p_1328->g_171 p_1328->g_88 p_1328->g_694 p_1328->g_695 p_1328->g_696 p_1328->g_508 p_1328->g_557
 * writes: p_1328->g_573 p_1328->g_879 p_1328->g_508 p_1328->g_29 p_1328->g_147 p_1328->g_1125 p_1328->g_444 p_1328->g_299 p_1328->g_309 p_1328->g_880 p_1328->g_171 p_1328->g_281 p_1328->g_3 p_1328->g_469 p_1328->g_176
 */
uint16_t  func_18(int32_t  p_19, struct S0 * p_1328)
{ /* block id: 447 */
    int8_t *l_1096 = (void*)0;
    int32_t l_1103[9] = {0x710FD883L,0x710FD883L,0x710FD883L,0x710FD883L,0x710FD883L,0x710FD883L,0x710FD883L,0x710FD883L,0x710FD883L};
    int64_t *l_1104 = &p_1328->g_879[0][7];
    int8_t *l_1105 = &p_1328->g_508[2][2];
    int32_t l_1106 = 0L;
    uint64_t ***l_1119 = (void*)0;
    int8_t l_1128[5] = {0x77L,0x77L,0x77L,0x77L,0x77L};
    uint32_t l_1129 = 1UL;
    int8_t l_1148 = 0x40L;
    int64_t ****l_1173[5] = {&p_1328->g_198[1][6],&p_1328->g_198[1][6],&p_1328->g_198[1][6],&p_1328->g_198[1][6],&p_1328->g_198[1][6]};
    int64_t *****l_1172 = &l_1173[4];
    int64_t ******l_1171 = &l_1172;
    uint8_t **l_1182 = &p_1328->g_52;
    uint32_t l_1227[2][1][10] = {{{0x83609159L,4294967295UL,0x83609159L,0x83609159L,4294967295UL,0x83609159L,0x83609159L,4294967295UL,0x83609159L,0x83609159L}},{{0x83609159L,4294967295UL,0x83609159L,0x83609159L,4294967295UL,0x83609159L,0x83609159L,4294967295UL,0x83609159L,0x83609159L}}};
    uint16_t l_1231 = 1UL;
    int32_t *l_1245 = (void*)0;
    int32_t l_1252 = 0x7D93F943L;
    int32_t *l_1283[5][2][8] = {{{&p_1328->g_99,&p_1328->g_10,&p_1328->g_310,&p_1328->g_309,&l_1106,&p_1328->g_99,&p_1328->g_309,&l_1252},{&p_1328->g_99,&p_1328->g_10,&p_1328->g_310,&p_1328->g_309,&l_1106,&p_1328->g_99,&p_1328->g_309,&l_1252}},{{&p_1328->g_99,&p_1328->g_10,&p_1328->g_310,&p_1328->g_309,&l_1106,&p_1328->g_99,&p_1328->g_309,&l_1252},{&p_1328->g_99,&p_1328->g_10,&p_1328->g_310,&p_1328->g_309,&l_1106,&p_1328->g_99,&p_1328->g_309,&l_1252}},{{&p_1328->g_99,&p_1328->g_10,&p_1328->g_310,&p_1328->g_309,&l_1106,&p_1328->g_99,&p_1328->g_309,&l_1252},{&p_1328->g_99,&p_1328->g_10,&p_1328->g_310,&p_1328->g_309,&l_1106,&p_1328->g_99,&p_1328->g_309,&l_1252}},{{&p_1328->g_99,&p_1328->g_10,&p_1328->g_310,&p_1328->g_309,&l_1106,&p_1328->g_99,&p_1328->g_309,&l_1252},{&p_1328->g_99,&p_1328->g_10,&p_1328->g_310,&p_1328->g_309,&l_1106,&p_1328->g_99,&p_1328->g_309,&l_1252}},{{&p_1328->g_99,&p_1328->g_10,&p_1328->g_310,&p_1328->g_309,&l_1106,&p_1328->g_99,&p_1328->g_309,&l_1252},{&p_1328->g_99,&p_1328->g_10,&p_1328->g_310,&p_1328->g_309,&l_1106,&p_1328->g_99,&p_1328->g_309,&l_1252}}};
    int i, j, k;
lbl_1196:
    if (((safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((*l_1105) = ((((**p_1328->g_378) <= (&p_1328->g_401 == &p_1328->g_401)) <= (l_1103[5] = (4L > ((*l_1104) ^= (((((0x11C80972L >= 0xCF86CF31L) >= (((p_1328->g_573 = 1L) , (safe_mod_func_int32_t_s_s((l_1096 == ((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_1328->g_299[4], (*p_1328->g_52))), p_19)) , (void*)0)), (-1L)))) | p_1328->g_1089)) , 0L) < p_1328->g_176[0]) == l_1103[5]))))) , p_1328->g_1089)), 5)), l_1106)) & 0L), l_1106)) && l_1106))
    { /* block id: 452 */
        int32_t *l_1107 = &l_1103[7];
        int64_t ****l_1113 = &p_1328->g_198[1][6];
        int64_t *****l_1112 = &l_1113;
        int64_t *****l_1117 = &l_1113;
        int64_t ******l_1116 = &l_1117;
        uint32_t *l_1118 = &p_1328->g_147;
        uint32_t *l_1124 = &p_1328->g_1125;
        (*p_1328->g_28) = l_1107;
        (*l_1107) = (((safe_sub_func_int64_t_s_s(p_19, (safe_mul_func_int16_t_s_s(((((*l_1118) |= (l_1112 == ((*l_1116) = ((l_1106 , (safe_lshift_func_int16_t_s_s(0x1938L, 15))) , (void*)0)))) , (void*)0) == l_1119), ((safe_lshift_func_int16_t_s_u(0x1A2AL, (safe_sub_func_uint32_t_u_u(((*l_1124) = 0x691C9699L), 0x5C392078L)))) | p_19))))) , (void*)0) == &l_1103[3]);
    }
    else
    { /* block id: 458 */
        int32_t *l_1126 = &l_1103[6];
        int32_t *l_1127[5];
        int i;
        for (i = 0; i < 5; i++)
            l_1127[i] = &l_1106;
        l_1129--;
    }
    for (p_1328->g_444 = 0; (p_1328->g_444 <= 2); p_1328->g_444 += 1)
    { /* block id: 463 */
        int16_t l_1146 = 0L;
        int32_t **l_1147 = &p_1328->g_29;
        int16_t l_1150[6][3][7] = {{{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L},{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L},{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L}},{{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L},{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L},{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L}},{{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L},{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L},{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L}},{{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L},{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L},{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L}},{{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L},{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L},{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L}},{{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L},{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L},{1L,0x6D37L,0x6D37L,1L,1L,0x6D37L,0x6D37L}}};
        int16_t l_1151 = 0x725AL;
        uint8_t **l_1181 = &p_1328->g_52;
        int32_t l_1197 = (-1L);
        uint16_t l_1229 = 0UL;
        int32_t l_1279 = 0x21AA7188L;
        uint16_t l_1282 = 0UL;
        int i, j, k;
        if ((((safe_div_func_int32_t_s_s((((((5UL && (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((p_1328->g_299[(p_1328->g_444 + 6)] != (safe_rshift_func_uint8_t_u_u((l_1106 |= (l_1103[0] &= p_1328->g_299[(p_1328->g_444 + 1)])), p_19))) , ((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(((p_1328->g_299[p_1328->g_444] = ((((l_1106 = ((4294967292UL > (p_19 <= 0x9CF735D1L)) ^ (((l_1146 , l_1147) != &p_1328->g_620[5]) , (**l_1147)))) && l_1148) , (**l_1147)) ^ p_1328->g_1149)) == (-3L)), 9)) > l_1150[2][1][1]) <= 4L), (-8L))), (**l_1147))) , p_19)), l_1146)) < l_1151), p_1328->g_1024))) > p_19) , 1L) , (**p_1328->g_28)) < p_19), p_19)) || (**l_1147)) & l_1146))
        { /* block id: 468 */
            int32_t *l_1152 = &p_1328->g_309;
            (*l_1152) ^= (*p_1328->g_744);
        }
        else
        { /* block id: 470 */
            uint16_t l_1153 = 0x81A5L;
            uint64_t l_1190[6] = {0x5A6E67A3C6425988L,0x5A6E67A3C6425988L,0x5A6E67A3C6425988L,0x5A6E67A3C6425988L,0x5A6E67A3C6425988L,0x5A6E67A3C6425988L};
            int32_t l_1200[7][5] = {{0x235E5BCAL,(-8L),0x729430D3L,1L,0x746ECAEFL},{0x235E5BCAL,(-8L),0x729430D3L,1L,0x746ECAEFL},{0x235E5BCAL,(-8L),0x729430D3L,1L,0x746ECAEFL},{0x235E5BCAL,(-8L),0x729430D3L,1L,0x746ECAEFL},{0x235E5BCAL,(-8L),0x729430D3L,1L,0x746ECAEFL},{0x235E5BCAL,(-8L),0x729430D3L,1L,0x746ECAEFL},{0x235E5BCAL,(-8L),0x729430D3L,1L,0x746ECAEFL}};
            int i, j;
            for (p_1328->g_880 = 2; (p_1328->g_880 >= 0); p_1328->g_880 -= 1)
            { /* block id: 473 */
                int16_t l_1183[5];
                int32_t l_1198 = 0x4E826B09L;
                int i;
                for (i = 0; i < 5; i++)
                    l_1183[i] = 0L;
                (*p_1328->g_28) = (*l_1147);
                for (l_1151 = 2; (l_1151 >= 0); l_1151 -= 1)
                { /* block id: 477 */
                    uint16_t l_1176[4] = {0x3DA9L,0x3DA9L,0x3DA9L,0x3DA9L};
                    int i, j, k;
                    for (p_1328->g_171 = 0; (p_1328->g_171 <= 2); p_1328->g_171 += 1)
                    { /* block id: 480 */
                        uint64_t *l_1158 = &p_1328->g_281;
                        int16_t *l_1191 = (void*)0;
                        int16_t *l_1192 = &l_1183[1];
                        uint8_t *l_1193 = &p_1328->g_469[3][0][1];
                        uint16_t *l_1194 = &p_1328->g_176[0];
                        uint64_t **l_1195 = &l_1158;
                        int i, j, k;
                        l_1153--;
                        l_1106 &= ((l_1128[p_1328->g_171] , ((((safe_mod_func_uint16_t_u_u((p_19 <= (((*l_1158) = l_1129) | (((*l_1105) = (safe_sub_func_uint8_t_u_u((--(*p_1328->g_52)), 0x06L))) , ((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((*l_1105) = ((void*)0 == l_1171)), 3)) || (((((((safe_mul_func_int8_t_s_s((l_1176[2] , ((p_19 & (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((*p_1328->g_52) = ((p_1328->g_1089 >= 0x48AE1D19L) == (**l_1147))), (-3L))), 2))) && p_1328->g_88)), 0L)) > 4294967295UL) < 0x291687DA9EF227FCL) == 0x0DB619CA9B088322L) != p_19) , l_1181) == l_1182)), p_1328->g_444)), 0xB95EL)), p_19)) & 2L)))), 0x393BL)) == p_19) <= p_19) || 0x0E4AL)) , l_1183[2]);
                        l_1106 = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(0xAE7AL, (**p_1328->g_694))), (((safe_add_func_int64_t_s_s(((((*l_1195) = ((((*l_1105) ^= l_1190[3]) | (((((*l_1192) = l_1106) <= ((*l_1194) = ((p_19 > ((*l_1193) = ((**l_1181) = l_1128[p_1328->g_171]))) && p_19))) != 0L) <= p_1328->g_310)) , l_1158)) == (void*)0) | p_19), p_19)) >= (-3L)) | 0x7A7C3856L)));
                    }
                    if (p_19)
                        goto lbl_1196;
                    l_1198 = (l_1197 , (*p_1328->g_744));
                }
            }
            for (p_1328->g_309 = 0; (p_1328->g_309 <= 2); p_1328->g_309 += 1)
            { /* block id: 502 */
                uint16_t l_1203 = 6UL;
                int32_t l_1232 = (-7L);
                uint16_t *l_1239[9][7] = {{&l_1203,&l_1229,&l_1229,&l_1229,&l_1203,&l_1203,&l_1229},{&l_1203,&l_1229,&l_1229,&l_1229,&l_1203,&l_1203,&l_1229},{&l_1203,&l_1229,&l_1229,&l_1229,&l_1203,&l_1203,&l_1229},{&l_1203,&l_1229,&l_1229,&l_1229,&l_1203,&l_1203,&l_1229},{&l_1203,&l_1229,&l_1229,&l_1229,&l_1203,&l_1203,&l_1229},{&l_1203,&l_1229,&l_1229,&l_1229,&l_1203,&l_1203,&l_1229},{&l_1203,&l_1229,&l_1229,&l_1229,&l_1203,&l_1203,&l_1229},{&l_1203,&l_1229,&l_1229,&l_1229,&l_1203,&l_1203,&l_1229},{&l_1203,&l_1229,&l_1229,&l_1229,&l_1203,&l_1203,&l_1229}};
                uint16_t **l_1238 = &l_1239[0][6];
                int32_t l_1253 = 0x5C7E8B85L;
                int32_t l_1254[2][3][6] = {{{0L,0x2A8DAAAEL,0x2A8DAAAEL,0L,(-1L),0x2CC1A5FBL},{0L,0x2A8DAAAEL,0x2A8DAAAEL,0L,(-1L),0x2CC1A5FBL},{0L,0x2A8DAAAEL,0x2A8DAAAEL,0L,(-1L),0x2CC1A5FBL}},{{0L,0x2A8DAAAEL,0x2A8DAAAEL,0L,(-1L),0x2CC1A5FBL},{0L,0x2A8DAAAEL,0x2A8DAAAEL,0L,(-1L),0x2CC1A5FBL},{0L,0x2A8DAAAEL,0x2A8DAAAEL,0L,(-1L),0x2CC1A5FBL}}};
                int32_t **l_1259 = &p_1328->g_29;
                int i, j, k;
                l_1106 = 3L;
                for (l_1106 = 0; (l_1106 <= 2); l_1106 += 1)
                { /* block id: 506 */
                    int32_t l_1225 = 0L;
                    int32_t *l_1246 = (void*)0;
                    int32_t *l_1247 = (void*)0;
                    int32_t *l_1248 = &p_1328->g_310;
                    int32_t *l_1249 = &l_1200[0][3];
                    int32_t *l_1250 = &l_1103[5];
                    int32_t *l_1251[6] = {&l_1225,&l_1225,&l_1225,&l_1225,&l_1225,&l_1225};
                    uint8_t l_1255 = 0x7DL;
                    uint64_t *l_1265 = &l_1190[0];
                    uint64_t *l_1267 = &l_1190[3];
                    int i, j, k;
                    (1 + 1);
                }
            }
        }
        return p_19;
    }
    (*p_1328->g_557) = 0x2EB833C6L;
    return (**p_1328->g_694);
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_573
 * writes:
 */
int32_t  func_20(int64_t  p_21, struct S0 * p_1328)
{ /* block id: 445 */
    return p_1328->g_573;
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_29 p_1328->g_28 p_1328->g_8 p_1328->g_3 p_1328->g_10 p_1328->g_117 p_1328->g_88 p_1328->g_299 p_1328->g_176 p_1328->g_97 p_1328->g_312 p_1328->g_375 p_1328->g_378 p_1328->g_379 p_1328->g_401 p_1328->g_444 p_1328->g_281 p_1328->g_309 p_1328->g_199 p_1328->g_99 p_1328->g_173 p_1328->g_469 p_1328->g_310 p_1328->g_508 p_1328->g_147 p_1328->g_557 p_1328->g_146 p_1328->g_573 p_1328->g_169 p_1328->g_171 p_1328->g_621 p_1328->g_552 p_1328->g_694 p_1328->g_744 p_1328->g_730 p_1328->g_695 p_1328->g_696 p_1328->g_879 p_1328->g_884
 * writes: p_1328->g_52 p_1328->g_375 p_1328->g_378 p_1328->g_310 p_1328->g_309 p_1328->g_97 p_1328->g_401 p_1328->g_3 p_1328->g_117 p_1328->g_444 p_1328->g_281 p_1328->g_199 p_1328->g_99 p_1328->g_469 p_1328->g_176 p_1328->g_561 p_1328->g_573 p_1328->g_88 p_1328->g_299 p_1328->g_508 p_1328->g_147 p_1328->g_312 p_1328->g_173 p_1328->g_879 p_1328->g_880 p_1328->g_884
 */
uint8_t  func_22(int32_t  p_23, uint64_t  p_24, int32_t ** p_25, uint8_t * p_26, uint32_t  p_27, struct S0 * p_1328)
{ /* block id: 12 */
    int32_t *l_65 = &p_1328->g_10;
    uint8_t *l_729 = &p_1328->g_730;
    int32_t l_1056 = 0x540823DBL;
    int32_t l_1058 = 0x0B00B1C0L;
    int32_t l_1059 = (-7L);
    int32_t l_1060 = 0x640B7B79L;
    int32_t l_1061 = 0x592D2972L;
    int32_t l_1062 = 0x1DCAA75BL;
    int32_t l_1063 = 3L;
    int32_t l_1064 = 0x6D22D004L;
    int32_t l_1065 = 0x7064D40BL;
    int32_t l_1066 = 0L;
    int32_t l_1068[8][6][5] = {{{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)}},{{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)}},{{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)}},{{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)}},{{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)}},{{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)}},{{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)}},{{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)},{0x69E8D929L,0L,(-1L),(-1L),(-1L)}}};
    uint8_t l_1069[9] = {0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL};
    uint32_t l_1072[6][9][4] = {{{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL}},{{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL}},{{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL}},{{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL}},{{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL}},{{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL},{0xD6D44BB4L,0xF0BFFD58L,9UL,4294967286UL}}};
    int32_t *l_1074[2];
    int32_t **l_1073 = &l_1074[0];
    int32_t ***l_1075 = &l_1073;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1074[i] = &p_1328->g_552;
    for (p_24 = (-14); (p_24 <= 2); p_24 = safe_add_func_int16_t_s_s(p_24, 5))
    { /* block id: 15 */
        uint64_t l_57[2][6] = {{18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL},{18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL}};
        uint8_t **l_885 = &l_729;
        int8_t *l_886 = &p_1328->g_508[1][1];
        int32_t **l_887 = &l_65;
        int32_t l_1051 = 0x1B239C5EL;
        int32_t l_1052[9] = {(-7L),0L,(-7L),(-7L),0L,(-7L),(-7L),0L,(-7L)};
        int32_t *l_1053 = &l_1052[3];
        int32_t *l_1054 = &l_1052[2];
        int32_t *l_1055 = &l_1052[3];
        int32_t *l_1057[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_1057[i] = &p_1328->g_309;
        l_1052[3] |= ((safe_add_func_uint16_t_u_u((((l_65 = (func_34(((*p_25) == (*p_1328->g_28)), (safe_div_func_int8_t_s_s((safe_div_func_int32_t_s_s(func_44((safe_mod_func_int8_t_s_s((((p_1328->g_8 && (!((*l_886) = ((safe_lshift_func_int8_t_s_s(p_23, (safe_unary_minus_func_uint8_t_u(((p_1328->g_52 = &p_1328->g_3) != ((*l_885) = ((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_57[1][1] , 0xB9BEL), (((safe_lshift_func_int16_t_s_s(func_60(l_65, func_66(&p_1328->g_29, p_24, p_1328->g_3, p_1328), l_729, &p_1328->g_29, p_1328), 11)) == (*l_65)) , p_24))), 0xEBFCL)) , l_729))))))) && l_57[1][1])))) <= p_1328->g_552) == 0x7F53F4FAL), l_57[1][2])), &p_1328->g_730, p_1328), 0xA2AD85F2L)), p_1328->g_8)), p_1328->g_730, l_887, p_25, p_1328) , l_65)) == (*p_1328->g_28)) , (*l_65)), l_1051)) , (**l_887));
        ++l_1069[4];
        if (l_1072[5][2][1])
            break;
    }
    l_1058 = (((*l_1075) = l_1073) == (void*)0);
    return (*l_65);
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_401 p_1328->g_97
 * writes: p_1328->g_401 p_1328->g_97
 */
uint32_t  func_34(int32_t  p_35, uint64_t  p_36, int16_t  p_37, int32_t ** p_38, int32_t ** p_39, struct S0 * p_1328)
{ /* block id: 380 */
    uint32_t *l_893 = (void*)0;
    int32_t *l_903 = &p_1328->g_552;
    int32_t **l_902 = &l_903;
    int32_t l_904 = 1L;
    int32_t l_945[2][3][5] = {{{0x6F1D1FFFL,(-10L),0x39AA0EA6L,0x6BC303EFL,1L},{0x6F1D1FFFL,(-10L),0x39AA0EA6L,0x6BC303EFL,1L},{0x6F1D1FFFL,(-10L),0x39AA0EA6L,0x6BC303EFL,1L}},{{0x6F1D1FFFL,(-10L),0x39AA0EA6L,0x6BC303EFL,1L},{0x6F1D1FFFL,(-10L),0x39AA0EA6L,0x6BC303EFL,1L},{0x6F1D1FFFL,(-10L),0x39AA0EA6L,0x6BC303EFL,1L}}};
    uint8_t l_958 = 0x7DL;
    int32_t l_1050[4];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1050[i] = 0x00A50C38L;
    for (p_1328->g_401 = (-19); (p_1328->g_401 == (-14)); p_1328->g_401 = safe_add_func_int8_t_s_s(p_1328->g_401, 3))
    { /* block id: 383 */
        uint32_t *l_892 = &p_1328->g_147;
        int32_t l_928 = (-2L);
        int32_t l_944[9][9][3] = {{{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L}},{{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L}},{{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L}},{{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L}},{{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L}},{{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L}},{{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L}},{{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L}},{{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L},{0x3C2EFB0CL,5L,0x3F951194L}}};
        int32_t l_972 = (-2L);
        uint32_t l_1018 = 4UL;
        int64_t *l_1031 = &p_1328->g_401;
        int i, j, k;
        for (p_1328->g_97 = (-8); (p_1328->g_97 != (-18)); --p_1328->g_97)
        { /* block id: 386 */
            int32_t *l_910 = (void*)0;
            int32_t l_936 = (-1L);
            int32_t l_946 = 0x65CFBC1DL;
            int32_t l_952 = (-3L);
            int32_t l_953 = 9L;
            int32_t l_956 = 0x5B02FDE9L;
            int32_t l_957 = (-8L);
            uint64_t *l_1016 = &p_1328->g_375;
            uint64_t **l_1015[4][6] = {{&l_1016,&l_1016,&l_1016,&l_1016,&l_1016,&l_1016},{&l_1016,&l_1016,&l_1016,&l_1016,&l_1016,&l_1016},{&l_1016,&l_1016,&l_1016,&l_1016,&l_1016,&l_1016},{&l_1016,&l_1016,&l_1016,&l_1016,&l_1016,&l_1016}};
            int32_t l_1038 = 0x087B0C47L;
            int32_t l_1039 = 0x198D043AL;
            int32_t l_1040 = 0x010DD258L;
            int32_t l_1041 = 0x06466EC3L;
            int32_t l_1042 = 0x6FD29108L;
            int32_t l_1043 = 9L;
            int32_t l_1044 = 9L;
            int32_t l_1045 = 0x7AB2891DL;
            int32_t l_1046[2][3] = {{0x465228FBL,0x465228FBL,0x465228FBL},{0x465228FBL,0x465228FBL,0x465228FBL}};
            int i, j;
            (1 + 1);
        }
    }
    return l_1050[3];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_44(uint64_t  p_45, uint8_t * p_46, struct S0 * p_1328)
{ /* block id: 378 */
    return p_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_169 p_1328->g_744 p_1328->g_310 p_1328->g_29 p_1328->g_28 p_1328->g_10 p_1328->g_730 p_1328->g_176 p_1328->g_379 p_1328->g_312 p_1328->g_573 p_1328->g_8 p_1328->g_299 p_1328->g_147 p_1328->g_173 p_1328->g_99 p_1328->g_694 p_1328->g_695 p_1328->g_696 p_1328->g_309 p_1328->g_552 p_1328->g_117 p_1328->g_88 p_1328->g_97 p_1328->g_375 p_1328->g_378 p_1328->g_3 p_1328->g_401 p_1328->g_444 p_1328->g_281 p_1328->g_199 p_1328->g_469 p_1328->g_508 p_1328->g_557 p_1328->g_146 p_1328->g_171 p_1328->g_621 p_1328->g_879 p_1328->g_884
 * writes: p_1328->g_97 p_1328->g_309 p_1328->g_310 p_1328->g_173 p_1328->g_176 p_1328->g_147 p_1328->g_88 p_1328->g_117 p_1328->g_573 p_1328->g_375 p_1328->g_378 p_1328->g_401 p_1328->g_3 p_1328->g_444 p_1328->g_281 p_1328->g_199 p_1328->g_99 p_1328->g_469 p_1328->g_561 p_1328->g_299 p_1328->g_508 p_1328->g_312 p_1328->g_879 p_1328->g_880 p_1328->g_884
 */
int16_t  func_60(int32_t * p_61, int32_t ** p_62, uint8_t * p_63, int32_t ** p_64, struct S0 * p_1328)
{ /* block id: 285 */
    int32_t l_740 = (-1L);
    int32_t l_746 = 0x475DB216L;
    int32_t l_747 = 0x1A6D6E9CL;
    int32_t l_748 = 7L;
    int32_t l_749 = 0x30B0CA87L;
    int32_t l_750[2][1][6] = {{{(-4L),(-9L),0x02023BBBL,(-9L),(-4L),(-4L)}},{{(-4L),(-9L),0x02023BBBL,(-9L),(-4L),(-4L)}}};
    uint32_t l_751 = 4294967290UL;
    int64_t ****l_763 = &p_1328->g_198[0][5];
    int64_t l_778 = 0x7F65ABAE7E6F0095L;
    int16_t l_819 = 0L;
    int32_t *l_827[10][2];
    int32_t *l_828[10][10] = {{&l_747,(void*)0,&p_1328->g_99,&l_748,&p_1328->g_10,&l_748,&p_1328->g_99,(void*)0,&l_747,&p_1328->g_99},{&l_747,(void*)0,&p_1328->g_99,&l_748,&p_1328->g_10,&l_748,&p_1328->g_99,(void*)0,&l_747,&p_1328->g_99},{&l_747,(void*)0,&p_1328->g_99,&l_748,&p_1328->g_10,&l_748,&p_1328->g_99,(void*)0,&l_747,&p_1328->g_99},{&l_747,(void*)0,&p_1328->g_99,&l_748,&p_1328->g_10,&l_748,&p_1328->g_99,(void*)0,&l_747,&p_1328->g_99},{&l_747,(void*)0,&p_1328->g_99,&l_748,&p_1328->g_10,&l_748,&p_1328->g_99,(void*)0,&l_747,&p_1328->g_99},{&l_747,(void*)0,&p_1328->g_99,&l_748,&p_1328->g_10,&l_748,&p_1328->g_99,(void*)0,&l_747,&p_1328->g_99},{&l_747,(void*)0,&p_1328->g_99,&l_748,&p_1328->g_10,&l_748,&p_1328->g_99,(void*)0,&l_747,&p_1328->g_99},{&l_747,(void*)0,&p_1328->g_99,&l_748,&p_1328->g_10,&l_748,&p_1328->g_99,(void*)0,&l_747,&p_1328->g_99},{&l_747,(void*)0,&p_1328->g_99,&l_748,&p_1328->g_10,&l_748,&p_1328->g_99,(void*)0,&l_747,&p_1328->g_99},{&l_747,(void*)0,&p_1328->g_99,&l_748,&p_1328->g_10,&l_748,&p_1328->g_99,(void*)0,&l_747,&p_1328->g_99}};
    int32_t l_873 = 0x57E83559L;
    int64_t *l_875 = &l_778;
    int64_t **l_874[7][5] = {{&l_875,&l_875,&l_875,(void*)0,&l_875},{&l_875,&l_875,&l_875,(void*)0,&l_875},{&l_875,&l_875,&l_875,(void*)0,&l_875},{&l_875,&l_875,&l_875,(void*)0,&l_875},{&l_875,&l_875,&l_875,(void*)0,&l_875},{&l_875,&l_875,&l_875,(void*)0,&l_875},{&l_875,&l_875,&l_875,(void*)0,&l_875}};
    int64_t **l_876 = &l_875;
    uint16_t *l_878[5][1];
    int16_t l_881 = 0x6092L;
    int32_t **l_882 = &l_828[0][1];
    int64_t *l_883 = (void*)0;
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
            l_827[i][j] = &p_1328->g_10;
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_878[i][j] = (void*)0;
    }
lbl_772:
    for (p_1328->g_97 = 7; (p_1328->g_97 >= 0); p_1328->g_97 -= 1)
    { /* block id: 288 */
        return p_1328->g_169;
    }
    for (p_1328->g_309 = 0; (p_1328->g_309 >= 10); ++p_1328->g_309)
    { /* block id: 293 */
        int32_t l_737 = (-6L);
        uint8_t *l_742[1];
        uint8_t **l_741[8][9][3] = {{{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0}},{{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0}},{{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0}},{{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0}},{{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0}},{{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0}},{{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0}},{{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0},{&l_742[0],(void*)0,(void*)0}}};
        int32_t *l_745[8] = {&p_1328->g_310,&p_1328->g_310,&p_1328->g_310,&p_1328->g_310,&p_1328->g_310,&p_1328->g_310,&p_1328->g_310,&p_1328->g_310};
        int64_t ****l_764 = &p_1328->g_198[1][3];
        int8_t l_783 = 0x45L;
        int64_t *l_818 = &p_1328->g_169;
        uint64_t *l_833 = &p_1328->g_375;
        uint64_t **l_832 = &l_833;
        uint64_t l_870 = 1UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_742[i] = &p_1328->g_312;
        (*p_1328->g_744) &= (safe_rshift_func_uint8_t_u_s((~(l_737 >= (((safe_sub_func_uint8_t_u_u(1UL, l_740)) > l_737) != (l_741[7][4][1] == (void*)0)))), 3));
        --l_751;
        for (l_746 = (-18); (l_746 >= (-14)); ++l_746)
        { /* block id: 298 */
            uint32_t l_758 = 0xFDF01B95L;
            int64_t *****l_759 = (void*)0;
            int64_t *****l_760 = (void*)0;
            int64_t ****l_762 = (void*)0;
            int64_t *****l_761 = &l_762;
            int32_t *l_768 = (void*)0;
            int32_t l_774 = (-8L);
            int32_t l_776 = 0x271C356EL;
            int32_t l_777 = 0x787BC5C1L;
            int32_t l_779 = 0x0745909CL;
            int32_t l_780 = (-4L);
            int32_t l_781 = (-9L);
            int32_t l_782[8];
            int16_t l_866[10][6] = {{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)}};
            int i, j;
            for (i = 0; i < 8; i++)
                l_782[i] = 0x6B4D40ADL;
            p_61 = (*p_64);
            if ((**p_1328->g_28))
                continue;
            if (((safe_lshift_func_int8_t_s_u(l_758, l_750[1][0][1])) != (l_758 == (((*l_761) = &p_1328->g_198[1][4]) == (l_764 = l_763)))))
            { /* block id: 303 */
                uint8_t l_767 = 5UL;
                int32_t l_773[1];
                int16_t l_775 = 0L;
                uint64_t l_785[4];
                int i;
                for (i = 0; i < 1; i++)
                    l_773[i] = (-9L);
                for (i = 0; i < 4; i++)
                    l_785[i] = 0UL;
                for (l_758 = 0; (l_758 != 8); ++l_758)
                { /* block id: 306 */
                    int32_t *l_771[4][3][7] = {{{&l_747,&l_748,&l_737,&l_737,&l_748,&l_747,(void*)0},{&l_747,&l_748,&l_737,&l_737,&l_748,&l_747,(void*)0},{&l_747,&l_748,&l_737,&l_737,&l_748,&l_747,(void*)0}},{{&l_747,&l_748,&l_737,&l_737,&l_748,&l_747,(void*)0},{&l_747,&l_748,&l_737,&l_737,&l_748,&l_747,(void*)0},{&l_747,&l_748,&l_737,&l_737,&l_748,&l_747,(void*)0}},{{&l_747,&l_748,&l_737,&l_737,&l_748,&l_747,(void*)0},{&l_747,&l_748,&l_737,&l_737,&l_748,&l_747,(void*)0},{&l_747,&l_748,&l_737,&l_737,&l_748,&l_747,(void*)0}},{{&l_747,&l_748,&l_737,&l_737,&l_748,&l_747,(void*)0},{&l_747,&l_748,&l_737,&l_737,&l_748,&l_747,(void*)0},{&l_747,&l_748,&l_737,&l_737,&l_748,&l_747,(void*)0}}};
                    int i, j, k;
                    if ((l_758 < l_767))
                    { /* block id: 307 */
                        int32_t **l_769 = (void*)0;
                        int32_t **l_770[3];
                        int16_t l_784 = (-2L);
                        int i;
                        for (i = 0; i < 3; i++)
                            l_770[i] = &l_745[1];
                        l_771[0][1][5] = (p_61 = l_768);
                        if (l_767)
                            goto lbl_772;
                        (*p_1328->g_744) = (**p_64);
                        --l_785[0];
                    }
                    else
                    { /* block id: 313 */
                        uint32_t l_792 = 1UL;
                        int16_t *l_803 = &p_1328->g_173;
                        int32_t **l_804 = &l_745[1];
                        uint16_t *l_809[7] = {&p_1328->g_176[0],&p_1328->g_176[0],&p_1328->g_176[0],&p_1328->g_176[0],&p_1328->g_176[0],&p_1328->g_176[0],&p_1328->g_176[0]};
                        uint64_t *l_817[8] = {&p_1328->g_375,&p_1328->g_375,&p_1328->g_375,&p_1328->g_375,&p_1328->g_375,&p_1328->g_375,&p_1328->g_375,&p_1328->g_375};
                        uint64_t **l_816 = &l_817[2];
                        int i;
                        (*l_804) = func_70(&p_1328->g_29, (safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(l_792, ((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(9L, 6)), (safe_rshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s((0x26EDL != l_792), (*p_63))) , (((*l_803) = (((l_792 ^ (+18446744073709551615UL)) , (safe_add_func_uint8_t_u_u((*p_63), p_1328->g_310))) & l_773[0])) < 0x44A4L)) & 0x55DA7B25L), 4)))) ^ 65535UL))), 3)), p_63, l_792, p_1328);
                        l_819 |= ((**p_62) , (safe_rshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s(p_1328->g_10, (p_1328->g_176[0]--))) | 0x12L) != 0xBC69L), (safe_add_func_uint16_t_u_u((((((safe_div_func_int8_t_s_s(((void*)0 == l_816), (*p_1328->g_379))) ^ ((((((((((void*)0 == l_818) , (**p_1328->g_28)) > (**p_64)) , l_775) , l_749) > 0xCCA8C52CL) , (*p_1328->g_29)) != p_1328->g_573) | p_1328->g_310)) <= p_1328->g_730) , p_1328->g_8) <= 4UL), p_1328->g_299[4])))));
                        if (l_746)
                            goto lbl_772;
                    }
                }
            }
            else
            { /* block id: 321 */
                int16_t l_826 = 7L;
                int32_t *l_830 = &l_750[0][0][4];
                uint64_t ***l_834 = (void*)0;
                uint64_t ***l_835[3][10][3] = {{{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832}},{{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832}},{{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832}}};
                int64_t *l_836 = &p_1328->g_401;
                int i, j, k;
                for (p_1328->g_147 = 0; (p_1328->g_147 <= 0); p_1328->g_147 += 1)
                { /* block id: 324 */
                    for (l_779 = 0; (l_779 <= 0); l_779 += 1)
                    { /* block id: 327 */
                        return p_1328->g_299[8];
                    }
                    return p_1328->g_176[0];
                }
                for (p_1328->g_173 = 0; (p_1328->g_173 <= 2); p_1328->g_173 += 1)
                { /* block id: 334 */
                    uint16_t l_820 = 0xF497L;
                    l_820--;
                    for (p_1328->g_88 = 0; (p_1328->g_88 <= 2); p_1328->g_88 += 1)
                    { /* block id: 338 */
                        int32_t *l_823 = (void*)0;
                        l_768 = l_823;
                    }
                    for (p_1328->g_117 = 2; (p_1328->g_117 >= 0); p_1328->g_117 -= 1)
                    { /* block id: 343 */
                        int32_t l_829 = (-1L);
                        l_829 ^= ((p_1328->g_573 = (safe_sub_func_int8_t_s_s(((&p_1328->g_621 != &p_61) ^ l_826), (l_827[1][1] == (l_828[0][1] = (*p_64)))))) , (l_777 = (*p_61)));
                        l_768 = l_830;
                    }
                }
                (*l_830) &= ((l_832 = l_832) == (void*)0);
                for (l_751 = 0; (l_751 <= 7); l_751 += 1)
                { /* block id: 355 */
                    uint64_t l_843 = 0x9ECA8B9C6C42E1F5L;
                    uint8_t **l_867 = &l_742[0];
                    if ((l_836 != (void*)0))
                    { /* block id: 356 */
                        int i;
                        p_61 = ((safe_add_func_int32_t_s_s((0x9F56D7E7B54C0630L & l_782[l_751]), (0x2CBE12A4L > 4294967292UL))) , (l_830 = (*p_62)));
                    }
                    else
                    { /* block id: 359 */
                        int32_t **l_839 = (void*)0;
                        int32_t **l_840 = &l_830;
                        int64_t **l_850 = (void*)0;
                        int32_t *l_864 = &p_1328->g_552;
                        int32_t **l_863 = &l_864;
                        int8_t *l_865 = &l_783;
                        uint8_t **l_868 = &l_742[0];
                        uint32_t l_869[8][1][7] = {{{0xEA8D6AF2L,0UL,4294967295UL,0UL,0xEA8D6AF2L,0xEA8D6AF2L,0UL}},{{0xEA8D6AF2L,0UL,4294967295UL,0UL,0xEA8D6AF2L,0xEA8D6AF2L,0UL}},{{0xEA8D6AF2L,0UL,4294967295UL,0UL,0xEA8D6AF2L,0xEA8D6AF2L,0UL}},{{0xEA8D6AF2L,0UL,4294967295UL,0UL,0xEA8D6AF2L,0xEA8D6AF2L,0UL}},{{0xEA8D6AF2L,0UL,4294967295UL,0UL,0xEA8D6AF2L,0xEA8D6AF2L,0UL}},{{0xEA8D6AF2L,0UL,4294967295UL,0UL,0xEA8D6AF2L,0xEA8D6AF2L,0UL}},{{0xEA8D6AF2L,0UL,4294967295UL,0UL,0xEA8D6AF2L,0xEA8D6AF2L,0UL}},{{0xEA8D6AF2L,0UL,4294967295UL,0UL,0xEA8D6AF2L,0xEA8D6AF2L,0UL}}};
                        int i, j, k;
                        (*l_840) = (void*)0;
                        l_782[l_751] = (((safe_add_func_uint8_t_u_u((p_1328->g_99 == (l_843 | ((safe_mod_func_int8_t_s_s(((p_1328->g_310 , (safe_lshift_func_uint16_t_u_s(((l_843 & (safe_add_func_uint8_t_u_u((((void*)0 != l_850) & ((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((((((safe_add_func_int16_t_s_s((l_843 ^ ((((l_843 > ((safe_div_func_int8_t_s_s(((*l_865) = ((safe_div_func_int16_t_s_s((((*l_863) = &p_1328->g_552) == l_745[1]), (**p_1328->g_694))) & l_826)), l_866[3][1])) & p_1328->g_10)) , 0UL) & p_1328->g_169) || l_843)), 0x1954L)) ^ l_843) && (*p_63)) , l_826) , l_867) == l_868) >= l_869[5][0][1]), 0)), l_870)), l_758)) && 5UL)), l_843))) != p_1328->g_309), 12))) <= l_843), l_843)) > 0x56L))), 0x4CL)) , 0x96049F21L) && p_1328->g_8);
                        if ((*p_61))
                            break;
                    }
                    if (l_843)
                        continue;
                }
            }
        }
    }
    p_1328->g_884 ^= (safe_sub_func_uint8_t_u_u((l_873 | (l_874[0][3] == l_876)), (((&l_746 != ((*l_882) = func_70(func_66(&p_1328->g_29, (**p_1328->g_694), p_1328->g_552, p_1328), ((safe_unary_minus_func_uint32_t_u(((p_1328->g_880 = (p_1328->g_879[0][7] = p_1328->g_169)) , p_1328->g_879[1][3]))) == (**p_64)), p_63, l_881, p_1328))) , (*l_876)) != l_883)));
    return p_1328->g_312;
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_29 p_1328->g_10 p_1328->g_117 p_1328->g_88 p_1328->g_299 p_1328->g_176 p_1328->g_97 p_1328->g_312 p_1328->g_375 p_1328->g_378 p_1328->g_310 p_1328->g_379 p_1328->g_3 p_1328->g_401 p_1328->g_444 p_1328->g_281 p_1328->g_309 p_1328->g_199 p_1328->g_99 p_1328->g_173 p_1328->g_469 p_1328->g_508 p_1328->g_8 p_1328->g_147 p_1328->g_557 p_1328->g_146 p_1328->g_573 p_1328->g_169 p_1328->g_171 p_1328->g_621 p_1328->g_552 p_1328->g_694
 * writes: p_1328->g_375 p_1328->g_378 p_1328->g_310 p_1328->g_309 p_1328->g_97 p_1328->g_401 p_1328->g_3 p_1328->g_117 p_1328->g_444 p_1328->g_281 p_1328->g_199 p_1328->g_99 p_1328->g_469 p_1328->g_176 p_1328->g_561 p_1328->g_573 p_1328->g_88 p_1328->g_299 p_1328->g_508 p_1328->g_147 p_1328->g_312
 */
int32_t ** func_66(int32_t ** p_67, uint16_t  p_68, uint16_t  p_69, struct S0 * p_1328)
{ /* block id: 17 */
    int32_t l_75 = 0L;
    int32_t **l_76 = &p_1328->g_29;
    int32_t *l_359 = &p_1328->g_310;
    int32_t l_360[4];
    int32_t **l_365 = &l_359;
    uint8_t *l_371 = (void*)0;
    int32_t l_372 = 0x32AC872CL;
    uint64_t *l_374 = &p_1328->g_375;
    int32_t l_414 = 0x517D0DB7L;
    uint64_t l_428 = 0x5ED67904A97B9DABL;
    int64_t ***l_441 = &p_1328->g_199;
    int64_t *l_449 = &p_1328->g_299[6];
    int64_t **l_448 = &l_449;
    int16_t l_564 = 7L;
    uint64_t l_618[2];
    uint64_t *l_642 = &p_1328->g_281;
    uint32_t l_716[10][2];
    int32_t l_719 = (-1L);
    uint64_t l_726 = 0xD8FC21A6DC296AF5L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_360[i] = 0x0851B738L;
    for (i = 0; i < 2; i++)
        l_618[i] = 1UL;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
            l_716[i][j] = 1UL;
    }
    l_359 = func_70(p_67, l_75, &p_1328->g_3, (((((((void*)0 == l_76) & (!(0x56L < (safe_sub_func_uint32_t_u_u((((**p_67) == (**p_67)) < ((p_1328->g_10 && (**l_76)) || 0x94L)), 1L))))) | 0xA91FL) , p_1328->g_10) > 0xC84D8BC8L) <= 18446744073709551614UL), p_1328);
    if (l_75)
        goto lbl_373;
lbl_373:
    l_372 ^= (((p_1328->g_117 || ((((l_360[3] || (safe_sub_func_int32_t_s_s(((safe_add_func_int8_t_s_s((p_1328->g_88 , ((*l_76) == ((*l_365) = (*p_67)))), ((safe_unary_minus_func_int32_t_s((((safe_add_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(((p_1328->g_299[8] <= ((-10L) >= (&p_1328->g_3 == l_371))) & 0xA5D55B61E1A32216L), 18446744073709551614UL)) & p_1328->g_88), p_69)) | p_1328->g_176[0]) ^ p_1328->g_299[2]))) == p_1328->g_97))) <= 0x40L), 0xADE01C4EL))) || (**p_67)) || 0x5323L) == (**l_76))) , p_1328->g_312) && 255UL);
    p_1328->g_378 = (((*l_374)--) , p_1328->g_378);
    for (p_1328->g_310 = 0; (p_1328->g_310 >= 1); p_1328->g_310 = safe_add_func_int32_t_s_s(p_1328->g_310, 1))
    { /* block id: 162 */
        uint64_t l_402 = 1UL;
        int64_t l_413 = 2L;
        int32_t l_432 = 0x58A82229L;
        uint32_t l_442 = 4294967290UL;
        int32_t l_485 = 0L;
        int32_t l_488 = 0x62B3784BL;
        int32_t l_489 = 0x16376FA2L;
        int32_t l_490 = 0x20F58733L;
        int32_t l_491 = 1L;
        uint16_t l_492 = 65534UL;
        int64_t **l_529 = (void*)0;
        uint64_t *l_556 = &p_1328->g_375;
        uint16_t *l_689[4] = {&p_1328->g_176[0],&p_1328->g_176[0],&p_1328->g_176[0],&p_1328->g_176[0]};
        int8_t *l_703 = &p_1328->g_508[1][4];
        int32_t *l_720 = &l_360[3];
        int32_t *l_721 = (void*)0;
        int32_t *l_722 = (void*)0;
        int32_t *l_723 = (void*)0;
        int32_t *l_724 = &l_360[3];
        int32_t *l_725[9] = {&l_491,&l_491,&l_491,&l_491,&l_491,&l_491,&l_491,&l_491,&l_491};
        int i;
        for (p_1328->g_309 = 0; (p_1328->g_309 != 4); p_1328->g_309 = safe_add_func_int8_t_s_s(p_1328->g_309, 1))
        { /* block id: 165 */
            uint32_t l_412[4][6] = {{4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL},{4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL},{4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL},{4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL}};
            int32_t l_415 = (-3L);
            uint8_t *l_422 = &p_1328->g_3;
            int8_t *l_429 = &p_1328->g_117;
            int8_t *l_443 = &p_1328->g_444;
            uint64_t *l_445 = &p_1328->g_281;
            uint32_t l_446 = 0UL;
            int32_t l_447 = (-8L);
            int32_t l_484 = 0L;
            int32_t l_486 = 0x6C15589BL;
            int32_t l_487[6][10] = {{0x4D93953AL,0x2F367FDDL,1L,0x06F23EEDL,(-9L),(-8L),0x16FF0CAEL,1L,6L,0x66AF252FL},{0x4D93953AL,0x2F367FDDL,1L,0x06F23EEDL,(-9L),(-8L),0x16FF0CAEL,1L,6L,0x66AF252FL},{0x4D93953AL,0x2F367FDDL,1L,0x06F23EEDL,(-9L),(-8L),0x16FF0CAEL,1L,6L,0x66AF252FL},{0x4D93953AL,0x2F367FDDL,1L,0x06F23EEDL,(-9L),(-8L),0x16FF0CAEL,1L,6L,0x66AF252FL},{0x4D93953AL,0x2F367FDDL,1L,0x06F23EEDL,(-9L),(-8L),0x16FF0CAEL,1L,6L,0x66AF252FL},{0x4D93953AL,0x2F367FDDL,1L,0x06F23EEDL,(-9L),(-8L),0x16FF0CAEL,1L,6L,0x66AF252FL}};
            int i, j;
            for (p_1328->g_97 = 5; (p_1328->g_97 <= (-26)); p_1328->g_97--)
            { /* block id: 168 */
                uint64_t *l_394[10][10] = {{&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,(void*)0,&p_1328->g_281},{&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,(void*)0,&p_1328->g_281},{&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,(void*)0,&p_1328->g_281},{&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,(void*)0,&p_1328->g_281},{&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,(void*)0,&p_1328->g_281},{&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,(void*)0,&p_1328->g_281},{&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,(void*)0,&p_1328->g_281},{&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,(void*)0,&p_1328->g_281},{&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,(void*)0,&p_1328->g_281},{&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,&p_1328->g_281,(void*)0,&p_1328->g_281}};
                uint64_t **l_395 = (void*)0;
                uint64_t **l_396 = (void*)0;
                uint64_t **l_397 = (void*)0;
                uint64_t **l_398 = &l_394[8][8];
                int32_t l_399 = (-1L);
                int64_t *l_400 = &p_1328->g_401;
                int32_t l_411 = (-4L);
                int i, j;
                l_415 = (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((p_69 , (((*l_398) = l_394[8][8]) == (void*)0)) == (((*l_400) = l_399) , ((p_69 && ((l_402 , (safe_lshift_func_uint16_t_u_s(p_1328->g_375, (((safe_div_func_uint16_t_u_u((((((safe_lshift_func_uint8_t_u_u((*p_1328->g_379), 2)) >= ((((safe_add_func_uint64_t_u_u(0x54266F60658F28B3L, 0x20C4BEEAC1E9BCD2L)) < p_68) ^ p_69) != l_399)) == 0x03C2L) , p_68) | (**p_67)), 0x3720L)) > l_411) & l_402)))) != p_1328->g_10)) , l_412[2][5]))), p_1328->g_10)), l_413)) > (-5L)), 5)), l_399)) , l_414) >= 0x3D87503FEBBA8051L);
                if (l_399)
                    break;
            }
            p_1328->g_99 &= (safe_div_func_int16_t_s_s(((0x28780C72L || (safe_add_func_int8_t_s_s((((*l_441) = (((((((safe_add_func_uint8_t_u_u(((*l_422)++), (safe_mul_func_int8_t_s_s((l_447 = (((safe_unary_minus_func_uint8_t_u(p_68)) & ((-1L) & (((*l_429) = (p_1328->g_401 >= l_428)) <= (safe_mul_func_int8_t_s_s((((l_432 = (**p_67)) != (safe_mul_func_int8_t_s_s(((l_415 = (((l_446 |= (safe_mod_func_uint64_t_u_u(((((safe_rshift_func_uint8_t_u_u((**l_365), ((((((safe_sub_func_int64_t_s_s(l_412[2][5], ((*l_445) ^= (((*l_443) |= (((&p_1328->g_199 == l_441) > l_442) > (**l_365))) && 0x36L)))) || p_69) ^ 1L) || 251UL) | p_1328->g_309) != 4294967295UL))) <= p_68) != (**p_1328->g_378)) >= p_1328->g_299[8]), p_69))) == l_442) != 18446744073709551612UL)) > l_413), (*l_359)))) , p_1328->g_312), l_412[2][5]))))) ^ p_68)), p_69)))) , (**l_76)) | (-3L)) <= p_1328->g_309) , 1L) || (**p_67)) , (*l_441))) == l_448), 0x36L))) || 0xE9L), 0x5543L));
            for (l_402 = 24; (l_402 <= 11); l_402--)
            { /* block id: 186 */
                int32_t *l_453 = &p_1328->g_99;
                uint8_t *l_468 = &p_1328->g_469[6][0][2];
                int32_t l_472 = (-10L);
                int32_t *l_473 = &p_1328->g_99;
                int32_t *l_474 = &l_432;
                int32_t *l_475 = &l_415;
                int32_t *l_476 = &l_372;
                int32_t *l_477 = &l_447;
                int32_t *l_478 = (void*)0;
                int32_t *l_479 = &l_432;
                int32_t *l_480 = &p_1328->g_99;
                int32_t *l_481 = &l_360[0];
                int32_t *l_482 = &l_414;
                int32_t *l_483[10] = {&l_432,&l_360[3],&l_432,&l_432,&l_360[3],&l_432,&l_432,&l_360[3],&l_432,&l_432};
                int i;
                (*l_453) ^= l_442;
                l_472 ^= ((0x0EL & (((((safe_lshift_func_int16_t_s_s(((*l_453) ^ (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((((((*l_422)--) | (*p_1328->g_379)) == 4L) | p_1328->g_173), ((**p_67) ^ (safe_rshift_func_uint8_t_u_s(l_402, 7))))), (safe_div_func_uint8_t_u_u(((p_69 > (--(*l_468))) || (**l_76)), p_1328->g_375)))) != l_432), l_412[2][5]))), 6)) , 1UL) || p_1328->g_310) <= l_402) , 0x18L)) && l_402);
                l_492--;
            }
            if ((**p_67))
                continue;
        }
        for (l_414 = 3; (l_414 <= 8); l_414 += 1)
        { /* block id: 197 */
            uint16_t *l_499[10][7][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
            int32_t *l_509 = (void*)0;
            int16_t l_516 = 0x0308L;
            int16_t *l_523 = &l_516;
            uint64_t *l_554[7][2] = {{(void*)0,&p_1328->g_375},{(void*)0,&p_1328->g_375},{(void*)0,&p_1328->g_375},{(void*)0,&p_1328->g_375},{(void*)0,&p_1328->g_375},{(void*)0,&p_1328->g_375},{(void*)0,&p_1328->g_375}};
            int8_t l_675 = (-6L);
            int i, j, k;
            for (l_75 = 0; (l_75 <= 1); l_75 += 1)
            { /* block id: 200 */
                return &p_1328->g_29;
            }
            l_488 |= (safe_add_func_uint8_t_u_u((((~(safe_div_func_uint32_t_u_u(p_1328->g_299[l_414], 0x68196360L))) && (((+(((-1L) & ((p_1328->g_176[0] = (&p_1328->g_173 == (void*)0)) & p_1328->g_299[l_414])) , ((safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((~(1UL >= (((((((p_69 >= ((safe_sub_func_uint64_t_u_u(p_1328->g_97, p_1328->g_508[2][3])) == p_1328->g_299[l_414])) | l_413) || 0x2F08D370L) < 0x6568A7B2L) > l_402) && 1L) , 0xFBCB91B29C366B71L))), p_1328->g_8)) , 0x7807EFA8L) | p_69), (*p_1328->g_379))), l_402)) , (**l_76)))) , p_1328->g_299[l_414]) & (-1L))) || p_68), (-1L)));
            if ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((p_68 , (safe_sub_func_int64_t_s_s((((0x7EA4L || l_516) , (safe_mod_func_int32_t_s_s(((l_488 = (((*l_523) = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(p_69, 11)), p_1328->g_147))) ^ (p_68 >= (safe_unary_minus_func_uint64_t_u((p_1328->g_299[l_414] & (safe_mul_func_int16_t_s_s((((p_1328->g_469[2][0][3] == (safe_div_func_uint8_t_u_u(((void*)0 != l_529), l_489))) != p_69) != p_69), (**l_365))))))))) >= 0UL), p_1328->g_299[8]))) && (-1L)), p_69))), 18446744073709551613UL)), 8)))
            { /* block id: 207 */
                uint64_t *l_536[3];
                int32_t l_537 = 1L;
                int32_t l_538 = 0x2FC706B5L;
                int32_t *l_551[3][10] = {{&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552},{&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552},{&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552,&p_1328->g_552}};
                int32_t l_553 = 0x0783AD00L;
                uint64_t **l_555[2][1];
                int64_t l_560 = 0x3140D1BA244A14E3L;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_536[i] = &l_428;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_555[i][j] = &l_554[2][0];
                }
                (*p_1328->g_557) = ((safe_div_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u(p_68, (l_402 , 0xBD246F481451BF93L))) > (((((safe_add_func_uint16_t_u_u(((l_537 ^= (p_1328->g_281 &= 0x8D2185EA6D7FB13DL)) <= (~(l_538 |= p_1328->g_176[0]))), ((*l_523) = ((((safe_mod_func_int8_t_s_s(p_68, (safe_div_func_uint32_t_u_u(p_1328->g_444, (safe_rshift_func_int16_t_s_s((0x7BA1BF31L != (((!(((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((l_554[3][1] = ((l_553 = ((*p_1328->g_379) , p_1328->g_147)) , l_554[3][1])) != l_556), p_68)) , l_413) <= (-1L)), 0x2E9BL)), p_1328->g_469[4][0][2])) <= p_69) && 8L)) || l_489) < p_1328->g_176[0])), p_1328->g_147)))))) == p_69) | (-1L)) >= l_402)))) , p_69) > p_68) < 248UL) , (**l_365))), (**l_76))) || p_68);
                for (l_489 = 0; (l_489 <= 1); l_489 += 1)
                { /* block id: 217 */
                    uint64_t *l_576[8];
                    int32_t *l_579 = &l_360[2];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_576[i] = &p_1328->g_375;
                    for (l_491 = 8; (l_491 >= 0); l_491 -= 1)
                    { /* block id: 220 */
                        return &p_1328->g_29;
                    }
                    if (((*p_1328->g_557) &= (safe_add_func_uint16_t_u_u((l_360[(l_489 + 1)] , ((~0x14CC2574L) != p_1328->g_3)), p_1328->g_146))))
                    { /* block id: 224 */
                        int64_t *l_571 = (void*)0;
                        int64_t *l_572 = &p_1328->g_401;
                        p_1328->g_99 &= (((p_69 & l_560) >= (l_449 == (p_1328->g_561 = l_556))) < (0x105D5F8B3FF2712DL && ((p_1328->g_573 |= (safe_rshift_func_uint16_t_u_s((l_564 != (((l_402 >= (safe_lshift_func_int8_t_s_s((((*l_572) = (safe_mul_func_uint8_t_u_u((*p_1328->g_379), (safe_rshift_func_uint16_t_u_u(0xAD6FL, p_1328->g_176[0]))))) , l_538), p_69))) & l_538) > p_68)), 11))) ^ l_360[(l_489 + 1)])));
                    }
                    else
                    { /* block id: 229 */
                        (*l_365) = ((safe_lshift_func_int8_t_s_s((((l_576[4] == (void*)0) < ((((p_69 , (((safe_mul_func_int8_t_s_s(p_68, (~((l_538 = p_1328->g_169) && ((p_69 = p_1328->g_176[0]) && (p_68 <= (((p_68 <= p_69) < p_68) ^ l_492))))))) == 0x1FF45E52L) != p_1328->g_508[0][8])) ^ (*p_1328->g_379)) == (-8L)) & (-6L))) | (**l_365)), 6)) , (*p_67));
                        l_579 = (*p_67);
                    }
                }
                for (p_1328->g_281 = 0; (p_1328->g_281 <= 1); p_1328->g_281 += 1)
                { /* block id: 238 */
                    int32_t l_580 = 7L;
                    for (p_1328->g_88 = 8; (p_1328->g_88 >= 0); p_1328->g_88 -= 1)
                    { /* block id: 241 */
                        int8_t *l_615 = (void*)0;
                        int8_t *l_616 = &p_1328->g_117;
                        int8_t *l_617 = &p_1328->g_508[2][1];
                        int i;
                        (*p_1328->g_621) = (l_537 |= (((p_1328->g_299[l_414] = l_580) , ((0x70L != l_580) || (l_488 = (((safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((((!((*l_617) ^= (safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((*l_616) ^= (safe_rshift_func_uint8_t_u_s((0x94L || ((safe_rshift_func_uint8_t_u_u(((p_1328->g_469[6][0][2] != (safe_div_func_int8_t_s_s((l_485 = (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((((((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((p_1328->g_299[8] >= (*p_1328->g_557)) , (safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((!(safe_rshift_func_uint16_t_u_u(0x8AFBL, (safe_lshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s((**l_76), p_1328->g_401)), l_580))))), p_1328->g_309)) > l_485), (**l_76)))), 0x2009L)), p_1328->g_171)) | (*l_359)) || 0x7AB71F1919631A1DL) ^ p_68) , p_1328->g_176[0]), l_580)) , 0x11L) == 2UL), p_1328->g_173)), 7))), 0x60L))) & p_1328->g_147), p_1328->g_146)) != (*p_1328->g_29))), p_1328->g_147))), p_1328->g_375)) | p_1328->g_444), 3)))) < p_1328->g_299[l_414]) <= l_618[1]), p_1328->g_8)), p_69)) , l_553) ^ 0x72C1L)))) < p_68));
                        if ((**p_67))
                            break;
                        (*l_365) = (*l_76);
                    }
                }
            }
            else
            { /* block id: 253 */
                uint64_t l_643 = 0x3A1A2C5576D7CC13L;
                int8_t *l_671 = (void*)0;
                int8_t *l_672 = (void*)0;
                int8_t *l_673 = (void*)0;
                int8_t *l_674 = &p_1328->g_444;
                int32_t l_676 = 0x7A4A0AA8L;
                int32_t *l_677 = (void*)0;
                int32_t *l_678 = &l_488;
                uint16_t *l_687 = &l_492;
                uint16_t **l_688[4][9] = {{&l_499[3][6][1],&l_499[3][6][1],(void*)0,&l_499[3][6][1],&l_499[3][6][1],&l_499[3][6][1],(void*)0,&l_499[3][6][1],&l_499[3][6][1]},{&l_499[3][6][1],&l_499[3][6][1],(void*)0,&l_499[3][6][1],&l_499[3][6][1],&l_499[3][6][1],(void*)0,&l_499[3][6][1],&l_499[3][6][1]},{&l_499[3][6][1],&l_499[3][6][1],(void*)0,&l_499[3][6][1],&l_499[3][6][1],&l_499[3][6][1],(void*)0,&l_499[3][6][1],&l_499[3][6][1]},{&l_499[3][6][1],&l_499[3][6][1],(void*)0,&l_499[3][6][1],&l_499[3][6][1],&l_499[3][6][1],(void*)0,&l_499[3][6][1],&l_499[3][6][1]}};
                uint32_t l_690[3];
                uint32_t *l_691 = &p_1328->g_147;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_690[i] = 0xFFDB15E0L;
                for (p_1328->g_444 = 1; (p_1328->g_444 >= 0); p_1328->g_444 -= 1)
                { /* block id: 256 */
                    int32_t l_622 = 0x04E01FDAL;
                    uint32_t *l_629[1];
                    uint64_t *l_641 = &p_1328->g_281;
                    uint64_t **l_640[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_644 = &l_360[2];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_629[i] = &l_442;
                    l_622 |= ((9L <= p_1328->g_97) , ((void*)0 == &l_441));
                    l_490 = ((*l_644) ^= (~(safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((p_1328->g_147 = 0xFB3AA35BL), p_69)), (p_1328->g_309 || ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((p_69 < (((**l_76) , (((safe_sub_func_uint32_t_u_u(((((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_1328->g_508[2][3], (&l_402 != (l_642 = &l_428)))), (*l_359))) | (-1L)) >= p_1328->g_8) < (**p_1328->g_378)), 4294967293UL)) , (**p_67)) || (*p_1328->g_29))) && 0x4257B8AE0E9BC08BL)) ^ p_1328->g_171) == l_643), l_485)), p_1328->g_508[2][3])) , 0UL)))), 255UL))));
                }
                if ((**p_67))
                    break;
                (*l_678) = (safe_add_func_uint8_t_u_u((l_529 != ((*l_441) = (*l_441))), ((safe_mod_func_uint32_t_u_u(((**l_76) != ((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((((safe_sub_func_int64_t_s_s((((255UL <= p_68) ^ (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_u(((*l_674) = (safe_sub_func_uint8_t_u_u((0x26D4330EA97492E2L > (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((p_1328->g_312 | (((safe_div_func_int32_t_s_s((**p_67), (safe_rshift_func_uint16_t_u_s(p_1328->g_299[8], 5)))) , (*l_359)) > (*l_359))), 7)) & 0L), (**p_67)))), p_68))), p_68)) & l_675) , p_69), 1))) ^ p_1328->g_310), l_676)) > p_69) > p_1328->g_147), p_1328->g_146)) < l_485) >= (-9L)), (**l_76))), l_516)) == 0x7BL)), 5UL)) ^ (**p_67))));
                (*l_678) = ((safe_lshift_func_int8_t_s_u(p_69, 1)) ^ ((*l_691) &= (((safe_add_func_uint16_t_u_u(p_1328->g_176[0], p_1328->g_552)) , (safe_rshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(((l_687 != (l_689[1] = &p_68)) <= (~p_68)), (l_690[1] && (*l_678)))), ((*p_1328->g_379) = 255UL)))) && 0x353F12FCL)));
            }
        }
        for (l_485 = 0; (l_485 == 9); ++l_485)
        { /* block id: 275 */
            uint64_t l_706 = 0x3987024C1A9A2601L;
            int32_t l_707 = 0x11C1B70EL;
            int32_t *l_708 = (void*)0;
            int32_t *l_709 = &l_707;
            int32_t *l_710 = &l_707;
            int32_t *l_711 = &l_488;
            int32_t l_712 = 0x416CDD5AL;
            int32_t *l_713 = &l_360[3];
            int32_t *l_714[7][6] = {{&p_1328->g_99,&l_360[3],&l_360[3],&p_1328->g_99,&p_1328->g_99,&l_360[3]},{&p_1328->g_99,&l_360[3],&l_360[3],&p_1328->g_99,&p_1328->g_99,&l_360[3]},{&p_1328->g_99,&l_360[3],&l_360[3],&p_1328->g_99,&p_1328->g_99,&l_360[3]},{&p_1328->g_99,&l_360[3],&l_360[3],&p_1328->g_99,&p_1328->g_99,&l_360[3]},{&p_1328->g_99,&l_360[3],&l_360[3],&p_1328->g_99,&p_1328->g_99,&l_360[3]},{&p_1328->g_99,&l_360[3],&l_360[3],&p_1328->g_99,&p_1328->g_99,&l_360[3]},{&p_1328->g_99,&l_360[3],&l_360[3],&p_1328->g_99,&p_1328->g_99,&l_360[3]}};
            int64_t l_715 = 0x57689E7654B5BBBCL;
            int i, j;
            (*p_1328->g_621) |= (p_1328->g_694 == &p_1328->g_695);
            l_707 &= ((safe_div_func_int64_t_s_s(1L, p_1328->g_299[8])) , (safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((&p_1328->g_173 == &p_1328->g_173), (&p_1328->g_508[2][3] != l_703))) == (safe_sub_func_int8_t_s_s(((p_68 > (((*l_449) = l_489) , p_69)) >= l_706), (*p_1328->g_379)))), l_706)));
            ++l_716[0][0];
            return &p_1328->g_29;
        }
        --l_726;
    }
    return p_67;
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_29
 * writes:
 */
int32_t * func_70(int32_t ** p_71, uint32_t  p_72, uint8_t * p_73, uint32_t  p_74, struct S0 * p_1328)
{ /* block id: 18 */
    uint16_t l_79 = 0x6E91L;
    uint16_t l_92[7];
    int32_t **l_115 = &p_1328->g_29;
    int32_t l_132 = (-1L);
    int32_t l_135[9][5] = {{0x7ED616DDL,4L,0x7ED616DDL,0x7ED616DDL,4L},{0x7ED616DDL,4L,0x7ED616DDL,0x7ED616DDL,4L},{0x7ED616DDL,4L,0x7ED616DDL,0x7ED616DDL,4L},{0x7ED616DDL,4L,0x7ED616DDL,0x7ED616DDL,4L},{0x7ED616DDL,4L,0x7ED616DDL,0x7ED616DDL,4L},{0x7ED616DDL,4L,0x7ED616DDL,0x7ED616DDL,4L},{0x7ED616DDL,4L,0x7ED616DDL,0x7ED616DDL,4L},{0x7ED616DDL,4L,0x7ED616DDL,0x7ED616DDL,4L},{0x7ED616DDL,4L,0x7ED616DDL,0x7ED616DDL,4L}};
    int32_t l_144 = 0x249038C8L;
    int64_t *l_185 = &p_1328->g_97;
    int64_t **l_184[3];
    uint8_t l_220 = 0xC8L;
    int32_t l_243 = 0x121B15B0L;
    uint64_t l_291 = 0x95AD5B88223CB447L;
    uint32_t l_302 = 4294967288UL;
    int32_t l_308 = 0x239D9E98L;
    int32_t l_357 = (-1L);
    int i, j;
    for (i = 0; i < 7; i++)
        l_92[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_184[i] = &l_185;
    return (*p_71);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1329;
    struct S0* p_1328 = &c_1329;
    struct S0 c_1330 = {
        255UL, // p_1328->g_3
        0x3AFC3718L, // p_1328->g_8
        0L, // p_1328->g_10
        &p_1328->g_10, // p_1328->g_29
        &p_1328->g_29, // p_1328->g_28
        &p_1328->g_3, // p_1328->g_52
        (-5L), // p_1328->g_88
        0x247AD075F43C6BD6L, // p_1328->g_97
        8L, // p_1328->g_99
        0x7AL, // p_1328->g_117
        (void*)0, // p_1328->g_133
        0L, // p_1328->g_146
        0xE19FA1A8L, // p_1328->g_147
        (void*)0, // p_1328->g_151
        1L, // p_1328->g_169
        (-9L), // p_1328->g_171
        0x0D09L, // p_1328->g_173
        {65531UL,65531UL}, // p_1328->g_176
        (void*)0, // p_1328->g_199
        {{(void*)0,(void*)0,&p_1328->g_199,&p_1328->g_199,(void*)0,&p_1328->g_199,&p_1328->g_199,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1328->g_199,&p_1328->g_199,(void*)0,&p_1328->g_199,&p_1328->g_199,(void*)0,(void*)0}}, // p_1328->g_198
        0x593405E96FBF67ACL, // p_1328->g_281
        (void*)0, // p_1328->g_286
        {0x6125C9404836C24DL,1L,0x6125C9404836C24DL,0x6125C9404836C24DL,1L,0x6125C9404836C24DL,0x6125C9404836C24DL,1L,0x6125C9404836C24DL}, // p_1328->g_299
        0x2C6CF885L, // p_1328->g_309
        0x1CD08036L, // p_1328->g_310
        0x99L, // p_1328->g_312
        (void*)0, // p_1328->g_316
        18446744073709551615UL, // p_1328->g_375
        &p_1328->g_312, // p_1328->g_379
        &p_1328->g_379, // p_1328->g_378
        (-1L), // p_1328->g_401
        (-1L), // p_1328->g_444
        {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}}, // p_1328->g_452
        {{{9UL,0x6AL,0x6AL,9UL,9UL}},{{9UL,0x6AL,0x6AL,9UL,9UL}},{{9UL,0x6AL,0x6AL,9UL,9UL}},{{9UL,0x6AL,0x6AL,9UL,9UL}},{{9UL,0x6AL,0x6AL,9UL,9UL}},{{9UL,0x6AL,0x6AL,9UL,9UL}},{{9UL,0x6AL,0x6AL,9UL,9UL}},{{9UL,0x6AL,0x6AL,9UL,9UL}},{{9UL,0x6AL,0x6AL,9UL,9UL}}}, // p_1328->g_469
        {{(-4L),0x44L,(-4L),(-4L),0x44L,(-4L),(-4L),0x44L,(-4L),(-4L)},{(-4L),0x44L,(-4L),(-4L),0x44L,(-4L),(-4L),0x44L,(-4L),(-4L)},{(-4L),0x44L,(-4L),(-4L),0x44L,(-4L),(-4L),0x44L,(-4L),(-4L)}}, // p_1328->g_508
        1L, // p_1328->g_552
        &p_1328->g_309, // p_1328->g_557
        &p_1328->g_401, // p_1328->g_561
        1L, // p_1328->g_573
        {{&p_1328->g_99,&p_1328->g_99,&p_1328->g_99,&p_1328->g_99,&p_1328->g_99,&p_1328->g_99}}, // p_1328->g_619
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1328->g_620
        &p_1328->g_309, // p_1328->g_621
        65535UL, // p_1328->g_696
        &p_1328->g_696, // p_1328->g_695
        &p_1328->g_695, // p_1328->g_694
        1UL, // p_1328->g_730
        (void*)0, // p_1328->g_743
        &p_1328->g_310, // p_1328->g_744
        (void*)0, // p_1328->g_831
        {{0x5D31D18067FBA2C7L,0x5D31D18067FBA2C7L,0x19AC03D243636E7EL,0x27AB450EA0A0DC23L,0x72D28F6F6136BFEDL,0x27AB450EA0A0DC23L,0x19AC03D243636E7EL,0x5D31D18067FBA2C7L},{0x5D31D18067FBA2C7L,0x5D31D18067FBA2C7L,0x19AC03D243636E7EL,0x27AB450EA0A0DC23L,0x72D28F6F6136BFEDL,0x27AB450EA0A0DC23L,0x19AC03D243636E7EL,0x5D31D18067FBA2C7L}}, // p_1328->g_879
        (-7L), // p_1328->g_880
        255UL, // p_1328->g_884
        0x06D858C8A4806FE6L, // p_1328->g_1024
        0L, // p_1328->g_1067
        0x2726L, // p_1328->g_1089
        0x8FE543FCL, // p_1328->g_1125
        0x3DL, // p_1328->g_1149
        (void*)0, // p_1328->g_1297
        (void*)0, // p_1328->g_1299
    };
    c_1329 = c_1330;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1328);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1328->g_3, "p_1328->g_3", print_hash_value);
    transparent_crc(p_1328->g_8, "p_1328->g_8", print_hash_value);
    transparent_crc(p_1328->g_10, "p_1328->g_10", print_hash_value);
    transparent_crc(p_1328->g_88, "p_1328->g_88", print_hash_value);
    transparent_crc(p_1328->g_97, "p_1328->g_97", print_hash_value);
    transparent_crc(p_1328->g_99, "p_1328->g_99", print_hash_value);
    transparent_crc(p_1328->g_117, "p_1328->g_117", print_hash_value);
    transparent_crc(p_1328->g_146, "p_1328->g_146", print_hash_value);
    transparent_crc(p_1328->g_147, "p_1328->g_147", print_hash_value);
    transparent_crc(p_1328->g_169, "p_1328->g_169", print_hash_value);
    transparent_crc(p_1328->g_171, "p_1328->g_171", print_hash_value);
    transparent_crc(p_1328->g_173, "p_1328->g_173", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1328->g_176[i], "p_1328->g_176[i]", print_hash_value);

    }
    transparent_crc(p_1328->g_281, "p_1328->g_281", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1328->g_299[i], "p_1328->g_299[i]", print_hash_value);

    }
    transparent_crc(p_1328->g_309, "p_1328->g_309", print_hash_value);
    transparent_crc(p_1328->g_310, "p_1328->g_310", print_hash_value);
    transparent_crc(p_1328->g_312, "p_1328->g_312", print_hash_value);
    transparent_crc(p_1328->g_375, "p_1328->g_375", print_hash_value);
    transparent_crc(p_1328->g_401, "p_1328->g_401", print_hash_value);
    transparent_crc(p_1328->g_444, "p_1328->g_444", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1328->g_469[i][j][k], "p_1328->g_469[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1328->g_508[i][j], "p_1328->g_508[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1328->g_552, "p_1328->g_552", print_hash_value);
    transparent_crc(p_1328->g_573, "p_1328->g_573", print_hash_value);
    transparent_crc(p_1328->g_696, "p_1328->g_696", print_hash_value);
    transparent_crc(p_1328->g_730, "p_1328->g_730", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1328->g_879[i][j], "p_1328->g_879[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1328->g_880, "p_1328->g_880", print_hash_value);
    transparent_crc(p_1328->g_884, "p_1328->g_884", print_hash_value);
    transparent_crc(p_1328->g_1024, "p_1328->g_1024", print_hash_value);
    transparent_crc(p_1328->g_1067, "p_1328->g_1067", print_hash_value);
    transparent_crc(p_1328->g_1089, "p_1328->g_1089", print_hash_value);
    transparent_crc(p_1328->g_1125, "p_1328->g_1125", print_hash_value);
    transparent_crc(p_1328->g_1149, "p_1328->g_1149", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
