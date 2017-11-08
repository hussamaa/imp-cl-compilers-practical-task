// -g 6,12,74 -l 3,4,2
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


// Seed: 1103040518

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_5;
    int32_t g_20[1][3];
    int32_t g_24;
    int32_t g_25;
    int32_t ** volatile g_79;
    int32_t *g_86[8][1];
    int32_t **g_85[10][1];
    int16_t g_92[9][8];
    uint16_t g_108;
    volatile int8_t g_125;
    uint32_t g_144;
    uint8_t g_153;
    int32_t * volatile g_155[7];
    uint16_t *g_166[10];
    uint16_t **g_165;
    uint16_t *** volatile g_164;
    uint16_t g_197;
    volatile int64_t g_208[8];
    int32_t *g_238[4][3][3];
    int8_t g_243;
    uint64_t g_253;
    uint32_t g_263;
    uint32_t g_266;
    uint64_t g_274;
    uint8_t *g_284;
    uint8_t *g_285;
    int8_t *g_324;
    int32_t g_343;
    int32_t *g_350;
    int32_t ** volatile g_374;
    int64_t g_419;
    uint16_t ****g_483;
    int8_t g_491[7];
    int16_t g_568;
    uint8_t **g_639;
    int32_t * volatile g_645[8];
    int64_t g_673;
    int32_t * volatile g_675;
    uint16_t ***g_683;
    int64_t *g_708;
    int32_t * volatile g_726;
    uint32_t g_745[6];
    volatile int32_t g_794;
    uint32_t g_807;
    int32_t * volatile g_812;
    int32_t *g_851;
    uint32_t g_857;
    int16_t *g_870[1][5][7];
    int16_t **g_869[1][7][9];
    int32_t ** volatile g_873[9];
    int32_t ** volatile g_874[3];
    int32_t ** volatile g_875;
    uint64_t g_881;
    int32_t ** volatile g_884;
    int32_t g_906;
    int64_t g_1081[7][4][4];
    int32_t * volatile * volatile g_1148;
    int32_t * volatile * volatile g_1149;
    uint16_t g_1164[5][8][6];
    int32_t ** volatile g_1165;
    int32_t g_1200;
    uint32_t * volatile g_1275;
    uint32_t * volatile *g_1274;
    int16_t ***g_1277;
    int8_t g_1288;
    int32_t g_1291[1][8][7];
    int8_t g_1300;
    volatile int16_t g_1301;
    int32_t g_1319;
    int64_t g_1339;
    int32_t g_1351;
    uint32_t *g_1372;
    uint32_t **g_1371;
    int32_t g_1407;
    volatile int64_t * volatile g_1409;
    volatile int64_t * volatile *g_1408;
    volatile int64_t * volatile ** volatile g_1410[10][7][3];
    volatile uint32_t g_1413;
    int64_t *g_1434;
    uint64_t *g_1440;
    int32_t *g_1466[1][5];
    int16_t **g_1479[3];
    int16_t *** volatile g_1478;
    int32_t ** volatile g_1497;
    int32_t ** volatile g_1498;
    volatile uint64_t ** volatile g_1511;
    uint64_t g_1538;
    uint64_t **g_1550;
    int8_t g_1562;
    uint8_t g_1584;
    int64_t **g_1587;
    uint8_t g_1591[9][1];
    int32_t ** volatile g_1618;
    uint16_t g_1639;
    int16_t g_1644[8];
    int32_t ** volatile g_1692;
    uint16_t *g_1734;
    int32_t *g_1756;
    uint32_t *g_1793;
    uint32_t **g_1792;
    uint16_t g_1824;
    int64_t * volatile * volatile g_1877[6];
    int64_t * volatile * volatile * volatile g_1876[1];
    int64_t * volatile * volatile * volatile *g_1875;
    int64_t * volatile * volatile * volatile **g_1874[6];
    volatile uint16_t g_1888;
    volatile int32_t g_1921;
    volatile uint32_t g_1941[8][7][2];
    int32_t * volatile * volatile g_1964;
    uint64_t * volatile g_1982;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S0 * p_2028);
uint8_t  func_12(uint32_t  p_13, int32_t  p_14, struct S0 * p_2028);
int32_t * func_26(int32_t * p_27, int16_t  p_28, int32_t * p_29, int64_t  p_30, struct S0 * p_2028);
int32_t ** func_33(uint64_t  p_34, uint64_t  p_35, uint8_t  p_36, uint64_t  p_37, uint32_t  p_38, struct S0 * p_2028);
int64_t  func_48(uint64_t  p_49, int32_t ** p_50, int16_t  p_51, int32_t * p_52, int32_t * p_53, struct S0 * p_2028);
uint32_t  func_56(int32_t ** p_57, struct S0 * p_2028);
int32_t  func_60(int64_t  p_61, uint32_t  p_62, struct S0 * p_2028);
int32_t ** func_67(int32_t ** p_68, uint32_t  p_69, int32_t * p_70, int32_t  p_71, struct S0 * p_2028);
int32_t ** func_72(int16_t  p_73, uint8_t  p_74, int8_t  p_75, int32_t ** p_76, struct S0 * p_2028);
int32_t ** func_81(int32_t ** p_82, uint64_t  p_83, int32_t * p_84, struct S0 * p_2028);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2028->g_5 p_2028->g_24 p_2028->g_25 p_2028->g_20 p_2028->g_374 p_2028->g_86 p_2028->g_851 p_2028->g_857 p_2028->g_869 p_2028->g_673 p_2028->g_812 p_2028->g_92 p_2028->g_708 p_2028->g_875 p_2028->g_884 p_2028->g_274 p_2028->g_263 p_2028->g_639 p_2028->g_284 p_2028->g_153 p_2028->g_285 p_2028->g_745 p_2028->g_675 p_2028->g_243 p_2028->g_568 p_2028->g_144 p_2028->g_165 p_2028->g_166 p_2028->g_108 p_2028->g_683 p_2028->g_343 p_2028->g_208 p_2028->g_350 p_2028->g_491 p_2028->g_807 p_2028->g_1081 p_2028->g_164 p_2028->g_253 p_2028->g_645 p_2028->g_1149 p_2028->g_1165 p_2028->g_794 p_2028->g_266 p_2028->g_1200 p_2028->g_1164 p_2028->g_197 p_2028->g_1274 p_2028->g_726 p_2028->g_1300 p_2028->g_1301 p_2028->g_1319 p_2028->g_1339 p_2028->g_1371 p_2028->g_1372 p_2028->g_1351 p_2028->g_1277 p_2028->g_1408 p_2028->g_1413 p_2028->g_1409 p_2028->g_881 p_2028->g_1478 p_2028->g_1497 p_2028->g_1498 p_2028->g_419 p_2028->g_1291 p_2028->g_1511 p_2028->g_1288 p_2028->g_1466 p_2028->g_1982 p_2028->g_1591 p_2028->g_1756
 * writes: p_2028->g_5 p_2028->g_24 p_2028->g_25 p_2028->g_20 p_2028->g_869 p_2028->g_568 p_2028->g_92 p_2028->g_851 p_2028->g_881 p_2028->g_86 p_2028->g_274 p_2028->g_253 p_2028->g_153 p_2028->g_491 p_2028->g_243 p_2028->g_343 p_2028->g_419 p_2028->g_1081 p_2028->g_108 p_2028->g_645 p_2028->g_673 p_2028->g_1164 p_2028->g_197 p_2028->g_263 p_2028->g_639 p_2028->g_1277 p_2028->g_807 p_2028->g_1200 p_2028->g_1351 p_2028->g_683 p_2028->g_1339 p_2028->g_1407 p_2028->g_1288 p_2028->g_1319 p_2028->g_1434 p_2028->g_1440 p_2028->g_165 p_2028->g_1466 p_2028->g_1479 p_2028->g_238 p_2028->g_266 p_2028->g_483
 */
int16_t  func_1(struct S0 * p_2028)
{ /* block id: 4 */
    int8_t l_2 = 1L;
    int32_t *l_3 = (void*)0;
    int32_t *l_4 = &p_2028->g_5;
    int16_t l_1078[1][9] = {{0x423DL,0x423DL,0x423DL,0x423DL,0x423DL,0x423DL,0x423DL,0x423DL,0x423DL}};
    int32_t l_1100[7][9] = {{0x143F5835L,0x79072AE4L,0x101E1E1DL,0x583B70B9L,0x79072AE4L,0x583B70B9L,0x101E1E1DL,0x79072AE4L,0x143F5835L},{0x143F5835L,0x79072AE4L,0x101E1E1DL,0x583B70B9L,0x79072AE4L,0x583B70B9L,0x101E1E1DL,0x79072AE4L,0x143F5835L},{0x143F5835L,0x79072AE4L,0x101E1E1DL,0x583B70B9L,0x79072AE4L,0x583B70B9L,0x101E1E1DL,0x79072AE4L,0x143F5835L},{0x143F5835L,0x79072AE4L,0x101E1E1DL,0x583B70B9L,0x79072AE4L,0x583B70B9L,0x101E1E1DL,0x79072AE4L,0x143F5835L},{0x143F5835L,0x79072AE4L,0x101E1E1DL,0x583B70B9L,0x79072AE4L,0x583B70B9L,0x101E1E1DL,0x79072AE4L,0x143F5835L},{0x143F5835L,0x79072AE4L,0x101E1E1DL,0x583B70B9L,0x79072AE4L,0x583B70B9L,0x101E1E1DL,0x79072AE4L,0x143F5835L},{0x143F5835L,0x79072AE4L,0x101E1E1DL,0x583B70B9L,0x79072AE4L,0x583B70B9L,0x101E1E1DL,0x79072AE4L,0x143F5835L}};
    int8_t l_1158[10][2][4] = {{{0L,(-1L),(-4L),0x1FL},{0L,(-1L),(-4L),0x1FL}},{{0L,(-1L),(-4L),0x1FL},{0L,(-1L),(-4L),0x1FL}},{{0L,(-1L),(-4L),0x1FL},{0L,(-1L),(-4L),0x1FL}},{{0L,(-1L),(-4L),0x1FL},{0L,(-1L),(-4L),0x1FL}},{{0L,(-1L),(-4L),0x1FL},{0L,(-1L),(-4L),0x1FL}},{{0L,(-1L),(-4L),0x1FL},{0L,(-1L),(-4L),0x1FL}},{{0L,(-1L),(-4L),0x1FL},{0L,(-1L),(-4L),0x1FL}},{{0L,(-1L),(-4L),0x1FL},{0L,(-1L),(-4L),0x1FL}},{{0L,(-1L),(-4L),0x1FL},{0L,(-1L),(-4L),0x1FL}},{{0L,(-1L),(-4L),0x1FL},{0L,(-1L),(-4L),0x1FL}}};
    uint64_t l_1159 = 0xF2AEB9D20A01535DL;
    uint16_t l_1162 = 0x5F50L;
    int16_t ***l_1276 = (void*)0;
    int32_t *l_1278 = &p_2028->g_5;
    int32_t l_1290 = (-1L);
    int16_t l_1310 = 0x75B7L;
    uint32_t l_1326[2][6] = {{0x65A201FCL,0x65A201FCL,0x65A201FCL,0x65A201FCL,0x65A201FCL,0x65A201FCL},{0x65A201FCL,0x65A201FCL,0x65A201FCL,0x65A201FCL,0x65A201FCL,0x65A201FCL}};
    uint8_t ***l_1389 = &p_2028->g_639;
    uint16_t **l_1394 = &p_2028->g_166[3];
    int16_t *l_1446 = &l_1078[0][0];
    int64_t *l_1447 = &p_2028->g_673;
    uint16_t l_1457[7][10][3] = {{{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL}},{{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL}},{{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL}},{{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL}},{{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL}},{{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL}},{{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL},{0x4912L,65535UL,0UL}}};
    int16_t l_1465 = 0x7A41L;
    int8_t l_1472 = 0L;
    int32_t *l_1496 = &p_2028->g_1319;
    int32_t l_1510 = 4L;
    int32_t l_1513 = 0x375599F4L;
    uint16_t l_1523 = 4UL;
    int8_t l_1572 = 0L;
    int8_t l_1686[3];
    uint16_t l_1701 = 0x6EB7L;
    int16_t l_1704[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int8_t **l_1776 = &p_2028->g_324;
    uint16_t l_1880 = 0x6AE7L;
    uint16_t *****l_1902 = (void*)0;
    int8_t l_1918 = 0x24L;
    int64_t l_1931 = 0x304E80792153B372L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1686[i] = (-8L);
    if (((*l_4) &= l_2))
    { /* block id: 6 */
        int16_t l_1071 = 0L;
        int32_t l_1084 = 0x399713E8L;
        int8_t l_1089 = 0x0DL;
        int32_t l_1097 = (-1L);
        int32_t l_1106 = (-6L);
        int32_t l_1107 = 0L;
        uint32_t l_1108 = 0xF2B8F704L;
        uint16_t ***l_1163 = &p_2028->g_165;
        for (l_2 = (-26); (l_2 <= (-25)); l_2++)
        { /* block id: 9 */
            uint32_t l_8[3];
            int32_t l_1090[3];
            uint32_t l_1112 = 4294967294UL;
            int32_t *l_1151 = &l_1107;
            int32_t *l_1152 = &l_1100[2][5];
            int32_t *l_1153 = &l_1100[1][1];
            int32_t *l_1154 = &l_1100[5][5];
            int32_t *l_1155 = &l_1106;
            int32_t *l_1156 = (void*)0;
            int32_t *l_1157[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (i = 0; i < 3; i++)
                l_8[i] = 0x8C08872FL;
            for (i = 0; i < 3; i++)
                l_1090[i] = 0x2146A6B5L;
            for (p_2028->g_5 = 0; (p_2028->g_5 <= 2); p_2028->g_5 += 1)
            { /* block id: 12 */
                int32_t l_9[10][6] = {{0L,0x5C6F8B8AL,6L,0x72BA75A5L,(-2L),0L},{0L,0x5C6F8B8AL,6L,0x72BA75A5L,(-2L),0L},{0L,0x5C6F8B8AL,6L,0x72BA75A5L,(-2L),0L},{0L,0x5C6F8B8AL,6L,0x72BA75A5L,(-2L),0L},{0L,0x5C6F8B8AL,6L,0x72BA75A5L,(-2L),0L},{0L,0x5C6F8B8AL,6L,0x72BA75A5L,(-2L),0L},{0L,0x5C6F8B8AL,6L,0x72BA75A5L,(-2L),0L},{0L,0x5C6F8B8AL,6L,0x72BA75A5L,(-2L),0L},{0L,0x5C6F8B8AL,6L,0x72BA75A5L,(-2L),0L},{0L,0x5C6F8B8AL,6L,0x72BA75A5L,(-2L),0L}};
                int32_t *l_1068 = &p_2028->g_343;
                int64_t *l_1079 = &p_2028->g_419;
                int64_t *l_1080 = &p_2028->g_1081[3][0][1];
                int16_t l_1111 = 0x020AL;
                uint8_t ***l_1125 = &p_2028->g_639;
                int16_t l_1145 = 0x6DA7L;
                int32_t l_1146 = 0x17F58D14L;
                int i, j;
                l_9[8][0] = l_8[p_2028->g_5];
                (*l_1068) &= (safe_rshift_func_uint8_t_u_u(func_12(p_2028->g_5, (&p_2028->g_5 != (void*)0), p_2028), 7));
                if (((((safe_rshift_func_uint16_t_u_u((&p_2028->g_683 == &p_2028->g_164), 8)) >= (*l_1068)) >= (l_1071 > (*p_2028->g_285))) , (l_1071 , (safe_add_func_uint64_t_u_u((0x0CL ^ (safe_sub_func_int32_t_s_s(((((*l_1080) = ((*l_1079) = (safe_lshift_func_int16_t_s_s(l_1078[0][7], 8)))) < ((safe_mul_func_int16_t_s_s((p_2028->g_208[0] && (*p_2028->g_284)), l_1084)) ^ (*p_2028->g_350))) , (*l_1068)), 4L))), 1L)))))
                { /* block id: 556 */
                    uint64_t l_1091[6][3] = {{18446744073709551611UL,18446744073709551611UL,0x691B81D536C50783L},{18446744073709551611UL,18446744073709551611UL,0x691B81D536C50783L},{18446744073709551611UL,18446744073709551611UL,0x691B81D536C50783L},{18446744073709551611UL,18446744073709551611UL,0x691B81D536C50783L},{18446744073709551611UL,18446744073709551611UL,0x691B81D536C50783L},{18446744073709551611UL,18446744073709551611UL,0x691B81D536C50783L}};
                    int8_t *l_1096 = &p_2028->g_491[4];
                    int i, j;
                    (*l_1068) = (safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s(((*l_4) && l_1089), 0)) & (l_1090[0] ^= (*l_1068))) & ((((((void*)0 == &p_2028->g_869[0][2][8]) , 1UL) && (l_1091[4][1] ^ (~((*p_2028->g_285) |= 255UL)))) < (safe_div_func_uint16_t_u_u((((*l_1096) = (safe_rshift_func_int8_t_s_u(p_2028->g_491[1], 4))) && (*l_4)), (-2L)))) == 3UL)), 14));
                }
                else
                { /* block id: 561 */
                    int32_t *l_1098 = &p_2028->g_20[0][1];
                    int32_t *l_1099 = &p_2028->g_25;
                    int32_t l_1101 = 0x65A918D8L;
                    int32_t *l_1102 = &l_1101;
                    int32_t *l_1103 = &p_2028->g_24;
                    int32_t *l_1104 = &l_9[6][5];
                    int32_t *l_1105[4][1][5] = {{{&l_1090[0],&l_1090[0],&l_1090[0],&l_1090[0],&l_1090[0]}},{{&l_1090[0],&l_1090[0],&l_1090[0],&l_1090[0],&l_1090[0]}},{{&l_1090[0],&l_1090[0],&l_1090[0],&l_1090[0],&l_1090[0]}},{{&l_1090[0],&l_1090[0],&l_1090[0],&l_1090[0],&l_1090[0]}}};
                    int i, j, k;
                    l_1090[0] = ((void*)0 == &p_2028->g_881);
                    l_1108++;
                    ++l_1112;
                    if ((safe_mod_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u(l_8[2], (*l_4))) >= (safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(((0x7F0A2D2E6813144BL | p_2028->g_807) | (*l_1068)), (safe_add_func_int8_t_s_s((p_2028->g_1081[3][0][1] > l_1112), (l_1125 != l_1125))))), 3))) >= l_1090[0]) || l_8[1]), (*l_4))))
                    { /* block id: 565 */
                        uint32_t l_1130 = 4294967295UL;
                        (**p_2028->g_884) = (0x64F6L || (((p_2028->g_208[3] <= (safe_mul_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(l_1130, (*p_2028->g_851))) & (safe_lshift_func_uint8_t_u_s((*p_2028->g_285), 0))) && ((*l_1068) = ((safe_sub_func_uint16_t_u_u(l_1112, ((safe_mul_func_int16_t_s_s((1L <= (*l_1068)), l_1108)) >= 0x4D4CL))) && (*l_1068)))), l_1130))) && (*l_4)) == (*l_1098)));
                    }
                    else
                    { /* block id: 568 */
                        (*l_1102) = ((1UL | 4L) || (safe_rshift_func_int8_t_s_s((((***p_2028->g_164) && 65535UL) , ((safe_mul_func_uint16_t_u_u(1UL, ((***p_2028->g_683)--))) >= ((&l_2 != (void*)0) , (safe_mod_func_int32_t_s_s(((p_2028->g_5 , (((*l_1068) < p_2028->g_253) <= l_1145)) | 0x734DL), (-5L)))))), 6)));
                        if (l_1146)
                            continue;
                    }
                }
                for (p_2028->g_274 = 0; (p_2028->g_274 <= 2); p_2028->g_274 += 1)
                { /* block id: 576 */
                    if ((*l_4))
                    { /* block id: 577 */
                        if ((*l_1068))
                            break;
                        if ((*l_1068))
                            break;
                        if ((*p_2028->g_851))
                            continue;
                        (*l_1068) = (*p_2028->g_851);
                    }
                    else
                    { /* block id: 582 */
                        uint32_t l_1147 = 4294967288UL;
                        return l_1147;
                    }
                    for (p_2028->g_568 = 0; (p_2028->g_568 <= 7); p_2028->g_568 += 1)
                    { /* block id: 587 */
                        int32_t * volatile *l_1150 = &l_1068;
                        int i;
                        p_2028->g_645[(p_2028->g_274 + 3)] = p_2028->g_645[(p_2028->g_5 + 3)];
                        (*p_2028->g_1149) = (l_1090[1] , p_2028->g_645[(p_2028->g_274 + 2)]);
                        (*l_1150) = p_2028->g_645[p_2028->g_568];
                        if (l_1106)
                            break;
                    }
                    for (p_2028->g_243 = 0; (p_2028->g_243 <= 2); p_2028->g_243 += 1)
                    { /* block id: 595 */
                        return (*l_4);
                    }
                }
            }
            l_1159++;
        }
        (*p_2028->g_1165) = func_26(&l_1097, (((l_1162 , 0xF2L) , l_1163) == &p_2028->g_165), ((*p_2028->g_875) = &l_1100[5][4]), (p_2028->g_1164[4][2][3] = ((*p_2028->g_708) = (-1L))), p_2028);
    }
    else
    { /* block id: 606 */
        uint8_t l_1174[9] = {0x9FL,0x8AL,0x9FL,0x9FL,0x8AL,0x9FL,0x9FL,0x8AL,0x9FL};
        uint16_t **l_1197 = &p_2028->g_166[9];
        uint16_t l_1198 = 65526UL;
        int64_t *l_1199 = &p_2028->g_1081[0][3][0];
        int32_t **l_1201 = &p_2028->g_851;
        int16_t *l_1202 = &p_2028->g_92[8][4];
        int32_t l_1212 = 0x26462125L;
        uint32_t *l_1222 = &p_2028->g_263;
        uint32_t **l_1221 = &l_1222;
        int16_t l_1223 = (-5L);
        uint16_t l_1227 = 0x5EC9L;
        int32_t l_1289 = 0x078B5164L;
        int32_t l_1292 = 1L;
        int32_t l_1293[3];
        uint32_t l_1294[10] = {4294967286UL,0xEEAFA514L,8UL,0xEEAFA514L,4294967286UL,4294967286UL,0xEEAFA514L,8UL,0xEEAFA514L,4294967286UL};
        int8_t *l_1304 = (void*)0;
        int32_t *l_1309 = (void*)0;
        int16_t l_1429 = 0x4665L;
        int32_t *l_1464 = &p_2028->g_1351;
        uint64_t **l_1469 = &p_2028->g_1440;
        int32_t *l_1470 = &l_1290;
        int i;
        for (i = 0; i < 3; i++)
            l_1293[i] = 0L;
        if ((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((*l_1202) = (safe_sub_func_uint32_t_u_u((!(safe_sub_func_int32_t_s_s(l_1174[2], (safe_sub_func_int8_t_s_s((((((*l_1201) = (((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((0x7788828E2686CE28L & (((safe_div_func_int64_t_s_s(l_1174[1], p_2028->g_20[0][1])) < (safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((*l_1199) &= (((l_1174[7] || ((safe_div_func_uint64_t_u_u(l_1174[8], l_1174[2])) | (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((p_2028->g_794 , (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((void*)0 == l_1197), l_1174[2])), 2))) >= l_1174[2]), 1)) ^ (*l_4)), l_1198)))) < 0x5C1ACAB2L) ^ p_2028->g_24)), p_2028->g_253)), p_2028->g_266))) <= p_2028->g_1200)) && p_2028->g_1164[3][3][0]), 0xE099622A80A36433L)), (-5L))) >= l_1174[3]) , (*p_2028->g_884))) == &l_1100[5][8]) | (**p_2028->g_639)) > p_2028->g_197), (*p_2028->g_285)))))), (*p_2028->g_350)))), (**p_2028->g_165))), (-1L))))
        { /* block id: 610 */
            uint32_t **l_1209 = (void*)0;
            uint16_t *l_1213 = &l_1162;
            uint64_t l_1220 = 7UL;
            int32_t l_1224 = 1L;
            uint32_t l_1267 = 1UL;
            int32_t l_1271 = 0x3A056341L;
            uint16_t ***l_1376 = &l_1197;
            int64_t l_1390 = 1L;
            if ((safe_rshift_func_uint16_t_u_s(((**p_2028->g_165)++), (((**p_2028->g_639) & (**l_1201)) <= ((safe_mul_func_uint8_t_u_u((l_1209 == ((p_2028->g_243 || ((**l_1201) , (safe_div_func_uint16_t_u_u(((*l_1213)++), ((*l_1202) &= ((((**p_2028->g_1149) >= (~(safe_lshift_func_int16_t_s_s(0x3054L, 1)))) | (((((safe_mul_func_int8_t_s_s((((*l_4) , 0x1828L) <= l_1220), p_2028->g_5)) < 0x2EL) > p_2028->g_745[4]) ^ (*l_4)) , 0x71BB5148L)) || l_1220)))))) , l_1221)), (-1L))) , l_1223)))))
            { /* block id: 614 */
                int32_t l_1225 = 1L;
                int32_t *l_1226[8];
                int64_t l_1268 = 0x144CA1308123D9E2L;
                uint32_t *l_1270 = &p_2028->g_857;
                int64_t l_1287 = (-1L);
                int8_t l_1349 = (-5L);
                int64_t *l_1354 = &p_2028->g_673;
                uint16_t l_1367 = 0UL;
                int i;
                for (i = 0; i < 8; i++)
                    l_1226[i] = (void*)0;
                l_1227++;
                for (p_2028->g_197 = 0; (p_2028->g_197 <= 1); p_2028->g_197++)
                { /* block id: 618 */
                    uint8_t **l_1244 = &p_2028->g_285;
                    int32_t l_1264 = 0x1E106D41L;
                    uint64_t *l_1265 = (void*)0;
                    uint64_t *l_1266[5][9] = {{&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881},{&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881},{&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881},{&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881},{&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881,&p_2028->g_881}};
                    uint32_t **l_1269[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1269[i] = (void*)0;
                    for (l_1220 = 14; (l_1220 == 11); l_1220--)
                    { /* block id: 621 */
                        int16_t *l_1234 = &p_2028->g_568;
                        int32_t *l_1235 = &p_2028->g_25;
                        uint8_t ***l_1245 = &p_2028->g_639;
                        (*l_1201) = func_26((*l_1201), ((*l_1234) = (((**l_1221) = (((*l_1202) = (0x28L | (**l_1201))) >= (p_2028->g_807 < 0x23L))) , (-1L))), (p_2028->g_343 , l_1235), (safe_mul_func_uint16_t_u_u((p_2028->g_745[3] == 4L), (***p_2028->g_164))), p_2028);
                        l_1224 ^= (((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u((l_1244 != ((*l_1245) = &p_2028->g_284)), (safe_add_func_int16_t_s_s(((*l_1235) ^ p_2028->g_568), (((*l_1199) = p_2028->g_25) <= ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(((18446744073709551615UL && (p_2028->g_794 & (safe_mul_func_int8_t_s_s(((*l_4) , 0x37L), (**l_1201))))) > p_2028->g_253), 15)) && 0xF48737CEL), 9)) , p_2028->g_243)))))), 7L)) == 0L) , (*p_2028->g_675));
                        return (*l_4);
                    }
                    l_1271 |= (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((l_1224 , 0x66L), (safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(0L, (**l_1201))), 8)))), (l_4 != (l_1270 = (((safe_sub_func_uint64_t_u_u((l_1264 >= (((l_1264 , (((*l_4) = p_2028->g_253) , (l_1267 & 0x23499F0B0C0F440CL))) & (**p_2028->g_639)) <= l_1268)), p_2028->g_1164[4][2][3])) < (**l_1201)) , (void*)0)))));
                }
                if (((safe_sub_func_int64_t_s_s((p_2028->g_1274 == (void*)0), p_2028->g_197)) <= (p_2028->g_243 = (l_1224 , ((p_2028->g_1277 = l_1276) == &p_2028->g_869[0][2][5])))))
                { /* block id: 637 */
                    int32_t *l_1279 = (void*)0;
                    int32_t l_1286[1][7][2] = {{{3L,3L},{3L,3L},{3L,3L},{3L,3L},{3L,3L},{3L,3L},{3L,3L}}};
                    int i, j, k;
                    l_1279 = l_1278;
                    (*l_1279) ^= 2L;
                    if ((*p_2028->g_726))
                    { /* block id: 640 */
                        (*p_2028->g_350) = (safe_rshift_func_int8_t_s_u((**l_1201), (p_2028->g_243 , (--(*p_2028->g_285)))));
                    }
                    else
                    { /* block id: 643 */
                        int64_t l_1284 = 8L;
                        int32_t l_1285[5] = {(-5L),(-5L),(-5L),(-5L),(-5L)};
                        int i;
                        l_1294[3]--;
                        if (p_2028->g_343)
                            goto lbl_1297;
lbl_1297:
                        (**l_1201) = (**l_1201);
                        (*p_2028->g_350) &= ((safe_mul_func_int16_t_s_s(((*l_1202) = p_2028->g_1300), l_1220)) < p_2028->g_1301);
                        (*l_1201) = func_26(&l_1286[0][5][0], (**l_1201), func_26(func_26((*l_1201), (((*p_2028->g_708) = ((safe_sub_func_uint8_t_u_u((((*l_1199) = 0L) || p_2028->g_5), ((void*)0 == l_1304))) ^ ((safe_add_func_uint64_t_u_u(((((**p_2028->g_165) = ((safe_lshift_func_int16_t_s_u(((p_2028->g_419 = 1L) ^ p_2028->g_745[2]), (*l_1278))) || l_1271)) | l_1224) >= (*l_4)), p_2028->g_491[4])) && l_1284))) , 0x61EDL), l_1309, l_1310, p_2028), (*l_4), &l_1286[0][2][0], p_2028->g_253, p_2028), l_1224, p_2028);
                    }
                }
                else
                { /* block id: 655 */
                    int64_t l_1318 = 0x1AB10D51D4CE846CL;
                    int32_t l_1325[9][1] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
                    int i, j;
                    for (p_2028->g_807 = 0; (p_2028->g_807 <= 7); p_2028->g_807 += 1)
                    { /* block id: 658 */
                        if ((*p_2028->g_726))
                            break;
                    }
                    for (p_2028->g_1200 = 1; (p_2028->g_1200 <= 6); p_2028->g_1200 += 1)
                    { /* block id: 663 */
                        int16_t ***l_1317 = &p_2028->g_869[0][2][8];
                        int64_t *l_1320 = &p_2028->g_673;
                        int i;
                        (*p_2028->g_1165) = func_26(((p_2028->g_491[p_2028->g_1200] == (safe_mod_func_int16_t_s_s((((0L ^ 0x5DL) & ((*p_2028->g_708) , 0L)) || (l_1271 != (safe_mod_func_uint64_t_u_u((*l_4), (((l_1271 >= ((((*l_1317) = (void*)0) != &p_2028->g_870[0][1][3]) < (*l_1278))) | 0x13630CFA1BC1D471L) | l_1267))))), l_1318))) , (*l_1201)), p_2028->g_1319, (*p_2028->g_884), (*p_2028->g_708), p_2028);
                        (*l_4) |= l_1224;
                        (*p_2028->g_851) = ((l_1320 == (void*)0) | ((safe_rshift_func_uint8_t_u_u(p_2028->g_491[p_2028->g_1200], ((*p_2028->g_285) = 0x51L))) ^ (safe_lshift_func_int8_t_s_u(1L, 3))));
                    }
                    l_1326[0][1]--;
                    for (l_1289 = (-26); (l_1289 < (-14)); l_1289 = safe_add_func_int32_t_s_s(l_1289, 7))
                    { /* block id: 673 */
                        uint32_t l_1348 = 0xD0D08894L;
                        int32_t *l_1350[1][10][5] = {{{&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351},{&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351},{&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351},{&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351},{&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351},{&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351},{&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351},{&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351},{&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351},{&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351,&p_2028->g_1351}}};
                        int32_t *l_1368 = &l_1292;
                        uint32_t ***l_1373 = &l_1221;
                        uint16_t ****l_1377 = &p_2028->g_683;
                        int8_t *l_1378 = &p_2028->g_491[6];
                        int i, j, k;
                        (*p_2028->g_851) = ((**l_1201) <= ((((p_2028->g_92[3][6] || (--(*l_1222))) & (~((*l_1199) = ((!(safe_rshift_func_uint16_t_u_s((&p_2028->g_906 != &p_2028->g_1291[0][3][6]), 4))) && (safe_lshift_func_int8_t_s_u((((***p_2028->g_683) |= (--(*l_1213))) == p_2028->g_1339), (safe_div_func_uint64_t_u_u(0x85766106D3316840L, (safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0L, l_1348)), ((p_2028->g_1351 = l_1349) , 0UL))), 2UL)))))))))) & p_2028->g_343) ^ 65533UL));
                        (*l_1278) ^= (((((safe_lshift_func_uint16_t_u_s(((!(l_1354 == &p_2028->g_673)) != (safe_lshift_func_uint8_t_u_s(((*p_2028->g_284) = ((safe_add_func_uint16_t_u_u((~(((safe_rshift_func_int16_t_s_u(l_1267, ((safe_lshift_func_int16_t_s_s((&p_2028->g_881 == (void*)0), 10)) , (((1L == (safe_sub_func_int16_t_s_s(((p_2028->g_24 ^ ((safe_mod_func_int16_t_s_s((4294967286UL <= 0x54858D4EL), (***p_2028->g_164))) != l_1220)) || l_1367), 3L))) , l_1348) , 0UL)))) , l_1325[2][0]) < 0xF0ABAF7EL)), l_1348)) == l_1348)), p_2028->g_343))), 1)) , 0x4705700B90B69D85L) ^ 0x33B78C5EB476F2FBL) , l_1267) || l_1220);
                        l_1368 = &l_1325[4][0];
                        (*l_1278) = ((safe_rshift_func_uint8_t_u_s((((*l_1373) = p_2028->g_1371) != (l_1209 = (((0xF5L <= ((*l_1378) = ((*p_2028->g_350) || (l_1376 != ((*l_1377) = l_1376))))) , (safe_mul_func_uint16_t_u_u((*l_1278), ((safe_sub_func_int64_t_s_s((0x235735E612AC5E21L > ((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((((((*l_1368) = (((*l_1368) == (p_2028->g_1339 = ((l_1389 != &p_2028->g_639) | (***p_2028->g_164)))) != (*p_2028->g_1372))) && 4294967292UL) > 0L) > (**p_2028->g_1371)), 0x51L)) < l_1390) ^ 0x91L), l_1318)) < 2L)), 0x42BF9198BAAEF8DFL)) != (*l_1278))))) , &p_2028->g_1372))), 1)) , (*p_2028->g_851));
                    }
                }
            }
            else
            { /* block id: 692 */
                int32_t *l_1391 = &p_2028->g_20[0][1];
                l_1391 = (*p_2028->g_875);
                (**p_2028->g_875) = (+(l_1220 ^ (l_1224 = p_2028->g_1351)));
                (*l_1201) = &l_1271;
            }
            return l_1220;
        }
        else
        { /* block id: 699 */
            uint32_t l_1399[2][7][7] = {{{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L},{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L},{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L},{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L},{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L},{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L},{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L}},{{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L},{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L},{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L},{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L},{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L},{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L},{0xC9461CAFL,3UL,3UL,0xC9461CAFL,0xD49C8686L,0xE252101CL,0xE6E8BD99L}}};
            int32_t l_1402 = 0x5AB6370FL;
            int64_t l_1403 = 0L;
            uint32_t l_1452 = 0x58D54ED4L;
            int i, j, k;
            if (((safe_rshift_func_uint16_t_u_s(((l_1394 = (*p_2028->g_683)) == (void*)0), 3)) > (**l_1201)))
            { /* block id: 701 */
                int64_t l_1398 = 0x7F7586EFC99862C1L;
                int32_t l_1404[10] = {3L,3L,3L,3L,3L,3L,3L,3L,3L,3L};
                int i;
                l_1404[5] |= (p_2028->g_343 != (((((*p_2028->g_350) |= ((void*)0 == &p_2028->g_639)) || (**p_2028->g_1371)) < (safe_unary_minus_func_int32_t_s((((safe_rshift_func_int8_t_s_u(((((p_2028->g_1351 > p_2028->g_24) > ((((l_1399[1][5][2] ^= l_1398) != (l_1398 == (((*p_2028->g_1277) = (*p_2028->g_1277)) == (void*)0))) != l_1402) == p_2028->g_857)) & l_1398) >= l_1398), 7)) && l_1403) < l_1403)))) , p_2028->g_253));
            }
            else
            { /* block id: 706 */
                uint64_t l_1427 = 18446744073709551615UL;
                uint64_t *l_1439 = (void*)0;
                int32_t l_1448 = 0x4DC2CADAL;
                for (p_2028->g_5 = (-9); (p_2028->g_5 == (-23)); --p_2028->g_5)
                { /* block id: 709 */
                    if ((*l_4))
                        break;
                }
lbl_1444:
                p_2028->g_1407 = ((*l_4) = 2L);
                for (p_2028->g_108 = 0; (p_2028->g_108 <= 0); p_2028->g_108 += 1)
                { /* block id: 716 */
                    volatile int64_t * volatile *l_1412[4] = {&p_2028->g_1409,&p_2028->g_1409,&p_2028->g_1409,&p_2028->g_1409};
                    int32_t l_1420 = (-9L);
                    int32_t l_1421 = 1L;
                    int i;
                    for (p_2028->g_25 = 0; (p_2028->g_25 >= 0); p_2028->g_25 -= 1)
                    { /* block id: 719 */
                        volatile int64_t * volatile **l_1411[4][9][7] = {{{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0}},{{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0}},{{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0}},{{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0},{&p_2028->g_1408,&p_2028->g_1408,(void*)0,&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408,(void*)0}}};
                        int i, j, k;
                        l_1412[1] = p_2028->g_1408;
                    }
                    if (p_2028->g_1413)
                    { /* block id: 722 */
                        int16_t l_1426 = 0L;
                        int8_t *l_1428 = &p_2028->g_1288;
                        (*p_2028->g_350) &= 0x154BB5D0L;
                        (*l_4) = ((((((*p_2028->g_284) &= (safe_add_func_uint32_t_u_u(4294967294UL, (safe_div_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(1L, l_1420)) | (l_1421 < ((**l_1201) = (safe_mul_func_int8_t_s_s(((*l_1428) = (65528UL >= (((*p_2028->g_812) | (((2L || (~(safe_sub_func_int16_t_s_s((l_1421 > l_1421), l_1426)))) || (*l_1278)) , 7UL)) < l_1427))), l_1426))))) || (-1L)), (*l_4)))))) == 0x0FL) ^ 0UL) , (*p_2028->g_1409)) , l_1429);
                    }
                    else
                    { /* block id: 728 */
                        uint64_t **l_1441 = &l_1439;
                        uint16_t *l_1442 = &p_2028->g_1164[4][2][3];
                        int32_t *l_1443 = &p_2028->g_1319;
                        (*p_2028->g_1165) = func_26(((((((*l_1442) = (l_1427 && (((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((*p_2028->g_1408) == (p_2028->g_1434 = (void*)0)), ((l_1402 && ((0x6323L == (*l_1278)) | (l_1402 = ((*l_1202) = (safe_mod_func_int32_t_s_s(((0x78L > (((&p_2028->g_881 == ((*l_1441) = (p_2028->g_1440 = ((safe_sub_func_int32_t_s_s(l_1427, 0x2556BB2BL)) , l_1439)))) >= 4294967290UL) < 9L)) >= l_1421), 0xCC4BE49AL)))))) & l_1427))), (*p_2028->g_285))) , (***p_2028->g_164)) , 0x3924463DL))) != l_1399[1][6][2]) <= (**p_2028->g_639)) && l_1399[1][5][0]) , l_1443), l_1399[1][2][2], &l_1420, (*p_2028->g_708), p_2028);
                        (*l_4) = ((*p_2028->g_851) = l_1427);
                    }
                    if (p_2028->g_144)
                        goto lbl_1444;
                    for (l_1402 = 0; (l_1402 >= 0); l_1402 -= 1)
                    { /* block id: 742 */
                        int16_t *l_1445 = &l_1078[0][7];
                        int32_t l_1449[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1449[i] = 1L;
                        (*l_1201) = func_26(&l_1402, (l_1448 = ((!((((l_1445 != (l_1446 = &l_1223)) || 0UL) != 0x67L) > ((*p_2028->g_285) & ((l_1421 < ((*p_2028->g_284) > (l_1447 != (void*)0))) , (**l_1201))))) , l_1421)), (*p_2028->g_884), (*p_2028->g_708), p_2028);
                        (*p_2028->g_683) = (*p_2028->g_683);
                        if ((**p_2028->g_1165))
                            continue;
                        (*l_4) ^= l_1449[0];
                    }
                }
                (*l_1201) = (p_2028->g_1466[0][1] = func_26(((safe_sub_func_int16_t_s_s(l_1452, (l_1448 ^ (safe_add_func_uint64_t_u_u((p_2028->g_491[5] ^ (((*p_2028->g_284) = ((((((safe_div_func_int8_t_s_s((((l_1457[1][5][0] , func_26((*p_2028->g_884), (0xDF2DF3B640ACAFBAL ^ (safe_div_func_int32_t_s_s((*p_2028->g_350), (((safe_add_func_uint32_t_u_u(4294967295UL, (((**l_1221) = (safe_mod_func_uint64_t_u_u((0x38F7971FFF8107D0L != l_1427), p_2028->g_1164[2][3][5]))) , (**p_2028->g_1371)))) || l_1399[0][3][2]) , (*l_1278))))), &l_1448, (*p_2028->g_708), p_2028)) != l_1464) , l_1427), 0x1FL)) | 0x03B8F5DA3693BD5FL) ^ p_2028->g_153) , 0xE68E29E967F62EA8L) < l_1402) >= 0x6351A3C0L)) <= l_1465)), p_2028->g_568))))) , (void*)0), (**l_1201), &l_1402, (*p_2028->g_708), p_2028));
            }
            for (p_2028->g_1351 = 0; (p_2028->g_1351 <= 9); p_2028->g_1351 = safe_add_func_int16_t_s_s(p_2028->g_1351, 4))
            { /* block id: 758 */
                int32_t **l_1471[9][4];
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_1471[i][j] = (void*)0;
                }
                l_1469 = &p_2028->g_1440;
                if (l_1452)
                    break;
                l_1278 = (l_1309 = (p_2028->g_1081[3][0][1] , ((*l_1201) = l_1470)));
            }
        }
    }
    if (l_1472)
    { /* block id: 767 */
        int32_t **l_1473 = &p_2028->g_1466[0][1];
        int32_t l_1484 = 2L;
        uint32_t l_1495 = 0UL;
        (*l_1473) = (*p_2028->g_374);
        for (p_2028->g_881 = (-18); (p_2028->g_881 != 5); p_2028->g_881 = safe_add_func_uint16_t_u_u(p_2028->g_881, 7))
        { /* block id: 771 */
            uint32_t l_1476[3][7][9] = {{{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL}},{{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL}},{{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL},{4294967295UL,0x07F1D68BL,3UL,0x7D335349L,0xDB4427EDL,0x43875848L,0x8934A7CEL,0xD11A23E2L,0x07F1D68BL}}};
            int16_t ***l_1477 = (void*)0;
            int i, j, k;
            if (l_1476[1][6][4])
                break;
            (*p_2028->g_1478) = ((*p_2028->g_1277) = (*p_2028->g_1277));
            if ((*p_2028->g_350))
                continue;
            if (l_1476[1][6][4])
                continue;
        }
        (*l_4) = 6L;
        (*p_2028->g_350) ^= (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_1484, (safe_div_func_int32_t_s_s(((void*)0 != l_4), (safe_div_func_int32_t_s_s(((*l_1278) , ((*l_4) = (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_2028->g_673 , ((l_1447 != l_1447) >= (safe_add_func_uint8_t_u_u(0xEDL, ((&p_2028->g_165 == &p_2028->g_165) != (*p_2028->g_1409)))))), l_1495)), 1)))), (**p_2028->g_1371))))))), (**p_2028->g_639)));
    }
    else
    { /* block id: 781 */
        uint64_t **l_1499 = (void*)0;
        int32_t l_1516[4] = {0L,0L,0L,0L};
        uint32_t *l_1546 = &p_2028->g_266;
        int32_t *l_1582 = &p_2028->g_25;
        int8_t l_1603 = (-1L);
        int32_t l_1634[1][9][9] = {{{1L,0x04CF1D04L,0x04CF1D04L,1L,(-8L),0L,0L,(-8L),1L},{1L,0x04CF1D04L,0x04CF1D04L,1L,(-8L),0L,0L,(-8L),1L},{1L,0x04CF1D04L,0x04CF1D04L,1L,(-8L),0L,0L,(-8L),1L},{1L,0x04CF1D04L,0x04CF1D04L,1L,(-8L),0L,0L,(-8L),1L},{1L,0x04CF1D04L,0x04CF1D04L,1L,(-8L),0L,0L,(-8L),1L},{1L,0x04CF1D04L,0x04CF1D04L,1L,(-8L),0L,0L,(-8L),1L},{1L,0x04CF1D04L,0x04CF1D04L,1L,(-8L),0L,0L,(-8L),1L},{1L,0x04CF1D04L,0x04CF1D04L,1L,(-8L),0L,0L,(-8L),1L},{1L,0x04CF1D04L,0x04CF1D04L,1L,(-8L),0L,0L,(-8L),1L}}};
        int16_t l_1687 = (-3L);
        uint16_t l_1711 = 1UL;
        int8_t l_1755 = (-1L);
        uint32_t **l_1794 = &p_2028->g_1793;
        uint16_t *l_1808 = (void*)0;
        uint16_t **l_1807 = &l_1808;
        uint8_t ***l_1827 = (void*)0;
        int64_t *****l_1878 = (void*)0;
        int16_t ***l_1895 = &p_2028->g_869[0][5][5];
        int16_t l_1920 = 0x32CAL;
        int i, j, k;
        (*p_2028->g_1497) = l_1496;
        for (p_2028->g_108 = 0; (p_2028->g_108 <= 0); p_2028->g_108 += 1)
        { /* block id: 785 */
            uint64_t ***l_1500 = &l_1499;
            int64_t **l_1508 = &p_2028->g_1434;
            int64_t ***l_1507 = &l_1508;
            uint64_t *l_1509 = &p_2028->g_274;
            (*p_2028->g_1498) = &l_1290;
            (*l_4) &= ((((*l_1500) = l_1499) == ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(0x70ABL, (1L <= (safe_mul_func_int8_t_s_s((p_2028->g_419 == ((0x7CL || (((((void*)0 != l_1507) != ((*l_1509) = 0xF3B70BA3793E3445L)) > l_1510) && 0x1424L)) || 3L)), p_2028->g_1291[0][4][2]))))), p_2028->g_807)) , p_2028->g_1511)) , (*p_2028->g_350));
            for (p_2028->g_5 = 0; (p_2028->g_5 >= 0); p_2028->g_5 -= 1)
            { /* block id: 792 */
                if ((**p_2028->g_1149))
                    break;
                for (p_2028->g_1288 = 4; (p_2028->g_1288 >= 2); p_2028->g_1288 -= 1)
                { /* block id: 796 */
                    int32_t l_1512 = 0x64CC7410L;
                    int32_t *l_1514 = &l_1513;
                    int32_t *l_1515[9];
                    uint32_t l_1517 = 0xC586DD64L;
                    int i, j;
                    for (i = 0; i < 9; i++)
                        l_1515[i] = &l_1510;
                    --l_1517;
                    for (p_2028->g_1200 = 2; (p_2028->g_1200 <= 6); p_2028->g_1200 += 1)
                    { /* block id: 800 */
                        int32_t l_1522 = 0x57083304L;
                        int i;
                        l_1522 = (safe_mod_func_uint16_t_u_u(1UL, p_2028->g_491[p_2028->g_1288]));
                        return l_1522;
                    }
                    for (p_2028->g_266 = 0; (p_2028->g_266 <= 7); p_2028->g_266 += 1)
                    { /* block id: 806 */
                        int i, j;
                        p_2028->g_1466[p_2028->g_108][(p_2028->g_108 + 3)] = p_2028->g_1466[p_2028->g_5][(p_2028->g_108 + 2)];
                    }
                }
            }
        }
    }
    for (p_2028->g_343 = 0; (p_2028->g_343 >= (-16)); --p_2028->g_343)
    { /* block id: 1081 */
        int32_t *l_1969 = (void*)0;
        int32_t l_2017 = 1L;
        int32_t l_2024 = 0L;
        for (p_2028->g_243 = 0; (p_2028->g_243 > 9); p_2028->g_243++)
        { /* block id: 1084 */
            uint16_t l_1971 = 0xEC0DL;
            int32_t l_2001[6] = {0L,0x75BE3012L,0L,0L,0x75BE3012L,0L};
            uint16_t ****l_2002 = &p_2028->g_683;
            uint8_t l_2008 = 0x10L;
            int32_t l_2011[8];
            uint32_t l_2025 = 0xE35C1252L;
            int i;
            for (i = 0; i < 8; i++)
                l_2011[i] = 0x11EF0519L;
            if (((*l_1496) >= 0x1F2823213DDA549CL))
            { /* block id: 1085 */
                int32_t **l_1970[2][5] = {{&p_2028->g_1466[0][0],&l_3,&p_2028->g_851,&l_3,&p_2028->g_1466[0][0]},{&p_2028->g_1466[0][0],&l_3,&p_2028->g_851,&l_3,&p_2028->g_1466[0][0]}};
                int i, j;
                (*p_2028->g_875) = l_1969;
                (*p_2028->g_1756) &= ((l_1971 == ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(0x31L, 1UL)) , (+(&p_2028->g_1874[3] != (void*)0))), (*l_1496))) == (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((&p_2028->g_881 != p_2028->g_1982), ((**l_1394)--))), (18446744073709551610UL < p_2028->g_1591[0][0]))), l_1971)))) < (*p_2028->g_1372));
                l_1969 = l_1969;
            }
            else
            { /* block id: 1090 */
                (*l_4) = 0L;
            }
            for (l_1513 = 4; (l_1513 >= 22); ++l_1513)
            { /* block id: 1095 */
                uint16_t *****l_2003[1][9];
                int32_t l_2009 = 0x047B0D87L;
                uint64_t *l_2010[6][8][3] = {{{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274}},{{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274}},{{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274}},{{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274}},{{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274}},{{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274},{&p_2028->g_253,&p_2028->g_274,&p_2028->g_274}}};
                int64_t *l_2012 = (void*)0;
                int64_t *l_2013[4][1][10] = {{{(void*)0,(void*)0,&p_2028->g_1081[4][2][0],&p_2028->g_1339,&p_2028->g_1081[4][1][0],&l_1931,&l_1931,&p_2028->g_1081[3][0][1],&l_1931,&l_1931}},{{(void*)0,(void*)0,&p_2028->g_1081[4][2][0],&p_2028->g_1339,&p_2028->g_1081[4][1][0],&l_1931,&l_1931,&p_2028->g_1081[3][0][1],&l_1931,&l_1931}},{{(void*)0,(void*)0,&p_2028->g_1081[4][2][0],&p_2028->g_1339,&p_2028->g_1081[4][1][0],&l_1931,&l_1931,&p_2028->g_1081[3][0][1],&l_1931,&l_1931}},{{(void*)0,(void*)0,&p_2028->g_1081[4][2][0],&p_2028->g_1339,&p_2028->g_1081[4][1][0],&l_1931,&l_1931,&p_2028->g_1081[3][0][1],&l_1931,&l_1931}}};
                uint32_t l_2014 = 0x0C2F07F0L;
                int32_t *l_2015 = (void*)0;
                int32_t *l_2016 = &p_2028->g_20[0][1];
                int32_t *l_2018 = &l_2009;
                int32_t *l_2019 = (void*)0;
                int32_t *l_2020 = (void*)0;
                int32_t *l_2021 = &l_2017;
                int32_t *l_2022 = &l_2017;
                int32_t *l_2023[8] = {&l_1290,&l_1290,&l_1290,&l_1290,&l_1290,&l_1290,&l_1290,&l_1290};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_2003[i][j] = &p_2028->g_483;
                }
                (*p_2028->g_1756) = ((safe_div_func_int32_t_s_s((((*p_2028->g_350) = ((p_2028->g_1081[6][0][2] |= (safe_add_func_int32_t_s_s((0x808E25E9L & ((safe_sub_func_uint64_t_u_u(((!((safe_mod_func_int8_t_s_s(((safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((l_2001[1] != ((((p_2028->g_483 = l_2002) != &p_2028->g_683) > (**p_2028->g_1408)) && l_1971)), (l_2011[3] = (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s(0x3994L, (((*l_1496) = l_2008) ^ l_2009))) || l_1971), l_2009))))), l_2008)), (**p_2028->g_165))) <= 0x18L), 0x31L)) >= l_2008)) ^ l_2009), p_2028->g_343)) < (***p_2028->g_683))), l_2009))) == l_2014)) > (*p_2028->g_1372)), 0x542C1B8BL)) > l_2014);
                --l_2025;
            }
            (*p_2028->g_350) |= ((*l_1278) = l_2001[1]);
        }
    }
    return (*l_4);
}


/* ------------------------------------------ */
/* 
 * reads : p_2028->g_24 p_2028->g_25 p_2028->g_20 p_2028->g_374 p_2028->g_86 p_2028->g_851 p_2028->g_857 p_2028->g_869 p_2028->g_673 p_2028->g_812 p_2028->g_92 p_2028->g_708 p_2028->g_875 p_2028->g_884 p_2028->g_274 p_2028->g_263 p_2028->g_639 p_2028->g_284 p_2028->g_153 p_2028->g_285 p_2028->g_745 p_2028->g_675 p_2028->g_243 p_2028->g_568 p_2028->g_144 p_2028->g_165 p_2028->g_166 p_2028->g_108 p_2028->g_683
 * writes: p_2028->g_24 p_2028->g_25 p_2028->g_20 p_2028->g_869 p_2028->g_568 p_2028->g_92 p_2028->g_851 p_2028->g_881 p_2028->g_86 p_2028->g_274 p_2028->g_253 p_2028->g_153 p_2028->g_491 p_2028->g_243
 */
uint8_t  func_12(uint32_t  p_13, int32_t  p_14, struct S0 * p_2028)
{ /* block id: 14 */
    uint8_t l_843[1];
    int64_t **l_844 = &p_2028->g_708;
    int32_t l_847[8] = {3L,3L,3L,3L,3L,3L,3L,3L};
    int16_t *l_868 = &p_2028->g_568;
    int16_t **l_867 = &l_868;
    uint32_t *l_879[3][1][5] = {{{&p_2028->g_266,&p_2028->g_266,&p_2028->g_266,&p_2028->g_266,&p_2028->g_266}},{{&p_2028->g_266,&p_2028->g_266,&p_2028->g_266,&p_2028->g_266,&p_2028->g_266}},{{&p_2028->g_266,&p_2028->g_266,&p_2028->g_266,&p_2028->g_266,&p_2028->g_266}}};
    uint32_t **l_878[3];
    uint16_t *****l_929[1][4][4] = {{{(void*)0,&p_2028->g_483,(void*)0,(void*)0},{(void*)0,&p_2028->g_483,(void*)0,(void*)0},{(void*)0,&p_2028->g_483,(void*)0,(void*)0},{(void*)0,&p_2028->g_483,(void*)0,(void*)0}}};
    uint32_t l_962[3][6] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
    uint8_t l_987[9] = {0x1FL,0x1FL,0x1FL,0x1FL,0x1FL,0x1FL,0x1FL,0x1FL,0x1FL};
    int32_t *l_992[1][5][8] = {{{&p_2028->g_20[0][0],&l_847[4],&p_2028->g_5,&l_847[6],&l_847[4],&l_847[6],&p_2028->g_5,&l_847[4]},{&p_2028->g_20[0][0],&l_847[4],&p_2028->g_5,&l_847[6],&l_847[4],&l_847[6],&p_2028->g_5,&l_847[4]},{&p_2028->g_20[0][0],&l_847[4],&p_2028->g_5,&l_847[6],&l_847[4],&l_847[6],&p_2028->g_5,&l_847[4]},{&p_2028->g_20[0][0],&l_847[4],&p_2028->g_5,&l_847[6],&l_847[4],&l_847[6],&p_2028->g_5,&l_847[4]},{&p_2028->g_20[0][0],&l_847[4],&p_2028->g_5,&l_847[6],&l_847[4],&l_847[6],&p_2028->g_5,&l_847[4]}}};
    int32_t l_994 = 0x44B90ED2L;
    uint64_t *l_995[6][5][8] = {{{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253}},{{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253}},{{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253}},{{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253}},{{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253}},{{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253},{(void*)0,&p_2028->g_274,&p_2028->g_253,&p_2028->g_274,(void*)0,&p_2028->g_253,&p_2028->g_274,&p_2028->g_253}}};
    uint32_t l_1006[7][10] = {{4294967289UL,0x9FF0CC78L,0x2D2DEDBFL,0x2D2DEDBFL,0x9FF0CC78L,4294967289UL,4294967295UL,1UL,1UL,4294967295UL},{4294967289UL,0x9FF0CC78L,0x2D2DEDBFL,0x2D2DEDBFL,0x9FF0CC78L,4294967289UL,4294967295UL,1UL,1UL,4294967295UL},{4294967289UL,0x9FF0CC78L,0x2D2DEDBFL,0x2D2DEDBFL,0x9FF0CC78L,4294967289UL,4294967295UL,1UL,1UL,4294967295UL},{4294967289UL,0x9FF0CC78L,0x2D2DEDBFL,0x2D2DEDBFL,0x9FF0CC78L,4294967289UL,4294967295UL,1UL,1UL,4294967295UL},{4294967289UL,0x9FF0CC78L,0x2D2DEDBFL,0x2D2DEDBFL,0x9FF0CC78L,4294967289UL,4294967295UL,1UL,1UL,4294967295UL},{4294967289UL,0x9FF0CC78L,0x2D2DEDBFL,0x2D2DEDBFL,0x9FF0CC78L,4294967289UL,4294967295UL,1UL,1UL,4294967295UL},{4294967289UL,0x9FF0CC78L,0x2D2DEDBFL,0x2D2DEDBFL,0x9FF0CC78L,4294967289UL,4294967295UL,1UL,1UL,4294967295UL}};
    uint8_t l_1040 = 0x6EL;
    uint8_t l_1041[7][1][4] = {{{0x73L,0x73L,0x28L,0x04L}},{{0x73L,0x73L,0x28L,0x04L}},{{0x73L,0x73L,0x28L,0x04L}},{{0x73L,0x73L,0x28L,0x04L}},{{0x73L,0x73L,0x28L,0x04L}},{{0x73L,0x73L,0x28L,0x04L}},{{0x73L,0x73L,0x28L,0x04L}}};
    uint32_t l_1049 = 0UL;
    uint32_t l_1066 = 4294967290UL;
    uint16_t l_1067[5] = {0xC5A6L,0xC5A6L,0xC5A6L,0xC5A6L,0xC5A6L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_843[i] = 0x87L;
    for (i = 0; i < 3; i++)
        l_878[i] = &l_879[0][0][1];
    for (p_13 = 20; (p_13 <= 41); p_13++)
    { /* block id: 17 */
        uint64_t l_21[3];
        int32_t *l_838 = &p_2028->g_20[0][1];
        uint8_t **l_850 = (void*)0;
        uint16_t **l_904 = &p_2028->g_166[3];
        int8_t *l_922 = &p_2028->g_243;
        int8_t l_963 = 3L;
        int i;
        for (i = 0; i < 3; i++)
            l_21[i] = 0UL;
        for (p_14 = 0; (p_14 < 23); p_14 = safe_add_func_int32_t_s_s(p_14, 1))
        { /* block id: 20 */
            int32_t *l_19[5] = {&p_2028->g_20[0][1],&p_2028->g_20[0][1],&p_2028->g_20[0][1],&p_2028->g_20[0][1],&p_2028->g_20[0][1]};
            int32_t ***l_901 = &p_2028->g_85[0][0];
            uint16_t *****l_928 = &p_2028->g_483;
            uint64_t *l_960 = (void*)0;
            uint64_t **l_959 = &l_960;
            int16_t *l_986 = &p_2028->g_568;
            int i;
            ++l_21[2];
            for (p_2028->g_24 = 0; (p_2028->g_24 <= 0); p_2028->g_24 += 1)
            { /* block id: 24 */
                uint32_t *l_865 = &p_2028->g_263;
                uint32_t **l_864 = &l_865;
                uint16_t ****l_866 = &p_2028->g_683;
                int16_t ***l_871 = &p_2028->g_869[0][3][0];
                int16_t *l_872 = &p_2028->g_92[8][4];
                int32_t l_876 = 0x1D514F99L;
                int32_t **l_877 = &p_2028->g_851;
                uint64_t *l_880 = &p_2028->g_881;
                for (p_2028->g_25 = 0; (p_2028->g_25 >= 0); p_2028->g_25 -= 1)
                { /* block id: 27 */
                    int i, j;
                    l_838 = func_26(&p_2028->g_24, p_2028->g_20[p_2028->g_24][p_2028->g_25], &p_2028->g_24, p_2028->g_20[p_2028->g_24][(p_2028->g_25 + 2)], p_2028);
                    p_2028->g_20[p_2028->g_25][p_2028->g_25] = (((safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(p_14, 0x91B1L)) && l_843[0]), ((0UL > (l_844 == (void*)0)) , 0x0EL))) >= (safe_lshift_func_int16_t_s_s(((l_847[6] = 0x08L) , ((+(((safe_mul_func_int16_t_s_s((((l_850 != &p_2028->g_284) == p_14) , p_2028->g_20[p_2028->g_24][p_2028->g_25]), (-1L))) < 0x69L) > 0x47L)) > 0x1A511D12L)), 4))) <= l_843[0]);
                }
                (*p_2028->g_875) = func_26(p_2028->g_851, ((*l_872) |= (((safe_add_func_int16_t_s_s(0x7C6EL, ((**l_867) = (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint8_t_u(((p_2028->g_857 >= ((safe_add_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((((((*l_864) = l_838) == &p_2028->g_263) ^ ((((&p_2028->g_164 == l_866) != (l_867 != ((*l_871) = p_2028->g_869[0][2][8]))) < 0x7A473279L) <= 0x25CE1533L)) == 0x087338C645DD713FL), 0x6E09DE13L)), p_13)) , p_13), p_2028->g_673)) >= (*p_2028->g_812))) > 0x0093818739C4EEBCL))), (*l_838)))))) , (*l_838)) , p_14)), l_19[3], (*p_2028->g_708), p_2028);
                if (l_876)
                    break;
                (*l_877) = func_26(func_26(((*l_877) = (*p_2028->g_875)), ((void*)0 != l_878[1]), &l_847[3], l_843[0], p_2028), (*l_838), (((*l_880) = 1UL) , &p_14), p_13, p_2028);
            }
            for (p_2028->g_24 = (-21); (p_2028->g_24 >= 3); ++p_2028->g_24)
            { /* block id: 484 */
                uint64_t l_897[5] = {8UL,8UL,8UL,8UL,8UL};
                int32_t l_910 = 8L;
                int8_t l_911 = 0x33L;
                int32_t l_917 = 0x67028182L;
                uint32_t l_956 = 0x3ABACA55L;
                uint16_t *****l_982 = &p_2028->g_483;
                int32_t **l_991 = &l_838;
                int i;
                (*p_2028->g_884) = l_838;
            }
        }
    }
    if (((((*p_2028->g_851) ^= 0x70861A03L) != 0x0F0EA413L) || (((++p_2028->g_274) < (p_2028->g_263 > 1UL)) || ((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(((p_13 != (safe_rshift_func_int8_t_s_u((p_13 != (safe_mod_func_int64_t_s_s(((p_2028->g_253 = p_14) >= ((void*)0 == (*l_867))), p_14))), (**p_2028->g_639)))) , 0x9BL), p_13)) , p_13) < l_1006[2][6]), p_2028->g_20[0][0])) == p_13))))
    { /* block id: 539 */
        int8_t l_1009 = 0x76L;
        uint32_t *l_1012 = &p_2028->g_144;
        uint32_t *l_1037 = &l_1006[1][8];
        int8_t *l_1038 = (void*)0;
        int8_t *l_1039 = &p_2028->g_491[2];
        int8_t *l_1042 = &p_2028->g_243;
        uint16_t l_1043 = 1UL;
        (*p_2028->g_851) = (safe_rshift_func_int16_t_s_u(((*l_868) &= (l_1009 < ((((safe_lshift_func_uint16_t_u_u((((((((void*)0 != l_1012) <= (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((**p_2028->g_639) = (*p_2028->g_285)), ((*l_1042) = (safe_add_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((~(safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(0x0EF0L, (((safe_rshift_func_int16_t_s_u(p_14, l_1009)) && ((((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u((!(((*l_1039) = ((safe_lshift_func_int8_t_s_u(((p_2028->g_745[3] , &p_2028->g_263) != l_1037), 4)) || p_14)) >= p_13)), l_1009)), (*p_2028->g_675))) || 0UL) , p_2028->g_243) == l_1009)) | l_1040))) ^ l_1041[1][0][0]), p_14))), (-8L))) == p_13) , (-2L)), l_1009))))), 6)) != l_1043), 7)), l_1043))) != p_13) || 0x727CL) >= p_13) | 1UL), p_13)) >= p_13) ^ p_13) ^ p_14))), 10));
    }
    else
    { /* block id: 545 */
        uint32_t l_1044 = 3UL;
        int32_t l_1047 = 0x1FE58556L;
        int32_t l_1048[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
        int i;
        ++l_1044;
        (*p_2028->g_851) = p_13;
        ++l_1049;
    }
    p_14 = ((((safe_rshift_func_int8_t_s_s(((0xD5L & ((-2L) == (safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(p_2028->g_144, 0xB6L)) >= (*p_2028->g_285)), ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((**p_2028->g_639), (1UL != ((safe_div_func_int64_t_s_s(((+p_13) || ((safe_lshift_func_uint8_t_u_s(0x12L, p_13)) > (**p_2028->g_165))), 0xEB07372A8EBA886DL)) | 0xD0L)))), p_13)) >= (***p_2028->g_683)))))) || p_2028->g_20[0][0]), 3)) & 4294967295UL) & 4294967292UL) , l_1066);
    l_992[0][2][6] = (void*)0;
    return l_1067[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_2028->g_374 p_2028->g_86
 * writes:
 */
int32_t * func_26(int32_t * p_27, int16_t  p_28, int32_t * p_29, int64_t  p_30, struct S0 * p_2028)
{ /* block id: 28 */
    int32_t *l_59 = &p_2028->g_25;
    int32_t **l_58 = &l_59;
    uint8_t l_576[4][10] = {{0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L},{0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L},{0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L},{0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L}};
    uint16_t ***l_606 = &p_2028->g_165;
    int32_t l_627 = 0x6BDF094AL;
    uint8_t **l_638 = &p_2028->g_284;
    uint16_t l_644[3][9][4] = {{{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL}},{{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL}},{{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL},{0x8999L,1UL,3UL,7UL}}};
    uint32_t l_723 = 0xE91CDCFEL;
    uint8_t l_748 = 0UL;
    int32_t l_759 = 0x1B0D7F3BL;
    int32_t l_761 = (-1L);
    int32_t l_765 = 0x4AC5786EL;
    int32_t l_766 = 0L;
    int32_t l_767 = 1L;
    int32_t l_768 = 9L;
    int32_t l_770 = 2L;
    int32_t l_771 = 1L;
    int32_t l_772 = (-6L);
    int32_t l_773 = (-1L);
    int64_t l_778 = (-3L);
    int i, j, k;
    for (p_30 = 0; (p_30 != 27); p_30++)
    { /* block id: 31 */
        int32_t l_347 = 3L;
        int32_t l_348 = 0x1BA46365L;
        int32_t **l_349 = &p_2028->g_86[4][0];
        int32_t l_535 = (-7L);
        int64_t *l_722 = &p_2028->g_419;
        int32_t l_769[1][6][4] = {{{0L,(-1L),0L,0L},{0L,(-1L),0L,0L},{0L,(-1L),0L,0L},{0L,(-1L),0L,0L},{0L,(-1L),0L,0L},{0L,(-1L),0L,0L}}};
        uint64_t l_779 = 0x29193AC87F6CE22DL;
        uint32_t l_799 = 0x62783265L;
        uint16_t **l_836 = &p_2028->g_166[3];
        int32_t *l_837 = &p_2028->g_343;
        int i, j, k;
        (1 + 1);
    }
    (*l_58) = p_29;
    (*l_58) = (*p_2028->g_374);
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_2028->g_266 p_2028->g_374 p_2028->g_253 p_2028->g_92 p_2028->g_208 p_2028->g_24 p_2028->g_25 p_2028->g_153 p_2028->g_284 p_2028->g_144 p_2028->g_197 p_2028->g_343 p_2028->g_274 p_2028->g_285 p_2028->g_5 p_2028->g_20 p_2028->g_350 p_2028->g_263 p_2028->g_483 p_2028->g_243
 * writes: p_2028->g_153 p_2028->g_274 p_2028->g_243 p_2028->g_197 p_2028->g_86 p_2028->g_419 p_2028->g_92 p_2028->g_108 p_2028->g_20 p_2028->g_85 p_2028->g_343 p_2028->g_263 p_2028->g_165 p_2028->g_491
 */
int32_t ** func_33(uint64_t  p_34, uint64_t  p_35, uint8_t  p_36, uint64_t  p_37, uint32_t  p_38, struct S0 * p_2028)
{ /* block id: 213 */
    int32_t l_360 = 0x3889C085L;
    int32_t l_366 = 0x7748600EL;
    int32_t l_369 = 0L;
    uint8_t **l_387 = &p_2028->g_284;
    uint16_t *l_423 = (void*)0;
    int32_t l_451 = 1L;
    uint8_t l_452 = 0x13L;
    int16_t l_455 = 0x2360L;
lbl_480:
    for (p_38 = (-26); (p_38 >= 18); p_38 = safe_add_func_uint16_t_u_u(p_38, 4))
    { /* block id: 216 */
        int32_t l_358 = 0x7ACA5B88L;
        int32_t l_359 = (-1L);
        l_359 = (l_358 ^= (safe_add_func_uint32_t_u_u(p_2028->g_266, (safe_mul_func_uint8_t_u_u(255UL, 0x77L)))));
    }
    l_360 ^= 0x69EE88A4L;
    for (p_2028->g_153 = 0; (p_2028->g_153 <= 0); p_2028->g_153 += 1)
    { /* block id: 223 */
        uint8_t l_363[5][4] = {{0x42L,0x42L,0x42L,0x42L},{0x42L,0x42L,0x42L,0x42L},{0x42L,0x42L,0x42L,0x42L},{0x42L,0x42L,0x42L,0x42L},{0x42L,0x42L,0x42L,0x42L}};
        int32_t l_375[6] = {9L,9L,9L,9L,9L,9L};
        uint8_t l_376[1];
        uint16_t **l_417 = (void*)0;
        int64_t *l_418[4];
        uint32_t l_448 = 4294967287UL;
        int32_t *l_496 = &p_2028->g_20[0][1];
        int32_t ***l_507 = &p_2028->g_85[0][0];
        int8_t *l_517 = &p_2028->g_491[4];
        int i, j;
        for (i = 0; i < 1; i++)
            l_376[i] = 0xA3L;
        for (i = 0; i < 4; i++)
            l_418[i] = &p_2028->g_419;
        for (p_2028->g_274 = 0; (p_2028->g_274 <= 0); p_2028->g_274 += 1)
        { /* block id: 226 */
            int64_t l_367 = (-1L);
            uint8_t l_370 = 0x73L;
            int32_t **l_438 = &p_2028->g_86[7][0];
            uint32_t l_441 = 0x66F0F7EFL;
            int32_t l_449 = 0x35B2F309L;
            uint16_t **l_475 = &p_2028->g_166[3];
            int16_t l_493 = 0L;
            uint16_t l_494 = 0UL;
            int i, j;
            for (p_2028->g_243 = 0; (p_2028->g_243 >= 0); p_2028->g_243 -= 1)
            { /* block id: 229 */
                int32_t *l_361 = (void*)0;
                int32_t *l_362[4][2][6] = {{{&p_2028->g_20[0][0],&p_2028->g_5,&p_2028->g_20[0][1],(void*)0,&p_2028->g_5,(void*)0},{&p_2028->g_20[0][0],&p_2028->g_5,&p_2028->g_20[0][1],(void*)0,&p_2028->g_5,(void*)0}},{{&p_2028->g_20[0][0],&p_2028->g_5,&p_2028->g_20[0][1],(void*)0,&p_2028->g_5,(void*)0},{&p_2028->g_20[0][0],&p_2028->g_5,&p_2028->g_20[0][1],(void*)0,&p_2028->g_5,(void*)0}},{{&p_2028->g_20[0][0],&p_2028->g_5,&p_2028->g_20[0][1],(void*)0,&p_2028->g_5,(void*)0},{&p_2028->g_20[0][0],&p_2028->g_5,&p_2028->g_20[0][1],(void*)0,&p_2028->g_5,(void*)0}},{{&p_2028->g_20[0][0],&p_2028->g_5,&p_2028->g_20[0][1],(void*)0,&p_2028->g_5,(void*)0},{&p_2028->g_20[0][0],&p_2028->g_5,&p_2028->g_20[0][1],(void*)0,&p_2028->g_5,(void*)0}}};
                int16_t l_368 = 8L;
                int i, j, k;
                l_363[3][1]++;
                ++l_370;
                l_366 ^= p_37;
            }
            if (l_363[3][1])
                continue;
            for (p_2028->g_197 = 0; (p_2028->g_197 <= 0); p_2028->g_197 += 1)
            { /* block id: 237 */
                int32_t *l_373[6][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
                uint8_t **l_389[8][5][4] = {{{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285}},{{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285}},{{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285}},{{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285}},{{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285}},{{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285}},{{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285}},{{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285},{&p_2028->g_285,&p_2028->g_285,&p_2028->g_284,&p_2028->g_285}}};
                uint16_t ***l_399 = &p_2028->g_165;
                int32_t l_420 = 0x7A091380L;
                uint32_t l_447 = 0xE7900F16L;
                int i, j, k;
                for (l_370 = 0; (l_370 <= 0); l_370 += 1)
                { /* block id: 240 */
                    (*p_2028->g_374) = l_373[3][0][0];
                    l_373[3][0][1] = &l_366;
                }
                --l_376[0];
                for (l_370 = 9; (l_370 != 17); l_370 = safe_add_func_uint8_t_u_u(l_370, 1))
                { /* block id: 247 */
                    uint8_t ***l_388 = &l_387;
                    int32_t l_390 = (-1L);
                    uint8_t l_406 = 0UL;
                    int64_t *l_430[2][7] = {{&l_367,&l_367,&l_367,&l_367,&l_367,&l_367,&l_367},{&l_367,&l_367,&l_367,&l_367,&l_367,&l_367,&l_367}};
                    int i, j;
                    l_406 ^= (safe_sub_func_int16_t_s_s(((l_375[4] , 0x6BFCB977FF7BD514L) && ((safe_mul_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((l_389[6][2][2] = ((*l_388) = l_387)) != (l_390 , ((((safe_lshift_func_int8_t_s_u((+((safe_rshift_func_int8_t_s_s((safe_add_func_int64_t_s_s((((safe_sub_func_int32_t_s_s((((l_399 == (void*)0) < (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((p_35 == p_34), 1UL)) , l_390), l_375[3])), p_2028->g_253))) == p_34), l_390)) , 0x74619124L) , 0x3022485EFD7D56FEL), p_2028->g_92[3][7])), p_2028->g_208[0])) > 0x80C06088L)), 3)) ^ 1UL) , p_2028->g_24) , (void*)0))), p_37)) && p_35), 0x6AL)) , p_38)), (-1L)));
                    if ((1UL <= (((p_2028->g_25 != (safe_add_func_uint32_t_u_u(p_2028->g_153, 0x14D87F15L))) | (((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((void*)0 != l_417), ((((void*)0 != l_418[1]) | p_34) && l_369))), (*p_2028->g_284))) || l_366), p_38)) >= p_38) ^ l_420)) >= 0x14FB9CD5L)))
                    { /* block id: 251 */
                        uint8_t **l_435 = &p_2028->g_284;
                        int32_t l_436 = 2L;
                        int32_t ***l_437 = &p_2028->g_85[(p_2028->g_153 + 1)][p_2028->g_153];
                        uint16_t l_439 = 0x0D89L;
                        l_439 = (safe_div_func_uint64_t_u_u(((((p_2028->g_419 = p_2028->g_144) | (l_423 == ((((((*l_437) = func_81(&l_373[3][0][1], ((safe_lshift_func_uint8_t_u_s((((((((safe_sub_func_int8_t_s_s(p_35, (0x62BFA855L != (safe_add_func_uint16_t_u_u((((+(+((p_2028->g_197 > ((l_430[1][3] == (((p_35 <= ((safe_div_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s(((l_435 != (void*)0) && 255UL), p_2028->g_343)) <= p_36) && 0xD328L), l_436)) <= 0x09256AD12F69573BL)) , l_366) , &p_2028->g_208[5])) >= p_2028->g_274)) == l_375[2]))) == l_436) & (*p_2028->g_285)), 0x3535L))))) <= p_35) < 0x27F4F8B9L) || p_34) != p_35) & p_2028->g_92[8][4]) <= p_34), 1)) , 0x319221CB64A0E184L), &l_369, p_2028)) != l_438) <= 0x1DBCF3491E4A1E35L) , p_38) , l_423))) <= 0x37L) >= p_2028->g_274), 18446744073709551609UL));
                    }
                    else
                    { /* block id: 255 */
                        int32_t l_440 = (-6L);
                        l_440 = l_406;
                        if (l_441)
                            continue;
                    }
                }
                for (l_441 = (-6); (l_441 >= 6); l_441++)
                { /* block id: 262 */
                    for (p_2028->g_343 = (-30); (p_2028->g_343 <= (-18)); p_2028->g_343 = safe_add_func_int16_t_s_s(p_2028->g_343, 1))
                    { /* block id: 265 */
                        int32_t *l_446 = &l_375[2];
                        l_375[2] = (*p_2028->g_350);
                        l_446 = (void*)0;
                    }
                    l_448 = l_447;
                }
            }
            for (l_360 = 7; (l_360 >= 2); l_360 -= 1)
            { /* block id: 274 */
                int32_t l_456 = 0x04D747E7L;
                uint16_t **l_479 = (void*)0;
                uint32_t l_488 = 1UL;
                int i, j;
                if (p_2028->g_92[(l_360 + 1)][(p_2028->g_153 + 5)])
                { /* block id: 275 */
                    int32_t *l_450[9] = {&l_366,&l_366,&l_366,&l_366,&l_366,&l_366,&l_366,&l_366,&l_366};
                    int i;
                    --l_452;
                    l_456 = l_455;
                }
                else
                { /* block id: 278 */
                    int8_t *l_463[10][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                    uint32_t *l_466 = &p_2028->g_263;
                    uint16_t ***l_476 = &p_2028->g_165;
                    int i, j, k;
                    l_456 = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_375[5] = l_375[1]), ((safe_lshift_func_uint16_t_u_s((p_38 | ((((*l_466)--) ^ (safe_sub_func_int8_t_s_s((safe_div_func_int64_t_s_s((p_2028->g_419 = ((l_369 = 0x2E8350BD1CAA78B8L) ^ (safe_mul_func_int8_t_s_s(p_2028->g_208[0], (0x20L > (((*l_476) = l_475) != ((safe_lshift_func_int8_t_s_s(4L, 0)) , l_479))))))), (p_38 || p_2028->g_92[(l_360 + 1)][(p_2028->g_153 + 5)]))), (*p_2028->g_284)))) , 7UL)), 0)) ^ p_38))), 0)), 6));
                }
                for (p_2028->g_197 = 0; (p_2028->g_197 <= 7); p_2028->g_197 += 1)
                { /* block id: 288 */
                    int16_t l_492 = 0x49C1L;
                    int32_t l_495 = (-1L);
                    for (l_366 = 3; (l_366 >= 0); l_366 -= 1)
                    { /* block id: 291 */
                        uint16_t ****l_484 = (void*)0;
                        uint16_t ***l_487 = &l_475;
                        uint16_t ****l_486 = &l_487;
                        uint16_t *****l_485 = &l_486;
                        int8_t *l_489 = &p_2028->g_243;
                        int8_t *l_490[4] = {&p_2028->g_491[4],&p_2028->g_491[4],&p_2028->g_491[4],&p_2028->g_491[4]};
                        int i;
                        if (p_37)
                            goto lbl_480;
                        (*l_438) = &l_366;
                        l_451 &= (((safe_rshift_func_uint16_t_u_s(0x1B10L, (((l_484 = p_2028->g_483) == ((*l_485) = p_2028->g_483)) == (l_494 = ((((*p_2028->g_284) <= l_488) >= p_38) <= ((p_2028->g_92[8][4] | ((l_492 &= ((*l_489) |= 6L)) >= p_35)) & l_493)))))) , 0x537AL) == p_34);
                    }
                    for (l_366 = 0; (l_366 <= 0); l_366 += 1)
                    { /* block id: 303 */
                        int i, j;
                        return &p_2028->g_86[0][0];
                    }
                    l_495 &= p_37;
                }
            }
        }
        (*l_496) |= l_375[2];
        (*l_496) |= (((safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s((l_369 = (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((((*l_507) = &p_2028->g_238[0][1][1]) != &p_2028->g_238[2][1][2]) || 0x557BL), (safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(0x29L, 5)), (((0x3F197A9BL & ((safe_unary_minus_func_int8_t_s(1L)) > p_34)) | (((((((0x1E6EEFF959A93CC7L < (((*l_517) = (p_2028->g_197 || p_38)) || (*p_2028->g_285))) || 0x072C1048EE19A43DL) | p_37) , &p_2028->g_266) == &p_2028->g_266) == 0UL) > p_2028->g_266)) >= p_2028->g_24))), (*p_2028->g_284))), p_36)))), 1UL))), 1L)), p_36)), p_2028->g_266)) && 5UL) , 0L);
    }
    return &p_2028->g_238[2][0][2];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_2028->g_238
 */
int64_t  func_48(uint64_t  p_49, int32_t ** p_50, int16_t  p_51, int32_t * p_52, int32_t * p_53, struct S0 * p_2028)
{ /* block id: 209 */
    int32_t *l_351 = &p_2028->g_25;
    (*p_50) = l_351;
    return p_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_2028->g_79 p_2028->g_85 p_2028->g_20 p_2028->g_5 p_2028->g_24 p_2028->g_86 p_2028->g_25 p_2028->g_92 p_2028->g_125 p_2028->g_144 p_2028->g_164 p_2028->g_153 p_2028->g_155 p_2028->g_108 p_2028->g_197 p_2028->g_238 p_2028->g_243 p_2028->g_208 p_2028->g_266 p_2028->g_284 p_2028->g_274 p_2028->g_165 p_2028->g_343
 * writes: p_2028->g_92 p_2028->g_108 p_2028->g_20 p_2028->g_86 p_2028->g_144 p_2028->g_153 p_2028->g_85 p_2028->g_165 p_2028->g_155 p_2028->g_166 p_2028->g_197 p_2028->g_243 p_2028->g_253 p_2028->g_263 p_2028->g_266 p_2028->g_274 p_2028->g_284 p_2028->g_285 p_2028->g_324 p_2028->g_343
 */
uint32_t  func_56(int32_t ** p_57, struct S0 * p_2028)
{ /* block id: 34 */
    int32_t l_80 = 0x30F141BDL;
    int32_t *l_89 = &l_80;
    int32_t *l_342 = &p_2028->g_343;
    (*l_342) ^= func_60(((((safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((p_2028->g_85[0][0] = func_67(func_72(((~(safe_add_func_uint16_t_u_u((p_2028->g_79 == (l_80 , func_81(p_2028->g_85[0][0], p_2028->g_20[0][2], (l_80 , (((-8L) <= (safe_mod_func_uint32_t_u_u(((l_80 ^ l_80) | 0x207E09FA00A4EDB9L), l_80))) , l_89)), p_2028))), (-1L)))) || (-1L)), (*l_89), (*l_89), &l_89, p_2028), p_2028->g_24, (*p_57), (*l_89), p_2028)) == &l_89), p_2028->g_25)), (*l_89))) & p_2028->g_25) & (*l_89)) == p_2028->g_25), (*l_89), p_2028);
    (*p_57) = (*p_57);
    return p_2028->g_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_2028->g_164 p_2028->g_20 p_2028->g_144 p_2028->g_153 p_2028->g_155 p_2028->g_108 p_2028->g_5 p_2028->g_197 p_2028->g_86 p_2028->g_24 p_2028->g_25 p_2028->g_238 p_2028->g_243 p_2028->g_208 p_2028->g_266 p_2028->g_284 p_2028->g_274 p_2028->g_165
 * writes: p_2028->g_86 p_2028->g_20 p_2028->g_165 p_2028->g_153 p_2028->g_155 p_2028->g_108 p_2028->g_144 p_2028->g_166 p_2028->g_197 p_2028->g_243 p_2028->g_253 p_2028->g_263 p_2028->g_266 p_2028->g_274 p_2028->g_92 p_2028->g_284 p_2028->g_285 p_2028->g_324
 */
int32_t  func_60(int64_t  p_61, uint32_t  p_62, struct S0 * p_2028)
{ /* block id: 67 */
    int32_t *l_157 = &p_2028->g_5;
    int32_t **l_158 = &p_2028->g_86[6][0];
    int32_t **l_159 = (void*)0;
    int32_t **l_160 = (void*)0;
    int32_t **l_161 = &l_157;
    int32_t *l_162 = &p_2028->g_20[0][1];
    uint16_t **l_163 = (void*)0;
    uint16_t ***l_174 = &p_2028->g_165;
    uint16_t ****l_173 = &l_174;
    uint16_t *l_180 = &p_2028->g_108;
    int32_t l_211[5][5];
    uint32_t l_219 = 0x020D4C6CL;
    uint32_t l_290 = 1UL;
    uint8_t *l_307 = &p_2028->g_153;
    uint64_t *l_332[4];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            l_211[i][j] = 0x30D4D545L;
    }
    for (i = 0; i < 4; i++)
        l_332[i] = &p_2028->g_253;
    (*l_161) = ((*l_158) = l_157);
    (*l_162) = 1L;
    (*p_2028->g_164) = l_163;
    if (((((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u((&l_163 == (void*)0), 3)) >= (*l_162)) , (p_2028->g_144 , 0x0DL)), (((*l_173) = &p_2028->g_165) == &l_163))), 4)) , &p_2028->g_153) != &p_2028->g_153) , 0x6B0DE8B8L))
    { /* block id: 73 */
        int64_t l_178 = 4L;
        int32_t l_206 = 1L;
        int32_t l_210 = (-1L);
        int32_t l_213 = (-2L);
        int32_t l_215 = 1L;
        int32_t l_216 = (-2L);
        int8_t *l_257 = &p_2028->g_243;
        int32_t *l_292 = &l_216;
        int16_t *l_317[4][2][8] = {{{&p_2028->g_92[5][7],&p_2028->g_92[0][6],&p_2028->g_92[0][6],&p_2028->g_92[5][7],&p_2028->g_92[8][4],&p_2028->g_92[5][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4]},{&p_2028->g_92[5][7],&p_2028->g_92[0][6],&p_2028->g_92[0][6],&p_2028->g_92[5][7],&p_2028->g_92[8][4],&p_2028->g_92[5][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4]}},{{&p_2028->g_92[5][7],&p_2028->g_92[0][6],&p_2028->g_92[0][6],&p_2028->g_92[5][7],&p_2028->g_92[8][4],&p_2028->g_92[5][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4]},{&p_2028->g_92[5][7],&p_2028->g_92[0][6],&p_2028->g_92[0][6],&p_2028->g_92[5][7],&p_2028->g_92[8][4],&p_2028->g_92[5][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4]}},{{&p_2028->g_92[5][7],&p_2028->g_92[0][6],&p_2028->g_92[0][6],&p_2028->g_92[5][7],&p_2028->g_92[8][4],&p_2028->g_92[5][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4]},{&p_2028->g_92[5][7],&p_2028->g_92[0][6],&p_2028->g_92[0][6],&p_2028->g_92[5][7],&p_2028->g_92[8][4],&p_2028->g_92[5][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4]}},{{&p_2028->g_92[5][7],&p_2028->g_92[0][6],&p_2028->g_92[0][6],&p_2028->g_92[5][7],&p_2028->g_92[8][4],&p_2028->g_92[5][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4]},{&p_2028->g_92[5][7],&p_2028->g_92[0][6],&p_2028->g_92[0][6],&p_2028->g_92[5][7],&p_2028->g_92[8][4],&p_2028->g_92[5][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4]}}};
        uint32_t l_328 = 0x744903F1L;
        uint8_t l_333 = 1UL;
        uint16_t **l_336[9][5];
        int i, j, k;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 5; j++)
                l_336[i][j] = &l_180;
        }
        for (p_61 = 6; (p_61 >= 0); p_61 -= 1)
        { /* block id: 76 */
            int64_t l_198 = 0x04123AD31088CC24L;
            int32_t l_199 = 0x3121CEEEL;
            int32_t l_209 = 0x645068F4L;
            int32_t l_212 = (-1L);
            int32_t l_218[5];
            int32_t *l_239[8][2][6] = {{{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0},{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0}},{{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0},{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0}},{{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0},{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0}},{{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0},{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0}},{{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0},{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0}},{{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0},{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0}},{{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0},{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0}},{{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0},{&l_212,(void*)0,&l_211[2][4],(void*)0,&l_211[1][1],(void*)0}}};
            uint16_t *l_306 = &p_2028->g_197;
            uint8_t *l_308 = &p_2028->g_153;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_218[i] = 9L;
            for (p_2028->g_153 = 0; (p_2028->g_153 <= 9); p_2028->g_153 += 1)
            { /* block id: 79 */
                int32_t * volatile *l_175 = &p_2028->g_155[5];
                uint16_t *l_181 = (void*)0;
                int32_t l_201 = 0x6327E5A2L;
                int32_t l_214[10] = {0x0FF3D68DL,0x533CF774L,0x77A122F1L,0x533CF774L,0x0FF3D68DL,0x0FF3D68DL,0x533CF774L,0x77A122F1L,0x533CF774L,0x0FF3D68DL};
                int i;
                (*l_175) = p_2028->g_155[p_61];
                for (p_2028->g_108 = 0; (p_2028->g_108 <= 9); p_2028->g_108 += 1)
                { /* block id: 83 */
                    int64_t l_200 = (-1L);
                    int32_t l_202 = 0x53AB86DCL;
                    int32_t l_217 = 0x5CD77730L;
                    for (p_2028->g_144 = 0; (p_2028->g_144 <= 7); p_2028->g_144 += 1)
                    { /* block id: 86 */
                        uint16_t *l_179 = &p_2028->g_108;
                        uint16_t *l_196 = &p_2028->g_197;
                        int32_t *l_203 = &p_2028->g_20[0][0];
                        int32_t *l_204 = &l_202;
                        int32_t *l_205[5] = {&p_2028->g_20[0][1],&p_2028->g_20[0][1],&p_2028->g_20[0][1],&p_2028->g_20[0][1],&p_2028->g_20[0][1]};
                        int64_t l_207 = 0x7795BC2652C71591L;
                        int i;
                        (*l_162) = (l_178 = (safe_lshift_func_int16_t_s_s(0x329FL, p_2028->g_20[0][2])));
                        l_198 = ((p_2028->g_20[0][2] || (18446744073709551615UL < ((p_2028->g_166[(p_2028->g_144 + 1)] = l_179) == (l_181 = l_180)))) , (safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s((((((safe_mul_func_int16_t_s_s(p_62, (safe_mod_func_uint16_t_u_u(((**l_161) , p_61), (p_2028->g_5 , (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((((*l_196) = 2UL) <= 0x6D6EL), (*l_157))), p_61))))))) > p_61) > p_2028->g_20[0][1]) && p_2028->g_197) ^ p_62), p_61)), 7UL)), 0x5635L)));
                        --l_219;
                    }
                }
                if (p_61)
                    continue;
            }
            if ((((0xF4C7C6743E1014FFL == p_2028->g_144) | p_61) > p_61))
            { /* block id: 98 */
                int32_t l_222[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_222[i] = 0L;
                for (l_209 = 1; (l_209 <= 7); l_209 += 1)
                { /* block id: 101 */
                    return (**l_158);
                }
                if (l_222[1])
                    break;
                return p_61;
            }
            else
            { /* block id: 106 */
                uint8_t l_231 = 0xF3L;
                int32_t l_244 = (-9L);
                uint16_t ****l_248 = &l_174;
                int32_t l_273 = 0L;
                int i;
                for (p_2028->g_144 = 0; (p_2028->g_144 <= 9); p_2028->g_144 += 1)
                { /* block id: 109 */
                    int32_t l_223[5][2] = {{(-8L),(-1L)},{(-8L),(-1L)},{(-8L),(-1L)},{(-8L),(-1L)},{(-8L),(-1L)}};
                    uint8_t *l_235 = &l_231;
                    uint8_t **l_234 = &l_235;
                    int i, j;
                    for (l_206 = 6; (l_206 >= 1); l_206 -= 1)
                    { /* block id: 112 */
                        int32_t *l_224 = &l_210;
                        int32_t *l_225 = &l_218[2];
                        int32_t l_226 = 3L;
                        int32_t *l_227 = &p_2028->g_20[0][1];
                        int32_t *l_228 = &l_213;
                        int32_t *l_229 = &p_2028->g_20[0][1];
                        int32_t *l_230[2][3] = {{&l_218[4],&l_211[4][1],&l_218[4]},{&l_218[4],&l_211[4][1],&l_218[4]}};
                        int i, j;
                        l_231++;
                        (*l_225) = l_198;
                    }
                    if ((l_218[0] , ((*l_162) = ((((*l_234) = &p_2028->g_153) != &l_231) , (safe_sub_func_int8_t_s_s(p_61, l_231))))))
                    { /* block id: 118 */
                        (*l_161) = p_2028->g_238[2][0][2];
                        l_239[7][0][2] = ((*l_158) = &l_218[1]);
                    }
                    else
                    { /* block id: 122 */
                        if ((*l_162))
                            break;
                    }
                }
                for (l_210 = 7; (l_210 >= 2); l_210 -= 1)
                { /* block id: 128 */
                    int8_t l_250 = 0x06L;
                    int32_t l_254 = 0L;
                    uint16_t ****l_255 = &l_174;
                    for (l_199 = 7; (l_199 >= 2); l_199 -= 1)
                    { /* block id: 131 */
                        int8_t *l_242 = &p_2028->g_243;
                        int32_t l_247 = 0x4C002028L;
                        uint32_t *l_249[8] = {&p_2028->g_144,&p_2028->g_144,&p_2028->g_144,&p_2028->g_144,&p_2028->g_144,&p_2028->g_144,&p_2028->g_144,&p_2028->g_144};
                        uint64_t *l_251 = (void*)0;
                        uint64_t *l_252 = &p_2028->g_253;
                        int i;
                        l_244 = ((safe_div_func_int8_t_s_s(((*l_242) ^= l_231), (-10L))) || p_2028->g_208[0]);
                        l_254 = (((safe_div_func_uint64_t_u_u(((*l_252) = (((p_61 , ((l_247 , p_2028->g_155[p_61]) == (void*)0)) & ((((void*)0 != l_248) , p_61) == (l_250 = (l_249[3] == &p_2028->g_144)))) & p_2028->g_20[0][1])), p_2028->g_20[0][2])) , 0x266AFEBF34AA54C6L) , l_250);
                        (*l_162) = (((void*)0 != l_255) , l_231);
                        if (p_62)
                            continue;
                    }
                    if ((0x687F2741L == ((void*)0 == (*l_173))))
                    { /* block id: 140 */
                        int8_t *l_256 = &p_2028->g_243;
                        uint32_t *l_262 = &p_2028->g_263;
                        uint64_t *l_264[7] = {&p_2028->g_253,(void*)0,&p_2028->g_253,&p_2028->g_253,(void*)0,&p_2028->g_253,&p_2028->g_253};
                        uint32_t *l_265 = &p_2028->g_266;
                        uint8_t *l_275 = &p_2028->g_153;
                        int32_t l_276 = 0x371AC07BL;
                        uint8_t **l_283[6];
                        int32_t l_291 = 0x7908F4F7L;
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_283[i] = &l_275;
                        l_254 |= ((*l_162) = 0x7DD005BDL);
                        l_276 = ((((l_256 == l_257) , (safe_add_func_int16_t_s_s((((safe_add_func_uint64_t_u_u(((((*l_262) = l_244) == ((*l_265) = (l_264[6] != (void*)0))) && (l_244 = (--(*l_265)))), (((l_250 , &l_162) != (((*l_275) |= (safe_div_func_int64_t_s_s(p_2028->g_144, (p_2028->g_274 = (p_2028->g_253 = (l_273 ^= (safe_mod_func_uint32_t_u_u(l_250, 9L)))))))) , &p_2028->g_155[5])) != p_2028->g_20[0][1]))) ^ p_62) >= p_2028->g_20[0][2]), p_2028->g_197))) <= l_231) ^ l_276);
                        l_291 &= (l_273 == (p_2028->g_208[0] != (safe_add_func_int16_t_s_s((p_2028->g_92[l_210][(p_61 + 1)] = (-1L)), ((safe_mul_func_uint8_t_u_u(((p_2028->g_285 = (p_2028->g_284 = &p_2028->g_153)) != (void*)0), (safe_mul_func_int8_t_s_s((p_2028->g_5 | (1L != (safe_mod_func_int16_t_s_s(((l_276 = ((l_244 = ((*l_162) = l_276)) || p_61)) > l_213), (-9L))))), l_290)))) || l_231)))));
                        l_292 = (void*)0;
                    }
                    else
                    { /* block id: 160 */
                        int32_t *l_293 = &l_212;
                        l_239[7][0][2] = l_293;
                    }
                    l_215 &= l_273;
                }
                (*l_158) = ((safe_lshift_func_uint8_t_u_s((*p_2028->g_284), ((~((void*)0 != &p_62)) , (((safe_mod_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(l_213, (((p_62 | ((safe_mod_func_int64_t_s_s((((((l_210 >= ((*l_257) = ((0x68F68C922A0F0928L == ((p_2028->g_166[p_61] = (void*)0) != l_306)) >= p_62))) != p_61) , l_307) != l_308) , p_2028->g_5), p_62)) != p_62)) == 3L) | p_2028->g_208[0]))), p_61)) == 0x41L) && 1L)))) , &l_244);
                return p_61;
            }
        }
        (*l_292) = ((*l_162) = (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((((l_317[1][1][4] != ((safe_sub_func_int8_t_s_s((((0xA5E3A977B04AA711L != ((((((safe_mul_func_int16_t_s_s((+((p_2028->g_324 = l_257) == (void*)0)), ((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s((*l_292))), 3)) && ((*p_2028->g_284) = (0xE0584195L && l_328))))) | 1UL) || ((safe_unary_minus_func_uint16_t_u((((*l_180) = (safe_lshift_func_int16_t_s_u((0x622A05F7048A7D49L >= (*l_292)), 3))) , (*l_157)))) <= 0xAE28L)) | p_2028->g_243) , (void*)0) == l_332[2])) <= p_61) | 0x2BL), p_2028->g_20[0][2])) , l_317[0][0][3])) && p_62) < p_61), l_333)) == (*l_292)) , p_61), 0x63L)), (*l_292))), 0x7DL)));
        for (p_2028->g_274 = (-18); (p_2028->g_274 != 59); p_2028->g_274 = safe_add_func_uint64_t_u_u(p_2028->g_274, 5))
        { /* block id: 178 */
            int8_t l_339[7] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
            int i;
            l_339[4] &= ((((*p_2028->g_164) != l_336[6][4]) , (safe_rshift_func_uint16_t_u_s(0UL, 8))) && (~0x0BA0L));
        }
    }
    else
    { /* block id: 181 */
        int32_t *l_340[3];
        int i;
        for (i = 0; i < 3; i++)
            l_340[i] = &l_211[2][4];
        for (p_2028->g_144 = 0; (p_2028->g_144 <= 4); p_2028->g_144 += 1)
        { /* block id: 184 */
            int32_t *l_341 = &p_2028->g_25;
            int i;
            for (p_2028->g_108 = 0; (p_2028->g_108 <= 4); p_2028->g_108 += 1)
            { /* block id: 187 */
                int i, j;
                l_211[p_2028->g_144][p_2028->g_108] = 1L;
                if (l_211[p_2028->g_108][p_2028->g_108])
                    break;
                (*l_158) = l_340[2];
                (*l_158) = l_341;
            }
            for (p_2028->g_274 = 0; (p_2028->g_274 <= 4); p_2028->g_274 += 1)
            { /* block id: 195 */
                int i, j;
                (*l_162) |= l_211[p_2028->g_144][p_2028->g_144];
            }
            if (p_2028->g_208[(p_2028->g_144 + 3)])
                continue;
        }
    }
    return p_62;
}


/* ------------------------------------------ */
/* 
 * reads : p_2028->g_86 p_2028->g_25 p_2028->g_92 p_2028->g_24 p_2028->g_5 p_2028->g_125 p_2028->g_144
 * writes: p_2028->g_108 p_2028->g_86 p_2028->g_144 p_2028->g_153 p_2028->g_20
 */
int32_t ** func_67(int32_t ** p_68, uint32_t  p_69, int32_t * p_70, int32_t  p_71, struct S0 * p_2028)
{ /* block id: 46 */
    int8_t l_116 = 4L;
    int32_t *l_117 = &p_2028->g_24;
    int8_t l_122 = 0x16L;
    uint16_t *l_123 = &p_2028->g_108;
    int16_t l_124 = (-1L);
    int32_t l_126 = 0x271D37E9L;
    int64_t l_142 = 0L;
    l_126 |= (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0x97L, ((safe_mod_func_int32_t_s_s((l_116 , (l_117 == (((((*p_68) != ((((((~(((safe_div_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(l_122, (((*l_123) = (l_123 != (void*)0)) , 0x507FL))) , &l_117) == &l_117), p_2028->g_25)) != p_2028->g_92[4][2]) , p_2028->g_24)) == p_2028->g_5) <= 0x2AB5L) ^ l_124) & 0x06C70737C935D89AL) , (void*)0)) & (*l_117)) , (*l_117)) , (void*)0))), 0x59DD266CL)) && 0x9ADAB8F038425995L))), p_2028->g_125));
    for (l_124 = 0; (l_124 <= (-11)); l_124--)
    { /* block id: 51 */
        uint16_t l_130 = 0xB85DL;
        int16_t *l_133 = &l_124;
        uint32_t *l_143 = &p_2028->g_144;
        uint8_t *l_152 = &p_2028->g_153;
        int8_t *l_154 = &l_116;
        int32_t *l_156 = &p_2028->g_20[0][1];
        for (p_2028->g_108 = 0; (p_2028->g_108 <= 0); p_2028->g_108 += 1)
        { /* block id: 54 */
            int32_t *l_129[6] = {&p_2028->g_20[p_2028->g_108][(p_2028->g_108 + 2)],&p_2028->g_20[p_2028->g_108][(p_2028->g_108 + 2)],&p_2028->g_20[p_2028->g_108][(p_2028->g_108 + 2)],&p_2028->g_20[p_2028->g_108][(p_2028->g_108 + 2)],&p_2028->g_20[p_2028->g_108][(p_2028->g_108 + 2)],&p_2028->g_20[p_2028->g_108][(p_2028->g_108 + 2)]};
            int i, j;
            l_130 = ((void*)0 != &p_2028->g_20[p_2028->g_108][(p_2028->g_108 + 2)]);
            return &p_2028->g_86[4][0];
        }
        if ((*l_117))
            continue;
        for (l_130 = 0; l_130 < 8; l_130 += 1)
        {
            for (l_116 = 0; l_116 < 1; l_116 += 1)
            {
                p_2028->g_86[l_130][l_116] = &p_2028->g_24;
            }
        }
        (*l_156) = ((safe_mul_func_int16_t_s_s(((&l_124 == l_133) | (safe_div_func_uint32_t_u_u((((safe_div_func_int8_t_s_s(((*l_154) = ((*p_70) < (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((l_142 == (((++(*l_143)) , (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((((safe_unary_minus_func_uint64_t_u(0x2F0D76A68AF11E84L)) , ((*l_152) = 0xE8L)) >= p_71), (+p_69))) , 246UL), 0x50L))) == (*l_117))) != 0x59DDBCA4C7201BE5L), 0x241AL)), (*l_117))))), 0xE0L)) < p_69) , p_69), 7UL))), 0x026EL)) | l_130);
    }
    return &p_2028->g_86[4][0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_72(int16_t  p_73, uint8_t  p_74, int8_t  p_75, int32_t ** p_76, struct S0 * p_2028)
{ /* block id: 44 */
    return &p_2028->g_86[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_2028->g_5 p_2028->g_20
 * writes: p_2028->g_92 p_2028->g_108 p_2028->g_20
 */
int32_t ** func_81(int32_t ** p_82, uint64_t  p_83, int32_t * p_84, struct S0 * p_2028)
{ /* block id: 35 */
    int32_t *l_90 = &p_2028->g_5;
    int32_t **l_91[9][8] = {{&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90,&p_2028->g_86[4][0],&l_90,&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90},{&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90,&p_2028->g_86[4][0],&l_90,&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90},{&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90,&p_2028->g_86[4][0],&l_90,&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90},{&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90,&p_2028->g_86[4][0],&l_90,&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90},{&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90,&p_2028->g_86[4][0],&l_90,&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90},{&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90,&p_2028->g_86[4][0],&l_90,&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90},{&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90,&p_2028->g_86[4][0],&l_90,&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90},{&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90,&p_2028->g_86[4][0],&l_90,&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90},{&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90,&p_2028->g_86[4][0],&l_90,&p_2028->g_86[6][0],&p_2028->g_86[4][0],&l_90}};
    uint64_t l_93[8] = {18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL};
    int32_t *l_98 = &p_2028->g_5;
    int16_t *l_99[10] = {&p_2028->g_92[8][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4],&p_2028->g_92[8][4]};
    int32_t *l_104 = &p_2028->g_25;
    int32_t *l_105 = &p_2028->g_20[0][1];
    uint16_t *l_106 = (void*)0;
    uint16_t *l_107 = &p_2028->g_108;
    int32_t **l_109 = (void*)0;
    int i, j;
    p_84 = l_90;
    l_91[3][4] = &p_84;
    l_93[3]--;
    (*l_105) = (((*l_107) = (safe_rshift_func_int16_t_s_s((((p_84 = (void*)0) == l_98) , (p_2028->g_92[0][6] = (((+(*l_98)) , (p_2028->g_5 , (p_83 != 0x3582EBD2L))) ^ (p_83 & (+0xAACAL))))), ((((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((l_104 != l_105), 1)), (-9L))) , p_83) == p_2028->g_20[0][1]) , p_2028->g_20[0][1])))) , (*l_98));
    return l_109;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2029;
    struct S0* p_2028 = &c_2029;
    struct S0 c_2030 = {
        0x5B7CEFA9L, // p_2028->g_5
        {{0x280BFE73L,0x280BFE73L,0x280BFE73L}}, // p_2028->g_20
        1L, // p_2028->g_24
        1L, // p_2028->g_25
        (void*)0, // p_2028->g_79
        {{&p_2028->g_25},{&p_2028->g_25},{&p_2028->g_25},{&p_2028->g_25},{&p_2028->g_25},{&p_2028->g_25},{&p_2028->g_25},{&p_2028->g_25}}, // p_2028->g_86
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_2028->g_85
        {{0x62D8L,0x62D8L,(-2L),7L,2L,7L,(-2L),0x62D8L},{0x62D8L,0x62D8L,(-2L),7L,2L,7L,(-2L),0x62D8L},{0x62D8L,0x62D8L,(-2L),7L,2L,7L,(-2L),0x62D8L},{0x62D8L,0x62D8L,(-2L),7L,2L,7L,(-2L),0x62D8L},{0x62D8L,0x62D8L,(-2L),7L,2L,7L,(-2L),0x62D8L},{0x62D8L,0x62D8L,(-2L),7L,2L,7L,(-2L),0x62D8L},{0x62D8L,0x62D8L,(-2L),7L,2L,7L,(-2L),0x62D8L},{0x62D8L,0x62D8L,(-2L),7L,2L,7L,(-2L),0x62D8L},{0x62D8L,0x62D8L,(-2L),7L,2L,7L,(-2L),0x62D8L}}, // p_2028->g_92
        6UL, // p_2028->g_108
        0x11L, // p_2028->g_125
        5UL, // p_2028->g_144
        0x9DL, // p_2028->g_153
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_2028->g_155
        {&p_2028->g_108,&p_2028->g_108,&p_2028->g_108,&p_2028->g_108,&p_2028->g_108,&p_2028->g_108,&p_2028->g_108,&p_2028->g_108,&p_2028->g_108,&p_2028->g_108}, // p_2028->g_166
        &p_2028->g_166[3], // p_2028->g_165
        &p_2028->g_165, // p_2028->g_164
        0xAEB3L, // p_2028->g_197
        {1L,1L,1L,1L,1L,1L,1L,1L}, // p_2028->g_208
        {{{(void*)0,&p_2028->g_24,&p_2028->g_25},{(void*)0,&p_2028->g_24,&p_2028->g_25},{(void*)0,&p_2028->g_24,&p_2028->g_25}},{{(void*)0,&p_2028->g_24,&p_2028->g_25},{(void*)0,&p_2028->g_24,&p_2028->g_25},{(void*)0,&p_2028->g_24,&p_2028->g_25}},{{(void*)0,&p_2028->g_24,&p_2028->g_25},{(void*)0,&p_2028->g_24,&p_2028->g_25},{(void*)0,&p_2028->g_24,&p_2028->g_25}},{{(void*)0,&p_2028->g_24,&p_2028->g_25},{(void*)0,&p_2028->g_24,&p_2028->g_25},{(void*)0,&p_2028->g_24,&p_2028->g_25}}}, // p_2028->g_238
        0x10L, // p_2028->g_243
        18446744073709551615UL, // p_2028->g_253
        0xB304A777L, // p_2028->g_263
        7UL, // p_2028->g_266
        18446744073709551606UL, // p_2028->g_274
        &p_2028->g_153, // p_2028->g_284
        &p_2028->g_153, // p_2028->g_285
        (void*)0, // p_2028->g_324
        0x6B8F3C74L, // p_2028->g_343
        &p_2028->g_25, // p_2028->g_350
        &p_2028->g_86[4][0], // p_2028->g_374
        1L, // p_2028->g_419
        (void*)0, // p_2028->g_483
        {0x27L,1L,0x27L,0x27L,1L,0x27L,0x27L}, // p_2028->g_491
        0x5692L, // p_2028->g_568
        &p_2028->g_284, // p_2028->g_639
        {&p_2028->g_20[0][1],&p_2028->g_25,&p_2028->g_20[0][1],&p_2028->g_20[0][1],&p_2028->g_25,&p_2028->g_20[0][1],&p_2028->g_20[0][1],&p_2028->g_25}, // p_2028->g_645
        1L, // p_2028->g_673
        &p_2028->g_20[0][1], // p_2028->g_675
        &p_2028->g_165, // p_2028->g_683
        &p_2028->g_673, // p_2028->g_708
        &p_2028->g_343, // p_2028->g_726
        {0xD7B12CD2L,0xD7B12CD2L,0xD7B12CD2L,0xD7B12CD2L,0xD7B12CD2L,0xD7B12CD2L}, // p_2028->g_745
        0x1FBAE80EL, // p_2028->g_794
        0x2F36245CL, // p_2028->g_807
        &p_2028->g_20[0][1], // p_2028->g_812
        &p_2028->g_20[0][2], // p_2028->g_851
        0x80ADE639L, // p_2028->g_857
        {{{&p_2028->g_92[2][5],&p_2028->g_92[8][4],&p_2028->g_92[2][5],&p_2028->g_92[2][5],&p_2028->g_92[8][4],&p_2028->g_92[2][5],&p_2028->g_92[2][5]},{&p_2028->g_92[2][5],&p_2028->g_92[8][4],&p_2028->g_92[2][5],&p_2028->g_92[2][5],&p_2028->g_92[8][4],&p_2028->g_92[2][5],&p_2028->g_92[2][5]},{&p_2028->g_92[2][5],&p_2028->g_92[8][4],&p_2028->g_92[2][5],&p_2028->g_92[2][5],&p_2028->g_92[8][4],&p_2028->g_92[2][5],&p_2028->g_92[2][5]},{&p_2028->g_92[2][5],&p_2028->g_92[8][4],&p_2028->g_92[2][5],&p_2028->g_92[2][5],&p_2028->g_92[8][4],&p_2028->g_92[2][5],&p_2028->g_92[2][5]},{&p_2028->g_92[2][5],&p_2028->g_92[8][4],&p_2028->g_92[2][5],&p_2028->g_92[2][5],&p_2028->g_92[8][4],&p_2028->g_92[2][5],&p_2028->g_92[2][5]}}}, // p_2028->g_870
        {{{(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0},{(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0},{(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0},{(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0},{(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0},{(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0},{(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0,&p_2028->g_870[0][0][0],(void*)0,&p_2028->g_870[0][2][4],(void*)0}}}, // p_2028->g_869
        {&p_2028->g_238[0][0][2],&p_2028->g_238[0][0][2],&p_2028->g_238[0][0][2],&p_2028->g_238[0][0][2],&p_2028->g_238[0][0][2],&p_2028->g_238[0][0][2],&p_2028->g_238[0][0][2],&p_2028->g_238[0][0][2],&p_2028->g_238[0][0][2]}, // p_2028->g_873
        {&p_2028->g_86[4][0],&p_2028->g_86[4][0],&p_2028->g_86[4][0]}, // p_2028->g_874
        &p_2028->g_851, // p_2028->g_875
        0UL, // p_2028->g_881
        &p_2028->g_86[4][0], // p_2028->g_884
        0x255030B7L, // p_2028->g_906
        {{{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L}},{{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L}},{{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L}},{{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L}},{{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L}},{{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L}},{{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L},{0x3591C7089F316ACCL,1L,0x407C134DEDDA205AL,3L}}}, // p_2028->g_1081
        (void*)0, // p_2028->g_1148
        &p_2028->g_645[4], // p_2028->g_1149
        {{{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L}},{{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L}},{{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L}},{{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L}},{{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L},{0x6933L,0x36FDL,0x1FC0L,0xD0F8L,65528UL,0x8875L}}}, // p_2028->g_1164
        &p_2028->g_851, // p_2028->g_1165
        0x0DFAE6C3L, // p_2028->g_1200
        (void*)0, // p_2028->g_1275
        &p_2028->g_1275, // p_2028->g_1274
        &p_2028->g_869[0][2][8], // p_2028->g_1277
        0x52L, // p_2028->g_1288
        {{{0x01BDED0DL,0x53F38B8FL,1L,0x28F573DDL,(-1L),0x28F573DDL,1L},{0x01BDED0DL,0x53F38B8FL,1L,0x28F573DDL,(-1L),0x28F573DDL,1L},{0x01BDED0DL,0x53F38B8FL,1L,0x28F573DDL,(-1L),0x28F573DDL,1L},{0x01BDED0DL,0x53F38B8FL,1L,0x28F573DDL,(-1L),0x28F573DDL,1L},{0x01BDED0DL,0x53F38B8FL,1L,0x28F573DDL,(-1L),0x28F573DDL,1L},{0x01BDED0DL,0x53F38B8FL,1L,0x28F573DDL,(-1L),0x28F573DDL,1L},{0x01BDED0DL,0x53F38B8FL,1L,0x28F573DDL,(-1L),0x28F573DDL,1L},{0x01BDED0DL,0x53F38B8FL,1L,0x28F573DDL,(-1L),0x28F573DDL,1L}}}, // p_2028->g_1291
        0x00L, // p_2028->g_1300
        0x6BF1L, // p_2028->g_1301
        0L, // p_2028->g_1319
        (-5L), // p_2028->g_1339
        0L, // p_2028->g_1351
        &p_2028->g_266, // p_2028->g_1372
        &p_2028->g_1372, // p_2028->g_1371
        0x401A8862L, // p_2028->g_1407
        &p_2028->g_208[0], // p_2028->g_1409
        &p_2028->g_1409, // p_2028->g_1408
        {{{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408}},{{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408}},{{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408}},{{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408}},{{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408}},{{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408}},{{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408}},{{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408}},{{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408}},{{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408},{&p_2028->g_1408,&p_2028->g_1408,&p_2028->g_1408}}}, // p_2028->g_1410
        4294967287UL, // p_2028->g_1413
        (void*)0, // p_2028->g_1434
        &p_2028->g_881, // p_2028->g_1440
        {{&p_2028->g_1200,&p_2028->g_1200,&p_2028->g_1200,&p_2028->g_1200,&p_2028->g_1200}}, // p_2028->g_1466
        {&p_2028->g_870[0][2][4],&p_2028->g_870[0][2][4],&p_2028->g_870[0][2][4]}, // p_2028->g_1479
        &p_2028->g_1479[2], // p_2028->g_1478
        &p_2028->g_238[1][1][0], // p_2028->g_1497
        &p_2028->g_86[4][0], // p_2028->g_1498
        (void*)0, // p_2028->g_1511
        18446744073709551612UL, // p_2028->g_1538
        (void*)0, // p_2028->g_1550
        (-1L), // p_2028->g_1562
        0x95L, // p_2028->g_1584
        &p_2028->g_708, // p_2028->g_1587
        {{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL}}, // p_2028->g_1591
        &p_2028->g_238[1][2][0], // p_2028->g_1618
        4UL, // p_2028->g_1639
        {0x2051L,0x2051L,0x2051L,0x2051L,0x2051L,0x2051L,0x2051L,0x2051L}, // p_2028->g_1644
        &p_2028->g_851, // p_2028->g_1692
        &p_2028->g_197, // p_2028->g_1734
        &p_2028->g_24, // p_2028->g_1756
        &p_2028->g_144, // p_2028->g_1793
        &p_2028->g_1793, // p_2028->g_1792
        0UL, // p_2028->g_1824
        {&p_2028->g_708,&p_2028->g_708,&p_2028->g_708,&p_2028->g_708,&p_2028->g_708,&p_2028->g_708}, // p_2028->g_1877
        {&p_2028->g_1877[4]}, // p_2028->g_1876
        &p_2028->g_1876[0], // p_2028->g_1875
        {&p_2028->g_1875,&p_2028->g_1875,&p_2028->g_1875,&p_2028->g_1875,&p_2028->g_1875,&p_2028->g_1875}, // p_2028->g_1874
        0UL, // p_2028->g_1888
        8L, // p_2028->g_1921
        {{{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL}},{{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL}},{{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL}},{{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL}},{{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL}},{{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL}},{{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL}},{{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL},{7UL,4294967287UL}}}, // p_2028->g_1941
        &p_2028->g_350, // p_2028->g_1964
        &p_2028->g_1538, // p_2028->g_1982
    };
    c_2029 = c_2030;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2028);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2028->g_5, "p_2028->g_5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_2028->g_20[i][j], "p_2028->g_20[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2028->g_24, "p_2028->g_24", print_hash_value);
    transparent_crc(p_2028->g_25, "p_2028->g_25", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_2028->g_92[i][j], "p_2028->g_92[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2028->g_108, "p_2028->g_108", print_hash_value);
    transparent_crc(p_2028->g_125, "p_2028->g_125", print_hash_value);
    transparent_crc(p_2028->g_144, "p_2028->g_144", print_hash_value);
    transparent_crc(p_2028->g_153, "p_2028->g_153", print_hash_value);
    transparent_crc(p_2028->g_197, "p_2028->g_197", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2028->g_208[i], "p_2028->g_208[i]", print_hash_value);

    }
    transparent_crc(p_2028->g_243, "p_2028->g_243", print_hash_value);
    transparent_crc(p_2028->g_253, "p_2028->g_253", print_hash_value);
    transparent_crc(p_2028->g_263, "p_2028->g_263", print_hash_value);
    transparent_crc(p_2028->g_266, "p_2028->g_266", print_hash_value);
    transparent_crc(p_2028->g_274, "p_2028->g_274", print_hash_value);
    transparent_crc(p_2028->g_343, "p_2028->g_343", print_hash_value);
    transparent_crc(p_2028->g_419, "p_2028->g_419", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2028->g_491[i], "p_2028->g_491[i]", print_hash_value);

    }
    transparent_crc(p_2028->g_568, "p_2028->g_568", print_hash_value);
    transparent_crc(p_2028->g_673, "p_2028->g_673", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2028->g_745[i], "p_2028->g_745[i]", print_hash_value);

    }
    transparent_crc(p_2028->g_794, "p_2028->g_794", print_hash_value);
    transparent_crc(p_2028->g_807, "p_2028->g_807", print_hash_value);
    transparent_crc(p_2028->g_857, "p_2028->g_857", print_hash_value);
    transparent_crc(p_2028->g_881, "p_2028->g_881", print_hash_value);
    transparent_crc(p_2028->g_906, "p_2028->g_906", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_2028->g_1081[i][j][k], "p_2028->g_1081[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_2028->g_1164[i][j][k], "p_2028->g_1164[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2028->g_1200, "p_2028->g_1200", print_hash_value);
    transparent_crc(p_2028->g_1288, "p_2028->g_1288", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_2028->g_1291[i][j][k], "p_2028->g_1291[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2028->g_1300, "p_2028->g_1300", print_hash_value);
    transparent_crc(p_2028->g_1301, "p_2028->g_1301", print_hash_value);
    transparent_crc(p_2028->g_1319, "p_2028->g_1319", print_hash_value);
    transparent_crc(p_2028->g_1339, "p_2028->g_1339", print_hash_value);
    transparent_crc(p_2028->g_1351, "p_2028->g_1351", print_hash_value);
    transparent_crc(p_2028->g_1407, "p_2028->g_1407", print_hash_value);
    transparent_crc(p_2028->g_1413, "p_2028->g_1413", print_hash_value);
    transparent_crc(p_2028->g_1538, "p_2028->g_1538", print_hash_value);
    transparent_crc(p_2028->g_1562, "p_2028->g_1562", print_hash_value);
    transparent_crc(p_2028->g_1584, "p_2028->g_1584", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_2028->g_1591[i][j], "p_2028->g_1591[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2028->g_1639, "p_2028->g_1639", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2028->g_1644[i], "p_2028->g_1644[i]", print_hash_value);

    }
    transparent_crc(p_2028->g_1824, "p_2028->g_1824", print_hash_value);
    transparent_crc(p_2028->g_1888, "p_2028->g_1888", print_hash_value);
    transparent_crc(p_2028->g_1921, "p_2028->g_1921", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_2028->g_1941[i][j][k], "p_2028->g_1941[i][j][k]", print_hash_value);

            }
        }
    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
